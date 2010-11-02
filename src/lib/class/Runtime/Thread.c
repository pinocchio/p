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
    Send PSend7674 = new_Send((Optr)PThread_classReference, SMB_yield_, 1, (Optr)self);
    Array PThreadedCode7673 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7674, (Optr)&t_method_return);
    Method PMethod7672 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7673, 1, PSend7674);
    
    MethodClosure MC_SMB_yield = new_MethodClosure((Method)PMethod7672, Thread_Class);
    store_method(Thread_Class, SMB_yield, MC_SMB_yield);
}


static void init_SMB_resume() {
    Symbol SMB_resume = new_Symbol(L"resume");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7677 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_resume, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7676 = new_Array_with(1, (Optr)PAnnotation7677);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7679 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7678 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7679, (Optr)&t_method_return);
    NativeMethod PNativeMethod7675 = new_NativeMethod_with(empty_Array, empty_Array, PArray7676, PThreadedCode7678, 1, PSend7679);
    
    MethodClosure MC_SMB_resume = new_MethodClosure((Method)PNativeMethod7675, Thread_Class);
    store_method(Thread_Class, SMB_resume, MC_SMB_resume);
}


static void init_SMB_primYield() {
    Symbol SMB_primYield = new_Symbol(L"primYield");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7682 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_primYield, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7681 = new_Array_with(1, (Optr)PAnnotation7682);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7684 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7683 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7684, (Optr)&t_method_return);
    NativeMethod PNativeMethod7680 = new_NativeMethod_with(empty_Array, empty_Array, PArray7681, PThreadedCode7683, 1, PSend7684);
    
    MethodClosure MC_SMB_primYield = new_MethodClosure((Method)PNativeMethod7680, Thread_Class);
    store_method(Thread_Class, SMB_primYield, MC_SMB_primYield);
}


static void init_SMB_terminate() {
    Symbol SMB_terminate = new_Symbol(L"terminate");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7687 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7688 = new_Send((Optr)PSend7687, SMB_resumeNext, 0);
    Array PThreadedCode7686 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7687, (Optr)&t_send0, (Optr)PSend7688, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7685 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7686, 2, PSend7688, self);
    
    MethodClosure MC_SMB_terminate = new_MethodClosure((Method)PMethod7685, Thread_Class);
    store_method(Thread_Class, SMB_terminate, MC_SMB_terminate);
}


static void init_SMB_resumeSafe() {
    Symbol SMB_resumeSafe = new_Symbol(L"resumeSafe");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend7691 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7692 = new_Send((Optr)PSend7691, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_threads = new_Symbol(L"threads");
    // threads. 
    Send PSend7696 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7697 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7698 = new_Send((Optr)PSend7696, SMB_remove_, 1, (Optr)PSend7697);
    // threads. 
    Send PSend7699 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7700 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7701 = new_Send((Optr)PSend7699, SMB_addFirst_, 1, (Optr)PSend7700);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7702 = new_Send((Optr)self, SMB_resume, 0);
    Array PThreadedCode7695 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7696, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7697, (Optr)&t_send1, (Optr)PSend7698, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7699, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7700, (Optr)&t_send1, (Optr)PSend7701, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7702, (Optr)&t_block_return);
    Block PBlock7694 = new_Block_with(empty_Array, empty_Array, PThreadedCode7695, 3, PSend7698, PSend7701, PSend7702);
    // ifFalse:. 
    Send PSend7693 = new_Send((Optr)PSend7692, SMB_ifFalse_, 1, (Optr)PBlock7694);
    Array PThreadedCode7690 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7691, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7692, (Optr)&t_send_ifFalse_, (Optr)PSend7693, (Optr)PBlock7694, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7689 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7690, 2, PSend7693, self);
    
    MethodClosure MC_SMB_resumeSafe = new_MethodClosure((Method)PMethod7689, Thread_Class);
    store_method(Thread_Class, SMB_resumeSafe, MC_SMB_resumeSafe);
}


