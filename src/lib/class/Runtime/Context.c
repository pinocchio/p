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
    Array PArray8329 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8331 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray8333 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8335 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend8336 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend8335, (Optr)VAR_index_1_0);
    Array PThreadedCode8334 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend8335, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend8336, (Optr)&t_method_return);
    Block PBlock8332 = new_Block_with(PArray8333, empty_Array, PThreadedCode8334, 1, PSend8336);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend8337 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend8331, (Optr)PBlock8332);
    Array PThreadedCode8330 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8331, (Optr)&t_push_closure, (Optr)PBlock8332, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend8337, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8328 = new_Method_with(PArray8329, empty_Array, empty_Array, PThreadedCode8330, 2, PSend8337, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod8328, Context_Class);
    store_method(Context_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Variable VAR_clone_0_0 = new_Variable_named(L"clone", 0);
    Array PArray8339 = new_Array_with(1, (Optr)VAR_clone_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8343 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8344 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend8342 = new_Send((Optr)PSend8343, SMB_new_, 1, (Optr)PSend8344);
    Assign PAssign8341 = new_Assign((Optr)VAR_clone_0_0, (Optr)PSend8342);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend8345 = new_Send((Optr)VAR_clone_0_0, SMB_closure_, 1, (Optr)slot_Runtime_Context_closure);
    // freeze. 
    Send PSend8346 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_freeze, 0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend8347 = new_Send((Optr)VAR_clone_0_0, SMB_returnContext_, 1, (Optr)PSend8346);
    Array PThreadedCode8340 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign8341, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8343, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8344, (Optr)&t_send1, (Optr)PSend8342, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send1, (Optr)PSend8345, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_send0, (Optr)PSend8346, (Optr)&t_send1, (Optr)PSend8347, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_clone_0_0, (Optr)&t_method_return);
    Method PMethod8338 = new_Method_with(empty_Array, PArray8339, empty_Array, PThreadedCode8340, 4, PAssign8341, PSend8345, PSend8347, VAR_clone_0_0);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod8338, Context_Class);
    store_method(Context_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_closure() {
    Symbol SMB_closure = new_Symbol(L"closure");
    Array PThreadedCode8349 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_method_return);
    Method PMethod8348 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8349, 1, slot_Runtime_Context_closure);
    
    MethodClosure MC_SMB_closure = new_MethodClosure((Method)PMethod8348, Context_Class);
    store_method(Context_Class, SMB_closure, MC_SMB_closure);
}


static void init_SMB_returnContext_() {
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8351 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8353 = new_Assign((Optr)slot_Runtime_Context_returnContext, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8353, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8350 = new_Method_with(PArray8351, empty_Array, empty_Array, PThreadedCode8352, 2, PAssign8353, self);
    
    MethodClosure MC_SMB_returnContext_ = new_MethodClosure((Method)PMethod8350, Context_Class);
    store_method(Context_Class, SMB_returnContext_, MC_SMB_returnContext_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray8355 = new_Array_with(1, (Optr)VAR_context_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8359 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8360 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend8358 = new_Send((Optr)PSend8359, SMB_new_, 1, (Optr)PSend8360);
    Assign PAssign8357 = new_Assign((Optr)VAR_context_0_0, (Optr)PSend8358);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend8361 = new_Send((Optr)VAR_context_0_0, SMB_returnContext_, 1, (Optr)slot_Runtime_Context_returnContext);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend8362 = new_Send((Optr)VAR_context_0_0, SMB_closure_, 1, (Optr)slot_Runtime_Context_closure);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray8364 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend8366 = new_Send((Optr)VAR_arg_1_0, SMB_asAllocationAlias_, 1, (Optr)VAR_context_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend8367 = new_Send((Optr)VAR_context_0_0, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend8366);
    Array PThreadedCode8365 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_send1, (Optr)PSend8366, (Optr)&t_send2, (Optr)PSend8367, (Optr)&t_method_return);
    Block PBlock8363 = new_Block_with(PArray8364, empty_Array, PThreadedCode8365, 1, PSend8367);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend8368 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock8363);
    Array PThreadedCode8356 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign8357, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8359, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8360, (Optr)&t_send1, (Optr)PSend8358, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_send1, (Optr)PSend8361, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_closure, (Optr)&t_send1, (Optr)PSend8362, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock8363, (Optr)&t_send1, (Optr)PSend8368, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_context_0_0, (Optr)&t_method_return);
    Method PMethod8354 = new_Method_with(empty_Array, PArray8355, empty_Array, PThreadedCode8356, 5, PAssign8357, PSend8361, PSend8362, PSend8368, VAR_context_0_0);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8354, Context_Class);
    store_method(Context_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Assign PAssign8371 = new_Assign((Optr)slot_Runtime_Context_stacked, (Optr)false_Const);
    Array PThreadedCode8370 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign8371, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8369 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8370, 2, PAssign8371, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8369, Context_Class);
    store_method(Context_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_homeContext() {
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    Array PThreadedCode8373 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_homeContext, (Optr)&t_method_return);
    Method PMethod8372 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8373, 1, slot_Runtime_Context_homeContext);
    
    MethodClosure MC_SMB_homeContext = new_MethodClosure((Method)PMethod8372, Context_Class);
    store_method(Context_Class, SMB_homeContext, MC_SMB_homeContext);
}


