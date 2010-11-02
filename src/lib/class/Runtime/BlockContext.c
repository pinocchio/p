#include <lib/class/Runtime/BlockContext.h>


Optr layout_Runtime_BlockContext_Class_class;
Optr slot_Runtime_BlockContext_outerScope;
Optr layout_Runtime_BlockContext;


static void init_SMB_assignAt_in_to_() {
    Symbol SMB_assignAt_in_to_ = new_Symbol(L"assignAt:in:to:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Array PArray8108 = new_Array_with(3, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1, (Optr)VAR_value_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8111 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8113 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8117 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8118 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend8117, (Optr)VAR_value_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8119 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8118);
    Array PThreadedCode8116 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8117, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send2, (Optr)PSend8118, (Optr)&t_send1, (Optr)PSend8119, (Optr)&t_block_return);
    Block PBlock8115 = new_Block_with(empty_Array, empty_Array, PThreadedCode8116, 1, PSend8119);
    // ifTrue:. 
    Send PSend8114 = new_Send((Optr)PSend8113, SMB_ifTrue_, 1, (Optr)PBlock8115);
    // assignAt:in:to:. 
    Send PSend8120 = new_Send((Optr)slot_Runtime_BlockContext_outerScope, SMB_assignAt_in_to_, 3, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1, (Optr)VAR_value_0_2);
    Array PThreadedCode8112 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8113, (Optr)&t_send_ifTrue_, (Optr)PSend8114, (Optr)PBlock8115, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send3, (Optr)PSend8120, (Optr)&t_method_return);
    Block PBlock8110 = new_Block_with(PArray8111, empty_Array, PThreadedCode8112, 2, PSend8114, PSend8120);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8121 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8110);
    Array PThreadedCode8109 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8110, (Optr)&t_send1, (Optr)PSend8121, (Optr)&t_method_return);
    Method PMethod8107 = new_Method_with(PArray8108, empty_Array, empty_Array, PThreadedCode8109, 1, PSend8121);
    
    MethodClosure MC_SMB_assignAt_in_to_ = new_MethodClosure((Method)PMethod8107, BlockContext_Class);
    store_method(BlockContext_Class, SMB_assignAt_in_to_, MC_SMB_assignAt_in_to_);
}


static void init_SMB_outerScope() {
    Symbol SMB_outerScope = new_Symbol(L"outerScope");
    Array PThreadedCode8123 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_method_return);
    Method PMethod8122 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8123, 1, slot_Runtime_BlockContext_outerScope);
    
    MethodClosure MC_SMB_outerScope = new_MethodClosure((Method)PMethod8122, BlockContext_Class);
    store_method(BlockContext_Class, SMB_outerScope, MC_SMB_outerScope);
}


