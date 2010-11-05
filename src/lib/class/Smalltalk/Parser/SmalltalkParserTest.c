#include <lib/class/Smalltalk/Parser/SmalltalkParserTest.h>


Optr layout_Smalltalk_Parser_SmalltalkParserTest_Class_class;
Optr slot_Smalltalk_Parser_SmalltalkParserTest_pparser;
Optr layout_Smalltalk_Parser_SmalltalkParserTest;

void init_Smalltalk_Parser_PSmalltalkParserTest_layout() {
    layout_Smalltalk_Parser_SmalltalkParserTest_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Smalltalk_Parser_SmalltalkParserTest_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Parser_SmalltalkParserTest_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Parser_SmalltalkParserTest_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Parser_SmalltalkParserTest_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Parser_SmalltalkParserTest_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Smalltalk_Parser_SmalltalkParserTest_Class_class)->values[5] = slot_SUnit_Kernel_TestCase_Class_class_history; // history 
    
    Symbol  SMB_SmalltalkParserTest = new_Symbol(L"SmalltalkParserTest");
    slot_Smalltalk_Parser_SmalltalkParserTest_pparser = (Optr)new_Slot(1, L"pparser");
    layout_Smalltalk_Parser_SmalltalkParserTest = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_Parser_SmalltalkParserTest)->values[0] = slot_SUnit_Kernel_TestCase_testSelector; // testSelector 
    ((Array)layout_Smalltalk_Parser_SmalltalkParserTest)->values[1] = slot_Smalltalk_Parser_SmalltalkParserTest_pparser; // pparser 
    Smalltalk_Parser_SmalltalkParserTest_Class = (Class)new_Class(SUnit_Kernel_TestCase_Class, layout_Smalltalk_Parser_SmalltalkParserTest_Class_class);
    Smalltalk_Parser_SmalltalkParserTest_Class->layout = layout_Smalltalk_Parser_SmalltalkParserTest;
    Smalltalk_Parser_SmalltalkParserTest_Class->name = SMB_SmalltalkParserTest;
    
}

void init_Smalltalk_Parser_PSmalltalkParserTest_methods() {
    
}