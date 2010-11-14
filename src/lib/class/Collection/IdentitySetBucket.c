#include <lib/class/Collection/IdentitySetBucket.h>


Optr layout_Collection_IdentitySetBucket_Class_class;
Optr layout_Collection_IdentitySetBucket;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7800 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7803 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7806 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7808 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7809 = new_Send((Optr)PSend7808, SMB__pequals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend7813 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7814 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7812 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7813, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7814, (Optr)&t_block_return);
    Block PBlock7811 = new_Block_with(empty_Array, empty_Array, PThreadedCode7812, 2, PSend7813, PSend7814);
    // ifTrue:. 
    Send PSend7810 = new_Send((Optr)PSend7809, SMB_ifTrue_, 1, (Optr)PBlock7811);
    Array PThreadedCode7807 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7808, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7809, (Optr)&t_send_ifTrue_, (Optr)PSend7810, (Optr)PBlock7811, (Optr)&t_method_return);
    Block PBlock7805 = new_Block_with(PArray7806, empty_Array, PThreadedCode7807, 1, PSend7810);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7815 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7805);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7816 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode7804 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7805, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7815, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend7816, (Optr)&t_method_return);
    Block PBlock7802 = new_Block_with(PArray7803, empty_Array, PThreadedCode7804, 2, PSend7815, PSend7816);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7817 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7802);
    Array PThreadedCode7801 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7802, (Optr)&t_send1, (Optr)PSend7817, (Optr)&t_method_return);
    Method PMethod7799 = new_Method_with(PArray7800, empty_Array, empty_Array, PThreadedCode7801, 1, PSend7817);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod7799, Collection_IdentitySetBucket_Class);
    store_method(Collection_IdentitySetBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7819 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7822 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7825 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7827 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7828 = new_Send((Optr)PSend7827, SMB__pequals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7832 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode7831 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend7832, (Optr)&t_block_return);
    Block PBlock7830 = new_Block_with(empty_Array, empty_Array, PThreadedCode7831, 1, PSend7832);
    // ifTrue:. 
    Send PSend7829 = new_Send((Optr)PSend7828, SMB_ifTrue_, 1, (Optr)PBlock7830);
    Array PThreadedCode7826 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7827, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7828, (Optr)&t_send_ifTrue_, (Optr)PSend7829, (Optr)PBlock7830, (Optr)&t_method_return);
    Block PBlock7824 = new_Block_with(PArray7825, empty_Array, PThreadedCode7826, 1, PSend7829);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7833 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7824);
    Array PThreadedCode7823 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7824, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7833, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock7821 = new_Block_with(PArray7822, empty_Array, PThreadedCode7823, 2, PSend7833, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7834 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7821);
    Array PThreadedCode7820 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7821, (Optr)&t_send1, (Optr)PSend7834, (Optr)&t_method_return);
    Method PMethod7818 = new_Method_with(PArray7819, empty_Array, empty_Array, PThreadedCode7820, 1, PSend7834);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod7818, Collection_IdentitySetBucket_Class);
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