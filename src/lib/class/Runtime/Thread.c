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
    Send PSend7914 = new_Send((Optr)PThread_classReference, SMB_yield_, 1, (Optr)self);
    Array PThreadedCode7913 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7914, (Optr)&t_method_return);
    Method PMethod7912 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7913, 1, PSend7914);
    
    MethodClosure MC_SMB_yield = new_MethodClosure((Method)PMethod7912, Thread_Class);
    store_method(Thread_Class, SMB_yield, MC_SMB_yield);
}


static void init_SMB_resume() {
    Symbol SMB_resume = new_Symbol(L"resume");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7917 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_resume, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7916 = new_Array_with(1, (Optr)PAnnotation7917);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7919 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7918 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7919, (Optr)&t_method_return);
    NativeMethod PNativeMethod7915 = new_NativeMethod_with(empty_Array, empty_Array, PArray7916, PThreadedCode7918, 1, PSend7919);
    
    MethodClosure MC_SMB_resume = new_MethodClosure((Method)PNativeMethod7915, Thread_Class);
    store_method(Thread_Class, SMB_resume, MC_SMB_resume);
}


static void init_SMB_nextInterpreter_() {
    Symbol SMB_nextInterpreter_ = new_Symbol(L"nextInterpreter:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray7921 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend7923 = new_Send((Optr)VAR_anInterpreter_0_0, SMB_isNil, 0);
    // isNil. 
    Send PSend7926 = new_Send((Optr)slot_Runtime_Thread_nextInterpreter, SMB_isNil, 0);
    Array PThreadedCode7925 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_nextInterpreter, (Optr)&t_send0, (Optr)PSend7926, (Optr)&t_block_return);
    Block PBlock7924 = new_Block_with(empty_Array, empty_Array, PThreadedCode7925, 1, PSend7926);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend7927 = new_Send((Optr)PSend7923, SMB_or_, 1, (Optr)PBlock7924);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend7931 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode7930 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7931, (Optr)&t_block_return);
    Block PBlock7929 = new_Block_with(empty_Array, empty_Array, PThreadedCode7930, 1, PSend7931);
    // ifFalse:. 
    Send PSend7928 = new_Send((Optr)PSend7927, SMB_ifFalse_, 1, (Optr)PBlock7929);
    Assign PAssign7932 = new_Assign((Optr)slot_Runtime_Thread_nextInterpreter, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode7922 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send0, (Optr)PSend7923, (Optr)&t_push_closure, (Optr)PBlock7924, (Optr)&t_send1, (Optr)PSend7927, (Optr)&t_send_ifFalse_, (Optr)PSend7928, (Optr)PBlock7929, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7932, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7920 = new_Method_with(PArray7921, empty_Array, empty_Array, PThreadedCode7922, 3, PSend7928, PAssign7932, self);
    
    MethodClosure MC_SMB_nextInterpreter_ = new_MethodClosure((Method)PMethod7920, Thread_Class);
    store_method(Thread_Class, SMB_nextInterpreter_, MC_SMB_nextInterpreter_);
}


static void init_SMB_primYield() {
    Symbol SMB_primYield = new_Symbol(L"primYield");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7935 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_primYield, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7934 = new_Array_with(1, (Optr)PAnnotation7935);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7937 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7936 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7937, (Optr)&t_method_return);
    NativeMethod PNativeMethod7933 = new_NativeMethod_with(empty_Array, empty_Array, PArray7934, PThreadedCode7936, 1, PSend7937);
    
    MethodClosure MC_SMB_primYield = new_MethodClosure((Method)PNativeMethod7933, Thread_Class);
    store_method(Thread_Class, SMB_primYield, MC_SMB_primYield);
}


static void init_SMB_terminate() {
    Symbol SMB_terminate = new_Symbol(L"terminate");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7940 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7941 = new_Send((Optr)PSend7940, SMB_resumeNext, 0);
    Array PThreadedCode7939 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7940, (Optr)&t_send0, (Optr)PSend7941, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7939, 2, PSend7941, self);
    
    MethodClosure MC_SMB_terminate = new_MethodClosure((Method)PMethod7938, Thread_Class);
    store_method(Thread_Class, SMB_terminate, MC_SMB_terminate);
}


