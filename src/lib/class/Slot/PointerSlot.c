#include <lib/class/Slot/PointerSlot.h>


Optr layout_Slot_PointerSlot_Class_class;
Optr layout_Slot_PointerSlot;


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21894 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend21896 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode21895 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21896, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21893 = new_Method_with(PArray21894, empty_Array, empty_Array, PThreadedCode21895, 2, PSend21896, self);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod21893, PointerSlot_Class);
    store_method(PointerSlot_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_assign_on_() {
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray21898 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend21900 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode21899 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21900, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21897 = new_Method_with(PArray21898, empty_Array, empty_Array, PThreadedCode21899, 2, PSend21900, self);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PMethod21897, PointerSlot_Class);
    store_method(PointerSlot_Class, SMB_assign_on_, MC_SMB_assign_on_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21902 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitPointerSlot_ = new_Symbol(L"visitPointerSlot:");
    // visitPointerSlot:. 
    Send PSend21904 = new_Send((Optr)VAR_visitor_0_0, SMB_visitPointerSlot_, 1, (Optr)self);
    Array PThreadedCode21903 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21904, (Optr)&t_method_return);
    Method PMethod21901 = new_Method_with(PArray21902, empty_Array, empty_Array, PThreadedCode21903, 1, PSend21904);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21901, PointerSlot_Class);
    store_method(PointerSlot_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_assignFor_to_() {
    Symbol SMB_assignFor_to_ = new_Symbol(L"assignFor:to:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray21906 = new_Array_with(2, (Optr)VAR_visitor_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend21908 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode21907 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21908, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21905 = new_Method_with(PArray21906, empty_Array, empty_Array, PThreadedCode21907, 2, PSend21908, self);
    
    MethodClosure MC_SMB_assignFor_to_ = new_MethodClosure((Method)PMethod21905, PointerSlot_Class);
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