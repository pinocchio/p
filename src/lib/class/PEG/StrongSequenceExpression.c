#include <lib/class/PEG/StrongSequenceExpression.h>


Optr layout_PEG_StrongSequenceExpression_Class_class;
Optr layout_PEG_StrongSequenceExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19549 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19550 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19553 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19557 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19556 = new_Send((Optr)PSend19557, SMB_position, 0);
    Assign PAssign19555 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19556);
    // position. 
    Send PSend19559 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19558 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19559);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19560 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19561 = new_Send((Optr)PSend19560, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19565 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19564 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19565, (Optr)&t_block_return);
    Block PBlock19563 = new_Block_with(empty_Array, empty_Array, PThreadedCode19564, 1, PSend19565);
    // ifFalse:. 
    Send PSend19562 = new_Send((Optr)PSend19561, SMB_ifFalse_, 1, (Optr)PBlock19563);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19566 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19568 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19570 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19571 = new_Send((Optr)PSend19570, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19575 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19576 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19577 = new_Send((Optr)PSend19576, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19578 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19574 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19575, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19576, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19577, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19578, (Optr)&t_block_return);
    Block PBlock19573 = new_Block_with(empty_Array, empty_Array, PThreadedCode19574, 3, PSend19575, PSend19577, PSend19578);
    // ifFalse:. 
    Send PSend19572 = new_Send((Optr)PSend19571, SMB_ifFalse_, 1, (Optr)PBlock19573);
    Array PThreadedCode19569 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19570, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19571, (Optr)&t_send_ifFalse_, (Optr)PSend19572, (Optr)PBlock19573, (Optr)&t_method_return);
    Block PBlock19567 = new_Block_with(PArray19568, empty_Array, PThreadedCode19569, 1, PSend19572);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19579 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19566, (Optr)PBlock19567);
    Array PThreadedCode19554 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19555, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19557, (Optr)&t_send0, (Optr)PSend19556, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19558, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19559, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19560, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19561, (Optr)&t_send_ifFalse_, (Optr)PSend19562, (Optr)PBlock19563, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19566, (Optr)&t_push_closure, (Optr)PBlock19567, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19579, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19552 = new_Block_with(PArray19553, empty_Array, PThreadedCode19554, 5, PAssign19555, PAssign19558, PSend19562, PSend19579, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19580 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19552);
    Array PThreadedCode19551 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19552, (Optr)&t_send1, (Optr)PSend19580, (Optr)&t_method_return);
    Method PMethod19548 = new_Method_with(PArray19549, PArray19550, empty_Array, PThreadedCode19551, 1, PSend19580);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19548, PEG_StrongSequenceExpression_Class);
    store_method(PEG_StrongSequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19582 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19583 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19586 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19589 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19588 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19589);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19590 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19591 = new_Send((Optr)PSend19590, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19595 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19594 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19595, (Optr)&t_block_return);
    Block PBlock19593 = new_Block_with(empty_Array, empty_Array, PThreadedCode19594, 1, PSend19595);
    // ifFalse:. 
    Send PSend19592 = new_Send((Optr)PSend19591, SMB_ifFalse_, 1, (Optr)PBlock19593);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19596 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19598 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19600 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19601 = new_Send((Optr)PSend19600, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19605 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19606 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19604 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19605, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19606, (Optr)&t_block_return);
    Block PBlock19603 = new_Block_with(empty_Array, empty_Array, PThreadedCode19604, 2, PSend19605, PSend19606);
    // ifFalse:. 
    Send PSend19602 = new_Send((Optr)PSend19601, SMB_ifFalse_, 1, (Optr)PBlock19603);
    Array PThreadedCode19599 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19600, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19601, (Optr)&t_send_ifFalse_, (Optr)PSend19602, (Optr)PBlock19603, (Optr)&t_method_return);
    Block PBlock19597 = new_Block_with(PArray19598, empty_Array, PThreadedCode19599, 1, PSend19602);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19607 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19596, (Optr)PBlock19597);
    Array PThreadedCode19587 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19588, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19589, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19590, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19591, (Optr)&t_send_ifFalse_, (Optr)PSend19592, (Optr)PBlock19593, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19596, (Optr)&t_push_closure, (Optr)PBlock19597, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19607, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19585 = new_Block_with(PArray19586, empty_Array, PThreadedCode19587, 4, PAssign19588, PSend19592, PSend19607, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19608 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19585);
    Array PThreadedCode19584 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19585, (Optr)&t_send1, (Optr)PSend19608, (Optr)&t_method_return);
    Method PMethod19581 = new_Method_with(PArray19582, PArray19583, empty_Array, PThreadedCode19584, 1, PSend19608);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19581, PEG_StrongSequenceExpression_Class);
    store_method(PEG_StrongSequenceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGStrongSequenceExpression_layout() {
    layout_PEG_StrongSequenceExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_StrongSequenceExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_StrongSequenceExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_StrongSequenceExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_StrongSequenceExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_StrongSequenceExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_StrongSequenceExpression = new_Symbol(L"StrongSequenceExpression");
    layout_PEG_StrongSequenceExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_StrongSequenceExpression)->values[0] = slot_PEG_SequenceExpression_children; // children 
    PEG_StrongSequenceExpression_Class = (Class)new_Class(PEG_SequenceExpression_Class, layout_PEG_StrongSequenceExpression_Class_class);
    PEG_StrongSequenceExpression_Class->layout = layout_PEG_StrongSequenceExpression;
    PEG_StrongSequenceExpression_Class->name = SMB_StrongSequenceExpression;
    
}

void init_PEG_PEGStrongSequenceExpression_methods() {
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}