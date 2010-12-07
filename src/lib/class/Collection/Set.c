#include <lib/class/Collection/Set.h>


Optr layout_Collection_Set_Class_class;
Optr layout_Collection_Set;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray5753 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Variable VAR_value_0_3 = new_Variable_named(L"value", 0);
    Array PArray5754 = new_Array_with(2, (Optr)VAR_bucket_0_2, (Optr)VAR_value_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5757 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5763 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5762 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5763);
    Array PThreadedCode5761 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5762, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5763, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5760 = new_Block_with(empty_Array, empty_Array, PThreadedCode5761, 1, PAssign5762);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5770 = new_Send((Optr)VAR_anObject_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5771 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5769 = new_Send((Optr)PSend5770, SMB__modulo_, 1, (Optr)PSend5771);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5768 = new_Send((Optr)PSend5769, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5767 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5768);
    Assign PAssign5766 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5767);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5774 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5775 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5774);
    Array PThreadedCode5773 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5774, (Optr)&t_send1, (Optr)PSend5775, (Optr)&t_block_return);
    Block PBlock5772 = new_Block_with(empty_Array, empty_Array, PThreadedCode5773, 1, PSend5775);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend5776 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock5772);
    Array PThreadedCode5765 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign5766, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5770, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5771, (Optr)&t_send1, (Optr)PSend5769, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5768, (Optr)&t_send1, (Optr)PSend5767, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock5772, (Optr)&t_send1, (Optr)PSend5776, (Optr)&t_block_return);
    Block PBlock5764 = new_Block_with(empty_Array, empty_Array, PThreadedCode5765, 2, PAssign5766, PSend5776);
    // ifTrue:ifFalse:. 
    Send PSend5759 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5760, (Optr)PBlock5764);
    // value. 
    Send PSend5781 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend5782 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5781);
    Array PThreadedCode5780 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5781, (Optr)&t_send1, (Optr)PSend5782, (Optr)&t_block_return);
    Block PBlock5779 = new_Block_with(empty_Array, empty_Array, PThreadedCode5780, 1, PSend5782);
    // remove:ifAbsent:. 
    Send PSend5778 = new_Send((Optr)VAR_bucket_0_2, SMB_remove_ifAbsent_, 2, (Optr)VAR_anObject_0_0, (Optr)PBlock5779);
    Assign PAssign5777 = new_Assign((Optr)VAR_value_0_3, (Optr)PSend5778);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend5783 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode5758 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5759, (Optr)PBlock5760, (Optr)PBlock5764, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5777, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_closure, (Optr)PBlock5779, (Optr)&t_send2, (Optr)PSend5778, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5783, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_3, (Optr)&t_method_return);
    Block PBlock5756 = new_Block_with(PArray5757, empty_Array, PThreadedCode5758, 4, PSend5759, PAssign5777, PSend5783, VAR_value_0_3);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5784 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5756);
    Array PThreadedCode5755 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5756, (Optr)&t_send1, (Optr)PSend5784, (Optr)&t_method_return);
    Method PMethod5752 = new_Method_with(PArray5753, PArray5754, empty_Array, PThreadedCode5755, 1, PSend5784);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod5752, Set_Class);
    store_method(Set_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


<<<<<<< HEAD
static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray5786 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend5788 = new_Send((Optr)PSetBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode5787 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PSetBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend5788, (Optr)&t_method_return);
    Method PMethod5785 = new_Method_with(PArray5786, empty_Array, empty_Array, PThreadedCode5787, 1, PSend5788);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod5785, Set_Class);
    store_method(Set_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray5790 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray5791 = new_Array_with(1, (Optr)VAR_index_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign5793 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray5795 = new_Array_with(1, (Optr)VAR_value_1_0);
=======
static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray5786 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray5787 = new_Array_with(1, (Optr)VAR_index_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign5789 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray5791 = new_Array_with(1, (Optr)VAR_value_1_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend5798 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5797 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend5798);
    Array PThreadedCode5800 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_block_return);
    Block PBlock5799 = new_Block_with(empty_Array, empty_Array, PThreadedCode5800, 1, VAR_value_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend5801 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)PAssign5797, (Optr)PBlock5799);
    Array PThreadedCode5796 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push1, (Optr)PAssign5797, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5798, (Optr)&t_assign, (Optr)&t_push_closure, (Optr)PBlock5799, (Optr)&t_send2, (Optr)PSend5801, (Optr)&t_method_return);
    Block PBlock5794 = new_Block_with(PArray5795, empty_Array, PThreadedCode5796, 1, PSend5801);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5802 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5794);
    Array PThreadedCode5792 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign5793, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5794, (Optr)&t_send1, (Optr)PSend5802, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5789 = new_Method_with(PArray5790, PArray5791, empty_Array, PThreadedCode5792, 3, PAssign5793, PSend5802, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod5789, Set_Class);
