#include <lib/class/PEG/StrongSequenceExpression.h>


Optr layout_PEG_StrongSequenceExpression_Class_class;
Optr layout_PEG_StrongSequenceExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19538 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19539 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19542 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19546 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19545 = new_Send((Optr)PSend19546, SMB_position, 0);
    Assign PAssign19544 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19545);
    // position. 
    Send PSend19548 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19547 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19548);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19549 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19550 = new_Send((Optr)PSend19549, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19554 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19553 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19554, (Optr)&t_block_return);
    Block PBlock19552 = new_Block_with(empty_Array, empty_Array, PThreadedCode19553, 1, PSend19554);
    // ifFalse:. 
    Send PSend19551 = new_Send((Optr)PSend19550, SMB_ifFalse_, 1, (Optr)PBlock19552);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19555 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19557 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19559 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19560 = new_Send((Optr)PSend19559, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19564 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19565 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19566 = new_Send((Optr)PSend19565, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19567 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19563 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19564, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19565, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19566, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19567, (Optr)&t_block_return);
    Block PBlock19562 = new_Block_with(empty_Array, empty_Array, PThreadedCode19563, 3, PSend19564, PSend19566, PSend19567);
    // ifFalse:. 
    Send PSend19561 = new_Send((Optr)PSend19560, SMB_ifFalse_, 1, (Optr)PBlock19562);
    Array PThreadedCode19558 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19559, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19560, (Optr)&t_send_ifFalse_, (Optr)PSend19561, (Optr)PBlock19562, (Optr)&t_method_return);
    Block PBlock19556 = new_Block_with(PArray19557, empty_Array, PThreadedCode19558, 1, PSend19561);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19568 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19555, (Optr)PBlock19556);
    Array PThreadedCode19543 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19544, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19546, (Optr)&t_send0, (Optr)PSend19545, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19547, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19548, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19549, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19550, (Optr)&t_send_ifFalse_, (Optr)PSend19551, (Optr)PBlock19552, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19555, (Optr)&t_push_closure, (Optr)PBlock19556, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19568, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19541 = new_Block_with(PArray19542, empty_Array, PThreadedCode19543, 5, PAssign19544, PAssign19547, PSend19551, PSend19568, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19569 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19541);
    Array PThreadedCode19540 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19541, (Optr)&t_send1, (Optr)PSend19569, (Optr)&t_method_return);
    Method PMethod19537 = new_Method_with(PArray19538, PArray19539, empty_Array, PThreadedCode19540, 1, PSend19569);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19537, PEG_StrongSequenceExpression_Class);
    store_method(PEG_StrongSequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19571 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19572 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19575 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19578 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19577 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19578);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19579 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19580 = new_Send((Optr)PSend19579, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19584 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19583 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19584, (Optr)&t_block_return);
    Block PBlock19582 = new_Block_with(empty_Array, empty_Array, PThreadedCode19583, 1, PSend19584);
    // ifFalse:. 
    Send PSend19581 = new_Send((Optr)PSend19580, SMB_ifFalse_, 1, (Optr)PBlock19582);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19585 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19587 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19589 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19590 = new_Send((Optr)PSend19589, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19594 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19595 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19593 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19594, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19595, (Optr)&t_block_return);
    Block PBlock19592 = new_Block_with(empty_Array, empty_Array, PThreadedCode19593, 2, PSend19594, PSend19595);
    // ifFalse:. 
    Send PSend19591 = new_Send((Optr)PSend19590, SMB_ifFalse_, 1, (Optr)PBlock19592);
    Array PThreadedCode19588 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19589, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19590, (Optr)&t_send_ifFalse_, (Optr)PSend19591, (Optr)PBlock19592, (Optr)&t_method_return);
    Block PBlock19586 = new_Block_with(PArray19587, empty_Array, PThreadedCode19588, 1, PSend19591);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19596 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19585, (Optr)PBlock19586);
    Array PThreadedCode19576 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19577, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19578, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19579, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19580, (Optr)&t_send_ifFalse_, (Optr)PSend19581, (Optr)PBlock19582, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19585, (Optr)&t_push_closure, (Optr)PBlock19586, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19596, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19574 = new_Block_with(PArray19575, empty_Array, PThreadedCode19576, 4, PAssign19577, PSend19581, PSend19596, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19597 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19574);
    Array PThreadedCode19573 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19574, (Optr)&t_send1, (Optr)PSend19597, (Optr)&t_method_return);
    Method PMethod19570 = new_Method_with(PArray19571, PArray19572, empty_Array, PThreadedCode19573, 1, PSend19597);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19570, PEG_StrongSequenceExpression_Class);
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