#include <lib/class/Collection/Set.h>


Optr layout_Collection_Set_Class_class;
Optr layout_Collection_Set;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray5755 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Variable VAR_value_0_3 = new_Variable_named(L"value", 0);
    Array PArray5756 = new_Array_with(2, (Optr)VAR_bucket_0_2, (Optr)VAR_value_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5759 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5765 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5764 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5765);
    Array PThreadedCode5763 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5764, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5765, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5762 = new_Block_with(empty_Array, empty_Array, PThreadedCode5763, 1, PAssign5764);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5772 = new_Send((Optr)VAR_anObject_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5773 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5771 = new_Send((Optr)PSend5772, SMB__modulo_, 1, (Optr)PSend5773);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5770 = new_Send((Optr)PSend5771, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5769 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5770);
    Assign PAssign5768 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5769);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5776 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5777 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5776);
    Array PThreadedCode5775 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5776, (Optr)&t_send1, (Optr)PSend5777, (Optr)&t_block_return);
    Block PBlock5774 = new_Block_with(empty_Array, empty_Array, PThreadedCode5775, 1, PSend5777);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend5778 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock5774);
    Array PThreadedCode5767 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign5768, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5772, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5773, (Optr)&t_send1, (Optr)PSend5771, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5770, (Optr)&t_send1, (Optr)PSend5769, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock5774, (Optr)&t_send1, (Optr)PSend5778, (Optr)&t_block_return);
    Block PBlock5766 = new_Block_with(empty_Array, empty_Array, PThreadedCode5767, 2, PAssign5768, PSend5778);
    // ifTrue:ifFalse:. 
    Send PSend5761 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5762, (Optr)PBlock5766);
    // value. 
    Send PSend5783 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend5784 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5783);
    Array PThreadedCode5782 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5783, (Optr)&t_send1, (Optr)PSend5784, (Optr)&t_block_return);
    Block PBlock5781 = new_Block_with(empty_Array, empty_Array, PThreadedCode5782, 1, PSend5784);
    // remove:ifAbsent:. 
    Send PSend5780 = new_Send((Optr)VAR_bucket_0_2, SMB_remove_ifAbsent_, 2, (Optr)VAR_anObject_0_0, (Optr)PBlock5781);
    Assign PAssign5779 = new_Assign((Optr)VAR_value_0_3, (Optr)PSend5780);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend5785 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode5760 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5761, (Optr)PBlock5762, (Optr)PBlock5766, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5779, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_closure, (Optr)PBlock5781, (Optr)&t_send2, (Optr)PSend5780, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5785, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_3, (Optr)&t_method_return);
    Block PBlock5758 = new_Block_with(PArray5759, empty_Array, PThreadedCode5760, 4, PSend5761, PAssign5779, PSend5785, VAR_value_0_3);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5786 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5758);
    Array PThreadedCode5757 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5758, (Optr)&t_send1, (Optr)PSend5786, (Optr)&t_method_return);
    Method PMethod5754 = new_Method_with(PArray5755, PArray5756, empty_Array, PThreadedCode5757, 1, PSend5786);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod5754, Set_Class);
    store_method(Set_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray5788 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend5790 = new_Send((Optr)PSetBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode5789 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PSetBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend5790, (Optr)&t_method_return);
    Method PMethod5787 = new_Method_with(PArray5788, empty_Array, empty_Array, PThreadedCode5789, 1, PSend5790);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod5787, Set_Class);
    store_method(Set_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray5792 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray5793 = new_Array_with(1, (Optr)VAR_index_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign5795 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray5797 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend5800 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5799 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend5800);
    Array PThreadedCode5802 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_block_return);
    Block PBlock5801 = new_Block_with(empty_Array, empty_Array, PThreadedCode5802, 1, VAR_value_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend5803 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)PAssign5799, (Optr)PBlock5801);
    Array PThreadedCode5798 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push1, (Optr)PAssign5799, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5800, (Optr)&t_assign, (Optr)&t_push_closure, (Optr)PBlock5801, (Optr)&t_send2, (Optr)PSend5803, (Optr)&t_method_return);
    Block PBlock5796 = new_Block_with(PArray5797, empty_Array, PThreadedCode5798, 1, PSend5803);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5804 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5796);
    Array PThreadedCode5794 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign5795, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5796, (Optr)&t_send1, (Optr)PSend5804, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5791 = new_Method_with(PArray5792, PArray5793, empty_Array, PThreadedCode5794, 3, PAssign5795, PSend5804, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod5791, Set_Class);
    store_method(Set_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_addInFirstBucket_() {
    Symbol SMB_addInFirstBucket_ = new_Symbol(L"addInFirstBucket:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray5806 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_bucket_0_1 = new_Variable_named(L"bucket", 0);
    Array PArray5807 = new_Array_with(1, (Optr)VAR_bucket_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5810 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5813 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5812 = new_Assign((Optr)VAR_bucket_0_1, (Optr)PSend5813);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend5814 = new_Send((Optr)VAR_bucket_0_1, SMB_includes_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5818 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode5817 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5818, (Optr)&t_block_return);
    Block PBlock5816 = new_Block_with(empty_Array, empty_Array, PThreadedCode5817, 1, PSend5818);
    // ifTrue:. 
    Send PSend5815 = new_Send((Optr)PSend5814, SMB_ifTrue_, 1, (Optr)PBlock5816);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend5819 = new_Send((Optr)VAR_bucket_0_1, SMB_isFull, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend5823 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__lt_, 1, (Optr)slot_Collection_HashedCollection_maxLinear);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign5827 = new_Assign((Optr)slot_Collection_HashedCollection_linear, (Optr)false_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_32 = new_SmallInt(32);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // new:. 
    Send PSend5829 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_32_Const);
    Assign PAssign5828 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend5829);
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    // reAddBucket:at:. 
    Send PSend5830 = new_Send((Optr)self, SMB_reAddBucket_at_, 2, (Optr)VAR_bucket_0_1, (Optr)int_1_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5831 = new_Send((Optr)self, SMB_add_, 1, (Optr)VAR_value_0_0);
    // escape:. 
    Send PSend5832 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5831);
    Array PThreadedCode5826 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign5827, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5828, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend5829, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend5830, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5831, (Optr)&t_send1, (Optr)PSend5832, (Optr)&t_block_return);
    Block PBlock5825 = new_Block_with(empty_Array, empty_Array, PThreadedCode5826, 4, PAssign5827, PAssign5828, PSend5830, PSend5832);
    // ifFalse:. 
    Send PSend5824 = new_Send((Optr)PSend5823, SMB_ifFalse_, 1, (Optr)PBlock5825);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend5834 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)int_1_Const);
    Assign PAssign5833 = new_Assign((Optr)VAR_bucket_0_1, (Optr)PSend5834);
    Array PThreadedCode5822 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_maxLinear, (Optr)&t_send1, (Optr)PSend5823, (Optr)&t_send_ifFalse_, (Optr)PSend5824, (Optr)PBlock5825, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5833, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5834, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5821 = new_Block_with(empty_Array, empty_Array, PThreadedCode5822, 2, PSend5824, PAssign5833);
    // ifTrue:. 
    Send PSend5820 = new_Send((Optr)PSend5819, SMB_ifTrue_, 1, (Optr)PBlock5821);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend5835 = new_Send((Optr)VAR_bucket_0_1, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5837 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5836 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)PSend5837);
    Array PThreadedCode5811 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign5812, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5813, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5814, (Optr)&t_send_ifTrue_, (Optr)PSend5815, (Optr)PBlock5816, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_send0, (Optr)PSend5819, (Optr)&t_send_ifTrue_, (Optr)PSend5820, (Optr)PBlock5821, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5835, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5836, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5837, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_method_return);
    Block PBlock5809 = new_Block_with(PArray5810, empty_Array, PThreadedCode5811, 6, PAssign5812, PSend5815, PSend5820, PSend5835, PAssign5836, VAR_value_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5838 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5809);
    Array PThreadedCode5808 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5809, (Optr)&t_send1, (Optr)PSend5838, (Optr)&t_method_return);
    Method PMethod5805 = new_Method_with(PArray5806, PArray5807, empty_Array, PThreadedCode5808, 1, PSend5838);
    
    MethodClosure MC_SMB_addInFirstBucket_ = new_MethodClosure((Method)PMethod5805, Set_Class);
    store_method(Set_Class, SMB_addInFirstBucket_, MC_SMB_addInFirstBucket_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5840 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5843 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5848 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includes:. 
    Send PSend5849 = new_Send((Optr)PSend5848, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5850 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5849);
    Array PThreadedCode5847 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5848, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5849, (Optr)&t_send1, (Optr)PSend5850, (Optr)&t_block_return);
    Block PBlock5846 = new_Block_with(empty_Array, empty_Array, PThreadedCode5847, 1, PSend5850);
    // ifTrue:. 
    Send PSend5845 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock5846);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5851 = new_Send((Optr)VAR_anObject_0_0, SMB_hash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5852 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend5853 = new_Send((Optr)PSend5851, SMB__modulo_, 1, (Optr)PSend5852);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5854 = new_Send((Optr)PSend5853, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5855 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5854);
    Array PThreadedCode5857 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock5856 = new_Block_with(empty_Array, empty_Array, PThreadedCode5857, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray5859 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includes:. 
    Send PSend5861 = new_Send((Optr)VAR_bucket_2_0, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5860 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5861, (Optr)&t_method_return);
    Block PBlock5858 = new_Block_with(PArray5859, empty_Array, PThreadedCode5860, 1, PSend5861);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend5862 = new_Send((Optr)PSend5855, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock5856, (Optr)PBlock5858);
    Array PThreadedCode5844 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend5845, (Optr)PBlock5846, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5851, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5852, (Optr)&t_send1, (Optr)PSend5853, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5854, (Optr)&t_send1, (Optr)PSend5855, (Optr)&t_push_closure, (Optr)PBlock5856, (Optr)&t_push_closure, (Optr)PBlock5858, (Optr)&t_send2, (Optr)PSend5862, (Optr)&t_method_return);
    Block PBlock5842 = new_Block_with(PArray5843, empty_Array, PThreadedCode5844, 2, PSend5845, PSend5862);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5863 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5842);
    Array PThreadedCode5841 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5842, (Optr)&t_send1, (Optr)PSend5863, (Optr)&t_method_return);
    Method PMethod5839 = new_Method_with(PArray5840, empty_Array, empty_Array, PThreadedCode5841, 1, PSend5863);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod5839, Set_Class);
    store_method(Set_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray5865 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_bucketIndex_0_1 = new_Variable_named(L"bucketIndex", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray5866 = new_Array_with(2, (Optr)VAR_bucketIndex_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5869 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addInFirstBucket_ = new_Symbol(L"addInFirstBucket:");
    // addInFirstBucket:. 
    Send PSend5874 = new_Send((Optr)self, SMB_addInFirstBucket_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5875 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5874);
    Array PThreadedCode5873 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5874, (Optr)&t_send1, (Optr)PSend5875, (Optr)&t_block_return);
    Block PBlock5872 = new_Block_with(empty_Array, empty_Array, PThreadedCode5873, 1, PSend5875);
    // ifTrue:. 
    Send PSend5871 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock5872);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5879 = new_Send((Optr)VAR_value_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5880 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5878 = new_Send((Optr)PSend5879, SMB__modulo_, 1, (Optr)PSend5880);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend5877 = new_Send((Optr)PSend5878, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5876 = new_Assign((Optr)VAR_bucketIndex_0_1, (Optr)PSend5877);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5882 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign5881 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5882);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend5886 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign5885 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5886);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend5887 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_checkGrow = new_Symbol(L"checkGrow");
    // checkGrow. 
    Send PSend5888 = new_Send((Optr)self, SMB_checkGrow, 0);
    // escape:. 
    Send PSend5889 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode5884 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign5885, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend5886, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5887, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5888, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5889, (Optr)&t_block_return);
    Block PBlock5883 = new_Block_with(empty_Array, empty_Array, PThreadedCode5884, 4, PAssign5885, PSend5887, PSend5888, PSend5889);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend5890 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock5883);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend5891 = new_Send((Optr)VAR_bucket_0_2, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // escape:. 
    Send PSend5895 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode5894 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5895, (Optr)&t_block_return);
    Block PBlock5893 = new_Block_with(empty_Array, empty_Array, PThreadedCode5894, 1, PSend5895);
    // ifTrue:. 
    Send PSend5892 = new_Send((Optr)PSend5891, SMB_ifTrue_, 1, (Optr)PBlock5893);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend5896 = new_Send((Optr)VAR_bucket_0_2, SMB_isFull, 0);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend5901 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign5900 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5901);
    Array PThreadedCode5899 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5900, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend5901, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5898 = new_Block_with(empty_Array, empty_Array, PThreadedCode5899, 1, PAssign5900);
    // ifTrue:. 
    Send PSend5897 = new_Send((Optr)PSend5896, SMB_ifTrue_, 1, (Optr)PBlock5898);
    // addNew:. 
    Send PSend5902 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    // checkGrow. 
    Send PSend5903 = new_Send((Optr)self, SMB_checkGrow, 0);
    Array PThreadedCode5870 = instantiate_Array_with(ThreadedCode_Class, 0, 72, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend5871, (Optr)PBlock5872, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5876, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend5879, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5880, (Optr)&t_send1, (Optr)PSend5878, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5877, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5881, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend5882, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock5883, (Optr)&t_send1, (Optr)PSend5890, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5891, (Optr)&t_send_ifTrue_, (Optr)PSend5892, (Optr)PBlock5893, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend5896, (Optr)&t_send_ifTrue_, (Optr)PSend5897, (Optr)PBlock5898, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5902, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5903, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_method_return);
    Block PBlock5868 = new_Block_with(PArray5869, empty_Array, PThreadedCode5870, 9, PSend5871, PAssign5876, PAssign5881, PSend5890, PSend5892, PSend5897, PSend5902, PSend5903, VAR_value_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5904 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5868);
    Array PThreadedCode5867 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5868, (Optr)&t_send1, (Optr)PSend5904, (Optr)&t_method_return);
    Method PMethod5864 = new_Method_with(PArray5865, PArray5866, empty_Array, PThreadedCode5867, 1, PSend5904);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod5864, Set_Class);
    store_method(Set_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_remove_() {
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5906 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_valueNotFound_ = new_Symbol(L"valueNotFound:");
    // valueNotFound:. 
    Send PSend5910 = new_Send((Optr)self, SMB_valueNotFound_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5909 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5910, (Optr)&t_block_return);
    Block PBlock5908 = new_Block_with(empty_Array, empty_Array, PThreadedCode5909, 1, PSend5910);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend5911 = new_Send((Optr)self, SMB_remove_ifAbsent_, 2, (Optr)VAR_anObject_0_0, (Optr)PBlock5908);
    Array PThreadedCode5907 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_closure, (Optr)PBlock5908, (Optr)&t_send2, (Optr)PSend5911, (Optr)&t_method_return);
    Method PMethod5905 = new_Method_with(PArray5906, empty_Array, empty_Array, PThreadedCode5907, 1, PSend5911);
    
    MethodClosure MC_SMB_remove_ = new_MethodClosure((Method)PMethod5905, Set_Class);
    store_method(Set_Class, SMB_remove_, MC_SMB_remove_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray5913 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_item_0_3 = new_Variable_named(L"item", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray5914 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_item_0_3, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend5916 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign5917 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend5920 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend5921 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend5920);
    Array PThreadedCode5919 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend5920, (Optr)&t_send1, (Optr)PSend5921, (Optr)&t_block_return);
    Block PBlock5918 = new_Block_with(empty_Array, empty_Array, PThreadedCode5919, 1, PSend5921);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5925 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign5924 = new_Assign((Optr)VAR_item_0_3, (Optr)PSend5925);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5929 = new_Send((Optr)VAR_item_0_3, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5930 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5928 = new_Send((Optr)PSend5929, SMB__modulo_, 1, (Optr)PSend5930);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5927 = new_Send((Optr)PSend5928, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5926 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend5927);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend5931 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // +. 
    Send PSend5936 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5935 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend5936);
    Array PThreadedCode5934 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5935, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5936, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5933 = new_Block_with(empty_Array, empty_Array, PThreadedCode5934, 1, PAssign5935);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend5939 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend5940 = new_Send((Optr)PSend5939, SMB_addNew_, 1, (Optr)VAR_item_0_3);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend5941 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode5938 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend5939, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send1, (Optr)PSend5940, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend5941, (Optr)&t_block_return);
    Block PBlock5937 = new_Block_with(empty_Array, empty_Array, PThreadedCode5938, 2, PSend5940, PSend5941);
    // ifTrue:ifFalse:. 
    Send PSend5932 = new_Send((Optr)PSend5931, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5933, (Optr)PBlock5937);
    Array PThreadedCode5923 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign5924, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend5925, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5926, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send0, (Optr)PSend5929, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5930, (Optr)&t_send1, (Optr)PSend5928, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5927, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend5931, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5932, (Optr)PBlock5933, (Optr)PBlock5937, (Optr)&t_block_return);
    Block PBlock5922 = new_Block_with(empty_Array, empty_Array, PThreadedCode5923, 3, PAssign5924, PAssign5926, PSend5932);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend5942 = new_Send((Optr)PBlock5918, SMB_whileTrue_, 1, (Optr)PBlock5922);
    Array PThreadedCode5915 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend5916, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5917, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock5918, (Optr)&t_push_closure, (Optr)PBlock5922, (Optr)&t_send1, (Optr)PSend5942, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5912 = new_Method_with(PArray5913, PArray5914, empty_Array, PThreadedCode5915, 4, PSend5916, PAssign5917, PSend5942, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod5912, Set_Class);
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