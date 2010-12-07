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
<<<<<<< HEAD
    Array PArray20031 = new_Array_with(1, (Optr)VAR_addition_0_0);
    Variable VAR_newArray_0_1 = new_Variable_named(L"newArray", 0);
    Array PArray20032 = new_Array_with(1, (Optr)VAR_newArray_0_1);
=======
    Array PArray19997 = new_Array_with(1, (Optr)VAR_addition_0_0);
    Variable VAR_newArray_0_1 = new_Variable_named(L"newArray", 0);
    Array PArray19998 = new_Array_with(1, (Optr)VAR_newArray_0_1);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
<<<<<<< HEAD
    Send PSend20037 = new_Send((Optr)slot_PEG_Stack_size, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB_max_ = new_Symbol(L"max:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20038 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_addition_0_0);
    // max:. 
    Send PSend20036 = new_Send((Optr)PSend20037, SMB_max_, 1, (Optr)PSend20038);
    // new:. 
    Send PSend20035 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend20036);
    Assign PAssign20034 = new_Assign((Optr)VAR_newArray_0_1, (Optr)PSend20035);
=======
    Send PSend20003 = new_Send((Optr)slot_PEG_Stack_size, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB_max_ = new_Symbol(L"max:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20004 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_addition_0_0);
    // max:. 
    Send PSend20002 = new_Send((Optr)PSend20003, SMB_max_, 1, (Optr)PSend20004);
    // new:. 
    Send PSend20001 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend20002);
    Assign PAssign20000 = new_Assign((Optr)VAR_newArray_0_1, (Optr)PSend20001);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
<<<<<<< HEAD
    Send PSend20039 = new_Send((Optr)VAR_newArray_0_1, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)slot_PEG_Stack_size, (Optr)slot_PEG_Stack_array, (Optr)int_1_Const);
    Assign PAssign20040 = new_Assign((Optr)slot_PEG_Stack_array, (Optr)VAR_newArray_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20042 = new_Send((Optr)VAR_newArray_0_1, SMB_size, 0);
    Assign PAssign20041 = new_Assign((Optr)slot_PEG_Stack_size, (Optr)PSend20042);
    Array PThreadedCode20033 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign20034, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20037, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_addition_0_0, (Optr)&t_send1, (Optr)PSend20038, (Optr)&t_send1, (Optr)PSend20036, (Optr)&t_send1, (Optr)PSend20035, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend20039, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20040, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20041, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_send0, (Optr)PSend20042, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20030 = new_Method_with(PArray20031, PArray20032, empty_Array, PThreadedCode20033, 5, PAssign20034, PSend20039, PAssign20040, PAssign20041, self);
    
    MethodClosure MC_SMB_grow_ = new_MethodClosure((Method)PMethod20030, PEG_Stack_Class);
=======
    Send PSend20005 = new_Send((Optr)VAR_newArray_0_1, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)slot_PEG_Stack_size, (Optr)slot_PEG_Stack_array, (Optr)int_1_Const);
    Assign PAssign20006 = new_Assign((Optr)slot_PEG_Stack_array, (Optr)VAR_newArray_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20008 = new_Send((Optr)VAR_newArray_0_1, SMB_size, 0);
    Assign PAssign20007 = new_Assign((Optr)slot_PEG_Stack_size, (Optr)PSend20008);
    Array PThreadedCode19999 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign20000, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20003, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_addition_0_0, (Optr)&t_send1, (Optr)PSend20004, (Optr)&t_send1, (Optr)PSend20002, (Optr)&t_send1, (Optr)PSend20001, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend20005, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20006, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20007, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_send0, (Optr)PSend20008, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19996 = new_Method_with(PArray19997, PArray19998, empty_Array, PThreadedCode19999, 5, PAssign20000, PSend20005, PAssign20006, PAssign20007, self);
    
    MethodClosure MC_SMB_grow_ = new_MethodClosure((Method)PMethod19996, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_grow_, MC_SMB_grow_);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
<<<<<<< HEAD
    Send PSend20045 = new_Send((Optr)slot_PEG_Stack_position, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_stackUnderflow = new_Symbol(L"stackUnderflow");
    // stackUnderflow. 
    Send PSend20049 = new_Send((Optr)self, SMB_stackUnderflow, 0);
    Array PThreadedCode20048 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20049, (Optr)&t_block_return);
    Block PBlock20047 = new_Block_with(empty_Array, empty_Array, PThreadedCode20048, 1, PSend20049);
    // ifFalse:. 
    Send PSend20046 = new_Send((Optr)PSend20045, SMB_ifFalse_, 1, (Optr)PBlock20047);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20050 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Array PThreadedCode20044 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20045, (Optr)&t_send_ifFalse_, (Optr)PSend20046, (Optr)PBlock20047, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend20050, (Optr)&t_method_return);
    Method PMethod20043 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20044, 2, PSend20046, PSend20050);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod20043, PEG_Stack_Class);
