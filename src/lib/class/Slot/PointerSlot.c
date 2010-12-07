#include <lib/class/Slot/PointerSlot.h>


Optr layout_Slot_PointerSlot_Class_class;
Optr layout_Slot_PointerSlot;


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22443 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend22445 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode22444 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22445, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22442 = new_Method_with(PArray22443, empty_Array, empty_Array, PThreadedCode22444, 2, PSend22445, self);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod22442, PointerSlot_Class);
    store_method(PointerSlot_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_assign_on_() {
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray22447 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend22449 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode22448 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22449, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22446 = new_Method_with(PArray22447, empty_Array, empty_Array, PThreadedCode22448, 2, PSend22449, self);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PMethod22446, PointerSlot_Class);
    store_method(PointerSlot_Class, SMB_assign_on_, MC_SMB_assign_on_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray22451 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitPointerSlot_ = new_Symbol(L"visitPointerSlot:");
    // visitPointerSlot:. 
    Send PSend22453 = new_Send((Optr)VAR_visitor_0_0, SMB_visitPointerSlot_, 1, (Optr)self);
    Array PThreadedCode22452 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22453, (Optr)&t_method_return);
    Method PMethod22450 = new_Method_with(PArray22451, empty_Array, empty_Array, PThreadedCode22452, 1, PSend22453);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22450, PointerSlot_Class);
    store_method(PointerSlot_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_assignFor_to_() {
    Symbol SMB_assignFor_to_ = new_Symbol(L"assignFor:to:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray22455 = new_Array_with(2, (Optr)VAR_visitor_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend22457 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode22456 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22457, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22454 = new_Method_with(PArray22455, empty_Array, empty_Array, PThreadedCode22456, 2, PSend22457, self);
    
    MethodClosure MC_SMB_assignFor_to_ = new_MethodClosure((Method)PMethod22454, PointerSlot_Class);
    store_method(PointerSlot_Class, SMB_assignFor_to_, MC_SMB_assignFor_to_);
}

void init_Slot_PPointerSlot_layout() {
    layout_Slot_PointerSlot_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Slot_PointerSlot_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Slot_PointerSlot_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Slot_PointerSlot_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Slot_PointerSlot_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Slot_PointerSlot_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_PointerSlot = new_Symbol(L"PointerSlot");
    layout_Slot_PointerSlot = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Slot_PointerSlot)->values[0] = slot_Slot_AbstractSlot_index; // index 
    ((Array)layout_Slot_PointerSlot)->values[1] = slot_Slot_AbstractSlot_name; // name 
    ((Array)layout_Slot_PointerSlot)->values[2] = slot_Slot_AbstractSlot_package; // package 
    PointerSlot_Class = (Class)new_Class(AbstractSlot_Class, layout_Slot_PointerSlot_Class_class);
    PointerSlot_Class->layout = layout_Slot_PointerSlot;
    PointerSlot_Class->name = SMB_PointerSlot;
    
}

void init_Slot_PPointerSlot_methods() {
    init_SMB_readFrom_();
    init_SMB_assign_on_();
    init_SMB_accept_();
    init_SMB_assignFor_to_();
    
}