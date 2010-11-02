#include <lib/class/Kernel/Layout/FloatLayout.h>


Optr layout_Kernel_Layout_FloatLayout_Class_class;

void init_Kernel_Layout_PFloatLayout_layout() {
    layout_Kernel_Layout_FloatLayout_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Layout_FloatLayout_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Layout_FloatLayout_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Layout_FloatLayout_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Layout_FloatLayout_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Layout_FloatLayout_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_FloatLayout = new_Symbol(L"FloatLayout");
    Class_set_superclass(FloatLayout_Class, Kernel_Layout_Layout_Class);
    FloatLayout_Class->layout = empty_object_layout;
    HEADER(FloatLayout_Class)->layout = layout_Kernel_Layout_FloatLayout_Class_class;
    FloatLayout_Class->name = SMB_FloatLayout;
    
}

void init_Kernel_Layout_PFloatLayout_methods() {
    
}