#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Grabbable
struct Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D;
// Grabber
struct Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C;
// GraspGrabber
struct GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PointGrabber
struct PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral797DF3779D087A8ACC3BF2CE5961D7AB4E279F19;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_mB49EB02AB488D5AC7591F7ED59231E825EF10E91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GraspGrabber_Controller_mB3874019C39CC5A9AA77E3492C36C167FDA0150C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GraspGrabber_Headset_m107EFC09BB6BDAB7CDDDECC16B56684A1F23DD69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GraspGrabber_Toggle_mE013CEEFDC4410F5F62FC9769985890F5C7C068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m353742039FFADA1607DA5CFE1F5572DB6D98B6FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointGrabber_Move_m842EBEB01B504CB708A5B379483EC6BAC557E41C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointGrabber_TouchDown_m37EACD748A82FCB5C49BDDAAFACEFBC994D784E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointGrabber_TouchUp_m67E08DB8A874A5F3B713019BFFC0A8ACBB363316_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___firstValue_1)); }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___additionalValues_2)); }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 
{
public:
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___m_Reference_2;

public:
	inline static int32_t get_offset_of_m_UseReference_0() { return static_cast<int32_t>(offsetof(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63, ___m_UseReference_0)); }
	inline bool get_m_UseReference_0() const { return ___m_UseReference_0; }
	inline bool* get_address_of_m_UseReference_0() { return &___m_UseReference_0; }
	inline void set_m_UseReference_0(bool value)
	{
		___m_UseReference_0 = value;
	}

