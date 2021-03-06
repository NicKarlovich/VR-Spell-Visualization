using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.InputSystem;

public class CustomSpellsInteractor : MonoBehaviour
{
    public bool creatingSpells = false;
    public Vector3 point1 = Vector3.zero;
    public Vector3 point2 = Vector3.zero;

    LineRenderer lineRenderer;
    public GameObject point1Sphere;
    public GameObject point2Sphere;

    public SpellSelectionUI spellSelectScript;
    public DotLogic directionScript;

    public GameObject spellRepresentation;

    public InputActionProperty gripAction;

    public InputActionProperty nextShapeAction;
    public InputActionProperty selectAction;

    public Material color1; //red fire
    public Material color2; //yellow lightning
    public Material color3; //green eldritch / grass
    public Material color4; //blue water/ice
    public Material color5; //purple fairy
    public Material color6; //black necrotic / default

    public Spell eldritchStorm;
    public Spell faerieFire;
    public Spell fireBall;

    public Spell customSpell1;
    public Spell customSpell2;
    public Spell customSpell3;
    //public Text assistText; //text for UI to help what's going on :)
    Spell currentCustomSpell;
    int whatCustomSpell = 0;

    int spellCreationStage;
    string spellType;
    bool isAvatarMode;

    public GameObject RedDot;
    public GameObject YellowDot;
    public GameObject GreenDot;
    public GameObject BlueDot;
    public GameObject PurpleDot;
    public GameObject BlackDot;

    public GameObject cubeRep;
    public GameObject sphereRep;
    public GameObject cylinderRep;

    public GameObject widthRep;
    public GameObject heightRep;
    public GameObject depthRep;


    // Start is called before the first frame update
    void Start()
    {
        creatingSpells = false;
        if (!creatingSpells)
        {
            //assistText = GetComponentInChildren<Canvas>().GetComponentInChildren<Text>(); // gives us text attatched to canvas
            //assistText.text = "in Avatar Mode!";
        } else
        {
            
        }
        // taken from assignment 4
        lineRenderer = new GameObject("Line").AddComponent<LineRenderer>();
        lineRenderer.startColor = Color.white;
        lineRenderer.endColor = Color.white;
        lineRenderer.startWidth = 0.01f;
        lineRenderer.endWidth = 0.01f;
        lineRenderer.positionCount = 2;
        lineRenderer.useWorldSpace = true;
        //setting position of line out of sight of player
        lineRenderer.SetPosition(0, new Vector3(0, -1, 0));
        lineRenderer.SetPosition(1, new Vector3(1, -1, 0));

        gripAction.action.performed += Grip;
        nextShapeAction.action.performed += Next;
        selectAction.action.performed += Select;
        spellCreationStage = 0;

        eldritchStorm = new Spell(color5, new Vector3(3, 6, 3), "cylinder");
        faerieFire = new Spell(color3, new Vector3(2, 6, 4), "cube");
        fireBall = new Spell(color1, new Vector3(8, 8, 8), "sphere");
        RedDot.GetComponent<MeshRenderer>().enabled = false;
        YellowDot.GetComponent<MeshRenderer>().enabled = false;
        GreenDot.GetComponent<MeshRenderer>().enabled = false;
        BlueDot.GetComponent<MeshRenderer>().enabled = false;
        PurpleDot.GetComponent<MeshRenderer>().enabled = false;
        BlackDot.GetComponent<MeshRenderer>().enabled = false;
        cubeRep.GetComponent<MeshRenderer>().enabled = false;
        sphereRep.GetComponent<MeshRenderer>().enabled = false;
        cylinderRep.GetComponent<MeshRenderer>().enabled = false;
        depthRep.SetActive(false);
        heightRep.SetActive(false);
        widthRep.SetActive(false);
    }

    private void OnDestroy()
    {
        gripAction.action.performed -= Grip;
        nextShapeAction.action.performed -= Next;
        selectAction.action.performed -= Select;
    }

