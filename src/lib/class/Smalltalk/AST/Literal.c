#include <lib/class/Smalltalk/AST/Literal.h>


Optr layout_Smalltalk_AST_Literal_Class_class;

void init_Smalltalk_AST_ASTLiteral_layout() {
    layout_Smalltalk_AST_Literal_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Literal_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Literal_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Literal_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Literal_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Literal_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Literal = new_Symbol(L"Literal");
    Smalltalk_AST_Literal_Class = (Class)new_Class(Smalltalk_AST_Node_Class, layout_Smalltalk_AST_Literal_Class_class);
    Smalltalk_AST_Literal_Class->layout = empty_object_layout;
    Smalltalk_AST_Literal_Class->name = SMB_Literal;
    
}

void init_Smalltalk_AST_ASTLiteral_methods() {
    
}