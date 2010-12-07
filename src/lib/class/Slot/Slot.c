#include <lib/class/Slot/Slot.h>


Optr layout_Slot_Slot_Class_class;
Optr layout_Slot_Slot;


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray22351 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Slot_minus_Slot = new_Symbol(L"Slot.Slot");
    Annotation PAnnotation22353 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readFrom_, (Optr)SMB_Slot_minus_Slot);
    Array PArray22352 = new_Array_with(1, (Optr)PAnnotation22353);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22355 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22354 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22355, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22350 = new_NativeMethod_with(PArray22351, empty_Array, PArray22352, PThreadedCode22354, 2, PSend22355, self);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PNativeMethod22350, Slot_Class);
=======
    Array PArray22168 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Slot_minus_Slot = new_Symbol(L"Slot.Slot");
    Annotation PAnnotation22170 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readFrom_, (Optr)SMB_Slot_minus_Slot);
    Array PArray22169 = new_Array_with(1, (Optr)PAnnotation22170);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22172 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22171 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22172, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22167 = new_NativeMethod_with(PArray22168, empty_Array, PArray22169, PThreadedCode22171, 2, PSend22172, self);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PNativeMethod22167, Slot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Slot_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_aliasFrom_to_in_() {
    Symbol SMB_aliasFrom_to_in_ = new_Symbol(L"aliasFrom:to:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_anotherObject_0_1 = new_Variable_named(L"anotherObject", 0);
    Variable VAR_aContext_0_2 = new_Variable_named(L"aContext", 0);
<<<<<<< HEAD
    Array PArray22357 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Variable VAR_value_0_3 = new_Variable_named(L"value", 0);
    Variable VAR_alias_0_4 = new_Variable_named(L"alias", 0);
    Array PArray22358 = new_Array_with(2, (Optr)VAR_value_0_3, (Optr)VAR_alias_0_4);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22361 = new_Send((Optr)self, SMB_readFrom_, 1, (Optr)VAR_anObject_0_0);
    Assign PAssign22360 = new_Assign((Optr)VAR_value_0_3, (Optr)PSend22361);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend22363 = new_Send((Optr)VAR_value_0_3, SMB_asAllocationAlias_, 1, (Optr)VAR_aContext_0_2);
    Assign PAssign22362 = new_Assign((Optr)VAR_alias_0_4, (Optr)PSend22363);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend22364 = new_Send((Optr)self, SMB_assign_on_, 2, (Optr)VAR_alias_0_4, (Optr)VAR_anotherObject_0_1);
    Array PThreadedCode22359 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign22360, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend22361, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22362, (Optr)&t_push_variable, (Optr)VAR_value_0_3, (Optr)&t_push_variable, (Optr)VAR_aContext_0_2, (Optr)&t_send1, (Optr)PSend22363, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_alias_0_4, (Optr)&t_push_variable, (Optr)VAR_anotherObject_0_1, (Optr)&t_send2, (Optr)PSend22364, (Optr)&t_method_return);
    Method PMethod22356 = new_Method_with(PArray22357, PArray22358, empty_Array, PThreadedCode22359, 3, PAssign22360, PAssign22362, PSend22364);
    
    MethodClosure MC_SMB_aliasFrom_to_in_ = new_MethodClosure((Method)PMethod22356, Slot_Class);
=======
    Array PArray22174 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Variable VAR_value_0_3 = new_Variable_named(L"value", 0);
    Variable VAR_alias_0_4 = new_Variable_named(L"alias", 0);
    Array PArray22175 = new_Array_with(2, (Optr)VAR_value_0_3, (Optr)VAR_alias_0_4);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22178 = new_Send((Optr)self, SMB_readFrom_, 1, (Optr)VAR_anObject_0_0);
    Assign PAssign22177 = new_Assign((Optr)VAR_value_0_3, (Optr)PSend22178);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend22180 = new_Send((Optr)VAR_value_0_3, SMB_asAllocationAlias_, 1, (Optr)VAR_aContext_0_2);
    Assign PAssign22179 = new_Assign((Optr)VAR_alias_0_4, (Optr)PSend22180);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend22181 = new_Send((Optr)self, SMB_assign_on_, 2, (Optr)VAR_alias_0_4, (Optr)VAR_anotherObject_0_1);
    Array PThreadedCode22176 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign22177, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend22178, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22179, (Optr)&t_push_variable, (Optr)VAR_value_0_3, (Optr)&t_push_variable, (Optr)VAR_aContext_0_2, (Optr)&t_send1, (Optr)PSend22180, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_alias_0_4, (Optr)&t_push_variable, (Optr)VAR_anotherObject_0_1, (Optr)&t_send2, (Optr)PSend22181, (Optr)&t_method_return);
    Method PMethod22173 = new_Method_with(PArray22174, PArray22175, empty_Array, PThreadedCode22176, 3, PAssign22177, PAssign22179, PSend22181);
    
    MethodClosure MC_SMB_aliasFrom_to_in_ = new_MethodClosure((Method)PMethod22173, Slot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Slot_Class, SMB_aliasFrom_to_in_, MC_SMB_aliasFrom_to_in_);
}


