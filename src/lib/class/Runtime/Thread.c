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
    Send PSend7666 = new_Send((Optr)PThread_classReference, SMB_yield_, 1, (Optr)self);
    Array PThreadedCode7665 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7666, (Optr)&t_method_return);
    Method PMethod7664 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7665, 1, PSend7666);
    
    MethodClosure MC_SMB_yield = new_MethodClosure((Method)PMethod7664, Thread_Class);
    store_method(Thread_Class, SMB_yield, MC_SMB_yield);
}


static void init_SMB_resume() {
    Symbol SMB_resume = new_Symbol(L"resume");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7669 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_resume, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7668 = new_Array_with(1, (Optr)PAnnotation7669);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7671 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7670 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7671, (Optr)&t_method_return);
    NativeMethod PNativeMethod7667 = new_NativeMethod_with(empty_Array, empty_Array, PArray7668, PThreadedCode7670, 1, PSend7671);
    
    MethodClosure MC_SMB_resume = new_MethodClosure((Method)PNativeMethod7667, Thread_Class);
    store_method(Thread_Class, SMB_resume, MC_SMB_resume);
}


static void init_SMB_nextInterpreter_() {
    Symbol SMB_nextInterpreter_ = new_Symbol(L"nextInterpreter:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray7673 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend7675 = new_Send((Optr)VAR_anInterpreter_0_0, SMB_isNil, 0);
    // isNil. 
    Send PSend7678 = new_Send((Optr)slot_Runtime_Thread_nextInterpreter, SMB_isNil, 0);
    Array PThreadedCode7677 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_nextInterpreter, (Optr)&t_send0, (Optr)PSend7678, (Optr)&t_block_return);
    Block PBlock7676 = new_Block_with(empty_Array, empty_Array, PThreadedCode7677, 1, PSend7678);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend7679 = new_Send((Optr)PSend7675, SMB_or_, 1, (Optr)PBlock7676);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend7683 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode7682 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7683, (Optr)&t_block_return);
    Block PBlock7681 = new_Block_with(empty_Array, empty_Array, PThreadedCode7682, 1, PSend7683);
    // ifFalse:. 
    Send PSend7680 = new_Send((Optr)PSend7679, SMB_ifFalse_, 1, (Optr)PBlock7681);
    Assign PAssign7684 = new_Assign((Optr)slot_Runtime_Thread_nextInterpreter, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode7674 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send0, (Optr)PSend7675, (Optr)&t_push_closure, (Optr)PBlock7676, (Optr)&t_send1, (Optr)PSend7679, (Optr)&t_send_ifFalse_, (Optr)PSend7680, (Optr)PBlock7681, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7684, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7672 = new_Method_with(PArray7673, empty_Array, empty_Array, PThreadedCode7674, 3, PSend7680, PAssign7684, self);
    
    MethodClosure MC_SMB_nextInterpreter_ = new_MethodClosure((Method)PMethod7672, Thread_Class);
    store_method(Thread_Class, SMB_nextInterpreter_, MC_SMB_nextInterpreter_);
}


static void init_SMB_primYield() {
    Symbol SMB_primYield = new_Symbol(L"primYield");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7687 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_primYield, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7686 = new_Array_with(1, (Optr)PAnnotation7687);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7689 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7688 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7689, (Optr)&t_method_return);
    NativeMethod PNativeMethod7685 = new_NativeMethod_with(empty_Array, empty_Array, PArray7686, PThreadedCode7688, 1, PSend7689);
    
    MethodClosure MC_SMB_primYield = new_MethodClosure((Method)PNativeMethod7685, Thread_Class);
    store_method(Thread_Class, SMB_primYield, MC_SMB_primYield);
}


static void init_SMB_terminate() {
    Symbol SMB_terminate = new_Symbol(L"terminate");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7692 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7693 = new_Send((Optr)PSend7692, SMB_resumeNext, 0);
    Array PThreadedCode7691 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7692, (Optr)&t_send0, (Optr)PSend7693, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7690 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7691, 2, PSend7693, self);
    
    MethodClosure MC_SMB_terminate = new_MethodClosure((Method)PMethod7690, Thread_Class);
    store_method(Thread_Class, SMB_terminate, MC_SMB_terminate);
}


