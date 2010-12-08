#include <lib/class/Kernel/Number/Float.h>


Optr layout_Kernel_Number_Float_Class_class;


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray3965 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend3967 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend3968 = new_Send((Optr)PSend3967, SMB_not, 0);
    Array PThreadedCode3966 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send1, (Optr)PSend3967, (Optr)&t_send0, (Optr)PSend3968, (Optr)&t_method_return);
    Method PMethod3964 = new_Method_with(PArray3965, empty_Array, empty_Array, PThreadedCode3966, 1, PSend3968);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod3964, Float_Class);
    store_method(Float_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3970 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3972 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__divide_, (Optr)SMB_Number_minus_Float);
    Array PArray3971 = new_Array_with(1, (Optr)PAnnotation3972);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3974 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3973 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3974, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3969 = new_NativeMethod_with(PArray3970, empty_Array, PArray3971, PThreadedCode3973, 2, PSend3974, self);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PNativeMethod3969, Float_Class);
    store_method(Float_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB__lt_() {
    Symbol SMB__lt_ = new_Symbol(L"<");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3976 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3978 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__lt_, (Optr)SMB_Number_minus_Float);
    Array PArray3977 = new_Array_with(1, (Optr)PAnnotation3978);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3980 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3979 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3980, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3975 = new_NativeMethod_with(PArray3976, empty_Array, PArray3977, PThreadedCode3979, 2, PSend3980, self);
    
    MethodClosure MC_SMB__lt_ = new_MethodClosure((Method)PNativeMethod3975, Float_Class);
    store_method(Float_Class, SMB__lt_, MC_SMB__lt_);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray3982 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend3984 = new_Send((Optr)self, SMB_asString, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend3985 = new_Send((Optr)VAR_aStream_0_0, SMB_writeAll_, 1, (Optr)PSend3984);
    Array PThreadedCode3983 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3984, (Optr)&t_send1, (Optr)PSend3985, (Optr)&t_method_return);
    Method PMethod3981 = new_Method_with(PArray3982, empty_Array, empty_Array, PThreadedCode3983, 1, PSend3985);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod3981, Float_Class);
    store_method(Float_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3987 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3989 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__plus_, (Optr)SMB_Number_minus_Float);
    Array PArray3988 = new_Array_with(1, (Optr)PAnnotation3989);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3991 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3990 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3991, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3986 = new_NativeMethod_with(PArray3987, empty_Array, PArray3988, PThreadedCode3990, 2, PSend3991, self);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PNativeMethod3986, Float_Class);
    store_method(Float_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3993 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3995 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__minus_, (Optr)SMB_Number_minus_Float);
    Array PArray3994 = new_Array_with(1, (Optr)PAnnotation3995);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3997 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3996 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3997, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3992 = new_NativeMethod_with(PArray3993, empty_Array, PArray3994, PThreadedCode3996, 2, PSend3997, self);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PNativeMethod3992, Float_Class);
    store_method(Float_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB__modulo_() {
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3999 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4001 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__modulo_, (Optr)SMB_Number_minus_Float);
    Array PArray4000 = new_Array_with(1, (Optr)PAnnotation4001);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4003 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4002 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4003, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3998 = new_NativeMethod_with(PArray3999, empty_Array, PArray4000, PThreadedCode4002, 2, PSend4003, self);
    
    MethodClosure MC_SMB__modulo_ = new_MethodClosure((Method)PNativeMethod3998, Float_Class);
    store_method(Float_Class, SMB__modulo_, MC_SMB__modulo_);
}


static void init_SMB_asInteger() {
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4006 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asInteger, (Optr)SMB_Number_minus_Float);
    Array PArray4005 = new_Array_with(1, (Optr)PAnnotation4006);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4008 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4007 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4008, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4004 = new_NativeMethod_with(empty_Array, empty_Array, PArray4005, PThreadedCode4007, 2, PSend4008, self);
    
    MethodClosure MC_SMB_asInteger = new_MethodClosure((Method)PNativeMethod4004, Float_Class);
    store_method(Float_Class, SMB_asInteger, MC_SMB_asInteger);
}


