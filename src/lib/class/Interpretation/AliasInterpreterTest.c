#include <lib/class/Interpretation/AliasInterpreterTest.h>


Optr layout_Interpretation_AliasInterpreterTest_Class_class;
Optr slot_Interpretation_AliasInterpreterTest_i;
Optr layout_Interpretation_AliasInterpreterTest;


static void init_SMB_testInstanceCreation() {
    Symbol SMB_testInstanceCreation = new_Symbol(L"testInstanceCreation");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17380 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17386 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Array PThreadedCode17385 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17386, (Optr)&t_block_return);
    Block PBlock17384 = new_Block_with(empty_Array, empty_Array, PThreadedCode17385, 1, PSend17386);
    // interpret:. 
    Send PSend17383 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17384);
    Assign PAssign17382 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17383);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17387 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17388 = new_Send((Optr)PSend17387, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17389 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17390 = new_Send((Optr)PSend17389, SMB_should, 0);
    // beKindOf:. 
    Send PSend17391 = new_Send((Optr)PSend17390, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17392 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17393 = new_Send((Optr)PSend17392, SMB_should, 0);
    // beKindOf:. 
    Send PSend17394 = new_Send((Optr)PSend17393, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17395 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17396 = new_Send((Optr)PSend17395, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17397 = new_Send((Optr)PSend17396, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17398 = new_Send((Optr)PSend17397, SMB_selector, 0);
    // should. 
    Send PSend17399 = new_Send((Optr)PSend17398, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testInstanceCreation_Const = new_Constant((Optr)SMB_testInstanceCreation);
    // be:. 
    Send PSend17400 = new_Send((Optr)PSend17399, SMB_be_, 1, (Optr)SMB_testInstanceCreation_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17402 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17401 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17402);
    // should. 
    Send PSend17403 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17404 = new_Send((Optr)PSend17403, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17405 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17406 = new_Send((Optr)PSend17405, SMB_should, 0);
    // beKindOf:. 
    Send PSend17407 = new_Send((Optr)PSend17406, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17408 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17409 = new_Send((Optr)PSend17408, SMB_should, 0);
    // beKindOf:. 
    Send PSend17410 = new_Send((Optr)PSend17409, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17411 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17412 = new_Send((Optr)PSend17411, SMB_homeContext, 0);
    // closure. 
    Send PSend17413 = new_Send((Optr)PSend17412, SMB_closure, 0);
    // selector. 
    Send PSend17414 = new_Send((Optr)PSend17413, SMB_selector, 0);
    // should. 
    Send PSend17415 = new_Send((Optr)PSend17414, SMB_should, 0);
    Constant SMB_new_Const = new_Constant((Optr)SMB_new);
    // be:. 
    Send PSend17416 = new_Send((Optr)PSend17415, SMB_be_, 1, (Optr)SMB_new_Const);
    // origin. 
    Send PSend17418 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17417 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17418);
    // should. 
    Send PSend17419 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17420 = new_Send((Optr)PSend17419, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17421 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17422 = new_Send((Optr)PSend17421, SMB_should, 0);
    // beKindOf:. 
    Send PSend17423 = new_Send((Optr)PSend17422, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17424 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17425 = new_Send((Optr)PSend17424, SMB_should, 0);
    // beKindOf:. 
    Send PSend17426 = new_Send((Optr)PSend17425, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17427 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17428 = new_Send((Optr)PSend17427, SMB_homeContext, 0);
    // closure. 
    Send PSend17429 = new_Send((Optr)PSend17428, SMB_closure, 0);
    // selector. 
    Send PSend17430 = new_Send((Optr)PSend17429, SMB_selector, 0);
    // should. 
    Send PSend17431 = new_Send((Optr)PSend17430, SMB_should, 0);
    Symbol  SMB_initialize = new_Symbol(L"initialize");
    Constant SMB_initialize_Const = new_Constant((Optr)SMB_initialize);
    // be:. 
    Send PSend17432 = new_Send((Optr)PSend17431, SMB_be_, 1, (Optr)SMB_initialize_Const);
    // origin. 
    Send PSend17434 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17433 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17434);
    // should. 
    Send PSend17435 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17436 = new_Send((Optr)PSend17435, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // context. 
    Send PSend17437 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17438 = new_Send((Optr)PSend17437, SMB_should, 0);
    // beKindOf:. 
    Send PSend17439 = new_Send((Optr)PSend17438, SMB_beKindOf_, 1, (Optr)PNativeMethodContext_classReference);
    // context. 
    Send PSend17440 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend17441 = new_Send((Optr)PSend17440, SMB_message, 0);
    // selector. 
    Send PSend17442 = new_Send((Optr)PSend17441, SMB_selector, 0);
    // should. 
    Send PSend17443 = new_Send((Optr)PSend17442, SMB_should, 0);
    Symbol  SMB_basicNew = new_Symbol(L"basicNew");
    Constant SMB_basicNew_Const = new_Constant((Optr)SMB_basicNew);
    // be:. 
    Send PSend17444 = new_Send((Optr)PSend17443, SMB_be_, 1, (Optr)SMB_basicNew_Const);
    // origin. 
    Send PSend17445 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17446 = new_Send((Optr)PSend17445, SMB_should, 0);
    // be:. 
    Send PSend17447 = new_Send((Optr)PSend17446, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17381 = instantiate_Array_with(ThreadedCode_Class, 0, 224, (Optr)&t_push1, (Optr)PAssign17382, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17384, (Optr)&t_send1, (Optr)PSend17383, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17387, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17388, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17389, (Optr)&t_send0, (Optr)PSend17390, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17391, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17392, (Optr)&t_send0, (Optr)PSend17393, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17394, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17395, (Optr)&t_send0, (Optr)PSend17396, (Optr)&t_send0, (Optr)PSend17397, (Optr)&t_send0, (Optr)PSend17398, (Optr)&t_send0, (Optr)PSend17399, (Optr)&t_push1, (Optr)SMB_testInstanceCreation, (Optr)&t_send1, (Optr)PSend17400, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17401, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17402, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17403, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17404, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17405, (Optr)&t_send0, (Optr)PSend17406, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17407, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17408, (Optr)&t_send0, (Optr)PSend17409, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17410, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17411, (Optr)&t_send0, (Optr)PSend17412, (Optr)&t_send0, (Optr)PSend17413, (Optr)&t_send0, (Optr)PSend17414, (Optr)&t_send0, (Optr)PSend17415, (Optr)&t_push1, (Optr)SMB_new, (Optr)&t_send1, (Optr)PSend17416, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17417, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17418, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17419, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17420, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17421, (Optr)&t_send0, (Optr)PSend17422, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17423, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17424, (Optr)&t_send0, (Optr)PSend17425, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17426, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17427, (Optr)&t_send0, (Optr)PSend17428, (Optr)&t_send0, (Optr)PSend17429, (Optr)&t_send0, (Optr)PSend17430, (Optr)&t_send0, (Optr)PSend17431, (Optr)&t_push1, (Optr)SMB_initialize, (Optr)&t_send1, (Optr)PSend17432, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17433, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17434, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17435, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17436, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17437, (Optr)&t_send0, (Optr)PSend17438, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17439, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17440, (Optr)&t_send0, (Optr)PSend17441, (Optr)&t_send0, (Optr)PSend17442, (Optr)&t_send0, (Optr)PSend17443, (Optr)&t_push1, (Optr)SMB_basicNew, (Optr)&t_send1, (Optr)PSend17444, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17445, (Optr)&t_send0, (Optr)PSend17446, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17447, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17379 = new_Method_with(empty_Array, PArray17380, empty_Array, PThreadedCode17381, 21, PAssign17382, PSend17388, PSend17391, PSend17394, PSend17400, PAssign17401, PSend17404, PSend17407, PSend17410, PSend17416, PAssign17417, PSend17420, PSend17423, PSend17426, PSend17432, PAssign17433, PSend17436, PSend17439, PSend17444, PSend17447, self);
    
    MethodClosure MC_SMB_testInstanceCreation = new_MethodClosure((Method)PMethod17379, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testInstanceCreation, MC_SMB_testInstanceCreation);
}


static void init_SMB_testFieldWrite() {
    Symbol SMB_testFieldWrite = new_Symbol(L"testFieldWrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17449 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17454 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17457 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17456 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17457);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17458 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    Array PThreadedCode17455 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17456, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17457, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17458, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17453 = new_Block_with(empty_Array, PArray17454, PThreadedCode17455, 3, PAssign17456, PSend17458, VAR_c_1_0);
    // interpret:. 
    Send PSend17452 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17453);
    Assign PAssign17451 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17452);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17459 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17460 = new_Send((Optr)PSend17459, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17461 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17462 = new_Send((Optr)PSend17461, SMB_should, 0);
    // beKindOf:. 
    Send PSend17463 = new_Send((Optr)PSend17462, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17464 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17465 = new_Send((Optr)PSend17464, SMB_should, 0);
    // beKindOf:. 
    Send PSend17466 = new_Send((Optr)PSend17465, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17467 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17468 = new_Send((Optr)PSend17467, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17469 = new_Send((Optr)PSend17468, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17470 = new_Send((Optr)PSend17469, SMB_selector, 0);
    // should. 
    Send PSend17471 = new_Send((Optr)PSend17470, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldWrite_Const = new_Constant((Optr)SMB_testFieldWrite);
    // be:. 
    Send PSend17472 = new_Send((Optr)PSend17471, SMB_be_, 1, (Optr)SMB_testFieldWrite_Const);
    // value. 
    Send PSend17474 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17473 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17474);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17475 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17476 = new_Send((Optr)PSend17475, SMB_should, 0);
    // beKindOf:. 
    Send PSend17477 = new_Send((Optr)PSend17476, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17478 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17479 = new_Send((Optr)PSend17478, SMB_should, 0);
    // beKindOf:. 
    Send PSend17480 = new_Send((Optr)PSend17479, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17482 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17481 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17482);
    // value. 
    Send PSend17483 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17484 = new_Send((Optr)PSend17483, SMB_should, 0);
    // be:. 
    Send PSend17485 = new_Send((Optr)PSend17484, SMB_be_, 1, (Optr)int_10_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17486 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17487 = new_Send((Optr)PSend17486, SMB_should, 0);
    // beKindOf:. 
    Send PSend17488 = new_Send((Optr)PSend17487, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17490 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17489 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17490);
    // should. 
    Send PSend17491 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17492 = new_Send((Optr)PSend17491, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17493 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17494 = new_Send((Optr)PSend17493, SMB_should, 0);
    // be:. 
    Send PSend17495 = new_Send((Optr)PSend17494, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17497 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17496 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17497);
    // should. 
    Send PSend17498 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17499 = new_Send((Optr)PSend17498, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17500 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17501 = new_Send((Optr)PSend17500, SMB_should, 0);
    // be:. 
    Send PSend17502 = new_Send((Optr)PSend17501, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17503 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17504 = new_Send((Optr)PSend17503, SMB_should, 0);
    // be:. 
    Send PSend17505 = new_Send((Optr)PSend17504, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17450 = instantiate_Array_with(ThreadedCode_Class, 0, 185, (Optr)&t_push1, (Optr)PAssign17451, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17453, (Optr)&t_send1, (Optr)PSend17452, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17459, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17460, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17461, (Optr)&t_send0, (Optr)PSend17462, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17463, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17464, (Optr)&t_send0, (Optr)PSend17465, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17466, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17467, (Optr)&t_send0, (Optr)PSend17468, (Optr)&t_send0, (Optr)PSend17469, (Optr)&t_send0, (Optr)PSend17470, (Optr)&t_send0, (Optr)PSend17471, (Optr)&t_push1, (Optr)SMB_testFieldWrite, (Optr)&t_send1, (Optr)PSend17472, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17473, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17474, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17475, (Optr)&t_send0, (Optr)PSend17476, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17477, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17478, (Optr)&t_send0, (Optr)PSend17479, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17480, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17481, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17482, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17483, (Optr)&t_send0, (Optr)PSend17484, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17485, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17486, (Optr)&t_send0, (Optr)PSend17487, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17488, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17489, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17490, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17491, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17492, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17493, (Optr)&t_send0, (Optr)PSend17494, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17495, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17496, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17497, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17498, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17499, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17500, (Optr)&t_send0, (Optr)PSend17501, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17502, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17503, (Optr)&t_send0, (Optr)PSend17504, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17505, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17448 = new_Method_with(empty_Array, PArray17449, empty_Array, PThreadedCode17450, 19, PAssign17451, PSend17460, PSend17463, PSend17466, PSend17472, PAssign17473, PSend17477, PSend17480, PAssign17481, PSend17485, PSend17488, PAssign17489, PSend17492, PSend17495, PAssign17496, PSend17499, PSend17502, PSend17505, self);
    
    MethodClosure MC_SMB_testFieldWrite = new_MethodClosure((Method)PMethod17448, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testFieldWrite, MC_SMB_testFieldWrite);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17509 = new_Send((Optr)PAliasInterpreter_classReference, SMB_new, 0);
    Assign PAssign17508 = new_Assign((Optr)slot_Interpretation_AliasInterpreterTest_i, (Optr)PSend17509);
    Array PThreadedCode17507 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign17508, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_send0, (Optr)PSend17509, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17506 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17507, 2, PAssign17508, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod17506, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_testConstant() {
    Symbol SMB_testConstant = new_Symbol(L"testConstant");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17511 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Array PThreadedCode17516 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_2);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Block PBlock17515 = new_Block_with(empty_Array, empty_Array, PThreadedCode17516, 1, int_2_Const);
    // interpret:. 
    Send PSend17514 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17515);
    Assign PAssign17513 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17514);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17517 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17518 = new_Send((Optr)PSend17517, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17519 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17520 = new_Send((Optr)PSend17519, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend17521 = new_Send((Optr)PSend17520, SMB_be_, 1, (Optr)int_2_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17523 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17522 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17523);
    // should. 
    Send PSend17524 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17525 = new_Send((Optr)PSend17524, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // origin. 
    Send PSend17526 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17527 = new_Send((Optr)PSend17526, SMB_should, 0);
    // be:. 
    Send PSend17528 = new_Send((Optr)PSend17527, SMB_be_, 1, (Optr)nil_Const);
    // value. 
    Send PSend17529 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17530 = new_Send((Optr)PSend17529, SMB_should, 0);
    // be:. 
    Send PSend17531 = new_Send((Optr)PSend17530, SMB_be_, 1, (Optr)int_2_Const);
    Array PThreadedCode17512 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign17513, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17515, (Optr)&t_send1, (Optr)PSend17514, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17517, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17518, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17519, (Optr)&t_send0, (Optr)PSend17520, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17521, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17522, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17523, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17524, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17525, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17526, (Optr)&t_send0, (Optr)PSend17527, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17528, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17529, (Optr)&t_send0, (Optr)PSend17530, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17531, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17510 = new_Method_with(empty_Array, PArray17511, empty_Array, PThreadedCode17512, 8, PAssign17513, PSend17518, PSend17521, PAssign17522, PSend17525, PSend17528, PSend17531, self);
    
    MethodClosure MC_SMB_testConstant = new_MethodClosure((Method)PMethod17510, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testConstant, MC_SMB_testConstant);
}


static void init_SMB_testFieldOverwrite() {
    Symbol SMB_testFieldOverwrite = new_Symbol(L"testFieldOverwrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17533 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17538 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17541 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17540 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17541);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17542 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // a:. 
    Send PSend17543 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_20_Const);
    Array PThreadedCode17539 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17540, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17541, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17542, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17543, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17537 = new_Block_with(empty_Array, PArray17538, PThreadedCode17539, 4, PAssign17540, PSend17542, PSend17543, VAR_c_1_0);
    // interpret:. 
    Send PSend17536 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17537);
    Assign PAssign17535 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17536);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17544 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17545 = new_Send((Optr)PSend17544, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17546 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17547 = new_Send((Optr)PSend17546, SMB_should, 0);
    // beKindOf:. 
    Send PSend17548 = new_Send((Optr)PSend17547, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17549 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17550 = new_Send((Optr)PSend17549, SMB_should, 0);
    // beKindOf:. 
    Send PSend17551 = new_Send((Optr)PSend17550, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17552 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17553 = new_Send((Optr)PSend17552, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17554 = new_Send((Optr)PSend17553, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17555 = new_Send((Optr)PSend17554, SMB_selector, 0);
    // should. 
    Send PSend17556 = new_Send((Optr)PSend17555, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldOverwrite_Const = new_Constant((Optr)SMB_testFieldOverwrite);
    // be:. 
    Send PSend17557 = new_Send((Optr)PSend17556, SMB_be_, 1, (Optr)SMB_testFieldOverwrite_Const);
    // value. 
    Send PSend17559 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17558 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17559);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17560 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17561 = new_Send((Optr)PSend17560, SMB_should, 0);
    // beKindOf:. 
    Send PSend17562 = new_Send((Optr)PSend17561, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17563 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17564 = new_Send((Optr)PSend17563, SMB_should, 0);
    // beKindOf:. 
    Send PSend17565 = new_Send((Optr)PSend17564, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17567 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17566 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17567);
    // value. 
    Send PSend17568 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17569 = new_Send((Optr)PSend17568, SMB_should, 0);
    // be:. 
    Send PSend17570 = new_Send((Optr)PSend17569, SMB_be_, 1, (Optr)int_20_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17571 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17572 = new_Send((Optr)PSend17571, SMB_should, 0);
    // beKindOf:. 
    Send PSend17573 = new_Send((Optr)PSend17572, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    // predecessor. 
    Send PSend17574 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // value. 
    Send PSend17575 = new_Send((Optr)PSend17574, SMB_value, 0);
    // should. 
    Send PSend17576 = new_Send((Optr)PSend17575, SMB_should, 0);
    // be:. 
    Send PSend17577 = new_Send((Optr)PSend17576, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17578 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // predecessor. 
    Send PSend17579 = new_Send((Optr)PSend17578, SMB_predecessor, 0);
    // should. 
    Send PSend17580 = new_Send((Optr)PSend17579, SMB_should, 0);
    // beKindOf:. 
    Send PSend17581 = new_Send((Optr)PSend17580, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // predecessor. 
    Send PSend17582 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17583 = new_Send((Optr)PSend17582, SMB_origin, 0);
    // should. 
    Send PSend17584 = new_Send((Optr)PSend17583, SMB_should, 0);
    // beKindOf:. 
    Send PSend17585 = new_Send((Optr)PSend17584, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // predecessor. 
    Send PSend17586 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17587 = new_Send((Optr)PSend17586, SMB_origin, 0);
    // value. 
    Send PSend17588 = new_Send((Optr)PSend17587, SMB_value, 0);
    // should. 
    Send PSend17589 = new_Send((Optr)PSend17588, SMB_should, 0);
    // be:. 
    Send PSend17590 = new_Send((Optr)PSend17589, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17591 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17592 = new_Send((Optr)PSend17591, SMB_origin, 0);
    // origin. 
    Send PSend17593 = new_Send((Optr)PSend17592, SMB_origin, 0);
    // should. 
    Send PSend17594 = new_Send((Optr)PSend17593, SMB_should, 0);
    // beKindOf:. 
    Send PSend17595 = new_Send((Optr)PSend17594, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // predecessor. 
    Send PSend17596 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17597 = new_Send((Optr)PSend17596, SMB_origin, 0);
    // origin. 
    Send PSend17598 = new_Send((Optr)PSend17597, SMB_origin, 0);
    // value. 
    Send PSend17599 = new_Send((Optr)PSend17598, SMB_value, 0);
    // should. 
    Send PSend17600 = new_Send((Optr)PSend17599, SMB_should, 0);
    // be:. 
    Send PSend17601 = new_Send((Optr)PSend17600, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17602 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17603 = new_Send((Optr)PSend17602, SMB_origin, 0);
    // origin. 
    Send PSend17604 = new_Send((Optr)PSend17603, SMB_origin, 0);
    // origin. 
    Send PSend17605 = new_Send((Optr)PSend17604, SMB_origin, 0);
    // should. 
    Send PSend17606 = new_Send((Optr)PSend17605, SMB_should, 0);
    // be:. 
    Send PSend17607 = new_Send((Optr)PSend17606, SMB_be_, 1, (Optr)nil_Const);
    // origin. 
    Send PSend17609 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17608 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17609);
    // should. 
    Send PSend17610 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17611 = new_Send((Optr)PSend17610, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17612 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17613 = new_Send((Optr)PSend17612, SMB_should, 0);
    // be:. 
    Send PSend17614 = new_Send((Optr)PSend17613, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17616 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17615 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17616);
    // should. 
    Send PSend17617 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17618 = new_Send((Optr)PSend17617, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17619 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17620 = new_Send((Optr)PSend17619, SMB_should, 0);
    // be:. 
    Send PSend17621 = new_Send((Optr)PSend17620, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17622 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17623 = new_Send((Optr)PSend17622, SMB_should, 0);
    // be:. 
    Send PSend17624 = new_Send((Optr)PSend17623, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17534 = instantiate_Array_with(ThreadedCode_Class, 0, 287, (Optr)&t_push1, (Optr)PAssign17535, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17537, (Optr)&t_send1, (Optr)PSend17536, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17544, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17545, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17546, (Optr)&t_send0, (Optr)PSend17547, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17548, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17549, (Optr)&t_send0, (Optr)PSend17550, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17551, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17552, (Optr)&t_send0, (Optr)PSend17553, (Optr)&t_send0, (Optr)PSend17554, (Optr)&t_send0, (Optr)PSend17555, (Optr)&t_send0, (Optr)PSend17556, (Optr)&t_push1, (Optr)SMB_testFieldOverwrite, (Optr)&t_send1, (Optr)PSend17557, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17558, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17559, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17560, (Optr)&t_send0, (Optr)PSend17561, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17562, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17563, (Optr)&t_send0, (Optr)PSend17564, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17565, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17566, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17567, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17568, (Optr)&t_send0, (Optr)PSend17569, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17570, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17571, (Optr)&t_send0, (Optr)PSend17572, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17573, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17574, (Optr)&t_send0, (Optr)PSend17575, (Optr)&t_send0, (Optr)PSend17576, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17577, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17578, (Optr)&t_send0, (Optr)PSend17579, (Optr)&t_send0, (Optr)PSend17580, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17581, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17582, (Optr)&t_send0, (Optr)PSend17583, (Optr)&t_send0, (Optr)PSend17584, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17585, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17586, (Optr)&t_send0, (Optr)PSend17587, (Optr)&t_send0, (Optr)PSend17588, (Optr)&t_send0, (Optr)PSend17589, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17590, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17591, (Optr)&t_send0, (Optr)PSend17592, (Optr)&t_send0, (Optr)PSend17593, (Optr)&t_send0, (Optr)PSend17594, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17595, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17596, (Optr)&t_send0, (Optr)PSend17597, (Optr)&t_send0, (Optr)PSend17598, (Optr)&t_send0, (Optr)PSend17599, (Optr)&t_send0, (Optr)PSend17600, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17601, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17602, (Optr)&t_send0, (Optr)PSend17603, (Optr)&t_send0, (Optr)PSend17604, (Optr)&t_send0, (Optr)PSend17605, (Optr)&t_send0, (Optr)PSend17606, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17607, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17608, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17609, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17610, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17611, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17612, (Optr)&t_send0, (Optr)PSend17613, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17614, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17615, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17616, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17617, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17618, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17619, (Optr)&t_send0, (Optr)PSend17620, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17621, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17622, (Optr)&t_send0, (Optr)PSend17623, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17624, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17532 = new_Method_with(empty_Array, PArray17533, empty_Array, PThreadedCode17534, 26, PAssign17535, PSend17545, PSend17548, PSend17551, PSend17557, PAssign17558, PSend17562, PSend17565, PAssign17566, PSend17570, PSend17573, PSend17577, PSend17581, PSend17585, PSend17590, PSend17595, PSend17601, PSend17607, PAssign17608, PSend17611, PSend17614, PAssign17615, PSend17618, PSend17621, PSend17624, self);
    
    MethodClosure MC_SMB_testFieldOverwrite = new_MethodClosure((Method)PMethod17532, Interpretation_AliasInterpreterTest_Class);
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