    public void Grip(InputAction.CallbackContext context)
    {


      //  Debug.Log("width");
        if(creatingSpells)
        {

          //assistText.text = "creating spells now!";
            if(spellCreationStage == 4)
            {
              //assistText.text = "changing size! use Ltrigger to draw line from surface, Ltrigger again to save";
                RaycastHit hit;
                if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity))
                {
                    point1 = hit.point;
                    //point1Sphere.GetComponent<MeshRenderer>().enabled = true;
                    //point1Sphere.transform.position = point1;
                    spellCreationStage = 5;
                }
            } else if(spellCreationStage == 5)
            {

                // assistText.text = "changing size! use Ltrigger to draw line from surface, Ltrigger again to save";
                RaycastHit hit;
                if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity))
                {
                    point2 = hit.point;
                    //point2Sphere.GetComponent<MeshRenderer>().enabled = true;
                    //point2Sphere.transform.position = point2;
                    spellCreationStage = 6;
                }
            } else if (spellCreationStage == 7)
            {

                // assistText.text = "changing size! use Ltrigger to draw line from surface, Ltrigger again to save";
                point1 = Vector3.zero;
                RaycastHit hit;
                if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity))
                {
                    point1 = hit.point;
                    //point1Sphere.GetComponent<MeshRenderer>().enabled = true;
                    //point1Sphere.transform.position = point1;
                    spellCreationStage = 8;
                }
            } else if (spellCreationStage == 8)
            {

                // assistText.text = "changing size! use trigger to draw line from surface, trigger again to save";
                RaycastHit hit;
                if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity))
                {
                  // assistText.text = "changing size! use Ltrigger to draw line from surface, Ltrigger again to save";
                    point2 = hit.point;
                    //point2Sphere.GetComponent<MeshRenderer>().enabled = true;
                    //point2Sphere.transform.position = point2;
                    spellCreationStage = 9;
                }
            } else if (spellCreationStage == 10)
            {
              // assistText.text = "changing size! use Ltrigger to draw line from surface, Ltrigger again to save";
                RaycastHit hit;
                if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity))
                {
                    point1 = hit.point;
                    //point1Sphere.GetComponent<MeshRenderer>().enabled = true;
                    //point1Sphere.transform.position = point1;
                    spellCreationStage = 11;
                }
            }
            else if (spellCreationStage == 11)
            {
              // assistText.text = "changing size! use Ltrigger to draw line from surface, Ltrigger again to save";
                RaycastHit hit;
                if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity))
                {
                    point2 = hit.point;
                    //point2Sphere.GetComponent<MeshRenderer>().enabled = true;
                    //point2Sphere.transform.position = point2;
                    spellCreationStage = 12;
                }
            }
        }
    }

    public void Next(InputAction.CallbackContext context)
    {
        if (creatingSpells)
        {
            if(spellCreationStage == 1)
            {
              // assistText.text = "sphere selected, x to save, y for next shape";
                sphereRep.transform.localPosition = new Vector3(0, 0.04f, 0.06f);
                cubeRep.transform.localPosition = new Vector3(-0.08f, 0, 0.06f);
                spellSelectScript.summonSpell("sphere", 1, 1, 1, color6);
                spellCreationStage = 2;
            }else if (spellCreationStage == 2)
            {
                sphereRep.transform.localPosition = new Vector3(0, 0, 0.06f);
                cylinderRep.transform.localPosition = new Vector3(0.08f, 0.04f, 0.06f);
                // assistText.text = "cylinder selected, x to save, y for next shape";
                spellSelectScript.summonSpell("cylinder", 1, 0.5f, 1, color6);
                spellCreationStage = 3;
            } else if (spellCreationStage == 3)
            {
                cubeRep.transform.localPosition = new Vector3(-0.08f, 0.04f, 0.06f);
                cylinderRep.transform.localPosition = new Vector3(0.08f, 0, 0.06f);
                // assistText.text = "cube selected, x to save, y for next shape";
                spellSelectScript.summonSpell("cube", 1, 1, 1, color6);
                spellCreationStage = 1;
            } else if (spellCreationStage == 20)
            {
                RedDot.transform.localPosition = new Vector3(-0.1f, 0.154f, 0.099f);
                BlackDot.transform.localPosition = new Vector3(0.1f, 0.114f, 0.099f);
                // assistText.text = "changing color: y for next color, x to save color";
                spellRepresentation.GetComponent<Renderer>().material = color1;
                spellCreationStage = 21;
            } else if (spellCreationStage == 21)
            {
              // assistText.text = "changing color: y for next color, x to save color";
                YellowDot.transform.localPosition = new Vector3(-0.06f, 0.154f, 0.099f);
                RedDot.transform.localPosition = new Vector3(-0.1f, 0.114f, 0.099f);
                spellRepresentation.GetComponent<Renderer>().material = color2;
                spellCreationStage = 22;
            }
            else if (spellCreationStage == 22)
            {
                GreenDot.transform.localPosition = new Vector3(-0.02f, 0.154f, 0.099f);
                YellowDot.transform.localPosition = new Vector3(-0.06f, 0.114f, 0.099f);
                // assistText.text = "changing color: y for next color, x to save color";
                spellRepresentation.GetComponent<Renderer>().material = color3;
                spellCreationStage = 23;
            }
            else if (spellCreationStage == 23)
            {
                BlueDot.transform.localPosition = new Vector3(0.02f, 0.154f, 0.099f);
                GreenDot.transform.localPosition = new Vector3(-0.02f, 0.114f, 0.099f);
                // assistText.text = "changing color: y for next color, x to save color";
                spellRepresentation.GetComponent<Renderer>().material = color4;
                spellCreationStage = 24;
            }
            else if (spellCreationStage == 24)
            {
                PurpleDot.transform.localPosition = new Vector3(0.06f, 0.154f, 0.099f);
                BlueDot.transform.localPosition = new Vector3(0.02f, 0.114f, 0.099f);
                // assistText.text = "changing color: y for next color, x to save color";
                spellRepresentation.GetComponent<Renderer>().material = color5;
                spellCreationStage = 25;
            }
            else if (spellCreationStage == 25)
            {
                BlackDot.transform.localPosition = new Vector3(0.1f, 0.154f, 0.099f);
                PurpleDot.transform.localPosition = new Vector3(0.06f, 0.114f, 0.099f);
                // assistText.text = "changing color: y for next color, x to save color";
                spellRepresentation.GetComponent<Renderer>().material = color6;
                spellCreationStage = 20;
            }

        }
    }
    public void Select(InputAction.CallbackContext context)
    {
        if (creatingSpells)
        {
            if (spellCreationStage == 1)
            {
              // assistText.text = " Ltrigger on surface + drag to toggle size";
                spellType = "cube";
                spellCreationStage = 4;
            }
            else if (spellCreationStage == 2)
            {
              // assistText.text = " Ltrigger on surface + drag to toggle size";
                spellType = "sphere";
                spellCreationStage = 4;
            }
            else if (spellCreationStage == 3)
            {
              // assistText.text = " Ltrigger on surface + drag to toggle size";
                spellType = "cylinder";
                spellCreationStage = 4;
            } else if(spellCreationStage >= 20 && spellCreationStage <= 25)
            {
                spellCreationStage = 30;
            }
        }
    }

    public void startSpellCreation(int x, int spellNum)
    {
        spellCreationStage = x;
        whatCustomSpell = spellNum;
        creatingSpells = true;
        currentCustomSpell = new Spell(null, Vector3.zero, null);
    }

    public void stopSpellCreation()
    {
        spellCreationStage = 0;
        creatingSpells = false;
        RedDot.GetComponent<MeshRenderer>().enabled = false;
        YellowDot.GetComponent<MeshRenderer>().enabled = false;
        GreenDot.GetComponent<MeshRenderer>().enabled = false;
        BlueDot.GetComponent<MeshRenderer>().enabled = false;
        PurpleDot.GetComponent<MeshRenderer>().enabled = false;
        BlackDot.GetComponent<MeshRenderer>().enabled = false;
        cubeRep.GetComponent<MeshRenderer>().enabled = false;
        sphereRep.GetComponent<MeshRenderer>().enabled = false;
        cylinderRep.GetComponent<MeshRenderer>().enabled = false;
        depthRep.SetActive(false);
        heightRep.SetActive(false);
        widthRep.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        isAvatarMode = spellSelectScript.isAvatarMode;
      if(isAvatarMode){
            // assistText.text = "in Avatar mode!";
      }

        if (!isAvatarMode)
        {
          if(!creatingSpells){
            // assistText.text = "in spellcaster mode!";
          }
            if (creatingSpells)
            {
              //assistText.text = "creating spell! hit y to change shape!";
                RaycastHit hit;
                Vector3 drawingPoint1 = Vector3.zero;
                Vector3 drawingPoint2 = Vector3.zero;
                bool north = directionScript.facingNorth;
                bool east = directionScript.facingEast;
                bool south = directionScript.facingSouth;
                bool west = directionScript.facingWest;

                if (point1 != Vector3.zero)
                {
                    drawingPoint1 = point1;

                    if (point2 != Vector3.zero)
                    {
                        drawingPoint2 = point2;
                    }
                    else
                    {

                        if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity))
                        {
                            drawingPoint2 = hit.point;
                        }
                        else
                        {
                            drawingPoint2 = Vector3.zero;
                        }
                        if (drawingPoint1 != Vector3.zero && drawingPoint2 != Vector3.zero)
                        {
                            lineRenderer.GetComponent<LineRenderer>().enabled = true;
                            lineRenderer.SetPosition(0, drawingPoint1); //x,y and z position of the starting point of the line
                            lineRenderer.SetPosition(1, drawingPoint2); //x,y and z position of the end point of the line
                        }
                        else
                        {
                            lineRenderer.GetComponent<LineRenderer>().enabled = false;
                        }
                    }
                }
                else
                {
                    //don't do anything
                }
                Debug.Log(spellCreationStage);
                if (spellCreationStage == 0)
                {
                    spellCreationStage = 1;
                    Debug.Log("spell stage 0");
                    spellSelectScript.summonSpell("cube", 1, 1, 1, color6);

                } else if(spellCreationStage == 1)
                {
                    cubeRep.GetComponent<MeshRenderer>().enabled = true;
                    cubeRep.transform.localPosition = new Vector3(-0.08f, 0.04f, 0.06f);
                    sphereRep.GetComponent<MeshRenderer>().enabled = true;
                    sphereRep.transform.localPosition = new Vector3(0, 0.00f, 0.06f);
                    cylinderRep.GetComponent<MeshRenderer>().enabled = true;
                    cylinderRep.transform.localPosition = new Vector3(0.08f, 0, 0.06f);
                } else if(spellCreationStage == 4)
                {
                    cubeRep.GetComponent<MeshRenderer>().enabled = false;
                    sphereRep.GetComponent<MeshRenderer>().enabled = false;
                    cylinderRep.GetComponent<MeshRenderer>().enabled = false;
                    widthRep.SetActive(true);
                }
                else if (spellCreationStage == 5)
                {
                    Vector3 len = Vector3.zero;
                    if (north || south)
                    {
                        len = new Vector3(drawingPoint1.x - drawingPoint2.x, 0, 0);
                    }
                    else if (east || west)
                    {
                        len = new Vector3(0, 0, drawingPoint1.z - drawingPoint2.z);
                    }

                    float scaleFactor = len.magnitude;
                    //don't want to make unecessarily small spells
                    if (scaleFactor < 1)
                    {
                        scaleFactor = 1;
                    }
                    Vector3 current = spellRepresentation.transform.localScale;
                    if (spellType == "cube")
                    {
                        spellRepresentation.transform.localScale = new Vector3(scaleFactor, current.y, current.z);
                    }
                    else if (spellType == "cylinder")
                    {
                        spellRepresentation.transform.localScale = new Vector3(scaleFactor, current.y, scaleFactor);
                    }
                    else if (spellType == "sphere")
                    {
                        spellRepresentation.transform.localScale = new Vector3(scaleFactor, scaleFactor, scaleFactor);
                    }

                }
                else if (spellCreationStage == 6)
                {
                    point1 = Vector3.zero;
                    point2 = Vector3.zero;
                    lineRenderer.GetComponent<LineRenderer>().enabled = false;
                    if (spellType == "cylinder" || spellType == "cube")
                    {
                        spellCreationStage = 7;
                        heightRep.SetActive(true);
                    }
                    else
                    {
                        spellCreationStage = 19;
                    }
                    widthRep.SetActive(false);
                }
                else if (spellCreationStage == 8)
                {
                    Vector3 len = new Vector3(0, drawingPoint1.y - drawingPoint2.y, 0);
                    float scaleFactor = len.magnitude;
                    //don't want to make unecessarily small spells
                    if (scaleFactor < 1)
                    {
                        scaleFactor = 1;
                    }
                    Vector3 current = spellRepresentation.transform.localScale;
                    if (spellType == "cube")
                    {
                        spellRepresentation.transform.localScale = new Vector3(current.x, scaleFactor, current.z);
                    }
                    if (spellType == "cylinder")
                    {
                        spellRepresentation.transform.localScale = new Vector3(current.x, scaleFactor / 2, current.z);
                    }
                }
                else if (spellCreationStage == 9)
                {
                    point1 = Vector3.zero;
                    point2 = Vector3.zero;
                    lineRenderer.GetComponent<LineRenderer>().enabled = false;
                    heightRep.SetActive(false);
                    if (spellType == "cube")
                    {
                        spellCreationStage = 10;
                        depthRep.SetActive(true);
                    }
                    else
                    {
                        spellCreationStage = 19;
                    }
                }
                else if (spellCreationStage == 11)
                {
                    Vector3 len = Vector3.zero;
                    if (north || south)
                    {
                        len = new Vector3(0, 0, drawingPoint1.z - drawingPoint2.z);
                    }
                    else if (east || west)
                    {
                        len = new Vector3(drawingPoint1.x - drawingPoint2.x, 0, 0);
                    }
                    float scaleFactor = len.magnitude;
                    //don't want to make unecessarily small spells
                    if (scaleFactor < 1)
                    {
                        scaleFactor = 1;
                    }
                    Vector3 current = spellRepresentation.transform.localScale;
                    spellRepresentation.transform.localScale = new Vector3(current.x, current.y, scaleFactor);
                }
                else if (spellCreationStage == 12)
                {
                    point1 = Vector3.zero;
                    point2 = Vector3.zero;
                    lineRenderer.GetComponent<LineRenderer>().enabled = false;
                    depthRep.SetActive(false);
                    spellCreationStage = 19;

                }
                else if (spellCreationStage == 19)
                {
                    RedDot.GetComponent<MeshRenderer>().enabled = true;
                    YellowDot.GetComponent<MeshRenderer>().enabled = true;
                    GreenDot.GetComponent<MeshRenderer>().enabled = true;
                    BlueDot.GetComponent<MeshRenderer>().enabled = true;
                    PurpleDot.GetComponent<MeshRenderer>().enabled = true;
                    BlackDot.GetComponent<MeshRenderer>().enabled = true;
                    RedDot.transform.localPosition = new Vector3(-0.1f, 0.114f, 0.099f);
                    YellowDot.transform.localPosition = new Vector3(-0.06f, 0.114f, 0.099f);
                    GreenDot.transform.localPosition = new Vector3(-0.02f, 0.114f, 0.099f);
                    BlueDot.transform.localPosition = new Vector3(0.02f, 0.114f, 0.099f);
                    PurpleDot.transform.localPosition = new Vector3(0.06f, 0.114f, 0.099f);
                    BlackDot.transform.localPosition = new Vector3(0.1f, 0.154f, 0.099f); //uptick
                    
                    spellCreationStage = 20;

                }
                else if (spellCreationStage == 30) // final one
                {
                    RedDot.GetComponent<MeshRenderer>().enabled = false;
                    YellowDot.GetComponent<MeshRenderer>().enabled = false;
                    GreenDot.GetComponent<MeshRenderer>().enabled = false;
                    BlueDot.GetComponent<MeshRenderer>().enabled = false;
                    PurpleDot.GetComponent<MeshRenderer>().enabled = false;
                    BlackDot.GetComponent<MeshRenderer>().enabled = false;
                    currentCustomSpell.shape = spellType;
                    currentCustomSpell.color = spellRepresentation.GetComponent<Renderer>().material;
                    currentCustomSpell.scale = spellRepresentation.transform.localScale;
                    if (whatCustomSpell == 1)
                    {
                        customSpell1 = currentCustomSpell;
                    }
                    else if (whatCustomSpell == 2)
                    {
                        customSpell2 = currentCustomSpell;
                    }
                    else if (whatCustomSpell == 3)
                    {
                        customSpell3 = currentCustomSpell;
                    }
                    stopSpellCreation();
                }

            }
            //assistText = "in spell creation mode!";
            else
            {
                lineRenderer.GetComponent<LineRenderer>().enabled = false;
            }
        }

    }
}
