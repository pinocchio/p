#include <lib/class/Collection/IdentityDictBucket.h>


Optr layout_Collection_IdentityDictBucket_Class_class;
Optr layout_Collection_IdentityDictBucket;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6619 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray6620 = new_Array_with(1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6623 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6626 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6628 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6629 = new_Send((Optr)PSend6628, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6635 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6634 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6635);
    Assign PAssign6633 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend6634);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6636 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6637 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode6632 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign6633, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6635, (Optr)&t_send1, (Optr)PSend6634, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6636, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend6637, (Optr)&t_block_return);
    Block PBlock6631 = new_Block_with(empty_Array, empty_Array, PThreadedCode6632, 3, PAssign6633, PSend6636, PSend6637);
    // ifTrue:. 
    Send PSend6630 = new_Send((Optr)PSend6629, SMB_ifTrue_, 1, (Optr)PBlock6631);
    Array PThreadedCode6627 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6628, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6629, (Optr)&t_send_ifTrue_, (Optr)PSend6630, (Optr)PBlock6631, (Optr)&t_method_return);
    Block PBlock6625 = new_Block_with(PArray6626, empty_Array, PThreadedCode6627, 1, PSend6630);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6638 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6625);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6639 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6624 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6625, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6638, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6639, (Optr)&t_method_return);
    Block PBlock6622 = new_Block_with(PArray6623, empty_Array, PThreadedCode6624, 2, PSend6638, PSend6639);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6640 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6622);
    Array PThreadedCode6621 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6622, (Optr)&t_send1, (Optr)PSend6640, (Optr)&t_method_return);
    Method PMethod6618 = new_Method_with(PArray6619, PArray6620, empty_Array, PThreadedCode6621, 1, PSend6640);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod6618, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_assign_to_() {
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray6642 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6645 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6648 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6650 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6651 = new_Send((Optr)PSend6650, SMB__pequals_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6655 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6656 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6655, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6657 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6654 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6655, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend6656, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6657, (Optr)&t_block_return);
    Block PBlock6653 = new_Block_with(empty_Array, empty_Array, PThreadedCode6654, 2, PSend6656, PSend6657);
    // ifTrue:. 
    Send PSend6652 = new_Send((Optr)PSend6651, SMB_ifTrue_, 1, (Optr)PBlock6653);
    Array PThreadedCode6649 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6650, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend6651, (Optr)&t_send_ifTrue_, (Optr)PSend6652, (Optr)PBlock6653, (Optr)&t_method_return);
    Block PBlock6647 = new_Block_with(PArray6648, empty_Array, PThreadedCode6649, 1, PSend6652);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6658 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6647);
    Array PThreadedCode6646 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6647, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6658, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6644 = new_Block_with(PArray6645, empty_Array, PThreadedCode6646, 2, PSend6658, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6659 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6644);
    Array PThreadedCode6643 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6644, (Optr)&t_send1, (Optr)PSend6659, (Optr)&t_method_return);
    Method PMethod6641 = new_Method_with(PArray6642, empty_Array, empty_Array, PThreadedCode6643, 1, PSend6659);
    
    MethodClosure MC_SMB_assign_to_ = new_MethodClosure((Method)PMethod6641, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_assign_to_, MC_SMB_assign_to_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6661 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6664 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6667 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6669 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6670 = new_Send((Optr)PSend6669, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6674 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6675 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6674);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6676 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6675);
    Array PThreadedCode6673 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6674, (Optr)&t_send1, (Optr)PSend6675, (Optr)&t_send1, (Optr)PSend6676, (Optr)&t_block_return);
    Block PBlock6672 = new_Block_with(empty_Array, empty_Array, PThreadedCode6673, 1, PSend6676);
    // ifTrue:. 
    Send PSend6671 = new_Send((Optr)PSend6670, SMB_ifTrue_, 1, (Optr)PBlock6672);
    Array PThreadedCode6668 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6669, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6670, (Optr)&t_send_ifTrue_, (Optr)PSend6671, (Optr)PBlock6672, (Optr)&t_method_return);
    Block PBlock6666 = new_Block_with(PArray6667, empty_Array, PThreadedCode6668, 1, PSend6671);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6677 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6666);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6678 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6665 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6666, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6677, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6678, (Optr)&t_method_return);
    Block PBlock6663 = new_Block_with(PArray6664, empty_Array, PThreadedCode6665, 2, PSend6677, PSend6678);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6679 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6663);
    Array PThreadedCode6662 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6663, (Optr)&t_send1, (Optr)PSend6679, (Optr)&t_method_return);
    Method PMethod6660 = new_Method_with(PArray6661, empty_Array, empty_Array, PThreadedCode6662, 1, PSend6679);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod6660, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6681 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6684 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6687 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6689 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6690 = new_Send((Optr)PSend6689, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6694 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6693 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6694, (Optr)&t_block_return);
    Block PBlock6692 = new_Block_with(empty_Array, empty_Array, PThreadedCode6693, 1, PSend6694);
    // ifTrue:. 
    Send PSend6691 = new_Send((Optr)PSend6690, SMB_ifTrue_, 1, (Optr)PBlock6692);
    Array PThreadedCode6688 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6689, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6690, (Optr)&t_send_ifTrue_, (Optr)PSend6691, (Optr)PBlock6692, (Optr)&t_method_return);
    Block PBlock6686 = new_Block_with(PArray6687, empty_Array, PThreadedCode6688, 1, PSend6691);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6695 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6686);
    Array PThreadedCode6685 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6686, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6695, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6683 = new_Block_with(PArray6684, empty_Array, PThreadedCode6685, 2, PSend6695, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6696 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6683);
    Array PThreadedCode6682 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6683, (Optr)&t_send1, (Optr)PSend6696, (Optr)&t_method_return);
    Method PMethod6680 = new_Method_with(PArray6681, empty_Array, empty_Array, PThreadedCode6682, 1, PSend6696);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PMethod6680, Collection_IdentityDictBucket_Class);
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