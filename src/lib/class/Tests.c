#include <lib/class/Tests.h>


Optr layout_Pinocchio_Tests_Class_class;
Optr slot_Pinocchio_Tests_tests;
Optr slot_Pinocchio_Tests_testRunner;
Optr layout_Pinocchio_Tests;

void init_Pinocchio_PTests_layout() {
    layout_Pinocchio_Tests_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Pinocchio_Tests_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Pinocchio_Tests_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Pinocchio_Tests_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Pinocchio_Tests_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Pinocchio_Tests_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Tests = new_Symbol(L"Tests");
    slot_Pinocchio_Tests_tests = (Optr)new_Slot(0, L"tests");
    slot_Pinocchio_Tests_testRunner = (Optr)new_Slot(1, L"testRunner");
    layout_Pinocchio_Tests = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Pinocchio_Tests)->values[0] = slot_Pinocchio_Tests_tests; // tests 
    ((Array)layout_Pinocchio_Tests)->values[1] = slot_Pinocchio_Tests_testRunner; // testRunner 
    _Tests_Class = (Class)new_Class(Object_Class, layout_Pinocchio_Tests_Class_class);
    _Tests_Class->layout = layout_Pinocchio_Tests;
    _Tests_Class->name = SMB_Tests;
    
}

void init_Pinocchio_PTests_methods() {
    
}