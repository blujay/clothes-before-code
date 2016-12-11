#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// TextController
struct TextController_t949652095;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_TextController949652095.h"
#include "AssemblyU2DCSharp_TextController949652095MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "AssemblyU2DCSharp_TextController_States2214569690.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "AssemblyU2DCSharp_TextController_States2214569690MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextController::.ctor()
extern "C"  void TextController__ctor_m4032868830 (TextController_t949652095 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextController::Start()
extern "C"  void TextController_Start_m3645149610 (TextController_t949652095 * __this, const MethodInfo* method)
{
	{
		__this->set_myState_3(0);
		return;
	}
}
// System.Void TextController::Update()
extern Il2CppClass* States_t2214569690_il2cpp_TypeInfo_var;
extern const uint32_t TextController_Update_m1619616711_MetadataUsageId;
extern "C"  void TextController_Update_m1619616711 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_Update_m1619616711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_myState_3();
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(States_t2214569690_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_myState_3();
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		TextController_bedroom_0_m1170847197(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_0026:
	{
		int32_t L_4 = __this->get_myState_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		TextController_bedroom_1_m1170847102(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_003d:
	{
		int32_t L_5 = __this->get_myState_3();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0054;
		}
	}
	{
		TextController_bedroom_2_m1170847263(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_0054:
	{
		int32_t L_6 = __this->get_myState_3();
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_006b;
		}
	}
	{
		TextController_drack_f_0_m410826103(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_006b:
	{
		int32_t L_7 = __this->get_myState_3();
		if ((!(((uint32_t)L_7) == ((uint32_t)4))))
		{
			goto IL_0082;
		}
	}
	{
		TextController_drack_f_1_m410826008(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_0082:
	{
		int32_t L_8 = __this->get_myState_3();
		if ((!(((uint32_t)L_8) == ((uint32_t)5))))
		{
			goto IL_0099;
		}
	}
	{
		TextController_drack_f_2_m410826169(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_0099:
	{
		int32_t L_9 = __this->get_myState_3();
		if ((!(((uint32_t)L_9) == ((uint32_t)6))))
		{
			goto IL_00b0;
		}
	}
	{
		TextController_drack_f_3_m410826074(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_00b0:
	{
		int32_t L_10 = __this->get_myState_3();
		if ((!(((uint32_t)L_10) == ((uint32_t)7))))
		{
			goto IL_00c7;
		}
	}
	{
		TextController_drack_f_4_m410826235(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_00c7:
	{
		int32_t L_11 = __this->get_myState_3();
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00df;
		}
	}
	{
		TextController_drack_e_0_m410825082(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_00df:
	{
		int32_t L_12 = __this->get_myState_3();
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00f7;
		}
	}
	{
		TextController_drack_e_1_m410825049(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_00f7:
	{
		int32_t L_13 = __this->get_myState_3();
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_010f;
		}
	}
	{
		TextController_drack_e_2_m410825016(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_010f:
	{
		int32_t L_14 = __this->get_myState_3();
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0127;
		}
	}
	{
		TextController_drack_e_3_m410824983(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_0127:
	{
		int32_t L_15 = __this->get_myState_3();
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_013f;
		}
	}
	{
		TextController_wmachine_f_0_m1145982388(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_013f:
	{
		int32_t L_16 = __this->get_myState_3();
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0157;
		}
	}
	{
		TextController_wmachine_f_1_m3895068719(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_0157:
	{
		int32_t L_17 = __this->get_myState_3();
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_016f;
		}
	}
	{
		TextController_wmachine_f_2_m863657386(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_016f:
	{
		int32_t L_18 = __this->get_myState_3();
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0187;
		}
	}
	{
		TextController_wmachine_f_3_m3612743717(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_0187:
	{
		int32_t L_19 = __this->get_myState_3();
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_019f;
		}
	}
	{
		TextController_wmachine_e_0_m1500921093(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_019f:
	{
		int32_t L_20 = __this->get_myState_3();
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_01b7;
		}
	}
	{
		TextController_wmachine_e_1_m1642083594(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_01b7:
	{
		int32_t L_21 = __this->get_myState_3();
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_01cf;
		}
	}
	{
		TextController_wmachine_e_2_m1783246095(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_01cf:
	{
		int32_t L_22 = __this->get_myState_3();
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_01e7;
		}
	}
	{
		TextController_wmachine_e_3_m1924408596(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_01e7:
	{
		int32_t L_23 = __this->get_myState_3();
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_01ff;
		}
	}
	{
		TextController_laundry_f_0_m580117293(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_01ff:
	{
		int32_t L_24 = __this->get_myState_3();
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_0217;
		}
	}
	{
		TextController_laundry_f_1_m580117326(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_0217:
	{
		int32_t L_25 = __this->get_myState_3();
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_022f;
		}
	}
	{
		TextController_laundry_f_2_m580117227(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_022f:
	{
		int32_t L_26 = __this->get_myState_3();
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)27)))))
		{
			goto IL_0247;
		}
	}
	{
		TextController_laundry_f_3_m580117260(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_0247:
	{
		int32_t L_27 = __this->get_myState_3();
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)28)))))
		{
			goto IL_025f;
		}
	}
	{
		TextController_laundry_e_0_m580116140(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_025f:
	{
		int32_t L_28 = __this->get_myState_3();
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)29)))))
		{
			goto IL_0277;
		}
	}
	{
		TextController_laundry_e_1_m580116235(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_0277:
	{
		int32_t L_29 = __this->get_myState_3();
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_028f;
		}
	}
	{
		TextController_bucket_0_m2861110823(__this, /*hidden argument*/NULL);
		goto IL_02a2;
	}

IL_028f:
	{
		int32_t L_30 = __this->get_myState_3();
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_02a2;
		}
	}
	{
		TextController_bucket_1_m2719948322(__this, /*hidden argument*/NULL);
	}

IL_02a2:
	{
		return;
	}
}
// System.Void TextController::bedroom_0()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2835699239;
extern const uint32_t TextController_bedroom_0_m1170847197_MetadataUsageId;
extern "C"  void TextController_bedroom_0_m1170847197 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_bedroom_0_m1170847197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2835699239);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(3);
		goto IL_0055;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_myState_3(((int32_t)24));
		goto IL_0055;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		__this->set_myState_3(((int32_t)14));
	}

IL_0055:
	{
		return;
	}
}
// System.Void TextController::bedroom_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral558735979;
extern const uint32_t TextController_bedroom_1_m1170847102_MetadataUsageId;
extern "C"  void TextController_bedroom_1_m1170847102 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_bedroom_1_m1170847102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral558735979);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(7);
		goto IL_0055;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_myState_3(((int32_t)27));
		goto IL_0055;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		__this->set_myState_3(((int32_t)19));
	}

IL_0055:
	{
		return;
	}
}
// System.Void TextController::bedroom_2()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3190785762;
extern const uint32_t TextController_bedroom_2_m1170847263_MetadataUsageId;
extern "C"  void TextController_bedroom_2_m1170847263 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_bedroom_2_m1170847263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3190785762);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(0);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::drack_f_0()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4064481872;
extern const uint32_t TextController_drack_f_0_m410826103_MetadataUsageId;
extern "C"  void TextController_drack_f_0_m410826103 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_drack_f_0_m410826103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4064481872);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)98), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)30));
		goto IL_0055;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)102), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		__this->set_myState_3(((int32_t)10));
		goto IL_0055;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		__this->set_myState_3(0);
	}

