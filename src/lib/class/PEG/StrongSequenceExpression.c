#include <lib/class/PEG/StrongSequenceExpression.h>


Optr layout_PEG_StrongSequenceExpression_Class_class;
Optr layout_PEG_StrongSequenceExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19867 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19868 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19871 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19875 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19874 = new_Send((Optr)PSend19875, SMB_position, 0);
    Assign PAssign19873 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19874);
    // position. 
    Send PSend19877 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19876 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19877);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19878 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19879 = new_Send((Optr)PSend19878, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19883 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19882 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19883, (Optr)&t_block_return);
    Block PBlock19881 = new_Block_with(empty_Array, empty_Array, PThreadedCode19882, 1, PSend19883);
    // ifFalse:. 
    Send PSend19880 = new_Send((Optr)PSend19879, SMB_ifFalse_, 1, (Optr)PBlock19881);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19884 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19886 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19888 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19889 = new_Send((Optr)PSend19888, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19893 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19894 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19895 = new_Send((Optr)PSend19894, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19896 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19892 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19893, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19894, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19895, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19896, (Optr)&t_block_return);
    Block PBlock19891 = new_Block_with(empty_Array, empty_Array, PThreadedCode19892, 3, PSend19893, PSend19895, PSend19896);
    // ifFalse:. 
    Send PSend19890 = new_Send((Optr)PSend19889, SMB_ifFalse_, 1, (Optr)PBlock19891);
    Array PThreadedCode19887 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19888, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19889, (Optr)&t_send_ifFalse_, (Optr)PSend19890, (Optr)PBlock19891, (Optr)&t_method_return);
    Block PBlock19885 = new_Block_with(PArray19886, empty_Array, PThreadedCode19887, 1, PSend19890);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19897 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19884, (Optr)PBlock19885);
    Array PThreadedCode19872 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19873, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19875, (Optr)&t_send0, (Optr)PSend19874, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19876, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19877, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19878, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19879, (Optr)&t_send_ifFalse_, (Optr)PSend19880, (Optr)PBlock19881, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19884, (Optr)&t_push_closure, (Optr)PBlock19885, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19897, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19870 = new_Block_with(PArray19871, empty_Array, PThreadedCode19872, 5, PAssign19873, PAssign19876, PSend19880, PSend19897, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19898 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19870);
    Array PThreadedCode19869 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19870, (Optr)&t_send1, (Optr)PSend19898, (Optr)&t_method_return);
    Method PMethod19866 = new_Method_with(PArray19867, PArray19868, empty_Array, PThreadedCode19869, 1, PSend19898);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19866, PEG_StrongSequenceExpression_Class);
    store_method(PEG_StrongSequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19900 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19901 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19904 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19907 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19906 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19907);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19908 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19909 = new_Send((Optr)PSend19908, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19913 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19912 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19913, (Optr)&t_block_return);
    Block PBlock19911 = new_Block_with(empty_Array, empty_Array, PThreadedCode19912, 1, PSend19913);
    // ifFalse:. 
    Send PSend19910 = new_Send((Optr)PSend19909, SMB_ifFalse_, 1, (Optr)PBlock19911);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19914 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19916 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19918 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19919 = new_Send((Optr)PSend19918, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19923 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19924 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19922 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19923, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19924, (Optr)&t_block_return);
    Block PBlock19921 = new_Block_with(empty_Array, empty_Array, PThreadedCode19922, 2, PSend19923, PSend19924);
    // ifFalse:. 
    Send PSend19920 = new_Send((Optr)PSend19919, SMB_ifFalse_, 1, (Optr)PBlock19921);
    Array PThreadedCode19917 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19918, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19919, (Optr)&t_send_ifFalse_, (Optr)PSend19920, (Optr)PBlock19921, (Optr)&t_method_return);
    Block PBlock19915 = new_Block_with(PArray19916, empty_Array, PThreadedCode19917, 1, PSend19920);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19925 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19914, (Optr)PBlock19915);
    Array PThreadedCode19905 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19906, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19907, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19908, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19909, (Optr)&t_send_ifFalse_, (Optr)PSend19910, (Optr)PBlock19911, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19914, (Optr)&t_push_closure, (Optr)PBlock19915, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19925, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19903 = new_Block_with(PArray19904, empty_Array, PThreadedCode19905, 4, PAssign19906, PSend19910, PSend19925, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19926 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19903);
    Array PThreadedCode19902 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19903, (Optr)&t_send1, (Optr)PSend19926, (Optr)&t_method_return);
    Method PMethod19899 = new_Method_with(PArray19900, PArray19901, empty_Array, PThreadedCode19902, 1, PSend19926);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19899, PEG_StrongSequenceExpression_Class);
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