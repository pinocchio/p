#include <lib/class/Collection/HashedCollection.h>


Optr layout_Collection_HashedCollection_Class_class;
Optr slot_Collection_HashedCollection_size;
Optr slot_Collection_HashedCollection_maxLinear;
Optr slot_Collection_HashedCollection_ratio;
Optr slot_Collection_HashedCollection_buckets;
Optr slot_Collection_HashedCollection_linear;
Optr layout_Collection_HashedCollection;


static void init_SMB_checkGrow() {
    Symbol SMB_checkGrow = new_Symbol(L"checkGrow");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend2927 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign2926 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)PSend2927);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__times_ = new_Symbol(L"*");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // *. 
    Send PSend2928 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__times_, 1, (Optr)int_100_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2929 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    // //. 
    Send PSend2930 = new_Send((Optr)PSend2928, SMB__quotient_, 1, (Optr)PSend2929);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend2931 = new_Send((Optr)PSend2930, SMB__gt_, 1, (Optr)slot_Collection_HashedCollection_ratio);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend2935 = new_Send((Optr)self, SMB_grow, 0);
    Array PThreadedCode2934 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2935, (Optr)&t_block_return);
    Block PBlock2933 = new_Block_with(empty_Array, empty_Array, PThreadedCode2934, 1, PSend2935);
    // ifTrue:. 
    Send PSend2932 = new_Send((Optr)PSend2931, SMB_ifTrue_, 1, (Optr)PBlock2933);
    Array PThreadedCode2925 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign2926, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2927, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend2928, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend2929, (Optr)&t_send1, (Optr)PSend2930, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_ratio, (Optr)&t_send1, (Optr)PSend2931, (Optr)&t_send_ifTrue_, (Optr)PSend2932, (Optr)PBlock2933, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2925, 3, PAssign2926, PSend2932, self);
    
    MethodClosure MC_SMB_checkGrow = new_MethodClosure((Method)PMethod2924, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_checkGrow, MC_SMB_checkGrow);
}


static void init_SMB_grow() {
    Symbol SMB_grow = new_Symbol(L"grow");
    Variable VAR_oldBuckets_0_0 = new_Variable_named(L"oldBuckets", 0);
    Array PArray2937 = new_Array_with(1, (Optr)VAR_oldBuckets_0_0);
    Assign PAssign2939 = new_Assign((Optr)VAR_oldBuckets_0_0, (Optr)slot_Collection_HashedCollection_buckets);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2943 = new_Send((Optr)VAR_oldBuckets_0_0, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend2942 = new_Send((Optr)PSend2943, SMB__times_, 1, (Optr)int_2_Const);
    // new:. 
    Send PSend2941 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend2942);
    Assign PAssign2940 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend2941);
    // size. 
    Send PSend2944 = new_Send((Optr)VAR_oldBuckets_0_0, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray2946 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2948 = new_Send((Optr)VAR_oldBuckets_0_0, SMB_at_, 1, (Optr)VAR_index_1_0);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray2950 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    // reAddBucket:at:. 
    Send PSend2952 = new_Send((Optr)self, SMB_reAddBucket_at_, 2, (Optr)VAR_bucket_2_0, (Optr)VAR_index_1_0);
    Array PThreadedCode2951 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend2952, (Optr)&t_method_return);
    Block PBlock2949 = new_Block_with(PArray2950, empty_Array, PThreadedCode2951, 1, PSend2952);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend2953 = new_Send((Optr)PSend2948, SMB_ifNotNil_, 1, (Optr)PBlock2949);
    Array PThreadedCode2947 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_oldBuckets_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend2948, (Optr)&t_push_closure, (Optr)PBlock2949, (Optr)&t_send1, (Optr)PSend2953, (Optr)&t_method_return);
    Block PBlock2945 = new_Block_with(PArray2946, empty_Array, PThreadedCode2947, 1, PSend2953);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2954 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend2944, (Optr)PBlock2945);
    Array PThreadedCode2938 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign2939, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2940, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_oldBuckets_0_0, (Optr)&t_send0, (Optr)PSend2943, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend2942, (Optr)&t_send1, (Optr)PSend2941, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_oldBuckets_0_0, (Optr)&t_send0, (Optr)PSend2944, (Optr)&t_push_closure, (Optr)PBlock2945, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2954, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2936 = new_Method_with(empty_Array, PArray2937, empty_Array, PThreadedCode2938, 4, PAssign2939, PAssign2940, PSend2954, self);
    
    MethodClosure MC_SMB_grow = new_MethodClosure((Method)PMethod2936, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_grow, MC_SMB_grow);
}


