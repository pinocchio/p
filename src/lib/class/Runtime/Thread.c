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
    Send PSend7655 = new_Send((Optr)PThread_classReference, SMB_yield_, 1, (Optr)self);
    Array PThreadedCode7654 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7655, (Optr)&t_method_return);
    Method PMethod7653 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7654, 1, PSend7655);
    
    MethodClosure MC_SMB_yield = new_MethodClosure((Method)PMethod7653, Thread_Class);
    store_method(Thread_Class, SMB_yield, MC_SMB_yield);
}


static void init_SMB_resume() {
    Symbol SMB_resume = new_Symbol(L"resume");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7658 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_resume, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7657 = new_Array_with(1, (Optr)PAnnotation7658);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7660 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7659 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7660, (Optr)&t_method_return);
    NativeMethod PNativeMethod7656 = new_NativeMethod_with(empty_Array, empty_Array, PArray7657, PThreadedCode7659, 1, PSend7660);
    
    MethodClosure MC_SMB_resume = new_MethodClosure((Method)PNativeMethod7656, Thread_Class);
    store_method(Thread_Class, SMB_resume, MC_SMB_resume);
}


static void init_SMB_nextInterpreter_() {
    Symbol SMB_nextInterpreter_ = new_Symbol(L"nextInterpreter:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray7662 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend7664 = new_Send((Optr)VAR_anInterpreter_0_0, SMB_isNil, 0);
    // isNil. 
    Send PSend7667 = new_Send((Optr)slot_Runtime_Thread_nextInterpreter, SMB_isNil, 0);
    Array PThreadedCode7666 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_nextInterpreter, (Optr)&t_send0, (Optr)PSend7667, (Optr)&t_block_return);
    Block PBlock7665 = new_Block_with(empty_Array, empty_Array, PThreadedCode7666, 1, PSend7667);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend7668 = new_Send((Optr)PSend7664, SMB_or_, 1, (Optr)PBlock7665);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend7672 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode7671 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7672, (Optr)&t_block_return);
    Block PBlock7670 = new_Block_with(empty_Array, empty_Array, PThreadedCode7671, 1, PSend7672);
    // ifFalse:. 
    Send PSend7669 = new_Send((Optr)PSend7668, SMB_ifFalse_, 1, (Optr)PBlock7670);
    Assign PAssign7673 = new_Assign((Optr)slot_Runtime_Thread_nextInterpreter, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode7663 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send0, (Optr)PSend7664, (Optr)&t_push_closure, (Optr)PBlock7665, (Optr)&t_send1, (Optr)PSend7668, (Optr)&t_send_ifFalse_, (Optr)PSend7669, (Optr)PBlock7670, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7673, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7661 = new_Method_with(PArray7662, empty_Array, empty_Array, PThreadedCode7663, 3, PSend7669, PAssign7673, self);
    
    MethodClosure MC_SMB_nextInterpreter_ = new_MethodClosure((Method)PMethod7661, Thread_Class);
    store_method(Thread_Class, SMB_nextInterpreter_, MC_SMB_nextInterpreter_);
}


static void init_SMB_primYield() {
    Symbol SMB_primYield = new_Symbol(L"primYield");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7676 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_primYield, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7675 = new_Array_with(1, (Optr)PAnnotation7676);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7678 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7677 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7678, (Optr)&t_method_return);
    NativeMethod PNativeMethod7674 = new_NativeMethod_with(empty_Array, empty_Array, PArray7675, PThreadedCode7677, 1, PSend7678);
    
    MethodClosure MC_SMB_primYield = new_MethodClosure((Method)PNativeMethod7674, Thread_Class);
    store_method(Thread_Class, SMB_primYield, MC_SMB_primYield);
}


static void init_SMB_terminate() {
    Symbol SMB_terminate = new_Symbol(L"terminate");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7681 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7682 = new_Send((Optr)PSend7681, SMB_resumeNext, 0);
    Array PThreadedCode7680 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7681, (Optr)&t_send0, (Optr)PSend7682, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7679 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7680, 2, PSend7682, self);
    
    MethodClosure MC_SMB_terminate = new_MethodClosure((Method)PMethod7679, Thread_Class);
    store_method(Thread_Class, SMB_terminate, MC_SMB_terminate);
}


