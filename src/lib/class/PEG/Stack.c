#include <lib/class/PEG/Stack.h>


Optr layout_PEG_Stack_Class_class;
Optr slot_PEG_Stack_array;
Optr slot_PEG_Stack_size;
Optr slot_PEG_Stack_position;
Optr slot_PEG_Stack_mark;
Optr layout_PEG_Stack;


static void init_SMB_grow_() {
    Symbol SMB_grow_ = new_Symbol(L"grow:");
    Variable VAR_addition_0_0 = new_Variable_named(L"addition", 0);
    Array PArray19810 = new_Array_with(1, (Optr)VAR_addition_0_0);
    Variable VAR_newArray_0_1 = new_Variable_named(L"newArray", 0);
    Array PArray19811 = new_Array_with(1, (Optr)VAR_newArray_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend19816 = new_Send((Optr)slot_PEG_Stack_size, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB_max_ = new_Symbol(L"max:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19817 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_addition_0_0);
    // max:. 
    Send PSend19815 = new_Send((Optr)PSend19816, SMB_max_, 1, (Optr)PSend19817);
    // new:. 
    Send PSend19814 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend19815);
    Assign PAssign19813 = new_Assign((Optr)VAR_newArray_0_1, (Optr)PSend19814);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend19818 = new_Send((Optr)VAR_newArray_0_1, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)slot_PEG_Stack_size, (Optr)slot_PEG_Stack_array, (Optr)int_1_Const);
    Assign PAssign19819 = new_Assign((Optr)slot_PEG_Stack_array, (Optr)VAR_newArray_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19821 = new_Send((Optr)VAR_newArray_0_1, SMB_size, 0);
    Assign PAssign19820 = new_Assign((Optr)slot_PEG_Stack_size, (Optr)PSend19821);
    Array PThreadedCode19812 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign19813, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend19816, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_addition_0_0, (Optr)&t_send1, (Optr)PSend19817, (Optr)&t_send1, (Optr)PSend19815, (Optr)&t_send1, (Optr)PSend19814, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend19818, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19819, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19820, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_send0, (Optr)PSend19821, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19809 = new_Method_with(PArray19810, PArray19811, empty_Array, PThreadedCode19812, 5, PAssign19813, PSend19818, PAssign19819, PAssign19820, self);
    
    MethodClosure MC_SMB_grow_ = new_MethodClosure((Method)PMethod19809, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_grow_, MC_SMB_grow_);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend19824 = new_Send((Optr)slot_PEG_Stack_position, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_stackUnderflow = new_Symbol(L"stackUnderflow");
    // stackUnderflow. 
    Send PSend19828 = new_Send((Optr)self, SMB_stackUnderflow, 0);
    Array PThreadedCode19827 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19828, (Optr)&t_block_return);
    Block PBlock19826 = new_Block_with(empty_Array, empty_Array, PThreadedCode19827, 1, PSend19828);
    // ifFalse:. 
    Send PSend19825 = new_Send((Optr)PSend19824, SMB_ifFalse_, 1, (Optr)PBlock19826);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19829 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Array PThreadedCode19823 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19824, (Optr)&t_send_ifFalse_, (Optr)PSend19825, (Optr)PBlock19826, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend19829, (Optr)&t_method_return);
    Method PMethod19822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19823, 2, PSend19825, PSend19829);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod19822, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_poke_() {
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    Variable VAR_object_0_0 = new_Variable_named(L"object", 0);
    Array PArray19831 = new_Array_with(1, (Optr)VAR_object_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19833 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)slot_PEG_Stack_position, (Optr)VAR_object_0_0);
    Array PThreadedCode19832 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_object_0_0, (Optr)&t_send2, (Optr)PSend19833, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19830 = new_Method_with(PArray19831, empty_Array, empty_Array, PThreadedCode19832, 2, PSend19833, self);
    
    MethodClosure MC_SMB_poke_ = new_MethodClosure((Method)PMethod19830, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_poke_, MC_SMB_poke_);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19836 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19837 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend19836);
    Array PThreadedCode19835 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19836, (Optr)&t_send1, (Optr)PSend19837, (Optr)&t_method_return);
    Method PMethod19834 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19835, 1, PSend19837);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod19834, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_zap() {
    Symbol SMB_zap = new_Symbol(L"zap");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19841 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19840 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend19841);
    Array PThreadedCode19839 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19840, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19841, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19838 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19839, 2, PAssign19840, self);
    
    MethodClosure MC_SMB_zap = new_MethodClosure((Method)PMethod19838, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_zap, MC_SMB_zap);
}


