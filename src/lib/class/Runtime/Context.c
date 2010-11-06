#include <lib/class/Runtime/Context.h>


Optr layout_Runtime_Context_Class_class;
Optr slot_Runtime_Context_scopeId;
Optr slot_Runtime_Context_stacked;
Optr slot_Runtime_Context_closure;
Optr slot_Runtime_Context_homeContext;
Optr slot_Runtime_Context_returnContext;
Optr layout_Runtime_Context;


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray8108 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8110 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray8112 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8114 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend8115 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend8114, (Optr)VAR_index_1_0);
    Array PThreadedCode8113 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend8114, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend8115, (Optr)&t_method_return);
    Block PBlock8111 = new_Block_with(PArray8112, empty_Array, PThreadedCode8113, 1, PSend8115);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend8116 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend8110, (Optr)PBlock8111);
    Array PThreadedCode8109 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8110, (Optr)&t_push_closure, (Optr)PBlock8111, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend8116, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8107 = new_Method_with(PArray8108, empty_Array, empty_Array, PThreadedCode8109, 2, PSend8116, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod8107, Context_Class);
    store_method(Context_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Variable VAR_clone_0_0 = new_Variable_named(L"clone", 0);
    Array PArray8118 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8122 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8123 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend8121 = new_Send((Optr)PSend8122, SMB_new_, 1, (Optr)PSend8123);
    Assign PAssign8120 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSend8121);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend8124 = new_Send((Optr)VAR_clone_0_0, SMB_closure_, 1, (Optr)slot_Runtime_Context_closure);
    // freeze. 
    Send PSend8125 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_freeze, 0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend8126 = new_Send((Optr)VAR_clone_0_0, SMB_returnContext_, 1, (Optr)PSend8125);
    Array PThreadedCode8119 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign8120, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8122, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8123, (Optr)&t_send1, (Optr)PSend8121, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send1, (Optr)PSend8124, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_send0, (Optr)PSend8125, (Optr)&t_send1, (Optr)PSend8126, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8117 = new_Method_with(empty_Array, PArray8118, empty_Array, PThreadedCode8119, 4, PAssign8120, PSend8124, PSend8126, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8117, Context_Class);
    store_method(Context_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_closure() {
    Symbol SMB_closure = new_Symbol(L"closure");
    Array PThreadedCode8128 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_method_return);
    Method PMethod8127 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8128, 1, slot_Runtime_Context_closure);
    
    MethodClosure MC_SMB_closure = new_MethodClosure((Method)PMethod8127, Context_Class);
    store_method(Context_Class, SMB_closure, MC_SMB_closure);
}


static void init_SMB_returnContext_() {
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8130 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8132 = new_Assign((Optr)slot_Runtime_Context_returnContext, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8131 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8132, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8129 = new_Method_with(PArray8130, empty_Array, empty_Array, PThreadedCode8131, 2, PAssign8132, self);
    
    MethodClosure MC_SMB_returnContext_ = new_MethodClosure((Method)PMethod8129, Context_Class);
    store_method(Context_Class, SMB_returnContext_, MC_SMB_returnContext_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray8134 = new_Array_with(1, (Optr)VAR_context_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8138 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8139 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend8137 = new_Send((Optr)PSend8138, SMB_new_, 1, (Optr)PSend8139);
    Assign PAssign8136 = new_Assign((Optr)VAR_context_0_0, (Optr)PSend8137);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend8140 = new_Send((Optr)VAR_context_0_0, SMB_returnContext_, 1, (Optr)slot_Runtime_Context_returnContext);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend8141 = new_Send((Optr)VAR_context_0_0, SMB_closure_, 1, (Optr)slot_Runtime_Context_closure);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray8143 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend8145 = new_Send((Optr)VAR_arg_1_0, SMB_asAllocationAlias_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8146 = new_Send((Optr)VAR_context_0_0, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend8145);
    Array PThreadedCode8144 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8145, (Optr)&t_send2, (Optr)PSend8146, (Optr)&t_method_return);
    Block PBlock8142 = new_Block_with(PArray8143, empty_Array, PThreadedCode8144, 1, PSend8146);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend8147 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock8142);
    Array PThreadedCode8135 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign8136, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8138, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8139, (Optr)&t_send1, (Optr)PSend8137, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_send1, (Optr)PSend8140, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send1, (Optr)PSend8141, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock8142, (Optr)&t_send1, (Optr)PSend8147, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_method_return);
    Method PMethod8133 = new_Method_with(empty_Array, PArray8134, empty_Array, PThreadedCode8135, 5, PAssign8136, PSend8140, PSend8141, PSend8147, VAR_context_0_0);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8133, Context_Class);
    store_method(Context_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Assign PAssign8150 = new_Assign((Optr)slot_Runtime_Context_stacked, (Optr)false_Const);
    Array PThreadedCode8149 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign8150, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8148 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8149, 2, PAssign8150, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8148, Context_Class);
    store_method(Context_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_homeContext() {
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    Array PThreadedCode8152 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_homeContext, (Optr)&t_method_return);
    Method PMethod8151 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8152, 1, slot_Runtime_Context_homeContext);
    
    MethodClosure MC_SMB_homeContext = new_MethodClosure((Method)PMethod8151, Context_Class);
    store_method(Context_Class, SMB_homeContext, MC_SMB_homeContext);
}


