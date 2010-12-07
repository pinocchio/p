#include <lib/class/Collection/IdentityDictionary.h>


Optr layout_Collection_IdentityDictionary_Class_class;
Optr layout_Collection_IdentityDictionary;


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray3464 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3466 = new_Send((Optr)PIdentityDictBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode3465 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PIdentityDictBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend3466, (Optr)&t_method_return);
    Method PMethod3463 = new_Method_with(PArray3464, empty_Array, empty_Array, PThreadedCode3465, 1, PSend3466);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod3463, IdentityDictionary_Class);
    store_method(IdentityDictionary_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_removeKey_ifAbsent_() {
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3468 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Variable VAR_bucket_0_3 = new_Variable_named(L"bucket", 0);
    Array PArray3469 = new_Array_with(2, (Optr)VAR_value_0_2, (Optr)VAR_bucket_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3472 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3479 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3482 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3483 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3482);
    Array PThreadedCode3481 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3482, (Optr)&t_send1, (Optr)PSend3483, (Optr)&t_block_return);
    Block PBlock3480 = new_Block_with(empty_Array, empty_Array, PThreadedCode3481, 1, PSend3483);
    // remove:ifAbsent:. 
    Send PSend3478 = new_Send((Optr)PSend3479, SMB_remove_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3480);
    Assign PAssign3477 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend3478);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend3484 = new_Send((Optr)self, SMB_checkShrink, 0);
    // escape:. 
    Send PSend3485 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode3476 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign3477, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3479, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3480, (Optr)&t_send2, (Optr)PSend3478, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3484, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend3485, (Optr)&t_block_return);
    Block PBlock3475 = new_Block_with(empty_Array, empty_Array, PThreadedCode3476, 3, PAssign3477, PSend3484, PSend3485);
    // ifTrue:. 
    Send PSend3474 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3475);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend3490 = new_Send((Optr)VAR_key_0_0, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3491 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3489 = new_Send((Optr)PSend3490, SMB__modulo_, 1, (Optr)PSend3491);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3488 = new_Send((Optr)PSend3489, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3487 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3488);
    Assign PAssign3486 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3487);
    // value. 
    Send PSend3494 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend3495 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3494);
    Array PThreadedCode3493 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3494, (Optr)&t_send1, (Optr)PSend3495, (Optr)&t_block_return);
    Block PBlock3492 = new_Block_with(empty_Array, empty_Array, PThreadedCode3493, 1, PSend3495);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend3496 = new_Send((Optr)VAR_bucket_0_3, SMB_ifNil_, 1, (Optr)PBlock3492);
    // value. 
    Send PSend3501 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend3502 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3501);
    Array PThreadedCode3500 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3501, (Optr)&t_send1, (Optr)PSend3502, (Optr)&t_block_return);
    Block PBlock3499 = new_Block_with(empty_Array, empty_Array, PThreadedCode3500, 1, PSend3502);
    // remove:ifAbsent:. 
    Send PSend3498 = new_Send((Optr)VAR_bucket_0_3, SMB_remove_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3499);
    Assign PAssign3497 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend3498);
    // checkShrink. 
    Send PSend3503 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode3473 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3474, (Optr)PBlock3475, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3486, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3490, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3491, (Optr)&t_send1, (Optr)PSend3489, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3488, (Optr)&t_send1, (Optr)PSend3487, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_closure, (Optr)PBlock3492, (Optr)&t_send1, (Optr)PSend3496, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3497, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3499, (Optr)&t_send2, (Optr)PSend3498, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_method_return);
    Block PBlock3471 = new_Block_with(PArray3472, empty_Array, PThreadedCode3473, 6, PSend3474, PAssign3486, PSend3496, PAssign3497, PSend3503, VAR_value_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3504 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3471);
    Array PThreadedCode3470 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3471, (Optr)&t_send1, (Optr)PSend3504, (Optr)&t_method_return);
    Method PMethod3467 = new_Method_with(PArray3468, PArray3469, empty_Array, PThreadedCode3470, 1, PSend3504);
    
    MethodClosure MC_SMB_removeKey_ifAbsent_ = new_MethodClosure((Method)PMethod3467, IdentityDictionary_Class);
    store_method(IdentityDictionary_Class, SMB_removeKey_ifAbsent_, MC_SMB_removeKey_ifAbsent_);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray3506 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Variable VAR_bucketIndex_0_2 = new_Variable_named(L"bucketIndex", 0);
    Variable VAR_bucket_0_3 = new_Variable_named(L"bucket", 0);
    Array PArray3507 = new_Array_with(2, (Optr)VAR_bucketIndex_0_2, (Optr)VAR_bucket_0_3);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_IdentityDictionary = new_Symbol(L"Collection.IdentityDictionary");
    Annotation PAnnotation3509 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_put_, (Optr)SMB_Collection_minus_IdentityDictionary);
    Array PArray3508 = new_Array_with(1, (Optr)PAnnotation3509);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3512 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_inFirstBucketAt_put_ = new_Symbol(L"inFirstBucketAt:put:");
    // inFirstBucketAt:put:. 
    Send PSend3517 = new_Send((Optr)self, SMB_inFirstBucketAt_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3518 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3517);
    Array PThreadedCode3516 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3517, (Optr)&t_send1, (Optr)PSend3518, (Optr)&t_block_return);
    Block PBlock3515 = new_Block_with(empty_Array, empty_Array, PThreadedCode3516, 1, PSend3518);
    // ifTrue:. 
    Send PSend3514 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3515);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend3522 = new_Send((Optr)VAR_key_0_0, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3523 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3521 = new_Send((Optr)PSend3522, SMB__modulo_, 1, (Optr)PSend3523);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3520 = new_Send((Optr)PSend3521, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3519 = new_Assign((Optr)VAR_bucketIndex_0_2, (Optr)PSend3520);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3525 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_bucketIndex_0_2);
    Assign PAssign3524 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3525);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend3528 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_bucketIndex_0_2);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3529 = new_Send((Optr)PSend3528, SMB_newKey_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_checkGrow = new_Symbol(L"checkGrow");
    // checkGrow. 
    Send PSend3530 = new_Send((Optr)self, SMB_checkGrow, 0);
    // escape:. 
    Send PSend3531 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_1);
    Array PThreadedCode3527 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_2, (Optr)&t_send1, (Optr)PSend3528, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3529, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3530, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send1, (Optr)PSend3531, (Optr)&t_block_return);
    Block PBlock3526 = new_Block_with(empty_Array, empty_Array, PThreadedCode3527, 3, PSend3529, PSend3530, PSend3531);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend3532 = new_Send((Optr)VAR_bucket_0_3, SMB_ifNil_, 1, (Optr)PBlock3526);
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    // assign:to:. 
    Send PSend3533 = new_Send((Optr)VAR_bucket_0_3, SMB_assign_to_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    // escape:. 
    Send PSend3537 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_1);
    Array PThreadedCode3536 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send1, (Optr)PSend3537, (Optr)&t_block_return);
    Block PBlock3535 = new_Block_with(empty_Array, empty_Array, PThreadedCode3536, 1, PSend3537);
    // ifTrue:. 
    Send PSend3534 = new_Send((Optr)PSend3533, SMB_ifTrue_, 1, (Optr)PBlock3535);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend3538 = new_Send((Optr)VAR_bucket_0_3, SMB_isFull, 0);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend3543 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_bucketIndex_0_2);
    Assign PAssign3542 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3543);
    Array PThreadedCode3541 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign3542, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_2, (Optr)&t_send1, (Optr)PSend3543, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3540 = new_Block_with(empty_Array, empty_Array, PThreadedCode3541, 1, PAssign3542);
    // ifTrue:. 
    Send PSend3539 = new_Send((Optr)PSend3538, SMB_ifTrue_, 1, (Optr)PBlock3540);
    // newKey:value:. 
    Send PSend3544 = new_Send((Optr)VAR_bucket_0_3, SMB_newKey_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    // checkGrow. 
    Send PSend3545 = new_Send((Optr)self, SMB_checkGrow, 0);
    Array PThreadedCode3513 = instantiate_Array_with(ThreadedCode_Class, 0, 76, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3514, (Optr)PBlock3515, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3519, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3522, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3523, (Optr)&t_send1, (Optr)PSend3521, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3520, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3524, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_2, (Optr)&t_send1, (Optr)PSend3525, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_closure, (Optr)PBlock3526, (Optr)&t_send1, (Optr)PSend3532, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3533, (Optr)&t_send_ifTrue_, (Optr)PSend3534, (Optr)PBlock3535, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_send0, (Optr)PSend3538, (Optr)&t_send_ifTrue_, (Optr)PSend3539, (Optr)PBlock3540, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3544, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3545, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_method_return);
    Block PBlock3511 = new_Block_with(PArray3512, empty_Array, PThreadedCode3513, 9, PSend3514, PAssign3519, PAssign3524, PSend3532, PSend3534, PSend3539, PSend3544, PSend3545, VAR_anObject_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3546 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3511);
    Array PThreadedCode3510 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3511, (Optr)&t_send1, (Optr)PSend3546, (Optr)&t_method_return);
    NativeMethod PNativeMethod3505 = new_NativeMethod_with(PArray3506, PArray3507, PArray3508, PThreadedCode3510, 1, PSend3546);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PNativeMethod3505, IdentityDictionary_Class);
    store_method(IdentityDictionary_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3548 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_IdentityDictionary = new_Symbol(L"Collection.IdentityDictionary");
    Annotation PAnnotation3550 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_ifAbsent_, (Optr)SMB_Collection_minus_IdentityDictionary);
    Array PArray3549 = new_Array_with(1, (Optr)PAnnotation3550);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3553 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3558 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // at:ifAbsent:. 
    Send PSend3559 = new_Send((Optr)PSend3558, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3560 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3559);
    Array PThreadedCode3557 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3558, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend3559, (Optr)&t_send1, (Optr)PSend3560, (Optr)&t_block_return);
    Block PBlock3556 = new_Block_with(empty_Array, empty_Array, PThreadedCode3557, 1, PSend3560);
    // ifTrue:. 
    Send PSend3555 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3556);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend3561 = new_Send((Optr)VAR_key_0_0, SMB_identityHash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3562 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend3563 = new_Send((Optr)PSend3561, SMB__modulo_, 1, (Optr)PSend3562);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3564 = new_Send((Optr)PSend3563, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3565 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3564);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3568 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode3567 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3568, (Optr)&t_block_return);
    Block PBlock3566 = new_Block_with(empty_Array, empty_Array, PThreadedCode3567, 1, PSend3568);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3570 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // at:ifAbsent:. 
    Send PSend3572 = new_Send((Optr)VAR_bucket_2_0, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode3571 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend3572, (Optr)&t_method_return);
    Block PBlock3569 = new_Block_with(PArray3570, empty_Array, PThreadedCode3571, 1, PSend3572);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend3573 = new_Send((Optr)PSend3565, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock3566, (Optr)PBlock3569);
    Array PThreadedCode3554 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3555, (Optr)PBlock3556, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3561, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3562, (Optr)&t_send1, (Optr)PSend3563, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3564, (Optr)&t_send1, (Optr)PSend3565, (Optr)&t_push_closure, (Optr)PBlock3566, (Optr)&t_push_closure, (Optr)PBlock3569, (Optr)&t_send2, (Optr)PSend3573, (Optr)&t_method_return);
    Block PBlock3552 = new_Block_with(PArray3553, empty_Array, PThreadedCode3554, 2, PSend3555, PSend3573);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3574 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3552);
    Array PThreadedCode3551 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3552, (Optr)&t_send1, (Optr)PSend3574, (Optr)&t_method_return);
    NativeMethod PNativeMethod3547 = new_NativeMethod_with(PArray3548, empty_Array, PArray3549, PThreadedCode3551, 1, PSend3574);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PNativeMethod3547, IdentityDictionary_Class);
    store_method(IdentityDictionary_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3576 = new_Array_with(1, (Optr)VAR_key_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3579 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3584 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includesKey:. 
    Send PSend3585 = new_Send((Optr)PSend3584, SMB_includesKey_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3586 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3585);
    Array PThreadedCode3583 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3584, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3585, (Optr)&t_send1, (Optr)PSend3586, (Optr)&t_block_return);
    Block PBlock3582 = new_Block_with(empty_Array, empty_Array, PThreadedCode3583, 1, PSend3586);
    // ifTrue:. 
    Send PSend3581 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3582);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend3587 = new_Send((Optr)VAR_key_0_0, SMB_identityHash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3588 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend3589 = new_Send((Optr)PSend3587, SMB__modulo_, 1, (Optr)PSend3588);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3590 = new_Send((Optr)PSend3589, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3591 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3590);
    Array PThreadedCode3593 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock3592 = new_Block_with(empty_Array, empty_Array, PThreadedCode3593, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3595 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includesKey:. 
    Send PSend3597 = new_Send((Optr)VAR_bucket_2_0, SMB_includesKey_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode3596 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3597, (Optr)&t_method_return);
    Block PBlock3594 = new_Block_with(PArray3595, empty_Array, PThreadedCode3596, 1, PSend3597);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend3598 = new_Send((Optr)PSend3591, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock3592, (Optr)PBlock3594);
    Array PThreadedCode3580 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3581, (Optr)PBlock3582, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3587, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3588, (Optr)&t_send1, (Optr)PSend3589, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3590, (Optr)&t_send1, (Optr)PSend3591, (Optr)&t_push_closure, (Optr)PBlock3592, (Optr)&t_push_closure, (Optr)PBlock3594, (Optr)&t_send2, (Optr)PSend3598, (Optr)&t_method_return);
    Block PBlock3578 = new_Block_with(PArray3579, empty_Array, PThreadedCode3580, 2, PSend3581, PSend3598);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3599 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3578);
    Array PThreadedCode3577 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3578, (Optr)&t_send1, (Optr)PSend3599, (Optr)&t_method_return);
    Method PMethod3575 = new_Method_with(PArray3576, empty_Array, empty_Array, PThreadedCode3577, 1, PSend3599);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PMethod3575, IdentityDictionary_Class);
    store_method(IdentityDictionary_Class, SMB_includesKey_, MC_SMB_includesKey_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3601 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_key_0_3 = new_Variable_named(L"key", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray3602 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_key_0_3, (Optr)VAR_bucketIndex_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign3604 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3605 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend3608 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3609 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend3608);
    Array PThreadedCode3607 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend3608, (Optr)&t_send1, (Optr)PSend3609, (Optr)&t_block_return);
    Block PBlock3606 = new_Block_with(empty_Array, empty_Array, PThreadedCode3607, 1, PSend3609);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3613 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign3612 = new_Assign((Optr)VAR_key_0_3, (Optr)PSend3613);
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend3617 = new_Send((Optr)VAR_key_0_3, SMB_identityHash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3618 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3616 = new_Send((Optr)PSend3617, SMB__modulo_, 1, (Optr)PSend3618);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3615 = new_Send((Optr)PSend3616, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3614 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend3615);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend3619 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend3624 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign3623 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend3624);
    Array PThreadedCode3622 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign3623, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3624, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3621 = new_Block_with(empty_Array, empty_Array, PThreadedCode3622, 1, PAssign3623);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend3627 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    // +. 
    Send PSend3628 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3629 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)PSend3628);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3630 = new_Send((Optr)PSend3627, SMB_newKey_value_, 2, (Optr)VAR_key_0_3, (Optr)PSend3629);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend3631 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode3626 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend3627, (Optr)&t_push_variable, (Optr)VAR_key_0_3, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3628, (Optr)&t_send1, (Optr)PSend3629, (Optr)&t_send2, (Optr)PSend3630, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend3631, (Optr)&t_block_return);
    Block PBlock3625 = new_Block_with(empty_Array, empty_Array, PThreadedCode3626, 2, PSend3630, PSend3631);
    // ifTrue:ifFalse:. 
    Send PSend3620 = new_Send((Optr)PSend3619, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3621, (Optr)PBlock3625);
    Array PThreadedCode3611 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign3612, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend3613, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3614, (Optr)&t_push_variable, (Optr)VAR_key_0_3, (Optr)&t_send0, (Optr)PSend3617, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3618, (Optr)&t_send1, (Optr)PSend3616, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3615, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend3619, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3620, (Optr)PBlock3621, (Optr)PBlock3625, (Optr)&t_block_return);
    Block PBlock3610 = new_Block_with(empty_Array, empty_Array, PThreadedCode3611, 3, PAssign3612, PAssign3614, PSend3620);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3632 = new_Send((Optr)PBlock3606, SMB_whileTrue_, 1, (Optr)PBlock3610);
    Array PThreadedCode3603 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign3604, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend3605, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3606, (Optr)&t_push_closure, (Optr)PBlock3610, (Optr)&t_send1, (Optr)PSend3632, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3600 = new_Method_with(PArray3601, PArray3602, empty_Array, PThreadedCode3603, 4, PAssign3604, PSend3605, PSend3632, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod3600, IdentityDictionary_Class);
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