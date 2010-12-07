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
    Send PSend7930 = new_Send((Optr)PThread_classReference, SMB_yield_, 1, (Optr)self);
    Array PThreadedCode7929 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7930, (Optr)&t_method_return);
    Method PMethod7928 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7929, 1, PSend7930);
    
    MethodClosure MC_SMB_yield = new_MethodClosure((Method)PMethod7928, Thread_Class);
    store_method(Thread_Class, SMB_yield, MC_SMB_yield);
}


static void init_SMB_resume() {
    Symbol SMB_resume = new_Symbol(L"resume");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7933 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_resume, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7932 = new_Array_with(1, (Optr)PAnnotation7933);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7935 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7934 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7935, (Optr)&t_method_return);
    NativeMethod PNativeMethod7931 = new_NativeMethod_with(empty_Array, empty_Array, PArray7932, PThreadedCode7934, 1, PSend7935);
    
    MethodClosure MC_SMB_resume = new_MethodClosure((Method)PNativeMethod7931, Thread_Class);
    store_method(Thread_Class, SMB_resume, MC_SMB_resume);
}


static void init_SMB_primYield() {
    Symbol SMB_primYield = new_Symbol(L"primYield");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7938 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_primYield, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7937 = new_Array_with(1, (Optr)PAnnotation7938);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7940 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7939 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7940, (Optr)&t_method_return);
    NativeMethod PNativeMethod7936 = new_NativeMethod_with(empty_Array, empty_Array, PArray7937, PThreadedCode7939, 1, PSend7940);
    
    MethodClosure MC_SMB_primYield = new_MethodClosure((Method)PNativeMethod7936, Thread_Class);
    store_method(Thread_Class, SMB_primYield, MC_SMB_primYield);
}


static void init_SMB_terminate() {
    Symbol SMB_terminate = new_Symbol(L"terminate");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7943 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7944 = new_Send((Optr)PSend7943, SMB_resumeNext, 0);
    Array PThreadedCode7942 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7943, (Optr)&t_send0, (Optr)PSend7944, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7941 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7942, 2, PSend7944, self);
    
    MethodClosure MC_SMB_terminate = new_MethodClosure((Method)PMethod7941, Thread_Class);
    store_method(Thread_Class, SMB_terminate, MC_SMB_terminate);
}


static void init_SMB_resumeSafe() {
    Symbol SMB_resumeSafe = new_Symbol(L"resumeSafe");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend7947 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7948 = new_Send((Optr)PSend7947, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_threads = new_Symbol(L"threads");
    // threads. 
    Send PSend7952 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7953 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7954 = new_Send((Optr)PSend7952, SMB_remove_, 1, (Optr)PSend7953);
    // threads. 
    Send PSend7955 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7956 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7957 = new_Send((Optr)PSend7955, SMB_addFirst_, 1, (Optr)PSend7956);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7958 = new_Send((Optr)self, SMB_resume, 0);
    Array PThreadedCode7951 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7952, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7953, (Optr)&t_send1, (Optr)PSend7954, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7955, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7956, (Optr)&t_send1, (Optr)PSend7957, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7958, (Optr)&t_block_return);
    Block PBlock7950 = new_Block_with(empty_Array, empty_Array, PThreadedCode7951, 3, PSend7954, PSend7957, PSend7958);
    // ifFalse:. 
    Send PSend7949 = new_Send((Optr)PSend7948, SMB_ifFalse_, 1, (Optr)PBlock7950);
    Array PThreadedCode7946 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7947, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7948, (Optr)&t_send_ifFalse_, (Optr)PSend7949, (Optr)PBlock7950, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7945 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7946, 2, PSend7949, self);
    
    MethodClosure MC_SMB_resumeSafe = new_MethodClosure((Method)PMethod7945, Thread_Class);
    store_method(Thread_Class, SMB_resumeSafe, MC_SMB_resumeSafe);
}


