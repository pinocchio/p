#include <lib/class/Network/Kernel/NetworkError.h>


Optr layout_Network_Kernel_NetworkError_Class_class;
Optr layout_Network_Kernel_NetworkError;

void init_Network_Kernel_NetworkError_layout() {
    layout_Network_Kernel_NetworkError_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Network_Kernel_NetworkError_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Network_Kernel_NetworkError_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Network_Kernel_NetworkError_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Network_Kernel_NetworkError_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Network_Kernel_NetworkError_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_NetworkError = new_Symbol(L"NetworkError");
    layout_Network_Kernel_NetworkError = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Network_Kernel_NetworkError)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Network_Kernel_NetworkError)->values[1] = slot_Kernel_Exception_Error_message; // message 
    Network_Kernel_NetworkError_Class = (Class)new_Class(Kernel_Exception_Error_Class, layout_Network_Kernel_NetworkError_Class_class);
    Network_Kernel_NetworkError_Class->layout = layout_Network_Kernel_NetworkError;
    Network_Kernel_NetworkError_Class->name = SMB_NetworkError;
    
}

void init_Network_Kernel_NetworkError_methods() {
    
}