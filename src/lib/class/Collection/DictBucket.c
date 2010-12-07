#include <lib/class/Collection/DictBucket.h>


Optr layout_Collection_DictBucket_Class_class;
Optr layout_Collection_DictBucket;


static void init_SMB_newKey_value_() {
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray6452 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6454 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6455 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6454, (Optr)VAR_aKey_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend6456 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    // at:put:. 
    Send PSend6457 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6456, (Optr)VAR_anObject_0_1);
    // +. 
    Send PSend6459 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign6458 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend6459);
    Array PThreadedCode6453 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6454, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send2, (Optr)PSend6455, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6456, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend6457, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6458, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6459, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6451 = new_Method_with(PArray6452, empty_Array, empty_Array, PThreadedCode6453, 4, PSend6455, PSend6457, PAssign6458, self);
    
    MethodClosure MC_SMB_newKey_value_ = new_MethodClosure((Method)PMethod6451, DictBucket_Class);
    store_method(DictBucket_Class, SMB_newKey_value_, MC_SMB_newKey_value_);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6461 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray6462 = new_Array_with(1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6465 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6468 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6470 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6471 = new_Send((Optr)PSend6470, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6477 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6476 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6477);
    Assign PAssign6475 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend6476);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6478 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6479 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode6474 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign6475, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6477, (Optr)&t_send1, (Optr)PSend6476, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6478, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend6479, (Optr)&t_block_return);
    Block PBlock6473 = new_Block_with(empty_Array, empty_Array, PThreadedCode6474, 3, PAssign6475, PSend6478, PSend6479);
    // ifTrue:. 
    Send PSend6472 = new_Send((Optr)PSend6471, SMB_ifTrue_, 1, (Optr)PBlock6473);
    Array PThreadedCode6469 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6470, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6471, (Optr)&t_send_ifTrue_, (Optr)PSend6472, (Optr)PBlock6473, (Optr)&t_method_return);
    Block PBlock6467 = new_Block_with(PArray6468, empty_Array, PThreadedCode6469, 1, PSend6472);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6480 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6467);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6481 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6466 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6467, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6480, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6481, (Optr)&t_method_return);
    Block PBlock6464 = new_Block_with(PArray6465, empty_Array, PThreadedCode6466, 2, PSend6480, PSend6481);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6482 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6464);
    Array PThreadedCode6463 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6464, (Optr)&t_send1, (Optr)PSend6482, (Optr)&t_method_return);
    Method PMethod6460 = new_Method_with(PArray6461, PArray6462, empty_Array, PThreadedCode6463, 1, PSend6482);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod6460, DictBucket_Class);
    store_method(DictBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_assign_to_() {
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray6484 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6487 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6490 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6492 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6493 = new_Send((Optr)PSend6492, SMB__equals_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6497 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6498 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6497, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6499 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6496 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6497, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend6498, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6499, (Optr)&t_block_return);
    Block PBlock6495 = new_Block_with(empty_Array, empty_Array, PThreadedCode6496, 2, PSend6498, PSend6499);
    // ifTrue:. 
    Send PSend6494 = new_Send((Optr)PSend6493, SMB_ifTrue_, 1, (Optr)PBlock6495);
    Array PThreadedCode6491 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6492, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend6493, (Optr)&t_send_ifTrue_, (Optr)PSend6494, (Optr)PBlock6495, (Optr)&t_method_return);
    Block PBlock6489 = new_Block_with(PArray6490, empty_Array, PThreadedCode6491, 1, PSend6494);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6500 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6489);
    Array PThreadedCode6488 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6489, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6500, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6486 = new_Block_with(PArray6487, empty_Array, PThreadedCode6488, 2, PSend6500, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6501 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6486);
    Array PThreadedCode6485 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6486, (Optr)&t_send1, (Optr)PSend6501, (Optr)&t_method_return);
    Method PMethod6483 = new_Method_with(PArray6484, empty_Array, empty_Array, PThreadedCode6485, 1, PSend6501);
    
    MethodClosure MC_SMB_assign_to_ = new_MethodClosure((Method)PMethod6483, DictBucket_Class);
    store_method(DictBucket_Class, SMB_assign_to_, MC_SMB_assign_to_);
}


