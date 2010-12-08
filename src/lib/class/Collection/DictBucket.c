#include <lib/class/Collection/DictBucket.h>


Optr layout_Collection_DictBucket_Class_class;
Optr layout_Collection_DictBucket;


static void init_SMB_newKey_value_() {
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray6454 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6456 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6457 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6456, (Optr)VAR_aKey_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend6458 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    // at:put:. 
    Send PSend6459 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6458, (Optr)VAR_anObject_0_1);
    // +. 
    Send PSend6461 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign6460 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend6461);
    Array PThreadedCode6455 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6456, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send2, (Optr)PSend6457, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6458, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend6459, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6460, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6461, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6453 = new_Method_with(PArray6454, empty_Array, empty_Array, PThreadedCode6455, 4, PSend6457, PSend6459, PAssign6460, self);
    
    MethodClosure MC_SMB_newKey_value_ = new_MethodClosure((Method)PMethod6453, DictBucket_Class);
    store_method(DictBucket_Class, SMB_newKey_value_, MC_SMB_newKey_value_);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6463 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray6464 = new_Array_with(1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6467 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6470 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6472 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6473 = new_Send((Optr)PSend6472, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6479 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6478 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6479);
    Assign PAssign6477 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend6478);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6480 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6481 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode6476 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign6477, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6479, (Optr)&t_send1, (Optr)PSend6478, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6480, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend6481, (Optr)&t_block_return);
    Block PBlock6475 = new_Block_with(empty_Array, empty_Array, PThreadedCode6476, 3, PAssign6477, PSend6480, PSend6481);
    // ifTrue:. 
    Send PSend6474 = new_Send((Optr)PSend6473, SMB_ifTrue_, 1, (Optr)PBlock6475);
    Array PThreadedCode6471 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6472, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6473, (Optr)&t_send_ifTrue_, (Optr)PSend6474, (Optr)PBlock6475, (Optr)&t_method_return);
    Block PBlock6469 = new_Block_with(PArray6470, empty_Array, PThreadedCode6471, 1, PSend6474);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6482 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6469);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6483 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6468 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6469, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6482, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6483, (Optr)&t_method_return);
    Block PBlock6466 = new_Block_with(PArray6467, empty_Array, PThreadedCode6468, 2, PSend6482, PSend6483);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6484 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6466);
    Array PThreadedCode6465 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6466, (Optr)&t_send1, (Optr)PSend6484, (Optr)&t_method_return);
    Method PMethod6462 = new_Method_with(PArray6463, PArray6464, empty_Array, PThreadedCode6465, 1, PSend6484);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod6462, DictBucket_Class);
    store_method(DictBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_assign_to_() {
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray6486 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6489 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6492 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6494 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6495 = new_Send((Optr)PSend6494, SMB__equals_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6499 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6500 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6499, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6501 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6498 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6499, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend6500, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6501, (Optr)&t_block_return);
    Block PBlock6497 = new_Block_with(empty_Array, empty_Array, PThreadedCode6498, 2, PSend6500, PSend6501);
    // ifTrue:. 
    Send PSend6496 = new_Send((Optr)PSend6495, SMB_ifTrue_, 1, (Optr)PBlock6497);
    Array PThreadedCode6493 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6494, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend6495, (Optr)&t_send_ifTrue_, (Optr)PSend6496, (Optr)PBlock6497, (Optr)&t_method_return);
    Block PBlock6491 = new_Block_with(PArray6492, empty_Array, PThreadedCode6493, 1, PSend6496);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6502 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6491);
    Array PThreadedCode6490 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6491, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6502, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6488 = new_Block_with(PArray6489, empty_Array, PThreadedCode6490, 2, PSend6502, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6503 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6488);
    Array PThreadedCode6487 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6488, (Optr)&t_send1, (Optr)PSend6503, (Optr)&t_method_return);
    Method PMethod6485 = new_Method_with(PArray6486, empty_Array, empty_Array, PThreadedCode6487, 1, PSend6503);
    
    MethodClosure MC_SMB_assign_to_ = new_MethodClosure((Method)PMethod6485, DictBucket_Class);
    store_method(DictBucket_Class, SMB_assign_to_, MC_SMB_assign_to_);
}


