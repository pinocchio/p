#include <lib/class/Slot/PointerSlot.h>


Optr layout_Slot_PointerSlot_Class_class;
Optr layout_Slot_PointerSlot;


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray22405 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend22407 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode22406 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22407, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22404 = new_Method_with(PArray22405, empty_Array, empty_Array, PThreadedCode22406, 2, PSend22407, self);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod22404, PointerSlot_Class);
=======
    Array PArray22222 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend22224 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode22223 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22224, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22221 = new_Method_with(PArray22222, empty_Array, empty_Array, PThreadedCode22223, 2, PSend22224, self);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod22221, PointerSlot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PointerSlot_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_assign_on_() {
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray22409 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend22411 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode22410 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22411, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22408 = new_Method_with(PArray22409, empty_Array, empty_Array, PThreadedCode22410, 2, PSend22411, self);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PMethod22408, PointerSlot_Class);
=======
    Array PArray22226 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend22228 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode22227 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22228, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22225 = new_Method_with(PArray22226, empty_Array, empty_Array, PThreadedCode22227, 2, PSend22228, self);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PMethod22225, PointerSlot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PointerSlot_Class, SMB_assign_on_, MC_SMB_assign_on_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray22413 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitPointerSlot_ = new_Symbol(L"visitPointerSlot:");
    // visitPointerSlot:. 
    Send PSend22415 = new_Send((Optr)VAR_visitor_0_0, SMB_visitPointerSlot_, 1, (Optr)self);
    Array PThreadedCode22414 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22415, (Optr)&t_method_return);
    Method PMethod22412 = new_Method_with(PArray22413, empty_Array, empty_Array, PThreadedCode22414, 1, PSend22415);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22412, PointerSlot_Class);
=======
    Array PArray22230 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitPointerSlot_ = new_Symbol(L"visitPointerSlot:");
    // visitPointerSlot:. 
    Send PSend22232 = new_Send((Optr)VAR_visitor_0_0, SMB_visitPointerSlot_, 1, (Optr)self);
    Array PThreadedCode22231 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22232, (Optr)&t_method_return);
    Method PMethod22229 = new_Method_with(PArray22230, empty_Array, empty_Array, PThreadedCode22231, 1, PSend22232);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22229, PointerSlot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PointerSlot_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_assignFor_to_() {
    Symbol SMB_assignFor_to_ = new_Symbol(L"assignFor:to:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
<<<<<<< HEAD
    Array PArray22417 = new_Array_with(2, (Optr)VAR_visitor_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend22419 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode22418 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22419, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22416 = new_Method_with(PArray22417, empty_Array, empty_Array, PThreadedCode22418, 2, PSend22419, self);
    
    MethodClosure MC_SMB_assignFor_to_ = new_MethodClosure((Method)PMethod22416, PointerSlot_Class);
=======
    Array PArray22234 = new_Array_with(2, (Optr)VAR_visitor_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend22236 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode22235 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22236, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22233 = new_Method_with(PArray22234, empty_Array, empty_Array, PThreadedCode22235, 2, PSend22236, self);
    
    MethodClosure MC_SMB_assignFor_to_ = new_MethodClosure((Method)PMethod22233, PointerSlot_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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