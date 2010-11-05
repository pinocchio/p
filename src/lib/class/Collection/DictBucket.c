#include <lib/class/Collection/DictBucket.h>


Optr layout_Collection_DictBucket_Class_class;
Optr layout_Collection_DictBucket;


static void init_SMB_newKey_value_() {
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray6453 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6455 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6456 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6455, (Optr)VAR_aKey_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend6457 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    // at:put:. 
    Send PSend6458 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6457, (Optr)VAR_anObject_0_1);
    // +. 
    Send PSend6460 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign6459 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend6460);
    Array PThreadedCode6454 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6455, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send2, (Optr)PSend6456, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6457, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend6458, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6459, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6460, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6452 = new_Method_with(PArray6453, empty_Array, empty_Array, PThreadedCode6454, 4, PSend6456, PSend6458, PAssign6459, self);
    
    MethodClosure MC_SMB_newKey_value_ = new_MethodClosure((Method)PMethod6452, DictBucket_Class);
    store_method(DictBucket_Class, SMB_newKey_value_, MC_SMB_newKey_value_);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6462 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray6463 = new_Array_with(1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6466 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6469 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6471 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6472 = new_Send((Optr)PSend6471, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6478 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6477 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6478);
    Assign PAssign6476 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend6477);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6479 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6480 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode6475 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign6476, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6478, (Optr)&t_send1, (Optr)PSend6477, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6479, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend6480, (Optr)&t_block_return);
    Block PBlock6474 = new_Block_with(empty_Array, empty_Array, PThreadedCode6475, 3, PAssign6476, PSend6479, PSend6480);
    // ifTrue:. 
    Send PSend6473 = new_Send((Optr)PSend6472, SMB_ifTrue_, 1, (Optr)PBlock6474);
    Array PThreadedCode6470 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6471, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6472, (Optr)&t_send_ifTrue_, (Optr)PSend6473, (Optr)PBlock6474, (Optr)&t_method_return);
    Block PBlock6468 = new_Block_with(PArray6469, empty_Array, PThreadedCode6470, 1, PSend6473);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6481 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6468);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6482 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6467 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6468, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6481, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6482, (Optr)&t_method_return);
    Block PBlock6465 = new_Block_with(PArray6466, empty_Array, PThreadedCode6467, 2, PSend6481, PSend6482);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6483 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6465);
    Array PThreadedCode6464 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6465, (Optr)&t_send1, (Optr)PSend6483, (Optr)&t_method_return);
    Method PMethod6461 = new_Method_with(PArray6462, PArray6463, empty_Array, PThreadedCode6464, 1, PSend6483);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod6461, DictBucket_Class);
    store_method(DictBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_assign_to_() {
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray6485 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6488 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6491 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6493 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6494 = new_Send((Optr)PSend6493, SMB__equals_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6498 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6499 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6498, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6500 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6497 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6498, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend6499, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6500, (Optr)&t_block_return);
    Block PBlock6496 = new_Block_with(empty_Array, empty_Array, PThreadedCode6497, 2, PSend6499, PSend6500);
    // ifTrue:. 
    Send PSend6495 = new_Send((Optr)PSend6494, SMB_ifTrue_, 1, (Optr)PBlock6496);
    Array PThreadedCode6492 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6493, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend6494, (Optr)&t_send_ifTrue_, (Optr)PSend6495, (Optr)PBlock6496, (Optr)&t_method_return);
    Block PBlock6490 = new_Block_with(PArray6491, empty_Array, PThreadedCode6492, 1, PSend6495);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6501 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6490);
    Array PThreadedCode6489 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6490, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6501, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6487 = new_Block_with(PArray6488, empty_Array, PThreadedCode6489, 2, PSend6501, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6502 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6487);
    Array PThreadedCode6486 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6487, (Optr)&t_send1, (Optr)PSend6502, (Optr)&t_method_return);
    Method PMethod6484 = new_Method_with(PArray6485, empty_Array, empty_Array, PThreadedCode6486, 1, PSend6502);
    
    MethodClosure MC_SMB_assign_to_ = new_MethodClosure((Method)PMethod6484, DictBucket_Class);
    store_method(DictBucket_Class, SMB_assign_to_, MC_SMB_assign_to_);
}


