#include <lib/class/Runtime/MethodContext.h>


Optr layout_Runtime_MethodContext_Class_class;
Optr slot_Runtime_MethodContext_receiver;
Optr layout_Runtime_MethodContext;


static void init_SMB_assignAt_in_to_() {
    Symbol SMB_assignAt_in_to_ = new_Symbol(L"assignAt:in:to:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray8189 = new_Array_with(3, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1, (Optr)VAR_value_0_2);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8191 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8195 = new_String(L"Invalid scope identifier: ");
    Constant string_8195_Const = new_Constant((Optr)string_8195);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8196 = new_Send((Optr)string_8195_Const, SMB__append_, 1, (Optr)VAR_scope_0_1);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend8197 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8196);
    Array PThreadedCode8194 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8195, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send1, (Optr)PSend8196, (Optr)&t_send1, (Optr)PSend8197, (Optr)&t_block_return);
    Block PBlock8193 = new_Block_with(empty_Array, empty_Array, PThreadedCode8194, 1, PSend8197);
    // ifFalse:. 
    Send PSend8192 = new_Send((Optr)PSend8191, SMB_ifFalse_, 1, (Optr)PBlock8193);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8198 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8199 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend8198, (Optr)VAR_value_0_2);
    Array PThreadedCode8190 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8191, (Optr)&t_send_ifFalse_, (Optr)PSend8192, (Optr)PBlock8193, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8198, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend8199, (Optr)&t_method_return);
    Method PMethod8188 = new_Method_with(PArray8189, empty_Array, empty_Array, PThreadedCode8190, 2, PSend8192, PSend8199);
    
    MethodClosure MC_SMB_assignAt_in_to_ = new_MethodClosure((Method)PMethod8188, MethodContext_Class);
    store_method(MethodContext_Class, SMB_assignAt_in_to_, MC_SMB_assignAt_in_to_);
}


