#include <lib/class/Collection/StatefulArray.h>


Optr layout_Collection_StatefulArray_Class_class;
Optr slot_Collection_StatefulArray_position;
Optr layout_Collection_StatefulArray;


static void init_SMB_put_() {
    Symbol SMB_put_ = new_Symbol(L"put:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray6786 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6788 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)slot_Collection_StatefulArray_position, (Optr)VAR_value_0_0);
    Array PThreadedCode6787 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send2, (Optr)PSend6788, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6785 = new_Method_with(PArray6786, empty_Array, empty_Array, PThreadedCode6787, 2, PSend6788, self);
    
    MethodClosure MC_SMB_put_ = new_MethodClosure((Method)PMethod6785, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_put_, MC_SMB_put_);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6791 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend6792 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode6790 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6791, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6792, (Optr)&t_method_return);
    Method PMethod6789 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6790, 2, PAssign6791, PSend6792);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod6789, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6795 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6796 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6795);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6800 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Array PThreadedCode6799 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign6800, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6798 = new_Block_with(empty_Array, empty_Array, PThreadedCode6799, 1, PAssign6800);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6804 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6803 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)PSend6804);
    Array PThreadedCode6802 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6803, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6804, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6801 = new_Block_with(empty_Array, empty_Array, PThreadedCode6802, 1, PAssign6803);
    // ifTrue:ifFalse:. 
    Send PSend6797 = new_Send((Optr)PSend6796, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6798, (Optr)PBlock6801);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend6805 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode6794 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6795, (Optr)&t_send1, (Optr)PSend6796, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6797, (Optr)PBlock6798, (Optr)PBlock6801, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6805, (Optr)&t_method_return);
    Method PMethod6793 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6794, 2, PSend6797, PSend6805);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6793, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_ifHasNext_() {
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6807 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6809 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6810 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6809);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6814 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6815 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6814);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6816 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6815);
    Array PThreadedCode6813 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6814, (Optr)&t_send1, (Optr)PSend6815, (Optr)&t_send1, (Optr)PSend6816, (Optr)&t_block_return);
    Block PBlock6812 = new_Block_with(empty_Array, empty_Array, PThreadedCode6813, 1, PSend6816);
    // ifFalse:. 
    Send PSend6811 = new_Send((Optr)PSend6810, SMB_ifFalse_, 1, (Optr)PBlock6812);
    Array PThreadedCode6808 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6809, (Optr)&t_send1, (Optr)PSend6810, (Optr)&t_send_ifFalse_, (Optr)PSend6811, (Optr)PBlock6812, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6806 = new_Method_with(PArray6807, empty_Array, empty_Array, PThreadedCode6808, 2, PSend6811, self);
    
    MethodClosure MC_SMB_ifHasNext_ = new_MethodClosure((Method)PMethod6806, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifHasNext_, MC_SMB_ifHasNext_);
}


