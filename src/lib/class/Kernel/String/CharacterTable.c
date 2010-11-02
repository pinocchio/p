#include <lib/class/Kernel/String/CharacterTable.h>


Optr layout_Kernel_String_CharacterTable_Class_class;

void init_Kernel_String_PCharacterTable_layout() {
    layout_Kernel_String_CharacterTable_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_String_CharacterTable_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_String_CharacterTable_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_String_CharacterTable_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_String_CharacterTable_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_String_CharacterTable_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_CharacterTable = new_Symbol(L"CharacterTable");
    CharacterTable_Class = (Class)new_Class(Object_Class, layout_Kernel_String_CharacterTable_Class_class);
    CharacterTable_Class->layout = empty_array_layout;
    CharacterTable_Class->name = SMB_CharacterTable;
    
}

void init_Kernel_String_PCharacterTable_methods() {
    
}