	inline static int32_t get_offset_of_m_Action_1() { return static_cast<int32_t>(offsetof(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63, ___m_Action_1)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Action_1() const { return ___m_Action_1; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Action_1() { return &___m_Action_1; }
	inline void set_m_Action_1(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Reference_2() { return static_cast<int32_t>(offsetof(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63, ___m_Reference_2)); }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * get_m_Reference_2() const { return ___m_Reference_2; }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E ** get_address_of_m_Reference_2() { return &___m_Reference_2; }
	inline void set_m_Reference_2(InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * value)
	{
		___m_Reference_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Reference_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_1;
	InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_1;
	InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___m_Reference_2;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_State_0)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_pinvoke
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_com
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.InputSystem.InputActionType
struct InputActionType_t913CC58784CA34E9791C18B15436C791CD465901 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_t913CC58784CA34E9791C18B15436C791CD465901, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 
{
public:
	// T System.Nullable`1::value
	InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___value_0)); }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  get_value_0() const { return ___value_0; }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_SingletonActionBindings_6;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_7;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_12;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_13;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnStarted_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnCanceled_15;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnPerformed_16;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_7() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingMask_7)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_7() const { return ___m_BindingMask_7; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_7() { return &___m_BindingMask_7; }
	inline void set_m_BindingMask_7(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_8() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsStartIndex_8)); }
	inline int32_t get_m_BindingsStartIndex_8() const { return ___m_BindingsStartIndex_8; }
	inline int32_t* get_address_of_m_BindingsStartIndex_8() { return &___m_BindingsStartIndex_8; }
	inline void set_m_BindingsStartIndex_8(int32_t value)
	{
		___m_BindingsStartIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_9() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsCount_9)); }
	inline int32_t get_m_BindingsCount_9() const { return ___m_BindingsCount_9; }
	inline int32_t* get_address_of_m_BindingsCount_9() { return &___m_BindingsCount_9; }
	inline void set_m_BindingsCount_9(int32_t value)
	{
		___m_BindingsCount_9 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_10() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlStartIndex_10)); }
	inline int32_t get_m_ControlStartIndex_10() const { return ___m_ControlStartIndex_10; }
	inline int32_t* get_address_of_m_ControlStartIndex_10() { return &___m_ControlStartIndex_10; }
	inline void set_m_ControlStartIndex_10(int32_t value)
	{
		___m_ControlStartIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_11() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlCount_11)); }
	inline int32_t get_m_ControlCount_11() const { return ___m_ControlCount_11; }
	inline int32_t* get_address_of_m_ControlCount_11() { return &___m_ControlCount_11; }
	inline void set_m_ControlCount_11(int32_t value)
	{
		___m_ControlCount_11 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_12() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionIndexInState_12)); }
	inline int32_t get_m_ActionIndexInState_12() const { return ___m_ActionIndexInState_12; }
	inline int32_t* get_address_of_m_ActionIndexInState_12() { return &___m_ActionIndexInState_12; }
	inline void set_m_ActionIndexInState_12(int32_t value)
	{
		___m_ActionIndexInState_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_13() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionMap_13)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_ActionMap_13() const { return ___m_ActionMap_13; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_ActionMap_13() { return &___m_ActionMap_13; }
	inline void set_m_ActionMap_13(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_ActionMap_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_14() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnStarted_14)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnStarted_14() const { return ___m_OnStarted_14; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnStarted_14() { return &___m_OnStarted_14; }
	inline void set_m_OnStarted_14(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_15() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnCanceled_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnCanceled_15() const { return ___m_OnCanceled_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnCanceled_15() { return &___m_OnCanceled_15; }
	inline void set_m_OnCanceled_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnCanceled_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_16() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnPerformed_16)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnPerformed_16() const { return ___m_OnPerformed_16; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnPerformed_16() { return &___m_OnPerformed_16; }
	inline void set_m_OnPerformed_16(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnPerformed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Grabbable
struct Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Grabber Grabbable::currentGrabber
	Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * ___currentGrabber_4;

public:
	inline static int32_t get_offset_of_currentGrabber_4() { return static_cast<int32_t>(offsetof(Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D, ___currentGrabber_4)); }
	inline Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * get_currentGrabber_4() const { return ___currentGrabber_4; }
	inline Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C ** get_address_of_currentGrabber_4() { return &___currentGrabber_4; }
	inline void set_currentGrabber_4(Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * value)
	{
		___currentGrabber_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGrabber_4), (void*)value);
	}
};


// Grabber
struct Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GraspGrabber
struct GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964  : public Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C
{
public:
	// UnityEngine.InputSystem.InputActionProperty GraspGrabber::grabAction
	InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  ___grabAction_4;
	// UnityEngine.InputSystem.InputActionProperty GraspGrabber::toggleGogo
	InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  ___toggleGogo_5;
	// Grabbable GraspGrabber::currentObject
	Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * ___currentObject_6;
	// Grabbable GraspGrabber::grabbedObject
	Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * ___grabbedObject_7;
	// System.Boolean GraspGrabber::gogoOn
	bool ___gogoOn_8;
	// System.Single GraspGrabber::dThreshold
	float ___dThreshold_9;
	// System.Single GraspGrabber::scaleFactor
	float ___scaleFactor_10;
	// UnityEngine.InputSystem.InputActionProperty GraspGrabber::headsetPos
	InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  ___headsetPos_11;
	// UnityEngine.InputSystem.InputActionProperty GraspGrabber::controllerPos
	InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  ___controllerPos_12;
	// UnityEngine.Vector3 GraspGrabber::head
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___head_13;
	// UnityEngine.Vector3 GraspGrabber::hand
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hand_14;
	// UnityEngine.Transform GraspGrabber::controller1
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___controller1_15;
	// UnityEngine.Transform GraspGrabber::controller2
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___controller2_16;
	// UnityEngine.Quaternion GraspGrabber::lastSpindleRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lastSpindleRotation_17;
	// UnityEngine.Quaternion GraspGrabber::spindleRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___spindleRotation_18;
	// System.Single GraspGrabber::PrevDistance
	float ___PrevDistance_19;

public:
	inline static int32_t get_offset_of_grabAction_4() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___grabAction_4)); }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  get_grabAction_4() const { return ___grabAction_4; }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * get_address_of_grabAction_4() { return &___grabAction_4; }
	inline void set_grabAction_4(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  value)
	{
		___grabAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grabAction_4))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___grabAction_4))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_toggleGogo_5() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___toggleGogo_5)); }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  get_toggleGogo_5() const { return ___toggleGogo_5; }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * get_address_of_toggleGogo_5() { return &___toggleGogo_5; }
	inline void set_toggleGogo_5(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  value)
	{
		___toggleGogo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___toggleGogo_5))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___toggleGogo_5))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_currentObject_6() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___currentObject_6)); }
	inline Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * get_currentObject_6() const { return ___currentObject_6; }
	inline Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D ** get_address_of_currentObject_6() { return &___currentObject_6; }
	inline void set_currentObject_6(Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * value)
	{
		___currentObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_grabbedObject_7() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___grabbedObject_7)); }
	inline Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * get_grabbedObject_7() const { return ___grabbedObject_7; }
	inline Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D ** get_address_of_grabbedObject_7() { return &___grabbedObject_7; }
	inline void set_grabbedObject_7(Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * value)
	{
		___grabbedObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grabbedObject_7), (void*)value);
	}

	inline static int32_t get_offset_of_gogoOn_8() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___gogoOn_8)); }
	inline bool get_gogoOn_8() const { return ___gogoOn_8; }
	inline bool* get_address_of_gogoOn_8() { return &___gogoOn_8; }
	inline void set_gogoOn_8(bool value)
	{
		___gogoOn_8 = value;
	}

	inline static int32_t get_offset_of_dThreshold_9() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___dThreshold_9)); }
	inline float get_dThreshold_9() const { return ___dThreshold_9; }
	inline float* get_address_of_dThreshold_9() { return &___dThreshold_9; }
	inline void set_dThreshold_9(float value)
	{
		___dThreshold_9 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_10() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___scaleFactor_10)); }
	inline float get_scaleFactor_10() const { return ___scaleFactor_10; }
	inline float* get_address_of_scaleFactor_10() { return &___scaleFactor_10; }
	inline void set_scaleFactor_10(float value)
	{
		___scaleFactor_10 = value;
	}

	inline static int32_t get_offset_of_headsetPos_11() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___headsetPos_11)); }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  get_headsetPos_11() const { return ___headsetPos_11; }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * get_address_of_headsetPos_11() { return &___headsetPos_11; }
	inline void set_headsetPos_11(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  value)
	{
		___headsetPos_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___headsetPos_11))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___headsetPos_11))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_controllerPos_12() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___controllerPos_12)); }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  get_controllerPos_12() const { return ___controllerPos_12; }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * get_address_of_controllerPos_12() { return &___controllerPos_12; }
	inline void set_controllerPos_12(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  value)
	{
		___controllerPos_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___controllerPos_12))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___controllerPos_12))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_head_13() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___head_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_head_13() const { return ___head_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_head_13() { return &___head_13; }
	inline void set_head_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___head_13 = value;
	}

	inline static int32_t get_offset_of_hand_14() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___hand_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_hand_14() const { return ___hand_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_hand_14() { return &___hand_14; }
	inline void set_hand_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___hand_14 = value;
	}

	inline static int32_t get_offset_of_controller1_15() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___controller1_15)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_controller1_15() const { return ___controller1_15; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_controller1_15() { return &___controller1_15; }
	inline void set_controller1_15(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___controller1_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller1_15), (void*)value);
	}

	inline static int32_t get_offset_of_controller2_16() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___controller2_16)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_controller2_16() const { return ___controller2_16; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_controller2_16() { return &___controller2_16; }
	inline void set_controller2_16(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___controller2_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller2_16), (void*)value);
	}

	inline static int32_t get_offset_of_lastSpindleRotation_17() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___lastSpindleRotation_17)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_lastSpindleRotation_17() const { return ___lastSpindleRotation_17; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_lastSpindleRotation_17() { return &___lastSpindleRotation_17; }
	inline void set_lastSpindleRotation_17(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___lastSpindleRotation_17 = value;
	}

	inline static int32_t get_offset_of_spindleRotation_18() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___spindleRotation_18)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_spindleRotation_18() const { return ___spindleRotation_18; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_spindleRotation_18() { return &___spindleRotation_18; }
	inline void set_spindleRotation_18(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___spindleRotation_18 = value;
	}

	inline static int32_t get_offset_of_PrevDistance_19() { return static_cast<int32_t>(offsetof(GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964, ___PrevDistance_19)); }
	inline float get_PrevDistance_19() const { return ___PrevDistance_19; }
	inline float* get_address_of_PrevDistance_19() { return &___PrevDistance_19; }
	inline void set_PrevDistance_19(float value)
	{
		___PrevDistance_19 = value;
	}
};


