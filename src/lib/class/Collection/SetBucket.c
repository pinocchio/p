#include <lib/class/Collection/SetBucket.h>


Optr layout_Collection_SetBucket_Class_class;
Optr layout_Collection_SetBucket;


static void init_SMB_addNew_() {
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
<<<<<<< HEAD
    Array PArray7772 = new_Array_with(1, (Optr)VAR_value_0_0);
=======
    Array PArray7738 = new_Array_with(1, (Optr)VAR_value_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend7775 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign7774 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend7775);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7776 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PAssign7774, (Optr)VAR_value_0_0);
    Array PThreadedCode7773 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)PAssign7774, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7775, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send2, (Optr)PSend7776, (Optr)&t_method_return);
    Method PMethod7771 = new_Method_with(PArray7772, empty_Array, empty_Array, PThreadedCode7773, 1, PSend7776);
    
    MethodClosure MC_SMB_addNew_ = new_MethodClosure((Method)PMethod7771, Collection_SetBucket_Class);
=======
    Send PSend7741 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign7740 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend7741);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7742 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PAssign7740, (Optr)VAR_value_0_0);
    Array PThreadedCode7739 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)PAssign7740, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7741, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send2, (Optr)PSend7742, (Optr)&t_method_return);
    Method PMethod7737 = new_Method_with(PArray7738, empty_Array, empty_Array, PThreadedCode7739, 1, PSend7742);
    
    MethodClosure MC_SMB_addNew_ = new_MethodClosure((Method)PMethod7737, Collection_SetBucket_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collection_SetBucket_Class, SMB_addNew_, MC_SMB_addNew_);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray7778 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7781 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7784 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7786 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend7787 = new_Send((Optr)PSend7786, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend7791 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7792 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7790 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7791, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7792, (Optr)&t_block_return);
    Block PBlock7789 = new_Block_with(empty_Array, empty_Array, PThreadedCode7790, 2, PSend7791, PSend7792);
    // ifTrue:. 
    Send PSend7788 = new_Send((Optr)PSend7787, SMB_ifTrue_, 1, (Optr)PBlock7789);
    Array PThreadedCode7785 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7786, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7787, (Optr)&t_send_ifTrue_, (Optr)PSend7788, (Optr)PBlock7789, (Optr)&t_method_return);
    Block PBlock7783 = new_Block_with(PArray7784, empty_Array, PThreadedCode7785, 1, PSend7788);
=======
    Array PArray7744 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7747 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7750 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7752 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend7753 = new_Send((Optr)PSend7752, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend7757 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7758 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7756 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7757, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7758, (Optr)&t_block_return);
    Block PBlock7755 = new_Block_with(empty_Array, empty_Array, PThreadedCode7756, 2, PSend7757, PSend7758);
    // ifTrue:. 
    Send PSend7754 = new_Send((Optr)PSend7753, SMB_ifTrue_, 1, (Optr)PBlock7755);
    Array PThreadedCode7751 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7752, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7753, (Optr)&t_send_ifTrue_, (Optr)PSend7754, (Optr)PBlock7755, (Optr)&t_method_return);
    Block PBlock7749 = new_Block_with(PArray7750, empty_Array, PThreadedCode7751, 1, PSend7754);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend7793 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7783);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7794 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode7782 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7783, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7793, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend7794, (Optr)&t_method_return);
    Block PBlock7780 = new_Block_with(PArray7781, empty_Array, PThreadedCode7782, 2, PSend7793, PSend7794);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7795 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7780);
    Array PThreadedCode7779 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7780, (Optr)&t_send1, (Optr)PSend7795, (Optr)&t_method_return);
    Method PMethod7777 = new_Method_with(PArray7778, empty_Array, empty_Array, PThreadedCode7779, 1, PSend7795);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod7777, Collection_SetBucket_Class);
=======
    Send PSend7759 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7749);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7760 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode7748 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7749, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7759, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend7760, (Optr)&t_method_return);
    Block PBlock7746 = new_Block_with(PArray7747, empty_Array, PThreadedCode7748, 2, PSend7759, PSend7760);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7761 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7746);
    Array PThreadedCode7745 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7746, (Optr)&t_send1, (Optr)PSend7761, (Optr)&t_method_return);
    Method PMethod7743 = new_Method_with(PArray7744, empty_Array, empty_Array, PThreadedCode7745, 1, PSend7761);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod7743, Collection_SetBucket_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collection_SetBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray7797 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7800 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7803 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7805 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend7806 = new_Send((Optr)PSend7805, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7810 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode7809 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend7810, (Optr)&t_block_return);
    Block PBlock7808 = new_Block_with(empty_Array, empty_Array, PThreadedCode7809, 1, PSend7810);
    // ifTrue:. 
    Send PSend7807 = new_Send((Optr)PSend7806, SMB_ifTrue_, 1, (Optr)PBlock7808);
    Array PThreadedCode7804 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7805, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7806, (Optr)&t_send_ifTrue_, (Optr)PSend7807, (Optr)PBlock7808, (Optr)&t_method_return);
    Block PBlock7802 = new_Block_with(PArray7803, empty_Array, PThreadedCode7804, 1, PSend7807);
