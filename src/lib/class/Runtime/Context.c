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
    Array PArray8297 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8299 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray8301 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8303 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend8304 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend8303, (Optr)VAR_index_1_0);
    Array PThreadedCode8302 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend8303, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend8304, (Optr)&t_method_return);
    Block PBlock8300 = new_Block_with(PArray8301, empty_Array, PThreadedCode8302, 1, PSend8304);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend8305 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend8299, (Optr)PBlock8300);
    Array PThreadedCode8298 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8299, (Optr)&t_push_closure, (Optr)PBlock8300, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend8305, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8296 = new_Method_with(PArray8297, empty_Array, empty_Array, PThreadedCode8298, 2, PSend8305, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod8296, Context_Class);
    store_method(Context_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Variable VAR_clone_0_0 = new_Variable_named(L"clone", 0);
    Array PArray8307 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8311 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8312 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend8310 = new_Send((Optr)PSend8311, SMB_new_, 1, (Optr)PSend8312);
    Assign PAssign8309 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSend8310);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend8313 = new_Send((Optr)VAR_clone_0_0, SMB_closure_, 1, (Optr)slot_Runtime_Context_closure);
    // freeze. 
    Send PSend8314 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_freeze, 0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend8315 = new_Send((Optr)VAR_clone_0_0, SMB_returnContext_, 1, (Optr)PSend8314);
    Array PThreadedCode8308 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign8309, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8311, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8312, (Optr)&t_send1, (Optr)PSend8310, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send1, (Optr)PSend8313, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_send0, (Optr)PSend8314, (Optr)&t_send1, (Optr)PSend8315, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8306 = new_Method_with(empty_Array, PArray8307, empty_Array, PThreadedCode8308, 4, PAssign8309, PSend8313, PSend8315, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8306, Context_Class);
    store_method(Context_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_closure() {
    Symbol SMB_closure = new_Symbol(L"closure");
    Array PThreadedCode8317 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_method_return);
    Method PMethod8316 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8317, 1, slot_Runtime_Context_closure);
    
    MethodClosure MC_SMB_closure = new_MethodClosure((Method)PMethod8316, Context_Class);
    store_method(Context_Class, SMB_closure, MC_SMB_closure);
}


static void init_SMB_returnContext_() {
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8319 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8321 = new_Assign((Optr)slot_Runtime_Context_returnContext, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8320 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8321, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8318 = new_Method_with(PArray8319, empty_Array, empty_Array, PThreadedCode8320, 2, PAssign8321, self);
    
    MethodClosure MC_SMB_returnContext_ = new_MethodClosure((Method)PMethod8318, Context_Class);
    store_method(Context_Class, SMB_returnContext_, MC_SMB_returnContext_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray8323 = new_Array_with(1, (Optr)VAR_context_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8327 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8328 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend8326 = new_Send((Optr)PSend8327, SMB_new_, 1, (Optr)PSend8328);
    Assign PAssign8325 = new_Assign((Optr)VAR_context_0_0, (Optr)PSend8326);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend8329 = new_Send((Optr)VAR_context_0_0, SMB_returnContext_, 1, (Optr)slot_Runtime_Context_returnContext);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend8330 = new_Send((Optr)VAR_context_0_0, SMB_closure_, 1, (Optr)slot_Runtime_Context_closure);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray8332 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend8334 = new_Send((Optr)VAR_arg_1_0, SMB_asAllocationAlias_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8335 = new_Send((Optr)VAR_context_0_0, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend8334);
    Array PThreadedCode8333 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8334, (Optr)&t_send2, (Optr)PSend8335, (Optr)&t_method_return);
    Block PBlock8331 = new_Block_with(PArray8332, empty_Array, PThreadedCode8333, 1, PSend8335);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend8336 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock8331);
    Array PThreadedCode8324 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign8325, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8327, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8328, (Optr)&t_send1, (Optr)PSend8326, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_send1, (Optr)PSend8329, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send1, (Optr)PSend8330, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock8331, (Optr)&t_send1, (Optr)PSend8336, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_method_return);
    Method PMethod8322 = new_Method_with(empty_Array, PArray8323, empty_Array, PThreadedCode8324, 5, PAssign8325, PSend8329, PSend8330, PSend8336, VAR_context_0_0);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8322, Context_Class);
    store_method(Context_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Assign PAssign8339 = new_Assign((Optr)slot_Runtime_Context_stacked, (Optr)false_Const);
    Array PThreadedCode8338 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign8339, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8337 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8338, 2, PAssign8339, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8337, Context_Class);
    store_method(Context_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_homeContext() {
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    Array PThreadedCode8341 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_homeContext, (Optr)&t_method_return);
    Method PMethod8340 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8341, 1, slot_Runtime_Context_homeContext);
    
    MethodClosure MC_SMB_homeContext = new_MethodClosure((Method)PMethod8340, Context_Class);
    store_method(Context_Class, SMB_homeContext, MC_SMB_homeContext);
}


