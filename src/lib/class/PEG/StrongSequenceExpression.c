#include <lib/class/PEG/StrongSequenceExpression.h>


Optr layout_PEG_StrongSequenceExpression_Class_class;
Optr layout_PEG_StrongSequenceExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19465 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19466 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19469 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19473 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19472 = new_Send((Optr)PSend19473, SMB_position, 0);
    Assign PAssign19471 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19472);
    // position. 
    Send PSend19475 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19474 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19475);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19476 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19477 = new_Send((Optr)PSend19476, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19481 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19480 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19481, (Optr)&t_block_return);
    Block PBlock19479 = new_Block_with(empty_Array, empty_Array, PThreadedCode19480, 1, PSend19481);
    // ifFalse:. 
    Send PSend19478 = new_Send((Optr)PSend19477, SMB_ifFalse_, 1, (Optr)PBlock19479);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19482 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19484 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19486 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19487 = new_Send((Optr)PSend19486, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19491 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19492 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19493 = new_Send((Optr)PSend19492, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19494 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19490 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19491, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19492, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19493, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19494, (Optr)&t_block_return);
    Block PBlock19489 = new_Block_with(empty_Array, empty_Array, PThreadedCode19490, 3, PSend19491, PSend19493, PSend19494);
    // ifFalse:. 
    Send PSend19488 = new_Send((Optr)PSend19487, SMB_ifFalse_, 1, (Optr)PBlock19489);
    Array PThreadedCode19485 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19486, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19487, (Optr)&t_send_ifFalse_, (Optr)PSend19488, (Optr)PBlock19489, (Optr)&t_method_return);
    Block PBlock19483 = new_Block_with(PArray19484, empty_Array, PThreadedCode19485, 1, PSend19488);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19495 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19482, (Optr)PBlock19483);
    Array PThreadedCode19470 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19471, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19473, (Optr)&t_send0, (Optr)PSend19472, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19474, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19475, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19476, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19477, (Optr)&t_send_ifFalse_, (Optr)PSend19478, (Optr)PBlock19479, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19482, (Optr)&t_push_closure, (Optr)PBlock19483, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19495, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19468 = new_Block_with(PArray19469, empty_Array, PThreadedCode19470, 5, PAssign19471, PAssign19474, PSend19478, PSend19495, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19496 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19468);
    Array PThreadedCode19467 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19468, (Optr)&t_send1, (Optr)PSend19496, (Optr)&t_method_return);
    Method PMethod19464 = new_Method_with(PArray19465, PArray19466, empty_Array, PThreadedCode19467, 1, PSend19496);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19464, PEG_StrongSequenceExpression_Class);
    store_method(PEG_StrongSequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19498 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19499 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19502 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19505 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19504 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19505);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19506 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19507 = new_Send((Optr)PSend19506, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19511 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19510 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19511, (Optr)&t_block_return);
    Block PBlock19509 = new_Block_with(empty_Array, empty_Array, PThreadedCode19510, 1, PSend19511);
    // ifFalse:. 
    Send PSend19508 = new_Send((Optr)PSend19507, SMB_ifFalse_, 1, (Optr)PBlock19509);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19512 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19514 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19516 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19517 = new_Send((Optr)PSend19516, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19521 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19522 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19520 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19521, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19522, (Optr)&t_block_return);
    Block PBlock19519 = new_Block_with(empty_Array, empty_Array, PThreadedCode19520, 2, PSend19521, PSend19522);
    // ifFalse:. 
    Send PSend19518 = new_Send((Optr)PSend19517, SMB_ifFalse_, 1, (Optr)PBlock19519);
    Array PThreadedCode19515 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19516, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19517, (Optr)&t_send_ifFalse_, (Optr)PSend19518, (Optr)PBlock19519, (Optr)&t_method_return);
    Block PBlock19513 = new_Block_with(PArray19514, empty_Array, PThreadedCode19515, 1, PSend19518);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19523 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19512, (Optr)PBlock19513);
    Array PThreadedCode19503 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19504, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19505, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19506, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19507, (Optr)&t_send_ifFalse_, (Optr)PSend19508, (Optr)PBlock19509, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19512, (Optr)&t_push_closure, (Optr)PBlock19513, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19523, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19501 = new_Block_with(PArray19502, empty_Array, PThreadedCode19503, 4, PAssign19504, PSend19508, PSend19523, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19524 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19501);
    Array PThreadedCode19500 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19501, (Optr)&t_send1, (Optr)PSend19524, (Optr)&t_method_return);
    Method PMethod19497 = new_Method_with(PArray19498, PArray19499, empty_Array, PThreadedCode19500, 1, PSend19524);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19497, PEG_StrongSequenceExpression_Class);
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