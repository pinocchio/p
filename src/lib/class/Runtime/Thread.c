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
    Send PSend7659 = new_Send((Optr)PThread_classReference, SMB_yield_, 1, (Optr)self);
    Array PThreadedCode7658 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7659, (Optr)&t_method_return);
    Method PMethod7657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7658, 1, PSend7659);
    
    MethodClosure MC_SMB_yield = new_MethodClosure((Method)PMethod7657, Thread_Class);
    store_method(Thread_Class, SMB_yield, MC_SMB_yield);
}


static void init_SMB_resume() {
    Symbol SMB_resume = new_Symbol(L"resume");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7662 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_resume, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7661 = new_Array_with(1, (Optr)PAnnotation7662);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7664 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7663 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7664, (Optr)&t_method_return);
    NativeMethod PNativeMethod7660 = new_NativeMethod_with(empty_Array, empty_Array, PArray7661, PThreadedCode7663, 1, PSend7664);
    
    MethodClosure MC_SMB_resume = new_MethodClosure((Method)PNativeMethod7660, Thread_Class);
    store_method(Thread_Class, SMB_resume, MC_SMB_resume);
}


static void init_SMB_nextInterpreter_() {
    Symbol SMB_nextInterpreter_ = new_Symbol(L"nextInterpreter:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray7666 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend7668 = new_Send((Optr)VAR_anInterpreter_0_0, SMB_isNil, 0);
    // isNil. 
    Send PSend7671 = new_Send((Optr)slot_Runtime_Thread_nextInterpreter, SMB_isNil, 0);
    Array PThreadedCode7670 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_nextInterpreter, (Optr)&t_send0, (Optr)PSend7671, (Optr)&t_block_return);
    Block PBlock7669 = new_Block_with(empty_Array, empty_Array, PThreadedCode7670, 1, PSend7671);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend7672 = new_Send((Optr)PSend7668, SMB_or_, 1, (Optr)PBlock7669);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend7676 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode7675 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7676, (Optr)&t_block_return);
    Block PBlock7674 = new_Block_with(empty_Array, empty_Array, PThreadedCode7675, 1, PSend7676);
    // ifFalse:. 
    Send PSend7673 = new_Send((Optr)PSend7672, SMB_ifFalse_, 1, (Optr)PBlock7674);
    Assign PAssign7677 = new_Assign((Optr)slot_Runtime_Thread_nextInterpreter, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode7667 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send0, (Optr)PSend7668, (Optr)&t_push_closure, (Optr)PBlock7669, (Optr)&t_send1, (Optr)PSend7672, (Optr)&t_send_ifFalse_, (Optr)PSend7673, (Optr)PBlock7674, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7677, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7665 = new_Method_with(PArray7666, empty_Array, empty_Array, PThreadedCode7667, 3, PSend7673, PAssign7677, self);
    
    MethodClosure MC_SMB_nextInterpreter_ = new_MethodClosure((Method)PMethod7665, Thread_Class);
    store_method(Thread_Class, SMB_nextInterpreter_, MC_SMB_nextInterpreter_);
}


static void init_SMB_primYield() {
    Symbol SMB_primYield = new_Symbol(L"primYield");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7680 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_primYield, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7679 = new_Array_with(1, (Optr)PAnnotation7680);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7682 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7681 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7682, (Optr)&t_method_return);
    NativeMethod PNativeMethod7678 = new_NativeMethod_with(empty_Array, empty_Array, PArray7679, PThreadedCode7681, 1, PSend7682);
    
    MethodClosure MC_SMB_primYield = new_MethodClosure((Method)PNativeMethod7678, Thread_Class);
    store_method(Thread_Class, SMB_primYield, MC_SMB_primYield);
}


static void init_SMB_terminate() {
    Symbol SMB_terminate = new_Symbol(L"terminate");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7685 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7686 = new_Send((Optr)PSend7685, SMB_resumeNext, 0);
    Array PThreadedCode7684 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7685, (Optr)&t_send0, (Optr)PSend7686, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7683 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7684, 2, PSend7686, self);
    
    MethodClosure MC_SMB_terminate = new_MethodClosure((Method)PMethod7683, Thread_Class);
    store_method(Thread_Class, SMB_terminate, MC_SMB_terminate);
}


