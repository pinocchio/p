#include <lib/class/Runtime/FakeThread.h>


Optr layout_Runtime_FakeThread_Class_class;
Optr slot_Runtime_FakeThread_continuation;
Optr slot_Runtime_FakeThread_context;
Optr layout_Runtime_FakeThread;


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray8282 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8284 = new_Assign((Optr)slot_Runtime_FakeThread_context, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8283 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8284, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8281 = new_Method_with(PArray8282, empty_Array, empty_Array, PThreadedCode8283, 2, PAssign8284, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod8281, Runtime_FakeThread_Class);
    store_method(Runtime_FakeThread_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_continuation() {
    Symbol SMB_continuation = new_Symbol(L"continuation");
    Array PThreadedCode8286 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_FakeThread_continuation, (Optr)&t_method_return);
    Method PMethod8285 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8286, 1, slot_Runtime_FakeThread_continuation);
    
    MethodClosure MC_SMB_continuation = new_MethodClosure((Method)PMethod8285, Runtime_FakeThread_Class);
    store_method(Runtime_FakeThread_Class, SMB_continuation, MC_SMB_continuation);
}


static void init_SMB_continuation_() {
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray8288 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8290 = new_Assign((Optr)slot_Runtime_FakeThread_continuation, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8289 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8290, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8287 = new_Method_with(PArray8288, empty_Array, empty_Array, PThreadedCode8289, 2, PAssign8290, self);
    
    MethodClosure MC_SMB_continuation_ = new_MethodClosure((Method)PMethod8287, Runtime_FakeThread_Class);
    store_method(Runtime_FakeThread_Class, SMB_continuation_, MC_SMB_continuation_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode8292 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_FakeThread_context, (Optr)&t_method_return);
    Method PMethod8291 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8292, 1, slot_Runtime_FakeThread_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod8291, Runtime_FakeThread_Class);
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