#include <lib/class/Collection/DictBucket.h>


Optr layout_Collection_DictBucket_Class_class;
Optr layout_Collection_DictBucket;


static void init_SMB_newKey_value_() {
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray6448 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6450 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6451 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6450, (Optr)VAR_aKey_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend6452 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    // at:put:. 
    Send PSend6453 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6452, (Optr)VAR_anObject_0_1);
    // +. 
    Send PSend6455 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign6454 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend6455);
    Array PThreadedCode6449 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6450, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send2, (Optr)PSend6451, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6452, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend6453, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6454, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6455, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6447 = new_Method_with(PArray6448, empty_Array, empty_Array, PThreadedCode6449, 4, PSend6451, PSend6453, PAssign6454, self);
    
    MethodClosure MC_SMB_newKey_value_ = new_MethodClosure((Method)PMethod6447, DictBucket_Class);
    store_method(DictBucket_Class, SMB_newKey_value_, MC_SMB_newKey_value_);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6457 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray6458 = new_Array_with(1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6461 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6464 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6466 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6467 = new_Send((Optr)PSend6466, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6473 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6472 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6473);
    Assign PAssign6471 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend6472);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6474 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6475 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode6470 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign6471, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6473, (Optr)&t_send1, (Optr)PSend6472, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6474, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend6475, (Optr)&t_block_return);
    Block PBlock6469 = new_Block_with(empty_Array, empty_Array, PThreadedCode6470, 3, PAssign6471, PSend6474, PSend6475);
    // ifTrue:. 
    Send PSend6468 = new_Send((Optr)PSend6467, SMB_ifTrue_, 1, (Optr)PBlock6469);
    Array PThreadedCode6465 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6466, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6467, (Optr)&t_send_ifTrue_, (Optr)PSend6468, (Optr)PBlock6469, (Optr)&t_method_return);
    Block PBlock6463 = new_Block_with(PArray6464, empty_Array, PThreadedCode6465, 1, PSend6468);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6476 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6463);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6477 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6462 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6463, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6476, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6477, (Optr)&t_method_return);
    Block PBlock6460 = new_Block_with(PArray6461, empty_Array, PThreadedCode6462, 2, PSend6476, PSend6477);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6478 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6460);
    Array PThreadedCode6459 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6460, (Optr)&t_send1, (Optr)PSend6478, (Optr)&t_method_return);
    Method PMethod6456 = new_Method_with(PArray6457, PArray6458, empty_Array, PThreadedCode6459, 1, PSend6478);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod6456, DictBucket_Class);
    store_method(DictBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_assign_to_() {
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray6480 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6483 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6486 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6488 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6489 = new_Send((Optr)PSend6488, SMB__equals_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6493 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6494 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6493, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6495 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6492 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6493, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend6494, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6495, (Optr)&t_block_return);
    Block PBlock6491 = new_Block_with(empty_Array, empty_Array, PThreadedCode6492, 2, PSend6494, PSend6495);
    // ifTrue:. 
    Send PSend6490 = new_Send((Optr)PSend6489, SMB_ifTrue_, 1, (Optr)PBlock6491);
    Array PThreadedCode6487 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6488, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend6489, (Optr)&t_send_ifTrue_, (Optr)PSend6490, (Optr)PBlock6491, (Optr)&t_method_return);
    Block PBlock6485 = new_Block_with(PArray6486, empty_Array, PThreadedCode6487, 1, PSend6490);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6496 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6485);
    Array PThreadedCode6484 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6485, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6496, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6482 = new_Block_with(PArray6483, empty_Array, PThreadedCode6484, 2, PSend6496, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6497 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6482);
    Array PThreadedCode6481 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6482, (Optr)&t_send1, (Optr)PSend6497, (Optr)&t_method_return);
    Method PMethod6479 = new_Method_with(PArray6480, empty_Array, empty_Array, PThreadedCode6481, 1, PSend6497);
    
    MethodClosure MC_SMB_assign_to_ = new_MethodClosure((Method)PMethod6479, DictBucket_Class);
    store_method(DictBucket_Class, SMB_assign_to_, MC_SMB_assign_to_);
}