static void init_SMB_resumeSafe() {
    Symbol SMB_resumeSafe = new_Symbol(L"resumeSafe");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend7689 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7690 = new_Send((Optr)PSend7689, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_threads = new_Symbol(L"threads");
    // threads. 
    Send PSend7694 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7695 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7696 = new_Send((Optr)PSend7694, SMB_remove_, 1, (Optr)PSend7695);
    // threads. 
    Send PSend7697 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7698 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7699 = new_Send((Optr)PSend7697, SMB_addFirst_, 1, (Optr)PSend7698);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7700 = new_Send((Optr)self, SMB_resume, 0);
    Array PThreadedCode7693 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7694, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7695, (Optr)&t_send1, (Optr)PSend7696, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7697, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7698, (Optr)&t_send1, (Optr)PSend7699, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7700, (Optr)&t_block_return);
    Block PBlock7692 = new_Block_with(empty_Array, empty_Array, PThreadedCode7693, 3, PSend7696, PSend7699, PSend7700);
    // ifFalse:. 
    Send PSend7691 = new_Send((Optr)PSend7690, SMB_ifFalse_, 1, (Optr)PBlock7692);
    Array PThreadedCode7688 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7689, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7690, (Optr)&t_send_ifFalse_, (Optr)PSend7691, (Optr)PBlock7692, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7687 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7688, 2, PSend7691, self);
    
    MethodClosure MC_SMB_resumeSafe = new_MethodClosure((Method)PMethod7687, Thread_Class);
    store_method(Thread_Class, SMB_resumeSafe, MC_SMB_resumeSafe);
}


static void init_SMB_sleep_() {
    Symbol SMB_sleep_ = new_Symbol(L"sleep:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray7702 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7704 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7703 = new_Array_with(1, (Optr)PAnnotation7704);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7706 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7705 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7706, (Optr)&t_method_return);
    NativeMethod PNativeMethod7701 = new_NativeMethod_with(PArray7702, empty_Array, PArray7703, PThreadedCode7705, 1, PSend7706);
    
    MethodClosure MC_SMB_sleep_ = new_MethodClosure((Method)PNativeMethod7701, Thread_Class);
    store_method(Thread_Class, SMB_sleep_, MC_SMB_sleep_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray7708 = new_Array_with(1, (Optr)VAR_name_0_0);
    Array PThreadedCode7709 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7707 = new_Method_with(PArray7708, empty_Array, empty_Array, PThreadedCode7709, 1, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod7707, Thread_Class);
    store_method(Thread_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_storage() {
    Symbol SMB_storage = new_Symbol(L"storage");
    Array PThreadedCode7711 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_storage, (Optr)&t_method_return);
    Method PMethod7710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7711, 1, slot_Runtime_Thread_storage);
    
    MethodClosure MC_SMB_storage = new_MethodClosure((Method)PMethod7710, Thread_Class);
    store_method(Thread_Class, SMB_storage, MC_SMB_storage);
}


static void init_SMB_evaluate_() {
    Symbol SMB_evaluate_ = new_Symbol(L"evaluate:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray7713 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7715 = new_Send((Optr)VAR_block_0_0, SMB_value, 0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend7716 = new_Send((Optr)self, SMB_terminate, 0);
    Array PThreadedCode7714 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend7715, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7716, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7712 = new_Method_with(PArray7713, empty_Array, empty_Array, PThreadedCode7714, 3, PSend7715, PSend7716, self);
    
    MethodClosure MC_SMB_evaluate_ = new_MethodClosure((Method)PMethod7712, Thread_Class);
    store_method(Thread_Class, SMB_evaluate_, MC_SMB_evaluate_);
}


static void init_SMB_sleep() {
    Symbol SMB_sleep = new_Symbol(L"sleep");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7719 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7718 = new_Array_with(1, (Optr)PAnnotation7719);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7721 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7720 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7721, (Optr)&t_method_return);
    NativeMethod PNativeMethod7717 = new_NativeMethod_with(empty_Array, empty_Array, PArray7718, PThreadedCode7720, 1, PSend7721);
    
    MethodClosure MC_SMB_sleep = new_MethodClosure((Method)PNativeMethod7717, Thread_Class);
    store_method(Thread_Class, SMB_sleep, MC_SMB_sleep);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7723 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7725 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_new_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7724 = new_Array_with(1, (Optr)PAnnotation7725);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7727 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7726 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7727, (Optr)&t_method_return);
    NativeMethod PNativeMethod7722 = new_NativeMethod_with(PArray7723, empty_Array, PArray7724, PThreadedCode7726, 1, PSend7727);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PNativeMethod7722, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_resumeNext() {
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend7730 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_quit = new_Symbol(L"quit");
    // quit. 
    Send PSend7734 = new_Send((Optr)PMain_classReference, SMB_quit, 0);
    Array PThreadedCode7733 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PMain_classReference, (Optr)&t_send0, (Optr)PSend7734, (Optr)&t_block_return);
    Block PBlock7732 = new_Block_with(empty_Array, empty_Array, PThreadedCode7733, 1, PSend7734);
    // ifTrue:. 
    Send PSend7731 = new_Send((Optr)PSend7730, SMB_ifTrue_, 1, (Optr)PBlock7732);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend7735 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_removeLast, 0);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7736 = new_Send((Optr)PSend7735, SMB_resume, 0);
    Array PThreadedCode7729 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7730, (Optr)&t_send_ifTrue_, (Optr)PSend7731, (Optr)PBlock7732, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7735, (Optr)&t_send0, (Optr)PSend7736, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7728 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7729, 3, PSend7731, PSend7736, self);
    
    MethodClosure MC_SMB_resumeNext = new_MethodClosure((Method)PMethod7728, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_resumeNext, MC_SMB_resumeNext);
}


