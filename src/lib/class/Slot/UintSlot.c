#include <lib/class/Slot/UintSlot.h>


Optr layout_Slot_UintSlot_Class_class;
Optr layout_Slot_UintSlot;


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray22380 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Slot_minus_UintSlot = new_Symbol(L"Slot.UintSlot");
    Annotation PAnnotation22382 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readFrom_, (Optr)SMB_Slot_minus_UintSlot);
    Array PArray22381 = new_Array_with(1, (Optr)PAnnotation22382);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22384 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22383 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22384, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22379 = new_NativeMethod_with(PArray22380, empty_Array, PArray22381, PThreadedCode22383, 2, PSend22384, self);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PNativeMethod22379, UintSlot_Class);
=======
    Array PArray22197 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Slot_minus_UintSlot = new_Symbol(L"Slot.UintSlot");
    Annotation PAnnotation22199 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readFrom_, (Optr)SMB_Slot_minus_UintSlot);
    Array PArray22198 = new_Array_with(1, (Optr)PAnnotation22199);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22201 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22200 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22201, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22196 = new_NativeMethod_with(PArray22197, empty_Array, PArray22198, PThreadedCode22200, 2, PSend22201, self);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PNativeMethod22196, UintSlot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(UintSlot_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_aliasFrom_to_in_() {
    Symbol SMB_aliasFrom_to_in_ = new_Symbol(L"aliasFrom:to:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_anotherObject_0_1 = new_Variable_named(L"anotherObject", 0);
    Variable VAR_aContext_0_2 = new_Variable_named(L"aContext", 0);
<<<<<<< HEAD
    Array PArray22386 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22388 = new_Send((Optr)self, SMB_readFrom_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend22389 = new_Send((Optr)self, SMB_assign_on_, 2, (Optr)PSend22388, (Optr)VAR_anotherObject_0_1);
    Array PThreadedCode22387 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend22388, (Optr)&t_push_variable, (Optr)VAR_anotherObject_0_1, (Optr)&t_send2, (Optr)PSend22389, (Optr)&t_method_return);
    Method PMethod22385 = new_Method_with(PArray22386, empty_Array, empty_Array, PThreadedCode22387, 1, PSend22389);
    
    MethodClosure MC_SMB_aliasFrom_to_in_ = new_MethodClosure((Method)PMethod22385, UintSlot_Class);
=======
    Array PArray22203 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22205 = new_Send((Optr)self, SMB_readFrom_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend22206 = new_Send((Optr)self, SMB_assign_on_, 2, (Optr)PSend22205, (Optr)VAR_anotherObject_0_1);
    Array PThreadedCode22204 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend22205, (Optr)&t_push_variable, (Optr)VAR_anotherObject_0_1, (Optr)&t_send2, (Optr)PSend22206, (Optr)&t_method_return);
    Method PMethod22202 = new_Method_with(PArray22203, empty_Array, empty_Array, PThreadedCode22204, 1, PSend22206);
    
    MethodClosure MC_SMB_aliasFrom_to_in_ = new_MethodClosure((Method)PMethod22202, UintSlot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(UintSlot_Class, SMB_aliasFrom_to_in_, MC_SMB_aliasFrom_to_in_);
}


static void init_SMB_assign_on_() {
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray22391 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Slot_minus_UintSlot = new_Symbol(L"Slot.UintSlot");
    Annotation PAnnotation22393 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_assign_on_, (Optr)SMB_Slot_minus_UintSlot);
    Array PArray22392 = new_Array_with(1, (Optr)PAnnotation22393);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22395 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22394 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22395, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22390 = new_NativeMethod_with(PArray22391, empty_Array, PArray22392, PThreadedCode22394, 2, PSend22395, self);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PNativeMethod22390, UintSlot_Class);
=======
    Array PArray22208 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Slot_minus_UintSlot = new_Symbol(L"Slot.UintSlot");
    Annotation PAnnotation22210 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_assign_on_, (Optr)SMB_Slot_minus_UintSlot);
    Array PArray22209 = new_Array_with(1, (Optr)PAnnotation22210);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22212 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22211 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22212, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22207 = new_NativeMethod_with(PArray22208, empty_Array, PArray22209, PThreadedCode22211, 2, PSend22212, self);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PNativeMethod22207, UintSlot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(UintSlot_Class, SMB_assign_on_, MC_SMB_assign_on_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray22397 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitUnsintSlot_ = new_Symbol(L"visitUnsintSlot:");
    // visitUnsintSlot:. 
    Send PSend22399 = new_Send((Optr)VAR_visitor_0_0, SMB_visitUnsintSlot_, 1, (Optr)self);
    Array PThreadedCode22398 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22399, (Optr)&t_method_return);
    Method PMethod22396 = new_Method_with(PArray22397, empty_Array, empty_Array, PThreadedCode22398, 1, PSend22399);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22396, UintSlot_Class);
