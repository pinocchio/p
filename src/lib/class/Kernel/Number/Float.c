#include <lib/class/Kernel/Number/Float.h>


Optr layout_Kernel_Number_Float_Class_class;


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray3962 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend3964 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend3965 = new_Send((Optr)PSend3964, SMB_not, 0);
    Array PThreadedCode3963 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send1, (Optr)PSend3964, (Optr)&t_send0, (Optr)PSend3965, (Optr)&t_method_return);
    Method PMethod3961 = new_Method_with(PArray3962, empty_Array, empty_Array, PThreadedCode3963, 1, PSend3965);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod3961, Float_Class);
    store_method(Float_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3967 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3969 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__divide_, (Optr)SMB_Number_minus_Float);
    Array PArray3968 = new_Array_with(1, (Optr)PAnnotation3969);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3971 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3970 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3971, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3966 = new_NativeMethod_with(PArray3967, empty_Array, PArray3968, PThreadedCode3970, 2, PSend3971, self);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PNativeMethod3966, Float_Class);
    store_method(Float_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB__lt_() {
    Symbol SMB__lt_ = new_Symbol(L"<");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3973 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3975 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__lt_, (Optr)SMB_Number_minus_Float);
    Array PArray3974 = new_Array_with(1, (Optr)PAnnotation3975);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3977 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3976 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3977, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3972 = new_NativeMethod_with(PArray3973, empty_Array, PArray3974, PThreadedCode3976, 2, PSend3977, self);
    
    MethodClosure MC_SMB__lt_ = new_MethodClosure((Method)PNativeMethod3972, Float_Class);
    store_method(Float_Class, SMB__lt_, MC_SMB__lt_);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray3979 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend3981 = new_Send((Optr)self, SMB_asString, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend3982 = new_Send((Optr)VAR_aStream_0_0, SMB_writeAll_, 1, (Optr)PSend3981);
    Array PThreadedCode3980 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3981, (Optr)&t_send1, (Optr)PSend3982, (Optr)&t_method_return);
    Method PMethod3978 = new_Method_with(PArray3979, empty_Array, empty_Array, PThreadedCode3980, 1, PSend3982);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod3978, Float_Class);
    store_method(Float_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3984 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3986 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__plus_, (Optr)SMB_Number_minus_Float);
    Array PArray3985 = new_Array_with(1, (Optr)PAnnotation3986);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3988 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3987 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3988, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3983 = new_NativeMethod_with(PArray3984, empty_Array, PArray3985, PThreadedCode3987, 2, PSend3988, self);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PNativeMethod3983, Float_Class);
    store_method(Float_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3990 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3992 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__minus_, (Optr)SMB_Number_minus_Float);
    Array PArray3991 = new_Array_with(1, (Optr)PAnnotation3992);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3994 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3993 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3994, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3989 = new_NativeMethod_with(PArray3990, empty_Array, PArray3991, PThreadedCode3993, 2, PSend3994, self);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PNativeMethod3989, Float_Class);
    store_method(Float_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB__modulo_() {
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3996 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3998 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__modulo_, (Optr)SMB_Number_minus_Float);
    Array PArray3997 = new_Array_with(1, (Optr)PAnnotation3998);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4000 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3999 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4000, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3995 = new_NativeMethod_with(PArray3996, empty_Array, PArray3997, PThreadedCode3999, 2, PSend4000, self);
    
    MethodClosure MC_SMB__modulo_ = new_MethodClosure((Method)PNativeMethod3995, Float_Class);
    store_method(Float_Class, SMB__modulo_, MC_SMB__modulo_);
}


static void init_SMB_asInteger() {
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4003 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asInteger, (Optr)SMB_Number_minus_Float);
    Array PArray4002 = new_Array_with(1, (Optr)PAnnotation4003);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4005 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4004 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4005, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4001 = new_NativeMethod_with(empty_Array, empty_Array, PArray4002, PThreadedCode4004, 2, PSend4005, self);
    
    MethodClosure MC_SMB_asInteger = new_MethodClosure((Method)PNativeMethod4001, Float_Class);
    store_method(Float_Class, SMB_asInteger, MC_SMB_asInteger);
}


