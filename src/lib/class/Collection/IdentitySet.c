#include <lib/class/Collection/IdentitySet.h>


Optr layout_Collection_IdentitySet_Class_class;
Optr layout_Collection_IdentitySet;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray5943 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Variable VAR_value_0_3 = new_Variable_named(L"value", 0);
    Array PArray5944 = new_Array_with(2, (Optr)VAR_bucket_0_2, (Optr)VAR_value_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5947 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5953 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5952 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5953);
    Array PThreadedCode5951 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5952, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5953, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5950 = new_Block_with(empty_Array, empty_Array, PThreadedCode5951, 1, PAssign5952);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend5960 = new_Send((Optr)VAR_anObject_0_0, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5961 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5959 = new_Send((Optr)PSend5960, SMB__modulo_, 1, (Optr)PSend5961);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5958 = new_Send((Optr)PSend5959, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5957 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5958);
    Assign PAssign5956 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5957);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5964 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5965 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5964);
    Array PThreadedCode5963 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5964, (Optr)&t_send1, (Optr)PSend5965, (Optr)&t_block_return);
    Block PBlock5962 = new_Block_with(empty_Array, empty_Array, PThreadedCode5963, 1, PSend5965);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend5966 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock5962);
    Array PThreadedCode5955 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign5956, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5960, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5961, (Optr)&t_send1, (Optr)PSend5959, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5958, (Optr)&t_send1, (Optr)PSend5957, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock5962, (Optr)&t_send1, (Optr)PSend5966, (Optr)&t_block_return);
    Block PBlock5954 = new_Block_with(empty_Array, empty_Array, PThreadedCode5955, 2, PAssign5956, PSend5966);
    // ifTrue:ifFalse:. 
    Send PSend5949 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5950, (Optr)PBlock5954);
    // value. 
    Send PSend5971 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend5972 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5971);
    Array PThreadedCode5970 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5971, (Optr)&t_send1, (Optr)PSend5972, (Optr)&t_block_return);
    Block PBlock5969 = new_Block_with(empty_Array, empty_Array, PThreadedCode5970, 1, PSend5972);
    // remove:ifAbsent:. 
    Send PSend5968 = new_Send((Optr)VAR_bucket_0_2, SMB_remove_ifAbsent_, 2, (Optr)VAR_anObject_0_0, (Optr)PBlock5969);
    Assign PAssign5967 = new_Assign((Optr)VAR_value_0_3, (Optr)PSend5968);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend5973 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode5948 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5949, (Optr)PBlock5950, (Optr)PBlock5954, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5967, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_closure, (Optr)PBlock5969, (Optr)&t_send2, (Optr)PSend5968, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5973, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_3, (Optr)&t_method_return);
    Block PBlock5946 = new_Block_with(PArray5947, empty_Array, PThreadedCode5948, 4, PSend5949, PAssign5967, PSend5973, VAR_value_0_3);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5974 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5946);
    Array PThreadedCode5945 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5946, (Optr)&t_send1, (Optr)PSend5974, (Optr)&t_method_return);
    Method PMethod5942 = new_Method_with(PArray5943, PArray5944, empty_Array, PThreadedCode5945, 1, PSend5974);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod5942, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray5976 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend5978 = new_Send((Optr)PIdentitySetBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode5977 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PIdentitySetBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend5978, (Optr)&t_method_return);
    Method PMethod5975 = new_Method_with(PArray5976, empty_Array, empty_Array, PThreadedCode5977, 1, PSend5978);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod5975, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5980 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5983 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5988 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includes:. 
    Send PSend5989 = new_Send((Optr)PSend5988, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5990 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5989);
    Array PThreadedCode5987 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5988, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5989, (Optr)&t_send1, (Optr)PSend5990, (Optr)&t_block_return);
    Block PBlock5986 = new_Block_with(empty_Array, empty_Array, PThreadedCode5987, 1, PSend5990);
    // ifTrue:. 
    Send PSend5985 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock5986);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend5991 = new_Send((Optr)VAR_anObject_0_0, SMB_identityHash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5992 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend5993 = new_Send((Optr)PSend5991, SMB__modulo_, 1, (Optr)PSend5992);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5994 = new_Send((Optr)PSend5993, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5995 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5994);
    Array PThreadedCode5997 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock5996 = new_Block_with(empty_Array, empty_Array, PThreadedCode5997, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray5999 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includes:. 
    Send PSend6001 = new_Send((Optr)VAR_bucket_2_0, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode6000 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend6001, (Optr)&t_method_return);
    Block PBlock5998 = new_Block_with(PArray5999, empty_Array, PThreadedCode6000, 1, PSend6001);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend6002 = new_Send((Optr)PSend5995, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock5996, (Optr)PBlock5998);
    Array PThreadedCode5984 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend5985, (Optr)PBlock5986, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5991, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5992, (Optr)&t_send1, (Optr)PSend5993, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5994, (Optr)&t_send1, (Optr)PSend5995, (Optr)&t_push_closure, (Optr)PBlock5996, (Optr)&t_push_closure, (Optr)PBlock5998, (Optr)&t_send2, (Optr)PSend6002, (Optr)&t_method_return);
    Block PBlock5982 = new_Block_with(PArray5983, empty_Array, PThreadedCode5984, 2, PSend5985, PSend6002);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6003 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5982);
    Array PThreadedCode5981 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5982, (Optr)&t_send1, (Optr)PSend6003, (Optr)&t_method_return);
    Method PMethod5979 = new_Method_with(PArray5980, empty_Array, empty_Array, PThreadedCode5981, 1, PSend6003);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod5979, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray6005 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_bucketIndex_0_1 = new_Variable_named(L"bucketIndex", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray6006 = new_Array_with(2, (Optr)VAR_bucketIndex_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6009 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addInFirstBucket_ = new_Symbol(L"addInFirstBucket:");
    // addInFirstBucket:. 
    Send PSend6014 = new_Send((Optr)self, SMB_addInFirstBucket_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6015 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6014);
    Array PThreadedCode6013 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6014, (Optr)&t_send1, (Optr)PSend6015, (Optr)&t_block_return);
    Block PBlock6012 = new_Block_with(empty_Array, empty_Array, PThreadedCode6013, 1, PSend6015);
    // ifTrue:. 
    Send PSend6011 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock6012);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend6019 = new_Send((Optr)VAR_value_0_0, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6020 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend6018 = new_Send((Optr)PSend6019, SMB__modulo_, 1, (Optr)PSend6020);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6017 = new_Send((Optr)PSend6018, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6016 = new_Assign((Optr)VAR_bucketIndex_0_1, (Optr)PSend6017);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6022 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign6021 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend6022);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend6026 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign6025 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend6026);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend6027 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_checkGrow = new_Symbol(L"checkGrow");
    // checkGrow. 
    Send PSend6028 = new_Send((Optr)self, SMB_checkGrow, 0);
    // escape:. 
    Send PSend6029 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode6024 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign6025, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend6026, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6027, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6028, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6029, (Optr)&t_block_return);
    Block PBlock6023 = new_Block_with(empty_Array, empty_Array, PThreadedCode6024, 4, PAssign6025, PSend6027, PSend6028, PSend6029);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend6030 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock6023);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend6031 = new_Send((Optr)VAR_bucket_0_2, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // escape:. 
    Send PSend6035 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode6034 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6035, (Optr)&t_block_return);
    Block PBlock6033 = new_Block_with(empty_Array, empty_Array, PThreadedCode6034, 1, PSend6035);
    // ifTrue:. 
    Send PSend6032 = new_Send((Optr)PSend6031, SMB_ifTrue_, 1, (Optr)PBlock6033);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend6036 = new_Send((Optr)VAR_bucket_0_2, SMB_isFull, 0);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend6041 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign6040 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend6041);
    Array PThreadedCode6039 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6040, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend6041, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6038 = new_Block_with(empty_Array, empty_Array, PThreadedCode6039, 1, PAssign6040);
    // ifTrue:. 
    Send PSend6037 = new_Send((Optr)PSend6036, SMB_ifTrue_, 1, (Optr)PBlock6038);
    // addNew:. 
    Send PSend6042 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    // checkGrow. 
    Send PSend6043 = new_Send((Optr)self, SMB_checkGrow, 0);
    Array PThreadedCode6010 = instantiate_Array_with(ThreadedCode_Class, 0, 72, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend6011, (Optr)PBlock6012, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6016, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend6019, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend6020, (Optr)&t_send1, (Optr)PSend6018, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6017, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6021, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend6022, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock6023, (Optr)&t_send1, (Optr)PSend6030, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6031, (Optr)&t_send_ifTrue_, (Optr)PSend6032, (Optr)PBlock6033, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend6036, (Optr)&t_send_ifTrue_, (Optr)PSend6037, (Optr)PBlock6038, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6042, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6043, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_method_return);
    Block PBlock6008 = new_Block_with(PArray6009, empty_Array, PThreadedCode6010, 9, PSend6011, PAssign6016, PAssign6021, PSend6030, PSend6032, PSend6037, PSend6042, PSend6043, VAR_value_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6044 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6008);
    Array PThreadedCode6007 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6008, (Optr)&t_send1, (Optr)PSend6044, (Optr)&t_method_return);
    Method PMethod6004 = new_Method_with(PArray6005, PArray6006, empty_Array, PThreadedCode6007, 1, PSend6044);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod6004, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray6046 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_item_0_3 = new_Variable_named(L"item", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray6047 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_item_0_3, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6049 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6050 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend6053 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend6054 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend6053);
    Array PThreadedCode6052 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend6053, (Optr)&t_send1, (Optr)PSend6054, (Optr)&t_block_return);
    Block PBlock6051 = new_Block_with(empty_Array, empty_Array, PThreadedCode6052, 1, PSend6054);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6058 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign6057 = new_Assign((Optr)VAR_item_0_3, (Optr)PSend6058);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend6062 = new_Send((Optr)VAR_item_0_3, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6063 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend6061 = new_Send((Optr)PSend6062, SMB__modulo_, 1, (Optr)PSend6063);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6060 = new_Send((Optr)PSend6061, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6059 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend6060);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6064 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // +. 
    Send PSend6069 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6068 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend6069);
    Array PThreadedCode6067 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6068, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6069, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6066 = new_Block_with(empty_Array, empty_Array, PThreadedCode6067, 1, PAssign6068);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend6072 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend6073 = new_Send((Optr)PSend6072, SMB_addNew_, 1, (Optr)VAR_item_0_3);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6074 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode6071 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend6072, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send1, (Optr)PSend6073, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend6074, (Optr)&t_block_return);
    Block PBlock6070 = new_Block_with(empty_Array, empty_Array, PThreadedCode6071, 2, PSend6073, PSend6074);
    // ifTrue:ifFalse:. 
    Send PSend6065 = new_Send((Optr)PSend6064, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6066, (Optr)PBlock6070);
    Array PThreadedCode6056 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign6057, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend6058, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6059, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send0, (Optr)PSend6062, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend6063, (Optr)&t_send1, (Optr)PSend6061, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6060, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend6064, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6065, (Optr)PBlock6066, (Optr)PBlock6070, (Optr)&t_block_return);
    Block PBlock6055 = new_Block_with(empty_Array, empty_Array, PThreadedCode6056, 3, PAssign6057, PAssign6059, PSend6065);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend6075 = new_Send((Optr)PBlock6051, SMB_whileTrue_, 1, (Optr)PBlock6055);
    Array PThreadedCode6048 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend6049, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6050, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock6051, (Optr)&t_push_closure, (Optr)PBlock6055, (Optr)&t_send1, (Optr)PSend6075, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6045 = new_Method_with(PArray6046, PArray6047, empty_Array, PThreadedCode6048, 4, PSend6049, PAssign6050, PSend6075, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod6045, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_reAddBucket_at_, MC_SMB_reAddBucket_at_);
}