static void init_SMB_floor() {
    Symbol SMB_floor = new_Symbol(L"floor");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4011 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_floor, (Optr)SMB_Number_minus_Float);
    Array PArray4010 = new_Array_with(1, (Optr)PAnnotation4011);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4013 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4012 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4013, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4009 = new_NativeMethod_with(empty_Array, empty_Array, PArray4010, PThreadedCode4012, 2, PSend4013, self);
    
    MethodClosure MC_SMB_floor = new_MethodClosure((Method)PNativeMethod4009, Float_Class);
    store_method(Float_Class, SMB_floor, MC_SMB_floor);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4015 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    // visitFloat:. 
    Send PSend4017 = new_Send((Optr)VAR_visitor_0_0, SMB_visitFloat_, 1, (Optr)self);
    Array PThreadedCode4016 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4017, (Optr)&t_method_return);
    Method PMethod4014 = new_Method_with(PArray4015, empty_Array, empty_Array, PThreadedCode4016, 1, PSend4017);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4014, Float_Class);
    store_method(Float_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB__quotient_() {
    Symbol SMB__quotient_ = new_Symbol(L"//");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4019 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4021 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__quotient_, (Optr)SMB_Number_minus_Float);
    Array PArray4020 = new_Array_with(1, (Optr)PAnnotation4021);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4023 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4022 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4023, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4018 = new_NativeMethod_with(PArray4019, empty_Array, PArray4020, PThreadedCode4022, 2, PSend4023, self);
    
    MethodClosure MC_SMB__quotient_ = new_MethodClosure((Method)PNativeMethod4018, Float_Class);
    store_method(Float_Class, SMB__quotient_, MC_SMB__quotient_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray4025 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend4027 = new_Send((Optr)self, SMB_asString, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend4028 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend4027);
    Array PThreadedCode4026 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4027, (Optr)&t_send1, (Optr)PSend4028, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4024 = new_Method_with(PArray4025, empty_Array, empty_Array, PThreadedCode4026, 2, PSend4028, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod4024, Float_Class);
    store_method(Float_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_roundTo_() {
    Symbol SMB_roundTo_ = new_Symbol(L"roundTo:");
    Variable VAR_quantum_0_0 = new_Variable_named(L"quantum", 0);
    Array PArray4030 = new_Array_with(1, (Optr)VAR_quantum_0_0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend4032 = new_Send((Optr)self, SMB__divide_, 1, (Optr)VAR_quantum_0_0);
    Symbol SMB_rounded = new_Symbol(L"rounded");
    // rounded. 
    Send PSend4033 = new_Send((Optr)PSend4032, SMB_rounded, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend4034 = new_Send((Optr)PSend4033, SMB__times_, 1, (Optr)VAR_quantum_0_0);
    Array PThreadedCode4031 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_quantum_0_0, (Optr)&t_send1, (Optr)PSend4032, (Optr)&t_send0, (Optr)PSend4033, (Optr)&t_push_variable, (Optr)VAR_quantum_0_0, (Optr)&t_send1, (Optr)PSend4034, (Optr)&t_method_return);
    Method PMethod4029 = new_Method_with(PArray4030, empty_Array, empty_Array, PThreadedCode4031, 1, PSend4034);
    
    MethodClosure MC_SMB_roundTo_ = new_MethodClosure((Method)PMethod4029, Float_Class);
    store_method(Float_Class, SMB_roundTo_, MC_SMB_roundTo_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4037 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asString, (Optr)SMB_Number_minus_Float);
    Array PArray4036 = new_Array_with(1, (Optr)PAnnotation4037);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4039 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4038 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4039, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4035 = new_NativeMethod_with(empty_Array, empty_Array, PArray4036, PThreadedCode4038, 2, PSend4039, self);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PNativeMethod4035, Float_Class);
    store_method(Float_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_squared() {
    Symbol SMB_squared = new_Symbol(L"squared");
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend4042 = new_Send((Optr)self, SMB__times_, 1, (Optr)self);
    Array PThreadedCode4041 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4042, (Optr)&t_method_return);
    Method PMethod4040 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4041, 1, PSend4042);
    
    MethodClosure MC_SMB_squared = new_MethodClosure((Method)PMethod4040, Float_Class);
    store_method(Float_Class, SMB_squared, MC_SMB_squared);
}


static void init_SMB__gt_() {
    Symbol SMB__gt_ = new_Symbol(L">");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4044 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4046 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__gt_, (Optr)SMB_Number_minus_Float);
    Array PArray4045 = new_Array_with(1, (Optr)PAnnotation4046);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4048 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4047 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4048, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4043 = new_NativeMethod_with(PArray4044, empty_Array, PArray4045, PThreadedCode4047, 2, PSend4048, self);
    
    MethodClosure MC_SMB__gt_ = new_MethodClosure((Method)PNativeMethod4043, Float_Class);
    store_method(Float_Class, SMB__gt_, MC_SMB__gt_);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4051 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_hash, (Optr)SMB_Number_minus_Float);
    Array PArray4050 = new_Array_with(1, (Optr)PAnnotation4051);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4053 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4052 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4053, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4049 = new_NativeMethod_with(empty_Array, empty_Array, PArray4050, PThreadedCode4052, 2, PSend4053, self);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PNativeMethod4049, Float_Class);
    store_method(Float_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_ceil() {
    Symbol SMB_ceil = new_Symbol(L"ceil");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4056 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_ceil, (Optr)SMB_Number_minus_Float);
    Array PArray4055 = new_Array_with(1, (Optr)PAnnotation4056);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4058 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4057 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4058, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4054 = new_NativeMethod_with(empty_Array, empty_Array, PArray4055, PThreadedCode4057, 2, PSend4058, self);
    
    MethodClosure MC_SMB_ceil = new_MethodClosure((Method)PNativeMethod4054, Float_Class);
    store_method(Float_Class, SMB_ceil, MC_SMB_ceil);
}


static void init_SMB_sqrt() {
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4061 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sqrt, (Optr)SMB_Number_minus_Float);
    Array PArray4060 = new_Array_with(1, (Optr)PAnnotation4061);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4063 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4062 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4063, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4059 = new_NativeMethod_with(empty_Array, empty_Array, PArray4060, PThreadedCode4062, 2, PSend4063, self);
    
    MethodClosure MC_SMB_sqrt = new_MethodClosure((Method)PNativeMethod4059, Float_Class);
    store_method(Float_Class, SMB_sqrt, MC_SMB_sqrt);
}


