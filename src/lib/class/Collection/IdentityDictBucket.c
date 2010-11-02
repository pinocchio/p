#include <lib/class/Collection/IdentityDictBucket.h>


Optr layout_Collection_IdentityDictBucket_Class_class;
Optr layout_Collection_IdentityDictBucket;


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6636 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray6637 = new_Array_with(1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6640 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6643 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6645 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6646 = new_Send((Optr)PSend6645, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6652 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6651 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6652);
    Assign PAssign6650 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend6651);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend6653 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6654 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode6649 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign6650, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6652, (Optr)&t_send1, (Optr)PSend6651, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6653, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend6654, (Optr)&t_block_return);
    Block PBlock6648 = new_Block_with(empty_Array, empty_Array, PThreadedCode6649, 3, PAssign6650, PSend6653, PSend6654);
    // ifTrue:. 
    Send PSend6647 = new_Send((Optr)PSend6646, SMB_ifTrue_, 1, (Optr)PBlock6648);
    Array PThreadedCode6644 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6645, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6646, (Optr)&t_send_ifTrue_, (Optr)PSend6647, (Optr)PBlock6648, (Optr)&t_method_return);
    Block PBlock6642 = new_Block_with(PArray6643, empty_Array, PThreadedCode6644, 1, PSend6647);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6655 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6642);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6656 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6641 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6642, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6655, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6656, (Optr)&t_method_return);
    Block PBlock6639 = new_Block_with(PArray6640, empty_Array, PThreadedCode6641, 2, PSend6655, PSend6656);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6657 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6639);
    Array PThreadedCode6638 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6639, (Optr)&t_send1, (Optr)PSend6657, (Optr)&t_method_return);
    Method PMethod6635 = new_Method_with(PArray6636, PArray6637, empty_Array, PThreadedCode6638, 1, PSend6657);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod6635, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_assign_to_() {
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray6659 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6662 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6665 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6667 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6668 = new_Send((Optr)PSend6667, SMB__pequals_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6672 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6673 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend6672, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6674 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6671 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6672, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend6673, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6674, (Optr)&t_block_return);
    Block PBlock6670 = new_Block_with(empty_Array, empty_Array, PThreadedCode6671, 2, PSend6673, PSend6674);
    // ifTrue:. 
    Send PSend6669 = new_Send((Optr)PSend6668, SMB_ifTrue_, 1, (Optr)PBlock6670);
    Array PThreadedCode6666 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6667, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend6668, (Optr)&t_send_ifTrue_, (Optr)PSend6669, (Optr)PBlock6670, (Optr)&t_method_return);
    Block PBlock6664 = new_Block_with(PArray6665, empty_Array, PThreadedCode6666, 1, PSend6669);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6675 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6664);
    Array PThreadedCode6663 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6664, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6675, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6661 = new_Block_with(PArray6662, empty_Array, PThreadedCode6663, 2, PSend6675, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6676 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6661);
    Array PThreadedCode6660 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6661, (Optr)&t_send1, (Optr)PSend6676, (Optr)&t_method_return);
    Method PMethod6658 = new_Method_with(PArray6659, empty_Array, empty_Array, PThreadedCode6660, 1, PSend6676);
    
    MethodClosure MC_SMB_assign_to_ = new_MethodClosure((Method)PMethod6658, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_assign_to_, MC_SMB_assign_to_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray6678 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6681 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6684 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6686 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6687 = new_Send((Optr)PSend6686, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6691 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend6692 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6691);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6693 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6692);
    Array PThreadedCode6690 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6691, (Optr)&t_send1, (Optr)PSend6692, (Optr)&t_send1, (Optr)PSend6693, (Optr)&t_block_return);
    Block PBlock6689 = new_Block_with(empty_Array, empty_Array, PThreadedCode6690, 1, PSend6693);
    // ifTrue:. 
    Send PSend6688 = new_Send((Optr)PSend6687, SMB_ifTrue_, 1, (Optr)PBlock6689);
    Array PThreadedCode6685 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6686, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6687, (Optr)&t_send_ifTrue_, (Optr)PSend6688, (Optr)PBlock6689, (Optr)&t_method_return);
    Block PBlock6683 = new_Block_with(PArray6684, empty_Array, PThreadedCode6685, 1, PSend6688);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6694 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6683);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6695 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode6682 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6683, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6694, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend6695, (Optr)&t_method_return);
    Block PBlock6680 = new_Block_with(PArray6681, empty_Array, PThreadedCode6682, 2, PSend6694, PSend6695);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6696 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6680);
    Array PThreadedCode6679 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6680, (Optr)&t_send1, (Optr)PSend6696, (Optr)&t_method_return);
    Method PMethod6677 = new_Method_with(PArray6678, empty_Array, empty_Array, PThreadedCode6679, 1, PSend6696);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PMethod6677, Collection_IdentityDictBucket_Class);
    store_method(Collection_IdentityDictBucket_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray6698 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6701 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray6704 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6706 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6707 = new_Send((Optr)PSend6706, SMB__pequals_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6711 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode6710 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend6711, (Optr)&t_block_return);
    Block PBlock6709 = new_Block_with(empty_Array, empty_Array, PThreadedCode6710, 1, PSend6711);
    // ifTrue:. 
    Send PSend6708 = new_Send((Optr)PSend6707, SMB_ifTrue_, 1, (Optr)PBlock6709);
    Array PThreadedCode6705 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend6706, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend6707, (Optr)&t_send_ifTrue_, (Optr)PSend6708, (Optr)PBlock6709, (Optr)&t_method_return);
    Block PBlock6703 = new_Block_with(PArray6704, empty_Array, PThreadedCode6705, 1, PSend6708);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // to:by:do:. 
    Send PSend6712 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_2_Const, (Optr)PBlock6703);
    Array PThreadedCode6702 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock6703, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend6712, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock6700 = new_Block_with(PArray6701, empty_Array, PThreadedCode6702, 2, PSend6712, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6713 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6700);
    Array PThreadedCode6699 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6700, (Optr)&t_send1, (Optr)PSend6713, (Optr)&t_method_return);
    Method PMethod6697 = new_Method_with(PArray6698, empty_Array, empty_Array, PThreadedCode6699, 1, PSend6713);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PMethod6697, Collection_IdentityDictBucket_Class);
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