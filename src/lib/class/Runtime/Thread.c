#include <lib/class/Runtime/Thread.h>


Optr slot_Runtime_Thread_Class_class_threads;
Optr layout_Runtime_Thread_Class_class;
Optr slot_Runtime_Thread_backupPc;
Optr slot_Runtime_Thread_env;
Optr slot_Runtime_Thread_exp;
Optr slot_Runtime_Thread_storage;
Optr slot_Runtime_Thread_nextInterpreter;
Optr slot_Runtime_Thread_handler;
Optr slot_Runtime_Thread_cnt;
Optr slot_Runtime_Thread_exit;
Optr slot_Runtime_Thread_continue;
Optr layout_Runtime_Thread;


static void init_SMB_yield() {
    Symbol SMB_yield = new_Symbol(L"yield");
    Symbol SMB_yield_ = new_Symbol(L"yield:");
    // yield:. 
    Send PSend7621 = new_Send((Optr)PThread_classReference, SMB_yield_, 1, (Optr)self);
    Array PThreadedCode7620 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7621, (Optr)&t_method_return);
    Method PMethod7619 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7620, 1, PSend7621);
    
    MethodClosure MC_SMB_yield = new_MethodClosure((Method)PMethod7619, Thread_Class);
    store_method(Thread_Class, SMB_yield, MC_SMB_yield);
}


static void init_SMB_resume() {
    Symbol SMB_resume = new_Symbol(L"resume");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7624 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_resume, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7623 = new_Array_with(1, (Optr)PAnnotation7624);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7626 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7625 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7626, (Optr)&t_method_return);
    NativeMethod PNativeMethod7622 = new_NativeMethod_with(empty_Array, empty_Array, PArray7623, PThreadedCode7625, 1, PSend7626);
    
    MethodClosure MC_SMB_resume = new_MethodClosure((Method)PNativeMethod7622, Thread_Class);
    store_method(Thread_Class, SMB_resume, MC_SMB_resume);
}


static void init_SMB_nextInterpreter_() {
    Symbol SMB_nextInterpreter_ = new_Symbol(L"nextInterpreter:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray7628 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend7630 = new_Send((Optr)VAR_anInterpreter_0_0, SMB_isNil, 0);
    // isNil. 
    Send PSend7633 = new_Send((Optr)slot_Runtime_Thread_nextInterpreter, SMB_isNil, 0);
    Array PThreadedCode7632 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_nextInterpreter, (Optr)&t_send0, (Optr)PSend7633, (Optr)&t_block_return);
    Block PBlock7631 = new_Block_with(empty_Array, empty_Array, PThreadedCode7632, 1, PSend7633);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend7634 = new_Send((Optr)PSend7630, SMB_or_, 1, (Optr)PBlock7631);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend7638 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode7637 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7638, (Optr)&t_block_return);
    Block PBlock7636 = new_Block_with(empty_Array, empty_Array, PThreadedCode7637, 1, PSend7638);
    // ifFalse:. 
    Send PSend7635 = new_Send((Optr)PSend7634, SMB_ifFalse_, 1, (Optr)PBlock7636);
    Assign PAssign7639 = new_Assign((Optr)slot_Runtime_Thread_nextInterpreter, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode7629 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send0, (Optr)PSend7630, (Optr)&t_push_closure, (Optr)PBlock7631, (Optr)&t_send1, (Optr)PSend7634, (Optr)&t_send_ifFalse_, (Optr)PSend7635, (Optr)PBlock7636, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7639, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7627 = new_Method_with(PArray7628, empty_Array, empty_Array, PThreadedCode7629, 3, PSend7635, PAssign7639, self);
    
    MethodClosure MC_SMB_nextInterpreter_ = new_MethodClosure((Method)PMethod7627, Thread_Class);
    store_method(Thread_Class, SMB_nextInterpreter_, MC_SMB_nextInterpreter_);
}


static void init_SMB_primYield() {
    Symbol SMB_primYield = new_Symbol(L"primYield");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7642 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_primYield, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7641 = new_Array_with(1, (Optr)PAnnotation7642);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7644 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7643 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7644, (Optr)&t_method_return);
    NativeMethod PNativeMethod7640 = new_NativeMethod_with(empty_Array, empty_Array, PArray7641, PThreadedCode7643, 1, PSend7644);
    
    MethodClosure MC_SMB_primYield = new_MethodClosure((Method)PNativeMethod7640, Thread_Class);
    store_method(Thread_Class, SMB_primYield, MC_SMB_primYield);
}


