#include <lib/class/Smalltalk/AST/MessageCascadeExpression.h>


Optr layout_Smalltalk_AST_MessageCascadeExpression_Class_class;
Optr slot_Smalltalk_AST_MessageCascadeExpression_receiver;
Optr slot_Smalltalk_AST_MessageCascadeExpression_cascades;
Optr layout_Smalltalk_AST_MessageCascadeExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15757 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15759 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15758 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15759, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15756 = new_Method_with(PArray15757, empty_Array, empty_Array, PThreadedCode15758, 2, PAssign15759, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15756, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15761 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_receiver, (Optr)&t_method_return);
    Method PMethod15760 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15761, 1, slot_Smalltalk_AST_MessageCascadeExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15760, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15763 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15766 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15768 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15772 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15771 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15772, (Optr)&t_block_return);
    Block PBlock15770 = new_Block_with(empty_Array, empty_Array, PThreadedCode15771, 1, PSend15772);
    // ifFalse:. 
    Send PSend15769 = new_Send((Optr)PSuper15768, SMB_ifFalse_, 1, (Optr)PBlock15770);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend15773 = new_Send((Optr)self, SMB_cascades, 0);
    // cascades. 
    Send PSend15774 = new_Send((Optr)VAR_other_0_0, SMB_cascades, 0);
    // =. 
    Send PSend15775 = new_Send((Optr)PSend15773, SMB__equals_, 1, (Optr)PSend15774);
    // escape:. 
    Send PSend15779 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15778 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15779, (Optr)&t_block_return);
    Block PBlock15777 = new_Block_with(empty_Array, empty_Array, PThreadedCode15778, 1, PSend15779);
    // ifFalse:. 
    Send PSend15776 = new_Send((Optr)PSend15775, SMB_ifFalse_, 1, (Optr)PBlock15777);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15780 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15781 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15782 = new_Send((Optr)PSend15780, SMB__equals_, 1, (Optr)PSend15781);
    // escape:. 
    Send PSend15786 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15785 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15786, (Optr)&t_block_return);
    Block PBlock15784 = new_Block_with(empty_Array, empty_Array, PThreadedCode15785, 1, PSend15786);
    // ifFalse:. 
    Send PSend15783 = new_Send((Optr)PSend15782, SMB_ifFalse_, 1, (Optr)PBlock15784);
    Array PThreadedCode15767 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15768, (Optr)&t_send_ifFalse_, (Optr)PSend15769, (Optr)PBlock15770, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15773, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15774, (Optr)&t_send1, (Optr)PSend15775, (Optr)&t_send_ifFalse_, (Optr)PSend15776, (Optr)PBlock15777, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15780, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15781, (Optr)&t_send1, (Optr)PSend15782, (Optr)&t_send_ifFalse_, (Optr)PSend15783, (Optr)PBlock15784, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15765 = new_Block_with(PArray15766, empty_Array, PThreadedCode15767, 4, PSend15769, PSend15776, PSend15783, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15787 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15765);
    Array PThreadedCode15764 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15765, (Optr)&t_send1, (Optr)PSend15787, (Optr)&t_method_return);
    Method PMethod15762 = new_Method_with(PArray15763, empty_Array, empty_Array, PThreadedCode15764, 1, PSend15787);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15762, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_cascades() {
    Symbol SMB_cascades = new_Symbol(L"cascades");
    Array PThreadedCode15789 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_method_return);
    Method PMethod15788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15789, 1, slot_Smalltalk_AST_MessageCascadeExpression_cascades);
    
    MethodClosure MC_SMB_cascades = new_MethodClosure((Method)PMethod15788, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_cascades, MC_SMB_cascades);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15791 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMessageCascadeExpression_ = new_Symbol(L"visitMessageCascadeExpression:");
    // visitMessageCascadeExpression:. 
    Send PSend15793 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMessageCascadeExpression_, 1, (Optr)self);
    Array PThreadedCode15792 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15793, (Optr)&t_method_return);
    Method PMethod15790 = new_Method_with(PArray15791, empty_Array, empty_Array, PThreadedCode15792, 1, PSend15793);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15790, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_cascades_() {
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15795 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15797 = new_Assign((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15796 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15797, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15794 = new_Method_with(PArray15795, empty_Array, empty_Array, PThreadedCode15796, 2, PAssign15797, self);
    
    MethodClosure MC_SMB_cascades_ = new_MethodClosure((Method)PMethod15794, Smalltalk_AST_MessageCascadeExpression_Class);
    store_method(Smalltalk_AST_MessageCascadeExpression_Class, SMB_cascades_, MC_SMB_cascades_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15800 = new_Send((Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15799 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_MessageCascadeExpression_cascades, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15800, (Optr)&t_method_return);
    Method PMethod15798 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15799, 1, PSend15800);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15798, Smalltalk_AST_MessageCascadeExpression_Class);
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
    Send PSend15803 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_cascades_Const, (Optr)SMB_receivers_Const);
    Array PThreadedCode15802 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_cascades, (Optr)&t_push1, (Optr)SMB_receivers, (Optr)&t_send2, (Optr)PSend15803, (Optr)&t_method_return);
    Method PMethod15801 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15802, 1, PSend15803);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15801, HEADER(Smalltalk_AST_MessageCascadeExpression_Class));
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