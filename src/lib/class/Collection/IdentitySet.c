#include <lib/class/Collection/IdentitySet.h>


Optr layout_Collection_IdentitySet_Class_class;
Optr layout_Collection_IdentitySet;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray5952 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Variable VAR_value_0_3 = new_Variable_named(L"value", 0);
    Array PArray5953 = new_Array_with(2, (Optr)VAR_bucket_0_2, (Optr)VAR_value_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5956 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5962 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5961 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5962);
    Array PThreadedCode5960 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5961, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5962, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5959 = new_Block_with(empty_Array, empty_Array, PThreadedCode5960, 1, PAssign5961);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend5969 = new_Send((Optr)VAR_anObject_0_0, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5970 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5968 = new_Send((Optr)PSend5969, SMB__modulo_, 1, (Optr)PSend5970);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5967 = new_Send((Optr)PSend5968, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5966 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5967);
    Assign PAssign5965 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5966);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5973 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5974 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5973);
    Array PThreadedCode5972 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5973, (Optr)&t_send1, (Optr)PSend5974, (Optr)&t_block_return);
    Block PBlock5971 = new_Block_with(empty_Array, empty_Array, PThreadedCode5972, 1, PSend5974);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend5975 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock5971);
    Array PThreadedCode5964 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign5965, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5969, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5970, (Optr)&t_send1, (Optr)PSend5968, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5967, (Optr)&t_send1, (Optr)PSend5966, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock5971, (Optr)&t_send1, (Optr)PSend5975, (Optr)&t_block_return);
    Block PBlock5963 = new_Block_with(empty_Array, empty_Array, PThreadedCode5964, 2, PAssign5965, PSend5975);
    // ifTrue:ifFalse:. 
    Send PSend5958 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5959, (Optr)PBlock5963);
    // value. 
    Send PSend5980 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend5981 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5980);
    Array PThreadedCode5979 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5980, (Optr)&t_send1, (Optr)PSend5981, (Optr)&t_block_return);
    Block PBlock5978 = new_Block_with(empty_Array, empty_Array, PThreadedCode5979, 1, PSend5981);
    // remove:ifAbsent:. 
    Send PSend5977 = new_Send((Optr)VAR_bucket_0_2, SMB_remove_ifAbsent_, 2, (Optr)VAR_anObject_0_0, (Optr)PBlock5978);
    Assign PAssign5976 = new_Assign((Optr)VAR_value_0_3, (Optr)PSend5977);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend5982 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode5957 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5958, (Optr)PBlock5959, (Optr)PBlock5963, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5976, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_closure, (Optr)PBlock5978, (Optr)&t_send2, (Optr)PSend5977, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5982, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_3, (Optr)&t_method_return);
    Block PBlock5955 = new_Block_with(PArray5956, empty_Array, PThreadedCode5957, 4, PSend5958, PAssign5976, PSend5982, VAR_value_0_3);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5983 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5955);
    Array PThreadedCode5954 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5955, (Optr)&t_send1, (Optr)PSend5983, (Optr)&t_method_return);
    Method PMethod5951 = new_Method_with(PArray5952, PArray5953, empty_Array, PThreadedCode5954, 1, PSend5983);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod5951, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray5985 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend5987 = new_Send((Optr)PIdentitySetBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode5986 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PIdentitySetBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend5987, (Optr)&t_method_return);
    Method PMethod5984 = new_Method_with(PArray5985, empty_Array, empty_Array, PThreadedCode5986, 1, PSend5987);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod5984, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5989 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5992 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5997 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includes:. 
    Send PSend5998 = new_Send((Optr)PSend5997, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5999 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5998);
    Array PThreadedCode5996 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5997, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5998, (Optr)&t_send1, (Optr)PSend5999, (Optr)&t_block_return);
    Block PBlock5995 = new_Block_with(empty_Array, empty_Array, PThreadedCode5996, 1, PSend5999);
    // ifTrue:. 
    Send PSend5994 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock5995);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend6000 = new_Send((Optr)VAR_anObject_0_0, SMB_identityHash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6001 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend6002 = new_Send((Optr)PSend6000, SMB__modulo_, 1, (Optr)PSend6001);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6003 = new_Send((Optr)PSend6002, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6004 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend6003);
    Array PThreadedCode6006 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock6005 = new_Block_with(empty_Array, empty_Array, PThreadedCode6006, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray6008 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includes:. 
    Send PSend6010 = new_Send((Optr)VAR_bucket_2_0, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode6009 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend6010, (Optr)&t_method_return);
    Block PBlock6007 = new_Block_with(PArray6008, empty_Array, PThreadedCode6009, 1, PSend6010);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend6011 = new_Send((Optr)PSend6004, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock6005, (Optr)PBlock6007);
    Array PThreadedCode5993 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend5994, (Optr)PBlock5995, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend6000, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend6001, (Optr)&t_send1, (Optr)PSend6002, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6003, (Optr)&t_send1, (Optr)PSend6004, (Optr)&t_push_closure, (Optr)PBlock6005, (Optr)&t_push_closure, (Optr)PBlock6007, (Optr)&t_send2, (Optr)PSend6011, (Optr)&t_method_return);
    Block PBlock5991 = new_Block_with(PArray5992, empty_Array, PThreadedCode5993, 2, PSend5994, PSend6011);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6012 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5991);
    Array PThreadedCode5990 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5991, (Optr)&t_send1, (Optr)PSend6012, (Optr)&t_method_return);
    Method PMethod5988 = new_Method_with(PArray5989, empty_Array, empty_Array, PThreadedCode5990, 1, PSend6012);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod5988, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray6014 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_bucketIndex_0_1 = new_Variable_named(L"bucketIndex", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray6015 = new_Array_with(2, (Optr)VAR_bucketIndex_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6018 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addInFirstBucket_ = new_Symbol(L"addInFirstBucket:");
    // addInFirstBucket:. 
    Send PSend6023 = new_Send((Optr)self, SMB_addInFirstBucket_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6024 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6023);
    Array PThreadedCode6022 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6023, (Optr)&t_send1, (Optr)PSend6024, (Optr)&t_block_return);
    Block PBlock6021 = new_Block_with(empty_Array, empty_Array, PThreadedCode6022, 1, PSend6024);
    // ifTrue:. 
    Send PSend6020 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock6021);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend6028 = new_Send((Optr)VAR_value_0_0, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6029 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend6027 = new_Send((Optr)PSend6028, SMB__modulo_, 1, (Optr)PSend6029);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6026 = new_Send((Optr)PSend6027, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6025 = new_Assign((Optr)VAR_bucketIndex_0_1, (Optr)PSend6026);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6031 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign6030 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend6031);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend6035 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign6034 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend6035);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend6036 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_checkGrow = new_Symbol(L"checkGrow");
    // checkGrow. 
    Send PSend6037 = new_Send((Optr)self, SMB_checkGrow, 0);
    // escape:. 
    Send PSend6038 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode6033 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign6034, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend6035, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6036, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6037, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6038, (Optr)&t_block_return);
    Block PBlock6032 = new_Block_with(empty_Array, empty_Array, PThreadedCode6033, 4, PAssign6034, PSend6036, PSend6037, PSend6038);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend6039 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock6032);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend6040 = new_Send((Optr)VAR_bucket_0_2, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // escape:. 
    Send PSend6044 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode6043 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6044, (Optr)&t_block_return);
    Block PBlock6042 = new_Block_with(empty_Array, empty_Array, PThreadedCode6043, 1, PSend6044);
    // ifTrue:. 
    Send PSend6041 = new_Send((Optr)PSend6040, SMB_ifTrue_, 1, (Optr)PBlock6042);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend6045 = new_Send((Optr)VAR_bucket_0_2, SMB_isFull, 0);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend6050 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign6049 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend6050);
    Array PThreadedCode6048 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6049, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend6050, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6047 = new_Block_with(empty_Array, empty_Array, PThreadedCode6048, 1, PAssign6049);
    // ifTrue:. 
    Send PSend6046 = new_Send((Optr)PSend6045, SMB_ifTrue_, 1, (Optr)PBlock6047);
    // addNew:. 
    Send PSend6051 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    // checkGrow. 
    Send PSend6052 = new_Send((Optr)self, SMB_checkGrow, 0);
    Array PThreadedCode6019 = instantiate_Array_with(ThreadedCode_Class, 0, 72, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend6020, (Optr)PBlock6021, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6025, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend6028, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend6029, (Optr)&t_send1, (Optr)PSend6027, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6026, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6030, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend6031, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock6032, (Optr)&t_send1, (Optr)PSend6039, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6040, (Optr)&t_send_ifTrue_, (Optr)PSend6041, (Optr)PBlock6042, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend6045, (Optr)&t_send_ifTrue_, (Optr)PSend6046, (Optr)PBlock6047, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6051, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6052, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_method_return);
    Block PBlock6017 = new_Block_with(PArray6018, empty_Array, PThreadedCode6019, 9, PSend6020, PAssign6025, PAssign6030, PSend6039, PSend6041, PSend6046, PSend6051, PSend6052, VAR_value_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6053 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6017);
    Array PThreadedCode6016 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6017, (Optr)&t_send1, (Optr)PSend6053, (Optr)&t_method_return);
    Method PMethod6013 = new_Method_with(PArray6014, PArray6015, empty_Array, PThreadedCode6016, 1, PSend6053);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod6013, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray6055 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_item_0_3 = new_Variable_named(L"item", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray6056 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_item_0_3, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6058 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6059 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend6062 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend6063 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend6062);
    Array PThreadedCode6061 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend6062, (Optr)&t_send1, (Optr)PSend6063, (Optr)&t_block_return);
    Block PBlock6060 = new_Block_with(empty_Array, empty_Array, PThreadedCode6061, 1, PSend6063);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6067 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign6066 = new_Assign((Optr)VAR_item_0_3, (Optr)PSend6067);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend6071 = new_Send((Optr)VAR_item_0_3, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6072 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend6070 = new_Send((Optr)PSend6071, SMB__modulo_, 1, (Optr)PSend6072);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6069 = new_Send((Optr)PSend6070, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6068 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend6069);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6073 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // +. 
    Send PSend6078 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6077 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend6078);
    Array PThreadedCode6076 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6077, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6078, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6075 = new_Block_with(empty_Array, empty_Array, PThreadedCode6076, 1, PAssign6077);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend6081 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend6082 = new_Send((Optr)PSend6081, SMB_addNew_, 1, (Optr)VAR_item_0_3);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6083 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode6080 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend6081, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send1, (Optr)PSend6082, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend6083, (Optr)&t_block_return);
    Block PBlock6079 = new_Block_with(empty_Array, empty_Array, PThreadedCode6080, 2, PSend6082, PSend6083);
    // ifTrue:ifFalse:. 
    Send PSend6074 = new_Send((Optr)PSend6073, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6075, (Optr)PBlock6079);
    Array PThreadedCode6065 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign6066, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend6067, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6068, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send0, (Optr)PSend6071, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend6072, (Optr)&t_send1, (Optr)PSend6070, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6069, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend6073, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6074, (Optr)PBlock6075, (Optr)PBlock6079, (Optr)&t_block_return);
    Block PBlock6064 = new_Block_with(empty_Array, empty_Array, PThreadedCode6065, 3, PAssign6066, PAssign6068, PSend6074);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend6084 = new_Send((Optr)PBlock6060, SMB_whileTrue_, 1, (Optr)PBlock6064);
    Array PThreadedCode6057 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend6058, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6059, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock6060, (Optr)&t_push_closure, (Optr)PBlock6064, (Optr)&t_send1, (Optr)PSend6084, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6054 = new_Method_with(PArray6055, PArray6056, empty_Array, PThreadedCode6057, 4, PSend6058, PAssign6059, PSend6084, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod6054, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_reAddBucket_at_, MC_SMB_reAddBucket_at_);
}


static void init_class_SMB_bucketClass() {
    Symbol SMB_bucketClass = new_Symbol(L"bucketClass");
    Array PThreadedCode6086 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PIdentitySetBucket_classReference, (Optr)&t_method_return);
    Method PMethod6085 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6086, 1, PIdentitySetBucket_classReference);
    
    MethodClosure MC_SMB_bucketClass = new_MethodClosure((Method)PMethod6085, HEADER(IdentitySet_Class));
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