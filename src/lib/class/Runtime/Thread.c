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
    Send PSend7582 = new_Send((Optr)PThread_classReference, SMB_yield_, 1, (Optr)self);
    Array PThreadedCode7581 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7582, (Optr)&t_method_return);
    Method PMethod7580 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7581, 1, PSend7582);
    
    MethodClosure MC_SMB_yield = new_MethodClosure((Method)PMethod7580, Thread_Class);
    store_method(Thread_Class, SMB_yield, MC_SMB_yield);
}


static void init_SMB_resume() {
    Symbol SMB_resume = new_Symbol(L"resume");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7585 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_resume, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7584 = new_Array_with(1, (Optr)PAnnotation7585);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7587 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7586 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7587, (Optr)&t_method_return);
    NativeMethod PNativeMethod7583 = new_NativeMethod_with(empty_Array, empty_Array, PArray7584, PThreadedCode7586, 1, PSend7587);
    
    MethodClosure MC_SMB_resume = new_MethodClosure((Method)PNativeMethod7583, Thread_Class);
    store_method(Thread_Class, SMB_resume, MC_SMB_resume);
}


static void init_SMB_nextInterpreter_() {
    Symbol SMB_nextInterpreter_ = new_Symbol(L"nextInterpreter:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray7589 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend7591 = new_Send((Optr)VAR_anInterpreter_0_0, SMB_isNil, 0);
    // isNil. 
    Send PSend7594 = new_Send((Optr)slot_Runtime_Thread_nextInterpreter, SMB_isNil, 0);
    Array PThreadedCode7593 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_nextInterpreter, (Optr)&t_send0, (Optr)PSend7594, (Optr)&t_block_return);
    Block PBlock7592 = new_Block_with(empty_Array, empty_Array, PThreadedCode7593, 1, PSend7594);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend7595 = new_Send((Optr)PSend7591, SMB_or_, 1, (Optr)PBlock7592);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend7599 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode7598 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7599, (Optr)&t_block_return);
    Block PBlock7597 = new_Block_with(empty_Array, empty_Array, PThreadedCode7598, 1, PSend7599);
    // ifFalse:. 
    Send PSend7596 = new_Send((Optr)PSend7595, SMB_ifFalse_, 1, (Optr)PBlock7597);
    Assign PAssign7600 = new_Assign((Optr)slot_Runtime_Thread_nextInterpreter, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode7590 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send0, (Optr)PSend7591, (Optr)&t_push_closure, (Optr)PBlock7592, (Optr)&t_send1, (Optr)PSend7595, (Optr)&t_send_ifFalse_, (Optr)PSend7596, (Optr)PBlock7597, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7600, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7588 = new_Method_with(PArray7589, empty_Array, empty_Array, PThreadedCode7590, 3, PSend7596, PAssign7600, self);
    
    MethodClosure MC_SMB_nextInterpreter_ = new_MethodClosure((Method)PMethod7588, Thread_Class);
    store_method(Thread_Class, SMB_nextInterpreter_, MC_SMB_nextInterpreter_);
}


static void init_SMB_primYield() {
    Symbol SMB_primYield = new_Symbol(L"primYield");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7603 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_primYield, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7602 = new_Array_with(1, (Optr)PAnnotation7603);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7605 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7604 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7605, (Optr)&t_method_return);
    NativeMethod PNativeMethod7601 = new_NativeMethod_with(empty_Array, empty_Array, PArray7602, PThreadedCode7604, 1, PSend7605);
    
    MethodClosure MC_SMB_primYield = new_MethodClosure((Method)PNativeMethod7601, Thread_Class);
    store_method(Thread_Class, SMB_primYield, MC_SMB_primYield);
}


static void init_SMB_terminate() {
    Symbol SMB_terminate = new_Symbol(L"terminate");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7608 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7609 = new_Send((Optr)PSend7608, SMB_resumeNext, 0);
    Array PThreadedCode7607 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7608, (Optr)&t_send0, (Optr)PSend7609, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7606 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7607, 2, PSend7609, self);
    
    MethodClosure MC_SMB_terminate = new_MethodClosure((Method)PMethod7606, Thread_Class);
    store_method(Thread_Class, SMB_terminate, MC_SMB_terminate);
}