// PointGrabber
struct PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4  : public Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C
{
public:
	// UnityEngine.LineRenderer PointGrabber::laserPointer
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___laserPointer_4;
	// UnityEngine.Material PointGrabber::grabbablePointerMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___grabbablePointerMaterial_5;
	// UnityEngine.InputSystem.InputActionProperty PointGrabber::touchAction
	InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  ___touchAction_6;
	// UnityEngine.InputSystem.InputActionProperty PointGrabber::grabAction
	InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  ___grabAction_7;
	// UnityEngine.InputSystem.InputActionProperty PointGrabber::moveAction
	InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  ___moveAction_8;
	// UnityEngine.Material PointGrabber::lineRendererMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___lineRendererMaterial_9;
	// UnityEngine.Transform PointGrabber::grabPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___grabPoint_10;
	// Grabbable PointGrabber::grabbedObject
	Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * ___grabbedObject_11;
	// UnityEngine.Transform PointGrabber::initialParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___initialParent_12;
	// System.Single PointGrabber::maxVelocity
	float ___maxVelocity_13;

public:
	inline static int32_t get_offset_of_laserPointer_4() { return static_cast<int32_t>(offsetof(PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4, ___laserPointer_4)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_laserPointer_4() const { return ___laserPointer_4; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_laserPointer_4() { return &___laserPointer_4; }
	inline void set_laserPointer_4(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___laserPointer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserPointer_4), (void*)value);
	}

	inline static int32_t get_offset_of_grabbablePointerMaterial_5() { return static_cast<int32_t>(offsetof(PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4, ___grabbablePointerMaterial_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_grabbablePointerMaterial_5() const { return ___grabbablePointerMaterial_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_grabbablePointerMaterial_5() { return &___grabbablePointerMaterial_5; }
	inline void set_grabbablePointerMaterial_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___grabbablePointerMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grabbablePointerMaterial_5), (void*)value);
	}

	inline static int32_t get_offset_of_touchAction_6() { return static_cast<int32_t>(offsetof(PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4, ___touchAction_6)); }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  get_touchAction_6() const { return ___touchAction_6; }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * get_address_of_touchAction_6() { return &___touchAction_6; }
	inline void set_touchAction_6(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  value)
	{
		___touchAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___touchAction_6))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___touchAction_6))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_grabAction_7() { return static_cast<int32_t>(offsetof(PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4, ___grabAction_7)); }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  get_grabAction_7() const { return ___grabAction_7; }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * get_address_of_grabAction_7() { return &___grabAction_7; }
	inline void set_grabAction_7(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  value)
	{
		___grabAction_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grabAction_7))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___grabAction_7))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_moveAction_8() { return static_cast<int32_t>(offsetof(PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4, ___moveAction_8)); }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  get_moveAction_8() const { return ___moveAction_8; }
	inline InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * get_address_of_moveAction_8() { return &___moveAction_8; }
	inline void set_moveAction_8(InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63  value)
	{
		___moveAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___moveAction_8))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___moveAction_8))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineRendererMaterial_9() { return static_cast<int32_t>(offsetof(PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4, ___lineRendererMaterial_9)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_lineRendererMaterial_9() const { return ___lineRendererMaterial_9; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_lineRendererMaterial_9() { return &___lineRendererMaterial_9; }
	inline void set_lineRendererMaterial_9(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___lineRendererMaterial_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineRendererMaterial_9), (void*)value);
	}

	inline static int32_t get_offset_of_grabPoint_10() { return static_cast<int32_t>(offsetof(PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4, ___grabPoint_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_grabPoint_10() const { return ___grabPoint_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_grabPoint_10() { return &___grabPoint_10; }
	inline void set_grabPoint_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___grabPoint_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grabPoint_10), (void*)value);
	}

	inline static int32_t get_offset_of_grabbedObject_11() { return static_cast<int32_t>(offsetof(PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4, ___grabbedObject_11)); }
	inline Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * get_grabbedObject_11() const { return ___grabbedObject_11; }
	inline Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D ** get_address_of_grabbedObject_11() { return &___grabbedObject_11; }
	inline void set_grabbedObject_11(Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * value)
	{
		___grabbedObject_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grabbedObject_11), (void*)value);
	}

	inline static int32_t get_offset_of_initialParent_12() { return static_cast<int32_t>(offsetof(PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4, ___initialParent_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_initialParent_12() const { return ___initialParent_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_initialParent_12() { return &___initialParent_12; }
	inline void set_initialParent_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___initialParent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initialParent_12), (void*)value);
	}

	inline static int32_t get_offset_of_maxVelocity_13() { return static_cast<int32_t>(offsetof(PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4, ___maxVelocity_13)); }
	inline float get_maxVelocity_13() const { return ___maxVelocity_13; }
	inline float* get_address_of_maxVelocity_13() { return &___maxVelocity_13; }
	inline void set_maxVelocity_13(float value)
	{
		___maxVelocity_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m353742039FFADA1607DA5CFE1F5572DB6D98B6FA_gshared (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_gshared (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::Sleep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_Sleep_m60350AEF3E52D57FBE448CADBC06BA98DAEA2115 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7 (InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0 (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputAction/CallbackContext::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * CallbackContext_get_action_mCC0229F153DEC0E36878DEB69F710FBD2C877EA0 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector3>()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m353742039FFADA1607DA5CFE1F5572DB6D98B6FA (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *, const RuntimeMethod*))InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m353742039FFADA1607DA5CFE1F5572DB6D98B6FA_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// Grabber Grabbable::GetCurrentGrabber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * Grabbable_GetCurrentGrabber_m51DB8BBC620BB482F7F2CB8CD6E4733A8F5FE8EA_inline (Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Grabbable::SetCurrentGrabber(Grabber)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Grabbable_SetCurrentGrabber_mD5E4FC26D5BC1A75047F0F39D5D3C3C7E1A4352D_inline (Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * __this, Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * ___grabber0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Grabbable>()
inline Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Grabbable>()
inline Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * GameObject_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_mB49EB02AB488D5AC7591F7ED59231E825EF10E91 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void Grabber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grabber__ctor_m92D13CFF6552E8541433F81DD507E1D9976025CE (Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *, const RuntimeMethod*))InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Grabbable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grabbable_Start_m5467BE12BC91BABE846C20D2F189B9EE8EE1D119 (Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentGrabber = null;
		__this->set_currentGrabber_4((Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C *)NULL);
		// if (this.GetComponent<Rigidbody>())
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// this.GetComponent<Rigidbody>().Sleep();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2;
		L_2 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_2);
		Rigidbody_Sleep_m60350AEF3E52D57FBE448CADBC06BA98DAEA2115(L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Grabbable::SetCurrentGrabber(Grabber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grabbable_SetCurrentGrabber_mD5E4FC26D5BC1A75047F0F39D5D3C3C7E1A4352D (Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * __this, Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * ___grabber0, const RuntimeMethod* method)
{
	{
		// currentGrabber = grabber;
		Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * L_0 = ___grabber0;
		__this->set_currentGrabber_4(L_0);
		// }
		return;
	}
}
// Grabber Grabbable::GetCurrentGrabber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * Grabbable_GetCurrentGrabber_m51DB8BBC620BB482F7F2CB8CD6E4733A8F5FE8EA (Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * __this, const RuntimeMethod* method)
{
	{
		// return currentGrabber;
		Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * L_0 = __this->get_currentGrabber_4();
		return L_0;
	}
}
// System.Void Grabbable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grabbable__ctor_m4C73093FD99BF905804BA97B1ED27E7B28C2BB2B (Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Grabber::Grab(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grabber_Grab_m908DE1E4A491377E5EB2230F61EFBA5CF483DCE0 (Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Grabber::Release(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grabber_Release_m2F89273C8D1B916706D86ECE26D3E0171EB1AC94 (Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Grabber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grabber__ctor_m92D13CFF6552E8541433F81DD507E1D9976025CE (Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GraspGrabber::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraspGrabber_Start_m5D69CA950CFA40588010F94C5FFDCC3E0E74AD88 (GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraspGrabber_Controller_mB3874019C39CC5A9AA77E3492C36C167FDA0150C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraspGrabber_Headset_m107EFC09BB6BDAB7CDDDECC16B56684A1F23DD69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraspGrabber_Toggle_mE013CEEFDC4410F5F62FC9769985890F5C7C068E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gogoOn = false;
		__this->set_gogoOn_8((bool)0);
		// grabbedObject = null;
		__this->set_grabbedObject_7((Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D *)NULL);
		// currentObject = null;
		__this->set_currentObject_6((Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D *)NULL);
		// grabAction.action.performed += Grab;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_0 = __this->get_address_of_grabAction_4();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1;
		L_1 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_0, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_2 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_2, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 4)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_1);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_1, L_2, /*hidden argument*/NULL);
		// grabAction.action.canceled += Release;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_3 = __this->get_address_of_grabAction_4();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_4;
		L_4 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_3, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_5 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_5, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 5)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_4);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_4, L_5, /*hidden argument*/NULL);
		// toggleGogo.action.performed += Toggle;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_6 = __this->get_address_of_toggleGogo_5();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_7;
		L_7 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_6, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_8 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_8, __this, (intptr_t)((intptr_t)GraspGrabber_Toggle_mE013CEEFDC4410F5F62FC9769985890F5C7C068E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_7);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_7, L_8, /*hidden argument*/NULL);
		// headsetPos.action.performed +=Headset;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_9 = __this->get_address_of_headsetPos_11();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_10;
		L_10 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_9, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_11 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_11, __this, (intptr_t)((intptr_t)GraspGrabber_Headset_m107EFC09BB6BDAB7CDDDECC16B56684A1F23DD69_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_10);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_10, L_11, /*hidden argument*/NULL);
		// controllerPos.action.performed+=Controller;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_12 = __this->get_address_of_controllerPos_12();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_13;
		L_13 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_12, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_14 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_14, __this, (intptr_t)((intptr_t)GraspGrabber_Controller_mB3874019C39CC5A9AA77E3492C36C167FDA0150C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_13);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_13, L_14, /*hidden argument*/NULL);
		// lastSpindleRotation = Quaternion.LookRotation(controller1.position - controller2.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_controller1_15();
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = __this->get_controller2_16();
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_16, L_18, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_19, /*hidden argument*/NULL);
		__this->set_lastSpindleRotation_17(L_20);
		// }
		return;
	}
}
// System.Void GraspGrabber::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraspGrabber_OnDestroy_mF4F9CA50AA6A097316D17ADFBBDA5B21F5FDC055 (GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraspGrabber_Controller_mB3874019C39CC5A9AA77E3492C36C167FDA0150C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraspGrabber_Headset_m107EFC09BB6BDAB7CDDDECC16B56684A1F23DD69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraspGrabber_Toggle_mE013CEEFDC4410F5F62FC9769985890F5C7C068E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grabAction.action.performed -= Grab;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_0 = __this->get_address_of_grabAction_4();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1;
		L_1 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_0, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_2 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_2, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 4)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_1);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_1, L_2, /*hidden argument*/NULL);
		// grabAction.action.canceled -= Release;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_3 = __this->get_address_of_grabAction_4();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_4;
		L_4 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_3, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_5 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_5, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 5)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_4);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_4, L_5, /*hidden argument*/NULL);
		// toggleGogo.action.performed -= Toggle;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_6 = __this->get_address_of_toggleGogo_5();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_7;
		L_7 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_6, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_8 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_8, __this, (intptr_t)((intptr_t)GraspGrabber_Toggle_mE013CEEFDC4410F5F62FC9769985890F5C7C068E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_7);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_7, L_8, /*hidden argument*/NULL);
		// headsetPos.action.performed -=Headset;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_9 = __this->get_address_of_headsetPos_11();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_10;
		L_10 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_9, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_11 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_11, __this, (intptr_t)((intptr_t)GraspGrabber_Headset_m107EFC09BB6BDAB7CDDDECC16B56684A1F23DD69_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_10);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_10, L_11, /*hidden argument*/NULL);
		// controllerPos.action.performed-=Controller;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_12 = __this->get_address_of_controllerPos_12();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_13;
		L_13 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_12, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_14 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_14, __this, (intptr_t)((intptr_t)GraspGrabber_Controller_mB3874019C39CC5A9AA77E3492C36C167FDA0150C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_13);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GraspGrabber::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraspGrabber_Update_m8DE267AE639D3817F8E9BB3AE30088ADA45E7335 (GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		// if(gogoOn){
		bool L_0 = __this->get_gogoOn_8();
		if (!L_0)
		{
			goto IL_00ad;
		}
	}
	{
		// this.transform.localRotation = Quaternion.identity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_1, L_2, /*hidden argument*/NULL);
		// Vector3 head2 = new Vector3(head.x,0,head.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_head_13();
		float L_4 = L_3->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_head_13();
		float L_6 = L_5->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), L_4, (0.0f), L_6, /*hidden argument*/NULL);
		// Vector3 hand2 = new Vector3(hand.x,0,hand.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_hand_14();
		float L_9 = L_8->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_hand_14();
		float L_11 = L_10->get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_9, (0.0f), L_11, /*hidden argument*/NULL);
		// float distance = Vector3.Distance(head2,hand2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		float L_13;
		L_13 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_7, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// if(distance >= dThreshold){
		float L_14 = V_1;
		float L_15 = __this->get_dThreshold_9();
		if ((!(((float)L_14) >= ((float)L_15))))
		{
			goto IL_01c1;
		}
	}
	{
		// this.transform.localPosition = new Vector3(0,0,hand.z)*scaleFactor*(distance/.008f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_hand_14();
		float L_18 = L_17->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), (0.0f), (0.0f), L_18, /*hidden argument*/NULL);
		float L_20 = __this->get_scaleFactor_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_19, L_20, /*hidden argument*/NULL);
		float L_22 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, ((float)((float)L_22/(float)(0.00800000038f))), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_16, L_23, /*hidden argument*/NULL);
		// } else{
		return;
	}

