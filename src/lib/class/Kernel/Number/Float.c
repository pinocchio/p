#include <lib/class/Kernel/Number/Float.h>


Optr layout_Kernel_Number_Float_Class_class;


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray3963 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend3965 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend3966 = new_Send((Optr)PSend3965, SMB_not, 0);
    Array PThreadedCode3964 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send1, (Optr)PSend3965, (Optr)&t_send0, (Optr)PSend3966, (Optr)&t_method_return);
    Method PMethod3962 = new_Method_with(PArray3963, empty_Array, empty_Array, PThreadedCode3964, 1, PSend3966);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod3962, Float_Class);
    store_method(Float_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3968 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3970 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__divide_, (Optr)SMB_Number_minus_Float);
    Array PArray3969 = new_Array_with(1, (Optr)PAnnotation3970);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3972 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3971 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3972, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3967 = new_NativeMethod_with(PArray3968, empty_Array, PArray3969, PThreadedCode3971, 2, PSend3972, self);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PNativeMethod3967, Float_Class);
    store_method(Float_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB__lt_() {
    Symbol SMB__lt_ = new_Symbol(L"<");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3974 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3976 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__lt_, (Optr)SMB_Number_minus_Float);
    Array PArray3975 = new_Array_with(1, (Optr)PAnnotation3976);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3978 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3977 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3978, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3973 = new_NativeMethod_with(PArray3974, empty_Array, PArray3975, PThreadedCode3977, 2, PSend3978, self);
    
    MethodClosure MC_SMB__lt_ = new_MethodClosure((Method)PNativeMethod3973, Float_Class);
    store_method(Float_Class, SMB__lt_, MC_SMB__lt_);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray3980 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend3982 = new_Send((Optr)self, SMB_asString, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend3983 = new_Send((Optr)VAR_aStream_0_0, SMB_writeAll_, 1, (Optr)PSend3982);
    Array PThreadedCode3981 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3982, (Optr)&t_send1, (Optr)PSend3983, (Optr)&t_method_return);
    Method PMethod3979 = new_Method_with(PArray3980, empty_Array, empty_Array, PThreadedCode3981, 1, PSend3983);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod3979, Float_Class);
    store_method(Float_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3985 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3987 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__plus_, (Optr)SMB_Number_minus_Float);
    Array PArray3986 = new_Array_with(1, (Optr)PAnnotation3987);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3989 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3988 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3989, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3984 = new_NativeMethod_with(PArray3985, empty_Array, PArray3986, PThreadedCode3988, 2, PSend3989, self);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PNativeMethod3984, Float_Class);
    store_method(Float_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3991 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3993 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__minus_, (Optr)SMB_Number_minus_Float);
    Array PArray3992 = new_Array_with(1, (Optr)PAnnotation3993);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3995 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3994 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3995, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3990 = new_NativeMethod_with(PArray3991, empty_Array, PArray3992, PThreadedCode3994, 2, PSend3995, self);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PNativeMethod3990, Float_Class);
    store_method(Float_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB__modulo_() {
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3997 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation3999 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__modulo_, (Optr)SMB_Number_minus_Float);
    Array PArray3998 = new_Array_with(1, (Optr)PAnnotation3999);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4001 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4000 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4001, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3996 = new_NativeMethod_with(PArray3997, empty_Array, PArray3998, PThreadedCode4000, 2, PSend4001, self);
    
    MethodClosure MC_SMB__modulo_ = new_MethodClosure((Method)PNativeMethod3996, Float_Class);
    store_method(Float_Class, SMB__modulo_, MC_SMB__modulo_);
}


static void init_SMB_asInteger() {
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4004 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asInteger, (Optr)SMB_Number_minus_Float);
    Array PArray4003 = new_Array_with(1, (Optr)PAnnotation4004);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4006 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4005 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4006, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4002 = new_NativeMethod_with(empty_Array, empty_Array, PArray4003, PThreadedCode4005, 2, PSend4006, self);
    
    MethodClosure MC_SMB_asInteger = new_MethodClosure((Method)PNativeMethod4002, Float_Class);
    store_method(Float_Class, SMB_asInteger, MC_SMB_asInteger);
}


