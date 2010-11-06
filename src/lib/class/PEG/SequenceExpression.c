#include <lib/class/PEG/SequenceExpression.h>


Optr layout_PEG_SequenceExpression_Class_class;
Optr slot_PEG_SequenceExpression_children;
Optr layout_PEG_SequenceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19453 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_method_return);
    Method PMethod19452 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19453, 1, slot_PEG_SequenceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19452, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19457 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_asArray, 0);
    Assign PAssign19456 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19457);
    Array PThreadedCode19455 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19456, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19457, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19454 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19455, 2, PAssign19456, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19454, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19461 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19460 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19461);
    Array PThreadedCode19459 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19460, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19461, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19458 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19459, 2, PAssign19460, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19458, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__lt__and_() {
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19463 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Array PArray19464 = new_Array_with(1, (Optr)VAR_new_0_1);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19467 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19466 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19467);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19468 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19469 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19470 = new_Send((Optr)PSend19468, SMB__equals_, 1, (Optr)PSend19469);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19474 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19476 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19478 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19479 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19478);
    Array PThreadedCode19477 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19478, (Optr)&t_send1, (Optr)PSend19479, (Optr)&t_method_return);
    Block PBlock19475 = new_Block_with(PArray19476, empty_Array, PThreadedCode19477, 1, PSend19479);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19480 = new_Send((Optr)PSend19474, SMB_do_, 1, (Optr)PBlock19475);
    Array PThreadedCode19473 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19474, (Optr)&t_push_closure, (Optr)PBlock19475, (Optr)&t_send1, (Optr)PSend19480, (Optr)&t_block_return);
    Block PBlock19472 = new_Block_with(empty_Array, empty_Array, PThreadedCode19473, 1, PSend19480);
    // asChildParser. 
    Send PSend19483 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19484 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19483);
    Array PThreadedCode19482 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19483, (Optr)&t_send1, (Optr)PSend19484, (Optr)&t_block_return);
    Block PBlock19481 = new_Block_with(empty_Array, empty_Array, PThreadedCode19482, 1, PSend19484);
    // ifTrue:ifFalse:. 
    Send PSend19471 = new_Send((Optr)PSend19470, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19472, (Optr)PBlock19481);
    Array PThreadedCode19465 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign19466, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19467, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19468, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19469, (Optr)&t_send1, (Optr)PSend19470, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19471, (Optr)PBlock19472, (Optr)PBlock19481, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19462 = new_Method_with(PArray19463, PArray19464, empty_Array, PThreadedCode19465, 3, PAssign19466, PSend19471, self);
    
    MethodClosure MC_SMB__lt__and_ = new_MethodClosure((Method)PMethod19462, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB__lt__and_, MC_SMB__lt__and_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19486 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19487 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19490 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19493 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19492 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19493);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19496 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // position. 
    Send PSend19495 = new_Send((Optr)PSend19496, SMB_position, 0);
    Assign PAssign19494 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19495);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19497 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19498 = new_Send((Optr)PSend19497, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19502 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19501 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19502, (Optr)&t_block_return);
    Block PBlock19500 = new_Block_with(empty_Array, empty_Array, PThreadedCode19501, 1, PSend19502);
    // ifFalse:. 
    Send PSend19499 = new_Send((Optr)PSend19498, SMB_ifFalse_, 1, (Optr)PBlock19500);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19503 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19505 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19507 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19508 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19509 = new_Send((Optr)PSend19508, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19513 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19514 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19515 = new_Send((Optr)PSend19514, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19516 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19512 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19513, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19514, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19515, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19516, (Optr)&t_block_return);
    Block PBlock19511 = new_Block_with(empty_Array, empty_Array, PThreadedCode19512, 3, PSend19513, PSend19515, PSend19516);
    // ifFalse:. 
    Send PSend19510 = new_Send((Optr)PSend19509, SMB_ifFalse_, 1, (Optr)PBlock19511);
    Array PThreadedCode19506 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19507, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19508, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19509, (Optr)&t_send_ifFalse_, (Optr)PSend19510, (Optr)PBlock19511, (Optr)&t_method_return);
    Block PBlock19504 = new_Block_with(PArray19505, empty_Array, PThreadedCode19506, 2, PSend19507, PSend19510);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19517 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19503, (Optr)PBlock19504);
    Array PThreadedCode19491 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19492, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19493, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19494, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19496, (Optr)&t_send0, (Optr)PSend19495, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19497, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19498, (Optr)&t_send_ifFalse_, (Optr)PSend19499, (Optr)PBlock19500, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19503, (Optr)&t_push_closure, (Optr)PBlock19504, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19517, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19489 = new_Block_with(PArray19490, empty_Array, PThreadedCode19491, 5, PAssign19492, PAssign19494, PSend19499, PSend19517, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19518 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19489);
    Array PThreadedCode19488 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19489, (Optr)&t_send1, (Optr)PSend19518, (Optr)&t_method_return);
    Method PMethod19485 = new_Method_with(PArray19486, PArray19487, empty_Array, PThreadedCode19488, 1, PSend19518);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19485, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19520 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19521 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19524 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19527 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19526 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19527);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19528 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19529 = new_Send((Optr)PSend19528, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19533 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19532 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19533, (Optr)&t_block_return);
    Block PBlock19531 = new_Block_with(empty_Array, empty_Array, PThreadedCode19532, 1, PSend19533);
    // ifFalse:. 
    Send PSend19530 = new_Send((Optr)PSend19529, SMB_ifFalse_, 1, (Optr)PBlock19531);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19534 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19536 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19538 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19539 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19540 = new_Send((Optr)PSend19539, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19544 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19545 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19543 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19544, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19545, (Optr)&t_block_return);
    Block PBlock19542 = new_Block_with(empty_Array, empty_Array, PThreadedCode19543, 2, PSend19544, PSend19545);
    // ifFalse:. 
    Send PSend19541 = new_Send((Optr)PSend19540, SMB_ifFalse_, 1, (Optr)PBlock19542);
    Array PThreadedCode19537 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19538, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19539, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19540, (Optr)&t_send_ifFalse_, (Optr)PSend19541, (Optr)PBlock19542, (Optr)&t_method_return);
    Block PBlock19535 = new_Block_with(PArray19536, empty_Array, PThreadedCode19537, 2, PSend19538, PSend19541);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19546 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19534, (Optr)PBlock19535);
    Array PThreadedCode19525 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19526, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19527, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19528, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19529, (Optr)&t_send_ifFalse_, (Optr)PSend19530, (Optr)PBlock19531, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19534, (Optr)&t_push_closure, (Optr)PBlock19535, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19546, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19523 = new_Block_with(PArray19524, empty_Array, PThreadedCode19525, 4, PAssign19526, PSend19530, PSend19546, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19547 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19523);
    Array PThreadedCode19522 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19523, (Optr)&t_send1, (Optr)PSend19547, (Optr)&t_method_return);
    Method PMethod19519 = new_Method_with(PArray19520, PArray19521, empty_Array, PThreadedCode19522, 1, PSend19547);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19519, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGSequenceExpression_layout() {
    layout_PEG_SequenceExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_SequenceExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_SequenceExpression = new_Symbol(L"SequenceExpression");
    slot_PEG_SequenceExpression_children = (Optr)new_Slot(0, L"children");
    layout_PEG_SequenceExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_SequenceExpression)->values[0] = slot_PEG_SequenceExpression_children; // children 
    PEG_SequenceExpression_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_SequenceExpression_Class_class);
    PEG_SequenceExpression_Class->layout = layout_PEG_SequenceExpression;
    PEG_SequenceExpression_Class->name = SMB_SequenceExpression;
    
}

void init_PEG_PEGSequenceExpression_methods() {
    init_SMB_children();
    init_SMB_asChildParser();
    init_SMB_initialize();
    init_SMB__lt__and_();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}