IL_00ad:
	{
		// this.transform.localPosition = new Vector3(0,0,0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_24, L_25, /*hidden argument*/NULL);
		// Quaternion spindleRotation = Quaternion.LookRotation(controller1.position - controller2.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = __this->get_controller1_15();
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = __this->get_controller2_16();
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_27, L_29, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31;
		L_31 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		// Quaternion rotationChange = spindleRotation * Quaternion.Inverse(lastSpindleRotation);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33 = __this->get_lastSpindleRotation_17();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_33, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_35;
		L_35 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_32, L_34, /*hidden argument*/NULL);
		V_3 = L_35;
		// grabbedObject.transform.rotation = rotationChange * grabbedObject.transform.rotation;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_36 = __this->get_grabbedObject_7();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_36, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38 = V_3;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_39 = __this->get_grabbedObject_7();
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41;
		L_41 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_40, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_42;
		L_42 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_38, L_41, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_37, L_42, /*hidden argument*/NULL);
		// lastSpindleRotation = spindleRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_43 = V_2;
		__this->set_lastSpindleRotation_17(L_43);
		// grabbedObject.transform.localPosition = .5f*(controller1.position-controller2.position);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_44 = __this->get_grabbedObject_7();
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46 = __this->get_controller1_15();
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48 = __this->get_controller2_16();
		NullCheck(L_48);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_48, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_47, L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((0.5f), L_50, /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_45, L_51, /*hidden argument*/NULL);
		// float distance = Vector3.Distance(controller1.position,controller2.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52 = __this->get_controller1_15();
		NullCheck(L_52);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_52, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54 = __this->get_controller2_16();
		NullCheck(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_54, /*hidden argument*/NULL);
		float L_56;
		L_56 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_53, L_55, /*hidden argument*/NULL);
		V_4 = L_56;
		// grabbedObject.transform.localScale += new Vector3(distance-PrevDistance,distance-PrevDistance,distance-PrevDistance);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_57 = __this->get_grabbedObject_7();
		NullCheck(L_57);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_57, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59 = L_58;
		NullCheck(L_59);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_59, /*hidden argument*/NULL);
		float L_61 = V_4;
		float L_62 = __this->get_PrevDistance_19();
		float L_63 = V_4;
		float L_64 = __this->get_PrevDistance_19();
		float L_65 = V_4;
		float L_66 = __this->get_PrevDistance_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_67), ((float)il2cpp_codegen_subtract((float)L_61, (float)L_62)), ((float)il2cpp_codegen_subtract((float)L_63, (float)L_64)), ((float)il2cpp_codegen_subtract((float)L_65, (float)L_66)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_60, L_67, /*hidden argument*/NULL);
		NullCheck(L_59);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_59, L_68, /*hidden argument*/NULL);
		// PrevDistance = distance;
		float L_69 = V_4;
		__this->set_PrevDistance_19(L_69);
	}

