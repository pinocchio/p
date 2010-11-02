#include <lib/class/Collection/SetBucket.h>


Optr layout_Collection_SetBucket_Class_class;
Optr layout_Collection_SetBucket;


static void init_SMB_addNew_() {
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray7482 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend7485 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign7484 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend7485);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7486 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PAssign7484, (Optr)VAR_value_0_0);
    Array PThreadedCode7483 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)PAssign7484, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7485, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send2, (Optr)PSend7486, (Optr)&t_method_return);
    Method PMethod7481 = new_Method_with(PArray7482, empty_Array, empty_Array, PThreadedCode7483, 1, PSend7486);
    
    MethodClosure MC_SMB_addNew_ = new_MethodClosure((Method)PMethod7481, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_addNew_, MC_SMB_addNew_);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7488 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7491 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7494 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7496 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend7497 = new_Send((Optr)PSend7496, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend7501 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7502 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7500 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7501, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7502, (Optr)&t_block_return);
    Block PBlock7499 = new_Block_with(empty_Array, empty_Array, PThreadedCode7500, 2, PSend7501, PSend7502);
    // ifTrue:. 
    Send PSend7498 = new_Send((Optr)PSend7497, SMB_ifTrue_, 1, (Optr)PBlock7499);
    Array PThreadedCode7495 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7496, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7497, (Optr)&t_send_ifTrue_, (Optr)PSend7498, (Optr)PBlock7499, (Optr)&t_method_return);
    Block PBlock7493 = new_Block_with(PArray7494, empty_Array, PThreadedCode7495, 1, PSend7498);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7503 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7493);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7504 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode7492 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7493, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend7504, (Optr)&t_method_return);
    Block PBlock7490 = new_Block_with(PArray7491, empty_Array, PThreadedCode7492, 2, PSend7503, PSend7504);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7505 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7490);
    Array PThreadedCode7489 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7490, (Optr)&t_send1, (Optr)PSend7505, (Optr)&t_method_return);
    Method PMethod7487 = new_Method_with(PArray7488, empty_Array, empty_Array, PThreadedCode7489, 1, PSend7505);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod7487, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7507 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7510 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7513 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7515 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend7516 = new_Send((Optr)PSend7515, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7520 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode7519 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend7520, (Optr)&t_block_return);
    Block PBlock7518 = new_Block_with(empty_Array, empty_Array, PThreadedCode7519, 1, PSend7520);
    // ifTrue:. 
    Send PSend7517 = new_Send((Optr)PSend7516, SMB_ifTrue_, 1, (Optr)PBlock7518);
    Array PThreadedCode7514 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7515, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7516, (Optr)&t_send_ifTrue_, (Optr)PSend7517, (Optr)PBlock7518, (Optr)&t_method_return);
    Block PBlock7512 = new_Block_with(PArray7513, empty_Array, PThreadedCode7514, 1, PSend7517);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7521 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7512);
    Array PThreadedCode7511 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7512, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7521, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock7509 = new_Block_with(PArray7510, empty_Array, PThreadedCode7511, 2, PSend7521, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7522 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7509);
    Array PThreadedCode7508 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7509, (Optr)&t_send1, (Optr)PSend7522, (Optr)&t_method_return);
    Method PMethod7506 = new_Method_with(PArray7507, empty_Array, empty_Array, PThreadedCode7508, 1, PSend7522);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod7506, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_removeAt_() {
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray7524 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7526 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_AbstractBucket_bucketSize);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7527 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_anInteger_0_0, (Optr)PSend7526);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend7529 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign7528 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend7529);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7530 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend7531 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend7530, (Optr)nil_Const);
    Array PThreadedCode7525 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_send1, (Optr)PSend7526, (Optr)&t_send2, (Optr)PSend7527, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7528, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7529, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7530, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend7531, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7523 = new_Method_with(PArray7524, empty_Array, empty_Array, PThreadedCode7525, 4, PSend7527, PAssign7528, PSend7531, self);
    
    MethodClosure MC_SMB_removeAt_ = new_MethodClosure((Method)PMethod7523, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_removeAt_, MC_SMB_removeAt_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7533 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray7536 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7538 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7539 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend7538);
    Array PThreadedCode7537 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend7538, (Optr)&t_send1, (Optr)PSend7539, (Optr)&t_method_return);
    Block PBlock7535 = new_Block_with(PArray7536, empty_Array, PThreadedCode7537, 1, PSend7539);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7540 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7535);
    Array PThreadedCode7534 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7535, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7540, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7532 = new_Method_with(PArray7533, empty_Array, empty_Array, PThreadedCode7534, 2, PSend7540, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod7532, Collection_SetBucket_Class);
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