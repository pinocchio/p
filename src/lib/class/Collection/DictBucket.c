#include <lib/class/Collection/DictBucket.h>


Optr layout_Collection_DictBucket_Class_class;
Optr layout_Collection_DictBucket;


static void init_SMB_newKey_value_() {
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray6465 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6467 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6468 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6467, (Optr)VAR_aKey_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend6469 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    // at:put:. 
    Send PSend6470 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6469, (Optr)VAR_anObject_0_1);
    // +. 
    Send PSend6472 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign6471 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend6472);
    Array PThreadedCode6466 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6467, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send2, (Optr)PSend6468, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6469, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend6470, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6471, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6472, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6464 = new_Method_with(PArray6465, empty_Array, empty_Array, PThreadedCode6466, 4, PSend6468, PSend6470, PAssign6471, self);
    
    MethodClosure MC_SMB_newKey_value_ = new_MethodClosure((Method)PMethod6464, DictBucket_Class);
    store_method(DictBucket_Class, SMB_newKey_value_, MC_SMB_newKey_value_);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6474 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray6475 = new_Array_with(1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6478 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6481 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6483 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6484 = new_Send((Optr)PSend6483, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6490 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6489 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6490);
    Assign PAssign6488 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend6489);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6491 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6492 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode6487 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign6488, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6490, (Optr)&t_send1, (Optr)PSend6489, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6491, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend6492, (Optr)&t_block_return);
    Block PBlock6486 = new_Block_with(empty_Array, empty_Array, PThreadedCode6487, 3, PAssign6488, PSend6491, PSend6492);
    // ifTrue:. 
    Send PSend6485 = new_Send((Optr)PSend6484, SMB_ifTrue_, 1, (Optr)PBlock6486);
    Array PThreadedCode6482 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6483, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6484, (Optr)&t_send_ifTrue_, (Optr)PSend6485, (Optr)PBlock6486, (Optr)&t_method_return);
    Block PBlock6480 = new_Block_with(PArray6481, empty_Array, PThreadedCode6482, 1, PSend6485);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6493 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6480);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6494 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6479 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6480, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6493, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6494, (Optr)&t_method_return);
    Block PBlock6477 = new_Block_with(PArray6478, empty_Array, PThreadedCode6479, 2, PSend6493, PSend6494);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6495 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6477);
    Array PThreadedCode6476 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6477, (Optr)&t_send1, (Optr)PSend6495, (Optr)&t_method_return);
    Method PMethod6473 = new_Method_with(PArray6474, PArray6475, empty_Array, PThreadedCode6476, 1, PSend6495);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod6473, DictBucket_Class);
    store_method(DictBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_assign_to_() {
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray6497 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6500 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6503 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6505 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6506 = new_Send((Optr)PSend6505, SMB__equals_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6510 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6511 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6510, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6512 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6509 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6510, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend6511, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6512, (Optr)&t_block_return);
    Block PBlock6508 = new_Block_with(empty_Array, empty_Array, PThreadedCode6509, 2, PSend6511, PSend6512);
    // ifTrue:. 
    Send PSend6507 = new_Send((Optr)PSend6506, SMB_ifTrue_, 1, (Optr)PBlock6508);
    Array PThreadedCode6504 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6505, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend6506, (Optr)&t_send_ifTrue_, (Optr)PSend6507, (Optr)PBlock6508, (Optr)&t_method_return);
    Block PBlock6502 = new_Block_with(PArray6503, empty_Array, PThreadedCode6504, 1, PSend6507);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6513 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6502);
    Array PThreadedCode6501 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6502, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6513, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6499 = new_Block_with(PArray6500, empty_Array, PThreadedCode6501, 2, PSend6513, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6514 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6499);
    Array PThreadedCode6498 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6499, (Optr)&t_send1, (Optr)PSend6514, (Optr)&t_method_return);
    Method PMethod6496 = new_Method_with(PArray6497, empty_Array, empty_Array, PThreadedCode6498, 1, PSend6514);
    
    MethodClosure MC_SMB_assign_to_ = new_MethodClosure((Method)PMethod6496, DictBucket_Class);
    store_method(DictBucket_Class, SMB_assign_to_, MC_SMB_assign_to_);
}


