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
    Array PArray8063 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8065 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray8067 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8069 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend8070 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend8069, (Optr)VAR_index_1_0);
    Array PThreadedCode8068 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend8069, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend8070, (Optr)&t_method_return);
    Block PBlock8066 = new_Block_with(PArray8067, empty_Array, PThreadedCode8068, 1, PSend8070);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend8071 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend8065, (Optr)PBlock8066);
    Array PThreadedCode8064 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8065, (Optr)&t_push_closure, (Optr)PBlock8066, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend8071, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8062 = new_Method_with(PArray8063, empty_Array, empty_Array, PThreadedCode8064, 2, PSend8071, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod8062, Context_Class);
    store_method(Context_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Variable VAR_clone_0_0 = new_Variable_named(L"clone", 0);
    Array PArray8073 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8077 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8078 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend8076 = new_Send((Optr)PSend8077, SMB_new_, 1, (Optr)PSend8078);
    Assign PAssign8075 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSend8076);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend8079 = new_Send((Optr)VAR_clone_0_0, SMB_closure_, 1, (Optr)slot_Runtime_Context_closure);
    // freeze. 
    Send PSend8080 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_freeze, 0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend8081 = new_Send((Optr)VAR_clone_0_0, SMB_returnContext_, 1, (Optr)PSend8080);
    Array PThreadedCode8074 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign8075, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8077, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8078, (Optr)&t_send1, (Optr)PSend8076, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send1, (Optr)PSend8079, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_send0, (Optr)PSend8080, (Optr)&t_send1, (Optr)PSend8081, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8072 = new_Method_with(empty_Array, PArray8073, empty_Array, PThreadedCode8074, 4, PAssign8075, PSend8079, PSend8081, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8072, Context_Class);
    store_method(Context_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_closure() {
    Symbol SMB_closure = new_Symbol(L"closure");
    Array PThreadedCode8083 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_method_return);
    Method PMethod8082 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8083, 1, slot_Runtime_Context_closure);
    
    MethodClosure MC_SMB_closure = new_MethodClosure((Method)PMethod8082, Context_Class);
    store_method(Context_Class, SMB_closure, MC_SMB_closure);
}


static void init_SMB_returnContext_() {
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8085 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8087 = new_Assign((Optr)slot_Runtime_Context_returnContext, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8086 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8087, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8084 = new_Method_with(PArray8085, empty_Array, empty_Array, PThreadedCode8086, 2, PAssign8087, self);
    
    MethodClosure MC_SMB_returnContext_ = new_MethodClosure((Method)PMethod8084, Context_Class);
    store_method(Context_Class, SMB_returnContext_, MC_SMB_returnContext_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray8089 = new_Array_with(1, (Optr)VAR_context_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8093 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8094 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend8092 = new_Send((Optr)PSend8093, SMB_new_, 1, (Optr)PSend8094);
    Assign PAssign8091 = new_Assign((Optr)VAR_context_0_0, (Optr)PSend8092);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend8095 = new_Send((Optr)VAR_context_0_0, SMB_returnContext_, 1, (Optr)slot_Runtime_Context_returnContext);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend8096 = new_Send((Optr)VAR_context_0_0, SMB_closure_, 1, (Optr)slot_Runtime_Context_closure);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray8098 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend8100 = new_Send((Optr)VAR_arg_1_0, SMB_asAllocationAlias_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8101 = new_Send((Optr)VAR_context_0_0, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend8100);
    Array PThreadedCode8099 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8100, (Optr)&t_send2, (Optr)PSend8101, (Optr)&t_method_return);
    Block PBlock8097 = new_Block_with(PArray8098, empty_Array, PThreadedCode8099, 1, PSend8101);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend8102 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock8097);
    Array PThreadedCode8090 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign8091, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8093, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8094, (Optr)&t_send1, (Optr)PSend8092, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_send1, (Optr)PSend8095, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send1, (Optr)PSend8096, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock8097, (Optr)&t_send1, (Optr)PSend8102, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_method_return);
    Method PMethod8088 = new_Method_with(empty_Array, PArray8089, empty_Array, PThreadedCode8090, 5, PAssign8091, PSend8095, PSend8096, PSend8102, VAR_context_0_0);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8088, Context_Class);
    store_method(Context_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Assign PAssign8105 = new_Assign((Optr)slot_Runtime_Context_stacked, (Optr)false_Const);
    Array PThreadedCode8104 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign8105, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8103 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8104, 2, PAssign8105, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8103, Context_Class);
    store_method(Context_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_homeContext() {
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    Array PThreadedCode8107 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_homeContext, (Optr)&t_method_return);
    Method PMethod8106 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8107, 1, slot_Runtime_Context_homeContext);
    
    MethodClosure MC_SMB_homeContext = new_MethodClosure((Method)PMethod8106, Context_Class);
    store_method(Context_Class, SMB_homeContext, MC_SMB_homeContext);
}


