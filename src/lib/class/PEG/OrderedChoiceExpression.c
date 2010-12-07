#include <lib/class/PEG/OrderedChoiceExpression.h>


Optr layout_PEG_OrderedChoiceExpression_Class_class;
Optr slot_PEG_OrderedChoiceExpression_children;
Optr layout_PEG_OrderedChoiceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
<<<<<<< HEAD
    Array PThreadedCode19529 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_method_return);
    Method PMethod19528 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19529, 1, slot_PEG_OrderedChoiceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19528, PEG_OrderedChoiceExpression_Class);
=======
    Array PThreadedCode19495 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_method_return);
    Method PMethod19494 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19495, 1, slot_PEG_OrderedChoiceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19494, PEG_OrderedChoiceExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_OrderedChoiceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
<<<<<<< HEAD
    Send PSend19533 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19532 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19533);
    Array PThreadedCode19531 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19532, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19533, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19530 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19531, 2, PAssign19532, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19530, PEG_OrderedChoiceExpression_Class);
=======
    Send PSend19499 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19498 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19499);
    Array PThreadedCode19497 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19498, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19499, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19496 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19497, 2, PAssign19498, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19496, PEG_OrderedChoiceExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_OrderedChoiceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
<<<<<<< HEAD
    Send PSend19537 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19536 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19537);
    Array PThreadedCode19535 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19536, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19537, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19534 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19535, 2, PAssign19536, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19534, PEG_OrderedChoiceExpression_Class);
=======
    Send PSend19503 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19502 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19503);
    Array PThreadedCode19501 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19502, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19503, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19500 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19501, 2, PAssign19502, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19500, PEG_OrderedChoiceExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_OrderedChoiceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
<<<<<<< HEAD
    Array PArray19539 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19542 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19544 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19546 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19548 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19549 = new_Send((Optr)PSend19548, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19553 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19552 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19553, (Optr)&t_block_return);
    Block PBlock19551 = new_Block_with(empty_Array, empty_Array, PThreadedCode19552, 1, PSend19553);
    // ifTrue:. 
    Send PSend19550 = new_Send((Optr)PSend19549, SMB_ifTrue_, 1, (Optr)PBlock19551);
    Array PThreadedCode19547 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19548, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19549, (Optr)&t_send_ifTrue_, (Optr)PSend19550, (Optr)PBlock19551, (Optr)&t_method_return);
    Block PBlock19545 = new_Block_with(PArray19546, empty_Array, PThreadedCode19547, 1, PSend19550);
=======
    Array PArray19505 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19508 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19510 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19512 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19514 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19515 = new_Send((Optr)PSend19514, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19519 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19518 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19519, (Optr)&t_block_return);
    Block PBlock19517 = new_Block_with(empty_Array, empty_Array, PThreadedCode19518, 1, PSend19519);
    // ifTrue:. 
    Send PSend19516 = new_Send((Optr)PSend19515, SMB_ifTrue_, 1, (Optr)PBlock19517);
    Array PThreadedCode19513 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19514, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19515, (Optr)&t_send_ifTrue_, (Optr)PSend19516, (Optr)PBlock19517, (Optr)&t_method_return);
    Block PBlock19511 = new_Block_with(PArray19512, empty_Array, PThreadedCode19513, 1, PSend19516);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend19554 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19544, (Optr)PBlock19545);
    Array PThreadedCode19543 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19544, (Optr)&t_push_closure, (Optr)PBlock19545, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19554, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19541 = new_Block_with(PArray19542, empty_Array, PThreadedCode19543, 2, PSend19554, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19555 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19541);
    Array PThreadedCode19540 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19541, (Optr)&t_send1, (Optr)PSend19555, (Optr)&t_method_return);
    Method PMethod19538 = new_Method_with(PArray19539, empty_Array, empty_Array, PThreadedCode19540, 1, PSend19555);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19538, PEG_OrderedChoiceExpression_Class);
=======
    Send PSend19520 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19510, (Optr)PBlock19511);
    Array PThreadedCode19509 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19510, (Optr)&t_push_closure, (Optr)PBlock19511, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19520, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19507 = new_Block_with(PArray19508, empty_Array, PThreadedCode19509, 2, PSend19520, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19521 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19507);
    Array PThreadedCode19506 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19507, (Optr)&t_send1, (Optr)PSend19521, (Optr)&t_method_return);
    Method PMethod19504 = new_Method_with(PArray19505, empty_Array, empty_Array, PThreadedCode19506, 1, PSend19521);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19504, PEG_OrderedChoiceExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_OrderedChoiceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
<<<<<<< HEAD
    Array PArray19557 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19560 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19562 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19564 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19566 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19567 = new_Send((Optr)PSend19566, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19571 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19570 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19571, (Optr)&t_block_return);
    Block PBlock19569 = new_Block_with(empty_Array, empty_Array, PThreadedCode19570, 1, PSend19571);
    // ifTrue:. 
    Send PSend19568 = new_Send((Optr)PSend19567, SMB_ifTrue_, 1, (Optr)PBlock19569);
    Array PThreadedCode19565 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19566, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19567, (Optr)&t_send_ifTrue_, (Optr)PSend19568, (Optr)PBlock19569, (Optr)&t_method_return);
    Block PBlock19563 = new_Block_with(PArray19564, empty_Array, PThreadedCode19565, 1, PSend19568);
