#include <lib/class/PEG/StrongSequenceExpression.h>


Optr layout_PEG_StrongSequenceExpression_Class_class;
Optr layout_PEG_StrongSequenceExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19738 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19739 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19742 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19746 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19745 = new_Send((Optr)PSend19746, SMB_position, 0);
    Assign PAssign19744 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19745);
    // position. 
    Send PSend19748 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19747 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19748);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19749 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19750 = new_Send((Optr)PSend19749, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19754 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19753 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19754, (Optr)&t_block_return);
    Block PBlock19752 = new_Block_with(empty_Array, empty_Array, PThreadedCode19753, 1, PSend19754);
    // ifFalse:. 
    Send PSend19751 = new_Send((Optr)PSend19750, SMB_ifFalse_, 1, (Optr)PBlock19752);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19755 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19757 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19759 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19760 = new_Send((Optr)PSend19759, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19764 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19765 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19766 = new_Send((Optr)PSend19765, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19767 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19763 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19764, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19765, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19766, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19767, (Optr)&t_block_return);
    Block PBlock19762 = new_Block_with(empty_Array, empty_Array, PThreadedCode19763, 3, PSend19764, PSend19766, PSend19767);
    // ifFalse:. 
    Send PSend19761 = new_Send((Optr)PSend19760, SMB_ifFalse_, 1, (Optr)PBlock19762);
    Array PThreadedCode19758 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19759, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19760, (Optr)&t_send_ifFalse_, (Optr)PSend19761, (Optr)PBlock19762, (Optr)&t_method_return);
    Block PBlock19756 = new_Block_with(PArray19757, empty_Array, PThreadedCode19758, 1, PSend19761);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19768 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19755, (Optr)PBlock19756);
    Array PThreadedCode19743 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19744, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19746, (Optr)&t_send0, (Optr)PSend19745, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19747, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19748, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19749, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19750, (Optr)&t_send_ifFalse_, (Optr)PSend19751, (Optr)PBlock19752, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19755, (Optr)&t_push_closure, (Optr)PBlock19756, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19768, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19741 = new_Block_with(PArray19742, empty_Array, PThreadedCode19743, 5, PAssign19744, PAssign19747, PSend19751, PSend19768, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19769 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19741);
    Array PThreadedCode19740 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19741, (Optr)&t_send1, (Optr)PSend19769, (Optr)&t_method_return);
    Method PMethod19737 = new_Method_with(PArray19738, PArray19739, empty_Array, PThreadedCode19740, 1, PSend19769);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19737, PEG_StrongSequenceExpression_Class);
    store_method(PEG_StrongSequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19771 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19772 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19775 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19778 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19777 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19778);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19779 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19780 = new_Send((Optr)PSend19779, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19784 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19783 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19784, (Optr)&t_block_return);
    Block PBlock19782 = new_Block_with(empty_Array, empty_Array, PThreadedCode19783, 1, PSend19784);
    // ifFalse:. 
    Send PSend19781 = new_Send((Optr)PSend19780, SMB_ifFalse_, 1, (Optr)PBlock19782);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19785 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19787 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19789 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19790 = new_Send((Optr)PSend19789, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19794 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19795 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19793 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19794, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19795, (Optr)&t_block_return);
    Block PBlock19792 = new_Block_with(empty_Array, empty_Array, PThreadedCode19793, 2, PSend19794, PSend19795);
    // ifFalse:. 
    Send PSend19791 = new_Send((Optr)PSend19790, SMB_ifFalse_, 1, (Optr)PBlock19792);
    Array PThreadedCode19788 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19789, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19790, (Optr)&t_send_ifFalse_, (Optr)PSend19791, (Optr)PBlock19792, (Optr)&t_method_return);
    Block PBlock19786 = new_Block_with(PArray19787, empty_Array, PThreadedCode19788, 1, PSend19791);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19796 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19785, (Optr)PBlock19786);
    Array PThreadedCode19776 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19777, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19778, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19779, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19780, (Optr)&t_send_ifFalse_, (Optr)PSend19781, (Optr)PBlock19782, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19785, (Optr)&t_push_closure, (Optr)PBlock19786, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19796, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19774 = new_Block_with(PArray19775, empty_Array, PThreadedCode19776, 4, PAssign19777, PSend19781, PSend19796, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19797 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19774);
    Array PThreadedCode19773 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19774, (Optr)&t_send1, (Optr)PSend19797, (Optr)&t_method_return);
    Method PMethod19770 = new_Method_with(PArray19771, PArray19772, empty_Array, PThreadedCode19773, 1, PSend19797);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19770, PEG_StrongSequenceExpression_Class);
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