#include <lib/class/Runtime/MethodContext.h>


Optr layout_Runtime_MethodContext_Class_class;
Optr slot_Runtime_MethodContext_receiver;
Optr layout_Runtime_MethodContext;


static void init_SMB_assignAt_in_to_() {
    Symbol SMB_assignAt_in_to_ = new_Symbol(L"assignAt:in:to:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray8455 = new_Array_with(3, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1, (Optr)VAR_value_0_2);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8457 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8461 = new_String(L"Invalid scope identifier: ");
    Constant string_8461_Const = new_Constant((Optr)string_8461);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8462 = new_Send((Optr)string_8461_Const, SMB__append_, 1, (Optr)VAR_scope_0_1);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend8463 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8462);
    Array PThreadedCode8460 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8461, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send1, (Optr)PSend8462, (Optr)&t_send1, (Optr)PSend8463, (Optr)&t_block_return);
    Block PBlock8459 = new_Block_with(empty_Array, empty_Array, PThreadedCode8460, 1, PSend8463);
    // ifFalse:. 
    Send PSend8458 = new_Send((Optr)PSend8457, SMB_ifFalse_, 1, (Optr)PBlock8459);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8464 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8465 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend8464, (Optr)VAR_value_0_2);
    Array PThreadedCode8456 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8457, (Optr)&t_send_ifFalse_, (Optr)PSend8458, (Optr)PBlock8459, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8464, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend8465, (Optr)&t_method_return);
    Method PMethod8454 = new_Method_with(PArray8455, empty_Array, empty_Array, PThreadedCode8456, 2, PSend8458, PSend8465);
    
    MethodClosure MC_SMB_assignAt_in_to_ = new_MethodClosure((Method)PMethod8454, MethodContext_Class);
    store_method(MethodContext_Class, SMB_assignAt_in_to_, MC_SMB_assignAt_in_to_);
}


