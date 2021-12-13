using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpellSelectionUI : MonoBehaviour
{

    public Button button1;
    public Button button2;
    public Button button3;

    public Button customButton1;
    public Button customButton2;
    public Button customButton3;
    public Button clearButton;

    public GameObject spellRepresentation;

    public GameObject cube;
    public GameObject sphere;
    public GameObject cylinder;

    public Mesh genericCube;
    public Mesh genericSphere;
    public Mesh genericCylinder;

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
        clearButton.onClick.AddListener(() => buttonCallBack(clearButton));

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

    public void summonSpell(string type, int width, int height, int depth)
    {
        spellRepresentation.GetComponent<MeshRenderer>().enabled = true;
        if (type == "cube")
        {
            Debug.Log("getting here?");
            spellRepresentation.GetComponent<MeshFilter>().mesh = (Mesh)Resources.Load("Assets/Models/Generic Cube.prefab", typeof(Mesh));
                //Instantiate(cube.GetComponent<Mesh>());
        }
        if (type == "sphere")
        {
            Debug.Log("getting here?");
            spellRepresentation.GetComponent<MeshFilter>().mesh = (Mesh)Resources.Load("Assets/Models/Generic Sphere.prefab", typeof(Mesh));
            //Instantiate(sphere.GetComponent<Mesh>());
        }
        if (type == "cylinder")
        {
            Debug.Log("getting here?");
            spellRepresentation.GetComponent<MeshFilter>().mesh = (Mesh)Resources.Load("Assets/Models/Generic Cylinder.prefab", typeof(Mesh));
        }
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
            summonSpell("cylinder", 0, 0, 0);

        }
        if (buttonPressed == button2)
        {
            Debug.Log("Button 2");
            summonSpell("cube", 0, 0, 0);
        }
        if (buttonPressed == button3)
        {
            Debug.Log("Button 3");
            summonSpell("sphere", 0, 0, 0);
        }
        if (buttonPressed == customButton1)
        {
            Debug.Log("Custom Button 1");
        }
        if (buttonPressed == customButton2)
        {
            Debug.Log("Custom Button 2");
        }
        if (buttonPressed == customButton3)
        {
            Debug.Log("Custom Button 3");
        }
        if (buttonPressed == clearButton)
        {
            Debug.Log("Cleared Spell");
            clearSpell();
        }
    }
}
