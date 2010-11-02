#include <lib/class/Smalltalk/AST/MessageCascadeExpression.h>


Optr layout_Smalltalk_AST_MessageCascadeExpression_Class_class;
Optr slot_Smalltalk_AST_MessageCascadeExpression_receiver;
Optr slot_Smalltalk_AST_MessageCascadeExpression_cascades;
Optr layout_Smalltalk_AST_MessageCascadeExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15727 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15729 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15728 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15729, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15726 = new_Method_with(PArray15727, empty_Array, empty_Array, PThreadedCode15728, 2, PAssign15729, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15726, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15731 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)&t_method_return);
    Method PMethod15730 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15731, 1, slot_Smalltalk_AST_MessageCascadeExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15730, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15733 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15736 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15738 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15742 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15741 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15742, (Optr)&t_block_return);
    Block PBlock15740 = new_Block_with(empty_Array, empty_Array, PThreadedCode15741, 1, PSend15742);
    // ifFalse:. 
    Send PSend15739 = new_Send((Optr)PSuper15738, SMB_ifFalse_, 1, (Optr)PBlock15740);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend15743 = new_Send((Optr)self, SMB_cascades, 0);
    // cascades. 
    Send PSend15744 = new_Send((Optr)VAR_other_0_0, SMB_cascades, 0);
    // =. 
    Send PSend15745 = new_Send((Optr)PSend15743, SMB__equals_, 1, (Optr)PSend15744);
    // escape:. 
    Send PSend15749 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15748 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15749, (Optr)&t_block_return);
    Block PBlock15747 = new_Block_with(empty_Array, empty_Array, PThreadedCode15748, 1, PSend15749);
    // ifFalse:. 
    Send PSend15746 = new_Send((Optr)PSend15745, SMB_ifFalse_, 1, (Optr)PBlock15747);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15750 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15751 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15752 = new_Send((Optr)PSend15750, SMB__equals_, 1, (Optr)PSend15751);
    // escape:. 
    Send PSend15756 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15755 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15756, (Optr)&t_block_return);
    Block PBlock15754 = new_Block_with(empty_Array, empty_Array, PThreadedCode15755, 1, PSend15756);
    // ifFalse:. 
    Send PSend15753 = new_Send((Optr)PSend15752, SMB_ifFalse_, 1, (Optr)PBlock15754);
    Array PThreadedCode15737 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15738, (Optr)&t_send_ifFalse_, (Optr)PSend15739, (Optr)PBlock15740, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15743, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15744, (Optr)&t_send1, (Optr)PSend15745, (Optr)&t_send_ifFalse_, (Optr)PSend15746, (Optr)PBlock15747, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15750, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15751, (Optr)&t_send1, (Optr)PSend15752, (Optr)&t_send_ifFalse_, (Optr)PSend15753, (Optr)PBlock15754, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15735 = new_Block_with(PArray15736, empty_Array, PThreadedCode15737, 4, PSend15739, PSend15746, PSend15753, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15757 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15735);
    Array PThreadedCode15734 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15735, (Optr)&t_send1, (Optr)PSend15757, (Optr)&t_method_return);
    Method PMethod15732 = new_Method_with(PArray15733, empty_Array, empty_Array, PThreadedCode15734, 1, PSend15757);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15732, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_cascades() {
    Symbol SMB_cascades = new_Symbol(L"cascades");
    Array PThreadedCode15759 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_method_return);
    Method PMethod15758 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15759, 1, slot_Smalltalk_AST_MessageCascadeExpression_cascades);
    
    MethodClosure MC_SMB_cascades = new_MethodClosure((Method)PMethod15758, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_cascades, MC_SMB_cascades);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15761 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageCascadeExpression_ = new_Symbol(L"visitMessageCascadeExpression:");
    // visitMessageCascadeExpression:. 
    Send PSend15763 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageCascadeExpression_, 1, (Optr)self);
    Array PThreadedCode15762 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15763, (Optr)&t_method_return);
    Method PMethod15760 = new_Method_with(PArray15761, empty_Array, empty_Array, PThreadedCode15762, 1, PSend15763);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15760, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_cascades_() {
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15765 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15767 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15766 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15767, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15764 = new_Method_with(PArray15765, empty_Array, empty_Array, PThreadedCode15766, 2, PAssign15767, self);
    
    MethodClosure MC_SMB_cascades_ = new_MethodClosure((Method)PMethod15764, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_cascades_, MC_SMB_cascades_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15770 = new_Send((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15769 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15770, (Optr)&t_method_return);
    Method PMethod15768 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15769, 1, PSend15770);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15768, Smalltalk_AST_MessageCascadeExpression_Class);
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
    Send PSend15773 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_cascades_Const, (Optr)SMB_receivers_Const);
    Array PThreadedCode15772 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_cascades, (Optr)&t_push1, (Optr)SMB_receivers, (Optr)&t_send2, (Optr)PSend15773, (Optr)&t_method_return);
    Method PMethod15771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15772, 1, PSend15773);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15771, HEADER(Smalltalk_AST_MessageCascadeExpression_Class));
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