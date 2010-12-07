#include <lib/class/Smalltalk/AST/Self.h>


Optr layout_Smalltalk_AST_Self_Class_class;


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray15180 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    // visitSelf:. 
    Send PSend15182 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSelf_, 1, (Optr)self);
    Array PThreadedCode15181 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15182, (Optr)&t_method_return);
    Method PMethod15179 = new_Method_with(PArray15180, empty_Array, empty_Array, PThreadedCode15181, 1, PSend15182);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15179, Smalltalk_AST_Self_Class);
=======
    Array PArray15146 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    // visitSelf:. 
    Send PSend15148 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSelf_, 1, (Optr)self);
    Array PThreadedCode15147 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15148, (Optr)&t_method_return);
    Method PMethod15145 = new_Method_with(PArray15146, empty_Array, empty_Array, PThreadedCode15147, 1, PSend15148);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15145, Smalltalk_AST_Self_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Self_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray15184 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_15186 = new_String(L"self");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_15186_Const = new_Constant((Optr)string_15186);
    // <<. 
    Send PSend15187 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_15186_Const);
    Array PThreadedCode15185 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_15186, (Optr)&t_send1, (Optr)PSend15187, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15183 = new_Method_with(PArray15184, empty_Array, empty_Array, PThreadedCode15185, 2, PSend15187, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15183, Smalltalk_AST_Self_Class);
=======
    Array PArray15150 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_15152 = new_String(L"self");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_15152_Const = new_Constant((Optr)string_15152);
    // <<. 
    Send PSend15153 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_15152_Const);
    Array PThreadedCode15151 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_15152, (Optr)&t_send1, (Optr)PSend15153, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15149 = new_Method_with(PArray15150, empty_Array, empty_Array, PThreadedCode15151, 2, PSend15153, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15149, Smalltalk_AST_Self_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Self_Class, SMB_printOn_, MC_SMB_printOn_);
}

void init_Smalltalk_AST_ASTSelf_layout() {
    layout_Smalltalk_AST_Self_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Self_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Self_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Self_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Self_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Self_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Self = new_Symbol(L"Self");
    Smalltalk_AST_Self_Class = (Class)new_Class(Smalltalk_AST_Node_Class, layout_Smalltalk_AST_Self_Class_class);
    Smalltalk_AST_Self_Class->layout = empty_object_layout;
    Smalltalk_AST_Self_Class->name = SMB_Self;
    
}

void init_Smalltalk_AST_ASTSelf_methods() {
    init_SMB_accept_();
    init_SMB_printOn_();
    
}