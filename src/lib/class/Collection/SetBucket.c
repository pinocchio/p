#include <lib/class/Collection/SetBucket.h>


Optr layout_Collection_SetBucket_Class_class;
Optr layout_Collection_SetBucket;


static void init_SMB_addNew_() {
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray7506 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend7509 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign7508 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend7509);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7510 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PAssign7508, (Optr)VAR_value_0_0);
    Array PThreadedCode7507 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)PAssign7508, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7509, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send2, (Optr)PSend7510, (Optr)&t_method_return);
    Method PMethod7505 = new_Method_with(PArray7506, empty_Array, empty_Array, PThreadedCode7507, 1, PSend7510);
    
    MethodClosure MC_SMB_addNew_ = new_MethodClosure((Method)PMethod7505, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_addNew_, MC_SMB_addNew_);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7512 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7515 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7518 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7520 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend7521 = new_Send((Optr)PSend7520, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend7525 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7526 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7524 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7525, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7526, (Optr)&t_block_return);
    Block PBlock7523 = new_Block_with(empty_Array, empty_Array, PThreadedCode7524, 2, PSend7525, PSend7526);
    // ifTrue:. 
    Send PSend7522 = new_Send((Optr)PSend7521, SMB_ifTrue_, 1, (Optr)PBlock7523);
    Array PThreadedCode7519 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7520, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7521, (Optr)&t_send_ifTrue_, (Optr)PSend7522, (Optr)PBlock7523, (Optr)&t_method_return);
    Block PBlock7517 = new_Block_with(PArray7518, empty_Array, PThreadedCode7519, 1, PSend7522);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7527 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7517);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7528 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode7516 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7517, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7527, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend7528, (Optr)&t_method_return);
    Block PBlock7514 = new_Block_with(PArray7515, empty_Array, PThreadedCode7516, 2, PSend7527, PSend7528);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7529 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7514);
    Array PThreadedCode7513 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7514, (Optr)&t_send1, (Optr)PSend7529, (Optr)&t_method_return);
    Method PMethod7511 = new_Method_with(PArray7512, empty_Array, empty_Array, PThreadedCode7513, 1, PSend7529);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod7511, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7531 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7534 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7537 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7539 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend7540 = new_Send((Optr)PSend7539, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7544 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode7543 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend7544, (Optr)&t_block_return);
    Block PBlock7542 = new_Block_with(empty_Array, empty_Array, PThreadedCode7543, 1, PSend7544);
    // ifTrue:. 
    Send PSend7541 = new_Send((Optr)PSend7540, SMB_ifTrue_, 1, (Optr)PBlock7542);
    Array PThreadedCode7538 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7539, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7540, (Optr)&t_send_ifTrue_, (Optr)PSend7541, (Optr)PBlock7542, (Optr)&t_method_return);
    Block PBlock7536 = new_Block_with(PArray7537, empty_Array, PThreadedCode7538, 1, PSend7541);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7545 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7536);
    Array PThreadedCode7535 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7536, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7545, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock7533 = new_Block_with(PArray7534, empty_Array, PThreadedCode7535, 2, PSend7545, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7546 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7533);
    Array PThreadedCode7532 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7533, (Optr)&t_send1, (Optr)PSend7546, (Optr)&t_method_return);
    Method PMethod7530 = new_Method_with(PArray7531, empty_Array, empty_Array, PThreadedCode7532, 1, PSend7546);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod7530, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_removeAt_() {
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray7548 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7550 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_AbstractBucket_bucketSize);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7551 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_anInteger_0_0, (Optr)PSend7550);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend7553 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign7552 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend7553);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7554 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend7555 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend7554, (Optr)nil_Const);
    Array PThreadedCode7549 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_send1, (Optr)PSend7550, (Optr)&t_send2, (Optr)PSend7551, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7552, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7553, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7554, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend7555, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7547 = new_Method_with(PArray7548, empty_Array, empty_Array, PThreadedCode7549, 4, PSend7551, PAssign7552, PSend7555, self);
    
    MethodClosure MC_SMB_removeAt_ = new_MethodClosure((Method)PMethod7547, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_removeAt_, MC_SMB_removeAt_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7557 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray7560 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7562 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7563 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend7562);
    Array PThreadedCode7561 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend7562, (Optr)&t_send1, (Optr)PSend7563, (Optr)&t_method_return);
    Block PBlock7559 = new_Block_with(PArray7560, empty_Array, PThreadedCode7561, 1, PSend7563);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7564 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7559);
    Array PThreadedCode7558 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7559, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7564, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7556 = new_Method_with(PArray7557, empty_Array, empty_Array, PThreadedCode7558, 2, PSend7564, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod7556, Collection_SetBucket_Class);
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