static void init_SMB_assign_on_() {
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray22366 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Slot_minus_Slot = new_Symbol(L"Slot.Slot");
    Annotation PAnnotation22368 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_assign_on_, (Optr)SMB_Slot_minus_Slot);
    Array PArray22367 = new_Array_with(1, (Optr)PAnnotation22368);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22370 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22369 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22370, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22365 = new_NativeMethod_with(PArray22366, empty_Array, PArray22367, PThreadedCode22369, 2, PSend22370, self);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PNativeMethod22365, Slot_Class);
=======
    Array PArray22183 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Slot_minus_Slot = new_Symbol(L"Slot.Slot");
    Annotation PAnnotation22185 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_assign_on_, (Optr)SMB_Slot_minus_Slot);
    Array PArray22184 = new_Array_with(1, (Optr)PAnnotation22185);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22187 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22186 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22187, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22182 = new_NativeMethod_with(PArray22183, empty_Array, PArray22184, PThreadedCode22186, 2, PSend22187, self);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PNativeMethod22182, Slot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Slot_Class, SMB_assign_on_, MC_SMB_assign_on_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray22372 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    // visitSlot:. 
    Send PSend22374 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSlot_, 1, (Optr)self);
    Array PThreadedCode22373 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22374, (Optr)&t_method_return);
    Method PMethod22371 = new_Method_with(PArray22372, empty_Array, empty_Array, PThreadedCode22373, 1, PSend22374);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22371, Slot_Class);
=======
    Array PArray22189 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    // visitSlot:. 
    Send PSend22191 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSlot_, 1, (Optr)self);
    Array PThreadedCode22190 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22191, (Optr)&t_method_return);
    Method PMethod22188 = new_Method_with(PArray22189, empty_Array, empty_Array, PThreadedCode22190, 1, PSend22191);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22188, Slot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Slot_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_assignFor_to_() {
    Symbol SMB_assignFor_to_ = new_Symbol(L"assignFor:to:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
<<<<<<< HEAD
    Array PArray22376 = new_Array_with(2, (Optr)VAR_visitor_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_assignSlot_to_ = new_Symbol(L"assignSlot:to:");
    // assignSlot:to:. 
    Send PSend22378 = new_Send((Optr)VAR_visitor_0_0, SMB_assignSlot_to_, 2, (Optr)self, (Optr)VAR_value_0_1);
    Array PThreadedCode22377 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend22378, (Optr)&t_method_return);
    Method PMethod22375 = new_Method_with(PArray22376, empty_Array, empty_Array, PThreadedCode22377, 1, PSend22378);
    
    MethodClosure MC_SMB_assignFor_to_ = new_MethodClosure((Method)PMethod22375, Slot_Class);
=======
    Array PArray22193 = new_Array_with(2, (Optr)VAR_visitor_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_assignSlot_to_ = new_Symbol(L"assignSlot:to:");
    // assignSlot:to:. 
    Send PSend22195 = new_Send((Optr)VAR_visitor_0_0, SMB_assignSlot_to_, 2, (Optr)self, (Optr)VAR_value_0_1);
    Array PThreadedCode22194 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend22195, (Optr)&t_method_return);
    Method PMethod22192 = new_Method_with(PArray22193, empty_Array, empty_Array, PThreadedCode22194, 1, PSend22195);
    
    MethodClosure MC_SMB_assignFor_to_ = new_MethodClosure((Method)PMethod22192, Slot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Slot_Class, SMB_assignFor_to_, MC_SMB_assignFor_to_);
}

void init_Slot_PSlot_layout() {
    layout_Slot_Slot_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Slot_Slot_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Slot_Slot_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Slot_Slot_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Slot_Slot_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Slot_Slot_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Slot = new_Symbol(L"Slot");
    layout_Slot_Slot = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Slot_Slot)->values[0] = slot_Slot_AbstractSlot_index; // index 
    ((Array)layout_Slot_Slot)->values[1] = slot_Slot_AbstractSlot_name; // name 
    ((Array)layout_Slot_Slot)->values[2] = slot_Slot_AbstractSlot_package; // package 
    Class_set_superclass(Slot_Class, AbstractSlot_Class);
    Slot_Class->layout = layout_Slot_Slot;
    HEADER(Slot_Class)->layout = layout_Slot_Slot_Class_class;
    Slot_Class->name = SMB_Slot;
    
}

void init_Slot_PSlot_methods() {
    init_SMB_readFrom_();
    init_SMB_aliasFrom_to_in_();
    init_SMB_assign_on_();
    init_SMB_accept_();
    init_SMB_assignFor_to_();
    
}