=======
    Send PSend20011 = new_Send((Optr)slot_PEG_Stack_position, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_stackUnderflow = new_Symbol(L"stackUnderflow");
    // stackUnderflow. 
    Send PSend20015 = new_Send((Optr)self, SMB_stackUnderflow, 0);
    Array PThreadedCode20014 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20015, (Optr)&t_block_return);
    Block PBlock20013 = new_Block_with(empty_Array, empty_Array, PThreadedCode20014, 1, PSend20015);
    // ifFalse:. 
    Send PSend20012 = new_Send((Optr)PSend20011, SMB_ifFalse_, 1, (Optr)PBlock20013);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20016 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Array PThreadedCode20010 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20011, (Optr)&t_send_ifFalse_, (Optr)PSend20012, (Optr)PBlock20013, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend20016, (Optr)&t_method_return);
    Method PMethod20009 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20010, 2, PSend20012, PSend20016);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod20009, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_poke_() {
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    Variable VAR_object_0_0 = new_Variable_named(L"object", 0);
<<<<<<< HEAD
    Array PArray20052 = new_Array_with(1, (Optr)VAR_object_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20054 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)slot_PEG_Stack_position, (Optr)VAR_object_0_0);
    Array PThreadedCode20053 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_object_0_0, (Optr)&t_send2, (Optr)PSend20054, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20051 = new_Method_with(PArray20052, empty_Array, empty_Array, PThreadedCode20053, 2, PSend20054, self);
    
    MethodClosure MC_SMB_poke_ = new_MethodClosure((Method)PMethod20051, PEG_Stack_Class);
=======
    Array PArray20018 = new_Array_with(1, (Optr)VAR_object_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20020 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)slot_PEG_Stack_position, (Optr)VAR_object_0_0);
    Array PThreadedCode20019 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_object_0_0, (Optr)&t_send2, (Optr)PSend20020, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20017 = new_Method_with(PArray20018, empty_Array, empty_Array, PThreadedCode20019, 2, PSend20020, self);
    
    MethodClosure MC_SMB_poke_ = new_MethodClosure((Method)PMethod20017, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_poke_, MC_SMB_poke_);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend20057 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20058 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20057);
    Array PThreadedCode20056 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20057, (Optr)&t_send1, (Optr)PSend20058, (Optr)&t_method_return);
    Method PMethod20055 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20056, 1, PSend20058);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod20055, PEG_Stack_Class);
=======
    Send PSend20023 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20024 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20023);
    Array PThreadedCode20022 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20023, (Optr)&t_send1, (Optr)PSend20024, (Optr)&t_method_return);
    Method PMethod20021 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20022, 1, PSend20024);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod20021, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_zap() {
    Symbol SMB_zap = new_Symbol(L"zap");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
<<<<<<< HEAD
    Send PSend20062 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign20061 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend20062);
    Array PThreadedCode20060 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign20061, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20062, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20059 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20060, 2, PAssign20061, self);
    
    MethodClosure MC_SMB_zap = new_MethodClosure((Method)PMethod20059, PEG_Stack_Class);
=======
    Send PSend20028 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign20027 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend20028);
    Array PThreadedCode20026 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign20027, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20028, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20025 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20026, 2, PAssign20027, self);
    
    MethodClosure MC_SMB_zap = new_MethodClosure((Method)PMethod20025, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_zap, MC_SMB_zap);
}


static void init_SMB_mark_() {
    Symbol SMB_mark_ = new_Symbol(L"mark:");
    Variable VAR_m_0_0 = new_Variable_named(L"m", 0);
<<<<<<< HEAD
    Array PArray20064 = new_Array_with(1, (Optr)VAR_m_0_0);
    Assign PAssign20066 = new_Assign((Optr)slot_PEG_Stack_mark, (Optr)VAR_m_0_0);
    Array PThreadedCode20065 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20066, (Optr)&t_push_variable, (Optr)VAR_m_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20063 = new_Method_with(PArray20064, empty_Array, empty_Array, PThreadedCode20065, 2, PAssign20066, self);
    
    MethodClosure MC_SMB_mark_ = new_MethodClosure((Method)PMethod20063, PEG_Stack_Class);
=======
    Array PArray20030 = new_Array_with(1, (Optr)VAR_m_0_0);
    Assign PAssign20032 = new_Assign((Optr)slot_PEG_Stack_mark, (Optr)VAR_m_0_0);
    Array PThreadedCode20031 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20032, (Optr)&t_push_variable, (Optr)VAR_m_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20029 = new_Method_with(PArray20030, empty_Array, empty_Array, PThreadedCode20031, 2, PAssign20032, self);
    
    MethodClosure MC_SMB_mark_ = new_MethodClosure((Method)PMethod20029, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_mark_, MC_SMB_mark_);
}


static void init_SMB_asOrderedCollection() {
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    Variable VAR_collection_0_0 = new_Variable_named(L"collection", 0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
<<<<<<< HEAD
    Array PArray20068 = new_Array_with(2, (Optr)VAR_collection_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20071 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign20070 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend20071);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend20073 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign20072 = new_Assign((Optr)VAR_collection_0_0, (Optr)PSend20073);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20075 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20077 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20078 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20077);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend20079 = new_Send((Optr)VAR_collection_0_0, SMB_add_, 1, (Optr)PSend20078);
    Array PThreadedCode20076 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20077, (Optr)&t_send1, (Optr)PSend20078, (Optr)&t_send1, (Optr)PSend20079, (Optr)&t_method_return);
    Block PBlock20074 = new_Block_with(PArray20075, empty_Array, PThreadedCode20076, 1, PSend20079);
