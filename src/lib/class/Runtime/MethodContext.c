#include <lib/class/Runtime/MethodContext.h>


Optr layout_Runtime_MethodContext_Class_class;
Optr slot_Runtime_MethodContext_receiver;
Optr layout_Runtime_MethodContext;


static void init_SMB_assignAt_in_to_() {
    Symbol SMB_assignAt_in_to_ = new_Symbol(L"assignAt:in:to:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
<<<<<<< HEAD
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
=======
    Array PArray8421 = new_Array_with(3, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1, (Optr)VAR_value_0_2);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8423 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8427 = new_String(L"Invalid scope identifier: ");
    Constant string_8427_Const = new_Constant((Optr)string_8427);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8428 = new_Send((Optr)string_8427_Const, SMB__append_, 1, (Optr)VAR_scope_0_1);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend8429 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8428);
    Array PThreadedCode8426 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8427, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send1, (Optr)PSend8428, (Optr)&t_send1, (Optr)PSend8429, (Optr)&t_block_return);
    Block PBlock8425 = new_Block_with(empty_Array, empty_Array, PThreadedCode8426, 1, PSend8429);
    // ifFalse:. 
    Send PSend8424 = new_Send((Optr)PSend8423, SMB_ifFalse_, 1, (Optr)PBlock8425);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend8464 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8465 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend8464, (Optr)VAR_value_0_2);
    Array PThreadedCode8456 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8457, (Optr)&t_send_ifFalse_, (Optr)PSend8458, (Optr)PBlock8459, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8464, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend8465, (Optr)&t_method_return);
    Method PMethod8454 = new_Method_with(PArray8455, empty_Array, empty_Array, PThreadedCode8456, 2, PSend8458, PSend8465);
    
    MethodClosure MC_SMB_assignAt_in_to_ = new_MethodClosure((Method)PMethod8454, MethodContext_Class);
=======
    Send PSend8430 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8431 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend8430, (Optr)VAR_value_0_2);
    Array PThreadedCode8422 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8423, (Optr)&t_send_ifFalse_, (Optr)PSend8424, (Optr)PBlock8425, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8430, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend8431, (Optr)&t_method_return);
    Method PMethod8420 = new_Method_with(PArray8421, empty_Array, empty_Array, PThreadedCode8422, 2, PSend8424, PSend8431);
    
    MethodClosure MC_SMB_assignAt_in_to_ = new_MethodClosure((Method)PMethod8420, MethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(MethodContext_Class, SMB_assignAt_in_to_, MC_SMB_assignAt_in_to_);
}


static void init_SMB_methodClass() {
    Symbol SMB_methodClass = new_Symbol(L"methodClass");
    Symbol SMB_host = new_Symbol(L"host");
    // host. 
<<<<<<< HEAD
    Send PSend8468 = new_Send((Optr)slot_Runtime_Context_closure, SMB_host, 0);
    Array PThreadedCode8467 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send0, (Optr)PSend8468, (Optr)&t_method_return);
    Method PMethod8466 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8467, 1, PSend8468);
    
    MethodClosure MC_SMB_methodClass = new_MethodClosure((Method)PMethod8466, MethodContext_Class);
=======
    Send PSend8434 = new_Send((Optr)slot_Runtime_Context_closure, SMB_host, 0);
    Array PThreadedCode8433 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send0, (Optr)PSend8434, (Optr)&t_method_return);
    Method PMethod8432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8433, 1, PSend8434);
    
    MethodClosure MC_SMB_methodClass = new_MethodClosure((Method)PMethod8432, MethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(MethodContext_Class, SMB_methodClass, MC_SMB_methodClass);
}


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_aReceiver_0_0 = new_Variable_named(L"aReceiver", 0);
<<<<<<< HEAD
    Array PArray8470 = new_Array_with(1, (Optr)VAR_aReceiver_0_0);
    Assign PAssign8472 = new_Assign((Optr)slot_Runtime_MethodContext_receiver, (Optr)VAR_aReceiver_0_0);
    Array PThreadedCode8471 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8472, (Optr)&t_push_variable, (Optr)VAR_aReceiver_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8469 = new_Method_with(PArray8470, empty_Array, empty_Array, PThreadedCode8471, 2, PAssign8472, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod8469, MethodContext_Class);