static void init_SMB_scanFor_() {
    Symbol SMB_scanFor_ = new_Symbol(L"scanFor:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6504 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6507 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6510 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6512 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6513 = new_Send((Optr)PSend6512, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6517 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_index_2_0);
    Array PThreadedCode6516 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6517, (Optr)&t_block_return);
    Block PBlock6515 = new_Block_with(empty_Array, empty_Array, PThreadedCode6516, 1, PSend6517);
    // ifTrue:. 
    Send PSend6514 = new_Send((Optr)PSend6513, SMB_ifTrue_, 1, (Optr)PBlock6515);
    Array PThreadedCode6511 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6512, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6513, (Optr)&t_send_ifTrue_, (Optr)PSend6514, (Optr)PBlock6515, (Optr)&t_method_return);
    Block PBlock6509 = new_Block_with(PArray6510, empty_Array, PThreadedCode6511, 1, PSend6514);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6518 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6509);
    Array PThreadedCode6508 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6509, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6518, (Optr)&t_zap, (Optr)&t_method_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock6506 = new_Block_with(PArray6507, empty_Array, PThreadedCode6508, 2, PSend6518, int_0_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6519 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6506);
    Array PThreadedCode6505 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6506, (Optr)&t_send1, (Optr)PSend6519, (Optr)&t_method_return);
    Method PMethod6503 = new_Method_with(PArray6504, empty_Array, empty_Array, PThreadedCode6505, 1, PSend6519);
    
    MethodClosure MC_SMB_scanFor_ = new_MethodClosure((Method)PMethod6503, DictBucket_Class);
    store_method(DictBucket_Class, SMB_scanFor_, MC_SMB_scanFor_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6521 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6524 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6527 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6529 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6530 = new_Send((Optr)PSend6529, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6534 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6533 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6534, (Optr)&t_block_return);
    Block PBlock6532 = new_Block_with(empty_Array, empty_Array, PThreadedCode6533, 1, PSend6534);
    // ifTrue:. 
    Send PSend6531 = new_Send((Optr)PSend6530, SMB_ifTrue_, 1, (Optr)PBlock6532);
    Array PThreadedCode6528 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6529, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend6530, (Optr)&t_send_ifTrue_, (Optr)PSend6531, (Optr)PBlock6532, (Optr)&t_method_return);
    Block PBlock6526 = new_Block_with(PArray6527, empty_Array, PThreadedCode6528, 1, PSend6531);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend6535 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6526);
    Array PThreadedCode6525 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6526, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6535, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6523 = new_Block_with(PArray6524, empty_Array, PThreadedCode6525, 2, PSend6535, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6536 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6523);
    Array PThreadedCode6522 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6523, (Optr)&t_send1, (Optr)PSend6536, (Optr)&t_method_return);
    Method PMethod6520 = new_Method_with(PArray6521, empty_Array, empty_Array, PThreadedCode6522, 1, PSend6536);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod6520, DictBucket_Class);
    store_method(DictBucket_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_keysDo_() {
    Symbol SMB_keysDo_ = new_Symbol(L"keysDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6538 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6541 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6543 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6544 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6543);
    Array PThreadedCode6542 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6543, (Optr)&t_send1, (Optr)PSend6544, (Optr)&t_method_return);
    Block PBlock6540 = new_Block_with(PArray6541, empty_Array, PThreadedCode6542, 1, PSend6544);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6545 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6540);
    Array PThreadedCode6539 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6540, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6545, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6537 = new_Method_with(PArray6538, empty_Array, empty_Array, PThreadedCode6539, 2, PSend6545, self);
    
    MethodClosure MC_SMB_keysDo_ = new_MethodClosure((Method)PMethod6537, DictBucket_Class);
    store_method(DictBucket_Class, SMB_keysDo_, MC_SMB_keysDo_);
}


