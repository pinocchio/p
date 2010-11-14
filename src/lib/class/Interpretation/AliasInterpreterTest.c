#include <lib/class/Interpretation/AliasInterpreterTest.h>


Optr layout_Interpretation_AliasInterpreterTest_Class_class;
Optr slot_Interpretation_AliasInterpreterTest_i;
Optr layout_Interpretation_AliasInterpreterTest;


static void init_SMB_testInstanceCreation() {
    Symbol SMB_testInstanceCreation = new_Symbol(L"testInstanceCreation");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17348 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17354 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Array PThreadedCode17353 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17354, (Optr)&t_block_return);
    Block PBlock17352 = new_Block_with(empty_Array, empty_Array, PThreadedCode17353, 1, PSend17354);
    // interpret:. 
    Send PSend17351 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17352);
    Assign PAssign17350 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17351);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17355 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17356 = new_Send((Optr)PSend17355, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17357 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17358 = new_Send((Optr)PSend17357, SMB_should, 0);
    // beKindOf:. 
    Send PSend17359 = new_Send((Optr)PSend17358, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17360 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17361 = new_Send((Optr)PSend17360, SMB_should, 0);
    // beKindOf:. 
    Send PSend17362 = new_Send((Optr)PSend17361, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17363 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17364 = new_Send((Optr)PSend17363, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17365 = new_Send((Optr)PSend17364, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17366 = new_Send((Optr)PSend17365, SMB_selector, 0);
    // should. 
    Send PSend17367 = new_Send((Optr)PSend17366, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testInstanceCreation_Const = new_Constant((Optr)SMB_testInstanceCreation);
    // be:. 
    Send PSend17368 = new_Send((Optr)PSend17367, SMB_be_, 1, (Optr)SMB_testInstanceCreation_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17370 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17369 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17370);
    // should. 
    Send PSend17371 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17372 = new_Send((Optr)PSend17371, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17373 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17374 = new_Send((Optr)PSend17373, SMB_should, 0);
    // beKindOf:. 
    Send PSend17375 = new_Send((Optr)PSend17374, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17376 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17377 = new_Send((Optr)PSend17376, SMB_should, 0);
    // beKindOf:. 
    Send PSend17378 = new_Send((Optr)PSend17377, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17379 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17380 = new_Send((Optr)PSend17379, SMB_homeContext, 0);
    // closure. 
    Send PSend17381 = new_Send((Optr)PSend17380, SMB_closure, 0);
    // selector. 
    Send PSend17382 = new_Send((Optr)PSend17381, SMB_selector, 0);
    // should. 
    Send PSend17383 = new_Send((Optr)PSend17382, SMB_should, 0);
    Constant SMB_new_Const = new_Constant((Optr)SMB_new);
    // be:. 
    Send PSend17384 = new_Send((Optr)PSend17383, SMB_be_, 1, (Optr)SMB_new_Const);
    // origin. 
    Send PSend17386 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17385 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17386);
    // should. 
    Send PSend17387 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17388 = new_Send((Optr)PSend17387, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17389 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17390 = new_Send((Optr)PSend17389, SMB_should, 0);
    // beKindOf:. 
    Send PSend17391 = new_Send((Optr)PSend17390, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17392 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17393 = new_Send((Optr)PSend17392, SMB_should, 0);
    // beKindOf:. 
    Send PSend17394 = new_Send((Optr)PSend17393, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17395 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17396 = new_Send((Optr)PSend17395, SMB_homeContext, 0);
    // closure. 
    Send PSend17397 = new_Send((Optr)PSend17396, SMB_closure, 0);
    // selector. 
    Send PSend17398 = new_Send((Optr)PSend17397, SMB_selector, 0);
    // should. 
    Send PSend17399 = new_Send((Optr)PSend17398, SMB_should, 0);
    Symbol  SMB_initialize = new_Symbol(L"initialize");
    Constant SMB_initialize_Const = new_Constant((Optr)SMB_initialize);
    // be:. 
    Send PSend17400 = new_Send((Optr)PSend17399, SMB_be_, 1, (Optr)SMB_initialize_Const);
    // origin. 
    Send PSend17402 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17401 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17402);
    // should. 
    Send PSend17403 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17404 = new_Send((Optr)PSend17403, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // context. 
    Send PSend17405 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17406 = new_Send((Optr)PSend17405, SMB_should, 0);
    // beKindOf:. 
    Send PSend17407 = new_Send((Optr)PSend17406, SMB_beKindOf_, 1, (Optr)PNativeMethodContext_classReference);
    // context. 
    Send PSend17408 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend17409 = new_Send((Optr)PSend17408, SMB_message, 0);
    // selector. 
    Send PSend17410 = new_Send((Optr)PSend17409, SMB_selector, 0);
    // should. 
    Send PSend17411 = new_Send((Optr)PSend17410, SMB_should, 0);
    Symbol  SMB_basicNew = new_Symbol(L"basicNew");
    Constant SMB_basicNew_Const = new_Constant((Optr)SMB_basicNew);
    // be:. 
    Send PSend17412 = new_Send((Optr)PSend17411, SMB_be_, 1, (Optr)SMB_basicNew_Const);
    // origin. 
    Send PSend17413 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17414 = new_Send((Optr)PSend17413, SMB_should, 0);
    // be:. 
    Send PSend17415 = new_Send((Optr)PSend17414, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17349 = instantiate_Array_with(ThreadedCode_Class, 0, 224, (Optr)&t_push1, (Optr)PAssign17350, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17352, (Optr)&t_send1, (Optr)PSend17351, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17355, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17356, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17357, (Optr)&t_send0, (Optr)PSend17358, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17359, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17360, (Optr)&t_send0, (Optr)PSend17361, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17362, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17363, (Optr)&t_send0, (Optr)PSend17364, (Optr)&t_send0, (Optr)PSend17365, (Optr)&t_send0, (Optr)PSend17366, (Optr)&t_send0, (Optr)PSend17367, (Optr)&t_push1, (Optr)SMB_testInstanceCreation, (Optr)&t_send1, (Optr)PSend17368, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17369, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17370, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17371, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17372, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17373, (Optr)&t_send0, (Optr)PSend17374, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17375, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17376, (Optr)&t_send0, (Optr)PSend17377, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17378, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17379, (Optr)&t_send0, (Optr)PSend17380, (Optr)&t_send0, (Optr)PSend17381, (Optr)&t_send0, (Optr)PSend17382, (Optr)&t_send0, (Optr)PSend17383, (Optr)&t_push1, (Optr)SMB_new, (Optr)&t_send1, (Optr)PSend17384, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17385, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17387, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17388, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17389, (Optr)&t_send0, (Optr)PSend17390, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17391, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17392, (Optr)&t_send0, (Optr)PSend17393, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17394, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17395, (Optr)&t_send0, (Optr)PSend17396, (Optr)&t_send0, (Optr)PSend17397, (Optr)&t_send0, (Optr)PSend17398, (Optr)&t_send0, (Optr)PSend17399, (Optr)&t_push1, (Optr)SMB_initialize, (Optr)&t_send1, (Optr)PSend17400, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17401, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17402, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17403, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17404, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17405, (Optr)&t_send0, (Optr)PSend17406, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17407, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17408, (Optr)&t_send0, (Optr)PSend17409, (Optr)&t_send0, (Optr)PSend17410, (Optr)&t_send0, (Optr)PSend17411, (Optr)&t_push1, (Optr)SMB_basicNew, (Optr)&t_send1, (Optr)PSend17412, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17413, (Optr)&t_send0, (Optr)PSend17414, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17415, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17347 = new_Method_with(empty_Array, PArray17348, empty_Array, PThreadedCode17349, 21, PAssign17350, PSend17356, PSend17359, PSend17362, PSend17368, PAssign17369, PSend17372, PSend17375, PSend17378, PSend17384, PAssign17385, PSend17388, PSend17391, PSend17394, PSend17400, PAssign17401, PSend17404, PSend17407, PSend17412, PSend17415, self);
    
    MethodClosure MC_SMB_testInstanceCreation = new_MethodClosure((Method)PMethod17347, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testInstanceCreation, MC_SMB_testInstanceCreation);
}


static void init_SMB_testFieldOverwrite() {
    Symbol SMB_testFieldOverwrite = new_Symbol(L"testFieldOverwrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17417 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17422 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17425 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17424 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17425);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17426 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // a:. 
    Send PSend17427 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_20_Const);
    Array PThreadedCode17423 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17424, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17425, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17426, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17427, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17421 = new_Block_with(empty_Array, PArray17422, PThreadedCode17423, 4, PAssign17424, PSend17426, PSend17427, VAR_c_1_0);
    // interpret:. 
    Send PSend17420 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17421);
    Assign PAssign17419 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17420);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17428 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17429 = new_Send((Optr)PSend17428, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17430 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17431 = new_Send((Optr)PSend17430, SMB_should, 0);
    // beKindOf:. 
    Send PSend17432 = new_Send((Optr)PSend17431, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17433 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17434 = new_Send((Optr)PSend17433, SMB_should, 0);
    // beKindOf:. 
    Send PSend17435 = new_Send((Optr)PSend17434, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17436 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17437 = new_Send((Optr)PSend17436, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17438 = new_Send((Optr)PSend17437, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17439 = new_Send((Optr)PSend17438, SMB_selector, 0);
    // should. 
    Send PSend17440 = new_Send((Optr)PSend17439, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldOverwrite_Const = new_Constant((Optr)SMB_testFieldOverwrite);
    // be:. 
    Send PSend17441 = new_Send((Optr)PSend17440, SMB_be_, 1, (Optr)SMB_testFieldOverwrite_Const);
    // value. 
    Send PSend17443 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17442 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17443);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17444 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17445 = new_Send((Optr)PSend17444, SMB_should, 0);
    // beKindOf:. 
    Send PSend17446 = new_Send((Optr)PSend17445, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17447 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17448 = new_Send((Optr)PSend17447, SMB_should, 0);
    // beKindOf:. 
    Send PSend17449 = new_Send((Optr)PSend17448, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17451 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17450 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17451);
    // value. 
    Send PSend17452 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17453 = new_Send((Optr)PSend17452, SMB_should, 0);
    // be:. 
    Send PSend17454 = new_Send((Optr)PSend17453, SMB_be_, 1, (Optr)int_20_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17455 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17456 = new_Send((Optr)PSend17455, SMB_should, 0);
    // beKindOf:. 
    Send PSend17457 = new_Send((Optr)PSend17456, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    // predecessor. 
    Send PSend17458 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // value. 
    Send PSend17459 = new_Send((Optr)PSend17458, SMB_value, 0);
    // should. 
    Send PSend17460 = new_Send((Optr)PSend17459, SMB_should, 0);
    // be:. 
    Send PSend17461 = new_Send((Optr)PSend17460, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17462 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // predecessor. 
    Send PSend17463 = new_Send((Optr)PSend17462, SMB_predecessor, 0);
    // should. 
    Send PSend17464 = new_Send((Optr)PSend17463, SMB_should, 0);
    // beKindOf:. 
    Send PSend17465 = new_Send((Optr)PSend17464, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // predecessor. 
    Send PSend17466 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17467 = new_Send((Optr)PSend17466, SMB_origin, 0);
    // should. 
    Send PSend17468 = new_Send((Optr)PSend17467, SMB_should, 0);
    // beKindOf:. 
    Send PSend17469 = new_Send((Optr)PSend17468, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // predecessor. 
    Send PSend17470 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17471 = new_Send((Optr)PSend17470, SMB_origin, 0);
    // value. 
    Send PSend17472 = new_Send((Optr)PSend17471, SMB_value, 0);
    // should. 
    Send PSend17473 = new_Send((Optr)PSend17472, SMB_should, 0);
    // be:. 
    Send PSend17474 = new_Send((Optr)PSend17473, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17475 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17476 = new_Send((Optr)PSend17475, SMB_origin, 0);
    // origin. 
    Send PSend17477 = new_Send((Optr)PSend17476, SMB_origin, 0);
    // should. 
    Send PSend17478 = new_Send((Optr)PSend17477, SMB_should, 0);
    // beKindOf:. 
    Send PSend17479 = new_Send((Optr)PSend17478, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // predecessor. 
    Send PSend17480 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17481 = new_Send((Optr)PSend17480, SMB_origin, 0);
    // origin. 
    Send PSend17482 = new_Send((Optr)PSend17481, SMB_origin, 0);
    // value. 
    Send PSend17483 = new_Send((Optr)PSend17482, SMB_value, 0);
    // should. 
    Send PSend17484 = new_Send((Optr)PSend17483, SMB_should, 0);
    // be:. 
    Send PSend17485 = new_Send((Optr)PSend17484, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17486 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17487 = new_Send((Optr)PSend17486, SMB_origin, 0);
    // origin. 
    Send PSend17488 = new_Send((Optr)PSend17487, SMB_origin, 0);
    // origin. 
    Send PSend17489 = new_Send((Optr)PSend17488, SMB_origin, 0);
    // should. 
    Send PSend17490 = new_Send((Optr)PSend17489, SMB_should, 0);
    // be:. 
    Send PSend17491 = new_Send((Optr)PSend17490, SMB_be_, 1, (Optr)nil_Const);
    // origin. 
    Send PSend17493 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17492 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17493);
    // should. 
    Send PSend17494 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17495 = new_Send((Optr)PSend17494, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17496 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17497 = new_Send((Optr)PSend17496, SMB_should, 0);
    // be:. 
    Send PSend17498 = new_Send((Optr)PSend17497, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17500 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17499 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17500);
    // should. 
    Send PSend17501 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17502 = new_Send((Optr)PSend17501, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17503 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17504 = new_Send((Optr)PSend17503, SMB_should, 0);
    // be:. 
    Send PSend17505 = new_Send((Optr)PSend17504, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17506 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17507 = new_Send((Optr)PSend17506, SMB_should, 0);
    // be:. 
    Send PSend17508 = new_Send((Optr)PSend17507, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17418 = instantiate_Array_with(ThreadedCode_Class, 0, 287, (Optr)&t_push1, (Optr)PAssign17419, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17421, (Optr)&t_send1, (Optr)PSend17420, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17428, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17429, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17430, (Optr)&t_send0, (Optr)PSend17431, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17432, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17433, (Optr)&t_send0, (Optr)PSend17434, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17435, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17436, (Optr)&t_send0, (Optr)PSend17437, (Optr)&t_send0, (Optr)PSend17438, (Optr)&t_send0, (Optr)PSend17439, (Optr)&t_send0, (Optr)PSend17440, (Optr)&t_push1, (Optr)SMB_testFieldOverwrite, (Optr)&t_send1, (Optr)PSend17441, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17442, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17443, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17444, (Optr)&t_send0, (Optr)PSend17445, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17446, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17447, (Optr)&t_send0, (Optr)PSend17448, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17449, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17450, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17451, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17452, (Optr)&t_send0, (Optr)PSend17453, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17454, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17455, (Optr)&t_send0, (Optr)PSend17456, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17457, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17458, (Optr)&t_send0, (Optr)PSend17459, (Optr)&t_send0, (Optr)PSend17460, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17461, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17462, (Optr)&t_send0, (Optr)PSend17463, (Optr)&t_send0, (Optr)PSend17464, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17465, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17466, (Optr)&t_send0, (Optr)PSend17467, (Optr)&t_send0, (Optr)PSend17468, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17469, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17470, (Optr)&t_send0, (Optr)PSend17471, (Optr)&t_send0, (Optr)PSend17472, (Optr)&t_send0, (Optr)PSend17473, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17474, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17475, (Optr)&t_send0, (Optr)PSend17476, (Optr)&t_send0, (Optr)PSend17477, (Optr)&t_send0, (Optr)PSend17478, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17479, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17480, (Optr)&t_send0, (Optr)PSend17481, (Optr)&t_send0, (Optr)PSend17482, (Optr)&t_send0, (Optr)PSend17483, (Optr)&t_send0, (Optr)PSend17484, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17485, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17486, (Optr)&t_send0, (Optr)PSend17487, (Optr)&t_send0, (Optr)PSend17488, (Optr)&t_send0, (Optr)PSend17489, (Optr)&t_send0, (Optr)PSend17490, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17491, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17492, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17493, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17494, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17495, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17496, (Optr)&t_send0, (Optr)PSend17497, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17498, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17499, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17500, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17501, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17502, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17503, (Optr)&t_send0, (Optr)PSend17504, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17505, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17506, (Optr)&t_send0, (Optr)PSend17507, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17508, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17416 = new_Method_with(empty_Array, PArray17417, empty_Array, PThreadedCode17418, 26, PAssign17419, PSend17429, PSend17432, PSend17435, PSend17441, PAssign17442, PSend17446, PSend17449, PAssign17450, PSend17454, PSend17457, PSend17461, PSend17465, PSend17469, PSend17474, PSend17479, PSend17485, PSend17491, PAssign17492, PSend17495, PSend17498, PAssign17499, PSend17502, PSend17505, PSend17508, self);
    
    MethodClosure MC_SMB_testFieldOverwrite = new_MethodClosure((Method)PMethod17416, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testFieldOverwrite, MC_SMB_testFieldOverwrite);
}


static void init_SMB_testFieldWrite() {
    Symbol SMB_testFieldWrite = new_Symbol(L"testFieldWrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17510 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17515 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17518 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17517 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17518);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17519 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    Array PThreadedCode17516 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17517, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17518, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17519, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17514 = new_Block_with(empty_Array, PArray17515, PThreadedCode17516, 3, PAssign17517, PSend17519, VAR_c_1_0);
    // interpret:. 
    Send PSend17513 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17514);
    Assign PAssign17512 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17513);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17520 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17521 = new_Send((Optr)PSend17520, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17522 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17523 = new_Send((Optr)PSend17522, SMB_should, 0);
    // beKindOf:. 
    Send PSend17524 = new_Send((Optr)PSend17523, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17525 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17526 = new_Send((Optr)PSend17525, SMB_should, 0);
    // beKindOf:. 
    Send PSend17527 = new_Send((Optr)PSend17526, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17528 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17529 = new_Send((Optr)PSend17528, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17530 = new_Send((Optr)PSend17529, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17531 = new_Send((Optr)PSend17530, SMB_selector, 0);
    // should. 
    Send PSend17532 = new_Send((Optr)PSend17531, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldWrite_Const = new_Constant((Optr)SMB_testFieldWrite);
    // be:. 
    Send PSend17533 = new_Send((Optr)PSend17532, SMB_be_, 1, (Optr)SMB_testFieldWrite_Const);
    // value. 
    Send PSend17535 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17534 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17535);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17536 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17537 = new_Send((Optr)PSend17536, SMB_should, 0);
    // beKindOf:. 
    Send PSend17538 = new_Send((Optr)PSend17537, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17539 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17540 = new_Send((Optr)PSend17539, SMB_should, 0);
    // beKindOf:. 
    Send PSend17541 = new_Send((Optr)PSend17540, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17543 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17542 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17543);
    // value. 
    Send PSend17544 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17545 = new_Send((Optr)PSend17544, SMB_should, 0);
    // be:. 
    Send PSend17546 = new_Send((Optr)PSend17545, SMB_be_, 1, (Optr)int_10_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17547 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17548 = new_Send((Optr)PSend17547, SMB_should, 0);
    // beKindOf:. 
    Send PSend17549 = new_Send((Optr)PSend17548, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17551 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17550 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17551);
    // should. 
    Send PSend17552 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17553 = new_Send((Optr)PSend17552, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17554 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17555 = new_Send((Optr)PSend17554, SMB_should, 0);
    // be:. 
    Send PSend17556 = new_Send((Optr)PSend17555, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17558 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17557 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17558);
    // should. 
    Send PSend17559 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17560 = new_Send((Optr)PSend17559, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17561 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17562 = new_Send((Optr)PSend17561, SMB_should, 0);
    // be:. 
    Send PSend17563 = new_Send((Optr)PSend17562, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17564 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17565 = new_Send((Optr)PSend17564, SMB_should, 0);
    // be:. 
    Send PSend17566 = new_Send((Optr)PSend17565, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17511 = instantiate_Array_with(ThreadedCode_Class, 0, 185, (Optr)&t_push1, (Optr)PAssign17512, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17514, (Optr)&t_send1, (Optr)PSend17513, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17520, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17521, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17522, (Optr)&t_send0, (Optr)PSend17523, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17524, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17525, (Optr)&t_send0, (Optr)PSend17526, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17527, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17528, (Optr)&t_send0, (Optr)PSend17529, (Optr)&t_send0, (Optr)PSend17530, (Optr)&t_send0, (Optr)PSend17531, (Optr)&t_send0, (Optr)PSend17532, (Optr)&t_push1, (Optr)SMB_testFieldWrite, (Optr)&t_send1, (Optr)PSend17533, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17534, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17535, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17536, (Optr)&t_send0, (Optr)PSend17537, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17538, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17539, (Optr)&t_send0, (Optr)PSend17540, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17541, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17542, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17543, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17544, (Optr)&t_send0, (Optr)PSend17545, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17546, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17547, (Optr)&t_send0, (Optr)PSend17548, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17549, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17550, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17551, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17552, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17553, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17554, (Optr)&t_send0, (Optr)PSend17555, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17556, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17557, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17558, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17559, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17560, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17561, (Optr)&t_send0, (Optr)PSend17562, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17563, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17564, (Optr)&t_send0, (Optr)PSend17565, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17566, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17509 = new_Method_with(empty_Array, PArray17510, empty_Array, PThreadedCode17511, 19, PAssign17512, PSend17521, PSend17524, PSend17527, PSend17533, PAssign17534, PSend17538, PSend17541, PAssign17542, PSend17546, PSend17549, PAssign17550, PSend17553, PSend17556, PAssign17557, PSend17560, PSend17563, PSend17566, self);
    
    MethodClosure MC_SMB_testFieldWrite = new_MethodClosure((Method)PMethod17509, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testFieldWrite, MC_SMB_testFieldWrite);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17570 = new_Send((Optr)PAliasInterpreter_classReference, SMB_new, 0);
    Assign PAssign17569 = new_Assign((Optr)slot_Interpretation_AliasInterpreterTest_i, (Optr)PSend17570);
    Array PThreadedCode17568 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign17569, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_send0, (Optr)PSend17570, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17567 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17568, 2, PAssign17569, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod17567, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_testConstant() {
    Symbol SMB_testConstant = new_Symbol(L"testConstant");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17572 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Array PThreadedCode17577 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_2);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Block PBlock17576 = new_Block_with(empty_Array, empty_Array, PThreadedCode17577, 1, int_2_Const);
    // interpret:. 
    Send PSend17575 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17576);
    Assign PAssign17574 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17575);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17578 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17579 = new_Send((Optr)PSend17578, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17580 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17581 = new_Send((Optr)PSend17580, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend17582 = new_Send((Optr)PSend17581, SMB_be_, 1, (Optr)int_2_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17584 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17583 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17584);
    // should. 
    Send PSend17585 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17586 = new_Send((Optr)PSend17585, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // origin. 
    Send PSend17587 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17588 = new_Send((Optr)PSend17587, SMB_should, 0);
    // be:. 
    Send PSend17589 = new_Send((Optr)PSend17588, SMB_be_, 1, (Optr)nil_Const);
    // value. 
    Send PSend17590 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17591 = new_Send((Optr)PSend17590, SMB_should, 0);
    // be:. 
    Send PSend17592 = new_Send((Optr)PSend17591, SMB_be_, 1, (Optr)int_2_Const);
    Array PThreadedCode17573 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign17574, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17576, (Optr)&t_send1, (Optr)PSend17575, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17578, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17579, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17580, (Optr)&t_send0, (Optr)PSend17581, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17582, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17583, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17584, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17585, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17586, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17587, (Optr)&t_send0, (Optr)PSend17588, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17589, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17590, (Optr)&t_send0, (Optr)PSend17591, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17592, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17571 = new_Method_with(empty_Array, PArray17572, empty_Array, PThreadedCode17573, 8, PAssign17574, PSend17579, PSend17582, PAssign17583, PSend17586, PSend17589, PSend17592, self);
    
    MethodClosure MC_SMB_testConstant = new_MethodClosure((Method)PMethod17571, Interpretation_AliasInterpreterTest_Class);
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