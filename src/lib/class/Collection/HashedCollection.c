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
    Send PSend2918 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign2917 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)PSend2918);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__times_ = new_Symbol(L"*");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // *. 
    Send PSend2919 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__times_, 1, (Optr)int_100_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2920 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    // //. 
    Send PSend2921 = new_Send((Optr)PSend2919, SMB__quotient_, 1, (Optr)PSend2920);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend2922 = new_Send((Optr)PSend2921, SMB__gt_, 1, (Optr)slot_Collection_HashedCollection_ratio);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend2926 = new_Send((Optr)self, SMB_grow, 0);
    Array PThreadedCode2925 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2926, (Optr)&t_block_return);
    Block PBlock2924 = new_Block_with(empty_Array, empty_Array, PThreadedCode2925, 1, PSend2926);
    // ifTrue:. 
    Send PSend2923 = new_Send((Optr)PSend2922, SMB_ifTrue_, 1, (Optr)PBlock2924);
    Array PThreadedCode2916 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign2917, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2918, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend2919, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend2920, (Optr)&t_send1, (Optr)PSend2921, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_ratio, (Optr)&t_send1, (Optr)PSend2922, (Optr)&t_send_ifTrue_, (Optr)PSend2923, (Optr)PBlock2924, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2915 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2916, 3, PAssign2917, PSend2923, self);
    
    MethodClosure MC_SMB_checkGrow = new_MethodClosure((Method)PMethod2915, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_checkGrow, MC_SMB_checkGrow);
}


static void init_SMB_grow() {
    Symbol SMB_grow = new_Symbol(L"grow");
    Variable VAR_oldBuckets_0_0 = new_Variable_named(L"oldBuckets", 0);
    Array PArray2928 = new_Array_with(1, (Optr)VAR_oldBuckets_0_0);
    Assign PAssign2930 = new_Assign((Optr)VAR_oldBuckets_0_0, (Optr)slot_Collection_HashedCollection_buckets);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2934 = new_Send((Optr)VAR_oldBuckets_0_0, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend2933 = new_Send((Optr)PSend2934, SMB__times_, 1, (Optr)int_2_Const);
    // new:. 
    Send PSend2932 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend2933);
    Assign PAssign2931 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend2932);
    // size. 
    Send PSend2935 = new_Send((Optr)VAR_oldBuckets_0_0, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray2937 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2939 = new_Send((Optr)VAR_oldBuckets_0_0, SMB_at_, 1, (Optr)VAR_index_1_0);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray2941 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    // reAddBucket:at:. 
    Send PSend2943 = new_Send((Optr)self, SMB_reAddBucket_at_, 2, (Optr)VAR_bucket_2_0, (Optr)VAR_index_1_0);
    Array PThreadedCode2942 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend2943, (Optr)&t_method_return);
    Block PBlock2940 = new_Block_with(PArray2941, empty_Array, PThreadedCode2942, 1, PSend2943);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend2944 = new_Send((Optr)PSend2939, SMB_ifNotNil_, 1, (Optr)PBlock2940);
    Array PThreadedCode2938 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_oldBuckets_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend2939, (Optr)&t_push_closure, (Optr)PBlock2940, (Optr)&t_send1, (Optr)PSend2944, (Optr)&t_method_return);
    Block PBlock2936 = new_Block_with(PArray2937, empty_Array, PThreadedCode2938, 1, PSend2944);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2945 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend2935, (Optr)PBlock2936);
    Array PThreadedCode2929 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign2930, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2931, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_oldBuckets_0_0, (Optr)&t_send0, (Optr)PSend2934, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend2933, (Optr)&t_send1, (Optr)PSend2932, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_oldBuckets_0_0, (Optr)&t_send0, (Optr)PSend2935, (Optr)&t_push_closure, (Optr)PBlock2936, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2945, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2927 = new_Method_with(empty_Array, PArray2928, empty_Array, PThreadedCode2929, 4, PAssign2930, PAssign2931, PSend2945, self);
    
    MethodClosure MC_SMB_grow = new_MethodClosure((Method)PMethod2927, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_grow, MC_SMB_grow);
}


static void init_SMB_shrink() {
    Symbol SMB_shrink = new_Symbol(L"shrink");
    Array PThreadedCode2947 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod2946 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2947, 1, self);
    
    MethodClosure MC_SMB_shrink = new_MethodClosure((Method)PMethod2946, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_shrink, MC_SMB_shrink);
}


