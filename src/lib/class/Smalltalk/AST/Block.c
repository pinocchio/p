#include <lib/class/Smalltalk/AST/Block.h>


Optr layout_Smalltalk_AST_Block_Class_class;
Optr slot_Smalltalk_AST_Block_parameters;
Optr slot_Smalltalk_AST_Block_temporaries;
Optr slot_Smalltalk_AST_Block_statements;
Optr layout_Smalltalk_AST_Block;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray14939 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign14941 = new_Assign((Optr)slot_Smalltalk_AST_Block_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode14940 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14941, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14938 = new_Method_with(PArray14939, empty_Array, empty_Array, PThreadedCode14940, 2, PAssign14941, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod14938, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray14943 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14946 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper14948 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14952 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14951 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14952, (Optr)&t_block_return);
    Block PBlock14950 = new_Block_with(empty_Array, empty_Array, PThreadedCode14951, 1, PSend14952);
    // ifFalse:. 
    Send PSend14949 = new_Send((Optr)PSuper14948, SMB_ifFalse_, 1, (Optr)PBlock14950);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend14953 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend14954 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend14955 = new_Send((Optr)PSend14953, SMB__equals_, 1, (Optr)PSend14954);
    // escape:. 
    Send PSend14959 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14958 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14959, (Optr)&t_block_return);
    Block PBlock14957 = new_Block_with(empty_Array, empty_Array, PThreadedCode14958, 1, PSend14959);
    // ifFalse:. 
    Send PSend14956 = new_Send((Optr)PSend14955, SMB_ifFalse_, 1, (Optr)PBlock14957);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend14960 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend14961 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend14962 = new_Send((Optr)PSend14960, SMB__equals_, 1, (Optr)PSend14961);
    // escape:. 
    Send PSend14966 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14965 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14966, (Optr)&t_block_return);
    Block PBlock14964 = new_Block_with(empty_Array, empty_Array, PThreadedCode14965, 1, PSend14966);
    // ifFalse:. 
    Send PSend14963 = new_Send((Optr)PSend14962, SMB_ifFalse_, 1, (Optr)PBlock14964);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend14967 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend14968 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend14969 = new_Send((Optr)PSend14967, SMB__equals_, 1, (Optr)PSend14968);
    // escape:. 
    Send PSend14973 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14972 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14973, (Optr)&t_block_return);
    Block PBlock14971 = new_Block_with(empty_Array, empty_Array, PThreadedCode14972, 1, PSend14973);
    // ifFalse:. 
    Send PSend14970 = new_Send((Optr)PSend14969, SMB_ifFalse_, 1, (Optr)PBlock14971);
    Array PThreadedCode14947 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper14948, (Optr)&t_send_ifFalse_, (Optr)PSend14949, (Optr)PBlock14950, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14953, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14954, (Optr)&t_send1, (Optr)PSend14955, (Optr)&t_send_ifFalse_, (Optr)PSend14956, (Optr)PBlock14957, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14960, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14961, (Optr)&t_send1, (Optr)PSend14962, (Optr)&t_send_ifFalse_, (Optr)PSend14963, (Optr)PBlock14964, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14967, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14968, (Optr)&t_send1, (Optr)PSend14969, (Optr)&t_send_ifFalse_, (Optr)PSend14970, (Optr)PBlock14971, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock14945 = new_Block_with(PArray14946, empty_Array, PThreadedCode14947, 5, PSend14949, PSend14956, PSend14963, PSend14970, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14974 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14945);
    Array PThreadedCode14944 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14945, (Optr)&t_send1, (Optr)PSend14974, (Optr)&t_method_return);
    Method PMethod14942 = new_Method_with(PArray14943, empty_Array, empty_Array, PThreadedCode14944, 1, PSend14974);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14942, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Array PThreadedCode14976 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_parameters, (Optr)&t_method_return);
    Method PMethod14975 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14976, 1, slot_Smalltalk_AST_Block_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod14975, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray14978 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    // visitBlock:. 
    Send PSend14980 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlock_, 1, (Optr)self);
    Array PThreadedCode14979 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend14980, (Optr)&t_method_return);
    Method PMethod14977 = new_Method_with(PArray14978, empty_Array, empty_Array, PThreadedCode14979, 1, PSend14980);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod14977, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode14982 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_statements, (Optr)&t_method_return);
    Method PMethod14981 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14982, 1, slot_Smalltalk_AST_Block_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod14981, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14984 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign14986 = new_Assign((Optr)slot_Smalltalk_AST_Block_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode14985 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14986, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14983 = new_Method_with(PArray14984, empty_Array, empty_Array, PThreadedCode14985, 2, PAssign14986, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod14983, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend14989 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend14990 = new_Send((Optr)PSend14989, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode14988 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14989, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend14990, (Optr)&t_method_return);
    Method PMethod14987 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14988, 1, PSend14990);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod14987, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode14992 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)&t_method_return);
    Method PMethod14991 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14992, 1, slot_Smalltalk_AST_Block_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod14991, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14994 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign14996 = new_Assign((Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode14995 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14996, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14993 = new_Method_with(PArray14994, empty_Array, empty_Array, PThreadedCode14995, 2, PAssign14996, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod14993, Smalltalk_AST_Block_Class);
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