=======
    Array PArray7763 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7766 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7769 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7771 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend7772 = new_Send((Optr)PSend7771, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7776 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode7775 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend7776, (Optr)&t_block_return);
    Block PBlock7774 = new_Block_with(empty_Array, empty_Array, PThreadedCode7775, 1, PSend7776);
    // ifTrue:. 
    Send PSend7773 = new_Send((Optr)PSend7772, SMB_ifTrue_, 1, (Optr)PBlock7774);
    Array PThreadedCode7770 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7771, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7772, (Optr)&t_send_ifTrue_, (Optr)PSend7773, (Optr)PBlock7774, (Optr)&t_method_return);
    Block PBlock7768 = new_Block_with(PArray7769, empty_Array, PThreadedCode7770, 1, PSend7773);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend7811 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7802);
    Array PThreadedCode7801 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7802, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7811, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock7799 = new_Block_with(PArray7800, empty_Array, PThreadedCode7801, 2, PSend7811, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7812 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7799);
    Array PThreadedCode7798 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7799, (Optr)&t_send1, (Optr)PSend7812, (Optr)&t_method_return);
    Method PMethod7796 = new_Method_with(PArray7797, empty_Array, empty_Array, PThreadedCode7798, 1, PSend7812);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod7796, Collection_SetBucket_Class);
=======
    Send PSend7777 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7768);
    Array PThreadedCode7767 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7768, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7777, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock7765 = new_Block_with(PArray7766, empty_Array, PThreadedCode7767, 2, PSend7777, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7778 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7765);
    Array PThreadedCode7764 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7765, (Optr)&t_send1, (Optr)PSend7778, (Optr)&t_method_return);
    Method PMethod7762 = new_Method_with(PArray7763, empty_Array, empty_Array, PThreadedCode7764, 1, PSend7778);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod7762, Collection_SetBucket_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collection_SetBucket_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_removeAt_() {
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
<<<<<<< HEAD
    Array PArray7814 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7816 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_AbstractBucket_bucketSize);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7817 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_anInteger_0_0, (Optr)PSend7816);
=======
    Array PArray7780 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7782 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_AbstractBucket_bucketSize);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7783 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_anInteger_0_0, (Optr)PSend7782);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
<<<<<<< HEAD
    Send PSend7819 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign7818 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend7819);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7820 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend7821 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend7820, (Optr)nil_Const);
    Array PThreadedCode7815 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_send1, (Optr)PSend7816, (Optr)&t_send2, (Optr)PSend7817, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7818, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7819, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7820, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend7821, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7813 = new_Method_with(PArray7814, empty_Array, empty_Array, PThreadedCode7815, 4, PSend7817, PAssign7818, PSend7821, self);
    
    MethodClosure MC_SMB_removeAt_ = new_MethodClosure((Method)PMethod7813, Collection_SetBucket_Class);
=======
    Send PSend7785 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign7784 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend7785);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7786 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend7787 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend7786, (Optr)nil_Const);
    Array PThreadedCode7781 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_send1, (Optr)PSend7782, (Optr)&t_send2, (Optr)PSend7783, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7784, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7785, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7786, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend7787, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7779 = new_Method_with(PArray7780, empty_Array, empty_Array, PThreadedCode7781, 4, PSend7783, PAssign7784, PSend7787, self);
    
    MethodClosure MC_SMB_removeAt_ = new_MethodClosure((Method)PMethod7779, Collection_SetBucket_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collection_SetBucket_Class, SMB_removeAt_, MC_SMB_removeAt_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray7823 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray7826 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7828 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7829 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend7828);
    Array PThreadedCode7827 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend7828, (Optr)&t_send1, (Optr)PSend7829, (Optr)&t_method_return);
    Block PBlock7825 = new_Block_with(PArray7826, empty_Array, PThreadedCode7827, 1, PSend7829);
=======
    Array PArray7789 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray7792 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7794 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7795 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend7794);
    Array PThreadedCode7793 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend7794, (Optr)&t_send1, (Optr)PSend7795, (Optr)&t_method_return);
    Block PBlock7791 = new_Block_with(PArray7792, empty_Array, PThreadedCode7793, 1, PSend7795);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend7830 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7825);
    Array PThreadedCode7824 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7825, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7830, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7822 = new_Method_with(PArray7823, empty_Array, empty_Array, PThreadedCode7824, 2, PSend7830, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod7822, Collection_SetBucket_Class);
=======
    Send PSend7796 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7791);
    Array PThreadedCode7790 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7791, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7796, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7788 = new_Method_with(PArray7789, empty_Array, empty_Array, PThreadedCode7790, 2, PSend7796, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod7788, Collection_SetBucket_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collection_SetBucket_Class, SMB_do_, MC_SMB_do_);
}

void init_Collection_PSetBucket_layout() {
    layout_Collection_SetBucket_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_SetBucket_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_SetBucket_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_SetBucket_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_SetBucket_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_SetBucket_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_SetBucket = new_Symbol(L"SetBucket");
    layout_Collection_SetBucket = (Optr)create_layout_with_vars(ArrayLayout_Class, 1);
    ((Array)layout_Collection_SetBucket)->values[0] = slot_Collection_AbstractBucket_bucketSize;
    Collection_SetBucket_Class = (Class)new_Class(Collection_AbstractBucket_Class, layout_Collection_SetBucket_Class_class);
    Collection_SetBucket_Class->layout = layout_Collection_SetBucket;
    Collection_SetBucket_Class->name = SMB_SetBucket;
    
}

void init_Collection_PSetBucket_methods() {
    init_SMB_addNew_();
    init_SMB_remove_ifAbsent_();
    init_SMB_includes_();
    init_SMB_removeAt_();
    init_SMB_do_();
    
}