static void init_SMB_terminate() {
    Symbol SMB_terminate = new_Symbol(L"terminate");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7647 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7648 = new_Send((Optr)PSend7647, SMB_resumeNext, 0);
    Array PThreadedCode7646 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7647, (Optr)&t_send0, (Optr)PSend7648, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7645 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7646, 2, PSend7648, self);
    
    MethodClosure MC_SMB_terminate = new_MethodClosure((Method)PMethod7645, Thread_Class);
    store_method(Thread_Class, SMB_terminate, MC_SMB_terminate);
}


static void init_SMB_resumeSafe() {
    Symbol SMB_resumeSafe = new_Symbol(L"resumeSafe");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend7651 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7652 = new_Send((Optr)PSend7651, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_threads = new_Symbol(L"threads");
    // threads. 
    Send PSend7656 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7657 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7658 = new_Send((Optr)PSend7656, SMB_remove_, 1, (Optr)PSend7657);
    // threads. 
    Send PSend7659 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7660 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7661 = new_Send((Optr)PSend7659, SMB_addFirst_, 1, (Optr)PSend7660);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7662 = new_Send((Optr)self, SMB_resume, 0);
    Array PThreadedCode7655 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7656, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7657, (Optr)&t_send1, (Optr)PSend7658, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7659, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7660, (Optr)&t_send1, (Optr)PSend7661, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7662, (Optr)&t_block_return);
    Block PBlock7654 = new_Block_with(empty_Array, empty_Array, PThreadedCode7655, 3, PSend7658, PSend7661, PSend7662);
    // ifFalse:. 
    Send PSend7653 = new_Send((Optr)PSend7652, SMB_ifFalse_, 1, (Optr)PBlock7654);
    Array PThreadedCode7650 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7651, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7652, (Optr)&t_send_ifFalse_, (Optr)PSend7653, (Optr)PBlock7654, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7649 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7650, 2, PSend7653, self);
    
    MethodClosure MC_SMB_resumeSafe = new_MethodClosure((Method)PMethod7649, Thread_Class);
    store_method(Thread_Class, SMB_resumeSafe, MC_SMB_resumeSafe);
}


