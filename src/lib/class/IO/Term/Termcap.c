#include <lib/class/IO/Term/Termcap.h>


Optr slot_IO_Term_Termcap_Class_class_instance;
Optr layout_IO_Term_Termcap_Class_class;
Optr slot_IO_Term_Termcap_cache;
Optr layout_IO_Term_Termcap;


static void init_SMB_getflag_() {
    Symbol SMB_getflag_ = new_Symbol(L"getflag:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9221 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tgetflag_ = new_Symbol(L"tgetflag:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9223 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetflag_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9222 = new_Array_with(1, (Optr)PAnnotation9223);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9225 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9224 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9225, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9220 = new_NativeMethod_with(PArray9221, empty_Array, PArray9222, PThreadedCode9224, 2, PSend9225, self);
    
    MethodClosure MC_SMB_getflag_ = new_MethodClosure((Method)PNativeMethod9220, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getflag_, MC_SMB_getflag_);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend9228 = new_Send((Optr)PEnvironment_classReference, SMB_instance, 0);
    Symbol  SMB_TERM = new_Symbol(L"TERM");
    String string_9231 = new_String(L"dumb");
    Array PThreadedCode9230 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_9231, (Optr)&t_block_return);
    Constant string_9231_Const = new_Constant((Optr)string_9231);
    Block PBlock9229 = new_Block_with(empty_Array, empty_Array, PThreadedCode9230, 1, string_9231_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Constant SMB_TERM_Const = new_Constant((Optr)SMB_TERM);
    // at:ifAbsent:. 
    Send PSend9232 = new_Send((Optr)PSend9228, SMB_at_ifAbsent_, 2, (Optr)SMB_TERM_Const, (Optr)PBlock9229);
    Symbol SMB_getent_ = new_Symbol(L"getent:");
    // getent:. 
    Send PSend9233 = new_Send((Optr)self, SMB_getent_, 1, (Optr)PSend9232);
    Array PThreadedCode9227 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEnvironment_classReference, (Optr)&t_send0, (Optr)PSend9228, (Optr)&t_push1, (Optr)SMB_TERM, (Optr)&t_push_closure, (Optr)PBlock9229, (Optr)&t_send2, (Optr)PSend9232, (Optr)&t_send1, (Optr)PSend9233, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9226 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9227, 2, PSend9233, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod9226, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_getstr_() {
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9235 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_tgetstr_ = new_Symbol(L"tgetstr:");
    // tgetstr:. 
    Send PSend9239 = new_Send((Optr)self, SMB_tgetstr_, 1, (Optr)VAR_aString_0_0);
    String string_9242 = new_String(L"");
    Array PThreadedCode9241 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_9242, (Optr)&t_block_return);
    Constant string_9242_Const = new_Constant((Optr)string_9242);
    Block PBlock9240 = new_Block_with(empty_Array, empty_Array, PThreadedCode9241, 1, string_9242_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9243 = new_Send((Optr)PSend9239, SMB_ifNil_, 1, (Optr)PBlock9240);
    Array PThreadedCode9238 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9239, (Optr)&t_push_closure, (Optr)PBlock9240, (Optr)&t_send1, (Optr)PSend9243, (Optr)&t_block_return);
    Block PBlock9237 = new_Block_with(empty_Array, empty_Array, PThreadedCode9238, 1, PSend9243);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend9244 = new_Send((Optr)slot_IO_Term_Termcap_cache, SMB_at_ifAbsentPut_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock9237);
    Array PThreadedCode9236 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_cache, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock9237, (Optr)&t_send2, (Optr)PSend9244, (Optr)&t_method_return);
    Method PMethod9234 = new_Method_with(PArray9235, empty_Array, empty_Array, PThreadedCode9236, 1, PSend9244);
    
    MethodClosure MC_SMB_getstr_ = new_MethodClosure((Method)PMethod9234, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getstr_, MC_SMB_getstr_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9248 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9247 = new_Assign((Optr)slot_IO_Term_Termcap_cache, (Optr)PSend9248);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend9249 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode9246 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign9247, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9248, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9249, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9245 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9246, 3, PAssign9247, PSend9249, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9245, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parm_in_() {
    Symbol SMB_parm_in_ = new_Symbol(L"parm:in:");
    Variable VAR_p1_0_0 = new_Variable_named(L"p1", 0);
    Variable VAR_string_0_1 = new_Variable_named(L"string", 0);
    Array PArray9251 = new_Array_with(2, (Optr)VAR_p1_0_0, (Optr)VAR_string_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tparm_in_ = new_Symbol(L"tparm:in:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9253 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tparm_in_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9252 = new_Array_with(1, (Optr)PAnnotation9253);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9255 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9254 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9255, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9250 = new_NativeMethod_with(PArray9251, empty_Array, PArray9252, PThreadedCode9254, 2, PSend9255, self);
    
    MethodClosure MC_SMB_parm_in_ = new_MethodClosure((Method)PNativeMethod9250, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_parm_in_, MC_SMB_parm_in_);
}


static void init_SMB_getent_() {
    Symbol SMB_getent_ = new_Symbol(L"getent:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9257 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tgetent_ = new_Symbol(L"tgetent:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9259 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetent_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9258 = new_Array_with(1, (Optr)PAnnotation9259);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9261 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9260 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9261, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9256 = new_NativeMethod_with(PArray9257, empty_Array, PArray9258, PThreadedCode9260, 2, PSend9261, self);
    
    MethodClosure MC_SMB_getent_ = new_MethodClosure((Method)PNativeMethod9256, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getent_, MC_SMB_getent_);
}


static void init_SMB_tgetstr_() {
    Symbol SMB_tgetstr_ = new_Symbol(L"tgetstr:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9263 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9265 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetstr_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9264 = new_Array_with(1, (Optr)PAnnotation9265);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9267 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9266 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9267, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9262 = new_NativeMethod_with(PArray9263, empty_Array, PArray9264, PThreadedCode9266, 2, PSend9267, self);
    
    MethodClosure MC_SMB_tgetstr_ = new_MethodClosure((Method)PNativeMethod9262, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_tgetstr_, MC_SMB_tgetstr_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend9270 = new_Send((Optr)slot_IO_Term_Termcap_cache, SMB_removeAll, 0);
    Array PThreadedCode9269 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_cache, (Optr)&t_send0, (Optr)PSend9270, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9268 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9269, 2, PSend9270, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod9268, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_parm_parm_in_() {
    Symbol SMB_parm_parm_in_ = new_Symbol(L"parm:parm:in:");
    Variable VAR_p1_0_0 = new_Variable_named(L"p1", 0);
    Variable VAR_p2_0_1 = new_Variable_named(L"p2", 0);
    Variable VAR_string_0_2 = new_Variable_named(L"string", 0);
    Array PArray9272 = new_Array_with(3, (Optr)VAR_p1_0_0, (Optr)VAR_p2_0_1, (Optr)VAR_string_0_2);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tparm_parm_in_ = new_Symbol(L"tparm:parm:in:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9274 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tparm_parm_in_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9273 = new_Array_with(1, (Optr)PAnnotation9274);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9276 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9275 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9276, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9271 = new_NativeMethod_with(PArray9272, empty_Array, PArray9273, PThreadedCode9275, 2, PSend9276, self);
    
    MethodClosure MC_SMB_parm_parm_in_ = new_MethodClosure((Method)PNativeMethod9271, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_parm_parm_in_, MC_SMB_parm_parm_in_);
}


static void init_SMB_getnum_() {
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9278 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_tgetnum_ = new_Symbol(L"tgetnum:");
    Symbol SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    Annotation PAnnotation9280 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_tgetnum_, (Optr)SMB_IO_minus_Term_minus_Termcap);
    Array PArray9279 = new_Array_with(1, (Optr)PAnnotation9280);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend9282 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode9281 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9282, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9277 = new_NativeMethod_with(PArray9278, empty_Array, PArray9279, PThreadedCode9281, 2, PSend9282, self);
    
    MethodClosure MC_SMB_getnum_ = new_MethodClosure((Method)PNativeMethod9277, IO_Term_Termcap_Class);
    store_method(IO_Term_Termcap_Class, SMB_getnum_, MC_SMB_getnum_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Term_minus_Termcap = new_Symbol(L"IO.Term.Termcap");
    String string_9285 = new_String(L"plugin/io/term/Termcap.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Term_minus_Termcap_Const = new_Constant((Optr)SMB_IO_minus_Term_minus_Termcap);
    Constant string_9285_Const = new_Constant((Optr)string_9285);
    // require:at:. 
    Send PSend9286 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Term_minus_Termcap_Const, (Optr)string_9285_Const);
    Array PThreadedCode9284 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Term_minus_Termcap, (Optr)&t_push1, (Optr)string_9285, (Optr)&t_send2, (Optr)PSend9286, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9283 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9284, 2, PSend9286, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9283, HEADER(IO_Term_Termcap_Class));
    store_method(HEADER(IO_Term_Termcap_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9292 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign9291 = new_Assign((Optr)slot_IO_Term_Termcap_Class_class_instance, (Optr)PSend9292);
    Array PThreadedCode9290 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9291, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9292, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9289 = new_Block_with(empty_Array, empty_Array, PThreadedCode9290, 1, PAssign9291);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9293 = new_Send((Optr)slot_IO_Term_Termcap_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock9289);
    Array PThreadedCode9288 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock9289, (Optr)&t_send1, (Optr)PSend9293, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Termcap_Class_class_instance, (Optr)&t_method_return);
    Method PMethod9287 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9288, 2, PSend9293, slot_IO_Term_Termcap_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod9287, HEADER(IO_Term_Termcap_Class));
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