static void init_SMB_mark_() {
    Symbol SMB_mark_ = new_Symbol(L"mark:");
    Variable VAR_m_0_0 = new_Variable_named(L"m", 0);
    Array PArray19843 = new_Array_with(1, (Optr)VAR_m_0_0);
    Assign PAssign19845 = new_Assign((Optr)slot_PEG_Stack_mark, (Optr)VAR_m_0_0);
    Array PThreadedCode19844 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19845, (Optr)&t_push_variable, (Optr)VAR_m_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19842 = new_Method_with(PArray19843, empty_Array, empty_Array, PThreadedCode19844, 2, PAssign19845, self);
    
    MethodClosure MC_SMB_mark_ = new_MethodClosure((Method)PMethod19842, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_mark_, MC_SMB_mark_);
}


static void init_SMB_asOrderedCollection() {
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    Variable VAR_collection_0_0 = new_Variable_named(L"collection", 0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19847 = new_Array_with(2, (Optr)VAR_collection_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19850 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign19849 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19850);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19852 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign19851 = new_Assign((Optr)VAR_collection_0_0, (Optr)PSend19852);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19854 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19856 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19857 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend19856);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19858 = new_Send((Optr)VAR_collection_0_0, SMB_add_, 1, (Optr)PSend19857);
    Array PThreadedCode19855 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19856, (Optr)&t_send1, (Optr)PSend19857, (Optr)&t_send1, (Optr)PSend19858, (Optr)&t_method_return);
    Block PBlock19853 = new_Block_with(PArray19854, empty_Array, PThreadedCode19855, 1, PSend19858);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19859 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock19853);
    Array PThreadedCode19848 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign19849, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19850, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19851, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19852, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock19853, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19859, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_method_return);
    Method PMethod19846 = new_Method_with(empty_Array, PArray19847, empty_Array, PThreadedCode19848, 4, PAssign19849, PAssign19851, PSend19859, VAR_collection_0_0);
    
    MethodClosure MC_SMB_asOrderedCollection = new_MethodClosure((Method)PMethod19846, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_asOrderedCollection, MC_SMB_asOrderedCollection);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_128 = new_SmallInt(128);
    Constant int_128_Const = new_Constant((Optr)int_128);
    Assign PAssign19862 = new_Assign((Optr)slot_PEG_Stack_size, (Optr)int_128_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19864 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_PEG_Stack_size);
    Assign PAssign19863 = new_Assign((Optr)slot_PEG_Stack_array, (Optr)PSend19864);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign19865 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)int_0_Const);
    Array PThreadedCode19861 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign19862, (Optr)&t_push1, (Optr)int_128, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19863, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_send1, (Optr)PSend19864, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19865, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19860 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19861, 4, PAssign19862, PAssign19863, PAssign19865, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19860, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray19867 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19869 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)VAR_index_0_0);
    // at:. 
    Send PSend19870 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend19869);
    Array PThreadedCode19868 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend19869, (Optr)&t_send1, (Optr)PSend19870, (Optr)&t_method_return);
    Method PMethod19866 = new_Method_with(PArray19867, empty_Array, empty_Array, PThreadedCode19868, 1, PSend19870);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod19866, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_pop() {
    Symbol SMB_pop = new_Symbol(L"pop");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray19872 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19875 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Assign PAssign19874 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend19875);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19877 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19876 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend19877);
    Array PThreadedCode19873 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign19874, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend19875, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19876, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19877, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod19871 = new_Method_with(empty_Array, PArray19872, empty_Array, PThreadedCode19873, 3, PAssign19874, PAssign19876, VAR_result_0_0);
    
    MethodClosure MC_SMB_pop = new_MethodClosure((Method)PMethod19871, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_pop, MC_SMB_pop);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray19879 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19881 = new_Send((Optr)self, SMB_push_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode19880 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend19881, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19878 = new_Method_with(PArray19879, empty_Array, empty_Array, PThreadedCode19880, 2, PSend19881, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod19878, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_push_() {
    Symbol SMB_push_ = new_Symbol(L"push:");
    Variable VAR_o_0_0 = new_Variable_named(L"o", 0);
    Array PArray19883 = new_Array_with(1, (Optr)VAR_o_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19886 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19885 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend19886);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend19887 = new_Send((Optr)slot_PEG_Stack_size, SMB__lt_, 1, (Optr)PAssign19885);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow_ = new_Symbol(L"grow:");
    // grow:. 
    Send PSend19891 = new_Send((Optr)self, SMB_grow_, 1, (Optr)int_1_Const);
    Array PThreadedCode19890 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19891, (Optr)&t_block_return);
    Block PBlock19889 = new_Block_with(empty_Array, empty_Array, PThreadedCode19890, 1, PSend19891);
    // ifTrue:. 
    Send PSend19888 = new_Send((Optr)PSend19887, SMB_ifTrue_, 1, (Optr)PBlock19889);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19892 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)slot_PEG_Stack_position, (Optr)VAR_o_0_0);
    Array PThreadedCode19884 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push1, (Optr)PAssign19885, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19886, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend19887, (Optr)&t_send_ifTrue_, (Optr)PSend19888, (Optr)PBlock19889, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_o_0_0, (Optr)&t_send2, (Optr)PSend19892, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19882 = new_Method_with(PArray19883, empty_Array, empty_Array, PThreadedCode19884, 3, PSend19888, PSend19892, self);
    
    MethodClosure MC_SMB_push_ = new_MethodClosure((Method)PMethod19882, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_push_, MC_SMB_push_);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend19895 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_2_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19896 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend19895);
    Array PThreadedCode19894 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend19895, (Optr)&t_send1, (Optr)PSend19896, (Optr)&t_method_return);
    Method PMethod19893 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19894, 1, PSend19896);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod19893, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_zapTo_() {
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray19898 = new_Array_with(1, (Optr)VAR_index_0_0);
    Assign PAssign19900 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)VAR_index_0_0);
    Array PThreadedCode19899 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19900, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19897 = new_Method_with(PArray19898, empty_Array, empty_Array, PThreadedCode19899, 2, PAssign19900, self);
    
    MethodClosure MC_SMB_zapTo_ = new_MethodClosure((Method)PMethod19897, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_zapTo_, MC_SMB_zapTo_);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19903 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Array PThreadedCode19902 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend19903, (Optr)&t_method_return);
    Method PMethod19901 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19902, 1, PSend19903);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod19901, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_newArray_0_0 = new_Variable_named(L"newArray", 0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19905 = new_Array_with(2, (Optr)VAR_newArray_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19908 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign19907 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19908);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19910 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign19909 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend19910);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19912 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19914 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19915 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend19914);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19916 = new_Send((Optr)VAR_newArray_0_0, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend19915);
    Array PThreadedCode19913 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19914, (Optr)&t_send1, (Optr)PSend19915, (Optr)&t_send2, (Optr)PSend19916, (Optr)&t_method_return);
    Block PBlock19911 = new_Block_with(PArray19912, empty_Array, PThreadedCode19913, 1, PSend19916);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19917 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock19911);
    Array PThreadedCode19906 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign19907, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19908, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19909, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19910, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock19911, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19917, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_method_return);
    Method PMethod19904 = new_Method_with(empty_Array, PArray19905, empty_Array, PThreadedCode19906, 4, PAssign19907, PAssign19909, PSend19917, VAR_newArray_0_0);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod19904, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19920 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Array PThreadedCode19919 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19920, (Optr)&t_method_return);
    Method PMethod19918 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19919, 1, PSend19920);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod19918, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Variable VAR_newArray_0_0 = new_Variable_named(L"newArray", 0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19922 = new_Array_with(2, (Optr)VAR_newArray_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19925 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign19924 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19925);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19927 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign19926 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend19927);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19929 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19931 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19932 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend19931);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19933 = new_Send((Optr)VAR_newArray_0_0, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend19932);
    Array PThreadedCode19930 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19931, (Optr)&t_send1, (Optr)PSend19932, (Optr)&t_send2, (Optr)PSend19933, (Optr)&t_method_return);
    Block PBlock19928 = new_Block_with(PArray19929, empty_Array, PThreadedCode19930, 1, PSend19933);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19934 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock19928);
    Array PThreadedCode19923 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign19924, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19925, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19926, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19927, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock19928, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19934, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_method_return);
    Method PMethod19921 = new_Method_with(empty_Array, PArray19922, empty_Array, PThreadedCode19923, 4, PAssign19924, PAssign19926, PSend19934, VAR_newArray_0_0);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod19921, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend19937 = new_Send((Optr)slot_PEG_Stack_position, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode19936 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19937, (Optr)&t_method_return);
    Method PMethod19935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19936, 1, PSend19937);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod19935, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_removeFirst() {
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19941 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19940 = new_Assign((Optr)slot_PEG_Stack_mark, (Optr)PSend19941);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19942 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_mark);
    Array PThreadedCode19939 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign19940, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19941, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19942, (Optr)&t_method_return);
    Method PMethod19938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19939, 2, PAssign19940, PSend19942);
    
    MethodClosure MC_SMB_removeFirst = new_MethodClosure((Method)PMethod19938, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_removeFirst, MC_SMB_removeFirst);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend19945 = new_Send((Optr)self, SMB_asString, 0);
    // asSymbol. 
    Send PSend19946 = new_Send((Optr)PSend19945, SMB_asSymbol, 0);
    Array PThreadedCode19944 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19945, (Optr)&t_send0, (Optr)PSend19946, (Optr)&t_method_return);
    Method PMethod19943 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19944, 1, PSend19946);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PMethod19943, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray19948 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_value_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19950 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)VAR_index_0_0);
    // at:put:. 
    Send PSend19951 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)PSend19950, (Optr)VAR_value_0_1);
    Array PThreadedCode19949 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend19950, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend19951, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19947 = new_Method_with(PArray19948, empty_Array, empty_Array, PThreadedCode19949, 2, PSend19951, self);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PMethod19947, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_collect_() {
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray19953 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray19954 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19958 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend19957 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend19958);
    Assign PAssign19956 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend19957);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19959 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19961 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19963 = new_Send((Optr)VAR_i_1_0, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19964 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19965 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend19964);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19966 = new_Send((Optr)VAR_newCollection_0_1, SMB_at_put_, 2, (Optr)PSend19963, (Optr)PSend19965);
    Array PThreadedCode19962 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend19963, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend19964, (Optr)&t_send1, (Optr)PSend19965, (Optr)&t_send2, (Optr)PSend19966, (Optr)&t_method_return);
    Block PBlock19960 = new_Block_with(PArray19961, empty_Array, PThreadedCode19962, 1, PSend19966);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19967 = new_Send((Optr)PSend19959, SMB_to_do_, 2, (Optr)slot_PEG_Stack_position, (Optr)PBlock19960);
    Array PThreadedCode19955 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign19956, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19958, (Optr)&t_send1, (Optr)PSend19957, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19959, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_closure, (Optr)PBlock19960, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19967, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod19952 = new_Method_with(PArray19953, PArray19954, empty_Array, PThreadedCode19955, 3, PAssign19956, PSend19967, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod19952, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_collect_, MC_SMB_collect_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray19969 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19971 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19973 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19975 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19976 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)PSend19975);
    Array PThreadedCode19974 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend19975, (Optr)&t_send1, (Optr)PSend19976, (Optr)&t_method_return);
    Block PBlock19972 = new_Block_with(PArray19973, empty_Array, PThreadedCode19974, 1, PSend19976);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19977 = new_Send((Optr)PSend19971, SMB_to_do_, 2, (Optr)slot_PEG_Stack_position, (Optr)PBlock19972);
    Array PThreadedCode19970 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19971, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_closure, (Optr)PBlock19972, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19977, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19968 = new_Method_with(PArray19969, empty_Array, empty_Array, PThreadedCode19970, 2, PSend19977, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod19968, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray19979 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray19980 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign19982 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray19984 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend19987 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign19986 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend19987);
    Array PThreadedCode19985 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign19986, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend19987, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock19983 = new_Block_with(PArray19984, empty_Array, PThreadedCode19985, 1, PAssign19986);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19988 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock19983);
    Array PThreadedCode19981 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign19982, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock19983, (Optr)&t_send1, (Optr)PSend19988, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod19978 = new_Method_with(PArray19979, PArray19980, empty_Array, PThreadedCode19981, 3, PAssign19982, PSend19988, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod19978, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode19990 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_method_return);
    Method PMethod19989 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19990, 1, slot_PEG_Stack_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod19989, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_removeLast() {
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    Symbol SMB_pop = new_Symbol(L"pop");
    // pop. 
    Send PSend19993 = new_Send((Optr)self, SMB_pop, 0);
    Array PThreadedCode19992 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19993, (Optr)&t_method_return);
    Method PMethod19991 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19992, 1, PSend19993);
    
    MethodClosure MC_SMB_removeLast = new_MethodClosure((Method)PMethod19991, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_removeLast, MC_SMB_removeLast);
}