static void init_SMB_resumeSafe() {
    Symbol SMB_resumeSafe = new_Symbol(L"resumeSafe");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend7696 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7697 = new_Send((Optr)PSend7696, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_threads = new_Symbol(L"threads");
    // threads. 
    Send PSend7701 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7702 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7703 = new_Send((Optr)PSend7701, SMB_remove_, 1, (Optr)PSend7702);
    // threads. 
    Send PSend7704 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7705 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7706 = new_Send((Optr)PSend7704, SMB_addFirst_, 1, (Optr)PSend7705);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7707 = new_Send((Optr)self, SMB_resume, 0);
    Array PThreadedCode7700 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7701, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7702, (Optr)&t_send1, (Optr)PSend7703, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7704, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7705, (Optr)&t_send1, (Optr)PSend7706, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7707, (Optr)&t_block_return);
    Block PBlock7699 = new_Block_with(empty_Array, empty_Array, PThreadedCode7700, 3, PSend7703, PSend7706, PSend7707);
    // ifFalse:. 
    Send PSend7698 = new_Send((Optr)PSend7697, SMB_ifFalse_, 1, (Optr)PBlock7699);
    Array PThreadedCode7695 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7696, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7697, (Optr)&t_send_ifFalse_, (Optr)PSend7698, (Optr)PBlock7699, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7694 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7695, 2, PSend7698, self);
    
    MethodClosure MC_SMB_resumeSafe = new_MethodClosure((Method)PMethod7694, Thread_Class);
    store_method(Thread_Class, SMB_resumeSafe, MC_SMB_resumeSafe);
}


static void init_SMB_sleep_() {
    Symbol SMB_sleep_ = new_Symbol(L"sleep:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray7709 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7711 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7710 = new_Array_with(1, (Optr)PAnnotation7711);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7713 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7712 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7713, (Optr)&t_method_return);
    NativeMethod PNativeMethod7708 = new_NativeMethod_with(PArray7709, empty_Array, PArray7710, PThreadedCode7712, 1, PSend7713);
    
    MethodClosure MC_SMB_sleep_ = new_MethodClosure((Method)PNativeMethod7708, Thread_Class);
    store_method(Thread_Class, SMB_sleep_, MC_SMB_sleep_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray7715 = new_Array_with(1, (Optr)VAR_name_0_0);
    Array PThreadedCode7716 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7714 = new_Method_with(PArray7715, empty_Array, empty_Array, PThreadedCode7716, 1, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod7714, Thread_Class);
    store_method(Thread_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_storage() {
    Symbol SMB_storage = new_Symbol(L"storage");
    Array PThreadedCode7718 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_storage, (Optr)&t_method_return);
    Method PMethod7717 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7718, 1, slot_Runtime_Thread_storage);
    
    MethodClosure MC_SMB_storage = new_MethodClosure((Method)PMethod7717, Thread_Class);
    store_method(Thread_Class, SMB_storage, MC_SMB_storage);
}


static void init_SMB_evaluate_() {
    Symbol SMB_evaluate_ = new_Symbol(L"evaluate:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray7720 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7722 = new_Send((Optr)VAR_block_0_0, SMB_value, 0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend7723 = new_Send((Optr)self, SMB_terminate, 0);
    Array PThreadedCode7721 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend7722, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7723, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7719 = new_Method_with(PArray7720, empty_Array, empty_Array, PThreadedCode7721, 3, PSend7722, PSend7723, self);
    
    MethodClosure MC_SMB_evaluate_ = new_MethodClosure((Method)PMethod7719, Thread_Class);
    store_method(Thread_Class, SMB_evaluate_, MC_SMB_evaluate_);
}


static void init_SMB_sleep() {
    Symbol SMB_sleep = new_Symbol(L"sleep");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7726 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7725 = new_Array_with(1, (Optr)PAnnotation7726);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7728 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7727 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7728, (Optr)&t_method_return);
    NativeMethod PNativeMethod7724 = new_NativeMethod_with(empty_Array, empty_Array, PArray7725, PThreadedCode7727, 1, PSend7728);
    
    MethodClosure MC_SMB_sleep = new_MethodClosure((Method)PNativeMethod7724, Thread_Class);
    store_method(Thread_Class, SMB_sleep, MC_SMB_sleep);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7730 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7732 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_new_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7731 = new_Array_with(1, (Optr)PAnnotation7732);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7734 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7733 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7734, (Optr)&t_method_return);
    NativeMethod PNativeMethod7729 = new_NativeMethod_with(PArray7730, empty_Array, PArray7731, PThreadedCode7733, 1, PSend7734);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PNativeMethod7729, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_resumeNext() {
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend7737 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_quit = new_Symbol(L"quit");
    // quit. 
    Send PSend7741 = new_Send((Optr)PMain_classReference, SMB_quit, 0);
    Array PThreadedCode7740 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PMain_classReference, (Optr)&t_send0, (Optr)PSend7741, (Optr)&t_block_return);
    Block PBlock7739 = new_Block_with(empty_Array, empty_Array, PThreadedCode7740, 1, PSend7741);
    // ifTrue:. 
    Send PSend7738 = new_Send((Optr)PSend7737, SMB_ifTrue_, 1, (Optr)PBlock7739);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend7742 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_removeLast, 0);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7743 = new_Send((Optr)PSend7742, SMB_resume, 0);
    Array PThreadedCode7736 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7737, (Optr)&t_send_ifTrue_, (Optr)PSend7738, (Optr)PBlock7739, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7742, (Optr)&t_send0, (Optr)PSend7743, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7735 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7736, 3, PSend7738, PSend7743, self);
    
    MethodClosure MC_SMB_resumeNext = new_MethodClosure((Method)PMethod7735, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_resumeNext, MC_SMB_resumeNext);
}