static void init_SMB_resumeSafe() {
    Symbol SMB_resumeSafe = new_Symbol(L"resumeSafe");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend7612 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7613 = new_Send((Optr)PSend7612, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_threads = new_Symbol(L"threads");
    // threads. 
    Send PSend7617 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7618 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7619 = new_Send((Optr)PSend7617, SMB_remove_, 1, (Optr)PSend7618);
    // threads. 
    Send PSend7620 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7621 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7622 = new_Send((Optr)PSend7620, SMB_addFirst_, 1, (Optr)PSend7621);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7623 = new_Send((Optr)self, SMB_resume, 0);
    Array PThreadedCode7616 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7617, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7618, (Optr)&t_send1, (Optr)PSend7619, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7620, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7621, (Optr)&t_send1, (Optr)PSend7622, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7623, (Optr)&t_block_return);
    Block PBlock7615 = new_Block_with(empty_Array, empty_Array, PThreadedCode7616, 3, PSend7619, PSend7622, PSend7623);
    // ifFalse:. 
    Send PSend7614 = new_Send((Optr)PSend7613, SMB_ifFalse_, 1, (Optr)PBlock7615);
    Array PThreadedCode7611 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7612, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7613, (Optr)&t_send_ifFalse_, (Optr)PSend7614, (Optr)PBlock7615, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7610 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7611, 2, PSend7614, self);
    
    MethodClosure MC_SMB_resumeSafe = new_MethodClosure((Method)PMethod7610, Thread_Class);
    store_method(Thread_Class, SMB_resumeSafe, MC_SMB_resumeSafe);
}


static void init_SMB_sleep_() {
    Symbol SMB_sleep_ = new_Symbol(L"sleep:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray7625 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7627 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7626 = new_Array_with(1, (Optr)PAnnotation7627);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7629 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7628 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7629, (Optr)&t_method_return);
    NativeMethod PNativeMethod7624 = new_NativeMethod_with(PArray7625, empty_Array, PArray7626, PThreadedCode7628, 1, PSend7629);
    
    MethodClosure MC_SMB_sleep_ = new_MethodClosure((Method)PNativeMethod7624, Thread_Class);
    store_method(Thread_Class, SMB_sleep_, MC_SMB_sleep_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray7631 = new_Array_with(1, (Optr)VAR_name_0_0);
    Array PThreadedCode7632 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7630 = new_Method_with(PArray7631, empty_Array, empty_Array, PThreadedCode7632, 1, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod7630, Thread_Class);
    store_method(Thread_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_storage() {
    Symbol SMB_storage = new_Symbol(L"storage");
    Array PThreadedCode7634 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_storage, (Optr)&t_method_return);
    Method PMethod7633 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7634, 1, slot_Runtime_Thread_storage);
    
    MethodClosure MC_SMB_storage = new_MethodClosure((Method)PMethod7633, Thread_Class);
    store_method(Thread_Class, SMB_storage, MC_SMB_storage);
}


static void init_SMB_evaluate_() {
    Symbol SMB_evaluate_ = new_Symbol(L"evaluate:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray7636 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7638 = new_Send((Optr)VAR_block_0_0, SMB_value, 0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend7639 = new_Send((Optr)self, SMB_terminate, 0);
    Array PThreadedCode7637 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend7638, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7639, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7635 = new_Method_with(PArray7636, empty_Array, empty_Array, PThreadedCode7637, 3, PSend7638, PSend7639, self);
    
    MethodClosure MC_SMB_evaluate_ = new_MethodClosure((Method)PMethod7635, Thread_Class);
    store_method(Thread_Class, SMB_evaluate_, MC_SMB_evaluate_);
}


static void init_SMB_sleep() {
    Symbol SMB_sleep = new_Symbol(L"sleep");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7642 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7641 = new_Array_with(1, (Optr)PAnnotation7642);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7644 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7643 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7644, (Optr)&t_method_return);
    NativeMethod PNativeMethod7640 = new_NativeMethod_with(empty_Array, empty_Array, PArray7641, PThreadedCode7643, 1, PSend7644);
    
    MethodClosure MC_SMB_sleep = new_MethodClosure((Method)PNativeMethod7640, Thread_Class);
    store_method(Thread_Class, SMB_sleep, MC_SMB_sleep);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7646 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7648 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_new_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7647 = new_Array_with(1, (Optr)PAnnotation7648);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7650 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7649 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7650, (Optr)&t_method_return);
    NativeMethod PNativeMethod7645 = new_NativeMethod_with(PArray7646, empty_Array, PArray7647, PThreadedCode7649, 1, PSend7650);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PNativeMethod7645, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_resumeNext() {
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend7653 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_quit = new_Symbol(L"quit");
    // quit. 
    Send PSend7657 = new_Send((Optr)PMain_classReference, SMB_quit, 0);
    Array PThreadedCode7656 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PMain_classReference, (Optr)&t_send0, (Optr)PSend7657, (Optr)&t_block_return);
    Block PBlock7655 = new_Block_with(empty_Array, empty_Array, PThreadedCode7656, 1, PSend7657);
    // ifTrue:. 
    Send PSend7654 = new_Send((Optr)PSend7653, SMB_ifTrue_, 1, (Optr)PBlock7655);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend7658 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_removeLast, 0);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7659 = new_Send((Optr)PSend7658, SMB_resume, 0);
    Array PThreadedCode7652 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7653, (Optr)&t_send_ifTrue_, (Optr)PSend7654, (Optr)PBlock7655, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7658, (Optr)&t_send0, (Optr)PSend7659, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7651 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7652, 3, PSend7654, PSend7659, self);
    
    MethodClosure MC_SMB_resumeNext = new_MethodClosure((Method)PMethod7651, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_resumeNext, MC_SMB_resumeNext);
}


