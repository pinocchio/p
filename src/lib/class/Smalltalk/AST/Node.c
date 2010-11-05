#include <lib/class/Smalltalk/AST/Node.h>


Optr layout_Smalltalk_AST_Node_Class_class;


static void init_SMB_isReturnExpression() {
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    Array PThreadedCode14802 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod14801 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14802, 1, false_Const);
    
    MethodClosure MC_SMB_isReturnExpression = new_MethodClosure((Method)PMethod14801, Smalltalk_AST_Node_Class);
    store_method(Smalltalk_AST_Node_Class, SMB_isReturnExpression, MC_SMB_isReturnExpression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray14804 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend14806 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend14807 = new_Send((Optr)VAR_other_0_0, SMB_species, 0);
    // =. 
    Send PSend14808 = new_Send((Optr)PSend14806, SMB__equals_, 1, (Optr)PSend14807);
    Array PThreadedCode14805 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14806, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14807, (Optr)&t_send1, (Optr)PSend14808, (Optr)&t_method_return);
    Method PMethod14803 = new_Method_with(PArray14804, empty_Array, empty_Array, PThreadedCode14805, 1, PSend14808);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14803, Smalltalk_AST_Node_Class);
    store_method(Smalltalk_AST_Node_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_scoped() {
    Symbol SMB_scoped = new_Symbol(L"scoped");
    Array PThreadedCode14810 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod14809 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14810, 1, self);
    
    MethodClosure MC_SMB_scoped = new_MethodClosure((Method)PMethod14809, Smalltalk_AST_Node_Class);
    store_method(Smalltalk_AST_Node_Class, SMB_scoped, MC_SMB_scoped);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray14812 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend14814 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode14813 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14814, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14811 = new_Method_with(PArray14812, empty_Array, empty_Array, PThreadedCode14813, 2, PSend14814, self);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod14811, Smalltalk_AST_Node_Class);
    store_method(Smalltalk_AST_Node_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode14816 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod14815 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14816, 1, false_Const);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod14815, Smalltalk_AST_Node_Class);
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