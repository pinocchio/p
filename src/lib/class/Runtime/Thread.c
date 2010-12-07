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
    Send PSend7887 = new_Send((Optr)PThread_classReference, SMB_yield_, 1, (Optr)self);
    Array PThreadedCode7886 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7887, (Optr)&t_method_return);
    Method PMethod7885 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7886, 1, PSend7887);
    
    MethodClosure MC_SMB_yield = new_MethodClosure((Method)PMethod7885, Thread_Class);
    store_method(Thread_Class, SMB_yield, MC_SMB_yield);
}


static void init_SMB_resume() {
    Symbol SMB_resume = new_Symbol(L"resume");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7890 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_resume, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7889 = new_Array_with(1, (Optr)PAnnotation7890);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7892 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7891 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7892, (Optr)&t_method_return);
    NativeMethod PNativeMethod7888 = new_NativeMethod_with(empty_Array, empty_Array, PArray7889, PThreadedCode7891, 1, PSend7892);
    
    MethodClosure MC_SMB_resume = new_MethodClosure((Method)PNativeMethod7888, Thread_Class);
    store_method(Thread_Class, SMB_resume, MC_SMB_resume);
}


static void init_SMB_nextInterpreter_() {
    Symbol SMB_nextInterpreter_ = new_Symbol(L"nextInterpreter:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray7894 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend7896 = new_Send((Optr)VAR_anInterpreter_0_0, SMB_isNil, 0);
    // isNil. 
    Send PSend7899 = new_Send((Optr)slot_Runtime_Thread_nextInterpreter, SMB_isNil, 0);
    Array PThreadedCode7898 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_nextInterpreter, (Optr)&t_send0, (Optr)PSend7899, (Optr)&t_block_return);
    Block PBlock7897 = new_Block_with(empty_Array, empty_Array, PThreadedCode7898, 1, PSend7899);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend7900 = new_Send((Optr)PSend7896, SMB_or_, 1, (Optr)PBlock7897);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend7904 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode7903 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7904, (Optr)&t_block_return);
    Block PBlock7902 = new_Block_with(empty_Array, empty_Array, PThreadedCode7903, 1, PSend7904);
    // ifFalse:. 
    Send PSend7901 = new_Send((Optr)PSend7900, SMB_ifFalse_, 1, (Optr)PBlock7902);
    Assign PAssign7905 = new_Assign((Optr)slot_Runtime_Thread_nextInterpreter, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode7895 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send0, (Optr)PSend7896, (Optr)&t_push_closure, (Optr)PBlock7897, (Optr)&t_send1, (Optr)PSend7900, (Optr)&t_send_ifFalse_, (Optr)PSend7901, (Optr)PBlock7902, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7905, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7893 = new_Method_with(PArray7894, empty_Array, empty_Array, PThreadedCode7895, 3, PSend7901, PAssign7905, self);
    
    MethodClosure MC_SMB_nextInterpreter_ = new_MethodClosure((Method)PMethod7893, Thread_Class);
    store_method(Thread_Class, SMB_nextInterpreter_, MC_SMB_nextInterpreter_);
}


static void init_SMB_primYield() {
    Symbol SMB_primYield = new_Symbol(L"primYield");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7908 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_primYield, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7907 = new_Array_with(1, (Optr)PAnnotation7908);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7910 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7909 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7910, (Optr)&t_method_return);
    NativeMethod PNativeMethod7906 = new_NativeMethod_with(empty_Array, empty_Array, PArray7907, PThreadedCode7909, 1, PSend7910);
    
    MethodClosure MC_SMB_primYield = new_MethodClosure((Method)PNativeMethod7906, Thread_Class);
    store_method(Thread_Class, SMB_primYield, MC_SMB_primYield);
}


static void init_SMB_terminate() {
    Symbol SMB_terminate = new_Symbol(L"terminate");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7913 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7914 = new_Send((Optr)PSend7913, SMB_resumeNext, 0);
    Array PThreadedCode7912 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7913, (Optr)&t_send0, (Optr)PSend7914, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7911 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7912, 2, PSend7914, self);
    
    MethodClosure MC_SMB_terminate = new_MethodClosure((Method)PMethod7911, Thread_Class);
    store_method(Thread_Class, SMB_terminate, MC_SMB_terminate);
}