=======
    Array PArray20034 = new_Array_with(2, (Optr)VAR_collection_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20037 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign20036 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend20037);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend20039 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign20038 = new_Assign((Optr)VAR_collection_0_0, (Optr)PSend20039);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20041 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20043 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20044 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20043);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend20045 = new_Send((Optr)VAR_collection_0_0, SMB_add_, 1, (Optr)PSend20044);
    Array PThreadedCode20042 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20043, (Optr)&t_send1, (Optr)PSend20044, (Optr)&t_send1, (Optr)PSend20045, (Optr)&t_method_return);
    Block PBlock20040 = new_Block_with(PArray20041, empty_Array, PThreadedCode20042, 1, PSend20045);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend20080 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock20074);
    Array PThreadedCode20069 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20070, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20071, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20072, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend20073, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock20074, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20080, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_method_return);
    Method PMethod20067 = new_Method_with(empty_Array, PArray20068, empty_Array, PThreadedCode20069, 4, PAssign20070, PAssign20072, PSend20080, VAR_collection_0_0);
    
    MethodClosure MC_SMB_asOrderedCollection = new_MethodClosure((Method)PMethod20067, PEG_Stack_Class);
=======
    Send PSend20046 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock20040);
    Array PThreadedCode20035 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20036, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20037, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20038, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend20039, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock20040, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20046, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_method_return);
    Method PMethod20033 = new_Method_with(empty_Array, PArray20034, empty_Array, PThreadedCode20035, 4, PAssign20036, PAssign20038, PSend20046, VAR_collection_0_0);
    
    MethodClosure MC_SMB_asOrderedCollection = new_MethodClosure((Method)PMethod20033, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_asOrderedCollection, MC_SMB_asOrderedCollection);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_128 = new_SmallInt(128);
    Constant int_128_Const = new_Constant((Optr)int_128);
<<<<<<< HEAD
    Assign PAssign20083 = new_Assign((Optr)slot_PEG_Stack_size, (Optr)int_128_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend20085 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_PEG_Stack_size);
    Assign PAssign20084 = new_Assign((Optr)slot_PEG_Stack_array, (Optr)PSend20085);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign20086 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)int_0_Const);
    Array PThreadedCode20082 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign20083, (Optr)&t_push1, (Optr)int_128, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20084, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_send1, (Optr)PSend20085, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20086, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20081 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20082, 4, PAssign20083, PAssign20084, PAssign20086, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod20081, PEG_Stack_Class);
=======
    Assign PAssign20049 = new_Assign((Optr)slot_PEG_Stack_size, (Optr)int_128_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend20051 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_PEG_Stack_size);
    Assign PAssign20050 = new_Assign((Optr)slot_PEG_Stack_array, (Optr)PSend20051);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign20052 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)int_0_Const);
    Array PThreadedCode20048 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign20049, (Optr)&t_push1, (Optr)int_128, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20050, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_send1, (Optr)PSend20051, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20052, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20047 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20048, 4, PAssign20049, PAssign20050, PAssign20052, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod20047, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
<<<<<<< HEAD
    Array PArray20088 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20090 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)VAR_index_0_0);
    // at:. 
    Send PSend20091 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20090);
    Array PThreadedCode20089 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend20090, (Optr)&t_send1, (Optr)PSend20091, (Optr)&t_method_return);
    Method PMethod20087 = new_Method_with(PArray20088, empty_Array, empty_Array, PThreadedCode20089, 1, PSend20091);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod20087, PEG_Stack_Class);
=======
    Array PArray20054 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20056 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)VAR_index_0_0);
    // at:. 
    Send PSend20057 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20056);
    Array PThreadedCode20055 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend20056, (Optr)&t_send1, (Optr)PSend20057, (Optr)&t_method_return);
    Method PMethod20053 = new_Method_with(PArray20054, empty_Array, empty_Array, PThreadedCode20055, 1, PSend20057);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod20053, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_pop() {
    Symbol SMB_pop = new_Symbol(L"pop");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
<<<<<<< HEAD
    Array PArray20093 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20096 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Assign PAssign20095 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend20096);
=======
    Array PArray20059 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20062 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Assign PAssign20061 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend20062);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
<<<<<<< HEAD
    Send PSend20098 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign20097 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend20098);
    Array PThreadedCode20094 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign20095, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend20096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20097, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20098, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod20092 = new_Method_with(empty_Array, PArray20093, empty_Array, PThreadedCode20094, 3, PAssign20095, PAssign20097, VAR_result_0_0);
    
    MethodClosure MC_SMB_pop = new_MethodClosure((Method)PMethod20092, PEG_Stack_Class);
=======
    Send PSend20064 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign20063 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend20064);
    Array PThreadedCode20060 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign20061, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend20062, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20063, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20064, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod20058 = new_Method_with(empty_Array, PArray20059, empty_Array, PThreadedCode20060, 3, PAssign20061, PAssign20063, VAR_result_0_0);
    
    MethodClosure MC_SMB_pop = new_MethodClosure((Method)PMethod20058, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_pop, MC_SMB_pop);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
