#include <lib/class/Interpretation/AliasInterpreterTest.h>


Optr layout_Interpretation_AliasInterpreterTest_Class_class;
Optr slot_Interpretation_AliasInterpreterTest_i;
Optr layout_Interpretation_AliasInterpreterTest;


static void init_SMB_testInstanceCreation() {
    Symbol SMB_testInstanceCreation = new_Symbol(L"testInstanceCreation");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17477 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17483 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Array PThreadedCode17482 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17483, (Optr)&t_block_return);
    Block PBlock17481 = new_Block_with(empty_Array, empty_Array, PThreadedCode17482, 1, PSend17483);
    // interpret:. 
    Send PSend17480 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17481);
    Assign PAssign17479 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17480);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17484 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17485 = new_Send((Optr)PSend17484, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17486 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17487 = new_Send((Optr)PSend17486, SMB_should, 0);
    // beKindOf:. 
    Send PSend17488 = new_Send((Optr)PSend17487, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17489 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17490 = new_Send((Optr)PSend17489, SMB_should, 0);
    // beKindOf:. 
    Send PSend17491 = new_Send((Optr)PSend17490, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17492 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17493 = new_Send((Optr)PSend17492, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17494 = new_Send((Optr)PSend17493, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17495 = new_Send((Optr)PSend17494, SMB_selector, 0);
    // should. 
    Send PSend17496 = new_Send((Optr)PSend17495, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testInstanceCreation_Const = new_Constant((Optr)SMB_testInstanceCreation);
    // be:. 
    Send PSend17497 = new_Send((Optr)PSend17496, SMB_be_, 1, (Optr)SMB_testInstanceCreation_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17499 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17498 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17499);
    // should. 
    Send PSend17500 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17501 = new_Send((Optr)PSend17500, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17502 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17503 = new_Send((Optr)PSend17502, SMB_should, 0);
    // beKindOf:. 
    Send PSend17504 = new_Send((Optr)PSend17503, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17505 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17506 = new_Send((Optr)PSend17505, SMB_should, 0);
    // beKindOf:. 
    Send PSend17507 = new_Send((Optr)PSend17506, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17508 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17509 = new_Send((Optr)PSend17508, SMB_homeContext, 0);
    // closure. 
    Send PSend17510 = new_Send((Optr)PSend17509, SMB_closure, 0);
    // selector. 
    Send PSend17511 = new_Send((Optr)PSend17510, SMB_selector, 0);
    // should. 
    Send PSend17512 = new_Send((Optr)PSend17511, SMB_should, 0);
    Constant SMB_new_Const = new_Constant((Optr)SMB_new);
    // be:. 
    Send PSend17513 = new_Send((Optr)PSend17512, SMB_be_, 1, (Optr)SMB_new_Const);
    // origin. 
    Send PSend17515 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17514 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17515);
    // should. 
    Send PSend17516 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17517 = new_Send((Optr)PSend17516, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    // value. 
    Send PSend17518 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17519 = new_Send((Optr)PSend17518, SMB_should, 0);
    // beKindOf:. 
    Send PSend17520 = new_Send((Optr)PSend17519, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    // context. 
    Send PSend17521 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17522 = new_Send((Optr)PSend17521, SMB_should, 0);
    // beKindOf:. 
    Send PSend17523 = new_Send((Optr)PSend17522, SMB_beKindOf_, 1, (Optr)PMethodContext_classReference);
    // context. 
    Send PSend17524 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // homeContext. 
    Send PSend17525 = new_Send((Optr)PSend17524, SMB_homeContext, 0);
    // closure. 
    Send PSend17526 = new_Send((Optr)PSend17525, SMB_closure, 0);
    // selector. 
    Send PSend17527 = new_Send((Optr)PSend17526, SMB_selector, 0);
    // should. 
    Send PSend17528 = new_Send((Optr)PSend17527, SMB_should, 0);
    Symbol  SMB_initialize = new_Symbol(L"initialize");
    Constant SMB_initialize_Const = new_Constant((Optr)SMB_initialize);
    // be:. 
    Send PSend17529 = new_Send((Optr)PSend17528, SMB_be_, 1, (Optr)SMB_initialize_Const);
    // origin. 
    Send PSend17531 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17530 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17531);
    // should. 
    Send PSend17532 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17533 = new_Send((Optr)PSend17532, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // context. 
    Send PSend17534 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17535 = new_Send((Optr)PSend17534, SMB_should, 0);
    // beKindOf:. 
    Send PSend17536 = new_Send((Optr)PSend17535, SMB_beKindOf_, 1, (Optr)PNativeMethodContext_classReference);
    // context. 
    Send PSend17537 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend17538 = new_Send((Optr)PSend17537, SMB_message, 0);
    // selector. 
    Send PSend17539 = new_Send((Optr)PSend17538, SMB_selector, 0);
    // should. 
    Send PSend17540 = new_Send((Optr)PSend17539, SMB_should, 0);
    Symbol  SMB_basicNew = new_Symbol(L"basicNew");
    Constant SMB_basicNew_Const = new_Constant((Optr)SMB_basicNew);
    // be:. 
    Send PSend17541 = new_Send((Optr)PSend17540, SMB_be_, 1, (Optr)SMB_basicNew_Const);
    // origin. 
    Send PSend17542 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17543 = new_Send((Optr)PSend17542, SMB_should, 0);
    // be:. 
    Send PSend17544 = new_Send((Optr)PSend17543, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17478 = instantiate_Array_with(ThreadedCode_Class, 0, 224, (Optr)&t_push1, (Optr)PAssign17479, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17481, (Optr)&t_send1, (Optr)PSend17480, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17484, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17485, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17486, (Optr)&t_send0, (Optr)PSend17487, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17488, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17489, (Optr)&t_send0, (Optr)PSend17490, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17491, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17492, (Optr)&t_send0, (Optr)PSend17493, (Optr)&t_send0, (Optr)PSend17494, (Optr)&t_send0, (Optr)PSend17495, (Optr)&t_send0, (Optr)PSend17496, (Optr)&t_push1, (Optr)SMB_testInstanceCreation, (Optr)&t_send1, (Optr)PSend17497, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17498, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17499, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17500, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17501, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17502, (Optr)&t_send0, (Optr)PSend17503, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17504, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17505, (Optr)&t_send0, (Optr)PSend17506, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17507, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17508, (Optr)&t_send0, (Optr)PSend17509, (Optr)&t_send0, (Optr)PSend17510, (Optr)&t_send0, (Optr)PSend17511, (Optr)&t_send0, (Optr)PSend17512, (Optr)&t_push1, (Optr)SMB_new, (Optr)&t_send1, (Optr)PSend17513, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17514, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17515, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17516, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17517, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17518, (Optr)&t_send0, (Optr)PSend17519, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17520, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17521, (Optr)&t_send0, (Optr)PSend17522, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17523, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17524, (Optr)&t_send0, (Optr)PSend17525, (Optr)&t_send0, (Optr)PSend17526, (Optr)&t_send0, (Optr)PSend17527, (Optr)&t_send0, (Optr)PSend17528, (Optr)&t_push1, (Optr)SMB_initialize, (Optr)&t_send1, (Optr)PSend17529, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17530, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17531, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17532, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17533, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17534, (Optr)&t_send0, (Optr)PSend17535, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send1, (Optr)PSend17536, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17537, (Optr)&t_send0, (Optr)PSend17538, (Optr)&t_send0, (Optr)PSend17539, (Optr)&t_send0, (Optr)PSend17540, (Optr)&t_push1, (Optr)SMB_basicNew, (Optr)&t_send1, (Optr)PSend17541, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17542, (Optr)&t_send0, (Optr)PSend17543, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17544, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17476 = new_Method_with(empty_Array, PArray17477, empty_Array, PThreadedCode17478, 21, PAssign17479, PSend17485, PSend17488, PSend17491, PSend17497, PAssign17498, PSend17501, PSend17504, PSend17507, PSend17513, PAssign17514, PSend17517, PSend17520, PSend17523, PSend17529, PAssign17530, PSend17533, PSend17536, PSend17541, PSend17544, self);
    
    MethodClosure MC_SMB_testInstanceCreation = new_MethodClosure((Method)PMethod17476, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testInstanceCreation, MC_SMB_testInstanceCreation);
}


static void init_SMB_testFieldWrite() {
    Symbol SMB_testFieldWrite = new_Symbol(L"testFieldWrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17546 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17551 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17554 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17553 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17554);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17555 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    Array PThreadedCode17552 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17553, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17554, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17555, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17550 = new_Block_with(empty_Array, PArray17551, PThreadedCode17552, 3, PAssign17553, PSend17555, VAR_c_1_0);
    // interpret:. 
    Send PSend17549 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17550);
    Assign PAssign17548 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17549);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17556 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17557 = new_Send((Optr)PSend17556, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17558 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17559 = new_Send((Optr)PSend17558, SMB_should, 0);
    // beKindOf:. 
    Send PSend17560 = new_Send((Optr)PSend17559, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17561 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17562 = new_Send((Optr)PSend17561, SMB_should, 0);
    // beKindOf:. 
    Send PSend17563 = new_Send((Optr)PSend17562, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17564 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17565 = new_Send((Optr)PSend17564, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17566 = new_Send((Optr)PSend17565, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17567 = new_Send((Optr)PSend17566, SMB_selector, 0);
    // should. 
    Send PSend17568 = new_Send((Optr)PSend17567, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldWrite_Const = new_Constant((Optr)SMB_testFieldWrite);
    // be:. 
    Send PSend17569 = new_Send((Optr)PSend17568, SMB_be_, 1, (Optr)SMB_testFieldWrite_Const);
    // value. 
    Send PSend17571 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17570 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17571);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17572 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17573 = new_Send((Optr)PSend17572, SMB_should, 0);
    // beKindOf:. 
    Send PSend17574 = new_Send((Optr)PSend17573, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17575 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17576 = new_Send((Optr)PSend17575, SMB_should, 0);
    // beKindOf:. 
    Send PSend17577 = new_Send((Optr)PSend17576, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17579 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17578 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17579);
    // value. 
    Send PSend17580 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17581 = new_Send((Optr)PSend17580, SMB_should, 0);
    // be:. 
    Send PSend17582 = new_Send((Optr)PSend17581, SMB_be_, 1, (Optr)int_10_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17583 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17584 = new_Send((Optr)PSend17583, SMB_should, 0);
    // beKindOf:. 
    Send PSend17585 = new_Send((Optr)PSend17584, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17587 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17586 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17587);
    // should. 
    Send PSend17588 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17589 = new_Send((Optr)PSend17588, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17590 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17591 = new_Send((Optr)PSend17590, SMB_should, 0);
    // be:. 
    Send PSend17592 = new_Send((Optr)PSend17591, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17594 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17593 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17594);
    // should. 
    Send PSend17595 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17596 = new_Send((Optr)PSend17595, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17597 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17598 = new_Send((Optr)PSend17597, SMB_should, 0);
    // be:. 
    Send PSend17599 = new_Send((Optr)PSend17598, SMB_be_, 1, (Optr)int_10_Const);
    // origin. 
    Send PSend17600 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17601 = new_Send((Optr)PSend17600, SMB_should, 0);
    // be:. 
    Send PSend17602 = new_Send((Optr)PSend17601, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17547 = instantiate_Array_with(ThreadedCode_Class, 0, 185, (Optr)&t_push1, (Optr)PAssign17548, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17550, (Optr)&t_send1, (Optr)PSend17549, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17556, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17557, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17558, (Optr)&t_send0, (Optr)PSend17559, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17560, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17561, (Optr)&t_send0, (Optr)PSend17562, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17563, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17564, (Optr)&t_send0, (Optr)PSend17565, (Optr)&t_send0, (Optr)PSend17566, (Optr)&t_send0, (Optr)PSend17567, (Optr)&t_send0, (Optr)PSend17568, (Optr)&t_push1, (Optr)SMB_testFieldWrite, (Optr)&t_send1, (Optr)PSend17569, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17570, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17571, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17572, (Optr)&t_send0, (Optr)PSend17573, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17574, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17575, (Optr)&t_send0, (Optr)PSend17576, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17577, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17578, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17579, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17580, (Optr)&t_send0, (Optr)PSend17581, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17582, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17583, (Optr)&t_send0, (Optr)PSend17584, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17585, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17586, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17587, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17588, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17589, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17590, (Optr)&t_send0, (Optr)PSend17591, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17592, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17593, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17594, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17595, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17596, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17597, (Optr)&t_send0, (Optr)PSend17598, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17599, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17600, (Optr)&t_send0, (Optr)PSend17601, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17602, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17545 = new_Method_with(empty_Array, PArray17546, empty_Array, PThreadedCode17547, 19, PAssign17548, PSend17557, PSend17560, PSend17563, PSend17569, PAssign17570, PSend17574, PSend17577, PAssign17578, PSend17582, PSend17585, PAssign17586, PSend17589, PSend17592, PAssign17593, PSend17596, PSend17599, PSend17602, self);
    
    MethodClosure MC_SMB_testFieldWrite = new_MethodClosure((Method)PMethod17545, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testFieldWrite, MC_SMB_testFieldWrite);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17606 = new_Send((Optr)PAliasInterpreter_classReference, SMB_new, 0);
    Assign PAssign17605 = new_Assign((Optr)slot_Interpretation_AliasInterpreterTest_i, (Optr)PSend17606);
    Array PThreadedCode17604 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign17605, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_send0, (Optr)PSend17606, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17603 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17604, 2, PAssign17605, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod17603, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_testConstant() {
    Symbol SMB_testConstant = new_Symbol(L"testConstant");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17608 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Array PThreadedCode17613 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_2);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Block PBlock17612 = new_Block_with(empty_Array, empty_Array, PThreadedCode17613, 1, int_2_Const);
    // interpret:. 
    Send PSend17611 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17612);
    Assign PAssign17610 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17611);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17614 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17615 = new_Send((Optr)PSend17614, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17616 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17617 = new_Send((Optr)PSend17616, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend17618 = new_Send((Optr)PSend17617, SMB_be_, 1, (Optr)int_2_Const);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17620 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17619 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17620);
    // should. 
    Send PSend17621 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17622 = new_Send((Optr)PSend17621, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // origin. 
    Send PSend17623 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17624 = new_Send((Optr)PSend17623, SMB_should, 0);
    // be:. 
    Send PSend17625 = new_Send((Optr)PSend17624, SMB_be_, 1, (Optr)nil_Const);
    // value. 
    Send PSend17626 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17627 = new_Send((Optr)PSend17626, SMB_should, 0);
    // be:. 
    Send PSend17628 = new_Send((Optr)PSend17627, SMB_be_, 1, (Optr)int_2_Const);
    Array PThreadedCode17609 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign17610, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17612, (Optr)&t_send1, (Optr)PSend17611, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17614, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17615, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17616, (Optr)&t_send0, (Optr)PSend17617, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17618, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17619, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17620, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17621, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17622, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17623, (Optr)&t_send0, (Optr)PSend17624, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17625, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17626, (Optr)&t_send0, (Optr)PSend17627, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17628, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17607 = new_Method_with(empty_Array, PArray17608, empty_Array, PThreadedCode17609, 8, PAssign17610, PSend17615, PSend17618, PAssign17619, PSend17622, PSend17625, PSend17628, self);
    
    MethodClosure MC_SMB_testConstant = new_MethodClosure((Method)PMethod17607, Interpretation_AliasInterpreterTest_Class);
    store_method(Interpretation_AliasInterpreterTest_Class, SMB_testConstant, MC_SMB_testConstant);
}


static void init_SMB_testFieldOverwrite() {
    Symbol SMB_testFieldOverwrite = new_Symbol(L"testFieldOverwrite");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray17630 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray17635 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17638 = new_Send((Optr)ChildClassTestClass_classReference, SMB_new, 0);
    Assign PAssign17637 = new_Assign((Optr)VAR_c_1_0, (Optr)PSend17638);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_a_ = new_Symbol(L"a:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // a:. 
    Send PSend17639 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_10_Const);
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // a:. 
    Send PSend17640 = new_Send((Optr)VAR_c_1_0, SMB_a_, 1, (Optr)int_20_Const);
    Array PThreadedCode17636 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17637, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send0, (Optr)PSend17638, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17639, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17640, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_method_return);
    Block PBlock17634 = new_Block_with(empty_Array, PArray17635, PThreadedCode17636, 4, PAssign17637, PSend17639, PSend17640, VAR_c_1_0);
    // interpret:. 
    Send PSend17633 = new_Send((Optr)PAliasInterpreter_classReference, SMB_interpret_, 1, (Optr)PBlock17634);
    Assign PAssign17632 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17633);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend17641 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    // beKindOf:. 
    Send PSend17642 = new_Send((Optr)PSend17641, SMB_beKindOf_, 1, (Optr)PReturnAlias_classReference);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17643 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17644 = new_Send((Optr)PSend17643, SMB_should, 0);
    // beKindOf:. 
    Send PSend17645 = new_Send((Optr)PSend17644, SMB_beKindOf_, 1, (Optr)ChildClassTestClass_classReference);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend17646 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    // should. 
    Send PSend17647 = new_Send((Optr)PSend17646, SMB_should, 0);
    // beKindOf:. 
    Send PSend17648 = new_Send((Optr)PSend17647, SMB_beKindOf_, 1, (Optr)PBlockContext_classReference);
    // context. 
    Send PSend17649 = new_Send((Optr)VAR_result_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17650 = new_Send((Optr)PSend17649, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend17651 = new_Send((Optr)PSend17650, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17652 = new_Send((Optr)PSend17651, SMB_selector, 0);
    // should. 
    Send PSend17653 = new_Send((Optr)PSend17652, SMB_should, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    Constant SMB_testFieldOverwrite_Const = new_Constant((Optr)SMB_testFieldOverwrite);
    // be:. 
    Send PSend17654 = new_Send((Optr)PSend17653, SMB_be_, 1, (Optr)SMB_testFieldOverwrite_Const);
    // value. 
    Send PSend17656 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    Assign PAssign17655 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17656);
    Symbol SMB_a = new_Symbol(L"a");
    // a. 
    Send PSend17657 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    // should. 
    Send PSend17658 = new_Send((Optr)PSend17657, SMB_should, 0);
    // beKindOf:. 
    Send PSend17659 = new_Send((Optr)PSend17658, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    Symbol SMB_b = new_Symbol(L"b");
    // b. 
    Send PSend17660 = new_Send((Optr)VAR_result_0_0, SMB_b, 0);
    // should. 
    Send PSend17661 = new_Send((Optr)PSend17660, SMB_should, 0);
    // beKindOf:. 
    Send PSend17662 = new_Send((Optr)PSend17661, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // a. 
    Send PSend17664 = new_Send((Optr)VAR_result_0_0, SMB_a, 0);
    Assign PAssign17663 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17664);
    // value. 
    Send PSend17665 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17666 = new_Send((Optr)PSend17665, SMB_should, 0);
    // be:. 
    Send PSend17667 = new_Send((Optr)PSend17666, SMB_be_, 1, (Optr)int_20_Const);
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    // predecessor. 
    Send PSend17668 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // should. 
    Send PSend17669 = new_Send((Optr)PSend17668, SMB_should, 0);
    // beKindOf:. 
    Send PSend17670 = new_Send((Optr)PSend17669, SMB_beKindOf_, 1, (Optr)PFieldWriteAlias_classReference);
    // predecessor. 
    Send PSend17671 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // value. 
    Send PSend17672 = new_Send((Optr)PSend17671, SMB_value, 0);
    // should. 
    Send PSend17673 = new_Send((Optr)PSend17672, SMB_should, 0);
    // be:. 
    Send PSend17674 = new_Send((Optr)PSend17673, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17675 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // predecessor. 
    Send PSend17676 = new_Send((Optr)PSend17675, SMB_predecessor, 0);
    // should. 
    Send PSend17677 = new_Send((Optr)PSend17676, SMB_should, 0);
    // beKindOf:. 
    Send PSend17678 = new_Send((Optr)PSend17677, SMB_beKindOf_, 1, (Optr)PAllocationAlias_classReference);
    // predecessor. 
    Send PSend17679 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    Symbol SMB_origin = new_Symbol(L"origin");
    // origin. 
    Send PSend17680 = new_Send((Optr)PSend17679, SMB_origin, 0);
    // should. 
    Send PSend17681 = new_Send((Optr)PSend17680, SMB_should, 0);
    // beKindOf:. 
    Send PSend17682 = new_Send((Optr)PSend17681, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // predecessor. 
    Send PSend17683 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17684 = new_Send((Optr)PSend17683, SMB_origin, 0);
    // value. 
    Send PSend17685 = new_Send((Optr)PSend17684, SMB_value, 0);
    // should. 
    Send PSend17686 = new_Send((Optr)PSend17685, SMB_should, 0);
    // be:. 
    Send PSend17687 = new_Send((Optr)PSend17686, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17688 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17689 = new_Send((Optr)PSend17688, SMB_origin, 0);
    // origin. 
    Send PSend17690 = new_Send((Optr)PSend17689, SMB_origin, 0);
    // should. 
    Send PSend17691 = new_Send((Optr)PSend17690, SMB_should, 0);
    // beKindOf:. 
    Send PSend17692 = new_Send((Optr)PSend17691, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // predecessor. 
    Send PSend17693 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17694 = new_Send((Optr)PSend17693, SMB_origin, 0);
    // origin. 
    Send PSend17695 = new_Send((Optr)PSend17694, SMB_origin, 0);
    // value. 
    Send PSend17696 = new_Send((Optr)PSend17695, SMB_value, 0);
    // should. 
    Send PSend17697 = new_Send((Optr)PSend17696, SMB_should, 0);
    // be:. 
    Send PSend17698 = new_Send((Optr)PSend17697, SMB_be_, 1, (Optr)int_10_Const);
    // predecessor. 
    Send PSend17699 = new_Send((Optr)VAR_result_0_0, SMB_predecessor, 0);
    // origin. 
    Send PSend17700 = new_Send((Optr)PSend17699, SMB_origin, 0);
    // origin. 
    Send PSend17701 = new_Send((Optr)PSend17700, SMB_origin, 0);
    // origin. 
    Send PSend17702 = new_Send((Optr)PSend17701, SMB_origin, 0);
    // should. 
    Send PSend17703 = new_Send((Optr)PSend17702, SMB_should, 0);
    // be:. 
    Send PSend17704 = new_Send((Optr)PSend17703, SMB_be_, 1, (Optr)nil_Const);
    // origin. 
    Send PSend17706 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17705 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17706);
    // should. 
    Send PSend17707 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17708 = new_Send((Optr)PSend17707, SMB_beKindOf_, 1, (Optr)PParameterAlias_classReference);
    // value. 
    Send PSend17709 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17710 = new_Send((Optr)PSend17709, SMB_should, 0);
    // be:. 
    Send PSend17711 = new_Send((Optr)PSend17710, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17713 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    Assign PAssign17712 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend17713);
    // should. 
    Send PSend17714 = new_Send((Optr)VAR_result_0_0, SMB_should, 0);
    // beKindOf:. 
    Send PSend17715 = new_Send((Optr)PSend17714, SMB_beKindOf_, 1, (Optr)PLiteralAlias_classReference);
    // value. 
    Send PSend17716 = new_Send((Optr)VAR_result_0_0, SMB_value, 0);
    // should. 
    Send PSend17717 = new_Send((Optr)PSend17716, SMB_should, 0);
    // be:. 
    Send PSend17718 = new_Send((Optr)PSend17717, SMB_be_, 1, (Optr)int_20_Const);
    // origin. 
    Send PSend17719 = new_Send((Optr)VAR_result_0_0, SMB_origin, 0);
    // should. 
    Send PSend17720 = new_Send((Optr)PSend17719, SMB_should, 0);
    // be:. 
    Send PSend17721 = new_Send((Optr)PSend17720, SMB_be_, 1, (Optr)nil_Const);
    Array PThreadedCode17631 = instantiate_Array_with(ThreadedCode_Class, 0, 287, (Optr)&t_push1, (Optr)PAssign17632, (Optr)&t_push_class_reference, (Optr)PAliasInterpreter_classReference, (Optr)&t_push_closure, (Optr)PBlock17634, (Optr)&t_send1, (Optr)PSend17633, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17641, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_send1, (Optr)PSend17642, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17643, (Optr)&t_send0, (Optr)PSend17644, (Optr)&t_push_class_reference, (Optr)ChildClassTestClass_classReference, (Optr)&t_send1, (Optr)PSend17645, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17646, (Optr)&t_send0, (Optr)PSend17647, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_send1, (Optr)PSend17648, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17649, (Optr)&t_send0, (Optr)PSend17650, (Optr)&t_send0, (Optr)PSend17651, (Optr)&t_send0, (Optr)PSend17652, (Optr)&t_send0, (Optr)PSend17653, (Optr)&t_push1, (Optr)SMB_testFieldOverwrite, (Optr)&t_send1, (Optr)PSend17654, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17655, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17656, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17657, (Optr)&t_send0, (Optr)PSend17658, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17659, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17660, (Optr)&t_send0, (Optr)PSend17661, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17662, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17663, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17664, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17665, (Optr)&t_send0, (Optr)PSend17666, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17667, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17668, (Optr)&t_send0, (Optr)PSend17669, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_send1, (Optr)PSend17670, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17671, (Optr)&t_send0, (Optr)PSend17672, (Optr)&t_send0, (Optr)PSend17673, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17674, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17675, (Optr)&t_send0, (Optr)PSend17676, (Optr)&t_send0, (Optr)PSend17677, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send1, (Optr)PSend17678, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17679, (Optr)&t_send0, (Optr)PSend17680, (Optr)&t_send0, (Optr)PSend17681, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17682, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17683, (Optr)&t_send0, (Optr)PSend17684, (Optr)&t_send0, (Optr)PSend17685, (Optr)&t_send0, (Optr)PSend17686, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17687, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17688, (Optr)&t_send0, (Optr)PSend17689, (Optr)&t_send0, (Optr)PSend17690, (Optr)&t_send0, (Optr)PSend17691, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17692, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17693, (Optr)&t_send0, (Optr)PSend17694, (Optr)&t_send0, (Optr)PSend17695, (Optr)&t_send0, (Optr)PSend17696, (Optr)&t_send0, (Optr)PSend17697, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend17698, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17699, (Optr)&t_send0, (Optr)PSend17700, (Optr)&t_send0, (Optr)PSend17701, (Optr)&t_send0, (Optr)PSend17702, (Optr)&t_send0, (Optr)PSend17703, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17704, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17705, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17706, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17707, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_send1, (Optr)PSend17708, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17709, (Optr)&t_send0, (Optr)PSend17710, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17711, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17712, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17713, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17714, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send1, (Optr)PSend17715, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17716, (Optr)&t_send0, (Optr)PSend17717, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend17718, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send0, (Optr)PSend17719, (Optr)&t_send0, (Optr)PSend17720, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend17721, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17629 = new_Method_with(empty_Array, PArray17630, empty_Array, PThreadedCode17631, 26, PAssign17632, PSend17642, PSend17645, PSend17648, PSend17654, PAssign17655, PSend17659, PSend17662, PAssign17663, PSend17667, PSend17670, PSend17674, PSend17678, PSend17682, PSend17687, PSend17692, PSend17698, PSend17704, PAssign17705, PSend17708, PSend17711, PAssign17712, PSend17715, PSend17718, PSend17721, self);
    
    MethodClosure MC_SMB_testFieldOverwrite = new_MethodClosure((Method)PMethod17629, Interpretation_AliasInterpreterTest_Class);
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