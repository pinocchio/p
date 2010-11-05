#include <lib/class/Slot/Slot.h>


Optr layout_Slot_Slot_Class_class;
Optr layout_Slot_Slot;


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22006 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Slot_minus_Slot = new_Symbol(L"Slot.Slot");
    Annotation PAnnotation22008 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readFrom_, (Optr)SMB_Slot_minus_Slot);
    Array PArray22007 = new_Array_with(1, (Optr)PAnnotation22008);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22010 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22009 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22010, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22005 = new_NativeMethod_with(PArray22006, empty_Array, PArray22007, PThreadedCode22009, 2, PSend22010, self);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PNativeMethod22005, Slot_Class);
    store_method(Slot_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_aliasFrom_to_in_() {
    Symbol SMB_aliasFrom_to_in_ = new_Symbol(L"aliasFrom:to:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_anotherObject_0_1 = new_Variable_named(L"anotherObject", 0);
    Variable VAR_aContext_0_2 = new_Variable_named(L"aContext", 0);
    Array PArray22012 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Variable VAR_value_0_3 = new_Variable_named(L"value", 0);
    Variable VAR_alias_0_4 = new_Variable_named(L"alias", 0);
    Array PArray22013 = new_Array_with(2, (Optr)VAR_value_0_3, (Optr)VAR_alias_0_4);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend22016 = new_Send((Optr)self, SMB_readFrom_, 1, (Optr)VAR_anObject_0_0);
    Assign PAssign22015 = new_Assign((Optr)VAR_value_0_3, (Optr)PSend22016);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend22018 = new_Send((Optr)VAR_value_0_3, SMB_asAllocationAlias_, 1, (Optr)VAR_aContext_0_2);
    Assign PAssign22017 = new_Assign((Optr)VAR_alias_0_4, (Optr)PSend22018);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend22019 = new_Send((Optr)self, SMB_assign_on_, 2, (Optr)VAR_alias_0_4, (Optr)VAR_anotherObject_0_1);
    Array PThreadedCode22014 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign22015, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend22016, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22017, (Optr)&t_push_variable, (Optr)VAR_value_0_3, (Optr)&t_push_variable, (Optr)VAR_aContext_0_2, (Optr)&t_send1, (Optr)PSend22018, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_alias_0_4, (Optr)&t_push_variable, (Optr)VAR_anotherObject_0_1, (Optr)&t_send2, (Optr)PSend22019, (Optr)&t_method_return);
    Method PMethod22011 = new_Method_with(PArray22012, PArray22013, empty_Array, PThreadedCode22014, 3, PAssign22015, PAssign22017, PSend22019);
    
    MethodClosure MC_SMB_aliasFrom_to_in_ = new_MethodClosure((Method)PMethod22011, Slot_Class);
    store_method(Slot_Class, SMB_aliasFrom_to_in_, MC_SMB_aliasFrom_to_in_);
}


static void init_SMB_assign_on_() {
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray22021 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Slot_minus_Slot = new_Symbol(L"Slot.Slot");
    Annotation PAnnotation22023 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_assign_on_, (Optr)SMB_Slot_minus_Slot);
    Array PArray22022 = new_Array_with(1, (Optr)PAnnotation22023);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22025 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22024 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22025, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22020 = new_NativeMethod_with(PArray22021, empty_Array, PArray22022, PThreadedCode22024, 2, PSend22025, self);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PNativeMethod22020, Slot_Class);
    store_method(Slot_Class, SMB_assign_on_, MC_SMB_assign_on_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray22027 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    // visitSlot:. 
    Send PSend22029 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSlot_, 1, (Optr)self);
    Array PThreadedCode22028 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22029, (Optr)&t_method_return);
    Method PMethod22026 = new_Method_with(PArray22027, empty_Array, empty_Array, PThreadedCode22028, 1, PSend22029);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22026, Slot_Class);
    store_method(Slot_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_assignFor_to_() {
    Symbol SMB_assignFor_to_ = new_Symbol(L"assignFor:to:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray22031 = new_Array_with(2, (Optr)VAR_visitor_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_assignSlot_to_ = new_Symbol(L"assignSlot:to:");
    // assignSlot:to:. 
    Send PSend22033 = new_Send((Optr)VAR_visitor_0_0, SMB_assignSlot_to_, 2, (Optr)self, (Optr)VAR_value_0_1);
    Array PThreadedCode22032 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend22033, (Optr)&t_method_return);
    Method PMethod22030 = new_Method_with(PArray22031, empty_Array, empty_Array, PThreadedCode22032, 1, PSend22033);
    
    MethodClosure MC_SMB_assignFor_to_ = new_MethodClosure((Method)PMethod22030, Slot_Class);
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