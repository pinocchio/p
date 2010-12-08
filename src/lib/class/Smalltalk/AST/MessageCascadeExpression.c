#include <lib/class/Smalltalk/AST/MessageCascadeExpression.h>


Optr layout_Smalltalk_AST_MessageCascadeExpression_Class_class;
Optr slot_Smalltalk_AST_MessageCascadeExpression_receiver;
Optr slot_Smalltalk_AST_MessageCascadeExpression_cascades;
Optr layout_Smalltalk_AST_MessageCascadeExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16146 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16148 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16147 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16148, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16145 = new_Method_with(PArray16146, empty_Array, empty_Array, PThreadedCode16147, 2, PAssign16148, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod16145, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode16150 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)&t_method_return);
    Method PMethod16149 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16150, 1, slot_Smalltalk_AST_MessageCascadeExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod16149, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray16152 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16155 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper16157 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16161 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16160 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16161, (Optr)&t_block_return);
    Block PBlock16159 = new_Block_with(empty_Array, empty_Array, PThreadedCode16160, 1, PSend16161);
    // ifFalse:. 
    Send PSend16158 = new_Send((Optr)PSuper16157, SMB_ifFalse_, 1, (Optr)PBlock16159);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend16162 = new_Send((Optr)self, SMB_cascades, 0);
    // cascades. 
    Send PSend16163 = new_Send((Optr)VAR_other_0_0, SMB_cascades, 0);
    // =. 
    Send PSend16164 = new_Send((Optr)PSend16162, SMB__equals_, 1, (Optr)PSend16163);
    // escape:. 
    Send PSend16168 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16167 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16168, (Optr)&t_block_return);
    Block PBlock16166 = new_Block_with(empty_Array, empty_Array, PThreadedCode16167, 1, PSend16168);
    // ifFalse:. 
    Send PSend16165 = new_Send((Optr)PSend16164, SMB_ifFalse_, 1, (Optr)PBlock16166);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16169 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend16170 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend16171 = new_Send((Optr)PSend16169, SMB__equals_, 1, (Optr)PSend16170);
    // escape:. 
    Send PSend16175 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16174 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16175, (Optr)&t_block_return);
    Block PBlock16173 = new_Block_with(empty_Array, empty_Array, PThreadedCode16174, 1, PSend16175);
    // ifFalse:. 
    Send PSend16172 = new_Send((Optr)PSend16171, SMB_ifFalse_, 1, (Optr)PBlock16173);
    Array PThreadedCode16156 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper16157, (Optr)&t_send_ifFalse_, (Optr)PSend16158, (Optr)PBlock16159, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16162, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16163, (Optr)&t_send1, (Optr)PSend16164, (Optr)&t_send_ifFalse_, (Optr)PSend16165, (Optr)PBlock16166, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16169, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16170, (Optr)&t_send1, (Optr)PSend16171, (Optr)&t_send_ifFalse_, (Optr)PSend16172, (Optr)PBlock16173, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock16154 = new_Block_with(PArray16155, empty_Array, PThreadedCode16156, 4, PSend16158, PSend16165, PSend16172, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16176 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16154);
    Array PThreadedCode16153 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16154, (Optr)&t_send1, (Optr)PSend16176, (Optr)&t_method_return);
    Method PMethod16151 = new_Method_with(PArray16152, empty_Array, empty_Array, PThreadedCode16153, 1, PSend16176);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod16151, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_cascades() {
    Symbol SMB_cascades = new_Symbol(L"cascades");
    Array PThreadedCode16178 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_method_return);
    Method PMethod16177 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16178, 1, slot_Smalltalk_AST_MessageCascadeExpression_cascades);
    
    MethodClosure MC_SMB_cascades = new_MethodClosure((Method)PMethod16177, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_cascades, MC_SMB_cascades);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray16180 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageCascadeExpression_ = new_Symbol(L"visitMessageCascadeExpression:");
    // visitMessageCascadeExpression:. 
    Send PSend16182 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageCascadeExpression_, 1, (Optr)self);
    Array PThreadedCode16181 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16182, (Optr)&t_method_return);
    Method PMethod16179 = new_Method_with(PArray16180, empty_Array, empty_Array, PThreadedCode16181, 1, PSend16182);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod16179, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_cascades_() {
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16184 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16186 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16185 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16186, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16183 = new_Method_with(PArray16184, empty_Array, empty_Array, PThreadedCode16185, 2, PAssign16186, self);
    
    MethodClosure MC_SMB_cascades_ = new_MethodClosure((Method)PMethod16183, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_cascades_, MC_SMB_cascades_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend16189 = new_Send((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode16188 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend16189, (Optr)&t_method_return);
    Method PMethod16187 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16188, 1, PSend16189);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod16187, Smalltalk_AST_MessageCascadeExpression_Class);
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
    Send PSend16192 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_cascades_Const, (Optr)SMB_receivers_Const);
    Array PThreadedCode16191 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_cascades, (Optr)&t_push1, (Optr)SMB_receivers, (Optr)&t_send2, (Optr)PSend16192, (Optr)&t_method_return);
    Method PMethod16190 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16191, 1, PSend16192);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod16190, HEADER(Smalltalk_AST_MessageCascadeExpression_Class));
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