static void init_SMB_push_from_to_() {
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    Variable VAR_collection_0_0 = new_Variable_named(L"collection", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_end_0_2 = new_Variable_named(L"end", 0);
    Array PArray19995 = new_Array_with(3, (Optr)VAR_collection_0_0, (Optr)VAR_start_0_1, (Optr)VAR_end_0_2);
    Variable VAR_amount_0_3 = new_Variable_named(L"amount", 0);
    Array PArray19996 = new_Array_with(1, (Optr)VAR_amount_0_3);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19999 = new_Send((Optr)VAR_end_0_2, SMB__minus_, 1, (Optr)VAR_start_0_1);
    Assign PAssign19998 = new_Assign((Optr)VAR_amount_0_3, (Optr)PSend19999);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20000 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_amount_0_3);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend20001 = new_Send((Optr)slot_PEG_Stack_size, SMB__lt_, 1, (Optr)PSend20000);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow_ = new_Symbol(L"grow:");
    // grow:. 
    Send PSend20005 = new_Send((Optr)self, SMB_grow_, 1, (Optr)VAR_amount_0_3);
    Array PThreadedCode20004 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend20005, (Optr)&t_block_return);
    Block PBlock20003 = new_Block_with(empty_Array, empty_Array, PThreadedCode20004, 1, PSend20005);
    // ifTrue:. 
    Send PSend20002 = new_Send((Optr)PSend20001, SMB_ifTrue_, 1, (Optr)PBlock20003);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20007 = new_Array_with(1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend20009 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend20010 = new_Send((Optr)VAR_start_0_1, SMB__plus_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20011 = new_Send((Optr)VAR_collection_0_0, SMB_at_, 1, (Optr)PSend20010);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20012 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)PSend20009, (Optr)PSend20011);
    Array PThreadedCode20008 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20009, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20010, (Optr)&t_send1, (Optr)PSend20011, (Optr)&t_send2, (Optr)PSend20012, (Optr)&t_method_return);
    Block PBlock20006 = new_Block_with(PArray20007, empty_Array, PThreadedCode20008, 1, PSend20012);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20013 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_amount_0_3, (Optr)PBlock20006);
    // +. 
    Send PSend20015 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_amount_0_3);
    Assign PAssign20014 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend20015);
    Array PThreadedCode19997 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign19998, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_send1, (Optr)PSend19999, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend20000, (Optr)&t_send1, (Optr)PSend20001, (Optr)&t_send_ifTrue_, (Optr)PSend20002, (Optr)PBlock20003, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_push_closure, (Optr)PBlock20006, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20013, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20014, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend20015, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19994 = new_Method_with(PArray19995, PArray19996, empty_Array, PThreadedCode19997, 5, PAssign19998, PSend20002, PSend20013, PAssign20014, self);
    
    MethodClosure MC_SMB_push_from_to_ = new_MethodClosure((Method)PMethod19994, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_push_from_to_, MC_SMB_push_from_to_);
}

