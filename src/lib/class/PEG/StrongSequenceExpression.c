#include <lib/class/PEG/StrongSequenceExpression.h>


Optr layout_PEG_StrongSequenceExpression_Class_class;
Optr layout_PEG_StrongSequenceExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19736 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19737 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19740 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19744 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19743 = new_Send((Optr)PSend19744, SMB_position, 0);
    Assign PAssign19742 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19743);
    // position. 
    Send PSend19746 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19745 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19746);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19747 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19748 = new_Send((Optr)PSend19747, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19752 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19751 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19752, (Optr)&t_block_return);
    Block PBlock19750 = new_Block_with(empty_Array, empty_Array, PThreadedCode19751, 1, PSend19752);
    // ifFalse:. 
    Send PSend19749 = new_Send((Optr)PSend19748, SMB_ifFalse_, 1, (Optr)PBlock19750);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19753 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19755 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19757 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19758 = new_Send((Optr)PSend19757, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19762 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19763 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19764 = new_Send((Optr)PSend19763, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19765 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19761 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19762, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19763, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19764, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19765, (Optr)&t_block_return);
    Block PBlock19760 = new_Block_with(empty_Array, empty_Array, PThreadedCode19761, 3, PSend19762, PSend19764, PSend19765);
    // ifFalse:. 
    Send PSend19759 = new_Send((Optr)PSend19758, SMB_ifFalse_, 1, (Optr)PBlock19760);
    Array PThreadedCode19756 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19757, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19758, (Optr)&t_send_ifFalse_, (Optr)PSend19759, (Optr)PBlock19760, (Optr)&t_method_return);
    Block PBlock19754 = new_Block_with(PArray19755, empty_Array, PThreadedCode19756, 1, PSend19759);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19766 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19753, (Optr)PBlock19754);
    Array PThreadedCode19741 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19742, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19744, (Optr)&t_send0, (Optr)PSend19743, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19745, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19746, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19747, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19748, (Optr)&t_send_ifFalse_, (Optr)PSend19749, (Optr)PBlock19750, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19753, (Optr)&t_push_closure, (Optr)PBlock19754, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19766, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19739 = new_Block_with(PArray19740, empty_Array, PThreadedCode19741, 5, PAssign19742, PAssign19745, PSend19749, PSend19766, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19767 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19739);
    Array PThreadedCode19738 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19739, (Optr)&t_send1, (Optr)PSend19767, (Optr)&t_method_return);
    Method PMethod19735 = new_Method_with(PArray19736, PArray19737, empty_Array, PThreadedCode19738, 1, PSend19767);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19735, PEG_StrongSequenceExpression_Class);
    store_method(PEG_StrongSequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19769 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19770 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19773 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19776 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19775 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19776);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19777 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19778 = new_Send((Optr)PSend19777, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19782 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19781 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19782, (Optr)&t_block_return);
    Block PBlock19780 = new_Block_with(empty_Array, empty_Array, PThreadedCode19781, 1, PSend19782);
    // ifFalse:. 
    Send PSend19779 = new_Send((Optr)PSend19778, SMB_ifFalse_, 1, (Optr)PBlock19780);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19783 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19785 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19787 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19788 = new_Send((Optr)PSend19787, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19792 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19793 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19791 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19792, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19793, (Optr)&t_block_return);
    Block PBlock19790 = new_Block_with(empty_Array, empty_Array, PThreadedCode19791, 2, PSend19792, PSend19793);
    // ifFalse:. 
    Send PSend19789 = new_Send((Optr)PSend19788, SMB_ifFalse_, 1, (Optr)PBlock19790);
    Array PThreadedCode19786 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19787, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19788, (Optr)&t_send_ifFalse_, (Optr)PSend19789, (Optr)PBlock19790, (Optr)&t_method_return);
    Block PBlock19784 = new_Block_with(PArray19785, empty_Array, PThreadedCode19786, 1, PSend19789);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19794 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19783, (Optr)PBlock19784);
    Array PThreadedCode19774 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19775, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19776, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19777, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19778, (Optr)&t_send_ifFalse_, (Optr)PSend19779, (Optr)PBlock19780, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19783, (Optr)&t_push_closure, (Optr)PBlock19784, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19794, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19772 = new_Block_with(PArray19773, empty_Array, PThreadedCode19774, 4, PAssign19775, PSend19779, PSend19794, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19795 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19772);
    Array PThreadedCode19771 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19772, (Optr)&t_send1, (Optr)PSend19795, (Optr)&t_method_return);
    Method PMethod19768 = new_Method_with(PArray19769, PArray19770, empty_Array, PThreadedCode19771, 1, PSend19795);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19768, PEG_StrongSequenceExpression_Class);
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