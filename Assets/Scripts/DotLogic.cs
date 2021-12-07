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

    public LineRenderer laserPointer;
    float maxVelocity = 6.0f;
    Transform grabPoint;

    public InputActionProperty moveAction;

    // Start is called before the first frame update
    void Start()
    {
        laserPointer.enabled = true;
        selectionDot.GetComponent<MeshRenderer>().enabled = false;
        moveAction.action.performed += Move;

        grabPoint = new GameObject().transform;
        grabPoint.localPosition = new Vector3(0, 0, 0);
        selectionDot.transform.localPosition = new Vector3(0, 0, 0);
        grabPoint.name = "Grab Point";
        grabPoint.parent = this.transform;
        selectionDot.transform.parent = grabPoint;
    }

    private void OnDestroy()
    {
        moveAction.action.performed -= Move;
    }

    // Update is called once per frame
    void Update()
    {
        selectionDot.GetComponent<MeshRenderer>().enabled = laserPointer.enabled;
        grabPoint.localPosition = new Vector3(0, 0, grabPoint.localPosition.z);
        if (laserPointer.enabled)
        {
            laserPointer.SetPosition(1, new Vector3(0, 0, grabPoint.localPosition.z));
        }

        Vector3 grabPos = selectionDot.transform.TransformPoint(selectionDot.transform.localPosition);
        Debug.Log(grabPos);

        float cubeX = Mathf.Ceil(grabPos.x) - 0.5f;
        float cubeY = Mathf.Ceil(grabPos.y) - 0.5f;
        float cubeZ = Mathf.Ceil(grabPos.z) - 0.5f;

        selectionCube.transform.position = new Vector3(cubeX, cubeY, cubeZ);
    }

    public void Move(InputAction.CallbackContext context)
    {
        Vector2 xMov = Time.deltaTime * maxVelocity * context.action.ReadValue<Vector2>();

        grabPoint.transform.Translate(0, 0, -xMov.y);
        if (grabPoint.localPosition.z < 0.25)
        {
            grabPoint.localPosition = new Vector3(0, 0, 0.25f);
        }

        //Debug.Log("test?");
        //Debug.Log(context.action.ReadValue<Vector2>());
        //Debug.Log(xMov.y);
    }
}
