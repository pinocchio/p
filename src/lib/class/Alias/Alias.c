#include <lib/class/Alias/Alias.h>


Optr layout_Alias_Alias_Class_class;
Optr slot_Alias_Alias_origin;
Optr slot_Alias_Alias_context;
Optr slot_Alias_Alias_value;
Optr layout_Alias_Alias;


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21271 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21273 = new_Assign((Optr)slot_Alias_Alias_context, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21272 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21273, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21270 = new_Method_with(PArray21271, empty_Array, empty_Array, PThreadedCode21272, 2, PAssign21273, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod21270, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_origin() {
    Symbol SMB_origin = new_Symbol(L"origin");
    Array PThreadedCode21275 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_origin, (Optr)&t_method_return);
    Method PMethod21274 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21275, 1, slot_Alias_Alias_origin);
    
    MethodClosure MC_SMB_origin = new_MethodClosure((Method)PMethod21274, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_origin, MC_SMB_origin);
}


static void init_SMB_alias_() {
    /*
    alias: anAlias
// 	^ self new alias: anAlias
    */
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    Variable VAR_anAlias_0_0 = new_Variable_named(L"anAlias", 0);
    Array PArray21277 = new_Array_with(1, (Optr)VAR_anAlias_0_0);
    Assign PAssign21279 = new_Assign((Optr)slot_Alias_Alias_origin, (Optr)VAR_anAlias_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21281 = new_Send((Optr)VAR_anAlias_0_0, SMB_value, 0);
    Assign PAssign21280 = new_Assign((Optr)slot_Alias_Alias_value, (Optr)PSend21281);
    Array PThreadedCode21278 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign21279, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21280, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_send0, (Optr)PSend21281, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21276 = new_Method_with(PArray21277, empty_Array, empty_Array, PThreadedCode21278, 3, PAssign21279, PAssign21280, self);
    
    MethodClosure MC_SMB_alias_ = new_MethodClosure((Method)PMethod21276, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_alias_, MC_SMB_alias_);
}


static void init_SMB_origin_() {
    Symbol SMB_origin_ = new_Symbol(L"origin:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21283 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21285 = new_Assign((Optr)slot_Alias_Alias_origin, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21284 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21285, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21282 = new_Method_with(PArray21283, empty_Array, empty_Array, PThreadedCode21284, 2, PAssign21285, self);
    
    MethodClosure MC_SMB_origin_ = new_MethodClosure((Method)PMethod21282, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_origin_, MC_SMB_origin_);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Array PThreadedCode21287 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_value, (Optr)&t_method_return);
    Method PMethod21286 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21287, 1, slot_Alias_Alias_value);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod21286, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_value, MC_SMB_value);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21289 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21291 = new_Assign((Optr)slot_Alias_Alias_value, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21290 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21291, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21288 = new_Method_with(PArray21289, empty_Array, empty_Array, PThreadedCode21290, 2, PAssign21291, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod21288, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21293 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper21295 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_21298 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21298_Const = new_Constant((Optr)string_21298);
    // <<. 
    Send PSend21299 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21298_Const);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend21300 = new_Send((Optr)slot_Alias_Alias_context, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend21301 = new_Send((Optr)PSend21300, SMB_closure, 0);
    Symbol SMB_host = new_Symbol(L"host");
    // host. 
    Send PSend21302 = new_Send((Optr)PSend21301, SMB_host, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21303 = new_Send((Optr)PSend21302, SMB_name, 0);
    // <<. 
    Send PSend21304 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21303);
    String string_21305 = new_String(L">>");
    Constant string_21305_Const = new_Constant((Optr)string_21305);
    // <<. 
    Send PSend21306 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21305_Const);
    // homeContext. 
    Send PSend21307 = new_Send((Optr)slot_Alias_Alias_context, SMB_homeContext, 0);
    // closure. 
    Send PSend21308 = new_Send((Optr)PSend21307, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend21309 = new_Send((Optr)PSend21308, SMB_selector, 0);
    // <<. 
    Send PSend21310 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21309);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend21311 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode21297 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21298, (Optr)&t_send1, (Optr)PSend21299, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_send0, (Optr)PSend21300, (Optr)&t_send0, (Optr)PSend21301, (Optr)&t_send0, (Optr)PSend21302, (Optr)&t_send0, (Optr)PSend21303, (Optr)&t_send1, (Optr)PSend21304, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21305, (Optr)&t_send1, (Optr)PSend21306, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_send0, (Optr)PSend21307, (Optr)&t_send0, (Optr)PSend21308, (Optr)&t_send0, (Optr)PSend21309, (Optr)&t_send1, (Optr)PSend21310, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend21311, (Optr)&t_block_return);
    Block PBlock21296 = new_Block_with(empty_Array, empty_Array, PThreadedCode21297, 5, PSend21299, PSend21304, PSend21306, PSend21310, PSend21311);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21312 = new_Send((Optr)slot_Alias_Alias_context, SMB_ifNotNil_, 1, (Optr)PBlock21296);
    Array PThreadedCode21294 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper21295, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_push_closure, (Optr)PBlock21296, (Optr)&t_send1, (Optr)PSend21312, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21292 = new_Method_with(PArray21293, empty_Array, empty_Array, PThreadedCode21294, 3, PSuper21295, PSend21312, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21292, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode21314 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_method_return);
    Method PMethod21313 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21314, 1, slot_Alias_Alias_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod21313, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_context, MC_SMB_context);
}