static void init_SMB_scanFor_() {
    Symbol SMB_scanFor_ = new_Symbol(L"scanFor:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6503 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6506 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6509 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6511 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6512 = new_Send((Optr)PSend6511, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6516 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_index_2_0);
    Array PThreadedCode6515 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6516, (Optr)&t_block_return);
    Block PBlock6514 = new_Block_with(empty_Array, empty_Array, PThreadedCode6515, 1, PSend6516);
    // ifTrue:. 
    Send PSend6513 = new_Send((Optr)PSend6512, SMB_ifTrue_, 1, (Optr)PBlock6514);
    Array PThreadedCode6510 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6511, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6512, (Optr)&t_send_ifTrue_, (Optr)PSend6513, (Optr)PBlock6514, (Optr)&t_method_return);
    Block PBlock6508 = new_Block_with(PArray6509, empty_Array, PThreadedCode6510, 1, PSend6513);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6517 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6508);
    Array PThreadedCode6507 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6508, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6517, (Optr)&t_zap, (Optr)&t_method_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock6505 = new_Block_with(PArray6506, empty_Array, PThreadedCode6507, 2, PSend6517, int_0_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6518 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6505);
    Array PThreadedCode6504 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6505, (Optr)&t_send1, (Optr)PSend6518, (Optr)&t_method_return);
    Method PMethod6502 = new_Method_with(PArray6503, empty_Array, empty_Array, PThreadedCode6504, 1, PSend6518);
    
    MethodClosure MC_SMB_scanFor_ = new_MethodClosure((Method)PMethod6502, DictBucket_Class);
    store_method(DictBucket_Class, SMB_scanFor_, MC_SMB_scanFor_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6520 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6523 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6526 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6528 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6529 = new_Send((Optr)PSend6528, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6533 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6532 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6533, (Optr)&t_block_return);
    Block PBlock6531 = new_Block_with(empty_Array, empty_Array, PThreadedCode6532, 1, PSend6533);
    // ifTrue:. 
    Send PSend6530 = new_Send((Optr)PSend6529, SMB_ifTrue_, 1, (Optr)PBlock6531);
    Array PThreadedCode6527 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6528, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend6529, (Optr)&t_send_ifTrue_, (Optr)PSend6530, (Optr)PBlock6531, (Optr)&t_method_return);
    Block PBlock6525 = new_Block_with(PArray6526, empty_Array, PThreadedCode6527, 1, PSend6530);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend6534 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6525);
    Array PThreadedCode6524 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6525, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6534, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6522 = new_Block_with(PArray6523, empty_Array, PThreadedCode6524, 2, PSend6534, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6535 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6522);
    Array PThreadedCode6521 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6522, (Optr)&t_send1, (Optr)PSend6535, (Optr)&t_method_return);
    Method PMethod6519 = new_Method_with(PArray6520, empty_Array, empty_Array, PThreadedCode6521, 1, PSend6535);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod6519, DictBucket_Class);
    store_method(DictBucket_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_keysDo_() {
    Symbol SMB_keysDo_ = new_Symbol(L"keysDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6537 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6540 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6542 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6543 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6542);
    Array PThreadedCode6541 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6542, (Optr)&t_send1, (Optr)PSend6543, (Optr)&t_method_return);
    Block PBlock6539 = new_Block_with(PArray6540, empty_Array, PThreadedCode6541, 1, PSend6543);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6544 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6539);
    Array PThreadedCode6538 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6539, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6544, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6536 = new_Method_with(PArray6537, empty_Array, empty_Array, PThreadedCode6538, 2, PSend6544, self);
    
    MethodClosure MC_SMB_keysDo_ = new_MethodClosure((Method)PMethod6536, DictBucket_Class);
    store_method(DictBucket_Class, SMB_keysDo_, MC_SMB_keysDo_);
}