IL_01c1:
	{
		// }
		return;
	}
}
// System.Void GraspGrabber::Toggle(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraspGrabber_Toggle_mE013CEEFDC4410F5F62FC9769985890F5C7C068E (GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964 * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	{
		// gogoOn = !gogoOn;
		bool L_0 = __this->get_gogoOn_8();
		__this->set_gogoOn_8((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void GraspGrabber::Headset(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraspGrabber_Headset_m107EFC09BB6BDAB7CDDDECC16B56684A1F23DD69 (GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964 * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m353742039FFADA1607DA5CFE1F5572DB6D98B6FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// head = context.action.ReadValue<Vector3>();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_0;
		L_0 = CallbackContext_get_action_mCC0229F153DEC0E36878DEB69F710FBD2C877EA0((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(&___context0), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m353742039FFADA1607DA5CFE1F5572DB6D98B6FA(L_0, /*hidden argument*/InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m353742039FFADA1607DA5CFE1F5572DB6D98B6FA_RuntimeMethod_var);
		__this->set_head_13(L_1);
		// }
		return;
	}
}
// System.Void GraspGrabber::Controller(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraspGrabber_Controller_mB3874019C39CC5A9AA77E3492C36C167FDA0150C (GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964 * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m353742039FFADA1607DA5CFE1F5572DB6D98B6FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hand = context.action.ReadValue<Vector3>();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_0;
		L_0 = CallbackContext_get_action_mCC0229F153DEC0E36878DEB69F710FBD2C877EA0((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(&___context0), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m353742039FFADA1607DA5CFE1F5572DB6D98B6FA(L_0, /*hidden argument*/InputAction_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m353742039FFADA1607DA5CFE1F5572DB6D98B6FA_RuntimeMethod_var);
		__this->set_hand_14(L_1);
		// }
		return;
	}
}
// System.Void GraspGrabber::Grab(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraspGrabber_Grab_mA002E09A8AC06EAEE937EC5CB5EF4FF2037A0EE1 (GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964 * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// PrevDistance = 1.0f;
		__this->set_PrevDistance_19((1.0f));
		// if (currentObject && grabbedObject == null)
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_0 = __this->get_currentObject_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00f7;
		}
	}
	{
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_2 = __this->get_grabbedObject_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00f7;
		}
	}
	{
		// if (currentObject.GetCurrentGrabber() != null)
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_4 = __this->get_currentObject_6();
		NullCheck(L_4);
		Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * L_5;
		L_5 = Grabbable_GetCurrentGrabber_m51DB8BBC620BB482F7F2CB8CD6E4733A8F5FE8EA_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// currentObject.GetCurrentGrabber().Release(new InputAction.CallbackContext());
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_7 = __this->get_currentObject_6();
		NullCheck(L_7);
		Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * L_8;
		L_8 = Grabbable_GetCurrentGrabber_m51DB8BBC620BB482F7F2CB8CD6E4733A8F5FE8EA_inline(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B ));
		CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  L_9 = V_0;
		NullCheck(L_8);
		VirtActionInvoker1< CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  >::Invoke(5 /* System.Void Grabber::Release(UnityEngine.InputSystem.InputAction/CallbackContext) */, L_8, L_9);
	}

