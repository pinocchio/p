#include <lib/class/PEG/SequenceExpression.h>


Optr layout_PEG_SequenceExpression_Class_class;
Optr slot_PEG_SequenceExpression_children;
Optr layout_PEG_SequenceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19282 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_method_return);
    Method PMethod19281 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19282, 1, slot_PEG_SequenceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19281, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19286 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_asArray, 0);
    Assign PAssign19285 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19286);
    Array PThreadedCode19284 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19285, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19286, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19283 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19284, 2, PAssign19285, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19283, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19290 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19289 = new_Assign((Optr)slot_PEG_SequenceExpression_children, (Optr)PSend19290);
    Array PThreadedCode19288 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19289, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19290, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19287 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19288, 2, PAssign19289, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19287, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__lt__and_() {
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19292 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Array PArray19293 = new_Array_with(1, (Optr)VAR_new_0_1);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19296 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19295 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19296);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19297 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19298 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19299 = new_Send((Optr)PSend19297, SMB__equals_, 1, (Optr)PSend19298);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19303 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19305 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19307 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19308 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19307);
    Array PThreadedCode19306 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19307, (Optr)&t_send1, (Optr)PSend19308, (Optr)&t_method_return);
    Block PBlock19304 = new_Block_with(PArray19305, empty_Array, PThreadedCode19306, 1, PSend19308);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19309 = new_Send((Optr)PSend19303, SMB_do_, 1, (Optr)PBlock19304);
    Array PThreadedCode19302 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19303, (Optr)&t_push_closure, (Optr)PBlock19304, (Optr)&t_send1, (Optr)PSend19309, (Optr)&t_block_return);
    Block PBlock19301 = new_Block_with(empty_Array, empty_Array, PThreadedCode19302, 1, PSend19309);
    // asChildParser. 
    Send PSend19312 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19313 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_add_, 1, (Optr)PSend19312);
    Array PThreadedCode19311 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19312, (Optr)&t_send1, (Optr)PSend19313, (Optr)&t_block_return);
    Block PBlock19310 = new_Block_with(empty_Array, empty_Array, PThreadedCode19311, 1, PSend19313);
    // ifTrue:ifFalse:. 
    Send PSend19300 = new_Send((Optr)PSend19299, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19301, (Optr)PBlock19310);
    Array PThreadedCode19294 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign19295, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19296, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19297, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19298, (Optr)&t_send1, (Optr)PSend19299, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19300, (Optr)PBlock19301, (Optr)PBlock19310, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19291 = new_Method_with(PArray19292, PArray19293, empty_Array, PThreadedCode19294, 3, PAssign19295, PSend19300, self);
    
    MethodClosure MC_SMB__lt__and_ = new_MethodClosure((Method)PMethod19291, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB__lt__and_, MC_SMB__lt__and_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19315 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Variable VAR_outputPosition_0_2 = new_Variable_named(L"outputPosition", 0);
    Array PArray19316 = new_Array_with(2, (Optr)VAR_position_0_1, (Optr)VAR_outputPosition_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19319 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19322 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19321 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19322);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19325 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // position. 
    Send PSend19324 = new_Send((Optr)PSend19325, SMB_position, 0);
    Assign PAssign19323 = new_Assign((Optr)VAR_outputPosition_0_2, (Optr)PSend19324);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19326 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // parseOn:. 
    Send PSend19327 = new_Send((Optr)PSend19326, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19331 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19330 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19331, (Optr)&t_block_return);
    Block PBlock19329 = new_Block_with(empty_Array, empty_Array, PThreadedCode19330, 1, PSend19331);
    // ifFalse:. 
    Send PSend19328 = new_Send((Optr)PSend19327, SMB_ifFalse_, 1, (Optr)PBlock19329);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19332 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19334 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19336 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19337 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19338 = new_Send((Optr)PSend19337, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19342 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // stack. 
    Send PSend19343 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19344 = new_Send((Optr)PSend19343, SMB_zapTo_, 1, (Optr)VAR_outputPosition_0_2);
    // escape:. 
    Send PSend19345 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19341 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19342, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19343, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_2, (Optr)&t_send1, (Optr)PSend19344, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19345, (Optr)&t_block_return);
    Block PBlock19340 = new_Block_with(empty_Array, empty_Array, PThreadedCode19341, 3, PSend19342, PSend19344, PSend19345);
    // ifFalse:. 
    Send PSend19339 = new_Send((Optr)PSend19338, SMB_ifFalse_, 1, (Optr)PBlock19340);
    Array PThreadedCode19335 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19336, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19337, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19338, (Optr)&t_send_ifFalse_, (Optr)PSend19339, (Optr)PBlock19340, (Optr)&t_method_return);
    Block PBlock19333 = new_Block_with(PArray19334, empty_Array, PThreadedCode19335, 2, PSend19336, PSend19339);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19346 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19332, (Optr)PBlock19333);
    Array PThreadedCode19320 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19321, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19322, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19323, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19325, (Optr)&t_send0, (Optr)PSend19324, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19326, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19327, (Optr)&t_send_ifFalse_, (Optr)PSend19328, (Optr)PBlock19329, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19332, (Optr)&t_push_closure, (Optr)PBlock19333, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19346, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19318 = new_Block_with(PArray19319, empty_Array, PThreadedCode19320, 5, PAssign19321, PAssign19323, PSend19328, PSend19346, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19347 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19318);
    Array PThreadedCode19317 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19318, (Optr)&t_send1, (Optr)PSend19347, (Optr)&t_method_return);
    Method PMethod19314 = new_Method_with(PArray19315, PArray19316, empty_Array, PThreadedCode19317, 1, PSend19347);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19314, PEG_SequenceExpression_Class);
    store_method(PEG_SequenceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19349 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray19350 = new_Array_with(1, (Optr)VAR_position_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19353 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19356 = new_Send((Optr)VAR_input_0_0, SMB_position, 0);
    Assign PAssign19355 = new_Assign((Optr)VAR_position_0_1, (Optr)PSend19356);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend19357 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)int_1_Const);
    // omitMatch:. 
    Send PSend19358 = new_Send((Optr)PSend19357, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19362 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19361 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19362, (Optr)&t_block_return);
    Block PBlock19360 = new_Block_with(empty_Array, empty_Array, PThreadedCode19361, 1, PSend19362);
    // ifFalse:. 
    Send PSend19359 = new_Send((Optr)PSend19358, SMB_ifFalse_, 1, (Optr)PBlock19360);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19363 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19365 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19367 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // at:. 
    Send PSend19368 = new_Send((Optr)slot_PEG_SequenceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19369 = new_Send((Optr)PSend19368, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend19373 = new_Send((Optr)VAR_input_0_0, SMB_position_, 1, (Optr)VAR_position_0_1);
    // escape:. 
    Send PSend19374 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19372 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_send1, (Optr)PSend19373, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19374, (Optr)&t_block_return);
    Block PBlock19371 = new_Block_with(empty_Array, empty_Array, PThreadedCode19372, 2, PSend19373, PSend19374);
    // ifFalse:. 
    Send PSend19370 = new_Send((Optr)PSend19369, SMB_ifFalse_, 1, (Optr)PBlock19371);
    Array PThreadedCode19366 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19367, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19368, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19369, (Optr)&t_send_ifFalse_, (Optr)PSend19370, (Optr)PBlock19371, (Optr)&t_method_return);
    Block PBlock19364 = new_Block_with(PArray19365, empty_Array, PThreadedCode19366, 2, PSend19367, PSend19370);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19375 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend19363, (Optr)PBlock19364);
    Array PThreadedCode19354 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign19355, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19356, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19357, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19358, (Optr)&t_send_ifFalse_, (Optr)PSend19359, (Optr)PBlock19360, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_PEG_SequenceExpression_children, (Optr)&t_send0, (Optr)PSend19363, (Optr)&t_push_closure, (Optr)PBlock19364, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19375, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19352 = new_Block_with(PArray19353, empty_Array, PThreadedCode19354, 4, PAssign19355, PSend19359, PSend19375, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19376 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19352);
    Array PThreadedCode19351 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19352, (Optr)&t_send1, (Optr)PSend19376, (Optr)&t_method_return);
    Method PMethod19348 = new_Method_with(PArray19349, PArray19350, empty_Array, PThreadedCode19351, 1, PSend19376);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19348, PEG_SequenceExpression_Class);
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