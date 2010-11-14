#include <lib/class/Smalltalk/AST/MessageCascadeExpression.h>


Optr layout_Smalltalk_AST_MessageCascadeExpression_Class_class;
Optr slot_Smalltalk_AST_MessageCascadeExpression_receiver;
Optr slot_Smalltalk_AST_MessageCascadeExpression_cascades;
Optr layout_Smalltalk_AST_MessageCascadeExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16087 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16089 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16088 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16089, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16086 = new_Method_with(PArray16087, empty_Array, empty_Array, PThreadedCode16088, 2, PAssign16089, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod16086, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode16091 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)&t_method_return);
    Method PMethod16090 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16091, 1, slot_Smalltalk_AST_MessageCascadeExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod16090, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray16093 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16096 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper16098 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16102 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16101 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16102, (Optr)&t_block_return);
    Block PBlock16100 = new_Block_with(empty_Array, empty_Array, PThreadedCode16101, 1, PSend16102);
    // ifFalse:. 
    Send PSend16099 = new_Send((Optr)PSuper16098, SMB_ifFalse_, 1, (Optr)PBlock16100);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend16103 = new_Send((Optr)self, SMB_cascades, 0);
    // cascades. 
    Send PSend16104 = new_Send((Optr)VAR_other_0_0, SMB_cascades, 0);
    // =. 
    Send PSend16105 = new_Send((Optr)PSend16103, SMB__equals_, 1, (Optr)PSend16104);
    // escape:. 
    Send PSend16109 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16108 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16109, (Optr)&t_block_return);
    Block PBlock16107 = new_Block_with(empty_Array, empty_Array, PThreadedCode16108, 1, PSend16109);
    // ifFalse:. 
    Send PSend16106 = new_Send((Optr)PSend16105, SMB_ifFalse_, 1, (Optr)PBlock16107);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16110 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend16111 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend16112 = new_Send((Optr)PSend16110, SMB__equals_, 1, (Optr)PSend16111);
    // escape:. 
    Send PSend16116 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16115 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16116, (Optr)&t_block_return);
    Block PBlock16114 = new_Block_with(empty_Array, empty_Array, PThreadedCode16115, 1, PSend16116);
    // ifFalse:. 
    Send PSend16113 = new_Send((Optr)PSend16112, SMB_ifFalse_, 1, (Optr)PBlock16114);
    Array PThreadedCode16097 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper16098, (Optr)&t_send_ifFalse_, (Optr)PSend16099, (Optr)PBlock16100, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16103, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16104, (Optr)&t_send1, (Optr)PSend16105, (Optr)&t_send_ifFalse_, (Optr)PSend16106, (Optr)PBlock16107, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16110, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16111, (Optr)&t_send1, (Optr)PSend16112, (Optr)&t_send_ifFalse_, (Optr)PSend16113, (Optr)PBlock16114, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock16095 = new_Block_with(PArray16096, empty_Array, PThreadedCode16097, 4, PSend16099, PSend16106, PSend16113, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16117 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16095);
    Array PThreadedCode16094 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16095, (Optr)&t_send1, (Optr)PSend16117, (Optr)&t_method_return);
    Method PMethod16092 = new_Method_with(PArray16093, empty_Array, empty_Array, PThreadedCode16094, 1, PSend16117);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod16092, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_cascades() {
    Symbol SMB_cascades = new_Symbol(L"cascades");
    Array PThreadedCode16119 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_method_return);
    Method PMethod16118 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16119, 1, slot_Smalltalk_AST_MessageCascadeExpression_cascades);
    
    MethodClosure MC_SMB_cascades = new_MethodClosure((Method)PMethod16118, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_cascades, MC_SMB_cascades);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray16121 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageCascadeExpression_ = new_Symbol(L"visitMessageCascadeExpression:");
    // visitMessageCascadeExpression:. 
    Send PSend16123 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageCascadeExpression_, 1, (Optr)self);
    Array PThreadedCode16122 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16123, (Optr)&t_method_return);
    Method PMethod16120 = new_Method_with(PArray16121, empty_Array, empty_Array, PThreadedCode16122, 1, PSend16123);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod16120, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_cascades_() {
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16125 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16127 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16126 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16127, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16124 = new_Method_with(PArray16125, empty_Array, empty_Array, PThreadedCode16126, 2, PAssign16127, self);
    
    MethodClosure MC_SMB_cascades_ = new_MethodClosure((Method)PMethod16124, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_cascades_, MC_SMB_cascades_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend16130 = new_Send((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode16129 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend16130, (Optr)&t_method_return);
    Method PMethod16128 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16129, 1, PSend16130);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod16128, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_cascades = new_Symbol(L"cascades");
    Symbol  SMB_receivers = new_Symbol(L"receivers");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_cascades_Const = new_Constant((Optr)SMB_cascades);
    Constant SMB_receivers_Const = new_Constant((Optr)SMB_receivers);
    // with:with:. 
    Send PSend16133 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_cascades_Const, (Optr)SMB_receivers_Const);
    Array PThreadedCode16132 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_cascades, (Optr)&t_push1, (Optr)SMB_receivers, (Optr)&t_send2, (Optr)PSend16133, (Optr)&t_method_return);
    Method PMethod16131 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16132, 1, PSend16133);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod16131, HEADER(Smalltalk_AST_MessageCascadeExpression_Class));
    store_method(HEADER(Smalltalk_AST_MessageCascadeExpression_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTMessageCascadeExpression_layout() {
    layout_Smalltalk_AST_MessageCascadeExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_MessageCascadeExpression = new_Symbol(L"MessageCascadeExpression");
    slot_Smalltalk_AST_MessageCascadeExpression_receiver = (Optr)new_Slot(0, L"receiver");
    slot_Smalltalk_AST_MessageCascadeExpression_cascades = (Optr)new_Slot(1, L"cascades");
    layout_Smalltalk_AST_MessageCascadeExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression)->values[0] = slot_Smalltalk_AST_MessageCascadeExpression_receiver; // receiver 
    ((Array)layout_Smalltalk_AST_MessageCascadeExpression)->values[1] = slot_Smalltalk_AST_MessageCascadeExpression_cascades; // cascades 
    Smalltalk_AST_MessageCascadeExpression_Class = (Class)new_Class(Smalltalk_AST_Expression_Class, layout_Smalltalk_AST_MessageCascadeExpression_Class_class);
    Smalltalk_AST_MessageCascadeExpression_Class->layout = layout_Smalltalk_AST_MessageCascadeExpression;
    Smalltalk_AST_MessageCascadeExpression_Class->name = SMB_MessageCascadeExpression;
    
}

void init_Smalltalk_AST_ASTMessageCascadeExpression_methods() {
    init_SMB_receiver_();
    init_SMB_receiver();
    init_SMB__equals_();
    init_SMB_cascades();
    init_SMB_accept_();
    init_SMB_cascades_();
    init_SMB_hasReturnExpression();
    init_class_SMB_astSelectors();
    
}