IL_0058:
	{
		// grabbedObject = currentObject;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_10 = __this->get_currentObject_6();
		__this->set_grabbedObject_7(L_10);
		// grabbedObject.SetCurrentGrabber(this);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_11 = __this->get_grabbedObject_7();
		NullCheck(L_11);
		Grabbable_SetCurrentGrabber_mD5E4FC26D5BC1A75047F0F39D5D3C3C7E1A4352D_inline(L_11, __this, /*hidden argument*/NULL);
		// if (grabbedObject.GetComponent<Rigidbody>())
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_12 = __this->get_grabbedObject_7();
		NullCheck(L_12);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_13;
		L_13 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_12, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00a4;
		}
	}
	{
		// grabbedObject.GetComponent<Rigidbody>().isKinematic = true;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_15 = __this->get_grabbedObject_7();
		NullCheck(L_15);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_16;
		L_16 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_15, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_16);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_16, (bool)1, /*hidden argument*/NULL);
		// grabbedObject.GetComponent<Rigidbody>().useGravity = false;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_17 = __this->get_grabbedObject_7();
		NullCheck(L_17);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_18;
		L_18 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_17, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_18);
		Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096(L_18, (bool)0, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		// grabbedObject.transform.parent = this.transform;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_19 = __this->get_grabbedObject_7();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_20, L_21, /*hidden argument*/NULL);
		// if(!gogoOn){
		bool L_22 = __this->get_gogoOn_8();
		if (L_22)
		{
			goto IL_00f7;
		}
	}
	{
		// grabbedObject.transform.localPosition= .5f*(controller1.localPosition-controller2.localPosition);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_23 = __this->get_grabbedObject_7();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = __this->get_controller1_15();
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_25, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = __this->get_controller2_16();
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_26, L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((0.5f), L_29, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_24, L_30, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		// }
		return;
	}
}
// System.Void GraspGrabber::Release(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraspGrabber_Release_m0DC52A1501D7E1D1B9DACF16CB14D3C1B5CED884 (GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964 * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (grabbedObject)
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_0 = __this->get_grabbedObject_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0065;
		}
	}
	{
		// if (grabbedObject.GetComponent<Rigidbody>())
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_2 = __this->get_grabbedObject_7();
		NullCheck(L_2);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3;
		L_3 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_2, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// grabbedObject.GetComponent<Rigidbody>().isKinematic = false;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_5 = __this->get_grabbedObject_7();
		NullCheck(L_5);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_6;
		L_6 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_5, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_6);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_6, (bool)0, /*hidden argument*/NULL);
		// grabbedObject.GetComponent<Rigidbody>().useGravity = true;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_7 = __this->get_grabbedObject_7();
		NullCheck(L_7);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_8;
		L_8 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_7, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_8);
		Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// grabbedObject.SetCurrentGrabber(null);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_9 = __this->get_grabbedObject_7();
		NullCheck(L_9);
		Grabbable_SetCurrentGrabber_mD5E4FC26D5BC1A75047F0F39D5D3C3C7E1A4352D_inline(L_9, (Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C *)NULL, /*hidden argument*/NULL);
		// grabbedObject.transform.parent = null;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_10 = __this->get_grabbedObject_7();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_11, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// grabbedObject = null;
		__this->set_grabbedObject_7((Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D *)NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void GraspGrabber::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraspGrabber_OnTriggerEnter_m8DF11B326FBA7FDA8152D308FBA22C54F0FBA181 (GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_mB49EB02AB488D5AC7591F7ED59231E825EF10E91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentObject == null && other.GetComponent<Grabbable>())
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_0 = __this->get_currentObject_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2 = ___other0;
		NullCheck(L_2);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_3;
		L_3 = Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC(L_2, /*hidden argument*/Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// currentObject = other.gameObject.GetComponent<Grabbable>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5 = ___other0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_7;
		L_7 = GameObject_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_mB49EB02AB488D5AC7591F7ED59231E825EF10E91(L_6, /*hidden argument*/GameObject_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_mB49EB02AB488D5AC7591F7ED59231E825EF10E91_RuntimeMethod_var);
		__this->set_currentObject_6(L_7);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void GraspGrabber::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraspGrabber_OnTriggerExit_m12826EB918C7C41CEC5FB02A8E951B2DFDF601E1 (GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentObject)
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_0 = __this->get_currentObject_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// if (other.GetComponent<Grabbable>() && currentObject.GetInstanceID() == other.GetComponent<Grabbable>().GetInstanceID())
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2 = ___other0;
		NullCheck(L_2);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_3;
		L_3 = Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC(L_2, /*hidden argument*/Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_5 = __this->get_currentObject_6();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_5, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_7 = ___other0;
		NullCheck(L_7);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_8;
		L_8 = Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC(L_7, /*hidden argument*/Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC_RuntimeMethod_var);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_9))))
		{
			goto IL_0039;
		}
	}
	{
		// currentObject = null;
		__this->set_currentObject_6((Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D *)NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void GraspGrabber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraspGrabber__ctor_m699593E7C7EA36E7BAF83946DD7C7EE2D5807DF2 (GraspGrabber_tCE962968F0A7C3D7D03E2BE11CBB50EE027D9964 * __this, const RuntimeMethod* method)
{
	{
		// float dThreshold = .05f;
		__this->set_dThreshold_9((0.0500000007f));
		// float scaleFactor = 3.0f;
		__this->set_scaleFactor_10((3.0f));
		Grabber__ctor_m92D13CFF6552E8541433F81DD507E1D9976025CE(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PointGrabber::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointGrabber_Start_m3962E158EF13EEE8EE3EBBBE45A4783C70DA011D (PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointGrabber_Move_m842EBEB01B504CB708A5B379483EC6BAC557E41C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointGrabber_TouchDown_m37EACD748A82FCB5C49BDDAAFACEFBC994D784E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointGrabber_TouchUp_m67E08DB8A874A5F3B713019BFFC0A8ACBB363316_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral797DF3779D087A8ACC3BF2CE5961D7AB4E279F19);
		s_Il2CppMethodInitialized = true;
	}
	{
		// laserPointer.enabled = false;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_laserPointer_4();
		NullCheck(L_0);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_0, (bool)0, /*hidden argument*/NULL);
		// lineRendererMaterial = laserPointer.material;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_1 = __this->get_laserPointer_4();
		NullCheck(L_1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_1, /*hidden argument*/NULL);
		__this->set_lineRendererMaterial_9(L_2);
		// grabPoint = new GameObject().transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_3, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		__this->set_grabPoint_10(L_4);
		// grabPoint.name = "Grab Point";
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_grabPoint_10();
		NullCheck(L_5);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_5, _stringLiteral797DF3779D087A8ACC3BF2CE5961D7AB4E279F19, /*hidden argument*/NULL);
		// grabPoint.parent = this.transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_grabPoint_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_6, L_7, /*hidden argument*/NULL);
		// grabbedObject = null;
		__this->set_grabbedObject_11((Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D *)NULL);
		// initialParent = null;
		__this->set_initialParent_12((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// grabAction.action.performed += Grab;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_8 = __this->get_address_of_grabAction_7();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_9;
		L_9 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_8, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_10 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_10, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 4)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_9);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_9, L_10, /*hidden argument*/NULL);
		// grabAction.action.canceled += Release;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_11 = __this->get_address_of_grabAction_7();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_12;
		L_12 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_11, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_13 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_13, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 5)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_12);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_12, L_13, /*hidden argument*/NULL);
		// moveAction.action.performed+= Move;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_14 = __this->get_address_of_moveAction_8();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_15;
		L_15 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_14, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_16 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_16, __this, (intptr_t)((intptr_t)PointGrabber_Move_m842EBEB01B504CB708A5B379483EC6BAC557E41C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_15);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_15, L_16, /*hidden argument*/NULL);
		// touchAction.action.performed += TouchDown;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_17 = __this->get_address_of_touchAction_6();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_18;
		L_18 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_17, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_19 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_19, __this, (intptr_t)((intptr_t)PointGrabber_TouchDown_m37EACD748A82FCB5C49BDDAAFACEFBC994D784E2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_18);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_18, L_19, /*hidden argument*/NULL);
		// touchAction.action.canceled += TouchUp;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_20 = __this->get_address_of_touchAction_6();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_21;
		L_21 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_20, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_22 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_22, __this, (intptr_t)((intptr_t)PointGrabber_TouchUp_m67E08DB8A874A5F3B713019BFFC0A8ACBB363316_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_21);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_21, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PointGrabber::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointGrabber_OnDestroy_mC351DECF1414148E49F6078D1E3C782F774FB320 (PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointGrabber_Move_m842EBEB01B504CB708A5B379483EC6BAC557E41C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointGrabber_TouchDown_m37EACD748A82FCB5C49BDDAAFACEFBC994D784E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointGrabber_TouchUp_m67E08DB8A874A5F3B713019BFFC0A8ACBB363316_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grabAction.action.performed -= Grab;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_0 = __this->get_address_of_grabAction_7();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1;
		L_1 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_0, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_2 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_2, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 4)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_1);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_1, L_2, /*hidden argument*/NULL);
		// grabAction.action.canceled -= Release;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_3 = __this->get_address_of_grabAction_7();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_4;
		L_4 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_3, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_5 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_5, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 5)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_4);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_4, L_5, /*hidden argument*/NULL);
		// moveAction.action.performed-= Move;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_6 = __this->get_address_of_moveAction_8();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_7;
		L_7 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_6, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_8 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_8, __this, (intptr_t)((intptr_t)PointGrabber_Move_m842EBEB01B504CB708A5B379483EC6BAC557E41C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_7);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_7, L_8, /*hidden argument*/NULL);
		// touchAction.action.performed -= TouchDown;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_9 = __this->get_address_of_touchAction_6();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_10;
		L_10 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_9, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_11 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_11, __this, (intptr_t)((intptr_t)PointGrabber_TouchDown_m37EACD748A82FCB5C49BDDAAFACEFBC994D784E2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_10);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_10, L_11, /*hidden argument*/NULL);
		// touchAction.action.canceled -= TouchUp;
		InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 * L_12 = __this->get_address_of_touchAction_6();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_13;
		L_13 = InputActionProperty_get_action_mC27EF3EBB6F0A1C209E7A2853EEFAAAF7250EEA7((InputActionProperty_tC582766B1DF4887C0E0A9076101E3DFAF56A4E63 *)L_12, /*hidden argument*/NULL);
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_14 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_14, __this, (intptr_t)((intptr_t)PointGrabber_TouchUp_m67E08DB8A874A5F3B713019BFFC0A8ACBB363316_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_13);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PointGrabber::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointGrabber_Update_mC519A813D9C238AA01061AA83978117A599D6F36 (PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (laserPointer.enabled)
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_laserPointer_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00c3;
		}
	}
	{
		// if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_4, L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_3, L_6, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0092;
		}
	}
	{
		// laserPointer.SetPosition(1, new Vector3(0, 0, hit.distance));
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_8 = __this->get_laserPointer_4();
		float L_9;
		L_9 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (0.0f), (0.0f), L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_8, 1, L_10, /*hidden argument*/NULL);
		// if (hit.collider.GetComponent<Grabbable>())
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_11;
		L_11 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_11);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_12;
		L_12 = Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC(L_11, /*hidden argument*/Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		// laserPointer.material = grabbablePointerMaterial;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_14 = __this->get_laserPointer_4();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_grabbablePointerMaterial_5();
		NullCheck(L_14);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0080:
	{
		// laserPointer.material = lineRendererMaterial;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_16 = __this->get_laserPointer_4();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17 = __this->get_lineRendererMaterial_9();
		NullCheck(L_16);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0092:
	{
		// laserPointer.SetPosition(1, new Vector3(0, 0, 100));
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_18 = __this->get_laserPointer_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), (0.0f), (0.0f), (100.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_18, 1, L_19, /*hidden argument*/NULL);
		// laserPointer.material = lineRendererMaterial;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_20 = __this->get_laserPointer_4();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = __this->get_lineRendererMaterial_9();
		NullCheck(L_20);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_20, L_21, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void PointGrabber::Grab(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointGrabber_Grab_m1010D9650BA0D31EA8442B6A51C225F68398E58F (PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4 * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_2, L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_1, L_4, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0119;
		}
	}
	{
		// if (hit.collider.GetComponent<Grabbable>())
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_6;
		L_6 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_6);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_7;
		L_7 = Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC(L_6, /*hidden argument*/Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0119;
		}
	}
	{
		// grabPoint.localPosition = new Vector3(0, 0, hit.distance);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_grabPoint_10();
		float L_10;
		L_10 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), (0.0f), (0.0f), L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_9, L_11, /*hidden argument*/NULL);
		// if (hit.collider.GetComponent<Grabbable>().GetCurrentGrabber() != null)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_12;
		L_12 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_12);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_13;
		L_13 = Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC(L_12, /*hidden argument*/Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC_RuntimeMethod_var);
		NullCheck(L_13);
		Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * L_14;
		L_14 = Grabbable_GetCurrentGrabber_m51DB8BBC620BB482F7F2CB8CD6E4733A8F5FE8EA_inline(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009b;
		}
	}
	{
		// hit.collider.GetComponent<Grabbable>().GetCurrentGrabber().Release(new InputAction.CallbackContext());
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_16;
		L_16 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_16);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_17;
		L_17 = Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC(L_16, /*hidden argument*/Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC_RuntimeMethod_var);
		NullCheck(L_17);
		Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * L_18;
		L_18 = Grabbable_GetCurrentGrabber_m51DB8BBC620BB482F7F2CB8CD6E4733A8F5FE8EA_inline(L_17, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B ));
		CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  L_19 = V_1;
		NullCheck(L_18);
		VirtActionInvoker1< CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  >::Invoke(5 /* System.Void Grabber::Release(UnityEngine.InputSystem.InputAction/CallbackContext) */, L_18, L_19);
	}

