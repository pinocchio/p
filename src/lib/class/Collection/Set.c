#include <lib/class/Collection/Set.h>


Optr layout_Collection_Set_Class_class;
Optr layout_Collection_Set;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray5763 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Variable VAR_value_0_3 = new_Variable_named(L"value", 0);
    Array PArray5764 = new_Array_with(2, (Optr)VAR_bucket_0_2, (Optr)VAR_value_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5767 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5773 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5772 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5773);
    Array PThreadedCode5771 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5772, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5773, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5770 = new_Block_with(empty_Array, empty_Array, PThreadedCode5771, 1, PAssign5772);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5780 = new_Send((Optr)VAR_anObject_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5781 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5779 = new_Send((Optr)PSend5780, SMB__modulo_, 1, (Optr)PSend5781);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5778 = new_Send((Optr)PSend5779, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5777 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5778);
    Assign PAssign5776 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5777);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5784 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5785 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5784);
    Array PThreadedCode5783 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5784, (Optr)&t_send1, (Optr)PSend5785, (Optr)&t_block_return);
    Block PBlock5782 = new_Block_with(empty_Array, empty_Array, PThreadedCode5783, 1, PSend5785);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend5786 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock5782);
    Array PThreadedCode5775 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign5776, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5780, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5781, (Optr)&t_send1, (Optr)PSend5779, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5778, (Optr)&t_send1, (Optr)PSend5777, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock5782, (Optr)&t_send1, (Optr)PSend5786, (Optr)&t_block_return);
    Block PBlock5774 = new_Block_with(empty_Array, empty_Array, PThreadedCode5775, 2, PAssign5776, PSend5786);
    // ifTrue:ifFalse:. 
    Send PSend5769 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5770, (Optr)PBlock5774);
    // value. 
    Send PSend5791 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend5792 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5791);
    Array PThreadedCode5790 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5791, (Optr)&t_send1, (Optr)PSend5792, (Optr)&t_block_return);
    Block PBlock5789 = new_Block_with(empty_Array, empty_Array, PThreadedCode5790, 1, PSend5792);
    // remove:ifAbsent:. 
    Send PSend5788 = new_Send((Optr)VAR_bucket_0_2, SMB_remove_ifAbsent_, 2, (Optr)VAR_anObject_0_0, (Optr)PBlock5789);
    Assign PAssign5787 = new_Assign((Optr)VAR_value_0_3, (Optr)PSend5788);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend5793 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode5768 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5769, (Optr)PBlock5770, (Optr)PBlock5774, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5787, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_closure, (Optr)PBlock5789, (Optr)&t_send2, (Optr)PSend5788, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5793, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_3, (Optr)&t_method_return);
    Block PBlock5766 = new_Block_with(PArray5767, empty_Array, PThreadedCode5768, 4, PSend5769, PAssign5787, PSend5793, VAR_value_0_3);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5794 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5766);
    Array PThreadedCode5765 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5766, (Optr)&t_send1, (Optr)PSend5794, (Optr)&t_method_return);
    Method PMethod5762 = new_Method_with(PArray5763, PArray5764, empty_Array, PThreadedCode5765, 1, PSend5794);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod5762, Set_Class);
    store_method(Set_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray5796 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray5797 = new_Array_with(1, (Optr)VAR_index_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign5799 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray5801 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend5804 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5803 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend5804);
    Array PThreadedCode5806 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_block_return);
    Block PBlock5805 = new_Block_with(empty_Array, empty_Array, PThreadedCode5806, 1, VAR_value_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend5807 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)PAssign5803, (Optr)PBlock5805);
    Array PThreadedCode5802 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push1, (Optr)PAssign5803, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5804, (Optr)&t_assign, (Optr)&t_push_closure, (Optr)PBlock5805, (Optr)&t_send2, (Optr)PSend5807, (Optr)&t_method_return);
    Block PBlock5800 = new_Block_with(PArray5801, empty_Array, PThreadedCode5802, 1, PSend5807);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5808 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5800);
    Array PThreadedCode5798 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign5799, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5800, (Optr)&t_send1, (Optr)PSend5808, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5795 = new_Method_with(PArray5796, PArray5797, empty_Array, PThreadedCode5798, 3, PAssign5799, PSend5808, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod5795, Set_Class);
    store_method(Set_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray5810 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend5812 = new_Send((Optr)PSetBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode5811 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PSetBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend5812, (Optr)&t_method_return);
    Method PMethod5809 = new_Method_with(PArray5810, empty_Array, empty_Array, PThreadedCode5811, 1, PSend5812);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod5809, Set_Class);
    store_method(Set_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_addInFirstBucket_() {
    Symbol SMB_addInFirstBucket_ = new_Symbol(L"addInFirstBucket:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray5814 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_bucket_0_1 = new_Variable_named(L"bucket", 0);
    Array PArray5815 = new_Array_with(1, (Optr)VAR_bucket_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5818 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5821 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5820 = new_Assign((Optr)VAR_bucket_0_1, (Optr)PSend5821);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend5822 = new_Send((Optr)VAR_bucket_0_1, SMB_includes_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5826 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode5825 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5826, (Optr)&t_block_return);
    Block PBlock5824 = new_Block_with(empty_Array, empty_Array, PThreadedCode5825, 1, PSend5826);
    // ifTrue:. 
    Send PSend5823 = new_Send((Optr)PSend5822, SMB_ifTrue_, 1, (Optr)PBlock5824);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend5827 = new_Send((Optr)VAR_bucket_0_1, SMB_isFull, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend5831 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__lt_, 1, (Optr)slot_Collection_HashedCollection_maxLinear);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign5835 = new_Assign((Optr)slot_Collection_HashedCollection_linear, (Optr)false_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_32 = new_SmallInt(32);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // new:. 
    Send PSend5837 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_32_Const);
    Assign PAssign5836 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend5837);
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    // reAddBucket:at:. 
    Send PSend5838 = new_Send((Optr)self, SMB_reAddBucket_at_, 2, (Optr)VAR_bucket_0_1, (Optr)int_1_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5839 = new_Send((Optr)self, SMB_add_, 1, (Optr)VAR_value_0_0);
    // escape:. 
    Send PSend5840 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5839);
    Array PThreadedCode5834 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign5835, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5836, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend5837, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend5838, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5839, (Optr)&t_send1, (Optr)PSend5840, (Optr)&t_block_return);
    Block PBlock5833 = new_Block_with(empty_Array, empty_Array, PThreadedCode5834, 4, PAssign5835, PAssign5836, PSend5838, PSend5840);
    // ifFalse:. 
    Send PSend5832 = new_Send((Optr)PSend5831, SMB_ifFalse_, 1, (Optr)PBlock5833);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend5842 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)int_1_Const);
    Assign PAssign5841 = new_Assign((Optr)VAR_bucket_0_1, (Optr)PSend5842);
    Array PThreadedCode5830 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_maxLinear, (Optr)&t_send1, (Optr)PSend5831, (Optr)&t_send_ifFalse_, (Optr)PSend5832, (Optr)PBlock5833, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5841, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5842, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5829 = new_Block_with(empty_Array, empty_Array, PThreadedCode5830, 2, PSend5832, PAssign5841);
    // ifTrue:. 
    Send PSend5828 = new_Send((Optr)PSend5827, SMB_ifTrue_, 1, (Optr)PBlock5829);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend5843 = new_Send((Optr)VAR_bucket_0_1, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5845 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5844 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)PSend5845);
    Array PThreadedCode5819 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign5820, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5821, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5822, (Optr)&t_send_ifTrue_, (Optr)PSend5823, (Optr)PBlock5824, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_send0, (Optr)PSend5827, (Optr)&t_send_ifTrue_, (Optr)PSend5828, (Optr)PBlock5829, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_1, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5843, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5844, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5845, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_method_return);
    Block PBlock5817 = new_Block_with(PArray5818, empty_Array, PThreadedCode5819, 6, PAssign5820, PSend5823, PSend5828, PSend5843, PAssign5844, VAR_value_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5846 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5817);
    Array PThreadedCode5816 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5817, (Optr)&t_send1, (Optr)PSend5846, (Optr)&t_method_return);
    Method PMethod5813 = new_Method_with(PArray5814, PArray5815, empty_Array, PThreadedCode5816, 1, PSend5846);
    
    MethodClosure MC_SMB_addInFirstBucket_ = new_MethodClosure((Method)PMethod5813, Set_Class);
    store_method(Set_Class, SMB_addInFirstBucket_, MC_SMB_addInFirstBucket_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5848 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5851 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5856 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includes:. 
    Send PSend5857 = new_Send((Optr)PSend5856, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5858 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5857);
    Array PThreadedCode5855 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5856, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5857, (Optr)&t_send1, (Optr)PSend5858, (Optr)&t_block_return);
    Block PBlock5854 = new_Block_with(empty_Array, empty_Array, PThreadedCode5855, 1, PSend5858);
    // ifTrue:. 
    Send PSend5853 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock5854);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5859 = new_Send((Optr)VAR_anObject_0_0, SMB_hash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5860 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend5861 = new_Send((Optr)PSend5859, SMB__modulo_, 1, (Optr)PSend5860);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5862 = new_Send((Optr)PSend5861, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5863 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5862);
    Array PThreadedCode5865 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock5864 = new_Block_with(empty_Array, empty_Array, PThreadedCode5865, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray5867 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includes:. 
    Send PSend5869 = new_Send((Optr)VAR_bucket_2_0, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5868 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5869, (Optr)&t_method_return);
    Block PBlock5866 = new_Block_with(PArray5867, empty_Array, PThreadedCode5868, 1, PSend5869);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend5870 = new_Send((Optr)PSend5863, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock5864, (Optr)PBlock5866);
    Array PThreadedCode5852 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend5853, (Optr)PBlock5854, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5859, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5860, (Optr)&t_send1, (Optr)PSend5861, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5862, (Optr)&t_send1, (Optr)PSend5863, (Optr)&t_push_closure, (Optr)PBlock5864, (Optr)&t_push_closure, (Optr)PBlock5866, (Optr)&t_send2, (Optr)PSend5870, (Optr)&t_method_return);
    Block PBlock5850 = new_Block_with(PArray5851, empty_Array, PThreadedCode5852, 2, PSend5853, PSend5870);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5871 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5850);
    Array PThreadedCode5849 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5850, (Optr)&t_send1, (Optr)PSend5871, (Optr)&t_method_return);
    Method PMethod5847 = new_Method_with(PArray5848, empty_Array, empty_Array, PThreadedCode5849, 1, PSend5871);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod5847, Set_Class);
    store_method(Set_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray5873 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_bucketIndex_0_1 = new_Variable_named(L"bucketIndex", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray5874 = new_Array_with(2, (Optr)VAR_bucketIndex_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5877 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addInFirstBucket_ = new_Symbol(L"addInFirstBucket:");
    // addInFirstBucket:. 
    Send PSend5882 = new_Send((Optr)self, SMB_addInFirstBucket_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5883 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5882);
    Array PThreadedCode5881 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5882, (Optr)&t_send1, (Optr)PSend5883, (Optr)&t_block_return);
    Block PBlock5880 = new_Block_with(empty_Array, empty_Array, PThreadedCode5881, 1, PSend5883);
    // ifTrue:. 
    Send PSend5879 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock5880);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5887 = new_Send((Optr)VAR_value_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5888 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5886 = new_Send((Optr)PSend5887, SMB__modulo_, 1, (Optr)PSend5888);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend5885 = new_Send((Optr)PSend5886, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5884 = new_Assign((Optr)VAR_bucketIndex_0_1, (Optr)PSend5885);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5890 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign5889 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5890);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend5894 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign5893 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5894);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend5895 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_checkGrow = new_Symbol(L"checkGrow");
    // checkGrow. 
    Send PSend5896 = new_Send((Optr)self, SMB_checkGrow, 0);
    // escape:. 
    Send PSend5897 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode5892 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign5893, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend5894, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5895, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5896, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5897, (Optr)&t_block_return);
    Block PBlock5891 = new_Block_with(empty_Array, empty_Array, PThreadedCode5892, 4, PAssign5893, PSend5895, PSend5896, PSend5897);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend5898 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock5891);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend5899 = new_Send((Optr)VAR_bucket_0_2, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // escape:. 
    Send PSend5903 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode5902 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5903, (Optr)&t_block_return);
    Block PBlock5901 = new_Block_with(empty_Array, empty_Array, PThreadedCode5902, 1, PSend5903);
    // ifTrue:. 
    Send PSend5900 = new_Send((Optr)PSend5899, SMB_ifTrue_, 1, (Optr)PBlock5901);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend5904 = new_Send((Optr)VAR_bucket_0_2, SMB_isFull, 0);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend5909 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign5908 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5909);
    Array PThreadedCode5907 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5908, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend5909, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5906 = new_Block_with(empty_Array, empty_Array, PThreadedCode5907, 1, PAssign5908);
    // ifTrue:. 
    Send PSend5905 = new_Send((Optr)PSend5904, SMB_ifTrue_, 1, (Optr)PBlock5906);
    // addNew:. 
    Send PSend5910 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    // checkGrow. 
    Send PSend5911 = new_Send((Optr)self, SMB_checkGrow, 0);
    Array PThreadedCode5878 = instantiate_Array_with(ThreadedCode_Class, 0, 72, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend5879, (Optr)PBlock5880, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5884, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend5887, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5888, (Optr)&t_send1, (Optr)PSend5886, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5885, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5889, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend5890, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock5891, (Optr)&t_send1, (Optr)PSend5898, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5899, (Optr)&t_send_ifTrue_, (Optr)PSend5900, (Optr)PBlock5901, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend5904, (Optr)&t_send_ifTrue_, (Optr)PSend5905, (Optr)PBlock5906, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend5910, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5911, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_method_return);
    Block PBlock5876 = new_Block_with(PArray5877, empty_Array, PThreadedCode5878, 9, PSend5879, PAssign5884, PAssign5889, PSend5898, PSend5900, PSend5905, PSend5910, PSend5911, VAR_value_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5912 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5876);
    Array PThreadedCode5875 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5876, (Optr)&t_send1, (Optr)PSend5912, (Optr)&t_method_return);
    Method PMethod5872 = new_Method_with(PArray5873, PArray5874, empty_Array, PThreadedCode5875, 1, PSend5912);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod5872, Set_Class);
    store_method(Set_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_remove_() {
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5914 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_valueNotFound_ = new_Symbol(L"valueNotFound:");
    // valueNotFound:. 
    Send PSend5918 = new_Send((Optr)self, SMB_valueNotFound_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5917 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5918, (Optr)&t_block_return);
    Block PBlock5916 = new_Block_with(empty_Array, empty_Array, PThreadedCode5917, 1, PSend5918);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend5919 = new_Send((Optr)self, SMB_remove_ifAbsent_, 2, (Optr)VAR_anObject_0_0, (Optr)PBlock5916);
    Array PThreadedCode5915 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_closure, (Optr)PBlock5916, (Optr)&t_send2, (Optr)PSend5919, (Optr)&t_method_return);
    Method PMethod5913 = new_Method_with(PArray5914, empty_Array, empty_Array, PThreadedCode5915, 1, PSend5919);
    
    MethodClosure MC_SMB_remove_ = new_MethodClosure((Method)PMethod5913, Set_Class);
    store_method(Set_Class, SMB_remove_, MC_SMB_remove_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray5921 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_item_0_3 = new_Variable_named(L"item", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray5922 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_item_0_3, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend5924 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign5925 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend5928 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend5929 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend5928);
    Array PThreadedCode5927 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend5928, (Optr)&t_send1, (Optr)PSend5929, (Optr)&t_block_return);
    Block PBlock5926 = new_Block_with(empty_Array, empty_Array, PThreadedCode5927, 1, PSend5929);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5933 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign5932 = new_Assign((Optr)VAR_item_0_3, (Optr)PSend5933);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend5937 = new_Send((Optr)VAR_item_0_3, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5938 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5936 = new_Send((Optr)PSend5937, SMB__modulo_, 1, (Optr)PSend5938);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5935 = new_Send((Optr)PSend5936, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5934 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend5935);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend5939 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // +. 
    Send PSend5944 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign5943 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend5944);
    Array PThreadedCode5942 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5943, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5944, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5941 = new_Block_with(empty_Array, empty_Array, PThreadedCode5942, 1, PAssign5943);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend5947 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend5948 = new_Send((Optr)PSend5947, SMB_addNew_, 1, (Optr)VAR_item_0_3);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend5949 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode5946 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend5947, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send1, (Optr)PSend5948, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend5949, (Optr)&t_block_return);
    Block PBlock5945 = new_Block_with(empty_Array, empty_Array, PThreadedCode5946, 2, PSend5948, PSend5949);
    // ifTrue:ifFalse:. 
    Send PSend5940 = new_Send((Optr)PSend5939, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5941, (Optr)PBlock5945);
    Array PThreadedCode5931 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign5932, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend5933, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5934, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send0, (Optr)PSend5937, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5938, (Optr)&t_send1, (Optr)PSend5936, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5935, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend5939, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5940, (Optr)PBlock5941, (Optr)PBlock5945, (Optr)&t_block_return);
    Block PBlock5930 = new_Block_with(empty_Array, empty_Array, PThreadedCode5931, 3, PAssign5932, PAssign5934, PSend5940);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend5950 = new_Send((Optr)PBlock5926, SMB_whileTrue_, 1, (Optr)PBlock5930);
    Array PThreadedCode5923 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend5924, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5925, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock5926, (Optr)&t_push_closure, (Optr)PBlock5930, (Optr)&t_send1, (Optr)PSend5950, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5920 = new_Method_with(PArray5921, PArray5922, empty_Array, PThreadedCode5923, 4, PSend5924, PAssign5925, PSend5950, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod5920, Set_Class);
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