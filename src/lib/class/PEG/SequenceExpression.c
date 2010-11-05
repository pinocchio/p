#include <lib/class/PEG/SequenceExpression.h>


Optr layout_PEG_SequenceExpression_Class_class;
Optr slot_PEG_SequenceExpression_children;
Optr layout_PEG_SequenceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19442 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_method_return);
    Method PMethod19441 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19442, 1, slot_PEG_SequenceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19441, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19446 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_asArray, 0);
    Assign PAssign19445 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19446);
    Array PThreadedCode19444 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19445, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19446, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19443 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19444, 2, PAssign19445, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19443, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19450 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19449 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19450);
    Array PThreadedCode19448 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19449, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19450, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19447 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19448, 2, PAssign19449, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19447, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__lt__and_() {
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19452 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Array PArray19453 = new_Array_with(1, (Optr)VAR_new_0_1);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19456 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19455 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19456);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19457 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19458 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19459 = new_Send((Optr)PSend19457, SMB__equals_, 1, (Optr)PSend19458);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19463 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19465 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19467 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19468 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19467);
    Array PThreadedCode19466 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19467, (Optr)&t_send1, (Optr)PSend19468, (Optr)&t_method_return);
    Block PBlock19464 = new_Block_with(PArray19465, empty_Array, PThreadedCode19466, 1, PSend19468);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19469 = new_Send((Optr)PSend19463, SMB_do_, 1, (Optr)PBlock19464);
    Array PThreadedCode19462 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19463, (Optr)&t_push_closure, (Optr)PBlock19464, (Optr)&t_send1, (Optr)PSend19469, (Optr)&t_block_return);
    Block PBlock19461 = new_Block_with(empty_Array, empty_Array, PThreadedCode19462, 1, PSend19469);
    // asChildParser. 
    Send PSend19472 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19473 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19472);
    Array PThreadedCode19471 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19472, (Optr)&t_send1, (Optr)PSend19473, (Optr)&t_block_return);
    Block PBlock19470 = new_Block_with(empty_Array, empty_Array, PThreadedCode19471, 1, PSend19473);
    // ifTrue:ifFalse:. 
    Send PSend19460 = new_Send((Optr)PSend19459, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19461, (Optr)PBlock19470);
    Array PThreadedCode19454 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign19455, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19456, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19457, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19458, (Optr)&t_send1, (Optr)PSend19459, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19460, (Optr)PBlock19461, (Optr)PBlock19470, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19451 = new_Method_with(PArray19452, PArray19453, empty_Array, PThreadedCode19454, 3, PAssign19455, PSend19460, self);
    
    MethodClosure MC_SMB__lt__and_ = new_MethodClosure((Method)PMethod19451, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB__lt__and_, MC_SMB__lt__and_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19475 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19476 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19479 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19482 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19481 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19482);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19485 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // position. 
    Send PSend19484 = new_Send((Optr)PSend19485, SMB_position, 0);
    Assign PAssign19483 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19484);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19486 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19487 = new_Send((Optr)PSend19486, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19491 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19490 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19491, (Optr)&t_block_return);
    Block PBlock19489 = new_Block_with(empty_Array, empty_Array, PThreadedCode19490, 1, PSend19491);
    // ifFalse:. 
    Send PSend19488 = new_Send((Optr)PSend19487, SMB_ifFalse_, 1, (Optr)PBlock19489);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19492 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19494 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19496 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19497 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19498 = new_Send((Optr)PSend19497, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19502 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19503 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19504 = new_Send((Optr)PSend19503, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19505 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19501 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19502, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19503, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19504, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19505, (Optr)&t_block_return);
    Block PBlock19500 = new_Block_with(empty_Array, empty_Array, PThreadedCode19501, 3, PSend19502, PSend19504, PSend19505);
    // ifFalse:. 
    Send PSend19499 = new_Send((Optr)PSend19498, SMB_ifFalse_, 1, (Optr)PBlock19500);
    Array PThreadedCode19495 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19496, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19497, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19498, (Optr)&t_send_ifFalse_, (Optr)PSend19499, (Optr)PBlock19500, (Optr)&t_method_return);
    Block PBlock19493 = new_Block_with(PArray19494, empty_Array, PThreadedCode19495, 2, PSend19496, PSend19499);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19506 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19492, (Optr)PBlock19493);
    Array PThreadedCode19480 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19481, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19482, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19483, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19485, (Optr)&t_send0, (Optr)PSend19484, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19486, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19487, (Optr)&t_send_ifFalse_, (Optr)PSend19488, (Optr)PBlock19489, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19492, (Optr)&t_push_closure, (Optr)PBlock19493, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19506, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19478 = new_Block_with(PArray19479, empty_Array, PThreadedCode19480, 5, PAssign19481, PAssign19483, PSend19488, PSend19506, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19507 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19478);
    Array PThreadedCode19477 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19478, (Optr)&t_send1, (Optr)PSend19507, (Optr)&t_method_return);
    Method PMethod19474 = new_Method_with(PArray19475, PArray19476, empty_Array, PThreadedCode19477, 1, PSend19507);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19474, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19509 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19510 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19513 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19516 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19515 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19516);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19517 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19518 = new_Send((Optr)PSend19517, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19522 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19521 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19522, (Optr)&t_block_return);
    Block PBlock19520 = new_Block_with(empty_Array, empty_Array, PThreadedCode19521, 1, PSend19522);
    // ifFalse:. 
    Send PSend19519 = new_Send((Optr)PSend19518, SMB_ifFalse_, 1, (Optr)PBlock19520);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19523 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19525 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19527 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19528 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19529 = new_Send((Optr)PSend19528, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19533 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19534 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19532 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19533, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19534, (Optr)&t_block_return);
    Block PBlock19531 = new_Block_with(empty_Array, empty_Array, PThreadedCode19532, 2, PSend19533, PSend19534);
    // ifFalse:. 
    Send PSend19530 = new_Send((Optr)PSend19529, SMB_ifFalse_, 1, (Optr)PBlock19531);
    Array PThreadedCode19526 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19527, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19528, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19529, (Optr)&t_send_ifFalse_, (Optr)PSend19530, (Optr)PBlock19531, (Optr)&t_method_return);
    Block PBlock19524 = new_Block_with(PArray19525, empty_Array, PThreadedCode19526, 2, PSend19527, PSend19530);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19535 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19523, (Optr)PBlock19524);
    Array PThreadedCode19514 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19515, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19516, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19517, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19518, (Optr)&t_send_ifFalse_, (Optr)PSend19519, (Optr)PBlock19520, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19523, (Optr)&t_push_closure, (Optr)PBlock19524, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19535, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19512 = new_Block_with(PArray19513, empty_Array, PThreadedCode19514, 4, PAssign19515, PSend19519, PSend19535, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19536 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19512);
    Array PThreadedCode19511 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19512, (Optr)&t_send1, (Optr)PSend19536, (Optr)&t_method_return);
    Method PMethod19508 = new_Method_with(PArray19509, PArray19510, empty_Array, PThreadedCode19511, 1, PSend19536);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19508, PEG_SequenceExpression_Class);
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