static void init_SMB_doRest_() {
    Symbol SMB_doRest_ = new_Symbol(L"doRest:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6818 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6820 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6821 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6823 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6825 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6826 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6825);
    Array PThreadedCode6824 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6825, (Optr)&t_send1, (Optr)PSend6826, (Optr)&t_method_return);
    Block PBlock6822 = new_Block_with(PArray6823, empty_Array, PThreadedCode6824, 1, PSend6826);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend6827 = new_Send((Optr)PSend6820, SMB_to_do_, 2, (Optr)PSend6821, (Optr)PBlock6822);
    Array PThreadedCode6819 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6820, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6821, (Optr)&t_push_closure, (Optr)PBlock6822, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6827, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6817 = new_Method_with(PArray6818, empty_Array, empty_Array, PThreadedCode6819, 2, PSend6827, self);
    
    MethodClosure MC_SMB_doRest_ = new_MethodClosure((Method)PMethod6817, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_doRest_, MC_SMB_doRest_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6830 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Array PThreadedCode6829 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6830, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6828 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6829, 2, PAssign6830, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod6828, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_ifAtEnd_() {
    Symbol SMB_ifAtEnd_ = new_Symbol(L"ifAtEnd:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6832 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6835 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6837 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6838 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6837);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6842 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode6841 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend6842, (Optr)&t_block_return);
    Block PBlock6840 = new_Block_with(empty_Array, empty_Array, PThreadedCode6841, 1, PSend6842);
    // ifFalse:. 
    Send PSend6839 = new_Send((Optr)PSend6838, SMB_ifFalse_, 1, (Optr)PBlock6840);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6843 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode6836 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6837, (Optr)&t_send1, (Optr)PSend6838, (Optr)&t_send_ifFalse_, (Optr)PSend6839, (Optr)PBlock6840, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend6843, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6834 = new_Block_with(PArray6835, empty_Array, PThreadedCode6836, 3, PSend6839, PSend6843, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6844 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6834);
    Array PThreadedCode6833 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6834, (Optr)&t_send1, (Optr)PSend6844, (Optr)&t_method_return);
    Method PMethod6831 = new_Method_with(PArray6832, empty_Array, empty_Array, PThreadedCode6833, 1, PSend6844);
    
    MethodClosure MC_SMB_ifAtEnd_ = new_MethodClosure((Method)PMethod6831, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifAtEnd_, MC_SMB_ifAtEnd_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode6846 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_method_return);
    Method PMethod6845 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6846, 1, slot_Collection_StatefulArray_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod6845, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_ifAtFirst_() {
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6848 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6851 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend6853 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6857 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode6856 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend6857, (Optr)&t_block_return);
    Block PBlock6855 = new_Block_with(empty_Array, empty_Array, PThreadedCode6856, 1, PSend6857);
    // ifFalse:. 
    Send PSend6854 = new_Send((Optr)PSend6853, SMB_ifFalse_, 1, (Optr)PBlock6855);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6858 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode6852 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6853, (Optr)&t_send_ifFalse_, (Optr)PSend6854, (Optr)PBlock6855, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend6858, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6850 = new_Block_with(PArray6851, empty_Array, PThreadedCode6852, 3, PSend6854, PSend6858, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6859 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6850);
    Array PThreadedCode6849 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6850, (Optr)&t_send1, (Optr)PSend6859, (Optr)&t_method_return);
    Method PMethod6847 = new_Method_with(PArray6848, empty_Array, empty_Array, PThreadedCode6849, 1, PSend6859);
    
    MethodClosure MC_SMB_ifAtFirst_ = new_MethodClosure((Method)PMethod6847, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifAtFirst_, MC_SMB_ifAtFirst_);
}


static void init_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6862 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_StatefulArray_position);
    Array PThreadedCode6861 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_send1, (Optr)PSend6862, (Optr)&t_method_return);
    Method PMethod6860 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6861, 1, PSend6862);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PMethod6860, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_current, MC_SMB_current);
}

void init_Collection_PStatefulArray_layout() {
    layout_Collection_StatefulArray_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_StatefulArray_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_StatefulArray_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_StatefulArray_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_StatefulArray_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_StatefulArray_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_StatefulArray = new_Symbol(L"StatefulArray");
    slot_Collection_StatefulArray_position = (Optr)new_Slot(0, L"position");
    layout_Collection_StatefulArray = (Optr)create_layout_with_vars(ArrayLayout_Class, 1);
    ((Array)layout_Collection_StatefulArray)->values[0] = slot_Collection_StatefulArray_position;
    Collection_StatefulArray_Class = (Class)new_Class(Array_Class, layout_Collection_StatefulArray_Class_class);
    Collection_StatefulArray_Class->layout = layout_Collection_StatefulArray;
    Collection_StatefulArray_Class->name = SMB_StatefulArray;
    
}

void init_Collection_PStatefulArray_methods() {
    init_SMB_put_();
    init_SMB_first();
    init_SMB_next();
    init_SMB_ifHasNext_();
    init_SMB_doRest_();
    init_SMB_initialize();
    init_SMB_ifAtEnd_();
    init_SMB_position();
    init_SMB_ifAtFirst_();
    init_SMB_current();
    
}