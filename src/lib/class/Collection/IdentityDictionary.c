#include <lib/class/Collection/IdentityDictionary.h>


Optr layout_Collection_IdentityDictionary_Class_class;
Optr layout_Collection_IdentityDictionary;


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray3463 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3465 = new_Send((Optr)PIdentityDictBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode3464 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PIdentityDictBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend3465, (Optr)&t_method_return);
    Method PMethod3462 = new_Method_with(PArray3463, empty_Array, empty_Array, PThreadedCode3464, 1, PSend3465);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod3462, IdentityDictionary_Class);
    store_method(IdentityDictionary_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_removeKey_ifAbsent_() {
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3467 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Variable VAR_bucket_0_3 = new_Variable_named(L"bucket", 0);
    Array PArray3468 = new_Array_with(2, (Optr)VAR_value_0_2, (Optr)VAR_bucket_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3471 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3478 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3481 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3482 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3481);
    Array PThreadedCode3480 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3481, (Optr)&t_send1, (Optr)PSend3482, (Optr)&t_block_return);
    Block PBlock3479 = new_Block_with(empty_Array, empty_Array, PThreadedCode3480, 1, PSend3482);
    // remove:ifAbsent:. 
    Send PSend3477 = new_Send((Optr)PSend3478, SMB_remove_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3479);
    Assign PAssign3476 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend3477);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend3483 = new_Send((Optr)self, SMB_checkShrink, 0);
    // escape:. 
    Send PSend3484 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode3475 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign3476, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3478, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3479, (Optr)&t_send2, (Optr)PSend3477, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3483, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend3484, (Optr)&t_block_return);
    Block PBlock3474 = new_Block_with(empty_Array, empty_Array, PThreadedCode3475, 3, PAssign3476, PSend3483, PSend3484);
    // ifTrue:. 
    Send PSend3473 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3474);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend3489 = new_Send((Optr)VAR_key_0_0, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3490 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3488 = new_Send((Optr)PSend3489, SMB__modulo_, 1, (Optr)PSend3490);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3487 = new_Send((Optr)PSend3488, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3486 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3487);
    Assign PAssign3485 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3486);
    // value. 
    Send PSend3493 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend3494 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3493);
    Array PThreadedCode3492 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3493, (Optr)&t_send1, (Optr)PSend3494, (Optr)&t_block_return);
    Block PBlock3491 = new_Block_with(empty_Array, empty_Array, PThreadedCode3492, 1, PSend3494);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend3495 = new_Send((Optr)VAR_bucket_0_3, SMB_ifNil_, 1, (Optr)PBlock3491);
    // value. 
    Send PSend3500 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend3501 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3500);
    Array PThreadedCode3499 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3500, (Optr)&t_send1, (Optr)PSend3501, (Optr)&t_block_return);
    Block PBlock3498 = new_Block_with(empty_Array, empty_Array, PThreadedCode3499, 1, PSend3501);
    // remove:ifAbsent:. 
    Send PSend3497 = new_Send((Optr)VAR_bucket_0_3, SMB_remove_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3498);
    Assign PAssign3496 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend3497);
    // checkShrink. 
    Send PSend3502 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode3472 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3473, (Optr)PBlock3474, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3485, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3489, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3490, (Optr)&t_send1, (Optr)PSend3488, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3487, (Optr)&t_send1, (Optr)PSend3486, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_closure, (Optr)PBlock3491, (Optr)&t_send1, (Optr)PSend3495, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3496, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3498, (Optr)&t_send2, (Optr)PSend3497, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3502, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_method_return);
    Block PBlock3470 = new_Block_with(PArray3471, empty_Array, PThreadedCode3472, 6, PSend3473, PAssign3485, PSend3495, PAssign3496, PSend3502, VAR_value_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3503 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3470);
    Array PThreadedCode3469 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3470, (Optr)&t_send1, (Optr)PSend3503, (Optr)&t_method_return);
    Method PMethod3466 = new_Method_with(PArray3467, PArray3468, empty_Array, PThreadedCode3469, 1, PSend3503);
    
    MethodClosure MC_SMB_removeKey_ifAbsent_ = new_MethodClosure((Method)PMethod3466, IdentityDictionary_Class);
    store_method(IdentityDictionary_Class, SMB_removeKey_ifAbsent_, MC_SMB_removeKey_ifAbsent_);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray3505 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Variable VAR_bucketIndex_0_2 = new_Variable_named(L"bucketIndex", 0);
    Variable VAR_bucket_0_3 = new_Variable_named(L"bucket", 0);
    Array PArray3506 = new_Array_with(2, (Optr)VAR_bucketIndex_0_2, (Optr)VAR_bucket_0_3);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_IdentityDictionary = new_Symbol(L"Collection.IdentityDictionary");
    Annotation PAnnotation3508 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_put_, (Optr)SMB_Collection_minus_IdentityDictionary);
    Array PArray3507 = new_Array_with(1, (Optr)PAnnotation3508);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3511 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_inFirstBucketAt_put_ = new_Symbol(L"inFirstBucketAt:put:");
    // inFirstBucketAt:put:. 
    Send PSend3516 = new_Send((Optr)self, SMB_inFirstBucketAt_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3517 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3516);
    Array PThreadedCode3515 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3516, (Optr)&t_send1, (Optr)PSend3517, (Optr)&t_block_return);
    Block PBlock3514 = new_Block_with(empty_Array, empty_Array, PThreadedCode3515, 1, PSend3517);
    // ifTrue:. 
    Send PSend3513 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3514);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend3521 = new_Send((Optr)VAR_key_0_0, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3522 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3520 = new_Send((Optr)PSend3521, SMB__modulo_, 1, (Optr)PSend3522);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3519 = new_Send((Optr)PSend3520, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3518 = new_Assign((Optr)VAR_bucketIndex_0_2, (Optr)PSend3519);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3524 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_bucketIndex_0_2);
    Assign PAssign3523 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3524);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend3527 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_bucketIndex_0_2);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3528 = new_Send((Optr)PSend3527, SMB_newKey_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_checkGrow = new_Symbol(L"checkGrow");
    // checkGrow. 
    Send PSend3529 = new_Send((Optr)self, SMB_checkGrow, 0);
    // escape:. 
    Send PSend3530 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_1);
    Array PThreadedCode3526 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_2, (Optr)&t_send1, (Optr)PSend3527, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3528, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3529, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send1, (Optr)PSend3530, (Optr)&t_block_return);
    Block PBlock3525 = new_Block_with(empty_Array, empty_Array, PThreadedCode3526, 3, PSend3528, PSend3529, PSend3530);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend3531 = new_Send((Optr)VAR_bucket_0_3, SMB_ifNil_, 1, (Optr)PBlock3525);
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    // assign:to:. 
    Send PSend3532 = new_Send((Optr)VAR_bucket_0_3, SMB_assign_to_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    // escape:. 
    Send PSend3536 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_1);
    Array PThreadedCode3535 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send1, (Optr)PSend3536, (Optr)&t_block_return);
    Block PBlock3534 = new_Block_with(empty_Array, empty_Array, PThreadedCode3535, 1, PSend3536);
    // ifTrue:. 
    Send PSend3533 = new_Send((Optr)PSend3532, SMB_ifTrue_, 1, (Optr)PBlock3534);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend3537 = new_Send((Optr)VAR_bucket_0_3, SMB_isFull, 0);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend3542 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_bucketIndex_0_2);
    Assign PAssign3541 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3542);
    Array PThreadedCode3540 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign3541, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_2, (Optr)&t_send1, (Optr)PSend3542, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3539 = new_Block_with(empty_Array, empty_Array, PThreadedCode3540, 1, PAssign3541);
    // ifTrue:. 
    Send PSend3538 = new_Send((Optr)PSend3537, SMB_ifTrue_, 1, (Optr)PBlock3539);
    // newKey:value:. 
    Send PSend3543 = new_Send((Optr)VAR_bucket_0_3, SMB_newKey_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    // checkGrow. 
    Send PSend3544 = new_Send((Optr)self, SMB_checkGrow, 0);
    Array PThreadedCode3512 = instantiate_Array_with(ThreadedCode_Class, 0, 76, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3513, (Optr)PBlock3514, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3518, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3521, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3522, (Optr)&t_send1, (Optr)PSend3520, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3519, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3523, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_2, (Optr)&t_send1, (Optr)PSend3524, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_closure, (Optr)PBlock3525, (Optr)&t_send1, (Optr)PSend3531, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3532, (Optr)&t_send_ifTrue_, (Optr)PSend3533, (Optr)PBlock3534, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_send0, (Optr)PSend3537, (Optr)&t_send_ifTrue_, (Optr)PSend3538, (Optr)PBlock3539, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3543, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3544, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_method_return);
    Block PBlock3510 = new_Block_with(PArray3511, empty_Array, PThreadedCode3512, 9, PSend3513, PAssign3518, PAssign3523, PSend3531, PSend3533, PSend3538, PSend3543, PSend3544, VAR_anObject_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3545 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3510);
    Array PThreadedCode3509 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3510, (Optr)&t_send1, (Optr)PSend3545, (Optr)&t_method_return);
    NativeMethod PNativeMethod3504 = new_NativeMethod_with(PArray3505, PArray3506, PArray3507, PThreadedCode3509, 1, PSend3545);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PNativeMethod3504, IdentityDictionary_Class);
    store_method(IdentityDictionary_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3547 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_IdentityDictionary = new_Symbol(L"Collection.IdentityDictionary");
    Annotation PAnnotation3549 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_ifAbsent_, (Optr)SMB_Collection_minus_IdentityDictionary);
    Array PArray3548 = new_Array_with(1, (Optr)PAnnotation3549);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3552 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3557 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // at:ifAbsent:. 
    Send PSend3558 = new_Send((Optr)PSend3557, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3559 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3558);
    Array PThreadedCode3556 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3557, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend3558, (Optr)&t_send1, (Optr)PSend3559, (Optr)&t_block_return);
    Block PBlock3555 = new_Block_with(empty_Array, empty_Array, PThreadedCode3556, 1, PSend3559);
    // ifTrue:. 
    Send PSend3554 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3555);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend3560 = new_Send((Optr)VAR_key_0_0, SMB_identityHash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3561 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend3562 = new_Send((Optr)PSend3560, SMB__modulo_, 1, (Optr)PSend3561);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3563 = new_Send((Optr)PSend3562, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3564 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3563);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3567 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode3566 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3567, (Optr)&t_block_return);
    Block PBlock3565 = new_Block_with(empty_Array, empty_Array, PThreadedCode3566, 1, PSend3567);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3569 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // at:ifAbsent:. 
    Send PSend3571 = new_Send((Optr)VAR_bucket_2_0, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode3570 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend3571, (Optr)&t_method_return);
    Block PBlock3568 = new_Block_with(PArray3569, empty_Array, PThreadedCode3570, 1, PSend3571);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend3572 = new_Send((Optr)PSend3564, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock3565, (Optr)PBlock3568);
    Array PThreadedCode3553 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3554, (Optr)PBlock3555, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3560, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3561, (Optr)&t_send1, (Optr)PSend3562, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3563, (Optr)&t_send1, (Optr)PSend3564, (Optr)&t_push_closure, (Optr)PBlock3565, (Optr)&t_push_closure, (Optr)PBlock3568, (Optr)&t_send2, (Optr)PSend3572, (Optr)&t_method_return);
    Block PBlock3551 = new_Block_with(PArray3552, empty_Array, PThreadedCode3553, 2, PSend3554, PSend3572);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3573 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3551);
    Array PThreadedCode3550 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3551, (Optr)&t_send1, (Optr)PSend3573, (Optr)&t_method_return);
    NativeMethod PNativeMethod3546 = new_NativeMethod_with(PArray3547, empty_Array, PArray3548, PThreadedCode3550, 1, PSend3573);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PNativeMethod3546, IdentityDictionary_Class);
    store_method(IdentityDictionary_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3575 = new_Array_with(1, (Optr)VAR_key_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3578 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3583 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includesKey:. 
    Send PSend3584 = new_Send((Optr)PSend3583, SMB_includesKey_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3585 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3584);
    Array PThreadedCode3582 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3583, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3584, (Optr)&t_send1, (Optr)PSend3585, (Optr)&t_block_return);
    Block PBlock3581 = new_Block_with(empty_Array, empty_Array, PThreadedCode3582, 1, PSend3585);
    // ifTrue:. 
    Send PSend3580 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3581);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend3586 = new_Send((Optr)VAR_key_0_0, SMB_identityHash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3587 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend3588 = new_Send((Optr)PSend3586, SMB__modulo_, 1, (Optr)PSend3587);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3589 = new_Send((Optr)PSend3588, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3590 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3589);
    Array PThreadedCode3592 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock3591 = new_Block_with(empty_Array, empty_Array, PThreadedCode3592, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3594 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includesKey:. 
    Send PSend3596 = new_Send((Optr)VAR_bucket_2_0, SMB_includesKey_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode3595 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3596, (Optr)&t_method_return);
    Block PBlock3593 = new_Block_with(PArray3594, empty_Array, PThreadedCode3595, 1, PSend3596);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend3597 = new_Send((Optr)PSend3590, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock3591, (Optr)PBlock3593);
    Array PThreadedCode3579 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3580, (Optr)PBlock3581, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3586, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3587, (Optr)&t_send1, (Optr)PSend3588, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3589, (Optr)&t_send1, (Optr)PSend3590, (Optr)&t_push_closure, (Optr)PBlock3591, (Optr)&t_push_closure, (Optr)PBlock3593, (Optr)&t_send2, (Optr)PSend3597, (Optr)&t_method_return);
    Block PBlock3577 = new_Block_with(PArray3578, empty_Array, PThreadedCode3579, 2, PSend3580, PSend3597);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3598 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3577);
    Array PThreadedCode3576 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3577, (Optr)&t_send1, (Optr)PSend3598, (Optr)&t_method_return);
    Method PMethod3574 = new_Method_with(PArray3575, empty_Array, empty_Array, PThreadedCode3576, 1, PSend3598);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PMethod3574, IdentityDictionary_Class);
    store_method(IdentityDictionary_Class, SMB_includesKey_, MC_SMB_includesKey_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3600 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_key_0_3 = new_Variable_named(L"key", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray3601 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_key_0_3, (Optr)VAR_bucketIndex_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign3603 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3604 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend3607 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3608 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend3607);
    Array PThreadedCode3606 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend3607, (Optr)&t_send1, (Optr)PSend3608, (Optr)&t_block_return);
    Block PBlock3605 = new_Block_with(empty_Array, empty_Array, PThreadedCode3606, 1, PSend3608);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3612 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign3611 = new_Assign((Optr)VAR_key_0_3, (Optr)PSend3612);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend3616 = new_Send((Optr)VAR_key_0_3, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3617 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3615 = new_Send((Optr)PSend3616, SMB__modulo_, 1, (Optr)PSend3617);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3614 = new_Send((Optr)PSend3615, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3613 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend3614);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend3618 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend3623 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign3622 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend3623);
    Array PThreadedCode3621 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign3622, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3623, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3620 = new_Block_with(empty_Array, empty_Array, PThreadedCode3621, 1, PAssign3622);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend3626 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    // +. 
    Send PSend3627 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3628 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)PSend3627);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3629 = new_Send((Optr)PSend3626, SMB_newKey_value_, 2, (Optr)VAR_key_0_3, (Optr)PSend3628);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend3630 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode3625 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend3626, (Optr)&t_push_variable, (Optr)VAR_key_0_3, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3627, (Optr)&t_send1, (Optr)PSend3628, (Optr)&t_send2, (Optr)PSend3629, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend3630, (Optr)&t_block_return);
    Block PBlock3624 = new_Block_with(empty_Array, empty_Array, PThreadedCode3625, 2, PSend3629, PSend3630);
    // ifTrue:ifFalse:. 
    Send PSend3619 = new_Send((Optr)PSend3618, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3620, (Optr)PBlock3624);
    Array PThreadedCode3610 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign3611, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend3612, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3613, (Optr)&t_push_variable, (Optr)VAR_key_0_3, (Optr)&t_send0, (Optr)PSend3616, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3617, (Optr)&t_send1, (Optr)PSend3615, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3614, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend3618, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3619, (Optr)PBlock3620, (Optr)PBlock3624, (Optr)&t_block_return);
    Block PBlock3609 = new_Block_with(empty_Array, empty_Array, PThreadedCode3610, 3, PAssign3611, PAssign3613, PSend3619);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3631 = new_Send((Optr)PBlock3605, SMB_whileTrue_, 1, (Optr)PBlock3609);
    Array PThreadedCode3602 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign3603, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend3604, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3605, (Optr)&t_push_closure, (Optr)PBlock3609, (Optr)&t_send1, (Optr)PSend3631, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3599 = new_Method_with(PArray3600, PArray3601, empty_Array, PThreadedCode3602, 4, PAssign3603, PSend3604, PSend3631, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod3599, IdentityDictionary_Class);
    store_method(IdentityDictionary_Class, SMB_reAddBucket_at_, MC_SMB_reAddBucket_at_);
}

