#include <lib/class/Interpretation/AliasInterpreterTest.h>


Optr layout_Interpretation_AliasInterpreterTest_Class_class;
Optr slot_Interpretation_AliasInterpreterTest_i;
Optr layout_Interpretation_AliasInterpreterTest;


static void init_SMB_testInstanceCreation() {
    Symbol SMB_testInstanceCreation = new_Symbol(L"testInstanceCreation");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17159 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17165 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Array PThreadedCode17164 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17165, (Optr)&t_block_return);
    Block PBlock17163 = new_Block_with(empty_Array, empty_Array, PThreadedCode17164, 1, PSend17165);
    // interpret:. 
    Send PSend17162 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17163);
    Assign PAssign17161 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17162);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17166 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17167 = new_Send((Optr)PSend17166, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17168 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17169 = new_Send((Optr)PSend17168, SMB_should, 0);
    // beKindOf:. 
    Send PSend17170 = new_Send((Optr)PSend17169, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17171 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17172 = new_Send((Optr)PSend17171, SMB_should, 0);
    // beKindOf:. 
    Send PSend17173 = new_Send((Optr)PSend17172, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17174 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17175 = new_Send((Optr)PSend17174, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17176 = new_Send((Optr)PSend17175, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17177 = new_Send((Optr)PSend17176, SMB_selector, 0);
    // should. 
    Send PSend17178 = new_Send((Optr)PSend17177, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testInstanceCreation_Const = new_Constant((Optr)SMB_testInstanceCreation);
    // be:. 
    Send PSend17179 = new_Send((Optr)PSend17178, SMB_be_, 1, (Optr)SMB_testInstanceCreation_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17181 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17180 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17181);
    // should. 
    Send PSend17182 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17183 = new_Send((Optr)PSend17182, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17184 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17185 = new_Send((Optr)PSend17184, SMB_should, 0);
    // beKindOf:. 
    Send PSend17186 = new_Send((Optr)PSend17185, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17187 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17188 = new_Send((Optr)PSend17187, SMB_should, 0);
    // beKindOf:. 
    Send PSend17189 = new_Send((Optr)PSend17188, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17190 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17191 = new_Send((Optr)PSend17190, SMB_homeContext, 0);
    // closure. 
    Send PSend17192 = new_Send((Optr)PSend17191, SMB_closure, 0);
    // selector. 
    Send PSend17193 = new_Send((Optr)PSend17192, SMB_selector, 0);
    // should. 
    Send PSend17194 = new_Send((Optr)PSend17193, SMB_should, 0);
    Constant SMB_new_Const = new_Constant((Optr)SMB_new);
    // be:. 
    Send PSend17195 = new_Send((Optr)PSend17194, SMB_be_, 1, (Optr)SMB_new_Const);
    // origin. 
    Send PSend17197 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17196 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17197);
    // should. 
    Send PSend17198 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17199 = new_Send((Optr)PSend17198, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17200 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17201 = new_Send((Optr)PSend17200, SMB_should, 0);
    // beKindOf:. 
    Send PSend17202 = new_Send((Optr)PSend17201, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17203 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17204 = new_Send((Optr)PSend17203, SMB_should, 0);
    // beKindOf:. 
    Send PSend17205 = new_Send((Optr)PSend17204, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17206 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17207 = new_Send((Optr)PSend17206, SMB_homeContext, 0);
    // closure. 
    Send PSend17208 = new_Send((Optr)PSend17207, SMB_closure, 0);
    // selector. 
    Send PSend17209 = new_Send((Optr)PSend17208, SMB_selector, 0);
    // should. 
    Send PSend17210 = new_Send((Optr)PSend17209, SMB_should, 0);
    Symbol  SMB_initialize = new_Symbol(L"initialize");
    Constant SMB_initialize_Const = new_Constant((Optr)SMB_initialize);
    // be:. 
    Send PSend17211 = new_Send((Optr)PSend17210, SMB_be_, 1, (Optr)SMB_initialize_Const);
    // origin. 
    Send PSend17213 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17212 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17213);
    // should. 
    Send PSend17214 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17215 = new_Send((Optr)PSend17214, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // context. 
    Send PSend17216 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17217 = new_Send((Optr)PSend17216, SMB_should, 0);
    // beKindOf:. 
    Send PSend17218 = new_Send((Optr)PSend17217, SMB_beKindOf_, 1, (Optr)PNativeMethodContext_classReference);
    // context. 
    Send PSend17219 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend17220 = new_Send((Optr)PSend17219, SMB_message, 0);
    // selector. 
    Send PSend17221 = new_Send((Optr)PSend17220, SMB_selector, 0);
    // should. 
    Send PSend17222 = new_Send((Optr)PSend17221, SMB_should, 0);
    Symbol  SMB_basicNew = new_Symbol(L"basicNew");
    Constant SMB_basicNew_Const = new_Constant((Optr)SMB_basicNew);
    // be:. 
    Send PSend17223 = new_Send((Optr)PSend17222, SMB_be_, 1, (Optr)SMB_basicNew_Const);
    // origin. 
    Send PSend17224 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17225 = new_Send((Optr)PSend17224, SMB_should, 0);
    // be:. 
    Send PSend17226 = new_Send((Optr)PSend17225, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17160 = instantiate_Array_with(ThreadedCode_Class, 0, 224, (Optr)&t_push1, (Optr)PAssign17161, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17163, (Optr)&t_send1, (Optr)PSend17162, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17166, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17167, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17168, (Optr)&t_send0, (Optr)PSend17169, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17170, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17171, (Optr)&t_send0, (Optr)PSend17172, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17173, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17174, (Optr)&t_send0, (Optr)PSend17175, (Optr)&t_send0, (Optr)PSend17176, (Optr)&t_send0, (Optr)PSend17177, (Optr)&t_send0, (Optr)PSend17178, (Optr)&t_push1, (Optr)SMB_testInstanceCreation, (Optr)&t_send1, (Optr)PSend17179, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17180, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17181, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17182, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17183, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17184, (Optr)&t_send0, (Optr)PSend17185, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17186, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17187, (Optr)&t_send0, (Optr)PSend17188, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17189, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17190, (Optr)&t_send0, (Optr)PSend17191, (Optr)&t_send0, (Optr)PSend17192, (Optr)&t_send0, (Optr)PSend17193, (Optr)&t_send0, (Optr)PSend17194, (Optr)&t_push1, (Optr)SMB_new, (Optr)&t_send1, (Optr)PSend17195, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17196, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17197, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17198, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17199, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17200, (Optr)&t_send0, (Optr)PSend17201, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17202, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17203, (Optr)&t_send0, (Optr)PSend17204, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17205, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17206, (Optr)&t_send0, (Optr)PSend17207, (Optr)&t_send0, (Optr)PSend17208, (Optr)&t_send0, (Optr)PSend17209, (Optr)&t_send0, (Optr)PSend17210, (Optr)&t_push1, (Optr)SMB_initialize, (Optr)&t_send1, (Optr)PSend17211, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17212, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17213, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17214, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17215, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17216, (Optr)&t_send0, (Optr)PSend17217, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17218, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17219, (Optr)&t_send0, (Optr)PSend17220, (Optr)&t_send0, (Optr)PSend17221, (Optr)&t_send0, (Optr)PSend17222, (Optr)&t_push1, (Optr)SMB_basicNew, (Optr)&t_send1, (Optr)PSend17223, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17224, (Optr)&t_send0, (Optr)PSend17225, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17226, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17158 = new_Method_with(empty_Array, PArray17159, empty_Array, PThreadedCode17160, 21, PAssign17161, PSend17167, PSend17170, PSend17173, PSend17179, PAssign17180, PSend17183, PSend17186, PSend17189, PSend17195, PAssign17196, PSend17199, PSend17202, PSend17205, PSend17211, PAssign17212, PSend17215, PSend17218, PSend17223, PSend17226, self);
    
    MethodClosure MC_SMB_testInstanceCreation = new_MethodClosure((Method)PMethod17158, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testInstanceCreation, MC_SMB_testInstanceCreation);
}


static void init_SMB_testFieldWrite() {
    Symbol SMB_testFieldWrite = new_Symbol(L"testFieldWrite");
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
    Array PThreadedCode17234 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17235, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17237, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17232 = new_Block_with(empty_Array, PArray17233, PThreadedCode17234, 3, PAssign17235, PSend17237, VAR_c_1_0);
    // interpret:. 
    Send PSend17231 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17232);
    Assign PAssign17230 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17231);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17238 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17239 = new_Send((Optr)PSend17238, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17240 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17241 = new_Send((Optr)PSend17240, SMB_should, 0);
    // beKindOf:. 
    Send PSend17242 = new_Send((Optr)PSend17241, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17243 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17244 = new_Send((Optr)PSend17243, SMB_should, 0);
    // beKindOf:. 
    Send PSend17245 = new_Send((Optr)PSend17244, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17246 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17247 = new_Send((Optr)PSend17246, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17248 = new_Send((Optr)PSend17247, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17249 = new_Send((Optr)PSend17248, SMB_selector, 0);
    // should. 
    Send PSend17250 = new_Send((Optr)PSend17249, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldWrite_Const = new_Constant((Optr)SMB_testFieldWrite);
    // be:. 
    Send PSend17251 = new_Send((Optr)PSend17250, SMB_be_, 1, (Optr)SMB_testFieldWrite_Const);
    // value. 
    Send PSend17253 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17252 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17253);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17254 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17255 = new_Send((Optr)PSend17254, SMB_should, 0);
    // beKindOf:. 
    Send PSend17256 = new_Send((Optr)PSend17255, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17257 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17258 = new_Send((Optr)PSend17257, SMB_should, 0);
    // beKindOf:. 
    Send PSend17259 = new_Send((Optr)PSend17258, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17261 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17260 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17261);
    // value. 
    Send PSend17262 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17263 = new_Send((Optr)PSend17262, SMB_should, 0);
    // be:. 
    Send PSend17264 = new_Send((Optr)PSend17263, SMB_be_, 1, (Optr)int_10_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17265 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17266 = new_Send((Optr)PSend17265, SMB_should, 0);
    // beKindOf:. 
    Send PSend17267 = new_Send((Optr)PSend17266, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17269 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17268 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17269);
    // should. 
    Send PSend17270 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17271 = new_Send((Optr)PSend17270, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17272 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17273 = new_Send((Optr)PSend17272, SMB_should, 0);
    // be:. 
    Send PSend17274 = new_Send((Optr)PSend17273, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17276 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17275 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17276);
    // should. 
    Send PSend17277 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17278 = new_Send((Optr)PSend17277, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17279 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17280 = new_Send((Optr)PSend17279, SMB_should, 0);
    // be:. 
    Send PSend17281 = new_Send((Optr)PSend17280, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17282 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17283 = new_Send((Optr)PSend17282, SMB_should, 0);
    // be:. 
    Send PSend17284 = new_Send((Optr)PSend17283, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17229 = instantiate_Array_with(ThreadedCode_Class, 0, 185, (Optr)&t_push1, (Optr)PAssign17230, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17232, (Optr)&t_send1, (Optr)PSend17231, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17238, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17239, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17240, (Optr)&t_send0, (Optr)PSend17241, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17242, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17243, (Optr)&t_send0, (Optr)PSend17244, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17245, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17246, (Optr)&t_send0, (Optr)PSend17247, (Optr)&t_send0, (Optr)PSend17248, (Optr)&t_send0, (Optr)PSend17249, (Optr)&t_send0, (Optr)PSend17250, (Optr)&t_push1, (Optr)SMB_testFieldWrite, (Optr)&t_send1, (Optr)PSend17251, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17252, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17253, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17254, (Optr)&t_send0, (Optr)PSend17255, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17256, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17257, (Optr)&t_send0, (Optr)PSend17258, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17259, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17260, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17261, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17262, (Optr)&t_send0, (Optr)PSend17263, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17264, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17265, (Optr)&t_send0, (Optr)PSend17266, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17267, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17268, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17269, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17270, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17271, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17272, (Optr)&t_send0, (Optr)PSend17273, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17274, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17275, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17276, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17277, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17278, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17279, (Optr)&t_send0, (Optr)PSend17280, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17281, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17282, (Optr)&t_send0, (Optr)PSend17283, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17284, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17227 = new_Method_with(empty_Array, PArray17228, empty_Array, PThreadedCode17229, 19, PAssign17230, PSend17239, PSend17242, PSend17245, PSend17251, PAssign17252, PSend17256, PSend17259, PAssign17260, PSend17264, PSend17267, PAssign17268, PSend17271, PSend17274, PAssign17275, PSend17278, PSend17281, PSend17284, self);
    
    MethodClosure MC_SMB_testFieldWrite = new_MethodClosure((Method)PMethod17227, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testFieldWrite, MC_SMB_testFieldWrite);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17288 = new_Send((Optr)PAliasInterpreter_classReference, SMB_new, 0);
    Assign PAssign17287 = new_Assign((Optr)slot_Interpretation_AliasInterpreterTest_i, (Optr)PSend17288);
    Array PThreadedCode17286 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign17287, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_send0, (Optr)PSend17288, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17285 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17286, 2, PAssign17287, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod17285, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_testConstant() {
    Symbol SMB_testConstant = new_Symbol(L"testConstant");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17290 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Array PThreadedCode17295 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_2);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Block PBlock17294 = new_Block_with(empty_Array, empty_Array, PThreadedCode17295, 1, int_2_Const);
    // interpret:. 
    Send PSend17293 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17294);
    Assign PAssign17292 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17293);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17296 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17297 = new_Send((Optr)PSend17296, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17298 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17299 = new_Send((Optr)PSend17298, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend17300 = new_Send((Optr)PSend17299, SMB_be_, 1, (Optr)int_2_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17302 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17301 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17302);
    // should. 
    Send PSend17303 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17304 = new_Send((Optr)PSend17303, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // origin. 
    Send PSend17305 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17306 = new_Send((Optr)PSend17305, SMB_should, 0);
    // be:. 
    Send PSend17307 = new_Send((Optr)PSend17306, SMB_be_, 1, (Optr)nil_Const);
    // value. 
    Send PSend17308 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17309 = new_Send((Optr)PSend17308, SMB_should, 0);
    // be:. 
    Send PSend17310 = new_Send((Optr)PSend17309, SMB_be_, 1, (Optr)int_2_Const);
    Array PThreadedCode17291 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign17292, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17294, (Optr)&t_send1, (Optr)PSend17293, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17296, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17297, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17298, (Optr)&t_send0, (Optr)PSend17299, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17300, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17301, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17302, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17303, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17304, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17305, (Optr)&t_send0, (Optr)PSend17306, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17307, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17308, (Optr)&t_send0, (Optr)PSend17309, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17310, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17289 = new_Method_with(empty_Array, PArray17290, empty_Array, PThreadedCode17291, 8, PAssign17292, PSend17297, PSend17300, PAssign17301, PSend17304, PSend17307, PSend17310, self);
    
    MethodClosure MC_SMB_testConstant = new_MethodClosure((Method)PMethod17289, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testConstant, MC_SMB_testConstant);
}


static void init_SMB_testFieldOverwrite() {
    Symbol SMB_testFieldOverwrite = new_Symbol(L"testFieldOverwrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17312 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17317 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17320 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17319 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17320);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17321 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // a:. 
    Send PSend17322 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_20_Const);
    Array PThreadedCode17318 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17319, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17320, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17322, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17316 = new_Block_with(empty_Array, PArray17317, PThreadedCode17318, 4, PAssign17319, PSend17321, PSend17322, VAR_c_1_0);
    // interpret:. 
    Send PSend17315 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17316);
    Assign PAssign17314 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17315);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17323 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17324 = new_Send((Optr)PSend17323, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17325 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17326 = new_Send((Optr)PSend17325, SMB_should, 0);
    // beKindOf:. 
    Send PSend17327 = new_Send((Optr)PSend17326, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17328 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17329 = new_Send((Optr)PSend17328, SMB_should, 0);
    // beKindOf:. 
    Send PSend17330 = new_Send((Optr)PSend17329, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17331 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17332 = new_Send((Optr)PSend17331, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17333 = new_Send((Optr)PSend17332, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17334 = new_Send((Optr)PSend17333, SMB_selector, 0);
    // should. 
    Send PSend17335 = new_Send((Optr)PSend17334, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldOverwrite_Const = new_Constant((Optr)SMB_testFieldOverwrite);
    // be:. 
    Send PSend17336 = new_Send((Optr)PSend17335, SMB_be_, 1, (Optr)SMB_testFieldOverwrite_Const);
    // value. 
    Send PSend17338 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17337 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17338);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17339 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17340 = new_Send((Optr)PSend17339, SMB_should, 0);
    // beKindOf:. 
    Send PSend17341 = new_Send((Optr)PSend17340, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17342 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17343 = new_Send((Optr)PSend17342, SMB_should, 0);
    // beKindOf:. 
    Send PSend17344 = new_Send((Optr)PSend17343, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17346 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17345 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17346);
    // value. 
    Send PSend17347 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17348 = new_Send((Optr)PSend17347, SMB_should, 0);
    // be:. 
    Send PSend17349 = new_Send((Optr)PSend17348, SMB_be_, 1, (Optr)int_20_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17350 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17351 = new_Send((Optr)PSend17350, SMB_should, 0);
    // beKindOf:. 
    Send PSend17352 = new_Send((Optr)PSend17351, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    // predecessor. 
    Send PSend17353 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // value. 
    Send PSend17354 = new_Send((Optr)PSend17353, SMB_value, 0);
    // should. 
    Send PSend17355 = new_Send((Optr)PSend17354, SMB_should, 0);
    // be:. 
    Send PSend17356 = new_Send((Optr)PSend17355, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17357 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // predecessor. 
    Send PSend17358 = new_Send((Optr)PSend17357, SMB_predecessor, 0);
    // should. 
    Send PSend17359 = new_Send((Optr)PSend17358, SMB_should, 0);
    // beKindOf:. 
    Send PSend17360 = new_Send((Optr)PSend17359, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // predecessor. 
    Send PSend17361 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17362 = new_Send((Optr)PSend17361, SMB_origin, 0);
    // should. 
    Send PSend17363 = new_Send((Optr)PSend17362, SMB_should, 0);
    // beKindOf:. 
    Send PSend17364 = new_Send((Optr)PSend17363, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // predecessor. 
    Send PSend17365 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17366 = new_Send((Optr)PSend17365, SMB_origin, 0);
    // value. 
    Send PSend17367 = new_Send((Optr)PSend17366, SMB_value, 0);
    // should. 
    Send PSend17368 = new_Send((Optr)PSend17367, SMB_should, 0);
    // be:. 
    Send PSend17369 = new_Send((Optr)PSend17368, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17370 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17371 = new_Send((Optr)PSend17370, SMB_origin, 0);
    // origin. 
    Send PSend17372 = new_Send((Optr)PSend17371, SMB_origin, 0);
    // should. 
    Send PSend17373 = new_Send((Optr)PSend17372, SMB_should, 0);
    // beKindOf:. 
    Send PSend17374 = new_Send((Optr)PSend17373, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // predecessor. 
    Send PSend17375 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17376 = new_Send((Optr)PSend17375, SMB_origin, 0);
    // origin. 
    Send PSend17377 = new_Send((Optr)PSend17376, SMB_origin, 0);
    // value. 
    Send PSend17378 = new_Send((Optr)PSend17377, SMB_value, 0);
    // should. 
    Send PSend17379 = new_Send((Optr)PSend17378, SMB_should, 0);
    // be:. 
    Send PSend17380 = new_Send((Optr)PSend17379, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17381 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17382 = new_Send((Optr)PSend17381, SMB_origin, 0);
    // origin. 
    Send PSend17383 = new_Send((Optr)PSend17382, SMB_origin, 0);
    // origin. 
    Send PSend17384 = new_Send((Optr)PSend17383, SMB_origin, 0);
    // should. 
    Send PSend17385 = new_Send((Optr)PSend17384, SMB_should, 0);
    // be:. 
    Send PSend17386 = new_Send((Optr)PSend17385, SMB_be_, 1, (Optr)nil_Const);
    // origin. 
    Send PSend17388 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17387 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17388);
    // should. 
    Send PSend17389 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17390 = new_Send((Optr)PSend17389, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17391 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17392 = new_Send((Optr)PSend17391, SMB_should, 0);
    // be:. 
    Send PSend17393 = new_Send((Optr)PSend17392, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17395 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17394 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17395);
    // should. 
    Send PSend17396 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17397 = new_Send((Optr)PSend17396, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17398 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17399 = new_Send((Optr)PSend17398, SMB_should, 0);
    // be:. 
    Send PSend17400 = new_Send((Optr)PSend17399, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17401 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17402 = new_Send((Optr)PSend17401, SMB_should, 0);
    // be:. 
    Send PSend17403 = new_Send((Optr)PSend17402, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17313 = instantiate_Array_with(ThreadedCode_Class, 0, 287, (Optr)&t_push1, (Optr)PAssign17314, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17316, (Optr)&t_send1, (Optr)PSend17315, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17323, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17324, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17325, (Optr)&t_send0, (Optr)PSend17326, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17327, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17328, (Optr)&t_send0, (Optr)PSend17329, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17330, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17331, (Optr)&t_send0, (Optr)PSend17332, (Optr)&t_send0, (Optr)PSend17333, (Optr)&t_send0, (Optr)PSend17334, (Optr)&t_send0, (Optr)PSend17335, (Optr)&t_push1, (Optr)SMB_testFieldOverwrite, (Optr)&t_send1, (Optr)PSend17336, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17337, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17338, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17339, (Optr)&t_send0, (Optr)PSend17340, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17341, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17342, (Optr)&t_send0, (Optr)PSend17343, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17344, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17345, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17346, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17347, (Optr)&t_send0, (Optr)PSend17348, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17349, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17350, (Optr)&t_send0, (Optr)PSend17351, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17352, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17353, (Optr)&t_send0, (Optr)PSend17354, (Optr)&t_send0, (Optr)PSend17355, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17356, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17357, (Optr)&t_send0, (Optr)PSend17358, (Optr)&t_send0, (Optr)PSend17359, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17360, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17361, (Optr)&t_send0, (Optr)PSend17362, (Optr)&t_send0, (Optr)PSend17363, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17364, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17365, (Optr)&t_send0, (Optr)PSend17366, (Optr)&t_send0, (Optr)PSend17367, (Optr)&t_send0, (Optr)PSend17368, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17369, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17370, (Optr)&t_send0, (Optr)PSend17371, (Optr)&t_send0, (Optr)PSend17372, (Optr)&t_send0, (Optr)PSend17373, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17374, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17375, (Optr)&t_send0, (Optr)PSend17376, (Optr)&t_send0, (Optr)PSend17377, (Optr)&t_send0, (Optr)PSend17378, (Optr)&t_send0, (Optr)PSend17379, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17380, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17381, (Optr)&t_send0, (Optr)PSend17382, (Optr)&t_send0, (Optr)PSend17383, (Optr)&t_send0, (Optr)PSend17384, (Optr)&t_send0, (Optr)PSend17385, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17386, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17387, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17388, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17389, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17390, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17391, (Optr)&t_send0, (Optr)PSend17392, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17393, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17394, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17395, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17396, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17397, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17398, (Optr)&t_send0, (Optr)PSend17399, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17400, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17401, (Optr)&t_send0, (Optr)PSend17402, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17403, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17311 = new_Method_with(empty_Array, PArray17312, empty_Array, PThreadedCode17313, 26, PAssign17314, PSend17324, PSend17327, PSend17330, PSend17336, PAssign17337, PSend17341, PSend17344, PAssign17345, PSend17349, PSend17352, PSend17356, PSend17360, PSend17364, PSend17369, PSend17374, PSend17380, PSend17386, PAssign17387, PSend17390, PSend17393, PAssign17394, PSend17397, PSend17400, PSend17403, self);
    
    MethodClosure MC_SMB_testFieldOverwrite = new_MethodClosure((Method)PMethod17311, Interpretation_AliasInterpreterTest_Class);
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