static void init_SMB_shrink() {
    Symbol SMB_shrink = new_Symbol(L"shrink");
    Array PThreadedCode2956 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod2955 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2956, 1, self);
    
    MethodClosure MC_SMB_shrink = new_MethodClosure((Method)PMethod2955, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_shrink, MC_SMB_shrink);
}


static void init_SMB_bucketWithRoomAt_() {
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray2958 = new_Array_with(1, (Optr)VAR_index_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2961 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2963 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_index_0_0);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend2966 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_index_0_0);
    Array PThreadedCode2965 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend2966, (Optr)&t_block_return);
    Block PBlock2964 = new_Block_with(empty_Array, empty_Array, PThreadedCode2965, 1, PSend2966);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray2968 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend2970 = new_Send((Optr)VAR_bucket_2_0, SMB_isFull, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend2974 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_index_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2975 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2974);
    Array PThreadedCode2973 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend2974, (Optr)&t_send1, (Optr)PSend2975, (Optr)&t_block_return);
    Block PBlock2972 = new_Block_with(empty_Array, empty_Array, PThreadedCode2973, 1, PSend2975);
    // ifTrue:. 
    Send PSend2971 = new_Send((Optr)PSend2970, SMB_ifTrue_, 1, (Optr)PBlock2972);
    Array PThreadedCode2969 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_send0, (Optr)PSend2970, (Optr)&t_send_ifTrue_, (Optr)PSend2971, (Optr)PBlock2972, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_method_return);
    Block PBlock2967 = new_Block_with(PArray2968, empty_Array, PThreadedCode2969, 2, PSend2971, VAR_bucket_2_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend2976 = new_Send((Optr)PSend2963, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock2964, (Optr)PBlock2967);
    Array PThreadedCode2962 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend2963, (Optr)&t_push_closure, (Optr)PBlock2964, (Optr)&t_push_closure, (Optr)PBlock2967, (Optr)&t_send2, (Optr)PSend2976, (Optr)&t_method_return);
    Block PBlock2960 = new_Block_with(PArray2961, empty_Array, PThreadedCode2962, 1, PSend2976);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2977 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2960);
    Array PThreadedCode2959 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2960, (Optr)&t_send1, (Optr)PSend2977, (Optr)&t_method_return);
    Method PMethod2957 = new_Method_with(PArray2958, empty_Array, empty_Array, PThreadedCode2959, 1, PSend2977);
    
    MethodClosure MC_SMB_bucketWithRoomAt_ = new_MethodClosure((Method)PMethod2957, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_bucketWithRoomAt_, MC_SMB_bucketWithRoomAt_);
}


static void init_SMB_maxLinear_() {
    Symbol SMB_maxLinear_ = new_Symbol(L"maxLinear:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray2979 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Assign PAssign2981 = new_Assign((Optr)slot_Collection_HashedCollection_maxLinear, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode2980 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign2981, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2978 = new_Method_with(PArray2979, empty_Array, empty_Array, PThreadedCode2980, 2, PAssign2981, self);
    
    MethodClosure MC_SMB_maxLinear_ = new_MethodClosure((Method)PMethod2978, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_maxLinear_, MC_SMB_maxLinear_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Array PThreadedCode2983 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_method_return);
    Method PMethod2982 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2983, 1, slot_Collection_HashedCollection_size);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod2982, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_copyEmpty() {
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend2986 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2987 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend2988 = new_Send((Optr)PSend2986, SMB_new_, 1, (Optr)PSend2987);
    Array PThreadedCode2985 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2986, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2987, (Optr)&t_send1, (Optr)PSend2988, (Optr)&t_method_return);
    Method PMethod2984 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2985, 1, PSend2988);
    
    MethodClosure MC_SMB_copyEmpty = new_MethodClosure((Method)PMethod2984, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_copyEmpty, MC_SMB_copyEmpty);
}


