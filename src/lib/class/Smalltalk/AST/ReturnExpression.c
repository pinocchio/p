#include <lib/class/Smalltalk/AST/ReturnExpression.h>


Optr layout_Smalltalk_AST_ReturnExpression_Class_class;
Optr slot_Smalltalk_AST_ReturnExpression_expression;
Optr layout_Smalltalk_AST_ReturnExpression;


static void init_SMB_expression_() {
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16051 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16053 = new_Assign((Optr)slot_Smalltalk_AST_ReturnExpression_expression, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16052 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16053, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16050 = new_Method_with(PArray16051, empty_Array, empty_Array, PThreadedCode16052, 2, PAssign16053, self);
    
    MethodClosure MC_SMB_expression_ = new_MethodClosure((Method)PMethod16050, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_expression_, MC_SMB_expression_);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode16055 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_ReturnExpression_expression, (Optr)&t_method_return);
    Method PMethod16054 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16055, 1, slot_Smalltalk_AST_ReturnExpression_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod16054, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB_isReturnExpression() {
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    Array PThreadedCode16057 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod16056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16057, 1, true_Const);
    
    MethodClosure MC_SMB_isReturnExpression = new_MethodClosure((Method)PMethod16056, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_isReturnExpression, MC_SMB_isReturnExpression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray16059 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16062 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper16064 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16068 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16067 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16068, (Optr)&t_block_return);
    Block PBlock16066 = new_Block_with(empty_Array, empty_Array, PThreadedCode16067, 1, PSend16068);
    // ifFalse:. 
    Send PSend16065 = new_Send((Optr)PSuper16064, SMB_ifFalse_, 1, (Optr)PBlock16066);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend16069 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend16070 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend16071 = new_Send((Optr)PSend16069, SMB__equals_, 1, (Optr)PSend16070);
    // escape:. 
    Send PSend16075 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16074 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16075, (Optr)&t_block_return);
    Block PBlock16073 = new_Block_with(empty_Array, empty_Array, PThreadedCode16074, 1, PSend16075);
    // ifFalse:. 
    Send PSend16072 = new_Send((Optr)PSend16071, SMB_ifFalse_, 1, (Optr)PBlock16073);
    Array PThreadedCode16063 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper16064, (Optr)&t_send_ifFalse_, (Optr)PSend16065, (Optr)PBlock16066, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16069, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16070, (Optr)&t_send1, (Optr)PSend16071, (Optr)&t_send_ifFalse_, (Optr)PSend16072, (Optr)PBlock16073, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock16061 = new_Block_with(PArray16062, empty_Array, PThreadedCode16063, 3, PSend16065, PSend16072, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16076 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16061);
    Array PThreadedCode16060 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16061, (Optr)&t_send1, (Optr)PSend16076, (Optr)&t_method_return);
    Method PMethod16058 = new_Method_with(PArray16059, empty_Array, empty_Array, PThreadedCode16060, 1, PSend16076);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod16058, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray16078 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitReturnExpression_ = new_Symbol(L"visitReturnExpression:");
    // visitReturnExpression:. 
    Send PSend16080 = new_Send((Optr)VAR_visitor_0_0, SMB_visitReturnExpression_, 1, (Optr)self);
    Array PThreadedCode16079 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16080, (Optr)&t_method_return);
    Method PMethod16077 = new_Method_with(PArray16078, empty_Array, empty_Array, PThreadedCode16079, 1, PSend16080);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod16077, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode16082 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod16081 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16082, 1, true_Const);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod16081, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_expression = new_Symbol(L"expression");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_expression_Const = new_Constant((Optr)SMB_expression);
    // with:. 
    Send PSend16085 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_expression_Const);
    Array PThreadedCode16084 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_send1, (Optr)PSend16085, (Optr)&t_method_return);
    Method PMethod16083 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16084, 1, PSend16085);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod16083, HEADER(Smalltalk_AST_ReturnExpression_Class));
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