static void init_SMB_scanFor_() {
    Symbol SMB_scanFor_ = new_Symbol(L"scanFor:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6505 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6508 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6511 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6513 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6514 = new_Send((Optr)PSend6513, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6518 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_index_2_0);
    Array PThreadedCode6517 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6518, (Optr)&t_block_return);
    Block PBlock6516 = new_Block_with(empty_Array, empty_Array, PThreadedCode6517, 1, PSend6518);
    // ifTrue:. 
    Send PSend6515 = new_Send((Optr)PSend6514, SMB_ifTrue_, 1, (Optr)PBlock6516);
    Array PThreadedCode6512 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6513, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6514, (Optr)&t_send_ifTrue_, (Optr)PSend6515, (Optr)PBlock6516, (Optr)&t_method_return);
    Block PBlock6510 = new_Block_with(PArray6511, empty_Array, PThreadedCode6512, 1, PSend6515);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6519 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6510);
    Array PThreadedCode6509 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6510, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6519, (Optr)&t_zap, (Optr)&t_method_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock6507 = new_Block_with(PArray6508, empty_Array, PThreadedCode6509, 2, PSend6519, int_0_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6520 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6507);
    Array PThreadedCode6506 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6507, (Optr)&t_send1, (Optr)PSend6520, (Optr)&t_method_return);
    Method PMethod6504 = new_Method_with(PArray6505, empty_Array, empty_Array, PThreadedCode6506, 1, PSend6520);
    
    MethodClosure MC_SMB_scanFor_ = new_MethodClosure((Method)PMethod6504, DictBucket_Class);
    store_method(DictBucket_Class, SMB_scanFor_, MC_SMB_scanFor_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6522 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6525 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6528 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6530 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6531 = new_Send((Optr)PSend6530, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6535 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6534 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6535, (Optr)&t_block_return);
    Block PBlock6533 = new_Block_with(empty_Array, empty_Array, PThreadedCode6534, 1, PSend6535);
    // ifTrue:. 
    Send PSend6532 = new_Send((Optr)PSend6531, SMB_ifTrue_, 1, (Optr)PBlock6533);
    Array PThreadedCode6529 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6530, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend6531, (Optr)&t_send_ifTrue_, (Optr)PSend6532, (Optr)PBlock6533, (Optr)&t_method_return);
    Block PBlock6527 = new_Block_with(PArray6528, empty_Array, PThreadedCode6529, 1, PSend6532);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend6536 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6527);
    Array PThreadedCode6526 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6527, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6536, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6524 = new_Block_with(PArray6525, empty_Array, PThreadedCode6526, 2, PSend6536, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6537 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6524);
    Array PThreadedCode6523 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6524, (Optr)&t_send1, (Optr)PSend6537, (Optr)&t_method_return);
    Method PMethod6521 = new_Method_with(PArray6522, empty_Array, empty_Array, PThreadedCode6523, 1, PSend6537);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod6521, DictBucket_Class);
    store_method(DictBucket_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_keysDo_() {
    Symbol SMB_keysDo_ = new_Symbol(L"keysDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6539 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6542 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6544 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6545 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6544);
    Array PThreadedCode6543 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6544, (Optr)&t_send1, (Optr)PSend6545, (Optr)&t_method_return);
    Block PBlock6541 = new_Block_with(PArray6542, empty_Array, PThreadedCode6543, 1, PSend6545);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6546 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6541);
    Array PThreadedCode6540 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6541, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6546, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6538 = new_Method_with(PArray6539, empty_Array, empty_Array, PThreadedCode6540, 2, PSend6546, self);
    
    MethodClosure MC_SMB_keysDo_ = new_MethodClosure((Method)PMethod6538, DictBucket_Class);
    store_method(DictBucket_Class, SMB_keysDo_, MC_SMB_keysDo_);
}


