#include <lib/class/Collection/SetBucket.h>


Optr layout_Collection_SetBucket_Class_class;
Optr layout_Collection_SetBucket;


static void init_SMB_addNew_() {
    Symbol SMB_addNew_ = new_Symbol(L"addNew:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray7740 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend7743 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign7742 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend7743);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7744 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PAssign7742, (Optr)VAR_value_0_0);
    Array PThreadedCode7741 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)PAssign7742, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7743, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send2, (Optr)PSend7744, (Optr)&t_method_return);
    Method PMethod7739 = new_Method_with(PArray7740, empty_Array, empty_Array, PThreadedCode7741, 1, PSend7744);
    
    MethodClosure MC_SMB_addNew_ = new_MethodClosure((Method)PMethod7739, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_addNew_, MC_SMB_addNew_);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7746 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7749 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7752 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7754 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend7755 = new_Send((Optr)PSend7754, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend7759 = new_Send((Optr)self, SMB_removeAt_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7760 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7758 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7759, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7760, (Optr)&t_block_return);
    Block PBlock7757 = new_Block_with(empty_Array, empty_Array, PThreadedCode7758, 2, PSend7759, PSend7760);
    // ifTrue:. 
    Send PSend7756 = new_Send((Optr)PSend7755, SMB_ifTrue_, 1, (Optr)PBlock7757);
    Array PThreadedCode7753 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7754, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7755, (Optr)&t_send_ifTrue_, (Optr)PSend7756, (Optr)PBlock7757, (Optr)&t_method_return);
    Block PBlock7751 = new_Block_with(PArray7752, empty_Array, PThreadedCode7753, 1, PSend7756);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7761 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7751);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7762 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode7750 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7751, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7761, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend7762, (Optr)&t_method_return);
    Block PBlock7748 = new_Block_with(PArray7749, empty_Array, PThreadedCode7750, 2, PSend7761, PSend7762);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7763 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7748);
    Array PThreadedCode7747 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7748, (Optr)&t_send1, (Optr)PSend7763, (Optr)&t_method_return);
    Method PMethod7745 = new_Method_with(PArray7746, empty_Array, empty_Array, PThreadedCode7747, 1, PSend7763);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod7745, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7765 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7768 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray7771 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7773 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend7774 = new_Send((Optr)PSend7773, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7778 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode7777 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend7778, (Optr)&t_block_return);
    Block PBlock7776 = new_Block_with(empty_Array, empty_Array, PThreadedCode7777, 1, PSend7778);
    // ifTrue:. 
    Send PSend7775 = new_Send((Optr)PSend7774, SMB_ifTrue_, 1, (Optr)PBlock7776);
    Array PThreadedCode7772 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend7773, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend7774, (Optr)&t_send_ifTrue_, (Optr)PSend7775, (Optr)PBlock7776, (Optr)&t_method_return);
    Block PBlock7770 = new_Block_with(PArray7771, empty_Array, PThreadedCode7772, 1, PSend7775);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7779 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7770);
    Array PThreadedCode7769 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7770, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7779, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock7767 = new_Block_with(PArray7768, empty_Array, PThreadedCode7769, 2, PSend7779, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7780 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7767);
    Array PThreadedCode7766 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7767, (Optr)&t_send1, (Optr)PSend7780, (Optr)&t_method_return);
    Method PMethod7764 = new_Method_with(PArray7765, empty_Array, empty_Array, PThreadedCode7766, 1, PSend7780);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod7764, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_removeAt_() {
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray7782 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7784 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_AbstractBucket_bucketSize);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7785 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_anInteger_0_0, (Optr)PSend7784);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend7787 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign7786 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend7787);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7788 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__plus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend7789 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend7788, (Optr)nil_Const);
    Array PThreadedCode7783 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_send1, (Optr)PSend7784, (Optr)&t_send2, (Optr)PSend7785, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7786, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7787, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7788, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend7789, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7781 = new_Method_with(PArray7782, empty_Array, empty_Array, PThreadedCode7783, 4, PSend7785, PAssign7786, PSend7789, self);
    
    MethodClosure MC_SMB_removeAt_ = new_MethodClosure((Method)PMethod7781, Collection_SetBucket_Class);
    store_method(Collection_SetBucket_Class, SMB_removeAt_, MC_SMB_removeAt_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7791 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray7794 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7796 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7797 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend7796);
    Array PThreadedCode7795 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend7796, (Optr)&t_send1, (Optr)PSend7797, (Optr)&t_method_return);
    Block PBlock7793 = new_Block_with(PArray7794, empty_Array, PThreadedCode7795, 1, PSend7797);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7798 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PBlock7793);
    Array PThreadedCode7792 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_closure, (Optr)PBlock7793, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7798, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7790 = new_Method_with(PArray7791, empty_Array, empty_Array, PThreadedCode7792, 2, PSend7798, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod7790, Collection_SetBucket_Class);
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