#include <lib/class/Smalltalk/AST/MessageExpression.h>


Optr layout_Smalltalk_AST_MessageExpression_Class_class;
Optr slot_Smalltalk_AST_MessageExpression_receiver;
Optr slot_Smalltalk_AST_MessageExpression_arguments;
Optr layout_Smalltalk_AST_MessageExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15148 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15150 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15149 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15150, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15147 = new_Method_with(PArray15148, empty_Array, empty_Array, PThreadedCode15149, 2, PAssign15150, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15147, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15152 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15154 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15153 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15154, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15151 = new_Method_with(PArray15152, empty_Array, empty_Array, PThreadedCode15153, 2, PAssign15154, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod15151, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15156 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_method_return);
    Method PMethod15155 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15156, 1, slot_Smalltalk_AST_MessageExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15155, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15159 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15161 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign15160 = new_Assign((Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)PSend15161);
    Array PThreadedCode15158 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15159, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15160, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend15161, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15157 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15158, 3, PSuper15159, PAssign15160, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15157, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15163 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15166 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15168 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15172 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15171 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15172, (Optr)&t_block_return);
    Block PBlock15170 = new_Block_with(empty_Array, empty_Array, PThreadedCode15171, 1, PSend15172);
    // ifFalse:. 
    Send PSend15169 = new_Send((Optr)PSuper15168, SMB_ifFalse_, 1, (Optr)PBlock15170);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15173 = new_Send((Optr)self, SMB_arguments, 0);
    // arguments. 
    Send PSend15174 = new_Send((Optr)VAR_other_0_0, SMB_arguments, 0);
    // =. 
    Send PSend15175 = new_Send((Optr)PSend15173, SMB__equals_, 1, (Optr)PSend15174);
    // escape:. 
    Send PSend15179 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15178 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15179, (Optr)&t_block_return);
    Block PBlock15177 = new_Block_with(empty_Array, empty_Array, PThreadedCode15178, 1, PSend15179);
    // ifFalse:. 
    Send PSend15176 = new_Send((Optr)PSend15175, SMB_ifFalse_, 1, (Optr)PBlock15177);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15180 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15181 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15182 = new_Send((Optr)PSend15180, SMB__equals_, 1, (Optr)PSend15181);
    // escape:. 
    Send PSend15186 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15185 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15186, (Optr)&t_block_return);
    Block PBlock15184 = new_Block_with(empty_Array, empty_Array, PThreadedCode15185, 1, PSend15186);
    // ifFalse:. 
    Send PSend15183 = new_Send((Optr)PSend15182, SMB_ifFalse_, 1, (Optr)PBlock15184);
    Array PThreadedCode15167 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15168, (Optr)&t_send_ifFalse_, (Optr)PSend15169, (Optr)PBlock15170, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15173, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15174, (Optr)&t_send1, (Optr)PSend15175, (Optr)&t_send_ifFalse_, (Optr)PSend15176, (Optr)PBlock15177, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15180, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15181, (Optr)&t_send1, (Optr)PSend15182, (Optr)&t_send_ifFalse_, (Optr)PSend15183, (Optr)PBlock15184, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15165 = new_Block_with(PArray15166, empty_Array, PThreadedCode15167, 4, PSend15169, PSend15176, PSend15183, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15187 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15165);
    Array PThreadedCode15164 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15165, (Optr)&t_send1, (Optr)PSend15187, (Optr)&t_method_return);
    Method PMethod15162 = new_Method_with(PArray15163, empty_Array, empty_Array, PThreadedCode15164, 1, PSend15187);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15162, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15189 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    // visitMessageExpression:. 
    Send PSend15191 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageExpression_, 1, (Optr)self);
    Array PThreadedCode15190 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15191, (Optr)&t_method_return);
    Method PMethod15188 = new_Method_with(PArray15189, empty_Array, empty_Array, PThreadedCode15190, 1, PSend15191);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15188, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15195 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15194 = new_Block_with(empty_Array, empty_Array, PThreadedCode15195, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15198 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15197 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_send0, (Optr)PSend15198, (Optr)&t_block_return);
    Block PBlock15196 = new_Block_with(empty_Array, empty_Array, PThreadedCode15197, 1, PSend15198);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15199 = new_Send((Optr)slot_Smalltalk_AST_MessageExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15194, (Optr)PBlock15196);
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend15202 = new_Send((Optr)self, SMB_arguments, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15203 = new_Send((Optr)PSend15202, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15201 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15202, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15203, (Optr)&t_block_return);
    Block PBlock15200 = new_Block_with(empty_Array, empty_Array, PThreadedCode15201, 1, PSend15203);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15204 = new_Send((Optr)PSend15199, SMB_or_, 1, (Optr)PBlock15200);
    Array PThreadedCode15193 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15194, (Optr)&t_push_closure, (Optr)PBlock15196, (Optr)&t_send2, (Optr)PSend15199, (Optr)&t_push_closure, (Optr)PBlock15200, (Optr)&t_send1, (Optr)PSend15204, (Optr)&t_method_return);
    Method PMethod15192 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15193, 1, PSend15204);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15192, Smalltalk_AST_MessageExpression_Class);
    store_method(Smalltalk_AST_MessageExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode15206 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageExpression_arguments, (Optr)&t_method_return);
    Method PMethod15205 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15206, 1, slot_Smalltalk_AST_MessageExpression_arguments);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod15205, Smalltalk_AST_MessageExpression_Class);
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