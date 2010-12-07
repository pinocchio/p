#include <lib/class/Collection/IdentitySetBucket.h>


Optr layout_Collection_IdentitySetBucket_Class_class;
Optr layout_Collection_IdentitySetBucket;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7832 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7835 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7838 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7840 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7841 = new_Send((Optr)PSend7840, SMB__pequals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend7845 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7846 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7844 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7845, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7846, (Optr)&t_block_return);
    Block PBlock7843 = new_Block_with(empty_Array, empty_Array, PThreadedCode7844, 2, PSend7845, PSend7846);
    // ifTrue:. 
    Send PSend7842 = new_Send((Optr)PSend7841, SMB_ifTrue_, 1, (Optr)PBlock7843);
    Array PThreadedCode7839 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7840, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7841, (Optr)&t_send_ifTrue_, (Optr)PSend7842, (Optr)PBlock7843, (Optr)&t_method_return);
    Block PBlock7837 = new_Block_with(PArray7838, empty_Array, PThreadedCode7839, 1, PSend7842);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7847 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7837);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7848 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode7836 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7837, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7847, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend7848, (Optr)&t_method_return);
    Block PBlock7834 = new_Block_with(PArray7835, empty_Array, PThreadedCode7836, 2, PSend7847, PSend7848);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7849 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7834);
    Array PThreadedCode7833 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7834, (Optr)&t_send1, (Optr)PSend7849, (Optr)&t_method_return);
    Method PMethod7831 = new_Method_with(PArray7832, empty_Array, empty_Array, PThreadedCode7833, 1, PSend7849);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod7831, Collection_IdentitySetBucket_Class);
    store_method(Collection_IdentitySetBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7851 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7854 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7857 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7859 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7860 = new_Send((Optr)PSend7859, SMB__pequals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7864 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode7863 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend7864, (Optr)&t_block_return);
    Block PBlock7862 = new_Block_with(empty_Array, empty_Array, PThreadedCode7863, 1, PSend7864);
    // ifTrue:. 
    Send PSend7861 = new_Send((Optr)PSend7860, SMB_ifTrue_, 1, (Optr)PBlock7862);
    Array PThreadedCode7858 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7859, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7860, (Optr)&t_send_ifTrue_, (Optr)PSend7861, (Optr)PBlock7862, (Optr)&t_method_return);
    Block PBlock7856 = new_Block_with(PArray7857, empty_Array, PThreadedCode7858, 1, PSend7861);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7865 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7856);
    Array PThreadedCode7855 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7856, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7865, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock7853 = new_Block_with(PArray7854, empty_Array, PThreadedCode7855, 2, PSend7865, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7866 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7853);
    Array PThreadedCode7852 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7853, (Optr)&t_send1, (Optr)PSend7866, (Optr)&t_method_return);
    Method PMethod7850 = new_Method_with(PArray7851, empty_Array, empty_Array, PThreadedCode7852, 1, PSend7866);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod7850, Collection_IdentitySetBucket_Class);
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