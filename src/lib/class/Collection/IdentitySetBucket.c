#include <lib/class/Collection/IdentitySetBucket.h>


Optr layout_Collection_IdentitySetBucket_Class_class;
Optr layout_Collection_IdentitySetBucket;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7566 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7569 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7572 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7574 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7575 = new_Send((Optr)PSend7574, SMB__pequals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend7579 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7580 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7578 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7579, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7580, (Optr)&t_block_return);
    Block PBlock7577 = new_Block_with(empty_Array, empty_Array, PThreadedCode7578, 2, PSend7579, PSend7580);
    // ifTrue:. 
    Send PSend7576 = new_Send((Optr)PSend7575, SMB_ifTrue_, 1, (Optr)PBlock7577);
    Array PThreadedCode7573 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7574, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7575, (Optr)&t_send_ifTrue_, (Optr)PSend7576, (Optr)PBlock7577, (Optr)&t_method_return);
    Block PBlock7571 = new_Block_with(PArray7572, empty_Array, PThreadedCode7573, 1, PSend7576);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7581 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7571);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7582 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode7570 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7571, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7581, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend7582, (Optr)&t_method_return);
    Block PBlock7568 = new_Block_with(PArray7569, empty_Array, PThreadedCode7570, 2, PSend7581, PSend7582);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7583 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7568);
    Array PThreadedCode7567 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7568, (Optr)&t_send1, (Optr)PSend7583, (Optr)&t_method_return);
    Method PMethod7565 = new_Method_with(PArray7566, empty_Array, empty_Array, PThreadedCode7567, 1, PSend7583);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod7565, Collection_IdentitySetBucket_Class);
    store_method(Collection_IdentitySetBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7585 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7588 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7591 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7593 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7594 = new_Send((Optr)PSend7593, SMB__pequals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7598 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode7597 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend7598, (Optr)&t_block_return);
    Block PBlock7596 = new_Block_with(empty_Array, empty_Array, PThreadedCode7597, 1, PSend7598);
    // ifTrue:. 
    Send PSend7595 = new_Send((Optr)PSend7594, SMB_ifTrue_, 1, (Optr)PBlock7596);
    Array PThreadedCode7592 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7593, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7594, (Optr)&t_send_ifTrue_, (Optr)PSend7595, (Optr)PBlock7596, (Optr)&t_method_return);
    Block PBlock7590 = new_Block_with(PArray7591, empty_Array, PThreadedCode7592, 1, PSend7595);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7599 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7590);
    Array PThreadedCode7589 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7590, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7599, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock7587 = new_Block_with(PArray7588, empty_Array, PThreadedCode7589, 2, PSend7599, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7600 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7587);
    Array PThreadedCode7586 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7587, (Optr)&t_send1, (Optr)PSend7600, (Optr)&t_method_return);
    Method PMethod7584 = new_Method_with(PArray7585, empty_Array, empty_Array, PThreadedCode7586, 1, PSend7600);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod7584, Collection_IdentitySetBucket_Class);
    store_method(Collection_IdentitySetBucket_Class, SMB_includes_, MC_SMB_includes_);
}

void init_Collection_PIdentitySetBucket_layout() {
    layout_Collection_IdentitySetBucket_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_IdentitySetBucket_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_IdentitySetBucket_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_IdentitySetBucket_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_IdentitySetBucket_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_IdentitySetBucket_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_IdentitySetBucket = new_Symbol(L"IdentitySetBucket");
    layout_Collection_IdentitySetBucket = (Optr)create_layout_with_vars(ArrayLayout_Class, 1);
    ((Array)layout_Collection_IdentitySetBucket)->values[0] = slot_Collection_AbstractBucket_bucketSize;
    Collection_IdentitySetBucket_Class = (Class)new_Class(Collection_SetBucket_Class, layout_Collection_IdentitySetBucket_Class_class);
    Collection_IdentitySetBucket_Class->layout = layout_Collection_IdentitySetBucket;
    Collection_IdentitySetBucket_Class->name = SMB_IdentitySetBucket;
    
}

void init_Collection_PIdentitySetBucket_methods() {
    init_SMB_remove_ifAbsent_();
    init_SMB_includes_();
    
}