static void init_SMB_log() {
    Symbol SMB_log = new_Symbol(L"log");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4066 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_log, (Optr)SMB_Number_minus_Float);
    Array PArray4065 = new_Array_with(1, (Optr)PAnnotation4066);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4068 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4067 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4068, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4064 = new_NativeMethod_with(empty_Array, empty_Array, PArray4065, PThreadedCode4067, 2, PSend4068, self);
    
    MethodClosure MC_SMB_log = new_MethodClosure((Method)PNativeMethod4064, Float_Class);
    store_method(Float_Class, SMB_log, MC_SMB_log);
}


static void init_SMB__gt__equals_() {
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray4070 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend4072 = new_Send((Optr)self, SMB__lt_, 1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend4073 = new_Send((Optr)PSend4072, SMB_not, 0);
    Array PThreadedCode4071 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send1, (Optr)PSend4072, (Optr)&t_send0, (Optr)PSend4073, (Optr)&t_method_return);
    Method PMethod4069 = new_Method_with(PArray4070, empty_Array, empty_Array, PThreadedCode4071, 1, PSend4073);
    
    MethodClosure MC_SMB__gt__equals_ = new_MethodClosure((Method)PMethod4069, Float_Class);
    store_method(Float_Class, SMB__gt__equals_, MC_SMB__gt__equals_);
}


