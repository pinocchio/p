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
    Send PSend7932 = new_Send((Optr)PThread_classReference, SMB_yield_, 1, (Optr)self);
    Array PThreadedCode7931 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7932, (Optr)&t_method_return);
    Method PMethod7930 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7931, 1, PSend7932);
    
    MethodClosure MC_SMB_yield = new_MethodClosure((Method)PMethod7930, Thread_Class);
    store_method(Thread_Class, SMB_yield, MC_SMB_yield);
}


static void init_SMB_resume() {
    Symbol SMB_resume = new_Symbol(L"resume");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7935 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_resume, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7934 = new_Array_with(1, (Optr)PAnnotation7935);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7937 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7936 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7937, (Optr)&t_method_return);
    NativeMethod PNativeMethod7933 = new_NativeMethod_with(empty_Array, empty_Array, PArray7934, PThreadedCode7936, 1, PSend7937);
    
    MethodClosure MC_SMB_resume = new_MethodClosure((Method)PNativeMethod7933, Thread_Class);
    store_method(Thread_Class, SMB_resume, MC_SMB_resume);
}


static void init_SMB_primYield() {
    Symbol SMB_primYield = new_Symbol(L"primYield");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7940 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_primYield, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7939 = new_Array_with(1, (Optr)PAnnotation7940);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7942 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7941 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7942, (Optr)&t_method_return);
    NativeMethod PNativeMethod7938 = new_NativeMethod_with(empty_Array, empty_Array, PArray7939, PThreadedCode7941, 1, PSend7942);
    
    MethodClosure MC_SMB_primYield = new_MethodClosure((Method)PNativeMethod7938, Thread_Class);
    store_method(Thread_Class, SMB_primYield, MC_SMB_primYield);
}


static void init_SMB_terminate() {
    Symbol SMB_terminate = new_Symbol(L"terminate");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7945 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7946 = new_Send((Optr)PSend7945, SMB_resumeNext, 0);
    Array PThreadedCode7944 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7945, (Optr)&t_send0, (Optr)PSend7946, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7943 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7944, 2, PSend7946, self);
    
    MethodClosure MC_SMB_terminate = new_MethodClosure((Method)PMethod7943, Thread_Class);
    store_method(Thread_Class, SMB_terminate, MC_SMB_terminate);
}


static void init_SMB_resumeSafe() {
    Symbol SMB_resumeSafe = new_Symbol(L"resumeSafe");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend7949 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7950 = new_Send((Optr)PSend7949, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_threads = new_Symbol(L"threads");
    // threads. 
    Send PSend7954 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7955 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7956 = new_Send((Optr)PSend7954, SMB_remove_, 1, (Optr)PSend7955);
    // threads. 
    Send PSend7957 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7958 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7959 = new_Send((Optr)PSend7957, SMB_addFirst_, 1, (Optr)PSend7958);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7960 = new_Send((Optr)self, SMB_resume, 0);
    Array PThreadedCode7953 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7954, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7955, (Optr)&t_send1, (Optr)PSend7956, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7957, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7958, (Optr)&t_send1, (Optr)PSend7959, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7960, (Optr)&t_block_return);
    Block PBlock7952 = new_Block_with(empty_Array, empty_Array, PThreadedCode7953, 3, PSend7956, PSend7959, PSend7960);
    // ifFalse:. 
    Send PSend7951 = new_Send((Optr)PSend7950, SMB_ifFalse_, 1, (Optr)PBlock7952);
    Array PThreadedCode7948 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7949, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7950, (Optr)&t_send_ifFalse_, (Optr)PSend7951, (Optr)PBlock7952, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7947 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7948, 2, PSend7951, self);
    
    MethodClosure MC_SMB_resumeSafe = new_MethodClosure((Method)PMethod7947, Thread_Class);
    store_method(Thread_Class, SMB_resumeSafe, MC_SMB_resumeSafe);
}