static void init_class_SMB_bucketClass() {
    Symbol SMB_bucketClass = new_Symbol(L"bucketClass");
    Array PThreadedCode6077 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PIdentitySetBucket_classReference, (Optr)&t_method_return);
    Method PMethod6076 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6077, 1, PIdentitySetBucket_classReference);
    
    MethodClosure MC_SMB_bucketClass = new_MethodClosure((Method)PMethod6076, HEADER(IdentitySet_Class));
    store_method(HEADER(IdentitySet_Class), SMB_bucketClass, MC_SMB_bucketClass);
}

void init_Collection_IdentitySet_layout() {
    layout_Collection_IdentitySet_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_IdentitySet_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_IdentitySet_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_IdentitySet_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_IdentitySet_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_IdentitySet_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_IdentitySet = new_Symbol(L"IdentitySet");
    layout_Collection_IdentitySet = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_IdentitySet)->values[0] = slot_Collection_HashedCollection_size; // size 
    ((Array)layout_Collection_IdentitySet)->values[1] = slot_Collection_HashedCollection_maxLinear; // maxLinear 
    ((Array)layout_Collection_IdentitySet)->values[2] = slot_Collection_HashedCollection_ratio; // ratio 
    ((Array)layout_Collection_IdentitySet)->values[3] = slot_Collection_HashedCollection_buckets; // buckets 
    ((Array)layout_Collection_IdentitySet)->values[4] = slot_Collection_HashedCollection_linear; // linear 
    IdentitySet_Class = (Class)new_Class(Set_Class, layout_Collection_IdentitySet_Class_class);
    Class_set_superclass(IdentitySet_Class, Set_Class);
    IdentitySet_Class->layout = layout_Collection_IdentitySet;
    HEADER(IdentitySet_Class)->layout = layout_Collection_IdentitySet_Class_class;
    IdentitySet_Class->name = SMB_IdentitySet;
    
}

void init_Collection_IdentitySet_methods() {
    init_SMB_remove_ifAbsent_();
    init_SMB_newBucket_();
    init_SMB_includes_();
    init_SMB_add_();
    init_SMB_reAddBucket_at_();
    init_class_SMB_bucketClass();
    
}