static void init_SMB_resumeSafe() {
    Symbol SMB_resumeSafe = new_Symbol(L"resumeSafe");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend7917 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7918 = new_Send((Optr)PSend7917, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_threads = new_Symbol(L"threads");
    // threads. 
    Send PSend7922 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7923 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7924 = new_Send((Optr)PSend7922, SMB_remove_, 1, (Optr)PSend7923);
    // threads. 
    Send PSend7925 = new_Send((Optr)PThread_classReference, SMB_threads, 0);
    // current. 
    Send PSend7926 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7927 = new_Send((Optr)PSend7925, SMB_addFirst_, 1, (Optr)PSend7926);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7928 = new_Send((Optr)self, SMB_resume, 0);
    Array PThreadedCode7921 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7922, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7923, (Optr)&t_send1, (Optr)PSend7924, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7925, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7926, (Optr)&t_send1, (Optr)PSend7927, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7928, (Optr)&t_block_return);
    Block PBlock7920 = new_Block_with(empty_Array, empty_Array, PThreadedCode7921, 3, PSend7924, PSend7927, PSend7928);
    // ifFalse:. 
    Send PSend7919 = new_Send((Optr)PSend7918, SMB_ifFalse_, 1, (Optr)PBlock7920);
    Array PThreadedCode7916 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend7917, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7918, (Optr)&t_send_ifFalse_, (Optr)PSend7919, (Optr)PBlock7920, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7915 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7916, 2, PSend7919, self);
    
    MethodClosure MC_SMB_resumeSafe = new_MethodClosure((Method)PMethod7915, Thread_Class);
    store_method(Thread_Class, SMB_resumeSafe, MC_SMB_resumeSafe);
}


static void init_SMB_sleep_() {
    Symbol SMB_sleep_ = new_Symbol(L"sleep:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray7930 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7932 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7931 = new_Array_with(1, (Optr)PAnnotation7932);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7934 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7933 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7934, (Optr)&t_method_return);
    NativeMethod PNativeMethod7929 = new_NativeMethod_with(PArray7930, empty_Array, PArray7931, PThreadedCode7933, 1, PSend7934);
    
    MethodClosure MC_SMB_sleep_ = new_MethodClosure((Method)PNativeMethod7929, Thread_Class);
    store_method(Thread_Class, SMB_sleep_, MC_SMB_sleep_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray7936 = new_Array_with(1, (Optr)VAR_name_0_0);
    Array PThreadedCode7937 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7935 = new_Method_with(PArray7936, empty_Array, empty_Array, PThreadedCode7937, 1, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod7935, Thread_Class);
    store_method(Thread_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_storage() {
    Symbol SMB_storage = new_Symbol(L"storage");
    Array PThreadedCode7939 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_storage, (Optr)&t_method_return);
    Method PMethod7938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7939, 1, slot_Runtime_Thread_storage);
    
    MethodClosure MC_SMB_storage = new_MethodClosure((Method)PMethod7938, Thread_Class);
    store_method(Thread_Class, SMB_storage, MC_SMB_storage);
}


static void init_SMB_evaluate_() {
    Symbol SMB_evaluate_ = new_Symbol(L"evaluate:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray7941 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7943 = new_Send((Optr)VAR_block_0_0, SMB_value, 0);
    Symbol SMB_terminate = new_Symbol(L"terminate");
    // terminate. 
    Send PSend7944 = new_Send((Optr)self, SMB_terminate, 0);
    Array PThreadedCode7942 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend7943, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7944, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7940 = new_Method_with(PArray7941, empty_Array, empty_Array, PThreadedCode7942, 3, PSend7943, PSend7944, self);
    
    MethodClosure MC_SMB_evaluate_ = new_MethodClosure((Method)PMethod7940, Thread_Class);
    store_method(Thread_Class, SMB_evaluate_, MC_SMB_evaluate_);
}


static void init_SMB_sleep() {
    Symbol SMB_sleep = new_Symbol(L"sleep");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7947 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sleep, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7946 = new_Array_with(1, (Optr)PAnnotation7947);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7949 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7948 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7949, (Optr)&t_method_return);
    NativeMethod PNativeMethod7945 = new_NativeMethod_with(empty_Array, empty_Array, PArray7946, PThreadedCode7948, 1, PSend7949);
    
    MethodClosure MC_SMB_sleep = new_MethodClosure((Method)PNativeMethod7945, Thread_Class);
    store_method(Thread_Class, SMB_sleep, MC_SMB_sleep);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7951 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7953 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_new_, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7952 = new_Array_with(1, (Optr)PAnnotation7953);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7955 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7954 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7955, (Optr)&t_method_return);
    NativeMethod PNativeMethod7950 = new_NativeMethod_with(PArray7951, empty_Array, PArray7952, PThreadedCode7954, 1, PSend7955);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PNativeMethod7950, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_resumeNext() {
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend7958 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_quit = new_Symbol(L"quit");
    // quit. 
    Send PSend7962 = new_Send((Optr)PMain_classReference, SMB_quit, 0);
    Array PThreadedCode7961 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PMain_classReference, (Optr)&t_send0, (Optr)PSend7962, (Optr)&t_block_return);
    Block PBlock7960 = new_Block_with(empty_Array, empty_Array, PThreadedCode7961, 1, PSend7962);
    // ifTrue:. 
    Send PSend7959 = new_Send((Optr)PSend7958, SMB_ifTrue_, 1, (Optr)PBlock7960);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend7963 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_removeLast, 0);
    Symbol SMB_resume = new_Symbol(L"resume");
    // resume. 
    Send PSend7964 = new_Send((Optr)PSend7963, SMB_resume, 0);
    Array PThreadedCode7957 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7958, (Optr)&t_send_ifTrue_, (Optr)PSend7959, (Optr)PBlock7960, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_send0, (Optr)PSend7963, (Optr)&t_send0, (Optr)PSend7964, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7956 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7957, 3, PSend7959, PSend7964, self);
    
    MethodClosure MC_SMB_resumeNext = new_MethodClosure((Method)PMethod7956, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_resumeNext, MC_SMB_resumeNext);
}


