#include <lib/class/PEG/SequenceExpression.h>


Optr layout_PEG_SequenceExpression_Class_class;
Optr slot_PEG_SequenceExpression_children;
Optr layout_PEG_SequenceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19478 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_method_return);
    Method PMethod19477 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19478, 1, slot_PEG_SequenceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19477, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19482 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_asArray, 0);
    Assign PAssign19481 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19482);
    Array PThreadedCode19480 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19481, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19482, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19479 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19480, 2, PAssign19481, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19479, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19486 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19485 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19486);
    Array PThreadedCode19484 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19485, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19486, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19483 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19484, 2, PAssign19485, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19483, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__lt__and_() {
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19488 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Array PArray19489 = new_Array_with(1, (Optr)VAR_new_0_1);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19492 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19491 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19492);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19493 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19494 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19495 = new_Send((Optr)PSend19493, SMB__equals_, 1, (Optr)PSend19494);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19499 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19501 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19503 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19504 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19503);
    Array PThreadedCode19502 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19503, (Optr)&t_send1, (Optr)PSend19504, (Optr)&t_method_return);
    Block PBlock19500 = new_Block_with(PArray19501, empty_Array, PThreadedCode19502, 1, PSend19504);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19505 = new_Send((Optr)PSend19499, SMB_do_, 1, (Optr)PBlock19500);
    Array PThreadedCode19498 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19499, (Optr)&t_push_closure, (Optr)PBlock19500, (Optr)&t_send1, (Optr)PSend19505, (Optr)&t_block_return);
    Block PBlock19497 = new_Block_with(empty_Array, empty_Array, PThreadedCode19498, 1, PSend19505);
    // asChildParser. 
    Send PSend19508 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19509 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19508);
    Array PThreadedCode19507 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19508, (Optr)&t_send1, (Optr)PSend19509, (Optr)&t_block_return);
    Block PBlock19506 = new_Block_with(empty_Array, empty_Array, PThreadedCode19507, 1, PSend19509);
    // ifTrue:ifFalse:. 
    Send PSend19496 = new_Send((Optr)PSend19495, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19497, (Optr)PBlock19506);
    Array PThreadedCode19490 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign19491, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19492, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19493, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19494, (Optr)&t_send1, (Optr)PSend19495, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19496, (Optr)PBlock19497, (Optr)PBlock19506, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19487 = new_Method_with(PArray19488, PArray19489, empty_Array, PThreadedCode19490, 3, PAssign19491, PSend19496, self);
    
    MethodClosure MC_SMB__lt__and_ = new_MethodClosure((Method)PMethod19487, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB__lt__and_, MC_SMB__lt__and_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19511 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19512 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19515 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19518 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19517 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19518);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19521 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // position. 
    Send PSend19520 = new_Send((Optr)PSend19521, SMB_position, 0);
    Assign PAssign19519 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19520);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19522 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19523 = new_Send((Optr)PSend19522, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19527 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19526 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19527, (Optr)&t_block_return);
    Block PBlock19525 = new_Block_with(empty_Array, empty_Array, PThreadedCode19526, 1, PSend19527);
    // ifFalse:. 
    Send PSend19524 = new_Send((Optr)PSend19523, SMB_ifFalse_, 1, (Optr)PBlock19525);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19528 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19530 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19532 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19533 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19534 = new_Send((Optr)PSend19533, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19538 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19539 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19540 = new_Send((Optr)PSend19539, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19541 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19537 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19538, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19539, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19540, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19541, (Optr)&t_block_return);
    Block PBlock19536 = new_Block_with(empty_Array, empty_Array, PThreadedCode19537, 3, PSend19538, PSend19540, PSend19541);
    // ifFalse:. 
    Send PSend19535 = new_Send((Optr)PSend19534, SMB_ifFalse_, 1, (Optr)PBlock19536);
    Array PThreadedCode19531 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19532, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19533, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19534, (Optr)&t_send_ifFalse_, (Optr)PSend19535, (Optr)PBlock19536, (Optr)&t_method_return);
    Block PBlock19529 = new_Block_with(PArray19530, empty_Array, PThreadedCode19531, 2, PSend19532, PSend19535);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19542 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19528, (Optr)PBlock19529);
    Array PThreadedCode19516 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19517, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19518, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19519, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19521, (Optr)&t_send0, (Optr)PSend19520, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19522, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19523, (Optr)&t_send_ifFalse_, (Optr)PSend19524, (Optr)PBlock19525, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19528, (Optr)&t_push_closure, (Optr)PBlock19529, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19542, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19514 = new_Block_with(PArray19515, empty_Array, PThreadedCode19516, 5, PAssign19517, PAssign19519, PSend19524, PSend19542, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19543 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19514);
    Array PThreadedCode19513 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19514, (Optr)&t_send1, (Optr)PSend19543, (Optr)&t_method_return);
    Method PMethod19510 = new_Method_with(PArray19511, PArray19512, empty_Array, PThreadedCode19513, 1, PSend19543);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19510, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19545 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19546 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19549 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19552 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19551 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19552);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19553 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19554 = new_Send((Optr)PSend19553, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19558 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19557 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19558, (Optr)&t_block_return);
    Block PBlock19556 = new_Block_with(empty_Array, empty_Array, PThreadedCode19557, 1, PSend19558);
    // ifFalse:. 
    Send PSend19555 = new_Send((Optr)PSend19554, SMB_ifFalse_, 1, (Optr)PBlock19556);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19559 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19561 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19563 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19564 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19565 = new_Send((Optr)PSend19564, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19569 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19570 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19568 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19569, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19570, (Optr)&t_block_return);
    Block PBlock19567 = new_Block_with(empty_Array, empty_Array, PThreadedCode19568, 2, PSend19569, PSend19570);
    // ifFalse:. 
    Send PSend19566 = new_Send((Optr)PSend19565, SMB_ifFalse_, 1, (Optr)PBlock19567);
    Array PThreadedCode19562 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19563, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19564, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19565, (Optr)&t_send_ifFalse_, (Optr)PSend19566, (Optr)PBlock19567, (Optr)&t_method_return);
    Block PBlock19560 = new_Block_with(PArray19561, empty_Array, PThreadedCode19562, 2, PSend19563, PSend19566);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19571 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19559, (Optr)PBlock19560);
    Array PThreadedCode19550 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19551, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19552, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19553, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19554, (Optr)&t_send_ifFalse_, (Optr)PSend19555, (Optr)PBlock19556, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19559, (Optr)&t_push_closure, (Optr)PBlock19560, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19571, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19548 = new_Block_with(PArray19549, empty_Array, PThreadedCode19550, 4, PAssign19551, PSend19555, PSend19571, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19572 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19548);
    Array PThreadedCode19547 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19548, (Optr)&t_send1, (Optr)PSend19572, (Optr)&t_method_return);
    Method PMethod19544 = new_Method_with(PArray19545, PArray19546, empty_Array, PThreadedCode19547, 1, PSend19572);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19544, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGSequenceExpression_layout() {
    layout_PEG_SequenceExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_SequenceExpression = new_Symbol(L"SequenceExpression");
    slot_PEG_SequenceExpression_children = (Optr)new_Slot(0, L"children");
    layout_PEG_SequenceExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_SequenceExpression)->values[0] = slot_PEG_SequenceExpression_children; // children 
    PEG_SequenceExpression_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_SequenceExpression_Class_class);
    PEG_SequenceExpression_Class->layout = layout_PEG_SequenceExpression;
    PEG_SequenceExpression_Class->name = SMB_SequenceExpression;
    
}

void init_PEG_PEGSequenceExpression_methods() {
    init_SMB_children();
    init_SMB_asChildParser();
    init_SMB_initialize();
    init_SMB__lt__and_();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}