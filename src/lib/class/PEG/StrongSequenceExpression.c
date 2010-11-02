#include <lib/class/PEG/StrongSequenceExpression.h>


Optr layout_PEG_StrongSequenceExpression_Class_class;
Optr layout_PEG_StrongSequenceExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19378 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19379 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19382 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19386 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19385 = new_Send((Optr)PSend19386, SMB_position, 0);
    Assign PAssign19384 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19385);
    // position. 
    Send PSend19388 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19387 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19388);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19389 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19390 = new_Send((Optr)PSend19389, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19394 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19393 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19394, (Optr)&t_block_return);
    Block PBlock19392 = new_Block_with(empty_Array, empty_Array, PThreadedCode19393, 1, PSend19394);
    // ifFalse:. 
    Send PSend19391 = new_Send((Optr)PSend19390, SMB_ifFalse_, 1, (Optr)PBlock19392);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19395 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19397 = new_Array_with(1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend19399 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19400 = new_Send((Optr)PSend19399, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19404 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19405 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19406 = new_Send((Optr)PSend19405, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19407 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19403 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19404, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19405, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19406, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19407, (Optr)&t_block_return);
    Block PBlock19402 = new_Block_with(empty_Array, empty_Array, PThreadedCode19403, 3, PSend19404, PSend19406, PSend19407);
    // ifFalse:. 
    Send PSend19401 = new_Send((Optr)PSend19400, SMB_ifFalse_, 1, (Optr)PBlock19402);
    Array PThreadedCode19398 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19399, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19400, (Optr)&t_send_ifFalse_, (Optr)PSend19401, (Optr)PBlock19402, (Optr)&t_method_return);
    Block PBlock19396 = new_Block_with(PArray19397, empty_Array, PThreadedCode19398, 1, PSend19401);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19408 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19395, (Optr)PBlock19396);
    Array PThreadedCode19383 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19384, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19386, (Optr)&t_send0, (Optr)PSend19385, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19387, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19388, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19389, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19390, (Optr)&t_send_ifFalse_, (Optr)PSend19391, (Optr)PBlock19392, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19395, (Optr)&t_push_closure, (Optr)PBlock19396, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19408, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19381 = new_Block_with(PArray19382, empty_Array, PThreadedCode19383, 5, PAssign19384, PAssign19387, PSend19391, PSend19408, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19409 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19381);
    Array PThreadedCode19380 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19381, (Optr)&t_send1, (Optr)PSend19409, (Optr)&t_method_return);
    Method PMethod19377 = new_Method_with(PArray19378, PArray19379, empty_Array, PThreadedCode19380, 1, PSend19409);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19377, PEG_StrongSequenceExpression_Class);
    store_method(PEG_StrongSequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19411 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19412 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19415 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19418 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19417 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19418);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19419 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19420 = new_Send((Optr)PSend19419, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
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
    // omitMatch:. 
    Send PSend19430 = new_Send((Optr)PSend19429, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19434 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19435 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19433 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19434, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19435, (Optr)&t_block_return);
    Block PBlock19432 = new_Block_with(empty_Array, empty_Array, PThreadedCode19433, 2, PSend19434, PSend19435);
    // ifFalse:. 
    Send PSend19431 = new_Send((Optr)PSend19430, SMB_ifFalse_, 1, (Optr)PBlock19432);
    Array PThreadedCode19428 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19429, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19430, (Optr)&t_send_ifFalse_, (Optr)PSend19431, (Optr)PBlock19432, (Optr)&t_method_return);
    Block PBlock19426 = new_Block_with(PArray19427, empty_Array, PThreadedCode19428, 1, PSend19431);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19436 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19425, (Optr)PBlock19426);
    Array PThreadedCode19416 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19417, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19418, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19419, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19420, (Optr)&t_send_ifFalse_, (Optr)PSend19421, (Optr)PBlock19422, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19425, (Optr)&t_push_closure, (Optr)PBlock19426, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19436, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19414 = new_Block_with(PArray19415, empty_Array, PThreadedCode19416, 4, PAssign19417, PSend19421, PSend19436, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19437 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19414);
    Array PThreadedCode19413 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19414, (Optr)&t_send1, (Optr)PSend19437, (Optr)&t_method_return);
    Method PMethod19410 = new_Method_with(PArray19411, PArray19412, empty_Array, PThreadedCode19413, 1, PSend19437);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19410, PEG_StrongSequenceExpression_Class);
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