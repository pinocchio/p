#include <lib/class/Smalltalk/AST/MessageCascadeExpression.h>


Optr layout_Smalltalk_AST_MessageCascadeExpression_Class_class;
Optr slot_Smalltalk_AST_MessageCascadeExpression_receiver;
Optr slot_Smalltalk_AST_MessageCascadeExpression_cascades;
Optr layout_Smalltalk_AST_MessageCascadeExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray16119 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16121 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16120 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16121, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16118 = new_Method_with(PArray16119, empty_Array, empty_Array, PThreadedCode16120, 2, PAssign16121, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod16118, Smalltalk_AST_MessageCascadeExpression_Class);
=======
    Array PArray16085 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16087 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16086 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16087, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16084 = new_Method_with(PArray16085, empty_Array, empty_Array, PThreadedCode16086, 2, PAssign16087, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod16084, Smalltalk_AST_MessageCascadeExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
<<<<<<< HEAD
    Array PThreadedCode16123 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)&t_method_return);
    Method PMethod16122 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16123, 1, slot_Smalltalk_AST_MessageCascadeExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod16122, Smalltalk_AST_MessageCascadeExpression_Class);
=======
    Array PThreadedCode16089 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)&t_method_return);
    Method PMethod16088 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16089, 1, slot_Smalltalk_AST_MessageCascadeExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod16088, Smalltalk_AST_MessageCascadeExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
<<<<<<< HEAD
    Array PArray16125 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16128 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper16130 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16134 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16133 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16134, (Optr)&t_block_return);
    Block PBlock16132 = new_Block_with(empty_Array, empty_Array, PThreadedCode16133, 1, PSend16134);
    // ifFalse:. 
    Send PSend16131 = new_Send((Optr)PSuper16130, SMB_ifFalse_, 1, (Optr)PBlock16132);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend16135 = new_Send((Optr)self, SMB_cascades, 0);
    // cascades. 
    Send PSend16136 = new_Send((Optr)VAR_other_0_0, SMB_cascades, 0);
    // =. 
    Send PSend16137 = new_Send((Optr)PSend16135, SMB__equals_, 1, (Optr)PSend16136);
    // escape:. 
    Send PSend16141 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16140 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16141, (Optr)&t_block_return);
    Block PBlock16139 = new_Block_with(empty_Array, empty_Array, PThreadedCode16140, 1, PSend16141);
    // ifFalse:. 
    Send PSend16138 = new_Send((Optr)PSend16137, SMB_ifFalse_, 1, (Optr)PBlock16139);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16142 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend16143 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend16144 = new_Send((Optr)PSend16142, SMB__equals_, 1, (Optr)PSend16143);
    // escape:. 
    Send PSend16148 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16147 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16148, (Optr)&t_block_return);
    Block PBlock16146 = new_Block_with(empty_Array, empty_Array, PThreadedCode16147, 1, PSend16148);
    // ifFalse:. 
    Send PSend16145 = new_Send((Optr)PSend16144, SMB_ifFalse_, 1, (Optr)PBlock16146);
    Array PThreadedCode16129 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper16130, (Optr)&t_send_ifFalse_, (Optr)PSend16131, (Optr)PBlock16132, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16135, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16136, (Optr)&t_send1, (Optr)PSend16137, (Optr)&t_send_ifFalse_, (Optr)PSend16138, (Optr)PBlock16139, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16142, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16143, (Optr)&t_send1, (Optr)PSend16144, (Optr)&t_send_ifFalse_, (Optr)PSend16145, (Optr)PBlock16146, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock16127 = new_Block_with(PArray16128, empty_Array, PThreadedCode16129, 4, PSend16131, PSend16138, PSend16145, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16149 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16127);
    Array PThreadedCode16126 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16127, (Optr)&t_send1, (Optr)PSend16149, (Optr)&t_method_return);
    Method PMethod16124 = new_Method_with(PArray16125, empty_Array, empty_Array, PThreadedCode16126, 1, PSend16149);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod16124, Smalltalk_AST_MessageCascadeExpression_Class);
