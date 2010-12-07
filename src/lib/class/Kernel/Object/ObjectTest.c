#include <lib/class/Kernel/Object/ObjectTest.h>


Optr layout_Kernel_Object_ObjectTest_Class_class;
Optr slot_Kernel_Object_ObjectTest_instance;
Optr slot_Kernel_Object_ObjectTest_instanceClass;
Optr layout_Kernel_Object_ObjectTest;

void init_Kernel_Object_PObjectTest_layout() {
    layout_Kernel_Object_ObjectTest_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Kernel_Object_ObjectTest_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Object_ObjectTest_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Object_ObjectTest_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Object_ObjectTest_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Object_ObjectTest_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Kernel_Object_ObjectTest_Class_class)->values[5] = slot_SUnit_Kernel_TestCase_Class_class_history; // history 
    
    Symbol  SMB_ObjectTest = new_Symbol(L"ObjectTest");
    slot_Kernel_Object_ObjectTest_instance = (Optr)new_Slot(1, L"instance");
    slot_Kernel_Object_ObjectTest_instanceClass = (Optr)new_Slot(2, L"instanceClass");
    layout_Kernel_Object_ObjectTest = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Kernel_Object_ObjectTest)->values[0] = slot_SUnit_Kernel_TestCase_testSelector; // testSelector 
    ((Array)layout_Kernel_Object_ObjectTest)->values[1] = slot_Kernel_Object_ObjectTest_instance; // instance 
    ((Array)layout_Kernel_Object_ObjectTest)->values[2] = slot_Kernel_Object_ObjectTest_instanceClass; // instanceClass 
    Kernel_Object_ObjectTest_Class = (Class)new_Class(SUnit_Kernel_TestCase_Class, layout_Kernel_Object_ObjectTest_Class_class);
    Kernel_Object_ObjectTest_Class->layout = layout_Kernel_Object_ObjectTest;
    Kernel_Object_ObjectTest_Class->name = SMB_ObjectTest;
    
}

void init_Kernel_Object_PObjectTest_methods() {
    
}