<<<<<<< HEAD
    Array PArray20100 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend20102 = new_Send((Optr)self, SMB_push_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode20101 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend20102, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20099 = new_Method_with(PArray20100, empty_Array, empty_Array, PThreadedCode20101, 2, PSend20102, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod20099, PEG_Stack_Class);
=======
    Array PArray20066 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend20068 = new_Send((Optr)self, SMB_push_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode20067 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend20068, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20065 = new_Method_with(PArray20066, empty_Array, empty_Array, PThreadedCode20067, 2, PSend20068, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod20065, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_push_() {
    Symbol SMB_push_ = new_Symbol(L"push:");
    Variable VAR_o_0_0 = new_Variable_named(L"o", 0);
<<<<<<< HEAD
    Array PArray20104 = new_Array_with(1, (Optr)VAR_o_0_0);
=======
    Array PArray20070 = new_Array_with(1, (Optr)VAR_o_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend20107 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign20106 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend20107);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend20108 = new_Send((Optr)slot_PEG_Stack_size, SMB__lt_, 1, (Optr)PAssign20106);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow_ = new_Symbol(L"grow:");
    // grow:. 
    Send PSend20112 = new_Send((Optr)self, SMB_grow_, 1, (Optr)int_1_Const);
    Array PThreadedCode20111 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20112, (Optr)&t_block_return);
    Block PBlock20110 = new_Block_with(empty_Array, empty_Array, PThreadedCode20111, 1, PSend20112);
    // ifTrue:. 
    Send PSend20109 = new_Send((Optr)PSend20108, SMB_ifTrue_, 1, (Optr)PBlock20110);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20113 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)slot_PEG_Stack_position, (Optr)VAR_o_0_0);
    Array PThreadedCode20105 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push1, (Optr)PAssign20106, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20107, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend20108, (Optr)&t_send_ifTrue_, (Optr)PSend20109, (Optr)PBlock20110, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_o_0_0, (Optr)&t_send2, (Optr)PSend20113, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20103 = new_Method_with(PArray20104, empty_Array, empty_Array, PThreadedCode20105, 3, PSend20109, PSend20113, self);
    
    MethodClosure MC_SMB_push_ = new_MethodClosure((Method)PMethod20103, PEG_Stack_Class);
=======
    Send PSend20073 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign20072 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend20073);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend20074 = new_Send((Optr)slot_PEG_Stack_size, SMB__lt_, 1, (Optr)PAssign20072);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow_ = new_Symbol(L"grow:");
    // grow:. 
    Send PSend20078 = new_Send((Optr)self, SMB_grow_, 1, (Optr)int_1_Const);
    Array PThreadedCode20077 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20078, (Optr)&t_block_return);
    Block PBlock20076 = new_Block_with(empty_Array, empty_Array, PThreadedCode20077, 1, PSend20078);
    // ifTrue:. 
    Send PSend20075 = new_Send((Optr)PSend20074, SMB_ifTrue_, 1, (Optr)PBlock20076);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20079 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)slot_PEG_Stack_position, (Optr)VAR_o_0_0);
    Array PThreadedCode20071 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push1, (Optr)PAssign20072, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20073, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend20074, (Optr)&t_send_ifTrue_, (Optr)PSend20075, (Optr)PBlock20076, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_o_0_0, (Optr)&t_send2, (Optr)PSend20079, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20069 = new_Method_with(PArray20070, empty_Array, empty_Array, PThreadedCode20071, 3, PSend20075, PSend20079, self);
    
    MethodClosure MC_SMB_push_ = new_MethodClosure((Method)PMethod20069, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_push_, MC_SMB_push_);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
<<<<<<< HEAD
    Send PSend20116 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_2_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20117 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20116);
    Array PThreadedCode20115 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20116, (Optr)&t_send1, (Optr)PSend20117, (Optr)&t_method_return);
    Method PMethod20114 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20115, 1, PSend20117);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20114, PEG_Stack_Class);
=======
    Send PSend20082 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_2_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20083 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20082);
    Array PThreadedCode20081 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20082, (Optr)&t_send1, (Optr)PSend20083, (Optr)&t_method_return);
    Method PMethod20080 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20081, 1, PSend20083);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20080, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_zapTo_() {
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
<<<<<<< HEAD
    Array PArray20119 = new_Array_with(1, (Optr)VAR_index_0_0);
    Assign PAssign20121 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)VAR_index_0_0);
    Array PThreadedCode20120 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20121, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20118 = new_Method_with(PArray20119, empty_Array, empty_Array, PThreadedCode20120, 2, PAssign20121, self);
    
    MethodClosure MC_SMB_zapTo_ = new_MethodClosure((Method)PMethod20118, PEG_Stack_Class);
=======
    Array PArray20085 = new_Array_with(1, (Optr)VAR_index_0_0);
    Assign PAssign20087 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)VAR_index_0_0);
    Array PThreadedCode20086 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20087, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20084 = new_Method_with(PArray20085, empty_Array, empty_Array, PThreadedCode20086, 2, PAssign20087, self);
    
    MethodClosure MC_SMB_zapTo_ = new_MethodClosure((Method)PMethod20084, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_zapTo_, MC_SMB_zapTo_);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
<<<<<<< HEAD
    Send PSend20124 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Array PThreadedCode20123 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend20124, (Optr)&t_method_return);
    Method PMethod20122 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20123, 1, PSend20124);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod20122, PEG_Stack_Class);
