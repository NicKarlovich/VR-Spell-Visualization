using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class DotLogic : MonoBehaviour
{
    public float distanceFromUser = 5.0f;
    public GameObject rightHandController;
    public GameObject selectionDot;
    public GameObject selectionCube;

    public GameObject spellRepresentation;

    const float TURN_THRESH = 70f;

    public GameObject headset;

    public LineRenderer laserPointer;
    float maxVelocity = 6.0f;
    Transform grabPoint;

    bool pointing;

    public bool facingNorth = true;
    public bool facingSouth = false;
    public bool facingEast = false;
    public bool facingWest = false;

    Vector3 sideToSide;
    Vector3 forwardAndback;

    float xStick;
    float yStick;

    public InputActionProperty moveAction;
    public InputActionProperty grabAction;
    public InputActionProperty triggerAction;
    public InputActionProperty BButton;
    public InputActionProperty AButton;

    bool triggerDown = false;
    float triggerPull;
    float runningTimer;
    int continuousTilesMoved = 0;
    float timingFactor = .4f;

    bool yAxisInUse = false;
    bool trackingADown = false;
    bool trackingBDown = false;

    float vertButtonPress;
    float runningVertTimer;
    int vertContinuousTilesMoved = 0;

    public SpellSelectionUI spellSelectionScript;
    bool isAvatarMode;

    // Start is called before the first frame update
    void Start()
    {
        sideToSide = Vector3.zero;
        forwardAndback = Vector3.zero;

        pointing = false;
        laserPointer.enabled = true;
        selectionDot.GetComponent<MeshRenderer>().enabled = false;
        moveAction.action.performed += Move;
        grabAction.action.performed += Grab;
        grabAction.action.canceled += Release;
        triggerAction.action.performed += PreciseGrab;
        triggerAction.action.canceled += PreciseRelease;

        AButton.action.performed += ADown;
        AButton.action.canceled += AUp;
        BButton.action.performed += BDown;
        BButton.action.canceled += BUp;

        grabPoint = new GameObject().transform;
        grabPoint.localPosition = new Vector3(0, 0, 0);
        selectionDot.transform.localPosition = new Vector3(0, 0, 0);
        grabPoint.name = "Grab Point";
        grabPoint.parent = this.transform;
        selectionDot.transform.parent = grabPoint;
        selectionDot.transform.localPosition = new Vector3(0, 0, 0);
        selectionDot.GetComponent<MeshRenderer>().enabled = false;
    }

    private void OnDestroy()
    {
        moveAction.action.performed -= Move;
        grabAction.action.performed -= Grab;
        grabAction.action.canceled -= Release;
        triggerAction.action.performed -= PreciseGrab;
        triggerAction.action.canceled -= PreciseRelease;

        AButton.action.performed -= ADown;
        AButton.action.canceled -= AUp;
        BButton.action.performed -= BDown;
        BButton.action.canceled -= BUp;
    }

    // Update is called once per frame
    void Update()
    {
        isAvatarMode = spellSelectionScript.isAvatarMode;
        //Debug.Log(xStick);
        //Debug.Log(yStick);
        //Debug.Log(headset.transform.eulerAngles.y);
        //rotation angle
        float rotA = headset.transform.eulerAngles.y;
        /*
         * North is +
         * East is  +x
         * South is -x
         * West is  -z
         */

        if(facingNorth)
        {
            facingNorth = (rotA >= (360 - TURN_THRESH) || rotA <= (0 + TURN_THRESH));
        } else if (facingEast)
        {
            facingEast = (rotA >= (90 - TURN_THRESH) && rotA <= (90 + TURN_THRESH));
        } else if (facingSouth)
        {
            facingSouth = (rotA >= (180 - TURN_THRESH) && rotA <= (180 + TURN_THRESH));
        } else if (facingWest)
        {
            facingWest = (rotA >= (270 - TURN_THRESH) && rotA <= (270 + TURN_THRESH));
        } else
        {
            //Debug.Log("Oof, somehow got here, shouldn't be here");
        }


        if (!(facingNorth || facingEast || facingSouth || facingWest))
        {
            // went outside boundries of direction we were facing, now determine where the user should be facing
            //Debug.Log((rotA <= 225 && rotA >= 135));
            Vector3 curr = spellRepresentation.transform.localEulerAngles;
            if(rotA <= 45 || rotA >= 315)
            {
                facingNorth = true;
                spellRepresentation.transform.localEulerAngles = new Vector3(curr.x, 0, curr.z);
            }
            if (rotA <= 135 && rotA >= 45)
            {
                facingEast = true;
                spellRepresentation.transform.localEulerAngles = new Vector3(curr.x, 90, curr.z);
            }
            if (rotA <= 225 && rotA >= 135)
            {
                facingSouth = true;
                spellRepresentation.transform.localEulerAngles = new Vector3(curr.x, 180, curr.z);
            }
            if (rotA <= 315 && rotA >= 225)
            {
                facingWest = true;
                spellRepresentation.transform.localEulerAngles = new Vector3(curr.x, 270, curr.z);
            }
        }

        if(!isAvatarMode)
        {
            selectionCube.GetComponent<MeshRenderer>().enabled = true;
            //selectionDot.GetComponent<MeshRenderer>().enabled = true;
            if (pointing)
            {
                selectionDot.GetComponent<MeshRenderer>().enabled = laserPointer.enabled;
                grabPoint.localPosition = new Vector3(0, 0, grabPoint.localPosition.z);
                if (laserPointer.enabled)
                {
                    laserPointer.SetPosition(1, new Vector3(0, 0, grabPoint.localPosition.z));
                }

                Vector3 grabPos = selectionDot.transform.TransformPoint(selectionDot.transform.localPosition);
                //Debug.Log(grabPos);

                float cubeX = Mathf.Ceil(grabPos.x) - 0.5f;
                float cubeY = Mathf.Ceil(grabPos.y) - 0.5f;
                float cubeZ = Mathf.Ceil(grabPos.z) - 0.5f;

                selectionCube.transform.position = new Vector3(cubeX, cubeY, cubeZ);
            }
            else
            {
                if (yAxisInUse)
                {
                    runningVertTimer = Time.time;
                    if (runningVertTimer - vertButtonPress > timingFactor)
                    {
                        vertButtonPress = runningVertTimer;
                        if (trackingADown)
                        {
                            AMovement();
                        }
                        if (trackingBDown)
                        {
                            BMovement();
                        }
                        vertContinuousTilesMoved++;
                        if (vertContinuousTilesMoved == 2)
                        {
                            timingFactor = 0.2f;
                        }
                        if (vertContinuousTilesMoved == 3)
                        {
                            timingFactor = 0.17f;
                        }
                        if (vertContinuousTilesMoved == 4)
                        {
                            timingFactor = 0.13f;
                        }
                        if (vertContinuousTilesMoved == 7)
                        {
                            timingFactor = 0.1f;
                        }
                    }
                }
                if (triggerDown)
                {
                    runningTimer = Time.time;
                    if (runningTimer - triggerPull > timingFactor)
                    {
                        triggerPull = runningTimer;
                        doMovement();
                        continuousTilesMoved++;
                        if (continuousTilesMoved == 2)
                        {
                            timingFactor = 0.2f;
                        }
                        if (continuousTilesMoved == 3)
                        {
                            timingFactor = 0.17f;
                        }
                        if (continuousTilesMoved == 4)
                        {
                            timingFactor = 0.13f;
                        }
                        if (continuousTilesMoved == 7)
                        {
                            timingFactor = 0.1f;
                        }
                    }
                }
            }
        } else
        {
            selectionCube.GetComponent<MeshRenderer>().enabled = false;
            selectionDot.GetComponent<MeshRenderer>().enabled = false;
        }
    }

    public void AMovement()
    {
        if(!isAvatarMode)
        {
            Vector3 currentCube = selectionCube.transform.position;
            selectionCube.transform.position = currentCube + Vector3.down;
        }
        
    }

    public void ADown(InputAction.CallbackContext context)
    {
        if (!isAvatarMode)
        {
            if (!yAxisInUse)
            {
                trackingADown = true;
                yAxisInUse = true;
                AMovement();
                vertContinuousTilesMoved = 0;
                timingFactor = .4f;
                vertButtonPress = Time.time;
                runningVertTimer = Time.time;
            }
        }
    }

    public void AUp(InputAction.CallbackContext context)
    {
        if (!isAvatarMode)
        {
            if (trackingADown)
            {
                yAxisInUse = false;
                trackingADown = false;
            }
        }
    }

    public void BMovement()
    {
        if (!isAvatarMode)
        {
            Vector3 currentCube = selectionCube.transform.position;
            selectionCube.transform.position = currentCube + Vector3.up;
        }
    }

    public void BDown(InputAction.CallbackContext context)
    {
        if (!isAvatarMode)
        {
            if (!yAxisInUse)
            {
                trackingBDown = true;
                yAxisInUse = true;
                BMovement();
                vertContinuousTilesMoved = 0;
                timingFactor = .4f;
                vertButtonPress = Time.time;
                runningVertTimer = Time.time;
            }
        }
    }

    public void BUp(InputAction.CallbackContext context)
    {
        if (!isAvatarMode)
        {
            if (trackingBDown)
            {
                yAxisInUse = false;
                trackingBDown = false;
            }
        }
    }

    public void Move(InputAction.CallbackContext context)
    {
        if (!isAvatarMode)
        {
            if (pointing)
            {
                Vector2 Mov = Time.deltaTime * maxVelocity * context.action.ReadValue<Vector2>();

                grabPoint.transform.Translate(0, 0, -Mov.y);
                if (grabPoint.localPosition.z < 0.25)
                {
                    grabPoint.localPosition = new Vector3(0, 0, 0.25f);
                }
            }
            else
            {
                Vector2 thumbstick = context.action.ReadValue<Vector2>();
                xStick = thumbstick.x;
                yStick = thumbstick.y;
            }
        }
    }
    public void doMovement()
    {
        if (facingNorth)
        {
            sideToSide = new Vector3(1, 0, 0);
            forwardAndback = new Vector3(0, 0, 1);
        }
        if (facingSouth)
        {
            sideToSide = new Vector3(-1, 0, 0);
            forwardAndback = new Vector3(0, 0, -1);
        }
        if (facingEast)
        {
            sideToSide = new Vector3(0, 0, -1);
            forwardAndback = new Vector3(1, 0, 0);
        }
        if (facingWest)
        {
            sideToSide = new Vector3(0, 0, 1);
            forwardAndback = new Vector3(-1, 0, 0);
        }

        //Debug.Log(xStick);
        //Debug.Log(yStick);
        Vector3 currentCube = selectionCube.transform.position;
        if (xStick > 0.8)
        {
            selectionCube.transform.position = currentCube + sideToSide;
        }
        if (xStick < -0.8)
        {
            selectionCube.transform.position = currentCube - sideToSide;
        }
        if (yStick > 0.8)
        {
            selectionCube.transform.position = currentCube + forwardAndback;
        }
        if (yStick < -0.8)
        {
            selectionCube.transform.position = currentCube - forwardAndback;
        }
    }

    public void PreciseGrab(InputAction.CallbackContext context)
    {
        continuousTilesMoved = 0;
        timingFactor = .4f;
        triggerDown = true;
        triggerPull = Time.time;
        runningTimer = Time.time;
        /*
        Debug.Log("North: " + facingNorth);
        Debug.Log("East: " + facingEast);
        Debug.Log("South: " + facingSouth);
        Debug.Log("West: " + facingWest);
        */
        doMovement();
        //Debug.Log("precise Grab");
    }

    public void PreciseRelease(InputAction.CallbackContext context)
    {
        //don't really care when this happens, it'll happen before preciseGrab again but we don't care when.
        //Debug.Log("precise Release");
        triggerDown = false;
    }


    public void Grab(InputAction.CallbackContext context)
    {
        //float gripped = context.action.ReadValue<float>();
        //Debug.Log(gripped);
      //  Debug.Log("grab");
        pointing = true;
    }

    public void Release(InputAction.CallbackContext context)
    {
        /*float gripped = context.action.ReadValue<float>();
        Debug.Log(gripped);
        */
      //  Debug.Log("release");
        pointing = false;
    }
}