IL_0055:
	{
		return;
	}
}
// System.Void TextController::drack_f_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral155909383;
extern const uint32_t TextController_drack_f_1_m410826008_MetadataUsageId;
extern "C"  void TextController_drack_f_1_m410826008 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_drack_f_1_m410826008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral155909383);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)25));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::drack_f_2()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral430830681;
extern const uint32_t TextController_drack_f_2_m410826169_MetadataUsageId;
extern "C"  void TextController_drack_f_2_m410826169 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_drack_f_2_m410826169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral430830681);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)102), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)13));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::drack_f_3()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1204204309;
extern const uint32_t TextController_drack_f_3_m410826074_MetadataUsageId;
extern "C"  void TextController_drack_f_3_m410826074 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_drack_f_3_m410826074_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1204204309);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(1);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::drack_f_4()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3714017618;
extern const uint32_t TextController_drack_f_4_m410826235_MetadataUsageId;
extern "C"  void TextController_drack_f_4_m410826235 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_drack_f_4_m410826235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3714017618);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)27));
		goto IL_003c;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_myState_3(1);
	}

IL_003c:
	{
		return;
	}
}
// System.Void TextController::drack_e_0()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1388516294;
extern const uint32_t TextController_drack_e_0_m410825082_MetadataUsageId;
extern "C"  void TextController_drack_e_0_m410825082 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_drack_e_0_m410825082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1388516294);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)14));
		goto IL_003d;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)98), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		__this->set_myState_3(((int32_t)31));
	}

IL_003d:
	{
		return;
	}
}
// System.Void TextController::drack_e_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1949830115;
extern const uint32_t TextController_drack_e_1_m410825049_MetadataUsageId;
extern "C"  void TextController_drack_e_1_m410825049 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_drack_e_1_m410825049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1949830115);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)15));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::drack_e_2()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2863724292;
extern const uint32_t TextController_drack_e_2_m410825016_MetadataUsageId;
extern "C"  void TextController_drack_e_2_m410825016 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_drack_e_2_m410825016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2863724292);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)104), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(6);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::drack_e_3()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral379826593;
extern const uint32_t TextController_drack_e_3_m410824983_MetadataUsageId;
extern "C"  void TextController_drack_e_3_m410824983 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_drack_e_3_m410824983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral379826593);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)26));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::laundry_f_0()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3235504032;
extern const uint32_t TextController_laundry_f_0_m580117293_MetadataUsageId;
extern "C"  void TextController_laundry_f_0_m580117293 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_laundry_f_0_m580117293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3235504032);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(0);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::laundry_f_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2675907375;
extern const uint32_t TextController_laundry_f_1_m580117326_MetadataUsageId;
extern "C"  void TextController_laundry_f_1_m580117326 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_laundry_f_1_m580117326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2675907375);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(4);
		goto IL_003c;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)102), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_myState_3(((int32_t)28));
	}

