#include <lib/class/Collection/StatefulArray.h>


Optr layout_Collection_StatefulArray_Class_class;
Optr slot_Collection_StatefulArray_position;
Optr layout_Collection_StatefulArray;


static void init_SMB_put_() {
    Symbol SMB_put_ = new_Symbol(L"put:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray6798 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6800 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)slot_Collection_StatefulArray_position, (Optr)VAR_value_0_0);
    Array PThreadedCode6799 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send2, (Optr)PSend6800, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6797 = new_Method_with(PArray6798, empty_Array, empty_Array, PThreadedCode6799, 2, PSend6800, self);
    
    MethodClosure MC_SMB_put_ = new_MethodClosure((Method)PMethod6797, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_put_, MC_SMB_put_);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6803 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend6804 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode6802 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6803, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6804, (Optr)&t_method_return);
    Method PMethod6801 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6802, 2, PAssign6803, PSend6804);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod6801, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6807 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6808 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6807);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6812 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Array PThreadedCode6811 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign6812, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6810 = new_Block_with(empty_Array, empty_Array, PThreadedCode6811, 1, PAssign6812);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6816 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6815 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)PSend6816);
    Array PThreadedCode6814 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6815, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6816, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6813 = new_Block_with(empty_Array, empty_Array, PThreadedCode6814, 1, PAssign6815);
    // ifTrue:ifFalse:. 
    Send PSend6809 = new_Send((Optr)PSend6808, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6810, (Optr)PBlock6813);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend6817 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode6806 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6807, (Optr)&t_send1, (Optr)PSend6808, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6809, (Optr)PBlock6810, (Optr)PBlock6813, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6817, (Optr)&t_method_return);
    Method PMethod6805 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6806, 2, PSend6809, PSend6817);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6805, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_ifHasNext_() {
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6819 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6821 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6822 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6821);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6826 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6827 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend6826);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6828 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6827);
    Array PThreadedCode6825 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6826, (Optr)&t_send1, (Optr)PSend6827, (Optr)&t_send1, (Optr)PSend6828, (Optr)&t_block_return);
    Block PBlock6824 = new_Block_with(empty_Array, empty_Array, PThreadedCode6825, 1, PSend6828);
    // ifFalse:. 
    Send PSend6823 = new_Send((Optr)PSend6822, SMB_ifFalse_, 1, (Optr)PBlock6824);
    Array PThreadedCode6820 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6821, (Optr)&t_send1, (Optr)PSend6822, (Optr)&t_send_ifFalse_, (Optr)PSend6823, (Optr)PBlock6824, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6818 = new_Method_with(PArray6819, empty_Array, empty_Array, PThreadedCode6820, 2, PSend6823, self);
    
    MethodClosure MC_SMB_ifHasNext_ = new_MethodClosure((Method)PMethod6818, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifHasNext_, MC_SMB_ifHasNext_);
}


static void init_SMB_doRest_() {
    Symbol SMB_doRest_ = new_Symbol(L"doRest:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6830 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6832 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6833 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6835 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6837 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend6838 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend6837);
    Array PThreadedCode6836 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend6837, (Optr)&t_send1, (Optr)PSend6838, (Optr)&t_method_return);
    Block PBlock6834 = new_Block_with(PArray6835, empty_Array, PThreadedCode6836, 1, PSend6838);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend6839 = new_Send((Optr)PSend6832, SMB_to_do_, 2, (Optr)PSend6833, (Optr)PBlock6834);
    Array PThreadedCode6831 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6832, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6833, (Optr)&t_push_closure, (Optr)PBlock6834, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6839, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6829 = new_Method_with(PArray6830, empty_Array, empty_Array, PThreadedCode6831, 2, PSend6839, self);
    
    MethodClosure MC_SMB_doRest_ = new_MethodClosure((Method)PMethod6829, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_doRest_, MC_SMB_doRest_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign6842 = new_Assign((Optr)slot_Collection_StatefulArray_position, (Optr)int_1_Const);
    Array PThreadedCode6841 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6842, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6840 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6841, 2, PAssign6842, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod6840, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_ifAtEnd_() {
    Symbol SMB_ifAtEnd_ = new_Symbol(L"ifAtEnd:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6844 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6847 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6849 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6850 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)PSend6849);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6854 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode6853 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend6854, (Optr)&t_block_return);
    Block PBlock6852 = new_Block_with(empty_Array, empty_Array, PThreadedCode6853, 1, PSend6854);
    // ifFalse:. 
    Send PSend6851 = new_Send((Optr)PSend6850, SMB_ifFalse_, 1, (Optr)PBlock6852);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6855 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode6848 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6849, (Optr)&t_send1, (Optr)PSend6850, (Optr)&t_send_ifFalse_, (Optr)PSend6851, (Optr)PBlock6852, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend6855, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6846 = new_Block_with(PArray6847, empty_Array, PThreadedCode6848, 3, PSend6851, PSend6855, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6856 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6846);
    Array PThreadedCode6845 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6846, (Optr)&t_send1, (Optr)PSend6856, (Optr)&t_method_return);
    Method PMethod6843 = new_Method_with(PArray6844, empty_Array, empty_Array, PThreadedCode6845, 1, PSend6856);
    
    MethodClosure MC_SMB_ifAtEnd_ = new_MethodClosure((Method)PMethod6843, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifAtEnd_, MC_SMB_ifAtEnd_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode6858 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_method_return);
    Method PMethod6857 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6858, 1, slot_Collection_StatefulArray_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod6857, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_ifAtFirst_() {
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray6860 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6863 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend6865 = new_Send((Optr)slot_Collection_StatefulArray_position, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6869 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode6868 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend6869, (Optr)&t_block_return);
    Block PBlock6867 = new_Block_with(empty_Array, empty_Array, PThreadedCode6868, 1, PSend6869);
    // ifFalse:. 
    Send PSend6866 = new_Send((Optr)PSend6865, SMB_ifFalse_, 1, (Optr)PBlock6867);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend6870 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode6864 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6865, (Optr)&t_send_ifFalse_, (Optr)PSend6866, (Optr)PBlock6867, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend6870, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6862 = new_Block_with(PArray6863, empty_Array, PThreadedCode6864, 3, PSend6866, PSend6870, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6871 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6862);
    Array PThreadedCode6861 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6862, (Optr)&t_send1, (Optr)PSend6871, (Optr)&t_method_return);
    Method PMethod6859 = new_Method_with(PArray6860, empty_Array, empty_Array, PThreadedCode6861, 1, PSend6871);
    
    MethodClosure MC_SMB_ifAtFirst_ = new_MethodClosure((Method)PMethod6859, Collection_StatefulArray_Class);
    store_method(Collection_StatefulArray_Class, SMB_ifAtFirst_, MC_SMB_ifAtFirst_);
}


static void init_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6874 = new_Send((Optr)self, SMB_at_, 1, (Optr)slot_Collection_StatefulArray_position);
    Array PThreadedCode6873 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_StatefulArray_position, (Optr)&t_send1, (Optr)PSend6874, (Optr)&t_method_return);
    Method PMethod6872 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6873, 1, PSend6874);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PMethod6872, Collection_StatefulArray_Class);
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