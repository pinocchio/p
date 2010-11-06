#include <lib/class/Alias/Alias.h>


Optr layout_Alias_Alias_Class_class;
Optr slot_Alias_Alias_origin;
Optr slot_Alias_Alias_context;
Optr slot_Alias_Alias_value;
Optr layout_Alias_Alias;


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21412 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21414 = new_Assign((Optr)slot_Alias_Alias_context, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21413 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21414, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21411 = new_Method_with(PArray21412, empty_Array, empty_Array, PThreadedCode21413, 2, PAssign21414, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod21411, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_origin() {
    Symbol SMB_origin = new_Symbol(L"origin");
    Array PThreadedCode21416 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_origin, (Optr)&t_method_return);
    Method PMethod21415 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21416, 1, slot_Alias_Alias_origin);
    
    MethodClosure MC_SMB_origin = new_MethodClosure((Method)PMethod21415, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_origin, MC_SMB_origin);
}


static void init_SMB_alias_() {
    /*
    alias: anAlias
// 	^ self new alias: anAlias
    */
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    Variable VAR_anAlias_0_0 = new_Variable_named(L"anAlias", 0);
    Array PArray21418 = new_Array_with(1, (Optr)VAR_anAlias_0_0);
    Assign PAssign21420 = new_Assign((Optr)slot_Alias_Alias_origin, (Optr)VAR_anAlias_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21422 = new_Send((Optr)VAR_anAlias_0_0, SMB_value, 0);
    Assign PAssign21421 = new_Assign((Optr)slot_Alias_Alias_value, (Optr)PSend21422);
    Array PThreadedCode21419 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign21420, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21421, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_send0, (Optr)PSend21422, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21417 = new_Method_with(PArray21418, empty_Array, empty_Array, PThreadedCode21419, 3, PAssign21420, PAssign21421, self);
    
    MethodClosure MC_SMB_alias_ = new_MethodClosure((Method)PMethod21417, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_alias_, MC_SMB_alias_);
}


static void init_SMB_origin_() {
    Symbol SMB_origin_ = new_Symbol(L"origin:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21424 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21426 = new_Assign((Optr)slot_Alias_Alias_origin, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21425 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21426, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21423 = new_Method_with(PArray21424, empty_Array, empty_Array, PThreadedCode21425, 2, PAssign21426, self);
    
    MethodClosure MC_SMB_origin_ = new_MethodClosure((Method)PMethod21423, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_origin_, MC_SMB_origin_);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Array PThreadedCode21428 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_value, (Optr)&t_method_return);
    Method PMethod21427 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21428, 1, slot_Alias_Alias_value);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod21427, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_value, MC_SMB_value);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21430 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21432 = new_Assign((Optr)slot_Alias_Alias_value, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21431 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21432, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21429 = new_Method_with(PArray21430, empty_Array, empty_Array, PThreadedCode21431, 2, PAssign21432, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod21429, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21434 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper21436 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_21439 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21439_Const = new_Constant((Optr)string_21439);
    // <<. 
    Send PSend21440 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21439_Const);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend21441 = new_Send((Optr)slot_Alias_Alias_context, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend21442 = new_Send((Optr)PSend21441, SMB_closure, 0);
    Symbol SMB_host = new_Symbol(L"host");
    // host. 
    Send PSend21443 = new_Send((Optr)PSend21442, SMB_host, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21444 = new_Send((Optr)PSend21443, SMB_name, 0);
    // <<. 
    Send PSend21445 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21444);
    String string_21446 = new_String(L">>");
    Constant string_21446_Const = new_Constant((Optr)string_21446);
    // <<. 
    Send PSend21447 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21446_Const);
    // homeContext. 
    Send PSend21448 = new_Send((Optr)slot_Alias_Alias_context, SMB_homeContext, 0);
    // closure. 
    Send PSend21449 = new_Send((Optr)PSend21448, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend21450 = new_Send((Optr)PSend21449, SMB_selector, 0);
    // <<. 
    Send PSend21451 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21450);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21452 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21438 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21439, (Optr)&t_send1, (Optr)PSend21440, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_send0, (Optr)PSend21441, (Optr)&t_send0, (Optr)PSend21442, (Optr)&t_send0, (Optr)PSend21443, (Optr)&t_send0, (Optr)PSend21444, (Optr)&t_send1, (Optr)PSend21445, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21446, (Optr)&t_send1, (Optr)PSend21447, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_send0, (Optr)PSend21448, (Optr)&t_send0, (Optr)PSend21449, (Optr)&t_send0, (Optr)PSend21450, (Optr)&t_send1, (Optr)PSend21451, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21452, (Optr)&t_block_return);
    Block PBlock21437 = new_Block_with(empty_Array, empty_Array, PThreadedCode21438, 5, PSend21440, PSend21445, PSend21447, PSend21451, PSend21452);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21453 = new_Send((Optr)slot_Alias_Alias_context, SMB_ifNotNil_, 1, (Optr)PBlock21437);
    Array PThreadedCode21435 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper21436, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_push_closure, (Optr)PBlock21437, (Optr)&t_send1, (Optr)PSend21453, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21433 = new_Method_with(PArray21434, empty_Array, empty_Array, PThreadedCode21435, 3, PSuper21436, PSend21453, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21433, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode21455 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_method_return);
    Method PMethod21454 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21455, 1, slot_Alias_Alias_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod21454, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_context, MC_SMB_context);
}


static void init_class_SMB_alias_() {
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    Variable VAR_anAlias_0_0 = new_Variable_named(L"anAlias", 0);
    Array PArray21457 = new_Array_with(1, (Optr)VAR_anAlias_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21459 = new_Send((Optr)self, SMB_new, 0);
    // alias:. 
    Send PSend21460 = new_Send((Optr)PSend21459, SMB_alias_, 1, (Optr)VAR_anAlias_0_0);
    Array PThreadedCode21458 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21459, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_send1, (Optr)PSend21460, (Optr)&t_method_return);
    Method PMethod21456 = new_Method_with(PArray21457, empty_Array, empty_Array, PThreadedCode21458, 1, PSend21460);
    
    MethodClosure MC_SMB_alias_ = new_MethodClosure((Method)PMethod21456, HEADER(Alias_Alias_Class));
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