using System.Collections;
using System.Collections.Generic;
using UnityEngine.Events;
using UnityEngine.XR;
using UnityEngine.InputSystem;
using UnityEngine;

public class AvatarStance : MonoBehaviour
{
public Transform leftController;
public Transform rightController;
public Transform h;
private Vector3 l;
private Vector3 r;
private Vector3 lPrev;
private Vector3 rPrev;
private Vector3 lVel;
private Vector3 rVel;
public GameObject spellSlice; //prefab of spell, currently b&w sphere
public GameObject clapSpell;
public GameObject kamSpell;
public bool enabled = true;
Vector3 ogFwd;

    // Start is called before the first frame update
    public void Start()
    {
      l = leftController.localPosition;
      r = rightController.localPosition;
      lPrev = leftController.localPosition;
      rPrev = rightController.localPosition;
      ogFwd = h.forward;
    }

    public void print(){  //debug statements here
      Debug.Log("left controller pos: " + l);
      Debug.Log("l velocity:"+ lVel );
      Debug.Log("r velocity:"+ rVel );

      }

    // Update is called once per frame
    void LateUpdate()
    {
       enabled = GameObject.Find("EventSystem").GetComponent<SpellSelectionUI>().isAvatarMode;
    if(enabled){
      Vector3 curFwd = h.forward;
      Vector3 lPrevRot, rPrevRot;
      curFwd = new Vector3(curFwd.x, 0, curFwd.z);
      float angle = Vector3.Dot(ogFwd, curFwd)*180/3.14f;

      l = leftController.localPosition;
      r = rightController.localPosition;
        //trig rules for recalculating l and r
      float x = l.x*Mathf.Cos(angle)- l.z*Mathf.Sin(angle);
      float z = l.z*Mathf.Sin(angle)+ l.z*Mathf.Cos(angle);
      //update left
       l = new Vector3(x,l.y,z);
       x = r.x*Mathf.Cos(angle)- r.z*Mathf.Sin(angle);
       z = r.z*Mathf.Sin(angle)+ r.z*Mathf.Cos(angle);
      //update right
       r =  new Vector3(x,r.y,z);

       //update old left and right so head movement doesn't trigger spell
       x = rPrev.x*Mathf.Cos(angle)- rPrev.z*Mathf.Sin(angle);
       z = rPrev.z*Mathf.Sin(angle)+ rPrev.z*Mathf.Cos(angle);
       rPrevRot = new Vector3(x,rPrev.y,z);

       //update old left and right so head movement doesn't trigger spell
       x = lPrev.x*Mathf.Cos(angle)- lPrev.z*Mathf.Sin(angle);
       z = lPrev.z*Mathf.Sin(angle)+ lPrev.z*Mathf.Cos(angle);
       lPrevRot = new Vector3(x,lPrev.y,z);

      print(); //debug statements
        Debug.Log("original angle: "+ ogFwd +" \n new angle " + curFwd);
        Debug.Log(" angle change: " + angle);
      rVel = (r-rPrevRot)/(Time.deltaTime);
      lVel = (l-lPrevRot)/(Time.deltaTime);

      clap();
      Slice();
      Kamehameha();
      lPrev = leftController.localPosition;
      rPrev = rightController.localPosition;
    }

    }

    public void Slice(){
      if(Mathf.Abs(lVel.z) <2 &&Mathf.Abs(rVel.z)<2){ //less likely to trigger when we want Kamehameha
        if((lVel.y <=-2 && lVel.y >-15 )&&(rVel.y <=-2 && rVel.y >-15) ){ //checks double slice
        Destroy(Instantiate(spellSlice,h.position + h.forward*3, Quaternion.identity),1);

        }else if((lVel.y <=-2 && lVel.y >-15 )||(rVel.y <=-2 && rVel.y >-15 ) ){  //single slice
        Destroy(Instantiate(spellSlice, h.position + h.forward*3, Quaternion.identity),1);



        }
      }

    }

    public void Kamehameha(){
        if((Mathf.Abs( lVel.y) < lVel.z && Mathf.Abs (lVel.y) < lVel.z )||rVel.z >1.5 ||lVel.z>1.5 ){ //makes less likely to trigger when we want slice
          //if((lVel-rVel).magnitude <.5f){
            if((lVel.z <=-1 && lVel.z >-15 )||(rVel.z <=-1 && rVel.z >-15 )){  //single Kamehameha
              Debug.Log("Kamehameha !");
              Destroy(Instantiate(kamSpell, h.position + h.forward*3, Quaternion.identity),1);
          //  }
          }
        }
    }

    public void clap(){

      if(lVel.x >=1 && lVel.x <15 &&rVel.x <=-1 && rVel.x >-15 ) { //checks clap
  //  if(Vector3.Dot(lVel, rVel)<=.8f){ //checks clap independent of direction
        Destroy(Instantiate(clapSpell, h.position + h.forward*3, Quaternion.identity),1);
      }
    }

}
