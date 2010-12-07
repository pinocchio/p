#include <lib/class/Smalltalk/AST/ReturnExpression.h>


Optr layout_Smalltalk_AST_ReturnExpression_Class_class;
Optr slot_Smalltalk_AST_ReturnExpression_expression;
Optr layout_Smalltalk_AST_ReturnExpression;


static void init_SMB_expression_() {
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16049 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16051 = new_Assign((Optr)slot_Smalltalk_AST_ReturnExpression_expression, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16050 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16051, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16048 = new_Method_with(PArray16049, empty_Array, empty_Array, PThreadedCode16050, 2, PAssign16051, self);
    
    MethodClosure MC_SMB_expression_ = new_MethodClosure((Method)PMethod16048, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_expression_, MC_SMB_expression_);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode16053 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_ReturnExpression_expression, (Optr)&t_method_return);
    Method PMethod16052 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16053, 1, slot_Smalltalk_AST_ReturnExpression_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod16052, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB_isReturnExpression() {
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    Array PThreadedCode16055 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod16054 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16055, 1, true_Const);
    
    MethodClosure MC_SMB_isReturnExpression = new_MethodClosure((Method)PMethod16054, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_isReturnExpression, MC_SMB_isReturnExpression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray16057 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16060 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper16062 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16066 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16065 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16066, (Optr)&t_block_return);
    Block PBlock16064 = new_Block_with(empty_Array, empty_Array, PThreadedCode16065, 1, PSend16066);
    // ifFalse:. 
    Send PSend16063 = new_Send((Optr)PSuper16062, SMB_ifFalse_, 1, (Optr)PBlock16064);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend16067 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend16068 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend16069 = new_Send((Optr)PSend16067, SMB__equals_, 1, (Optr)PSend16068);
    // escape:. 
    Send PSend16073 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16072 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16073, (Optr)&t_block_return);
    Block PBlock16071 = new_Block_with(empty_Array, empty_Array, PThreadedCode16072, 1, PSend16073);
    // ifFalse:. 
    Send PSend16070 = new_Send((Optr)PSend16069, SMB_ifFalse_, 1, (Optr)PBlock16071);
    Array PThreadedCode16061 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper16062, (Optr)&t_send_ifFalse_, (Optr)PSend16063, (Optr)PBlock16064, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16067, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16068, (Optr)&t_send1, (Optr)PSend16069, (Optr)&t_send_ifFalse_, (Optr)PSend16070, (Optr)PBlock16071, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock16059 = new_Block_with(PArray16060, empty_Array, PThreadedCode16061, 3, PSend16063, PSend16070, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16074 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16059);
    Array PThreadedCode16058 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16059, (Optr)&t_send1, (Optr)PSend16074, (Optr)&t_method_return);
    Method PMethod16056 = new_Method_with(PArray16057, empty_Array, empty_Array, PThreadedCode16058, 1, PSend16074);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod16056, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray16076 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitReturnExpression_ = new_Symbol(L"visitReturnExpression:");
    // visitReturnExpression:. 
    Send PSend16078 = new_Send((Optr)VAR_visitor_0_0, SMB_visitReturnExpression_, 1, (Optr)self);
    Array PThreadedCode16077 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16078, (Optr)&t_method_return);
    Method PMethod16075 = new_Method_with(PArray16076, empty_Array, empty_Array, PThreadedCode16077, 1, PSend16078);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod16075, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode16080 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod16079 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16080, 1, true_Const);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod16079, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_expression = new_Symbol(L"expression");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_expression_Const = new_Constant((Optr)SMB_expression);
    // with:. 
    Send PSend16083 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_expression_Const);
    Array PThreadedCode16082 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_send1, (Optr)PSend16083, (Optr)&t_method_return);
    Method PMethod16081 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16082, 1, PSend16083);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod16081, HEADER(Smalltalk_AST_ReturnExpression_Class));
    store_method(HEADER(Smalltalk_AST_ReturnExpression_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTReturnExpression_layout() {
    layout_Smalltalk_AST_ReturnExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_ReturnExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_ReturnExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_ReturnExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_ReturnExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_ReturnExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ReturnExpression = new_Symbol(L"ReturnExpression");
    slot_Smalltalk_AST_ReturnExpression_expression = (Optr)new_Slot(0, L"expression");
    layout_Smalltalk_AST_ReturnExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_ReturnExpression)->values[0] = slot_Smalltalk_AST_ReturnExpression_expression; // expression 
    Smalltalk_AST_ReturnExpression_Class = (Class)new_Class(Smalltalk_AST_Expression_Class, layout_Smalltalk_AST_ReturnExpression_Class_class);
    Smalltalk_AST_ReturnExpression_Class->layout = layout_Smalltalk_AST_ReturnExpression;
    Smalltalk_AST_ReturnExpression_Class->name = SMB_ReturnExpression;
    
}

void init_Smalltalk_AST_ASTReturnExpression_methods() {
    init_SMB_expression_();
    init_SMB_expression();
    init_SMB_isReturnExpression();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_hasReturnExpression();
    init_class_SMB_astSelectors();
    
}