=======
    Send PSend5794 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5793 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend5794);
    Array PThreadedCode5796 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_block_return);
    Block PBlock5795 = new_Block_with(empty_Array, empty_Array, PThreadedCode5796, 1, VAR_value_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend5797 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)PAssign5793, (Optr)PBlock5795);
    Array PThreadedCode5792 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push1, (Optr)PAssign5793, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5794, (Optr)&t_assign, (Optr)&t_push_closure, (Optr)PBlock5795, (Optr)&t_send2, (Optr)PSend5797, (Optr)&t_method_return);
    Block PBlock5790 = new_Block_with(PArray5791, empty_Array, PThreadedCode5792, 1, PSend5797);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5798 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5790);
    Array PThreadedCode5788 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign5789, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5790, (Optr)&t_send1, (Optr)PSend5798, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5785 = new_Method_with(PArray5786, PArray5787, empty_Array, PThreadedCode5788, 3, PAssign5789, PSend5798, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod5785, Set_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Set_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray5800 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend5802 = new_Send((Optr)PSetBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode5801 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PSetBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend5802, (Optr)&t_method_return);
    Method PMethod5799 = new_Method_with(PArray5800, empty_Array, empty_Array, PThreadedCode5801, 1, PSend5802);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod5799, Set_Class);
    store_method(Set_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_addInFirstBucket_() {
    Symbol SMB_addInFirstBucket_ = new_Symbol(L"addInFirstBucket:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray5804 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_bucket_0_1 = new_Variable_named(L"bucket", 0);
    Array PArray5805 = new_Array_with(1, (Optr)VAR_bucket_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5808 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5811 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5810 = new_Assign((Optr)VAR_bucket_0_1, (Optr)PSend5811);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend5812 = new_Send((Optr)VAR_bucket_0_1, SMB_includes_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5816 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode5815 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5816, (Optr)&t_block_return);
    Block PBlock5814 = new_Block_with(empty_Array, empty_Array, PThreadedCode5815, 1, PSend5816);
    // ifTrue:. 
    Send PSend5813 = new_Send((Optr)PSend5812, SMB_ifTrue_, 1, (Optr)PBlock5814);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend5817 = new_Send((Optr)VAR_bucket_0_1, SMB_isFull, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend5821 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__lt_, 1, (Optr)slot_Collection_HashedCollection_maxLinear);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign5825 = new_Assign((Optr)slot_Collection_HashedCollection_linear, (Optr)false_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_32 = new_SmallInt(32);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // new:. 
    Send PSend5827 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_32_Const);
    Assign PAssign5826 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend5827);
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    // reAddBucket:at:. 
    Send PSend5828 = new_Send((Optr)self, SMB_reAddBucket_at_, 2, (Optr)VAR_bucket_0_1, (Optr)int_1_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5829 = new_Send((Optr)self, SMB_add_, 1, (Optr)VAR_value_0_0);
    // escape:. 
    Send PSend5830 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5829);
    Array PThreadedCode5824 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign5825, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5826, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend5827, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend5828, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5829, (Optr)&t_send1, (Optr)PSend5830, (Optr)&t_block_return);
    Block PBlock5823 = new_Block_with(empty_Array, empty_Array, PThreadedCode5824, 4, PAssign5825, PAssign5826, PSend5828, PSend5830);
    // ifFalse:. 
    Send PSend5822 = new_Send((Optr)PSend5821, SMB_ifFalse_, 1, (Optr)PBlock5823);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend5832 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)int_1_Const);
    Assign PAssign5831 = new_Assign((Optr)VAR_bucket_0_1, (Optr)PSend5832);
    Array PThreadedCode5820 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_maxLinear, (Optr)&t_send1, (Optr)PSend5821, (Optr)&t_send_ifFalse_, (Optr)PSend5822, (Optr)PBlock5823, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5831, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5832, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5819 = new_Block_with(empty_Array, empty_Array, PThreadedCode5820, 2, PSend5822, PAssign5831);
    // ifTrue:. 
    Send PSend5818 = new_Send((Optr)PSend5817, SMB_ifTrue_, 1, (Optr)PBlock5819);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend5833 = new_Send((Optr)VAR_bucket_0_1, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5835 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5834 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)PSend5835);
    Array PThreadedCode5809 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign5810, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5811, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5812, (Optr)&t_send_ifTrue_, (Optr)PSend5813, (Optr)PBlock5814, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_send0, (Optr)PSend5817, (Optr)&t_send_ifTrue_, (Optr)PSend5818, (Optr)PBlock5819, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5833, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5834, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5835, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_method_return);
    Block PBlock5807 = new_Block_with(PArray5808, empty_Array, PThreadedCode5809, 6, PAssign5810, PSend5813, PSend5818, PSend5833, PAssign5834, VAR_value_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5836 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5807);
    Array PThreadedCode5806 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5807, (Optr)&t_send1, (Optr)PSend5836, (Optr)&t_method_return);
    Method PMethod5803 = new_Method_with(PArray5804, PArray5805, empty_Array, PThreadedCode5806, 1, PSend5836);
    
    MethodClosure MC_SMB_addInFirstBucket_ = new_MethodClosure((Method)PMethod5803, Set_Class);
    store_method(Set_Class, SMB_addInFirstBucket_, MC_SMB_addInFirstBucket_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5838 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5841 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5846 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includes:. 
    Send PSend5847 = new_Send((Optr)PSend5846, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5848 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5847);
    Array PThreadedCode5845 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5846, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5847, (Optr)&t_send1, (Optr)PSend5848, (Optr)&t_block_return);
    Block PBlock5844 = new_Block_with(empty_Array, empty_Array, PThreadedCode5845, 1, PSend5848);
    // ifTrue:. 
    Send PSend5843 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock5844);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5849 = new_Send((Optr)VAR_anObject_0_0, SMB_hash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5850 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend5851 = new_Send((Optr)PSend5849, SMB__modulo_, 1, (Optr)PSend5850);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5852 = new_Send((Optr)PSend5851, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5853 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5852);
    Array PThreadedCode5855 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock5854 = new_Block_with(empty_Array, empty_Array, PThreadedCode5855, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray5857 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includes:. 
    Send PSend5859 = new_Send((Optr)VAR_bucket_2_0, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5858 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5859, (Optr)&t_method_return);
    Block PBlock5856 = new_Block_with(PArray5857, empty_Array, PThreadedCode5858, 1, PSend5859);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend5860 = new_Send((Optr)PSend5853, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock5854, (Optr)PBlock5856);
    Array PThreadedCode5842 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend5843, (Optr)PBlock5844, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5849, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5850, (Optr)&t_send1, (Optr)PSend5851, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5852, (Optr)&t_send1, (Optr)PSend5853, (Optr)&t_push_closure, (Optr)PBlock5854, (Optr)&t_push_closure, (Optr)PBlock5856, (Optr)&t_send2, (Optr)PSend5860, (Optr)&t_method_return);
    Block PBlock5840 = new_Block_with(PArray5841, empty_Array, PThreadedCode5842, 2, PSend5843, PSend5860);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5861 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5840);
    Array PThreadedCode5839 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5840, (Optr)&t_send1, (Optr)PSend5861, (Optr)&t_method_return);
    Method PMethod5837 = new_Method_with(PArray5838, empty_Array, empty_Array, PThreadedCode5839, 1, PSend5861);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod5837, Set_Class);
    store_method(Set_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray5863 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_bucketIndex_0_1 = new_Variable_named(L"bucketIndex", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray5864 = new_Array_with(2, (Optr)VAR_bucketIndex_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5867 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addInFirstBucket_ = new_Symbol(L"addInFirstBucket:");
    // addInFirstBucket:. 
    Send PSend5872 = new_Send((Optr)self, SMB_addInFirstBucket_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5873 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5872);
    Array PThreadedCode5871 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5872, (Optr)&t_send1, (Optr)PSend5873, (Optr)&t_block_return);
    Block PBlock5870 = new_Block_with(empty_Array, empty_Array, PThreadedCode5871, 1, PSend5873);
    // ifTrue:. 
    Send PSend5869 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock5870);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5877 = new_Send((Optr)VAR_value_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5878 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5876 = new_Send((Optr)PSend5877, SMB__modulo_, 1, (Optr)PSend5878);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend5875 = new_Send((Optr)PSend5876, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5874 = new_Assign((Optr)VAR_bucketIndex_0_1, (Optr)PSend5875);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5880 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign5879 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5880);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend5884 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign5883 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5884);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend5885 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_checkGrow = new_Symbol(L"checkGrow");
    // checkGrow. 
    Send PSend5886 = new_Send((Optr)self, SMB_checkGrow, 0);
    // escape:. 
    Send PSend5887 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode5882 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign5883, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend5884, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5885, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5886, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5887, (Optr)&t_block_return);
    Block PBlock5881 = new_Block_with(empty_Array, empty_Array, PThreadedCode5882, 4, PAssign5883, PSend5885, PSend5886, PSend5887);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend5888 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock5881);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend5889 = new_Send((Optr)VAR_bucket_0_2, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // escape:. 
    Send PSend5893 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode5892 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5893, (Optr)&t_block_return);
    Block PBlock5891 = new_Block_with(empty_Array, empty_Array, PThreadedCode5892, 1, PSend5893);
    // ifTrue:. 
    Send PSend5890 = new_Send((Optr)PSend5889, SMB_ifTrue_, 1, (Optr)PBlock5891);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend5894 = new_Send((Optr)VAR_bucket_0_2, SMB_isFull, 0);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend5899 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign5898 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5899);
    Array PThreadedCode5897 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5898, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend5899, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5896 = new_Block_with(empty_Array, empty_Array, PThreadedCode5897, 1, PAssign5898);
    // ifTrue:. 
    Send PSend5895 = new_Send((Optr)PSend5894, SMB_ifTrue_, 1, (Optr)PBlock5896);
    // addNew:. 
    Send PSend5900 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    // checkGrow. 
    Send PSend5901 = new_Send((Optr)self, SMB_checkGrow, 0);
    Array PThreadedCode5868 = instantiate_Array_with(ThreadedCode_Class, 0, 72, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend5869, (Optr)PBlock5870, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5874, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend5877, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5878, (Optr)&t_send1, (Optr)PSend5876, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5875, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5879, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend5880, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock5881, (Optr)&t_send1, (Optr)PSend5888, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5889, (Optr)&t_send_ifTrue_, (Optr)PSend5890, (Optr)PBlock5891, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend5894, (Optr)&t_send_ifTrue_, (Optr)PSend5895, (Optr)PBlock5896, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5900, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5901, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_method_return);
    Block PBlock5866 = new_Block_with(PArray5867, empty_Array, PThreadedCode5868, 9, PSend5869, PAssign5874, PAssign5879, PSend5888, PSend5890, PSend5895, PSend5900, PSend5901, VAR_value_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5902 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5866);
    Array PThreadedCode5865 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5866, (Optr)&t_send1, (Optr)PSend5902, (Optr)&t_method_return);
    Method PMethod5862 = new_Method_with(PArray5863, PArray5864, empty_Array, PThreadedCode5865, 1, PSend5902);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod5862, Set_Class);
    store_method(Set_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_remove_() {
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5904 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_valueNotFound_ = new_Symbol(L"valueNotFound:");
    // valueNotFound:. 
    Send PSend5908 = new_Send((Optr)self, SMB_valueNotFound_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5907 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5908, (Optr)&t_block_return);
    Block PBlock5906 = new_Block_with(empty_Array, empty_Array, PThreadedCode5907, 1, PSend5908);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend5909 = new_Send((Optr)self, SMB_remove_ifAbsent_, 2, (Optr)VAR_anObject_0_0, (Optr)PBlock5906);
    Array PThreadedCode5905 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_closure, (Optr)PBlock5906, (Optr)&t_send2, (Optr)PSend5909, (Optr)&t_method_return);
    Method PMethod5903 = new_Method_with(PArray5904, empty_Array, empty_Array, PThreadedCode5905, 1, PSend5909);
    
    MethodClosure MC_SMB_remove_ = new_MethodClosure((Method)PMethod5903, Set_Class);
    store_method(Set_Class, SMB_remove_, MC_SMB_remove_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray5911 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_item_0_3 = new_Variable_named(L"item", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray5912 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_item_0_3, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend5914 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign5915 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend5918 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend5919 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend5918);
    Array PThreadedCode5917 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend5918, (Optr)&t_send1, (Optr)PSend5919, (Optr)&t_block_return);
    Block PBlock5916 = new_Block_with(empty_Array, empty_Array, PThreadedCode5917, 1, PSend5919);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5923 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign5922 = new_Assign((Optr)VAR_item_0_3, (Optr)PSend5923);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5927 = new_Send((Optr)VAR_item_0_3, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5928 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5926 = new_Send((Optr)PSend5927, SMB__modulo_, 1, (Optr)PSend5928);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5925 = new_Send((Optr)PSend5926, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5924 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend5925);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend5929 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // +. 
    Send PSend5934 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5933 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend5934);
    Array PThreadedCode5932 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5933, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5934, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5931 = new_Block_with(empty_Array, empty_Array, PThreadedCode5932, 1, PAssign5933);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend5937 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend5938 = new_Send((Optr)PSend5937, SMB_addNew_, 1, (Optr)VAR_item_0_3);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend5939 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode5936 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend5937, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send1, (Optr)PSend5938, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend5939, (Optr)&t_block_return);
    Block PBlock5935 = new_Block_with(empty_Array, empty_Array, PThreadedCode5936, 2, PSend5938, PSend5939);
    // ifTrue:ifFalse:. 
    Send PSend5930 = new_Send((Optr)PSend5929, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5931, (Optr)PBlock5935);
    Array PThreadedCode5921 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign5922, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend5923, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5924, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send0, (Optr)PSend5927, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5928, (Optr)&t_send1, (Optr)PSend5926, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5925, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend5929, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5930, (Optr)PBlock5931, (Optr)PBlock5935, (Optr)&t_block_return);
    Block PBlock5920 = new_Block_with(empty_Array, empty_Array, PThreadedCode5921, 3, PAssign5922, PAssign5924, PSend5930);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend5940 = new_Send((Optr)PBlock5916, SMB_whileTrue_, 1, (Optr)PBlock5920);
    Array PThreadedCode5913 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend5914, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5915, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock5916, (Optr)&t_push_closure, (Optr)PBlock5920, (Optr)&t_send1, (Optr)PSend5940, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5910 = new_Method_with(PArray5911, PArray5912, empty_Array, PThreadedCode5913, 4, PSend5914, PAssign5915, PSend5940, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod5910, Set_Class);
    store_method(Set_Class, SMB_reAddBucket_at_, MC_SMB_reAddBucket_at_);
}

