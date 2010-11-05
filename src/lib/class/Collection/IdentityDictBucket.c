#include <lib/class/Collection/IdentityDictBucket.h>


Optr layout_Collection_IdentityDictBucket_Class_class;
Optr layout_Collection_IdentityDictBucket;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6624 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray6625 = new_Array_with(1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6628 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6631 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6633 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6634 = new_Send((Optr)PSend6633, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6640 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6639 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6640);
    Assign PAssign6638 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend6639);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6641 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6642 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode6637 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign6638, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6640, (Optr)&t_send1, (Optr)PSend6639, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6641, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend6642, (Optr)&t_block_return);
    Block PBlock6636 = new_Block_with(empty_Array, empty_Array, PThreadedCode6637, 3, PAssign6638, PSend6641, PSend6642);
    // ifTrue:. 
    Send PSend6635 = new_Send((Optr)PSend6634, SMB_ifTrue_, 1, (Optr)PBlock6636);
    Array PThreadedCode6632 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6633, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6634, (Optr)&t_send_ifTrue_, (Optr)PSend6635, (Optr)PBlock6636, (Optr)&t_method_return);
    Block PBlock6630 = new_Block_with(PArray6631, empty_Array, PThreadedCode6632, 1, PSend6635);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6643 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6630);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6644 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6629 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6630, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6643, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6644, (Optr)&t_method_return);
    Block PBlock6627 = new_Block_with(PArray6628, empty_Array, PThreadedCode6629, 2, PSend6643, PSend6644);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6645 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6627);
    Array PThreadedCode6626 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6627, (Optr)&t_send1, (Optr)PSend6645, (Optr)&t_method_return);
    Method PMethod6623 = new_Method_with(PArray6624, PArray6625, empty_Array, PThreadedCode6626, 1, PSend6645);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod6623, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_assign_to_() {
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray6647 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6650 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6653 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6655 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6656 = new_Send((Optr)PSend6655, SMB__pequals_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6660 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6661 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6660, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6662 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6659 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6660, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend6661, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6662, (Optr)&t_block_return);
    Block PBlock6658 = new_Block_with(empty_Array, empty_Array, PThreadedCode6659, 2, PSend6661, PSend6662);
    // ifTrue:. 
    Send PSend6657 = new_Send((Optr)PSend6656, SMB_ifTrue_, 1, (Optr)PBlock6658);
    Array PThreadedCode6654 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6655, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend6656, (Optr)&t_send_ifTrue_, (Optr)PSend6657, (Optr)PBlock6658, (Optr)&t_method_return);
    Block PBlock6652 = new_Block_with(PArray6653, empty_Array, PThreadedCode6654, 1, PSend6657);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6663 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6652);
    Array PThreadedCode6651 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6652, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6663, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6649 = new_Block_with(PArray6650, empty_Array, PThreadedCode6651, 2, PSend6663, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6664 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6649);
    Array PThreadedCode6648 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6649, (Optr)&t_send1, (Optr)PSend6664, (Optr)&t_method_return);
    Method PMethod6646 = new_Method_with(PArray6647, empty_Array, empty_Array, PThreadedCode6648, 1, PSend6664);
    
    MethodClosure MC_SMB_assign_to_ = new_MethodClosure((Method)PMethod6646, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_assign_to_, MC_SMB_assign_to_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6666 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6669 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6672 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6674 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6675 = new_Send((Optr)PSend6674, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6679 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6680 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6679);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6681 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6680);
    Array PThreadedCode6678 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6679, (Optr)&t_send1, (Optr)PSend6680, (Optr)&t_send1, (Optr)PSend6681, (Optr)&t_block_return);
    Block PBlock6677 = new_Block_with(empty_Array, empty_Array, PThreadedCode6678, 1, PSend6681);
    // ifTrue:. 
    Send PSend6676 = new_Send((Optr)PSend6675, SMB_ifTrue_, 1, (Optr)PBlock6677);
    Array PThreadedCode6673 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6674, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6675, (Optr)&t_send_ifTrue_, (Optr)PSend6676, (Optr)PBlock6677, (Optr)&t_method_return);
    Block PBlock6671 = new_Block_with(PArray6672, empty_Array, PThreadedCode6673, 1, PSend6676);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6682 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6671);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6683 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6670 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6671, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6682, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6683, (Optr)&t_method_return);
    Block PBlock6668 = new_Block_with(PArray6669, empty_Array, PThreadedCode6670, 2, PSend6682, PSend6683);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6684 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6668);
    Array PThreadedCode6667 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6668, (Optr)&t_send1, (Optr)PSend6684, (Optr)&t_method_return);
    Method PMethod6665 = new_Method_with(PArray6666, empty_Array, empty_Array, PThreadedCode6667, 1, PSend6684);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod6665, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6686 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6689 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6692 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6694 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6695 = new_Send((Optr)PSend6694, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6699 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6698 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6699, (Optr)&t_block_return);
    Block PBlock6697 = new_Block_with(empty_Array, empty_Array, PThreadedCode6698, 1, PSend6699);
    // ifTrue:. 
    Send PSend6696 = new_Send((Optr)PSend6695, SMB_ifTrue_, 1, (Optr)PBlock6697);
    Array PThreadedCode6693 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6694, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6695, (Optr)&t_send_ifTrue_, (Optr)PSend6696, (Optr)PBlock6697, (Optr)&t_method_return);
    Block PBlock6691 = new_Block_with(PArray6692, empty_Array, PThreadedCode6693, 1, PSend6696);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6700 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6691);
    Array PThreadedCode6690 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6691, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6700, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6688 = new_Block_with(PArray6689, empty_Array, PThreadedCode6690, 2, PSend6700, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6701 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6688);
    Array PThreadedCode6687 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6688, (Optr)&t_send1, (Optr)PSend6701, (Optr)&t_method_return);
    Method PMethod6685 = new_Method_with(PArray6686, empty_Array, empty_Array, PThreadedCode6687, 1, PSend6701);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PMethod6685, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_includesKey_, MC_SMB_includesKey_);
}

void init_Collection_PIdentityDictBucket_layout() {
    layout_Collection_IdentityDictBucket_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_IdentityDictBucket_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_IdentityDictBucket_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_IdentityDictBucket_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_IdentityDictBucket_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_IdentityDictBucket_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_IdentityDictBucket = new_Symbol(L"IdentityDictBucket");
    layout_Collection_IdentityDictBucket = (Optr)create_layout_with_vars(ArrayLayout_Class, 1);
    ((Array)layout_Collection_IdentityDictBucket)->values[0] = slot_Collection_AbstractBucket_bucketSize;
    Collection_IdentityDictBucket_Class = (Class)new_Class(DictBucket_Class, layout_Collection_IdentityDictBucket_Class_class);
    Collection_IdentityDictBucket_Class->layout = layout_Collection_IdentityDictBucket;
    Collection_IdentityDictBucket_Class->name = SMB_IdentityDictBucket;
    
}

void init_Collection_PIdentityDictBucket_methods() {
    init_SMB_remove_ifAbsent_();
    init_SMB_assign_to_();
    init_SMB_at_ifAbsent_();
    init_SMB_includesKey_();
    
}