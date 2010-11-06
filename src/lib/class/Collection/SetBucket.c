#include <lib/class/Collection/SetBucket.h>


Optr layout_Collection_SetBucket_Class_class;
Optr layout_Collection_SetBucket;


static void init_SMB_addNew_() {
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray7551 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend7554 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign7553 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend7554);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7555 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PAssign7553, (Optr)VAR_value_0_0);
    Array PThreadedCode7552 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)PAssign7553, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7554, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send2, (Optr)PSend7555, (Optr)&t_method_return);
    Method PMethod7550 = new_Method_with(PArray7551, empty_Array, empty_Array, PThreadedCode7552, 1, PSend7555);
    
    MethodClosure MC_SMB_addNew_ = new_MethodClosure((Method)PMethod7550, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_addNew_, MC_SMB_addNew_);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7557 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7560 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7563 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7565 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend7566 = new_Send((Optr)PSend7565, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend7570 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7571 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7569 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7570, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7571, (Optr)&t_block_return);
    Block PBlock7568 = new_Block_with(empty_Array, empty_Array, PThreadedCode7569, 2, PSend7570, PSend7571);
    // ifTrue:. 
    Send PSend7567 = new_Send((Optr)PSend7566, SMB_ifTrue_, 1, (Optr)PBlock7568);
    Array PThreadedCode7564 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7565, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7566, (Optr)&t_send_ifTrue_, (Optr)PSend7567, (Optr)PBlock7568, (Optr)&t_method_return);
    Block PBlock7562 = new_Block_with(PArray7563, empty_Array, PThreadedCode7564, 1, PSend7567);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7572 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7562);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7573 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode7561 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7562, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7572, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend7573, (Optr)&t_method_return);
    Block PBlock7559 = new_Block_with(PArray7560, empty_Array, PThreadedCode7561, 2, PSend7572, PSend7573);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7574 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7559);
    Array PThreadedCode7558 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7559, (Optr)&t_send1, (Optr)PSend7574, (Optr)&t_method_return);
    Method PMethod7556 = new_Method_with(PArray7557, empty_Array, empty_Array, PThreadedCode7558, 1, PSend7574);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod7556, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7576 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7579 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7582 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7584 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend7585 = new_Send((Optr)PSend7584, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7589 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode7588 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend7589, (Optr)&t_block_return);
    Block PBlock7587 = new_Block_with(empty_Array, empty_Array, PThreadedCode7588, 1, PSend7589);
    // ifTrue:. 
    Send PSend7586 = new_Send((Optr)PSend7585, SMB_ifTrue_, 1, (Optr)PBlock7587);
    Array PThreadedCode7583 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7584, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7585, (Optr)&t_send_ifTrue_, (Optr)PSend7586, (Optr)PBlock7587, (Optr)&t_method_return);
    Block PBlock7581 = new_Block_with(PArray7582, empty_Array, PThreadedCode7583, 1, PSend7586);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7590 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7581);
    Array PThreadedCode7580 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7581, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7590, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock7578 = new_Block_with(PArray7579, empty_Array, PThreadedCode7580, 2, PSend7590, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7591 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7578);
    Array PThreadedCode7577 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7578, (Optr)&t_send1, (Optr)PSend7591, (Optr)&t_method_return);
    Method PMethod7575 = new_Method_with(PArray7576, empty_Array, empty_Array, PThreadedCode7577, 1, PSend7591);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod7575, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_removeAt_() {
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray7593 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7595 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_AbstractBucket_bucketSize);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7596 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_anInteger_0_0, (Optr)PSend7595);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend7598 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign7597 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend7598);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7599 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend7600 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend7599, (Optr)nil_Const);
    Array PThreadedCode7594 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_send1, (Optr)PSend7595, (Optr)&t_send2, (Optr)PSend7596, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7597, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7598, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7599, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend7600, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7592 = new_Method_with(PArray7593, empty_Array, empty_Array, PThreadedCode7594, 4, PSend7596, PAssign7597, PSend7600, self);
    
    MethodClosure MC_SMB_removeAt_ = new_MethodClosure((Method)PMethod7592, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_removeAt_, MC_SMB_removeAt_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7602 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray7605 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7607 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7608 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend7607);
    Array PThreadedCode7606 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend7607, (Optr)&t_send1, (Optr)PSend7608, (Optr)&t_method_return);
    Block PBlock7604 = new_Block_with(PArray7605, empty_Array, PThreadedCode7606, 1, PSend7608);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7609 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7604);
    Array PThreadedCode7603 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7604, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7609, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7601 = new_Method_with(PArray7602, empty_Array, empty_Array, PThreadedCode7603, 2, PSend7609, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod7601, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_do_, MC_SMB_do_);
}

void init_Collection_PSetBucket_layout() {
    layout_Collection_SetBucket_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_SetBucket_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_SetBucket_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_SetBucket_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_SetBucket_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_SetBucket_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_SetBucket = new_Symbol(L"SetBucket");
    layout_Collection_SetBucket = (Optr)create_layout_with_vars(ArrayLayout_Class, 1);
    ((Array)layout_Collection_SetBucket)->values[0] = slot_Collection_AbstractBucket_bucketSize;
    Collection_SetBucket_Class = (Class)new_Class(Collection_AbstractBucket_Class, layout_Collection_SetBucket_Class_class);
    Collection_SetBucket_Class->layout = layout_Collection_SetBucket;
    Collection_SetBucket_Class->name = SMB_SetBucket;
    
}

void init_Collection_PSetBucket_methods() {
    init_SMB_addNew_();
    init_SMB_remove_ifAbsent_();
    init_SMB_includes_();
    init_SMB_removeAt_();
    init_SMB_do_();
    
}