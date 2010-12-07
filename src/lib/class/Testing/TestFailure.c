#include <lib/class/Testing/TestFailure.h>


Optr layout_Testing_TestFailure_Class_class;
Optr layout_Testing_TestFailure;


static void init_SMB_isResumable() {
    Symbol SMB_isResumable = new_Symbol(L"isResumable");
    Array PThreadedCode12307 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod12306 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12307, 1, false_Const);
    
    MethodClosure MC_SMB_isResumable = new_MethodClosure((Method)PMethod12306, Testing_TestFailure_Class);
    store_method(Testing_TestFailure_Class, SMB_isResumable, MC_SMB_isResumable);
}

void init_Testing_TestFailure_layout() {
    layout_Testing_TestFailure_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Testing_TestFailure_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Testing_TestFailure_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Testing_TestFailure_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Testing_TestFailure_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Testing_TestFailure_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_TestFailure = new_Symbol(L"TestFailure");
    layout_Testing_TestFailure = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Testing_TestFailure)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    Testing_TestFailure_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_Testing_TestFailure_Class_class);
    Class_set_superclass(Testing_TestFailure_Class, Kernel_Exception_Exception_Class);
    Testing_TestFailure_Class->layout = layout_Testing_TestFailure;
    HEADER(Testing_TestFailure_Class)->layout = layout_Testing_TestFailure_Class_class;
    Testing_TestFailure_Class->name = SMB_TestFailure;
    
}

void init_Testing_TestFailure_methods() {
    init_SMB_isResumable();
    
}