IL_009b:
	{
		// grabbedObject = hit.collider.GetComponent<Grabbable>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_20;
		L_20 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_20);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_21;
		L_21 = Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC(L_20, /*hidden argument*/Component_GetComponent_TisGrabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D_m70CE8B5A4D0B9698053D07CEA8FDE39E5DE20ACC_RuntimeMethod_var);
		__this->set_grabbedObject_11(L_21);
		// grabbedObject.SetCurrentGrabber(this);
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_22 = __this->get_grabbedObject_11();
		NullCheck(L_22);
		Grabbable_SetCurrentGrabber_mD5E4FC26D5BC1A75047F0F39D5D3C3C7E1A4352D_inline(L_22, __this, /*hidden argument*/NULL);
		// if (grabbedObject.GetComponent<Rigidbody>())
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_23 = __this->get_grabbedObject_11();
		NullCheck(L_23);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_24;
		L_24 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_23, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ed;
		}
	}
	{
		// grabbedObject.GetComponent<Rigidbody>().isKinematic = true;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_26 = __this->get_grabbedObject_11();
		NullCheck(L_26);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_27;
		L_27 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_26, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_27);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_27, (bool)1, /*hidden argument*/NULL);
		// grabbedObject.GetComponent<Rigidbody>().useGravity = false;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_28 = __this->get_grabbedObject_11();
		NullCheck(L_28);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_29;
		L_29 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_28, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_29);
		Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096(L_29, (bool)0, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		// initialParent = grabbedObject.transform.parent;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_30 = __this->get_grabbedObject_11();
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_31, /*hidden argument*/NULL);
		__this->set_initialParent_12(L_32);
		// grabbedObject.transform.parent = grabPoint;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_33 = __this->get_grabbedObject_11();
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_33, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = __this->get_grabPoint_10();
		NullCheck(L_34);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_34, L_35, /*hidden argument*/NULL);
	}