static void init_SMB_floor() {
    Symbol SMB_floor = new_Symbol(L"floor");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4008 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_floor, (Optr)SMB_Number_minus_Float);
    Array PArray4007 = new_Array_with(1, (Optr)PAnnotation4008);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4010 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4009 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4010, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4006 = new_NativeMethod_with(empty_Array, empty_Array, PArray4007, PThreadedCode4009, 2, PSend4010, self);
    
    MethodClosure MC_SMB_floor = new_MethodClosure((Method)PNativeMethod4006, Float_Class);
    store_method(Float_Class, SMB_floor, MC_SMB_floor);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4012 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    // visitFloat:. 
    Send PSend4014 = new_Send((Optr)VAR_visitor_0_0, SMB_visitFloat_, 1, (Optr)self);
    Array PThreadedCode4013 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4014, (Optr)&t_method_return);
    Method PMethod4011 = new_Method_with(PArray4012, empty_Array, empty_Array, PThreadedCode4013, 1, PSend4014);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4011, Float_Class);
    store_method(Float_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB__quotient_() {
    Symbol SMB__quotient_ = new_Symbol(L"//");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4016 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4018 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__quotient_, (Optr)SMB_Number_minus_Float);
    Array PArray4017 = new_Array_with(1, (Optr)PAnnotation4018);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4020 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4019 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4020, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4015 = new_NativeMethod_with(PArray4016, empty_Array, PArray4017, PThreadedCode4019, 2, PSend4020, self);
    
    MethodClosure MC_SMB__quotient_ = new_MethodClosure((Method)PNativeMethod4015, Float_Class);
    store_method(Float_Class, SMB__quotient_, MC_SMB__quotient_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray4022 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend4024 = new_Send((Optr)self, SMB_asString, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend4025 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend4024);
    Array PThreadedCode4023 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4024, (Optr)&t_send1, (Optr)PSend4025, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4021 = new_Method_with(PArray4022, empty_Array, empty_Array, PThreadedCode4023, 2, PSend4025, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod4021, Float_Class);
    store_method(Float_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_roundTo_() {
    Symbol SMB_roundTo_ = new_Symbol(L"roundTo:");
    Variable VAR_quantum_0_0 = new_Variable_named(L"quantum", 0);
    Array PArray4027 = new_Array_with(1, (Optr)VAR_quantum_0_0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend4029 = new_Send((Optr)self, SMB__divide_, 1, (Optr)VAR_quantum_0_0);
    Symbol SMB_rounded = new_Symbol(L"rounded");
    // rounded. 
    Send PSend4030 = new_Send((Optr)PSend4029, SMB_rounded, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend4031 = new_Send((Optr)PSend4030, SMB__times_, 1, (Optr)VAR_quantum_0_0);
    Array PThreadedCode4028 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_quantum_0_0, (Optr)&t_send1, (Optr)PSend4029, (Optr)&t_send0, (Optr)PSend4030, (Optr)&t_push_variable, (Optr)VAR_quantum_0_0, (Optr)&t_send1, (Optr)PSend4031, (Optr)&t_method_return);
    Method PMethod4026 = new_Method_with(PArray4027, empty_Array, empty_Array, PThreadedCode4028, 1, PSend4031);
    
    MethodClosure MC_SMB_roundTo_ = new_MethodClosure((Method)PMethod4026, Float_Class);
    store_method(Float_Class, SMB_roundTo_, MC_SMB_roundTo_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4034 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asString, (Optr)SMB_Number_minus_Float);
    Array PArray4033 = new_Array_with(1, (Optr)PAnnotation4034);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4036 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4035 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4036, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4032 = new_NativeMethod_with(empty_Array, empty_Array, PArray4033, PThreadedCode4035, 2, PSend4036, self);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PNativeMethod4032, Float_Class);
    store_method(Float_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_squared() {
    Symbol SMB_squared = new_Symbol(L"squared");
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend4039 = new_Send((Optr)self, SMB__times_, 1, (Optr)self);
    Array PThreadedCode4038 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4039, (Optr)&t_method_return);
    Method PMethod4037 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4038, 1, PSend4039);
    
    MethodClosure MC_SMB_squared = new_MethodClosure((Method)PMethod4037, Float_Class);
    store_method(Float_Class, SMB_squared, MC_SMB_squared);
}


static void init_SMB__gt_() {
    Symbol SMB__gt_ = new_Symbol(L">");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4041 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4043 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__gt_, (Optr)SMB_Number_minus_Float);
    Array PArray4042 = new_Array_with(1, (Optr)PAnnotation4043);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4045 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4044 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4045, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4040 = new_NativeMethod_with(PArray4041, empty_Array, PArray4042, PThreadedCode4044, 2, PSend4045, self);
    
    MethodClosure MC_SMB__gt_ = new_MethodClosure((Method)PNativeMethod4040, Float_Class);
    store_method(Float_Class, SMB__gt_, MC_SMB__gt_);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4048 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_hash, (Optr)SMB_Number_minus_Float);
    Array PArray4047 = new_Array_with(1, (Optr)PAnnotation4048);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4050 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4049 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4050, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4046 = new_NativeMethod_with(empty_Array, empty_Array, PArray4047, PThreadedCode4049, 2, PSend4050, self);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PNativeMethod4046, Float_Class);
    store_method(Float_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_ceil() {
    Symbol SMB_ceil = new_Symbol(L"ceil");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4053 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_ceil, (Optr)SMB_Number_minus_Float);
    Array PArray4052 = new_Array_with(1, (Optr)PAnnotation4053);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4055 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4054 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4055, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4051 = new_NativeMethod_with(empty_Array, empty_Array, PArray4052, PThreadedCode4054, 2, PSend4055, self);
    
    MethodClosure MC_SMB_ceil = new_MethodClosure((Method)PNativeMethod4051, Float_Class);
    store_method(Float_Class, SMB_ceil, MC_SMB_ceil);
}


static void init_SMB_sqrt() {
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4058 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sqrt, (Optr)SMB_Number_minus_Float);
    Array PArray4057 = new_Array_with(1, (Optr)PAnnotation4058);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4060 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4059 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4060, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4056 = new_NativeMethod_with(empty_Array, empty_Array, PArray4057, PThreadedCode4059, 2, PSend4060, self);
    
    MethodClosure MC_SMB_sqrt = new_MethodClosure((Method)PNativeMethod4056, Float_Class);
    store_method(Float_Class, SMB_sqrt, MC_SMB_sqrt);
}


