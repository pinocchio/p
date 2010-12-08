#include <lib/class/Smalltalk/AST/Float.h>


Optr layout_Smalltalk_AST_Float_Class_class;
Optr slot_Smalltalk_AST_Float_high;
Optr slot_Smalltalk_AST_Float_low;
Optr layout_Smalltalk_AST_Float;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend15961 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_asNumber, 0);
    // asNumber. 
    Send PSend15962 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_asNumber, 0);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend15963 = new_Send((Optr)int_10_Const, SMB_asFloat, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15964 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_size, 0);
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    // raisedTo:. 
    Send PSend15965 = new_Send((Optr)PSend15963, SMB_raisedTo_, 1, (Optr)PSend15964);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend15966 = new_Send((Optr)PSend15962, SMB__divide_, 1, (Optr)PSend15965);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend15967 = new_Send((Optr)PSend15961, SMB__plus_, 1, (Optr)PSend15966);
    Array PThreadedCode15960 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_send0, (Optr)PSend15961, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15962, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send0, (Optr)PSend15963, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15964, (Optr)&t_send1, (Optr)PSend15965, (Optr)&t_send1, (Optr)PSend15966, (Optr)&t_send1, (Optr)PSend15967, (Optr)&t_method_return);
    Method PMethod15959 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15960, 1, PSend15967);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15959, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_low() {
    Symbol SMB_low = new_Symbol(L"low");
    Array PThreadedCode15969 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_method_return);
    Method PMethod15968 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15969, 1, slot_Smalltalk_AST_Float_low);
    
    MethodClosure MC_SMB_low = new_MethodClosure((Method)PMethod15968, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low, MC_SMB_low);
}


static void init_SMB_low_() {
    Symbol SMB_low_ = new_Symbol(L"low:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15971 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15973 = new_Assign((Optr)slot_Smalltalk_AST_Float_low, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15972 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15973, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15970 = new_Method_with(PArray15971, empty_Array, empty_Array, PThreadedCode15972, 2, PAssign15973, self);
    
    MethodClosure MC_SMB_low_ = new_MethodClosure((Method)PMethod15970, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low_, MC_SMB_low_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15975 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15978 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15980 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15984 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15983 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15984, (Optr)&t_block_return);
    Block PBlock15982 = new_Block_with(empty_Array, empty_Array, PThreadedCode15983, 1, PSend15984);
    // ifFalse:. 
    Send PSend15981 = new_Send((Optr)PSuper15980, SMB_ifFalse_, 1, (Optr)PBlock15982);
    Symbol SMB_low = new_Symbol(L"low");
    // low. 
    Send PSend15985 = new_Send((Optr)VAR_other_0_0, SMB_low, 0);
    // =. 
    Send PSend15986 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB__equals_, 1, (Optr)PSend15985);
    // escape:. 
    Send PSend15990 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15989 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15990, (Optr)&t_block_return);
    Block PBlock15988 = new_Block_with(empty_Array, empty_Array, PThreadedCode15989, 1, PSend15990);
    // ifFalse:. 
    Send PSend15987 = new_Send((Optr)PSend15986, SMB_ifFalse_, 1, (Optr)PBlock15988);
    Symbol SMB_high = new_Symbol(L"high");
    // high. 
    Send PSend15991 = new_Send((Optr)VAR_other_0_0, SMB_high, 0);
    // =. 
    Send PSend15992 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB__equals_, 1, (Optr)PSend15991);
    // escape:. 
    Send PSend15996 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15995 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15996, (Optr)&t_block_return);
    Block PBlock15994 = new_Block_with(empty_Array, empty_Array, PThreadedCode15995, 1, PSend15996);
    // ifFalse:. 
    Send PSend15993 = new_Send((Optr)PSend15992, SMB_ifFalse_, 1, (Optr)PBlock15994);
    Array PThreadedCode15979 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15980, (Optr)&t_send_ifFalse_, (Optr)PSend15981, (Optr)PBlock15982, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15985, (Optr)&t_send1, (Optr)PSend15986, (Optr)&t_send_ifFalse_, (Optr)PSend15987, (Optr)PBlock15988, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15991, (Optr)&t_send1, (Optr)PSend15992, (Optr)&t_send_ifFalse_, (Optr)PSend15993, (Optr)PBlock15994, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15977 = new_Block_with(PArray15978, empty_Array, PThreadedCode15979, 4, PSend15981, PSend15987, PSend15993, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15997 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15977);
    Array PThreadedCode15976 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15977, (Optr)&t_send1, (Optr)PSend15997, (Optr)&t_method_return);
    Method PMethod15974 = new_Method_with(PArray15975, empty_Array, empty_Array, PThreadedCode15976, 1, PSend15997);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15974, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15999 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    // visitFloat:. 
    Send PSend16001 = new_Send((Optr)VAR_visitor_0_0, SMB_visitFloat_, 1, (Optr)self);
    Array PThreadedCode16000 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16001, (Optr)&t_method_return);
    Method PMethod15998 = new_Method_with(PArray15999, empty_Array, empty_Array, PThreadedCode16000, 1, PSend16001);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15998, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray16003 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printOn:. 
    Send PSend16005 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_2907 = new_Character(L'.');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2907_Const = new_Constant((Optr)char_2907);
    // <<. 
    Send PSend16006 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2907_Const);
    // printOn:. 
    Send PSend16007 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode16004 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend16005, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2907, (Optr)&t_send1, (Optr)PSend16006, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend16007, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16002 = new_Method_with(PArray16003, empty_Array, empty_Array, PThreadedCode16004, 4, PSend16005, PSend16006, PSend16007, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod16002, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_high_() {
    Symbol SMB_high_ = new_Symbol(L"high:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16009 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16011 = new_Assign((Optr)slot_Smalltalk_AST_Float_high, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16010 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16011, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16008 = new_Method_with(PArray16009, empty_Array, empty_Array, PThreadedCode16010, 2, PAssign16011, self);
    
    MethodClosure MC_SMB_high_ = new_MethodClosure((Method)PMethod16008, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_high_, MC_SMB_high_);
}


static void init_SMB_high() {
    Symbol SMB_high = new_Symbol(L"high");
    Array PThreadedCode16013 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_method_return);
    Method PMethod16012 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16013, 1, slot_Smalltalk_AST_Float_high);
    
    MethodClosure MC_SMB_high = new_MethodClosure((Method)PMethod16012, Smalltalk_AST_Float_Class);
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