#include <lib/class/Collection/StatefulArray.h>


Optr layout_Collection_StatefulArray_Class_class;
Optr slot_Collection_StatefulArray_position;
Optr layout_Collection_StatefulArray;


static void init_SMB_put_() {
    Symbol SMB_put_ = new_Symbol(L"put:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray6781 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6783 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)slot_Collection_StatefulArray_position, (Optr)VAR_value_0_0);
    Array PThreadedCode6782 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send2, (Optr)PSend6783, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6780 = new_Method_with(PArray6781, empty_Array, empty_Array, PThreadedCode6782, 2, PSend6783, self);
    
    MethodClosure MC_SMB_put_ = new_MethodClosure((Method)PMethod6780, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_put_, MC_SMB_put_);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6786 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend6787 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode6785 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6786, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6787, (Optr)&t_method_return);
    Method PMethod6784 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6785, 2, PAssign6786, PSend6787);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod6784, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6790 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6791 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6790);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6795 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Array PThreadedCode6794 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign6795, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6793 = new_Block_with(empty_Array, empty_Array, PThreadedCode6794, 1, PAssign6795);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6799 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6798 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)PSend6799);
    Array PThreadedCode6797 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6798, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6799, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6796 = new_Block_with(empty_Array, empty_Array, PThreadedCode6797, 1, PAssign6798);
    // ifTrue:ifFalse:. 
    Send PSend6792 = new_Send((Optr)PSend6791, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6793, (Optr)PBlock6796);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend6800 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode6789 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6790, (Optr)&t_send1, (Optr)PSend6791, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6792, (Optr)PBlock6793, (Optr)PBlock6796, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6800, (Optr)&t_method_return);
    Method PMethod6788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6789, 2, PSend6792, PSend6800);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6788, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_ifHasNext_() {
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6802 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6804 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6805 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6804);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6809 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6810 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6809);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6811 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6810);
    Array PThreadedCode6808 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6809, (Optr)&t_send1, (Optr)PSend6810, (Optr)&t_send1, (Optr)PSend6811, (Optr)&t_block_return);
    Block PBlock6807 = new_Block_with(empty_Array, empty_Array, PThreadedCode6808, 1, PSend6811);
    // ifFalse:. 
    Send PSend6806 = new_Send((Optr)PSend6805, SMB_ifFalse_, 1, (Optr)PBlock6807);
    Array PThreadedCode6803 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6804, (Optr)&t_send1, (Optr)PSend6805, (Optr)&t_send_ifFalse_, (Optr)PSend6806, (Optr)PBlock6807, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6801 = new_Method_with(PArray6802, empty_Array, empty_Array, PThreadedCode6803, 2, PSend6806, self);
    
    MethodClosure MC_SMB_ifHasNext_ = new_MethodClosure((Method)PMethod6801, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifHasNext_, MC_SMB_ifHasNext_);
}


static void init_SMB_doRest_() {
    Symbol SMB_doRest_ = new_Symbol(L"doRest:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6813 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6815 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6816 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6818 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6820 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6821 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6820);
    Array PThreadedCode6819 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6820, (Optr)&t_send1, (Optr)PSend6821, (Optr)&t_method_return);
    Block PBlock6817 = new_Block_with(PArray6818, empty_Array, PThreadedCode6819, 1, PSend6821);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend6822 = new_Send((Optr)PSend6815, SMB_to_do_, 2, (Optr)PSend6816, (Optr)PBlock6817);
    Array PThreadedCode6814 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6815, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6816, (Optr)&t_push_closure, (Optr)PBlock6817, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6822, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6812 = new_Method_with(PArray6813, empty_Array, empty_Array, PThreadedCode6814, 2, PSend6822, self);
    
    MethodClosure MC_SMB_doRest_ = new_MethodClosure((Method)PMethod6812, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_doRest_, MC_SMB_doRest_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6825 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Array PThreadedCode6824 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6825, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6823 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6824, 2, PAssign6825, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod6823, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_ifAtEnd_() {
    Symbol SMB_ifAtEnd_ = new_Symbol(L"ifAtEnd:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6827 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6830 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6832 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6833 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6832);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6837 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode6836 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend6837, (Optr)&t_block_return);
    Block PBlock6835 = new_Block_with(empty_Array, empty_Array, PThreadedCode6836, 1, PSend6837);
    // ifFalse:. 
    Send PSend6834 = new_Send((Optr)PSend6833, SMB_ifFalse_, 1, (Optr)PBlock6835);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6838 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode6831 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6832, (Optr)&t_send1, (Optr)PSend6833, (Optr)&t_send_ifFalse_, (Optr)PSend6834, (Optr)PBlock6835, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend6838, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6829 = new_Block_with(PArray6830, empty_Array, PThreadedCode6831, 3, PSend6834, PSend6838, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6839 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6829);
    Array PThreadedCode6828 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6829, (Optr)&t_send1, (Optr)PSend6839, (Optr)&t_method_return);
    Method PMethod6826 = new_Method_with(PArray6827, empty_Array, empty_Array, PThreadedCode6828, 1, PSend6839);
    
    MethodClosure MC_SMB_ifAtEnd_ = new_MethodClosure((Method)PMethod6826, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifAtEnd_, MC_SMB_ifAtEnd_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode6841 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_method_return);
    Method PMethod6840 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6841, 1, slot_Collection_StatefulArray_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod6840, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_ifAtFirst_() {
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6843 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6846 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend6848 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6852 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode6851 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend6852, (Optr)&t_block_return);
    Block PBlock6850 = new_Block_with(empty_Array, empty_Array, PThreadedCode6851, 1, PSend6852);
    // ifFalse:. 
    Send PSend6849 = new_Send((Optr)PSend6848, SMB_ifFalse_, 1, (Optr)PBlock6850);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6853 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode6847 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6848, (Optr)&t_send_ifFalse_, (Optr)PSend6849, (Optr)PBlock6850, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend6853, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6845 = new_Block_with(PArray6846, empty_Array, PThreadedCode6847, 3, PSend6849, PSend6853, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6854 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6845);
    Array PThreadedCode6844 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6845, (Optr)&t_send1, (Optr)PSend6854, (Optr)&t_method_return);
    Method PMethod6842 = new_Method_with(PArray6843, empty_Array, empty_Array, PThreadedCode6844, 1, PSend6854);
    
    MethodClosure MC_SMB_ifAtFirst_ = new_MethodClosure((Method)PMethod6842, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifAtFirst_, MC_SMB_ifAtFirst_);
}


static void init_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6857 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_StatefulArray_position);
    Array PThreadedCode6856 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_send1, (Optr)PSend6857, (Optr)&t_method_return);
    Method PMethod6855 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6856, 1, PSend6857);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PMethod6855, Collection_StatefulArray_Class);
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