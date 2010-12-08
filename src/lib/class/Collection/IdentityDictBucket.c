#include <lib/class/Collection/IdentityDictBucket.h>


Optr layout_Collection_IdentityDictBucket_Class_class;
Optr layout_Collection_IdentityDictBucket;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6625 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray6626 = new_Array_with(1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6629 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6632 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6634 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6635 = new_Send((Optr)PSend6634, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6641 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6640 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6641);
    Assign PAssign6639 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend6640);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6642 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6643 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode6638 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign6639, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6641, (Optr)&t_send1, (Optr)PSend6640, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6642, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend6643, (Optr)&t_block_return);
    Block PBlock6637 = new_Block_with(empty_Array, empty_Array, PThreadedCode6638, 3, PAssign6639, PSend6642, PSend6643);
    // ifTrue:. 
    Send PSend6636 = new_Send((Optr)PSend6635, SMB_ifTrue_, 1, (Optr)PBlock6637);
    Array PThreadedCode6633 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6634, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6635, (Optr)&t_send_ifTrue_, (Optr)PSend6636, (Optr)PBlock6637, (Optr)&t_method_return);
    Block PBlock6631 = new_Block_with(PArray6632, empty_Array, PThreadedCode6633, 1, PSend6636);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6644 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6631);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6645 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6630 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6631, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6644, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6645, (Optr)&t_method_return);
    Block PBlock6628 = new_Block_with(PArray6629, empty_Array, PThreadedCode6630, 2, PSend6644, PSend6645);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6646 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6628);
    Array PThreadedCode6627 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6628, (Optr)&t_send1, (Optr)PSend6646, (Optr)&t_method_return);
    Method PMethod6624 = new_Method_with(PArray6625, PArray6626, empty_Array, PThreadedCode6627, 1, PSend6646);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod6624, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_assign_to_() {
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray6648 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6651 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6654 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6656 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6657 = new_Send((Optr)PSend6656, SMB__pequals_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6661 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6662 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6661, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6663 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6660 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6661, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend6662, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6663, (Optr)&t_block_return);
    Block PBlock6659 = new_Block_with(empty_Array, empty_Array, PThreadedCode6660, 2, PSend6662, PSend6663);
    // ifTrue:. 
    Send PSend6658 = new_Send((Optr)PSend6657, SMB_ifTrue_, 1, (Optr)PBlock6659);
    Array PThreadedCode6655 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6656, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend6657, (Optr)&t_send_ifTrue_, (Optr)PSend6658, (Optr)PBlock6659, (Optr)&t_method_return);
    Block PBlock6653 = new_Block_with(PArray6654, empty_Array, PThreadedCode6655, 1, PSend6658);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6664 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6653);
    Array PThreadedCode6652 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6653, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6664, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6650 = new_Block_with(PArray6651, empty_Array, PThreadedCode6652, 2, PSend6664, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6665 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6650);
    Array PThreadedCode6649 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6650, (Optr)&t_send1, (Optr)PSend6665, (Optr)&t_method_return);
    Method PMethod6647 = new_Method_with(PArray6648, empty_Array, empty_Array, PThreadedCode6649, 1, PSend6665);
    
    MethodClosure MC_SMB_assign_to_ = new_MethodClosure((Method)PMethod6647, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_assign_to_, MC_SMB_assign_to_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6667 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6670 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6673 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6675 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6676 = new_Send((Optr)PSend6675, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6680 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6681 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6680);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6682 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6681);
    Array PThreadedCode6679 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6680, (Optr)&t_send1, (Optr)PSend6681, (Optr)&t_send1, (Optr)PSend6682, (Optr)&t_block_return);
    Block PBlock6678 = new_Block_with(empty_Array, empty_Array, PThreadedCode6679, 1, PSend6682);
    // ifTrue:. 
    Send PSend6677 = new_Send((Optr)PSend6676, SMB_ifTrue_, 1, (Optr)PBlock6678);
    Array PThreadedCode6674 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6675, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6676, (Optr)&t_send_ifTrue_, (Optr)PSend6677, (Optr)PBlock6678, (Optr)&t_method_return);
    Block PBlock6672 = new_Block_with(PArray6673, empty_Array, PThreadedCode6674, 1, PSend6677);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6683 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6672);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6684 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6671 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6672, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6683, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6684, (Optr)&t_method_return);
    Block PBlock6669 = new_Block_with(PArray6670, empty_Array, PThreadedCode6671, 2, PSend6683, PSend6684);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6685 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6669);
    Array PThreadedCode6668 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6669, (Optr)&t_send1, (Optr)PSend6685, (Optr)&t_method_return);
    Method PMethod6666 = new_Method_with(PArray6667, empty_Array, empty_Array, PThreadedCode6668, 1, PSend6685);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod6666, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6687 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6690 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6693 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6695 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6696 = new_Send((Optr)PSend6695, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6700 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6699 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6700, (Optr)&t_block_return);
    Block PBlock6698 = new_Block_with(empty_Array, empty_Array, PThreadedCode6699, 1, PSend6700);
    // ifTrue:. 
    Send PSend6697 = new_Send((Optr)PSend6696, SMB_ifTrue_, 1, (Optr)PBlock6698);
    Array PThreadedCode6694 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6695, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6696, (Optr)&t_send_ifTrue_, (Optr)PSend6697, (Optr)PBlock6698, (Optr)&t_method_return);
    Block PBlock6692 = new_Block_with(PArray6693, empty_Array, PThreadedCode6694, 1, PSend6697);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6701 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6692);
    Array PThreadedCode6691 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6692, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6701, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6689 = new_Block_with(PArray6690, empty_Array, PThreadedCode6691, 2, PSend6701, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6702 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6689);
    Array PThreadedCode6688 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6689, (Optr)&t_send1, (Optr)PSend6702, (Optr)&t_method_return);
    Method PMethod6686 = new_Method_with(PArray6687, empty_Array, empty_Array, PThreadedCode6688, 1, PSend6702);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PMethod6686, Collection_IdentityDictBucket_Class);
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