static void init_SMB_scopeId() {
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    Array PThreadedCode8343 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_method_return);
    Method PMethod8342 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8343, 1, slot_Runtime_Context_scopeId);
    
    MethodClosure MC_SMB_scopeId = new_MethodClosure((Method)PMethod8342, Context_Class);
    store_method(Context_Class, SMB_scopeId, MC_SMB_scopeId);
}


static void init_SMB_returnContext() {
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    Array PThreadedCode8345 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_method_return);
    Method PMethod8344 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8345, 1, slot_Runtime_Context_returnContext);
    
    MethodClosure MC_SMB_returnContext = new_MethodClosure((Method)PMethod8344, Context_Class);
    store_method(Context_Class, SMB_returnContext, MC_SMB_returnContext);
}


static void init_SMB_closure_() {
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray8347 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Assign PAssign8349 = new_Assign((Optr)slot_Runtime_Context_closure, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode8348 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8349, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8346 = new_Method_with(PArray8347, empty_Array, empty_Array, PThreadedCode8348, 2, PAssign8349, self);
    
    MethodClosure MC_SMB_closure_ = new_MethodClosure((Method)PMethod8346, Context_Class);
    store_method(Context_Class, SMB_closure_, MC_SMB_closure_);
}


static void init_SMB_homeContext_() {
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8351 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8353 = new_Assign((Optr)slot_Runtime_Context_homeContext, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8353, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8350 = new_Method_with(PArray8351, empty_Array, empty_Array, PThreadedCode8352, 2, PAssign8353, self);
    
    MethodClosure MC_SMB_homeContext_ = new_MethodClosure((Method)PMethod8350, Context_Class);
    store_method(Context_Class, SMB_homeContext_, MC_SMB_homeContext_);
}


static void init_SMB_printStacktraceOn_() {
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray8355 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printStacktraceOn:. 
    Send PSend8359 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_printStacktraceOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode8358 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend8359, (Optr)&t_block_return);
    Block PBlock8357 = new_Block_with(empty_Array, empty_Array, PThreadedCode8358, 1, PSend8359);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend8360 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_ifNotNil_, 1, (Optr)PBlock8357);
    Array PThreadedCode8356 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_closure, (Optr)PBlock8357, (Optr)&t_send1, (Optr)PSend8360, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8354 = new_Method_with(PArray8355, empty_Array, empty_Array, PThreadedCode8356, 2, PSend8360, self);
    
    MethodClosure MC_SMB_printStacktraceOn_ = new_MethodClosure((Method)PMethod8354, Context_Class);
    store_method(Context_Class, SMB_printStacktraceOn_, MC_SMB_printStacktraceOn_);
}


static void init_SMB_lookupAt_in_() {
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Array PArray8362 = new_Array_with(2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend8364 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode8363 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8364, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8361 = new_Method_with(PArray8362, empty_Array, empty_Array, PThreadedCode8363, 2, PSend8364, self);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8361, Context_Class);
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