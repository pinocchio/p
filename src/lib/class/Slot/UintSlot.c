#include <lib/class/Slot/UintSlot.h>


Optr layout_Slot_UintSlot_Class_class;
Optr layout_Slot_UintSlot;


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22199 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Slot_minus_UintSlot = new_Symbol(L"Slot.UintSlot");
    Annotation PAnnotation22201 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readFrom_, (Optr)SMB_Slot_minus_UintSlot);
    Array PArray22200 = new_Array_with(1, (Optr)PAnnotation22201);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22203 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22202 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22203, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22198 = new_NativeMethod_with(PArray22199, empty_Array, PArray22200, PThreadedCode22202, 2, PSend22203, self);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PNativeMethod22198, UintSlot_Class);
    store_method(UintSlot_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_aliasFrom_to_in_() {
    Symbol SMB_aliasFrom_to_in_ = new_Symbol(L"aliasFrom:to:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_anotherObject_0_1 = new_Variable_named(L"anotherObject", 0);
    Variable VAR_aContext_0_2 = new_Variable_named(L"aContext", 0);
    Array PArray22205 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22207 = new_Send((Optr)self, SMB_readFrom_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend22208 = new_Send((Optr)self, SMB_assign_on_, 2, (Optr)PSend22207, (Optr)VAR_anotherObject_0_1);
    Array PThreadedCode22206 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend22207, (Optr)&t_push_variable, (Optr)VAR_anotherObject_0_1, (Optr)&t_send2, (Optr)PSend22208, (Optr)&t_method_return);
    Method PMethod22204 = new_Method_with(PArray22205, empty_Array, empty_Array, PThreadedCode22206, 1, PSend22208);
    
    MethodClosure MC_SMB_aliasFrom_to_in_ = new_MethodClosure((Method)PMethod22204, UintSlot_Class);
    store_method(UintSlot_Class, SMB_aliasFrom_to_in_, MC_SMB_aliasFrom_to_in_);
}


static void init_SMB_assign_on_() {
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray22210 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Slot_minus_UintSlot = new_Symbol(L"Slot.UintSlot");
    Annotation PAnnotation22212 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_assign_on_, (Optr)SMB_Slot_minus_UintSlot);
    Array PArray22211 = new_Array_with(1, (Optr)PAnnotation22212);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22214 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22213 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22214, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22209 = new_NativeMethod_with(PArray22210, empty_Array, PArray22211, PThreadedCode22213, 2, PSend22214, self);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PNativeMethod22209, UintSlot_Class);
    store_method(UintSlot_Class, SMB_assign_on_, MC_SMB_assign_on_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray22216 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitUnsintSlot_ = new_Symbol(L"visitUnsintSlot:");
    // visitUnsintSlot:. 
    Send PSend22218 = new_Send((Optr)VAR_visitor_0_0, SMB_visitUnsintSlot_, 1, (Optr)self);
    Array PThreadedCode22217 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22218, (Optr)&t_method_return);
    Method PMethod22215 = new_Method_with(PArray22216, empty_Array, empty_Array, PThreadedCode22217, 1, PSend22218);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22215, UintSlot_Class);
    store_method(UintSlot_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_assignFor_to_() {
    Symbol SMB_assignFor_to_ = new_Symbol(L"assignFor:to:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray22220 = new_Array_with(2, (Optr)VAR_visitor_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_assignUnsintSlot_to_ = new_Symbol(L"assignUnsintSlot:to:");
    // assignUnsintSlot:to:. 
    Send PSend22222 = new_Send((Optr)VAR_visitor_0_0, SMB_assignUnsintSlot_to_, 2, (Optr)self, (Optr)VAR_value_0_1);
    Array PThreadedCode22221 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend22222, (Optr)&t_method_return);
    Method PMethod22219 = new_Method_with(PArray22220, empty_Array, empty_Array, PThreadedCode22221, 1, PSend22222);
    
    MethodClosure MC_SMB_assignFor_to_ = new_MethodClosure((Method)PMethod22219, UintSlot_Class);
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