#include <lib/class/Smalltalk/AST/Self.h>


Optr layout_Smalltalk_AST_Self_Class_class;


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15207 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    // visitSelf:. 
    Send PSend15209 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSelf_, 1, (Optr)self);
    Array PThreadedCode15208 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15209, (Optr)&t_method_return);
    Method PMethod15206 = new_Method_with(PArray15207, empty_Array, empty_Array, PThreadedCode15208, 1, PSend15209);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15206, Smalltalk_AST_Self_Class);
    store_method(Smalltalk_AST_Self_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15211 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_15213 = new_String(L"self");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_15213_Const = new_Constant((Optr)string_15213);
    // <<. 
    Send PSend15214 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_15213_Const);
    Array PThreadedCode15212 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_15213, (Optr)&t_send1, (Optr)PSend15214, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15210 = new_Method_with(PArray15211, empty_Array, empty_Array, PThreadedCode15212, 2, PSend15214, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15210, Smalltalk_AST_Self_Class);
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