static void init_class_SMB_threads() {
    Symbol SMB_threads = new_Symbol(L"threads");
    Array PThreadedCode7966 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_method_return);
    Method PMethod7965 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7966, 1, slot_Runtime_Thread_Class_class_threads);
    
    MethodClosure MC_SMB_threads = new_MethodClosure((Method)PMethod7965, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_threads, MC_SMB_threads);
}


static void init_class_SMB_removeThread_() {
    Symbol SMB_removeThread_ = new_Symbol(L"removeThread:");
    Variable VAR_aThread_0_0 = new_Variable_named(L"aThread", 0);
    Array PArray7968 = new_Array_with(1, (Optr)VAR_aThread_0_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7970 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_remove_, 1, (Optr)VAR_aThread_0_0);
    Array PThreadedCode7969 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_aThread_0_0, (Optr)&t_send1, (Optr)PSend7970, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7967 = new_Method_with(PArray7968, empty_Array, empty_Array, PThreadedCode7969, 2, PSend7970, self);
    
    MethodClosure MC_SMB_removeThread_ = new_MethodClosure((Method)PMethod7967, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_removeThread_, MC_SMB_removeThread_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7974 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign7973 = new_Assign((Optr)slot_Runtime_Thread_Class_class_threads, (Optr)PSend7974);
    Array PThreadedCode7972 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign7973, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend7974, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7971 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7972, 2, PAssign7973, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7971, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_yield_() {
    Symbol SMB_yield_ = new_Symbol(L"yield:");
    Variable VAR_currentThread_0_0 = new_Variable_named(L"currentThread", 0);
    Array PArray7976 = new_Array_with(1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    // addFirst:. 
    Send PSend7978 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_addFirst_, 1, (Optr)VAR_currentThread_0_0);
    Symbol SMB_resumeNext = new_Symbol(L"resumeNext");
    // resumeNext. 
    Send PSend7979 = new_Send((Optr)self, SMB_resumeNext, 0);
    Array PThreadedCode7977 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_variable, (Optr)VAR_currentThread_0_0, (Optr)&t_send1, (Optr)PSend7978, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7979, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod7975 = new_Method_with(PArray7976, empty_Array, empty_Array, PThreadedCode7977, 3, PSend7978, PSend7979, nil_Const);
    
    MethodClosure MC_SMB_yield_ = new_MethodClosure((Method)PMethod7975, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_yield_, MC_SMB_yield_);
}


static void init_class_SMB_for_() {
    Symbol SMB_for_ = new_Symbol(L"for:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7981 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7983 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7984 = new_Send((Optr)slot_Runtime_Thread_Class_class_threads, SMB_add_, 1, (Optr)PSend7983);
    Array PThreadedCode7982 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Runtime_Thread_Class_class_threads, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend7983, (Optr)&t_send1, (Optr)PSend7984, (Optr)&t_method_return);
    Method PMethod7980 = new_Method_with(PArray7981, empty_Array, empty_Array, PThreadedCode7982, 1, PSend7984);
    
    MethodClosure MC_SMB_for_ = new_MethodClosure((Method)PMethod7980, HEADER(Thread_Class));
    store_method(HEADER(Thread_Class), SMB_for_, MC_SMB_for_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Thread = new_Symbol(L"Runtime.Thread");
    Annotation PAnnotation7987 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_current, (Optr)SMB_Runtime_minus_Thread);
    Array PArray7986 = new_Array_with(1, (Optr)PAnnotation7987);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend7989 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode7988 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7989, (Optr)&t_method_return);
    NativeMethod PNativeMethod7985 = new_NativeMethod_with(empty_Array, empty_Array, PArray7986, PThreadedCode7988, 1, PSend7989);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PNativeMethod7985, HEADER(Thread_Class));
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