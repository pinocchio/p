#include <lib/class/Smalltalk/AST/Block.h>


Optr layout_Smalltalk_AST_Block_Class_class;
Optr slot_Smalltalk_AST_Block_parameters;
Optr slot_Smalltalk_AST_Block_temporaries;
Optr slot_Smalltalk_AST_Block_statements;
Optr layout_Smalltalk_AST_Block;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray14852 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign14854 = new_Assign((Optr)slot_Smalltalk_AST_Block_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode14853 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14854, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14851 = new_Method_with(PArray14852, empty_Array, empty_Array, PThreadedCode14853, 2, PAssign14854, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod14851, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray14856 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14859 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper14861 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14865 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14864 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14865, (Optr)&t_block_return);
    Block PBlock14863 = new_Block_with(empty_Array, empty_Array, PThreadedCode14864, 1, PSend14865);
    // ifFalse:. 
    Send PSend14862 = new_Send((Optr)PSuper14861, SMB_ifFalse_, 1, (Optr)PBlock14863);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend14866 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend14867 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend14868 = new_Send((Optr)PSend14866, SMB__equals_, 1, (Optr)PSend14867);
    // escape:. 
    Send PSend14872 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14871 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14872, (Optr)&t_block_return);
    Block PBlock14870 = new_Block_with(empty_Array, empty_Array, PThreadedCode14871, 1, PSend14872);
    // ifFalse:. 
    Send PSend14869 = new_Send((Optr)PSend14868, SMB_ifFalse_, 1, (Optr)PBlock14870);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend14873 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend14874 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend14875 = new_Send((Optr)PSend14873, SMB__equals_, 1, (Optr)PSend14874);
    // escape:. 
    Send PSend14879 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14878 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14879, (Optr)&t_block_return);
    Block PBlock14877 = new_Block_with(empty_Array, empty_Array, PThreadedCode14878, 1, PSend14879);
    // ifFalse:. 
    Send PSend14876 = new_Send((Optr)PSend14875, SMB_ifFalse_, 1, (Optr)PBlock14877);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend14880 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend14881 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend14882 = new_Send((Optr)PSend14880, SMB__equals_, 1, (Optr)PSend14881);
    // escape:. 
    Send PSend14886 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14885 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14886, (Optr)&t_block_return);
    Block PBlock14884 = new_Block_with(empty_Array, empty_Array, PThreadedCode14885, 1, PSend14886);
    // ifFalse:. 
    Send PSend14883 = new_Send((Optr)PSend14882, SMB_ifFalse_, 1, (Optr)PBlock14884);
    Array PThreadedCode14860 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper14861, (Optr)&t_send_ifFalse_, (Optr)PSend14862, (Optr)PBlock14863, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14866, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14867, (Optr)&t_send1, (Optr)PSend14868, (Optr)&t_send_ifFalse_, (Optr)PSend14869, (Optr)PBlock14870, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14873, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14874, (Optr)&t_send1, (Optr)PSend14875, (Optr)&t_send_ifFalse_, (Optr)PSend14876, (Optr)PBlock14877, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14880, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14881, (Optr)&t_send1, (Optr)PSend14882, (Optr)&t_send_ifFalse_, (Optr)PSend14883, (Optr)PBlock14884, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock14858 = new_Block_with(PArray14859, empty_Array, PThreadedCode14860, 5, PSend14862, PSend14869, PSend14876, PSend14883, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14887 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14858);
    Array PThreadedCode14857 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14858, (Optr)&t_send1, (Optr)PSend14887, (Optr)&t_method_return);
    Method PMethod14855 = new_Method_with(PArray14856, empty_Array, empty_Array, PThreadedCode14857, 1, PSend14887);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14855, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Array PThreadedCode14889 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_parameters, (Optr)&t_method_return);
    Method PMethod14888 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14889, 1, slot_Smalltalk_AST_Block_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod14888, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray14891 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    // visitBlock:. 
    Send PSend14893 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlock_, 1, (Optr)self);
    Array PThreadedCode14892 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend14893, (Optr)&t_method_return);
    Method PMethod14890 = new_Method_with(PArray14891, empty_Array, empty_Array, PThreadedCode14892, 1, PSend14893);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod14890, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode14895 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_statements, (Optr)&t_method_return);
    Method PMethod14894 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14895, 1, slot_Smalltalk_AST_Block_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod14894, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14897 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign14899 = new_Assign((Optr)slot_Smalltalk_AST_Block_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode14898 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14899, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14896 = new_Method_with(PArray14897, empty_Array, empty_Array, PThreadedCode14898, 2, PAssign14899, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod14896, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend14902 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend14903 = new_Send((Optr)PSend14902, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode14901 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14902, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend14903, (Optr)&t_method_return);
    Method PMethod14900 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14901, 1, PSend14903);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod14900, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode14905 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)&t_method_return);
    Method PMethod14904 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14905, 1, slot_Smalltalk_AST_Block_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod14904, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14907 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign14909 = new_Assign((Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode14908 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14909, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14906 = new_Method_with(PArray14907, empty_Array, empty_Array, PThreadedCode14908, 2, PAssign14909, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod14906, Smalltalk_AST_Block_Class);
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