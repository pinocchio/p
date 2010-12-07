#include <lib/class/Kernel/Class/MethodDictionary.h>


Optr layout_Kernel_Class_MethodDictionary_Class_class;
Optr layout_Kernel_Class_MethodDictionary;

void init_Kernel_Class_PMethodDictionary_layout() {
    layout_Kernel_Class_MethodDictionary_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Class_MethodDictionary_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Class_MethodDictionary_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Class_MethodDictionary_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Class_MethodDictionary_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Class_MethodDictionary_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_MethodDictionary = new_Symbol(L"MethodDictionary");
    layout_Kernel_Class_MethodDictionary = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Class_MethodDictionary)->values[0] = slot_Collection_HashedCollection_size; // size 
    ((Array)layout_Kernel_Class_MethodDictionary)->values[1] = slot_Collection_HashedCollection_maxLinear; // maxLinear 
    ((Array)layout_Kernel_Class_MethodDictionary)->values[2] = slot_Collection_HashedCollection_ratio; // ratio 
    ((Array)layout_Kernel_Class_MethodDictionary)->values[3] = slot_Collection_HashedCollection_buckets; // buckets 
    ((Array)layout_Kernel_Class_MethodDictionary)->values[4] = slot_Collection_HashedCollection_linear; // linear 
    Class_set_superclass(MethodDictionary_Class, IdentityDictionary_Class);
    MethodDictionary_Class->layout = layout_Kernel_Class_MethodDictionary;
    HEADER(MethodDictionary_Class)->layout = layout_Kernel_Class_MethodDictionary_Class_class;
    MethodDictionary_Class->name = SMB_MethodDictionary;
    
}

void init_Kernel_Class_PMethodDictionary_methods() {
    
}