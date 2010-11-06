#include <lib/class/Smalltalk/AST/UnaryExpression.h>


Optr layout_Smalltalk_AST_UnaryExpression_Class_class;
Optr slot_Smalltalk_AST_UnaryExpression_receiver;
Optr layout_Smalltalk_AST_UnaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15191 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15193 = new_Assign((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15192 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15193, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15190 = new_Method_with(PArray15191, empty_Array, empty_Array, PThreadedCode15192, 2, PAssign15193, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15190, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15195 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15194 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15195, 1, slot_Smalltalk_AST_UnaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15194, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15197 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15200 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15202 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15206 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15205 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15206, (Optr)&t_block_return);
    Block PBlock15204 = new_Block_with(empty_Array, empty_Array, PThreadedCode15205, 1, PSend15206);
    // ifFalse:. 
    Send PSend15203 = new_Send((Optr)PSuper15202, SMB_ifFalse_, 1, (Optr)PBlock15204);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15207 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15208 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15209 = new_Send((Optr)PSend15207, SMB__equals_, 1, (Optr)PSend15208);
    // escape:. 
    Send PSend15213 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15212 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15213, (Optr)&t_block_return);
    Block PBlock15211 = new_Block_with(empty_Array, empty_Array, PThreadedCode15212, 1, PSend15213);
    // ifFalse:. 
    Send PSend15210 = new_Send((Optr)PSend15209, SMB_ifFalse_, 1, (Optr)PBlock15211);
    Array PThreadedCode15201 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15202, (Optr)&t_send_ifFalse_, (Optr)PSend15203, (Optr)PBlock15204, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15207, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15208, (Optr)&t_send1, (Optr)PSend15209, (Optr)&t_send_ifFalse_, (Optr)PSend15210, (Optr)PBlock15211, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15199 = new_Block_with(PArray15200, empty_Array, PThreadedCode15201, 3, PSend15203, PSend15210, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15214 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15199);
    Array PThreadedCode15198 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15199, (Optr)&t_send1, (Optr)PSend15214, (Optr)&t_method_return);
    Method PMethod15196 = new_Method_with(PArray15197, empty_Array, empty_Array, PThreadedCode15198, 1, PSend15214);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15196, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15216 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitUnaryExpression_ = new_Symbol(L"visitUnaryExpression:");
    // visitUnaryExpression:. 
    Send PSend15218 = new_Send((Optr)VAR_visitor_0_0, SMB_visitUnaryExpression_, 1, (Optr)self);
    Array PThreadedCode15217 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15218, (Optr)&t_method_return);
    Method PMethod15215 = new_Method_with(PArray15216, empty_Array, empty_Array, PThreadedCode15217, 1, PSend15218);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15215, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15220 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15222 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15223 = new_Send((Optr)PSend15222, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15224 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15225 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15221 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15222, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15223, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15224, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15225, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15219 = new_Method_with(PArray15220, empty_Array, empty_Array, PThreadedCode15221, 4, PSend15223, PSend15224, PSuper15225, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15219, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15229 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15228 = new_Block_with(empty_Array, empty_Array, PThreadedCode15229, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15232 = new_Send((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15231 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15232, (Optr)&t_block_return);
    Block PBlock15230 = new_Block_with(empty_Array, empty_Array, PThreadedCode15231, 1, PSend15232);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15233 = new_Send((Optr)slot_Smalltalk_AST_UnaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15228, (Optr)PBlock15230);
    Array PThreadedCode15227 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_UnaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15228, (Optr)&t_push_closure, (Optr)PBlock15230, (Optr)&t_send2, (Optr)PSend15233, (Optr)&t_method_return);
    Method PMethod15226 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15227, 1, PSend15233);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15226, Smalltalk_AST_UnaryExpression_Class);
    store_method(Smalltalk_AST_UnaryExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}

void init_Smalltalk_AST_ASTUnaryExpression_layout() {
    layout_Smalltalk_AST_UnaryExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_UnaryExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_UnaryExpression = new_Symbol(L"UnaryExpression");
    slot_Smalltalk_AST_UnaryExpression_receiver = (Optr)new_Slot(1, L"receiver");
    layout_Smalltalk_AST_UnaryExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_UnaryExpression)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    ((Array)layout_Smalltalk_AST_UnaryExpression)->values[1] = slot_Smalltalk_AST_UnaryExpression_receiver; // receiver 
    Smalltalk_AST_UnaryExpression_Class = (Class)new_Class(Smalltalk_AST_UnarySelector_Class, layout_Smalltalk_AST_UnaryExpression_Class_class);
    Smalltalk_AST_UnaryExpression_Class->layout = layout_Smalltalk_AST_UnaryExpression;
    Smalltalk_AST_UnaryExpression_Class->name = SMB_UnaryExpression;
    
}

void init_Smalltalk_AST_ASTUnaryExpression_methods() {
    init_SMB_receiver_();
    init_SMB_receiver();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_hasReturnExpression();
    
}