#include <lib/class/Collection/IdentitySetBucket.h>


Optr layout_Collection_IdentitySetBucket_Class_class;
Optr layout_Collection_IdentitySetBucket;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7611 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7614 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7617 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7619 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7620 = new_Send((Optr)PSend7619, SMB__pequals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend7624 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7625 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7623 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7624, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7625, (Optr)&t_block_return);
    Block PBlock7622 = new_Block_with(empty_Array, empty_Array, PThreadedCode7623, 2, PSend7624, PSend7625);
    // ifTrue:. 
    Send PSend7621 = new_Send((Optr)PSend7620, SMB_ifTrue_, 1, (Optr)PBlock7622);
    Array PThreadedCode7618 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7619, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7620, (Optr)&t_send_ifTrue_, (Optr)PSend7621, (Optr)PBlock7622, (Optr)&t_method_return);
    Block PBlock7616 = new_Block_with(PArray7617, empty_Array, PThreadedCode7618, 1, PSend7621);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7626 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7616);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7627 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode7615 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7616, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7626, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend7627, (Optr)&t_method_return);
    Block PBlock7613 = new_Block_with(PArray7614, empty_Array, PThreadedCode7615, 2, PSend7626, PSend7627);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7628 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7613);
    Array PThreadedCode7612 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7613, (Optr)&t_send1, (Optr)PSend7628, (Optr)&t_method_return);
    Method PMethod7610 = new_Method_with(PArray7611, empty_Array, empty_Array, PThreadedCode7612, 1, PSend7628);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod7610, Collection_IdentitySetBucket_Class);
    store_method(Collection_IdentitySetBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7630 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7633 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7636 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7638 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7639 = new_Send((Optr)PSend7638, SMB__pequals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7643 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode7642 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend7643, (Optr)&t_block_return);
    Block PBlock7641 = new_Block_with(empty_Array, empty_Array, PThreadedCode7642, 1, PSend7643);
    // ifTrue:. 
    Send PSend7640 = new_Send((Optr)PSend7639, SMB_ifTrue_, 1, (Optr)PBlock7641);
    Array PThreadedCode7637 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7638, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7639, (Optr)&t_send_ifTrue_, (Optr)PSend7640, (Optr)PBlock7641, (Optr)&t_method_return);
    Block PBlock7635 = new_Block_with(PArray7636, empty_Array, PThreadedCode7637, 1, PSend7640);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7644 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7635);
    Array PThreadedCode7634 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7635, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7644, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock7632 = new_Block_with(PArray7633, empty_Array, PThreadedCode7634, 2, PSend7644, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7645 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7632);
    Array PThreadedCode7631 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7632, (Optr)&t_send1, (Optr)PSend7645, (Optr)&t_method_return);
    Method PMethod7629 = new_Method_with(PArray7630, empty_Array, empty_Array, PThreadedCode7631, 1, PSend7645);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod7629, Collection_IdentitySetBucket_Class);
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