static void init_SMB_bucketWithRoomAt_() {
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray2949 = new_Array_with(1, (Optr)VAR_index_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2952 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2954 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_index_0_0);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend2957 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_index_0_0);
    Array PThreadedCode2956 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend2957, (Optr)&t_block_return);
    Block PBlock2955 = new_Block_with(empty_Array, empty_Array, PThreadedCode2956, 1, PSend2957);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray2959 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend2961 = new_Send((Optr)VAR_bucket_2_0, SMB_isFull, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend2965 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_index_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2966 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2965);
    Array PThreadedCode2964 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend2965, (Optr)&t_send1, (Optr)PSend2966, (Optr)&t_block_return);
    Block PBlock2963 = new_Block_with(empty_Array, empty_Array, PThreadedCode2964, 1, PSend2966);
    // ifTrue:. 
    Send PSend2962 = new_Send((Optr)PSend2961, SMB_ifTrue_, 1, (Optr)PBlock2963);
    Array PThreadedCode2960 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_send0, (Optr)PSend2961, (Optr)&t_send_ifTrue_, (Optr)PSend2962, (Optr)PBlock2963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_method_return);
    Block PBlock2958 = new_Block_with(PArray2959, empty_Array, PThreadedCode2960, 2, PSend2962, VAR_bucket_2_0);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend2967 = new_Send((Optr)PSend2954, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock2955, (Optr)PBlock2958);
    Array PThreadedCode2953 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend2954, (Optr)&t_push_closure, (Optr)PBlock2955, (Optr)&t_push_closure, (Optr)PBlock2958, (Optr)&t_send2, (Optr)PSend2967, (Optr)&t_method_return);
    Block PBlock2951 = new_Block_with(PArray2952, empty_Array, PThreadedCode2953, 1, PSend2967);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2968 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2951);
    Array PThreadedCode2950 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2951, (Optr)&t_send1, (Optr)PSend2968, (Optr)&t_method_return);
    Method PMethod2948 = new_Method_with(PArray2949, empty_Array, empty_Array, PThreadedCode2950, 1, PSend2968);
    
    MethodClosure MC_SMB_bucketWithRoomAt_ = new_MethodClosure((Method)PMethod2948, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_bucketWithRoomAt_, MC_SMB_bucketWithRoomAt_);
}


static void init_SMB_maxLinear_() {
    Symbol SMB_maxLinear_ = new_Symbol(L"maxLinear:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray2970 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Assign PAssign2972 = new_Assign((Optr)slot_Collection_HashedCollection_maxLinear, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode2971 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign2972, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2969 = new_Method_with(PArray2970, empty_Array, empty_Array, PThreadedCode2971, 2, PAssign2972, self);
    
    MethodClosure MC_SMB_maxLinear_ = new_MethodClosure((Method)PMethod2969, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_maxLinear_, MC_SMB_maxLinear_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Array PThreadedCode2974 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_method_return);
    Method PMethod2973 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2974, 1, slot_Collection_HashedCollection_size);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod2973, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_copyEmpty() {
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend2977 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2978 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend2979 = new_Send((Optr)PSend2977, SMB_new_, 1, (Optr)PSend2978);
    Array PThreadedCode2976 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2977, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2978, (Optr)&t_send1, (Optr)PSend2979, (Optr)&t_method_return);
    Method PMethod2975 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2976, 1, PSend2979);
    
    MethodClosure MC_SMB_copyEmpty = new_MethodClosure((Method)PMethod2975, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_copyEmpty, MC_SMB_copyEmpty);
}


