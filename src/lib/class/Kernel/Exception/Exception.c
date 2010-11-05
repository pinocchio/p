#include <lib/class/Kernel/Exception/Exception.h>


Optr layout_Kernel_Exception_Exception_Class_class;
Optr slot_Kernel_Exception_Exception_environment;
Optr layout_Kernel_Exception_Exception;


static void init_SMB_signal() {
    Symbol SMB_signal = new_Symbol(L"signal");
    Symbol SMB_throw_ = new_Symbol(L"throw:");
    // throw:. 
    Send PSend876 = new_Send((Optr)Exception_classReference, SMB_throw_, 1, (Optr)self);
    Array PThreadedCode875 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend876, (Optr)&t_method_return);
    Method PMethod874 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode875, 1, PSend876);
    
    MethodClosure MC_SMB_signal = new_MethodClosure((Method)PMethod874, Kernel_Exception_Exception_Class);
    store_method(Kernel_Exception_Exception_Class, SMB_signal, MC_SMB_signal);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Array PThreadedCode878 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod877 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode878, 1, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod877, Kernel_Exception_Exception_Class);
    store_method(Kernel_Exception_Exception_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray880 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend882 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode881 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend882, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod879 = new_Method_with(PArray880, empty_Array, empty_Array, PThreadedCode881, 2, PSend882, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod879, Kernel_Exception_Exception_Class);
    store_method(Kernel_Exception_Exception_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_environment() {
    Symbol SMB_environment = new_Symbol(L"environment");
    Array PThreadedCode884 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Exception_Exception_environment, (Optr)&t_method_return);
    Method PMethod883 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode884, 1, slot_Kernel_Exception_Exception_environment);
    
    MethodClosure MC_SMB_environment = new_MethodClosure((Method)PMethod883, Kernel_Exception_Exception_Class);
    store_method(Kernel_Exception_Exception_Class, SMB_environment, MC_SMB_environment);
}


static void init_SMB_environment_() {
    Symbol SMB_environment_ = new_Symbol(L"environment:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray886 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign888 = new_Assign((Optr)slot_Kernel_Exception_Exception_environment, (Optr)VAR_anObject_0_0);
    Array PThreadedCode887 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign888, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod885 = new_Method_with(PArray886, empty_Array, empty_Array, PThreadedCode887, 2, PAssign888, self);
    
    MethodClosure MC_SMB_environment_ = new_MethodClosure((Method)PMethod885, Kernel_Exception_Exception_Class);
    store_method(Kernel_Exception_Exception_Class, SMB_environment_, MC_SMB_environment_);
}


static void init_SMB_printStacktraceOn_() {
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray890 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray893 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_environment = new_Symbol(L"environment");
    // environment. 
    Send PSend895 = new_Send((Optr)self, SMB_environment, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend898 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode897 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend898, (Optr)&t_block_return);
    Block PBlock896 = new_Block_with(empty_Array, empty_Array, PThreadedCode897, 1, PSend898);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend899 = new_Send((Optr)PSend895, SMB_ifNil_, 1, (Optr)PBlock896);
    // environment. 
    Send PSend900 = new_Send((Optr)self, SMB_environment, 0);
    // printStacktraceOn:. 
    Send PSend901 = new_Send((Optr)PSend900, SMB_printStacktraceOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode894 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend895, (Optr)&t_push_closure, (Optr)PBlock896, (Optr)&t_send1, (Optr)PSend899, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend900, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend901, (Optr)&t_method_return);
    Block PBlock892 = new_Block_with(PArray893, empty_Array, PThreadedCode894, 2, PSend899, PSend901);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend902 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock892);
    Array PThreadedCode891 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock892, (Optr)&t_send1, (Optr)PSend902, (Optr)&t_method_return);
    Method PMethod889 = new_Method_with(PArray890, empty_Array, empty_Array, PThreadedCode891, 1, PSend902);
    
    MethodClosure MC_SMB_printStacktraceOn_ = new_MethodClosure((Method)PMethod889, Kernel_Exception_Exception_Class);
    store_method(Kernel_Exception_Exception_Class, SMB_printStacktraceOn_, MC_SMB_printStacktraceOn_);
}


static void init_class_SMB_throw_() {
    Symbol SMB_throw_ = new_Symbol(L"throw:");
    Variable VAR_anException_0_0 = new_Variable_named(L"anException", 0);
    Array PArray904 = new_Array_with(1, (Optr)VAR_anException_0_0);
    Symbol SMB_handler = new_Symbol(L"handler");
    // handler. 
    Send PSend906 = new_Send((Optr)self, SMB_handler, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend907 = new_Send((Optr)PSend906, SMB_escape_, 1, (Optr)VAR_anException_0_0);
    Array PThreadedCode905 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend906, (Optr)&t_push_variable, (Optr)VAR_anException_0_0, (Optr)&t_send1, (Optr)PSend907, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod903 = new_Method_with(PArray904, empty_Array, empty_Array, PThreadedCode905, 2, PSend907, self);
    
    MethodClosure MC_SMB_throw_ = new_MethodClosure((Method)PMethod903, HEADER(Kernel_Exception_Exception_Class));
    store_method(HEADER(Kernel_Exception_Exception_Class), SMB_throw_, MC_SMB_throw_);
}


static void init_class_SMB_handler() {
    Symbol SMB_handler = new_Symbol(L"handler");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Exception = new_Symbol(L"Runtime.Exception");
    Annotation PAnnotation910 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_handler, (Optr)SMB_Runtime_minus_Exception);
    Array PArray909 = new_Array_with(1, (Optr)PAnnotation910);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend912 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode911 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend912, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod908 = new_NativeMethod_with(empty_Array, empty_Array, PArray909, PThreadedCode911, 2, PSend912, self);
    
    MethodClosure MC_SMB_handler = new_MethodClosure((Method)PNativeMethod908, HEADER(Kernel_Exception_Exception_Class));
    store_method(HEADER(Kernel_Exception_Exception_Class), SMB_handler, MC_SMB_handler);
}


static void init_class_SMB_handler_() {
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    Variable VAR_handler_0_0 = new_Variable_named(L"handler", 0);
    Array PArray914 = new_Array_with(1, (Optr)VAR_handler_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_Exception = new_Symbol(L"Runtime.Exception");
    Annotation PAnnotation916 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_handler_, (Optr)SMB_Runtime_minus_Exception);
    Array PArray915 = new_Array_with(1, (Optr)PAnnotation916);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend918 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode917 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend918, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod913 = new_NativeMethod_with(PArray914, empty_Array, PArray915, PThreadedCode917, 2, PSend918, self);
    
    MethodClosure MC_SMB_handler_ = new_MethodClosure((Method)PNativeMethod913, HEADER(Kernel_Exception_Exception_Class));
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