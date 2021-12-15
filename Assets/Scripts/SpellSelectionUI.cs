using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpellSelectionUI : MonoBehaviour
{
    public CustomSpellsInteractor customSpellsScript;

    public Button button1;
    public Button button2;
    public Button button3;

    public Button customButton1;
    public Button customButton2;
    public Button customButton3;
    public Button createCustomButton1;
    public Button createCustomButton2;
    public Button createCustomButton3;

    public Button clearButton;

    public Button gameModeButton;

    public GameObject spellRepresentation;

    public GameObject cube;
    public GameObject sphere;
    public GameObject cylinder;

    public GameObject test;

    public Mesh genericCube;
    public Mesh genericSphere;
    public Mesh genericCylinder;
    public bool isAvatarMode = true;

    // Start is called before the first frame update
    void Start()
    {
        spellRepresentation.GetComponent<MeshRenderer>().enabled = false;
        button1.onClick.AddListener(() => buttonCallBack(button1));
        button2.onClick.AddListener(() => buttonCallBack(button2));
        button3.onClick.AddListener(() => buttonCallBack(button3));
        customButton1.onClick.AddListener(() => buttonCallBack(customButton1));
        customButton2.onClick.AddListener(() => buttonCallBack(customButton2));
        customButton3.onClick.AddListener(() => buttonCallBack(customButton3));
        createCustomButton1.onClick.AddListener(() => buttonCallBack(createCustomButton1));
        createCustomButton2.onClick.AddListener(() => buttonCallBack(createCustomButton2));
        createCustomButton3.onClick.AddListener(() => buttonCallBack(createCustomButton3));
        clearButton.onClick.AddListener(() => buttonCallBack(clearButton));
        gameModeButton.onClick.AddListener(() => buttonCallBack(gameModeButton));

        genericCube = Instantiate(cube.GetComponent<Mesh>());
        genericSphere = Instantiate(sphere.GetComponent<Mesh>());
        genericCylinder = Instantiate(cylinder.GetComponent<Mesh>());

        //button1.GetComponentInChildren<Text>().text = "Hello1";
        //button2.GetComponentInChildren<Text>().text = "Hello2";
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void summonSpell(Spell spell)
    {
        summonSpell(spell.shape, spell.scale.x, spell.scale.y, spell.scale.z, spell.color);
    }

    public void summonSpell(string type, float width, float height, float depth, Material color)
    {
        spellRepresentation.GetComponent<MeshRenderer>().enabled = true;
        spellRepresentation.transform.localScale = new Vector3(1, 1, 1);
        if (type == "cube")
        {
            spellRepresentation.GetComponent<MeshFilter>().mesh = Instantiate(cube.GetComponent<MeshFilter>().mesh);
        } else if (type == "sphere")
        {
            spellRepresentation.GetComponent<MeshFilter>().mesh = Instantiate(sphere.GetComponent<MeshFilter>().mesh);
        } else if (type == "cylinder")
        {
            spellRepresentation.GetComponent<MeshFilter>().mesh = Instantiate(cylinder.GetComponent<MeshFilter>().mesh);
        }
        Vector3 temp = spellRepresentation.transform.localScale;
        temp.x = temp.x * width;
        temp.y = temp.y * height;
        temp.z = temp.z * depth;
        spellRepresentation.transform.localScale = temp;
        /*if (type == "cube")
        {
            //Debug.Log("getting here?");
            //test = Resources.Load<GameObject>("GenericCube.prefab");
            //spellRepresentation.GetComponent<MeshFilter>().mesh = test.GetComponent<MeshFilter>().mesh;
            //Debug.Log(cube.GetComponent<MeshFilter>().mesh);
            spellRepresentation.GetComponent<MeshFilter>().mesh = Instantiate(cube.GetComponent<MeshFilter>().mesh);
            Vector3 temp = spellRepresentation.transform.localScale;
        }
        if (type == "sphere")
        {
            //test = Resources.Load<GameObject>("GenericSphere.prefab");
            spellRepresentation.GetComponent<MeshFilter>().mesh = Instantiate(sphere.GetComponent<MeshFilter>().mesh);
            spellRepresentation.transform.localScale = spellRepresentation.transform.localScale * width;
        }
        if (type == "cylinder")
        {
            //Debug.Log("getting here?");
            //test = Resources.Load<GameObject>("GenericCylinder.prefab");
            spellRepresentation.GetComponent<MeshFilter>().mesh = Instantiate(cylinder.GetComponent<MeshFilter>().mesh);
            Vector3 temp = spellRepresentation.transform.localScale;
            temp.x = temp.x * width;
            temp.y = temp.y * height;  //height is divided by 2 because default cyilder is taller than I want
            temp.z = temp.z * width;
            spellRepresentation.transform.localScale = temp;
        }*/
        spellRepresentation.GetComponent<Renderer>().material = color;
    }

    public void clearSpell()
    {
        spellRepresentation.GetComponent<MeshRenderer>().enabled = false;
    }

    public void buttonCallBack(Button buttonPressed)
    {

        if (buttonPressed == button1)
        {
            Debug.Log("Button 1");
            summonSpell(customSpellsScript.eldritchStorm);
        }
        if (buttonPressed == button2)
        {
            Debug.Log("Button 2");
            summonSpell(customSpellsScript.faerieFire);
        }
        if (buttonPressed == button3)
        {
            Debug.Log("Button 3");
            summonSpell(customSpellsScript.fireBall);
        }
        if (buttonPressed == customButton1)
        {
            Debug.Log("Custom Button 1");
            summonSpell(customSpellsScript.customSpell1);
            //summonSpell("cylinder", 2, 2);
        }
        if (buttonPressed == customButton2)
        {
            Debug.Log("Custom Button 2");
            summonSpell(customSpellsScript.customSpell2);
            //summonSpell("cube", 4, 0);
        }
        if (buttonPressed == customButton3)
        {
            Debug.Log("Custom Button 3");
            summonSpell(customSpellsScript.customSpell3);
            //summonSpell("sphere", 3, 0);
        }
        if (buttonPressed == clearButton)
        {
            Debug.Log("Cleared Spell");
            clearSpell();
        }
        if (buttonPressed == createCustomButton1)
        {
            Debug.Log("Create Custom Button 1");
            customSpellsScript.startSpellCreation(0, 1);
        }
        if (buttonPressed == createCustomButton2)
        {
            Debug.Log("Create Custom Button 2");
            customSpellsScript.startSpellCreation(0, 2);
        }
        if (buttonPressed == createCustomButton3)
        {
            Debug.Log("Create Custom Button 3");
            customSpellsScript.startSpellCreation(0, 3);
        }if(buttonPressed == gameModeButton)
        {
          Debug.Log("avatar mode is changed to  " + GameObject.Find("XR Rig").GetComponent<AvatarStance>().isAvatarMode);
          GameObject.Find("XR Rig").GetComponent<AvatarStance>().toggle();

        }


    }
}