static void init_SMB_newBucketAt_() {
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    Variable VAR_bucketIndex_0_0 = new_Variable_named(L"bucketIndex", 0);
    Array PArray2981 = new_Array_with(1, (Optr)VAR_bucketIndex_0_0);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Constant int_4_Const = new_Constant((Optr)int_4);
    // newBucket:. 
    Send PSend2983 = new_Send((Optr)self, SMB_newBucket_, 1, (Optr)int_4_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2984 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_bucketIndex_0_0, (Optr)PSend2983);
    Array PThreadedCode2982 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend2983, (Optr)&t_send2, (Optr)PSend2984, (Optr)&t_method_return);
    Method PMethod2980 = new_Method_with(PArray2981, empty_Array, empty_Array, PThreadedCode2982, 1, PSend2984);
    
    MethodClosure MC_SMB_newBucketAt_ = new_MethodClosure((Method)PMethod2980, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_newBucketAt_, MC_SMB_newBucketAt_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_preferredSize_0_0 = new_Variable_named(L"preferredSize", 0);
    Array PArray2986 = new_Array_with(1, (Optr)VAR_preferredSize_0_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign2988 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)int_0_Const);
    SmallInt int_500 = new_SmallInt(500);
    Constant int_500_Const = new_Constant((Optr)int_500);
    Assign PAssign2989 = new_Assign((Optr)slot_Collection_HashedCollection_ratio, (Optr)int_500_Const);
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    Assign PAssign2990 = new_Assign((Optr)slot_Collection_HashedCollection_maxLinear, (Optr)int_20_Const);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend2992 = new_Send((Optr)VAR_preferredSize_0_0, SMB__lt__equals_, 1, (Optr)slot_Collection_HashedCollection_maxLinear);
    Assign PAssign2991 = new_Assign((Optr)slot_Collection_HashedCollection_linear, (Optr)PSend2992);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    // newBucket:. 
    Send PSend2998 = new_Send((Optr)self, SMB_newBucket_, 1, (Optr)VAR_preferredSize_0_0);
    // with:. 
    Send PSend2997 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend2998);
    Assign PAssign2996 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend2997);
    Array PThreadedCode2995 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign2996, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_preferredSize_0_0, (Optr)&t_send1, (Optr)PSend2998, (Optr)&t_send1, (Optr)PSend2997, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock2994 = new_Block_with(empty_Array, empty_Array, PThreadedCode2995, 1, PAssign2996);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_32 = new_SmallInt(32);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // new:. 
    Send PSend3002 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_32_Const);
    Assign PAssign3001 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend3002);
    Array PThreadedCode3000 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign3001, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend3002, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock2999 = new_Block_with(empty_Array, empty_Array, PThreadedCode3000, 1, PAssign3001);
    // ifTrue:ifFalse:. 
    Send PSend2993 = new_Send((Optr)PAssign2991, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2994, (Optr)PBlock2999);
    Array PThreadedCode2987 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign2988, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2989, (Optr)&t_push1, (Optr)int_500, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2990, (Optr)&t_push1, (Optr)int_20, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2991, (Optr)&t_push_variable, (Optr)VAR_preferredSize_0_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_maxLinear, (Optr)&t_send1, (Optr)PSend2992, (Optr)&t_assign, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2993, (Optr)PBlock2994, (Optr)PBlock2999, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2985 = new_Method_with(PArray2986, empty_Array, empty_Array, PThreadedCode2987, 5, PAssign2988, PAssign2989, PAssign2990, PSend2993, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod2985, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_checkShrink() {
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend3006 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign3005 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)PSend3006);
    Array PThreadedCode3004 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign3005, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3006, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3003 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3004, 2, PAssign3005, self);
    
    MethodClosure MC_SMB_checkShrink = new_MethodClosure((Method)PMethod3003, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_checkShrink, MC_SMB_checkShrink);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Constant int_20_Const = new_Constant((Optr)int_20);
    // initialize:. 
    Send PSend3009 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)int_20_Const);
    Array PThreadedCode3008 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend3009, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3007 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3008, 2, PSend3009, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod3007, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_bucketsDo_() {
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3011 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3013 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray3015 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3017 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_index_1_0);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3019 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3021 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_bucket_2_0);
    Array PThreadedCode3020 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_send1, (Optr)PSend3021, (Optr)&t_method_return);
    Block PBlock3018 = new_Block_with(PArray3019, empty_Array, PThreadedCode3020, 1, PSend3021);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend3022 = new_Send((Optr)PSend3017, SMB_ifNotNil_, 1, (Optr)PBlock3018);
    Array PThreadedCode3016 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend3017, (Optr)&t_push_closure, (Optr)PBlock3018, (Optr)&t_send1, (Optr)PSend3022, (Optr)&t_method_return);
    Block PBlock3014 = new_Block_with(PArray3015, empty_Array, PThreadedCode3016, 1, PSend3022);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend3023 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend3013, (Optr)PBlock3014);
    Array PThreadedCode3012 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3013, (Optr)&t_push_closure, (Optr)PBlock3014, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend3023, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3010 = new_Method_with(PArray3011, empty_Array, empty_Array, PThreadedCode3012, 2, PSend3023, self);
    
    MethodClosure MC_SMB_bucketsDo_ = new_MethodClosure((Method)PMethod3010, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_bucketsDo_, MC_SMB_bucketsDo_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3025 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_bucket_1_0 = new_Variable_named(L"bucket", 1);
    Array PArray3028 = new_Array_with(1, (Optr)VAR_bucket_1_0);
    // do:. 
    Send PSend3030 = new_Send((Optr)VAR_bucket_1_0, SMB_do_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode3029 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend3030, (Optr)&t_method_return);
    Block PBlock3027 = new_Block_with(PArray3028, empty_Array, PThreadedCode3029, 1, PSend3030);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3031 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3027);
    Array PThreadedCode3026 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3027, (Optr)&t_send1, (Optr)PSend3031, (Optr)&t_method_return);
    Method PMethod3024 = new_Method_with(PArray3025, empty_Array, empty_Array, PThreadedCode3026, 1, PSend3031);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod3024, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_growBucketAt_() {
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray3033 = new_Array_with(1, (Optr)VAR_index_0_0);
    Variable VAR_oldBucket_0_1 = new_Variable_named(L"oldBucket", 0);
    Variable VAR_newBucket_0_2 = new_Variable_named(L"newBucket", 0);
    Array PArray3034 = new_Array_with(2, (Optr)VAR_oldBucket_0_1, (Optr)VAR_newBucket_0_2);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3037 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_index_0_0);
    Assign PAssign3036 = new_Assign((Optr)VAR_oldBucket_0_1, (Optr)PSend3037);
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3041 = new_Send((Optr)VAR_oldBucket_0_1, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend3040 = new_Send((Optr)PSend3041, SMB__times_, 1, (Optr)int_2_Const);
    // newBucket:. 
    Send PSend3039 = new_Send((Optr)self, SMB_newBucket_, 1, (Optr)PSend3040);
    Assign PAssign3038 = new_Assign((Optr)VAR_newBucket_0_2, (Optr)PSend3039);
    Symbol SMB_copyFrom_ = new_Symbol(L"copyFrom:");
    // copyFrom:. 
    Send PSend3042 = new_Send((Optr)VAR_newBucket_0_2, SMB_copyFrom_, 1, (Optr)VAR_oldBucket_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3043 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_0, (Optr)VAR_newBucket_0_2);
    Array PThreadedCode3035 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign3036, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend3037, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3038, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_oldBucket_0_1, (Optr)&t_send0, (Optr)PSend3041, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3040, (Optr)&t_send1, (Optr)PSend3039, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newBucket_0_2, (Optr)&t_push_variable, (Optr)VAR_oldBucket_0_1, (Optr)&t_send1, (Optr)PSend3042, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_variable, (Optr)VAR_newBucket_0_2, (Optr)&t_send2, (Optr)PSend3043, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newBucket_0_2, (Optr)&t_method_return);
    Method PMethod3032 = new_Method_with(PArray3033, PArray3034, empty_Array, PThreadedCode3035, 5, PAssign3036, PAssign3038, PSend3042, PSend3043, VAR_newBucket_0_2);
    
    MethodClosure MC_SMB_growBucketAt_ = new_MethodClosure((Method)PMethod3032, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_growBucketAt_, MC_SMB_growBucketAt_);
}


