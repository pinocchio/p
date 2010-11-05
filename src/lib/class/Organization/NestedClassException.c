#include <lib/class/Organization/NestedClassException.h>


Optr layout_Organization_NestedClassException_Class_class;
Optr layout_Organization_NestedClassException;


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    String string_21925 = new_String(L"Classes are not nested");
    Array PThreadedCode21924 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_21925, (Optr)&t_method_return);
    Constant string_21925_Const = new_Constant((Optr)string_21925);
    Method PMethod21923 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21924, 1, string_21925_Const);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod21923, Organization_NestedClassException_Class);
    store_method(Organization_NestedClassException_Class, SMB_message, MC_SMB_message);
}

void init_Organization_PNestedClassException_layout() {
    layout_Organization_NestedClassException_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Organization_NestedClassException_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Organization_NestedClassException_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Organization_NestedClassException_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Organization_NestedClassException_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Organization_NestedClassException_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_NestedClassException = new_Symbol(L"NestedClassException");
    layout_Organization_NestedClassException = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Organization_NestedClassException)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Organization_NestedClassException)->values[1] = slot_Organization_PathSegmentException_path; // path 
    ((Array)layout_Organization_NestedClassException)->values[2] = slot_Organization_PathSegmentException_index; // index 
    Organization_NestedClassException_Class = (Class)new_Class(Organization_PathSegmentException_Class, layout_Organization_NestedClassException_Class_class);
    Organization_NestedClassException_Class->layout = layout_Organization_NestedClassException;
    Organization_NestedClassException_Class->name = SMB_NestedClassException;
    
}

void init_Organization_PNestedClassException_methods() {
    init_SMB_message();
    
}