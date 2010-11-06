#include <lib/class/Runtime/MethodContext.h>


Optr layout_Runtime_MethodContext_Class_class;
Optr slot_Runtime_MethodContext_receiver;
Optr layout_Runtime_MethodContext;


static void init_SMB_assignAt_in_to_() {
    Symbol SMB_assignAt_in_to_ = new_Symbol(L"assignAt:in:to:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray8234 = new_Array_with(3, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1, (Optr)VAR_value_0_2);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8236 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8240 = new_String(L"Invalid scope identifier: ");
    Constant string_8240_Const = new_Constant((Optr)string_8240);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8241 = new_Send((Optr)string_8240_Const, SMB__append_, 1, (Optr)VAR_scope_0_1);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend8242 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8241);
    Array PThreadedCode8239 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8240, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send1, (Optr)PSend8241, (Optr)&t_send1, (Optr)PSend8242, (Optr)&t_block_return);
    Block PBlock8238 = new_Block_with(empty_Array, empty_Array, PThreadedCode8239, 1, PSend8242);
    // ifFalse:. 
    Send PSend8237 = new_Send((Optr)PSend8236, SMB_ifFalse_, 1, (Optr)PBlock8238);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8243 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8244 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend8243, (Optr)VAR_value_0_2);
    Array PThreadedCode8235 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8236, (Optr)&t_send_ifFalse_, (Optr)PSend8237, (Optr)PBlock8238, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8243, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend8244, (Optr)&t_method_return);
    Method PMethod8233 = new_Method_with(PArray8234, empty_Array, empty_Array, PThreadedCode8235, 2, PSend8237, PSend8244);
    
    MethodClosure MC_SMB_assignAt_in_to_ = new_MethodClosure((Method)PMethod8233, MethodContext_Class);
    store_method(MethodContext_Class, SMB_assignAt_in_to_, MC_SMB_assignAt_in_to_);
}