static void init_SMB_scopeId() {
    Symbol SMB_scopeId = new_Symbol(L"scopeId");
    Array PThreadedCode8375 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_scopeId, (Optr)&t_method_return);
    Method PMethod8374 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8375, 1, slot_Runtime_Context_scopeId);
    
    MethodClosure MC_SMB_scopeId = new_MethodClosure((Method)PMethod8374, Context_Class);
    store_method(Context_Class, SMB_scopeId, MC_SMB_scopeId);
}


static void init_SMB_returnContext() {
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    Array PThreadedCode8377 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_method_return);
    Method PMethod8376 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8377, 1, slot_Runtime_Context_returnContext);
    
    MethodClosure MC_SMB_returnContext = new_MethodClosure((Method)PMethod8376, Context_Class);
    store_method(Context_Class, SMB_returnContext, MC_SMB_returnContext);
}


static void init_SMB_closure_() {
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray8379 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Assign PAssign8381 = new_Assign((Optr)slot_Runtime_Context_closure, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode8380 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8381, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8378 = new_Method_with(PArray8379, empty_Array, empty_Array, PThreadedCode8380, 2, PAssign8381, self);
    
    MethodClosure MC_SMB_closure_ = new_MethodClosure((Method)PMethod8378, Context_Class);
    store_method(Context_Class, SMB_closure_, MC_SMB_closure_);
}


static void init_SMB_homeContext_() {
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8383 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8385 = new_Assign((Optr)slot_Runtime_Context_homeContext, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8384 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8385, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8382 = new_Method_with(PArray8383, empty_Array, empty_Array, PThreadedCode8384, 2, PAssign8385, self);
    
    MethodClosure MC_SMB_homeContext_ = new_MethodClosure((Method)PMethod8382, Context_Class);
    store_method(Context_Class, SMB_homeContext_, MC_SMB_homeContext_);
}


static void init_SMB_printStacktraceOn_() {
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray8387 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printStacktraceOn:. 
    Send PSend8391 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_printStacktraceOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode8390 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend8391, (Optr)&t_block_return);
    Block PBlock8389 = new_Block_with(empty_Array, empty_Array, PThreadedCode8390, 1, PSend8391);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend8392 = new_Send((Optr)slot_Runtime_Context_returnContext, SMB_ifNotNil_, 1, (Optr)PBlock8389);
    Array PThreadedCode8388 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Runtime_Context_returnContext, (Optr)&t_push_closure, (Optr)PBlock8389, (Optr)&t_send1, (Optr)PSend8392, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8386 = new_Method_with(PArray8387, empty_Array, empty_Array, PThreadedCode8388, 2, PSend8392, self);
    
    MethodClosure MC_SMB_printStacktraceOn_ = new_MethodClosure((Method)PMethod8386, Context_Class);
    store_method(Context_Class, SMB_printStacktraceOn_, MC_SMB_printStacktraceOn_);
}


static void init_SMB_lookupAt_in_() {
    Symbol SMB_lookupAt_in_ = new_Symbol(L"lookupAt:in:");
    Variable VAR_local_0_0 = new_Variable_named(L"local", 0);
    Variable VAR_scope_0_1 = new_Variable_named(L"scope", 0);
    Array PArray8394 = new_Array_with(2, (Optr)VAR_local_0_0, (Optr)VAR_scope_0_1);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend8396 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode8395 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8396, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8393 = new_Method_with(PArray8394, empty_Array, empty_Array, PThreadedCode8395, 2, PSend8396, self);
    
    MethodClosure MC_SMB_lookupAt_in_ = new_MethodClosure((Method)PMethod8393, Context_Class);
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