static void init_SMB_sleep_() {
    Symbol SMB_sleep_ = new_Symbol(L"sleep:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray7960 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7962 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7961 = new_Array_with(1, (Optr)PAnnotation7962);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7964 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7963 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7964, (Optr)&t_method_return);
    NativeMethod PNativeMethod7959 = new_NativeMethod_with(PArray7960, empty_Array, PArray7961, PThreadedCode7963, 1, PSend7964);
    
    MethodClosure MC_SMB_sleep_ = new_MethodClosure((Method)PNativeMethod7959, Thread_Class);
    store_method(Thread_Class, SMB_sleep_, MC_SMB_sleep_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray7966 = new_Array_with(1, (Optr)VAR_name_0_0);
    Array PThreadedCode7967 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7965 = new_Method_with(PArray7966, empty_Array, empty_Array, PThreadedCode7967, 1, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod7965, Thread_Class);
    store_method(Thread_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_storage() {
    Symbol SMB_storage = new_Symbol(L"storage");
    Array PThreadedCode7969 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_storage, (Optr)&t_method_return);
    Method PMethod7968 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7969, 1, slot_Runtime_Thread_storage);
    
    MethodClosure MC_SMB_storage = new_MethodClosure((Method)PMethod7968, Thread_Class);
    store_method(Thread_Class, SMB_storage, MC_SMB_storage);
}


static void init_SMB_evaluate_() {
    Symbol SMB_evaluate_ = new_Symbol(L"evaluate:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray7971 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7973 = new_Send((Optr)VAR_block_0_0, SMB_value, 0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend7974 = new_Send((Optr)self, SMB_terminate, 0);
    Array PThreadedCode7972 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend7973, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7974, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7970 = new_Method_with(PArray7971, empty_Array, empty_Array, PThreadedCode7972, 3, PSend7973, PSend7974, self);
    
    MethodClosure MC_SMB_evaluate_ = new_MethodClosure((Method)PMethod7970, Thread_Class);
    store_method(Thread_Class, SMB_evaluate_, MC_SMB_evaluate_);
}


static void init_SMB_sleep() {
    Symbol SMB_sleep = new_Symbol(L"sleep");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7977 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7976 = new_Array_with(1, (Optr)PAnnotation7977);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7979 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7978 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7979, (Optr)&t_method_return);
    NativeMethod PNativeMethod7975 = new_NativeMethod_with(empty_Array, empty_Array, PArray7976, PThreadedCode7978, 1, PSend7979);
    
    MethodClosure MC_SMB_sleep = new_MethodClosure((Method)PNativeMethod7975, Thread_Class);
    store_method(Thread_Class, SMB_sleep, MC_SMB_sleep);
}


static void init_SMB_nextInterpreter_() {
    Symbol SMB_nextInterpreter_ = new_Symbol(L"nextInterpreter:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray7981 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend7983 = new_Send((Optr)VAR_anInterpreter_0_0, SMB_isNil, 0);
    // isNil. 
    Send PSend7986 = new_Send((Optr)slot_Runtime_Thread_nextInterpreter, SMB_isNil, 0);
    Array PThreadedCode7985 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_nextInterpreter, (Optr)&t_send0, (Optr)PSend7986, (Optr)&t_block_return);
    Block PBlock7984 = new_Block_with(empty_Array, empty_Array, PThreadedCode7985, 1, PSend7986);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend7987 = new_Send((Optr)PSend7983, SMB_or_, 1, (Optr)PBlock7984);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend7991 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode7990 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7991, (Optr)&t_block_return);
    Block PBlock7989 = new_Block_with(empty_Array, empty_Array, PThreadedCode7990, 1, PSend7991);
    // ifFalse:. 
    Send PSend7988 = new_Send((Optr)PSend7987, SMB_ifFalse_, 1, (Optr)PBlock7989);
    Assign PAssign7992 = new_Assign((Optr)slot_Runtime_Thread_nextInterpreter, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode7982 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send0, (Optr)PSend7983, (Optr)&t_push_closure, (Optr)PBlock7984, (Optr)&t_send1, (Optr)PSend7987, (Optr)&t_send_ifFalse_, (Optr)PSend7988, (Optr)PBlock7989, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7992, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7980 = new_Method_with(PArray7981, empty_Array, empty_Array, PThreadedCode7982, 3, PSend7988, PAssign7992, self);
    
    MethodClosure MC_SMB_nextInterpreter_ = new_MethodClosure((Method)PMethod7980, Thread_Class);
    store_method(Thread_Class, SMB_nextInterpreter_, MC_SMB_nextInterpreter_);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7994 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7996 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_new_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7995 = new_Array_with(1, (Optr)PAnnotation7996);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7998 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7997 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7998, (Optr)&t_method_return);
    NativeMethod PNativeMethod7993 = new_NativeMethod_with(PArray7994, empty_Array, PArray7995, PThreadedCode7997, 1, PSend7998);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PNativeMethod7993, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_resumeNext() {
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend8001 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_quit = new_Symbol(L"quit");
    // quit. 
    Send PSend8005 = new_Send((Optr)PMain_classReference, SMB_quit, 0);
    Array PThreadedCode8004 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PMain_classReference, (Optr)&t_send0, (Optr)PSend8005, (Optr)&t_block_return);
    Block PBlock8003 = new_Block_with(empty_Array, empty_Array, PThreadedCode8004, 1, PSend8005);
    // ifTrue:. 
    Send PSend8002 = new_Send((Optr)PSend8001, SMB_ifTrue_, 1, (Optr)PBlock8003);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend8006 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_removeLast, 0);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend8007 = new_Send((Optr)PSend8006, SMB_resume, 0);
    Array PThreadedCode8000 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend8001, (Optr)&t_send_ifTrue_, (Optr)PSend8002, (Optr)PBlock8003, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend8006, (Optr)&t_send0, (Optr)PSend8007, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7999 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8000, 3, PSend8002, PSend8007, self);
    
    MethodClosure MC_SMB_resumeNext = new_MethodClosure((Method)PMethod7999, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_resumeNext, MC_SMB_resumeNext);
}


