#include <lib/class/Collection/KeyNotFound.h>


Optr layout_Collection_KeyNotFound_Class_class;
Optr slot_Collection_KeyNotFound_dictionary;
Optr slot_Collection_KeyNotFound_key;
Optr layout_Collection_KeyNotFound;


static void init_SMB_key_() {
    Symbol SMB_key_ = new_Symbol(L"key:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6397 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign6399 = new_Assign((Optr)slot_Collection_KeyNotFound_key, (Optr)VAR_anObject_0_0);
    Array PThreadedCode6398 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign6399, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6396 = new_Method_with(PArray6397, empty_Array, empty_Array, PThreadedCode6398, 2, PAssign6399, self);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod6396, Collection_KeyNotFound_Class);
    store_method(Collection_KeyNotFound_Class, SMB_key_, MC_SMB_key_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray6401 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_6403 = new_String(L"Key not found: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_6403_Const = new_Constant((Optr)string_6403);
    // <<. 
    Send PSend6404 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_6403_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend6405 = new_Send((Optr)slot_Collection_KeyNotFound_key, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode6402 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_6403, (Optr)&t_send1, (Optr)PSend6404, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_KeyNotFound_key, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend6405, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6400 = new_Method_with(PArray6401, empty_Array, empty_Array, PThreadedCode6402, 3, PSend6404, PSend6405, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod6400, Collection_KeyNotFound_Class);
    store_method(Collection_KeyNotFound_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_dictionary() {
    Symbol SMB_dictionary = new_Symbol(L"dictionary");
    Array PThreadedCode6407 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_KeyNotFound_dictionary, (Optr)&t_method_return);
    Method PMethod6406 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6407, 1, slot_Collection_KeyNotFound_dictionary);
    
    MethodClosure MC_SMB_dictionary = new_MethodClosure((Method)PMethod6406, Collection_KeyNotFound_Class);
    store_method(Collection_KeyNotFound_Class, SMB_dictionary, MC_SMB_dictionary);
}


static void init_SMB_dictionary_() {
    Symbol SMB_dictionary_ = new_Symbol(L"dictionary:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6409 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign6411 = new_Assign((Optr)slot_Collection_KeyNotFound_dictionary, (Optr)VAR_anObject_0_0);
    Array PThreadedCode6410 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign6411, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6408 = new_Method_with(PArray6409, empty_Array, empty_Array, PThreadedCode6410, 2, PAssign6411, self);
    
    MethodClosure MC_SMB_dictionary_ = new_MethodClosure((Method)PMethod6408, Collection_KeyNotFound_Class);
    store_method(Collection_KeyNotFound_Class, SMB_dictionary_, MC_SMB_dictionary_);
}


static void init_SMB_key() {
    Symbol SMB_key = new_Symbol(L"key");
    Array PThreadedCode6413 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_KeyNotFound_key, (Optr)&t_method_return);
    Method PMethod6412 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6413, 1, slot_Collection_KeyNotFound_key);
    
    MethodClosure MC_SMB_key = new_MethodClosure((Method)PMethod6412, Collection_KeyNotFound_Class);
    store_method(Collection_KeyNotFound_Class, SMB_key, MC_SMB_key);
}

void init_Collection_PKeyNotFound_layout() {
    layout_Collection_KeyNotFound_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_KeyNotFound_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_KeyNotFound_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_KeyNotFound_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_KeyNotFound_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_KeyNotFound_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_KeyNotFound = new_Symbol(L"KeyNotFound");
    slot_Collection_KeyNotFound_dictionary = (Optr)new_Slot(1, L"dictionary");
    slot_Collection_KeyNotFound_key = (Optr)new_Slot(2, L"key");
    layout_Collection_KeyNotFound = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Collection_KeyNotFound)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Collection_KeyNotFound)->values[1] = slot_Collection_KeyNotFound_dictionary; // dictionary 
    ((Array)layout_Collection_KeyNotFound)->values[2] = slot_Collection_KeyNotFound_key; // key 
    Collection_KeyNotFound_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_Collection_KeyNotFound_Class_class);
    Collection_KeyNotFound_Class->layout = layout_Collection_KeyNotFound;
    Collection_KeyNotFound_Class->name = SMB_KeyNotFound;
    
}

void init_Collection_PKeyNotFound_methods() {
    init_SMB_key_();
    init_SMB_warnOn_();
    init_SMB_dictionary();
    init_SMB_dictionary_();
    init_SMB_key();
    
}