=======
    Array PArray8436 = new_Array_with(1, (Optr)VAR_aReceiver_0_0);
    Assign PAssign8438 = new_Assign((Optr)slot_Runtime_MethodContext_receiver, (Optr)VAR_aReceiver_0_0);
    Array PThreadedCode8437 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8438, (Optr)&t_push_variable, (Optr)VAR_aReceiver_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8435 = new_Method_with(PArray8436, empty_Array, empty_Array, PThreadedCode8437, 2, PAssign8438, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod8435, MethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(MethodContext_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
<<<<<<< HEAD
    Array PThreadedCode8474 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_method_return);
    Method PMethod8473 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8474, 1, slot_Runtime_MethodContext_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod8473, MethodContext_Class);
=======
    Array PThreadedCode8440 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_method_return);
    Method PMethod8439 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8440, 1, slot_Runtime_MethodContext_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod8439, MethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(MethodContext_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Variable VAR_clone_0_0 = new_Variable_named(L"clone", 0);
<<<<<<< HEAD
    Array PArray8476 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Super PSuper8479 = new_Super(SMB_freeze, 0);
    Assign PAssign8478 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSuper8479);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend8480 = new_Send((Optr)VAR_clone_0_0, SMB_receiver_, 1, (Optr)slot_Runtime_MethodContext_receiver);
    Array PThreadedCode8477 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8478, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8479, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_send1, (Optr)PSend8480, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8475 = new_Method_with(empty_Array, PArray8476, empty_Array, PThreadedCode8477, 3, PAssign8478, PSend8480, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8475, MethodContext_Class);