static void init_class_SMB_threads() {
    Symbol SMB_threads = new_Symbol(L"threads");
    Array PThreadedCode7745 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_method_return);
    Method PMethod7744 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7745, 1, slot_Runtime_Thread_Class_class_threads);
    
    MethodClosure MC_SMB_threads = new_MethodClosure((Method)PMethod7744, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_threads, MC_SMB_threads);
}


static void init_class_SMB_removeThread_() {
    Symbol SMB_removeThread_ = new_Symbol(L"removeThread:");
    Variable VAR_aThread_0_0 = new_Variable_named(L"aThread", 0);
    Array PArray7747 = new_Array_with(1, (Optr)VAR_aThread_0_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7749 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_remove_, 1, (Optr)VAR_aThread_0_0);
    Array PThreadedCode7748 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_aThread_0_0, (Optr)&t_send1, (Optr)PSend7749, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7746 = new_Method_with(PArray7747, empty_Array, empty_Array, PThreadedCode7748, 2, PSend7749, self);
    
    MethodClosure MC_SMB_removeThread_ = new_MethodClosure((Method)PMethod7746, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_removeThread_, MC_SMB_removeThread_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7753 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign7752 = new_Assign((Optr)slot_Runtime_Thread_Class_class_threads, (Optr)PSend7753);
    Array PThreadedCode7751 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign7752, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend7753, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7750 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7751, 2, PAssign7752, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7750, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_yield_() {
    Symbol SMB_yield_ = new_Symbol(L"yield:");
    Variable VAR_currentThread_0_0 = new_Variable_named(L"currentThread", 0);
    Array PArray7755 = new_Array_with(1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7757 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_addFirst_, 1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7758 = new_Send((Optr)self, SMB_resumeNext, 0);
    Array PThreadedCode7756 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_currentThread_0_0, (Optr)&t_send1, (Optr)PSend7757, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7758, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod7754 = new_Method_with(PArray7755, empty_Array, empty_Array, PThreadedCode7756, 3, PSend7757, PSend7758, nil_Const);
    
    MethodClosure MC_SMB_yield_ = new_MethodClosure((Method)PMethod7754, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_yield_, MC_SMB_yield_);
}


static void init_class_SMB_for_() {
    Symbol SMB_for_ = new_Symbol(L"for:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7760 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7762 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7763 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_add_, 1, (Optr)PSend7762);
    Array PThreadedCode7761 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend7762, (Optr)&t_send1, (Optr)PSend7763, (Optr)&t_method_return);
    Method PMethod7759 = new_Method_with(PArray7760, empty_Array, empty_Array, PThreadedCode7761, 1, PSend7763);
    
    MethodClosure MC_SMB_for_ = new_MethodClosure((Method)PMethod7759, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_for_, MC_SMB_for_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7766 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_current, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7765 = new_Array_with(1, (Optr)PAnnotation7766);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7768 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7767 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7768, (Optr)&t_method_return);
    NativeMethod PNativeMethod7764 = new_NativeMethod_with(empty_Array, empty_Array, PArray7765, PThreadedCode7767, 1, PSend7768);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PNativeMethod7764, HEADER(Thread_Class));
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