static void init_SMB_removeAt_() {
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray6546 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6548 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6549 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6548);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6550 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_0_0, (Optr)PSend6549);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6551 = new_Send((Optr)VAR_index_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6552 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_AbstractBucket_bucketSize);
    // at:put:. 
    Send PSend6553 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6551, (Optr)PSend6552);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // -. 
    Send PSend6555 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_2_Const);
    Assign PAssign6554 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend6555);
    // +. 
    Send PSend6556 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend6557 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6556, (Optr)nil_Const);
    // +. 
    Send PSend6558 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_2_Const);
    // at:put:. 
    Send PSend6559 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6558, (Optr)nil_Const);
    Array PThreadedCode6547 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6548, (Optr)&t_send1, (Optr)PSend6549, (Optr)&t_send2, (Optr)PSend6550, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6551, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_send1, (Optr)PSend6552, (Optr)&t_send2, (Optr)PSend6553, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6554, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6555, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6556, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend6557, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6558, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend6559, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6545 = new_Method_with(PArray6546, empty_Array, empty_Array, PThreadedCode6547, 6, PSend6550, PSend6553, PAssign6554, PSend6557, PSend6559, self);
    
    MethodClosure MC_SMB_removeAt_ = new_MethodClosure((Method)PMethod6545, DictBucket_Class);
    store_method(DictBucket_Class, SMB_removeAt_, MC_SMB_removeAt_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6561 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6564 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6566 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6567 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6566);
    Array PThreadedCode6565 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6566, (Optr)&t_send1, (Optr)PSend6567, (Optr)&t_method_return);
    Block PBlock6563 = new_Block_with(PArray6564, empty_Array, PThreadedCode6565, 1, PSend6567);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend6568 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6563);
    Array PThreadedCode6562 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_2, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6563, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6568, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6560 = new_Method_with(PArray6561, empty_Array, empty_Array, PThreadedCode6562, 2, PSend6568, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod6560, DictBucket_Class);
    store_method(DictBucket_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6570 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6573 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6576 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6578 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6579 = new_Send((Optr)PSend6578, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6583 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6584 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6583);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6585 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6584);
    Array PThreadedCode6582 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6583, (Optr)&t_send1, (Optr)PSend6584, (Optr)&t_send1, (Optr)PSend6585, (Optr)&t_block_return);
    Block PBlock6581 = new_Block_with(empty_Array, empty_Array, PThreadedCode6582, 1, PSend6585);
    // ifTrue:. 
    Send PSend6580 = new_Send((Optr)PSend6579, SMB_ifTrue_, 1, (Optr)PBlock6581);
    Array PThreadedCode6577 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6578, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6579, (Optr)&t_send_ifTrue_, (Optr)PSend6580, (Optr)PBlock6581, (Optr)&t_method_return);
    Block PBlock6575 = new_Block_with(PArray6576, empty_Array, PThreadedCode6577, 1, PSend6580);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6586 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6575);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6587 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6574 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6575, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6586, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6587, (Optr)&t_method_return);
    Block PBlock6572 = new_Block_with(PArray6573, empty_Array, PThreadedCode6574, 2, PSend6586, PSend6587);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6588 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6572);
    Array PThreadedCode6571 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6572, (Optr)&t_send1, (Optr)PSend6588, (Optr)&t_method_return);
    Method PMethod6569 = new_Method_with(PArray6570, empty_Array, empty_Array, PThreadedCode6571, 1, PSend6588);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod6569, DictBucket_Class);
    store_method(DictBucket_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_keysAndValuesDo_() {
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6590 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6593 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6595 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6596 = new_Send((Optr)VAR_index_1_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6597 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6596);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend6598 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend6595, (Optr)PSend6597);
    Array PThreadedCode6594 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6595, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6596, (Optr)&t_send1, (Optr)PSend6597, (Optr)&t_send2, (Optr)PSend6598, (Optr)&t_method_return);
    Block PBlock6592 = new_Block_with(PArray6593, empty_Array, PThreadedCode6594, 1, PSend6598);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6599 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6592);
    Array PThreadedCode6591 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6592, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6599, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6589 = new_Method_with(PArray6590, empty_Array, empty_Array, PThreadedCode6591, 2, PSend6599, self);
    
    MethodClosure MC_SMB_keysAndValuesDo_ = new_MethodClosure((Method)PMethod6589, DictBucket_Class);
    store_method(DictBucket_Class, SMB_keysAndValuesDo_, MC_SMB_keysAndValuesDo_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6601 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6604 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6607 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6609 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6610 = new_Send((Optr)PSend6609, SMB__equals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6614 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6613 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6614, (Optr)&t_block_return);
    Block PBlock6612 = new_Block_with(empty_Array, empty_Array, PThreadedCode6613, 1, PSend6614);
    // ifTrue:. 
    Send PSend6611 = new_Send((Optr)PSend6610, SMB_ifTrue_, 1, (Optr)PBlock6612);
    Array PThreadedCode6608 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6609, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6610, (Optr)&t_send_ifTrue_, (Optr)PSend6611, (Optr)PBlock6612, (Optr)&t_method_return);
    Block PBlock6606 = new_Block_with(PArray6607, empty_Array, PThreadedCode6608, 1, PSend6611);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6615 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6606);
    Array PThreadedCode6605 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6606, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6615, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6603 = new_Block_with(PArray6604, empty_Array, PThreadedCode6605, 2, PSend6615, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6616 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6603);
    Array PThreadedCode6602 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6603, (Optr)&t_send1, (Optr)PSend6616, (Optr)&t_method_return);
    Method PMethod6600 = new_Method_with(PArray6601, empty_Array, empty_Array, PThreadedCode6602, 1, PSend6616);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PMethod6600, DictBucket_Class);
    store_method(DictBucket_Class, SMB_includesKey_, MC_SMB_includesKey_);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray6618 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend6620 = new_Send((Optr)VAR_sizeRequested_0_0, SMB__times_, 1, (Optr)int_2_Const);
    Super PSuper6621 = new_Super(SMB_new_, 1, (Optr)PSend6620);
    Array PThreadedCode6619 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6620, (Optr)&t_super1, (Optr)PSuper6621, (Optr)&t_method_return);
    Method PMethod6617 = new_Method_with(PArray6618, empty_Array, empty_Array, PThreadedCode6619, 1, PSuper6621);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod6617, HEADER(DictBucket_Class));
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