IL_0119:
	{
		// }
		return;
	}
}
// System.Void PointGrabber::Move(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointGrabber_Move_m842EBEB01B504CB708A5B379483EC6BAC557E41C (PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4 * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 xMov = Time.deltaTime*maxVelocity*context.action.ReadValue<Vector2>();
		float L_0;
		L_0 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_1 = __this->get_maxVelocity_13();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_2;
		L_2 = CallbackContext_get_action_mCC0229F153DEC0E36878DEB69F710FBD2C877EA0((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(&___context0), /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F(L_2, /*hidden argument*/InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// grabPoint.transform.Translate(0,0,xMov.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_grabPoint_10();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		float L_8 = L_7.get_y_1();
		NullCheck(L_6);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_6, (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PointGrabber::Release(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointGrabber_Release_m825A3BDA0F4736261B9F368DA855258E5963D88C (PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4 * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (grabbedObject)
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_0 = __this->get_grabbedObject_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005e;
		}
	}
	{
		// if (grabbedObject.GetComponent<Rigidbody>())
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_2 = __this->get_grabbedObject_11();
		NullCheck(L_2);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3;
		L_3 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_2, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// grabbedObject.GetComponent<Rigidbody>().isKinematic = false;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_5 = __this->get_grabbedObject_11();
		NullCheck(L_5);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_6;
		L_6 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_5, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_6);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_6, (bool)0, /*hidden argument*/NULL);
		// grabbedObject.GetComponent<Rigidbody>().useGravity = true;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_7 = __this->get_grabbedObject_11();
		NullCheck(L_7);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_8;
		L_8 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_7, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_8);
		Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// grabbedObject.transform.parent = initialParent;
		Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * L_9 = __this->get_grabbedObject_11();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_initialParent_12();
		NullCheck(L_10);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_10, L_11, /*hidden argument*/NULL);
		// grabbedObject = null;
		__this->set_grabbedObject_11((Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D *)NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void PointGrabber::TouchDown(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointGrabber_TouchDown_m37EACD748A82FCB5C49BDDAAFACEFBC994D784E2 (PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4 * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	{
		// laserPointer.enabled = true;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_laserPointer_4();
		NullCheck(L_0);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PointGrabber::TouchUp(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointGrabber_TouchUp_m67E08DB8A874A5F3B713019BFFC0A8ACBB363316 (PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4 * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	{
		// laserPointer.enabled = false;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_laserPointer_4();
		NullCheck(L_0);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PointGrabber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointGrabber__ctor_mE297317FAAFF10751F09F18FFBD4762760B49148 (PointGrabber_t8DD811AD90674157DDCBD4EDECA756032167BBE4 * __this, const RuntimeMethod* method)
{
	{
		// float maxVelocity = 6.0f;
		__this->set_maxVelocity_13((6.0f));
		Grabber__ctor_m92D13CFF6552E8541433F81DD507E1D9976025CE(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * Grabbable_GetCurrentGrabber_m51DB8BBC620BB482F7F2CB8CD6E4733A8F5FE8EA_inline (Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * __this, const RuntimeMethod* method)
{
	{
		// return currentGrabber;
		Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * L_0 = __this->get_currentGrabber_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Grabbable_SetCurrentGrabber_mD5E4FC26D5BC1A75047F0F39D5D3C3C7E1A4352D_inline (Grabbable_t716BE3F6B040EBD25B3AD20130AA36D6DC72A46D * __this, Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * ___grabber0, const RuntimeMethod* method)
{
	{
		// currentGrabber = grabber;
		Grabber_t8138707D8F503D03F492AB8FD854B5201CA2911C * L_0 = ___grabber0;
		__this->set_currentGrabber_4(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a1;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a1;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
