#include <lib/class/Interpretation/AliasInterpreterTest.h>


Optr layout_Interpretation_AliasInterpreterTest_Class_class;
Optr slot_Interpretation_AliasInterpreterTest_i;
Optr layout_Interpretation_AliasInterpreterTest;


static void init_SMB_testInstanceCreation() {
    Symbol SMB_testInstanceCreation = new_Symbol(L"testInstanceCreation");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17075 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17081 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Array PThreadedCode17080 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17081, (Optr)&t_block_return);
    Block PBlock17079 = new_Block_with(empty_Array, empty_Array, PThreadedCode17080, 1, PSend17081);
    // interpret:. 
    Send PSend17078 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17079);
    Assign PAssign17077 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17078);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17082 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17083 = new_Send((Optr)PSend17082, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17084 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17085 = new_Send((Optr)PSend17084, SMB_should, 0);
    // beKindOf:. 
    Send PSend17086 = new_Send((Optr)PSend17085, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17087 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17088 = new_Send((Optr)PSend17087, SMB_should, 0);
    // beKindOf:. 
    Send PSend17089 = new_Send((Optr)PSend17088, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17090 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17091 = new_Send((Optr)PSend17090, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17092 = new_Send((Optr)PSend17091, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17093 = new_Send((Optr)PSend17092, SMB_selector, 0);
    // should. 
    Send PSend17094 = new_Send((Optr)PSend17093, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testInstanceCreation_Const = new_Constant((Optr)SMB_testInstanceCreation);
    // be:. 
    Send PSend17095 = new_Send((Optr)PSend17094, SMB_be_, 1, (Optr)SMB_testInstanceCreation_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17097 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17096 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17097);
    // should. 
    Send PSend17098 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17099 = new_Send((Optr)PSend17098, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17100 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17101 = new_Send((Optr)PSend17100, SMB_should, 0);
    // beKindOf:. 
    Send PSend17102 = new_Send((Optr)PSend17101, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17103 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17104 = new_Send((Optr)PSend17103, SMB_should, 0);
    // beKindOf:. 
    Send PSend17105 = new_Send((Optr)PSend17104, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17106 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17107 = new_Send((Optr)PSend17106, SMB_homeContext, 0);
    // closure. 
    Send PSend17108 = new_Send((Optr)PSend17107, SMB_closure, 0);
    // selector. 
    Send PSend17109 = new_Send((Optr)PSend17108, SMB_selector, 0);
    // should. 
    Send PSend17110 = new_Send((Optr)PSend17109, SMB_should, 0);
    Constant SMB_new_Const = new_Constant((Optr)SMB_new);
    // be:. 
    Send PSend17111 = new_Send((Optr)PSend17110, SMB_be_, 1, (Optr)SMB_new_Const);
    // origin. 
    Send PSend17113 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17112 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17113);
    // should. 
    Send PSend17114 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17115 = new_Send((Optr)PSend17114, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17116 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17117 = new_Send((Optr)PSend17116, SMB_should, 0);
    // beKindOf:. 
    Send PSend17118 = new_Send((Optr)PSend17117, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17119 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17120 = new_Send((Optr)PSend17119, SMB_should, 0);
    // beKindOf:. 
    Send PSend17121 = new_Send((Optr)PSend17120, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17122 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17123 = new_Send((Optr)PSend17122, SMB_homeContext, 0);
    // closure. 
    Send PSend17124 = new_Send((Optr)PSend17123, SMB_closure, 0);
    // selector. 
    Send PSend17125 = new_Send((Optr)PSend17124, SMB_selector, 0);
    // should. 
    Send PSend17126 = new_Send((Optr)PSend17125, SMB_should, 0);
    Symbol  SMB_initialize = new_Symbol(L"initialize");
    Constant SMB_initialize_Const = new_Constant((Optr)SMB_initialize);
    // be:. 
    Send PSend17127 = new_Send((Optr)PSend17126, SMB_be_, 1, (Optr)SMB_initialize_Const);
    // origin. 
    Send PSend17129 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17128 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17129);
    // should. 
    Send PSend17130 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17131 = new_Send((Optr)PSend17130, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // context. 
    Send PSend17132 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17133 = new_Send((Optr)PSend17132, SMB_should, 0);
    // beKindOf:. 
    Send PSend17134 = new_Send((Optr)PSend17133, SMB_beKindOf_, 1, (Optr)PNativeMethodContext_classReference);
    // context. 
    Send PSend17135 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend17136 = new_Send((Optr)PSend17135, SMB_message, 0);
    // selector. 
    Send PSend17137 = new_Send((Optr)PSend17136, SMB_selector, 0);
    // should. 
    Send PSend17138 = new_Send((Optr)PSend17137, SMB_should, 0);
    Symbol  SMB_basicNew = new_Symbol(L"basicNew");
    Constant SMB_basicNew_Const = new_Constant((Optr)SMB_basicNew);
    // be:. 
    Send PSend17139 = new_Send((Optr)PSend17138, SMB_be_, 1, (Optr)SMB_basicNew_Const);
    // origin. 
    Send PSend17140 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17141 = new_Send((Optr)PSend17140, SMB_should, 0);
    // be:. 
    Send PSend17142 = new_Send((Optr)PSend17141, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17076 = instantiate_Array_with(ThreadedCode_Class, 0, 224, (Optr)&t_push1, (Optr)PAssign17077, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17079, (Optr)&t_send1, (Optr)PSend17078, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17082, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17083, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17084, (Optr)&t_send0, (Optr)PSend17085, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17086, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17087, (Optr)&t_send0, (Optr)PSend17088, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17089, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17090, (Optr)&t_send0, (Optr)PSend17091, (Optr)&t_send0, (Optr)PSend17092, (Optr)&t_send0, (Optr)PSend17093, (Optr)&t_send0, (Optr)PSend17094, (Optr)&t_push1, (Optr)SMB_testInstanceCreation, (Optr)&t_send1, (Optr)PSend17095, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17096, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17097, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17098, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17099, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17100, (Optr)&t_send0, (Optr)PSend17101, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17102, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17103, (Optr)&t_send0, (Optr)PSend17104, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17105, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17106, (Optr)&t_send0, (Optr)PSend17107, (Optr)&t_send0, (Optr)PSend17108, (Optr)&t_send0, (Optr)PSend17109, (Optr)&t_send0, (Optr)PSend17110, (Optr)&t_push1, (Optr)SMB_new, (Optr)&t_send1, (Optr)PSend17111, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17112, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17113, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17114, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17115, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17116, (Optr)&t_send0, (Optr)PSend17117, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17118, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17119, (Optr)&t_send0, (Optr)PSend17120, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17121, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17122, (Optr)&t_send0, (Optr)PSend17123, (Optr)&t_send0, (Optr)PSend17124, (Optr)&t_send0, (Optr)PSend17125, (Optr)&t_send0, (Optr)PSend17126, (Optr)&t_push1, (Optr)SMB_initialize, (Optr)&t_send1, (Optr)PSend17127, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17128, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17129, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17130, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17131, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17132, (Optr)&t_send0, (Optr)PSend17133, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17134, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17135, (Optr)&t_send0, (Optr)PSend17136, (Optr)&t_send0, (Optr)PSend17137, (Optr)&t_send0, (Optr)PSend17138, (Optr)&t_push1, (Optr)SMB_basicNew, (Optr)&t_send1, (Optr)PSend17139, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17140, (Optr)&t_send0, (Optr)PSend17141, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17142, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17074 = new_Method_with(empty_Array, PArray17075, empty_Array, PThreadedCode17076, 21, PAssign17077, PSend17083, PSend17086, PSend17089, PSend17095, PAssign17096, PSend17099, PSend17102, PSend17105, PSend17111, PAssign17112, PSend17115, PSend17118, PSend17121, PSend17127, PAssign17128, PSend17131, PSend17134, PSend17139, PSend17142, self);
    
    MethodClosure MC_SMB_testInstanceCreation = new_MethodClosure((Method)PMethod17074, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testInstanceCreation, MC_SMB_testInstanceCreation);
}


static void init_SMB_testFieldWrite() {
    Symbol SMB_testFieldWrite = new_Symbol(L"testFieldWrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17144 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17149 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17152 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17151 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17152);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17153 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    Array PThreadedCode17150 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17151, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17152, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17153, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17148 = new_Block_with(empty_Array, PArray17149, PThreadedCode17150, 3, PAssign17151, PSend17153, VAR_c_1_0);
    // interpret:. 
    Send PSend17147 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17148);
    Assign PAssign17146 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17147);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17154 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17155 = new_Send((Optr)PSend17154, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17156 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17157 = new_Send((Optr)PSend17156, SMB_should, 0);
    // beKindOf:. 
    Send PSend17158 = new_Send((Optr)PSend17157, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17159 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17160 = new_Send((Optr)PSend17159, SMB_should, 0);
    // beKindOf:. 
    Send PSend17161 = new_Send((Optr)PSend17160, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17162 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17163 = new_Send((Optr)PSend17162, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17164 = new_Send((Optr)PSend17163, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17165 = new_Send((Optr)PSend17164, SMB_selector, 0);
    // should. 
    Send PSend17166 = new_Send((Optr)PSend17165, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldWrite_Const = new_Constant((Optr)SMB_testFieldWrite);
    // be:. 
    Send PSend17167 = new_Send((Optr)PSend17166, SMB_be_, 1, (Optr)SMB_testFieldWrite_Const);
    // value. 
    Send PSend17169 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17168 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17169);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17170 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17171 = new_Send((Optr)PSend17170, SMB_should, 0);
    // beKindOf:. 
    Send PSend17172 = new_Send((Optr)PSend17171, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17173 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17174 = new_Send((Optr)PSend17173, SMB_should, 0);
    // beKindOf:. 
    Send PSend17175 = new_Send((Optr)PSend17174, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17177 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17176 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17177);
    // value. 
    Send PSend17178 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17179 = new_Send((Optr)PSend17178, SMB_should, 0);
    // be:. 
    Send PSend17180 = new_Send((Optr)PSend17179, SMB_be_, 1, (Optr)int_10_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17181 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17182 = new_Send((Optr)PSend17181, SMB_should, 0);
    // beKindOf:. 
    Send PSend17183 = new_Send((Optr)PSend17182, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17185 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17184 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17185);
    // should. 
    Send PSend17186 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17187 = new_Send((Optr)PSend17186, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17188 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17189 = new_Send((Optr)PSend17188, SMB_should, 0);
    // be:. 
    Send PSend17190 = new_Send((Optr)PSend17189, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17192 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17191 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17192);
    // should. 
    Send PSend17193 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17194 = new_Send((Optr)PSend17193, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17195 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17196 = new_Send((Optr)PSend17195, SMB_should, 0);
    // be:. 
    Send PSend17197 = new_Send((Optr)PSend17196, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17198 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17199 = new_Send((Optr)PSend17198, SMB_should, 0);
    // be:. 
    Send PSend17200 = new_Send((Optr)PSend17199, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17145 = instantiate_Array_with(ThreadedCode_Class, 0, 185, (Optr)&t_push1, (Optr)PAssign17146, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17148, (Optr)&t_send1, (Optr)PSend17147, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17154, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17155, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17156, (Optr)&t_send0, (Optr)PSend17157, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17158, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17159, (Optr)&t_send0, (Optr)PSend17160, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17161, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17162, (Optr)&t_send0, (Optr)PSend17163, (Optr)&t_send0, (Optr)PSend17164, (Optr)&t_send0, (Optr)PSend17165, (Optr)&t_send0, (Optr)PSend17166, (Optr)&t_push1, (Optr)SMB_testFieldWrite, (Optr)&t_send1, (Optr)PSend17167, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17168, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17169, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17170, (Optr)&t_send0, (Optr)PSend17171, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17172, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17173, (Optr)&t_send0, (Optr)PSend17174, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17175, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17176, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17177, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17178, (Optr)&t_send0, (Optr)PSend17179, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17180, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17181, (Optr)&t_send0, (Optr)PSend17182, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17183, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17184, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17185, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17186, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17187, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17188, (Optr)&t_send0, (Optr)PSend17189, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17190, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17191, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17192, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17193, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17194, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17195, (Optr)&t_send0, (Optr)PSend17196, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17197, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17198, (Optr)&t_send0, (Optr)PSend17199, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17200, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17143 = new_Method_with(empty_Array, PArray17144, empty_Array, PThreadedCode17145, 19, PAssign17146, PSend17155, PSend17158, PSend17161, PSend17167, PAssign17168, PSend17172, PSend17175, PAssign17176, PSend17180, PSend17183, PAssign17184, PSend17187, PSend17190, PAssign17191, PSend17194, PSend17197, PSend17200, self);
    
    MethodClosure MC_SMB_testFieldWrite = new_MethodClosure((Method)PMethod17143, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testFieldWrite, MC_SMB_testFieldWrite);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17204 = new_Send((Optr)PAliasInterpreter_classReference, SMB_new, 0);
    Assign PAssign17203 = new_Assign((Optr)slot_Interpretation_AliasInterpreterTest_i, (Optr)PSend17204);
    Array PThreadedCode17202 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign17203, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_send0, (Optr)PSend17204, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17201 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17202, 2, PAssign17203, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod17201, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_testConstant() {
    Symbol SMB_testConstant = new_Symbol(L"testConstant");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17206 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Array PThreadedCode17211 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_2);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Block PBlock17210 = new_Block_with(empty_Array, empty_Array, PThreadedCode17211, 1, int_2_Const);
    // interpret:. 
    Send PSend17209 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17210);
    Assign PAssign17208 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17209);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17212 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17213 = new_Send((Optr)PSend17212, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17214 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17215 = new_Send((Optr)PSend17214, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend17216 = new_Send((Optr)PSend17215, SMB_be_, 1, (Optr)int_2_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17218 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17217 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17218);
    // should. 
    Send PSend17219 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17220 = new_Send((Optr)PSend17219, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // origin. 
    Send PSend17221 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17222 = new_Send((Optr)PSend17221, SMB_should, 0);
    // be:. 
    Send PSend17223 = new_Send((Optr)PSend17222, SMB_be_, 1, (Optr)nil_Const);
    // value. 
    Send PSend17224 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17225 = new_Send((Optr)PSend17224, SMB_should, 0);
    // be:. 
    Send PSend17226 = new_Send((Optr)PSend17225, SMB_be_, 1, (Optr)int_2_Const);
    Array PThreadedCode17207 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign17208, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17210, (Optr)&t_send1, (Optr)PSend17209, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17212, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17213, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17214, (Optr)&t_send0, (Optr)PSend17215, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17216, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17217, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17218, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17219, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17220, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17221, (Optr)&t_send0, (Optr)PSend17222, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17223, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17224, (Optr)&t_send0, (Optr)PSend17225, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17226, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17205 = new_Method_with(empty_Array, PArray17206, empty_Array, PThreadedCode17207, 8, PAssign17208, PSend17213, PSend17216, PAssign17217, PSend17220, PSend17223, PSend17226, self);
    
    MethodClosure MC_SMB_testConstant = new_MethodClosure((Method)PMethod17205, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testConstant, MC_SMB_testConstant);
}


static void init_SMB_testFieldOverwrite() {
    Symbol SMB_testFieldOverwrite = new_Symbol(L"testFieldOverwrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17228 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17233 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17236 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17235 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17236);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17237 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // a:. 
    Send PSend17238 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_20_Const);
    Array PThreadedCode17234 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17235, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17237, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17238, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17232 = new_Block_with(empty_Array, PArray17233, PThreadedCode17234, 4, PAssign17235, PSend17237, PSend17238, VAR_c_1_0);
    // interpret:. 
    Send PSend17231 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17232);
    Assign PAssign17230 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17231);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17239 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17240 = new_Send((Optr)PSend17239, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17241 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17242 = new_Send((Optr)PSend17241, SMB_should, 0);
    // beKindOf:. 
    Send PSend17243 = new_Send((Optr)PSend17242, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17244 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17245 = new_Send((Optr)PSend17244, SMB_should, 0);
    // beKindOf:. 
    Send PSend17246 = new_Send((Optr)PSend17245, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17247 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17248 = new_Send((Optr)PSend17247, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17249 = new_Send((Optr)PSend17248, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17250 = new_Send((Optr)PSend17249, SMB_selector, 0);
    // should. 
    Send PSend17251 = new_Send((Optr)PSend17250, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldOverwrite_Const = new_Constant((Optr)SMB_testFieldOverwrite);
    // be:. 
    Send PSend17252 = new_Send((Optr)PSend17251, SMB_be_, 1, (Optr)SMB_testFieldOverwrite_Const);
    // value. 
    Send PSend17254 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17253 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17254);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17255 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17256 = new_Send((Optr)PSend17255, SMB_should, 0);
    // beKindOf:. 
    Send PSend17257 = new_Send((Optr)PSend17256, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17258 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17259 = new_Send((Optr)PSend17258, SMB_should, 0);
    // beKindOf:. 
    Send PSend17260 = new_Send((Optr)PSend17259, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17262 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17261 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17262);
    // value. 
    Send PSend17263 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17264 = new_Send((Optr)PSend17263, SMB_should, 0);
    // be:. 
    Send PSend17265 = new_Send((Optr)PSend17264, SMB_be_, 1, (Optr)int_20_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17266 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17267 = new_Send((Optr)PSend17266, SMB_should, 0);
    // beKindOf:. 
    Send PSend17268 = new_Send((Optr)PSend17267, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    // predecessor. 
    Send PSend17269 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // value. 
    Send PSend17270 = new_Send((Optr)PSend17269, SMB_value, 0);
    // should. 
    Send PSend17271 = new_Send((Optr)PSend17270, SMB_should, 0);
    // be:. 
    Send PSend17272 = new_Send((Optr)PSend17271, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17273 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // predecessor. 
    Send PSend17274 = new_Send((Optr)PSend17273, SMB_predecessor, 0);
    // should. 
    Send PSend17275 = new_Send((Optr)PSend17274, SMB_should, 0);
    // beKindOf:. 
    Send PSend17276 = new_Send((Optr)PSend17275, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // predecessor. 
    Send PSend17277 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17278 = new_Send((Optr)PSend17277, SMB_origin, 0);
    // should. 
    Send PSend17279 = new_Send((Optr)PSend17278, SMB_should, 0);
    // beKindOf:. 
    Send PSend17280 = new_Send((Optr)PSend17279, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // predecessor. 
    Send PSend17281 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17282 = new_Send((Optr)PSend17281, SMB_origin, 0);
    // value. 
    Send PSend17283 = new_Send((Optr)PSend17282, SMB_value, 0);
    // should. 
    Send PSend17284 = new_Send((Optr)PSend17283, SMB_should, 0);
    // be:. 
    Send PSend17285 = new_Send((Optr)PSend17284, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17286 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17287 = new_Send((Optr)PSend17286, SMB_origin, 0);
    // origin. 
    Send PSend17288 = new_Send((Optr)PSend17287, SMB_origin, 0);
    // should. 
    Send PSend17289 = new_Send((Optr)PSend17288, SMB_should, 0);
    // beKindOf:. 
    Send PSend17290 = new_Send((Optr)PSend17289, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // predecessor. 
    Send PSend17291 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17292 = new_Send((Optr)PSend17291, SMB_origin, 0);
    // origin. 
    Send PSend17293 = new_Send((Optr)PSend17292, SMB_origin, 0);
    // value. 
    Send PSend17294 = new_Send((Optr)PSend17293, SMB_value, 0);
    // should. 
    Send PSend17295 = new_Send((Optr)PSend17294, SMB_should, 0);
    // be:. 
    Send PSend17296 = new_Send((Optr)PSend17295, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17297 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17298 = new_Send((Optr)PSend17297, SMB_origin, 0);
    // origin. 
    Send PSend17299 = new_Send((Optr)PSend17298, SMB_origin, 0);
    // origin. 
    Send PSend17300 = new_Send((Optr)PSend17299, SMB_origin, 0);
    // should. 
    Send PSend17301 = new_Send((Optr)PSend17300, SMB_should, 0);
    // be:. 
    Send PSend17302 = new_Send((Optr)PSend17301, SMB_be_, 1, (Optr)nil_Const);
    // origin. 
    Send PSend17304 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17303 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17304);
    // should. 
    Send PSend17305 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17306 = new_Send((Optr)PSend17305, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17307 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17308 = new_Send((Optr)PSend17307, SMB_should, 0);
    // be:. 
    Send PSend17309 = new_Send((Optr)PSend17308, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17311 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17310 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17311);
    // should. 
    Send PSend17312 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17313 = new_Send((Optr)PSend17312, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17314 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17315 = new_Send((Optr)PSend17314, SMB_should, 0);
    // be:. 
    Send PSend17316 = new_Send((Optr)PSend17315, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17317 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17318 = new_Send((Optr)PSend17317, SMB_should, 0);
    // be:. 
    Send PSend17319 = new_Send((Optr)PSend17318, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17229 = instantiate_Array_with(ThreadedCode_Class, 0, 287, (Optr)&t_push1, (Optr)PAssign17230, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17232, (Optr)&t_send1, (Optr)PSend17231, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17239, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17240, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17241, (Optr)&t_send0, (Optr)PSend17242, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17243, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17244, (Optr)&t_send0, (Optr)PSend17245, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17246, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17247, (Optr)&t_send0, (Optr)PSend17248, (Optr)&t_send0, (Optr)PSend17249, (Optr)&t_send0, (Optr)PSend17250, (Optr)&t_send0, (Optr)PSend17251, (Optr)&t_push1, (Optr)SMB_testFieldOverwrite, (Optr)&t_send1, (Optr)PSend17252, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17253, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17254, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17255, (Optr)&t_send0, (Optr)PSend17256, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17257, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17258, (Optr)&t_send0, (Optr)PSend17259, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17260, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17261, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17262, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17263, (Optr)&t_send0, (Optr)PSend17264, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17265, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17266, (Optr)&t_send0, (Optr)PSend17267, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17269, (Optr)&t_send0, (Optr)PSend17270, (Optr)&t_send0, (Optr)PSend17271, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17272, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17273, (Optr)&t_send0, (Optr)PSend17274, (Optr)&t_send0, (Optr)PSend17275, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17276, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17277, (Optr)&t_send0, (Optr)PSend17278, (Optr)&t_send0, (Optr)PSend17279, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17280, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17281, (Optr)&t_send0, (Optr)PSend17282, (Optr)&t_send0, (Optr)PSend17283, (Optr)&t_send0, (Optr)PSend17284, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17285, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17286, (Optr)&t_send0, (Optr)PSend17287, (Optr)&t_send0, (Optr)PSend17288, (Optr)&t_send0, (Optr)PSend17289, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17290, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17291, (Optr)&t_send0, (Optr)PSend17292, (Optr)&t_send0, (Optr)PSend17293, (Optr)&t_send0, (Optr)PSend17294, (Optr)&t_send0, (Optr)PSend17295, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17296, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17297, (Optr)&t_send0, (Optr)PSend17298, (Optr)&t_send0, (Optr)PSend17299, (Optr)&t_send0, (Optr)PSend17300, (Optr)&t_send0, (Optr)PSend17301, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17302, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17303, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17304, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17305, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17306, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17307, (Optr)&t_send0, (Optr)PSend17308, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17309, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17310, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17311, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17312, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17313, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17314, (Optr)&t_send0, (Optr)PSend17315, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17316, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17317, (Optr)&t_send0, (Optr)PSend17318, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17319, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17227 = new_Method_with(empty_Array, PArray17228, empty_Array, PThreadedCode17229, 26, PAssign17230, PSend17240, PSend17243, PSend17246, PSend17252, PAssign17253, PSend17257, PSend17260, PAssign17261, PSend17265, PSend17268, PSend17272, PSend17276, PSend17280, PSend17285, PSend17290, PSend17296, PSend17302, PAssign17303, PSend17306, PSend17309, PAssign17310, PSend17313, PSend17316, PSend17319, self);
    
    MethodClosure MC_SMB_testFieldOverwrite = new_MethodClosure((Method)PMethod17227, Interpretation_AliasInterpreterTest_Class);
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