=======
    Send PSend20090 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_position);
    Array PThreadedCode20089 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_send1, (Optr)PSend20090, (Optr)&t_method_return);
    Method PMethod20088 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20089, 1, PSend20090);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod20088, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_newArray_0_0 = new_Variable_named(L"newArray", 0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
<<<<<<< HEAD
    Array PArray20126 = new_Array_with(2, (Optr)VAR_newArray_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20129 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign20128 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend20129);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend20131 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign20130 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend20131);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20133 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20135 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20136 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20135);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20137 = new_Send((Optr)VAR_newArray_0_0, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend20136);
    Array PThreadedCode20134 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20135, (Optr)&t_send1, (Optr)PSend20136, (Optr)&t_send2, (Optr)PSend20137, (Optr)&t_method_return);
    Block PBlock20132 = new_Block_with(PArray20133, empty_Array, PThreadedCode20134, 1, PSend20137);
=======
    Array PArray20092 = new_Array_with(2, (Optr)VAR_newArray_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20095 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign20094 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend20095);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend20097 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign20096 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend20097);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20099 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20101 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20102 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20101);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20103 = new_Send((Optr)VAR_newArray_0_0, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend20102);
    Array PThreadedCode20100 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20101, (Optr)&t_send1, (Optr)PSend20102, (Optr)&t_send2, (Optr)PSend20103, (Optr)&t_method_return);
    Block PBlock20098 = new_Block_with(PArray20099, empty_Array, PThreadedCode20100, 1, PSend20103);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend20138 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock20132);
    Array PThreadedCode20127 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20128, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20129, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20130, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend20131, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock20132, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20138, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_method_return);
    Method PMethod20125 = new_Method_with(empty_Array, PArray20126, empty_Array, PThreadedCode20127, 4, PAssign20128, PAssign20130, PSend20138, VAR_newArray_0_0);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod20125, PEG_Stack_Class);
=======
    Send PSend20104 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock20098);
    Array PThreadedCode20093 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20094, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20095, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20096, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend20097, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock20098, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20104, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_method_return);
    Method PMethod20091 = new_Method_with(empty_Array, PArray20092, empty_Array, PThreadedCode20093, 4, PAssign20094, PAssign20096, PSend20104, VAR_newArray_0_0);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod20091, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
<<<<<<< HEAD
    Send PSend20141 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Array PThreadedCode20140 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20141, (Optr)&t_method_return);
    Method PMethod20139 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20140, 1, PSend20141);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod20139, PEG_Stack_Class);
=======
    Send PSend20107 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Array PThreadedCode20106 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20107, (Optr)&t_method_return);
    Method PMethod20105 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20106, 1, PSend20107);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod20105, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Variable VAR_newArray_0_0 = new_Variable_named(L"newArray", 0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
<<<<<<< HEAD
    Array PArray20143 = new_Array_with(2, (Optr)VAR_newArray_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20146 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign20145 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend20146);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend20148 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign20147 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend20148);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20150 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20152 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20153 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20152);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20154 = new_Send((Optr)VAR_newArray_0_0, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend20153);
    Array PThreadedCode20151 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20152, (Optr)&t_send1, (Optr)PSend20153, (Optr)&t_send2, (Optr)PSend20154, (Optr)&t_method_return);
    Block PBlock20149 = new_Block_with(PArray20150, empty_Array, PThreadedCode20151, 1, PSend20154);
=======
    Array PArray20109 = new_Array_with(2, (Optr)VAR_newArray_0_0, (Optr)VAR_s_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20112 = new_Send((Optr)slot_PEG_Stack_position, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Assign PAssign20111 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend20112);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend20114 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_s_0_1);
    Assign PAssign20113 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend20114);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20116 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20118 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20119 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)PSend20118);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20120 = new_Send((Optr)VAR_newArray_0_0, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend20119);
    Array PThreadedCode20117 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20118, (Optr)&t_send1, (Optr)PSend20119, (Optr)&t_send2, (Optr)PSend20120, (Optr)&t_method_return);
    Block PBlock20115 = new_Block_with(PArray20116, empty_Array, PThreadedCode20117, 1, PSend20120);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend20155 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock20149);
    Array PThreadedCode20144 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20145, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20146, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20147, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend20148, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock20149, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20155, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_method_return);
    Method PMethod20142 = new_Method_with(empty_Array, PArray20143, empty_Array, PThreadedCode20144, 4, PAssign20145, PAssign20147, PSend20155, VAR_newArray_0_0);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod20142, PEG_Stack_Class);
=======
    Send PSend20121 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_s_0_1, (Optr)PBlock20115);
    Array PThreadedCode20110 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20111, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20112, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20113, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend20114, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_closure, (Optr)PBlock20115, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20121, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_method_return);
    Method PMethod20108 = new_Method_with(empty_Array, PArray20109, empty_Array, PThreadedCode20110, 4, PAssign20111, PAssign20113, PSend20121, VAR_newArray_0_0);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod20108, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
<<<<<<< HEAD
    Send PSend20158 = new_Send((Optr)slot_PEG_Stack_position, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode20157 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20158, (Optr)&t_method_return);
    Method PMethod20156 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20157, 1, PSend20158);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod20156, PEG_Stack_Class);