static void init_SMB_resumeSafe() {
    Symbol SMB_resumeSafe = new_Symbol(L"resumeSafe");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend7685 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7686 = new_Send((Optr)PSend7685, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_threads = new_Symbol(L"threads");
    // threads. 
    Send PSend7690 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7691 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7692 = new_Send((Optr)PSend7690, SMB_remove_, 1, (Optr)PSend7691);
    // threads. 
    Send PSend7693 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7694 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7695 = new_Send((Optr)PSend7693, SMB_addFirst_, 1, (Optr)PSend7694);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7696 = new_Send((Optr)self, SMB_resume, 0);
    Array PThreadedCode7689 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7690, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7691, (Optr)&t_send1, (Optr)PSend7692, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7693, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7694, (Optr)&t_send1, (Optr)PSend7695, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7696, (Optr)&t_block_return);
    Block PBlock7688 = new_Block_with(empty_Array, empty_Array, PThreadedCode7689, 3, PSend7692, PSend7695, PSend7696);
    // ifFalse:. 
    Send PSend7687 = new_Send((Optr)PSend7686, SMB_ifFalse_, 1, (Optr)PBlock7688);
    Array PThreadedCode7684 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7685, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7686, (Optr)&t_send_ifFalse_, (Optr)PSend7687, (Optr)PBlock7688, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7683 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7684, 2, PSend7687, self);
    
    MethodClosure MC_SMB_resumeSafe = new_MethodClosure((Method)PMethod7683, Thread_Class);
    store_method(Thread_Class, SMB_resumeSafe, MC_SMB_resumeSafe);
}


static void init_SMB_sleep_() {
    Symbol SMB_sleep_ = new_Symbol(L"sleep:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray7698 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7700 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7699 = new_Array_with(1, (Optr)PAnnotation7700);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7702 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7701 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7702, (Optr)&t_method_return);
    NativeMethod PNativeMethod7697 = new_NativeMethod_with(PArray7698, empty_Array, PArray7699, PThreadedCode7701, 1, PSend7702);
    
    MethodClosure MC_SMB_sleep_ = new_MethodClosure((Method)PNativeMethod7697, Thread_Class);
    store_method(Thread_Class, SMB_sleep_, MC_SMB_sleep_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray7704 = new_Array_with(1, (Optr)VAR_name_0_0);
    Array PThreadedCode7705 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7703 = new_Method_with(PArray7704, empty_Array, empty_Array, PThreadedCode7705, 1, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod7703, Thread_Class);
    store_method(Thread_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_storage() {
    Symbol SMB_storage = new_Symbol(L"storage");
    Array PThreadedCode7707 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_storage, (Optr)&t_method_return);
    Method PMethod7706 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7707, 1, slot_Runtime_Thread_storage);
    
    MethodClosure MC_SMB_storage = new_MethodClosure((Method)PMethod7706, Thread_Class);
    store_method(Thread_Class, SMB_storage, MC_SMB_storage);
}


static void init_SMB_evaluate_() {
    Symbol SMB_evaluate_ = new_Symbol(L"evaluate:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray7709 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7711 = new_Send((Optr)VAR_block_0_0, SMB_value, 0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend7712 = new_Send((Optr)self, SMB_terminate, 0);
    Array PThreadedCode7710 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend7711, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7712, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7708 = new_Method_with(PArray7709, empty_Array, empty_Array, PThreadedCode7710, 3, PSend7711, PSend7712, self);
    
    MethodClosure MC_SMB_evaluate_ = new_MethodClosure((Method)PMethod7708, Thread_Class);
    store_method(Thread_Class, SMB_evaluate_, MC_SMB_evaluate_);
}


static void init_SMB_sleep() {
    Symbol SMB_sleep = new_Symbol(L"sleep");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7715 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7714 = new_Array_with(1, (Optr)PAnnotation7715);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7717 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7716 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7717, (Optr)&t_method_return);
    NativeMethod PNativeMethod7713 = new_NativeMethod_with(empty_Array, empty_Array, PArray7714, PThreadedCode7716, 1, PSend7717);
    
    MethodClosure MC_SMB_sleep = new_MethodClosure((Method)PNativeMethod7713, Thread_Class);
    store_method(Thread_Class, SMB_sleep, MC_SMB_sleep);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7719 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7721 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_new_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7720 = new_Array_with(1, (Optr)PAnnotation7721);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7723 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7722 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7723, (Optr)&t_method_return);
    NativeMethod PNativeMethod7718 = new_NativeMethod_with(PArray7719, empty_Array, PArray7720, PThreadedCode7722, 1, PSend7723);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PNativeMethod7718, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_resumeNext() {
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend7726 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_quit = new_Symbol(L"quit");
    // quit. 
    Send PSend7730 = new_Send((Optr)PMain_classReference, SMB_quit, 0);
    Array PThreadedCode7729 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PMain_classReference, (Optr)&t_send0, (Optr)PSend7730, (Optr)&t_block_return);
    Block PBlock7728 = new_Block_with(empty_Array, empty_Array, PThreadedCode7729, 1, PSend7730);
    // ifTrue:. 
    Send PSend7727 = new_Send((Optr)PSend7726, SMB_ifTrue_, 1, (Optr)PBlock7728);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend7731 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_removeLast, 0);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7732 = new_Send((Optr)PSend7731, SMB_resume, 0);
    Array PThreadedCode7725 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7726, (Optr)&t_send_ifTrue_, (Optr)PSend7727, (Optr)PBlock7728, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7731, (Optr)&t_send0, (Optr)PSend7732, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7724 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7725, 3, PSend7727, PSend7732, self);
    
    MethodClosure MC_SMB_resumeNext = new_MethodClosure((Method)PMethod7724, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_resumeNext, MC_SMB_resumeNext);
}