static void init_SMB_resumeSafe() {
    Symbol SMB_resumeSafe = new_Symbol(L"resumeSafe");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend7944 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7945 = new_Send((Optr)PSend7944, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_threads = new_Symbol(L"threads");
    // threads. 
    Send PSend7949 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7950 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7951 = new_Send((Optr)PSend7949, SMB_remove_, 1, (Optr)PSend7950);
    // threads. 
    Send PSend7952 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7953 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7954 = new_Send((Optr)PSend7952, SMB_addFirst_, 1, (Optr)PSend7953);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7955 = new_Send((Optr)self, SMB_resume, 0);
    Array PThreadedCode7948 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7949, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7950, (Optr)&t_send1, (Optr)PSend7951, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7952, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7953, (Optr)&t_send1, (Optr)PSend7954, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7955, (Optr)&t_block_return);
    Block PBlock7947 = new_Block_with(empty_Array, empty_Array, PThreadedCode7948, 3, PSend7951, PSend7954, PSend7955);
    // ifFalse:. 
    Send PSend7946 = new_Send((Optr)PSend7945, SMB_ifFalse_, 1, (Optr)PBlock7947);
    Array PThreadedCode7943 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7944, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7945, (Optr)&t_send_ifFalse_, (Optr)PSend7946, (Optr)PBlock7947, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7942 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7943, 2, PSend7946, self);
    
    MethodClosure MC_SMB_resumeSafe = new_MethodClosure((Method)PMethod7942, Thread_Class);
    store_method(Thread_Class, SMB_resumeSafe, MC_SMB_resumeSafe);
}


static void init_SMB_sleep_() {
    Symbol SMB_sleep_ = new_Symbol(L"sleep:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray7957 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7959 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7958 = new_Array_with(1, (Optr)PAnnotation7959);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7961 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7960 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7961, (Optr)&t_method_return);
    NativeMethod PNativeMethod7956 = new_NativeMethod_with(PArray7957, empty_Array, PArray7958, PThreadedCode7960, 1, PSend7961);
    
    MethodClosure MC_SMB_sleep_ = new_MethodClosure((Method)PNativeMethod7956, Thread_Class);
    store_method(Thread_Class, SMB_sleep_, MC_SMB_sleep_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray7963 = new_Array_with(1, (Optr)VAR_name_0_0);
    Array PThreadedCode7964 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7962 = new_Method_with(PArray7963, empty_Array, empty_Array, PThreadedCode7964, 1, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod7962, Thread_Class);
    store_method(Thread_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_storage() {
    Symbol SMB_storage = new_Symbol(L"storage");
    Array PThreadedCode7966 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_storage, (Optr)&t_method_return);
    Method PMethod7965 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7966, 1, slot_Runtime_Thread_storage);
    
    MethodClosure MC_SMB_storage = new_MethodClosure((Method)PMethod7965, Thread_Class);
    store_method(Thread_Class, SMB_storage, MC_SMB_storage);
}


static void init_SMB_evaluate_() {
    Symbol SMB_evaluate_ = new_Symbol(L"evaluate:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray7968 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7970 = new_Send((Optr)VAR_block_0_0, SMB_value, 0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend7971 = new_Send((Optr)self, SMB_terminate, 0);
    Array PThreadedCode7969 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend7970, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7971, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7967 = new_Method_with(PArray7968, empty_Array, empty_Array, PThreadedCode7969, 3, PSend7970, PSend7971, self);
    
    MethodClosure MC_SMB_evaluate_ = new_MethodClosure((Method)PMethod7967, Thread_Class);
    store_method(Thread_Class, SMB_evaluate_, MC_SMB_evaluate_);
}


static void init_SMB_sleep() {
    Symbol SMB_sleep = new_Symbol(L"sleep");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7974 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7973 = new_Array_with(1, (Optr)PAnnotation7974);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7976 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7975 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7976, (Optr)&t_method_return);
    NativeMethod PNativeMethod7972 = new_NativeMethod_with(empty_Array, empty_Array, PArray7973, PThreadedCode7975, 1, PSend7976);
    
    MethodClosure MC_SMB_sleep = new_MethodClosure((Method)PNativeMethod7972, Thread_Class);
    store_method(Thread_Class, SMB_sleep, MC_SMB_sleep);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7978 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7980 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_new_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7979 = new_Array_with(1, (Optr)PAnnotation7980);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7982 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7981 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7982, (Optr)&t_method_return);
    NativeMethod PNativeMethod7977 = new_NativeMethod_with(PArray7978, empty_Array, PArray7979, PThreadedCode7981, 1, PSend7982);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PNativeMethod7977, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_resumeNext() {
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend7985 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_quit = new_Symbol(L"quit");
    // quit. 
    Send PSend7989 = new_Send((Optr)PMain_classReference, SMB_quit, 0);
    Array PThreadedCode7988 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PMain_classReference, (Optr)&t_send0, (Optr)PSend7989, (Optr)&t_block_return);
    Block PBlock7987 = new_Block_with(empty_Array, empty_Array, PThreadedCode7988, 1, PSend7989);
    // ifTrue:. 
    Send PSend7986 = new_Send((Optr)PSend7985, SMB_ifTrue_, 1, (Optr)PBlock7987);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend7990 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_removeLast, 0);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7991 = new_Send((Optr)PSend7990, SMB_resume, 0);
    Array PThreadedCode7984 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7985, (Optr)&t_send_ifTrue_, (Optr)PSend7986, (Optr)PBlock7987, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7990, (Optr)&t_send0, (Optr)PSend7991, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7983 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7984, 3, PSend7986, PSend7991, self);
    
    MethodClosure MC_SMB_resumeNext = new_MethodClosure((Method)PMethod7983, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_resumeNext, MC_SMB_resumeNext);
}


