#include <lib/class/Organization/UndefinedPathReference.h>


Optr layout_Organization_UndefinedPathReference_Class_class;
Optr layout_Organization_UndefinedPathReference;


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    String string_21726 = new_String(L"Reference to unbound path");
    Array PThreadedCode21725 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_21726, (Optr)&t_method_return);
    Constant string_21726_Const = new_Constant((Optr)string_21726);
    Method PMethod21724 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21725, 1, string_21726_Const);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod21724, Organization_UndefinedPathReference_Class);
    store_method(Organization_UndefinedPathReference_Class, SMB_message, MC_SMB_message);
}

void init_Organization_PUndefinedPathReference_layout() {
    layout_Organization_UndefinedPathReference_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Organization_UndefinedPathReference_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Organization_UndefinedPathReference_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Organization_UndefinedPathReference_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Organization_UndefinedPathReference_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Organization_UndefinedPathReference_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_UndefinedPathReference = new_Symbol(L"UndefinedPathReference");
    layout_Organization_UndefinedPathReference = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Organization_UndefinedPathReference)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Organization_UndefinedPathReference)->values[1] = slot_Organization_PathSegmentException_path; // path 
    ((Array)layout_Organization_UndefinedPathReference)->values[2] = slot_Organization_PathSegmentException_index; // index 
    Organization_UndefinedPathReference_Class = (Class)new_Class(Organization_PathSegmentException_Class, layout_Organization_UndefinedPathReference_Class_class);
    Organization_UndefinedPathReference_Class->layout = layout_Organization_UndefinedPathReference;
    Organization_UndefinedPathReference_Class->name = SMB_UndefinedPathReference;
    
}

void init_Organization_PUndefinedPathReference_methods() {
    init_SMB_message();
    
}