void init_Collection_IdentityDictionary_layout() {
    layout_Collection_IdentityDictionary_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_IdentityDictionary_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_IdentityDictionary_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_IdentityDictionary_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_IdentityDictionary_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_IdentityDictionary_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_IdentityDictionary = new_Symbol(L"IdentityDictionary");
    layout_Collection_IdentityDictionary = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_IdentityDictionary)->values[0] = slot_Collection_HashedCollection_size; // size 
    ((Array)layout_Collection_IdentityDictionary)->values[1] = slot_Collection_HashedCollection_maxLinear; // maxLinear 
    ((Array)layout_Collection_IdentityDictionary)->values[2] = slot_Collection_HashedCollection_ratio; // ratio 
    ((Array)layout_Collection_IdentityDictionary)->values[3] = slot_Collection_HashedCollection_buckets; // buckets 
    ((Array)layout_Collection_IdentityDictionary)->values[4] = slot_Collection_HashedCollection_linear; // linear 
    Class_set_superclass(IdentityDictionary_Class, Dictionary_Class);
    IdentityDictionary_Class->layout = layout_Collection_IdentityDictionary;
    HEADER(IdentityDictionary_Class)->layout = layout_Collection_IdentityDictionary_Class_class;
    IdentityDictionary_Class->name = SMB_IdentityDictionary;
    
}

void init_Collection_IdentityDictionary_methods() {
    init_SMB_newBucket_();
    init_SMB_removeKey_ifAbsent_();
    init_SMB_at_put_();
    init_SMB_at_ifAbsent_();
    init_SMB_includesKey_();
    init_SMB_reAddBucket_at_();
    
}