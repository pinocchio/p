#include <lib/class/Alias/FieldWriteAlias.h>


Optr layout_Alias_FieldWriteAlias_Class_class;
Optr layout_Alias_FieldWriteAlias;

void init_Alias_PFieldWriteAlias_layout() {
    layout_Alias_FieldWriteAlias_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Alias_FieldWriteAlias_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Alias_FieldWriteAlias_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Alias_FieldWriteAlias_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Alias_FieldWriteAlias_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Alias_FieldWriteAlias_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_FieldWriteAlias = new_Symbol(L"FieldWriteAlias");
    layout_Alias_FieldWriteAlias = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Alias_FieldWriteAlias)->values[0] = slot_Alias_Alias_origin; // origin 
    ((Array)layout_Alias_FieldWriteAlias)->values[1] = slot_Alias_Alias_context; // context 
    ((Array)layout_Alias_FieldWriteAlias)->values[2] = slot_Alias_Alias_value; // value 
    ((Array)layout_Alias_FieldWriteAlias)->values[3] = slot_Alias_WriteAlias_predecessor; // predecessor 
    Alias_FieldWriteAlias_Class = (Class)new_Class(Alias_WriteAlias_Class, layout_Alias_FieldWriteAlias_Class_class);
    Alias_FieldWriteAlias_Class->layout = layout_Alias_FieldWriteAlias;
    Alias_FieldWriteAlias_Class->name = SMB_FieldWriteAlias;
    
}

void init_Alias_PFieldWriteAlias_methods() {
    
}