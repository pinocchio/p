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
    Array PArray19999 = new_Array_with(1, (Optr)VAR_addition_0_0);
    Variable VAR_newArray_0_1 = new_Variable_named(L"newArray", 0);
    Array PArray20000 = new_Array_with(1, (Optr)VAR_newArray_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend20005 = new_Send((Optr)slot_PEG_Stack_size, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB_max_ = new_Symbol(L"max:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20006 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_addition_0_0);
    // max:. 
    Send PSend20004 = new_Send((Optr)PSend20005, SMB_max_, 1, (Optr)PSend20006);
    // new:. 
    Send PSend20003 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend20004);
    Assign PAssign20002 = new_Assign((Optr)VAR_newArray_0_1, (Optr)PSend20003);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend20007 = new_Send((Optr)VAR_newArray_0_1, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)slot_PEG_Stack_size, (Optr)slot_PEG_Stack_array, (Optr)int_1_Const);
    Assign PAssign20008 = new_Assign((Optr)slot_PEG_Stack_array, (Optr)VAR_newArray_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20010 = new_Send((Optr)VAR_newArray_0_1, SMB_size, 0);
    Assign PAssign20009 = new_Assign((Optr)slot_PEG_Stack_size, (Optr)PSend20010);
    Array PThreadedCode20001 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign20002, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20005, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_addition_0_0, (Optr)&t_send1, (Optr)PSend20006, (Optr)&t_send1, (Optr)PSend20004, (Optr)&t_send1, (Optr)PSend20003, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend20007, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20008, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20009, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_send0, (Optr)PSend20010, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19998 = new_Method_with(PArray19999, PArray20000, empty_Array, PThreadedCode20001, 5, PAssign20002, PSend20007, PAssign20008, PAssign20009, self);
    
    MethodClosure MC_SMB_grow_ = new_MethodClosure((Method)PMethod19998, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_grow_, MC_SMB_grow_);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend20013 = new_Send((Optr)slot_PEG_Stack_position, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_stackUnderflow = new_Symbol(L"stackUnderflow");
    // stackUnderflow. 
    Send PSend20017 = new_Send((Optr)self, SMB_stackUnderflow, 0);
    Array PThreadedCode20016 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20017, (Optr)&t_block_return);
    Block PBlock20015 = new_Block_with(empty_Array, empty_Array, PThreadedCode20016, 1, PSend20017);
    // ifFalse:. 
    Send PSend20014 = new_Send((Optr)PSend20013, SMB_ifFalse_, 1, (Optr)PBlock20015);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20018 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Array PThreadedCode20012 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20013, (Optr)&t_send_ifFalse_, (Optr)PSend20014, (Optr)PBlock20015, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend20018, (Optr)&t_method_return);
    Method PMethod20011 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20012, 2, PSend20014, PSend20018);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod20011, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_poke_() {
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    Variable VAR_object_0_0 = new_Variable_named(L"object", 0);
    Array PArray20020 = new_Array_with(1, (Optr)VAR_object_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20022 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)slot_PEG_Stack_position, (Optr)VAR_object_0_0);
    Array PThreadedCode20021 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_object_0_0, (Optr)&t_send2, (Optr)PSend20022, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20019 = new_Method_with(PArray20020, empty_Array, empty_Array, PThreadedCode20021, 2, PSend20022, self);
    
    MethodClosure MC_SMB_poke_ = new_MethodClosure((Method)PMethod20019, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_poke_, MC_SMB_poke_);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20025 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20026 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20025);
    Array PThreadedCode20024 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20025, (Optr)&t_send1, (Optr)PSend20026, (Optr)&t_method_return);
    Method PMethod20023 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20024, 1, PSend20026);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod20023, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_zap() {
    Symbol SMB_zap = new_Symbol(L"zap");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend20030 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign20029 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend20030);
    Array PThreadedCode20028 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign20029, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20030, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20027 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20028, 2, PAssign20029, self);
    
    MethodClosure MC_SMB_zap = new_MethodClosure((Method)PMethod20027, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_zap, MC_SMB_zap);
}


