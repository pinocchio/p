#include <lib/class/Runtime/BlockContext.h>


Optr layout_Runtime_BlockContext_Class_class;
Optr slot_Runtime_BlockContext_outerScope;
Optr layout_Runtime_BlockContext;


static void init_SMB_assignAt_in_to_() {
    Symbol SMB_assignAt_in_to_ = new_Symbol(L"assignAt:in:to:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray8398 = new_Array_with(3, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8401 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8403 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8407 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8408 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend8407, (Optr)VAR_value_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8409 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8408);
    Array PThreadedCode8406 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8407, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend8408, (Optr)&t_send1, (Optr)PSend8409, (Optr)&t_block_return);
    Block PBlock8405 = new_Block_with(empty_Array, empty_Array, PThreadedCode8406, 1, PSend8409);
    // ifTrue:. 
    Send PSend8404 = new_Send((Optr)PSend8403, SMB_ifTrue_, 1, (Optr)PBlock8405);
    // assignAt:in:to:. 
    Send PSend8410 = new_Send((Optr)slot_Runtime_BlockContext_outerScope, SMB_assignAt_in_to_, 3, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1, (Optr)VAR_value_0_2);
    Array PThreadedCode8402 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8403, (Optr)&t_send_ifTrue_, (Optr)PSend8404, (Optr)PBlock8405, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send3, (Optr)PSend8410, (Optr)&t_method_return);
    Block PBlock8400 = new_Block_with(PArray8401, empty_Array, PThreadedCode8402, 2, PSend8404, PSend8410);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8411 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8400);
    Array PThreadedCode8399 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8400, (Optr)&t_send1, (Optr)PSend8411, (Optr)&t_method_return);
    Method PMethod8397 = new_Method_with(PArray8398, empty_Array, empty_Array, PThreadedCode8399, 1, PSend8411);
    
    MethodClosure MC_SMB_assignAt_in_to_ = new_MethodClosure((Method)PMethod8397, BlockContext_Class);
    store_method(BlockContext_Class, SMB_assignAt_in_to_, MC_SMB_assignAt_in_to_);
}


static void init_SMB_outerScope() {
    Symbol SMB_outerScope = new_Symbol(L"outerScope");
    Array PThreadedCode8413 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_method_return);
    Method PMethod8412 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8413, 1, slot_Runtime_BlockContext_outerScope);
    
    MethodClosure MC_SMB_outerScope = new_MethodClosure((Method)PMethod8412, BlockContext_Class);
    store_method(BlockContext_Class, SMB_outerScope, MC_SMB_outerScope);
}


