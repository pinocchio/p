#include <lib/class/Collection/Set.h>


Optr layout_Collection_Set_Class_class;
Optr layout_Collection_Set;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray5754 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Variable VAR_value_0_3 = new_Variable_named(L"value", 0);
    Array PArray5755 = new_Array_with(2, (Optr)VAR_bucket_0_2, (Optr)VAR_value_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5758 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5764 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5763 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5764);
    Array PThreadedCode5762 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5763, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5764, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5761 = new_Block_with(empty_Array, empty_Array, PThreadedCode5762, 1, PAssign5763);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5771 = new_Send((Optr)VAR_anObject_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5772 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5770 = new_Send((Optr)PSend5771, SMB__modulo_, 1, (Optr)PSend5772);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5769 = new_Send((Optr)PSend5770, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5768 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5769);
    Assign PAssign5767 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5768);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5775 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5776 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5775);
    Array PThreadedCode5774 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5775, (Optr)&t_send1, (Optr)PSend5776, (Optr)&t_block_return);
    Block PBlock5773 = new_Block_with(empty_Array, empty_Array, PThreadedCode5774, 1, PSend5776);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend5777 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock5773);
    Array PThreadedCode5766 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign5767, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5771, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5772, (Optr)&t_send1, (Optr)PSend5770, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5769, (Optr)&t_send1, (Optr)PSend5768, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock5773, (Optr)&t_send1, (Optr)PSend5777, (Optr)&t_block_return);
    Block PBlock5765 = new_Block_with(empty_Array, empty_Array, PThreadedCode5766, 2, PAssign5767, PSend5777);
    // ifTrue:ifFalse:. 
    Send PSend5760 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5761, (Optr)PBlock5765);
    // value. 
    Send PSend5782 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend5783 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5782);
    Array PThreadedCode5781 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5782, (Optr)&t_send1, (Optr)PSend5783, (Optr)&t_block_return);
    Block PBlock5780 = new_Block_with(empty_Array, empty_Array, PThreadedCode5781, 1, PSend5783);
    // remove:ifAbsent:. 
    Send PSend5779 = new_Send((Optr)VAR_bucket_0_2, SMB_remove_ifAbsent_, 2, (Optr)VAR_anObject_0_0, (Optr)PBlock5780);
    Assign PAssign5778 = new_Assign((Optr)VAR_value_0_3, (Optr)PSend5779);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend5784 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode5759 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5760, (Optr)PBlock5761, (Optr)PBlock5765, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5778, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_closure, (Optr)PBlock5780, (Optr)&t_send2, (Optr)PSend5779, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5784, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_3, (Optr)&t_method_return);
    Block PBlock5757 = new_Block_with(PArray5758, empty_Array, PThreadedCode5759, 4, PSend5760, PAssign5778, PSend5784, VAR_value_0_3);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5785 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5757);
    Array PThreadedCode5756 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5757, (Optr)&t_send1, (Optr)PSend5785, (Optr)&t_method_return);
    Method PMethod5753 = new_Method_with(PArray5754, PArray5755, empty_Array, PThreadedCode5756, 1, PSend5785);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod5753, Set_Class);
    store_method(Set_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray5787 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend5789 = new_Send((Optr)PSetBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode5788 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PSetBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend5789, (Optr)&t_method_return);
    Method PMethod5786 = new_Method_with(PArray5787, empty_Array, empty_Array, PThreadedCode5788, 1, PSend5789);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod5786, Set_Class);
    store_method(Set_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray5791 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray5792 = new_Array_with(1, (Optr)VAR_index_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign5794 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray5796 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend5799 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5798 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend5799);
    Array PThreadedCode5801 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_block_return);
    Block PBlock5800 = new_Block_with(empty_Array, empty_Array, PThreadedCode5801, 1, VAR_value_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend5802 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)PAssign5798, (Optr)PBlock5800);
    Array PThreadedCode5797 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push1, (Optr)PAssign5798, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5799, (Optr)&t_assign, (Optr)&t_push_closure, (Optr)PBlock5800, (Optr)&t_send2, (Optr)PSend5802, (Optr)&t_method_return);
    Block PBlock5795 = new_Block_with(PArray5796, empty_Array, PThreadedCode5797, 1, PSend5802);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5803 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5795);
    Array PThreadedCode5793 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign5794, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5795, (Optr)&t_send1, (Optr)PSend5803, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5790 = new_Method_with(PArray5791, PArray5792, empty_Array, PThreadedCode5793, 3, PAssign5794, PSend5803, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod5790, Set_Class);
    store_method(Set_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_addInFirstBucket_() {
    Symbol SMB_addInFirstBucket_ = new_Symbol(L"addInFirstBucket:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray5805 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_bucket_0_1 = new_Variable_named(L"bucket", 0);
    Array PArray5806 = new_Array_with(1, (Optr)VAR_bucket_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5809 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5812 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5811 = new_Assign((Optr)VAR_bucket_0_1, (Optr)PSend5812);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend5813 = new_Send((Optr)VAR_bucket_0_1, SMB_includes_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5817 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode5816 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5817, (Optr)&t_block_return);
    Block PBlock5815 = new_Block_with(empty_Array, empty_Array, PThreadedCode5816, 1, PSend5817);
    // ifTrue:. 
    Send PSend5814 = new_Send((Optr)PSend5813, SMB_ifTrue_, 1, (Optr)PBlock5815);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend5818 = new_Send((Optr)VAR_bucket_0_1, SMB_isFull, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend5822 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__lt_, 1, (Optr)slot_Collection_HashedCollection_maxLinear);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign5826 = new_Assign((Optr)slot_Collection_HashedCollection_linear, (Optr)false_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_32 = new_SmallInt(32);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // new:. 
    Send PSend5828 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_32_Const);
    Assign PAssign5827 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend5828);
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    // reAddBucket:at:. 
    Send PSend5829 = new_Send((Optr)self, SMB_reAddBucket_at_, 2, (Optr)VAR_bucket_0_1, (Optr)int_1_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5830 = new_Send((Optr)self, SMB_add_, 1, (Optr)VAR_value_0_0);
    // escape:. 
    Send PSend5831 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5830);
    Array PThreadedCode5825 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign5826, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5827, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend5828, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend5829, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5830, (Optr)&t_send1, (Optr)PSend5831, (Optr)&t_block_return);
    Block PBlock5824 = new_Block_with(empty_Array, empty_Array, PThreadedCode5825, 4, PAssign5826, PAssign5827, PSend5829, PSend5831);
    // ifFalse:. 
    Send PSend5823 = new_Send((Optr)PSend5822, SMB_ifFalse_, 1, (Optr)PBlock5824);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend5833 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)int_1_Const);
    Assign PAssign5832 = new_Assign((Optr)VAR_bucket_0_1, (Optr)PSend5833);
    Array PThreadedCode5821 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_maxLinear, (Optr)&t_send1, (Optr)PSend5822, (Optr)&t_send_ifFalse_, (Optr)PSend5823, (Optr)PBlock5824, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5832, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5833, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5820 = new_Block_with(empty_Array, empty_Array, PThreadedCode5821, 2, PSend5823, PAssign5832);
    // ifTrue:. 
    Send PSend5819 = new_Send((Optr)PSend5818, SMB_ifTrue_, 1, (Optr)PBlock5820);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend5834 = new_Send((Optr)VAR_bucket_0_1, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5836 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5835 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)PSend5836);
    Array PThreadedCode5810 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign5811, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5812, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5813, (Optr)&t_send_ifTrue_, (Optr)PSend5814, (Optr)PBlock5815, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_send0, (Optr)PSend5818, (Optr)&t_send_ifTrue_, (Optr)PSend5819, (Optr)PBlock5820, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5834, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5835, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5836, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_method_return);
    Block PBlock5808 = new_Block_with(PArray5809, empty_Array, PThreadedCode5810, 6, PAssign5811, PSend5814, PSend5819, PSend5834, PAssign5835, VAR_value_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5837 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5808);
    Array PThreadedCode5807 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5808, (Optr)&t_send1, (Optr)PSend5837, (Optr)&t_method_return);
    Method PMethod5804 = new_Method_with(PArray5805, PArray5806, empty_Array, PThreadedCode5807, 1, PSend5837);
    
    MethodClosure MC_SMB_addInFirstBucket_ = new_MethodClosure((Method)PMethod5804, Set_Class);
    store_method(Set_Class, SMB_addInFirstBucket_, MC_SMB_addInFirstBucket_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5839 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5842 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5847 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includes:. 
    Send PSend5848 = new_Send((Optr)PSend5847, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5849 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5848);
    Array PThreadedCode5846 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5847, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5848, (Optr)&t_send1, (Optr)PSend5849, (Optr)&t_block_return);
    Block PBlock5845 = new_Block_with(empty_Array, empty_Array, PThreadedCode5846, 1, PSend5849);
    // ifTrue:. 
    Send PSend5844 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock5845);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5850 = new_Send((Optr)VAR_anObject_0_0, SMB_hash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5851 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend5852 = new_Send((Optr)PSend5850, SMB__modulo_, 1, (Optr)PSend5851);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5853 = new_Send((Optr)PSend5852, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5854 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5853);
    Array PThreadedCode5856 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock5855 = new_Block_with(empty_Array, empty_Array, PThreadedCode5856, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray5858 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includes:. 
    Send PSend5860 = new_Send((Optr)VAR_bucket_2_0, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5859 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5860, (Optr)&t_method_return);
    Block PBlock5857 = new_Block_with(PArray5858, empty_Array, PThreadedCode5859, 1, PSend5860);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend5861 = new_Send((Optr)PSend5854, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock5855, (Optr)PBlock5857);
    Array PThreadedCode5843 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend5844, (Optr)PBlock5845, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5850, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5851, (Optr)&t_send1, (Optr)PSend5852, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5853, (Optr)&t_send1, (Optr)PSend5854, (Optr)&t_push_closure, (Optr)PBlock5855, (Optr)&t_push_closure, (Optr)PBlock5857, (Optr)&t_send2, (Optr)PSend5861, (Optr)&t_method_return);
    Block PBlock5841 = new_Block_with(PArray5842, empty_Array, PThreadedCode5843, 2, PSend5844, PSend5861);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5862 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5841);
    Array PThreadedCode5840 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5841, (Optr)&t_send1, (Optr)PSend5862, (Optr)&t_method_return);
    Method PMethod5838 = new_Method_with(PArray5839, empty_Array, empty_Array, PThreadedCode5840, 1, PSend5862);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod5838, Set_Class);
    store_method(Set_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray5864 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_bucketIndex_0_1 = new_Variable_named(L"bucketIndex", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray5865 = new_Array_with(2, (Optr)VAR_bucketIndex_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5868 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addInFirstBucket_ = new_Symbol(L"addInFirstBucket:");
    // addInFirstBucket:. 
    Send PSend5873 = new_Send((Optr)self, SMB_addInFirstBucket_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5874 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5873);
    Array PThreadedCode5872 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5873, (Optr)&t_send1, (Optr)PSend5874, (Optr)&t_block_return);
    Block PBlock5871 = new_Block_with(empty_Array, empty_Array, PThreadedCode5872, 1, PSend5874);
    // ifTrue:. 
    Send PSend5870 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock5871);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5878 = new_Send((Optr)VAR_value_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5879 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5877 = new_Send((Optr)PSend5878, SMB__modulo_, 1, (Optr)PSend5879);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend5876 = new_Send((Optr)PSend5877, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5875 = new_Assign((Optr)VAR_bucketIndex_0_1, (Optr)PSend5876);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5881 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign5880 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5881);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend5885 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign5884 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5885);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend5886 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_checkGrow = new_Symbol(L"checkGrow");
    // checkGrow. 
    Send PSend5887 = new_Send((Optr)self, SMB_checkGrow, 0);
    // escape:. 
    Send PSend5888 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode5883 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign5884, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend5885, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5886, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5887, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5888, (Optr)&t_block_return);
    Block PBlock5882 = new_Block_with(empty_Array, empty_Array, PThreadedCode5883, 4, PAssign5884, PSend5886, PSend5887, PSend5888);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend5889 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock5882);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend5890 = new_Send((Optr)VAR_bucket_0_2, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // escape:. 
    Send PSend5894 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode5893 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5894, (Optr)&t_block_return);
    Block PBlock5892 = new_Block_with(empty_Array, empty_Array, PThreadedCode5893, 1, PSend5894);
    // ifTrue:. 
    Send PSend5891 = new_Send((Optr)PSend5890, SMB_ifTrue_, 1, (Optr)PBlock5892);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend5895 = new_Send((Optr)VAR_bucket_0_2, SMB_isFull, 0);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend5900 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign5899 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5900);
    Array PThreadedCode5898 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5899, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend5900, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5897 = new_Block_with(empty_Array, empty_Array, PThreadedCode5898, 1, PAssign5899);
    // ifTrue:. 
    Send PSend5896 = new_Send((Optr)PSend5895, SMB_ifTrue_, 1, (Optr)PBlock5897);
    // addNew:. 
    Send PSend5901 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    // checkGrow. 
    Send PSend5902 = new_Send((Optr)self, SMB_checkGrow, 0);
    Array PThreadedCode5869 = instantiate_Array_with(ThreadedCode_Class, 0, 72, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend5870, (Optr)PBlock5871, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5875, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend5878, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5879, (Optr)&t_send1, (Optr)PSend5877, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5876, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5880, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend5881, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock5882, (Optr)&t_send1, (Optr)PSend5889, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5890, (Optr)&t_send_ifTrue_, (Optr)PSend5891, (Optr)PBlock5892, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend5895, (Optr)&t_send_ifTrue_, (Optr)PSend5896, (Optr)PBlock5897, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5901, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5902, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_method_return);
    Block PBlock5867 = new_Block_with(PArray5868, empty_Array, PThreadedCode5869, 9, PSend5870, PAssign5875, PAssign5880, PSend5889, PSend5891, PSend5896, PSend5901, PSend5902, VAR_value_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5903 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5867);
    Array PThreadedCode5866 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5867, (Optr)&t_send1, (Optr)PSend5903, (Optr)&t_method_return);
    Method PMethod5863 = new_Method_with(PArray5864, PArray5865, empty_Array, PThreadedCode5866, 1, PSend5903);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod5863, Set_Class);
    store_method(Set_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_remove_() {
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5905 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_valueNotFound_ = new_Symbol(L"valueNotFound:");
    // valueNotFound:. 
    Send PSend5909 = new_Send((Optr)self, SMB_valueNotFound_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5908 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5909, (Optr)&t_block_return);
    Block PBlock5907 = new_Block_with(empty_Array, empty_Array, PThreadedCode5908, 1, PSend5909);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend5910 = new_Send((Optr)self, SMB_remove_ifAbsent_, 2, (Optr)VAR_anObject_0_0, (Optr)PBlock5907);
    Array PThreadedCode5906 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_closure, (Optr)PBlock5907, (Optr)&t_send2, (Optr)PSend5910, (Optr)&t_method_return);
    Method PMethod5904 = new_Method_with(PArray5905, empty_Array, empty_Array, PThreadedCode5906, 1, PSend5910);
    
    MethodClosure MC_SMB_remove_ = new_MethodClosure((Method)PMethod5904, Set_Class);
    store_method(Set_Class, SMB_remove_, MC_SMB_remove_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray5912 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_item_0_3 = new_Variable_named(L"item", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray5913 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_item_0_3, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend5915 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign5916 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend5919 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend5920 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend5919);
    Array PThreadedCode5918 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend5919, (Optr)&t_send1, (Optr)PSend5920, (Optr)&t_block_return);
    Block PBlock5917 = new_Block_with(empty_Array, empty_Array, PThreadedCode5918, 1, PSend5920);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5924 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign5923 = new_Assign((Optr)VAR_item_0_3, (Optr)PSend5924);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5928 = new_Send((Optr)VAR_item_0_3, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5929 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5927 = new_Send((Optr)PSend5928, SMB__modulo_, 1, (Optr)PSend5929);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5926 = new_Send((Optr)PSend5927, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5925 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend5926);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend5930 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // +. 
    Send PSend5935 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5934 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend5935);
    Array PThreadedCode5933 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5934, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5935, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5932 = new_Block_with(empty_Array, empty_Array, PThreadedCode5933, 1, PAssign5934);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend5938 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend5939 = new_Send((Optr)PSend5938, SMB_addNew_, 1, (Optr)VAR_item_0_3);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend5940 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode5937 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend5938, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send1, (Optr)PSend5939, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend5940, (Optr)&t_block_return);
    Block PBlock5936 = new_Block_with(empty_Array, empty_Array, PThreadedCode5937, 2, PSend5939, PSend5940);
    // ifTrue:ifFalse:. 
    Send PSend5931 = new_Send((Optr)PSend5930, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5932, (Optr)PBlock5936);
    Array PThreadedCode5922 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign5923, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend5924, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5925, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send0, (Optr)PSend5928, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5929, (Optr)&t_send1, (Optr)PSend5927, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5926, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend5930, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5931, (Optr)PBlock5932, (Optr)PBlock5936, (Optr)&t_block_return);
    Block PBlock5921 = new_Block_with(empty_Array, empty_Array, PThreadedCode5922, 3, PAssign5923, PAssign5925, PSend5931);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend5941 = new_Send((Optr)PBlock5917, SMB_whileTrue_, 1, (Optr)PBlock5921);
    Array PThreadedCode5914 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend5915, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5916, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock5917, (Optr)&t_push_closure, (Optr)PBlock5921, (Optr)&t_send1, (Optr)PSend5941, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5911 = new_Method_with(PArray5912, PArray5913, empty_Array, PThreadedCode5914, 4, PSend5915, PAssign5916, PSend5941, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod5911, Set_Class);
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
    init_SMB_newBucket_();
    init_SMB_inspectChildrenOn_();
    init_SMB_addInFirstBucket_();
    init_SMB_includes_();
    init_SMB_add_();
    init_SMB_remove_();
    init_SMB_reAddBucket_at_();
    
}