static void init_SMB_scanFor_() {
    Symbol SMB_scanFor_ = new_Symbol(L"scanFor:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6516 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6519 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6522 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6524 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6525 = new_Send((Optr)PSend6524, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6529 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_index_2_0);
    Array PThreadedCode6528 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6529, (Optr)&t_block_return);
    Block PBlock6527 = new_Block_with(empty_Array, empty_Array, PThreadedCode6528, 1, PSend6529);
    // ifTrue:. 
    Send PSend6526 = new_Send((Optr)PSend6525, SMB_ifTrue_, 1, (Optr)PBlock6527);
    Array PThreadedCode6523 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6524, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6525, (Optr)&t_send_ifTrue_, (Optr)PSend6526, (Optr)PBlock6527, (Optr)&t_method_return);
    Block PBlock6521 = new_Block_with(PArray6522, empty_Array, PThreadedCode6523, 1, PSend6526);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6530 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6521);
    Array PThreadedCode6520 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6521, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6530, (Optr)&t_zap, (Optr)&t_method_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock6518 = new_Block_with(PArray6519, empty_Array, PThreadedCode6520, 2, PSend6530, int_0_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6531 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6518);
    Array PThreadedCode6517 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6518, (Optr)&t_send1, (Optr)PSend6531, (Optr)&t_method_return);
    Method PMethod6515 = new_Method_with(PArray6516, empty_Array, empty_Array, PThreadedCode6517, 1, PSend6531);
    
    MethodClosure MC_SMB_scanFor_ = new_MethodClosure((Method)PMethod6515, DictBucket_Class);
    store_method(DictBucket_Class, SMB_scanFor_, MC_SMB_scanFor_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6533 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6536 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6539 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6541 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6542 = new_Send((Optr)PSend6541, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6546 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6545 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6546, (Optr)&t_block_return);
    Block PBlock6544 = new_Block_with(empty_Array, empty_Array, PThreadedCode6545, 1, PSend6546);
    // ifTrue:. 
    Send PSend6543 = new_Send((Optr)PSend6542, SMB_ifTrue_, 1, (Optr)PBlock6544);
    Array PThreadedCode6540 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6541, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend6542, (Optr)&t_send_ifTrue_, (Optr)PSend6543, (Optr)PBlock6544, (Optr)&t_method_return);
    Block PBlock6538 = new_Block_with(PArray6539, empty_Array, PThreadedCode6540, 1, PSend6543);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend6547 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6538);
    Array PThreadedCode6537 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6538, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6547, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6535 = new_Block_with(PArray6536, empty_Array, PThreadedCode6537, 2, PSend6547, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6548 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6535);
    Array PThreadedCode6534 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6535, (Optr)&t_send1, (Optr)PSend6548, (Optr)&t_method_return);
    Method PMethod6532 = new_Method_with(PArray6533, empty_Array, empty_Array, PThreadedCode6534, 1, PSend6548);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod6532, DictBucket_Class);
    store_method(DictBucket_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_keysDo_() {
    Symbol SMB_keysDo_ = new_Symbol(L"keysDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6550 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6553 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6555 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6556 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6555);
    Array PThreadedCode6554 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6555, (Optr)&t_send1, (Optr)PSend6556, (Optr)&t_method_return);
    Block PBlock6552 = new_Block_with(PArray6553, empty_Array, PThreadedCode6554, 1, PSend6556);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6557 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6552);
    Array PThreadedCode6551 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6552, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6557, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6549 = new_Method_with(PArray6550, empty_Array, empty_Array, PThreadedCode6551, 2, PSend6557, self);
    
    MethodClosure MC_SMB_keysDo_ = new_MethodClosure((Method)PMethod6549, DictBucket_Class);
    store_method(DictBucket_Class, SMB_keysDo_, MC_SMB_keysDo_);
}