static void init_SMB_sleep_() {
    Symbol SMB_sleep_ = new_Symbol(L"sleep:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray7962 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7964 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7963 = new_Array_with(1, (Optr)PAnnotation7964);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7966 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7965 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7966, (Optr)&t_method_return);
    NativeMethod PNativeMethod7961 = new_NativeMethod_with(PArray7962, empty_Array, PArray7963, PThreadedCode7965, 1, PSend7966);
    
    MethodClosure MC_SMB_sleep_ = new_MethodClosure((Method)PNativeMethod7961, Thread_Class);
    store_method(Thread_Class, SMB_sleep_, MC_SMB_sleep_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray7968 = new_Array_with(1, (Optr)VAR_name_0_0);
    Array PThreadedCode7969 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7967 = new_Method_with(PArray7968, empty_Array, empty_Array, PThreadedCode7969, 1, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod7967, Thread_Class);
    store_method(Thread_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_storage() {
    Symbol SMB_storage = new_Symbol(L"storage");
    Array PThreadedCode7971 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_storage, (Optr)&t_method_return);
    Method PMethod7970 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7971, 1, slot_Runtime_Thread_storage);
    
    MethodClosure MC_SMB_storage = new_MethodClosure((Method)PMethod7970, Thread_Class);
    store_method(Thread_Class, SMB_storage, MC_SMB_storage);
}


static void init_SMB_evaluate_() {
    Symbol SMB_evaluate_ = new_Symbol(L"evaluate:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray7973 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7975 = new_Send((Optr)VAR_block_0_0, SMB_value, 0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend7976 = new_Send((Optr)self, SMB_terminate, 0);
    Array PThreadedCode7974 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend7975, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7976, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7972 = new_Method_with(PArray7973, empty_Array, empty_Array, PThreadedCode7974, 3, PSend7975, PSend7976, self);
    
    MethodClosure MC_SMB_evaluate_ = new_MethodClosure((Method)PMethod7972, Thread_Class);
    store_method(Thread_Class, SMB_evaluate_, MC_SMB_evaluate_);
}


static void init_SMB_sleep() {
    Symbol SMB_sleep = new_Symbol(L"sleep");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7979 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7978 = new_Array_with(1, (Optr)PAnnotation7979);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7981 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7980 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7981, (Optr)&t_method_return);
    NativeMethod PNativeMethod7977 = new_NativeMethod_with(empty_Array, empty_Array, PArray7978, PThreadedCode7980, 1, PSend7981);
    
    MethodClosure MC_SMB_sleep = new_MethodClosure((Method)PNativeMethod7977, Thread_Class);
    store_method(Thread_Class, SMB_sleep, MC_SMB_sleep);
}


static void init_SMB_nextInterpreter_() {
    Symbol SMB_nextInterpreter_ = new_Symbol(L"nextInterpreter:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray7983 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend7985 = new_Send((Optr)VAR_anInterpreter_0_0, SMB_isNil, 0);
    // isNil. 
    Send PSend7988 = new_Send((Optr)slot_Runtime_Thread_nextInterpreter, SMB_isNil, 0);
    Array PThreadedCode7987 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_nextInterpreter, (Optr)&t_send0, (Optr)PSend7988, (Optr)&t_block_return);
    Block PBlock7986 = new_Block_with(empty_Array, empty_Array, PThreadedCode7987, 1, PSend7988);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend7989 = new_Send((Optr)PSend7985, SMB_or_, 1, (Optr)PBlock7986);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend7993 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode7992 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7993, (Optr)&t_block_return);
    Block PBlock7991 = new_Block_with(empty_Array, empty_Array, PThreadedCode7992, 1, PSend7993);
    // ifFalse:. 
    Send PSend7990 = new_Send((Optr)PSend7989, SMB_ifFalse_, 1, (Optr)PBlock7991);
    Assign PAssign7994 = new_Assign((Optr)slot_Runtime_Thread_nextInterpreter, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode7984 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send0, (Optr)PSend7985, (Optr)&t_push_closure, (Optr)PBlock7986, (Optr)&t_send1, (Optr)PSend7989, (Optr)&t_send_ifFalse_, (Optr)PSend7990, (Optr)PBlock7991, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7994, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7982 = new_Method_with(PArray7983, empty_Array, empty_Array, PThreadedCode7984, 3, PSend7990, PAssign7994, self);
    
    MethodClosure MC_SMB_nextInterpreter_ = new_MethodClosure((Method)PMethod7982, Thread_Class);
    store_method(Thread_Class, SMB_nextInterpreter_, MC_SMB_nextInterpreter_);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7996 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7998 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_new_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7997 = new_Array_with(1, (Optr)PAnnotation7998);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend8000 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7999 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8000, (Optr)&t_method_return);
    NativeMethod PNativeMethod7995 = new_NativeMethod_with(PArray7996, empty_Array, PArray7997, PThreadedCode7999, 1, PSend8000);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PNativeMethod7995, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_resumeNext() {
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend8003 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_quit = new_Symbol(L"quit");
    // quit. 
    Send PSend8007 = new_Send((Optr)PMain_classReference, SMB_quit, 0);
    Array PThreadedCode8006 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PMain_classReference, (Optr)&t_send0, (Optr)PSend8007, (Optr)&t_block_return);
    Block PBlock8005 = new_Block_with(empty_Array, empty_Array, PThreadedCode8006, 1, PSend8007);
    // ifTrue:. 
    Send PSend8004 = new_Send((Optr)PSend8003, SMB_ifTrue_, 1, (Optr)PBlock8005);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend8008 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_removeLast, 0);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend8009 = new_Send((Optr)PSend8008, SMB_resume, 0);
    Array PThreadedCode8002 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend8003, (Optr)&t_send_ifTrue_, (Optr)PSend8004, (Optr)PBlock8005, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend8008, (Optr)&t_send0, (Optr)PSend8009, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8001 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8002, 3, PSend8004, PSend8009, self);
    
    MethodClosure MC_SMB_resumeNext = new_MethodClosure((Method)PMethod8001, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_resumeNext, MC_SMB_resumeNext);
}