static void init_SMB_methodClass() {
    Symbol SMB_methodClass = new_Symbol(L"methodClass");
    Symbol SMB_host = new_Symbol(L"host");
    // host. 
    Send PSend8247 = new_Send((Optr)slot_Runtime_Context_closure, SMB_host, 0);
    Array PThreadedCode8246 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send0, (Optr)PSend8247, (Optr)&t_method_return);
    Method PMethod8245 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8246, 1, PSend8247);
    
    MethodClosure MC_SMB_methodClass = new_MethodClosure((Method)PMethod8245, MethodContext_Class);
    store_method(MethodContext_Class, SMB_methodClass, MC_SMB_methodClass);
}


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_aReceiver_0_0 = new_Variable_named(L"aReceiver", 0);
    Array PArray8249 = new_Array_with(1, (Optr)VAR_aReceiver_0_0);
    Assign PAssign8251 = new_Assign((Optr)slot_Runtime_MethodContext_receiver, (Optr)VAR_aReceiver_0_0);
    Array PThreadedCode8250 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8251, (Optr)&t_push_variable, (Optr)VAR_aReceiver_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8248 = new_Method_with(PArray8249, empty_Array, empty_Array, PThreadedCode8250, 2, PAssign8251, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod8248, MethodContext_Class);
    store_method(MethodContext_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode8253 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_method_return);
    Method PMethod8252 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8253, 1, slot_Runtime_MethodContext_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod8252, MethodContext_Class);
    store_method(MethodContext_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Variable VAR_clone_0_0 = new_Variable_named(L"clone", 0);
    Array PArray8255 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Super PSuper8258 = new_Super(SMB_freeze, 0);
    Assign PAssign8257 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSuper8258);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend8259 = new_Send((Optr)VAR_clone_0_0, SMB_receiver_, 1, (Optr)slot_Runtime_MethodContext_receiver);
    Array PThreadedCode8256 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8257, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8258, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_send1, (Optr)PSend8259, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8254 = new_Method_with(empty_Array, PArray8255, empty_Array, PThreadedCode8256, 3, PAssign8257, PSend8259, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8254, MethodContext_Class);
    store_method(MethodContext_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray8261 = new_Array_with(1, (Optr)VAR_context_0_0);
    Super PSuper8264 = new_Super(SMB_asAliased, 0);
    Assign PAssign8263 = new_Assign((Optr)VAR_context_0_0, (Optr)PSuper8264);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend8265 = new_Send((Optr)VAR_context_0_0, SMB_homeContext_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend8266 = new_Send((Optr)slot_Runtime_MethodContext_receiver, SMB_asAllocationAlias_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend8267 = new_Send((Optr)VAR_context_0_0, SMB_receiver_, 1, (Optr)PSend8266);
    Array PThreadedCode8262 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign8263, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8264, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8265, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8266, (Optr)&t_send1, (Optr)PSend8267, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_method_return);
    Method PMethod8260 = new_Method_with(empty_Array, PArray8261, empty_Array, PThreadedCode8262, 4, PAssign8263, PSend8265, PSend8267, VAR_context_0_0);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8260, MethodContext_Class);
    store_method(MethodContext_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8270 = new_Super(SMB_initialize, 0);
    Assign PAssign8271 = new_Assign((Optr)slot_Runtime_Context_homeContext, (Optr)self);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign8272 = new_Assign((Optr)slot_Runtime_Context_scopeId, (Optr)int_0_Const);
    Array PThreadedCode8269 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8270, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8271, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8272, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8268 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8269, 4, PSuper8270, PAssign8271, PAssign8272, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8268, MethodContext_Class);
    store_method(MethodContext_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_printStacktraceOn_() {
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray8274 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printStacktraceOn:. 
    Send PSend8278 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_printStacktraceOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode8277 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend8278, (Optr)&t_block_return);
    Block PBlock8276 = new_Block_with(empty_Array, empty_Array, PThreadedCode8277, 1, PSend8278);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend8279 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_ifNotNil_, 1, (Optr)PBlock8276);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8281 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend8283 = new_Send((Optr)self, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend8284 = new_Send((Optr)PSend8283, SMB_selector, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8285 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend8284);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend8286 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode8282 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8283, (Optr)&t_send0, (Optr)PSend8284, (Optr)&t_send1, (Optr)PSend8285, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8286, (Optr)&t_method_return);
    Block PBlock8280 = new_Block_with(PArray8281, empty_Array, PThreadedCode8282, 2, PSend8285, PSend8286);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend8287 = new_Send((Optr)slot_Runtime_MethodContext_receiver, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend8288 = new_Send((Optr)PSend8287, SMB_name, 0);
    // <<. 
    Send PSend8289 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend8288);
    String string_8290 = new_String(L">>");
    Constant string_8290_Const = new_Constant((Optr)string_8290);
    // <<. 
    Send PSend8291 = new_Send((Optr)PSend8289, SMB__shiftLeft_, 1, (Optr)string_8290_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8292 = new_Send((Optr)PBlock8280, SMB_value_, 1, (Optr)PSend8291);
    Array PThreadedCode8275 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_closure, (Optr)PBlock8276, (Optr)&t_send1, (Optr)PSend8279, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock8280, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_send0, (Optr)PSend8287, (Optr)&t_send0, (Optr)PSend8288, (Optr)&t_send1, (Optr)PSend8289, (Optr)&t_push1, (Optr)string_8290, (Optr)&t_send1, (Optr)PSend8291, (Optr)&t_send1, (Optr)PSend8292, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8273 = new_Method_with(PArray8274, empty_Array, empty_Array, PThreadedCode8275, 3, PSend8279, PSend8292, self);
    
    MethodClosure MC_SMB_printStacktraceOn_ = new_MethodClosure((Method)PMethod8273, MethodContext_Class);
    store_method(MethodContext_Class, SMB_printStacktraceOn_, MC_SMB_printStacktraceOn_);
}


static void init_SMB_lookupAt_in_() {
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Array PArray8294 = new_Array_with(2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8296 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8300 = new_String(L"Invalid scope identifier: ");
    Constant string_8300_Const = new_Constant((Optr)string_8300);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8301 = new_Send((Optr)string_8300_Const, SMB__append_, 1, (Optr)VAR_scope_0_1);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend8302 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8301);
    Array PThreadedCode8299 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8300, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send1, (Optr)PSend8301, (Optr)&t_send1, (Optr)PSend8302, (Optr)&t_block_return);
    Block PBlock8298 = new_Block_with(empty_Array, empty_Array, PThreadedCode8299, 1, PSend8302);
    // ifFalse:. 
    Send PSend8297 = new_Send((Optr)PSend8296, SMB_ifFalse_, 1, (Optr)PBlock8298);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8303 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8304 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend8303);
    Array PThreadedCode8295 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8296, (Optr)&t_send_ifFalse_, (Optr)PSend8297, (Optr)PBlock8298, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8303, (Optr)&t_send1, (Optr)PSend8304, (Optr)&t_method_return);
    Method PMethod8293 = new_Method_with(PArray8294, empty_Array, empty_Array, PThreadedCode8295, 2, PSend8297, PSend8304);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8293, MethodContext_Class);
    store_method(MethodContext_Class, SMB_lookupAt_in_, MC_SMB_lookupAt_in_);
}

void init_Runtime_PMethodContext_layout() {
    layout_Runtime_MethodContext_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Runtime_MethodContext_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_MethodContext_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_MethodContext_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_MethodContext_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_MethodContext_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_MethodContext = new_Symbol(L"MethodContext");
    slot_Runtime_MethodContext_receiver = (Optr)new_Slot(5, L"receiver");
    layout_Runtime_MethodContext = (Optr)create_layout_with_vars(ArrayLayout_Class, 6);
    ((Array)layout_Runtime_MethodContext)->values[0] = slot_Runtime_Context_scopeId;
    ((Array)layout_Runtime_MethodContext)->values[1] = slot_Runtime_Context_stacked;
    ((Array)layout_Runtime_MethodContext)->values[2] = slot_Runtime_Context_closure;
    ((Array)layout_Runtime_MethodContext)->values[3] = slot_Runtime_Context_homeContext;
    ((Array)layout_Runtime_MethodContext)->values[4] = slot_Runtime_Context_returnContext;
    ((Array)layout_Runtime_MethodContext)->values[5] = slot_Runtime_MethodContext_receiver;
    MethodContext_Class = (Class)new_Class(Context_Class, layout_Runtime_MethodContext_Class_class);
    MethodContext_Class->layout = layout_Runtime_MethodContext;
    MethodContext_Class->name = SMB_MethodContext;
    
}

void init_Runtime_PMethodContext_methods() {
    init_SMB_assignAt_in_to_();
    init_SMB_methodClass();
    init_SMB_receiver_();
    init_SMB_receiver();
    init_SMB_freeze();
    init_SMB_asAliased();
    init_SMB_initialize();
    init_SMB_printStacktraceOn_();
    init_SMB_lookupAt_in_();
    
}