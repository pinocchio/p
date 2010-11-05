#include <lib/class/Kernel/Exception/DoesNotUnderstand.h>


Optr layout_Kernel_Exception_DoesNotUnderstand_Class_class;
Optr slot_Kernel_Exception_DoesNotUnderstand_receiver;
Optr slot_Kernel_Exception_DoesNotUnderstand_cls;
Optr slot_Kernel_Exception_DoesNotUnderstand_message;
Optr layout_Kernel_Exception_DoesNotUnderstand;


static void init_SMB_cls() {
    Symbol SMB_cls = new_Symbol(L"cls");
    Array PThreadedCode963 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Exception_DoesNotUnderstand_cls, (Optr)&t_method_return);
    Method PMethod962 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode963, 1, slot_Kernel_Exception_DoesNotUnderstand_cls);
    
    MethodClosure MC_SMB_cls = new_MethodClosure((Method)PMethod962, Kernel_Exception_DoesNotUnderstand_Class);
    store_method(Kernel_Exception_DoesNotUnderstand_Class, SMB_cls, MC_SMB_cls);
}


static void init_SMB_message_() {
    Symbol SMB_message_ = new_Symbol(L"message:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray965 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign967 = new_Assign((Optr)slot_Kernel_Exception_DoesNotUnderstand_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode966 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign967, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod964 = new_Method_with(PArray965, empty_Array, empty_Array, PThreadedCode966, 2, PAssign967, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod964, Kernel_Exception_DoesNotUnderstand_Class);
    store_method(Kernel_Exception_DoesNotUnderstand_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray969 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign971 = new_Assign((Optr)slot_Kernel_Exception_DoesNotUnderstand_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode970 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign971, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod968 = new_Method_with(PArray969, empty_Array, empty_Array, PThreadedCode970, 2, PAssign971, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod968, Kernel_Exception_DoesNotUnderstand_Class);
    store_method(Kernel_Exception_DoesNotUnderstand_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode973 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Exception_DoesNotUnderstand_receiver, (Optr)&t_method_return);
    Method PMethod972 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode973, 1, slot_Kernel_Exception_DoesNotUnderstand_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod972, Kernel_Exception_DoesNotUnderstand_Class);
    store_method(Kernel_Exception_DoesNotUnderstand_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray975 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend977 = new_Send((Optr)slot_Kernel_Exception_DoesNotUnderstand_receiver, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_978 = new_String(L" does not understand: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_978_Const = new_Constant((Optr)string_978);
    // <<. 
    Send PSend979 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_978_Const);
    // printOn:. 
    Send PSend980 = new_Send((Optr)slot_Kernel_Exception_DoesNotUnderstand_message, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode976 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Kernel_Exception_DoesNotUnderstand_receiver, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend977, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_978, (Optr)&t_send1, (Optr)PSend979, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Exception_DoesNotUnderstand_message, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend980, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod974 = new_Method_with(PArray975, empty_Array, empty_Array, PThreadedCode976, 4, PSend977, PSend979, PSend980, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod974, Kernel_Exception_DoesNotUnderstand_Class);
    store_method(Kernel_Exception_DoesNotUnderstand_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_cls_() {
    Symbol SMB_cls_ = new_Symbol(L"cls:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray982 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign984 = new_Assign((Optr)slot_Kernel_Exception_DoesNotUnderstand_cls, (Optr)VAR_anObject_0_0);
    Array PThreadedCode983 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign984, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod981 = new_Method_with(PArray982, empty_Array, empty_Array, PThreadedCode983, 2, PAssign984, self);
    
    MethodClosure MC_SMB_cls_ = new_MethodClosure((Method)PMethod981, Kernel_Exception_DoesNotUnderstand_Class);
    store_method(Kernel_Exception_DoesNotUnderstand_Class, SMB_cls_, MC_SMB_cls_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode986 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Exception_DoesNotUnderstand_message, (Optr)&t_method_return);
    Method PMethod985 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode986, 1, slot_Kernel_Exception_DoesNotUnderstand_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod985, Kernel_Exception_DoesNotUnderstand_Class);
    store_method(Kernel_Exception_DoesNotUnderstand_Class, SMB_message, MC_SMB_message);
}

void init_Kernel_Exception_PDoesNotUnderstand_layout() {
    layout_Kernel_Exception_DoesNotUnderstand_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Exception_DoesNotUnderstand_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Exception_DoesNotUnderstand_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Exception_DoesNotUnderstand_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Exception_DoesNotUnderstand_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Exception_DoesNotUnderstand_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_DoesNotUnderstand = new_Symbol(L"DoesNotUnderstand");
    slot_Kernel_Exception_DoesNotUnderstand_receiver = (Optr)new_Slot(1, L"receiver");
    slot_Kernel_Exception_DoesNotUnderstand_cls = (Optr)new_Slot(2, L"cls");
    slot_Kernel_Exception_DoesNotUnderstand_message = (Optr)new_Slot(3, L"message");
    layout_Kernel_Exception_DoesNotUnderstand = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Kernel_Exception_DoesNotUnderstand)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Kernel_Exception_DoesNotUnderstand)->values[1] = slot_Kernel_Exception_DoesNotUnderstand_receiver; // receiver 
    ((Array)layout_Kernel_Exception_DoesNotUnderstand)->values[2] = slot_Kernel_Exception_DoesNotUnderstand_cls; // cls 
    ((Array)layout_Kernel_Exception_DoesNotUnderstand)->values[3] = slot_Kernel_Exception_DoesNotUnderstand_message; // message 
    Kernel_Exception_DoesNotUnderstand_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_Kernel_Exception_DoesNotUnderstand_Class_class);
    Kernel_Exception_DoesNotUnderstand_Class->layout = layout_Kernel_Exception_DoesNotUnderstand;
    Kernel_Exception_DoesNotUnderstand_Class->name = SMB_DoesNotUnderstand;
    
}

void init_Kernel_Exception_PDoesNotUnderstand_methods() {
    init_SMB_cls();
    init_SMB_message_();
    init_SMB_receiver_();
    init_SMB_receiver();
    init_SMB_warnOn_();
    init_SMB_cls_();
    init_SMB_message();
    
}