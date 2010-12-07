#include <lib/class/Interpretation/AliasInterpreterTest.h>


Optr layout_Interpretation_AliasInterpreterTest_Class_class;
Optr slot_Interpretation_AliasInterpreterTest_i;
Optr layout_Interpretation_AliasInterpreterTest;


static void init_SMB_testInstanceCreation() {
    Symbol SMB_testInstanceCreation = new_Symbol(L"testInstanceCreation");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17346 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17352 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Array PThreadedCode17351 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17352, (Optr)&t_block_return);
    Block PBlock17350 = new_Block_with(empty_Array, empty_Array, PThreadedCode17351, 1, PSend17352);
    // interpret:. 
    Send PSend17349 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17350);
    Assign PAssign17348 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17349);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17353 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17354 = new_Send((Optr)PSend17353, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17355 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17356 = new_Send((Optr)PSend17355, SMB_should, 0);
    // beKindOf:. 
    Send PSend17357 = new_Send((Optr)PSend17356, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17358 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17359 = new_Send((Optr)PSend17358, SMB_should, 0);
    // beKindOf:. 
    Send PSend17360 = new_Send((Optr)PSend17359, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17361 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17362 = new_Send((Optr)PSend17361, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17363 = new_Send((Optr)PSend17362, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17364 = new_Send((Optr)PSend17363, SMB_selector, 0);
    // should. 
    Send PSend17365 = new_Send((Optr)PSend17364, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testInstanceCreation_Const = new_Constant((Optr)SMB_testInstanceCreation);
    // be:. 
    Send PSend17366 = new_Send((Optr)PSend17365, SMB_be_, 1, (Optr)SMB_testInstanceCreation_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17368 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17367 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17368);
    // should. 
    Send PSend17369 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17370 = new_Send((Optr)PSend17369, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17371 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17372 = new_Send((Optr)PSend17371, SMB_should, 0);
    // beKindOf:. 
    Send PSend17373 = new_Send((Optr)PSend17372, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17374 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17375 = new_Send((Optr)PSend17374, SMB_should, 0);
    // beKindOf:. 
    Send PSend17376 = new_Send((Optr)PSend17375, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17377 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17378 = new_Send((Optr)PSend17377, SMB_homeContext, 0);
    // closure. 
    Send PSend17379 = new_Send((Optr)PSend17378, SMB_closure, 0);
    // selector. 
    Send PSend17380 = new_Send((Optr)PSend17379, SMB_selector, 0);
    // should. 
    Send PSend17381 = new_Send((Optr)PSend17380, SMB_should, 0);
    Constant SMB_new_Const = new_Constant((Optr)SMB_new);
    // be:. 
    Send PSend17382 = new_Send((Optr)PSend17381, SMB_be_, 1, (Optr)SMB_new_Const);
    // origin. 
    Send PSend17384 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17383 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17384);
    // should. 
    Send PSend17385 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17386 = new_Send((Optr)PSend17385, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17387 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17388 = new_Send((Optr)PSend17387, SMB_should, 0);
    // beKindOf:. 
    Send PSend17389 = new_Send((Optr)PSend17388, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17390 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17391 = new_Send((Optr)PSend17390, SMB_should, 0);
    // beKindOf:. 
    Send PSend17392 = new_Send((Optr)PSend17391, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17393 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17394 = new_Send((Optr)PSend17393, SMB_homeContext, 0);
    // closure. 
    Send PSend17395 = new_Send((Optr)PSend17394, SMB_closure, 0);
    // selector. 
    Send PSend17396 = new_Send((Optr)PSend17395, SMB_selector, 0);
    // should. 
    Send PSend17397 = new_Send((Optr)PSend17396, SMB_should, 0);
    Symbol  SMB_initialize = new_Symbol(L"initialize");
    Constant SMB_initialize_Const = new_Constant((Optr)SMB_initialize);
    // be:. 
    Send PSend17398 = new_Send((Optr)PSend17397, SMB_be_, 1, (Optr)SMB_initialize_Const);
    // origin. 
    Send PSend17400 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17399 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17400);
    // should. 
    Send PSend17401 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17402 = new_Send((Optr)PSend17401, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // context. 
    Send PSend17403 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17404 = new_Send((Optr)PSend17403, SMB_should, 0);
    // beKindOf:. 
    Send PSend17405 = new_Send((Optr)PSend17404, SMB_beKindOf_, 1, (Optr)PNativeMethodContext_classReference);
    // context. 
    Send PSend17406 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend17407 = new_Send((Optr)PSend17406, SMB_message, 0);
    // selector. 
    Send PSend17408 = new_Send((Optr)PSend17407, SMB_selector, 0);
    // should. 
    Send PSend17409 = new_Send((Optr)PSend17408, SMB_should, 0);
    Symbol  SMB_basicNew = new_Symbol(L"basicNew");
    Constant SMB_basicNew_Const = new_Constant((Optr)SMB_basicNew);
    // be:. 
    Send PSend17410 = new_Send((Optr)PSend17409, SMB_be_, 1, (Optr)SMB_basicNew_Const);
    // origin. 
    Send PSend17411 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17412 = new_Send((Optr)PSend17411, SMB_should, 0);
    // be:. 
    Send PSend17413 = new_Send((Optr)PSend17412, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17347 = instantiate_Array_with(ThreadedCode_Class, 0, 224, (Optr)&t_push1, (Optr)PAssign17348, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17350, (Optr)&t_send1, (Optr)PSend17349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17353, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17354, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17355, (Optr)&t_send0, (Optr)PSend17356, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17357, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17358, (Optr)&t_send0, (Optr)PSend17359, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17360, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17361, (Optr)&t_send0, (Optr)PSend17362, (Optr)&t_send0, (Optr)PSend17363, (Optr)&t_send0, (Optr)PSend17364, (Optr)&t_send0, (Optr)PSend17365, (Optr)&t_push1, (Optr)SMB_testInstanceCreation, (Optr)&t_send1, (Optr)PSend17366, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17367, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17368, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17369, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17370, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17371, (Optr)&t_send0, (Optr)PSend17372, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17373, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17374, (Optr)&t_send0, (Optr)PSend17375, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17376, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17377, (Optr)&t_send0, (Optr)PSend17378, (Optr)&t_send0, (Optr)PSend17379, (Optr)&t_send0, (Optr)PSend17380, (Optr)&t_send0, (Optr)PSend17381, (Optr)&t_push1, (Optr)SMB_new, (Optr)&t_send1, (Optr)PSend17382, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17383, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17384, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17385, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17386, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17387, (Optr)&t_send0, (Optr)PSend17388, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17389, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17390, (Optr)&t_send0, (Optr)PSend17391, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17392, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17393, (Optr)&t_send0, (Optr)PSend17394, (Optr)&t_send0, (Optr)PSend17395, (Optr)&t_send0, (Optr)PSend17396, (Optr)&t_send0, (Optr)PSend17397, (Optr)&t_push1, (Optr)SMB_initialize, (Optr)&t_send1, (Optr)PSend17398, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17399, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17400, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17401, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17402, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17403, (Optr)&t_send0, (Optr)PSend17404, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17405, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17406, (Optr)&t_send0, (Optr)PSend17407, (Optr)&t_send0, (Optr)PSend17408, (Optr)&t_send0, (Optr)PSend17409, (Optr)&t_push1, (Optr)SMB_basicNew, (Optr)&t_send1, (Optr)PSend17410, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17411, (Optr)&t_send0, (Optr)PSend17412, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17413, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17345 = new_Method_with(empty_Array, PArray17346, empty_Array, PThreadedCode17347, 21, PAssign17348, PSend17354, PSend17357, PSend17360, PSend17366, PAssign17367, PSend17370, PSend17373, PSend17376, PSend17382, PAssign17383, PSend17386, PSend17389, PSend17392, PSend17398, PAssign17399, PSend17402, PSend17405, PSend17410, PSend17413, self);
    
    MethodClosure MC_SMB_testInstanceCreation = new_MethodClosure((Method)PMethod17345, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testInstanceCreation, MC_SMB_testInstanceCreation);
}


static void init_SMB_testFieldOverwrite() {
    Symbol SMB_testFieldOverwrite = new_Symbol(L"testFieldOverwrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17415 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17420 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17423 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17422 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17423);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17424 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // a:. 
    Send PSend17425 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_20_Const);
    Array PThreadedCode17421 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17422, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17423, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17424, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17425, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17419 = new_Block_with(empty_Array, PArray17420, PThreadedCode17421, 4, PAssign17422, PSend17424, PSend17425, VAR_c_1_0);
    // interpret:. 
    Send PSend17418 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17419);
    Assign PAssign17417 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17418);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17426 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17427 = new_Send((Optr)PSend17426, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17428 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17429 = new_Send((Optr)PSend17428, SMB_should, 0);
    // beKindOf:. 
    Send PSend17430 = new_Send((Optr)PSend17429, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17431 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17432 = new_Send((Optr)PSend17431, SMB_should, 0);
    // beKindOf:. 
    Send PSend17433 = new_Send((Optr)PSend17432, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17434 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17435 = new_Send((Optr)PSend17434, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17436 = new_Send((Optr)PSend17435, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17437 = new_Send((Optr)PSend17436, SMB_selector, 0);
    // should. 
    Send PSend17438 = new_Send((Optr)PSend17437, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldOverwrite_Const = new_Constant((Optr)SMB_testFieldOverwrite);
    // be:. 
    Send PSend17439 = new_Send((Optr)PSend17438, SMB_be_, 1, (Optr)SMB_testFieldOverwrite_Const);
    // value. 
    Send PSend17441 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17440 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17441);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17442 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17443 = new_Send((Optr)PSend17442, SMB_should, 0);
    // beKindOf:. 
    Send PSend17444 = new_Send((Optr)PSend17443, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17445 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17446 = new_Send((Optr)PSend17445, SMB_should, 0);
    // beKindOf:. 
    Send PSend17447 = new_Send((Optr)PSend17446, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17449 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17448 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17449);
    // value. 
    Send PSend17450 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17451 = new_Send((Optr)PSend17450, SMB_should, 0);
    // be:. 
    Send PSend17452 = new_Send((Optr)PSend17451, SMB_be_, 1, (Optr)int_20_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17453 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17454 = new_Send((Optr)PSend17453, SMB_should, 0);
    // beKindOf:. 
    Send PSend17455 = new_Send((Optr)PSend17454, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    // predecessor. 
    Send PSend17456 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // value. 
    Send PSend17457 = new_Send((Optr)PSend17456, SMB_value, 0);
    // should. 
    Send PSend17458 = new_Send((Optr)PSend17457, SMB_should, 0);
    // be:. 
    Send PSend17459 = new_Send((Optr)PSend17458, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17460 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // predecessor. 
    Send PSend17461 = new_Send((Optr)PSend17460, SMB_predecessor, 0);
    // should. 
    Send PSend17462 = new_Send((Optr)PSend17461, SMB_should, 0);
    // beKindOf:. 
    Send PSend17463 = new_Send((Optr)PSend17462, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // predecessor. 
    Send PSend17464 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17465 = new_Send((Optr)PSend17464, SMB_origin, 0);
    // should. 
    Send PSend17466 = new_Send((Optr)PSend17465, SMB_should, 0);
    // beKindOf:. 
    Send PSend17467 = new_Send((Optr)PSend17466, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // predecessor. 
    Send PSend17468 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17469 = new_Send((Optr)PSend17468, SMB_origin, 0);
    // value. 
    Send PSend17470 = new_Send((Optr)PSend17469, SMB_value, 0);
    // should. 
    Send PSend17471 = new_Send((Optr)PSend17470, SMB_should, 0);
    // be:. 
    Send PSend17472 = new_Send((Optr)PSend17471, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17473 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17474 = new_Send((Optr)PSend17473, SMB_origin, 0);
    // origin. 
    Send PSend17475 = new_Send((Optr)PSend17474, SMB_origin, 0);
    // should. 
    Send PSend17476 = new_Send((Optr)PSend17475, SMB_should, 0);
    // beKindOf:. 
    Send PSend17477 = new_Send((Optr)PSend17476, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // predecessor. 
    Send PSend17478 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17479 = new_Send((Optr)PSend17478, SMB_origin, 0);
    // origin. 
    Send PSend17480 = new_Send((Optr)PSend17479, SMB_origin, 0);
    // value. 
    Send PSend17481 = new_Send((Optr)PSend17480, SMB_value, 0);
    // should. 
    Send PSend17482 = new_Send((Optr)PSend17481, SMB_should, 0);
    // be:. 
    Send PSend17483 = new_Send((Optr)PSend17482, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17484 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17485 = new_Send((Optr)PSend17484, SMB_origin, 0);
    // origin. 
    Send PSend17486 = new_Send((Optr)PSend17485, SMB_origin, 0);
    // origin. 
    Send PSend17487 = new_Send((Optr)PSend17486, SMB_origin, 0);
    // should. 
    Send PSend17488 = new_Send((Optr)PSend17487, SMB_should, 0);
    // be:. 
    Send PSend17489 = new_Send((Optr)PSend17488, SMB_be_, 1, (Optr)nil_Const);
    // origin. 
    Send PSend17491 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17490 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17491);
    // should. 
    Send PSend17492 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17493 = new_Send((Optr)PSend17492, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17494 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17495 = new_Send((Optr)PSend17494, SMB_should, 0);
    // be:. 
    Send PSend17496 = new_Send((Optr)PSend17495, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17498 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17497 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17498);
    // should. 
    Send PSend17499 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17500 = new_Send((Optr)PSend17499, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17501 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17502 = new_Send((Optr)PSend17501, SMB_should, 0);
    // be:. 
    Send PSend17503 = new_Send((Optr)PSend17502, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17504 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17505 = new_Send((Optr)PSend17504, SMB_should, 0);
    // be:. 
    Send PSend17506 = new_Send((Optr)PSend17505, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17416 = instantiate_Array_with(ThreadedCode_Class, 0, 287, (Optr)&t_push1, (Optr)PAssign17417, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17419, (Optr)&t_send1, (Optr)PSend17418, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17426, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17427, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17428, (Optr)&t_send0, (Optr)PSend17429, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17430, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17431, (Optr)&t_send0, (Optr)PSend17432, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17433, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17434, (Optr)&t_send0, (Optr)PSend17435, (Optr)&t_send0, (Optr)PSend17436, (Optr)&t_send0, (Optr)PSend17437, (Optr)&t_send0, (Optr)PSend17438, (Optr)&t_push1, (Optr)SMB_testFieldOverwrite, (Optr)&t_send1, (Optr)PSend17439, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17440, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17441, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17442, (Optr)&t_send0, (Optr)PSend17443, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17444, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17445, (Optr)&t_send0, (Optr)PSend17446, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17447, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17448, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17449, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17450, (Optr)&t_send0, (Optr)PSend17451, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17452, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17453, (Optr)&t_send0, (Optr)PSend17454, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17455, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17456, (Optr)&t_send0, (Optr)PSend17457, (Optr)&t_send0, (Optr)PSend17458, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17459, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17460, (Optr)&t_send0, (Optr)PSend17461, (Optr)&t_send0, (Optr)PSend17462, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17463, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17464, (Optr)&t_send0, (Optr)PSend17465, (Optr)&t_send0, (Optr)PSend17466, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17467, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17468, (Optr)&t_send0, (Optr)PSend17469, (Optr)&t_send0, (Optr)PSend17470, (Optr)&t_send0, (Optr)PSend17471, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17472, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17473, (Optr)&t_send0, (Optr)PSend17474, (Optr)&t_send0, (Optr)PSend17475, (Optr)&t_send0, (Optr)PSend17476, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17477, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17478, (Optr)&t_send0, (Optr)PSend17479, (Optr)&t_send0, (Optr)PSend17480, (Optr)&t_send0, (Optr)PSend17481, (Optr)&t_send0, (Optr)PSend17482, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17483, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17484, (Optr)&t_send0, (Optr)PSend17485, (Optr)&t_send0, (Optr)PSend17486, (Optr)&t_send0, (Optr)PSend17487, (Optr)&t_send0, (Optr)PSend17488, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17489, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17490, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17491, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17492, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17493, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17494, (Optr)&t_send0, (Optr)PSend17495, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17496, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17497, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17498, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17499, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17500, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17501, (Optr)&t_send0, (Optr)PSend17502, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17504, (Optr)&t_send0, (Optr)PSend17505, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17506, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17414 = new_Method_with(empty_Array, PArray17415, empty_Array, PThreadedCode17416, 26, PAssign17417, PSend17427, PSend17430, PSend17433, PSend17439, PAssign17440, PSend17444, PSend17447, PAssign17448, PSend17452, PSend17455, PSend17459, PSend17463, PSend17467, PSend17472, PSend17477, PSend17483, PSend17489, PAssign17490, PSend17493, PSend17496, PAssign17497, PSend17500, PSend17503, PSend17506, self);
    
    MethodClosure MC_SMB_testFieldOverwrite = new_MethodClosure((Method)PMethod17414, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testFieldOverwrite, MC_SMB_testFieldOverwrite);
}


static void init_SMB_testFieldWrite() {
    Symbol SMB_testFieldWrite = new_Symbol(L"testFieldWrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17508 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17513 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17516 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17515 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17516);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17517 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    Array PThreadedCode17514 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17515, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17516, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17517, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17512 = new_Block_with(empty_Array, PArray17513, PThreadedCode17514, 3, PAssign17515, PSend17517, VAR_c_1_0);
    // interpret:. 
    Send PSend17511 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17512);
    Assign PAssign17510 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17511);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17518 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17519 = new_Send((Optr)PSend17518, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17520 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17521 = new_Send((Optr)PSend17520, SMB_should, 0);
    // beKindOf:. 
    Send PSend17522 = new_Send((Optr)PSend17521, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17523 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17524 = new_Send((Optr)PSend17523, SMB_should, 0);
    // beKindOf:. 
    Send PSend17525 = new_Send((Optr)PSend17524, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17526 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17527 = new_Send((Optr)PSend17526, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17528 = new_Send((Optr)PSend17527, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17529 = new_Send((Optr)PSend17528, SMB_selector, 0);
    // should. 
    Send PSend17530 = new_Send((Optr)PSend17529, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldWrite_Const = new_Constant((Optr)SMB_testFieldWrite);
    // be:. 
    Send PSend17531 = new_Send((Optr)PSend17530, SMB_be_, 1, (Optr)SMB_testFieldWrite_Const);
    // value. 
    Send PSend17533 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17532 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17533);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17534 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17535 = new_Send((Optr)PSend17534, SMB_should, 0);
    // beKindOf:. 
    Send PSend17536 = new_Send((Optr)PSend17535, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17537 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17538 = new_Send((Optr)PSend17537, SMB_should, 0);
    // beKindOf:. 
    Send PSend17539 = new_Send((Optr)PSend17538, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17541 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17540 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17541);
    // value. 
    Send PSend17542 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17543 = new_Send((Optr)PSend17542, SMB_should, 0);
    // be:. 
    Send PSend17544 = new_Send((Optr)PSend17543, SMB_be_, 1, (Optr)int_10_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17545 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17546 = new_Send((Optr)PSend17545, SMB_should, 0);
    // beKindOf:. 
    Send PSend17547 = new_Send((Optr)PSend17546, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17549 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17548 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17549);
    // should. 
    Send PSend17550 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17551 = new_Send((Optr)PSend17550, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17552 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17553 = new_Send((Optr)PSend17552, SMB_should, 0);
    // be:. 
    Send PSend17554 = new_Send((Optr)PSend17553, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17556 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17555 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17556);
    // should. 
    Send PSend17557 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17558 = new_Send((Optr)PSend17557, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17559 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17560 = new_Send((Optr)PSend17559, SMB_should, 0);
    // be:. 
    Send PSend17561 = new_Send((Optr)PSend17560, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17562 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17563 = new_Send((Optr)PSend17562, SMB_should, 0);
    // be:. 
    Send PSend17564 = new_Send((Optr)PSend17563, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17509 = instantiate_Array_with(ThreadedCode_Class, 0, 185, (Optr)&t_push1, (Optr)PAssign17510, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17512, (Optr)&t_send1, (Optr)PSend17511, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17518, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17519, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17520, (Optr)&t_send0, (Optr)PSend17521, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17522, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17523, (Optr)&t_send0, (Optr)PSend17524, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17525, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17526, (Optr)&t_send0, (Optr)PSend17527, (Optr)&t_send0, (Optr)PSend17528, (Optr)&t_send0, (Optr)PSend17529, (Optr)&t_send0, (Optr)PSend17530, (Optr)&t_push1, (Optr)SMB_testFieldWrite, (Optr)&t_send1, (Optr)PSend17531, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17532, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17533, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17534, (Optr)&t_send0, (Optr)PSend17535, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17536, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17537, (Optr)&t_send0, (Optr)PSend17538, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17539, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17540, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17541, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17542, (Optr)&t_send0, (Optr)PSend17543, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17544, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17545, (Optr)&t_send0, (Optr)PSend17546, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17547, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17548, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17549, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17550, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17551, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17552, (Optr)&t_send0, (Optr)PSend17553, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17554, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17555, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17556, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17557, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17558, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17559, (Optr)&t_send0, (Optr)PSend17560, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17561, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17562, (Optr)&t_send0, (Optr)PSend17563, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17564, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17507 = new_Method_with(empty_Array, PArray17508, empty_Array, PThreadedCode17509, 19, PAssign17510, PSend17519, PSend17522, PSend17525, PSend17531, PAssign17532, PSend17536, PSend17539, PAssign17540, PSend17544, PSend17547, PAssign17548, PSend17551, PSend17554, PAssign17555, PSend17558, PSend17561, PSend17564, self);
    
    MethodClosure MC_SMB_testFieldWrite = new_MethodClosure((Method)PMethod17507, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testFieldWrite, MC_SMB_testFieldWrite);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17568 = new_Send((Optr)PAliasInterpreter_classReference, SMB_new, 0);
    Assign PAssign17567 = new_Assign((Optr)slot_Interpretation_AliasInterpreterTest_i, (Optr)PSend17568);
    Array PThreadedCode17566 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign17567, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_send0, (Optr)PSend17568, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17565 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17566, 2, PAssign17567, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod17565, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_testConstant() {
    Symbol SMB_testConstant = new_Symbol(L"testConstant");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17570 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Array PThreadedCode17575 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_2);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Block PBlock17574 = new_Block_with(empty_Array, empty_Array, PThreadedCode17575, 1, int_2_Const);
    // interpret:. 
    Send PSend17573 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17574);
    Assign PAssign17572 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17573);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17576 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17577 = new_Send((Optr)PSend17576, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17578 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17579 = new_Send((Optr)PSend17578, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend17580 = new_Send((Optr)PSend17579, SMB_be_, 1, (Optr)int_2_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17582 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17581 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17582);
    // should. 
    Send PSend17583 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17584 = new_Send((Optr)PSend17583, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // origin. 
    Send PSend17585 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17586 = new_Send((Optr)PSend17585, SMB_should, 0);
    // be:. 
    Send PSend17587 = new_Send((Optr)PSend17586, SMB_be_, 1, (Optr)nil_Const);
    // value. 
    Send PSend17588 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17589 = new_Send((Optr)PSend17588, SMB_should, 0);
    // be:. 
    Send PSend17590 = new_Send((Optr)PSend17589, SMB_be_, 1, (Optr)int_2_Const);
    Array PThreadedCode17571 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign17572, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17574, (Optr)&t_send1, (Optr)PSend17573, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17576, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17577, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17578, (Optr)&t_send0, (Optr)PSend17579, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17580, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17581, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17582, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17583, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17584, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17585, (Optr)&t_send0, (Optr)PSend17586, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17587, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17588, (Optr)&t_send0, (Optr)PSend17589, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17590, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17569 = new_Method_with(empty_Array, PArray17570, empty_Array, PThreadedCode17571, 8, PAssign17572, PSend17577, PSend17580, PAssign17581, PSend17584, PSend17587, PSend17590, self);
    
    MethodClosure MC_SMB_testConstant = new_MethodClosure((Method)PMethod17569, Interpretation_AliasInterpreterTest_Class);
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