=======
    Send PSend20124 = new_Send((Optr)slot_PEG_Stack_position, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode20123 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20124, (Optr)&t_method_return);
    Method PMethod20122 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20123, 1, PSend20124);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod20122, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_removeFirst() {
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend20162 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign20161 = new_Assign((Optr)slot_PEG_Stack_mark, (Optr)PSend20162);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20163 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_mark);
    Array PThreadedCode20160 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign20161, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20162, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20163, (Optr)&t_method_return);
    Method PMethod20159 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20160, 2, PAssign20161, PSend20163);
    
    MethodClosure MC_SMB_removeFirst = new_MethodClosure((Method)PMethod20159, PEG_Stack_Class);
=======
    Send PSend20128 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign20127 = new_Assign((Optr)slot_PEG_Stack_mark, (Optr)PSend20128);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20129 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)slot_PEG_Stack_mark);
    Array PThreadedCode20126 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign20127, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20128, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20129, (Optr)&t_method_return);
    Method PMethod20125 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20126, 2, PAssign20127, PSend20129);
    
    MethodClosure MC_SMB_removeFirst = new_MethodClosure((Method)PMethod20125, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_removeFirst, MC_SMB_removeFirst);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
<<<<<<< HEAD
    Send PSend20166 = new_Send((Optr)self, SMB_asString, 0);
    // asSymbol. 
    Send PSend20167 = new_Send((Optr)PSend20166, SMB_asSymbol, 0);
    Array PThreadedCode20165 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20166, (Optr)&t_send0, (Optr)PSend20167, (Optr)&t_method_return);
    Method PMethod20164 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20165, 1, PSend20167);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PMethod20164, PEG_Stack_Class);
=======
    Send PSend20132 = new_Send((Optr)self, SMB_asString, 0);
    // asSymbol. 
    Send PSend20133 = new_Send((Optr)PSend20132, SMB_asSymbol, 0);
    Array PThreadedCode20131 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20132, (Optr)&t_send0, (Optr)PSend20133, (Optr)&t_method_return);
    Method PMethod20130 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20131, 1, PSend20133);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PMethod20130, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
<<<<<<< HEAD
    Array PArray20169 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_value_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20171 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)VAR_index_0_0);
    // at:put:. 
    Send PSend20172 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)PSend20171, (Optr)VAR_value_0_1);
    Array PThreadedCode20170 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend20171, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend20172, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20168 = new_Method_with(PArray20169, empty_Array, empty_Array, PThreadedCode20170, 2, PSend20172, self);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PMethod20168, PEG_Stack_Class);
=======
    Array PArray20135 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_value_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20137 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)VAR_index_0_0);
    // at:put:. 
    Send PSend20138 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)PSend20137, (Optr)VAR_value_0_1);
    Array PThreadedCode20136 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend20137, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend20138, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20134 = new_Method_with(PArray20135, empty_Array, empty_Array, PThreadedCode20136, 2, PSend20138, self);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PMethod20134, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_collect_() {
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray20174 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray20175 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20179 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend20178 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend20179);
    Assign PAssign20177 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend20178);
=======
    Array PArray20140 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray20141 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20145 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend20144 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend20145);
    Assign PAssign20143 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend20144);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend20180 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20182 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20184 = new_Send((Optr)VAR_i_1_0, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20185 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20186 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend20185);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20187 = new_Send((Optr)VAR_newCollection_0_1, SMB_at_put_, 2, (Optr)PSend20184, (Optr)PSend20186);
    Array PThreadedCode20183 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20184, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20185, (Optr)&t_send1, (Optr)PSend20186, (Optr)&t_send2, (Optr)PSend20187, (Optr)&t_method_return);
    Block PBlock20181 = new_Block_with(PArray20182, empty_Array, PThreadedCode20183, 1, PSend20187);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20188 = new_Send((Optr)PSend20180, SMB_to_do_, 2, (Optr)slot_PEG_Stack_position, (Optr)PBlock20181);
    Array PThreadedCode20176 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign20177, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20179, (Optr)&t_send1, (Optr)PSend20178, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20180, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_closure, (Optr)PBlock20181, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20188, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod20173 = new_Method_with(PArray20174, PArray20175, empty_Array, PThreadedCode20176, 3, PAssign20177, PSend20188, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod20173, PEG_Stack_Class);
=======
    Send PSend20146 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20148 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20150 = new_Send((Optr)VAR_i_1_0, SMB__minus_, 1, (Optr)slot_PEG_Stack_mark);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20151 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20152 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend20151);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20153 = new_Send((Optr)VAR_newCollection_0_1, SMB_at_put_, 2, (Optr)PSend20150, (Optr)PSend20152);
    Array PThreadedCode20149 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_send1, (Optr)PSend20150, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20151, (Optr)&t_send1, (Optr)PSend20152, (Optr)&t_send2, (Optr)PSend20153, (Optr)&t_method_return);
    Block PBlock20147 = new_Block_with(PArray20148, empty_Array, PThreadedCode20149, 1, PSend20153);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20154 = new_Send((Optr)PSend20146, SMB_to_do_, 2, (Optr)slot_PEG_Stack_position, (Optr)PBlock20147);
    Array PThreadedCode20142 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign20143, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20145, (Optr)&t_send1, (Optr)PSend20144, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20146, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_closure, (Optr)PBlock20147, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20154, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod20139 = new_Method_with(PArray20140, PArray20141, empty_Array, PThreadedCode20142, 3, PAssign20143, PSend20154, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod20139, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_collect_, MC_SMB_collect_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
<<<<<<< HEAD
    Array PArray20190 = new_Array_with(1, (Optr)VAR_block_0_0);
=======
    Array PArray20156 = new_Array_with(1, (Optr)VAR_block_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend20192 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20194 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20196 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20197 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)PSend20196);
    Array PThreadedCode20195 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20196, (Optr)&t_send1, (Optr)PSend20197, (Optr)&t_method_return);
    Block PBlock20193 = new_Block_with(PArray20194, empty_Array, PThreadedCode20195, 1, PSend20197);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20198 = new_Send((Optr)PSend20192, SMB_to_do_, 2, (Optr)slot_PEG_Stack_position, (Optr)PBlock20193);
    Array PThreadedCode20191 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20192, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_closure, (Optr)PBlock20193, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20198, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20189 = new_Method_with(PArray20190, empty_Array, empty_Array, PThreadedCode20191, 2, PSend20198, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod20189, PEG_Stack_Class);