static void init_SMB_removeAll() {
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign3046 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)int_0_Const);
    Variable VAR_bucket_1_0 = new_Variable_named(L"bucket", 1);
    Array PArray3048 = new_Array_with(1, (Optr)VAR_bucket_1_0);
    // removeAll. 
    Send PSend3050 = new_Send((Optr)VAR_bucket_1_0, SMB_removeAll, 0);
    Array PThreadedCode3049 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_bucket_1_0, (Optr)&t_send0, (Optr)PSend3050, (Optr)&t_method_return);
    Block PBlock3047 = new_Block_with(PArray3048, empty_Array, PThreadedCode3049, 1, PSend3050);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3051 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3047);
    Array PThreadedCode3045 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign3046, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3047, (Optr)&t_send1, (Optr)PSend3051, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3044 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3045, 3, PAssign3046, PSend3051, self);
    
    MethodClosure MC_SMB_removeAll = new_MethodClosure((Method)PMethod3044, Collection_HashedCollection_Class);
    store_method(Collection_HashedCollection_Class, SMB_removeAll, MC_SMB_removeAll);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_preferredSize_0_0 = new_Variable_named(L"preferredSize", 0);
    Array PArray3053 = new_Array_with(1, (Optr)VAR_preferredSize_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper3055 = new_Super(SMB_new, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend3056 = new_Send((Optr)PSuper3055, SMB_initialize_, 1, (Optr)VAR_preferredSize_0_0);
    Array PThreadedCode3054 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper3055, (Optr)&t_push_variable, (Optr)VAR_preferredSize_0_0, (Optr)&t_send1, (Optr)PSend3056, (Optr)&t_method_return);
    Method PMethod3052 = new_Method_with(PArray3053, empty_Array, empty_Array, PThreadedCode3054, 1, PSend3056);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod3052, HEADER(Collection_HashedCollection_Class));
    store_method(HEADER(Collection_HashedCollection_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_newFrom_() {
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray3058 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray3059 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3063 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend3062 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend3063);
    Assign PAssign3061 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend3062);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend3064 = new_Send((Optr)VAR_newCollection_0_1, SMB_addAll_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode3060 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign3061, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend3063, (Optr)&t_send1, (Optr)PSend3062, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend3064, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod3057 = new_Method_with(PArray3058, PArray3059, empty_Array, PThreadedCode3060, 3, PAssign3061, PSend3064, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_newFrom_ = new_MethodClosure((Method)PMethod3057, HEADER(Collection_HashedCollection_Class));
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