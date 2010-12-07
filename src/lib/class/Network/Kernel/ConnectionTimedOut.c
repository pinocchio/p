#include <lib/class/Network/Kernel/ConnectionTimedOut.h>


Optr layout_Network_Kernel_ConnectionTimedOut_Class_class;
Optr layout_Network_Kernel_ConnectionTimedOut;

void init_Network_Kernel_ConnectionTimedOut_layout() {
    layout_Network_Kernel_ConnectionTimedOut_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Network_Kernel_ConnectionTimedOut_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Network_Kernel_ConnectionTimedOut_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Network_Kernel_ConnectionTimedOut_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Network_Kernel_ConnectionTimedOut_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Network_Kernel_ConnectionTimedOut_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ConnectionTimedOut = new_Symbol(L"ConnectionTimedOut");
    layout_Network_Kernel_ConnectionTimedOut = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Network_Kernel_ConnectionTimedOut)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Network_Kernel_ConnectionTimedOut)->values[1] = slot_Kernel_Exception_Error_message; // message 
    Network_Kernel_ConnectionTimedOut_Class = (Class)new_Class(Network_Kernel_NetworkError_Class, layout_Network_Kernel_ConnectionTimedOut_Class_class);
    Network_Kernel_ConnectionTimedOut_Class->layout = layout_Network_Kernel_ConnectionTimedOut;
    Network_Kernel_ConnectionTimedOut_Class->name = SMB_ConnectionTimedOut;
    
}

void init_Network_Kernel_ConnectionTimedOut_methods() {
    
}