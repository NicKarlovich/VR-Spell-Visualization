using UnityEngine;
using UnityEngine.InputSystem;
using System.Collections.Generic;
using UnityEngine.Events;
using UnityEngine.XR;

public class GraspGrabber : Grabber
{
    public InputActionProperty grabAction;
    public InputActionProperty toggleGogo;
    Grabbable currentObject;
    Grabbable grabbedObject;
    bool gogoOn;
    float dThreshold = .05f;
    float scaleFactor = 3.0f;
    public InputActionProperty headsetPos;
    public InputActionProperty controllerPos;
    Vector3 head;
    Vector3 hand;
    public Transform controller1;
    public Transform controller2;
    private Quaternion lastSpindleRotation;
    Quaternion spindleRotation;
    float PrevDistance ;
  //  GameObject controller;

    // Start is called before the first frame update
    void Start()
    {
        gogoOn = false;
        grabbedObject = null;
        currentObject = null;

        grabAction.action.performed += Grab;
        grabAction.action.canceled += Release;
        toggleGogo.action.performed += Toggle;
        headsetPos.action.performed +=Headset;
        controllerPos.action.performed+=Controller;
        lastSpindleRotation = Quaternion.LookRotation(controller1.position - controller2.position);


    }

    private void OnDestroy()
    {
        grabAction.action.performed -= Grab;
        grabAction.action.canceled -= Release;
        toggleGogo.action.performed -= Toggle;
        headsetPos.action.performed -=Headset;
        controllerPos.action.performed-=Controller;
    }


    // Update is called once per frame
    void Update()
    {

      if(gogoOn){
        this.transform.localRotation = Quaternion.identity;
          Vector3 head2 = new Vector3(head.x,0,head.z);
          Vector3 hand2 = new Vector3(hand.x,0,hand.z);
          float distance = Vector3.Distance(head2,hand2);
        if(distance >= dThreshold){
          this.transform.localPosition = new Vector3(0,0,hand.z)*scaleFactor*(distance/.008f);

        }
      } else{
        this.transform.localPosition = new Vector3(0,0,0);
        // calculates the current spindle vector rotation in world space
        Quaternion spindleRotation = Quaternion.LookRotation(controller1.position - controller2.position);

        // calculates the change in rotation by taking the inverse of the last frame's spindle rotation
        // this cancels out the rotation from the previous frame
        Quaternion rotationChange = spindleRotation * Quaternion.Inverse(lastSpindleRotation);

        // rotates the current object by the same amount
        grabbedObject.transform.rotation = rotationChange * grabbedObject.transform.rotation;

        // updates the previous spindle rotation
        lastSpindleRotation = spindleRotation;
        grabbedObject.transform.localPosition = .5f*(controller1.position-controller2.position);
        float distance = Vector3.Distance(controller1.position,controller2.position);
        grabbedObject.transform.localScale += new Vector3(distance-PrevDistance,distance-PrevDistance,distance-PrevDistance);

        PrevDistance = distance;


      }

    }
    //if primary button pressed or released
    public void Toggle(InputAction.CallbackContext context){
      gogoOn = !gogoOn;
    }

    public void Headset(InputAction.CallbackContext context){
      head = context.action.ReadValue<Vector3>();
    }
    public void Controller(InputAction.CallbackContext context){
      hand = context.action.ReadValue<Vector3>();
    }


    public override void Grab(InputAction.CallbackContext context)
    {
      PrevDistance = 1.0f;
        if (currentObject && grabbedObject == null)
        {
            if (currentObject.GetCurrentGrabber() != null)
            {
                currentObject.GetCurrentGrabber().Release(new InputAction.CallbackContext());
            }

            grabbedObject = currentObject;
            grabbedObject.SetCurrentGrabber(this);

            if (grabbedObject.GetComponent<Rigidbody>())
            {
                grabbedObject.GetComponent<Rigidbody>().isKinematic = true;
                grabbedObject.GetComponent<Rigidbody>().useGravity = false;
            }

            grabbedObject.transform.parent = this.transform;
            if(!gogoOn){
              grabbedObject.transform.localPosition= .5f*(controller1.localPosition-controller2.localPosition);
              //  grabbedObject.transform.scale =
            }
        }
    }

    public override void Release(InputAction.CallbackContext context)
    {
        if (grabbedObject)
        {
            if (grabbedObject.GetComponent<Rigidbody>())
            {
                grabbedObject.GetComponent<Rigidbody>().isKinematic = false;
                grabbedObject.GetComponent<Rigidbody>().useGravity = true;
            }

            grabbedObject.SetCurrentGrabber(null);
            grabbedObject.transform.parent = null;
            grabbedObject = null;
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (currentObject == null && other.GetComponent<Grabbable>())
        {
            currentObject = other.gameObject.GetComponent<Grabbable>();
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (currentObject)
        {
            if (other.GetComponent<Grabbable>() && currentObject.GetInstanceID() == other.GetComponent<Grabbable>().GetInstanceID())
            {
                currentObject = null;
            }
        }
    }
}