static void init_class_SMB_threads() {
    Symbol SMB_threads = new_Symbol(L"threads");
    Array PThreadedCode7993 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_method_return);
    Method PMethod7992 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7993, 1, slot_Runtime_Thread_Class_class_threads);
    
    MethodClosure MC_SMB_threads = new_MethodClosure((Method)PMethod7992, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_threads, MC_SMB_threads);
}


static void init_class_SMB_removeThread_() {
    Symbol SMB_removeThread_ = new_Symbol(L"removeThread:");
    Variable VAR_aThread_0_0 = new_Variable_named(L"aThread", 0);
    Array PArray7995 = new_Array_with(1, (Optr)VAR_aThread_0_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7997 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_remove_, 1, (Optr)VAR_aThread_0_0);
    Array PThreadedCode7996 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_aThread_0_0, (Optr)&t_send1, (Optr)PSend7997, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7994 = new_Method_with(PArray7995, empty_Array, empty_Array, PThreadedCode7996, 2, PSend7997, self);
    
    MethodClosure MC_SMB_removeThread_ = new_MethodClosure((Method)PMethod7994, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_removeThread_, MC_SMB_removeThread_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8001 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign8000 = new_Assign((Optr)slot_Runtime_Thread_Class_class_threads, (Optr)PSend8001);
    Array PThreadedCode7999 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign8000, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend8001, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7998 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7999, 2, PAssign8000, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7998, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_yield_() {
    Symbol SMB_yield_ = new_Symbol(L"yield:");
    Variable VAR_currentThread_0_0 = new_Variable_named(L"currentThread", 0);
    Array PArray8003 = new_Array_with(1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend8005 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_addFirst_, 1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend8006 = new_Send((Optr)self, SMB_resumeNext, 0);
    Array PThreadedCode8004 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_currentThread_0_0, (Optr)&t_send1, (Optr)PSend8005, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8006, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod8002 = new_Method_with(PArray8003, empty_Array, empty_Array, PThreadedCode8004, 3, PSend8005, PSend8006, nil_Const);
    
    MethodClosure MC_SMB_yield_ = new_MethodClosure((Method)PMethod8002, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_yield_, MC_SMB_yield_);
}


static void init_class_SMB_for_() {
    Symbol SMB_for_ = new_Symbol(L"for:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8008 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8010 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend8011 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_add_, 1, (Optr)PSend8010);
    Array PThreadedCode8009 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8010, (Optr)&t_send1, (Optr)PSend8011, (Optr)&t_method_return);
    Method PMethod8007 = new_Method_with(PArray8008, empty_Array, empty_Array, PThreadedCode8009, 1, PSend8011);
    
    MethodClosure MC_SMB_for_ = new_MethodClosure((Method)PMethod8007, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_for_, MC_SMB_for_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation8014 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_current, (Optr)SMB_Runtime_minus_Thread);
    Array PArray8013 = new_Array_with(1, (Optr)PAnnotation8014);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend8016 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode8015 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8016, (Optr)&t_method_return);
    NativeMethod PNativeMethod8012 = new_NativeMethod_with(empty_Array, empty_Array, PArray8013, PThreadedCode8015, 1, PSend8016);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PNativeMethod8012, HEADER(Thread_Class));
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