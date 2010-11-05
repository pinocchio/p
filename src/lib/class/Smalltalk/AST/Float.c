#include <lib/class/Smalltalk/AST/Float.h>


Optr layout_Smalltalk_AST_Float_Class_class;
Optr slot_Smalltalk_AST_Float_high;
Optr slot_Smalltalk_AST_Float_low;
Optr layout_Smalltalk_AST_Float;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend15702 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_asNumber, 0);
    // asNumber. 
    Send PSend15703 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_asNumber, 0);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend15704 = new_Send((Optr)int_10_Const, SMB_asFloat, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15705 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_size, 0);
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    // raisedTo:. 
    Send PSend15706 = new_Send((Optr)PSend15704, SMB_raisedTo_, 1, (Optr)PSend15705);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend15707 = new_Send((Optr)PSend15703, SMB__divide_, 1, (Optr)PSend15706);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend15708 = new_Send((Optr)PSend15702, SMB__plus_, 1, (Optr)PSend15707);
    Array PThreadedCode15701 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_send0, (Optr)PSend15702, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15703, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send0, (Optr)PSend15704, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15705, (Optr)&t_send1, (Optr)PSend15706, (Optr)&t_send1, (Optr)PSend15707, (Optr)&t_send1, (Optr)PSend15708, (Optr)&t_method_return);
    Method PMethod15700 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15701, 1, PSend15708);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15700, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_low() {
    Symbol SMB_low = new_Symbol(L"low");
    Array PThreadedCode15710 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_method_return);
    Method PMethod15709 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15710, 1, slot_Smalltalk_AST_Float_low);
    
    MethodClosure MC_SMB_low = new_MethodClosure((Method)PMethod15709, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low, MC_SMB_low);
}


static void init_SMB_low_() {
    Symbol SMB_low_ = new_Symbol(L"low:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15712 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15714 = new_Assign((Optr)slot_Smalltalk_AST_Float_low, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15713 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15714, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15711 = new_Method_with(PArray15712, empty_Array, empty_Array, PThreadedCode15713, 2, PAssign15714, self);
    
    MethodClosure MC_SMB_low_ = new_MethodClosure((Method)PMethod15711, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low_, MC_SMB_low_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15716 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15719 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15721 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15725 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15724 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15725, (Optr)&t_block_return);
    Block PBlock15723 = new_Block_with(empty_Array, empty_Array, PThreadedCode15724, 1, PSend15725);
    // ifFalse:. 
    Send PSend15722 = new_Send((Optr)PSuper15721, SMB_ifFalse_, 1, (Optr)PBlock15723);
    Symbol SMB_low = new_Symbol(L"low");
    // low. 
    Send PSend15726 = new_Send((Optr)VAR_other_0_0, SMB_low, 0);
    // =. 
    Send PSend15727 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB__equals_, 1, (Optr)PSend15726);
    // escape:. 
    Send PSend15731 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15730 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15731, (Optr)&t_block_return);
    Block PBlock15729 = new_Block_with(empty_Array, empty_Array, PThreadedCode15730, 1, PSend15731);
    // ifFalse:. 
    Send PSend15728 = new_Send((Optr)PSend15727, SMB_ifFalse_, 1, (Optr)PBlock15729);
    Symbol SMB_high = new_Symbol(L"high");
    // high. 
    Send PSend15732 = new_Send((Optr)VAR_other_0_0, SMB_high, 0);
    // =. 
    Send PSend15733 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB__equals_, 1, (Optr)PSend15732);
    // escape:. 
    Send PSend15737 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15736 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15737, (Optr)&t_block_return);
    Block PBlock15735 = new_Block_with(empty_Array, empty_Array, PThreadedCode15736, 1, PSend15737);
    // ifFalse:. 
    Send PSend15734 = new_Send((Optr)PSend15733, SMB_ifFalse_, 1, (Optr)PBlock15735);
    Array PThreadedCode15720 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15721, (Optr)&t_send_ifFalse_, (Optr)PSend15722, (Optr)PBlock15723, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15726, (Optr)&t_send1, (Optr)PSend15727, (Optr)&t_send_ifFalse_, (Optr)PSend15728, (Optr)PBlock15729, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15732, (Optr)&t_send1, (Optr)PSend15733, (Optr)&t_send_ifFalse_, (Optr)PSend15734, (Optr)PBlock15735, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15718 = new_Block_with(PArray15719, empty_Array, PThreadedCode15720, 4, PSend15722, PSend15728, PSend15734, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15738 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15718);
    Array PThreadedCode15717 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15718, (Optr)&t_send1, (Optr)PSend15738, (Optr)&t_method_return);
    Method PMethod15715 = new_Method_with(PArray15716, empty_Array, empty_Array, PThreadedCode15717, 1, PSend15738);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15715, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15740 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    // visitFloat:. 
    Send PSend15742 = new_Send((Optr)VAR_visitor_0_0, SMB_visitFloat_, 1, (Optr)self);
    Array PThreadedCode15741 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15742, (Optr)&t_method_return);
    Method PMethod15739 = new_Method_with(PArray15740, empty_Array, empty_Array, PThreadedCode15741, 1, PSend15742);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15739, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15744 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printOn:. 
    Send PSend15746 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_2898 = new_Character(L'.');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2898_Const = new_Constant((Optr)char_2898);
    // <<. 
    Send PSend15747 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2898_Const);
    // printOn:. 
    Send PSend15748 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15745 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15746, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2898, (Optr)&t_send1, (Optr)PSend15747, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15748, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15743 = new_Method_with(PArray15744, empty_Array, empty_Array, PThreadedCode15745, 4, PSend15746, PSend15747, PSend15748, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15743, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_high_() {
    Symbol SMB_high_ = new_Symbol(L"high:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15750 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15752 = new_Assign((Optr)slot_Smalltalk_AST_Float_high, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15751 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15752, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15749 = new_Method_with(PArray15750, empty_Array, empty_Array, PThreadedCode15751, 2, PAssign15752, self);
    
    MethodClosure MC_SMB_high_ = new_MethodClosure((Method)PMethod15749, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_high_, MC_SMB_high_);
}


static void init_SMB_high() {
    Symbol SMB_high = new_Symbol(L"high");
    Array PThreadedCode15754 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_method_return);
    Method PMethod15753 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15754, 1, slot_Smalltalk_AST_Float_high);
    
    MethodClosure MC_SMB_high = new_MethodClosure((Method)PMethod15753, Smalltalk_AST_Float_Class);
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