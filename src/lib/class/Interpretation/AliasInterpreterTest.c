#include <lib/class/Interpretation/AliasInterpreterTest.h>


Optr layout_Interpretation_AliasInterpreterTest_Class_class;
Optr slot_Interpretation_AliasInterpreterTest_i;
Optr layout_Interpretation_AliasInterpreterTest;


static void init_SMB_testInstanceCreation() {
    Symbol SMB_testInstanceCreation = new_Symbol(L"testInstanceCreation");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray16988 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16994 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Array PThreadedCode16993 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend16994, (Optr)&t_block_return);
    Block PBlock16992 = new_Block_with(empty_Array, empty_Array, PThreadedCode16993, 1, PSend16994);
    // interpret:. 
    Send PSend16991 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock16992);
    Assign PAssign16990 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend16991);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend16995 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend16996 = new_Send((Optr)PSend16995, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16997 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend16998 = new_Send((Optr)PSend16997, SMB_should, 0);
    // beKindOf:. 
    Send PSend16999 = new_Send((Optr)PSend16998, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17000 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17001 = new_Send((Optr)PSend17000, SMB_should, 0);
    // beKindOf:. 
    Send PSend17002 = new_Send((Optr)PSend17001, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17003 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17004 = new_Send((Optr)PSend17003, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17005 = new_Send((Optr)PSend17004, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17006 = new_Send((Optr)PSend17005, SMB_selector, 0);
    // should. 
    Send PSend17007 = new_Send((Optr)PSend17006, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testInstanceCreation_Const = new_Constant((Optr)SMB_testInstanceCreation);
    // be:. 
    Send PSend17008 = new_Send((Optr)PSend17007, SMB_be_, 1, (Optr)SMB_testInstanceCreation_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17010 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17009 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17010);
    // should. 
    Send PSend17011 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17012 = new_Send((Optr)PSend17011, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17013 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17014 = new_Send((Optr)PSend17013, SMB_should, 0);
    // beKindOf:. 
    Send PSend17015 = new_Send((Optr)PSend17014, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17016 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17017 = new_Send((Optr)PSend17016, SMB_should, 0);
    // beKindOf:. 
    Send PSend17018 = new_Send((Optr)PSend17017, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17019 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17020 = new_Send((Optr)PSend17019, SMB_homeContext, 0);
    // closure. 
    Send PSend17021 = new_Send((Optr)PSend17020, SMB_closure, 0);
    // selector. 
    Send PSend17022 = new_Send((Optr)PSend17021, SMB_selector, 0);
    // should. 
    Send PSend17023 = new_Send((Optr)PSend17022, SMB_should, 0);
    Constant SMB_new_Const = new_Constant((Optr)SMB_new);
    // be:. 
    Send PSend17024 = new_Send((Optr)PSend17023, SMB_be_, 1, (Optr)SMB_new_Const);
    // origin. 
    Send PSend17026 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17025 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17026);
    // should. 
    Send PSend17027 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17028 = new_Send((Optr)PSend17027, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17029 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17030 = new_Send((Optr)PSend17029, SMB_should, 0);
    // beKindOf:. 
    Send PSend17031 = new_Send((Optr)PSend17030, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17032 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17033 = new_Send((Optr)PSend17032, SMB_should, 0);
    // beKindOf:. 
    Send PSend17034 = new_Send((Optr)PSend17033, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17035 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17036 = new_Send((Optr)PSend17035, SMB_homeContext, 0);
    // closure. 
    Send PSend17037 = new_Send((Optr)PSend17036, SMB_closure, 0);
    // selector. 
    Send PSend17038 = new_Send((Optr)PSend17037, SMB_selector, 0);
    // should. 
    Send PSend17039 = new_Send((Optr)PSend17038, SMB_should, 0);
    Symbol  SMB_initialize = new_Symbol(L"initialize");
    Constant SMB_initialize_Const = new_Constant((Optr)SMB_initialize);
    // be:. 
    Send PSend17040 = new_Send((Optr)PSend17039, SMB_be_, 1, (Optr)SMB_initialize_Const);
    // origin. 
    Send PSend17042 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17041 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17042);
    // should. 
    Send PSend17043 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17044 = new_Send((Optr)PSend17043, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // context. 
    Send PSend17045 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17046 = new_Send((Optr)PSend17045, SMB_should, 0);
    // beKindOf:. 
    Send PSend17047 = new_Send((Optr)PSend17046, SMB_beKindOf_, 1, (Optr)PNativeMethodContext_classReference);
    // context. 
    Send PSend17048 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend17049 = new_Send((Optr)PSend17048, SMB_message, 0);
    // selector. 
    Send PSend17050 = new_Send((Optr)PSend17049, SMB_selector, 0);
    // should. 
    Send PSend17051 = new_Send((Optr)PSend17050, SMB_should, 0);
    Symbol  SMB_basicNew = new_Symbol(L"basicNew");
    Constant SMB_basicNew_Const = new_Constant((Optr)SMB_basicNew);
    // be:. 
    Send PSend17052 = new_Send((Optr)PSend17051, SMB_be_, 1, (Optr)SMB_basicNew_Const);
    // origin. 
    Send PSend17053 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17054 = new_Send((Optr)PSend17053, SMB_should, 0);
    // be:. 
    Send PSend17055 = new_Send((Optr)PSend17054, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode16989 = instantiate_Array_with(ThreadedCode_Class, 0, 224, (Optr)&t_push1, (Optr)PAssign16990, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock16992, (Optr)&t_send1, (Optr)PSend16991, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend16995, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend16996, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend16997, (Optr)&t_send0, (Optr)PSend16998, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend16999, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17000, (Optr)&t_send0, (Optr)PSend17001, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17002, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17003, (Optr)&t_send0, (Optr)PSend17004, (Optr)&t_send0, (Optr)PSend17005, (Optr)&t_send0, (Optr)PSend17006, (Optr)&t_send0, (Optr)PSend17007, (Optr)&t_push1, (Optr)SMB_testInstanceCreation, (Optr)&t_send1, (Optr)PSend17008, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17009, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17010, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17011, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17012, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17013, (Optr)&t_send0, (Optr)PSend17014, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17015, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17016, (Optr)&t_send0, (Optr)PSend17017, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17018, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17019, (Optr)&t_send0, (Optr)PSend17020, (Optr)&t_send0, (Optr)PSend17021, (Optr)&t_send0, (Optr)PSend17022, (Optr)&t_send0, (Optr)PSend17023, (Optr)&t_push1, (Optr)SMB_new, (Optr)&t_send1, (Optr)PSend17024, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17025, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17026, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17027, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17028, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17029, (Optr)&t_send0, (Optr)PSend17030, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17032, (Optr)&t_send0, (Optr)PSend17033, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17034, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17035, (Optr)&t_send0, (Optr)PSend17036, (Optr)&t_send0, (Optr)PSend17037, (Optr)&t_send0, (Optr)PSend17038, (Optr)&t_send0, (Optr)PSend17039, (Optr)&t_push1, (Optr)SMB_initialize, (Optr)&t_send1, (Optr)PSend17040, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17041, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17042, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17043, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17044, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17045, (Optr)&t_send0, (Optr)PSend17046, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17047, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17048, (Optr)&t_send0, (Optr)PSend17049, (Optr)&t_send0, (Optr)PSend17050, (Optr)&t_send0, (Optr)PSend17051, (Optr)&t_push1, (Optr)SMB_basicNew, (Optr)&t_send1, (Optr)PSend17052, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17053, (Optr)&t_send0, (Optr)PSend17054, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17055, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16987 = new_Method_with(empty_Array, PArray16988, empty_Array, PThreadedCode16989, 21, PAssign16990, PSend16996, PSend16999, PSend17002, PSend17008, PAssign17009, PSend17012, PSend17015, PSend17018, PSend17024, PAssign17025, PSend17028, PSend17031, PSend17034, PSend17040, PAssign17041, PSend17044, PSend17047, PSend17052, PSend17055, self);
    
    MethodClosure MC_SMB_testInstanceCreation = new_MethodClosure((Method)PMethod16987, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testInstanceCreation, MC_SMB_testInstanceCreation);
}


static void init_SMB_testFieldOverwrite() {
    Symbol SMB_testFieldOverwrite = new_Symbol(L"testFieldOverwrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17057 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17062 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17065 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17064 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17065);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17066 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // a:. 
    Send PSend17067 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_20_Const);
    Array PThreadedCode17063 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17064, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17065, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17066, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17067, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17061 = new_Block_with(empty_Array, PArray17062, PThreadedCode17063, 4, PAssign17064, PSend17066, PSend17067, VAR_c_1_0);
    // interpret:. 
    Send PSend17060 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17061);
    Assign PAssign17059 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17060);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17068 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17069 = new_Send((Optr)PSend17068, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17070 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17071 = new_Send((Optr)PSend17070, SMB_should, 0);
    // beKindOf:. 
    Send PSend17072 = new_Send((Optr)PSend17071, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17073 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17074 = new_Send((Optr)PSend17073, SMB_should, 0);
    // beKindOf:. 
    Send PSend17075 = new_Send((Optr)PSend17074, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17076 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17077 = new_Send((Optr)PSend17076, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17078 = new_Send((Optr)PSend17077, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17079 = new_Send((Optr)PSend17078, SMB_selector, 0);
    // should. 
    Send PSend17080 = new_Send((Optr)PSend17079, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldOverwrite_Const = new_Constant((Optr)SMB_testFieldOverwrite);
    // be:. 
    Send PSend17081 = new_Send((Optr)PSend17080, SMB_be_, 1, (Optr)SMB_testFieldOverwrite_Const);
    // value. 
    Send PSend17083 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17082 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17083);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17084 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17085 = new_Send((Optr)PSend17084, SMB_should, 0);
    // beKindOf:. 
    Send PSend17086 = new_Send((Optr)PSend17085, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17087 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17088 = new_Send((Optr)PSend17087, SMB_should, 0);
    // beKindOf:. 
    Send PSend17089 = new_Send((Optr)PSend17088, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17091 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17090 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17091);
    // value. 
    Send PSend17092 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17093 = new_Send((Optr)PSend17092, SMB_should, 0);
    // be:. 
    Send PSend17094 = new_Send((Optr)PSend17093, SMB_be_, 1, (Optr)int_20_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17095 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17096 = new_Send((Optr)PSend17095, SMB_should, 0);
    // beKindOf:. 
    Send PSend17097 = new_Send((Optr)PSend17096, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    // predecessor. 
    Send PSend17098 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // value. 
    Send PSend17099 = new_Send((Optr)PSend17098, SMB_value, 0);
    // should. 
    Send PSend17100 = new_Send((Optr)PSend17099, SMB_should, 0);
    // be:. 
    Send PSend17101 = new_Send((Optr)PSend17100, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17102 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // predecessor. 
    Send PSend17103 = new_Send((Optr)PSend17102, SMB_predecessor, 0);
    // should. 
    Send PSend17104 = new_Send((Optr)PSend17103, SMB_should, 0);
    // beKindOf:. 
    Send PSend17105 = new_Send((Optr)PSend17104, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // predecessor. 
    Send PSend17106 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17107 = new_Send((Optr)PSend17106, SMB_origin, 0);
    // should. 
    Send PSend17108 = new_Send((Optr)PSend17107, SMB_should, 0);
    // beKindOf:. 
    Send PSend17109 = new_Send((Optr)PSend17108, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // predecessor. 
    Send PSend17110 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17111 = new_Send((Optr)PSend17110, SMB_origin, 0);
    // value. 
    Send PSend17112 = new_Send((Optr)PSend17111, SMB_value, 0);
    // should. 
    Send PSend17113 = new_Send((Optr)PSend17112, SMB_should, 0);
    // be:. 
    Send PSend17114 = new_Send((Optr)PSend17113, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17115 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17116 = new_Send((Optr)PSend17115, SMB_origin, 0);
    // origin. 
    Send PSend17117 = new_Send((Optr)PSend17116, SMB_origin, 0);
    // should. 
    Send PSend17118 = new_Send((Optr)PSend17117, SMB_should, 0);
    // beKindOf:. 
    Send PSend17119 = new_Send((Optr)PSend17118, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // predecessor. 
    Send PSend17120 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17121 = new_Send((Optr)PSend17120, SMB_origin, 0);
    // origin. 
    Send PSend17122 = new_Send((Optr)PSend17121, SMB_origin, 0);
    // value. 
    Send PSend17123 = new_Send((Optr)PSend17122, SMB_value, 0);
    // should. 
    Send PSend17124 = new_Send((Optr)PSend17123, SMB_should, 0);
    // be:. 
    Send PSend17125 = new_Send((Optr)PSend17124, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17126 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17127 = new_Send((Optr)PSend17126, SMB_origin, 0);
    // origin. 
    Send PSend17128 = new_Send((Optr)PSend17127, SMB_origin, 0);
    // origin. 
    Send PSend17129 = new_Send((Optr)PSend17128, SMB_origin, 0);
    // should. 
    Send PSend17130 = new_Send((Optr)PSend17129, SMB_should, 0);
    // be:. 
    Send PSend17131 = new_Send((Optr)PSend17130, SMB_be_, 1, (Optr)nil_Const);
    // origin. 
    Send PSend17133 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17132 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17133);
    // should. 
    Send PSend17134 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17135 = new_Send((Optr)PSend17134, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17136 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17137 = new_Send((Optr)PSend17136, SMB_should, 0);
    // be:. 
    Send PSend17138 = new_Send((Optr)PSend17137, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17140 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17139 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17140);
    // should. 
    Send PSend17141 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17142 = new_Send((Optr)PSend17141, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17143 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17144 = new_Send((Optr)PSend17143, SMB_should, 0);
    // be:. 
    Send PSend17145 = new_Send((Optr)PSend17144, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17146 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17147 = new_Send((Optr)PSend17146, SMB_should, 0);
    // be:. 
    Send PSend17148 = new_Send((Optr)PSend17147, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17058 = instantiate_Array_with(ThreadedCode_Class, 0, 287, (Optr)&t_push1, (Optr)PAssign17059, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17061, (Optr)&t_send1, (Optr)PSend17060, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17068, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17069, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17070, (Optr)&t_send0, (Optr)PSend17071, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17072, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17073, (Optr)&t_send0, (Optr)PSend17074, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17075, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17076, (Optr)&t_send0, (Optr)PSend17077, (Optr)&t_send0, (Optr)PSend17078, (Optr)&t_send0, (Optr)PSend17079, (Optr)&t_send0, (Optr)PSend17080, (Optr)&t_push1, (Optr)SMB_testFieldOverwrite, (Optr)&t_send1, (Optr)PSend17081, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17082, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17083, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17084, (Optr)&t_send0, (Optr)PSend17085, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17086, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17087, (Optr)&t_send0, (Optr)PSend17088, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17089, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17090, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17091, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17092, (Optr)&t_send0, (Optr)PSend17093, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17094, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17095, (Optr)&t_send0, (Optr)PSend17096, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17097, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17098, (Optr)&t_send0, (Optr)PSend17099, (Optr)&t_send0, (Optr)PSend17100, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17101, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17102, (Optr)&t_send0, (Optr)PSend17103, (Optr)&t_send0, (Optr)PSend17104, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17105, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17106, (Optr)&t_send0, (Optr)PSend17107, (Optr)&t_send0, (Optr)PSend17108, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17109, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17110, (Optr)&t_send0, (Optr)PSend17111, (Optr)&t_send0, (Optr)PSend17112, (Optr)&t_send0, (Optr)PSend17113, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17114, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17115, (Optr)&t_send0, (Optr)PSend17116, (Optr)&t_send0, (Optr)PSend17117, (Optr)&t_send0, (Optr)PSend17118, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17119, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17120, (Optr)&t_send0, (Optr)PSend17121, (Optr)&t_send0, (Optr)PSend17122, (Optr)&t_send0, (Optr)PSend17123, (Optr)&t_send0, (Optr)PSend17124, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17126, (Optr)&t_send0, (Optr)PSend17127, (Optr)&t_send0, (Optr)PSend17128, (Optr)&t_send0, (Optr)PSend17129, (Optr)&t_send0, (Optr)PSend17130, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17131, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17132, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17133, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17134, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17135, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17136, (Optr)&t_send0, (Optr)PSend17137, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17138, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17139, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17140, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17141, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17142, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17143, (Optr)&t_send0, (Optr)PSend17144, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17145, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17146, (Optr)&t_send0, (Optr)PSend17147, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17148, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17056 = new_Method_with(empty_Array, PArray17057, empty_Array, PThreadedCode17058, 26, PAssign17059, PSend17069, PSend17072, PSend17075, PSend17081, PAssign17082, PSend17086, PSend17089, PAssign17090, PSend17094, PSend17097, PSend17101, PSend17105, PSend17109, PSend17114, PSend17119, PSend17125, PSend17131, PAssign17132, PSend17135, PSend17138, PAssign17139, PSend17142, PSend17145, PSend17148, self);
    
    MethodClosure MC_SMB_testFieldOverwrite = new_MethodClosure((Method)PMethod17056, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testFieldOverwrite, MC_SMB_testFieldOverwrite);
}


static void init_SMB_testFieldWrite() {
    Symbol SMB_testFieldWrite = new_Symbol(L"testFieldWrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17150 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17155 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17158 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17157 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17158);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17159 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    Array PThreadedCode17156 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17157, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17158, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17159, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17154 = new_Block_with(empty_Array, PArray17155, PThreadedCode17156, 3, PAssign17157, PSend17159, VAR_c_1_0);
    // interpret:. 
    Send PSend17153 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17154);
    Assign PAssign17152 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17153);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17160 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17161 = new_Send((Optr)PSend17160, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17162 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17163 = new_Send((Optr)PSend17162, SMB_should, 0);
    // beKindOf:. 
    Send PSend17164 = new_Send((Optr)PSend17163, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17165 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17166 = new_Send((Optr)PSend17165, SMB_should, 0);
    // beKindOf:. 
    Send PSend17167 = new_Send((Optr)PSend17166, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17168 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17169 = new_Send((Optr)PSend17168, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17170 = new_Send((Optr)PSend17169, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17171 = new_Send((Optr)PSend17170, SMB_selector, 0);
    // should. 
    Send PSend17172 = new_Send((Optr)PSend17171, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldWrite_Const = new_Constant((Optr)SMB_testFieldWrite);
    // be:. 
    Send PSend17173 = new_Send((Optr)PSend17172, SMB_be_, 1, (Optr)SMB_testFieldWrite_Const);
    // value. 
    Send PSend17175 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17174 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17175);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17176 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17177 = new_Send((Optr)PSend17176, SMB_should, 0);
    // beKindOf:. 
    Send PSend17178 = new_Send((Optr)PSend17177, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17179 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17180 = new_Send((Optr)PSend17179, SMB_should, 0);
    // beKindOf:. 
    Send PSend17181 = new_Send((Optr)PSend17180, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17183 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17182 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17183);
    // value. 
    Send PSend17184 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17185 = new_Send((Optr)PSend17184, SMB_should, 0);
    // be:. 
    Send PSend17186 = new_Send((Optr)PSend17185, SMB_be_, 1, (Optr)int_10_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17187 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17188 = new_Send((Optr)PSend17187, SMB_should, 0);
    // beKindOf:. 
    Send PSend17189 = new_Send((Optr)PSend17188, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17191 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17190 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17191);
    // should. 
    Send PSend17192 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17193 = new_Send((Optr)PSend17192, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17194 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17195 = new_Send((Optr)PSend17194, SMB_should, 0);
    // be:. 
    Send PSend17196 = new_Send((Optr)PSend17195, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17198 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17197 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17198);
    // should. 
    Send PSend17199 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17200 = new_Send((Optr)PSend17199, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17201 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17202 = new_Send((Optr)PSend17201, SMB_should, 0);
    // be:. 
    Send PSend17203 = new_Send((Optr)PSend17202, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17204 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17205 = new_Send((Optr)PSend17204, SMB_should, 0);
    // be:. 
    Send PSend17206 = new_Send((Optr)PSend17205, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17151 = instantiate_Array_with(ThreadedCode_Class, 0, 185, (Optr)&t_push1, (Optr)PAssign17152, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17154, (Optr)&t_send1, (Optr)PSend17153, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17160, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17161, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17162, (Optr)&t_send0, (Optr)PSend17163, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17164, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17165, (Optr)&t_send0, (Optr)PSend17166, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17167, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17168, (Optr)&t_send0, (Optr)PSend17169, (Optr)&t_send0, (Optr)PSend17170, (Optr)&t_send0, (Optr)PSend17171, (Optr)&t_send0, (Optr)PSend17172, (Optr)&t_push1, (Optr)SMB_testFieldWrite, (Optr)&t_send1, (Optr)PSend17173, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17174, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17175, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17176, (Optr)&t_send0, (Optr)PSend17177, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17178, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17179, (Optr)&t_send0, (Optr)PSend17180, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17181, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17182, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17183, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17184, (Optr)&t_send0, (Optr)PSend17185, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17186, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17187, (Optr)&t_send0, (Optr)PSend17188, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17189, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17190, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17191, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17192, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17193, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17194, (Optr)&t_send0, (Optr)PSend17195, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17196, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17197, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17198, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17199, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17200, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17201, (Optr)&t_send0, (Optr)PSend17202, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17203, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17204, (Optr)&t_send0, (Optr)PSend17205, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17206, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17149 = new_Method_with(empty_Array, PArray17150, empty_Array, PThreadedCode17151, 19, PAssign17152, PSend17161, PSend17164, PSend17167, PSend17173, PAssign17174, PSend17178, PSend17181, PAssign17182, PSend17186, PSend17189, PAssign17190, PSend17193, PSend17196, PAssign17197, PSend17200, PSend17203, PSend17206, self);
    
    MethodClosure MC_SMB_testFieldWrite = new_MethodClosure((Method)PMethod17149, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testFieldWrite, MC_SMB_testFieldWrite);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17210 = new_Send((Optr)PAliasInterpreter_classReference, SMB_new, 0);
    Assign PAssign17209 = new_Assign((Optr)slot_Interpretation_AliasInterpreterTest_i, (Optr)PSend17210);
    Array PThreadedCode17208 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign17209, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_send0, (Optr)PSend17210, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17207 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17208, 2, PAssign17209, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod17207, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_testConstant() {
    Symbol SMB_testConstant = new_Symbol(L"testConstant");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17212 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Array PThreadedCode17217 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_2);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Block PBlock17216 = new_Block_with(empty_Array, empty_Array, PThreadedCode17217, 1, int_2_Const);
    // interpret:. 
    Send PSend17215 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17216);
    Assign PAssign17214 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17215);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17218 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17219 = new_Send((Optr)PSend17218, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17220 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17221 = new_Send((Optr)PSend17220, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend17222 = new_Send((Optr)PSend17221, SMB_be_, 1, (Optr)int_2_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17224 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17223 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17224);
    // should. 
    Send PSend17225 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17226 = new_Send((Optr)PSend17225, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // origin. 
    Send PSend17227 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17228 = new_Send((Optr)PSend17227, SMB_should, 0);
    // be:. 
    Send PSend17229 = new_Send((Optr)PSend17228, SMB_be_, 1, (Optr)nil_Const);
    // value. 
    Send PSend17230 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17231 = new_Send((Optr)PSend17230, SMB_should, 0);
    // be:. 
    Send PSend17232 = new_Send((Optr)PSend17231, SMB_be_, 1, (Optr)int_2_Const);
    Array PThreadedCode17213 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign17214, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17216, (Optr)&t_send1, (Optr)PSend17215, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17218, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17219, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17220, (Optr)&t_send0, (Optr)PSend17221, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17222, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17223, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17224, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17225, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17226, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17227, (Optr)&t_send0, (Optr)PSend17228, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17229, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17230, (Optr)&t_send0, (Optr)PSend17231, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17232, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17211 = new_Method_with(empty_Array, PArray17212, empty_Array, PThreadedCode17213, 8, PAssign17214, PSend17219, PSend17222, PAssign17223, PSend17226, PSend17229, PSend17232, self);
    
    MethodClosure MC_SMB_testConstant = new_MethodClosure((Method)PMethod17211, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testConstant, MC_SMB_testConstant);
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
    init_SMB_testFieldOverwrite();
    init_SMB_testFieldWrite();
    init_SMB_setUp();
    init_SMB_testConstant();
    
}