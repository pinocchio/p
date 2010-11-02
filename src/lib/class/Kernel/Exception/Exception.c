#include <lib/class/Kernel/Exception/Exception.h>


Optr layout_Kernel_Exception_Exception_Class_class;
Optr slot_Kernel_Exception_Exception_environment;
Optr layout_Kernel_Exception_Exception;


static void init_SMB_signal() {
    Symbol SMB_signal = new_Symbol(L"signal");
    Symbol SMB_throw_ = new_Symbol(L"throw:");
    // throw:. 
    Send PSend867 = new_Send((Optr)Exception_classReference, SMB_throw_, 1, (Optr)self);
    Array PThreadedCode866 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend867, (Optr)&t_method_return);
    Method PMethod865 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode866, 1, PSend867);
    
    MethodClosure MC_SMB_signal = new_MethodClosure((Method)PMethod865, Kernel_Exception_Exception_Class);
    store_method(Kernel_Exception_Exception_Class, SMB_signal, MC_SMB_signal);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Array PThreadedCode869 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod868 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode869, 1, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod868, Kernel_Exception_Exception_Class);
    store_method(Kernel_Exception_Exception_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray871 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend873 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode872 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend873, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod870 = new_Method_with(PArray871, empty_Array, empty_Array, PThreadedCode872, 2, PSend873, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod870, Kernel_Exception_Exception_Class);
    store_method(Kernel_Exception_Exception_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_environment() {
    Symbol SMB_environment = new_Symbol(L"environment");
    Array PThreadedCode875 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Exception_Exception_environment, (Optr)&t_method_return);
    Method PMethod874 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode875, 1, slot_Kernel_Exception_Exception_environment);
    
    MethodClosure MC_SMB_environment = new_MethodClosure((Method)PMethod874, Kernel_Exception_Exception_Class);
    store_method(Kernel_Exception_Exception_Class, SMB_environment, MC_SMB_environment);
}


static void init_SMB_environment_() {
    Symbol SMB_environment_ = new_Symbol(L"environment:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray877 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign879 = new_Assign((Optr)slot_Kernel_Exception_Exception_environment, (Optr)VAR_anObject_0_0);
    Array PThreadedCode878 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign879, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod876 = new_Method_with(PArray877, empty_Array, empty_Array, PThreadedCode878, 2, PAssign879, self);
    
    MethodClosure MC_SMB_environment_ = new_MethodClosure((Method)PMethod876, Kernel_Exception_Exception_Class);
    store_method(Kernel_Exception_Exception_Class, SMB_environment_, MC_SMB_environment_);
}


static void init_SMB_printStacktraceOn_() {
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray881 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray884 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_environment = new_Symbol(L"environment");
    // environment. 
    Send PSend886 = new_Send((Optr)self, SMB_environment, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend889 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode888 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend889, (Optr)&t_block_return);
    Block PBlock887 = new_Block_with(empty_Array, empty_Array, PThreadedCode888, 1, PSend889);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend890 = new_Send((Optr)PSend886, SMB_ifNil_, 1, (Optr)PBlock887);
    // environment. 
    Send PSend891 = new_Send((Optr)self, SMB_environment, 0);
    // printStacktraceOn:. 
    Send PSend892 = new_Send((Optr)PSend891, SMB_printStacktraceOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode885 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend886, (Optr)&t_push_closure, (Optr)PBlock887, (Optr)&t_send1, (Optr)PSend890, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend891, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend892, (Optr)&t_method_return);
    Block PBlock883 = new_Block_with(PArray884, empty_Array, PThreadedCode885, 2, PSend890, PSend892);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend893 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock883);
    Array PThreadedCode882 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock883, (Optr)&t_send1, (Optr)PSend893, (Optr)&t_method_return);
    Method PMethod880 = new_Method_with(PArray881, empty_Array, empty_Array, PThreadedCode882, 1, PSend893);
    
    MethodClosure MC_SMB_printStacktraceOn_ = new_MethodClosure((Method)PMethod880, Kernel_Exception_Exception_Class);
    store_method(Kernel_Exception_Exception_Class, SMB_printStacktraceOn_, MC_SMB_printStacktraceOn_);
}