static void init_SMB_scanFor_() {
    Symbol SMB_scanFor_ = new_Symbol(L"scanFor:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6499 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6502 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6505 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6507 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6508 = new_Send((Optr)PSend6507, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6512 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_index_2_0);
    Array PThreadedCode6511 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6512, (Optr)&t_block_return);
    Block PBlock6510 = new_Block_with(empty_Array, empty_Array, PThreadedCode6511, 1, PSend6512);
    // ifTrue:. 
    Send PSend6509 = new_Send((Optr)PSend6508, SMB_ifTrue_, 1, (Optr)PBlock6510);
    Array PThreadedCode6506 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6507, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6508, (Optr)&t_send_ifTrue_, (Optr)PSend6509, (Optr)PBlock6510, (Optr)&t_method_return);
    Block PBlock6504 = new_Block_with(PArray6505, empty_Array, PThreadedCode6506, 1, PSend6509);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6513 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6504);
    Array PThreadedCode6503 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6504, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6513, (Optr)&t_zap, (Optr)&t_method_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock6501 = new_Block_with(PArray6502, empty_Array, PThreadedCode6503, 2, PSend6513, int_0_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6514 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6501);
    Array PThreadedCode6500 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6501, (Optr)&t_send1, (Optr)PSend6514, (Optr)&t_method_return);
    Method PMethod6498 = new_Method_with(PArray6499, empty_Array, empty_Array, PThreadedCode6500, 1, PSend6514);
    
    MethodClosure MC_SMB_scanFor_ = new_MethodClosure((Method)PMethod6498, DictBucket_Class);
    store_method(DictBucket_Class, SMB_scanFor_, MC_SMB_scanFor_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6516 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6519 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6522 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6524 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6525 = new_Send((Optr)PSend6524, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6529 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6528 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6529, (Optr)&t_block_return);
    Block PBlock6527 = new_Block_with(empty_Array, empty_Array, PThreadedCode6528, 1, PSend6529);
    // ifTrue:. 
    Send PSend6526 = new_Send((Optr)PSend6525, SMB_ifTrue_, 1, (Optr)PBlock6527);
    Array PThreadedCode6523 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6524, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend6525, (Optr)&t_send_ifTrue_, (Optr)PSend6526, (Optr)PBlock6527, (Optr)&t_method_return);
    Block PBlock6521 = new_Block_with(PArray6522, empty_Array, PThreadedCode6523, 1, PSend6526);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend6530 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6521);
    Array PThreadedCode6520 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6521, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6530, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6518 = new_Block_with(PArray6519, empty_Array, PThreadedCode6520, 2, PSend6530, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6531 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6518);
    Array PThreadedCode6517 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6518, (Optr)&t_send1, (Optr)PSend6531, (Optr)&t_method_return);
    Method PMethod6515 = new_Method_with(PArray6516, empty_Array, empty_Array, PThreadedCode6517, 1, PSend6531);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod6515, DictBucket_Class);
    store_method(DictBucket_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_keysDo_() {
    Symbol SMB_keysDo_ = new_Symbol(L"keysDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6533 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6536 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6538 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6539 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6538);
    Array PThreadedCode6537 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6538, (Optr)&t_send1, (Optr)PSend6539, (Optr)&t_method_return);
    Block PBlock6535 = new_Block_with(PArray6536, empty_Array, PThreadedCode6537, 1, PSend6539);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6540 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6535);
    Array PThreadedCode6534 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6535, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6540, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6532 = new_Method_with(PArray6533, empty_Array, empty_Array, PThreadedCode6534, 2, PSend6540, self);
    
    MethodClosure MC_SMB_keysDo_ = new_MethodClosure((Method)PMethod6532, DictBucket_Class);
    store_method(DictBucket_Class, SMB_keysDo_, MC_SMB_keysDo_);
}