void init_PEG_PEGStack_layout() {
    layout_PEG_Stack_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_Stack_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_Stack_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_Stack_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_Stack_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_Stack_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Stack = new_Symbol(L"Stack");
    slot_PEG_Stack_array = (Optr)new_Slot(0, L"array");
    slot_PEG_Stack_size = (Optr)new_Slot(1, L"size");
    slot_PEG_Stack_position = (Optr)new_Slot(2, L"position");
    slot_PEG_Stack_mark = (Optr)new_Slot(3, L"mark");
    layout_PEG_Stack = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_PEG_Stack)->values[0] = slot_PEG_Stack_array; // array 
    ((Array)layout_PEG_Stack)->values[1] = slot_PEG_Stack_size; // size 
    ((Array)layout_PEG_Stack)->values[2] = slot_PEG_Stack_position; // position 
    ((Array)layout_PEG_Stack)->values[3] = slot_PEG_Stack_mark; // mark 
    PEG_Stack_Class = (Class)new_Class(Object_Class, layout_PEG_Stack_Class_class);
    PEG_Stack_Class->layout = layout_PEG_Stack;
    PEG_Stack_Class->name = SMB_Stack;
    
}

void init_PEG_PEGStack_methods() {
    init_SMB_grow_();
    init_SMB_last();
    init_SMB_poke_();
    init_SMB_first();
    init_SMB_zap();
    init_SMB_mark_();
    init_SMB_asOrderedCollection();
    init_SMB_initialize();
    init_SMB_at_();
    init_SMB_pop();
    init_SMB_add_();
    init_SMB_push_();
    init_SMB_second();
    init_SMB_zapTo_();
    init_SMB_peek();
    init_SMB_asString();
    init_SMB_size();
    init_SMB_asArray();
    init_SMB_isEmpty();
    init_SMB_removeFirst();
    init_SMB_asSymbol();
    init_SMB_at_put_();
    init_SMB_collect_();
    init_SMB_do_();
    init_SMB_inject_into_();
    init_SMB_position();
    init_SMB_removeLast();
    init_SMB_push_from_to_();
    
}