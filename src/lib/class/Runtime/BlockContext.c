#include <lib/class/Runtime/BlockContext.h>


Optr layout_Runtime_BlockContext_Class_class;
Optr slot_Runtime_BlockContext_outerScope;
Optr layout_Runtime_BlockContext;


static void init_SMB_assignAt_in_to_() {
    Symbol SMB_assignAt_in_to_ = new_Symbol(L"assignAt:in:to:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray8366 = new_Array_with(3, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8369 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8371 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8375 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8376 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend8375, (Optr)VAR_value_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8377 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8376);
    Array PThreadedCode8374 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8375, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend8376, (Optr)&t_send1, (Optr)PSend8377, (Optr)&t_block_return);
    Block PBlock8373 = new_Block_with(empty_Array, empty_Array, PThreadedCode8374, 1, PSend8377);
    // ifTrue:. 
    Send PSend8372 = new_Send((Optr)PSend8371, SMB_ifTrue_, 1, (Optr)PBlock8373);
    // assignAt:in:to:. 
    Send PSend8378 = new_Send((Optr)slot_Runtime_BlockContext_outerScope, SMB_assignAt_in_to_, 3, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1, (Optr)VAR_value_0_2);
    Array PThreadedCode8370 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8371, (Optr)&t_send_ifTrue_, (Optr)PSend8372, (Optr)PBlock8373, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send3, (Optr)PSend8378, (Optr)&t_method_return);
    Block PBlock8368 = new_Block_with(PArray8369, empty_Array, PThreadedCode8370, 2, PSend8372, PSend8378);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8379 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8368);
    Array PThreadedCode8367 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8368, (Optr)&t_send1, (Optr)PSend8379, (Optr)&t_method_return);
    Method PMethod8365 = new_Method_with(PArray8366, empty_Array, empty_Array, PThreadedCode8367, 1, PSend8379);
    
    MethodClosure MC_SMB_assignAt_in_to_ = new_MethodClosure((Method)PMethod8365, BlockContext_Class);
    store_method(BlockContext_Class, SMB_assignAt_in_to_, MC_SMB_assignAt_in_to_);
}


static void init_SMB_outerScope() {
    Symbol SMB_outerScope = new_Symbol(L"outerScope");
    Array PThreadedCode8381 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_method_return);
    Method PMethod8380 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8381, 1, slot_Runtime_BlockContext_outerScope);
    
    MethodClosure MC_SMB_outerScope = new_MethodClosure((Method)PMethod8380, BlockContext_Class);
    store_method(BlockContext_Class, SMB_outerScope, MC_SMB_outerScope);
}