IL_003c:
	{
		return;
	}
}
// System.Void TextController::laundry_f_2()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral671094580;
extern const uint32_t TextController_laundry_f_2_m580117227_MetadataUsageId;
extern "C"  void TextController_laundry_f_2_m580117227 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_laundry_f_2_m580117227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral671094580);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)15));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::laundry_f_3()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1370791928;
extern const uint32_t TextController_laundry_f_3_m580117260_MetadataUsageId;
extern "C"  void TextController_laundry_f_3_m580117260 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_laundry_f_3_m580117260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1370791928);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)102), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)29));
		goto IL_003c;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_myState_3(1);
	}

IL_003c:
	{
		return;
	}
}
// System.Void TextController::laundry_e_0()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral639450459;
extern const uint32_t TextController_laundry_e_0_m580116140_MetadataUsageId;
extern "C"  void TextController_laundry_e_0_m580116140 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_laundry_e_0_m580116140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral639450459);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)16));
		goto IL_003c;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_myState_3(5);
	}

IL_003c:
	{
		return;
	}
}
// System.Void TextController::laundry_e_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4068503691;
extern const uint32_t TextController_laundry_e_1_m580116235_MetadataUsageId;
extern "C"  void TextController_laundry_e_1_m580116235 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_laundry_e_1_m580116235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4068503691);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)21));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::wmachine_f_0()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral75779077;
extern const uint32_t TextController_wmachine_f_0_m1145982388_MetadataUsageId;
extern "C"  void TextController_wmachine_f_0_m1145982388 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_wmachine_f_0_m1145982388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral75779077);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(0);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::wmachine_f_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2653960775;
extern const uint32_t TextController_wmachine_f_1_m3895068719_MetadataUsageId;
extern "C"  void TextController_wmachine_f_1_m3895068719 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_wmachine_f_1_m3895068719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2653960775);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)102), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)18));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::wmachine_f_2()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2642445859;
extern const uint32_t TextController_wmachine_f_2_m863657386_MetadataUsageId;
extern "C"  void TextController_wmachine_f_2_m863657386 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_wmachine_f_2_m863657386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2642445859);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(5);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::wmachine_f_3()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1212240343;
extern const uint32_t TextController_wmachine_f_3_m3612743717_MetadataUsageId;
extern "C"  void TextController_wmachine_f_3_m3612743717 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_wmachine_f_3_m3612743717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1212240343);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(2);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::wmachine_e_0()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3574972678;
extern const uint32_t TextController_wmachine_e_0_m1500921093_MetadataUsageId;
extern "C"  void TextController_wmachine_e_0_m1500921093 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_wmachine_e_0_m1500921093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3574972678);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(6);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::wmachine_e_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1308842771;
extern const uint32_t TextController_wmachine_e_1_m1642083594_MetadataUsageId;
extern "C"  void TextController_wmachine_e_1_m1642083594 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_wmachine_e_1_m1642083594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1308842771);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)27));
		goto IL_003c;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_myState_3(1);
	}

IL_003c:
	{
		return;
	}
}
// System.Void TextController::wmachine_e_2()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1478099678;
extern const uint32_t TextController_wmachine_e_2_m1783246095_MetadataUsageId;
extern "C"  void TextController_wmachine_e_2_m1783246095 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_wmachine_e_2_m1783246095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1478099678);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)27));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::wmachine_e_3()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral329253425;
extern const uint32_t TextController_wmachine_e_3_m1924408596_MetadataUsageId;
extern "C"  void TextController_wmachine_e_3_m1924408596 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_wmachine_e_3_m1924408596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral329253425);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)102), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_myState_3(((int32_t)17));
	}

IL_0024:
	{
		return;
	}
}
// System.Void TextController::bucket_0()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1896420333;
extern const uint32_t TextController_bucket_0_m2861110823_MetadataUsageId;
extern "C"  void TextController_bucket_0_m2861110823 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_bucket_0_m2861110823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1896420333);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)116), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(4);
		goto IL_003b;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		__this->set_myState_3(3);
	}

IL_003b:
	{
		return;
	}
}
// System.Void TextController::bucket_1()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3862338801;
extern const uint32_t TextController_bucket_1_m2719948322_MetadataUsageId;
extern "C"  void TextController_bucket_1_m2719948322 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_bucket_1_m2719948322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3862338801);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)116), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->set_myState_3(((int32_t)11));
		goto IL_003c;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_myState_3(3);
	}

IL_003c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
