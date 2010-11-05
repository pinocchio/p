#include <lib/class/Kernel/Exception/Error.h>


Optr layout_Kernel_Exception_Error_Class_class;
Optr slot_Kernel_Exception_Error_message;
Optr layout_Kernel_Exception_Error;


static void init_SMB_message_() {
    Symbol SMB_message_ = new_Symbol(L"message:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray920 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign922 = new_Assign((Optr)slot_Kernel_Exception_Error_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode921 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign922, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod919 = new_Method_with(PArray920, empty_Array, empty_Array, PThreadedCode921, 2, PAssign922, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod919, Kernel_Exception_Error_Class);
    store_method(Kernel_Exception_Error_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray924 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend926 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Kernel_Exception_Error_message);
    Array PThreadedCode925 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Kernel_Exception_Error_message, (Optr)&t_send1, (Optr)PSend926, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod923 = new_Method_with(PArray924, empty_Array, empty_Array, PThreadedCode925, 2, PSend926, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod923, Kernel_Exception_Error_Class);
    store_method(Kernel_Exception_Error_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode928 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Exception_Error_message, (Optr)&t_method_return);
    Method PMethod927 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode928, 1, slot_Kernel_Exception_Error_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod927, Kernel_Exception_Error_Class);
    store_method(Kernel_Exception_Error_Class, SMB_message, MC_SMB_message);
}

void init_Kernel_Exception_Error_layout() {
    layout_Kernel_Exception_Error_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Exception_Error_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Exception_Error_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Exception_Error_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Exception_Error_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Exception_Error_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Error = new_Symbol(L"Error");
    slot_Kernel_Exception_Error_message = (Optr)new_Slot(1, L"message");
    layout_Kernel_Exception_Error = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Kernel_Exception_Error)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Kernel_Exception_Error)->values[1] = slot_Kernel_Exception_Error_message; // message 
    Kernel_Exception_Error_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_Kernel_Exception_Error_Class_class);
    Class_set_superclass(Kernel_Exception_Error_Class, Kernel_Exception_Exception_Class);
    Kernel_Exception_Error_Class->layout = layout_Kernel_Exception_Error;
    HEADER(Kernel_Exception_Error_Class)->layout = layout_Kernel_Exception_Error_Class_class;
    Kernel_Exception_Error_Class->name = SMB_Error;
    
}

void init_Kernel_Exception_Error_methods() {
    init_SMB_message_();
    init_SMB_warnOn_();
    init_SMB_message();
    
}