static void init_SMB_removeAt_() {
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray6559 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6561 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6562 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6561);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6563 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_0_0, (Optr)PSend6562);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6564 = new_Send((Optr)VAR_index_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6565 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_AbstractBucket_bucketSize);
    // at:put:. 
    Send PSend6566 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6564, (Optr)PSend6565);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // -. 
    Send PSend6568 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_2_Const);
    Assign PAssign6567 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend6568);
    // +. 
    Send PSend6569 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend6570 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6569, (Optr)nil_Const);
    // +. 
    Send PSend6571 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    // at:put:. 
    Send PSend6572 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6571, (Optr)nil_Const);
    Array PThreadedCode6560 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6561, (Optr)&t_send1, (Optr)PSend6562, (Optr)&t_send2, (Optr)PSend6563, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6564, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_send1, (Optr)PSend6565, (Optr)&t_send2, (Optr)PSend6566, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6567, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6568, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6569, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend6570, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6571, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend6572, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6558 = new_Method_with(PArray6559, empty_Array, empty_Array, PThreadedCode6560, 6, PSend6563, PSend6566, PAssign6567, PSend6570, PSend6572, self);
    
    MethodClosure MC_SMB_removeAt_ = new_MethodClosure((Method)PMethod6558, DictBucket_Class);
    store_method(DictBucket_Class, SMB_removeAt_, MC_SMB_removeAt_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6574 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6577 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6579 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6580 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6579);
    Array PThreadedCode6578 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6579, (Optr)&t_send1, (Optr)PSend6580, (Optr)&t_method_return);
    Block PBlock6576 = new_Block_with(PArray6577, empty_Array, PThreadedCode6578, 1, PSend6580);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend6581 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6576);
    Array PThreadedCode6575 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6576, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6581, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6573 = new_Method_with(PArray6574, empty_Array, empty_Array, PThreadedCode6575, 2, PSend6581, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod6573, DictBucket_Class);
    store_method(DictBucket_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6583 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6586 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6589 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6591 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6592 = new_Send((Optr)PSend6591, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6596 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6597 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6596);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6598 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6597);
    Array PThreadedCode6595 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6596, (Optr)&t_send1, (Optr)PSend6597, (Optr)&t_send1, (Optr)PSend6598, (Optr)&t_block_return);
    Block PBlock6594 = new_Block_with(empty_Array, empty_Array, PThreadedCode6595, 1, PSend6598);
    // ifTrue:. 
    Send PSend6593 = new_Send((Optr)PSend6592, SMB_ifTrue_, 1, (Optr)PBlock6594);
    Array PThreadedCode6590 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6591, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6592, (Optr)&t_send_ifTrue_, (Optr)PSend6593, (Optr)PBlock6594, (Optr)&t_method_return);
    Block PBlock6588 = new_Block_with(PArray6589, empty_Array, PThreadedCode6590, 1, PSend6593);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6599 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6588);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6600 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6587 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6588, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6599, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6600, (Optr)&t_method_return);
    Block PBlock6585 = new_Block_with(PArray6586, empty_Array, PThreadedCode6587, 2, PSend6599, PSend6600);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6601 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6585);
    Array PThreadedCode6584 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6585, (Optr)&t_send1, (Optr)PSend6601, (Optr)&t_method_return);
    Method PMethod6582 = new_Method_with(PArray6583, empty_Array, empty_Array, PThreadedCode6584, 1, PSend6601);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod6582, DictBucket_Class);
    store_method(DictBucket_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_keysAndValuesDo_() {
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6603 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6606 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6608 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6609 = new_Send((Optr)VAR_index_1_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6610 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6609);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend6611 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend6608, (Optr)PSend6610);
    Array PThreadedCode6607 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6608, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6609, (Optr)&t_send1, (Optr)PSend6610, (Optr)&t_send2, (Optr)PSend6611, (Optr)&t_method_return);
    Block PBlock6605 = new_Block_with(PArray6606, empty_Array, PThreadedCode6607, 1, PSend6611);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6612 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6605);
    Array PThreadedCode6604 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6605, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6612, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6602 = new_Method_with(PArray6603, empty_Array, empty_Array, PThreadedCode6604, 2, PSend6612, self);
    
    MethodClosure MC_SMB_keysAndValuesDo_ = new_MethodClosure((Method)PMethod6602, DictBucket_Class);
    store_method(DictBucket_Class, SMB_keysAndValuesDo_, MC_SMB_keysAndValuesDo_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6614 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6617 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6620 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6622 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6623 = new_Send((Optr)PSend6622, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6627 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6626 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6627, (Optr)&t_block_return);
    Block PBlock6625 = new_Block_with(empty_Array, empty_Array, PThreadedCode6626, 1, PSend6627);
    // ifTrue:. 
    Send PSend6624 = new_Send((Optr)PSend6623, SMB_ifTrue_, 1, (Optr)PBlock6625);
    Array PThreadedCode6621 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6622, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6623, (Optr)&t_send_ifTrue_, (Optr)PSend6624, (Optr)PBlock6625, (Optr)&t_method_return);
    Block PBlock6619 = new_Block_with(PArray6620, empty_Array, PThreadedCode6621, 1, PSend6624);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6628 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6619);
    Array PThreadedCode6618 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6619, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6628, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6616 = new_Block_with(PArray6617, empty_Array, PThreadedCode6618, 2, PSend6628, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6629 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6616);
    Array PThreadedCode6615 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6616, (Optr)&t_send1, (Optr)PSend6629, (Optr)&t_method_return);
    Method PMethod6613 = new_Method_with(PArray6614, empty_Array, empty_Array, PThreadedCode6615, 1, PSend6629);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PMethod6613, DictBucket_Class);
    store_method(DictBucket_Class, SMB_includesKey_, MC_SMB_includesKey_);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray6631 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend6633 = new_Send((Optr)VAR_sizeRequested_0_0, SMB__times_, 1, (Optr)int_2_Const);
    Super PSuper6634 = new_Super(SMB_new_, 1, (Optr)PSend6633);
    Array PThreadedCode6632 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6633, (Optr)&t_super1, (Optr)PSuper6634, (Optr)&t_method_return);
    Method PMethod6630 = new_Method_with(PArray6631, empty_Array, empty_Array, PThreadedCode6632, 1, PSuper6634);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod6630, HEADER(DictBucket_Class));
    store_method(HEADER(DictBucket_Class), SMB_new_, MC_SMB_new_);
}

