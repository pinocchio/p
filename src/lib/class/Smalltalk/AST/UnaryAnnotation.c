#include <lib/class/Smalltalk/AST/UnaryAnnotation.h>


Optr layout_Smalltalk_AST_UnaryAnnotation_Class_class;
Optr layout_Smalltalk_AST_UnaryAnnotation;


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15971 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitUnaryAnnotation_ = new_Symbol(L"visitUnaryAnnotation:");
    // visitUnaryAnnotation:. 
    Send PSend15973 = new_Send((Optr)VAR_visitor_0_0, SMB_visitUnaryAnnotation_, 1, (Optr)self);
    Array PThreadedCode15972 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15973, (Optr)&t_method_return);
    Method PMethod15970 = new_Method_with(PArray15971, empty_Array, empty_Array, PThreadedCode15972, 1, PSend15973);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15970, Smalltalk_AST_UnaryAnnotation_Class);
    store_method(Smalltalk_AST_UnaryAnnotation_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Smalltalk_AST_ASTUnaryAnnotation_layout() {
    layout_Smalltalk_AST_UnaryAnnotation_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_UnaryAnnotation_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_UnaryAnnotation_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_UnaryAnnotation_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_UnaryAnnotation_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_UnaryAnnotation_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_UnaryAnnotation = new_Symbol(L"UnaryAnnotation");
    layout_Smalltalk_AST_UnaryAnnotation = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_UnaryAnnotation)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    Smalltalk_AST_UnaryAnnotation_Class = (Class)new_Class(Smalltalk_AST_UnarySelector_Class, layout_Smalltalk_AST_UnaryAnnotation_Class_class);
    Smalltalk_AST_UnaryAnnotation_Class->layout = layout_Smalltalk_AST_UnaryAnnotation;
    Smalltalk_AST_UnaryAnnotation_Class->name = SMB_UnaryAnnotation;
    
}

void init_Smalltalk_AST_ASTUnaryAnnotation_methods() {
    init_SMB_accept_();
    
}