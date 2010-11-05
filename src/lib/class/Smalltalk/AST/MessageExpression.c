#include <lib/class/Smalltalk/AST/MessageExpression.h>


Optr layout_Smalltalk_AST_MessageExpression_Class_class;
Optr slot_Smalltalk_AST_MessageExpression_receiver;
Optr slot_Smalltalk_AST_MessageExpression_arguments;
Optr layout_Smalltalk_AST_MessageExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15112 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15114 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15113 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15114, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15111 = new_Method_with(PArray15112, empty_Array, empty_Array, PThreadedCode15113, 2, PAssign15114, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15111, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15116 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15118 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15117 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15118, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15115 = new_Method_with(PArray15116, empty_Array, empty_Array, PThreadedCode15117, 2, PAssign15118, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod15115, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15120 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_method_return);
    Method PMethod15119 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15120, 1, slot_Smalltalk_AST_MessageExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15119, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15123 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15125 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign15124 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)PSend15125);
    Array PThreadedCode15122 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15123, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15124, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend15125, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15121 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15122, 3, PSuper15123, PAssign15124, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15121, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15127 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15130 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15132 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15136 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15135 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15136, (Optr)&t_block_return);
    Block PBlock15134 = new_Block_with(empty_Array, empty_Array, PThreadedCode15135, 1, PSend15136);
    // ifFalse:. 
    Send PSend15133 = new_Send((Optr)PSuper15132, SMB_ifFalse_, 1, (Optr)PBlock15134);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15137 = new_Send((Optr)self, SMB_arguments, 0);
    // arguments. 
    Send PSend15138 = new_Send((Optr)VAR_other_0_0, SMB_arguments, 0);
    // =. 
    Send PSend15139 = new_Send((Optr)PSend15137, SMB__equals_, 1, (Optr)PSend15138);
    // escape:. 
    Send PSend15143 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15142 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15143, (Optr)&t_block_return);
    Block PBlock15141 = new_Block_with(empty_Array, empty_Array, PThreadedCode15142, 1, PSend15143);
    // ifFalse:. 
    Send PSend15140 = new_Send((Optr)PSend15139, SMB_ifFalse_, 1, (Optr)PBlock15141);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15144 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15145 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15146 = new_Send((Optr)PSend15144, SMB__equals_, 1, (Optr)PSend15145);
    // escape:. 
    Send PSend15150 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15149 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15150, (Optr)&t_block_return);
    Block PBlock15148 = new_Block_with(empty_Array, empty_Array, PThreadedCode15149, 1, PSend15150);
    // ifFalse:. 
    Send PSend15147 = new_Send((Optr)PSend15146, SMB_ifFalse_, 1, (Optr)PBlock15148);
    Array PThreadedCode15131 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15132, (Optr)&t_send_ifFalse_, (Optr)PSend15133, (Optr)PBlock15134, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15137, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15138, (Optr)&t_send1, (Optr)PSend15139, (Optr)&t_send_ifFalse_, (Optr)PSend15140, (Optr)PBlock15141, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15144, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15145, (Optr)&t_send1, (Optr)PSend15146, (Optr)&t_send_ifFalse_, (Optr)PSend15147, (Optr)PBlock15148, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15129 = new_Block_with(PArray15130, empty_Array, PThreadedCode15131, 4, PSend15133, PSend15140, PSend15147, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15151 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15129);
    Array PThreadedCode15128 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15129, (Optr)&t_send1, (Optr)PSend15151, (Optr)&t_method_return);
    Method PMethod15126 = new_Method_with(PArray15127, empty_Array, empty_Array, PThreadedCode15128, 1, PSend15151);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15126, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15153 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    // visitMessageExpression:. 
    Send PSend15155 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageExpression_, 1, (Optr)self);
    Array PThreadedCode15154 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15155, (Optr)&t_method_return);
    Method PMethod15152 = new_Method_with(PArray15153, empty_Array, empty_Array, PThreadedCode15154, 1, PSend15155);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15152, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15159 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15158 = new_Block_with(empty_Array, empty_Array, PThreadedCode15159, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15162 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15161 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_send0, (Optr)PSend15162, (Optr)&t_block_return);
    Block PBlock15160 = new_Block_with(empty_Array, empty_Array, PThreadedCode15161, 1, PSend15162);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15163 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15158, (Optr)PBlock15160);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15166 = new_Send((Optr)self, SMB_arguments, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15167 = new_Send((Optr)PSend15166, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15165 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15166, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15167, (Optr)&t_block_return);
    Block PBlock15164 = new_Block_with(empty_Array, empty_Array, PThreadedCode15165, 1, PSend15167);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15168 = new_Send((Optr)PSend15163, SMB_or_, 1, (Optr)PBlock15164);
    Array PThreadedCode15157 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15158, (Optr)&t_push_closure, (Optr)PBlock15160, (Optr)&t_send2, (Optr)PSend15163, (Optr)&t_push_closure, (Optr)PBlock15164, (Optr)&t_send1, (Optr)PSend15168, (Optr)&t_method_return);
    Method PMethod15156 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15157, 1, PSend15168);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15156, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode15170 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)&t_method_return);
    Method PMethod15169 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15170, 1, slot_Smalltalk_AST_MessageExpression_arguments);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod15169, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_arguments, MC_SMB_arguments);
}

void init_Smalltalk_AST_ASTMessageExpression_layout() {
    layout_Smalltalk_AST_MessageExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_MessageExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_MessageExpression = new_Symbol(L"MessageExpression");
    slot_Smalltalk_AST_MessageExpression_receiver = (Optr)new_Slot(1, L"receiver");
    slot_Smalltalk_AST_MessageExpression_arguments = (Optr)new_Slot(2, L"arguments");
    layout_Smalltalk_AST_MessageExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Smalltalk_AST_MessageExpression)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    ((Array)layout_Smalltalk_AST_MessageExpression)->values[1] = slot_Smalltalk_AST_MessageExpression_receiver; // receiver 
    ((Array)layout_Smalltalk_AST_MessageExpression)->values[2] = slot_Smalltalk_AST_MessageExpression_arguments; // arguments 
    Smalltalk_AST_MessageExpression_Class = (Class)new_Class(Smalltalk_AST_KeywordSelector_Class, layout_Smalltalk_AST_MessageExpression_Class_class);
    Smalltalk_AST_MessageExpression_Class->layout = layout_Smalltalk_AST_MessageExpression;
    Smalltalk_AST_MessageExpression_Class->name = SMB_MessageExpression;
    
}

void init_Smalltalk_AST_ASTMessageExpression_methods() {
    init_SMB_receiver_();
    init_SMB_arguments_();
    init_SMB_receiver();
    init_SMB_initialize();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_hasReturnExpression();
    init_SMB_arguments();
    
}