static void init_SMB_methodClass() {
    Symbol SMB_methodClass = new_Symbol(L"methodClass");
    Symbol SMB_host = new_Symbol(L"host");
    // host. 
    Send PSend8202 = new_Send((Optr)slot_Runtime_Context_closure, SMB_host, 0);
    Array PThreadedCode8201 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send0, (Optr)PSend8202, (Optr)&t_method_return);
    Method PMethod8200 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8201, 1, PSend8202);
    
    MethodClosure MC_SMB_methodClass = new_MethodClosure((Method)PMethod8200, MethodContext_Class);
    store_method(MethodContext_Class, SMB_methodClass, MC_SMB_methodClass);
}


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_aReceiver_0_0 = new_Variable_named(L"aReceiver", 0);
    Array PArray8204 = new_Array_with(1, (Optr)VAR_aReceiver_0_0);
    Assign PAssign8206 = new_Assign((Optr)slot_Runtime_MethodContext_receiver, (Optr)VAR_aReceiver_0_0);
    Array PThreadedCode8205 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8206, (Optr)&t_push_variable, (Optr)VAR_aReceiver_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8203 = new_Method_with(PArray8204, empty_Array, empty_Array, PThreadedCode8205, 2, PAssign8206, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod8203, MethodContext_Class);
    store_method(MethodContext_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode8208 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_method_return);
    Method PMethod8207 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8208, 1, slot_Runtime_MethodContext_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod8207, MethodContext_Class);
    store_method(MethodContext_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Variable VAR_clone_0_0 = new_Variable_named(L"clone", 0);
    Array PArray8210 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Super PSuper8213 = new_Super(SMB_freeze, 0);
    Assign PAssign8212 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSuper8213);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend8214 = new_Send((Optr)VAR_clone_0_0, SMB_receiver_, 1, (Optr)slot_Runtime_MethodContext_receiver);
    Array PThreadedCode8211 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8212, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8213, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_send1, (Optr)PSend8214, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8209 = new_Method_with(empty_Array, PArray8210, empty_Array, PThreadedCode8211, 3, PAssign8212, PSend8214, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8209, MethodContext_Class);
    store_method(MethodContext_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray8216 = new_Array_with(1, (Optr)VAR_context_0_0);
    Super PSuper8219 = new_Super(SMB_asAliased, 0);
    Assign PAssign8218 = new_Assign((Optr)VAR_context_0_0, (Optr)PSuper8219);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend8220 = new_Send((Optr)VAR_context_0_0, SMB_homeContext_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend8221 = new_Send((Optr)slot_Runtime_MethodContext_receiver, SMB_asAllocationAlias_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend8222 = new_Send((Optr)VAR_context_0_0, SMB_receiver_, 1, (Optr)PSend8221);
    Array PThreadedCode8217 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign8218, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8219, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8220, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8221, (Optr)&t_send1, (Optr)PSend8222, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_method_return);
    Method PMethod8215 = new_Method_with(empty_Array, PArray8216, empty_Array, PThreadedCode8217, 4, PAssign8218, PSend8220, PSend8222, VAR_context_0_0);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8215, MethodContext_Class);
    store_method(MethodContext_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8225 = new_Super(SMB_initialize, 0);
    Assign PAssign8226 = new_Assign((Optr)slot_Runtime_Context_homeContext, (Optr)self);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign8227 = new_Assign((Optr)slot_Runtime_Context_scopeId, (Optr)int_0_Const);
    Array PThreadedCode8224 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8225, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8226, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8227, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8223 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8224, 4, PSuper8225, PAssign8226, PAssign8227, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8223, MethodContext_Class);
    store_method(MethodContext_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_printStacktraceOn_() {
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray8229 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printStacktraceOn:. 
    Send PSend8233 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_printStacktraceOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode8232 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend8233, (Optr)&t_block_return);
    Block PBlock8231 = new_Block_with(empty_Array, empty_Array, PThreadedCode8232, 1, PSend8233);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend8234 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_ifNotNil_, 1, (Optr)PBlock8231);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8236 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend8238 = new_Send((Optr)self, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend8239 = new_Send((Optr)PSend8238, SMB_selector, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8240 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend8239);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend8241 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode8237 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8238, (Optr)&t_send0, (Optr)PSend8239, (Optr)&t_send1, (Optr)PSend8240, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8241, (Optr)&t_method_return);
    Block PBlock8235 = new_Block_with(PArray8236, empty_Array, PThreadedCode8237, 2, PSend8240, PSend8241);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend8242 = new_Send((Optr)slot_Runtime_MethodContext_receiver, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend8243 = new_Send((Optr)PSend8242, SMB_name, 0);
    // <<. 
    Send PSend8244 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend8243);
    String string_8245 = new_String(L">>");
    Constant string_8245_Const = new_Constant((Optr)string_8245);
    // <<. 
    Send PSend8246 = new_Send((Optr)PSend8244, SMB__shiftLeft_, 1, (Optr)string_8245_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8247 = new_Send((Optr)PBlock8235, SMB_value_, 1, (Optr)PSend8246);
    Array PThreadedCode8230 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_closure, (Optr)PBlock8231, (Optr)&t_send1, (Optr)PSend8234, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock8235, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_send0, (Optr)PSend8242, (Optr)&t_send0, (Optr)PSend8243, (Optr)&t_send1, (Optr)PSend8244, (Optr)&t_push1, (Optr)string_8245, (Optr)&t_send1, (Optr)PSend8246, (Optr)&t_send1, (Optr)PSend8247, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8228 = new_Method_with(PArray8229, empty_Array, empty_Array, PThreadedCode8230, 3, PSend8234, PSend8247, self);
    
    MethodClosure MC_SMB_printStacktraceOn_ = new_MethodClosure((Method)PMethod8228, MethodContext_Class);
    store_method(MethodContext_Class, SMB_printStacktraceOn_, MC_SMB_printStacktraceOn_);
}


static void init_SMB_lookupAt_in_() {
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Array PArray8249 = new_Array_with(2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8251 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8255 = new_String(L"Invalid scope identifier: ");
    Constant string_8255_Const = new_Constant((Optr)string_8255);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8256 = new_Send((Optr)string_8255_Const, SMB__append_, 1, (Optr)VAR_scope_0_1);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend8257 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8256);
    Array PThreadedCode8254 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8255, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send1, (Optr)PSend8256, (Optr)&t_send1, (Optr)PSend8257, (Optr)&t_block_return);
    Block PBlock8253 = new_Block_with(empty_Array, empty_Array, PThreadedCode8254, 1, PSend8257);
    // ifFalse:. 
    Send PSend8252 = new_Send((Optr)PSend8251, SMB_ifFalse_, 1, (Optr)PBlock8253);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8258 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8259 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend8258);
    Array PThreadedCode8250 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8251, (Optr)&t_send_ifFalse_, (Optr)PSend8252, (Optr)PBlock8253, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8258, (Optr)&t_send1, (Optr)PSend8259, (Optr)&t_method_return);
    Method PMethod8248 = new_Method_with(PArray8249, empty_Array, empty_Array, PThreadedCode8250, 2, PSend8252, PSend8259);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8248, MethodContext_Class);
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