static void init_class_SMB_threads() {
    Symbol SMB_threads = new_Symbol(L"threads");
    Array PThreadedCode8009 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_method_return);
    Method PMethod8008 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8009, 1, slot_Runtime_Thread_Class_class_threads);
    
    MethodClosure MC_SMB_threads = new_MethodClosure((Method)PMethod8008, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_threads, MC_SMB_threads);
}


static void init_class_SMB_removeThread_() {
    Symbol SMB_removeThread_ = new_Symbol(L"removeThread:");
    Variable VAR_aThread_0_0 = new_Variable_named(L"aThread", 0);
    Array PArray8011 = new_Array_with(1, (Optr)VAR_aThread_0_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend8013 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_remove_, 1, (Optr)VAR_aThread_0_0);
    Array PThreadedCode8012 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_aThread_0_0, (Optr)&t_send1, (Optr)PSend8013, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8010 = new_Method_with(PArray8011, empty_Array, empty_Array, PThreadedCode8012, 2, PSend8013, self);
    
    MethodClosure MC_SMB_removeThread_ = new_MethodClosure((Method)PMethod8010, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_removeThread_, MC_SMB_removeThread_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8017 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign8016 = new_Assign((Optr)slot_Runtime_Thread_Class_class_threads, (Optr)PSend8017);
    Array PThreadedCode8015 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign8016, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend8017, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8014 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8015, 2, PAssign8016, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8014, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_yield_() {
    Symbol SMB_yield_ = new_Symbol(L"yield:");
    Variable VAR_currentThread_0_0 = new_Variable_named(L"currentThread", 0);
    Array PArray8019 = new_Array_with(1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend8021 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_addFirst_, 1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend8022 = new_Send((Optr)self, SMB_resumeNext, 0);
    Array PThreadedCode8020 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_currentThread_0_0, (Optr)&t_send1, (Optr)PSend8021, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8022, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod8018 = new_Method_with(PArray8019, empty_Array, empty_Array, PThreadedCode8020, 3, PSend8021, PSend8022, nil_Const);
    
    MethodClosure MC_SMB_yield_ = new_MethodClosure((Method)PMethod8018, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_yield_, MC_SMB_yield_);
}


static void init_class_SMB_for_() {
    Symbol SMB_for_ = new_Symbol(L"for:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8024 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8026 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend8027 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_add_, 1, (Optr)PSend8026);
    Array PThreadedCode8025 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8026, (Optr)&t_send1, (Optr)PSend8027, (Optr)&t_method_return);
    Method PMethod8023 = new_Method_with(PArray8024, empty_Array, empty_Array, PThreadedCode8025, 1, PSend8027);
    
    MethodClosure MC_SMB_for_ = new_MethodClosure((Method)PMethod8023, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_for_, MC_SMB_for_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation8030 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_current, (Optr)SMB_Runtime_minus_Thread);
    Array PArray8029 = new_Array_with(1, (Optr)PAnnotation8030);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend8032 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode8031 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8032, (Optr)&t_method_return);
    NativeMethod PNativeMethod8028 = new_NativeMethod_with(empty_Array, empty_Array, PArray8029, PThreadedCode8031, 1, PSend8032);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PNativeMethod8028, HEADER(Thread_Class));
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