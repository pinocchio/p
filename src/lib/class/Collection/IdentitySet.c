#include <lib/class/Collection/IdentitySet.h>


Optr layout_Collection_IdentitySet_Class_class;
Optr layout_Collection_IdentitySet;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray5944 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Variable VAR_value_0_3 = new_Variable_named(L"value", 0);
    Array PArray5945 = new_Array_with(2, (Optr)VAR_bucket_0_2, (Optr)VAR_value_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5948 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5954 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5953 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5954);
    Array PThreadedCode5952 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5953, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5954, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5951 = new_Block_with(empty_Array, empty_Array, PThreadedCode5952, 1, PAssign5953);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend5961 = new_Send((Optr)VAR_anObject_0_0, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5962 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5960 = new_Send((Optr)PSend5961, SMB__modulo_, 1, (Optr)PSend5962);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5959 = new_Send((Optr)PSend5960, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5958 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5959);
    Assign PAssign5957 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5958);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5965 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5966 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5965);
    Array PThreadedCode5964 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5965, (Optr)&t_send1, (Optr)PSend5966, (Optr)&t_block_return);
    Block PBlock5963 = new_Block_with(empty_Array, empty_Array, PThreadedCode5964, 1, PSend5966);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend5967 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock5963);
    Array PThreadedCode5956 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign5957, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5961, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5962, (Optr)&t_send1, (Optr)PSend5960, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5959, (Optr)&t_send1, (Optr)PSend5958, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock5963, (Optr)&t_send1, (Optr)PSend5967, (Optr)&t_block_return);
    Block PBlock5955 = new_Block_with(empty_Array, empty_Array, PThreadedCode5956, 2, PAssign5957, PSend5967);
    // ifTrue:ifFalse:. 
    Send PSend5950 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5951, (Optr)PBlock5955);
    // value. 
    Send PSend5972 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend5973 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5972);
    Array PThreadedCode5971 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5972, (Optr)&t_send1, (Optr)PSend5973, (Optr)&t_block_return);
    Block PBlock5970 = new_Block_with(empty_Array, empty_Array, PThreadedCode5971, 1, PSend5973);
    // remove:ifAbsent:. 
    Send PSend5969 = new_Send((Optr)VAR_bucket_0_2, SMB_remove_ifAbsent_, 2, (Optr)VAR_anObject_0_0, (Optr)PBlock5970);
    Assign PAssign5968 = new_Assign((Optr)VAR_value_0_3, (Optr)PSend5969);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend5974 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode5949 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5950, (Optr)PBlock5951, (Optr)PBlock5955, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5968, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_closure, (Optr)PBlock5970, (Optr)&t_send2, (Optr)PSend5969, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5974, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_3, (Optr)&t_method_return);
    Block PBlock5947 = new_Block_with(PArray5948, empty_Array, PThreadedCode5949, 4, PSend5950, PAssign5968, PSend5974, VAR_value_0_3);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5975 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5947);
    Array PThreadedCode5946 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5947, (Optr)&t_send1, (Optr)PSend5975, (Optr)&t_method_return);
    Method PMethod5943 = new_Method_with(PArray5944, PArray5945, empty_Array, PThreadedCode5946, 1, PSend5975);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod5943, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray5977 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend5979 = new_Send((Optr)PIdentitySetBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode5978 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PIdentitySetBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend5979, (Optr)&t_method_return);
    Method PMethod5976 = new_Method_with(PArray5977, empty_Array, empty_Array, PThreadedCode5978, 1, PSend5979);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod5976, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5981 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5984 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5989 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includes:. 
    Send PSend5990 = new_Send((Optr)PSend5989, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5991 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5990);
    Array PThreadedCode5988 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5989, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5990, (Optr)&t_send1, (Optr)PSend5991, (Optr)&t_block_return);
    Block PBlock5987 = new_Block_with(empty_Array, empty_Array, PThreadedCode5988, 1, PSend5991);
    // ifTrue:. 
    Send PSend5986 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock5987);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend5992 = new_Send((Optr)VAR_anObject_0_0, SMB_identityHash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5993 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend5994 = new_Send((Optr)PSend5992, SMB__modulo_, 1, (Optr)PSend5993);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5995 = new_Send((Optr)PSend5994, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5996 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5995);
    Array PThreadedCode5998 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock5997 = new_Block_with(empty_Array, empty_Array, PThreadedCode5998, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray6000 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includes:. 
    Send PSend6002 = new_Send((Optr)VAR_bucket_2_0, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode6001 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend6002, (Optr)&t_method_return);
    Block PBlock5999 = new_Block_with(PArray6000, empty_Array, PThreadedCode6001, 1, PSend6002);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend6003 = new_Send((Optr)PSend5996, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock5997, (Optr)PBlock5999);
    Array PThreadedCode5985 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend5986, (Optr)PBlock5987, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5992, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5993, (Optr)&t_send1, (Optr)PSend5994, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5995, (Optr)&t_send1, (Optr)PSend5996, (Optr)&t_push_closure, (Optr)PBlock5997, (Optr)&t_push_closure, (Optr)PBlock5999, (Optr)&t_send2, (Optr)PSend6003, (Optr)&t_method_return);
    Block PBlock5983 = new_Block_with(PArray5984, empty_Array, PThreadedCode5985, 2, PSend5986, PSend6003);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6004 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5983);
    Array PThreadedCode5982 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5983, (Optr)&t_send1, (Optr)PSend6004, (Optr)&t_method_return);
    Method PMethod5980 = new_Method_with(PArray5981, empty_Array, empty_Array, PThreadedCode5982, 1, PSend6004);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod5980, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray6006 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_bucketIndex_0_1 = new_Variable_named(L"bucketIndex", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray6007 = new_Array_with(2, (Optr)VAR_bucketIndex_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6010 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addInFirstBucket_ = new_Symbol(L"addInFirstBucket:");
    // addInFirstBucket:. 
    Send PSend6015 = new_Send((Optr)self, SMB_addInFirstBucket_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6016 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6015);
    Array PThreadedCode6014 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6015, (Optr)&t_send1, (Optr)PSend6016, (Optr)&t_block_return);
    Block PBlock6013 = new_Block_with(empty_Array, empty_Array, PThreadedCode6014, 1, PSend6016);
    // ifTrue:. 
    Send PSend6012 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock6013);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend6020 = new_Send((Optr)VAR_value_0_0, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6021 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend6019 = new_Send((Optr)PSend6020, SMB__modulo_, 1, (Optr)PSend6021);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6018 = new_Send((Optr)PSend6019, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6017 = new_Assign((Optr)VAR_bucketIndex_0_1, (Optr)PSend6018);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6023 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign6022 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend6023);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend6027 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign6026 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend6027);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend6028 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_checkGrow = new_Symbol(L"checkGrow");
    // checkGrow. 
    Send PSend6029 = new_Send((Optr)self, SMB_checkGrow, 0);
    // escape:. 
    Send PSend6030 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode6025 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign6026, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend6027, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6028, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6029, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6030, (Optr)&t_block_return);
    Block PBlock6024 = new_Block_with(empty_Array, empty_Array, PThreadedCode6025, 4, PAssign6026, PSend6028, PSend6029, PSend6030);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend6031 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock6024);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend6032 = new_Send((Optr)VAR_bucket_0_2, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // escape:. 
    Send PSend6036 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode6035 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6036, (Optr)&t_block_return);
    Block PBlock6034 = new_Block_with(empty_Array, empty_Array, PThreadedCode6035, 1, PSend6036);
    // ifTrue:. 
    Send PSend6033 = new_Send((Optr)PSend6032, SMB_ifTrue_, 1, (Optr)PBlock6034);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend6037 = new_Send((Optr)VAR_bucket_0_2, SMB_isFull, 0);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend6042 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign6041 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend6042);
    Array PThreadedCode6040 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6041, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend6042, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6039 = new_Block_with(empty_Array, empty_Array, PThreadedCode6040, 1, PAssign6041);
    // ifTrue:. 
    Send PSend6038 = new_Send((Optr)PSend6037, SMB_ifTrue_, 1, (Optr)PBlock6039);
    // addNew:. 
    Send PSend6043 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    // checkGrow. 
    Send PSend6044 = new_Send((Optr)self, SMB_checkGrow, 0);
    Array PThreadedCode6011 = instantiate_Array_with(ThreadedCode_Class, 0, 72, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend6012, (Optr)PBlock6013, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6017, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend6020, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend6021, (Optr)&t_send1, (Optr)PSend6019, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6018, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6022, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend6023, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock6024, (Optr)&t_send1, (Optr)PSend6031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6032, (Optr)&t_send_ifTrue_, (Optr)PSend6033, (Optr)PBlock6034, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend6037, (Optr)&t_send_ifTrue_, (Optr)PSend6038, (Optr)PBlock6039, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6043, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6044, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_method_return);
    Block PBlock6009 = new_Block_with(PArray6010, empty_Array, PThreadedCode6011, 9, PSend6012, PAssign6017, PAssign6022, PSend6031, PSend6033, PSend6038, PSend6043, PSend6044, VAR_value_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6045 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6009);
    Array PThreadedCode6008 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6009, (Optr)&t_send1, (Optr)PSend6045, (Optr)&t_method_return);
    Method PMethod6005 = new_Method_with(PArray6006, PArray6007, empty_Array, PThreadedCode6008, 1, PSend6045);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod6005, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray6047 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_item_0_3 = new_Variable_named(L"item", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray6048 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_item_0_3, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6050 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6051 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend6054 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend6055 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend6054);
    Array PThreadedCode6053 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend6054, (Optr)&t_send1, (Optr)PSend6055, (Optr)&t_block_return);
    Block PBlock6052 = new_Block_with(empty_Array, empty_Array, PThreadedCode6053, 1, PSend6055);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6059 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign6058 = new_Assign((Optr)VAR_item_0_3, (Optr)PSend6059);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend6063 = new_Send((Optr)VAR_item_0_3, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6064 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend6062 = new_Send((Optr)PSend6063, SMB__modulo_, 1, (Optr)PSend6064);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6061 = new_Send((Optr)PSend6062, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6060 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend6061);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6065 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // +. 
    Send PSend6070 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6069 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend6070);
    Array PThreadedCode6068 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6069, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6070, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6067 = new_Block_with(empty_Array, empty_Array, PThreadedCode6068, 1, PAssign6069);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend6073 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend6074 = new_Send((Optr)PSend6073, SMB_addNew_, 1, (Optr)VAR_item_0_3);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6075 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode6072 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend6073, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send1, (Optr)PSend6074, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend6075, (Optr)&t_block_return);
    Block PBlock6071 = new_Block_with(empty_Array, empty_Array, PThreadedCode6072, 2, PSend6074, PSend6075);
    // ifTrue:ifFalse:. 
    Send PSend6066 = new_Send((Optr)PSend6065, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6067, (Optr)PBlock6071);
    Array PThreadedCode6057 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign6058, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend6059, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6060, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send0, (Optr)PSend6063, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend6064, (Optr)&t_send1, (Optr)PSend6062, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6061, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend6065, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6066, (Optr)PBlock6067, (Optr)PBlock6071, (Optr)&t_block_return);
    Block PBlock6056 = new_Block_with(empty_Array, empty_Array, PThreadedCode6057, 3, PAssign6058, PAssign6060, PSend6066);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend6076 = new_Send((Optr)PBlock6052, SMB_whileTrue_, 1, (Optr)PBlock6056);
    Array PThreadedCode6049 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend6050, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6051, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock6052, (Optr)&t_push_closure, (Optr)PBlock6056, (Optr)&t_send1, (Optr)PSend6076, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6046 = new_Method_with(PArray6047, PArray6048, empty_Array, PThreadedCode6049, 4, PSend6050, PAssign6051, PSend6076, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod6046, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_reAddBucket_at_, MC_SMB_reAddBucket_at_);
}


static void init_class_SMB_bucketClass() {
    Symbol SMB_bucketClass = new_Symbol(L"bucketClass");
    Array PThreadedCode6078 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PIdentitySetBucket_classReference, (Optr)&t_method_return);
    Method PMethod6077 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6078, 1, PIdentitySetBucket_classReference);
    
    MethodClosure MC_SMB_bucketClass = new_MethodClosure((Method)PMethod6077, HEADER(IdentitySet_Class));
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