static void init_class_SMB_alias_() {
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    Variable VAR_anAlias_0_0 = new_Variable_named(L"anAlias", 0);
    Array PArray21316 = new_Array_with(1, (Optr)VAR_anAlias_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21318 = new_Send((Optr)self, SMB_new, 0);
    // alias:. 
    Send PSend21319 = new_Send((Optr)PSend21318, SMB_alias_, 1, (Optr)VAR_anAlias_0_0);
    Array PThreadedCode21317 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21318, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_send1, (Optr)PSend21319, (Optr)&t_method_return);
    Method PMethod21315 = new_Method_with(PArray21316, empty_Array, empty_Array, PThreadedCode21317, 1, PSend21319);
    
    MethodClosure MC_SMB_alias_ = new_MethodClosure((Method)PMethod21315, HEADER(Alias_Alias_Class));
    store_method(HEADER(Alias_Alias_Class), SMB_alias_, MC_SMB_alias_);
}

void init_Alias_PAlias_layout() {
    layout_Alias_Alias_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Alias_Alias_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Alias_Alias_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Alias_Alias_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Alias_Alias_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Alias_Alias_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Alias = new_Symbol(L"Alias");
    slot_Alias_Alias_origin = (Optr)new_Slot(0, L"origin");
    slot_Alias_Alias_context = (Optr)new_Slot(1, L"context");
    slot_Alias_Alias_value = (Optr)new_Slot(2, L"value");
    layout_Alias_Alias = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Alias_Alias)->values[0] = slot_Alias_Alias_origin; // origin 
    ((Array)layout_Alias_Alias)->values[1] = slot_Alias_Alias_context; // context 
    ((Array)layout_Alias_Alias)->values[2] = slot_Alias_Alias_value; // value 
    Alias_Alias_Class = (Class)new_Class(Object_Class, layout_Alias_Alias_Class_class);
    Alias_Alias_Class->layout = layout_Alias_Alias;
    Alias_Alias_Class->name = SMB_Alias;
    
}

void init_Alias_PAlias_methods() {
    init_SMB_context_();
    init_SMB_origin();
    init_SMB_alias_();
    init_SMB_origin_();
    init_SMB_value();
    init_SMB_value_();
    init_SMB_printOn_();
    init_SMB_context();
    init_class_SMB_alias_();
    
}