static void init_SMB_scopeId() {
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    Array PThreadedCode8109 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_method_return);
    Method PMethod8108 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8109, 1, slot_Runtime_Context_scopeId);
    
    MethodClosure MC_SMB_scopeId = new_MethodClosure((Method)PMethod8108, Context_Class);
    store_method(Context_Class, SMB_scopeId, MC_SMB_scopeId);
}


static void init_SMB_returnContext() {
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    Array PThreadedCode8111 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_method_return);
    Method PMethod8110 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8111, 1, slot_Runtime_Context_returnContext);
    
    MethodClosure MC_SMB_returnContext = new_MethodClosure((Method)PMethod8110, Context_Class);
    store_method(Context_Class, SMB_returnContext, MC_SMB_returnContext);
}


static void init_SMB_closure_() {
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray8113 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Assign PAssign8115 = new_Assign((Optr)slot_Runtime_Context_closure, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode8114 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8115, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8112 = new_Method_with(PArray8113, empty_Array, empty_Array, PThreadedCode8114, 2, PAssign8115, self);
    
    MethodClosure MC_SMB_closure_ = new_MethodClosure((Method)PMethod8112, Context_Class);
    store_method(Context_Class, SMB_closure_, MC_SMB_closure_);
}


static void init_SMB_homeContext_() {
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8117 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8119 = new_Assign((Optr)slot_Runtime_Context_homeContext, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8118 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8119, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8116 = new_Method_with(PArray8117, empty_Array, empty_Array, PThreadedCode8118, 2, PAssign8119, self);
    
    MethodClosure MC_SMB_homeContext_ = new_MethodClosure((Method)PMethod8116, Context_Class);
    store_method(Context_Class, SMB_homeContext_, MC_SMB_homeContext_);
}


static void init_SMB_printStacktraceOn_() {
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray8121 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printStacktraceOn:. 
    Send PSend8125 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_printStacktraceOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode8124 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend8125, (Optr)&t_block_return);
    Block PBlock8123 = new_Block_with(empty_Array, empty_Array, PThreadedCode8124, 1, PSend8125);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend8126 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_ifNotNil_, 1, (Optr)PBlock8123);
    Array PThreadedCode8122 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_closure, (Optr)PBlock8123, (Optr)&t_send1, (Optr)PSend8126, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8120 = new_Method_with(PArray8121, empty_Array, empty_Array, PThreadedCode8122, 2, PSend8126, self);
    
    MethodClosure MC_SMB_printStacktraceOn_ = new_MethodClosure((Method)PMethod8120, Context_Class);
    store_method(Context_Class, SMB_printStacktraceOn_, MC_SMB_printStacktraceOn_);
}


static void init_SMB_lookupAt_in_() {
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Array PArray8128 = new_Array_with(2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend8130 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode8129 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8130, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8127 = new_Method_with(PArray8128, empty_Array, empty_Array, PThreadedCode8129, 2, PSend8130, self);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8127, Context_Class);
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