static void init_class_SMB_threads() {
    Symbol SMB_threads = new_Symbol(L"threads");
    Array PThreadedCode7738 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_method_return);
    Method PMethod7737 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7738, 1, slot_Runtime_Thread_Class_class_threads);
    
    MethodClosure MC_SMB_threads = new_MethodClosure((Method)PMethod7737, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_threads, MC_SMB_threads);
}


static void init_class_SMB_removeThread_() {
    Symbol SMB_removeThread_ = new_Symbol(L"removeThread:");
    Variable VAR_aThread_0_0 = new_Variable_named(L"aThread", 0);
    Array PArray7740 = new_Array_with(1, (Optr)VAR_aThread_0_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7742 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_remove_, 1, (Optr)VAR_aThread_0_0);
    Array PThreadedCode7741 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_aThread_0_0, (Optr)&t_send1, (Optr)PSend7742, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7739 = new_Method_with(PArray7740, empty_Array, empty_Array, PThreadedCode7741, 2, PSend7742, self);
    
    MethodClosure MC_SMB_removeThread_ = new_MethodClosure((Method)PMethod7739, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_removeThread_, MC_SMB_removeThread_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7746 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign7745 = new_Assign((Optr)slot_Runtime_Thread_Class_class_threads, (Optr)PSend7746);
    Array PThreadedCode7744 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign7745, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend7746, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7743 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7744, 2, PAssign7745, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7743, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_yield_() {
    Symbol SMB_yield_ = new_Symbol(L"yield:");
    Variable VAR_currentThread_0_0 = new_Variable_named(L"currentThread", 0);
    Array PArray7748 = new_Array_with(1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7750 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_addFirst_, 1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7751 = new_Send((Optr)self, SMB_resumeNext, 0);
    Array PThreadedCode7749 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_currentThread_0_0, (Optr)&t_send1, (Optr)PSend7750, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7751, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod7747 = new_Method_with(PArray7748, empty_Array, empty_Array, PThreadedCode7749, 3, PSend7750, PSend7751, nil_Const);
    
    MethodClosure MC_SMB_yield_ = new_MethodClosure((Method)PMethod7747, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_yield_, MC_SMB_yield_);
}


static void init_class_SMB_for_() {
    Symbol SMB_for_ = new_Symbol(L"for:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7753 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7755 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7756 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_add_, 1, (Optr)PSend7755);
    Array PThreadedCode7754 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend7755, (Optr)&t_send1, (Optr)PSend7756, (Optr)&t_method_return);
    Method PMethod7752 = new_Method_with(PArray7753, empty_Array, empty_Array, PThreadedCode7754, 1, PSend7756);
    
    MethodClosure MC_SMB_for_ = new_MethodClosure((Method)PMethod7752, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_for_, MC_SMB_for_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7759 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_current, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7758 = new_Array_with(1, (Optr)PAnnotation7759);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7761 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7760 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7761, (Optr)&t_method_return);
    NativeMethod PNativeMethod7757 = new_NativeMethod_with(empty_Array, empty_Array, PArray7758, PThreadedCode7760, 1, PSend7761);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PNativeMethod7757, HEADER(Thread_Class));
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