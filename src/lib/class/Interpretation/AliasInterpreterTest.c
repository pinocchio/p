#include <lib/class/Interpretation/AliasInterpreterTest.h>


Optr layout_Interpretation_AliasInterpreterTest_Class_class;
Optr slot_Interpretation_AliasInterpreterTest_i;
Optr layout_Interpretation_AliasInterpreterTest;


static void init_SMB_testInstanceCreation() {
    Symbol SMB_testInstanceCreation = new_Symbol(L"testInstanceCreation");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17018 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17024 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Array PThreadedCode17023 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17024, (Optr)&t_block_return);
    Block PBlock17022 = new_Block_with(empty_Array, empty_Array, PThreadedCode17023, 1, PSend17024);
    // interpret:. 
    Send PSend17021 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17022);
    Assign PAssign17020 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17021);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17025 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17026 = new_Send((Optr)PSend17025, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17027 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17028 = new_Send((Optr)PSend17027, SMB_should, 0);
    // beKindOf:. 
    Send PSend17029 = new_Send((Optr)PSend17028, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17030 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17031 = new_Send((Optr)PSend17030, SMB_should, 0);
    // beKindOf:. 
    Send PSend17032 = new_Send((Optr)PSend17031, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17033 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17034 = new_Send((Optr)PSend17033, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17035 = new_Send((Optr)PSend17034, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17036 = new_Send((Optr)PSend17035, SMB_selector, 0);
    // should. 
    Send PSend17037 = new_Send((Optr)PSend17036, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testInstanceCreation_Const = new_Constant((Optr)SMB_testInstanceCreation);
    // be:. 
    Send PSend17038 = new_Send((Optr)PSend17037, SMB_be_, 1, (Optr)SMB_testInstanceCreation_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17040 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17039 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17040);
    // should. 
    Send PSend17041 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17042 = new_Send((Optr)PSend17041, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17043 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17044 = new_Send((Optr)PSend17043, SMB_should, 0);
    // beKindOf:. 
    Send PSend17045 = new_Send((Optr)PSend17044, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17046 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17047 = new_Send((Optr)PSend17046, SMB_should, 0);
    // beKindOf:. 
    Send PSend17048 = new_Send((Optr)PSend17047, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17049 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17050 = new_Send((Optr)PSend17049, SMB_homeContext, 0);
    // closure. 
    Send PSend17051 = new_Send((Optr)PSend17050, SMB_closure, 0);
    // selector. 
    Send PSend17052 = new_Send((Optr)PSend17051, SMB_selector, 0);
    // should. 
    Send PSend17053 = new_Send((Optr)PSend17052, SMB_should, 0);
    Constant SMB_new_Const = new_Constant((Optr)SMB_new);
    // be:. 
    Send PSend17054 = new_Send((Optr)PSend17053, SMB_be_, 1, (Optr)SMB_new_Const);
    // origin. 
    Send PSend17056 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17055 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17056);
    // should. 
    Send PSend17057 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17058 = new_Send((Optr)PSend17057, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17059 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17060 = new_Send((Optr)PSend17059, SMB_should, 0);
    // beKindOf:. 
    Send PSend17061 = new_Send((Optr)PSend17060, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17062 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17063 = new_Send((Optr)PSend17062, SMB_should, 0);
    // beKindOf:. 
    Send PSend17064 = new_Send((Optr)PSend17063, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17065 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17066 = new_Send((Optr)PSend17065, SMB_homeContext, 0);
    // closure. 
    Send PSend17067 = new_Send((Optr)PSend17066, SMB_closure, 0);
    // selector. 
    Send PSend17068 = new_Send((Optr)PSend17067, SMB_selector, 0);
    // should. 
    Send PSend17069 = new_Send((Optr)PSend17068, SMB_should, 0);
    Symbol  SMB_initialize = new_Symbol(L"initialize");
    Constant SMB_initialize_Const = new_Constant((Optr)SMB_initialize);
    // be:. 
    Send PSend17070 = new_Send((Optr)PSend17069, SMB_be_, 1, (Optr)SMB_initialize_Const);
    // origin. 
    Send PSend17072 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17071 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17072);
    // should. 
    Send PSend17073 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17074 = new_Send((Optr)PSend17073, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // context. 
    Send PSend17075 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17076 = new_Send((Optr)PSend17075, SMB_should, 0);
    // beKindOf:. 
    Send PSend17077 = new_Send((Optr)PSend17076, SMB_beKindOf_, 1, (Optr)PNativeMethodContext_classReference);
    // context. 
    Send PSend17078 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend17079 = new_Send((Optr)PSend17078, SMB_message, 0);
    // selector. 
    Send PSend17080 = new_Send((Optr)PSend17079, SMB_selector, 0);
    // should. 
    Send PSend17081 = new_Send((Optr)PSend17080, SMB_should, 0);
    Symbol  SMB_basicNew = new_Symbol(L"basicNew");
    Constant SMB_basicNew_Const = new_Constant((Optr)SMB_basicNew);
    // be:. 
    Send PSend17082 = new_Send((Optr)PSend17081, SMB_be_, 1, (Optr)SMB_basicNew_Const);
    // origin. 
    Send PSend17083 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17084 = new_Send((Optr)PSend17083, SMB_should, 0);
    // be:. 
    Send PSend17085 = new_Send((Optr)PSend17084, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17019 = instantiate_Array_with(ThreadedCode_Class, 0, 224, (Optr)&t_push1, (Optr)PAssign17020, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17022, (Optr)&t_send1, (Optr)PSend17021, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17025, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17026, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17027, (Optr)&t_send0, (Optr)PSend17028, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17029, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17030, (Optr)&t_send0, (Optr)PSend17031, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17032, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17033, (Optr)&t_send0, (Optr)PSend17034, (Optr)&t_send0, (Optr)PSend17035, (Optr)&t_send0, (Optr)PSend17036, (Optr)&t_send0, (Optr)PSend17037, (Optr)&t_push1, (Optr)SMB_testInstanceCreation, (Optr)&t_send1, (Optr)PSend17038, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17039, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17040, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17041, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17042, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17043, (Optr)&t_send0, (Optr)PSend17044, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17045, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17046, (Optr)&t_send0, (Optr)PSend17047, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17048, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17049, (Optr)&t_send0, (Optr)PSend17050, (Optr)&t_send0, (Optr)PSend17051, (Optr)&t_send0, (Optr)PSend17052, (Optr)&t_send0, (Optr)PSend17053, (Optr)&t_push1, (Optr)SMB_new, (Optr)&t_send1, (Optr)PSend17054, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17055, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17056, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17057, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17058, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17059, (Optr)&t_send0, (Optr)PSend17060, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17061, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17062, (Optr)&t_send0, (Optr)PSend17063, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17064, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17065, (Optr)&t_send0, (Optr)PSend17066, (Optr)&t_send0, (Optr)PSend17067, (Optr)&t_send0, (Optr)PSend17068, (Optr)&t_send0, (Optr)PSend17069, (Optr)&t_push1, (Optr)SMB_initialize, (Optr)&t_send1, (Optr)PSend17070, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17071, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17072, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17073, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17074, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17075, (Optr)&t_send0, (Optr)PSend17076, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17077, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17078, (Optr)&t_send0, (Optr)PSend17079, (Optr)&t_send0, (Optr)PSend17080, (Optr)&t_send0, (Optr)PSend17081, (Optr)&t_push1, (Optr)SMB_basicNew, (Optr)&t_send1, (Optr)PSend17082, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17083, (Optr)&t_send0, (Optr)PSend17084, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17085, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17017 = new_Method_with(empty_Array, PArray17018, empty_Array, PThreadedCode17019, 21, PAssign17020, PSend17026, PSend17029, PSend17032, PSend17038, PAssign17039, PSend17042, PSend17045, PSend17048, PSend17054, PAssign17055, PSend17058, PSend17061, PSend17064, PSend17070, PAssign17071, PSend17074, PSend17077, PSend17082, PSend17085, self);
    
    MethodClosure MC_SMB_testInstanceCreation = new_MethodClosure((Method)PMethod17017, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testInstanceCreation, MC_SMB_testInstanceCreation);
}


static void init_SMB_testFieldWrite() {
    Symbol SMB_testFieldWrite = new_Symbol(L"testFieldWrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17087 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17092 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17095 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17094 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17095);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17096 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    Array PThreadedCode17093 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17094, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17095, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17096, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17091 = new_Block_with(empty_Array, PArray17092, PThreadedCode17093, 3, PAssign17094, PSend17096, VAR_c_1_0);
    // interpret:. 
    Send PSend17090 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17091);
    Assign PAssign17089 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17090);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17097 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17098 = new_Send((Optr)PSend17097, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17099 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17100 = new_Send((Optr)PSend17099, SMB_should, 0);
    // beKindOf:. 
    Send PSend17101 = new_Send((Optr)PSend17100, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17102 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17103 = new_Send((Optr)PSend17102, SMB_should, 0);
    // beKindOf:. 
    Send PSend17104 = new_Send((Optr)PSend17103, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17105 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17106 = new_Send((Optr)PSend17105, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17107 = new_Send((Optr)PSend17106, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17108 = new_Send((Optr)PSend17107, SMB_selector, 0);
    // should. 
    Send PSend17109 = new_Send((Optr)PSend17108, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldWrite_Const = new_Constant((Optr)SMB_testFieldWrite);
    // be:. 
    Send PSend17110 = new_Send((Optr)PSend17109, SMB_be_, 1, (Optr)SMB_testFieldWrite_Const);
    // value. 
    Send PSend17112 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17111 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17112);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17113 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17114 = new_Send((Optr)PSend17113, SMB_should, 0);
    // beKindOf:. 
    Send PSend17115 = new_Send((Optr)PSend17114, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17116 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17117 = new_Send((Optr)PSend17116, SMB_should, 0);
    // beKindOf:. 
    Send PSend17118 = new_Send((Optr)PSend17117, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17120 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17119 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17120);
    // value. 
    Send PSend17121 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17122 = new_Send((Optr)PSend17121, SMB_should, 0);
    // be:. 
    Send PSend17123 = new_Send((Optr)PSend17122, SMB_be_, 1, (Optr)int_10_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17124 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17125 = new_Send((Optr)PSend17124, SMB_should, 0);
    // beKindOf:. 
    Send PSend17126 = new_Send((Optr)PSend17125, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17128 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17127 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17128);
    // should. 
    Send PSend17129 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17130 = new_Send((Optr)PSend17129, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17131 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17132 = new_Send((Optr)PSend17131, SMB_should, 0);
    // be:. 
    Send PSend17133 = new_Send((Optr)PSend17132, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17135 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17134 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17135);
    // should. 
    Send PSend17136 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17137 = new_Send((Optr)PSend17136, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17138 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17139 = new_Send((Optr)PSend17138, SMB_should, 0);
    // be:. 
    Send PSend17140 = new_Send((Optr)PSend17139, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17141 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17142 = new_Send((Optr)PSend17141, SMB_should, 0);
    // be:. 
    Send PSend17143 = new_Send((Optr)PSend17142, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17088 = instantiate_Array_with(ThreadedCode_Class, 0, 185, (Optr)&t_push1, (Optr)PAssign17089, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17091, (Optr)&t_send1, (Optr)PSend17090, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17097, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17098, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17099, (Optr)&t_send0, (Optr)PSend17100, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17101, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17102, (Optr)&t_send0, (Optr)PSend17103, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17104, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17105, (Optr)&t_send0, (Optr)PSend17106, (Optr)&t_send0, (Optr)PSend17107, (Optr)&t_send0, (Optr)PSend17108, (Optr)&t_send0, (Optr)PSend17109, (Optr)&t_push1, (Optr)SMB_testFieldWrite, (Optr)&t_send1, (Optr)PSend17110, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17111, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17112, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17113, (Optr)&t_send0, (Optr)PSend17114, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17115, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17116, (Optr)&t_send0, (Optr)PSend17117, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17118, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17119, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17120, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17121, (Optr)&t_send0, (Optr)PSend17122, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17123, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17124, (Optr)&t_send0, (Optr)PSend17125, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17126, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17127, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17128, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17129, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17130, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17131, (Optr)&t_send0, (Optr)PSend17132, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17133, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17134, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17135, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17136, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17137, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17138, (Optr)&t_send0, (Optr)PSend17139, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17140, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17141, (Optr)&t_send0, (Optr)PSend17142, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17143, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17086 = new_Method_with(empty_Array, PArray17087, empty_Array, PThreadedCode17088, 19, PAssign17089, PSend17098, PSend17101, PSend17104, PSend17110, PAssign17111, PSend17115, PSend17118, PAssign17119, PSend17123, PSend17126, PAssign17127, PSend17130, PSend17133, PAssign17134, PSend17137, PSend17140, PSend17143, self);
    
    MethodClosure MC_SMB_testFieldWrite = new_MethodClosure((Method)PMethod17086, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testFieldWrite, MC_SMB_testFieldWrite);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17147 = new_Send((Optr)PAliasInterpreter_classReference, SMB_new, 0);
    Assign PAssign17146 = new_Assign((Optr)slot_Interpretation_AliasInterpreterTest_i, (Optr)PSend17147);
    Array PThreadedCode17145 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign17146, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_send0, (Optr)PSend17147, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17144 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17145, 2, PAssign17146, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod17144, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_testConstant() {
    Symbol SMB_testConstant = new_Symbol(L"testConstant");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17149 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Array PThreadedCode17154 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_2);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Block PBlock17153 = new_Block_with(empty_Array, empty_Array, PThreadedCode17154, 1, int_2_Const);
    // interpret:. 
    Send PSend17152 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17153);
    Assign PAssign17151 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17152);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17155 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17156 = new_Send((Optr)PSend17155, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17157 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17158 = new_Send((Optr)PSend17157, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend17159 = new_Send((Optr)PSend17158, SMB_be_, 1, (Optr)int_2_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17161 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17160 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17161);
    // should. 
    Send PSend17162 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17163 = new_Send((Optr)PSend17162, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // origin. 
    Send PSend17164 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17165 = new_Send((Optr)PSend17164, SMB_should, 0);
    // be:. 
    Send PSend17166 = new_Send((Optr)PSend17165, SMB_be_, 1, (Optr)nil_Const);
    // value. 
    Send PSend17167 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17168 = new_Send((Optr)PSend17167, SMB_should, 0);
    // be:. 
    Send PSend17169 = new_Send((Optr)PSend17168, SMB_be_, 1, (Optr)int_2_Const);
    Array PThreadedCode17150 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign17151, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17153, (Optr)&t_send1, (Optr)PSend17152, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17155, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17156, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17157, (Optr)&t_send0, (Optr)PSend17158, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17159, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17160, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17161, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17162, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17163, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17164, (Optr)&t_send0, (Optr)PSend17165, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17166, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17167, (Optr)&t_send0, (Optr)PSend17168, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17169, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17148 = new_Method_with(empty_Array, PArray17149, empty_Array, PThreadedCode17150, 8, PAssign17151, PSend17156, PSend17159, PAssign17160, PSend17163, PSend17166, PSend17169, self);
    
    MethodClosure MC_SMB_testConstant = new_MethodClosure((Method)PMethod17148, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testConstant, MC_SMB_testConstant);
}


static void init_SMB_testFieldOverwrite() {
    Symbol SMB_testFieldOverwrite = new_Symbol(L"testFieldOverwrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17171 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17176 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17179 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17178 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17179);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17180 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // a:. 
    Send PSend17181 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_20_Const);
    Array PThreadedCode17177 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17178, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17179, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17180, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17181, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17175 = new_Block_with(empty_Array, PArray17176, PThreadedCode17177, 4, PAssign17178, PSend17180, PSend17181, VAR_c_1_0);
    // interpret:. 
    Send PSend17174 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17175);
    Assign PAssign17173 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17174);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17182 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17183 = new_Send((Optr)PSend17182, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17184 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17185 = new_Send((Optr)PSend17184, SMB_should, 0);
    // beKindOf:. 
    Send PSend17186 = new_Send((Optr)PSend17185, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17187 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17188 = new_Send((Optr)PSend17187, SMB_should, 0);
    // beKindOf:. 
    Send PSend17189 = new_Send((Optr)PSend17188, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17190 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17191 = new_Send((Optr)PSend17190, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17192 = new_Send((Optr)PSend17191, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17193 = new_Send((Optr)PSend17192, SMB_selector, 0);
    // should. 
    Send PSend17194 = new_Send((Optr)PSend17193, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldOverwrite_Const = new_Constant((Optr)SMB_testFieldOverwrite);
    // be:. 
    Send PSend17195 = new_Send((Optr)PSend17194, SMB_be_, 1, (Optr)SMB_testFieldOverwrite_Const);
    // value. 
    Send PSend17197 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17196 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17197);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17198 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17199 = new_Send((Optr)PSend17198, SMB_should, 0);
    // beKindOf:. 
    Send PSend17200 = new_Send((Optr)PSend17199, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17201 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17202 = new_Send((Optr)PSend17201, SMB_should, 0);
    // beKindOf:. 
    Send PSend17203 = new_Send((Optr)PSend17202, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17205 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17204 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17205);
    // value. 
    Send PSend17206 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17207 = new_Send((Optr)PSend17206, SMB_should, 0);
    // be:. 
    Send PSend17208 = new_Send((Optr)PSend17207, SMB_be_, 1, (Optr)int_20_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17209 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17210 = new_Send((Optr)PSend17209, SMB_should, 0);
    // beKindOf:. 
    Send PSend17211 = new_Send((Optr)PSend17210, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    // predecessor. 
    Send PSend17212 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // value. 
    Send PSend17213 = new_Send((Optr)PSend17212, SMB_value, 0);
    // should. 
    Send PSend17214 = new_Send((Optr)PSend17213, SMB_should, 0);
    // be:. 
    Send PSend17215 = new_Send((Optr)PSend17214, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17216 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // predecessor. 
    Send PSend17217 = new_Send((Optr)PSend17216, SMB_predecessor, 0);
    // should. 
    Send PSend17218 = new_Send((Optr)PSend17217, SMB_should, 0);
    // beKindOf:. 
    Send PSend17219 = new_Send((Optr)PSend17218, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // predecessor. 
    Send PSend17220 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17221 = new_Send((Optr)PSend17220, SMB_origin, 0);
    // should. 
    Send PSend17222 = new_Send((Optr)PSend17221, SMB_should, 0);
    // beKindOf:. 
    Send PSend17223 = new_Send((Optr)PSend17222, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // predecessor. 
    Send PSend17224 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17225 = new_Send((Optr)PSend17224, SMB_origin, 0);
    // value. 
    Send PSend17226 = new_Send((Optr)PSend17225, SMB_value, 0);
    // should. 
    Send PSend17227 = new_Send((Optr)PSend17226, SMB_should, 0);
    // be:. 
    Send PSend17228 = new_Send((Optr)PSend17227, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17229 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17230 = new_Send((Optr)PSend17229, SMB_origin, 0);
    // origin. 
    Send PSend17231 = new_Send((Optr)PSend17230, SMB_origin, 0);
    // should. 
    Send PSend17232 = new_Send((Optr)PSend17231, SMB_should, 0);
    // beKindOf:. 
    Send PSend17233 = new_Send((Optr)PSend17232, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // predecessor. 
    Send PSend17234 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17235 = new_Send((Optr)PSend17234, SMB_origin, 0);
    // origin. 
    Send PSend17236 = new_Send((Optr)PSend17235, SMB_origin, 0);
    // value. 
    Send PSend17237 = new_Send((Optr)PSend17236, SMB_value, 0);
    // should. 
    Send PSend17238 = new_Send((Optr)PSend17237, SMB_should, 0);
    // be:. 
    Send PSend17239 = new_Send((Optr)PSend17238, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17240 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17241 = new_Send((Optr)PSend17240, SMB_origin, 0);
    // origin. 
    Send PSend17242 = new_Send((Optr)PSend17241, SMB_origin, 0);
    // origin. 
    Send PSend17243 = new_Send((Optr)PSend17242, SMB_origin, 0);
    // should. 
    Send PSend17244 = new_Send((Optr)PSend17243, SMB_should, 0);
    // be:. 
    Send PSend17245 = new_Send((Optr)PSend17244, SMB_be_, 1, (Optr)nil_Const);
    // origin. 
    Send PSend17247 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17246 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17247);
    // should. 
    Send PSend17248 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17249 = new_Send((Optr)PSend17248, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17250 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17251 = new_Send((Optr)PSend17250, SMB_should, 0);
    // be:. 
    Send PSend17252 = new_Send((Optr)PSend17251, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17254 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17253 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17254);
    // should. 
    Send PSend17255 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17256 = new_Send((Optr)PSend17255, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17257 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17258 = new_Send((Optr)PSend17257, SMB_should, 0);
    // be:. 
    Send PSend17259 = new_Send((Optr)PSend17258, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17260 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17261 = new_Send((Optr)PSend17260, SMB_should, 0);
    // be:. 
    Send PSend17262 = new_Send((Optr)PSend17261, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17172 = instantiate_Array_with(ThreadedCode_Class, 0, 287, (Optr)&t_push1, (Optr)PAssign17173, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17175, (Optr)&t_send1, (Optr)PSend17174, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17182, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17183, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17184, (Optr)&t_send0, (Optr)PSend17185, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17186, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17187, (Optr)&t_send0, (Optr)PSend17188, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17189, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17190, (Optr)&t_send0, (Optr)PSend17191, (Optr)&t_send0, (Optr)PSend17192, (Optr)&t_send0, (Optr)PSend17193, (Optr)&t_send0, (Optr)PSend17194, (Optr)&t_push1, (Optr)SMB_testFieldOverwrite, (Optr)&t_send1, (Optr)PSend17195, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17196, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17197, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17198, (Optr)&t_send0, (Optr)PSend17199, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17200, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17201, (Optr)&t_send0, (Optr)PSend17202, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17203, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17204, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17205, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17206, (Optr)&t_send0, (Optr)PSend17207, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17209, (Optr)&t_send0, (Optr)PSend17210, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17211, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17212, (Optr)&t_send0, (Optr)PSend17213, (Optr)&t_send0, (Optr)PSend17214, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17215, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17216, (Optr)&t_send0, (Optr)PSend17217, (Optr)&t_send0, (Optr)PSend17218, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17219, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17220, (Optr)&t_send0, (Optr)PSend17221, (Optr)&t_send0, (Optr)PSend17222, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17223, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17224, (Optr)&t_send0, (Optr)PSend17225, (Optr)&t_send0, (Optr)PSend17226, (Optr)&t_send0, (Optr)PSend17227, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17228, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17229, (Optr)&t_send0, (Optr)PSend17230, (Optr)&t_send0, (Optr)PSend17231, (Optr)&t_send0, (Optr)PSend17232, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17233, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17234, (Optr)&t_send0, (Optr)PSend17235, (Optr)&t_send0, (Optr)PSend17236, (Optr)&t_send0, (Optr)PSend17237, (Optr)&t_send0, (Optr)PSend17238, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17239, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17240, (Optr)&t_send0, (Optr)PSend17241, (Optr)&t_send0, (Optr)PSend17242, (Optr)&t_send0, (Optr)PSend17243, (Optr)&t_send0, (Optr)PSend17244, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17245, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17246, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17247, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17248, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17249, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17250, (Optr)&t_send0, (Optr)PSend17251, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17252, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17253, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17254, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17255, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17256, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17257, (Optr)&t_send0, (Optr)PSend17258, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17259, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17260, (Optr)&t_send0, (Optr)PSend17261, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17262, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17170 = new_Method_with(empty_Array, PArray17171, empty_Array, PThreadedCode17172, 26, PAssign17173, PSend17183, PSend17186, PSend17189, PSend17195, PAssign17196, PSend17200, PSend17203, PAssign17204, PSend17208, PSend17211, PSend17215, PSend17219, PSend17223, PSend17228, PSend17233, PSend17239, PSend17245, PAssign17246, PSend17249, PSend17252, PAssign17253, PSend17256, PSend17259, PSend17262, self);
    
    MethodClosure MC_SMB_testFieldOverwrite = new_MethodClosure((Method)PMethod17170, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testFieldOverwrite, MC_SMB_testFieldOverwrite);
}

void init_Interpretation_PAliasInterpreterTest_layout() {
    layout_Interpretation_AliasInterpreterTest_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Interpretation_AliasInterpreterTest_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Interpretation_AliasInterpreterTest_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Interpretation_AliasInterpreterTest_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Interpretation_AliasInterpreterTest_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Interpretation_AliasInterpreterTest_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AliasInterpreterTest = new_Symbol(L"AliasInterpreterTest");
    slot_Interpretation_AliasInterpreterTest_i = (Optr)new_Slot(1, L"i");
    layout_Interpretation_AliasInterpreterTest = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Interpretation_AliasInterpreterTest)->values[0] = slot_Testing_TestCase_testSelector; // testSelector 
    ((Array)layout_Interpretation_AliasInterpreterTest)->values[1] = slot_Interpretation_AliasInterpreterTest_i; // i 
    Interpretation_AliasInterpreterTest_Class = (Class)new_Class(Testing_TestCase_Class, layout_Interpretation_AliasInterpreterTest_Class_class);
    Interpretation_AliasInterpreterTest_Class->layout = layout_Interpretation_AliasInterpreterTest;
    Interpretation_AliasInterpreterTest_Class->name = SMB_AliasInterpreterTest;
    
}

void init_Interpretation_PAliasInterpreterTest_methods() {
    init_SMB_testInstanceCreation();
    init_SMB_testFieldWrite();
    init_SMB_setUp();
    init_SMB_testConstant();
    init_SMB_testFieldOverwrite();
    
}