=======
    Send PSend20158 = new_Send((Optr)slot_PEG_Stack_mark, SMB__plus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20160 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20162 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20163 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)PSend20162);
    Array PThreadedCode20161 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20162, (Optr)&t_send1, (Optr)PSend20163, (Optr)&t_method_return);
    Block PBlock20159 = new_Block_with(PArray20160, empty_Array, PThreadedCode20161, 1, PSend20163);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20164 = new_Send((Optr)PSend20158, SMB_to_do_, 2, (Optr)slot_PEG_Stack_position, (Optr)PBlock20159);
    Array PThreadedCode20157 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_mark, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20158, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_closure, (Optr)PBlock20159, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20164, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20155 = new_Method_with(PArray20156, empty_Array, empty_Array, PThreadedCode20157, 2, PSend20164, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod20155, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
<<<<<<< HEAD
    Array PArray20200 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray20201 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign20203 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray20205 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend20208 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign20207 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend20208);
    Array PThreadedCode20206 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign20207, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend20208, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock20204 = new_Block_with(PArray20205, empty_Array, PThreadedCode20206, 1, PAssign20207);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend20209 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock20204);
    Array PThreadedCode20202 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign20203, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20204, (Optr)&t_send1, (Optr)PSend20209, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod20199 = new_Method_with(PArray20200, PArray20201, empty_Array, PThreadedCode20202, 3, PAssign20203, PSend20209, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod20199, PEG_Stack_Class);
=======
    Array PArray20166 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray20167 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign20169 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray20171 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend20174 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign20173 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend20174);
    Array PThreadedCode20172 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign20173, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend20174, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock20170 = new_Block_with(PArray20171, empty_Array, PThreadedCode20172, 1, PAssign20173);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend20175 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock20170);
    Array PThreadedCode20168 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign20169, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20170, (Optr)&t_send1, (Optr)PSend20175, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod20165 = new_Method_with(PArray20166, PArray20167, empty_Array, PThreadedCode20168, 3, PAssign20169, PSend20175, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod20165, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
<<<<<<< HEAD
    Array PThreadedCode20211 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_method_return);
    Method PMethod20210 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20211, 1, slot_PEG_Stack_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod20210, PEG_Stack_Class);
=======
    Array PThreadedCode20177 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_method_return);
    Method PMethod20176 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20177, 1, slot_PEG_Stack_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod20176, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_removeLast() {
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    Symbol SMB_pop = new_Symbol(L"pop");
    // pop. 
<<<<<<< HEAD
    Send PSend20214 = new_Send((Optr)self, SMB_pop, 0);
    Array PThreadedCode20213 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20214, (Optr)&t_method_return);
    Method PMethod20212 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20213, 1, PSend20214);
    
    MethodClosure MC_SMB_removeLast = new_MethodClosure((Method)PMethod20212, PEG_Stack_Class);
=======
    Send PSend20180 = new_Send((Optr)self, SMB_pop, 0);
    Array PThreadedCode20179 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20180, (Optr)&t_method_return);
    Method PMethod20178 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20179, 1, PSend20180);
    
    MethodClosure MC_SMB_removeLast = new_MethodClosure((Method)PMethod20178, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Stack_Class, SMB_removeLast, MC_SMB_removeLast);
}