static void init_class_SMB_threads() {
    Symbol SMB_threads = new_Symbol(L"threads");
    Array PThreadedCode7661 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_method_return);
    Method PMethod7660 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7661, 1, slot_Runtime_Thread_Class_class_threads);
    
    MethodClosure MC_SMB_threads = new_MethodClosure((Method)PMethod7660, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_threads, MC_SMB_threads);
}


static void init_class_SMB_removeThread_() {
    Symbol SMB_removeThread_ = new_Symbol(L"removeThread:");
    Variable VAR_aThread_0_0 = new_Variable_named(L"aThread", 0);
    Array PArray7663 = new_Array_with(1, (Optr)VAR_aThread_0_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7665 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_remove_, 1, (Optr)VAR_aThread_0_0);
    Array PThreadedCode7664 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_aThread_0_0, (Optr)&t_send1, (Optr)PSend7665, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7662 = new_Method_with(PArray7663, empty_Array, empty_Array, PThreadedCode7664, 2, PSend7665, self);
    
    MethodClosure MC_SMB_removeThread_ = new_MethodClosure((Method)PMethod7662, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_removeThread_, MC_SMB_removeThread_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7669 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign7668 = new_Assign((Optr)slot_Runtime_Thread_Class_class_threads, (Optr)PSend7669);
    Array PThreadedCode7667 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign7668, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend7669, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7666 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7667, 2, PAssign7668, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7666, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_yield_() {
    Symbol SMB_yield_ = new_Symbol(L"yield:");
    Variable VAR_currentThread_0_0 = new_Variable_named(L"currentThread", 0);
    Array PArray7671 = new_Array_with(1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7673 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_addFirst_, 1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7674 = new_Send((Optr)self, SMB_resumeNext, 0);
    Array PThreadedCode7672 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_currentThread_0_0, (Optr)&t_send1, (Optr)PSend7673, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7674, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod7670 = new_Method_with(PArray7671, empty_Array, empty_Array, PThreadedCode7672, 3, PSend7673, PSend7674, nil_Const);
    
    MethodClosure MC_SMB_yield_ = new_MethodClosure((Method)PMethod7670, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_yield_, MC_SMB_yield_);
}


static void init_class_SMB_for_() {
    Symbol SMB_for_ = new_Symbol(L"for:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7676 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7678 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7679 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_add_, 1, (Optr)PSend7678);
    Array PThreadedCode7677 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend7678, (Optr)&t_send1, (Optr)PSend7679, (Optr)&t_method_return);
    Method PMethod7675 = new_Method_with(PArray7676, empty_Array, empty_Array, PThreadedCode7677, 1, PSend7679);
    
    MethodClosure MC_SMB_for_ = new_MethodClosure((Method)PMethod7675, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_for_, MC_SMB_for_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7682 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_current, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7681 = new_Array_with(1, (Optr)PAnnotation7682);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7684 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7683 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7684, (Optr)&t_method_return);
    NativeMethod PNativeMethod7680 = new_NativeMethod_with(empty_Array, empty_Array, PArray7681, PThreadedCode7683, 1, PSend7684);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PNativeMethod7680, HEADER(Thread_Class));
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