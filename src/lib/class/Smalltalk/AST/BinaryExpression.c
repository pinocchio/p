#include <lib/class/Smalltalk/AST/BinaryExpression.h>


Optr layout_Smalltalk_AST_BinaryExpression_Class_class;
Optr slot_Smalltalk_AST_BinaryExpression_receiver;
Optr slot_Smalltalk_AST_BinaryExpression_argument;
Optr slot_Smalltalk_AST_BinaryExpression_scoped;
Optr layout_Smalltalk_AST_BinaryExpression;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15623 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15625 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15624 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15625, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15622 = new_Method_with(PArray15623, empty_Array, empty_Array, PThreadedCode15624, 2, PAssign15625, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod15622, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode15627 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_method_return);
    Method PMethod15626 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15627, 1, slot_Smalltalk_AST_BinaryExpression_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod15626, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper15630 = new_Super(SMB_initialize, 0);
    Assign PAssign15631 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)false_Const);
    Array PThreadedCode15629 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15630, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15631, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15628 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15629, 3, PSuper15630, PAssign15631, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod15628, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15633 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15636 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15638 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15642 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15641 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15642, (Optr)&t_block_return);
    Block PBlock15640 = new_Block_with(empty_Array, empty_Array, PThreadedCode15641, 1, PSend15642);
    // ifFalse:. 
    Send PSend15639 = new_Send((Optr)PSuper15638, SMB_ifFalse_, 1, (Optr)PBlock15640);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15643 = new_Send((Optr)self, SMB_argument, 0);
    // argument. 
    Send PSend15644 = new_Send((Optr)VAR_other_0_0, SMB_argument, 0);
    // =. 
    Send PSend15645 = new_Send((Optr)PSend15643, SMB__equals_, 1, (Optr)PSend15644);
    // escape:. 
    Send PSend15649 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15648 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15649, (Optr)&t_block_return);
    Block PBlock15647 = new_Block_with(empty_Array, empty_Array, PThreadedCode15648, 1, PSend15649);
    // ifFalse:. 
    Send PSend15646 = new_Send((Optr)PSend15645, SMB_ifFalse_, 1, (Optr)PBlock15647);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15650 = new_Send((Optr)self, SMB_receiver, 0);
    // receiver. 
    Send PSend15651 = new_Send((Optr)VAR_other_0_0, SMB_receiver, 0);
    // =. 
    Send PSend15652 = new_Send((Optr)PSend15650, SMB__equals_, 1, (Optr)PSend15651);
    // escape:. 
    Send PSend15656 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15655 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15656, (Optr)&t_block_return);
    Block PBlock15654 = new_Block_with(empty_Array, empty_Array, PThreadedCode15655, 1, PSend15656);
    // ifFalse:. 
    Send PSend15653 = new_Send((Optr)PSend15652, SMB_ifFalse_, 1, (Optr)PBlock15654);
    Array PThreadedCode15637 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15638, (Optr)&t_send_ifFalse_, (Optr)PSend15639, (Optr)PBlock15640, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15643, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15644, (Optr)&t_send1, (Optr)PSend15645, (Optr)&t_send_ifFalse_, (Optr)PSend15646, (Optr)PBlock15647, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15650, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15651, (Optr)&t_send1, (Optr)PSend15652, (Optr)&t_send_ifFalse_, (Optr)PSend15653, (Optr)PBlock15654, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15635 = new_Block_with(PArray15636, empty_Array, PThreadedCode15637, 4, PSend15639, PSend15646, PSend15653, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15657 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15635);
    Array PThreadedCode15634 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15635, (Optr)&t_send1, (Optr)PSend15657, (Optr)&t_method_return);
    Method PMethod15632 = new_Method_with(PArray15633, empty_Array, empty_Array, PThreadedCode15634, 1, PSend15657);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15632, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_argument_() {
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15659 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15661 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15660 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15661, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15658 = new_Method_with(PArray15659, empty_Array, empty_Array, PThreadedCode15660, 2, PAssign15661, self);
    
    MethodClosure MC_SMB_argument_ = new_MethodClosure((Method)PMethod15658, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument_, MC_SMB_argument_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15663 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinaryExpression_ = new_Symbol(L"visitBinaryExpression:");
    // visitBinaryExpression:. 
    Send PSend15665 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinaryExpression_, 1, (Optr)self);
    Array PThreadedCode15664 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15665, (Optr)&t_method_return);
    Method PMethod15662 = new_Method_with(PArray15663, empty_Array, empty_Array, PThreadedCode15664, 1, PSend15665);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15662, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Array PThreadedCode15667 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_method_return);
    Method PMethod15666 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15667, 1, slot_Smalltalk_AST_BinaryExpression_argument);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod15666, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15669 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15671 = new_Send((Optr)self, SMB_receiver, 0);
    // printOn:. 
    Send PSend15672 = new_Send((Optr)PSend15671, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend15673 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Super PSuper15674 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // space. 
    Send PSend15675 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend15676 = new_Send((Optr)self, SMB_argument, 0);
    // printOn:. 
    Send PSend15677 = new_Send((Optr)PSend15676, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15670 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15671, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15672, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15673, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15674, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend15675, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15676, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15677, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15668 = new_Method_with(PArray15669, empty_Array, empty_Array, PThreadedCode15670, 6, PSend15672, PSend15673, PSuper15674, PSend15675, PSend15677, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15668, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scoped() {
    Symbol SMB_scoped = new_Symbol(L"scoped");
    Assign PAssign15680 = new_Assign((Optr)slot_Smalltalk_AST_BinaryExpression_scoped, (Optr)true_Const);
    Array PThreadedCode15679 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign15680, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15678 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15679, 2, PAssign15680, self);
    
    MethodClosure MC_SMB_scoped = new_MethodClosure((Method)PMethod15678, Smalltalk_AST_BinaryExpression_Class);
    store_method(Smalltalk_AST_BinaryExpression_Class, SMB_scoped, MC_SMB_scoped);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15684 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock15683 = new_Block_with(empty_Array, empty_Array, PThreadedCode15684, 1, false_Const);
    // hasReturnExpression. 
    Send PSend15687 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_hasReturnExpression, 0);
    Array PThreadedCode15686 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_send0, (Optr)PSend15687, (Optr)&t_block_return);
    Block PBlock15685 = new_Block_with(empty_Array, empty_Array, PThreadedCode15686, 1, PSend15687);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend15688 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_receiver, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock15683, (Optr)PBlock15685);
    // hasReturnExpression. 
    Send PSend15691 = new_Send((Optr)slot_Smalltalk_AST_BinaryExpression_argument, SMB_hasReturnExpression, 0);
    Array PThreadedCode15690 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_argument, (Optr)&t_send0, (Optr)PSend15691, (Optr)&t_block_return);
    Block PBlock15689 = new_Block_with(empty_Array, empty_Array, PThreadedCode15690, 1, PSend15691);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend15692 = new_Send((Optr)PSend15688, SMB_or_, 1, (Optr)PBlock15689);
    Array PThreadedCode15682 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryExpression_receiver, (Optr)&t_push_closure, (Optr)PBlock15683, (Optr)&t_push_closure, (Optr)PBlock15685, (Optr)&t_send2, (Optr)PSend15688, (Optr)&t_push_closure, (Optr)PBlock15689, (Optr)&t_send1, (Optr)PSend15692, (Optr)&t_method_return);
    Method PMethod15681 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15682, 1, PSend15692);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15681, Smalltalk_AST_BinaryExpression_Class);
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