#include <lib/class/Smalltalk/AST/Block.h>


Optr layout_Smalltalk_AST_Block_Class_class;
Optr slot_Smalltalk_AST_Block_parameters;
Optr slot_Smalltalk_AST_Block_temporaries;
Optr slot_Smalltalk_AST_Block_statements;
Optr layout_Smalltalk_AST_Block;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray14882 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign14884 = new_Assign((Optr)slot_Smalltalk_AST_Block_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode14883 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14884, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14881 = new_Method_with(PArray14882, empty_Array, empty_Array, PThreadedCode14883, 2, PAssign14884, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod14881, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray14886 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14889 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper14891 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14895 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14894 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14895, (Optr)&t_block_return);
    Block PBlock14893 = new_Block_with(empty_Array, empty_Array, PThreadedCode14894, 1, PSend14895);
    // ifFalse:. 
    Send PSend14892 = new_Send((Optr)PSuper14891, SMB_ifFalse_, 1, (Optr)PBlock14893);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend14896 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend14897 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend14898 = new_Send((Optr)PSend14896, SMB__equals_, 1, (Optr)PSend14897);
    // escape:. 
    Send PSend14902 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14901 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14902, (Optr)&t_block_return);
    Block PBlock14900 = new_Block_with(empty_Array, empty_Array, PThreadedCode14901, 1, PSend14902);
    // ifFalse:. 
    Send PSend14899 = new_Send((Optr)PSend14898, SMB_ifFalse_, 1, (Optr)PBlock14900);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend14903 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend14904 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend14905 = new_Send((Optr)PSend14903, SMB__equals_, 1, (Optr)PSend14904);
    // escape:. 
    Send PSend14909 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14908 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14909, (Optr)&t_block_return);
    Block PBlock14907 = new_Block_with(empty_Array, empty_Array, PThreadedCode14908, 1, PSend14909);
    // ifFalse:. 
    Send PSend14906 = new_Send((Optr)PSend14905, SMB_ifFalse_, 1, (Optr)PBlock14907);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend14910 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend14911 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend14912 = new_Send((Optr)PSend14910, SMB__equals_, 1, (Optr)PSend14911);
    // escape:. 
    Send PSend14916 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14915 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14916, (Optr)&t_block_return);
    Block PBlock14914 = new_Block_with(empty_Array, empty_Array, PThreadedCode14915, 1, PSend14916);
    // ifFalse:. 
    Send PSend14913 = new_Send((Optr)PSend14912, SMB_ifFalse_, 1, (Optr)PBlock14914);
    Array PThreadedCode14890 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper14891, (Optr)&t_send_ifFalse_, (Optr)PSend14892, (Optr)PBlock14893, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14896, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14897, (Optr)&t_send1, (Optr)PSend14898, (Optr)&t_send_ifFalse_, (Optr)PSend14899, (Optr)PBlock14900, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14903, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14904, (Optr)&t_send1, (Optr)PSend14905, (Optr)&t_send_ifFalse_, (Optr)PSend14906, (Optr)PBlock14907, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14910, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14911, (Optr)&t_send1, (Optr)PSend14912, (Optr)&t_send_ifFalse_, (Optr)PSend14913, (Optr)PBlock14914, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock14888 = new_Block_with(PArray14889, empty_Array, PThreadedCode14890, 5, PSend14892, PSend14899, PSend14906, PSend14913, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14917 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14888);
    Array PThreadedCode14887 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14888, (Optr)&t_send1, (Optr)PSend14917, (Optr)&t_method_return);
    Method PMethod14885 = new_Method_with(PArray14886, empty_Array, empty_Array, PThreadedCode14887, 1, PSend14917);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14885, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Array PThreadedCode14919 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_parameters, (Optr)&t_method_return);
    Method PMethod14918 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14919, 1, slot_Smalltalk_AST_Block_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod14918, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray14921 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    // visitBlock:. 
    Send PSend14923 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlock_, 1, (Optr)self);
    Array PThreadedCode14922 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend14923, (Optr)&t_method_return);
    Method PMethod14920 = new_Method_with(PArray14921, empty_Array, empty_Array, PThreadedCode14922, 1, PSend14923);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod14920, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode14925 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_statements, (Optr)&t_method_return);
    Method PMethod14924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14925, 1, slot_Smalltalk_AST_Block_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod14924, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14927 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign14929 = new_Assign((Optr)slot_Smalltalk_AST_Block_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode14928 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14929, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14926 = new_Method_with(PArray14927, empty_Array, empty_Array, PThreadedCode14928, 2, PAssign14929, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod14926, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend14932 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend14933 = new_Send((Optr)PSend14932, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode14931 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14932, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend14933, (Optr)&t_method_return);
    Method PMethod14930 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14931, 1, PSend14933);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod14930, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode14935 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)&t_method_return);
    Method PMethod14934 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14935, 1, slot_Smalltalk_AST_Block_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod14934, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14937 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign14939 = new_Assign((Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode14938 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14939, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14936 = new_Method_with(PArray14937, empty_Array, empty_Array, PThreadedCode14938, 2, PAssign14939, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod14936, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_temporaries_, MC_SMB_temporaries_);
}

void init_Smalltalk_AST_ASTBlock_layout() {
    layout_Smalltalk_AST_Block_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Block_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Block_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Block_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Block_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Block_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Block = new_Symbol(L"Block");
    slot_Smalltalk_AST_Block_parameters = (Optr)new_Slot(0, L"parameters");
    slot_Smalltalk_AST_Block_temporaries = (Optr)new_Slot(1, L"temporaries");
    slot_Smalltalk_AST_Block_statements = (Optr)new_Slot(2, L"statements");
    layout_Smalltalk_AST_Block = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Smalltalk_AST_Block)->values[0] = slot_Smalltalk_AST_Block_parameters; // parameters 
    ((Array)layout_Smalltalk_AST_Block)->values[1] = slot_Smalltalk_AST_Block_temporaries; // temporaries 
    ((Array)layout_Smalltalk_AST_Block)->values[2] = slot_Smalltalk_AST_Block_statements; // statements 
    Smalltalk_AST_Block_Class = (Class)new_Class(Smalltalk_AST_Node_Class, layout_Smalltalk_AST_Block_Class_class);
    Smalltalk_AST_Block_Class->layout = layout_Smalltalk_AST_Block;
    Smalltalk_AST_Block_Class->name = SMB_Block;
    
}

void init_Smalltalk_AST_ASTBlock_methods() {
    init_SMB_parameters_();
    init_SMB__equals_();
    init_SMB_parameters();
    init_SMB_accept_();
    init_SMB_statements();
    init_SMB_statements_();
    init_SMB_hasReturnExpression();
    init_SMB_temporaries();
    init_SMB_temporaries_();
    
}