static void init_SMB_outerScope_() {
    Symbol SMB_outerScope_ = new_Symbol(L"outerScope:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8383 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8385 = new_Assign((Optr)slot_Runtime_BlockContext_outerScope, (Optr)VAR_aContext_0_0);
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    // scopeId. 
    Send PSend8388 = new_Send((Optr)slot_Runtime_BlockContext_outerScope, SMB_scopeId, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8387 = new_Send((Optr)PSend8388, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign8386 = new_Assign((Optr)slot_Runtime_Context_scopeId, (Optr)PSend8387);
    Array PThreadedCode8384 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign8385, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8386, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_send0, (Optr)PSend8388, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8387, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8382 = new_Method_with(PArray8383, empty_Array, empty_Array, PThreadedCode8384, 3, PAssign8385, PAssign8386, self);
    
    MethodClosure MC_SMB_outerScope_ = new_MethodClosure((Method)PMethod8382, BlockContext_Class);
    store_method(BlockContext_Class, SMB_outerScope_, MC_SMB_outerScope_);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Variable VAR_clone_0_0 = new_Variable_named(L"clone", 0);
    Array PArray8390 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Super PSuper8393 = new_Super(SMB_freeze, 0);
    Assign PAssign8392 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSuper8393);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend8394 = new_Send((Optr)VAR_clone_0_0, SMB_homeContext_, 1, (Optr)slot_Runtime_Context_homeContext);
    Array PThreadedCode8391 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8392, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8393, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_homeContext, (Optr)&t_send1, (Optr)PSend8394, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8389 = new_Method_with(empty_Array, PArray8390, empty_Array, PThreadedCode8391, 3, PAssign8392, PSend8394, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8389, BlockContext_Class);
    store_method(BlockContext_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray8396 = new_Array_with(1, (Optr)VAR_context_0_0);
    Super PSuper8399 = new_Super(SMB_asAliased, 0);
    Assign PAssign8398 = new_Assign((Optr)VAR_context_0_0, (Optr)PSuper8399);
    // asAliased. 
    Send PSend8400 = new_Send((Optr)slot_Runtime_Context_homeContext, SMB_asAliased, 0);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend8401 = new_Send((Optr)VAR_context_0_0, SMB_homeContext_, 1, (Optr)PSend8400);
    Symbol SMB_outerScope_ = new_Symbol(L"outerScope:");
    // outerScope:. 
    Send PSend8402 = new_Send((Optr)VAR_context_0_0, SMB_outerScope_, 1, (Optr)slot_Runtime_BlockContext_outerScope);
    Array PThreadedCode8397 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign8398, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8399, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_homeContext, (Optr)&t_send0, (Optr)PSend8400, (Optr)&t_send1, (Optr)PSend8401, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_send1, (Optr)PSend8402, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_method_return);
    Method PMethod8395 = new_Method_with(empty_Array, PArray8396, empty_Array, PThreadedCode8397, 4, PAssign8398, PSend8401, PSend8402, VAR_context_0_0);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8395, BlockContext_Class);
    store_method(BlockContext_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_rawOuterScope_() {
    Symbol SMB_rawOuterScope_ = new_Symbol(L"rawOuterScope:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8404 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8406 = new_Assign((Optr)slot_Runtime_BlockContext_outerScope, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8405 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8406, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8403 = new_Method_with(PArray8404, empty_Array, empty_Array, PThreadedCode8405, 2, PAssign8406, self);
    
    MethodClosure MC_SMB_rawOuterScope_ = new_MethodClosure((Method)PMethod8403, BlockContext_Class);
    store_method(BlockContext_Class, SMB_rawOuterScope_, MC_SMB_rawOuterScope_);
}


static void init_SMB_lookupAt_in_() {
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Array PArray8408 = new_Array_with(2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8411 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8413 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8417 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8418 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend8417);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8419 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8418);
    Array PThreadedCode8416 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8417, (Optr)&t_send1, (Optr)PSend8418, (Optr)&t_send1, (Optr)PSend8419, (Optr)&t_block_return);
    Block PBlock8415 = new_Block_with(empty_Array, empty_Array, PThreadedCode8416, 1, PSend8419);
    // ifTrue:. 
    Send PSend8414 = new_Send((Optr)PSend8413, SMB_ifTrue_, 1, (Optr)PBlock8415);
    // lookupAt:in:. 
    Send PSend8420 = new_Send((Optr)slot_Runtime_BlockContext_outerScope, SMB_lookupAt_in_, 2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Array PThreadedCode8412 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8413, (Optr)&t_send_ifTrue_, (Optr)PSend8414, (Optr)PBlock8415, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send2, (Optr)PSend8420, (Optr)&t_method_return);
    Block PBlock8410 = new_Block_with(PArray8411, empty_Array, PThreadedCode8412, 2, PSend8414, PSend8420);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8421 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8410);
    Array PThreadedCode8409 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8410, (Optr)&t_send1, (Optr)PSend8421, (Optr)&t_method_return);
    Method PMethod8407 = new_Method_with(PArray8408, empty_Array, empty_Array, PThreadedCode8409, 1, PSend8421);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8407, BlockContext_Class);
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