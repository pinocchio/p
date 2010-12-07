#include <lib/class/Collection/IdentityDictBucket.h>


Optr layout_Collection_IdentityDictBucket_Class_class;
Optr layout_Collection_IdentityDictBucket;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6623 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray6624 = new_Array_with(1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6627 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6630 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6632 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6633 = new_Send((Optr)PSend6632, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6639 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6638 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6639);
    Assign PAssign6637 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend6638);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6640 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6641 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode6636 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign6637, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6639, (Optr)&t_send1, (Optr)PSend6638, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6640, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend6641, (Optr)&t_block_return);
    Block PBlock6635 = new_Block_with(empty_Array, empty_Array, PThreadedCode6636, 3, PAssign6637, PSend6640, PSend6641);
    // ifTrue:. 
    Send PSend6634 = new_Send((Optr)PSend6633, SMB_ifTrue_, 1, (Optr)PBlock6635);
    Array PThreadedCode6631 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6632, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6633, (Optr)&t_send_ifTrue_, (Optr)PSend6634, (Optr)PBlock6635, (Optr)&t_method_return);
    Block PBlock6629 = new_Block_with(PArray6630, empty_Array, PThreadedCode6631, 1, PSend6634);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6642 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6629);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6643 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6628 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6629, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6642, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6643, (Optr)&t_method_return);
    Block PBlock6626 = new_Block_with(PArray6627, empty_Array, PThreadedCode6628, 2, PSend6642, PSend6643);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6644 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6626);
    Array PThreadedCode6625 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6626, (Optr)&t_send1, (Optr)PSend6644, (Optr)&t_method_return);
    Method PMethod6622 = new_Method_with(PArray6623, PArray6624, empty_Array, PThreadedCode6625, 1, PSend6644);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod6622, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_assign_to_() {
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray6646 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6649 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6652 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6654 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6655 = new_Send((Optr)PSend6654, SMB__pequals_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6659 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6660 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6659, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6661 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6658 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6659, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend6660, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6661, (Optr)&t_block_return);
    Block PBlock6657 = new_Block_with(empty_Array, empty_Array, PThreadedCode6658, 2, PSend6660, PSend6661);
    // ifTrue:. 
    Send PSend6656 = new_Send((Optr)PSend6655, SMB_ifTrue_, 1, (Optr)PBlock6657);
    Array PThreadedCode6653 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6654, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend6655, (Optr)&t_send_ifTrue_, (Optr)PSend6656, (Optr)PBlock6657, (Optr)&t_method_return);
    Block PBlock6651 = new_Block_with(PArray6652, empty_Array, PThreadedCode6653, 1, PSend6656);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6662 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6651);
    Array PThreadedCode6650 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6651, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6662, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6648 = new_Block_with(PArray6649, empty_Array, PThreadedCode6650, 2, PSend6662, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6663 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6648);
    Array PThreadedCode6647 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6648, (Optr)&t_send1, (Optr)PSend6663, (Optr)&t_method_return);
    Method PMethod6645 = new_Method_with(PArray6646, empty_Array, empty_Array, PThreadedCode6647, 1, PSend6663);
    
    MethodClosure MC_SMB_assign_to_ = new_MethodClosure((Method)PMethod6645, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_assign_to_, MC_SMB_assign_to_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6665 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6668 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6671 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6673 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6674 = new_Send((Optr)PSend6673, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6678 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6679 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6678);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6680 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6679);
    Array PThreadedCode6677 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6678, (Optr)&t_send1, (Optr)PSend6679, (Optr)&t_send1, (Optr)PSend6680, (Optr)&t_block_return);
    Block PBlock6676 = new_Block_with(empty_Array, empty_Array, PThreadedCode6677, 1, PSend6680);
    // ifTrue:. 
    Send PSend6675 = new_Send((Optr)PSend6674, SMB_ifTrue_, 1, (Optr)PBlock6676);
    Array PThreadedCode6672 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6673, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6674, (Optr)&t_send_ifTrue_, (Optr)PSend6675, (Optr)PBlock6676, (Optr)&t_method_return);
    Block PBlock6670 = new_Block_with(PArray6671, empty_Array, PThreadedCode6672, 1, PSend6675);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6681 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6670);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6682 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6669 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6670, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6681, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6682, (Optr)&t_method_return);
    Block PBlock6667 = new_Block_with(PArray6668, empty_Array, PThreadedCode6669, 2, PSend6681, PSend6682);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6683 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6667);
    Array PThreadedCode6666 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6667, (Optr)&t_send1, (Optr)PSend6683, (Optr)&t_method_return);
    Method PMethod6664 = new_Method_with(PArray6665, empty_Array, empty_Array, PThreadedCode6666, 1, PSend6683);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod6664, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6685 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6688 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6691 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6693 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6694 = new_Send((Optr)PSend6693, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6698 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6697 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6698, (Optr)&t_block_return);
    Block PBlock6696 = new_Block_with(empty_Array, empty_Array, PThreadedCode6697, 1, PSend6698);
    // ifTrue:. 
    Send PSend6695 = new_Send((Optr)PSend6694, SMB_ifTrue_, 1, (Optr)PBlock6696);
    Array PThreadedCode6692 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6693, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6694, (Optr)&t_send_ifTrue_, (Optr)PSend6695, (Optr)PBlock6696, (Optr)&t_method_return);
    Block PBlock6690 = new_Block_with(PArray6691, empty_Array, PThreadedCode6692, 1, PSend6695);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6699 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6690);
    Array PThreadedCode6689 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6690, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6699, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6687 = new_Block_with(PArray6688, empty_Array, PThreadedCode6689, 2, PSend6699, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6700 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6687);
    Array PThreadedCode6686 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6687, (Optr)&t_send1, (Optr)PSend6700, (Optr)&t_method_return);
    Method PMethod6684 = new_Method_with(PArray6685, empty_Array, empty_Array, PThreadedCode6686, 1, PSend6700);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PMethod6684, Collection_IdentityDictBucket_Class);
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