static void init_SMB_log() {
    Symbol SMB_log = new_Symbol(L"log");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4063 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_log, (Optr)SMB_Number_minus_Float);
    Array PArray4062 = new_Array_with(1, (Optr)PAnnotation4063);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4065 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4064 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4065, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4061 = new_NativeMethod_with(empty_Array, empty_Array, PArray4062, PThreadedCode4064, 2, PSend4065, self);
    
    MethodClosure MC_SMB_log = new_MethodClosure((Method)PNativeMethod4061, Float_Class);
    store_method(Float_Class, SMB_log, MC_SMB_log);
}


static void init_SMB__gt__equals_() {
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray4067 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend4069 = new_Send((Optr)self, SMB__lt_, 1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend4070 = new_Send((Optr)PSend4069, SMB_not, 0);
    Array PThreadedCode4068 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send1, (Optr)PSend4069, (Optr)&t_send0, (Optr)PSend4070, (Optr)&t_method_return);
    Method PMethod4066 = new_Method_with(PArray4067, empty_Array, empty_Array, PThreadedCode4068, 1, PSend4070);
    
    MethodClosure MC_SMB__gt__equals_ = new_MethodClosure((Method)PMethod4066, Float_Class);
    store_method(Float_Class, SMB__gt__equals_, MC_SMB__gt__equals_);
}


static void init_SMB_raisedTo_() {
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray4072 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4074 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_raisedTo_, (Optr)SMB_Number_minus_Float);
    Array PArray4073 = new_Array_with(1, (Optr)PAnnotation4074);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4076 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4075 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4076, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4071 = new_NativeMethod_with(PArray4072, empty_Array, PArray4073, PThreadedCode4075, 2, PSend4076, self);
    
    MethodClosure MC_SMB_raisedTo_ = new_MethodClosure((Method)PNativeMethod4071, Float_Class);
    store_method(Float_Class, SMB_raisedTo_, MC_SMB_raisedTo_);
}


static void init_SMB_asFloat() {
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    Array PThreadedCode4078 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod4077 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4078, 1, self);
    
    MethodClosure MC_SMB_asFloat = new_MethodClosure((Method)PMethod4077, Float_Class);
    store_method(Float_Class, SMB_asFloat, MC_SMB_asFloat);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4080 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4082 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__equals_, (Optr)SMB_Number_minus_Float);
    Array PArray4081 = new_Array_with(1, (Optr)PAnnotation4082);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4084 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4083 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4084, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4079 = new_NativeMethod_with(PArray4080, empty_Array, PArray4081, PThreadedCode4083, 2, PSend4084, self);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PNativeMethod4079, Float_Class);
    store_method(Float_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4086 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4088 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__times_, (Optr)SMB_Number_minus_Float);
    Array PArray4087 = new_Array_with(1, (Optr)PAnnotation4088);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4090 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4089 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4090, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4085 = new_NativeMethod_with(PArray4086, empty_Array, PArray4087, PThreadedCode4089, 2, PSend4090, self);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PNativeMethod4085, Float_Class);
    store_method(Float_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB_rounded() {
    Symbol SMB_rounded = new_Symbol(L"rounded");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4093 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_rounded, (Optr)SMB_Number_minus_Float);
    Array PArray4092 = new_Array_with(1, (Optr)PAnnotation4093);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4095 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4094 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4095, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4091 = new_NativeMethod_with(empty_Array, empty_Array, PArray4092, PThreadedCode4094, 2, PSend4095, self);
    
    MethodClosure MC_SMB_rounded = new_MethodClosure((Method)PNativeMethod4091, Float_Class);
    store_method(Float_Class, SMB_rounded, MC_SMB_rounded);
}


static void init_SMB__notEquals_() {
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4097 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4099 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__notEquals_, (Optr)SMB_Number_minus_Float);
    Array PArray4098 = new_Array_with(1, (Optr)PAnnotation4099);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4101 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4100 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4101, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4096 = new_NativeMethod_with(PArray4097, empty_Array, PArray4098, PThreadedCode4100, 2, PSend4101, self);
    
    MethodClosure MC_SMB__notEquals_ = new_MethodClosure((Method)PNativeMethod4096, Float_Class);
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