=======
    Array PArray16091 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16094 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper16096 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16100 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16099 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16100, (Optr)&t_block_return);
    Block PBlock16098 = new_Block_with(empty_Array, empty_Array, PThreadedCode16099, 1, PSend16100);
    // ifFalse:. 
    Send PSend16097 = new_Send((Optr)PSuper16096, SMB_ifFalse_, 1, (Optr)PBlock16098);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend16101 = new_Send((Optr)self, SMB_cascades, 0);
    // cascades. 
    Send PSend16102 = new_Send((Optr)VAR_other_0_0, SMB_cascades, 0);
    // =. 
    Send PSend16103 = new_Send((Optr)PSend16101, SMB__equals_, 1, (Optr)PSend16102);
    // escape:. 
    Send PSend16107 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16106 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16107, (Optr)&t_block_return);
    Block PBlock16105 = new_Block_with(empty_Array, empty_Array, PThreadedCode16106, 1, PSend16107);
    // ifFalse:. 
    Send PSend16104 = new_Send((Optr)PSend16103, SMB_ifFalse_, 1, (Optr)PBlock16105);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16108 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend16109 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend16110 = new_Send((Optr)PSend16108, SMB__equals_, 1, (Optr)PSend16109);
    // escape:. 
    Send PSend16114 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16113 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16114, (Optr)&t_block_return);
    Block PBlock16112 = new_Block_with(empty_Array, empty_Array, PThreadedCode16113, 1, PSend16114);
    // ifFalse:. 
    Send PSend16111 = new_Send((Optr)PSend16110, SMB_ifFalse_, 1, (Optr)PBlock16112);
    Array PThreadedCode16095 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper16096, (Optr)&t_send_ifFalse_, (Optr)PSend16097, (Optr)PBlock16098, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16101, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16102, (Optr)&t_send1, (Optr)PSend16103, (Optr)&t_send_ifFalse_, (Optr)PSend16104, (Optr)PBlock16105, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16108, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16109, (Optr)&t_send1, (Optr)PSend16110, (Optr)&t_send_ifFalse_, (Optr)PSend16111, (Optr)PBlock16112, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock16093 = new_Block_with(PArray16094, empty_Array, PThreadedCode16095, 4, PSend16097, PSend16104, PSend16111, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16115 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16093);
    Array PThreadedCode16092 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16093, (Optr)&t_send1, (Optr)PSend16115, (Optr)&t_method_return);
    Method PMethod16090 = new_Method_with(PArray16091, empty_Array, empty_Array, PThreadedCode16092, 1, PSend16115);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod16090, Smalltalk_AST_MessageCascadeExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_cascades() {
    Symbol SMB_cascades = new_Symbol(L"cascades");
<<<<<<< HEAD
    Array PThreadedCode16151 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_method_return);
    Method PMethod16150 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16151, 1, slot_Smalltalk_AST_MessageCascadeExpression_cascades);
    
    MethodClosure MC_SMB_cascades = new_MethodClosure((Method)PMethod16150, Smalltalk_AST_MessageCascadeExpression_Class);
=======
    Array PThreadedCode16117 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_method_return);
    Method PMethod16116 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16117, 1, slot_Smalltalk_AST_MessageCascadeExpression_cascades);
    
    MethodClosure MC_SMB_cascades = new_MethodClosure((Method)PMethod16116, Smalltalk_AST_MessageCascadeExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_cascades, MC_SMB_cascades);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray16153 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageCascadeExpression_ = new_Symbol(L"visitMessageCascadeExpression:");
    // visitMessageCascadeExpression:. 
    Send PSend16155 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageCascadeExpression_, 1, (Optr)self);
    Array PThreadedCode16154 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16155, (Optr)&t_method_return);
    Method PMethod16152 = new_Method_with(PArray16153, empty_Array, empty_Array, PThreadedCode16154, 1, PSend16155);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod16152, Smalltalk_AST_MessageCascadeExpression_Class);
=======
    Array PArray16119 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageCascadeExpression_ = new_Symbol(L"visitMessageCascadeExpression:");
    // visitMessageCascadeExpression:. 
    Send PSend16121 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageCascadeExpression_, 1, (Optr)self);
    Array PThreadedCode16120 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16121, (Optr)&t_method_return);
    Method PMethod16118 = new_Method_with(PArray16119, empty_Array, empty_Array, PThreadedCode16120, 1, PSend16121);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod16118, Smalltalk_AST_MessageCascadeExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_cascades_() {
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray16157 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16159 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16158 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16159, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16156 = new_Method_with(PArray16157, empty_Array, empty_Array, PThreadedCode16158, 2, PAssign16159, self);
    
    MethodClosure MC_SMB_cascades_ = new_MethodClosure((Method)PMethod16156, Smalltalk_AST_MessageCascadeExpression_Class);
=======
    Array PArray16123 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16125 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16124 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16125, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16122 = new_Method_with(PArray16123, empty_Array, empty_Array, PThreadedCode16124, 2, PAssign16125, self);
    
    MethodClosure MC_SMB_cascades_ = new_MethodClosure((Method)PMethod16122, Smalltalk_AST_MessageCascadeExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_cascades_, MC_SMB_cascades_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
<<<<<<< HEAD
    Send PSend16162 = new_Send((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode16161 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend16162, (Optr)&t_method_return);
    Method PMethod16160 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16161, 1, PSend16162);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod16160, Smalltalk_AST_MessageCascadeExpression_Class);
=======
    Send PSend16128 = new_Send((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode16127 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend16128, (Optr)&t_method_return);
    Method PMethod16126 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16127, 1, PSend16128);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod16126, Smalltalk_AST_MessageCascadeExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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
<<<<<<< HEAD
    Send PSend16165 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_cascades_Const, (Optr)SMB_receivers_Const);
    Array PThreadedCode16164 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_cascades, (Optr)&t_push1, (Optr)SMB_receivers, (Optr)&t_send2, (Optr)PSend16165, (Optr)&t_method_return);
    Method PMethod16163 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16164, 1, PSend16165);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod16163, HEADER(Smalltalk_AST_MessageCascadeExpression_Class));
=======
    Send PSend16131 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_cascades_Const, (Optr)SMB_receivers_Const);
    Array PThreadedCode16130 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_cascades, (Optr)&t_push1, (Optr)SMB_receivers, (Optr)&t_send2, (Optr)PSend16131, (Optr)&t_method_return);
    Method PMethod16129 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16130, 1, PSend16131);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod16129, HEADER(Smalltalk_AST_MessageCascadeExpression_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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