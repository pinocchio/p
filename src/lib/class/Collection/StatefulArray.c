#include <lib/class/Collection/StatefulArray.h>


Optr layout_Collection_StatefulArray_Class_class;
Optr slot_Collection_StatefulArray_position;
Optr layout_Collection_StatefulArray;


static void init_SMB_put_() {
    Symbol SMB_put_ = new_Symbol(L"put:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray6787 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6789 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)slot_Collection_StatefulArray_position, (Optr)VAR_value_0_0);
    Array PThreadedCode6788 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send2, (Optr)PSend6789, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6786 = new_Method_with(PArray6787, empty_Array, empty_Array, PThreadedCode6788, 2, PSend6789, self);
    
    MethodClosure MC_SMB_put_ = new_MethodClosure((Method)PMethod6786, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_put_, MC_SMB_put_);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6792 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend6793 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode6791 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6792, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6793, (Optr)&t_method_return);
    Method PMethod6790 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6791, 2, PAssign6792, PSend6793);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod6790, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6796 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6797 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6796);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6801 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Array PThreadedCode6800 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign6801, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6799 = new_Block_with(empty_Array, empty_Array, PThreadedCode6800, 1, PAssign6801);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6805 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6804 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)PSend6805);
    Array PThreadedCode6803 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6804, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6805, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6802 = new_Block_with(empty_Array, empty_Array, PThreadedCode6803, 1, PAssign6804);
    // ifTrue:ifFalse:. 
    Send PSend6798 = new_Send((Optr)PSend6797, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6799, (Optr)PBlock6802);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend6806 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode6795 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6796, (Optr)&t_send1, (Optr)PSend6797, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6798, (Optr)PBlock6799, (Optr)PBlock6802, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6806, (Optr)&t_method_return);
    Method PMethod6794 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6795, 2, PSend6798, PSend6806);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6794, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_ifHasNext_() {
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6808 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6810 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6811 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6810);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6815 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6816 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6815);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6817 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6816);
    Array PThreadedCode6814 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6815, (Optr)&t_send1, (Optr)PSend6816, (Optr)&t_send1, (Optr)PSend6817, (Optr)&t_block_return);
    Block PBlock6813 = new_Block_with(empty_Array, empty_Array, PThreadedCode6814, 1, PSend6817);
    // ifFalse:. 
    Send PSend6812 = new_Send((Optr)PSend6811, SMB_ifFalse_, 1, (Optr)PBlock6813);
    Array PThreadedCode6809 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6810, (Optr)&t_send1, (Optr)PSend6811, (Optr)&t_send_ifFalse_, (Optr)PSend6812, (Optr)PBlock6813, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6807 = new_Method_with(PArray6808, empty_Array, empty_Array, PThreadedCode6809, 2, PSend6812, self);
    
    MethodClosure MC_SMB_ifHasNext_ = new_MethodClosure((Method)PMethod6807, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifHasNext_, MC_SMB_ifHasNext_);
}


static void init_SMB_doRest_() {
    Symbol SMB_doRest_ = new_Symbol(L"doRest:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6819 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6821 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6822 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6824 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6826 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6827 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6826);
    Array PThreadedCode6825 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6826, (Optr)&t_send1, (Optr)PSend6827, (Optr)&t_method_return);
    Block PBlock6823 = new_Block_with(PArray6824, empty_Array, PThreadedCode6825, 1, PSend6827);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend6828 = new_Send((Optr)PSend6821, SMB_to_do_, 2, (Optr)PSend6822, (Optr)PBlock6823);
    Array PThreadedCode6820 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6821, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6822, (Optr)&t_push_closure, (Optr)PBlock6823, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6828, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6818 = new_Method_with(PArray6819, empty_Array, empty_Array, PThreadedCode6820, 2, PSend6828, self);
    
    MethodClosure MC_SMB_doRest_ = new_MethodClosure((Method)PMethod6818, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_doRest_, MC_SMB_doRest_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6831 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Array PThreadedCode6830 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6831, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6829 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6830, 2, PAssign6831, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod6829, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_ifAtEnd_() {
    Symbol SMB_ifAtEnd_ = new_Symbol(L"ifAtEnd:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6833 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6836 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6838 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6839 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6838);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6843 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode6842 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend6843, (Optr)&t_block_return);
    Block PBlock6841 = new_Block_with(empty_Array, empty_Array, PThreadedCode6842, 1, PSend6843);
    // ifFalse:. 
    Send PSend6840 = new_Send((Optr)PSend6839, SMB_ifFalse_, 1, (Optr)PBlock6841);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6844 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode6837 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6838, (Optr)&t_send1, (Optr)PSend6839, (Optr)&t_send_ifFalse_, (Optr)PSend6840, (Optr)PBlock6841, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend6844, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6835 = new_Block_with(PArray6836, empty_Array, PThreadedCode6837, 3, PSend6840, PSend6844, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6845 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6835);
    Array PThreadedCode6834 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6835, (Optr)&t_send1, (Optr)PSend6845, (Optr)&t_method_return);
    Method PMethod6832 = new_Method_with(PArray6833, empty_Array, empty_Array, PThreadedCode6834, 1, PSend6845);
    
    MethodClosure MC_SMB_ifAtEnd_ = new_MethodClosure((Method)PMethod6832, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifAtEnd_, MC_SMB_ifAtEnd_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode6847 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_method_return);
    Method PMethod6846 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6847, 1, slot_Collection_StatefulArray_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod6846, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_ifAtFirst_() {
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6849 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6852 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend6854 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6858 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode6857 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend6858, (Optr)&t_block_return);
    Block PBlock6856 = new_Block_with(empty_Array, empty_Array, PThreadedCode6857, 1, PSend6858);
    // ifFalse:. 
    Send PSend6855 = new_Send((Optr)PSend6854, SMB_ifFalse_, 1, (Optr)PBlock6856);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6859 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode6853 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6854, (Optr)&t_send_ifFalse_, (Optr)PSend6855, (Optr)PBlock6856, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend6859, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6851 = new_Block_with(PArray6852, empty_Array, PThreadedCode6853, 3, PSend6855, PSend6859, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6860 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6851);
    Array PThreadedCode6850 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6851, (Optr)&t_send1, (Optr)PSend6860, (Optr)&t_method_return);
    Method PMethod6848 = new_Method_with(PArray6849, empty_Array, empty_Array, PThreadedCode6850, 1, PSend6860);
    
    MethodClosure MC_SMB_ifAtFirst_ = new_MethodClosure((Method)PMethod6848, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifAtFirst_, MC_SMB_ifAtFirst_);
}


static void init_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6863 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_StatefulArray_position);
    Array PThreadedCode6862 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_send1, (Optr)PSend6863, (Optr)&t_method_return);
    Method PMethod6861 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6862, 1, PSend6863);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PMethod6861, Collection_StatefulArray_Class);
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