=======
    Array PArray19523 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19526 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19528 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19530 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19532 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19533 = new_Send((Optr)PSend19532, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19537 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19536 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19537, (Optr)&t_block_return);
    Block PBlock19535 = new_Block_with(empty_Array, empty_Array, PThreadedCode19536, 1, PSend19537);
    // ifTrue:. 
    Send PSend19534 = new_Send((Optr)PSend19533, SMB_ifTrue_, 1, (Optr)PBlock19535);
    Array PThreadedCode19531 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19532, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19533, (Optr)&t_send_ifTrue_, (Optr)PSend19534, (Optr)PBlock19535, (Optr)&t_method_return);
    Block PBlock19529 = new_Block_with(PArray19530, empty_Array, PThreadedCode19531, 1, PSend19534);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend19572 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19562, (Optr)PBlock19563);
    Array PThreadedCode19561 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19562, (Optr)&t_push_closure, (Optr)PBlock19563, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19572, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19559 = new_Block_with(PArray19560, empty_Array, PThreadedCode19561, 2, PSend19572, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19573 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19559);
    Array PThreadedCode19558 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19559, (Optr)&t_send1, (Optr)PSend19573, (Optr)&t_method_return);
    Method PMethod19556 = new_Method_with(PArray19557, empty_Array, empty_Array, PThreadedCode19558, 1, PSend19573);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19556, PEG_OrderedChoiceExpression_Class);
=======
    Send PSend19538 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19528, (Optr)PBlock19529);
    Array PThreadedCode19527 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19528, (Optr)&t_push_closure, (Optr)PBlock19529, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19538, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19525 = new_Block_with(PArray19526, empty_Array, PThreadedCode19527, 2, PSend19538, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19539 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19525);
    Array PThreadedCode19524 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19525, (Optr)&t_send1, (Optr)PSend19539, (Optr)&t_method_return);
    Method PMethod19522 = new_Method_with(PArray19523, empty_Array, empty_Array, PThreadedCode19524, 1, PSend19539);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19522, PEG_OrderedChoiceExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_OrderedChoiceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
<<<<<<< HEAD
    Array PArray19575 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Variable VAR_convert_0_2 = new_Variable_named(L"convert", 0);
    Array PArray19576 = new_Array_with(2, (Optr)VAR_new_0_1, (Optr)VAR_convert_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend19578 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_isKindOf_, 1, (Optr)Array_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend19583 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asOrderedCollection, 0);
    Assign PAssign19582 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19583);
    Assign PAssign19584 = new_Assign((Optr)VAR_convert_0_2, (Optr)true_Const);
    Array PThreadedCode19581 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign19582, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19583, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19584, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19580 = new_Block_with(empty_Array, empty_Array, PThreadedCode19581, 2, PAssign19582, PAssign19584);
    // ifTrue:. 
    Send PSend19579 = new_Send((Optr)PSend19578, SMB_ifTrue_, 1, (Optr)PBlock19580);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19586 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19585 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19586);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19587 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19588 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19589 = new_Send((Optr)PSend19587, SMB__equals_, 1, (Optr)PSend19588);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19593 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19595 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19597 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19598 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19597);
    Array PThreadedCode19596 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19597, (Optr)&t_send1, (Optr)PSend19598, (Optr)&t_method_return);
    Block PBlock19594 = new_Block_with(PArray19595, empty_Array, PThreadedCode19596, 1, PSend19598);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19599 = new_Send((Optr)PSend19593, SMB_do_, 1, (Optr)PBlock19594);
    Array PThreadedCode19592 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19593, (Optr)&t_push_closure, (Optr)PBlock19594, (Optr)&t_send1, (Optr)PSend19599, (Optr)&t_block_return);
    Block PBlock19591 = new_Block_with(empty_Array, empty_Array, PThreadedCode19592, 1, PSend19599);
    // asChildParser. 
    Send PSend19602 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19603 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19602);
    Array PThreadedCode19601 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19602, (Optr)&t_send1, (Optr)PSend19603, (Optr)&t_block_return);
    Block PBlock19600 = new_Block_with(empty_Array, empty_Array, PThreadedCode19601, 1, PSend19603);
    // ifTrue:ifFalse:. 
    Send PSend19590 = new_Send((Optr)PSend19589, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19591, (Optr)PBlock19600);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19604 = new_Send((Optr)VAR_convert_0_2, SMB_isNil, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19609 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19608 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19609);
    Array PThreadedCode19607 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign19608, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19609, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19606 = new_Block_with(empty_Array, empty_Array, PThreadedCode19607, 1, PAssign19608);
    // ifFalse:. 
    Send PSend19605 = new_Send((Optr)PSend19604, SMB_ifFalse_, 1, (Optr)PBlock19606);
    Array PThreadedCode19577 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send1, (Optr)PSend19578, (Optr)&t_send_ifTrue_, (Optr)PSend19579, (Optr)PBlock19580, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19585, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19586, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19587, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19588, (Optr)&t_send1, (Optr)PSend19589, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19590, (Optr)PBlock19591, (Optr)PBlock19600, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_convert_0_2, (Optr)&t_send0, (Optr)PSend19604, (Optr)&t_send_ifFalse_, (Optr)PSend19605, (Optr)PBlock19606, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19574 = new_Method_with(PArray19575, PArray19576, empty_Array, PThreadedCode19577, 5, PSend19579, PAssign19585, PSend19590, PSend19605, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19574, PEG_OrderedChoiceExpression_Class);
