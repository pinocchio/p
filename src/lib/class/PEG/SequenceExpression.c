#include <lib/class/PEG/SequenceExpression.h>


Optr layout_PEG_SequenceExpression_Class_class;
Optr slot_PEG_SequenceExpression_children;
Optr layout_PEG_SequenceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19369 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_method_return);
    Method PMethod19368 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19369, 1, slot_PEG_SequenceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19368, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19373 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_asArray, 0);
    Assign PAssign19372 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19373);
    Array PThreadedCode19371 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19372, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19373, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19370 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19371, 2, PAssign19372, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19370, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19377 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19376 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19377);
    Array PThreadedCode19375 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19376, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19377, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19374 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19375, 2, PAssign19376, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19374, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__lt__and_() {
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19379 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Array PArray19380 = new_Array_with(1, (Optr)VAR_new_0_1);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19383 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19382 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19383);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19384 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19385 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19386 = new_Send((Optr)PSend19384, SMB__equals_, 1, (Optr)PSend19385);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19390 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19392 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19394 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19395 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19394);
    Array PThreadedCode19393 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19394, (Optr)&t_send1, (Optr)PSend19395, (Optr)&t_method_return);
    Block PBlock19391 = new_Block_with(PArray19392, empty_Array, PThreadedCode19393, 1, PSend19395);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19396 = new_Send((Optr)PSend19390, SMB_do_, 1, (Optr)PBlock19391);
    Array PThreadedCode19389 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19390, (Optr)&t_push_closure, (Optr)PBlock19391, (Optr)&t_send1, (Optr)PSend19396, (Optr)&t_block_return);
    Block PBlock19388 = new_Block_with(empty_Array, empty_Array, PThreadedCode19389, 1, PSend19396);
    // asChildParser. 
    Send PSend19399 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19400 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19399);
    Array PThreadedCode19398 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19399, (Optr)&t_send1, (Optr)PSend19400, (Optr)&t_block_return);
    Block PBlock19397 = new_Block_with(empty_Array, empty_Array, PThreadedCode19398, 1, PSend19400);
    // ifTrue:ifFalse:. 
    Send PSend19387 = new_Send((Optr)PSend19386, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19388, (Optr)PBlock19397);
    Array PThreadedCode19381 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign19382, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19383, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19384, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19385, (Optr)&t_send1, (Optr)PSend19386, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19387, (Optr)PBlock19388, (Optr)PBlock19397, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19378 = new_Method_with(PArray19379, PArray19380, empty_Array, PThreadedCode19381, 3, PAssign19382, PSend19387, self);
    
    MethodClosure MC_SMB__lt__and_ = new_MethodClosure((Method)PMethod19378, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB__lt__and_, MC_SMB__lt__and_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19402 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19403 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19406 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19409 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19408 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19409);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19412 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // position. 
    Send PSend19411 = new_Send((Optr)PSend19412, SMB_position, 0);
    Assign PAssign19410 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19411);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19413 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19414 = new_Send((Optr)PSend19413, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19418 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19417 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19418, (Optr)&t_block_return);
    Block PBlock19416 = new_Block_with(empty_Array, empty_Array, PThreadedCode19417, 1, PSend19418);
    // ifFalse:. 
    Send PSend19415 = new_Send((Optr)PSend19414, SMB_ifFalse_, 1, (Optr)PBlock19416);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19419 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19421 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19423 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19424 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19425 = new_Send((Optr)PSend19424, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19429 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19430 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19431 = new_Send((Optr)PSend19430, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19432 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19428 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19429, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19430, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19431, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19432, (Optr)&t_block_return);
    Block PBlock19427 = new_Block_with(empty_Array, empty_Array, PThreadedCode19428, 3, PSend19429, PSend19431, PSend19432);
    // ifFalse:. 
    Send PSend19426 = new_Send((Optr)PSend19425, SMB_ifFalse_, 1, (Optr)PBlock19427);
    Array PThreadedCode19422 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19423, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19424, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19425, (Optr)&t_send_ifFalse_, (Optr)PSend19426, (Optr)PBlock19427, (Optr)&t_method_return);
    Block PBlock19420 = new_Block_with(PArray19421, empty_Array, PThreadedCode19422, 2, PSend19423, PSend19426);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19433 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19419, (Optr)PBlock19420);
    Array PThreadedCode19407 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19408, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19409, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19410, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19412, (Optr)&t_send0, (Optr)PSend19411, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19413, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19414, (Optr)&t_send_ifFalse_, (Optr)PSend19415, (Optr)PBlock19416, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19419, (Optr)&t_push_closure, (Optr)PBlock19420, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19433, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19405 = new_Block_with(PArray19406, empty_Array, PThreadedCode19407, 5, PAssign19408, PAssign19410, PSend19415, PSend19433, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19434 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19405);
    Array PThreadedCode19404 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19405, (Optr)&t_send1, (Optr)PSend19434, (Optr)&t_method_return);
    Method PMethod19401 = new_Method_with(PArray19402, PArray19403, empty_Array, PThreadedCode19404, 1, PSend19434);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19401, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19436 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19437 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19440 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19443 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19442 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19443);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19444 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19445 = new_Send((Optr)PSend19444, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19449 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19448 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19449, (Optr)&t_block_return);
    Block PBlock19447 = new_Block_with(empty_Array, empty_Array, PThreadedCode19448, 1, PSend19449);
    // ifFalse:. 
    Send PSend19446 = new_Send((Optr)PSend19445, SMB_ifFalse_, 1, (Optr)PBlock19447);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19450 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19452 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19454 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19455 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19456 = new_Send((Optr)PSend19455, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19460 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19461 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19459 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19460, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19461, (Optr)&t_block_return);
    Block PBlock19458 = new_Block_with(empty_Array, empty_Array, PThreadedCode19459, 2, PSend19460, PSend19461);
    // ifFalse:. 
    Send PSend19457 = new_Send((Optr)PSend19456, SMB_ifFalse_, 1, (Optr)PBlock19458);
    Array PThreadedCode19453 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19454, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19455, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19456, (Optr)&t_send_ifFalse_, (Optr)PSend19457, (Optr)PBlock19458, (Optr)&t_method_return);
    Block PBlock19451 = new_Block_with(PArray19452, empty_Array, PThreadedCode19453, 2, PSend19454, PSend19457);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19462 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19450, (Optr)PBlock19451);
    Array PThreadedCode19441 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19442, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19443, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19444, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19445, (Optr)&t_send_ifFalse_, (Optr)PSend19446, (Optr)PBlock19447, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19450, (Optr)&t_push_closure, (Optr)PBlock19451, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19462, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19439 = new_Block_with(PArray19440, empty_Array, PThreadedCode19441, 4, PAssign19442, PSend19446, PSend19462, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19463 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19439);
    Array PThreadedCode19438 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19439, (Optr)&t_send1, (Optr)PSend19463, (Optr)&t_method_return);
    Method PMethod19435 = new_Method_with(PArray19436, PArray19437, empty_Array, PThreadedCode19438, 1, PSend19463);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19435, PEG_SequenceExpression_Class);
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