static void init_SMB_sleep_() {
    Symbol SMB_sleep_ = new_Symbol(L"sleep:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray7704 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7706 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7705 = new_Array_with(1, (Optr)PAnnotation7706);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7708 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7707 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7708, (Optr)&t_method_return);
    NativeMethod PNativeMethod7703 = new_NativeMethod_with(PArray7704, empty_Array, PArray7705, PThreadedCode7707, 1, PSend7708);
    
    MethodClosure MC_SMB_sleep_ = new_MethodClosure((Method)PNativeMethod7703, Thread_Class);
    store_method(Thread_Class, SMB_sleep_, MC_SMB_sleep_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray7710 = new_Array_with(1, (Optr)VAR_name_0_0);
    Array PThreadedCode7711 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7709 = new_Method_with(PArray7710, empty_Array, empty_Array, PThreadedCode7711, 1, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod7709, Thread_Class);
    store_method(Thread_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_storage() {
    Symbol SMB_storage = new_Symbol(L"storage");
    Array PThreadedCode7713 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_storage, (Optr)&t_method_return);
    Method PMethod7712 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7713, 1, slot_Runtime_Thread_storage);
    
    MethodClosure MC_SMB_storage = new_MethodClosure((Method)PMethod7712, Thread_Class);
    store_method(Thread_Class, SMB_storage, MC_SMB_storage);
}


static void init_SMB_evaluate_() {
    Symbol SMB_evaluate_ = new_Symbol(L"evaluate:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray7715 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7717 = new_Send((Optr)VAR_block_0_0, SMB_value, 0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend7718 = new_Send((Optr)self, SMB_terminate, 0);
    Array PThreadedCode7716 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend7717, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7718, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7714 = new_Method_with(PArray7715, empty_Array, empty_Array, PThreadedCode7716, 3, PSend7717, PSend7718, self);
    
    MethodClosure MC_SMB_evaluate_ = new_MethodClosure((Method)PMethod7714, Thread_Class);
    store_method(Thread_Class, SMB_evaluate_, MC_SMB_evaluate_);
}


static void init_SMB_sleep() {
    Symbol SMB_sleep = new_Symbol(L"sleep");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7721 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7720 = new_Array_with(1, (Optr)PAnnotation7721);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7723 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7722 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7723, (Optr)&t_method_return);
    NativeMethod PNativeMethod7719 = new_NativeMethod_with(empty_Array, empty_Array, PArray7720, PThreadedCode7722, 1, PSend7723);
    
    MethodClosure MC_SMB_sleep = new_MethodClosure((Method)PNativeMethod7719, Thread_Class);
    store_method(Thread_Class, SMB_sleep, MC_SMB_sleep);
}


static void init_SMB_nextInterpreter_() {
    Symbol SMB_nextInterpreter_ = new_Symbol(L"nextInterpreter:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray7725 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend7727 = new_Send((Optr)VAR_anInterpreter_0_0, SMB_isNil, 0);
    // isNil. 
    Send PSend7730 = new_Send((Optr)slot_Runtime_Thread_nextInterpreter, SMB_isNil, 0);
    Array PThreadedCode7729 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_nextInterpreter, (Optr)&t_send0, (Optr)PSend7730, (Optr)&t_block_return);
    Block PBlock7728 = new_Block_with(empty_Array, empty_Array, PThreadedCode7729, 1, PSend7730);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend7731 = new_Send((Optr)PSend7727, SMB_or_, 1, (Optr)PBlock7728);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend7735 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode7734 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7735, (Optr)&t_block_return);
    Block PBlock7733 = new_Block_with(empty_Array, empty_Array, PThreadedCode7734, 1, PSend7735);
    // ifFalse:. 
    Send PSend7732 = new_Send((Optr)PSend7731, SMB_ifFalse_, 1, (Optr)PBlock7733);
    Assign PAssign7736 = new_Assign((Optr)slot_Runtime_Thread_nextInterpreter, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode7726 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send0, (Optr)PSend7727, (Optr)&t_push_closure, (Optr)PBlock7728, (Optr)&t_send1, (Optr)PSend7731, (Optr)&t_send_ifFalse_, (Optr)PSend7732, (Optr)PBlock7733, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7736, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7724 = new_Method_with(PArray7725, empty_Array, empty_Array, PThreadedCode7726, 3, PSend7732, PAssign7736, self);
    
    MethodClosure MC_SMB_nextInterpreter_ = new_MethodClosure((Method)PMethod7724, Thread_Class);
    store_method(Thread_Class, SMB_nextInterpreter_, MC_SMB_nextInterpreter_);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7738 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7740 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_new_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7739 = new_Array_with(1, (Optr)PAnnotation7740);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7742 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7741 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7742, (Optr)&t_method_return);
    NativeMethod PNativeMethod7737 = new_NativeMethod_with(PArray7738, empty_Array, PArray7739, PThreadedCode7741, 1, PSend7742);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PNativeMethod7737, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_resumeNext() {
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend7745 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_quit = new_Symbol(L"quit");
    // quit. 
    Send PSend7749 = new_Send((Optr)PMain_classReference, SMB_quit, 0);
    Array PThreadedCode7748 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PMain_classReference, (Optr)&t_send0, (Optr)PSend7749, (Optr)&t_block_return);
    Block PBlock7747 = new_Block_with(empty_Array, empty_Array, PThreadedCode7748, 1, PSend7749);
    // ifTrue:. 
    Send PSend7746 = new_Send((Optr)PSend7745, SMB_ifTrue_, 1, (Optr)PBlock7747);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend7750 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_removeLast, 0);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7751 = new_Send((Optr)PSend7750, SMB_resume, 0);
    Array PThreadedCode7744 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7745, (Optr)&t_send_ifTrue_, (Optr)PSend7746, (Optr)PBlock7747, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7750, (Optr)&t_send0, (Optr)PSend7751, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7743 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7744, 3, PSend7746, PSend7751, self);
    
    MethodClosure MC_SMB_resumeNext = new_MethodClosure((Method)PMethod7743, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_resumeNext, MC_SMB_resumeNext);
}


