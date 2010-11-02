#include <lib/class/Shell/ReadLine/AbstractLink.h>


Optr layout_Shell_ReadLine_AbstractLink_Class_class;

void init_Shell_ReadLine_PAbstractLink_layout() {
    layout_Shell_ReadLine_AbstractLink_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Shell_ReadLine_AbstractLink_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Shell_ReadLine_AbstractLink_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Shell_ReadLine_AbstractLink_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Shell_ReadLine_AbstractLink_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Shell_ReadLine_AbstractLink_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AbstractLink = new_Symbol(L"AbstractLink");
    Shell_ReadLine_AbstractLink_Class = (Class)new_Class(Object_Class, layout_Shell_ReadLine_AbstractLink_Class_class);
    Shell_ReadLine_AbstractLink_Class->layout = empty_object_layout;
    Shell_ReadLine_AbstractLink_Class->name = SMB_AbstractLink;
    
}

void init_Shell_ReadLine_PAbstractLink_methods() {
    
}