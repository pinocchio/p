#include <lib/class/PEG/OrderedChoiceExpression.h>


Optr layout_PEG_OrderedChoiceExpression_Class_class;
Optr slot_PEG_OrderedChoiceExpression_children;
Optr layout_PEG_OrderedChoiceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19497 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_method_return);
    Method PMethod19496 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19497, 1, slot_PEG_OrderedChoiceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19496, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19501 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19500 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19501);
    Array PThreadedCode19499 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19500, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19501, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19498 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19499, 2, PAssign19500, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19498, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19505 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19504 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19505);
    Array PThreadedCode19503 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19504, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19505, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19502 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19503, 2, PAssign19504, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19502, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19507 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19510 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19512 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19514 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19516 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19517 = new_Send((Optr)PSend19516, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19521 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19520 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19521, (Optr)&t_block_return);
    Block PBlock19519 = new_Block_with(empty_Array, empty_Array, PThreadedCode19520, 1, PSend19521);
    // ifTrue:. 
    Send PSend19518 = new_Send((Optr)PSend19517, SMB_ifTrue_, 1, (Optr)PBlock19519);
    Array PThreadedCode19515 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19516, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19517, (Optr)&t_send_ifTrue_, (Optr)PSend19518, (Optr)PBlock19519, (Optr)&t_method_return);
    Block PBlock19513 = new_Block_with(PArray19514, empty_Array, PThreadedCode19515, 1, PSend19518);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19522 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19512, (Optr)PBlock19513);
    Array PThreadedCode19511 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19512, (Optr)&t_push_closure, (Optr)PBlock19513, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19522, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19509 = new_Block_with(PArray19510, empty_Array, PThreadedCode19511, 2, PSend19522, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19523 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19509);
    Array PThreadedCode19508 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19509, (Optr)&t_send1, (Optr)PSend19523, (Optr)&t_method_return);
    Method PMethod19506 = new_Method_with(PArray19507, empty_Array, empty_Array, PThreadedCode19508, 1, PSend19523);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19506, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19525 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19528 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19530 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19532 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19534 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19535 = new_Send((Optr)PSend19534, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19539 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19538 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19539, (Optr)&t_block_return);
    Block PBlock19537 = new_Block_with(empty_Array, empty_Array, PThreadedCode19538, 1, PSend19539);
    // ifTrue:. 
    Send PSend19536 = new_Send((Optr)PSend19535, SMB_ifTrue_, 1, (Optr)PBlock19537);
    Array PThreadedCode19533 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19534, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19535, (Optr)&t_send_ifTrue_, (Optr)PSend19536, (Optr)PBlock19537, (Optr)&t_method_return);
    Block PBlock19531 = new_Block_with(PArray19532, empty_Array, PThreadedCode19533, 1, PSend19536);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19540 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19530, (Optr)PBlock19531);
    Array PThreadedCode19529 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19530, (Optr)&t_push_closure, (Optr)PBlock19531, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19540, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19527 = new_Block_with(PArray19528, empty_Array, PThreadedCode19529, 2, PSend19540, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19541 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19527);
    Array PThreadedCode19526 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19527, (Optr)&t_send1, (Optr)PSend19541, (Optr)&t_method_return);
    Method PMethod19524 = new_Method_with(PArray19525, empty_Array, empty_Array, PThreadedCode19526, 1, PSend19541);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19524, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19543 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Variable VAR_convert_0_2 = new_Variable_named(L"convert", 0);
    Array PArray19544 = new_Array_with(2, (Optr)VAR_new_0_1, (Optr)VAR_convert_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend19546 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_isKindOf_, 1, (Optr)Array_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend19551 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asOrderedCollection, 0);
    Assign PAssign19550 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19551);
    Assign PAssign19552 = new_Assign((Optr)VAR_convert_0_2, (Optr)true_Const);
    Array PThreadedCode19549 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign19550, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19551, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19552, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19548 = new_Block_with(empty_Array, empty_Array, PThreadedCode19549, 2, PAssign19550, PAssign19552);
    // ifTrue:. 
    Send PSend19547 = new_Send((Optr)PSend19546, SMB_ifTrue_, 1, (Optr)PBlock19548);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19554 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19553 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19554);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19555 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19556 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19557 = new_Send((Optr)PSend19555, SMB__equals_, 1, (Optr)PSend19556);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19561 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19563 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19565 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19566 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19565);
    Array PThreadedCode19564 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19565, (Optr)&t_send1, (Optr)PSend19566, (Optr)&t_method_return);
    Block PBlock19562 = new_Block_with(PArray19563, empty_Array, PThreadedCode19564, 1, PSend19566);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19567 = new_Send((Optr)PSend19561, SMB_do_, 1, (Optr)PBlock19562);
    Array PThreadedCode19560 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19561, (Optr)&t_push_closure, (Optr)PBlock19562, (Optr)&t_send1, (Optr)PSend19567, (Optr)&t_block_return);
    Block PBlock19559 = new_Block_with(empty_Array, empty_Array, PThreadedCode19560, 1, PSend19567);
    // asChildParser. 
    Send PSend19570 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19571 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19570);
    Array PThreadedCode19569 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19570, (Optr)&t_send1, (Optr)PSend19571, (Optr)&t_block_return);
    Block PBlock19568 = new_Block_with(empty_Array, empty_Array, PThreadedCode19569, 1, PSend19571);
    // ifTrue:ifFalse:. 
    Send PSend19558 = new_Send((Optr)PSend19557, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19559, (Optr)PBlock19568);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19572 = new_Send((Optr)VAR_convert_0_2, SMB_isNil, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19577 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19576 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19577);
    Array PThreadedCode19575 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign19576, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19577, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19574 = new_Block_with(empty_Array, empty_Array, PThreadedCode19575, 1, PAssign19576);
    // ifFalse:. 
    Send PSend19573 = new_Send((Optr)PSend19572, SMB_ifFalse_, 1, (Optr)PBlock19574);
    Array PThreadedCode19545 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send1, (Optr)PSend19546, (Optr)&t_send_ifTrue_, (Optr)PSend19547, (Optr)PBlock19548, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19553, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19554, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19555, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19556, (Optr)&t_send1, (Optr)PSend19557, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19558, (Optr)PBlock19559, (Optr)PBlock19568, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_convert_0_2, (Optr)&t_send0, (Optr)PSend19572, (Optr)&t_send_ifFalse_, (Optr)PSend19573, (Optr)PBlock19574, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19542 = new_Method_with(PArray19543, PArray19544, empty_Array, PThreadedCode19545, 5, PSend19547, PAssign19553, PSend19558, PSend19573, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19542, PEG_OrderedChoiceExpression_Class);
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