static void init_SMB_raisedTo_() {
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray4075 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4077 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_raisedTo_, (Optr)SMB_Number_minus_Float);
    Array PArray4076 = new_Array_with(1, (Optr)PAnnotation4077);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4079 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4078 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4079, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4074 = new_NativeMethod_with(PArray4075, empty_Array, PArray4076, PThreadedCode4078, 2, PSend4079, self);
    
    MethodClosure MC_SMB_raisedTo_ = new_MethodClosure((Method)PNativeMethod4074, Float_Class);
    store_method(Float_Class, SMB_raisedTo_, MC_SMB_raisedTo_);
}


static void init_SMB_asFloat() {
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    Array PThreadedCode4081 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod4080 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4081, 1, self);
    
    MethodClosure MC_SMB_asFloat = new_MethodClosure((Method)PMethod4080, Float_Class);
    store_method(Float_Class, SMB_asFloat, MC_SMB_asFloat);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4083 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4085 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__equals_, (Optr)SMB_Number_minus_Float);
    Array PArray4084 = new_Array_with(1, (Optr)PAnnotation4085);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4087 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4086 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4087, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4082 = new_NativeMethod_with(PArray4083, empty_Array, PArray4084, PThreadedCode4086, 2, PSend4087, self);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PNativeMethod4082, Float_Class);
    store_method(Float_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4089 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4091 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__times_, (Optr)SMB_Number_minus_Float);
    Array PArray4090 = new_Array_with(1, (Optr)PAnnotation4091);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4093 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4092 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4093, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4088 = new_NativeMethod_with(PArray4089, empty_Array, PArray4090, PThreadedCode4092, 2, PSend4093, self);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PNativeMethod4088, Float_Class);
    store_method(Float_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB_rounded() {
    Symbol SMB_rounded = new_Symbol(L"rounded");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4096 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_rounded, (Optr)SMB_Number_minus_Float);
    Array PArray4095 = new_Array_with(1, (Optr)PAnnotation4096);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4098 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4097 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4098, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4094 = new_NativeMethod_with(empty_Array, empty_Array, PArray4095, PThreadedCode4097, 2, PSend4098, self);
    
    MethodClosure MC_SMB_rounded = new_MethodClosure((Method)PNativeMethod4094, Float_Class);
    store_method(Float_Class, SMB_rounded, MC_SMB_rounded);
}


static void init_SMB__notEquals_() {
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4100 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4102 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__notEquals_, (Optr)SMB_Number_minus_Float);
    Array PArray4101 = new_Array_with(1, (Optr)PAnnotation4102);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4104 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4103 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4104, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4099 = new_NativeMethod_with(PArray4100, empty_Array, PArray4101, PThreadedCode4103, 2, PSend4104, self);
    
    MethodClosure MC_SMB__notEquals_ = new_MethodClosure((Method)PNativeMethod4099, Float_Class);
    store_method(Float_Class, SMB__notEquals_, MC_SMB__notEquals_);
}

void init_Kernel_Number_Float_layout() {
    layout_Kernel_Number_Float_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Number_Float_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Number_Float_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Number_Float_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Number_Float_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Number_Float_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Float = new_Symbol(L"Float");
    Float_Class = (Class)new_Class(Object_Class, layout_Kernel_Number_Float_Class_class);
    Class_set_superclass(Float_Class, Object_Class);
    HEADER(Float_Class)->layout = layout_Kernel_Number_Float_Class_class;
    Float_Class->name = SMB_Float;
    
}

void init_Kernel_Number_Float_methods() {
    init_SMB__lt__equals_();
    init_SMB__divide_();
    init_SMB__lt_();
    init_SMB_putOn_();
    init_SMB__plus_();
    init_SMB__minus_();
    init_SMB__modulo_();
    init_SMB_asInteger();
    init_SMB_floor();
    init_SMB_accept_();
    init_SMB__quotient_();
    init_SMB_printOn_();
    init_SMB_roundTo_();
    init_SMB_asString();
    init_SMB_squared();
    init_SMB__gt_();
    init_SMB_hash();
    init_SMB_ceil();
    init_SMB_sqrt();
    init_SMB_log();
    init_SMB__gt__equals_();
    init_SMB_raisedTo_();
    init_SMB_asFloat();
    init_SMB__equals_();
    init_SMB__times_();
    init_SMB_rounded();
    init_SMB__notEquals_();
    
}