static void init_SMB_mark_() {
    Symbol SMB_mark_ = new_Symbol(L"mark:");
    Variable VAR_m_0_0 = new_Variable_named(L"m", 0);
    Array PArray20032 = new_Array_with(1, (Optr)VAR_m_0_0);
    Assign PAssign20034 = new_Assign((Optr)slot_PEG_Stack_mark, (Optr)VAR_m_0_0);
    Array PThreadedCode20033 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20034, (Optr)&t_push_variable, (Optr)VAR_m_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20031 = new_Method_with(PArray20032, empty_Array, empty_Array, PThreadedCode20033, 2, PAssign20034, self);
    
    MethodClosure MC_SMB_mark_ = new_MethodClosure((Method)PMethod20031, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_mark_, MC_SMB_mark_);
}


static void init_SMB_asOrderedCollection() {
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    Variable VAR_collection_0_0 = new_Variable_named(L"collection", 0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray20036 = new_Array_with(2, (Optr)VAR_collection_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20039 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign20038 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend20039);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend20041 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign20040 = new_Assign((Optr)VAR_collection_0_0, (Optr)PSend20041);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20043 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20045 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20046 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20045);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend20047 = new_Send((Optr)VAR_collection_0_0, SMB_add_, 1, (Optr)PSend20046);
    Array PThreadedCode20044 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20045, (Optr)&t_send1, (Optr)PSend20046, (Optr)&t_send1, (Optr)PSend20047, (Optr)&t_method_return);
    Block PBlock20042 = new_Block_with(PArray20043, empty_Array, PThreadedCode20044, 1, PSend20047);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20048 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock20042);
    Array PThreadedCode20037 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20038, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20039, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20040, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend20041, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock20042, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20048, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_method_return);
    Method PMethod20035 = new_Method_with(empty_Array, PArray20036, empty_Array, PThreadedCode20037, 4, PAssign20038, PAssign20040, PSend20048, VAR_collection_0_0);
    
    MethodClosure MC_SMB_asOrderedCollection = new_MethodClosure((Method)PMethod20035, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_asOrderedCollection, MC_SMB_asOrderedCollection);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_128 = new_SmallInt(128);
    Constant int_128_Const = new_Constant((Optr)int_128);
    Assign PAssign20051 = new_Assign((Optr)slot_PEG_Stack_size, (Optr)int_128_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend20053 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_PEG_Stack_size);
    Assign PAssign20052 = new_Assign((Optr)slot_PEG_Stack_array, (Optr)PSend20053);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign20054 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)int_0_Const);
    Array PThreadedCode20050 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign20051, (Optr)&t_push1, (Optr)int_128, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20052, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_send1, (Optr)PSend20053, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20054, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20049 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20050, 4, PAssign20051, PAssign20052, PAssign20054, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod20049, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray20056 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20058 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)VAR_index_0_0);
    // at:. 
    Send PSend20059 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20058);
    Array PThreadedCode20057 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend20058, (Optr)&t_send1, (Optr)PSend20059, (Optr)&t_method_return);
    Method PMethod20055 = new_Method_with(PArray20056, empty_Array, empty_Array, PThreadedCode20057, 1, PSend20059);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod20055, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_pop() {
    Symbol SMB_pop = new_Symbol(L"pop");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray20061 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20064 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Assign PAssign20063 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend20064);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend20066 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign20065 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend20066);
    Array PThreadedCode20062 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign20063, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend20064, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20065, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20066, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod20060 = new_Method_with(empty_Array, PArray20061, empty_Array, PThreadedCode20062, 3, PAssign20063, PAssign20065, VAR_result_0_0);
    
    MethodClosure MC_SMB_pop = new_MethodClosure((Method)PMethod20060, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_pop, MC_SMB_pop);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray20068 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend20070 = new_Send((Optr)self, SMB_push_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode20069 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend20070, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20067 = new_Method_with(PArray20068, empty_Array, empty_Array, PThreadedCode20069, 2, PSend20070, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod20067, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_push_() {
    Symbol SMB_push_ = new_Symbol(L"push:");
    Variable VAR_o_0_0 = new_Variable_named(L"o", 0);
    Array PArray20072 = new_Array_with(1, (Optr)VAR_o_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20075 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign20074 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend20075);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend20076 = new_Send((Optr)slot_PEG_Stack_size, SMB__lt_, 1, (Optr)PAssign20074);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow_ = new_Symbol(L"grow:");
    // grow:. 
    Send PSend20080 = new_Send((Optr)self, SMB_grow_, 1, (Optr)int_1_Const);
    Array PThreadedCode20079 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20080, (Optr)&t_block_return);
    Block PBlock20078 = new_Block_with(empty_Array, empty_Array, PThreadedCode20079, 1, PSend20080);
    // ifTrue:. 
    Send PSend20077 = new_Send((Optr)PSend20076, SMB_ifTrue_, 1, (Optr)PBlock20078);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20081 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)slot_PEG_Stack_position, (Optr)VAR_o_0_0);
    Array PThreadedCode20073 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push1, (Optr)PAssign20074, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20075, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend20076, (Optr)&t_send_ifTrue_, (Optr)PSend20077, (Optr)PBlock20078, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_o_0_0, (Optr)&t_send2, (Optr)PSend20081, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20071 = new_Method_with(PArray20072, empty_Array, empty_Array, PThreadedCode20073, 3, PSend20077, PSend20081, self);
    
    MethodClosure MC_SMB_push_ = new_MethodClosure((Method)PMethod20071, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_push_, MC_SMB_push_);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend20084 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_2_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20085 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20084);
    Array PThreadedCode20083 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20084, (Optr)&t_send1, (Optr)PSend20085, (Optr)&t_method_return);
    Method PMethod20082 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20083, 1, PSend20085);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20082, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_zapTo_() {
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray20087 = new_Array_with(1, (Optr)VAR_index_0_0);
    Assign PAssign20089 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)VAR_index_0_0);
    Array PThreadedCode20088 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20089, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20086 = new_Method_with(PArray20087, empty_Array, empty_Array, PThreadedCode20088, 2, PAssign20089, self);
    
    MethodClosure MC_SMB_zapTo_ = new_MethodClosure((Method)PMethod20086, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_zapTo_, MC_SMB_zapTo_);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20092 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Array PThreadedCode20091 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend20092, (Optr)&t_method_return);
    Method PMethod20090 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20091, 1, PSend20092);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod20090, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_newArray_0_0 = new_Variable_named(L"newArray", 0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray20094 = new_Array_with(2, (Optr)VAR_newArray_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20097 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign20096 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend20097);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend20099 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign20098 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend20099);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20101 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20103 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20104 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20103);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20105 = new_Send((Optr)VAR_newArray_0_0, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend20104);
    Array PThreadedCode20102 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20103, (Optr)&t_send1, (Optr)PSend20104, (Optr)&t_send2, (Optr)PSend20105, (Optr)&t_method_return);
    Block PBlock20100 = new_Block_with(PArray20101, empty_Array, PThreadedCode20102, 1, PSend20105);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20106 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock20100);
    Array PThreadedCode20095 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20096, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20097, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20098, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend20099, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock20100, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20106, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_method_return);
    Method PMethod20093 = new_Method_with(empty_Array, PArray20094, empty_Array, PThreadedCode20095, 4, PAssign20096, PAssign20098, PSend20106, VAR_newArray_0_0);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod20093, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20109 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Array PThreadedCode20108 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20109, (Optr)&t_method_return);
    Method PMethod20107 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20108, 1, PSend20109);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod20107, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Variable VAR_newArray_0_0 = new_Variable_named(L"newArray", 0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray20111 = new_Array_with(2, (Optr)VAR_newArray_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20114 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign20113 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend20114);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend20116 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign20115 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend20116);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20118 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20120 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20121 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20120);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20122 = new_Send((Optr)VAR_newArray_0_0, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend20121);
    Array PThreadedCode20119 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20120, (Optr)&t_send1, (Optr)PSend20121, (Optr)&t_send2, (Optr)PSend20122, (Optr)&t_method_return);
    Block PBlock20117 = new_Block_with(PArray20118, empty_Array, PThreadedCode20119, 1, PSend20122);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20123 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock20117);
    Array PThreadedCode20112 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20113, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20114, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20115, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend20116, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock20117, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20123, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_method_return);
    Method PMethod20110 = new_Method_with(empty_Array, PArray20111, empty_Array, PThreadedCode20112, 4, PAssign20113, PAssign20115, PSend20123, VAR_newArray_0_0);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod20110, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20126 = new_Send((Optr)slot_PEG_Stack_position, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode20125 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20126, (Optr)&t_method_return);
    Method PMethod20124 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20125, 1, PSend20126);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod20124, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_removeFirst() {
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20130 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign20129 = new_Assign((Optr)slot_PEG_Stack_mark, (Optr)PSend20130);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20131 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_mark);
    Array PThreadedCode20128 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign20129, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20130, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20131, (Optr)&t_method_return);
    Method PMethod20127 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20128, 2, PAssign20129, PSend20131);
    
    MethodClosure MC_SMB_removeFirst = new_MethodClosure((Method)PMethod20127, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_removeFirst, MC_SMB_removeFirst);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend20134 = new_Send((Optr)self, SMB_asString, 0);
    // asSymbol. 
    Send PSend20135 = new_Send((Optr)PSend20134, SMB_asSymbol, 0);
    Array PThreadedCode20133 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20134, (Optr)&t_send0, (Optr)PSend20135, (Optr)&t_method_return);
    Method PMethod20132 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20133, 1, PSend20135);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PMethod20132, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray20137 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_value_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20139 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)VAR_index_0_0);
    // at:put:. 
    Send PSend20140 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)PSend20139, (Optr)VAR_value_0_1);
    Array PThreadedCode20138 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend20139, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend20140, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20136 = new_Method_with(PArray20137, empty_Array, empty_Array, PThreadedCode20138, 2, PSend20140, self);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PMethod20136, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_collect_() {
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20142 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray20143 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20147 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend20146 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend20147);
    Assign PAssign20145 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend20146);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20148 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20150 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20152 = new_Send((Optr)VAR_i_1_0, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20153 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20154 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend20153);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20155 = new_Send((Optr)VAR_newCollection_0_1, SMB_at_put_, 2, (Optr)PSend20152, (Optr)PSend20154);
    Array PThreadedCode20151 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20152, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20153, (Optr)&t_send1, (Optr)PSend20154, (Optr)&t_send2, (Optr)PSend20155, (Optr)&t_method_return);
    Block PBlock20149 = new_Block_with(PArray20150, empty_Array, PThreadedCode20151, 1, PSend20155);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20156 = new_Send((Optr)PSend20148, SMB_to_do_, 2, (Optr)slot_PEG_Stack_position, (Optr)PBlock20149);
    Array PThreadedCode20144 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign20145, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20147, (Optr)&t_send1, (Optr)PSend20146, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20148, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_closure, (Optr)PBlock20149, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20156, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod20141 = new_Method_with(PArray20142, PArray20143, empty_Array, PThreadedCode20144, 3, PAssign20145, PSend20156, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod20141, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_collect_, MC_SMB_collect_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray20158 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20160 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20162 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20164 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20165 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)PSend20164);
    Array PThreadedCode20163 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20164, (Optr)&t_send1, (Optr)PSend20165, (Optr)&t_method_return);
    Block PBlock20161 = new_Block_with(PArray20162, empty_Array, PThreadedCode20163, 1, PSend20165);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20166 = new_Send((Optr)PSend20160, SMB_to_do_, 2, (Optr)slot_PEG_Stack_position, (Optr)PBlock20161);
    Array PThreadedCode20159 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20160, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_closure, (Optr)PBlock20161, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20166, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20157 = new_Method_with(PArray20158, empty_Array, empty_Array, PThreadedCode20159, 2, PSend20166, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod20157, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray20168 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray20169 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign20171 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray20173 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend20176 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign20175 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend20176);
    Array PThreadedCode20174 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign20175, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend20176, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock20172 = new_Block_with(PArray20173, empty_Array, PThreadedCode20174, 1, PAssign20175);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend20177 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock20172);
    Array PThreadedCode20170 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign20171, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20172, (Optr)&t_send1, (Optr)PSend20177, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod20167 = new_Method_with(PArray20168, PArray20169, empty_Array, PThreadedCode20170, 3, PAssign20171, PSend20177, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod20167, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode20179 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_method_return);
    Method PMethod20178 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20179, 1, slot_PEG_Stack_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod20178, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_removeLast() {
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    Symbol SMB_pop = new_Symbol(L"pop");
    // pop. 
    Send PSend20182 = new_Send((Optr)self, SMB_pop, 0);
    Array PThreadedCode20181 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20182, (Optr)&t_method_return);
    Method PMethod20180 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20181, 1, PSend20182);
    
    MethodClosure MC_SMB_removeLast = new_MethodClosure((Method)PMethod20180, PEG_Stack_Class);
    store_method(PEG_Stack_Class, SMB_removeLast, MC_SMB_removeLast);
}