=======
    Array PArray19541 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Variable VAR_convert_0_2 = new_Variable_named(L"convert", 0);
    Array PArray19542 = new_Array_with(2, (Optr)VAR_new_0_1, (Optr)VAR_convert_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend19544 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_isKindOf_, 1, (Optr)Array_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend19549 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asOrderedCollection, 0);
    Assign PAssign19548 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19549);
    Assign PAssign19550 = new_Assign((Optr)VAR_convert_0_2, (Optr)true_Const);
    Array PThreadedCode19547 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign19548, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19549, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19550, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19546 = new_Block_with(empty_Array, empty_Array, PThreadedCode19547, 2, PAssign19548, PAssign19550);
    // ifTrue:. 
    Send PSend19545 = new_Send((Optr)PSend19544, SMB_ifTrue_, 1, (Optr)PBlock19546);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19552 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19551 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19552);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19553 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19554 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19555 = new_Send((Optr)PSend19553, SMB__equals_, 1, (Optr)PSend19554);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19559 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19561 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19563 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19564 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19563);
    Array PThreadedCode19562 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19563, (Optr)&t_send1, (Optr)PSend19564, (Optr)&t_method_return);
    Block PBlock19560 = new_Block_with(PArray19561, empty_Array, PThreadedCode19562, 1, PSend19564);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19565 = new_Send((Optr)PSend19559, SMB_do_, 1, (Optr)PBlock19560);
    Array PThreadedCode19558 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19559, (Optr)&t_push_closure, (Optr)PBlock19560, (Optr)&t_send1, (Optr)PSend19565, (Optr)&t_block_return);
    Block PBlock19557 = new_Block_with(empty_Array, empty_Array, PThreadedCode19558, 1, PSend19565);
    // asChildParser. 
    Send PSend19568 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19569 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19568);
    Array PThreadedCode19567 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19568, (Optr)&t_send1, (Optr)PSend19569, (Optr)&t_block_return);
    Block PBlock19566 = new_Block_with(empty_Array, empty_Array, PThreadedCode19567, 1, PSend19569);
    // ifTrue:ifFalse:. 
    Send PSend19556 = new_Send((Optr)PSend19555, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19557, (Optr)PBlock19566);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19570 = new_Send((Optr)VAR_convert_0_2, SMB_isNil, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19575 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19574 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19575);
    Array PThreadedCode19573 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign19574, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19575, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19572 = new_Block_with(empty_Array, empty_Array, PThreadedCode19573, 1, PAssign19574);
    // ifFalse:. 
    Send PSend19571 = new_Send((Optr)PSend19570, SMB_ifFalse_, 1, (Optr)PBlock19572);
    Array PThreadedCode19543 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send1, (Optr)PSend19544, (Optr)&t_send_ifTrue_, (Optr)PSend19545, (Optr)PBlock19546, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19551, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19552, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19553, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19554, (Optr)&t_send1, (Optr)PSend19555, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19556, (Optr)PBlock19557, (Optr)PBlock19566, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_convert_0_2, (Optr)&t_send0, (Optr)PSend19570, (Optr)&t_send_ifFalse_, (Optr)PSend19571, (Optr)PBlock19572, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19540 = new_Method_with(PArray19541, PArray19542, empty_Array, PThreadedCode19543, 5, PSend19545, PAssign19551, PSend19556, PSend19571, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19540, PEG_OrderedChoiceExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_OrderedChoiceExpression_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}

void init_PEG_PEGOrderedChoiceExpression_layout() {
    layout_PEG_OrderedChoiceExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_OrderedChoiceExpression = new_Symbol(L"OrderedChoiceExpression");
    slot_PEG_OrderedChoiceExpression_children = (Optr)new_Slot(0, L"children");
    layout_PEG_OrderedChoiceExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_OrderedChoiceExpression)->values[0] = slot_PEG_OrderedChoiceExpression_children; // children 
    PEG_OrderedChoiceExpression_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_OrderedChoiceExpression_Class_class);
    PEG_OrderedChoiceExpression_Class->layout = layout_PEG_OrderedChoiceExpression;
    PEG_OrderedChoiceExpression_Class->name = SMB_OrderedChoiceExpression;
    
}

void init_PEG_PEGOrderedChoiceExpression_methods() {
    init_SMB_children();
    init_SMB_asChildParser();
    init_SMB_initialize();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_SMB__lt__equals_();
    
}