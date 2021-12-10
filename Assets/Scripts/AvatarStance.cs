using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AvatarStance : MonoBehaviour
{
public Transform leftController;
public Transform rightController;
private Vector3 l;
private Vector3 r;
private Vector3 lPrev;
private Vector3 rPrev;
private Vector3 lVel;
private Vector3 rVel;
public GameObject spellSlice; //prefab of spell, currently b&w sphere
public GameObject clapSpell;
public GameObject singleKamSpell;
public GameObject doubleKamSpell;
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
      l = leftController.position;
      r = rightController.position;
      lPrev = leftController.position;
      rPrev = rightController.position;
      yMin  =0;
      timeCurr  = Time.realtimeSinceStartup;
      timePrev= Time.realtimeSinceStartup + 2;

    }

    public void print(){  //debug statements here

      if(lVel.y <yMin && lVel.y >-15){
        yMin = lVel.y;
      }
      Debug.Log("lVel: "+ lVel);
      Debug.Log("rVel: "+ rVel);
    }
    // Update is called once per frame
    void LateUpdate()
    {
      l = leftController.position;
      r = rightController.position;
      print(); //debug statements
      rVel = (r-rPrev)/(Time.deltaTime);
      lVel = (l-lPrev)/(Time.deltaTime);
      lPrev = l;
      rPrev = r;
      clap();
      Kamehameha();
      Slice();
      timeCurr = Time.realtimeSinceStartup;


    }


    public void Slice(){
      if(Mathf.Abs(lVel.z) <2 &&Mathf.Abs(rVel.z)<2){ //less likely to trigger when we want Kamehameha
        if((lVel.y <=-2 && lVel.y >-15 )&&(rVel.y <=-2 && rVel.y >-15) &&(timeCurr-timePrev >1) ){ //checks double slice
            Destroy(Instantiate(spellSlice, new Vector3(0,1,1), Quaternion.identity),1);
            timePrev = timeCurr;
          //  Debug.Log("slice double");
        }else if((lVel.y <=-2 && lVel.y >-15 )||(rVel.y <=-2 && rVel.y >-15 )&& (timeCurr-timePrev >1) ){  //single slice
            Destroy(Instantiate(spellSlice, new Vector3(0,1,1), Quaternion.identity),1);
          //  Debug.Log("slice single");


        }
      }

    }

    public void Kamehameha(){
    /*  if(lVel.z*-1 >lVel.y|| rVel.z*-1>rVel.y){
        if((lVel.z <=-3.5 && lVel.z >-15 )&&(rVel.z <=-3.5 && rVel.z >-15)&& (timeCurr-timePrev >1) ){ //checks double Kamehameha
            Destroy(Instantiate(doubleKamSpell, new Vector3(0,1,1), Quaternion.identity),1);
            //Debug.Log("Kamehameha double");
              timePrev = timeCurr;
        }
        else */
        if(Mathf.Abs(lVel.x)<2 && Mathf.Abs(rVel.y)<2){ //makes less likely to trigger when we want slice
          if((lVel-rVel).magnitude <.5f){
            if((lVel.z <=-1 && lVel.z >-15 )||(rVel.z <=-1 && rVel.z >-15 )&&!(timeCurr-timePrev >1)){  //single Kamehameha
                Destroy(Instantiate(doubleKamSpell, new Vector3(0,1,1), Quaternion.identity),1);
                  Debug.Log("Kamehameha double!");
                    timePrev = timeCurr;
            }
          }

        }

      //}
    }

    public void clap(){
      if(lVel.x >=1 && lVel.x <15 &&rVel.x <=-1 && rVel.x >-15  && (timeCurr-timePrev >1)){ //checks clap
          Destroy(Instantiate(clapSpell, new Vector3(0,1,1), Quaternion.identity),1);
        Debug.Log("clap!");
          timePrev = timeCurr;
      }
    }

}