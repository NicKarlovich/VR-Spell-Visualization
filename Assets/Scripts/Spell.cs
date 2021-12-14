using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spell : MonoBehaviour
{
    public Material color;
    public Vector3 scale;
    public string shape;

    public Spell(Material c, Vector3 sc, string sh)
    {
        color = c;
        scale = sc;
        shape = sh;
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }    
}
