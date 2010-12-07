#include <lib/class/Collection/IdentitySet.h>


Optr layout_Collection_IdentitySet_Class_class;
Optr layout_Collection_IdentitySet;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray5942 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Variable VAR_value_0_3 = new_Variable_named(L"value", 0);
    Array PArray5943 = new_Array_with(2, (Optr)VAR_bucket_0_2, (Optr)VAR_value_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5946 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5952 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5951 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5952);
    Array PThreadedCode5950 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5951, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5952, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock5949 = new_Block_with(empty_Array, empty_Array, PThreadedCode5950, 1, PAssign5951);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend5959 = new_Send((Optr)VAR_anObject_0_0, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5960 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend5958 = new_Send((Optr)PSend5959, SMB__modulo_, 1, (Optr)PSend5960);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5957 = new_Send((Optr)PSend5958, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5956 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5957);
    Assign PAssign5955 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend5956);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5963 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5964 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5963);
    Array PThreadedCode5962 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5963, (Optr)&t_send1, (Optr)PSend5964, (Optr)&t_block_return);
    Block PBlock5961 = new_Block_with(empty_Array, empty_Array, PThreadedCode5962, 1, PSend5964);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend5965 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock5961);
    Array PThreadedCode5954 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign5955, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5959, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5960, (Optr)&t_send1, (Optr)PSend5958, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5957, (Optr)&t_send1, (Optr)PSend5956, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock5961, (Optr)&t_send1, (Optr)PSend5965, (Optr)&t_block_return);
    Block PBlock5953 = new_Block_with(empty_Array, empty_Array, PThreadedCode5954, 2, PAssign5955, PSend5965);
    // ifTrue:ifFalse:. 
    Send PSend5948 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5949, (Optr)PBlock5953);
    // value. 
    Send PSend5970 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend5971 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5970);
    Array PThreadedCode5969 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend5970, (Optr)&t_send1, (Optr)PSend5971, (Optr)&t_block_return);
    Block PBlock5968 = new_Block_with(empty_Array, empty_Array, PThreadedCode5969, 1, PSend5971);
    // remove:ifAbsent:. 
    Send PSend5967 = new_Send((Optr)VAR_bucket_0_2, SMB_remove_ifAbsent_, 2, (Optr)VAR_anObject_0_0, (Optr)PBlock5968);
    Assign PAssign5966 = new_Assign((Optr)VAR_value_0_3, (Optr)PSend5967);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend5972 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode5947 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5948, (Optr)PBlock5949, (Optr)PBlock5953, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5966, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_closure, (Optr)PBlock5968, (Optr)&t_send2, (Optr)PSend5967, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5972, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_3, (Optr)&t_method_return);
    Block PBlock5945 = new_Block_with(PArray5946, empty_Array, PThreadedCode5947, 4, PSend5948, PAssign5966, PSend5972, VAR_value_0_3);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5973 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5945);
    Array PThreadedCode5944 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5945, (Optr)&t_send1, (Optr)PSend5973, (Optr)&t_method_return);
    Method PMethod5941 = new_Method_with(PArray5942, PArray5943, empty_Array, PThreadedCode5944, 1, PSend5973);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod5941, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray5975 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend5977 = new_Send((Optr)PIdentitySetBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode5976 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PIdentitySetBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend5977, (Optr)&t_method_return);
    Method PMethod5974 = new_Method_with(PArray5975, empty_Array, empty_Array, PThreadedCode5976, 1, PSend5977);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod5974, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5979 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5982 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5987 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includes:. 
    Send PSend5988 = new_Send((Optr)PSend5987, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5989 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5988);
    Array PThreadedCode5986 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5987, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5988, (Optr)&t_send1, (Optr)PSend5989, (Optr)&t_block_return);
    Block PBlock5985 = new_Block_with(empty_Array, empty_Array, PThreadedCode5986, 1, PSend5989);
    // ifTrue:. 
    Send PSend5984 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock5985);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend5990 = new_Send((Optr)VAR_anObject_0_0, SMB_identityHash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5991 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend5992 = new_Send((Optr)PSend5990, SMB__modulo_, 1, (Optr)PSend5991);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend5993 = new_Send((Optr)PSend5992, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend5994 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend5993);
    Array PThreadedCode5996 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock5995 = new_Block_with(empty_Array, empty_Array, PThreadedCode5996, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray5998 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includes:. 
    Send PSend6000 = new_Send((Optr)VAR_bucket_2_0, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5999 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend6000, (Optr)&t_method_return);
    Block PBlock5997 = new_Block_with(PArray5998, empty_Array, PThreadedCode5999, 1, PSend6000);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend6001 = new_Send((Optr)PSend5994, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock5995, (Optr)PBlock5997);
    Array PThreadedCode5983 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend5984, (Optr)PBlock5985, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5990, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend5991, (Optr)&t_send1, (Optr)PSend5992, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5993, (Optr)&t_send1, (Optr)PSend5994, (Optr)&t_push_closure, (Optr)PBlock5995, (Optr)&t_push_closure, (Optr)PBlock5997, (Optr)&t_send2, (Optr)PSend6001, (Optr)&t_method_return);
    Block PBlock5981 = new_Block_with(PArray5982, empty_Array, PThreadedCode5983, 2, PSend5984, PSend6001);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6002 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5981);
    Array PThreadedCode5980 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5981, (Optr)&t_send1, (Optr)PSend6002, (Optr)&t_method_return);
    Method PMethod5978 = new_Method_with(PArray5979, empty_Array, empty_Array, PThreadedCode5980, 1, PSend6002);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod5978, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray6004 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_bucketIndex_0_1 = new_Variable_named(L"bucketIndex", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray6005 = new_Array_with(2, (Optr)VAR_bucketIndex_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6008 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addInFirstBucket_ = new_Symbol(L"addInFirstBucket:");
    // addInFirstBucket:. 
    Send PSend6013 = new_Send((Optr)self, SMB_addInFirstBucket_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6014 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6013);
    Array PThreadedCode6012 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6013, (Optr)&t_send1, (Optr)PSend6014, (Optr)&t_block_return);
    Block PBlock6011 = new_Block_with(empty_Array, empty_Array, PThreadedCode6012, 1, PSend6014);
    // ifTrue:. 
    Send PSend6010 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock6011);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend6018 = new_Send((Optr)VAR_value_0_0, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6019 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend6017 = new_Send((Optr)PSend6018, SMB__modulo_, 1, (Optr)PSend6019);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6016 = new_Send((Optr)PSend6017, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6015 = new_Assign((Optr)VAR_bucketIndex_0_1, (Optr)PSend6016);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6021 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign6020 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend6021);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend6025 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign6024 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend6025);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend6026 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    Symbol SMB_checkGrow = new_Symbol(L"checkGrow");
    // checkGrow. 
    Send PSend6027 = new_Send((Optr)self, SMB_checkGrow, 0);
    // escape:. 
    Send PSend6028 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode6023 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign6024, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend6025, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6026, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6027, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6028, (Optr)&t_block_return);
    Block PBlock6022 = new_Block_with(empty_Array, empty_Array, PThreadedCode6023, 4, PAssign6024, PSend6026, PSend6027, PSend6028);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend6029 = new_Send((Optr)VAR_bucket_0_2, SMB_ifNil_, 1, (Optr)PBlock6022);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend6030 = new_Send((Optr)VAR_bucket_0_2, SMB_includes_, 1, (Optr)VAR_value_0_0);
    // escape:. 
    Send PSend6034 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode6033 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6034, (Optr)&t_block_return);
    Block PBlock6032 = new_Block_with(empty_Array, empty_Array, PThreadedCode6033, 1, PSend6034);
    // ifTrue:. 
    Send PSend6031 = new_Send((Optr)PSend6030, SMB_ifTrue_, 1, (Optr)PBlock6032);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend6035 = new_Send((Optr)VAR_bucket_0_2, SMB_isFull, 0);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend6040 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_bucketIndex_0_1);
    Assign PAssign6039 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend6040);
    Array PThreadedCode6038 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6039, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend6040, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6037 = new_Block_with(empty_Array, empty_Array, PThreadedCode6038, 1, PAssign6039);
    // ifTrue:. 
    Send PSend6036 = new_Send((Optr)PSend6035, SMB_ifTrue_, 1, (Optr)PBlock6037);
    // addNew:. 
    Send PSend6041 = new_Send((Optr)VAR_bucket_0_2, SMB_addNew_, 1, (Optr)VAR_value_0_0);
    // checkGrow. 
    Send PSend6042 = new_Send((Optr)self, SMB_checkGrow, 0);
    Array PThreadedCode6009 = instantiate_Array_with(ThreadedCode_Class, 0, 72, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend6010, (Optr)PBlock6011, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6015, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend6018, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend6019, (Optr)&t_send1, (Optr)PSend6017, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6016, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6020, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_1, (Optr)&t_send1, (Optr)PSend6021, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_closure, (Optr)PBlock6022, (Optr)&t_send1, (Optr)PSend6029, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6030, (Optr)&t_send_ifTrue_, (Optr)PSend6031, (Optr)PBlock6032, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend6035, (Optr)&t_send_ifTrue_, (Optr)PSend6036, (Optr)PBlock6037, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend6041, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6042, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_method_return);
    Block PBlock6007 = new_Block_with(PArray6008, empty_Array, PThreadedCode6009, 9, PSend6010, PAssign6015, PAssign6020, PSend6029, PSend6031, PSend6036, PSend6041, PSend6042, VAR_value_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6043 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6007);
    Array PThreadedCode6006 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6007, (Optr)&t_send1, (Optr)PSend6043, (Optr)&t_method_return);
    Method PMethod6003 = new_Method_with(PArray6004, PArray6005, empty_Array, PThreadedCode6006, 1, PSend6043);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod6003, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray6045 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_item_0_3 = new_Variable_named(L"item", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray6046 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_item_0_3, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6048 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6049 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend6052 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend6053 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend6052);
    Array PThreadedCode6051 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend6052, (Optr)&t_send1, (Optr)PSend6053, (Optr)&t_block_return);
    Block PBlock6050 = new_Block_with(empty_Array, empty_Array, PThreadedCode6051, 1, PSend6053);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6057 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign6056 = new_Assign((Optr)VAR_item_0_3, (Optr)PSend6057);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend6061 = new_Send((Optr)VAR_item_0_3, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6062 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend6060 = new_Send((Optr)PSend6061, SMB__modulo_, 1, (Optr)PSend6062);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6059 = new_Send((Optr)PSend6060, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6058 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend6059);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6063 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // +. 
    Send PSend6068 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6067 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend6068);
    Array PThreadedCode6066 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6067, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6068, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6065 = new_Block_with(empty_Array, empty_Array, PThreadedCode6066, 1, PAssign6067);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend6071 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    // addNew:. 
    Send PSend6072 = new_Send((Optr)PSend6071, SMB_addNew_, 1, (Optr)VAR_item_0_3);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6073 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode6070 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend6071, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send1, (Optr)PSend6072, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend6073, (Optr)&t_block_return);
    Block PBlock6069 = new_Block_with(empty_Array, empty_Array, PThreadedCode6070, 2, PSend6072, PSend6073);
    // ifTrue:ifFalse:. 
    Send PSend6064 = new_Send((Optr)PSend6063, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6065, (Optr)PBlock6069);
    Array PThreadedCode6055 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign6056, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend6057, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6058, (Optr)&t_push_variable, (Optr)VAR_item_0_3, (Optr)&t_send0, (Optr)PSend6061, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend6062, (Optr)&t_send1, (Optr)PSend6060, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6059, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend6063, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6064, (Optr)PBlock6065, (Optr)PBlock6069, (Optr)&t_block_return);
    Block PBlock6054 = new_Block_with(empty_Array, empty_Array, PThreadedCode6055, 3, PAssign6056, PAssign6058, PSend6064);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend6074 = new_Send((Optr)PBlock6050, SMB_whileTrue_, 1, (Optr)PBlock6054);
    Array PThreadedCode6047 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend6048, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6049, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock6050, (Optr)&t_push_closure, (Optr)PBlock6054, (Optr)&t_send1, (Optr)PSend6074, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6044 = new_Method_with(PArray6045, PArray6046, empty_Array, PThreadedCode6047, 4, PSend6048, PAssign6049, PSend6074, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod6044, IdentitySet_Class);
    store_method(IdentitySet_Class, SMB_reAddBucket_at_, MC_SMB_reAddBucket_at_);
}


static void init_class_SMB_bucketClass() {
    Symbol SMB_bucketClass = new_Symbol(L"bucketClass");
    Array PThreadedCode6076 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PIdentitySetBucket_classReference, (Optr)&t_method_return);
    Method PMethod6075 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6076, 1, PIdentitySetBucket_classReference);
    
    MethodClosure MC_SMB_bucketClass = new_MethodClosure((Method)PMethod6075, HEADER(IdentitySet_Class));
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