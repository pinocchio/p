#include <lib/class/Collections/Arrayed/ByteArray.h>


Optr layout_Collections_Arrayed_ByteArray_Class_class;

void init_Collections_Arrayed_ByteArray_layout() {
    layout_Collections_Arrayed_ByteArray_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collections_Arrayed_ByteArray_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collections_Arrayed_ByteArray_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collections_Arrayed_ByteArray_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collections_Arrayed_ByteArray_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collections_Arrayed_ByteArray_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ByteArray = new_Symbol(L"ByteArray");
    Collections_Arrayed_ByteArray_Class = (Class)new_Class(Collections_Abstract_ArrayedCollection_Class, layout_Collections_Arrayed_ByteArray_Class_class);
    Collections_Arrayed_ByteArray_Class->layout = empty_array_layout;
    Collections_Arrayed_ByteArray_Class->name = SMB_ByteArray;
    
}

void init_Collections_Arrayed_ByteArray_methods() {
    
}