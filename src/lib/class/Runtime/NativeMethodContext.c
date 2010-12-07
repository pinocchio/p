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
<<<<<<< HEAD
    Array PArray8560 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8562 = new_Assign((Optr)slot_Runtime_NativeMethodContext_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8561 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8562, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8559 = new_Method_with(PArray8560, empty_Array, empty_Array, PThreadedCode8561, 2, PAssign8562, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod8559, Runtime_NativeMethodContext_Class);
=======
    Array PArray8526 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8528 = new_Assign((Optr)slot_Runtime_NativeMethodContext_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8527 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8528, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8525 = new_Method_with(PArray8526, empty_Array, empty_Array, PThreadedCode8527, 2, PAssign8528, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod8525, Runtime_NativeMethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Runtime_NativeMethodContext_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray8564 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8566 = new_Assign((Optr)slot_Runtime_NativeMethodContext_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8565 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8566, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8563 = new_Method_with(PArray8564, empty_Array, empty_Array, PThreadedCode8565, 2, PAssign8566, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod8563, Runtime_NativeMethodContext_Class);
=======
    Array PArray8530 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8532 = new_Assign((Optr)slot_Runtime_NativeMethodContext_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8531 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8532, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8529 = new_Method_with(PArray8530, empty_Array, empty_Array, PThreadedCode8531, 2, PAssign8532, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod8529, Runtime_NativeMethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Runtime_NativeMethodContext_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_returnContext_() {
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray8568 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8570 = new_Assign((Optr)slot_Runtime_NativeMethodContext_returnContext, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8569 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8570, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8567 = new_Method_with(PArray8568, empty_Array, empty_Array, PThreadedCode8569, 2, PAssign8570, self);
    
    MethodClosure MC_SMB_returnContext_ = new_MethodClosure((Method)PMethod8567, Runtime_NativeMethodContext_Class);
=======
    Array PArray8534 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8536 = new_Assign((Optr)slot_Runtime_NativeMethodContext_returnContext, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8535 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8536, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8533 = new_Method_with(PArray8534, empty_Array, empty_Array, PThreadedCode8535, 2, PAssign8536, self);
    
    MethodClosure MC_SMB_returnContext_ = new_MethodClosure((Method)PMethod8533, Runtime_NativeMethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Runtime_NativeMethodContext_Class, SMB_returnContext_, MC_SMB_returnContext_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
<<<<<<< HEAD
    Array PThreadedCode8572 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_NativeMethodContext_receiver, (Optr)&t_method_return);
    Method PMethod8571 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8572, 1, slot_Runtime_NativeMethodContext_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod8571, Runtime_NativeMethodContext_Class);
=======
    Array PThreadedCode8538 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_NativeMethodContext_receiver, (Optr)&t_method_return);
    Method PMethod8537 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8538, 1, slot_Runtime_NativeMethodContext_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod8537, Runtime_NativeMethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Runtime_NativeMethodContext_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_closure() {
    Symbol SMB_closure = new_Symbol(L"closure");
<<<<<<< HEAD
    Array PThreadedCode8574 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_NativeMethodContext_closure, (Optr)&t_method_return);
    Method PMethod8573 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8574, 1, slot_Runtime_NativeMethodContext_closure);
    
    MethodClosure MC_SMB_closure = new_MethodClosure((Method)PMethod8573, Runtime_NativeMethodContext_Class);
=======
    Array PThreadedCode8540 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_NativeMethodContext_closure, (Optr)&t_method_return);
    Method PMethod8539 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8540, 1, slot_Runtime_NativeMethodContext_closure);
    
    MethodClosure MC_SMB_closure = new_MethodClosure((Method)PMethod8539, Runtime_NativeMethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Runtime_NativeMethodContext_Class, SMB_closure, MC_SMB_closure);
}


static void init_SMB_homeContext() {
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
<<<<<<< HEAD
    Array PThreadedCode8576 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod8575 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8576, 1, self);
    
    MethodClosure MC_SMB_homeContext = new_MethodClosure((Method)PMethod8575, Runtime_NativeMethodContext_Class);
=======
    Array PThreadedCode8542 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod8541 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8542, 1, self);
    
    MethodClosure MC_SMB_homeContext = new_MethodClosure((Method)PMethod8541, Runtime_NativeMethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Runtime_NativeMethodContext_Class, SMB_homeContext, MC_SMB_homeContext);
}


static void init_SMB_returnContext() {
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
<<<<<<< HEAD
    Array PThreadedCode8578 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_NativeMethodContext_returnContext, (Optr)&t_method_return);
    Method PMethod8577 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8578, 1, slot_Runtime_NativeMethodContext_returnContext);
    
    MethodClosure MC_SMB_returnContext = new_MethodClosure((Method)PMethod8577, Runtime_NativeMethodContext_Class);
=======
    Array PThreadedCode8544 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_NativeMethodContext_returnContext, (Optr)&t_method_return);
    Method PMethod8543 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8544, 1, slot_Runtime_NativeMethodContext_returnContext);
    
    MethodClosure MC_SMB_returnContext = new_MethodClosure((Method)PMethod8543, Runtime_NativeMethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Runtime_NativeMethodContext_Class, SMB_returnContext, MC_SMB_returnContext);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
<<<<<<< HEAD
    Array PThreadedCode8580 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_NativeMethodContext_message, (Optr)&t_method_return);
    Method PMethod8579 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8580, 1, slot_Runtime_NativeMethodContext_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod8579, Runtime_NativeMethodContext_Class);
=======
    Array PThreadedCode8546 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_NativeMethodContext_message, (Optr)&t_method_return);
    Method PMethod8545 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8546, 1, slot_Runtime_NativeMethodContext_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod8545, Runtime_NativeMethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Runtime_NativeMethodContext_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_closure_() {
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray8582 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8584 = new_Assign((Optr)slot_Runtime_NativeMethodContext_closure, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8583 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8584, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8581 = new_Method_with(PArray8582, empty_Array, empty_Array, PThreadedCode8583, 2, PAssign8584, self);
    
    MethodClosure MC_SMB_closure_ = new_MethodClosure((Method)PMethod8581, Runtime_NativeMethodContext_Class);
=======
    Array PArray8548 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8550 = new_Assign((Optr)slot_Runtime_NativeMethodContext_closure, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8549 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8550, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8547 = new_Method_with(PArray8548, empty_Array, empty_Array, PThreadedCode8549, 2, PAssign8550, self);
    
    MethodClosure MC_SMB_closure_ = new_MethodClosure((Method)PMethod8547, Runtime_NativeMethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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