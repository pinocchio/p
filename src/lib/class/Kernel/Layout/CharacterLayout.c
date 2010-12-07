#include <lib/class/Kernel/Layout/CharacterLayout.h>


Optr layout_Kernel_Layout_CharacterLayout_Class_class;

void init_Kernel_Layout_PCharacterLayout_layout() {
    layout_Kernel_Layout_CharacterLayout_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Layout_CharacterLayout_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Layout_CharacterLayout_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Layout_CharacterLayout_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Layout_CharacterLayout_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Layout_CharacterLayout_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_CharacterLayout = new_Symbol(L"CharacterLayout");
    Class_set_superclass(CharacterLayout_Class, Kernel_Layout_Layout_Class);
    CharacterLayout_Class->layout = empty_object_layout;
    HEADER(CharacterLayout_Class)->layout = layout_Kernel_Layout_CharacterLayout_Class_class;
    CharacterLayout_Class->name = SMB_CharacterLayout;
    
}

void init_Kernel_Layout_PCharacterLayout_methods() {
    
}