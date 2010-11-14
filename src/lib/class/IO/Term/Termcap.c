#include <lib/class/IO/Term/Termcap.h>


Optr slot_IO_Term_Termcap_Class_class_instance;
Optr layout_IO_Term_Termcap_Class_class;
Optr slot_IO_Term_Termcap_cache;
Optr layout_IO_Term_Termcap;


static void init_SMB_getflag_() {
    Symbol SMB_getflag_ = new_Symbol(L"getflag:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9189 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tgetflag_ = new_Symbol(L"tgetflag:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9191 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetflag_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9190 = new_Array_with(1, (Optr)PAnnotation9191);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9193 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9192 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9193, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9188 = new_NativeMethod_with(PArray9189, empty_Array, PArray9190, PThreadedCode9192, 2, PSend9193, self);
    
    MethodClosure MC_SMB_getflag_ = new_MethodClosure((Method)PNativeMethod9188, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getflag_, MC_SMB_getflag_);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend9196 = new_Send((Optr)PEnvironment_classReference, SMB_instance, 0);
    Symbol  SMB_TERM = new_Symbol(L"TERM");
    String string_9199 = new_String(L"dumb");
    Array PThreadedCode9198 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_9199, (Optr)&t_block_return);
    Constant string_9199_Const = new_Constant((Optr)string_9199);
    Block PBlock9197 = new_Block_with(empty_Array, empty_Array, PThreadedCode9198, 1, string_9199_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Constant SMB_TERM_Const = new_Constant((Optr)SMB_TERM);
    // at:ifAbsent:. 
    Send PSend9200 = new_Send((Optr)PSend9196, SMB_at_ifAbsent_, 2, (Optr)SMB_TERM_Const, (Optr)PBlock9197);
    Symbol SMB_getent_ = new_Symbol(L"getent:");
    // getent:. 
    Send PSend9201 = new_Send((Optr)self, SMB_getent_, 1, (Optr)PSend9200);
    Array PThreadedCode9195 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEnvironment_classReference, (Optr)&t_send0, (Optr)PSend9196, (Optr)&t_push1, (Optr)SMB_TERM, (Optr)&t_push_closure, (Optr)PBlock9197, (Optr)&t_send2, (Optr)PSend9200, (Optr)&t_send1, (Optr)PSend9201, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9194 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9195, 2, PSend9201, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod9194, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_getstr_() {
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9203 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_tgetstr_ = new_Symbol(L"tgetstr:");
    // tgetstr:. 
    Send PSend9207 = new_Send((Optr)self, SMB_tgetstr_, 1, (Optr)VAR_aString_0_0);
    String string_9210 = new_String(L"");
    Array PThreadedCode9209 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_9210, (Optr)&t_block_return);
    Constant string_9210_Const = new_Constant((Optr)string_9210);
    Block PBlock9208 = new_Block_with(empty_Array, empty_Array, PThreadedCode9209, 1, string_9210_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9211 = new_Send((Optr)PSend9207, SMB_ifNil_, 1, (Optr)PBlock9208);
    Array PThreadedCode9206 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9207, (Optr)&t_push_closure, (Optr)PBlock9208, (Optr)&t_send1, (Optr)PSend9211, (Optr)&t_block_return);
    Block PBlock9205 = new_Block_with(empty_Array, empty_Array, PThreadedCode9206, 1, PSend9211);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend9212 = new_Send((Optr)slot_IO_Term_Termcap_cache, SMB_at_ifAbsentPut_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock9205);
    Array PThreadedCode9204 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_cache, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock9205, (Optr)&t_send2, (Optr)PSend9212, (Optr)&t_method_return);
    Method PMethod9202 = new_Method_with(PArray9203, empty_Array, empty_Array, PThreadedCode9204, 1, PSend9212);
    
    MethodClosure MC_SMB_getstr_ = new_MethodClosure((Method)PMethod9202, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getstr_, MC_SMB_getstr_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9216 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9215 = new_Assign((Optr)slot_IO_Term_Termcap_cache, (Optr)PSend9216);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend9217 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode9214 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign9215, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9216, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9217, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9213 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9214, 3, PAssign9215, PSend9217, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9213, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parm_in_() {
    Symbol SMB_parm_in_ = new_Symbol(L"parm:in:");
    Variable VAR_p1_0_0 = new_Variable_named(L"p1", 0);
    Variable VAR_string_0_1 = new_Variable_named(L"string", 0);
    Array PArray9219 = new_Array_with(2, (Optr)VAR_p1_0_0, (Optr)VAR_string_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tparm_in_ = new_Symbol(L"tparm:in:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9221 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tparm_in_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9220 = new_Array_with(1, (Optr)PAnnotation9221);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9223 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9222 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9223, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9218 = new_NativeMethod_with(PArray9219, empty_Array, PArray9220, PThreadedCode9222, 2, PSend9223, self);
    
    MethodClosure MC_SMB_parm_in_ = new_MethodClosure((Method)PNativeMethod9218, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_parm_in_, MC_SMB_parm_in_);
}


static void init_SMB_getent_() {
    Symbol SMB_getent_ = new_Symbol(L"getent:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9225 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tgetent_ = new_Symbol(L"tgetent:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9227 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetent_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9226 = new_Array_with(1, (Optr)PAnnotation9227);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9229 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9228 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9229, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9224 = new_NativeMethod_with(PArray9225, empty_Array, PArray9226, PThreadedCode9228, 2, PSend9229, self);
    
    MethodClosure MC_SMB_getent_ = new_MethodClosure((Method)PNativeMethod9224, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getent_, MC_SMB_getent_);
}


static void init_SMB_tgetstr_() {
    Symbol SMB_tgetstr_ = new_Symbol(L"tgetstr:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9231 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9233 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetstr_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9232 = new_Array_with(1, (Optr)PAnnotation9233);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9235 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9234 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9235, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9230 = new_NativeMethod_with(PArray9231, empty_Array, PArray9232, PThreadedCode9234, 2, PSend9235, self);
    
    MethodClosure MC_SMB_tgetstr_ = new_MethodClosure((Method)PNativeMethod9230, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_tgetstr_, MC_SMB_tgetstr_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend9238 = new_Send((Optr)slot_IO_Term_Termcap_cache, SMB_removeAll, 0);
    Array PThreadedCode9237 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_cache, (Optr)&t_send0, (Optr)PSend9238, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9236 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9237, 2, PSend9238, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod9236, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_parm_parm_in_() {
    Symbol SMB_parm_parm_in_ = new_Symbol(L"parm:parm:in:");
    Variable VAR_p1_0_0 = new_Variable_named(L"p1", 0);
    Variable VAR_p2_0_1 = new_Variable_named(L"p2", 0);
    Variable VAR_string_0_2 = new_Variable_named(L"string", 0);
    Array PArray9240 = new_Array_with(3, (Optr)VAR_p1_0_0, (Optr)VAR_p2_0_1, (Optr)VAR_string_0_2);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tparm_parm_in_ = new_Symbol(L"tparm:parm:in:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9242 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tparm_parm_in_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9241 = new_Array_with(1, (Optr)PAnnotation9242);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9244 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9243 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9244, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9239 = new_NativeMethod_with(PArray9240, empty_Array, PArray9241, PThreadedCode9243, 2, PSend9244, self);
    
    MethodClosure MC_SMB_parm_parm_in_ = new_MethodClosure((Method)PNativeMethod9239, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_parm_parm_in_, MC_SMB_parm_parm_in_);
}


static void init_SMB_getnum_() {
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9246 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tgetnum_ = new_Symbol(L"tgetnum:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9248 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetnum_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9247 = new_Array_with(1, (Optr)PAnnotation9248);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9250 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9249 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9250, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9245 = new_NativeMethod_with(PArray9246, empty_Array, PArray9247, PThreadedCode9249, 2, PSend9250, self);
    
    MethodClosure MC_SMB_getnum_ = new_MethodClosure((Method)PNativeMethod9245, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getnum_, MC_SMB_getnum_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    String string_9253 = new_String(L"plugin/io/term/Termcap.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Term_minus_Termcap_Const = new_Constant((Optr)SMB_IO_minus_Term_minus_Termcap);
    Constant string_9253_Const = new_Constant((Optr)string_9253);
    // require:at:. 
    Send PSend9254 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Term_minus_Termcap_Const, (Optr)string_9253_Const);
    Array PThreadedCode9252 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Term_minus_Termcap, (Optr)&t_push1, (Optr)string_9253, (Optr)&t_send2, (Optr)PSend9254, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9251 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9252, 2, PSend9254, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9251, HEADER(IO_Term_Termcap_Class));
    store_method(HEADER(IO_Term_Termcap_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9260 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9259 = new_Assign((Optr)slot_IO_Term_Termcap_Class_class_instance, (Optr)PSend9260);
    Array PThreadedCode9258 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9259, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9260, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9257 = new_Block_with(empty_Array, empty_Array, PThreadedCode9258, 1, PAssign9259);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9261 = new_Send((Optr)slot_IO_Term_Termcap_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock9257);
    Array PThreadedCode9256 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock9257, (Optr)&t_send1, (Optr)PSend9261, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_Class_class_instance, (Optr)&t_method_return);
    Method PMethod9255 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9256, 2, PSend9261, slot_IO_Term_Termcap_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod9255, HEADER(IO_Term_Termcap_Class));
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