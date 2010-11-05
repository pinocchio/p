#include <lib/class/PEG/SequenceExpression.h>


Optr layout_PEG_SequenceExpression_Class_class;
Optr slot_PEG_SequenceExpression_children;
Optr layout_PEG_SequenceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19312 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_method_return);
    Method PMethod19311 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19312, 1, slot_PEG_SequenceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19311, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19316 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_asArray, 0);
    Assign PAssign19315 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19316);
    Array PThreadedCode19314 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19315, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19316, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19313 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19314, 2, PAssign19315, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19313, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19320 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19319 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19320);
    Array PThreadedCode19318 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19319, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19320, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19317 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19318, 2, PAssign19319, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19317, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__lt__and_() {
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19322 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Array PArray19323 = new_Array_with(1, (Optr)VAR_new_0_1);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19326 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19325 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19326);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19327 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19328 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19329 = new_Send((Optr)PSend19327, SMB__equals_, 1, (Optr)PSend19328);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19333 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19335 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19337 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19338 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19337);
    Array PThreadedCode19336 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19337, (Optr)&t_send1, (Optr)PSend19338, (Optr)&t_method_return);
    Block PBlock19334 = new_Block_with(PArray19335, empty_Array, PThreadedCode19336, 1, PSend19338);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19339 = new_Send((Optr)PSend19333, SMB_do_, 1, (Optr)PBlock19334);
    Array PThreadedCode19332 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19333, (Optr)&t_push_closure, (Optr)PBlock19334, (Optr)&t_send1, (Optr)PSend19339, (Optr)&t_block_return);
    Block PBlock19331 = new_Block_with(empty_Array, empty_Array, PThreadedCode19332, 1, PSend19339);
    // asChildParser. 
    Send PSend19342 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19343 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19342);
    Array PThreadedCode19341 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19342, (Optr)&t_send1, (Optr)PSend19343, (Optr)&t_block_return);
    Block PBlock19340 = new_Block_with(empty_Array, empty_Array, PThreadedCode19341, 1, PSend19343);
    // ifTrue:ifFalse:. 
    Send PSend19330 = new_Send((Optr)PSend19329, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19331, (Optr)PBlock19340);
    Array PThreadedCode19324 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign19325, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19326, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19327, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19328, (Optr)&t_send1, (Optr)PSend19329, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19330, (Optr)PBlock19331, (Optr)PBlock19340, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19321 = new_Method_with(PArray19322, PArray19323, empty_Array, PThreadedCode19324, 3, PAssign19325, PSend19330, self);
    
    MethodClosure MC_SMB__lt__and_ = new_MethodClosure((Method)PMethod19321, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB__lt__and_, MC_SMB__lt__and_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19345 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19346 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19349 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19352 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19351 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19352);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19355 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // position. 
    Send PSend19354 = new_Send((Optr)PSend19355, SMB_position, 0);
    Assign PAssign19353 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19354);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19356 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19357 = new_Send((Optr)PSend19356, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19361 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19360 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19361, (Optr)&t_block_return);
    Block PBlock19359 = new_Block_with(empty_Array, empty_Array, PThreadedCode19360, 1, PSend19361);
    // ifFalse:. 
    Send PSend19358 = new_Send((Optr)PSend19357, SMB_ifFalse_, 1, (Optr)PBlock19359);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19362 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19364 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19366 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19367 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19368 = new_Send((Optr)PSend19367, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19372 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19373 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19374 = new_Send((Optr)PSend19373, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19375 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19371 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19372, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19373, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19374, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19375, (Optr)&t_block_return);
    Block PBlock19370 = new_Block_with(empty_Array, empty_Array, PThreadedCode19371, 3, PSend19372, PSend19374, PSend19375);
    // ifFalse:. 
    Send PSend19369 = new_Send((Optr)PSend19368, SMB_ifFalse_, 1, (Optr)PBlock19370);
    Array PThreadedCode19365 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19366, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19367, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19368, (Optr)&t_send_ifFalse_, (Optr)PSend19369, (Optr)PBlock19370, (Optr)&t_method_return);
    Block PBlock19363 = new_Block_with(PArray19364, empty_Array, PThreadedCode19365, 2, PSend19366, PSend19369);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19376 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19362, (Optr)PBlock19363);
    Array PThreadedCode19350 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19351, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19352, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19353, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19355, (Optr)&t_send0, (Optr)PSend19354, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19356, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19357, (Optr)&t_send_ifFalse_, (Optr)PSend19358, (Optr)PBlock19359, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19362, (Optr)&t_push_closure, (Optr)PBlock19363, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19376, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19348 = new_Block_with(PArray19349, empty_Array, PThreadedCode19350, 5, PAssign19351, PAssign19353, PSend19358, PSend19376, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19377 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19348);
    Array PThreadedCode19347 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19348, (Optr)&t_send1, (Optr)PSend19377, (Optr)&t_method_return);
    Method PMethod19344 = new_Method_with(PArray19345, PArray19346, empty_Array, PThreadedCode19347, 1, PSend19377);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19344, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19379 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19380 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19383 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19386 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19385 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19386);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19387 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19388 = new_Send((Optr)PSend19387, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19392 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19391 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19392, (Optr)&t_block_return);
    Block PBlock19390 = new_Block_with(empty_Array, empty_Array, PThreadedCode19391, 1, PSend19392);
    // ifFalse:. 
    Send PSend19389 = new_Send((Optr)PSend19388, SMB_ifFalse_, 1, (Optr)PBlock19390);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19393 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19395 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19397 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19398 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19399 = new_Send((Optr)PSend19398, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19403 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19404 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19402 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19403, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19404, (Optr)&t_block_return);
    Block PBlock19401 = new_Block_with(empty_Array, empty_Array, PThreadedCode19402, 2, PSend19403, PSend19404);
    // ifFalse:. 
    Send PSend19400 = new_Send((Optr)PSend19399, SMB_ifFalse_, 1, (Optr)PBlock19401);
    Array PThreadedCode19396 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19397, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19398, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19399, (Optr)&t_send_ifFalse_, (Optr)PSend19400, (Optr)PBlock19401, (Optr)&t_method_return);
    Block PBlock19394 = new_Block_with(PArray19395, empty_Array, PThreadedCode19396, 2, PSend19397, PSend19400);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19405 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19393, (Optr)PBlock19394);
    Array PThreadedCode19384 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19385, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19387, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19388, (Optr)&t_send_ifFalse_, (Optr)PSend19389, (Optr)PBlock19390, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19393, (Optr)&t_push_closure, (Optr)PBlock19394, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19405, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19382 = new_Block_with(PArray19383, empty_Array, PThreadedCode19384, 4, PAssign19385, PSend19389, PSend19405, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19406 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19382);
    Array PThreadedCode19381 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19382, (Optr)&t_send1, (Optr)PSend19406, (Optr)&t_method_return);
    Method PMethod19378 = new_Method_with(PArray19379, PArray19380, empty_Array, PThreadedCode19381, 1, PSend19406);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19378, PEG_SequenceExpression_Class);
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