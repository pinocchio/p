#include <lib/class/Smalltalk/AST/Float.h>


Optr layout_Smalltalk_AST_Float_Class_class;
Optr slot_Smalltalk_AST_Float_high;
Optr slot_Smalltalk_AST_Float_low;
Optr layout_Smalltalk_AST_Float;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend15713 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_asNumber, 0);
    // asNumber. 
    Send PSend15714 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_asNumber, 0);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend15715 = new_Send((Optr)int_10_Const, SMB_asFloat, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15716 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_size, 0);
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    // raisedTo:. 
    Send PSend15717 = new_Send((Optr)PSend15715, SMB_raisedTo_, 1, (Optr)PSend15716);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend15718 = new_Send((Optr)PSend15714, SMB__divide_, 1, (Optr)PSend15717);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend15719 = new_Send((Optr)PSend15713, SMB__plus_, 1, (Optr)PSend15718);
    Array PThreadedCode15712 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_send0, (Optr)PSend15713, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15714, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send0, (Optr)PSend15715, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15716, (Optr)&t_send1, (Optr)PSend15717, (Optr)&t_send1, (Optr)PSend15718, (Optr)&t_send1, (Optr)PSend15719, (Optr)&t_method_return);
    Method PMethod15711 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15712, 1, PSend15719);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15711, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_low() {
    Symbol SMB_low = new_Symbol(L"low");
    Array PThreadedCode15721 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_method_return);
    Method PMethod15720 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15721, 1, slot_Smalltalk_AST_Float_low);
    
    MethodClosure MC_SMB_low = new_MethodClosure((Method)PMethod15720, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low, MC_SMB_low);
}


static void init_SMB_low_() {
    Symbol SMB_low_ = new_Symbol(L"low:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15723 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15725 = new_Assign((Optr)slot_Smalltalk_AST_Float_low, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15724 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15725, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15722 = new_Method_with(PArray15723, empty_Array, empty_Array, PThreadedCode15724, 2, PAssign15725, self);
    
    MethodClosure MC_SMB_low_ = new_MethodClosure((Method)PMethod15722, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low_, MC_SMB_low_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15727 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15730 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15732 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15736 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15735 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15736, (Optr)&t_block_return);
    Block PBlock15734 = new_Block_with(empty_Array, empty_Array, PThreadedCode15735, 1, PSend15736);
    // ifFalse:. 
    Send PSend15733 = new_Send((Optr)PSuper15732, SMB_ifFalse_, 1, (Optr)PBlock15734);
    Symbol SMB_low = new_Symbol(L"low");
    // low. 
    Send PSend15737 = new_Send((Optr)VAR_other_0_0, SMB_low, 0);
    // =. 
    Send PSend15738 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB__equals_, 1, (Optr)PSend15737);
    // escape:. 
    Send PSend15742 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15741 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15742, (Optr)&t_block_return);
    Block PBlock15740 = new_Block_with(empty_Array, empty_Array, PThreadedCode15741, 1, PSend15742);
    // ifFalse:. 
    Send PSend15739 = new_Send((Optr)PSend15738, SMB_ifFalse_, 1, (Optr)PBlock15740);
    Symbol SMB_high = new_Symbol(L"high");
    // high. 
    Send PSend15743 = new_Send((Optr)VAR_other_0_0, SMB_high, 0);
    // =. 
    Send PSend15744 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB__equals_, 1, (Optr)PSend15743);
    // escape:. 
    Send PSend15748 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15747 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15748, (Optr)&t_block_return);
    Block PBlock15746 = new_Block_with(empty_Array, empty_Array, PThreadedCode15747, 1, PSend15748);
    // ifFalse:. 
    Send PSend15745 = new_Send((Optr)PSend15744, SMB_ifFalse_, 1, (Optr)PBlock15746);
    Array PThreadedCode15731 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15732, (Optr)&t_send_ifFalse_, (Optr)PSend15733, (Optr)PBlock15734, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15737, (Optr)&t_send1, (Optr)PSend15738, (Optr)&t_send_ifFalse_, (Optr)PSend15739, (Optr)PBlock15740, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15743, (Optr)&t_send1, (Optr)PSend15744, (Optr)&t_send_ifFalse_, (Optr)PSend15745, (Optr)PBlock15746, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15729 = new_Block_with(PArray15730, empty_Array, PThreadedCode15731, 4, PSend15733, PSend15739, PSend15745, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15749 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15729);
    Array PThreadedCode15728 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15729, (Optr)&t_send1, (Optr)PSend15749, (Optr)&t_method_return);
    Method PMethod15726 = new_Method_with(PArray15727, empty_Array, empty_Array, PThreadedCode15728, 1, PSend15749);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15726, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15751 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    // visitFloat:. 
    Send PSend15753 = new_Send((Optr)VAR_visitor_0_0, SMB_visitFloat_, 1, (Optr)self);
    Array PThreadedCode15752 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15753, (Optr)&t_method_return);
    Method PMethod15750 = new_Method_with(PArray15751, empty_Array, empty_Array, PThreadedCode15752, 1, PSend15753);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15750, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15755 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printOn:. 
    Send PSend15757 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_2907 = new_Character(L'.');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2907_Const = new_Constant((Optr)char_2907);
    // <<. 
    Send PSend15758 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2907_Const);
    // printOn:. 
    Send PSend15759 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15756 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15757, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2907, (Optr)&t_send1, (Optr)PSend15758, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15759, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15754 = new_Method_with(PArray15755, empty_Array, empty_Array, PThreadedCode15756, 4, PSend15757, PSend15758, PSend15759, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15754, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_high_() {
    Symbol SMB_high_ = new_Symbol(L"high:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15761 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15763 = new_Assign((Optr)slot_Smalltalk_AST_Float_high, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15762 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15763, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15760 = new_Method_with(PArray15761, empty_Array, empty_Array, PThreadedCode15762, 2, PAssign15763, self);
    
    MethodClosure MC_SMB_high_ = new_MethodClosure((Method)PMethod15760, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_high_, MC_SMB_high_);
}


static void init_SMB_high() {
    Symbol SMB_high = new_Symbol(L"high");
    Array PThreadedCode15765 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_method_return);
    Method PMethod15764 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15765, 1, slot_Smalltalk_AST_Float_high);
    
    MethodClosure MC_SMB_high = new_MethodClosure((Method)PMethod15764, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_high, MC_SMB_high);
}

void init_Smalltalk_AST_ASTFloat_layout() {
    layout_Smalltalk_AST_Float_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Float_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Float_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Float_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Float_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Float_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Float = new_Symbol(L"Float");
    slot_Smalltalk_AST_Float_high = (Optr)new_Slot(0, L"high");
    slot_Smalltalk_AST_Float_low = (Optr)new_Slot(1, L"low");
    layout_Smalltalk_AST_Float = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_Float)->values[0] = slot_Smalltalk_AST_Float_high; // high 
    ((Array)layout_Smalltalk_AST_Float)->values[1] = slot_Smalltalk_AST_Float_low; // low 
    Smalltalk_AST_Float_Class = (Class)new_Class(Smalltalk_AST_Literal_Class, layout_Smalltalk_AST_Float_Class_class);
    Smalltalk_AST_Float_Class->layout = layout_Smalltalk_AST_Float;
    Smalltalk_AST_Float_Class->name = SMB_Float;
    
}

void init_Smalltalk_AST_ASTFloat_methods() {
    init_SMB_asNumber();
    init_SMB_low();
    init_SMB_low_();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_high_();
    init_SMB_high();
    
}