static void init_SMB_sleep_() {
    Symbol SMB_sleep_ = new_Symbol(L"sleep:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray7664 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7666 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7665 = new_Array_with(1, (Optr)PAnnotation7666);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7668 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7667 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7668, (Optr)&t_method_return);
    NativeMethod PNativeMethod7663 = new_NativeMethod_with(PArray7664, empty_Array, PArray7665, PThreadedCode7667, 1, PSend7668);
    
    MethodClosure MC_SMB_sleep_ = new_MethodClosure((Method)PNativeMethod7663, Thread_Class);
    store_method(Thread_Class, SMB_sleep_, MC_SMB_sleep_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray7670 = new_Array_with(1, (Optr)VAR_name_0_0);
    Array PThreadedCode7671 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7669 = new_Method_with(PArray7670, empty_Array, empty_Array, PThreadedCode7671, 1, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod7669, Thread_Class);
    store_method(Thread_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_storage() {
    Symbol SMB_storage = new_Symbol(L"storage");
    Array PThreadedCode7673 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_storage, (Optr)&t_method_return);
    Method PMethod7672 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7673, 1, slot_Runtime_Thread_storage);
    
    MethodClosure MC_SMB_storage = new_MethodClosure((Method)PMethod7672, Thread_Class);
    store_method(Thread_Class, SMB_storage, MC_SMB_storage);
}


static void init_SMB_evaluate_() {
    Symbol SMB_evaluate_ = new_Symbol(L"evaluate:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray7675 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7677 = new_Send((Optr)VAR_block_0_0, SMB_value, 0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend7678 = new_Send((Optr)self, SMB_terminate, 0);
    Array PThreadedCode7676 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend7677, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7678, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7674 = new_Method_with(PArray7675, empty_Array, empty_Array, PThreadedCode7676, 3, PSend7677, PSend7678, self);
    
    MethodClosure MC_SMB_evaluate_ = new_MethodClosure((Method)PMethod7674, Thread_Class);
    store_method(Thread_Class, SMB_evaluate_, MC_SMB_evaluate_);
}


static void init_SMB_sleep() {
    Symbol SMB_sleep = new_Symbol(L"sleep");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7681 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7680 = new_Array_with(1, (Optr)PAnnotation7681);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7683 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7682 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7683, (Optr)&t_method_return);
    NativeMethod PNativeMethod7679 = new_NativeMethod_with(empty_Array, empty_Array, PArray7680, PThreadedCode7682, 1, PSend7683);
    
    MethodClosure MC_SMB_sleep = new_MethodClosure((Method)PNativeMethod7679, Thread_Class);
    store_method(Thread_Class, SMB_sleep, MC_SMB_sleep);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7685 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7687 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_new_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7686 = new_Array_with(1, (Optr)PAnnotation7687);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7689 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7688 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7689, (Optr)&t_method_return);
    NativeMethod PNativeMethod7684 = new_NativeMethod_with(PArray7685, empty_Array, PArray7686, PThreadedCode7688, 1, PSend7689);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PNativeMethod7684, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_resumeNext() {
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend7692 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_quit = new_Symbol(L"quit");
    // quit. 
    Send PSend7696 = new_Send((Optr)PMain_classReference, SMB_quit, 0);
    Array PThreadedCode7695 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PMain_classReference, (Optr)&t_send0, (Optr)PSend7696, (Optr)&t_block_return);
    Block PBlock7694 = new_Block_with(empty_Array, empty_Array, PThreadedCode7695, 1, PSend7696);
    // ifTrue:. 
    Send PSend7693 = new_Send((Optr)PSend7692, SMB_ifTrue_, 1, (Optr)PBlock7694);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend7697 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_removeLast, 0);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7698 = new_Send((Optr)PSend7697, SMB_resume, 0);
    Array PThreadedCode7691 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7692, (Optr)&t_send_ifTrue_, (Optr)PSend7693, (Optr)PBlock7694, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7697, (Optr)&t_send0, (Optr)PSend7698, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7690 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7691, 3, PSend7693, PSend7698, self);
    
    MethodClosure MC_SMB_resumeNext = new_MethodClosure((Method)PMethod7690, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_resumeNext, MC_SMB_resumeNext);
}


static void init_class_SMB_threads() {
    Symbol SMB_threads = new_Symbol(L"threads");
    Array PThreadedCode7700 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_method_return);
    Method PMethod7699 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7700, 1, slot_Runtime_Thread_Class_class_threads);
    
    MethodClosure MC_SMB_threads = new_MethodClosure((Method)PMethod7699, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_threads, MC_SMB_threads);
}


