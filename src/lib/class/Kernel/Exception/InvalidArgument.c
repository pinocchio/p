#include <lib/class/Kernel/Exception/InvalidArgument.h>


Optr layout_Kernel_Exception_InvalidArgument_Class_class;
Optr slot_Kernel_Exception_InvalidArgument_argument;
Optr layout_Kernel_Exception_InvalidArgument;

void init_Kernel_Exception_PInvalidArgument_layout() {
    layout_Kernel_Exception_InvalidArgument_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Exception_InvalidArgument_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Exception_InvalidArgument_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Exception_InvalidArgument_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Exception_InvalidArgument_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Exception_InvalidArgument_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_InvalidArgument = new_Symbol(L"InvalidArgument");
    slot_Kernel_Exception_InvalidArgument_argument = (Optr)new_Slot(1, L"argument");
    layout_Kernel_Exception_InvalidArgument = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Kernel_Exception_InvalidArgument)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Kernel_Exception_InvalidArgument)->values[1] = slot_Kernel_Exception_InvalidArgument_argument; // argument 
    Kernel_Exception_InvalidArgument_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_Kernel_Exception_InvalidArgument_Class_class);
    Kernel_Exception_InvalidArgument_Class->layout = layout_Kernel_Exception_InvalidArgument;
    Kernel_Exception_InvalidArgument_Class->name = SMB_InvalidArgument;
    
}

void init_Kernel_Exception_PInvalidArgument_methods() {
    
}