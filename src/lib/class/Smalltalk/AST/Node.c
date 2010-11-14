#include <lib/class/Smalltalk/AST/Node.h>


Optr layout_Smalltalk_AST_Node_Class_class;


static void init_SMB_isReturnExpression() {
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    Array PThreadedCode15132 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod15131 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15132, 1, false_Const);
    
    MethodClosure MC_SMB_isReturnExpression = new_MethodClosure((Method)PMethod15131, Smalltalk_AST_Node_Class);
    store_method(Smalltalk_AST_Node_Class, SMB_isReturnExpression, MC_SMB_isReturnExpression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15134 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend15136 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend15137 = new_Send((Optr)VAR_other_0_0, SMB_species, 0);
    // =. 
    Send PSend15138 = new_Send((Optr)PSend15136, SMB__equals_, 1, (Optr)PSend15137);
    Array PThreadedCode15135 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15136, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15137, (Optr)&t_send1, (Optr)PSend15138, (Optr)&t_method_return);
    Method PMethod15133 = new_Method_with(PArray15134, empty_Array, empty_Array, PThreadedCode15135, 1, PSend15138);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15133, Smalltalk_AST_Node_Class);
    store_method(Smalltalk_AST_Node_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_scoped() {
    Symbol SMB_scoped = new_Symbol(L"scoped");
    Array PThreadedCode15140 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod15139 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15140, 1, self);
    
    MethodClosure MC_SMB_scoped = new_MethodClosure((Method)PMethod15139, Smalltalk_AST_Node_Class);
    store_method(Smalltalk_AST_Node_Class, SMB_scoped, MC_SMB_scoped);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15142 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend15144 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode15143 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15144, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15141 = new_Method_with(PArray15142, empty_Array, empty_Array, PThreadedCode15143, 2, PSend15144, self);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15141, Smalltalk_AST_Node_Class);
    store_method(Smalltalk_AST_Node_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15146 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod15145 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15146, 1, false_Const);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15145, Smalltalk_AST_Node_Class);
    store_method(Smalltalk_AST_Node_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}

void init_Smalltalk_AST_ASTNode_layout() {
    layout_Smalltalk_AST_Node_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Node_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Node_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Node_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Node_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Node_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Node = new_Symbol(L"Node");
    Smalltalk_AST_Node_Class = (Class)new_Class(Object_Class, layout_Smalltalk_AST_Node_Class_class);
    Smalltalk_AST_Node_Class->layout = empty_object_layout;
    Smalltalk_AST_Node_Class->name = SMB_Node;
    
}

void init_Smalltalk_AST_ASTNode_methods() {
    init_SMB_isReturnExpression();
    init_SMB__equals_();
    init_SMB_scoped();
    init_SMB_accept_();
    init_SMB_hasReturnExpression();
    
}