static void init_SMB_push_from_to_() {
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    Variable VAR_collection_0_0 = new_Variable_named(L"collection", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_end_0_2 = new_Variable_named(L"end", 0);
<<<<<<< HEAD
    Array PArray20216 = new_Array_with(3, (Optr)VAR_collection_0_0, (Optr)VAR_start_0_1, (Optr)VAR_end_0_2);
    Variable VAR_amount_0_3 = new_Variable_named(L"amount", 0);
    Array PArray20217 = new_Array_with(1, (Optr)VAR_amount_0_3);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20220 = new_Send((Optr)VAR_end_0_2, SMB__minus_, 1, (Optr)VAR_start_0_1);
    Assign PAssign20219 = new_Assign((Optr)VAR_amount_0_3, (Optr)PSend20220);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20221 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_amount_0_3);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend20222 = new_Send((Optr)slot_PEG_Stack_size, SMB__lt_, 1, (Optr)PSend20221);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow_ = new_Symbol(L"grow:");
    // grow:. 
    Send PSend20226 = new_Send((Optr)self, SMB_grow_, 1, (Optr)VAR_amount_0_3);
    Array PThreadedCode20225 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend20226, (Optr)&t_block_return);
    Block PBlock20224 = new_Block_with(empty_Array, empty_Array, PThreadedCode20225, 1, PSend20226);
    // ifTrue:. 
    Send PSend20223 = new_Send((Optr)PSend20222, SMB_ifTrue_, 1, (Optr)PBlock20224);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20228 = new_Array_with(1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend20230 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend20231 = new_Send((Optr)VAR_start_0_1, SMB__plus_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20232 = new_Send((Optr)VAR_collection_0_0, SMB_at_, 1, (Optr)PSend20231);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20233 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)PSend20230, (Optr)PSend20232);
    Array PThreadedCode20229 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20230, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20231, (Optr)&t_send1, (Optr)PSend20232, (Optr)&t_send2, (Optr)PSend20233, (Optr)&t_method_return);
    Block PBlock20227 = new_Block_with(PArray20228, empty_Array, PThreadedCode20229, 1, PSend20233);
=======
    Array PArray20182 = new_Array_with(3, (Optr)VAR_collection_0_0, (Optr)VAR_start_0_1, (Optr)VAR_end_0_2);
    Variable VAR_amount_0_3 = new_Variable_named(L"amount", 0);
    Array PArray20183 = new_Array_with(1, (Optr)VAR_amount_0_3);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20186 = new_Send((Optr)VAR_end_0_2, SMB__minus_, 1, (Optr)VAR_start_0_1);
    Assign PAssign20185 = new_Assign((Optr)VAR_amount_0_3, (Optr)PSend20186);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20187 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_amount_0_3);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend20188 = new_Send((Optr)slot_PEG_Stack_size, SMB__lt_, 1, (Optr)PSend20187);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow_ = new_Symbol(L"grow:");
    // grow:. 
    Send PSend20192 = new_Send((Optr)self, SMB_grow_, 1, (Optr)VAR_amount_0_3);
    Array PThreadedCode20191 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend20192, (Optr)&t_block_return);
    Block PBlock20190 = new_Block_with(empty_Array, empty_Array, PThreadedCode20191, 1, PSend20192);
    // ifTrue:. 
    Send PSend20189 = new_Send((Optr)PSend20188, SMB_ifTrue_, 1, (Optr)PBlock20190);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20194 = new_Array_with(1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend20196 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend20197 = new_Send((Optr)VAR_start_0_1, SMB__plus_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20198 = new_Send((Optr)VAR_collection_0_0, SMB_at_, 1, (Optr)PSend20197);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20199 = new_Send((Optr)slot_PEG_Stack_array, SMB_at_put_, 2, (Optr)PSend20196, (Optr)PSend20198);
    Array PThreadedCode20195 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_array, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20196, (Optr)&t_push_variable, (Optr)VAR_collection_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20197, (Optr)&t_send1, (Optr)PSend20198, (Optr)&t_send2, (Optr)PSend20199, (Optr)&t_method_return);
    Block PBlock20193 = new_Block_with(PArray20194, empty_Array, PThreadedCode20195, 1, PSend20199);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend20234 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_amount_0_3, (Optr)PBlock20227);
    // +. 
    Send PSend20236 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_amount_0_3);
    Assign PAssign20235 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend20236);
    Array PThreadedCode20218 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign20219, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_send1, (Optr)PSend20220, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend20221, (Optr)&t_send1, (Optr)PSend20222, (Optr)&t_send_ifTrue_, (Optr)PSend20223, (Optr)PBlock20224, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_push_closure, (Optr)PBlock20227, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20234, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20235, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend20236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20215 = new_Method_with(PArray20216, PArray20217, empty_Array, PThreadedCode20218, 5, PAssign20219, PSend20223, PSend20234, PAssign20235, self);
    
    MethodClosure MC_SMB_push_from_to_ = new_MethodClosure((Method)PMethod20215, PEG_Stack_Class);
=======
    Send PSend20200 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_amount_0_3, (Optr)PBlock20193);
    // +. 
    Send PSend20202 = new_Send((Optr)slot_PEG_Stack_position, SMB__plus_, 1, (Optr)VAR_amount_0_3);
    Assign PAssign20201 = new_Assign((Optr)slot_PEG_Stack_position, (Optr)PSend20202);
    Array PThreadedCode20184 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign20185, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_send1, (Optr)PSend20186, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_size, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend20187, (Optr)&t_send1, (Optr)PSend20188, (Optr)&t_send_ifTrue_, (Optr)PSend20189, (Optr)PBlock20190, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_push_closure, (Optr)PBlock20193, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20200, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20201, (Optr)&t_push_slot, (Optr)slot_PEG_Stack_position, (Optr)&t_push_variable, (Optr)VAR_amount_0_3, (Optr)&t_send1, (Optr)PSend20202, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20181 = new_Method_with(PArray20182, PArray20183, empty_Array, PThreadedCode20184, 5, PAssign20185, PSend20189, PSend20200, PAssign20201, self);
    
    MethodClosure MC_SMB_push_from_to_ = new_MethodClosure((Method)PMethod20181, PEG_Stack_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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