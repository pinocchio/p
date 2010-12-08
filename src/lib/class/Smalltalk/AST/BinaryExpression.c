#include <lib/class/Smalltalk/AST/BinaryExpression.h>


Optr layout_Smalltalk_AST_BinaryExpression_Class_class;
Optr slot_Smalltalk_AST_BinaryExpression_receiver;
Optr slot_Smalltalk_AST_BinaryExpression_argument;
Optr slot_Smalltalk_AST_BinaryExpression_scoped;
Optr layout_Smalltalk_AST_BinaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15684 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15686 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15685 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15686, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15683 = new_Method_with(PArray15684, empty_Array, empty_Array, PThreadedCode15685, 2, PAssign15686, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15683, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15688 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15687 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15688, 1, slot_Smalltalk_AST_BinaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15687, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15691 = new_Super(SMB_initialize, 0);
    Assign PAssign15692 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)false_Const);
    Array PThreadedCode15690 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15691, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15692, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15689 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15690, 3, PSuper15691, PAssign15692, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15689, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15694 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15697 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15699 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15703 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15702 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15703, (Optr)&t_block_return);
    Block PBlock15701 = new_Block_with(empty_Array, empty_Array, PThreadedCode15702, 1, PSend15703);
    // ifFalse:. 
    Send PSend15700 = new_Send((Optr)PSuper15699, SMB_ifFalse_, 1, (Optr)PBlock15701);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15704 = new_Send((Optr)self, SMB_argument, 0);
    // argument. 
    Send PSend15705 = new_Send((Optr)VAR_other_0_0, SMB_argument, 0);
    // =. 
    Send PSend15706 = new_Send((Optr)PSend15704, SMB__equals_, 1, (Optr)PSend15705);
    // escape:. 
    Send PSend15710 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15709 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15710, (Optr)&t_block_return);
    Block PBlock15708 = new_Block_with(empty_Array, empty_Array, PThreadedCode15709, 1, PSend15710);
    // ifFalse:. 
    Send PSend15707 = new_Send((Optr)PSend15706, SMB_ifFalse_, 1, (Optr)PBlock15708);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15711 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15712 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15713 = new_Send((Optr)PSend15711, SMB__equals_, 1, (Optr)PSend15712);
    // escape:. 
    Send PSend15717 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15716 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15717, (Optr)&t_block_return);
    Block PBlock15715 = new_Block_with(empty_Array, empty_Array, PThreadedCode15716, 1, PSend15717);
    // ifFalse:. 
    Send PSend15714 = new_Send((Optr)PSend15713, SMB_ifFalse_, 1, (Optr)PBlock15715);
    Array PThreadedCode15698 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15699, (Optr)&t_send_ifFalse_, (Optr)PSend15700, (Optr)PBlock15701, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15704, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15705, (Optr)&t_send1, (Optr)PSend15706, (Optr)&t_send_ifFalse_, (Optr)PSend15707, (Optr)PBlock15708, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15711, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15712, (Optr)&t_send1, (Optr)PSend15713, (Optr)&t_send_ifFalse_, (Optr)PSend15714, (Optr)PBlock15715, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15696 = new_Block_with(PArray15697, empty_Array, PThreadedCode15698, 4, PSend15700, PSend15707, PSend15714, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15718 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15696);
    Array PThreadedCode15695 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15696, (Optr)&t_send1, (Optr)PSend15718, (Optr)&t_method_return);
    Method PMethod15693 = new_Method_with(PArray15694, empty_Array, empty_Array, PThreadedCode15695, 1, PSend15718);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15693, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_argument_() {
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15720 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15722 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15721 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15722, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15719 = new_Method_with(PArray15720, empty_Array, empty_Array, PThreadedCode15721, 2, PAssign15722, self);
    
    MethodClosure MC_SMB_argument_ = new_MethodClosure((Method)PMethod15719, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument_, MC_SMB_argument_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15724 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinaryExpression_ = new_Symbol(L"visitBinaryExpression:");
    // visitBinaryExpression:. 
    Send PSend15726 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinaryExpression_, 1, (Optr)self);
    Array PThreadedCode15725 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15726, (Optr)&t_method_return);
    Method PMethod15723 = new_Method_with(PArray15724, empty_Array, empty_Array, PThreadedCode15725, 1, PSend15726);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15723, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Array PThreadedCode15728 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_method_return);
    Method PMethod15727 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15728, 1, slot_Smalltalk_AST_BinaryExpression_argument);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod15727, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15730 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15732 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15733 = new_Send((Optr)PSend15732, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15734 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15735 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // space. 
    Send PSend15736 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15737 = new_Send((Optr)self, SMB_argument, 0);
    // printOn:. 
    Send PSend15738 = new_Send((Optr)PSend15737, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15731 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15732, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15733, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15734, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15735, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15736, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15737, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15738, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15729 = new_Method_with(PArray15730, empty_Array, empty_Array, PThreadedCode15731, 6, PSend15733, PSend15734, PSuper15735, PSend15736, PSend15738, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15729, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scoped() {
    Symbol SMB_scoped = new_Symbol(L"scoped");
    Assign PAssign15741 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)true_Const);
    Array PThreadedCode15740 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign15741, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15739 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15740, 2, PAssign15741, self);
    
    MethodClosure MC_SMB_scoped = new_MethodClosure((Method)PMethod15739, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_scoped, MC_SMB_scoped);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15745 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15744 = new_Block_with(empty_Array, empty_Array, PThreadedCode15745, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15748 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15747 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15748, (Optr)&t_block_return);
    Block PBlock15746 = new_Block_with(empty_Array, empty_Array, PThreadedCode15747, 1, PSend15748);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15749 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15744, (Optr)PBlock15746);
    // hasReturnExpression. 
    Send PSend15752 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_argument, SMB_hasReturnExpression, 0);
    Array PThreadedCode15751 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_send0, (Optr)PSend15752, (Optr)&t_block_return);
    Block PBlock15750 = new_Block_with(empty_Array, empty_Array, PThreadedCode15751, 1, PSend15752);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15753 = new_Send((Optr)PSend15749, SMB_or_, 1, (Optr)PBlock15750);
    Array PThreadedCode15743 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15744, (Optr)&t_push_closure, (Optr)PBlock15746, (Optr)&t_send2, (Optr)PSend15749, (Optr)&t_push_closure, (Optr)PBlock15750, (Optr)&t_send1, (Optr)PSend15753, (Optr)&t_method_return);
    Method PMethod15742 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15743, 1, PSend15753);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15742, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}

