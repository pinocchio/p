#include <lib/class/PEG/StrongSequenceExpression.h>


Optr layout_PEG_StrongSequenceExpression_Class_class;
Optr layout_PEG_StrongSequenceExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19574 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19575 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19578 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19582 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19581 = new_Send((Optr)PSend19582, SMB_position, 0);
    Assign PAssign19580 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19581);
    // position. 
    Send PSend19584 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19583 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19584);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19585 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19586 = new_Send((Optr)PSend19585, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19590 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19589 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19590, (Optr)&t_block_return);
    Block PBlock19588 = new_Block_with(empty_Array, empty_Array, PThreadedCode19589, 1, PSend19590);
    // ifFalse:. 
    Send PSend19587 = new_Send((Optr)PSend19586, SMB_ifFalse_, 1, (Optr)PBlock19588);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19591 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19593 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19595 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19596 = new_Send((Optr)PSend19595, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19600 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19601 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19602 = new_Send((Optr)PSend19601, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19603 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19599 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19600, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19601, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19602, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19603, (Optr)&t_block_return);
    Block PBlock19598 = new_Block_with(empty_Array, empty_Array, PThreadedCode19599, 3, PSend19600, PSend19602, PSend19603);
    // ifFalse:. 
    Send PSend19597 = new_Send((Optr)PSend19596, SMB_ifFalse_, 1, (Optr)PBlock19598);
    Array PThreadedCode19594 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19595, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19596, (Optr)&t_send_ifFalse_, (Optr)PSend19597, (Optr)PBlock19598, (Optr)&t_method_return);
    Block PBlock19592 = new_Block_with(PArray19593, empty_Array, PThreadedCode19594, 1, PSend19597);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19604 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19591, (Optr)PBlock19592);
    Array PThreadedCode19579 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19580, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19582, (Optr)&t_send0, (Optr)PSend19581, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19583, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19584, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19585, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19586, (Optr)&t_send_ifFalse_, (Optr)PSend19587, (Optr)PBlock19588, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19591, (Optr)&t_push_closure, (Optr)PBlock19592, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19604, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19577 = new_Block_with(PArray19578, empty_Array, PThreadedCode19579, 5, PAssign19580, PAssign19583, PSend19587, PSend19604, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19605 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19577);
    Array PThreadedCode19576 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19577, (Optr)&t_send1, (Optr)PSend19605, (Optr)&t_method_return);
    Method PMethod19573 = new_Method_with(PArray19574, PArray19575, empty_Array, PThreadedCode19576, 1, PSend19605);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19573, PEG_StrongSequenceExpression_Class);
    store_method(PEG_StrongSequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19607 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19608 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19611 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19614 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19613 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19614);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19615 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19616 = new_Send((Optr)PSend19615, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19620 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19619 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19620, (Optr)&t_block_return);
    Block PBlock19618 = new_Block_with(empty_Array, empty_Array, PThreadedCode19619, 1, PSend19620);
    // ifFalse:. 
    Send PSend19617 = new_Send((Optr)PSend19616, SMB_ifFalse_, 1, (Optr)PBlock19618);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19621 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19623 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19625 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19626 = new_Send((Optr)PSend19625, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19630 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19631 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19629 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19630, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19631, (Optr)&t_block_return);
    Block PBlock19628 = new_Block_with(empty_Array, empty_Array, PThreadedCode19629, 2, PSend19630, PSend19631);
    // ifFalse:. 
    Send PSend19627 = new_Send((Optr)PSend19626, SMB_ifFalse_, 1, (Optr)PBlock19628);
    Array PThreadedCode19624 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19625, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19626, (Optr)&t_send_ifFalse_, (Optr)PSend19627, (Optr)PBlock19628, (Optr)&t_method_return);
    Block PBlock19622 = new_Block_with(PArray19623, empty_Array, PThreadedCode19624, 1, PSend19627);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19632 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19621, (Optr)PBlock19622);
    Array PThreadedCode19612 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19613, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19614, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19615, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19616, (Optr)&t_send_ifFalse_, (Optr)PSend19617, (Optr)PBlock19618, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19621, (Optr)&t_push_closure, (Optr)PBlock19622, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19632, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19610 = new_Block_with(PArray19611, empty_Array, PThreadedCode19612, 4, PAssign19613, PSend19617, PSend19632, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19633 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19610);
    Array PThreadedCode19609 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19610, (Optr)&t_send1, (Optr)PSend19633, (Optr)&t_method_return);
    Method PMethod19606 = new_Method_with(PArray19607, PArray19608, empty_Array, PThreadedCode19609, 1, PSend19633);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19606, PEG_StrongSequenceExpression_Class);
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