void init_Collection_PDictBucket_layout() {
    layout_Collection_DictBucket_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_DictBucket_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_DictBucket_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_DictBucket_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_DictBucket_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_DictBucket_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_DictBucket = new_Symbol(L"DictBucket");
    layout_Collection_DictBucket = (Optr)create_layout_with_vars(ArrayLayout_Class, 1);
    ((Array)layout_Collection_DictBucket)->values[0] = slot_Collection_AbstractBucket_bucketSize;
    Class_set_superclass(DictBucket_Class, Collection_AbstractBucket_Class);
    DictBucket_Class->layout = layout_Collection_DictBucket;
    HEADER(DictBucket_Class)->layout = layout_Collection_DictBucket_Class_class;
    DictBucket_Class->name = SMB_DictBucket;
    
}

void init_Collection_PDictBucket_methods() {
    init_SMB_newKey_value_();
    init_SMB_remove_ifAbsent_();
    init_SMB_assign_to_();
    init_SMB_scanFor_();
    init_SMB_includes_();
    init_SMB_keysDo_();
    init_SMB_removeAt_();
    init_SMB_do_();
    init_SMB_at_ifAbsent_();
    init_SMB_keysAndValuesDo_();
    init_SMB_includesKey_();
    init_class_SMB_new_();
    
}