#include <lib/class/Runtime/BlockContext.h>


Optr layout_Runtime_BlockContext_Class_class;
Optr slot_Runtime_BlockContext_outerScope;
Optr layout_Runtime_BlockContext;


static void init_SMB_assignAt_in_to_() {
    Symbol SMB_assignAt_in_to_ = new_Symbol(L"assignAt:in:to:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray8177 = new_Array_with(3, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8180 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8182 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8186 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8187 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend8186, (Optr)VAR_value_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8188 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8187);
    Array PThreadedCode8185 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8186, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend8187, (Optr)&t_send1, (Optr)PSend8188, (Optr)&t_block_return);
    Block PBlock8184 = new_Block_with(empty_Array, empty_Array, PThreadedCode8185, 1, PSend8188);
    // ifTrue:. 
    Send PSend8183 = new_Send((Optr)PSend8182, SMB_ifTrue_, 1, (Optr)PBlock8184);
    // assignAt:in:to:. 
    Send PSend8189 = new_Send((Optr)slot_Runtime_BlockContext_outerScope, SMB_assignAt_in_to_, 3, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1, (Optr)VAR_value_0_2);
    Array PThreadedCode8181 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8182, (Optr)&t_send_ifTrue_, (Optr)PSend8183, (Optr)PBlock8184, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send3, (Optr)PSend8189, (Optr)&t_method_return);
    Block PBlock8179 = new_Block_with(PArray8180, empty_Array, PThreadedCode8181, 2, PSend8183, PSend8189);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8190 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8179);
    Array PThreadedCode8178 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8179, (Optr)&t_send1, (Optr)PSend8190, (Optr)&t_method_return);
    Method PMethod8176 = new_Method_with(PArray8177, empty_Array, empty_Array, PThreadedCode8178, 1, PSend8190);
    
    MethodClosure MC_SMB_assignAt_in_to_ = new_MethodClosure((Method)PMethod8176, BlockContext_Class);
    store_method(BlockContext_Class, SMB_assignAt_in_to_, MC_SMB_assignAt_in_to_);
}


static void init_SMB_outerScope() {
    Symbol SMB_outerScope = new_Symbol(L"outerScope");
    Array PThreadedCode8192 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_method_return);
    Method PMethod8191 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8192, 1, slot_Runtime_BlockContext_outerScope);
    
    MethodClosure MC_SMB_outerScope = new_MethodClosure((Method)PMethod8191, BlockContext_Class);
    store_method(BlockContext_Class, SMB_outerScope, MC_SMB_outerScope);
}


static void init_SMB_outerScope_() {
    Symbol SMB_outerScope_ = new_Symbol(L"outerScope:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8194 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8196 = new_Assign((Optr)slot_Runtime_BlockContext_outerScope, (Optr)VAR_aContext_0_0);
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    // scopeId. 
    Send PSend8199 = new_Send((Optr)slot_Runtime_BlockContext_outerScope, SMB_scopeId, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8198 = new_Send((Optr)PSend8199, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign8197 = new_Assign((Optr)slot_Runtime_Context_scopeId, (Optr)PSend8198);
    Array PThreadedCode8195 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign8196, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8197, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_send0, (Optr)PSend8199, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8198, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8193 = new_Method_with(PArray8194, empty_Array, empty_Array, PThreadedCode8195, 3, PAssign8196, PAssign8197, self);
    
    MethodClosure MC_SMB_outerScope_ = new_MethodClosure((Method)PMethod8193, BlockContext_Class);
    store_method(BlockContext_Class, SMB_outerScope_, MC_SMB_outerScope_);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Variable VAR_clone_0_0 = new_Variable_named(L"clone", 0);
    Array PArray8201 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Super PSuper8204 = new_Super(SMB_freeze, 0);
    Assign PAssign8203 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSuper8204);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend8205 = new_Send((Optr)VAR_clone_0_0, SMB_homeContext_, 1, (Optr)slot_Runtime_Context_homeContext);
    Array PThreadedCode8202 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8203, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8204, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_homeContext, (Optr)&t_send1, (Optr)PSend8205, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8200 = new_Method_with(empty_Array, PArray8201, empty_Array, PThreadedCode8202, 3, PAssign8203, PSend8205, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8200, BlockContext_Class);
    store_method(BlockContext_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray8207 = new_Array_with(1, (Optr)VAR_context_0_0);
    Super PSuper8210 = new_Super(SMB_asAliased, 0);
    Assign PAssign8209 = new_Assign((Optr)VAR_context_0_0, (Optr)PSuper8210);
    // asAliased. 
    Send PSend8211 = new_Send((Optr)slot_Runtime_Context_homeContext, SMB_asAliased, 0);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend8212 = new_Send((Optr)VAR_context_0_0, SMB_homeContext_, 1, (Optr)PSend8211);
    Symbol SMB_outerScope_ = new_Symbol(L"outerScope:");
    // outerScope:. 
    Send PSend8213 = new_Send((Optr)VAR_context_0_0, SMB_outerScope_, 1, (Optr)slot_Runtime_BlockContext_outerScope);
    Array PThreadedCode8208 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign8209, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8210, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_homeContext, (Optr)&t_send0, (Optr)PSend8211, (Optr)&t_send1, (Optr)PSend8212, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_send1, (Optr)PSend8213, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_method_return);
    Method PMethod8206 = new_Method_with(empty_Array, PArray8207, empty_Array, PThreadedCode8208, 4, PAssign8209, PSend8212, PSend8213, VAR_context_0_0);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8206, BlockContext_Class);
    store_method(BlockContext_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_rawOuterScope_() {
    Symbol SMB_rawOuterScope_ = new_Symbol(L"rawOuterScope:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8215 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8217 = new_Assign((Optr)slot_Runtime_BlockContext_outerScope, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8216 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8217, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8214 = new_Method_with(PArray8215, empty_Array, empty_Array, PThreadedCode8216, 2, PAssign8217, self);
    
    MethodClosure MC_SMB_rawOuterScope_ = new_MethodClosure((Method)PMethod8214, BlockContext_Class);
    store_method(BlockContext_Class, SMB_rawOuterScope_, MC_SMB_rawOuterScope_);
}


static void init_SMB_lookupAt_in_() {
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Array PArray8219 = new_Array_with(2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8222 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8224 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8228 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8229 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend8228);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8230 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8229);
    Array PThreadedCode8227 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8228, (Optr)&t_send1, (Optr)PSend8229, (Optr)&t_send1, (Optr)PSend8230, (Optr)&t_block_return);
    Block PBlock8226 = new_Block_with(empty_Array, empty_Array, PThreadedCode8227, 1, PSend8230);
    // ifTrue:. 
    Send PSend8225 = new_Send((Optr)PSend8224, SMB_ifTrue_, 1, (Optr)PBlock8226);
    // lookupAt:in:. 
    Send PSend8231 = new_Send((Optr)slot_Runtime_BlockContext_outerScope, SMB_lookupAt_in_, 2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Array PThreadedCode8223 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8224, (Optr)&t_send_ifTrue_, (Optr)PSend8225, (Optr)PBlock8226, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send2, (Optr)PSend8231, (Optr)&t_method_return);
    Block PBlock8221 = new_Block_with(PArray8222, empty_Array, PThreadedCode8223, 2, PSend8225, PSend8231);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8232 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8221);
    Array PThreadedCode8220 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8221, (Optr)&t_send1, (Optr)PSend8232, (Optr)&t_method_return);
    Method PMethod8218 = new_Method_with(PArray8219, empty_Array, empty_Array, PThreadedCode8220, 1, PSend8232);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8218, BlockContext_Class);
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