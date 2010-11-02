#include <lib/class/Kernel/Object/Boolean.h>


Optr layout_Kernel_Object_Boolean_Class_class;

void init_Kernel_Object_Boolean_layout() {
    layout_Kernel_Object_Boolean_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Object_Boolean_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Object_Boolean_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Object_Boolean_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Object_Boolean_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Object_Boolean_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Boolean = new_Symbol(L"Boolean");
    Kernel_Object_Boolean_Class = (Class)new_Class(Object_Class, layout_Kernel_Object_Boolean_Class_class);
    Class_set_superclass(Kernel_Object_Boolean_Class, Object_Class);
    Kernel_Object_Boolean_Class->layout = empty_object_layout;
    HEADER(Kernel_Object_Boolean_Class)->layout = layout_Kernel_Object_Boolean_Class_class;
    Kernel_Object_Boolean_Class->name = SMB_Boolean;
    
}

void init_Kernel_Object_Boolean_methods() {
    
}