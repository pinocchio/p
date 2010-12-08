#include <lib/class/Smalltalk/AST/AssignmentExpression.h>


Optr layout_Smalltalk_AST_AssignmentExpression_Class_class;
Optr slot_Smalltalk_AST_AssignmentExpression_variable;
Optr slot_Smalltalk_AST_AssignmentExpression_expression;
Optr layout_Smalltalk_AST_AssignmentExpression;


static void init_SMB_variable_() {
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15915 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15917 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15916 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15917, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15914 = new_Method_with(PArray15915, empty_Array, empty_Array, PThreadedCode15916, 2, PAssign15917, self);
    
    MethodClosure MC_SMB_variable_ = new_MethodClosure((Method)PMethod15914, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_variable_, MC_SMB_variable_);
}


static void init_SMB_expression_() {
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15919 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15921 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15920 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15921, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15918 = new_Method_with(PArray15919, empty_Array, empty_Array, PThreadedCode15920, 2, PAssign15921, self);
    
    MethodClosure MC_SMB_expression_ = new_MethodClosure((Method)PMethod15918, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_expression_, MC_SMB_expression_);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode15923 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_method_return);
    Method PMethod15922 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15923, 1, slot_Smalltalk_AST_AssignmentExpression_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod15922, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15925 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15928 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15930 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15934 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15933 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15934, (Optr)&t_block_return);
    Block PBlock15932 = new_Block_with(empty_Array, empty_Array, PThreadedCode15933, 1, PSend15934);
    // ifFalse:. 
    Send PSend15931 = new_Send((Optr)PSuper15930, SMB_ifFalse_, 1, (Optr)PBlock15932);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend15935 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend15936 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend15937 = new_Send((Optr)PSend15935, SMB__equals_, 1, (Optr)PSend15936);
    // escape:. 
    Send PSend15941 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15940 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15941, (Optr)&t_block_return);
    Block PBlock15939 = new_Block_with(empty_Array, empty_Array, PThreadedCode15940, 1, PSend15941);
    // ifFalse:. 
    Send PSend15938 = new_Send((Optr)PSend15937, SMB_ifFalse_, 1, (Optr)PBlock15939);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend15942 = new_Send((Optr)self, SMB_variable, 0);
    // variable. 
    Send PSend15943 = new_Send((Optr)VAR_other_0_0, SMB_variable, 0);
    // =. 
    Send PSend15944 = new_Send((Optr)PSend15942, SMB__equals_, 1, (Optr)PSend15943);
    // escape:. 
    Send PSend15948 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15947 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15948, (Optr)&t_block_return);
    Block PBlock15946 = new_Block_with(empty_Array, empty_Array, PThreadedCode15947, 1, PSend15948);
    // ifFalse:. 
    Send PSend15945 = new_Send((Optr)PSend15944, SMB_ifFalse_, 1, (Optr)PBlock15946);
    Array PThreadedCode15929 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15930, (Optr)&t_send_ifFalse_, (Optr)PSend15931, (Optr)PBlock15932, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15935, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15936, (Optr)&t_send1, (Optr)PSend15937, (Optr)&t_send_ifFalse_, (Optr)PSend15938, (Optr)PBlock15939, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15942, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15943, (Optr)&t_send1, (Optr)PSend15944, (Optr)&t_send_ifFalse_, (Optr)PSend15945, (Optr)PBlock15946, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15927 = new_Block_with(PArray15928, empty_Array, PThreadedCode15929, 4, PSend15931, PSend15938, PSend15945, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15949 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15927);
    Array PThreadedCode15926 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15927, (Optr)&t_send1, (Optr)PSend15949, (Optr)&t_method_return);
    Method PMethod15924 = new_Method_with(PArray15925, empty_Array, empty_Array, PThreadedCode15926, 1, PSend15949);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15924, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_variable() {
    Symbol SMB_variable = new_Symbol(L"variable");
    Array PThreadedCode15951 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)&t_method_return);
    Method PMethod15950 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15951, 1, slot_Smalltalk_AST_AssignmentExpression_variable);
    
    MethodClosure MC_SMB_variable = new_MethodClosure((Method)PMethod15950, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_variable, MC_SMB_variable);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15953 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitAssignmentExpression_ = new_Symbol(L"visitAssignmentExpression:");
    // visitAssignmentExpression:. 
    Send PSend15955 = new_Send((Optr)VAR_visitor_0_0, SMB_visitAssignmentExpression_, 1, (Optr)self);
    Array PThreadedCode15954 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15955, (Optr)&t_method_return);
    Method PMethod15952 = new_Method_with(PArray15953, empty_Array, empty_Array, PThreadedCode15954, 1, PSend15955);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15952, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend15958 = new_Send((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, SMB_hasReturnExpression, 0);
    Array PThreadedCode15957 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_send0, (Optr)PSend15958, (Optr)&t_method_return);
    Method PMethod15956 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15957, 1, PSend15958);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15956, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}

void init_Smalltalk_AST_ASTAssignmentExpression_layout() {
    layout_Smalltalk_AST_AssignmentExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_AssignmentExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_AssignmentExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_AssignmentExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_AssignmentExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_AssignmentExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AssignmentExpression = new_Symbol(L"AssignmentExpression");
    slot_Smalltalk_AST_AssignmentExpression_variable = (Optr)new_Slot(0, L"variable");
    slot_Smalltalk_AST_AssignmentExpression_expression = (Optr)new_Slot(1, L"expression");
    layout_Smalltalk_AST_AssignmentExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_AssignmentExpression)->values[0] = slot_Smalltalk_AST_AssignmentExpression_variable; // variable 
    ((Array)layout_Smalltalk_AST_AssignmentExpression)->values[1] = slot_Smalltalk_AST_AssignmentExpression_expression; // expression 
    Smalltalk_AST_AssignmentExpression_Class = (Class)new_Class(Smalltalk_AST_Expression_Class, layout_Smalltalk_AST_AssignmentExpression_Class_class);
    Smalltalk_AST_AssignmentExpression_Class->layout = layout_Smalltalk_AST_AssignmentExpression;
    Smalltalk_AST_AssignmentExpression_Class->name = SMB_AssignmentExpression;
    
}

void init_Smalltalk_AST_ASTAssignmentExpression_methods() {
    init_SMB_variable_();
    init_SMB_expression_();
    init_SMB_expression();
    init_SMB__equals_();
    init_SMB_variable();
    init_SMB_accept_();
    init_SMB_hasReturnExpression();
    
}