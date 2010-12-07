#include <lib/class/Smalltalk/AST/Method.h>


Optr layout_Smalltalk_AST_Method_Class_class;
Optr slot_Smalltalk_AST_Method_message;
Optr slot_Smalltalk_AST_Method_annotations;
Optr slot_Smalltalk_AST_Method_temporaries;
Optr slot_Smalltalk_AST_Method_statements;
Optr slot_Smalltalk_AST_Method_sourceObject;
Optr layout_Smalltalk_AST_Method;


static void init_SMB_message_() {
    Symbol SMB_message_ = new_Symbol(L"message:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15725 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15727 = new_Assign((Optr)slot_Smalltalk_AST_Method_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15726 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15727, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15724 = new_Method_with(PArray15725, empty_Array, empty_Array, PThreadedCode15726, 2, PAssign15727, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod15724, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_annotatedWith_() {
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray15729 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15731 = new_Send((Optr)self, SMB_annotations, 0);
    Variable VAR_annotation_1_0 = new_Variable_named(L"annotation", 1);
    Array PArray15733 = new_Array_with(1, (Optr)VAR_annotation_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend15735 = new_Send((Optr)VAR_annotation_1_0, SMB_selector, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend15736 = new_Send((Optr)PSend15735, SMB__pequals_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode15734 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_annotation_1_0, (Optr)&t_send0, (Optr)PSend15735, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend15736, (Optr)&t_method_return);
    Block PBlock15732 = new_Block_with(PArray15733, empty_Array, PThreadedCode15734, 1, PSend15736);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend15737 = new_Send((Optr)PSend15731, SMB_anySatisfy_, 1, (Optr)PBlock15732);
    Array PThreadedCode15730 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15731, (Optr)&t_push_closure, (Optr)PBlock15732, (Optr)&t_send1, (Optr)PSend15737, (Optr)&t_method_return);
    Method PMethod15728 = new_Method_with(PArray15729, empty_Array, empty_Array, PThreadedCode15730, 1, PSend15737);
    
    MethodClosure MC_SMB_annotatedWith_ = new_MethodClosure((Method)PMethod15728, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotatedWith_, MC_SMB_annotatedWith_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15739 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15742 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15744 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15748 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15747 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15748, (Optr)&t_block_return);
    Block PBlock15746 = new_Block_with(empty_Array, empty_Array, PThreadedCode15747, 1, PSend15748);
    // ifFalse:. 
    Send PSend15745 = new_Send((Optr)PSuper15744, SMB_ifFalse_, 1, (Optr)PBlock15746);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend15749 = new_Send((Optr)self, SMB_annotations, 0);
    // annotations. 
    Send PSend15750 = new_Send((Optr)VAR_other_0_0, SMB_annotations, 0);
    // =. 
    Send PSend15751 = new_Send((Optr)PSend15749, SMB__equals_, 1, (Optr)PSend15750);
    // escape:. 
    Send PSend15755 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15754 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15755, (Optr)&t_block_return);
    Block PBlock15753 = new_Block_with(empty_Array, empty_Array, PThreadedCode15754, 1, PSend15755);
    // ifFalse:. 
    Send PSend15752 = new_Send((Optr)PSend15751, SMB_ifFalse_, 1, (Optr)PBlock15753);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15756 = new_Send((Optr)self, SMB_message, 0);
    // message. 
    Send PSend15757 = new_Send((Optr)VAR_other_0_0, SMB_message, 0);
    // =. 
    Send PSend15758 = new_Send((Optr)PSend15756, SMB__equals_, 1, (Optr)PSend15757);
    // escape:. 
    Send PSend15762 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15761 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15762, (Optr)&t_block_return);
    Block PBlock15760 = new_Block_with(empty_Array, empty_Array, PThreadedCode15761, 1, PSend15762);
    // ifFalse:. 
    Send PSend15759 = new_Send((Optr)PSend15758, SMB_ifFalse_, 1, (Optr)PBlock15760);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15763 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15764 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15765 = new_Send((Optr)PSend15763, SMB__equals_, 1, (Optr)PSend15764);
    // escape:. 
    Send PSend15769 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15768 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15769, (Optr)&t_block_return);
    Block PBlock15767 = new_Block_with(empty_Array, empty_Array, PThreadedCode15768, 1, PSend15769);
    // ifFalse:. 
    Send PSend15766 = new_Send((Optr)PSend15765, SMB_ifFalse_, 1, (Optr)PBlock15767);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15770 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15771 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15772 = new_Send((Optr)PSend15770, SMB__equals_, 1, (Optr)PSend15771);
    // escape:. 
    Send PSend15776 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15775 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15776, (Optr)&t_block_return);
    Block PBlock15774 = new_Block_with(empty_Array, empty_Array, PThreadedCode15775, 1, PSend15776);
    // ifFalse:. 
    Send PSend15773 = new_Send((Optr)PSend15772, SMB_ifFalse_, 1, (Optr)PBlock15774);
    Array PThreadedCode15743 = instantiate_Array_with(ThreadedCode_Class, 0, 62, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15744, (Optr)&t_send_ifFalse_, (Optr)PSend15745, (Optr)PBlock15746, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15749, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15750, (Optr)&t_send1, (Optr)PSend15751, (Optr)&t_send_ifFalse_, (Optr)PSend15752, (Optr)PBlock15753, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15756, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15757, (Optr)&t_send1, (Optr)PSend15758, (Optr)&t_send_ifFalse_, (Optr)PSend15759, (Optr)PBlock15760, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15763, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15764, (Optr)&t_send1, (Optr)PSend15765, (Optr)&t_send_ifFalse_, (Optr)PSend15766, (Optr)PBlock15767, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15770, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15771, (Optr)&t_send1, (Optr)PSend15772, (Optr)&t_send_ifFalse_, (Optr)PSend15773, (Optr)PBlock15774, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15741 = new_Block_with(PArray15742, empty_Array, PThreadedCode15743, 6, PSend15745, PSend15752, PSend15759, PSend15766, PSend15773, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15777 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15741);
    Array PThreadedCode15740 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15741, (Optr)&t_send1, (Optr)PSend15777, (Optr)&t_method_return);
    Method PMethod15738 = new_Method_with(PArray15739, empty_Array, empty_Array, PThreadedCode15740, 1, PSend15777);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15738, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15779 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_statements, (Optr)&t_method_return);
    Method PMethod15778 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15779, 1, slot_Smalltalk_AST_Method_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15778, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15781 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    // visitMethod:. 
    Send PSend15783 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethod_, 1, (Optr)self);
    Array PThreadedCode15782 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15783, (Optr)&t_method_return);
    Method PMethod15780 = new_Method_with(PArray15781, empty_Array, empty_Array, PThreadedCode15782, 1, PSend15783);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15780, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    Array PThreadedCode15785 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_annotations, (Optr)&t_method_return);
    Method PMethod15784 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15785, 1, slot_Smalltalk_AST_Method_annotations);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod15784, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15787 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper15789 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend15790 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15791 = new_Send((Optr)self, SMB_message, 0);
    // printOn:. 
    Send PSend15792 = new_Send((Optr)PSend15791, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend15793 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode15788 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper15789, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend15790, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15791, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15792, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend15793, (Optr)&t_method_return);
    Method PMethod15786 = new_Method_with(PArray15787, empty_Array, empty_Array, PThreadedCode15788, 4, PSuper15789, PSend15790, PSend15792, PSend15793);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15786, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode15795 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_message, (Optr)&t_method_return);
    Method PMethod15794 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15795, 1, slot_Smalltalk_AST_Method_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod15794, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15798 = new_Send((Optr)self, SMB_statements, 0);
    // hasReturnExpression. 
    Send PSend15799 = new_Send((Optr)PSend15798, SMB_hasReturnExpression, 0);
    Array PThreadedCode15797 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15798, (Optr)&t_send0, (Optr)PSend15799, (Optr)&t_method_return);
    Method PMethod15796 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15797, 1, PSend15799);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15796, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15801 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15803 = new_Assign((Optr)slot_Smalltalk_AST_Method_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15802 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15803, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15800 = new_Method_with(PArray15801, empty_Array, empty_Array, PThreadedCode15802, 2, PAssign15803, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15800, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15805 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)&t_method_return);
    Method PMethod15804 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15805, 1, slot_Smalltalk_AST_Method_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15804, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15807 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15809 = new_Assign((Optr)slot_Smalltalk_AST_Method_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15808 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15809, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15806 = new_Method_with(PArray15807, empty_Array, empty_Array, PThreadedCode15808, 2, PAssign15809, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15806, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_temporaries_, MC_SMB_temporaries_);
}