static void init_SMB_push_from_to_() {
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    Variable VAR_collection_0_0 = new_Variable_named(L"collection", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_end_0_2 = new_Variable_named(L"end", 0);
    Array PArray20184 = new_Array_with(3, (Optr)VAR_collection_0_0, (Optr)VAR_start_0_1, (Optr)VAR_end_0_2);
    Variable VAR_amount_0_3 = new_Variable_named(L"amount", 0);
    Array PArray20185 = new_Array_with(1, (Optr)VAR_amount_0_3);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20188 = new_Send((Optr)VAR_end_0_2, SMB__minus_, 1, (Optr)VAR_start_0_1);
    Assign PAssign20187 = new_Assign((Optr)VAR_amount_0_3, (Optr)PSend20188);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20189 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_amount_0_3);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend20190 = new_Send((Optr)slot_PEG_Stack_size, SMB__lt_, 1, (Optr)PSend20189);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow_ = new_Symbol(L"grow:");
    // grow:. 
    Send PSend20194 = new_Send((Optr)self, SMB_grow_, 1, (Optr)VAR_amount_0_3);
    Array PThreadedCode20193 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend20194, (Optr)&t_block_return);
    Block PBlock20192 = new_Block_with(empty_Array, empty_Array, PThreadedCode20193, 1, PSend20194);
    // ifTrue:. 
    Send PSend20191 = new_Send((Optr)PSend20190, SMB_ifTrue_, 1, (Optr)PBlock20192);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20196 = new_Array_with(1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend20198 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend20199 = new_Send((Optr)VAR_start_0_1, SMB__plus_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20200 = new_Send((Optr)VAR_collection_0_0, SMB_at_, 1, (Optr)PSend20199);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20201 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)PSend20198, (Optr)PSend20200);
    Array PThreadedCode20197 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20198, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20199, (Optr)&t_send1, (Optr)PSend20200, (Optr)&t_send2, (Optr)PSend20201, (Optr)&t_method_return);
    Block PBlock20195 = new_Block_with(PArray20196, empty_Array, PThreadedCode20197, 1, PSend20201);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20202 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_amount_0_3, (Optr)PBlock20195);
    // +. 
    Send PSend20204 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_amount_0_3);
    Assign PAssign20203 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend20204);
    Array PThreadedCode20186 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign20187, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_send1, (Optr)PSend20188, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend20189, (Optr)&t_send1, (Optr)PSend20190, (Optr)&t_send_ifTrue_, (Optr)PSend20191, (Optr)PBlock20192, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_push_closure, (Optr)PBlock20195, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20202, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20203, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend20204, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20183 = new_Method_with(PArray20184, PArray20185, empty_Array, PThreadedCode20186, 5, PAssign20187, PSend20191, PSend20202, PAssign20203, self);
    
    MethodClosure MC_SMB_push_from_to_ = new_MethodClosure((Method)PMethod20183, PEG_Stack_Class);
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