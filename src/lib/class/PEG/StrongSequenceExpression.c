#include <lib/class/PEG/StrongSequenceExpression.h>


Optr layout_PEG_StrongSequenceExpression_Class_class;
Optr layout_PEG_StrongSequenceExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19770 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19771 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19774 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19778 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19777 = new_Send((Optr)PSend19778, SMB_position, 0);
    Assign PAssign19776 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19777);
    // position. 
    Send PSend19780 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19779 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19780);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19781 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19782 = new_Send((Optr)PSend19781, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19786 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19785 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19786, (Optr)&t_block_return);
    Block PBlock19784 = new_Block_with(empty_Array, empty_Array, PThreadedCode19785, 1, PSend19786);
    // ifFalse:. 
    Send PSend19783 = new_Send((Optr)PSend19782, SMB_ifFalse_, 1, (Optr)PBlock19784);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19787 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19789 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19791 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19792 = new_Send((Optr)PSend19791, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19796 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19797 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19798 = new_Send((Optr)PSend19797, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19799 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19795 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19796, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19797, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19798, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19799, (Optr)&t_block_return);
    Block PBlock19794 = new_Block_with(empty_Array, empty_Array, PThreadedCode19795, 3, PSend19796, PSend19798, PSend19799);
    // ifFalse:. 
    Send PSend19793 = new_Send((Optr)PSend19792, SMB_ifFalse_, 1, (Optr)PBlock19794);
    Array PThreadedCode19790 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19791, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19792, (Optr)&t_send_ifFalse_, (Optr)PSend19793, (Optr)PBlock19794, (Optr)&t_method_return);
    Block PBlock19788 = new_Block_with(PArray19789, empty_Array, PThreadedCode19790, 1, PSend19793);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19800 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19787, (Optr)PBlock19788);
    Array PThreadedCode19775 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19776, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19778, (Optr)&t_send0, (Optr)PSend19777, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19779, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19780, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19781, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19782, (Optr)&t_send_ifFalse_, (Optr)PSend19783, (Optr)PBlock19784, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19787, (Optr)&t_push_closure, (Optr)PBlock19788, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19800, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19773 = new_Block_with(PArray19774, empty_Array, PThreadedCode19775, 5, PAssign19776, PAssign19779, PSend19783, PSend19800, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19801 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19773);
    Array PThreadedCode19772 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19773, (Optr)&t_send1, (Optr)PSend19801, (Optr)&t_method_return);
    Method PMethod19769 = new_Method_with(PArray19770, PArray19771, empty_Array, PThreadedCode19772, 1, PSend19801);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19769, PEG_StrongSequenceExpression_Class);
    store_method(PEG_StrongSequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19803 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19804 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19807 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19810 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19809 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19810);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19811 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19812 = new_Send((Optr)PSend19811, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19816 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19815 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19816, (Optr)&t_block_return);
    Block PBlock19814 = new_Block_with(empty_Array, empty_Array, PThreadedCode19815, 1, PSend19816);
    // ifFalse:. 
    Send PSend19813 = new_Send((Optr)PSend19812, SMB_ifFalse_, 1, (Optr)PBlock19814);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19817 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19819 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19821 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19822 = new_Send((Optr)PSend19821, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19826 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19827 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19825 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19826, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19827, (Optr)&t_block_return);
    Block PBlock19824 = new_Block_with(empty_Array, empty_Array, PThreadedCode19825, 2, PSend19826, PSend19827);
    // ifFalse:. 
    Send PSend19823 = new_Send((Optr)PSend19822, SMB_ifFalse_, 1, (Optr)PBlock19824);
    Array PThreadedCode19820 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19821, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19822, (Optr)&t_send_ifFalse_, (Optr)PSend19823, (Optr)PBlock19824, (Optr)&t_method_return);
    Block PBlock19818 = new_Block_with(PArray19819, empty_Array, PThreadedCode19820, 1, PSend19823);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19828 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19817, (Optr)PBlock19818);
    Array PThreadedCode19808 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19809, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19810, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19811, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19812, (Optr)&t_send_ifFalse_, (Optr)PSend19813, (Optr)PBlock19814, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19817, (Optr)&t_push_closure, (Optr)PBlock19818, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19828, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19806 = new_Block_with(PArray19807, empty_Array, PThreadedCode19808, 4, PAssign19809, PSend19813, PSend19828, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19829 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19806);
    Array PThreadedCode19805 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19806, (Optr)&t_send1, (Optr)PSend19829, (Optr)&t_method_return);
    Method PMethod19802 = new_Method_with(PArray19803, PArray19804, empty_Array, PThreadedCode19805, 1, PSend19829);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19802, PEG_StrongSequenceExpression_Class);
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