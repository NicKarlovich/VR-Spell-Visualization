using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AvatarStance : MonoBehaviour
{

  /*TODO:
    - store location.
    - calculate time (realtime, not dependent on system)
    -DEBUGGER!!! draw varibles on screen to a window!!

    - need to calculate velocity from this location
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
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log("AvatarStance");
    }
}