static void init_SMB_scopeId() {
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    Array PThreadedCode8154 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_method_return);
    Method PMethod8153 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8154, 1, slot_Runtime_Context_scopeId);
    
    MethodClosure MC_SMB_scopeId = new_MethodClosure((Method)PMethod8153, Context_Class);
    store_method(Context_Class, SMB_scopeId, MC_SMB_scopeId);
}


static void init_SMB_returnContext() {
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    Array PThreadedCode8156 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_method_return);
    Method PMethod8155 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8156, 1, slot_Runtime_Context_returnContext);
    
    MethodClosure MC_SMB_returnContext = new_MethodClosure((Method)PMethod8155, Context_Class);
    store_method(Context_Class, SMB_returnContext, MC_SMB_returnContext);
}


static void init_SMB_closure_() {
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray8158 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Assign PAssign8160 = new_Assign((Optr)slot_Runtime_Context_closure, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode8159 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8160, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8157 = new_Method_with(PArray8158, empty_Array, empty_Array, PThreadedCode8159, 2, PAssign8160, self);
    
    MethodClosure MC_SMB_closure_ = new_MethodClosure((Method)PMethod8157, Context_Class);
    store_method(Context_Class, SMB_closure_, MC_SMB_closure_);
}


static void init_SMB_homeContext_() {
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8162 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8164 = new_Assign((Optr)slot_Runtime_Context_homeContext, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8163 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8164, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8161 = new_Method_with(PArray8162, empty_Array, empty_Array, PThreadedCode8163, 2, PAssign8164, self);
    
    MethodClosure MC_SMB_homeContext_ = new_MethodClosure((Method)PMethod8161, Context_Class);
    store_method(Context_Class, SMB_homeContext_, MC_SMB_homeContext_);
}


static void init_SMB_printStacktraceOn_() {
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray8166 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printStacktraceOn:. 
    Send PSend8170 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_printStacktraceOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode8169 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend8170, (Optr)&t_block_return);
    Block PBlock8168 = new_Block_with(empty_Array, empty_Array, PThreadedCode8169, 1, PSend8170);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend8171 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_ifNotNil_, 1, (Optr)PBlock8168);
    Array PThreadedCode8167 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_closure, (Optr)PBlock8168, (Optr)&t_send1, (Optr)PSend8171, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8165 = new_Method_with(PArray8166, empty_Array, empty_Array, PThreadedCode8167, 2, PSend8171, self);
    
    MethodClosure MC_SMB_printStacktraceOn_ = new_MethodClosure((Method)PMethod8165, Context_Class);
    store_method(Context_Class, SMB_printStacktraceOn_, MC_SMB_printStacktraceOn_);
}


static void init_SMB_lookupAt_in_() {
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Array PArray8173 = new_Array_with(2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend8175 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode8174 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8175, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8172 = new_Method_with(PArray8173, empty_Array, empty_Array, PThreadedCode8174, 2, PSend8175, self);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8172, Context_Class);
    store_method(Context_Class, SMB_lookupAt_in_, MC_SMB_lookupAt_in_);
}

void init_Runtime_PContext_layout() {
    layout_Runtime_Context_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Runtime_Context_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_Context_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_Context_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_Context_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_Context_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Context = new_Symbol(L"Context");
    slot_Runtime_Context_scopeId = (Optr)new_Slot(0, L"scopeId");
    slot_Runtime_Context_stacked = (Optr)new_Slot(1, L"stacked");
    slot_Runtime_Context_closure = (Optr)new_Slot(2, L"closure");
    slot_Runtime_Context_homeContext = (Optr)new_Slot(3, L"homeContext");
    slot_Runtime_Context_returnContext = (Optr)new_Slot(4, L"returnContext");
    layout_Runtime_Context = (Optr)create_layout_with_vars(ArrayLayout_Class, 5);
    ((Array)layout_Runtime_Context)->values[0] = slot_Runtime_Context_scopeId;
    ((Array)layout_Runtime_Context)->values[1] = slot_Runtime_Context_stacked;
    ((Array)layout_Runtime_Context)->values[2] = slot_Runtime_Context_closure;
    ((Array)layout_Runtime_Context)->values[3] = slot_Runtime_Context_homeContext;
    ((Array)layout_Runtime_Context)->values[4] = slot_Runtime_Context_returnContext;
    Context_Class = (Class)new_Class(Object_Class, layout_Runtime_Context_Class_class);
    Context_Class->layout = layout_Runtime_Context;
    Context_Class->name = SMB_Context;
    
}

void init_Runtime_PContext_methods() {
    init_SMB_withIndexDo_();
    init_SMB_freeze();
    init_SMB_closure();
    init_SMB_returnContext_();
    init_SMB_asAliased();
    init_SMB_initialize();
    init_SMB_homeContext();
    init_SMB_scopeId();
    init_SMB_returnContext();
    init_SMB_closure_();
    init_SMB_homeContext_();
    init_SMB_printStacktraceOn_();
    init_SMB_lookupAt_in_();
    
}