static void init_SMB_sourceObject() {
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    Array PThreadedCode15811 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)&t_method_return);
    Method PMethod15810 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15811, 1, slot_Smalltalk_AST_Method_sourceObject);
    
    MethodClosure MC_SMB_sourceObject = new_MethodClosure((Method)PMethod15810, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_sourceObject, MC_SMB_sourceObject);
}


static void init_SMB_annotations_() {
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15813 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15815 = new_Assign((Optr)slot_Smalltalk_AST_Method_annotations, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15814 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15815, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15812 = new_Method_with(PArray15813, empty_Array, empty_Array, PThreadedCode15814, 2, PAssign15815, self);
    
    MethodClosure MC_SMB_annotations_ = new_MethodClosure((Method)PMethod15812, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_annotations_, MC_SMB_annotations_);
}


static void init_SMB_sourceObject_() {
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15817 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15819 = new_Assign((Optr)slot_Smalltalk_AST_Method_sourceObject, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15818 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15819, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15816 = new_Method_with(PArray15817, empty_Array, empty_Array, PThreadedCode15818, 2, PAssign15819, self);
    
    MethodClosure MC_SMB_sourceObject_ = new_MethodClosure((Method)PMethod15816, Smalltalk_AST_Method_Class);
    store_method(Smalltalk_AST_Method_Class, SMB_sourceObject_, MC_SMB_sourceObject_);
}

void init_Smalltalk_AST_ASTMethod_layout() {
    layout_Smalltalk_AST_Method_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Method_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Method = new_Symbol(L"Method");
    slot_Smalltalk_AST_Method_message = (Optr)new_Slot(0, L"message");
    slot_Smalltalk_AST_Method_annotations = (Optr)new_Slot(1, L"annotations");
    slot_Smalltalk_AST_Method_temporaries = (Optr)new_Slot(2, L"temporaries");
    slot_Smalltalk_AST_Method_statements = (Optr)new_Slot(3, L"statements");
    slot_Smalltalk_AST_Method_sourceObject = (Optr)new_Slot(4, L"sourceObject");
    layout_Smalltalk_AST_Method = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Method)->values[0] = slot_Smalltalk_AST_Method_message; // message 
    ((Array)layout_Smalltalk_AST_Method)->values[1] = slot_Smalltalk_AST_Method_annotations; // annotations 
    ((Array)layout_Smalltalk_AST_Method)->values[2] = slot_Smalltalk_AST_Method_temporaries; // temporaries 
    ((Array)layout_Smalltalk_AST_Method)->values[3] = slot_Smalltalk_AST_Method_statements; // statements 
    ((Array)layout_Smalltalk_AST_Method)->values[4] = slot_Smalltalk_AST_Method_sourceObject; // sourceObject 
    Smalltalk_AST_Method_Class = (Class)new_Class(Smalltalk_AST_Node_Class, layout_Smalltalk_AST_Method_Class_class);
    Smalltalk_AST_Method_Class->layout = layout_Smalltalk_AST_Method;
    Smalltalk_AST_Method_Class->name = SMB_Method;
    
}

void init_Smalltalk_AST_ASTMethod_methods() {
    init_SMB_message_();
    init_SMB_annotatedWith_();
    init_SMB__equals_();
    init_SMB_statements();
    init_SMB_accept_();
    init_SMB_annotations();
    init_SMB_printOn_();
    init_SMB_message();
    init_SMB_hasReturnExpression();
    init_SMB_statements_();
    init_SMB_temporaries();
    init_SMB_temporaries_();
    init_SMB_sourceObject();
    init_SMB_annotations_();
    init_SMB_sourceObject_();
    
}