#include <lib/class/IO/Term/Termcap.h>


Optr slot_IO_Term_Termcap_Class_class_instance;
Optr layout_IO_Term_Termcap_Class_class;
Optr slot_IO_Term_Termcap_cache;
Optr layout_IO_Term_Termcap;


static void init_SMB_getflag_() {
    Symbol SMB_getflag_ = new_Symbol(L"getflag:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9000 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tgetflag_ = new_Symbol(L"tgetflag:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9002 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetflag_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9001 = new_Array_with(1, (Optr)PAnnotation9002);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9004 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9003 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9004, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8999 = new_NativeMethod_with(PArray9000, empty_Array, PArray9001, PThreadedCode9003, 2, PSend9004, self);
    
    MethodClosure MC_SMB_getflag_ = new_MethodClosure((Method)PNativeMethod8999, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getflag_, MC_SMB_getflag_);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend9007 = new_Send((Optr)PEnvironment_classReference, SMB_instance, 0);
    Symbol  SMB_TERM = new_Symbol(L"TERM");
    String string_9010 = new_String(L"dumb");
    Array PThreadedCode9009 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_9010, (Optr)&t_block_return);
    Constant string_9010_Const = new_Constant((Optr)string_9010);
    Block PBlock9008 = new_Block_with(empty_Array, empty_Array, PThreadedCode9009, 1, string_9010_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Constant SMB_TERM_Const = new_Constant((Optr)SMB_TERM);
    // at:ifAbsent:. 
    Send PSend9011 = new_Send((Optr)PSend9007, SMB_at_ifAbsent_, 2, (Optr)SMB_TERM_Const, (Optr)PBlock9008);
    Symbol SMB_getent_ = new_Symbol(L"getent:");
    // getent:. 
    Send PSend9012 = new_Send((Optr)self, SMB_getent_, 1, (Optr)PSend9011);
    Array PThreadedCode9006 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEnvironment_classReference, (Optr)&t_send0, (Optr)PSend9007, (Optr)&t_push1, (Optr)SMB_TERM, (Optr)&t_push_closure, (Optr)PBlock9008, (Optr)&t_send2, (Optr)PSend9011, (Optr)&t_send1, (Optr)PSend9012, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9005 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9006, 2, PSend9012, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod9005, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_getstr_() {
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9014 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_tgetstr_ = new_Symbol(L"tgetstr:");
    // tgetstr:. 
    Send PSend9018 = new_Send((Optr)self, SMB_tgetstr_, 1, (Optr)VAR_aString_0_0);
    String string_9021 = new_String(L"");
    Array PThreadedCode9020 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_9021, (Optr)&t_block_return);
    Constant string_9021_Const = new_Constant((Optr)string_9021);
    Block PBlock9019 = new_Block_with(empty_Array, empty_Array, PThreadedCode9020, 1, string_9021_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9022 = new_Send((Optr)PSend9018, SMB_ifNil_, 1, (Optr)PBlock9019);
    Array PThreadedCode9017 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9018, (Optr)&t_push_closure, (Optr)PBlock9019, (Optr)&t_send1, (Optr)PSend9022, (Optr)&t_block_return);
    Block PBlock9016 = new_Block_with(empty_Array, empty_Array, PThreadedCode9017, 1, PSend9022);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend9023 = new_Send((Optr)slot_IO_Term_Termcap_cache, SMB_at_ifAbsentPut_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock9016);
    Array PThreadedCode9015 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_cache, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock9016, (Optr)&t_send2, (Optr)PSend9023, (Optr)&t_method_return);
    Method PMethod9013 = new_Method_with(PArray9014, empty_Array, empty_Array, PThreadedCode9015, 1, PSend9023);
    
    MethodClosure MC_SMB_getstr_ = new_MethodClosure((Method)PMethod9013, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getstr_, MC_SMB_getstr_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9027 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9026 = new_Assign((Optr)slot_IO_Term_Termcap_cache, (Optr)PSend9027);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend9028 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode9025 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign9026, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9027, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9028, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9024 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9025, 3, PAssign9026, PSend9028, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9024, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parm_in_() {
    Symbol SMB_parm_in_ = new_Symbol(L"parm:in:");
    Variable VAR_p1_0_0 = new_Variable_named(L"p1", 0);
    Variable VAR_string_0_1 = new_Variable_named(L"string", 0);
    Array PArray9030 = new_Array_with(2, (Optr)VAR_p1_0_0, (Optr)VAR_string_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tparm_in_ = new_Symbol(L"tparm:in:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9032 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tparm_in_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9031 = new_Array_with(1, (Optr)PAnnotation9032);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9034 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9033 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9034, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9029 = new_NativeMethod_with(PArray9030, empty_Array, PArray9031, PThreadedCode9033, 2, PSend9034, self);
    
    MethodClosure MC_SMB_parm_in_ = new_MethodClosure((Method)PNativeMethod9029, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_parm_in_, MC_SMB_parm_in_);
}


static void init_SMB_getent_() {
    Symbol SMB_getent_ = new_Symbol(L"getent:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9036 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tgetent_ = new_Symbol(L"tgetent:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9038 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetent_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9037 = new_Array_with(1, (Optr)PAnnotation9038);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9040 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9039 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9040, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9035 = new_NativeMethod_with(PArray9036, empty_Array, PArray9037, PThreadedCode9039, 2, PSend9040, self);
    
    MethodClosure MC_SMB_getent_ = new_MethodClosure((Method)PNativeMethod9035, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getent_, MC_SMB_getent_);
}


static void init_SMB_tgetstr_() {
    Symbol SMB_tgetstr_ = new_Symbol(L"tgetstr:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9042 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9044 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetstr_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9043 = new_Array_with(1, (Optr)PAnnotation9044);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9046 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9045 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9046, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9041 = new_NativeMethod_with(PArray9042, empty_Array, PArray9043, PThreadedCode9045, 2, PSend9046, self);
    
    MethodClosure MC_SMB_tgetstr_ = new_MethodClosure((Method)PNativeMethod9041, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_tgetstr_, MC_SMB_tgetstr_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend9049 = new_Send((Optr)slot_IO_Term_Termcap_cache, SMB_removeAll, 0);
    Array PThreadedCode9048 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_cache, (Optr)&t_send0, (Optr)PSend9049, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9047 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9048, 2, PSend9049, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod9047, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_parm_parm_in_() {
    Symbol SMB_parm_parm_in_ = new_Symbol(L"parm:parm:in:");
    Variable VAR_p1_0_0 = new_Variable_named(L"p1", 0);
    Variable VAR_p2_0_1 = new_Variable_named(L"p2", 0);
    Variable VAR_string_0_2 = new_Variable_named(L"string", 0);
    Array PArray9051 = new_Array_with(3, (Optr)VAR_p1_0_0, (Optr)VAR_p2_0_1, (Optr)VAR_string_0_2);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tparm_parm_in_ = new_Symbol(L"tparm:parm:in:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9053 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tparm_parm_in_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9052 = new_Array_with(1, (Optr)PAnnotation9053);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9055 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9054 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9055, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9050 = new_NativeMethod_with(PArray9051, empty_Array, PArray9052, PThreadedCode9054, 2, PSend9055, self);
    
    MethodClosure MC_SMB_parm_parm_in_ = new_MethodClosure((Method)PNativeMethod9050, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_parm_parm_in_, MC_SMB_parm_parm_in_);
}


static void init_SMB_getnum_() {
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9057 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tgetnum_ = new_Symbol(L"tgetnum:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9059 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetnum_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9058 = new_Array_with(1, (Optr)PAnnotation9059);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9061 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9060 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9061, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9056 = new_NativeMethod_with(PArray9057, empty_Array, PArray9058, PThreadedCode9060, 2, PSend9061, self);
    
    MethodClosure MC_SMB_getnum_ = new_MethodClosure((Method)PNativeMethod9056, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getnum_, MC_SMB_getnum_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    String string_9064 = new_String(L"plugin/io/term/Termcap.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Term_minus_Termcap_Const = new_Constant((Optr)SMB_IO_minus_Term_minus_Termcap);
    Constant string_9064_Const = new_Constant((Optr)string_9064);
    // require:at:. 
    Send PSend9065 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Term_minus_Termcap_Const, (Optr)string_9064_Const);
    Array PThreadedCode9063 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Term_minus_Termcap, (Optr)&t_push1, (Optr)string_9064, (Optr)&t_send2, (Optr)PSend9065, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9062 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9063, 2, PSend9065, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9062, HEADER(IO_Term_Termcap_Class));
    store_method(HEADER(IO_Term_Termcap_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9071 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9070 = new_Assign((Optr)slot_IO_Term_Termcap_Class_class_instance, (Optr)PSend9071);
    Array PThreadedCode9069 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9070, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9071, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9068 = new_Block_with(empty_Array, empty_Array, PThreadedCode9069, 1, PAssign9070);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9072 = new_Send((Optr)slot_IO_Term_Termcap_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock9068);
    Array PThreadedCode9067 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock9068, (Optr)&t_send1, (Optr)PSend9072, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_Class_class_instance, (Optr)&t_method_return);
    Method PMethod9066 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9067, 2, PSend9072, slot_IO_Term_Termcap_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod9066, HEADER(IO_Term_Termcap_Class));
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