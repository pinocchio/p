#include <lib/class/Interpretation/AliasInterpreterTest.h>


Optr layout_Interpretation_AliasInterpreterTest_Class_class;
Optr slot_Interpretation_AliasInterpreterTest_i;
Optr layout_Interpretation_AliasInterpreterTest;


static void init_SMB_testInstanceCreation() {
    Symbol SMB_testInstanceCreation = new_Symbol(L"testInstanceCreation");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17184 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17190 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Array PThreadedCode17189 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17190, (Optr)&t_block_return);
    Block PBlock17188 = new_Block_with(empty_Array, empty_Array, PThreadedCode17189, 1, PSend17190);
    // interpret:. 
    Send PSend17187 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17188);
    Assign PAssign17186 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17187);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17191 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17192 = new_Send((Optr)PSend17191, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17193 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17194 = new_Send((Optr)PSend17193, SMB_should, 0);
    // beKindOf:. 
    Send PSend17195 = new_Send((Optr)PSend17194, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17196 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17197 = new_Send((Optr)PSend17196, SMB_should, 0);
    // beKindOf:. 
    Send PSend17198 = new_Send((Optr)PSend17197, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17199 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17200 = new_Send((Optr)PSend17199, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17201 = new_Send((Optr)PSend17200, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17202 = new_Send((Optr)PSend17201, SMB_selector, 0);
    // should. 
    Send PSend17203 = new_Send((Optr)PSend17202, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testInstanceCreation_Const = new_Constant((Optr)SMB_testInstanceCreation);
    // be:. 
    Send PSend17204 = new_Send((Optr)PSend17203, SMB_be_, 1, (Optr)SMB_testInstanceCreation_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17206 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17205 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17206);
    // should. 
    Send PSend17207 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17208 = new_Send((Optr)PSend17207, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17209 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17210 = new_Send((Optr)PSend17209, SMB_should, 0);
    // beKindOf:. 
    Send PSend17211 = new_Send((Optr)PSend17210, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17212 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17213 = new_Send((Optr)PSend17212, SMB_should, 0);
    // beKindOf:. 
    Send PSend17214 = new_Send((Optr)PSend17213, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17215 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17216 = new_Send((Optr)PSend17215, SMB_homeContext, 0);
    // closure. 
    Send PSend17217 = new_Send((Optr)PSend17216, SMB_closure, 0);
    // selector. 
    Send PSend17218 = new_Send((Optr)PSend17217, SMB_selector, 0);
    // should. 
    Send PSend17219 = new_Send((Optr)PSend17218, SMB_should, 0);
    Constant SMB_new_Const = new_Constant((Optr)SMB_new);
    // be:. 
    Send PSend17220 = new_Send((Optr)PSend17219, SMB_be_, 1, (Optr)SMB_new_Const);
    // origin. 
    Send PSend17222 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17221 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17222);
    // should. 
    Send PSend17223 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17224 = new_Send((Optr)PSend17223, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17225 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17226 = new_Send((Optr)PSend17225, SMB_should, 0);
    // beKindOf:. 
    Send PSend17227 = new_Send((Optr)PSend17226, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17228 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17229 = new_Send((Optr)PSend17228, SMB_should, 0);
    // beKindOf:. 
    Send PSend17230 = new_Send((Optr)PSend17229, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17231 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17232 = new_Send((Optr)PSend17231, SMB_homeContext, 0);
    // closure. 
    Send PSend17233 = new_Send((Optr)PSend17232, SMB_closure, 0);
    // selector. 
    Send PSend17234 = new_Send((Optr)PSend17233, SMB_selector, 0);
    // should. 
    Send PSend17235 = new_Send((Optr)PSend17234, SMB_should, 0);
    Symbol  SMB_initialize = new_Symbol(L"initialize");
    Constant SMB_initialize_Const = new_Constant((Optr)SMB_initialize);
    // be:. 
    Send PSend17236 = new_Send((Optr)PSend17235, SMB_be_, 1, (Optr)SMB_initialize_Const);
    // origin. 
    Send PSend17238 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17237 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17238);
    // should. 
    Send PSend17239 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17240 = new_Send((Optr)PSend17239, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // context. 
    Send PSend17241 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17242 = new_Send((Optr)PSend17241, SMB_should, 0);
    // beKindOf:. 
    Send PSend17243 = new_Send((Optr)PSend17242, SMB_beKindOf_, 1, (Optr)PNativeMethodContext_classReference);
    // context. 
    Send PSend17244 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend17245 = new_Send((Optr)PSend17244, SMB_message, 0);
    // selector. 
    Send PSend17246 = new_Send((Optr)PSend17245, SMB_selector, 0);
    // should. 
    Send PSend17247 = new_Send((Optr)PSend17246, SMB_should, 0);
    Symbol  SMB_basicNew = new_Symbol(L"basicNew");
    Constant SMB_basicNew_Const = new_Constant((Optr)SMB_basicNew);
    // be:. 
    Send PSend17248 = new_Send((Optr)PSend17247, SMB_be_, 1, (Optr)SMB_basicNew_Const);
    // origin. 
    Send PSend17249 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17250 = new_Send((Optr)PSend17249, SMB_should, 0);
    // be:. 
    Send PSend17251 = new_Send((Optr)PSend17250, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17185 = instantiate_Array_with(ThreadedCode_Class, 0, 224, (Optr)&t_push1, (Optr)PAssign17186, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17188, (Optr)&t_send1, (Optr)PSend17187, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17191, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17192, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17193, (Optr)&t_send0, (Optr)PSend17194, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17195, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17196, (Optr)&t_send0, (Optr)PSend17197, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17198, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17199, (Optr)&t_send0, (Optr)PSend17200, (Optr)&t_send0, (Optr)PSend17201, (Optr)&t_send0, (Optr)PSend17202, (Optr)&t_send0, (Optr)PSend17203, (Optr)&t_push1, (Optr)SMB_testInstanceCreation, (Optr)&t_send1, (Optr)PSend17204, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17205, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17206, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17207, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17209, (Optr)&t_send0, (Optr)PSend17210, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17211, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17212, (Optr)&t_send0, (Optr)PSend17213, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17214, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17215, (Optr)&t_send0, (Optr)PSend17216, (Optr)&t_send0, (Optr)PSend17217, (Optr)&t_send0, (Optr)PSend17218, (Optr)&t_send0, (Optr)PSend17219, (Optr)&t_push1, (Optr)SMB_new, (Optr)&t_send1, (Optr)PSend17220, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17221, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17222, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17223, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17224, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17225, (Optr)&t_send0, (Optr)PSend17226, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17227, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17228, (Optr)&t_send0, (Optr)PSend17229, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17230, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17231, (Optr)&t_send0, (Optr)PSend17232, (Optr)&t_send0, (Optr)PSend17233, (Optr)&t_send0, (Optr)PSend17234, (Optr)&t_send0, (Optr)PSend17235, (Optr)&t_push1, (Optr)SMB_initialize, (Optr)&t_send1, (Optr)PSend17236, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17237, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17238, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17239, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17240, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17241, (Optr)&t_send0, (Optr)PSend17242, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17243, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17244, (Optr)&t_send0, (Optr)PSend17245, (Optr)&t_send0, (Optr)PSend17246, (Optr)&t_send0, (Optr)PSend17247, (Optr)&t_push1, (Optr)SMB_basicNew, (Optr)&t_send1, (Optr)PSend17248, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17249, (Optr)&t_send0, (Optr)PSend17250, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17251, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17183 = new_Method_with(empty_Array, PArray17184, empty_Array, PThreadedCode17185, 21, PAssign17186, PSend17192, PSend17195, PSend17198, PSend17204, PAssign17205, PSend17208, PSend17211, PSend17214, PSend17220, PAssign17221, PSend17224, PSend17227, PSend17230, PSend17236, PAssign17237, PSend17240, PSend17243, PSend17248, PSend17251, self);
    
    MethodClosure MC_SMB_testInstanceCreation = new_MethodClosure((Method)PMethod17183, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testInstanceCreation, MC_SMB_testInstanceCreation);
}


static void init_SMB_testFieldWrite() {
    Symbol SMB_testFieldWrite = new_Symbol(L"testFieldWrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17253 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17258 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17261 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17260 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17261);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17262 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    Array PThreadedCode17259 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17260, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17261, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17262, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17257 = new_Block_with(empty_Array, PArray17258, PThreadedCode17259, 3, PAssign17260, PSend17262, VAR_c_1_0);
    // interpret:. 
    Send PSend17256 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17257);
    Assign PAssign17255 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17256);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17263 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17264 = new_Send((Optr)PSend17263, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17265 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17266 = new_Send((Optr)PSend17265, SMB_should, 0);
    // beKindOf:. 
    Send PSend17267 = new_Send((Optr)PSend17266, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17268 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17269 = new_Send((Optr)PSend17268, SMB_should, 0);
    // beKindOf:. 
    Send PSend17270 = new_Send((Optr)PSend17269, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17271 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17272 = new_Send((Optr)PSend17271, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17273 = new_Send((Optr)PSend17272, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17274 = new_Send((Optr)PSend17273, SMB_selector, 0);
    // should. 
    Send PSend17275 = new_Send((Optr)PSend17274, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldWrite_Const = new_Constant((Optr)SMB_testFieldWrite);
    // be:. 
    Send PSend17276 = new_Send((Optr)PSend17275, SMB_be_, 1, (Optr)SMB_testFieldWrite_Const);
    // value. 
    Send PSend17278 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17277 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17278);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17279 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17280 = new_Send((Optr)PSend17279, SMB_should, 0);
    // beKindOf:. 
    Send PSend17281 = new_Send((Optr)PSend17280, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17282 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17283 = new_Send((Optr)PSend17282, SMB_should, 0);
    // beKindOf:. 
    Send PSend17284 = new_Send((Optr)PSend17283, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17286 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17285 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17286);
    // value. 
    Send PSend17287 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17288 = new_Send((Optr)PSend17287, SMB_should, 0);
    // be:. 
    Send PSend17289 = new_Send((Optr)PSend17288, SMB_be_, 1, (Optr)int_10_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17290 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17291 = new_Send((Optr)PSend17290, SMB_should, 0);
    // beKindOf:. 
    Send PSend17292 = new_Send((Optr)PSend17291, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17294 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17293 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17294);
    // should. 
    Send PSend17295 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17296 = new_Send((Optr)PSend17295, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17297 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17298 = new_Send((Optr)PSend17297, SMB_should, 0);
    // be:. 
    Send PSend17299 = new_Send((Optr)PSend17298, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17301 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17300 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17301);
    // should. 
    Send PSend17302 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17303 = new_Send((Optr)PSend17302, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17304 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17305 = new_Send((Optr)PSend17304, SMB_should, 0);
    // be:. 
    Send PSend17306 = new_Send((Optr)PSend17305, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17307 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17308 = new_Send((Optr)PSend17307, SMB_should, 0);
    // be:. 
    Send PSend17309 = new_Send((Optr)PSend17308, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17254 = instantiate_Array_with(ThreadedCode_Class, 0, 185, (Optr)&t_push1, (Optr)PAssign17255, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17257, (Optr)&t_send1, (Optr)PSend17256, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17263, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17264, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17265, (Optr)&t_send0, (Optr)PSend17266, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17267, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17268, (Optr)&t_send0, (Optr)PSend17269, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17270, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17271, (Optr)&t_send0, (Optr)PSend17272, (Optr)&t_send0, (Optr)PSend17273, (Optr)&t_send0, (Optr)PSend17274, (Optr)&t_send0, (Optr)PSend17275, (Optr)&t_push1, (Optr)SMB_testFieldWrite, (Optr)&t_send1, (Optr)PSend17276, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17277, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17278, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17279, (Optr)&t_send0, (Optr)PSend17280, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17281, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17282, (Optr)&t_send0, (Optr)PSend17283, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17284, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17285, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17286, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17287, (Optr)&t_send0, (Optr)PSend17288, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17289, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17290, (Optr)&t_send0, (Optr)PSend17291, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17292, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17293, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17294, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17295, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17296, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17297, (Optr)&t_send0, (Optr)PSend17298, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17299, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17300, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17301, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17302, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17303, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17304, (Optr)&t_send0, (Optr)PSend17305, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17306, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17307, (Optr)&t_send0, (Optr)PSend17308, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17309, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17252 = new_Method_with(empty_Array, PArray17253, empty_Array, PThreadedCode17254, 19, PAssign17255, PSend17264, PSend17267, PSend17270, PSend17276, PAssign17277, PSend17281, PSend17284, PAssign17285, PSend17289, PSend17292, PAssign17293, PSend17296, PSend17299, PAssign17300, PSend17303, PSend17306, PSend17309, self);
    
    MethodClosure MC_SMB_testFieldWrite = new_MethodClosure((Method)PMethod17252, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testFieldWrite, MC_SMB_testFieldWrite);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17313 = new_Send((Optr)PAliasInterpreter_classReference, SMB_new, 0);
    Assign PAssign17312 = new_Assign((Optr)slot_Interpretation_AliasInterpreterTest_i, (Optr)PSend17313);
    Array PThreadedCode17311 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign17312, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_send0, (Optr)PSend17313, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17310 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17311, 2, PAssign17312, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod17310, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_testConstant() {
    Symbol SMB_testConstant = new_Symbol(L"testConstant");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17315 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Array PThreadedCode17320 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_2);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Block PBlock17319 = new_Block_with(empty_Array, empty_Array, PThreadedCode17320, 1, int_2_Const);
    // interpret:. 
    Send PSend17318 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17319);
    Assign PAssign17317 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17318);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17321 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17322 = new_Send((Optr)PSend17321, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17323 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17324 = new_Send((Optr)PSend17323, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend17325 = new_Send((Optr)PSend17324, SMB_be_, 1, (Optr)int_2_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17327 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17326 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17327);
    // should. 
    Send PSend17328 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17329 = new_Send((Optr)PSend17328, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // origin. 
    Send PSend17330 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17331 = new_Send((Optr)PSend17330, SMB_should, 0);
    // be:. 
    Send PSend17332 = new_Send((Optr)PSend17331, SMB_be_, 1, (Optr)nil_Const);
    // value. 
    Send PSend17333 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17334 = new_Send((Optr)PSend17333, SMB_should, 0);
    // be:. 
    Send PSend17335 = new_Send((Optr)PSend17334, SMB_be_, 1, (Optr)int_2_Const);
    Array PThreadedCode17316 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign17317, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17319, (Optr)&t_send1, (Optr)PSend17318, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17321, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17322, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17323, (Optr)&t_send0, (Optr)PSend17324, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17325, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17326, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17327, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17328, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17329, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17330, (Optr)&t_send0, (Optr)PSend17331, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17332, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17333, (Optr)&t_send0, (Optr)PSend17334, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17335, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17314 = new_Method_with(empty_Array, PArray17315, empty_Array, PThreadedCode17316, 8, PAssign17317, PSend17322, PSend17325, PAssign17326, PSend17329, PSend17332, PSend17335, self);
    
    MethodClosure MC_SMB_testConstant = new_MethodClosure((Method)PMethod17314, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testConstant, MC_SMB_testConstant);
}


static void init_SMB_testFieldOverwrite() {
    Symbol SMB_testFieldOverwrite = new_Symbol(L"testFieldOverwrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17337 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17342 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17345 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17344 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17345);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17346 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // a:. 
    Send PSend17347 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_20_Const);
    Array PThreadedCode17343 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17344, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17345, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17346, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17347, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17341 = new_Block_with(empty_Array, PArray17342, PThreadedCode17343, 4, PAssign17344, PSend17346, PSend17347, VAR_c_1_0);
    // interpret:. 
    Send PSend17340 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17341);
    Assign PAssign17339 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17340);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17348 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17349 = new_Send((Optr)PSend17348, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17350 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17351 = new_Send((Optr)PSend17350, SMB_should, 0);
    // beKindOf:. 
    Send PSend17352 = new_Send((Optr)PSend17351, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17353 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17354 = new_Send((Optr)PSend17353, SMB_should, 0);
    // beKindOf:. 
    Send PSend17355 = new_Send((Optr)PSend17354, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17356 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17357 = new_Send((Optr)PSend17356, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17358 = new_Send((Optr)PSend17357, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17359 = new_Send((Optr)PSend17358, SMB_selector, 0);
    // should. 
    Send PSend17360 = new_Send((Optr)PSend17359, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldOverwrite_Const = new_Constant((Optr)SMB_testFieldOverwrite);
    // be:. 
    Send PSend17361 = new_Send((Optr)PSend17360, SMB_be_, 1, (Optr)SMB_testFieldOverwrite_Const);
    // value. 
    Send PSend17363 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17362 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17363);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17364 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17365 = new_Send((Optr)PSend17364, SMB_should, 0);
    // beKindOf:. 
    Send PSend17366 = new_Send((Optr)PSend17365, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17367 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17368 = new_Send((Optr)PSend17367, SMB_should, 0);
    // beKindOf:. 
    Send PSend17369 = new_Send((Optr)PSend17368, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17371 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17370 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17371);
    // value. 
    Send PSend17372 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17373 = new_Send((Optr)PSend17372, SMB_should, 0);
    // be:. 
    Send PSend17374 = new_Send((Optr)PSend17373, SMB_be_, 1, (Optr)int_20_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17375 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17376 = new_Send((Optr)PSend17375, SMB_should, 0);
    // beKindOf:. 
    Send PSend17377 = new_Send((Optr)PSend17376, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    // predecessor. 
    Send PSend17378 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // value. 
    Send PSend17379 = new_Send((Optr)PSend17378, SMB_value, 0);
    // should. 
    Send PSend17380 = new_Send((Optr)PSend17379, SMB_should, 0);
    // be:. 
    Send PSend17381 = new_Send((Optr)PSend17380, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17382 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // predecessor. 
    Send PSend17383 = new_Send((Optr)PSend17382, SMB_predecessor, 0);
    // should. 
    Send PSend17384 = new_Send((Optr)PSend17383, SMB_should, 0);
    // beKindOf:. 
    Send PSend17385 = new_Send((Optr)PSend17384, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // predecessor. 
    Send PSend17386 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17387 = new_Send((Optr)PSend17386, SMB_origin, 0);
    // should. 
    Send PSend17388 = new_Send((Optr)PSend17387, SMB_should, 0);
    // beKindOf:. 
    Send PSend17389 = new_Send((Optr)PSend17388, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // predecessor. 
    Send PSend17390 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17391 = new_Send((Optr)PSend17390, SMB_origin, 0);
    // value. 
    Send PSend17392 = new_Send((Optr)PSend17391, SMB_value, 0);
    // should. 
    Send PSend17393 = new_Send((Optr)PSend17392, SMB_should, 0);
    // be:. 
    Send PSend17394 = new_Send((Optr)PSend17393, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17395 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17396 = new_Send((Optr)PSend17395, SMB_origin, 0);
    // origin. 
    Send PSend17397 = new_Send((Optr)PSend17396, SMB_origin, 0);
    // should. 
    Send PSend17398 = new_Send((Optr)PSend17397, SMB_should, 0);
    // beKindOf:. 
    Send PSend17399 = new_Send((Optr)PSend17398, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // predecessor. 
    Send PSend17400 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17401 = new_Send((Optr)PSend17400, SMB_origin, 0);
    // origin. 
    Send PSend17402 = new_Send((Optr)PSend17401, SMB_origin, 0);
    // value. 
    Send PSend17403 = new_Send((Optr)PSend17402, SMB_value, 0);
    // should. 
    Send PSend17404 = new_Send((Optr)PSend17403, SMB_should, 0);
    // be:. 
    Send PSend17405 = new_Send((Optr)PSend17404, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17406 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17407 = new_Send((Optr)PSend17406, SMB_origin, 0);
    // origin. 
    Send PSend17408 = new_Send((Optr)PSend17407, SMB_origin, 0);
    // origin. 
    Send PSend17409 = new_Send((Optr)PSend17408, SMB_origin, 0);
    // should. 
    Send PSend17410 = new_Send((Optr)PSend17409, SMB_should, 0);
    // be:. 
    Send PSend17411 = new_Send((Optr)PSend17410, SMB_be_, 1, (Optr)nil_Const);
    // origin. 
    Send PSend17413 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17412 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17413);
    // should. 
    Send PSend17414 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17415 = new_Send((Optr)PSend17414, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17416 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17417 = new_Send((Optr)PSend17416, SMB_should, 0);
    // be:. 
    Send PSend17418 = new_Send((Optr)PSend17417, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17420 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17419 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17420);
    // should. 
    Send PSend17421 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17422 = new_Send((Optr)PSend17421, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17423 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17424 = new_Send((Optr)PSend17423, SMB_should, 0);
    // be:. 
    Send PSend17425 = new_Send((Optr)PSend17424, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17426 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17427 = new_Send((Optr)PSend17426, SMB_should, 0);
    // be:. 
    Send PSend17428 = new_Send((Optr)PSend17427, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17338 = instantiate_Array_with(ThreadedCode_Class, 0, 287, (Optr)&t_push1, (Optr)PAssign17339, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17341, (Optr)&t_send1, (Optr)PSend17340, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17348, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17349, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17350, (Optr)&t_send0, (Optr)PSend17351, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17352, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17353, (Optr)&t_send0, (Optr)PSend17354, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17355, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17356, (Optr)&t_send0, (Optr)PSend17357, (Optr)&t_send0, (Optr)PSend17358, (Optr)&t_send0, (Optr)PSend17359, (Optr)&t_send0, (Optr)PSend17360, (Optr)&t_push1, (Optr)SMB_testFieldOverwrite, (Optr)&t_send1, (Optr)PSend17361, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17362, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17363, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17364, (Optr)&t_send0, (Optr)PSend17365, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17366, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17367, (Optr)&t_send0, (Optr)PSend17368, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17369, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17370, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17371, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17372, (Optr)&t_send0, (Optr)PSend17373, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17374, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17375, (Optr)&t_send0, (Optr)PSend17376, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17377, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17378, (Optr)&t_send0, (Optr)PSend17379, (Optr)&t_send0, (Optr)PSend17380, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17381, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17382, (Optr)&t_send0, (Optr)PSend17383, (Optr)&t_send0, (Optr)PSend17384, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17385, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17386, (Optr)&t_send0, (Optr)PSend17387, (Optr)&t_send0, (Optr)PSend17388, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17389, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17390, (Optr)&t_send0, (Optr)PSend17391, (Optr)&t_send0, (Optr)PSend17392, (Optr)&t_send0, (Optr)PSend17393, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17394, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17395, (Optr)&t_send0, (Optr)PSend17396, (Optr)&t_send0, (Optr)PSend17397, (Optr)&t_send0, (Optr)PSend17398, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17399, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17400, (Optr)&t_send0, (Optr)PSend17401, (Optr)&t_send0, (Optr)PSend17402, (Optr)&t_send0, (Optr)PSend17403, (Optr)&t_send0, (Optr)PSend17404, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17405, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17406, (Optr)&t_send0, (Optr)PSend17407, (Optr)&t_send0, (Optr)PSend17408, (Optr)&t_send0, (Optr)PSend17409, (Optr)&t_send0, (Optr)PSend17410, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17411, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17412, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17413, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17414, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17415, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17416, (Optr)&t_send0, (Optr)PSend17417, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17418, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17419, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17420, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17421, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17422, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17423, (Optr)&t_send0, (Optr)PSend17424, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17425, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17426, (Optr)&t_send0, (Optr)PSend17427, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17428, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17336 = new_Method_with(empty_Array, PArray17337, empty_Array, PThreadedCode17338, 26, PAssign17339, PSend17349, PSend17352, PSend17355, PSend17361, PAssign17362, PSend17366, PSend17369, PAssign17370, PSend17374, PSend17377, PSend17381, PSend17385, PSend17389, PSend17394, PSend17399, PSend17405, PSend17411, PAssign17412, PSend17415, PSend17418, PAssign17419, PSend17422, PSend17425, PSend17428, self);
    
    MethodClosure MC_SMB_testFieldOverwrite = new_MethodClosure((Method)PMethod17336, Interpretation_AliasInterpreterTest_Class);
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