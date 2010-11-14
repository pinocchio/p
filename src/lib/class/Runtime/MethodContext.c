#include <lib/class/Runtime/MethodContext.h>


Optr layout_Runtime_MethodContext_Class_class;
Optr slot_Runtime_MethodContext_receiver;
Optr layout_Runtime_MethodContext;


static void init_SMB_assignAt_in_to_() {
    Symbol SMB_assignAt_in_to_ = new_Symbol(L"assignAt:in:to:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray8423 = new_Array_with(3, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1, (Optr)VAR_value_0_2);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8425 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8429 = new_String(L"Invalid scope identifier: ");
    Constant string_8429_Const = new_Constant((Optr)string_8429);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8430 = new_Send((Optr)string_8429_Const, SMB__append_, 1, (Optr)VAR_scope_0_1);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend8431 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8430);
    Array PThreadedCode8428 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8429, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send1, (Optr)PSend8430, (Optr)&t_send1, (Optr)PSend8431, (Optr)&t_block_return);
    Block PBlock8427 = new_Block_with(empty_Array, empty_Array, PThreadedCode8428, 1, PSend8431);
    // ifFalse:. 
    Send PSend8426 = new_Send((Optr)PSend8425, SMB_ifFalse_, 1, (Optr)PBlock8427);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8432 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8433 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend8432, (Optr)VAR_value_0_2);
    Array PThreadedCode8424 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8425, (Optr)&t_send_ifFalse_, (Optr)PSend8426, (Optr)PBlock8427, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8432, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend8433, (Optr)&t_method_return);
    Method PMethod8422 = new_Method_with(PArray8423, empty_Array, empty_Array, PThreadedCode8424, 2, PSend8426, PSend8433);
    
    MethodClosure MC_SMB_assignAt_in_to_ = new_MethodClosure((Method)PMethod8422, MethodContext_Class);
    store_method(MethodContext_Class, SMB_assignAt_in_to_, MC_SMB_assignAt_in_to_);
}