static void init_SMB_removeAt_() {
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray6547 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6549 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6550 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6549);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6551 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_0_0, (Optr)PSend6550);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6552 = new_Send((Optr)VAR_index_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6553 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_AbstractBucket_bucketSize);
    // at:put:. 
    Send PSend6554 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6552, (Optr)PSend6553);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // -. 
    Send PSend6556 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_2_Const);
    Assign PAssign6555 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend6556);
    // +. 
    Send PSend6557 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend6558 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6557, (Optr)nil_Const);
    // +. 
    Send PSend6559 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    // at:put:. 
    Send PSend6560 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6559, (Optr)nil_Const);
    Array PThreadedCode6548 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6549, (Optr)&t_send1, (Optr)PSend6550, (Optr)&t_send2, (Optr)PSend6551, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6552, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_send1, (Optr)PSend6553, (Optr)&t_send2, (Optr)PSend6554, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6555, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6556, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6557, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend6558, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6559, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend6560, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6546 = new_Method_with(PArray6547, empty_Array, empty_Array, PThreadedCode6548, 6, PSend6551, PSend6554, PAssign6555, PSend6558, PSend6560, self);
    
    MethodClosure MC_SMB_removeAt_ = new_MethodClosure((Method)PMethod6546, DictBucket_Class);
    store_method(DictBucket_Class, SMB_removeAt_, MC_SMB_removeAt_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6562 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6565 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6567 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6568 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6567);
    Array PThreadedCode6566 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6567, (Optr)&t_send1, (Optr)PSend6568, (Optr)&t_method_return);
    Block PBlock6564 = new_Block_with(PArray6565, empty_Array, PThreadedCode6566, 1, PSend6568);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend6569 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6564);
    Array PThreadedCode6563 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6564, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6569, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6561 = new_Method_with(PArray6562, empty_Array, empty_Array, PThreadedCode6563, 2, PSend6569, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod6561, DictBucket_Class);
    store_method(DictBucket_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6571 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6574 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6577 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6579 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6580 = new_Send((Optr)PSend6579, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6584 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6585 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6584);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6586 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6585);
    Array PThreadedCode6583 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6584, (Optr)&t_send1, (Optr)PSend6585, (Optr)&t_send1, (Optr)PSend6586, (Optr)&t_block_return);
    Block PBlock6582 = new_Block_with(empty_Array, empty_Array, PThreadedCode6583, 1, PSend6586);
    // ifTrue:. 
    Send PSend6581 = new_Send((Optr)PSend6580, SMB_ifTrue_, 1, (Optr)PBlock6582);
    Array PThreadedCode6578 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6579, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6580, (Optr)&t_send_ifTrue_, (Optr)PSend6581, (Optr)PBlock6582, (Optr)&t_method_return);
    Block PBlock6576 = new_Block_with(PArray6577, empty_Array, PThreadedCode6578, 1, PSend6581);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6587 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6576);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6588 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6575 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6576, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6587, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6588, (Optr)&t_method_return);
    Block PBlock6573 = new_Block_with(PArray6574, empty_Array, PThreadedCode6575, 2, PSend6587, PSend6588);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6589 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6573);
    Array PThreadedCode6572 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6573, (Optr)&t_send1, (Optr)PSend6589, (Optr)&t_method_return);
    Method PMethod6570 = new_Method_with(PArray6571, empty_Array, empty_Array, PThreadedCode6572, 1, PSend6589);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod6570, DictBucket_Class);
    store_method(DictBucket_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_keysAndValuesDo_() {
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6591 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6594 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6596 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6597 = new_Send((Optr)VAR_index_1_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6598 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6597);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend6599 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend6596, (Optr)PSend6598);
    Array PThreadedCode6595 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6596, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6597, (Optr)&t_send1, (Optr)PSend6598, (Optr)&t_send2, (Optr)PSend6599, (Optr)&t_method_return);
    Block PBlock6593 = new_Block_with(PArray6594, empty_Array, PThreadedCode6595, 1, PSend6599);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6600 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6593);
    Array PThreadedCode6592 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6593, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6600, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6590 = new_Method_with(PArray6591, empty_Array, empty_Array, PThreadedCode6592, 2, PSend6600, self);
    
    MethodClosure MC_SMB_keysAndValuesDo_ = new_MethodClosure((Method)PMethod6590, DictBucket_Class);
    store_method(DictBucket_Class, SMB_keysAndValuesDo_, MC_SMB_keysAndValuesDo_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6602 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6605 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6608 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6610 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6611 = new_Send((Optr)PSend6610, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6615 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6614 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6615, (Optr)&t_block_return);
    Block PBlock6613 = new_Block_with(empty_Array, empty_Array, PThreadedCode6614, 1, PSend6615);
    // ifTrue:. 
    Send PSend6612 = new_Send((Optr)PSend6611, SMB_ifTrue_, 1, (Optr)PBlock6613);
    Array PThreadedCode6609 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6610, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6611, (Optr)&t_send_ifTrue_, (Optr)PSend6612, (Optr)PBlock6613, (Optr)&t_method_return);
    Block PBlock6607 = new_Block_with(PArray6608, empty_Array, PThreadedCode6609, 1, PSend6612);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6616 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6607);
    Array PThreadedCode6606 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6607, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6616, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6604 = new_Block_with(PArray6605, empty_Array, PThreadedCode6606, 2, PSend6616, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6617 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6604);
    Array PThreadedCode6603 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6604, (Optr)&t_send1, (Optr)PSend6617, (Optr)&t_method_return);
    Method PMethod6601 = new_Method_with(PArray6602, empty_Array, empty_Array, PThreadedCode6603, 1, PSend6617);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PMethod6601, DictBucket_Class);
    store_method(DictBucket_Class, SMB_includesKey_, MC_SMB_includesKey_);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray6619 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend6621 = new_Send((Optr)VAR_sizeRequested_0_0, SMB__times_, 1, (Optr)int_2_Const);
    Super PSuper6622 = new_Super(SMB_new_, 1, (Optr)PSend6621);
    Array PThreadedCode6620 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6621, (Optr)&t_super1, (Optr)PSuper6622, (Optr)&t_method_return);
    Method PMethod6618 = new_Method_with(PArray6619, empty_Array, empty_Array, PThreadedCode6620, 1, PSuper6622);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod6618, HEADER(DictBucket_Class));
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