static void init_class_SMB_threads() {
    Symbol SMB_threads = new_Symbol(L"threads");
    Array PThreadedCode8011 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_method_return);
    Method PMethod8010 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8011, 1, slot_Runtime_Thread_Class_class_threads);
    
    MethodClosure MC_SMB_threads = new_MethodClosure((Method)PMethod8010, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_threads, MC_SMB_threads);
}


static void init_class_SMB_removeThread_() {
    Symbol SMB_removeThread_ = new_Symbol(L"removeThread:");
    Variable VAR_aThread_0_0 = new_Variable_named(L"aThread", 0);
    Array PArray8013 = new_Array_with(1, (Optr)VAR_aThread_0_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend8015 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_remove_, 1, (Optr)VAR_aThread_0_0);
    Array PThreadedCode8014 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_aThread_0_0, (Optr)&t_send1, (Optr)PSend8015, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8012 = new_Method_with(PArray8013, empty_Array, empty_Array, PThreadedCode8014, 2, PSend8015, self);
    
    MethodClosure MC_SMB_removeThread_ = new_MethodClosure((Method)PMethod8012, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_removeThread_, MC_SMB_removeThread_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8019 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign8018 = new_Assign((Optr)slot_Runtime_Thread_Class_class_threads, (Optr)PSend8019);
    Array PThreadedCode8017 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign8018, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend8019, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8016 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8017, 2, PAssign8018, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8016, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_yield_() {
    Symbol SMB_yield_ = new_Symbol(L"yield:");
    Variable VAR_currentThread_0_0 = new_Variable_named(L"currentThread", 0);
    Array PArray8021 = new_Array_with(1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend8023 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_addFirst_, 1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend8024 = new_Send((Optr)self, SMB_resumeNext, 0);
    Array PThreadedCode8022 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_currentThread_0_0, (Optr)&t_send1, (Optr)PSend8023, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8024, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod8020 = new_Method_with(PArray8021, empty_Array, empty_Array, PThreadedCode8022, 3, PSend8023, PSend8024, nil_Const);
    
    MethodClosure MC_SMB_yield_ = new_MethodClosure((Method)PMethod8020, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_yield_, MC_SMB_yield_);
}


static void init_class_SMB_for_() {
    Symbol SMB_for_ = new_Symbol(L"for:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8026 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8028 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend8029 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_add_, 1, (Optr)PSend8028);
    Array PThreadedCode8027 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8028, (Optr)&t_send1, (Optr)PSend8029, (Optr)&t_method_return);
    Method PMethod8025 = new_Method_with(PArray8026, empty_Array, empty_Array, PThreadedCode8027, 1, PSend8029);
    
    MethodClosure MC_SMB_for_ = new_MethodClosure((Method)PMethod8025, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_for_, MC_SMB_for_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation8032 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_current, (Optr)SMB_Runtime_minus_Thread);
    Array PArray8031 = new_Array_with(1, (Optr)PAnnotation8032);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend8034 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode8033 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8034, (Optr)&t_method_return);
    NativeMethod PNativeMethod8030 = new_NativeMethod_with(empty_Array, empty_Array, PArray8031, PThreadedCode8033, 1, PSend8034);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PNativeMethod8030, HEADER(Thread_Class));
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