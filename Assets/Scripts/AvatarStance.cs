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
      Debug.Log("right controller pos: " + r);
      Debug.Log("headset rotation: " + h.rotation);
        }

    // Update is called once per frame
    void LateUpdate()
    {
      Vector3 curFwd = h.forward;
      float angle = Vector3.Dot(ogFwd, curFwd);
        Debug.Log(" angle change: " + angle);
      l = leftController.localPosition;
      r = rightController.localPosition;
       l =  Quaternion.Euler(0, angle, 0) * l;
       r =  Quaternion.Euler(0, angle, 0) * r;
      print(); //debug statements
      rVel = (r-rPrev)/(Time.deltaTime);
      lVel = (l-lPrev)/(Time.deltaTime);
      lPrev = l;
      rPrev = r;
      clap();
      Slice();
      Kamehameha();


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
        if(Mathf.Abs(lVel.x)<lVel.z && Mathf.Abs(lVel.y)<lVel.z || Mathf.Abs(rVel.x)<rVel.z && Mathf.Abs(rVel.y)<rVel.z){ //makes less likely to trigger when we want slice
          //if((lVel-rVel).magnitude <.5f){
            if((lVel.z <=-1 && lVel.z >-15 )||(rVel.z <=-1 && rVel.z >-15 )){  //single Kamehameha
              Debug.Log("Kamehameha !");
              Destroy(Instantiate(kamSpell, h.position + h.forward*3, Quaternion.identity),1);
            }
          //}

        }
    }

    public void clap(){

      if(lVel.x >=1 && lVel.x <15 &&rVel.x <=-1 && rVel.x >-15 ) { //checks clap
  //  if(Vector3.Dot(lVel, rVel)<=.8f){ //checks clap independent of direction
        Destroy(Instantiate(clapSpell, h.position + h.forward*3, Quaternion.identity),1);
      }
    }

}
