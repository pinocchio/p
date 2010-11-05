#include <lib/class/PEG/StrongSequenceExpression.h>


Optr layout_PEG_StrongSequenceExpression_Class_class;
Optr layout_PEG_StrongSequenceExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19408 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19409 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19412 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19416 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19415 = new_Send((Optr)PSend19416, SMB_position, 0);
    Assign PAssign19414 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19415);
    // position. 
    Send PSend19418 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19417 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19418);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19419 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19420 = new_Send((Optr)PSend19419, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19424 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19423 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19424, (Optr)&t_block_return);
    Block PBlock19422 = new_Block_with(empty_Array, empty_Array, PThreadedCode19423, 1, PSend19424);
    // ifFalse:. 
    Send PSend19421 = new_Send((Optr)PSend19420, SMB_ifFalse_, 1, (Optr)PBlock19422);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19425 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19427 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19429 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19430 = new_Send((Optr)PSend19429, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19434 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19435 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19436 = new_Send((Optr)PSend19435, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19437 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19433 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19434, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19435, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19436, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19437, (Optr)&t_block_return);
    Block PBlock19432 = new_Block_with(empty_Array, empty_Array, PThreadedCode19433, 3, PSend19434, PSend19436, PSend19437);
    // ifFalse:. 
    Send PSend19431 = new_Send((Optr)PSend19430, SMB_ifFalse_, 1, (Optr)PBlock19432);
    Array PThreadedCode19428 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19429, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19430, (Optr)&t_send_ifFalse_, (Optr)PSend19431, (Optr)PBlock19432, (Optr)&t_method_return);
    Block PBlock19426 = new_Block_with(PArray19427, empty_Array, PThreadedCode19428, 1, PSend19431);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19438 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19425, (Optr)PBlock19426);
    Array PThreadedCode19413 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19414, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19416, (Optr)&t_send0, (Optr)PSend19415, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19417, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19418, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19419, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19420, (Optr)&t_send_ifFalse_, (Optr)PSend19421, (Optr)PBlock19422, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19425, (Optr)&t_push_closure, (Optr)PBlock19426, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19438, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19411 = new_Block_with(PArray19412, empty_Array, PThreadedCode19413, 5, PAssign19414, PAssign19417, PSend19421, PSend19438, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19439 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19411);
    Array PThreadedCode19410 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19411, (Optr)&t_send1, (Optr)PSend19439, (Optr)&t_method_return);
    Method PMethod19407 = new_Method_with(PArray19408, PArray19409, empty_Array, PThreadedCode19410, 1, PSend19439);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19407, PEG_StrongSequenceExpression_Class);
    store_method(PEG_StrongSequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19441 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19442 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19445 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19448 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19447 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19448);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19449 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19450 = new_Send((Optr)PSend19449, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19454 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19453 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19454, (Optr)&t_block_return);
    Block PBlock19452 = new_Block_with(empty_Array, empty_Array, PThreadedCode19453, 1, PSend19454);
    // ifFalse:. 
    Send PSend19451 = new_Send((Optr)PSend19450, SMB_ifFalse_, 1, (Optr)PBlock19452);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19455 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19457 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19459 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19460 = new_Send((Optr)PSend19459, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19464 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19465 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19463 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19464, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19465, (Optr)&t_block_return);
    Block PBlock19462 = new_Block_with(empty_Array, empty_Array, PThreadedCode19463, 2, PSend19464, PSend19465);
    // ifFalse:. 
    Send PSend19461 = new_Send((Optr)PSend19460, SMB_ifFalse_, 1, (Optr)PBlock19462);
    Array PThreadedCode19458 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19459, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19460, (Optr)&t_send_ifFalse_, (Optr)PSend19461, (Optr)PBlock19462, (Optr)&t_method_return);
    Block PBlock19456 = new_Block_with(PArray19457, empty_Array, PThreadedCode19458, 1, PSend19461);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19466 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19455, (Optr)PBlock19456);
    Array PThreadedCode19446 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19447, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19448, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19449, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19450, (Optr)&t_send_ifFalse_, (Optr)PSend19451, (Optr)PBlock19452, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19455, (Optr)&t_push_closure, (Optr)PBlock19456, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19466, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19444 = new_Block_with(PArray19445, empty_Array, PThreadedCode19446, 4, PAssign19447, PSend19451, PSend19466, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19467 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19444);
    Array PThreadedCode19443 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19444, (Optr)&t_send1, (Optr)PSend19467, (Optr)&t_method_return);
    Method PMethod19440 = new_Method_with(PArray19441, PArray19442, empty_Array, PThreadedCode19443, 1, PSend19467);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19440, PEG_StrongSequenceExpression_Class);
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