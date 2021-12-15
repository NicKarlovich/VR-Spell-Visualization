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
float timeCurr;
float timePrev;
  float yMin;
  /*TODO:
    - check if velocity of left or right controller has following pattern:
    ((need threshold, test via ))
      - strong -y direction Left (slice)
      - strong -y direction Right (slice)
    //  - strong -y direction Left & Right (slice) x2 slice ->later issue
      - strong +z direction Left (Kamehameha)
      - strong +z direction Right (Kamehameha)
      - strong +z direction Left & Right (Kamehameha)x2
      - strong +x direction Left  & strong -x direction Right (clap)

  */
    // Start is called before the first frame update
    public void Start()
    {
      l = leftController.localPosition;
      r = rightController.localPosition;
      lPrev = leftController.localPosition;
      rPrev = rightController.localPosition;
      yMin  =0;
      timeCurr  = Time.realtimeSinceStartup;
      timePrev= Time.realtimeSinceStartup + 2;

    }

    public void print(){  //debug statements here
      Debug.Log("left controller pos: " + l.x + " " + l.y + " " + l.z);
      Debug.Log("right controller pos: " + r.x + " " + r.y + " " + r.z);
      Debug.Log("headset rotation: " + h.rotation.x +" "+ h.rotation.y + " "+ h.rotation.z);
    }

    // Update is called once per frame
    void LateUpdate()
    {
      l = leftController.localPosition;
      r = rightController.localPosition;
       l =  Quaternion.AngleAxis(h.rotation.x, Vector3.up) * l;
        r =  Quaternion.AngleAxis(h.rotation.x, Vector3.up) * r;

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
          GameObject a =  Instantiate(spellSlice,h.position + h.forward*3, Quaternion.identity);
          Destroy(a,1);

        }else if((lVel.y <=-2 && lVel.y >-15 )||(rVel.y <=-2 && rVel.y >-15 ) ){  //single slice
          GameObject a =  Instantiate(spellSlice, h.position + h.forward*3, Quaternion.identity);
          Destroy(a,1);



        }
      }

    }

    public void Kamehameha(){
        if(Mathf.Abs(lVel.x)<2 && Mathf.Abs(rVel.y)<2){ //makes less likely to trigger when we want slice
          if((lVel-rVel).magnitude <.5f){
            if((lVel.z <=-1 && lVel.z >-15 )||(rVel.z <=-1 && rVel.z >-15 )){  //single Kamehameha
              GameObject a =  Instantiate(kamSpell, h.position + h.forward*3, Quaternion.identity);
              Destroy(a,1);
            }
          }

        }
    }

    public void clap(){
      if(lVel.x >=1 && lVel.x <15 &&rVel.x <=-1 && rVel.x >-15 ){ //checks clap
        GameObject a =  Instantiate(clapSpell, h.position + h.forward*3, Quaternion.identity);
        Destroy(a,1);
      }
    }

}
