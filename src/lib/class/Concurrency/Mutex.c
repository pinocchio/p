#include <lib/class/Concurrency/Mutex.h>


Optr layout_Concurrency_Mutex_Class_class;
Optr slot_Concurrency_Mutex_semaphore;
Optr slot_Concurrency_Mutex_owner;
Optr layout_Concurrency_Mutex;


static void init_SMB_critical_() {
    Symbol SMB_critical_ = new_Symbol(L"critical:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray24308 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_activeProcess_0_1 = new_Variable_named(L"activeProcess", 0);
    Array PArray24309 = new_Array_with(1, (Optr)VAR_activeProcess_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24312 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend24315 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Assign PAssign24314 = new_Assign((Optr)VAR_activeProcess_0_1, (Optr)PSend24315);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend24316 = new_Send((Optr)VAR_activeProcess_0_1, SMB__pequals_, 1, (Optr)slot_Concurrency_Mutex_owner);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24320 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24321 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24320);
    Array PThreadedCode24319 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend24320, (Optr)&t_send1, (Optr)PSend24321, (Optr)&t_block_return);
    Block PBlock24318 = new_Block_with(empty_Array, empty_Array, PThreadedCode24319, 1, PSend24321);
    // ifTrue:. 
    Send PSend24317 = new_Send((Optr)PSend24316, SMB_ifTrue_, 1, (Optr)PBlock24318);
    Assign PAssign24324 = new_Assign((Optr)slot_Concurrency_Mutex_owner, (Optr)VAR_activeProcess_0_1);
    Assign PAssign24327 = new_Assign((Optr)slot_Concurrency_Mutex_owner, (Optr)nil_Const);
    Array PThreadedCode24326 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)PAssign24327, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24325 = new_Block_with(empty_Array, empty_Array, PThreadedCode24326, 1, PAssign24327);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend24328 = new_Send((Optr)VAR_aBlock_0_0, SMB_ensure_, 1, (Optr)PBlock24325);
    Array PThreadedCode24323 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign24324, (Optr)&t_push_variable, (Optr)VAR_activeProcess_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_closure, (Optr)PBlock24325, (Optr)&t_send1, (Optr)PSend24328, (Optr)&t_block_return);
    Block PBlock24322 = new_Block_with(empty_Array, empty_Array, PThreadedCode24323, 2, PAssign24324, PSend24328);
    // critical:. 
    Send PSend24329 = new_Send((Optr)slot_Concurrency_Mutex_semaphore, SMB_critical_, 1, (Optr)PBlock24322);
    Array PThreadedCode24313 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign24314, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend24315, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_activeProcess_0_1, (Optr)&t_push_slot, (Optr)slot_Concurrency_Mutex_owner, (Optr)&t_send1, (Optr)PSend24316, (Optr)&t_send_ifTrue_, (Optr)PSend24317, (Optr)PBlock24318, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Concurrency_Mutex_semaphore, (Optr)&t_push_closure, (Optr)PBlock24322, (Optr)&t_send1, (Optr)PSend24329, (Optr)&t_method_return);
    Block PBlock24311 = new_Block_with(PArray24312, empty_Array, PThreadedCode24313, 3, PAssign24314, PSend24317, PSend24329);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24330 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24311);
    Array PThreadedCode24310 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24311, (Optr)&t_send1, (Optr)PSend24330, (Optr)&t_method_return);
    Method PMethod24307 = new_Method_with(PArray24308, PArray24309, empty_Array, PThreadedCode24310, 1, PSend24330);
    
    MethodClosure MC_SMB_critical_ = new_MethodClosure((Method)PMethod24307, Concurrency_Mutex_Class);
    store_method(Concurrency_Mutex_Class, SMB_critical_, MC_SMB_critical_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24334 = new_Send((Optr)Semaphore_classReference, SMB_new, 0);
    Assign PAssign24333 = new_Assign((Optr)slot_Concurrency_Mutex_semaphore, (Optr)PSend24334);
    Array PThreadedCode24332 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign24333, (Optr)&t_push_class_reference, (Optr)Semaphore_classReference, (Optr)&t_send0, (Optr)PSend24334, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24331 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24332, 2, PAssign24333, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24331, Concurrency_Mutex_Class);
    store_method(Concurrency_Mutex_Class, SMB_initialize, MC_SMB_initialize);
}

void init_Concurrency_Mutex_layout() {
    layout_Concurrency_Mutex_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Concurrency_Mutex_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Concurrency_Mutex_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Concurrency_Mutex_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Concurrency_Mutex_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Concurrency_Mutex_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Mutex = new_Symbol(L"Mutex");
    slot_Concurrency_Mutex_semaphore = (Optr)new_Slot(0, L"semaphore");
    slot_Concurrency_Mutex_owner = (Optr)new_Slot(1, L"owner");
    layout_Concurrency_Mutex = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Concurrency_Mutex)->values[0] = slot_Concurrency_Mutex_semaphore; // semaphore 
    ((Array)layout_Concurrency_Mutex)->values[1] = slot_Concurrency_Mutex_owner; // owner 
    Concurrency_Mutex_Class = (Class)new_Class(Object_Class, layout_Concurrency_Mutex_Class_class);
    Class_set_superclass(Concurrency_Mutex_Class, Object_Class);
    Concurrency_Mutex_Class->layout = layout_Concurrency_Mutex;
    HEADER(Concurrency_Mutex_Class)->layout = layout_Concurrency_Mutex_Class_class;
    Concurrency_Mutex_Class->name = SMB_Mutex;
    
}

void init_Concurrency_Mutex_methods() {
    init_SMB_critical_();
    init_SMB_initialize();
    
}