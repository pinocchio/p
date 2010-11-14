#include <lib/class/Runtime/NativeMethodContext.h>


Optr layout_Runtime_NativeMethodContext_Class_class;
Optr slot_Runtime_NativeMethodContext_receiver;
Optr slot_Runtime_NativeMethodContext_message;
Optr slot_Runtime_NativeMethodContext_returnContext;
Optr slot_Runtime_NativeMethodContext_closure;
Optr layout_Runtime_NativeMethodContext;


static void init_SMB_message_() {
    Symbol SMB_message_ = new_Symbol(L"message:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray8528 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8530 = new_Assign((Optr)slot_Runtime_NativeMethodContext_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8529 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8530, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8527 = new_Method_with(PArray8528, empty_Array, empty_Array, PThreadedCode8529, 2, PAssign8530, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod8527, Runtime_NativeMethodContext_Class);
    store_method(Runtime_NativeMethodContext_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray8532 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8534 = new_Assign((Optr)slot_Runtime_NativeMethodContext_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8533 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8534, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8531 = new_Method_with(PArray8532, empty_Array, empty_Array, PThreadedCode8533, 2, PAssign8534, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod8531, Runtime_NativeMethodContext_Class);
    store_method(Runtime_NativeMethodContext_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_returnContext_() {
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray8536 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8538 = new_Assign((Optr)slot_Runtime_NativeMethodContext_returnContext, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8537 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8538, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8535 = new_Method_with(PArray8536, empty_Array, empty_Array, PThreadedCode8537, 2, PAssign8538, self);
    
    MethodClosure MC_SMB_returnContext_ = new_MethodClosure((Method)PMethod8535, Runtime_NativeMethodContext_Class);
    store_method(Runtime_NativeMethodContext_Class, SMB_returnContext_, MC_SMB_returnContext_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode8540 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_NativeMethodContext_receiver, (Optr)&t_method_return);
    Method PMethod8539 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8540, 1, slot_Runtime_NativeMethodContext_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod8539, Runtime_NativeMethodContext_Class);
    store_method(Runtime_NativeMethodContext_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_closure() {
    Symbol SMB_closure = new_Symbol(L"closure");
    Array PThreadedCode8542 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_NativeMethodContext_closure, (Optr)&t_method_return);
    Method PMethod8541 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8542, 1, slot_Runtime_NativeMethodContext_closure);
    
    MethodClosure MC_SMB_closure = new_MethodClosure((Method)PMethod8541, Runtime_NativeMethodContext_Class);
    store_method(Runtime_NativeMethodContext_Class, SMB_closure, MC_SMB_closure);
}


static void init_SMB_homeContext() {
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    Array PThreadedCode8544 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod8543 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8544, 1, self);
    
    MethodClosure MC_SMB_homeContext = new_MethodClosure((Method)PMethod8543, Runtime_NativeMethodContext_Class);
    store_method(Runtime_NativeMethodContext_Class, SMB_homeContext, MC_SMB_homeContext);
}


static void init_SMB_returnContext() {
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    Array PThreadedCode8546 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_NativeMethodContext_returnContext, (Optr)&t_method_return);
    Method PMethod8545 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8546, 1, slot_Runtime_NativeMethodContext_returnContext);
    
    MethodClosure MC_SMB_returnContext = new_MethodClosure((Method)PMethod8545, Runtime_NativeMethodContext_Class);
    store_method(Runtime_NativeMethodContext_Class, SMB_returnContext, MC_SMB_returnContext);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode8548 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_NativeMethodContext_message, (Optr)&t_method_return);
    Method PMethod8547 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8548, 1, slot_Runtime_NativeMethodContext_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod8547, Runtime_NativeMethodContext_Class);
    store_method(Runtime_NativeMethodContext_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_closure_() {
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray8550 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8552 = new_Assign((Optr)slot_Runtime_NativeMethodContext_closure, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8551 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8552, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8549 = new_Method_with(PArray8550, empty_Array, empty_Array, PThreadedCode8551, 2, PAssign8552, self);
    
    MethodClosure MC_SMB_closure_ = new_MethodClosure((Method)PMethod8549, Runtime_NativeMethodContext_Class);
    store_method(Runtime_NativeMethodContext_Class, SMB_closure_, MC_SMB_closure_);
}

void init_Runtime_PNativeMethodContext_layout() {
    layout_Runtime_NativeMethodContext_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Runtime_NativeMethodContext_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_NativeMethodContext_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_NativeMethodContext_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_NativeMethodContext_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_NativeMethodContext_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_NativeMethodContext = new_Symbol(L"NativeMethodContext");
    slot_Runtime_NativeMethodContext_receiver = (Optr)new_Slot(0, L"receiver");
    slot_Runtime_NativeMethodContext_message = (Optr)new_Slot(1, L"message");
    slot_Runtime_NativeMethodContext_returnContext = (Optr)new_Slot(2, L"returnContext");
    slot_Runtime_NativeMethodContext_closure = (Optr)new_Slot(3, L"closure");
    layout_Runtime_NativeMethodContext = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Runtime_NativeMethodContext)->values[0] = slot_Runtime_NativeMethodContext_receiver; // receiver 
    ((Array)layout_Runtime_NativeMethodContext)->values[1] = slot_Runtime_NativeMethodContext_message; // message 
    ((Array)layout_Runtime_NativeMethodContext)->values[2] = slot_Runtime_NativeMethodContext_returnContext; // returnContext 
    ((Array)layout_Runtime_NativeMethodContext)->values[3] = slot_Runtime_NativeMethodContext_closure; // closure 
    Runtime_NativeMethodContext_Class = (Class)new_Class(Object_Class, layout_Runtime_NativeMethodContext_Class_class);
    Runtime_NativeMethodContext_Class->layout = layout_Runtime_NativeMethodContext;
    Runtime_NativeMethodContext_Class->name = SMB_NativeMethodContext;
    
}

void init_Runtime_PNativeMethodContext_methods() {
    init_SMB_message_();
    init_SMB_receiver_();
    init_SMB_returnContext_();
    init_SMB_receiver();
    init_SMB_closure();
    init_SMB_homeContext();
    init_SMB_returnContext();
    init_SMB_message();
    init_SMB_closure_();
    
}