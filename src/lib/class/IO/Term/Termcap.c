#include <lib/class/IO/Term/Termcap.h>


Optr slot_IO_Term_Termcap_Class_class_instance;
Optr layout_IO_Term_Termcap_Class_class;
Optr slot_IO_Term_Termcap_cache;
Optr layout_IO_Term_Termcap;


static void init_SMB_getflag_() {
    Symbol SMB_getflag_ = new_Symbol(L"getflag:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8955 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tgetflag_ = new_Symbol(L"tgetflag:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation8957 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetflag_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray8956 = new_Array_with(1, (Optr)PAnnotation8957);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend8959 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode8958 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8959, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8954 = new_NativeMethod_with(PArray8955, empty_Array, PArray8956, PThreadedCode8958, 2, PSend8959, self);
    
    MethodClosure MC_SMB_getflag_ = new_MethodClosure((Method)PNativeMethod8954, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getflag_, MC_SMB_getflag_);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend8962 = new_Send((Optr)PEnvironment_classReference, SMB_instance, 0);
    Symbol  SMB_TERM = new_Symbol(L"TERM");
    String string_8965 = new_String(L"dumb");
    Array PThreadedCode8964 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_8965, (Optr)&t_block_return);
    Constant string_8965_Const = new_Constant((Optr)string_8965);
    Block PBlock8963 = new_Block_with(empty_Array, empty_Array, PThreadedCode8964, 1, string_8965_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Constant SMB_TERM_Const = new_Constant((Optr)SMB_TERM);
    // at:ifAbsent:. 
    Send PSend8966 = new_Send((Optr)PSend8962, SMB_at_ifAbsent_, 2, (Optr)SMB_TERM_Const, (Optr)PBlock8963);
    Symbol SMB_getent_ = new_Symbol(L"getent:");
    // getent:. 
    Send PSend8967 = new_Send((Optr)self, SMB_getent_, 1, (Optr)PSend8966);
    Array PThreadedCode8961 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEnvironment_classReference, (Optr)&t_send0, (Optr)PSend8962, (Optr)&t_push1, (Optr)SMB_TERM, (Optr)&t_push_closure, (Optr)PBlock8963, (Optr)&t_send2, (Optr)PSend8966, (Optr)&t_send1, (Optr)PSend8967, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8960 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8961, 2, PSend8967, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod8960, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_getstr_() {
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8969 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_tgetstr_ = new_Symbol(L"tgetstr:");
    // tgetstr:. 
    Send PSend8973 = new_Send((Optr)self, SMB_tgetstr_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode8972 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8973, (Optr)&t_block_return);
    Block PBlock8971 = new_Block_with(empty_Array, empty_Array, PThreadedCode8972, 1, PSend8973);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend8974 = new_Send((Optr)slot_IO_Term_Termcap_cache, SMB_at_ifAbsentPut_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock8971);
    Array PThreadedCode8970 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_cache, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock8971, (Optr)&t_send2, (Optr)PSend8974, (Optr)&t_method_return);
    Method PMethod8968 = new_Method_with(PArray8969, empty_Array, empty_Array, PThreadedCode8970, 1, PSend8974);
    
    MethodClosure MC_SMB_getstr_ = new_MethodClosure((Method)PMethod8968, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getstr_, MC_SMB_getstr_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8978 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign8977 = new_Assign((Optr)slot_IO_Term_Termcap_cache, (Optr)PSend8978);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend8979 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode8976 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign8977, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend8978, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8979, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8975 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8976, 3, PAssign8977, PSend8979, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8975, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parm_in_() {
    Symbol SMB_parm_in_ = new_Symbol(L"parm:in:");
    Variable VAR_p1_0_0 = new_Variable_named(L"p1", 0);
    Variable VAR_string_0_1 = new_Variable_named(L"string", 0);
    Array PArray8981 = new_Array_with(2, (Optr)VAR_p1_0_0, (Optr)VAR_string_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tparm_in_ = new_Symbol(L"tparm:in:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation8983 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tparm_in_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray8982 = new_Array_with(1, (Optr)PAnnotation8983);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend8985 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode8984 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8985, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8980 = new_NativeMethod_with(PArray8981, empty_Array, PArray8982, PThreadedCode8984, 2, PSend8985, self);
    
    MethodClosure MC_SMB_parm_in_ = new_MethodClosure((Method)PNativeMethod8980, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_parm_in_, MC_SMB_parm_in_);
}


static void init_SMB_getent_() {
    Symbol SMB_getent_ = new_Symbol(L"getent:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8987 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tgetent_ = new_Symbol(L"tgetent:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation8989 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetent_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray8988 = new_Array_with(1, (Optr)PAnnotation8989);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend8991 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode8990 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8991, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8986 = new_NativeMethod_with(PArray8987, empty_Array, PArray8988, PThreadedCode8990, 2, PSend8991, self);
    
    MethodClosure MC_SMB_getent_ = new_MethodClosure((Method)PNativeMethod8986, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getent_, MC_SMB_getent_);
}


static void init_SMB_tgetstr_() {
    Symbol SMB_tgetstr_ = new_Symbol(L"tgetstr:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8993 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation8995 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetstr_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray8994 = new_Array_with(1, (Optr)PAnnotation8995);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend8997 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode8996 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8997, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8992 = new_NativeMethod_with(PArray8993, empty_Array, PArray8994, PThreadedCode8996, 2, PSend8997, self);
    
    MethodClosure MC_SMB_tgetstr_ = new_MethodClosure((Method)PNativeMethod8992, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_tgetstr_, MC_SMB_tgetstr_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend9000 = new_Send((Optr)slot_IO_Term_Termcap_cache, SMB_removeAll, 0);
    Array PThreadedCode8999 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_cache, (Optr)&t_send0, (Optr)PSend9000, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8998 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8999, 2, PSend9000, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod8998, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_parm_parm_in_() {
    Symbol SMB_parm_parm_in_ = new_Symbol(L"parm:parm:in:");
    Variable VAR_p1_0_0 = new_Variable_named(L"p1", 0);
    Variable VAR_p2_0_1 = new_Variable_named(L"p2", 0);
    Variable VAR_string_0_2 = new_Variable_named(L"string", 0);
    Array PArray9002 = new_Array_with(3, (Optr)VAR_p1_0_0, (Optr)VAR_p2_0_1, (Optr)VAR_string_0_2);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tparm_parm_in_ = new_Symbol(L"tparm:parm:in:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9004 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tparm_parm_in_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9003 = new_Array_with(1, (Optr)PAnnotation9004);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9006 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9005 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9006, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9001 = new_NativeMethod_with(PArray9002, empty_Array, PArray9003, PThreadedCode9005, 2, PSend9006, self);
    
    MethodClosure MC_SMB_parm_parm_in_ = new_MethodClosure((Method)PNativeMethod9001, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_parm_parm_in_, MC_SMB_parm_parm_in_);
}


static void init_SMB_getnum_() {
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9008 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tgetnum_ = new_Symbol(L"tgetnum:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9010 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetnum_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9009 = new_Array_with(1, (Optr)PAnnotation9010);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9012 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9011 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9012, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9007 = new_NativeMethod_with(PArray9008, empty_Array, PArray9009, PThreadedCode9011, 2, PSend9012, self);
    
    MethodClosure MC_SMB_getnum_ = new_MethodClosure((Method)PNativeMethod9007, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getnum_, MC_SMB_getnum_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    String string_9015 = new_String(L"plugin/io/term/Termcap.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Term_minus_Termcap_Const = new_Constant((Optr)SMB_IO_minus_Term_minus_Termcap);
    Constant string_9015_Const = new_Constant((Optr)string_9015);
    // require:at:. 
    Send PSend9016 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Term_minus_Termcap_Const, (Optr)string_9015_Const);
    Array PThreadedCode9014 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Term_minus_Termcap, (Optr)&t_push1, (Optr)string_9015, (Optr)&t_send2, (Optr)PSend9016, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9013 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9014, 2, PSend9016, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9013, HEADER(IO_Term_Termcap_Class));
    store_method(HEADER(IO_Term_Termcap_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9022 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9021 = new_Assign((Optr)slot_IO_Term_Termcap_Class_class_instance, (Optr)PSend9022);
    Array PThreadedCode9020 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9021, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9022, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9019 = new_Block_with(empty_Array, empty_Array, PThreadedCode9020, 1, PAssign9021);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9023 = new_Send((Optr)slot_IO_Term_Termcap_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock9019);
    Array PThreadedCode9018 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock9019, (Optr)&t_send1, (Optr)PSend9023, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_Class_class_instance, (Optr)&t_method_return);
    Method PMethod9017 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9018, 2, PSend9023, slot_IO_Term_Termcap_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod9017, HEADER(IO_Term_Termcap_Class));
    store_method(HEADER(IO_Term_Termcap_Class), SMB_instance, MC_SMB_instance);
}

void init_IO_Term_PTermcap_layout() {
    slot_IO_Term_Termcap_Class_class_instance = (Optr)new_Slot(5, L"instance");
    layout_IO_Term_Termcap_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_IO_Term_Termcap_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_Term_Termcap_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_Term_Termcap_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_Term_Termcap_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_Term_Termcap_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_IO_Term_Termcap_Class_class)->values[5] = slot_IO_Term_Termcap_Class_class_instance; // instance 
    
    Symbol  SMB_Termcap = new_Symbol(L"Termcap");
    slot_IO_Term_Termcap_cache = (Optr)new_Slot(0, L"cache");
    layout_IO_Term_Termcap = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_IO_Term_Termcap)->values[0] = slot_IO_Term_Termcap_cache; // cache 
    IO_Term_Termcap_Class = (Class)new_Class(Object_Class, layout_IO_Term_Termcap_Class_class);
    IO_Term_Termcap_Class->layout = layout_IO_Term_Termcap;
    IO_Term_Termcap_Class->name = SMB_Termcap;
    
}

void init_IO_Term_PTermcap_methods() {
    init_SMB_getflag_();
    init_SMB_reset();
    init_SMB_getstr_();
    init_SMB_initialize();
    init_SMB_parm_in_();
    init_SMB_getent_();
    init_SMB_tgetstr_();
    init_SMB_flush();
    init_SMB_parm_parm_in_();
    init_SMB_getnum_();
    init_class_SMB_initialize();
    init_class_SMB_instance();
    
}