static void init_SMB_removeAt_() {
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray6542 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6544 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6545 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6544);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6546 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_0_0, (Optr)PSend6545);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6547 = new_Send((Optr)VAR_index_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6548 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_AbstractBucket_bucketSize);
    // at:put:. 
    Send PSend6549 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6547, (Optr)PSend6548);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // -. 
    Send PSend6551 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_2_Const);
    Assign PAssign6550 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend6551);
    // +. 
    Send PSend6552 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend6553 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6552, (Optr)nil_Const);
    // +. 
    Send PSend6554 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    // at:put:. 
    Send PSend6555 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6554, (Optr)nil_Const);
    Array PThreadedCode6543 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6544, (Optr)&t_send1, (Optr)PSend6545, (Optr)&t_send2, (Optr)PSend6546, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6547, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_send1, (Optr)PSend6548, (Optr)&t_send2, (Optr)PSend6549, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6550, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6551, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6552, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend6553, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6554, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend6555, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6541 = new_Method_with(PArray6542, empty_Array, empty_Array, PThreadedCode6543, 6, PSend6546, PSend6549, PAssign6550, PSend6553, PSend6555, self);
    
    MethodClosure MC_SMB_removeAt_ = new_MethodClosure((Method)PMethod6541, DictBucket_Class);
    store_method(DictBucket_Class, SMB_removeAt_, MC_SMB_removeAt_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6557 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6560 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6562 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6563 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6562);
    Array PThreadedCode6561 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6562, (Optr)&t_send1, (Optr)PSend6563, (Optr)&t_method_return);
    Block PBlock6559 = new_Block_with(PArray6560, empty_Array, PThreadedCode6561, 1, PSend6563);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend6564 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6559);
    Array PThreadedCode6558 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6559, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6564, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6556 = new_Method_with(PArray6557, empty_Array, empty_Array, PThreadedCode6558, 2, PSend6564, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod6556, DictBucket_Class);
    store_method(DictBucket_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6566 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6569 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6572 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6574 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6575 = new_Send((Optr)PSend6574, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6579 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6580 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6579);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6581 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6580);
    Array PThreadedCode6578 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6579, (Optr)&t_send1, (Optr)PSend6580, (Optr)&t_send1, (Optr)PSend6581, (Optr)&t_block_return);
    Block PBlock6577 = new_Block_with(empty_Array, empty_Array, PThreadedCode6578, 1, PSend6581);
    // ifTrue:. 
    Send PSend6576 = new_Send((Optr)PSend6575, SMB_ifTrue_, 1, (Optr)PBlock6577);
    Array PThreadedCode6573 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6574, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6575, (Optr)&t_send_ifTrue_, (Optr)PSend6576, (Optr)PBlock6577, (Optr)&t_method_return);
    Block PBlock6571 = new_Block_with(PArray6572, empty_Array, PThreadedCode6573, 1, PSend6576);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6582 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6571);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6583 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6570 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6571, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6582, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6583, (Optr)&t_method_return);
    Block PBlock6568 = new_Block_with(PArray6569, empty_Array, PThreadedCode6570, 2, PSend6582, PSend6583);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6584 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6568);
    Array PThreadedCode6567 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6568, (Optr)&t_send1, (Optr)PSend6584, (Optr)&t_method_return);
    Method PMethod6565 = new_Method_with(PArray6566, empty_Array, empty_Array, PThreadedCode6567, 1, PSend6584);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod6565, DictBucket_Class);
    store_method(DictBucket_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_keysAndValuesDo_() {
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6586 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6589 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6591 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6592 = new_Send((Optr)VAR_index_1_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6593 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6592);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend6594 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend6591, (Optr)PSend6593);
    Array PThreadedCode6590 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6591, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6592, (Optr)&t_send1, (Optr)PSend6593, (Optr)&t_send2, (Optr)PSend6594, (Optr)&t_method_return);
    Block PBlock6588 = new_Block_with(PArray6589, empty_Array, PThreadedCode6590, 1, PSend6594);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6595 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6588);
    Array PThreadedCode6587 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6588, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6595, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6585 = new_Method_with(PArray6586, empty_Array, empty_Array, PThreadedCode6587, 2, PSend6595, self);
    
    MethodClosure MC_SMB_keysAndValuesDo_ = new_MethodClosure((Method)PMethod6585, DictBucket_Class);
    store_method(DictBucket_Class, SMB_keysAndValuesDo_, MC_SMB_keysAndValuesDo_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6597 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6600 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6603 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6605 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6606 = new_Send((Optr)PSend6605, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6610 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6609 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6610, (Optr)&t_block_return);
    Block PBlock6608 = new_Block_with(empty_Array, empty_Array, PThreadedCode6609, 1, PSend6610);
    // ifTrue:. 
    Send PSend6607 = new_Send((Optr)PSend6606, SMB_ifTrue_, 1, (Optr)PBlock6608);
    Array PThreadedCode6604 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6605, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6606, (Optr)&t_send_ifTrue_, (Optr)PSend6607, (Optr)PBlock6608, (Optr)&t_method_return);
    Block PBlock6602 = new_Block_with(PArray6603, empty_Array, PThreadedCode6604, 1, PSend6607);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6611 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6602);
    Array PThreadedCode6601 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6602, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6611, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6599 = new_Block_with(PArray6600, empty_Array, PThreadedCode6601, 2, PSend6611, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6612 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6599);
    Array PThreadedCode6598 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6599, (Optr)&t_send1, (Optr)PSend6612, (Optr)&t_method_return);
    Method PMethod6596 = new_Method_with(PArray6597, empty_Array, empty_Array, PThreadedCode6598, 1, PSend6612);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PMethod6596, DictBucket_Class);
    store_method(DictBucket_Class, SMB_includesKey_, MC_SMB_includesKey_);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray6614 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend6616 = new_Send((Optr)VAR_sizeRequested_0_0, SMB__times_, 1, (Optr)int_2_Const);
    Super PSuper6617 = new_Super(SMB_new_, 1, (Optr)PSend6616);
    Array PThreadedCode6615 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6616, (Optr)&t_super1, (Optr)PSuper6617, (Optr)&t_method_return);
    Method PMethod6613 = new_Method_with(PArray6614, empty_Array, empty_Array, PThreadedCode6615, 1, PSuper6617);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod6613, HEADER(DictBucket_Class));
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