static void init_class_SMB_threads() {
    Symbol SMB_threads = new_Symbol(L"threads");
    Array PThreadedCode7734 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_method_return);
    Method PMethod7733 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7734, 1, slot_Runtime_Thread_Class_class_threads);
    
    MethodClosure MC_SMB_threads = new_MethodClosure((Method)PMethod7733, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_threads, MC_SMB_threads);
}


static void init_class_SMB_removeThread_() {
    Symbol SMB_removeThread_ = new_Symbol(L"removeThread:");
    Variable VAR_aThread_0_0 = new_Variable_named(L"aThread", 0);
    Array PArray7736 = new_Array_with(1, (Optr)VAR_aThread_0_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7738 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_remove_, 1, (Optr)VAR_aThread_0_0);
    Array PThreadedCode7737 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_aThread_0_0, (Optr)&t_send1, (Optr)PSend7738, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7735 = new_Method_with(PArray7736, empty_Array, empty_Array, PThreadedCode7737, 2, PSend7738, self);
    
    MethodClosure MC_SMB_removeThread_ = new_MethodClosure((Method)PMethod7735, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_removeThread_, MC_SMB_removeThread_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7742 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign7741 = new_Assign((Optr)slot_Runtime_Thread_Class_class_threads, (Optr)PSend7742);
    Array PThreadedCode7740 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign7741, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend7742, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7739 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7740, 2, PAssign7741, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7739, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_yield_() {
    Symbol SMB_yield_ = new_Symbol(L"yield:");
    Variable VAR_currentThread_0_0 = new_Variable_named(L"currentThread", 0);
    Array PArray7744 = new_Array_with(1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7746 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_addFirst_, 1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7747 = new_Send((Optr)self, SMB_resumeNext, 0);
    Array PThreadedCode7745 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_currentThread_0_0, (Optr)&t_send1, (Optr)PSend7746, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7747, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod7743 = new_Method_with(PArray7744, empty_Array, empty_Array, PThreadedCode7745, 3, PSend7746, PSend7747, nil_Const);
    
    MethodClosure MC_SMB_yield_ = new_MethodClosure((Method)PMethod7743, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_yield_, MC_SMB_yield_);
}


static void init_class_SMB_for_() {
    Symbol SMB_for_ = new_Symbol(L"for:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7749 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7751 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7752 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_add_, 1, (Optr)PSend7751);
    Array PThreadedCode7750 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend7751, (Optr)&t_send1, (Optr)PSend7752, (Optr)&t_method_return);
    Method PMethod7748 = new_Method_with(PArray7749, empty_Array, empty_Array, PThreadedCode7750, 1, PSend7752);
    
    MethodClosure MC_SMB_for_ = new_MethodClosure((Method)PMethod7748, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_for_, MC_SMB_for_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7755 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_current, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7754 = new_Array_with(1, (Optr)PAnnotation7755);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7757 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7756 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7757, (Optr)&t_method_return);
    NativeMethod PNativeMethod7753 = new_NativeMethod_with(empty_Array, empty_Array, PArray7754, PThreadedCode7756, 1, PSend7757);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PNativeMethod7753, HEADER(Thread_Class));
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