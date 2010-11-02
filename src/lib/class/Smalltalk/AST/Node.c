#include <lib/class/Smalltalk/AST/Node.h>


Optr layout_Smalltalk_AST_Node_Class_class;


static void init_SMB_isReturnExpression() {
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    Array PThreadedCode14772 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod14771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14772, 1, false_Const);
    
    MethodClosure MC_SMB_isReturnExpression = new_MethodClosure((Method)PMethod14771, Smalltalk_AST_Node_Class);
    store_method(Smalltalk_AST_Node_Class, SMB_isReturnExpression, MC_SMB_isReturnExpression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray14774 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend14776 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend14777 = new_Send((Optr)VAR_other_0_0, SMB_species, 0);
    // =. 
    Send PSend14778 = new_Send((Optr)PSend14776, SMB__equals_, 1, (Optr)PSend14777);
    Array PThreadedCode14775 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14776, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14777, (Optr)&t_send1, (Optr)PSend14778, (Optr)&t_method_return);
    Method PMethod14773 = new_Method_with(PArray14774, empty_Array, empty_Array, PThreadedCode14775, 1, PSend14778);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14773, Smalltalk_AST_Node_Class);
    store_method(Smalltalk_AST_Node_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_scoped() {
    Symbol SMB_scoped = new_Symbol(L"scoped");
    Array PThreadedCode14780 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod14779 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14780, 1, self);
    
    MethodClosure MC_SMB_scoped = new_MethodClosure((Method)PMethod14779, Smalltalk_AST_Node_Class);
    store_method(Smalltalk_AST_Node_Class, SMB_scoped, MC_SMB_scoped);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray14782 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend14784 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode14783 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14784, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14781 = new_Method_with(PArray14782, empty_Array, empty_Array, PThreadedCode14783, 2, PSend14784, self);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod14781, Smalltalk_AST_Node_Class);
    store_method(Smalltalk_AST_Node_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode14786 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod14785 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14786, 1, false_Const);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod14785, Smalltalk_AST_Node_Class);
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