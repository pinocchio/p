#include <lib/class/PEG/OrderedChoiceExpression.h>


Optr layout_PEG_OrderedChoiceExpression_Class_class;
Optr slot_PEG_OrderedChoiceExpression_children;
Optr layout_PEG_OrderedChoiceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19333 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_method_return);
    Method PMethod19332 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19333, 1, slot_PEG_OrderedChoiceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19332, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19337 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19336 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19337);
    Array PThreadedCode19335 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19336, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19337, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19334 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19335, 2, PAssign19336, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19334, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19341 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19340 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19341);
    Array PThreadedCode19339 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19340, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19341, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19338 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19339, 2, PAssign19340, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19338, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19343 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19346 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19348 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19350 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19352 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19353 = new_Send((Optr)PSend19352, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19357 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19356 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19357, (Optr)&t_block_return);
    Block PBlock19355 = new_Block_with(empty_Array, empty_Array, PThreadedCode19356, 1, PSend19357);
    // ifTrue:. 
    Send PSend19354 = new_Send((Optr)PSend19353, SMB_ifTrue_, 1, (Optr)PBlock19355);
    Array PThreadedCode19351 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19352, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19353, (Optr)&t_send_ifTrue_, (Optr)PSend19354, (Optr)PBlock19355, (Optr)&t_method_return);
    Block PBlock19349 = new_Block_with(PArray19350, empty_Array, PThreadedCode19351, 1, PSend19354);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19358 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19348, (Optr)PBlock19349);
    Array PThreadedCode19347 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19348, (Optr)&t_push_closure, (Optr)PBlock19349, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19358, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19345 = new_Block_with(PArray19346, empty_Array, PThreadedCode19347, 2, PSend19358, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19359 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19345);
    Array PThreadedCode19344 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19345, (Optr)&t_send1, (Optr)PSend19359, (Optr)&t_method_return);
    Method PMethod19342 = new_Method_with(PArray19343, empty_Array, empty_Array, PThreadedCode19344, 1, PSend19359);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19342, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19361 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19364 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19366 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19368 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19370 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19371 = new_Send((Optr)PSend19370, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19375 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19374 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19375, (Optr)&t_block_return);
    Block PBlock19373 = new_Block_with(empty_Array, empty_Array, PThreadedCode19374, 1, PSend19375);
    // ifTrue:. 
    Send PSend19372 = new_Send((Optr)PSend19371, SMB_ifTrue_, 1, (Optr)PBlock19373);
    Array PThreadedCode19369 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19370, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19371, (Optr)&t_send_ifTrue_, (Optr)PSend19372, (Optr)PBlock19373, (Optr)&t_method_return);
    Block PBlock19367 = new_Block_with(PArray19368, empty_Array, PThreadedCode19369, 1, PSend19372);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19376 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19366, (Optr)PBlock19367);
    Array PThreadedCode19365 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19366, (Optr)&t_push_closure, (Optr)PBlock19367, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19376, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19363 = new_Block_with(PArray19364, empty_Array, PThreadedCode19365, 2, PSend19376, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19377 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19363);
    Array PThreadedCode19362 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19363, (Optr)&t_send1, (Optr)PSend19377, (Optr)&t_method_return);
    Method PMethod19360 = new_Method_with(PArray19361, empty_Array, empty_Array, PThreadedCode19362, 1, PSend19377);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19360, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19379 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Variable VAR_convert_0_2 = new_Variable_named(L"convert", 0);
    Array PArray19380 = new_Array_with(2, (Optr)VAR_new_0_1, (Optr)VAR_convert_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend19382 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_isKindOf_, 1, (Optr)Array_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend19387 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asOrderedCollection, 0);
    Assign PAssign19386 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19387);
    Assign PAssign19388 = new_Assign((Optr)VAR_convert_0_2, (Optr)true_Const);
    Array PThreadedCode19385 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign19386, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19387, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19388, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19384 = new_Block_with(empty_Array, empty_Array, PThreadedCode19385, 2, PAssign19386, PAssign19388);
    // ifTrue:. 
    Send PSend19383 = new_Send((Optr)PSend19382, SMB_ifTrue_, 1, (Optr)PBlock19384);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19390 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19389 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19390);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19391 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19392 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19393 = new_Send((Optr)PSend19391, SMB__equals_, 1, (Optr)PSend19392);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19397 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19399 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19401 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19402 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19401);
    Array PThreadedCode19400 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19401, (Optr)&t_send1, (Optr)PSend19402, (Optr)&t_method_return);
    Block PBlock19398 = new_Block_with(PArray19399, empty_Array, PThreadedCode19400, 1, PSend19402);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19403 = new_Send((Optr)PSend19397, SMB_do_, 1, (Optr)PBlock19398);
    Array PThreadedCode19396 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19397, (Optr)&t_push_closure, (Optr)PBlock19398, (Optr)&t_send1, (Optr)PSend19403, (Optr)&t_block_return);
    Block PBlock19395 = new_Block_with(empty_Array, empty_Array, PThreadedCode19396, 1, PSend19403);
    // asChildParser. 
    Send PSend19406 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19407 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19406);
    Array PThreadedCode19405 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19406, (Optr)&t_send1, (Optr)PSend19407, (Optr)&t_block_return);
    Block PBlock19404 = new_Block_with(empty_Array, empty_Array, PThreadedCode19405, 1, PSend19407);
    // ifTrue:ifFalse:. 
    Send PSend19394 = new_Send((Optr)PSend19393, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19395, (Optr)PBlock19404);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19408 = new_Send((Optr)VAR_convert_0_2, SMB_isNil, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19413 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19412 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19413);
    Array PThreadedCode19411 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign19412, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19413, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19410 = new_Block_with(empty_Array, empty_Array, PThreadedCode19411, 1, PAssign19412);
    // ifFalse:. 
    Send PSend19409 = new_Send((Optr)PSend19408, SMB_ifFalse_, 1, (Optr)PBlock19410);
    Array PThreadedCode19381 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send1, (Optr)PSend19382, (Optr)&t_send_ifTrue_, (Optr)PSend19383, (Optr)PBlock19384, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19389, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19390, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19391, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19392, (Optr)&t_send1, (Optr)PSend19393, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19394, (Optr)PBlock19395, (Optr)PBlock19404, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_convert_0_2, (Optr)&t_send0, (Optr)PSend19408, (Optr)&t_send_ifFalse_, (Optr)PSend19409, (Optr)PBlock19410, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19378 = new_Method_with(PArray19379, PArray19380, empty_Array, PThreadedCode19381, 5, PSend19383, PAssign19389, PSend19394, PSend19409, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19378, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}

void init_PEG_PEGOrderedChoiceExpression_layout() {
    layout_PEG_OrderedChoiceExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_OrderedChoiceExpression = new_Symbol(L"OrderedChoiceExpression");
    slot_PEG_OrderedChoiceExpression_children = (Optr)new_Slot(0, L"children");
    layout_PEG_OrderedChoiceExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_OrderedChoiceExpression)->values[0] = slot_PEG_OrderedChoiceExpression_children; // children 
    PEG_OrderedChoiceExpression_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_OrderedChoiceExpression_Class_class);
    PEG_OrderedChoiceExpression_Class->layout = layout_PEG_OrderedChoiceExpression;
    PEG_OrderedChoiceExpression_Class->name = SMB_OrderedChoiceExpression;
    
}

void init_PEG_PEGOrderedChoiceExpression_methods() {
    init_SMB_children();
    init_SMB_asChildParser();
    init_SMB_initialize();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_SMB__lt__equals_();
    
}