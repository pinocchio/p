#include <lib/class/Runtime/FakeThread.h>


Optr layout_Runtime_FakeThread_Class_class;
Optr slot_Runtime_FakeThread_continuation;
Optr slot_Runtime_FakeThread_context;
Optr layout_Runtime_FakeThread;


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray8548 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8550 = new_Assign((Optr)slot_Runtime_FakeThread_context, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8549 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8550, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8547 = new_Method_with(PArray8548, empty_Array, empty_Array, PThreadedCode8549, 2, PAssign8550, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod8547, Runtime_FakeThread_Class);
=======
    Array PArray8514 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8516 = new_Assign((Optr)slot_Runtime_FakeThread_context, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8515 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8516, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8513 = new_Method_with(PArray8514, empty_Array, empty_Array, PThreadedCode8515, 2, PAssign8516, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod8513, Runtime_FakeThread_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Runtime_FakeThread_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_continuation() {
    Symbol SMB_continuation = new_Symbol(L"continuation");
<<<<<<< HEAD
    Array PThreadedCode8552 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_FakeThread_continuation, (Optr)&t_method_return);
    Method PMethod8551 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8552, 1, slot_Runtime_FakeThread_continuation);
    
    MethodClosure MC_SMB_continuation = new_MethodClosure((Method)PMethod8551, Runtime_FakeThread_Class);
=======
    Array PThreadedCode8518 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_FakeThread_continuation, (Optr)&t_method_return);
    Method PMethod8517 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8518, 1, slot_Runtime_FakeThread_continuation);
    
    MethodClosure MC_SMB_continuation = new_MethodClosure((Method)PMethod8517, Runtime_FakeThread_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Runtime_FakeThread_Class, SMB_continuation, MC_SMB_continuation);
}


static void init_SMB_continuation_() {
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray8554 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8556 = new_Assign((Optr)slot_Runtime_FakeThread_continuation, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8555 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8556, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8553 = new_Method_with(PArray8554, empty_Array, empty_Array, PThreadedCode8555, 2, PAssign8556, self);
    
    MethodClosure MC_SMB_continuation_ = new_MethodClosure((Method)PMethod8553, Runtime_FakeThread_Class);
=======
    Array PArray8520 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8522 = new_Assign((Optr)slot_Runtime_FakeThread_continuation, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8521 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8522, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8519 = new_Method_with(PArray8520, empty_Array, empty_Array, PThreadedCode8521, 2, PAssign8522, self);
    
    MethodClosure MC_SMB_continuation_ = new_MethodClosure((Method)PMethod8519, Runtime_FakeThread_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Runtime_FakeThread_Class, SMB_continuation_, MC_SMB_continuation_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
<<<<<<< HEAD
    Array PThreadedCode8558 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_FakeThread_context, (Optr)&t_method_return);
    Method PMethod8557 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8558, 1, slot_Runtime_FakeThread_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod8557, Runtime_FakeThread_Class);
=======
    Array PThreadedCode8524 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_FakeThread_context, (Optr)&t_method_return);
    Method PMethod8523 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8524, 1, slot_Runtime_FakeThread_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod8523, Runtime_FakeThread_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Runtime_FakeThread_Class, SMB_context, MC_SMB_context);
}

void init_Runtime_PFakeThread_layout() {
    layout_Runtime_FakeThread_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Runtime_FakeThread_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_FakeThread_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_FakeThread_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_FakeThread_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_FakeThread_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_FakeThread = new_Symbol(L"FakeThread");
    slot_Runtime_FakeThread_continuation = (Optr)new_Slot(0, L"continuation");
    slot_Runtime_FakeThread_context = (Optr)new_Slot(1, L"context");
    layout_Runtime_FakeThread = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Runtime_FakeThread)->values[0] = slot_Runtime_FakeThread_continuation; // continuation 
    ((Array)layout_Runtime_FakeThread)->values[1] = slot_Runtime_FakeThread_context; // context 
    Runtime_FakeThread_Class = (Class)new_Class(Object_Class, layout_Runtime_FakeThread_Class_class);
    Runtime_FakeThread_Class->layout = layout_Runtime_FakeThread;
    Runtime_FakeThread_Class->name = SMB_FakeThread;
    
}

void init_Runtime_PFakeThread_methods() {
    init_SMB_context_();
    init_SMB_continuation();
    init_SMB_continuation_();
    init_SMB_context();
    
}