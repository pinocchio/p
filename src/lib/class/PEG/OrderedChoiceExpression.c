#include <lib/class/PEG/OrderedChoiceExpression.h>


Optr layout_PEG_OrderedChoiceExpression_Class_class;
Optr slot_PEG_OrderedChoiceExpression_children;
Optr layout_PEG_OrderedChoiceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19308 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_method_return);
    Method PMethod19307 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19308, 1, slot_PEG_OrderedChoiceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19307, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19312 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19311 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19312);
    Array PThreadedCode19310 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19311, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19312, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19309 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19310, 2, PAssign19311, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19309, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19316 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19315 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19316);
    Array PThreadedCode19314 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19315, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19316, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19313 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19314, 2, PAssign19315, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19313, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19318 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19321 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19323 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19325 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19327 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19328 = new_Send((Optr)PSend19327, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19332 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19331 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19332, (Optr)&t_block_return);
    Block PBlock19330 = new_Block_with(empty_Array, empty_Array, PThreadedCode19331, 1, PSend19332);
    // ifTrue:. 
    Send PSend19329 = new_Send((Optr)PSend19328, SMB_ifTrue_, 1, (Optr)PBlock19330);
    Array PThreadedCode19326 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19327, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19328, (Optr)&t_send_ifTrue_, (Optr)PSend19329, (Optr)PBlock19330, (Optr)&t_method_return);
    Block PBlock19324 = new_Block_with(PArray19325, empty_Array, PThreadedCode19326, 1, PSend19329);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19333 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19323, (Optr)PBlock19324);
    Array PThreadedCode19322 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19323, (Optr)&t_push_closure, (Optr)PBlock19324, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19333, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19320 = new_Block_with(PArray19321, empty_Array, PThreadedCode19322, 2, PSend19333, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19334 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19320);
    Array PThreadedCode19319 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19320, (Optr)&t_send1, (Optr)PSend19334, (Optr)&t_method_return);
    Method PMethod19317 = new_Method_with(PArray19318, empty_Array, empty_Array, PThreadedCode19319, 1, PSend19334);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19317, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19336 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19339 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19341 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19343 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19345 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19346 = new_Send((Optr)PSend19345, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19350 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19349 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19350, (Optr)&t_block_return);
    Block PBlock19348 = new_Block_with(empty_Array, empty_Array, PThreadedCode19349, 1, PSend19350);
    // ifTrue:. 
    Send PSend19347 = new_Send((Optr)PSend19346, SMB_ifTrue_, 1, (Optr)PBlock19348);
    Array PThreadedCode19344 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19345, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19346, (Optr)&t_send_ifTrue_, (Optr)PSend19347, (Optr)PBlock19348, (Optr)&t_method_return);
    Block PBlock19342 = new_Block_with(PArray19343, empty_Array, PThreadedCode19344, 1, PSend19347);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19351 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19341, (Optr)PBlock19342);
    Array PThreadedCode19340 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19341, (Optr)&t_push_closure, (Optr)PBlock19342, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19351, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19338 = new_Block_with(PArray19339, empty_Array, PThreadedCode19340, 2, PSend19351, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19352 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19338);
    Array PThreadedCode19337 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19338, (Optr)&t_send1, (Optr)PSend19352, (Optr)&t_method_return);
    Method PMethod19335 = new_Method_with(PArray19336, empty_Array, empty_Array, PThreadedCode19337, 1, PSend19352);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19335, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19354 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Variable VAR_convert_0_2 = new_Variable_named(L"convert", 0);
    Array PArray19355 = new_Array_with(2, (Optr)VAR_new_0_1, (Optr)VAR_convert_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend19357 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_isKindOf_, 1, (Optr)Array_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend19362 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asOrderedCollection, 0);
    Assign PAssign19361 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19362);
    Assign PAssign19363 = new_Assign((Optr)VAR_convert_0_2, (Optr)true_Const);
    Array PThreadedCode19360 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign19361, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19362, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19363, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19359 = new_Block_with(empty_Array, empty_Array, PThreadedCode19360, 2, PAssign19361, PAssign19363);
    // ifTrue:. 
    Send PSend19358 = new_Send((Optr)PSend19357, SMB_ifTrue_, 1, (Optr)PBlock19359);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19365 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19364 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19365);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19366 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19367 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19368 = new_Send((Optr)PSend19366, SMB__equals_, 1, (Optr)PSend19367);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19372 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19374 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19376 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19377 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19376);
    Array PThreadedCode19375 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19376, (Optr)&t_send1, (Optr)PSend19377, (Optr)&t_method_return);
    Block PBlock19373 = new_Block_with(PArray19374, empty_Array, PThreadedCode19375, 1, PSend19377);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19378 = new_Send((Optr)PSend19372, SMB_do_, 1, (Optr)PBlock19373);
    Array PThreadedCode19371 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19372, (Optr)&t_push_closure, (Optr)PBlock19373, (Optr)&t_send1, (Optr)PSend19378, (Optr)&t_block_return);
    Block PBlock19370 = new_Block_with(empty_Array, empty_Array, PThreadedCode19371, 1, PSend19378);
    // asChildParser. 
    Send PSend19381 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19382 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19381);
    Array PThreadedCode19380 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19381, (Optr)&t_send1, (Optr)PSend19382, (Optr)&t_block_return);
    Block PBlock19379 = new_Block_with(empty_Array, empty_Array, PThreadedCode19380, 1, PSend19382);
    // ifTrue:ifFalse:. 
    Send PSend19369 = new_Send((Optr)PSend19368, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19370, (Optr)PBlock19379);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19383 = new_Send((Optr)VAR_convert_0_2, SMB_isNil, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19388 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19387 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19388);
    Array PThreadedCode19386 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign19387, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19388, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19385 = new_Block_with(empty_Array, empty_Array, PThreadedCode19386, 1, PAssign19387);
    // ifFalse:. 
    Send PSend19384 = new_Send((Optr)PSend19383, SMB_ifFalse_, 1, (Optr)PBlock19385);
    Array PThreadedCode19356 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send1, (Optr)PSend19357, (Optr)&t_send_ifTrue_, (Optr)PSend19358, (Optr)PBlock19359, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19364, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19365, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19366, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19367, (Optr)&t_send1, (Optr)PSend19368, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19369, (Optr)PBlock19370, (Optr)PBlock19379, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_convert_0_2, (Optr)&t_send0, (Optr)PSend19383, (Optr)&t_send_ifFalse_, (Optr)PSend19384, (Optr)PBlock19385, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19353 = new_Method_with(PArray19354, PArray19355, empty_Array, PThreadedCode19356, 5, PSend19358, PAssign19364, PSend19369, PSend19384, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19353, PEG_OrderedChoiceExpression_Class);
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