static void init_class_SMB_threads() {
    Symbol SMB_threads = new_Symbol(L"threads");
    Array PThreadedCode7753 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_method_return);
    Method PMethod7752 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7753, 1, slot_Runtime_Thread_Class_class_threads);
    
    MethodClosure MC_SMB_threads = new_MethodClosure((Method)PMethod7752, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_threads, MC_SMB_threads);
}


static void init_class_SMB_removeThread_() {
    Symbol SMB_removeThread_ = new_Symbol(L"removeThread:");
    Variable VAR_aThread_0_0 = new_Variable_named(L"aThread", 0);
    Array PArray7755 = new_Array_with(1, (Optr)VAR_aThread_0_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7757 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_remove_, 1, (Optr)VAR_aThread_0_0);
    Array PThreadedCode7756 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_aThread_0_0, (Optr)&t_send1, (Optr)PSend7757, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7754 = new_Method_with(PArray7755, empty_Array, empty_Array, PThreadedCode7756, 2, PSend7757, self);
    
    MethodClosure MC_SMB_removeThread_ = new_MethodClosure((Method)PMethod7754, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_removeThread_, MC_SMB_removeThread_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7761 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign7760 = new_Assign((Optr)slot_Runtime_Thread_Class_class_threads, (Optr)PSend7761);
    Array PThreadedCode7759 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign7760, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend7761, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7758 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7759, 2, PAssign7760, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7758, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_yield_() {
    Symbol SMB_yield_ = new_Symbol(L"yield:");
    Variable VAR_currentThread_0_0 = new_Variable_named(L"currentThread", 0);
    Array PArray7763 = new_Array_with(1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7765 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_addFirst_, 1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7766 = new_Send((Optr)self, SMB_resumeNext, 0);
    Array PThreadedCode7764 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_currentThread_0_0, (Optr)&t_send1, (Optr)PSend7765, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7766, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod7762 = new_Method_with(PArray7763, empty_Array, empty_Array, PThreadedCode7764, 3, PSend7765, PSend7766, nil_Const);
    
    MethodClosure MC_SMB_yield_ = new_MethodClosure((Method)PMethod7762, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_yield_, MC_SMB_yield_);
}


static void init_class_SMB_for_() {
    Symbol SMB_for_ = new_Symbol(L"for:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7768 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7770 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7771 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_add_, 1, (Optr)PSend7770);
    Array PThreadedCode7769 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend7770, (Optr)&t_send1, (Optr)PSend7771, (Optr)&t_method_return);
    Method PMethod7767 = new_Method_with(PArray7768, empty_Array, empty_Array, PThreadedCode7769, 1, PSend7771);
    
    MethodClosure MC_SMB_for_ = new_MethodClosure((Method)PMethod7767, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_for_, MC_SMB_for_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7774 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_current, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7773 = new_Array_with(1, (Optr)PAnnotation7774);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7776 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7775 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7776, (Optr)&t_method_return);
    NativeMethod PNativeMethod7772 = new_NativeMethod_with(empty_Array, empty_Array, PArray7773, PThreadedCode7775, 1, PSend7776);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PNativeMethod7772, HEADER(Thread_Class));
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
    init_SMB_primYield();
    init_SMB_terminate();
    init_SMB_resumeSafe();
    init_SMB_sleep_();
    init_SMB_name_();
    init_SMB_storage();
    init_SMB_evaluate_();
    init_SMB_sleep();
    init_SMB_nextInterpreter_();
    init_class_SMB_new_();
    init_class_SMB_resumeNext();
    init_class_SMB_threads();
    init_class_SMB_removeThread_();
    init_class_SMB_initialize();
    init_class_SMB_yield_();
    init_class_SMB_for_();
    init_class_SMB_current();
    
}