static void init_SMB_floor() {
    Symbol SMB_floor = new_Symbol(L"floor");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4009 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_floor, (Optr)SMB_Number_minus_Float);
    Array PArray4008 = new_Array_with(1, (Optr)PAnnotation4009);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4011 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4010 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4011, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4007 = new_NativeMethod_with(empty_Array, empty_Array, PArray4008, PThreadedCode4010, 2, PSend4011, self);
    
    MethodClosure MC_SMB_floor = new_MethodClosure((Method)PNativeMethod4007, Float_Class);
    store_method(Float_Class, SMB_floor, MC_SMB_floor);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4013 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    // visitFloat:. 
    Send PSend4015 = new_Send((Optr)VAR_visitor_0_0, SMB_visitFloat_, 1, (Optr)self);
    Array PThreadedCode4014 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4015, (Optr)&t_method_return);
    Method PMethod4012 = new_Method_with(PArray4013, empty_Array, empty_Array, PThreadedCode4014, 1, PSend4015);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4012, Float_Class);
    store_method(Float_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB__quotient_() {
    Symbol SMB__quotient_ = new_Symbol(L"//");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4017 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4019 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__quotient_, (Optr)SMB_Number_minus_Float);
    Array PArray4018 = new_Array_with(1, (Optr)PAnnotation4019);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4021 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4020 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4021, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4016 = new_NativeMethod_with(PArray4017, empty_Array, PArray4018, PThreadedCode4020, 2, PSend4021, self);
    
    MethodClosure MC_SMB__quotient_ = new_MethodClosure((Method)PNativeMethod4016, Float_Class);
    store_method(Float_Class, SMB__quotient_, MC_SMB__quotient_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray4023 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend4025 = new_Send((Optr)self, SMB_asString, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend4026 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend4025);
    Array PThreadedCode4024 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4025, (Optr)&t_send1, (Optr)PSend4026, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4022 = new_Method_with(PArray4023, empty_Array, empty_Array, PThreadedCode4024, 2, PSend4026, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod4022, Float_Class);
    store_method(Float_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_ceil() {
    Symbol SMB_ceil = new_Symbol(L"ceil");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4029 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_ceil, (Optr)SMB_Number_minus_Float);
    Array PArray4028 = new_Array_with(1, (Optr)PAnnotation4029);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4031 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4030 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4031, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4027 = new_NativeMethod_with(empty_Array, empty_Array, PArray4028, PThreadedCode4030, 2, PSend4031, self);
    
    MethodClosure MC_SMB_ceil = new_MethodClosure((Method)PNativeMethod4027, Float_Class);
    store_method(Float_Class, SMB_ceil, MC_SMB_ceil);
}


static void init_SMB_roundTo_() {
    Symbol SMB_roundTo_ = new_Symbol(L"roundTo:");
    Variable VAR_quantum_0_0 = new_Variable_named(L"quantum", 0);
    Array PArray4033 = new_Array_with(1, (Optr)VAR_quantum_0_0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend4035 = new_Send((Optr)self, SMB__divide_, 1, (Optr)VAR_quantum_0_0);
    Symbol SMB_rounded = new_Symbol(L"rounded");
    // rounded. 
    Send PSend4036 = new_Send((Optr)PSend4035, SMB_rounded, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend4037 = new_Send((Optr)PSend4036, SMB__times_, 1, (Optr)VAR_quantum_0_0);
    Array PThreadedCode4034 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_quantum_0_0, (Optr)&t_send1, (Optr)PSend4035, (Optr)&t_send0, (Optr)PSend4036, (Optr)&t_push_variable, (Optr)VAR_quantum_0_0, (Optr)&t_send1, (Optr)PSend4037, (Optr)&t_method_return);
    Method PMethod4032 = new_Method_with(PArray4033, empty_Array, empty_Array, PThreadedCode4034, 1, PSend4037);
    
    MethodClosure MC_SMB_roundTo_ = new_MethodClosure((Method)PMethod4032, Float_Class);
    store_method(Float_Class, SMB_roundTo_, MC_SMB_roundTo_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4040 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asString, (Optr)SMB_Number_minus_Float);
    Array PArray4039 = new_Array_with(1, (Optr)PAnnotation4040);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4042 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4041 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4042, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4038 = new_NativeMethod_with(empty_Array, empty_Array, PArray4039, PThreadedCode4041, 2, PSend4042, self);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PNativeMethod4038, Float_Class);
    store_method(Float_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_squared() {
    Symbol SMB_squared = new_Symbol(L"squared");
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend4045 = new_Send((Optr)self, SMB__times_, 1, (Optr)self);
    Array PThreadedCode4044 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4045, (Optr)&t_method_return);
    Method PMethod4043 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4044, 1, PSend4045);
    
    MethodClosure MC_SMB_squared = new_MethodClosure((Method)PMethod4043, Float_Class);
    store_method(Float_Class, SMB_squared, MC_SMB_squared);
}


static void init_SMB__gt_() {
    Symbol SMB__gt_ = new_Symbol(L">");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4047 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4049 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__gt_, (Optr)SMB_Number_minus_Float);
    Array PArray4048 = new_Array_with(1, (Optr)PAnnotation4049);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4051 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4050 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4051, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4046 = new_NativeMethod_with(PArray4047, empty_Array, PArray4048, PThreadedCode4050, 2, PSend4051, self);
    
    MethodClosure MC_SMB__gt_ = new_MethodClosure((Method)PNativeMethod4046, Float_Class);
    store_method(Float_Class, SMB__gt_, MC_SMB__gt_);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4054 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_hash, (Optr)SMB_Number_minus_Float);
    Array PArray4053 = new_Array_with(1, (Optr)PAnnotation4054);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4056 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4055 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4056, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4052 = new_NativeMethod_with(empty_Array, empty_Array, PArray4053, PThreadedCode4055, 2, PSend4056, self);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PNativeMethod4052, Float_Class);
    store_method(Float_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_sqrt() {
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4059 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_sqrt, (Optr)SMB_Number_minus_Float);
    Array PArray4058 = new_Array_with(1, (Optr)PAnnotation4059);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4061 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4060 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4061, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4057 = new_NativeMethod_with(empty_Array, empty_Array, PArray4058, PThreadedCode4060, 2, PSend4061, self);
    
    MethodClosure MC_SMB_sqrt = new_MethodClosure((Method)PNativeMethod4057, Float_Class);
    store_method(Float_Class, SMB_sqrt, MC_SMB_sqrt);
}