static void init_SMB_outerScope_() {
    Symbol SMB_outerScope_ = new_Symbol(L"outerScope:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8415 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8417 = new_Assign((Optr)slot_Runtime_BlockContext_outerScope, (Optr)VAR_aContext_0_0);
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    // scopeId. 
    Send PSend8420 = new_Send((Optr)slot_Runtime_BlockContext_outerScope, SMB_scopeId, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8419 = new_Send((Optr)PSend8420, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign8418 = new_Assign((Optr)slot_Runtime_Context_scopeId, (Optr)PSend8419);
    Array PThreadedCode8416 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign8417, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8418, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_send0, (Optr)PSend8420, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8419, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8414 = new_Method_with(PArray8415, empty_Array, empty_Array, PThreadedCode8416, 3, PAssign8417, PAssign8418, self);
    
    MethodClosure MC_SMB_outerScope_ = new_MethodClosure((Method)PMethod8414, BlockContext_Class);
    store_method(BlockContext_Class, SMB_outerScope_, MC_SMB_outerScope_);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Variable VAR_clone_0_0 = new_Variable_named(L"clone", 0);
    Array PArray8422 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Super PSuper8425 = new_Super(SMB_freeze, 0);
    Assign PAssign8424 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSuper8425);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend8426 = new_Send((Optr)VAR_clone_0_0, SMB_homeContext_, 1, (Optr)slot_Runtime_Context_homeContext);
    Array PThreadedCode8423 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8424, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8425, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_homeContext, (Optr)&t_send1, (Optr)PSend8426, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8421 = new_Method_with(empty_Array, PArray8422, empty_Array, PThreadedCode8423, 3, PAssign8424, PSend8426, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8421, BlockContext_Class);
    store_method(BlockContext_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray8428 = new_Array_with(1, (Optr)VAR_context_0_0);
    Super PSuper8431 = new_Super(SMB_asAliased, 0);
    Assign PAssign8430 = new_Assign((Optr)VAR_context_0_0, (Optr)PSuper8431);
    // asAliased. 
    Send PSend8432 = new_Send((Optr)slot_Runtime_Context_homeContext, SMB_asAliased, 0);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend8433 = new_Send((Optr)VAR_context_0_0, SMB_homeContext_, 1, (Optr)PSend8432);
    Symbol SMB_outerScope_ = new_Symbol(L"outerScope:");
    // outerScope:. 
    Send PSend8434 = new_Send((Optr)VAR_context_0_0, SMB_outerScope_, 1, (Optr)slot_Runtime_BlockContext_outerScope);
    Array PThreadedCode8429 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign8430, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8431, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_homeContext, (Optr)&t_send0, (Optr)PSend8432, (Optr)&t_send1, (Optr)PSend8433, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_send1, (Optr)PSend8434, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_method_return);
    Method PMethod8427 = new_Method_with(empty_Array, PArray8428, empty_Array, PThreadedCode8429, 4, PAssign8430, PSend8433, PSend8434, VAR_context_0_0);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8427, BlockContext_Class);
    store_method(BlockContext_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_rawOuterScope_() {
    Symbol SMB_rawOuterScope_ = new_Symbol(L"rawOuterScope:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8436 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8438 = new_Assign((Optr)slot_Runtime_BlockContext_outerScope, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8437 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8438, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8435 = new_Method_with(PArray8436, empty_Array, empty_Array, PThreadedCode8437, 2, PAssign8438, self);
    
    MethodClosure MC_SMB_rawOuterScope_ = new_MethodClosure((Method)PMethod8435, BlockContext_Class);
    store_method(BlockContext_Class, SMB_rawOuterScope_, MC_SMB_rawOuterScope_);
}


static void init_SMB_lookupAt_in_() {
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Array PArray8440 = new_Array_with(2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8443 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8445 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8449 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8450 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend8449);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8451 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8450);
    Array PThreadedCode8448 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8449, (Optr)&t_send1, (Optr)PSend8450, (Optr)&t_send1, (Optr)PSend8451, (Optr)&t_block_return);
    Block PBlock8447 = new_Block_with(empty_Array, empty_Array, PThreadedCode8448, 1, PSend8451);
    // ifTrue:. 
    Send PSend8446 = new_Send((Optr)PSend8445, SMB_ifTrue_, 1, (Optr)PBlock8447);
    // lookupAt:in:. 
    Send PSend8452 = new_Send((Optr)slot_Runtime_BlockContext_outerScope, SMB_lookupAt_in_, 2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Array PThreadedCode8444 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8445, (Optr)&t_send_ifTrue_, (Optr)PSend8446, (Optr)PBlock8447, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send2, (Optr)PSend8452, (Optr)&t_method_return);
    Block PBlock8442 = new_Block_with(PArray8443, empty_Array, PThreadedCode8444, 2, PSend8446, PSend8452);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8453 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8442);
    Array PThreadedCode8441 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8442, (Optr)&t_send1, (Optr)PSend8453, (Optr)&t_method_return);
    Method PMethod8439 = new_Method_with(PArray8440, empty_Array, empty_Array, PThreadedCode8441, 1, PSend8453);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8439, BlockContext_Class);
    store_method(BlockContext_Class, SMB_lookupAt_in_, MC_SMB_lookupAt_in_);
}

void init_Runtime_PBlockContext_layout() {
    layout_Runtime_BlockContext_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Runtime_BlockContext_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_BlockContext_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_BlockContext_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_BlockContext_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_BlockContext_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_BlockContext = new_Symbol(L"BlockContext");
    slot_Runtime_BlockContext_outerScope = (Optr)new_Slot(5, L"outerScope");
    layout_Runtime_BlockContext = (Optr)create_layout_with_vars(ArrayLayout_Class, 6);
    ((Array)layout_Runtime_BlockContext)->values[0] = slot_Runtime_Context_scopeId;
    ((Array)layout_Runtime_BlockContext)->values[1] = slot_Runtime_Context_stacked;
    ((Array)layout_Runtime_BlockContext)->values[2] = slot_Runtime_Context_closure;
    ((Array)layout_Runtime_BlockContext)->values[3] = slot_Runtime_Context_homeContext;
    ((Array)layout_Runtime_BlockContext)->values[4] = slot_Runtime_Context_returnContext;
    ((Array)layout_Runtime_BlockContext)->values[5] = slot_Runtime_BlockContext_outerScope;
    BlockContext_Class = (Class)new_Class(Context_Class, layout_Runtime_BlockContext_Class_class);
    BlockContext_Class->layout = layout_Runtime_BlockContext;
    BlockContext_Class->name = SMB_BlockContext;
    
}

void init_Runtime_PBlockContext_methods() {
    init_SMB_assignAt_in_to_();
    init_SMB_outerScope();
    init_SMB_outerScope_();
    init_SMB_freeze();
    init_SMB_asAliased();
    init_SMB_rawOuterScope_();
    init_SMB_lookupAt_in_();
    
}