static void init_SMB_newBucketAt_() {
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    Variable VAR_bucketIndex_0_0 = new_Variable_named(L"bucketIndex", 0);
    Array PArray2990 = new_Array_with(1, (Optr)VAR_bucketIndex_0_0);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Constant int_4_Const = new_Constant((Optr)int_4);
    // newBucket:. 
    Send PSend2992 = new_Send((Optr)self, SMB_newBucket_, 1, (Optr)int_4_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2993 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_bucketIndex_0_0, (Optr)PSend2992);
    Array PThreadedCode2991 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend2992, (Optr)&t_send2, (Optr)PSend2993, (Optr)&t_method_return);
    Method PMethod2989 = new_Method_with(PArray2990, empty_Array, empty_Array, PThreadedCode2991, 1, PSend2993);
    
    MethodClosure MC_SMB_newBucketAt_ = new_MethodClosure((Method)PMethod2989, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_newBucketAt_, MC_SMB_newBucketAt_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_preferredSize_0_0 = new_Variable_named(L"preferredSize", 0);
    Array PArray2995 = new_Array_with(1, (Optr)VAR_preferredSize_0_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign2997 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)int_0_Const);
    SmallInt int_500 = new_SmallInt(500);
    Constant int_500_Const = new_Constant((Optr)int_500);
    Assign PAssign2998 = new_Assign((Optr)slot_Collection_HashedCollection_ratio, (Optr)int_500_Const);
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    Assign PAssign2999 = new_Assign((Optr)slot_Collection_HashedCollection_maxLinear, (Optr)int_20_Const);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3001 = new_Send((Optr)VAR_preferredSize_0_0, SMB__lt__equals_, 1, (Optr)slot_Collection_HashedCollection_maxLinear);
    Assign PAssign3000 = new_Assign((Optr)slot_Collection_HashedCollection_linear, (Optr)PSend3001);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    // newBucket:. 
    Send PSend3007 = new_Send((Optr)self, SMB_newBucket_, 1, (Optr)VAR_preferredSize_0_0);
    // with:. 
    Send PSend3006 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend3007);
    Assign PAssign3005 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend3006);
    Array PThreadedCode3004 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign3005, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_preferredSize_0_0, (Optr)&t_send1, (Optr)PSend3007, (Optr)&t_send1, (Optr)PSend3006, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3003 = new_Block_with(empty_Array, empty_Array, PThreadedCode3004, 1, PAssign3005);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_32 = new_SmallInt(32);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // new:. 
    Send PSend3011 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_32_Const);
    Assign PAssign3010 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend3011);
    Array PThreadedCode3009 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign3010, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend3011, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3008 = new_Block_with(empty_Array, empty_Array, PThreadedCode3009, 1, PAssign3010);
    // ifTrue:ifFalse:. 
    Send PSend3002 = new_Send((Optr)PAssign3000, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3003, (Optr)PBlock3008);
    Array PThreadedCode2996 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign2997, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2998, (Optr)&t_push1, (Optr)int_500, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2999, (Optr)&t_push1, (Optr)int_20, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3000, (Optr)&t_push_variable, (Optr)VAR_preferredSize_0_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_maxLinear, (Optr)&t_send1, (Optr)PSend3001, (Optr)&t_assign, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3002, (Optr)PBlock3003, (Optr)PBlock3008, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2994 = new_Method_with(PArray2995, empty_Array, empty_Array, PThreadedCode2996, 5, PAssign2997, PAssign2998, PAssign2999, PSend3002, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod2994, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_checkShrink() {
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend3015 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign3014 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)PSend3015);
    Array PThreadedCode3013 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign3014, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3015, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3012 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3013, 2, PAssign3014, self);
    
    MethodClosure MC_SMB_checkShrink = new_MethodClosure((Method)PMethod3012, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_checkShrink, MC_SMB_checkShrink);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Constant int_20_Const = new_Constant((Optr)int_20);
    // initialize:. 
    Send PSend3018 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)int_20_Const);
    Array PThreadedCode3017 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend3018, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3016 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3017, 2, PSend3018, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod3016, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_bucketsDo_() {
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3020 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3022 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray3024 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3026 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_index_1_0);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3028 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3030 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_bucket_2_0);
    Array PThreadedCode3029 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_send1, (Optr)PSend3030, (Optr)&t_method_return);
    Block PBlock3027 = new_Block_with(PArray3028, empty_Array, PThreadedCode3029, 1, PSend3030);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend3031 = new_Send((Optr)PSend3026, SMB_ifNotNil_, 1, (Optr)PBlock3027);
    Array PThreadedCode3025 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend3026, (Optr)&t_push_closure, (Optr)PBlock3027, (Optr)&t_send1, (Optr)PSend3031, (Optr)&t_method_return);
    Block PBlock3023 = new_Block_with(PArray3024, empty_Array, PThreadedCode3025, 1, PSend3031);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend3032 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend3022, (Optr)PBlock3023);
    Array PThreadedCode3021 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3022, (Optr)&t_push_closure, (Optr)PBlock3023, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend3032, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3019 = new_Method_with(PArray3020, empty_Array, empty_Array, PThreadedCode3021, 2, PSend3032, self);
    
    MethodClosure MC_SMB_bucketsDo_ = new_MethodClosure((Method)PMethod3019, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_bucketsDo_, MC_SMB_bucketsDo_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3034 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_bucket_1_0 = new_Variable_named(L"bucket", 1);
    Array PArray3037 = new_Array_with(1, (Optr)VAR_bucket_1_0);
    // do:. 
    Send PSend3039 = new_Send((Optr)VAR_bucket_1_0, SMB_do_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode3038 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend3039, (Optr)&t_method_return);
    Block PBlock3036 = new_Block_with(PArray3037, empty_Array, PThreadedCode3038, 1, PSend3039);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3040 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3036);
    Array PThreadedCode3035 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3036, (Optr)&t_send1, (Optr)PSend3040, (Optr)&t_method_return);
    Method PMethod3033 = new_Method_with(PArray3034, empty_Array, empty_Array, PThreadedCode3035, 1, PSend3040);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod3033, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_growBucketAt_() {
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray3042 = new_Array_with(1, (Optr)VAR_index_0_0);
    Variable VAR_oldBucket_0_1 = new_Variable_named(L"oldBucket", 0);
    Variable VAR_newBucket_0_2 = new_Variable_named(L"newBucket", 0);
    Array PArray3043 = new_Array_with(2, (Optr)VAR_oldBucket_0_1, (Optr)VAR_newBucket_0_2);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3046 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_index_0_0);
    Assign PAssign3045 = new_Assign((Optr)VAR_oldBucket_0_1, (Optr)PSend3046);
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3050 = new_Send((Optr)VAR_oldBucket_0_1, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend3049 = new_Send((Optr)PSend3050, SMB__times_, 1, (Optr)int_2_Const);
    // newBucket:. 
    Send PSend3048 = new_Send((Optr)self, SMB_newBucket_, 1, (Optr)PSend3049);
    Assign PAssign3047 = new_Assign((Optr)VAR_newBucket_0_2, (Optr)PSend3048);
    Symbol SMB_copyFrom_ = new_Symbol(L"copyFrom:");
    // copyFrom:. 
    Send PSend3051 = new_Send((Optr)VAR_newBucket_0_2, SMB_copyFrom_, 1, (Optr)VAR_oldBucket_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3052 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_0, (Optr)VAR_newBucket_0_2);
    Array PThreadedCode3044 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign3045, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend3046, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3047, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_oldBucket_0_1, (Optr)&t_send0, (Optr)PSend3050, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3049, (Optr)&t_send1, (Optr)PSend3048, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newBucket_0_2, (Optr)&t_push_variable, (Optr)VAR_oldBucket_0_1, (Optr)&t_send1, (Optr)PSend3051, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_variable, (Optr)VAR_newBucket_0_2, (Optr)&t_send2, (Optr)PSend3052, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newBucket_0_2, (Optr)&t_method_return);
    Method PMethod3041 = new_Method_with(PArray3042, PArray3043, empty_Array, PThreadedCode3044, 5, PAssign3045, PAssign3047, PSend3051, PSend3052, VAR_newBucket_0_2);
    
    MethodClosure MC_SMB_growBucketAt_ = new_MethodClosure((Method)PMethod3041, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_growBucketAt_, MC_SMB_growBucketAt_);
}