static void init_SMB_log() {
    Symbol SMB_log = new_Symbol(L"log");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4064 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_log, (Optr)SMB_Number_minus_Float);
    Array PArray4063 = new_Array_with(1, (Optr)PAnnotation4064);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4066 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4065 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4066, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4062 = new_NativeMethod_with(empty_Array, empty_Array, PArray4063, PThreadedCode4065, 2, PSend4066, self);
    
    MethodClosure MC_SMB_log = new_MethodClosure((Method)PNativeMethod4062, Float_Class);
    store_method(Float_Class, SMB_log, MC_SMB_log);
}


static void init_SMB__gt__equals_() {
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray4068 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend4070 = new_Send((Optr)self, SMB__lt_, 1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend4071 = new_Send((Optr)PSend4070, SMB_not, 0);
    Array PThreadedCode4069 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send1, (Optr)PSend4070, (Optr)&t_send0, (Optr)PSend4071, (Optr)&t_method_return);
    Method PMethod4067 = new_Method_with(PArray4068, empty_Array, empty_Array, PThreadedCode4069, 1, PSend4071);
    
    MethodClosure MC_SMB__gt__equals_ = new_MethodClosure((Method)PMethod4067, Float_Class);
    store_method(Float_Class, SMB__gt__equals_, MC_SMB__gt__equals_);
}


static void init_SMB_raisedTo_() {
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray4073 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4075 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_raisedTo_, (Optr)SMB_Number_minus_Float);
    Array PArray4074 = new_Array_with(1, (Optr)PAnnotation4075);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4077 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4076 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4077, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4072 = new_NativeMethod_with(PArray4073, empty_Array, PArray4074, PThreadedCode4076, 2, PSend4077, self);
    
    MethodClosure MC_SMB_raisedTo_ = new_MethodClosure((Method)PNativeMethod4072, Float_Class);
    store_method(Float_Class, SMB_raisedTo_, MC_SMB_raisedTo_);
}


static void init_SMB_asFloat() {
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    Array PThreadedCode4079 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod4078 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4079, 1, self);
    
    MethodClosure MC_SMB_asFloat = new_MethodClosure((Method)PMethod4078, Float_Class);
    store_method(Float_Class, SMB_asFloat, MC_SMB_asFloat);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4081 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4083 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__equals_, (Optr)SMB_Number_minus_Float);
    Array PArray4082 = new_Array_with(1, (Optr)PAnnotation4083);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4085 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4084 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4085, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4080 = new_NativeMethod_with(PArray4081, empty_Array, PArray4082, PThreadedCode4084, 2, PSend4085, self);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PNativeMethod4080, Float_Class);
    store_method(Float_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4087 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4089 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__times_, (Optr)SMB_Number_minus_Float);
    Array PArray4088 = new_Array_with(1, (Optr)PAnnotation4089);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4091 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4090 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4091, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4086 = new_NativeMethod_with(PArray4087, empty_Array, PArray4088, PThreadedCode4090, 2, PSend4091, self);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PNativeMethod4086, Float_Class);
    store_method(Float_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB_rounded() {
    Symbol SMB_rounded = new_Symbol(L"rounded");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4094 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_rounded, (Optr)SMB_Number_minus_Float);
    Array PArray4093 = new_Array_with(1, (Optr)PAnnotation4094);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4096 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4095 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4096, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4092 = new_NativeMethod_with(empty_Array, empty_Array, PArray4093, PThreadedCode4095, 2, PSend4096, self);
    
    MethodClosure MC_SMB_rounded = new_MethodClosure((Method)PNativeMethod4092, Float_Class);
    store_method(Float_Class, SMB_rounded, MC_SMB_rounded);
}


static void init_SMB__notEquals_() {
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray4098 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_Float = new_Symbol(L"Number.Float");
    Annotation PAnnotation4100 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__notEquals_, (Optr)SMB_Number_minus_Float);
    Array PArray4099 = new_Array_with(1, (Optr)PAnnotation4100);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend4102 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode4101 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4102, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4097 = new_NativeMethod_with(PArray4098, empty_Array, PArray4099, PThreadedCode4101, 2, PSend4102, self);
    
    MethodClosure MC_SMB__notEquals_ = new_MethodClosure((Method)PNativeMethod4097, Float_Class);
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
    init_SMB_ceil();
    init_SMB_roundTo_();
    init_SMB_asString();
    init_SMB_squared();
    init_SMB__gt_();
    init_SMB_hash();
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