=======
    Array PArray8442 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Super PSuper8445 = new_Super(SMB_freeze, 0);
    Assign PAssign8444 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSuper8445);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend8446 = new_Send((Optr)VAR_clone_0_0, SMB_receiver_, 1, (Optr)slot_Runtime_MethodContext_receiver);
    Array PThreadedCode8443 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8444, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8445, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_send1, (Optr)PSend8446, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8441 = new_Method_with(empty_Array, PArray8442, empty_Array, PThreadedCode8443, 3, PAssign8444, PSend8446, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8441, MethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(MethodContext_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
<<<<<<< HEAD
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
=======
    Array PArray8448 = new_Array_with(1, (Optr)VAR_context_0_0);
    Super PSuper8451 = new_Super(SMB_asAliased, 0);
    Assign PAssign8450 = new_Assign((Optr)VAR_context_0_0, (Optr)PSuper8451);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend8452 = new_Send((Optr)VAR_context_0_0, SMB_homeContext_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend8453 = new_Send((Optr)slot_Runtime_MethodContext_receiver, SMB_asAllocationAlias_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend8454 = new_Send((Optr)VAR_context_0_0, SMB_receiver_, 1, (Optr)PSend8453);
    Array PThreadedCode8449 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign8450, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8451, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8452, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8453, (Optr)&t_send1, (Optr)PSend8454, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_method_return);
    Method PMethod8447 = new_Method_with(empty_Array, PArray8448, empty_Array, PThreadedCode8449, 4, PAssign8450, PSend8452, PSend8454, VAR_context_0_0);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8447, MethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(MethodContext_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
<<<<<<< HEAD
    Super PSuper8491 = new_Super(SMB_initialize, 0);
    Assign PAssign8492 = new_Assign((Optr)slot_Runtime_Context_homeContext, (Optr)self);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign8493 = new_Assign((Optr)slot_Runtime_Context_scopeId, (Optr)int_0_Const);
    Array PThreadedCode8490 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8491, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8492, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8493, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8489 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8490, 4, PSuper8491, PAssign8492, PAssign8493, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8489, MethodContext_Class);
=======
    Super PSuper8457 = new_Super(SMB_initialize, 0);
    Assign PAssign8458 = new_Assign((Optr)slot_Runtime_Context_homeContext, (Optr)self);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign8459 = new_Assign((Optr)slot_Runtime_Context_scopeId, (Optr)int_0_Const);
    Array PThreadedCode8456 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8457, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8458, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8459, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8455 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8456, 4, PSuper8457, PAssign8458, PAssign8459, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8455, MethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(MethodContext_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_printStacktraceOn_() {
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
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
=======
    Array PArray8461 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printStacktraceOn:. 
    Send PSend8465 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_printStacktraceOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode8464 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend8465, (Optr)&t_block_return);
    Block PBlock8463 = new_Block_with(empty_Array, empty_Array, PThreadedCode8464, 1, PSend8465);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend8466 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_ifNotNil_, 1, (Optr)PBlock8463);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8468 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend8470 = new_Send((Optr)self, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend8471 = new_Send((Optr)PSend8470, SMB_selector, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8472 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend8471);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend8473 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode8469 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8470, (Optr)&t_send0, (Optr)PSend8471, (Optr)&t_send1, (Optr)PSend8472, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8473, (Optr)&t_method_return);
    Block PBlock8467 = new_Block_with(PArray8468, empty_Array, PThreadedCode8469, 2, PSend8472, PSend8473);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend8474 = new_Send((Optr)slot_Runtime_MethodContext_receiver, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend8475 = new_Send((Optr)PSend8474, SMB_name, 0);
    // <<. 
    Send PSend8476 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend8475);
    String string_8477 = new_String(L">>");
    Constant string_8477_Const = new_Constant((Optr)string_8477);
    // <<. 
    Send PSend8478 = new_Send((Optr)PSend8476, SMB__shiftLeft_, 1, (Optr)string_8477_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8479 = new_Send((Optr)PBlock8467, SMB_value_, 1, (Optr)PSend8478);
    Array PThreadedCode8462 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_closure, (Optr)PBlock8463, (Optr)&t_send1, (Optr)PSend8466, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock8467, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodContext_receiver, (Optr)&t_send0, (Optr)PSend8474, (Optr)&t_send0, (Optr)PSend8475, (Optr)&t_send1, (Optr)PSend8476, (Optr)&t_push1, (Optr)string_8477, (Optr)&t_send1, (Optr)PSend8478, (Optr)&t_send1, (Optr)PSend8479, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8460 = new_Method_with(PArray8461, empty_Array, empty_Array, PThreadedCode8462, 3, PSend8466, PSend8479, self);
    
    MethodClosure MC_SMB_printStacktraceOn_ = new_MethodClosure((Method)PMethod8460, MethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(MethodContext_Class, SMB_printStacktraceOn_, MC_SMB_printStacktraceOn_);
}


static void init_SMB_lookupAt_in_() {
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
<<<<<<< HEAD
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
=======
    Array PArray8481 = new_Array_with(2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8483 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8487 = new_String(L"Invalid scope identifier: ");
    Constant string_8487_Const = new_Constant((Optr)string_8487);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8488 = new_Send((Optr)string_8487_Const, SMB__append_, 1, (Optr)VAR_scope_0_1);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend8489 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8488);
    Array PThreadedCode8486 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8487, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send1, (Optr)PSend8488, (Optr)&t_send1, (Optr)PSend8489, (Optr)&t_block_return);
    Block PBlock8485 = new_Block_with(empty_Array, empty_Array, PThreadedCode8486, 1, PSend8489);
    // ifFalse:. 
    Send PSend8484 = new_Send((Optr)PSend8483, SMB_ifFalse_, 1, (Optr)PBlock8485);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend8524 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8525 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend8524);
    Array PThreadedCode8516 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8517, (Optr)&t_send_ifFalse_, (Optr)PSend8518, (Optr)PBlock8519, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8524, (Optr)&t_send1, (Optr)PSend8525, (Optr)&t_method_return);
    Method PMethod8514 = new_Method_with(PArray8515, empty_Array, empty_Array, PThreadedCode8516, 2, PSend8518, PSend8525);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8514, MethodContext_Class);
=======
    Send PSend8490 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8491 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend8490);
    Array PThreadedCode8482 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8483, (Optr)&t_send_ifFalse_, (Optr)PSend8484, (Optr)PBlock8485, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8490, (Optr)&t_send1, (Optr)PSend8491, (Optr)&t_method_return);
    Method PMethod8480 = new_Method_with(PArray8481, empty_Array, empty_Array, PThreadedCode8482, 2, PSend8484, PSend8491);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8480, MethodContext_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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