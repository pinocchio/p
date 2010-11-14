#include <lib/class/Smalltalk/AST/Super.h>


Optr layout_Smalltalk_AST_Super_Class_class;


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15372 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    // visitSuper:. 
    Send PSend15374 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSuper_, 1, (Optr)self);
    Array PThreadedCode15373 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15374, (Optr)&t_method_return);
    Method PMethod15371 = new_Method_with(PArray15372, empty_Array, empty_Array, PThreadedCode15373, 1, PSend15374);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15371, Smalltalk_AST_Super_Class);
    store_method(Smalltalk_AST_Super_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Smalltalk_AST_ASTSuper_layout() {
    layout_Smalltalk_AST_Super_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Super_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Super_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Super_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Super_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Super_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Super = new_Symbol(L"Super");
    Smalltalk_AST_Super_Class = (Class)new_Class(Smalltalk_AST_Node_Class, layout_Smalltalk_AST_Super_Class_class);
    Smalltalk_AST_Super_Class->layout = empty_object_layout;
    Smalltalk_AST_Super_Class->name = SMB_Super;
    
}

void init_Smalltalk_AST_ASTSuper_methods() {
    init_SMB_accept_();
    
}