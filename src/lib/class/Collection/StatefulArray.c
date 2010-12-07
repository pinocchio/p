#include <lib/class/Collection/StatefulArray.h>


Optr layout_Collection_StatefulArray_Class_class;
Optr slot_Collection_StatefulArray_position;
Optr layout_Collection_StatefulArray;


static void init_SMB_put_() {
    Symbol SMB_put_ = new_Symbol(L"put:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray6785 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6787 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)slot_Collection_StatefulArray_position, (Optr)VAR_value_0_0);
    Array PThreadedCode6786 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send2, (Optr)PSend6787, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6784 = new_Method_with(PArray6785, empty_Array, empty_Array, PThreadedCode6786, 2, PSend6787, self);
    
    MethodClosure MC_SMB_put_ = new_MethodClosure((Method)PMethod6784, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_put_, MC_SMB_put_);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6790 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend6791 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode6789 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6790, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6791, (Optr)&t_method_return);
    Method PMethod6788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6789, 2, PAssign6790, PSend6791);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod6788, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6794 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6795 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6794);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6799 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Array PThreadedCode6798 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign6799, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6797 = new_Block_with(empty_Array, empty_Array, PThreadedCode6798, 1, PAssign6799);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6803 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6802 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)PSend6803);
    Array PThreadedCode6801 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6802, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6803, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6800 = new_Block_with(empty_Array, empty_Array, PThreadedCode6801, 1, PAssign6802);
    // ifTrue:ifFalse:. 
    Send PSend6796 = new_Send((Optr)PSend6795, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6797, (Optr)PBlock6800);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend6804 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode6793 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6794, (Optr)&t_send1, (Optr)PSend6795, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6796, (Optr)PBlock6797, (Optr)PBlock6800, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6804, (Optr)&t_method_return);
    Method PMethod6792 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6793, 2, PSend6796, PSend6804);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6792, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_ifHasNext_() {
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6806 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6808 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6809 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6808);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6813 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6814 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6813);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6815 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6814);
    Array PThreadedCode6812 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6813, (Optr)&t_send1, (Optr)PSend6814, (Optr)&t_send1, (Optr)PSend6815, (Optr)&t_block_return);
    Block PBlock6811 = new_Block_with(empty_Array, empty_Array, PThreadedCode6812, 1, PSend6815);
    // ifFalse:. 
    Send PSend6810 = new_Send((Optr)PSend6809, SMB_ifFalse_, 1, (Optr)PBlock6811);
    Array PThreadedCode6807 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6808, (Optr)&t_send1, (Optr)PSend6809, (Optr)&t_send_ifFalse_, (Optr)PSend6810, (Optr)PBlock6811, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6805 = new_Method_with(PArray6806, empty_Array, empty_Array, PThreadedCode6807, 2, PSend6810, self);
    
    MethodClosure MC_SMB_ifHasNext_ = new_MethodClosure((Method)PMethod6805, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifHasNext_, MC_SMB_ifHasNext_);
}


static void init_SMB_doRest_() {
    Symbol SMB_doRest_ = new_Symbol(L"doRest:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6817 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6819 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6820 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6822 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6824 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6825 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6824);
    Array PThreadedCode6823 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6824, (Optr)&t_send1, (Optr)PSend6825, (Optr)&t_method_return);
    Block PBlock6821 = new_Block_with(PArray6822, empty_Array, PThreadedCode6823, 1, PSend6825);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend6826 = new_Send((Optr)PSend6819, SMB_to_do_, 2, (Optr)PSend6820, (Optr)PBlock6821);
    Array PThreadedCode6818 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6819, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6820, (Optr)&t_push_closure, (Optr)PBlock6821, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6826, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6816 = new_Method_with(PArray6817, empty_Array, empty_Array, PThreadedCode6818, 2, PSend6826, self);
    
    MethodClosure MC_SMB_doRest_ = new_MethodClosure((Method)PMethod6816, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_doRest_, MC_SMB_doRest_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6829 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Array PThreadedCode6828 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6829, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6827 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6828, 2, PAssign6829, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod6827, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_ifAtEnd_() {
    Symbol SMB_ifAtEnd_ = new_Symbol(L"ifAtEnd:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6831 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6834 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6836 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6837 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6836);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6841 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode6840 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend6841, (Optr)&t_block_return);
    Block PBlock6839 = new_Block_with(empty_Array, empty_Array, PThreadedCode6840, 1, PSend6841);
    // ifFalse:. 
    Send PSend6838 = new_Send((Optr)PSend6837, SMB_ifFalse_, 1, (Optr)PBlock6839);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6842 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode6835 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6836, (Optr)&t_send1, (Optr)PSend6837, (Optr)&t_send_ifFalse_, (Optr)PSend6838, (Optr)PBlock6839, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend6842, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6833 = new_Block_with(PArray6834, empty_Array, PThreadedCode6835, 3, PSend6838, PSend6842, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6843 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6833);
    Array PThreadedCode6832 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6833, (Optr)&t_send1, (Optr)PSend6843, (Optr)&t_method_return);
    Method PMethod6830 = new_Method_with(PArray6831, empty_Array, empty_Array, PThreadedCode6832, 1, PSend6843);
    
    MethodClosure MC_SMB_ifAtEnd_ = new_MethodClosure((Method)PMethod6830, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifAtEnd_, MC_SMB_ifAtEnd_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode6845 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_method_return);
    Method PMethod6844 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6845, 1, slot_Collection_StatefulArray_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod6844, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_ifAtFirst_() {
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6847 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6850 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend6852 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6856 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode6855 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend6856, (Optr)&t_block_return);
    Block PBlock6854 = new_Block_with(empty_Array, empty_Array, PThreadedCode6855, 1, PSend6856);
    // ifFalse:. 
    Send PSend6853 = new_Send((Optr)PSend6852, SMB_ifFalse_, 1, (Optr)PBlock6854);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6857 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode6851 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6852, (Optr)&t_send_ifFalse_, (Optr)PSend6853, (Optr)PBlock6854, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend6857, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6849 = new_Block_with(PArray6850, empty_Array, PThreadedCode6851, 3, PSend6853, PSend6857, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6858 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6849);
    Array PThreadedCode6848 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6849, (Optr)&t_send1, (Optr)PSend6858, (Optr)&t_method_return);
    Method PMethod6846 = new_Method_with(PArray6847, empty_Array, empty_Array, PThreadedCode6848, 1, PSend6858);
    
    MethodClosure MC_SMB_ifAtFirst_ = new_MethodClosure((Method)PMethod6846, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifAtFirst_, MC_SMB_ifAtFirst_);
}


static void init_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6861 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_StatefulArray_position);
    Array PThreadedCode6860 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_send1, (Optr)PSend6861, (Optr)&t_method_return);
    Method PMethod6859 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6860, 1, PSend6861);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PMethod6859, Collection_StatefulArray_Class);
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