static void init_SMB_removeAll() {
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign3055 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)int_0_Const);
    Variable VAR_bucket_1_0 = new_Variable_named(L"bucket", 1);
    Array PArray3057 = new_Array_with(1, (Optr)VAR_bucket_1_0);
    // removeAll. 
    Send PSend3059 = new_Send((Optr)VAR_bucket_1_0, SMB_removeAll, 0);
    Array PThreadedCode3058 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_bucket_1_0, (Optr)&t_send0, (Optr)PSend3059, (Optr)&t_method_return);
    Block PBlock3056 = new_Block_with(PArray3057, empty_Array, PThreadedCode3058, 1, PSend3059);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3060 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3056);
    Array PThreadedCode3054 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign3055, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3056, (Optr)&t_send1, (Optr)PSend3060, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3053 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3054, 3, PAssign3055, PSend3060, self);
    
    MethodClosure MC_SMB_removeAll = new_MethodClosure((Method)PMethod3053, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_removeAll, MC_SMB_removeAll);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_preferredSize_0_0 = new_Variable_named(L"preferredSize", 0);
    Array PArray3062 = new_Array_with(1, (Optr)VAR_preferredSize_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper3064 = new_Super(SMB_new, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend3065 = new_Send((Optr)PSuper3064, SMB_initialize_, 1, (Optr)VAR_preferredSize_0_0);
    Array PThreadedCode3063 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper3064, (Optr)&t_push_variable, (Optr)VAR_preferredSize_0_0, (Optr)&t_send1, (Optr)PSend3065, (Optr)&t_method_return);
    Method PMethod3061 = new_Method_with(PArray3062, empty_Array, empty_Array, PThreadedCode3063, 1, PSend3065);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod3061, HEADER(Collection_HashedCollection_Class));
    store_method(HEADER(Collection_HashedCollection_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_newFrom_() {
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray3067 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray3068 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3072 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend3071 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend3072);
    Assign PAssign3070 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend3071);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend3073 = new_Send((Optr)VAR_newCollection_0_1, SMB_addAll_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode3069 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign3070, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend3072, (Optr)&t_send1, (Optr)PSend3071, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend3073, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod3066 = new_Method_with(PArray3067, PArray3068, empty_Array, PThreadedCode3069, 3, PAssign3070, PSend3073, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_newFrom_ = new_MethodClosure((Method)PMethod3066, HEADER(Collection_HashedCollection_Class));
    store_method(HEADER(Collection_HashedCollection_Class), SMB_newFrom_, MC_SMB_newFrom_);
}

void init_Collection_PHashedCollection_layout() {
    layout_Collection_HashedCollection_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_HashedCollection_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_HashedCollection_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_HashedCollection_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_HashedCollection_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_HashedCollection_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_HashedCollection = new_Symbol(L"HashedCollection");
    slot_Collection_HashedCollection_size = (Optr)new_Slot(0, L"size");
    slot_Collection_HashedCollection_maxLinear = (Optr)new_Slot(1, L"maxLinear");
    slot_Collection_HashedCollection_ratio = (Optr)new_Slot(2, L"ratio");
    slot_Collection_HashedCollection_buckets = (Optr)new_Slot(3, L"buckets");
    slot_Collection_HashedCollection_linear = (Optr)new_Slot(4, L"linear");
    layout_Collection_HashedCollection = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_HashedCollection)->values[0] = slot_Collection_HashedCollection_size; // size 
    ((Array)layout_Collection_HashedCollection)->values[1] = slot_Collection_HashedCollection_maxLinear; // maxLinear 
    ((Array)layout_Collection_HashedCollection)->values[2] = slot_Collection_HashedCollection_ratio; // ratio 
    ((Array)layout_Collection_HashedCollection)->values[3] = slot_Collection_HashedCollection_buckets; // buckets 
    ((Array)layout_Collection_HashedCollection)->values[4] = slot_Collection_HashedCollection_linear; // linear 
    Collection_HashedCollection_Class = (Class)new_Class(Collections_Abstract_Collection_Class, layout_Collection_HashedCollection_Class_class);
    Collection_HashedCollection_Class->layout = layout_Collection_HashedCollection;
    Collection_HashedCollection_Class->name = SMB_HashedCollection;
    
}

void init_Collection_PHashedCollection_methods() {
    init_SMB_checkGrow();
    init_SMB_grow();
    init_SMB_shrink();
    init_SMB_bucketWithRoomAt_();
    init_SMB_maxLinear_();
    init_SMB_size();
    init_SMB_copyEmpty();
    init_SMB_newBucketAt_();
    init_SMB_initialize_();
    init_SMB_checkShrink();
    init_SMB_initialize();
    init_SMB_bucketsDo_();
    init_SMB_do_();
    init_SMB_growBucketAt_();
    init_SMB_removeAll();
    init_class_SMB_new_();
    init_class_SMB_newFrom_();
    
}