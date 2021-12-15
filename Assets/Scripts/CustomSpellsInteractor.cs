using System.Collections;
using System.Collections.Generic;
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

    public GameObject spellRepresentation;

    public InputActionProperty heightAction;
    public InputActionProperty widthAction;

    public InputActionProperty nextShapeAction;
    public InputActionProperty selectAction;

    public Material color1; //red fire
    public Material color2; //yellow lightning
    public Material color3; //green eldritch / grass
    public Material color4; //blue water/ice
    public Material color5; //purple fairey
    public Material color6; //black necrotic / default

    public Spell eldritchStorm; 
    public Spell faerieFire;
    public Spell fireBall;

    public Spell customSpell1;
    public Spell customSpell2;
    public Spell customSpell3;

    Spell currentCustomSpell;
    int whatCustomSpell = 0;

    int spellCreationStage;
    string spellType;

    // Start is called before the first frame update
    void Start()
    {
        creatingSpells = false;
        // taken from assignment 4
        lineRenderer = new GameObject("Line").AddComponent<LineRenderer>();
        lineRenderer.startColor = Color.white;
        lineRenderer.endColor = Color.white;
        lineRenderer.startWidth = 0.01f;
        lineRenderer.endWidth = 0.01f;
        lineRenderer.positionCount = 2;
        lineRenderer.useWorldSpace = true;

        heightAction.action.performed += Height;
        widthAction.action.performed += Width;
        nextShapeAction.action.performed += Next;
        selectAction.action.performed += Select;
        spellCreationStage = 0;

        eldritchStorm = new Spell(color5, new Vector3(3, 6, 3), "cylinder");
        faerieFire = new Spell(color3, new Vector3(2, 6, 4), "cube");
        fireBall = new Spell(color1, new Vector3(8, 8, 8), "sphere");
    }

    private void OnDestroy()
    {
        heightAction.action.performed -= Height;
        widthAction.action.performed -= Width;
        nextShapeAction.action.performed -= Next;
        selectAction.action.performed -= Select;
    }

    public void Height(InputAction.CallbackContext context)
    {
        if(creatingSpells)
        {
            
        }
    }
    public void Width(InputAction.CallbackContext context)
    {
        Debug.Log("width");
        if(creatingSpells)
        {
            if(spellCreationStage == 4)
            {
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
                RaycastHit hit;
                if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity))
                {
                    point2 = hit.point;
                    //point2Sphere.GetComponent<MeshRenderer>().enabled = true;
                    //point2Sphere.transform.position = point2;
                    spellCreationStage = 9;
                }
            } else if (spellCreationStage == 10)
            {
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
                spellSelectScript.summonSpell("sphere", 1, 1, 1, color5);
                spellCreationStage = 2;
            }else if (spellCreationStage == 2)
            {
                spellSelectScript.summonSpell("cylinder", 1, 0.5f, 1, color5);
                spellCreationStage = 3;
            } else if (spellCreationStage == 3)
            {
                spellSelectScript.summonSpell("cube", 1, 1, 1, color5);
                spellCreationStage = 1;
            } else if (spellCreationStage == 20)
            {
                spellRepresentation.GetComponent<Renderer>().material = color1;
                spellCreationStage = 21;
            } else if (spellCreationStage == 21)
            {
                spellRepresentation.GetComponent<Renderer>().material = color2;
                spellCreationStage = 22;
            }
            else if (spellCreationStage == 22)
            {
                spellRepresentation.GetComponent<Renderer>().material = color3;
                spellCreationStage = 23;
            }
            else if (spellCreationStage == 23)
            {
                spellRepresentation.GetComponent<Renderer>().material = color4;
                spellCreationStage = 24;
            }
            else if (spellCreationStage == 24)
            {
                spellRepresentation.GetComponent<Renderer>().material = color5;
                spellCreationStage = 25;
            }
            else if (spellCreationStage == 25)
            {
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
                spellType = "cube";
                spellCreationStage = 4;
            }
            else if (spellCreationStage == 2)
            {
                spellType = "sphere";
                spellCreationStage = 4;
            }
            else if (spellCreationStage == 3)
            {
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
    }

    // Update is called once per frame
    void Update()
    {
        if (creatingSpells)
        {
            RaycastHit hit;
            Vector3 drawingPoint1 = Vector3.zero;
            Vector3 drawingPoint2 = Vector3.zero;
             
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
                spellSelectScript.summonSpell("cube", 1, 1, 1, color5);

            }
            else if (spellCreationStage == 5)
            {
                Vector3 len = new Vector3(drawingPoint1.x - drawingPoint2.x, 0, 0);
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
                } else if (spellType == "cylinder")
                {
                    spellRepresentation.transform.localScale = new Vector3(scaleFactor, current.y, scaleFactor);
                } else if (spellType == "sphere")
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
                }
                else
                {
                    spellCreationStage = 20;
                }
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
            } else if(spellCreationStage == 9)
            {
                point1 = Vector3.zero;
                point2 = Vector3.zero;
                lineRenderer.GetComponent<LineRenderer>().enabled = false;
                if (spellType == "cube")
                {
                    spellCreationStage = 10;
                }
                else
                {
                    spellCreationStage = 20;
                }
            }
            else if (spellCreationStage == 11)
            {
                Vector3 len = new Vector3(0, 0, drawingPoint1.z - drawingPoint2.z);
                float scaleFactor = len.magnitude;
                //don't want to make unecessarily small spells
                if (scaleFactor < 1)
                {
                    scaleFactor = 1;
                }
                Vector3 current = spellRepresentation.transform.localScale;
                spellRepresentation.transform.localScale = new Vector3(current.x, current.y, scaleFactor);
            } else if (spellCreationStage == 12)
            {
                point1 = Vector3.zero;
                point2 = Vector3.zero;
                lineRenderer.GetComponent<LineRenderer>().enabled = false;
                spellCreationStage = 20;
                
            }
            else if (spellCreationStage == 30) // final one
            {
                currentCustomSpell.shape = spellType;
                currentCustomSpell.color = spellRepresentation.GetComponent<Renderer>().material;
                currentCustomSpell.scale = spellRepresentation.transform.localScale;
                if(whatCustomSpell == 1)
                {
                    customSpell1 = currentCustomSpell;
                } else if (whatCustomSpell == 2)
                {
                    customSpell2 = currentCustomSpell;
                } else if (whatCustomSpell == 3)
                {
                    customSpell3 = currentCustomSpell;
                }
                stopSpellCreation();
            }
            
        }
        else
        {
            lineRenderer.GetComponent<LineRenderer>().enabled = false;
        }
    }
}