static void init_class_SMB_throw_() {
    Symbol SMB_throw_ = new_Symbol(L"throw:");
    Variable VAR_anException_0_0 = new_Variable_named(L"anException", 0);
    Array PArray895 = new_Array_with(1, (Optr)VAR_anException_0_0);
    Symbol SMB_handler = new_Symbol(L"handler");
    // handler. 
    Send PSend897 = new_Send((Optr)self, SMB_handler, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend898 = new_Send((Optr)PSend897, SMB_escape_, 1, (Optr)VAR_anException_0_0);
    Array PThreadedCode896 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend897, (Optr)&t_push_variable, (Optr)VAR_anException_0_0, (Optr)&t_send1, (Optr)PSend898, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod894 = new_Method_with(PArray895, empty_Array, empty_Array, PThreadedCode896, 2, PSend898, self);
    
    MethodClosure MC_SMB_throw_ = new_MethodClosure((Method)PMethod894, HEADER(Kernel_Exception_Exception_Class));
    store_method(HEADER(Kernel_Exception_Exception_Class), SMB_throw_, MC_SMB_throw_);
}


static void init_class_SMB_handler() {
    Symbol SMB_handler = new_Symbol(L"handler");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Exception = new_Symbol(L"Runtime.Exception");
    Annotation PAnnotation901 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_handler, (Optr)SMB_Runtime_minus_Exception);
    Array PArray900 = new_Array_with(1, (Optr)PAnnotation901);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend903 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode902 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend903, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod899 = new_NativeMethod_with(empty_Array, empty_Array, PArray900, PThreadedCode902, 2, PSend903, self);
    
    MethodClosure MC_SMB_handler = new_MethodClosure((Method)PNativeMethod899, HEADER(Kernel_Exception_Exception_Class));
    store_method(HEADER(Kernel_Exception_Exception_Class), SMB_handler, MC_SMB_handler);
}


static void init_class_SMB_handler_() {
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    Variable VAR_handler_0_0 = new_Variable_named(L"handler", 0);
    Array PArray905 = new_Array_with(1, (Optr)VAR_handler_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Exception = new_Symbol(L"Runtime.Exception");
    Annotation PAnnotation907 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_handler_, (Optr)SMB_Runtime_minus_Exception);
    Array PArray906 = new_Array_with(1, (Optr)PAnnotation907);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend909 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode908 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend909, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod904 = new_NativeMethod_with(PArray905, empty_Array, PArray906, PThreadedCode908, 2, PSend909, self);
    
    MethodClosure MC_SMB_handler_ = new_MethodClosure((Method)PNativeMethod904, HEADER(Kernel_Exception_Exception_Class));
    store_method(HEADER(Kernel_Exception_Exception_Class), SMB_handler_, MC_SMB_handler_);
}

void init_Kernel_Exception_Exception_layout() {
    layout_Kernel_Exception_Exception_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Exception_Exception_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Exception_Exception_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Exception_Exception_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Exception_Exception_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Exception_Exception_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Exception = new_Symbol(L"Exception");
    slot_Kernel_Exception_Exception_environment = (Optr)new_Slot(0, L"environment");
    layout_Kernel_Exception_Exception = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Kernel_Exception_Exception)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    Kernel_Exception_Exception_Class = (Class)new_Class(Object_Class, layout_Kernel_Exception_Exception_Class_class);
    Class_set_superclass(Kernel_Exception_Exception_Class, Object_Class);
    Kernel_Exception_Exception_Class->layout = layout_Kernel_Exception_Exception;
    HEADER(Kernel_Exception_Exception_Class)->layout = layout_Kernel_Exception_Exception_Class_class;
    Kernel_Exception_Exception_Class->name = SMB_Exception;
    
}

void init_Kernel_Exception_Exception_methods() {
    init_SMB_signal();
    init_SMB_initialize();
    init_SMB_warnOn_();
    init_SMB_environment();
    init_SMB_environment_();
    init_SMB_printStacktraceOn_();
    init_class_SMB_throw_();
    init_class_SMB_handler();
    init_class_SMB_handler_();
    
}