static void init_SMB_methodClass() {
    Symbol SMB_methodClass = new_Symbol(L"methodClass");
    Symbol SMB_host = new_Symbol(L"host");
    // host. 
    Send PSend8436 = new_Send((Optr)slot_Runtime_Context_closure, SMB_host, 0);
    Array PThreadedCode8435 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send0, (Optr)PSend8436, (Optr)&t_method_return);
    Method PMethod8434 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8435, 1, PSend8436);
    
    MethodClosure MC_SMB_methodClass = new_MethodClosure((Method)PMethod8434, MethodContext_Class);
    store_method(MethodContext_Class, SMB_methodClass, MC_SMB_methodClass);
}


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_aReceiver_0_0 = new_Variable_named(L"aReceiver", 0);
    Array PArray8438 = new_Array_with(1, (Optr)VAR_aReceiver_0_0);
    Assign PAssign8440 = new_Assign((Optr)slot_Runtime_MethodContext_receiver, (Optr)VAR_aReceiver_0_0);
    Array PThreadedCode8439 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8440, (Optr)&t_push_variable, (Optr)VAR_aReceiver_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8437 = new_Method_with(PArray8438, empty_Array, empty_Array, PThreadedCode8439, 2, PAssign8440, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod8437, MethodContext_Class);
    store_method(MethodContext_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode8442 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_method_return);
    Method PMethod8441 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8442, 1, slot_Runtime_MethodContext_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod8441, MethodContext_Class);
    store_method(MethodContext_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Variable VAR_clone_0_0 = new_Variable_named(L"clone", 0);
    Array PArray8444 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Super PSuper8447 = new_Super(SMB_freeze, 0);
    Assign PAssign8446 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSuper8447);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend8448 = new_Send((Optr)VAR_clone_0_0, SMB_receiver_, 1, (Optr)slot_Runtime_MethodContext_receiver);
    Array PThreadedCode8445 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8446, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8447, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_send1, (Optr)PSend8448, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8443 = new_Method_with(empty_Array, PArray8444, empty_Array, PThreadedCode8445, 3, PAssign8446, PSend8448, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8443, MethodContext_Class);
    store_method(MethodContext_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray8450 = new_Array_with(1, (Optr)VAR_context_0_0);
    Super PSuper8453 = new_Super(SMB_asAliased, 0);
    Assign PAssign8452 = new_Assign((Optr)VAR_context_0_0, (Optr)PSuper8453);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend8454 = new_Send((Optr)VAR_context_0_0, SMB_homeContext_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend8455 = new_Send((Optr)slot_Runtime_MethodContext_receiver, SMB_asAllocationAlias_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend8456 = new_Send((Optr)VAR_context_0_0, SMB_receiver_, 1, (Optr)PSend8455);
    Array PThreadedCode8451 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign8452, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8453, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8454, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8455, (Optr)&t_send1, (Optr)PSend8456, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_method_return);
    Method PMethod8449 = new_Method_with(empty_Array, PArray8450, empty_Array, PThreadedCode8451, 4, PAssign8452, PSend8454, PSend8456, VAR_context_0_0);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8449, MethodContext_Class);
    store_method(MethodContext_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8459 = new_Super(SMB_initialize, 0);
    Assign PAssign8460 = new_Assign((Optr)slot_Runtime_Context_homeContext, (Optr)self);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign8461 = new_Assign((Optr)slot_Runtime_Context_scopeId, (Optr)int_0_Const);
    Array PThreadedCode8458 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8459, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8460, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8461, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8457 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8458, 4, PSuper8459, PAssign8460, PAssign8461, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8457, MethodContext_Class);
    store_method(MethodContext_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_printStacktraceOn_() {
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray8463 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printStacktraceOn:. 
    Send PSend8467 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_printStacktraceOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode8466 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend8467, (Optr)&t_block_return);
    Block PBlock8465 = new_Block_with(empty_Array, empty_Array, PThreadedCode8466, 1, PSend8467);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend8468 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_ifNotNil_, 1, (Optr)PBlock8465);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8470 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend8472 = new_Send((Optr)self, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend8473 = new_Send((Optr)PSend8472, SMB_selector, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8474 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend8473);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend8475 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode8471 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8472, (Optr)&t_send0, (Optr)PSend8473, (Optr)&t_send1, (Optr)PSend8474, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8475, (Optr)&t_method_return);
    Block PBlock8469 = new_Block_with(PArray8470, empty_Array, PThreadedCode8471, 2, PSend8474, PSend8475);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend8476 = new_Send((Optr)slot_Runtime_MethodContext_receiver, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend8477 = new_Send((Optr)PSend8476, SMB_name, 0);
    // <<. 
    Send PSend8478 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend8477);
    String string_8479 = new_String(L">>");
    Constant string_8479_Const = new_Constant((Optr)string_8479);
    // <<. 
    Send PSend8480 = new_Send((Optr)PSend8478, SMB__shiftLeft_, 1, (Optr)string_8479_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8481 = new_Send((Optr)PBlock8469, SMB_value_, 1, (Optr)PSend8480);
    Array PThreadedCode8464 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_closure, (Optr)PBlock8465, (Optr)&t_send1, (Optr)PSend8468, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock8469, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_send0, (Optr)PSend8476, (Optr)&t_send0, (Optr)PSend8477, (Optr)&t_send1, (Optr)PSend8478, (Optr)&t_push1, (Optr)string_8479, (Optr)&t_send1, (Optr)PSend8480, (Optr)&t_send1, (Optr)PSend8481, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8462 = new_Method_with(PArray8463, empty_Array, empty_Array, PThreadedCode8464, 3, PSend8468, PSend8481, self);
    
    MethodClosure MC_SMB_printStacktraceOn_ = new_MethodClosure((Method)PMethod8462, MethodContext_Class);
    store_method(MethodContext_Class, SMB_printStacktraceOn_, MC_SMB_printStacktraceOn_);
}


static void init_SMB_lookupAt_in_() {
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Array PArray8483 = new_Array_with(2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8485 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8489 = new_String(L"Invalid scope identifier: ");
    Constant string_8489_Const = new_Constant((Optr)string_8489);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8490 = new_Send((Optr)string_8489_Const, SMB__append_, 1, (Optr)VAR_scope_0_1);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend8491 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8490);
    Array PThreadedCode8488 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8489, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send1, (Optr)PSend8490, (Optr)&t_send1, (Optr)PSend8491, (Optr)&t_block_return);
    Block PBlock8487 = new_Block_with(empty_Array, empty_Array, PThreadedCode8488, 1, PSend8491);
    // ifFalse:. 
    Send PSend8486 = new_Send((Optr)PSend8485, SMB_ifFalse_, 1, (Optr)PBlock8487);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8492 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8493 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend8492);
    Array PThreadedCode8484 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8485, (Optr)&t_send_ifFalse_, (Optr)PSend8486, (Optr)PBlock8487, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8492, (Optr)&t_send1, (Optr)PSend8493, (Optr)&t_method_return);
    Method PMethod8482 = new_Method_with(PArray8483, empty_Array, empty_Array, PThreadedCode8484, 2, PSend8486, PSend8493);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8482, MethodContext_Class);
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