void init_Smalltalk_AST_ASTBinaryExpression_layout() {
    layout_Smalltalk_AST_BinaryExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_BinaryExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_BinaryExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_BinaryExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_BinaryExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_BinaryExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_BinaryExpression = new_Symbol(L"BinaryExpression");
    slot_Smalltalk_AST_BinaryExpression_receiver = (Optr)new_Slot(1, L"receiver");
    slot_Smalltalk_AST_BinaryExpression_argument = (Optr)new_Slot(2, L"argument");
    slot_Smalltalk_AST_BinaryExpression_scoped = (Optr)new_Slot(3, L"scoped");
    layout_Smalltalk_AST_BinaryExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Smalltalk_AST_BinaryExpression)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    ((Array)layout_Smalltalk_AST_BinaryExpression)->values[1] = slot_Smalltalk_AST_BinaryExpression_receiver; // receiver 
    ((Array)layout_Smalltalk_AST_BinaryExpression)->values[2] = slot_Smalltalk_AST_BinaryExpression_argument; // argument 
    ((Array)layout_Smalltalk_AST_BinaryExpression)->values[3] = slot_Smalltalk_AST_BinaryExpression_scoped; // scoped 
    Smalltalk_AST_BinaryExpression_Class = (Class)new_Class(Smalltalk_AST_BinarySelector_Class, layout_Smalltalk_AST_BinaryExpression_Class_class);
    Smalltalk_AST_BinaryExpression_Class->layout = layout_Smalltalk_AST_BinaryExpression;
    Smalltalk_AST_BinaryExpression_Class->name = SMB_BinaryExpression;
    
}

void init_Smalltalk_AST_ASTBinaryExpression_methods() {
    init_SMB_receiver_();
    init_SMB_receiver();
    init_SMB_initialize();
    init_SMB__equals_();
    init_SMB_argument_();
    init_SMB_accept_();
    init_SMB_argument();
    init_SMB_printOn_();
    init_SMB_scoped();
    init_SMB_hasReturnExpression();
    
}