=======
    Array PArray22214 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitUnsintSlot_ = new_Symbol(L"visitUnsintSlot:");
    // visitUnsintSlot:. 
    Send PSend22216 = new_Send((Optr)VAR_visitor_0_0, SMB_visitUnsintSlot_, 1, (Optr)self);
    Array PThreadedCode22215 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22216, (Optr)&t_method_return);
    Method PMethod22213 = new_Method_with(PArray22214, empty_Array, empty_Array, PThreadedCode22215, 1, PSend22216);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22213, UintSlot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(UintSlot_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_assignFor_to_() {
    Symbol SMB_assignFor_to_ = new_Symbol(L"assignFor:to:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
<<<<<<< HEAD
    Array PArray22401 = new_Array_with(2, (Optr)VAR_visitor_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_assignUnsintSlot_to_ = new_Symbol(L"assignUnsintSlot:to:");
    // assignUnsintSlot:to:. 
    Send PSend22403 = new_Send((Optr)VAR_visitor_0_0, SMB_assignUnsintSlot_to_, 2, (Optr)self, (Optr)VAR_value_0_1);
    Array PThreadedCode22402 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend22403, (Optr)&t_method_return);
    Method PMethod22400 = new_Method_with(PArray22401, empty_Array, empty_Array, PThreadedCode22402, 1, PSend22403);
    
    MethodClosure MC_SMB_assignFor_to_ = new_MethodClosure((Method)PMethod22400, UintSlot_Class);
=======
    Array PArray22218 = new_Array_with(2, (Optr)VAR_visitor_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_assignUnsintSlot_to_ = new_Symbol(L"assignUnsintSlot:to:");
    // assignUnsintSlot:to:. 
    Send PSend22220 = new_Send((Optr)VAR_visitor_0_0, SMB_assignUnsintSlot_to_, 2, (Optr)self, (Optr)VAR_value_0_1);
    Array PThreadedCode22219 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend22220, (Optr)&t_method_return);
    Method PMethod22217 = new_Method_with(PArray22218, empty_Array, empty_Array, PThreadedCode22219, 1, PSend22220);
    
    MethodClosure MC_SMB_assignFor_to_ = new_MethodClosure((Method)PMethod22217, UintSlot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(UintSlot_Class, SMB_assignFor_to_, MC_SMB_assignFor_to_);
}

void init_Slot_PUintSlot_layout() {
    layout_Slot_UintSlot_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Slot_UintSlot_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Slot_UintSlot_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Slot_UintSlot_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Slot_UintSlot_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Slot_UintSlot_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_UintSlot = new_Symbol(L"UintSlot");
    layout_Slot_UintSlot = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Slot_UintSlot)->values[0] = slot_Slot_AbstractSlot_index; // index 
    ((Array)layout_Slot_UintSlot)->values[1] = slot_Slot_AbstractSlot_name; // name 
    ((Array)layout_Slot_UintSlot)->values[2] = slot_Slot_AbstractSlot_package; // package 
    UintSlot_Class = (Class)new_Class(AbstractSlot_Class, layout_Slot_UintSlot_Class_class);
    UintSlot_Class->layout = layout_Slot_UintSlot;
    UintSlot_Class->name = SMB_UintSlot;
    
}

void init_Slot_PUintSlot_methods() {
    init_SMB_readFrom_();
    init_SMB_aliasFrom_to_in_();
    init_SMB_assign_on_();
    init_SMB_accept_();
    init_SMB_assignFor_to_();
    
}