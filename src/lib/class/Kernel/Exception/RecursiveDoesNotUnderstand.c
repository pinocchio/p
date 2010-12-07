#include <lib/class/Kernel/Exception/RecursiveDoesNotUnderstand.h>


Optr layout_Kernel_Exception_RecursiveDoesNotUnderstand_Class_class;
Optr layout_Kernel_Exception_RecursiveDoesNotUnderstand;

void init_Kernel_Exception_PRecursiveDoesNotUnderstand_layout() {
    layout_Kernel_Exception_RecursiveDoesNotUnderstand_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Exception_RecursiveDoesNotUnderstand_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Exception_RecursiveDoesNotUnderstand_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Exception_RecursiveDoesNotUnderstand_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Exception_RecursiveDoesNotUnderstand_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Exception_RecursiveDoesNotUnderstand_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_RecursiveDoesNotUnderstand = new_Symbol(L"RecursiveDoesNotUnderstand");
    layout_Kernel_Exception_RecursiveDoesNotUnderstand = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Kernel_Exception_RecursiveDoesNotUnderstand)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Kernel_Exception_RecursiveDoesNotUnderstand)->values[1] = slot_Kernel_Exception_DoesNotUnderstand_receiver; // receiver 
    ((Array)layout_Kernel_Exception_RecursiveDoesNotUnderstand)->values[2] = slot_Kernel_Exception_DoesNotUnderstand_cls; // cls 
    ((Array)layout_Kernel_Exception_RecursiveDoesNotUnderstand)->values[3] = slot_Kernel_Exception_DoesNotUnderstand_message; // message 
    RecursiveDoesNotUnderstand_Class = (Class)new_Class(Kernel_Exception_DoesNotUnderstand_Class, layout_Kernel_Exception_RecursiveDoesNotUnderstand_Class_class);
    RecursiveDoesNotUnderstand_Class->layout = layout_Kernel_Exception_RecursiveDoesNotUnderstand;
    RecursiveDoesNotUnderstand_Class->name = SMB_RecursiveDoesNotUnderstand;
    
}

void init_Kernel_Exception_PRecursiveDoesNotUnderstand_methods() {
    
}