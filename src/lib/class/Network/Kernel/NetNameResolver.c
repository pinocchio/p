#include <lib/class/Network/Kernel/NetNameResolver.h>


Optr layout_Network_Kernel_NetNameResolver_Class_class;

void init_Network_Kernel_NetNameResolver_layout() {
    layout_Network_Kernel_NetNameResolver_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Network_Kernel_NetNameResolver_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Network_Kernel_NetNameResolver_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Network_Kernel_NetNameResolver_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Network_Kernel_NetNameResolver_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Network_Kernel_NetNameResolver_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_NetNameResolver = new_Symbol(L"NetNameResolver");
    Network_Kernel_NetNameResolver_Class = (Class)new_Class(Object_Class, layout_Network_Kernel_NetNameResolver_Class_class);
    Network_Kernel_NetNameResolver_Class->layout = empty_object_layout;
    Network_Kernel_NetNameResolver_Class->name = SMB_NetNameResolver;
    
}

void init_Network_Kernel_NetNameResolver_methods() {
    
}