static void init_SMB_outerScope_() {
    Symbol SMB_outerScope_ = new_Symbol(L"outerScope:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8125 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8127 = new_Assign((Optr)slot_Runtime_BlockContext_outerScope, (Optr)VAR_aContext_0_0);
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    // scopeId. 
    Send PSend8130 = new_Send((Optr)slot_Runtime_BlockContext_outerScope, SMB_scopeId, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8129 = new_Send((Optr)PSend8130, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign8128 = new_Assign((Optr)slot_Runtime_Context_scopeId, (Optr)PSend8129);
    Array PThreadedCode8126 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign8127, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8128, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_send0, (Optr)PSend8130, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8129, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8124 = new_Method_with(PArray8125, empty_Array, empty_Array, PThreadedCode8126, 3, PAssign8127, PAssign8128, self);
    
    MethodClosure MC_SMB_outerScope_ = new_MethodClosure((Method)PMethod8124, BlockContext_Class);
    store_method(BlockContext_Class, SMB_outerScope_, MC_SMB_outerScope_);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Variable VAR_clone_0_0 = new_Variable_named(L"clone", 0);
    Array PArray8132 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Super PSuper8135 = new_Super(SMB_freeze, 0);
    Assign PAssign8134 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSuper8135);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend8136 = new_Send((Optr)VAR_clone_0_0, SMB_homeContext_, 1, (Optr)slot_Runtime_Context_homeContext);
    Array PThreadedCode8133 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8134, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8135, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_homeContext, (Optr)&t_send1, (Optr)PSend8136, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8131 = new_Method_with(empty_Array, PArray8132, empty_Array, PThreadedCode8133, 3, PAssign8134, PSend8136, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8131, BlockContext_Class);
    store_method(BlockContext_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray8138 = new_Array_with(1, (Optr)VAR_context_0_0);
    Super PSuper8141 = new_Super(SMB_asAliased, 0);
    Assign PAssign8140 = new_Assign((Optr)VAR_context_0_0, (Optr)PSuper8141);
    // asAliased. 
    Send PSend8142 = new_Send((Optr)slot_Runtime_Context_homeContext, SMB_asAliased, 0);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend8143 = new_Send((Optr)VAR_context_0_0, SMB_homeContext_, 1, (Optr)PSend8142);
    Symbol SMB_outerScope_ = new_Symbol(L"outerScope:");
    // outerScope:. 
    Send PSend8144 = new_Send((Optr)VAR_context_0_0, SMB_outerScope_, 1, (Optr)slot_Runtime_BlockContext_outerScope);
    Array PThreadedCode8139 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign8140, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8141, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_homeContext, (Optr)&t_send0, (Optr)PSend8142, (Optr)&t_send1, (Optr)PSend8143, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_send1, (Optr)PSend8144, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_method_return);
    Method PMethod8137 = new_Method_with(empty_Array, PArray8138, empty_Array, PThreadedCode8139, 4, PAssign8140, PSend8143, PSend8144, VAR_context_0_0);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8137, BlockContext_Class);
    store_method(BlockContext_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_rawOuterScope_() {
    Symbol SMB_rawOuterScope_ = new_Symbol(L"rawOuterScope:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8146 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8148 = new_Assign((Optr)slot_Runtime_BlockContext_outerScope, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8147 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8148, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8145 = new_Method_with(PArray8146, empty_Array, empty_Array, PThreadedCode8147, 2, PAssign8148, self);
    
    MethodClosure MC_SMB_rawOuterScope_ = new_MethodClosure((Method)PMethod8145, BlockContext_Class);
    store_method(BlockContext_Class, SMB_rawOuterScope_, MC_SMB_rawOuterScope_);
}


static void init_SMB_lookupAt_in_() {
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Array PArray8150 = new_Array_with(2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8153 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8155 = new_Send((Optr)VAR_scope_0_1, SMB__equals_, 1, (Optr)slot_Runtime_Context_scopeId);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend8159 = new_Send((Optr)VAR_local_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8160 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend8159);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8161 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8160);
    Array PThreadedCode8158 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8159, (Optr)&t_send1, (Optr)PSend8160, (Optr)&t_send1, (Optr)PSend8161, (Optr)&t_block_return);
    Block PBlock8157 = new_Block_with(empty_Array, empty_Array, PThreadedCode8158, 1, PSend8161);
    // ifTrue:. 
    Send PSend8156 = new_Send((Optr)PSend8155, SMB_ifTrue_, 1, (Optr)PBlock8157);
    // lookupAt:in:. 
    Send PSend8162 = new_Send((Optr)slot_Runtime_BlockContext_outerScope, SMB_lookupAt_in_, 2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Array PThreadedCode8154 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_send1, (Optr)PSend8155, (Optr)&t_send_ifTrue_, (Optr)PSend8156, (Optr)PBlock8157, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockContext_outerScope, (Optr)&t_push_variable, (Optr)VAR_local_0_0, (Optr)&t_push_variable, (Optr)VAR_scope_0_1, (Optr)&t_send2, (Optr)PSend8162, (Optr)&t_method_return);
    Block PBlock8152 = new_Block_with(PArray8153, empty_Array, PThreadedCode8154, 2, PSend8156, PSend8162);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8163 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8152);
    Array PThreadedCode8151 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8152, (Optr)&t_send1, (Optr)PSend8163, (Optr)&t_method_return);
    Method PMethod8149 = new_Method_with(PArray8150, empty_Array, empty_Array, PThreadedCode8151, 1, PSend8163);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8149, BlockContext_Class);
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