static void init_SMB_removeAt_() {
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray6548 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6550 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6551 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6550);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6552 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_0_0, (Optr)PSend6551);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6553 = new_Send((Optr)VAR_index_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6554 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_AbstractBucket_bucketSize);
    // at:put:. 
    Send PSend6555 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6553, (Optr)PSend6554);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // -. 
    Send PSend6557 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_2_Const);
    Assign PAssign6556 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend6557);
    // +. 
    Send PSend6558 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend6559 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6558, (Optr)nil_Const);
    // +. 
    Send PSend6560 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    // at:put:. 
    Send PSend6561 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6560, (Optr)nil_Const);
    Array PThreadedCode6549 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6550, (Optr)&t_send1, (Optr)PSend6551, (Optr)&t_send2, (Optr)PSend6552, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6553, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_send1, (Optr)PSend6554, (Optr)&t_send2, (Optr)PSend6555, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6556, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6557, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6558, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend6559, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6560, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend6561, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6547 = new_Method_with(PArray6548, empty_Array, empty_Array, PThreadedCode6549, 6, PSend6552, PSend6555, PAssign6556, PSend6559, PSend6561, self);
    
    MethodClosure MC_SMB_removeAt_ = new_MethodClosure((Method)PMethod6547, DictBucket_Class);
    store_method(DictBucket_Class, SMB_removeAt_, MC_SMB_removeAt_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6563 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6566 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6568 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6569 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6568);
    Array PThreadedCode6567 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6568, (Optr)&t_send1, (Optr)PSend6569, (Optr)&t_method_return);
    Block PBlock6565 = new_Block_with(PArray6566, empty_Array, PThreadedCode6567, 1, PSend6569);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend6570 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6565);
    Array PThreadedCode6564 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6565, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6570, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6562 = new_Method_with(PArray6563, empty_Array, empty_Array, PThreadedCode6564, 2, PSend6570, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod6562, DictBucket_Class);
    store_method(DictBucket_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6572 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6575 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6578 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6580 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6581 = new_Send((Optr)PSend6580, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6585 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6586 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6585);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6587 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6586);
    Array PThreadedCode6584 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6585, (Optr)&t_send1, (Optr)PSend6586, (Optr)&t_send1, (Optr)PSend6587, (Optr)&t_block_return);
    Block PBlock6583 = new_Block_with(empty_Array, empty_Array, PThreadedCode6584, 1, PSend6587);
    // ifTrue:. 
    Send PSend6582 = new_Send((Optr)PSend6581, SMB_ifTrue_, 1, (Optr)PBlock6583);
    Array PThreadedCode6579 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6580, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6581, (Optr)&t_send_ifTrue_, (Optr)PSend6582, (Optr)PBlock6583, (Optr)&t_method_return);
    Block PBlock6577 = new_Block_with(PArray6578, empty_Array, PThreadedCode6579, 1, PSend6582);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6588 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6577);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6589 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6576 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6577, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6588, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6589, (Optr)&t_method_return);
    Block PBlock6574 = new_Block_with(PArray6575, empty_Array, PThreadedCode6576, 2, PSend6588, PSend6589);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6590 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6574);
    Array PThreadedCode6573 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6574, (Optr)&t_send1, (Optr)PSend6590, (Optr)&t_method_return);
    Method PMethod6571 = new_Method_with(PArray6572, empty_Array, empty_Array, PThreadedCode6573, 1, PSend6590);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod6571, DictBucket_Class);
    store_method(DictBucket_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_keysAndValuesDo_() {
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6592 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6595 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6597 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6598 = new_Send((Optr)VAR_index_1_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6599 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6598);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend6600 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend6597, (Optr)PSend6599);
    Array PThreadedCode6596 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6597, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6598, (Optr)&t_send1, (Optr)PSend6599, (Optr)&t_send2, (Optr)PSend6600, (Optr)&t_method_return);
    Block PBlock6594 = new_Block_with(PArray6595, empty_Array, PThreadedCode6596, 1, PSend6600);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6601 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6594);
    Array PThreadedCode6593 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6594, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6601, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6591 = new_Method_with(PArray6592, empty_Array, empty_Array, PThreadedCode6593, 2, PSend6601, self);
    
    MethodClosure MC_SMB_keysAndValuesDo_ = new_MethodClosure((Method)PMethod6591, DictBucket_Class);
    store_method(DictBucket_Class, SMB_keysAndValuesDo_, MC_SMB_keysAndValuesDo_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6603 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6606 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6609 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6611 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6612 = new_Send((Optr)PSend6611, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6616 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6615 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6616, (Optr)&t_block_return);
    Block PBlock6614 = new_Block_with(empty_Array, empty_Array, PThreadedCode6615, 1, PSend6616);
    // ifTrue:. 
    Send PSend6613 = new_Send((Optr)PSend6612, SMB_ifTrue_, 1, (Optr)PBlock6614);
    Array PThreadedCode6610 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6611, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6612, (Optr)&t_send_ifTrue_, (Optr)PSend6613, (Optr)PBlock6614, (Optr)&t_method_return);
    Block PBlock6608 = new_Block_with(PArray6609, empty_Array, PThreadedCode6610, 1, PSend6613);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6617 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6608);
    Array PThreadedCode6607 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6608, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6617, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6605 = new_Block_with(PArray6606, empty_Array, PThreadedCode6607, 2, PSend6617, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6618 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6605);
    Array PThreadedCode6604 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6605, (Optr)&t_send1, (Optr)PSend6618, (Optr)&t_method_return);
    Method PMethod6602 = new_Method_with(PArray6603, empty_Array, empty_Array, PThreadedCode6604, 1, PSend6618);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PMethod6602, DictBucket_Class);
    store_method(DictBucket_Class, SMB_includesKey_, MC_SMB_includesKey_);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray6620 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend6622 = new_Send((Optr)VAR_sizeRequested_0_0, SMB__times_, 1, (Optr)int_2_Const);
    Super PSuper6623 = new_Super(SMB_new_, 1, (Optr)PSend6622);
    Array PThreadedCode6621 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6622, (Optr)&t_super1, (Optr)PSuper6623, (Optr)&t_method_return);
    Method PMethod6619 = new_Method_with(PArray6620, empty_Array, empty_Array, PThreadedCode6621, 1, PSuper6623);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod6619, HEADER(DictBucket_Class));
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