void init_Collection_Set_layout() {
    layout_Collection_Set_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Set_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_Set_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_Set_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_Set_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_Set_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Set = new_Symbol(L"Set");
    layout_Collection_Set = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Set)->values[0] = slot_Collection_HashedCollection_size; // size 
    ((Array)layout_Collection_Set)->values[1] = slot_Collection_HashedCollection_maxLinear; // maxLinear 
    ((Array)layout_Collection_Set)->values[2] = slot_Collection_HashedCollection_ratio; // ratio 
    ((Array)layout_Collection_Set)->values[3] = slot_Collection_HashedCollection_buckets; // buckets 
    ((Array)layout_Collection_Set)->values[4] = slot_Collection_HashedCollection_linear; // linear 
    Set_Class = (Class)new_Class(Collection_HashedCollection_Class, layout_Collection_Set_Class_class);
    Class_set_superclass(Set_Class, Collection_HashedCollection_Class);
    Set_Class->layout = layout_Collection_Set;
    HEADER(Set_Class)->layout = layout_Collection_Set_Class_class;
    Set_Class->name = SMB_Set;
    
}

void init_Collection_Set_methods() {
    init_SMB_remove_ifAbsent_();
    init_SMB_inspectChildrenOn_();
    init_SMB_newBucket_();
    init_SMB_addInFirstBucket_();
    init_SMB_includes_();
    init_SMB_add_();
    init_SMB_remove_();
    init_SMB_reAddBucket_at_();
    
}