static void init_class_SMB_removeThread_() {
    Symbol SMB_removeThread_ = new_Symbol(L"removeThread:");
    Variable VAR_aThread_0_0 = new_Variable_named(L"aThread", 0);
    Array PArray7702 = new_Array_with(1, (Optr)VAR_aThread_0_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7704 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_remove_, 1, (Optr)VAR_aThread_0_0);
    Array PThreadedCode7703 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_aThread_0_0, (Optr)&t_send1, (Optr)PSend7704, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7701 = new_Method_with(PArray7702, empty_Array, empty_Array, PThreadedCode7703, 2, PSend7704, self);
    
    MethodClosure MC_SMB_removeThread_ = new_MethodClosure((Method)PMethod7701, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_removeThread_, MC_SMB_removeThread_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7708 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign7707 = new_Assign((Optr)slot_Runtime_Thread_Class_class_threads, (Optr)PSend7708);
    Array PThreadedCode7706 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign7707, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend7708, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7705 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7706, 2, PAssign7707, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7705, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_yield_() {
    Symbol SMB_yield_ = new_Symbol(L"yield:");
    Variable VAR_currentThread_0_0 = new_Variable_named(L"currentThread", 0);
    Array PArray7710 = new_Array_with(1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7712 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_addFirst_, 1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7713 = new_Send((Optr)self, SMB_resumeNext, 0);
    Array PThreadedCode7711 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_currentThread_0_0, (Optr)&t_send1, (Optr)PSend7712, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7713, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod7709 = new_Method_with(PArray7710, empty_Array, empty_Array, PThreadedCode7711, 3, PSend7712, PSend7713, nil_Const);
    
    MethodClosure MC_SMB_yield_ = new_MethodClosure((Method)PMethod7709, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_yield_, MC_SMB_yield_);
}


static void init_class_SMB_for_() {
    Symbol SMB_for_ = new_Symbol(L"for:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7715 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7717 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7718 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_add_, 1, (Optr)PSend7717);
    Array PThreadedCode7716 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend7717, (Optr)&t_send1, (Optr)PSend7718, (Optr)&t_method_return);
    Method PMethod7714 = new_Method_with(PArray7715, empty_Array, empty_Array, PThreadedCode7716, 1, PSend7718);
    
    MethodClosure MC_SMB_for_ = new_MethodClosure((Method)PMethod7714, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_for_, MC_SMB_for_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7721 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_current, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7720 = new_Array_with(1, (Optr)PAnnotation7721);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7723 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7722 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7723, (Optr)&t_method_return);
    NativeMethod PNativeMethod7719 = new_NativeMethod_with(empty_Array, empty_Array, PArray7720, PThreadedCode7722, 1, PSend7723);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PNativeMethod7719, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_current, MC_SMB_current);
}

void init_Runtime_PThread_layout() {
    slot_Runtime_Thread_Class_class_threads = (Optr)new_Slot(5, L"threads");
    layout_Runtime_Thread_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Runtime_Thread_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_Thread_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_Thread_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_Thread_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_Thread_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Runtime_Thread_Class_class)->values[5] = slot_Runtime_Thread_Class_class_threads; // threads 
    
    Symbol  SMB_Thread = new_Symbol(L"Thread");
    slot_Runtime_Thread_backupPc = (Optr)new_Slot(0, L"backupPc");
    slot_Runtime_Thread_env = (Optr)new_Slot(1, L"env");
    slot_Runtime_Thread_exp = (Optr)new_Slot(2, L"exp");
    slot_Runtime_Thread_storage = (Optr)new_Slot(3, L"storage");
    slot_Runtime_Thread_nextInterpreter = (Optr)new_Slot(4, L"nextInterpreter");
    slot_Runtime_Thread_handler = (Optr)new_Slot(5, L"handler");
    slot_Runtime_Thread_cnt = (Optr)new_Slot(6, L"cnt");
    slot_Runtime_Thread_exit = (Optr)new_Slot(7, L"exit");
    slot_Runtime_Thread_continue = (Optr)new_Slot(8, L"continue");
    layout_Runtime_Thread = (Optr)create_layout_with_vars(ArrayLayout_Class, 9);
    ((Array)layout_Runtime_Thread)->values[0] = slot_Runtime_Thread_backupPc;
    ((Array)layout_Runtime_Thread)->values[1] = slot_Runtime_Thread_env;
    ((Array)layout_Runtime_Thread)->values[2] = slot_Runtime_Thread_exp;
    ((Array)layout_Runtime_Thread)->values[3] = slot_Runtime_Thread_storage;
    ((Array)layout_Runtime_Thread)->values[4] = slot_Runtime_Thread_nextInterpreter;
    ((Array)layout_Runtime_Thread)->values[5] = slot_Runtime_Thread_handler;
    ((Array)layout_Runtime_Thread)->values[6] = slot_Runtime_Thread_cnt;
    ((Array)layout_Runtime_Thread)->values[7] = slot_Runtime_Thread_exit;
    ((Array)layout_Runtime_Thread)->values[8] = slot_Runtime_Thread_continue;
    Thread_Class = (Class)new_Class(Object_Class, layout_Runtime_Thread_Class_class);
    Thread_Class->layout = layout_Runtime_Thread;
    Thread_Class->name = SMB_Thread;
    
}

void init_Runtime_PThread_methods() {
    init_SMB_yield();
    init_SMB_resume();
    init_SMB_nextInterpreter_();
    init_SMB_primYield();
    init_SMB_terminate();
    init_SMB_resumeSafe();
    init_SMB_sleep_();
    init_SMB_name_();
    init_SMB_storage();
    init_SMB_evaluate_();
    init_SMB_sleep();
    init_class_SMB_new_();
    init_class_SMB_resumeNext();
    init_class_SMB_threads();
    init_class_SMB_removeThread_();
    init_class_SMB_initialize();
    init_class_SMB_yield_();
    init_class_SMB_for_();
    init_class_SMB_current();
    
}