static void init_SMB_methodClass() {
    Symbol SMB_methodClass = new_Symbol(L"methodClass");
    Symbol SMB_host = new_Symbol(L"host");
    // host. 
    Send PSend8468 = new_Send((Optr)slot_Runtime_Context_closure, SMB_host, 0);
    Array PThreadedCode8467 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send0, (Optr)PSend8468, (Optr)&t_method_return);
    Method PMethod8466 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8467, 1, PSend8468);
    
    MethodClosure MC_SMB_methodClass = new_MethodClosure((Method)PMethod8466, MethodContext_Class);
    store_method(MethodContext_Class, SMB_methodClass, MC_SMB_methodClass);
}


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_aReceiver_0_0 = new_Variable_named(L"aReceiver", 0);
    Array PArray8470 = new_Array_with(1, (Optr)VAR_aReceiver_0_0);
    Assign PAssign8472 = new_Assign((Optr)slot_Runtime_MethodContext_receiver, (Optr)VAR_aReceiver_0_0);
    Array PThreadedCode8471 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8472, (Optr)&t_push_variable, (Optr)VAR_aReceiver_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8469 = new_Method_with(PArray8470, empty_Array, empty_Array, PThreadedCode8471, 2, PAssign8472, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod8469, MethodContext_Class);
    store_method(MethodContext_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode8474 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_method_return);
    Method PMethod8473 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8474, 1, slot_Runtime_MethodContext_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod8473, MethodContext_Class);
    store_method(MethodContext_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Variable VAR_clone_0_0 = new_Variable_named(L"clone", 0);
    Array PArray8476 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Super PSuper8479 = new_Super(SMB_freeze, 0);
    Assign PAssign8478 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSuper8479);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend8480 = new_Send((Optr)VAR_clone_0_0, SMB_receiver_, 1, (Optr)slot_Runtime_MethodContext_receiver);
    Array PThreadedCode8477 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8478, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8479, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_send1, (Optr)PSend8480, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8475 = new_Method_with(empty_Array, PArray8476, empty_Array, PThreadedCode8477, 3, PAssign8478, PSend8480, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8475, MethodContext_Class);
    store_method(MethodContext_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray8482 = new_Array_with(1, (Optr)VAR_context_0_0);
    Super PSuper8485 = new_Super(SMB_asAliased, 0);
    Assign PAssign8484 = new_Assign((Optr)VAR_context_0_0, (Optr)PSuper8485);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend8486 = new_Send((Optr)VAR_context_0_0, SMB_homeContext_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend8487 = new_Send((Optr)slot_Runtime_MethodContext_receiver, SMB_asAllocationAlias_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend8488 = new_Send((Optr)VAR_context_0_0, SMB_receiver_, 1, (Optr)PSend8487);
    Array PThreadedCode8483 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign8484, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8485, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8486, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8487, (Optr)&t_send1, (Optr)PSend8488, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_method_return);
    Method PMethod8481 = new_Method_with(empty_Array, PArray8482, empty_Array, PThreadedCode8483, 4, PAssign8484, PSend8486, PSend8488, VAR_context_0_0);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8481, MethodContext_Class);
    store_method(MethodContext_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8491 = new_Super(SMB_initialize, 0);
    Assign PAssign8492 = new_Assign((Optr)slot_Runtime_Context_homeContext, (Optr)self);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign8493 = new_Assign((Optr)slot_Runtime_Context_scopeId, (Optr)int_0_Const);
    Array PThreadedCode8490 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8491, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8492, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8493, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8489 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8490, 4, PSuper8491, PAssign8492, PAssign8493, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8489, MethodContext_Class);
    store_method(MethodContext_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_printStacktraceOn_() {
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray8495 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printStacktraceOn:. 
    Send PSend8499 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_printStacktraceOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode8498 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend8499, (Optr)&t_block_return);
    Block PBlock8497 = new_Block_with(empty_Array, empty_Array, PThreadedCode8498, 1, PSend8499);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend8500 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_ifNotNil_, 1, (Optr)PBlock8497);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8502 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend8504 = new_Send((Optr)self, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend8505 = new_Send((Optr)PSend8504, SMB_selector, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8506 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend8505);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend8507 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode8503 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8504, (Optr)&t_send0, (Optr)PSend8505, (Optr)&t_send1, (Optr)PSend8506, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8507, (Optr)&t_method_return);
    Block PBlock8501 = new_Block_with(PArray8502, empty_Array, PThreadedCode8503, 2, PSend8506, PSend8507);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend8508 = new_Send((Optr)slot_Runtime_MethodContext_receiver, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend8509 = new_Send((Optr)PSend8508, SMB_name, 0);
    // <<. 
    Send PSend8510 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend8509);
    String string_8511 = new_String(L">>");
    Constant string_8511_Const = new_Constant((Optr)string_8511);
    // <<. 
    Send PSend8512 = new_Send((Optr)PSend8510, SMB__shiftLeft_, 1, (Optr)string_8511_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8513 = new_Send((Optr)PBlock8501, SMB_value_, 1, (Optr)PSend8512);
    Array PThreadedCode8496 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_closure, (Optr)PBlock8497, (Optr)&t_send1, (Optr)PSend8500, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock8501, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_send0, (Optr)PSend8508, (Optr)&t_send0, (Optr)PSend8509, (Optr)&t_send1, (Optr)PSend8510, (Optr)&t_push1, (Optr)string_8511, (Optr)&t_send1, (Optr)PSend8512, (Optr)&t_send1, (Optr)PSend8513, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8494 = new_Method_with(PArray8495, empty_Array, empty_Array, PThreadedCode8496, 3, PSend8500, PSend8513, self);
    
    MethodClosure MC_SMB_printStacktraceOn_ = new_MethodClosure((Method)PMethod8494, MethodContext_Class);
    store_method(MethodContext_Class, SMB_printStacktraceOn_, MC_SMB_printStacktraceOn_);
}


static void init_SMB_lookupAt_in_() {
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Array PArray8515 = new_Array_with(2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8517 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8521 = new_String(L"Invalid scope identifier: ");
    Constant string_8521_Const = new_Constant((Optr)string_8521);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8522 = new_Send((Optr)string_8521_Const, SMB__append_, 1, (Optr)VAR_scope_0_1);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend8523 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8522);
    Array PThreadedCode8520 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8521, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send1, (Optr)PSend8522, (Optr)&t_send1, (Optr)PSend8523, (Optr)&t_block_return);
    Block PBlock8519 = new_Block_with(empty_Array, empty_Array, PThreadedCode8520, 1, PSend8523);
    // ifFalse:. 
    Send PSend8518 = new_Send((Optr)PSend8517, SMB_ifFalse_, 1, (Optr)PBlock8519);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8524 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8525 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend8524);
    Array PThreadedCode8516 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8517, (Optr)&t_send_ifFalse_, (Optr)PSend8518, (Optr)PBlock8519, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8524, (Optr)&t_send1, (Optr)PSend8525, (Optr)&t_method_return);
    Method PMethod8514 = new_Method_with(PArray8515, empty_Array, empty_Array, PThreadedCode8516, 2, PSend8518, PSend8525);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8514, MethodContext_Class);
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