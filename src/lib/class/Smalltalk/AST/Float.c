#include <lib/class/Smalltalk/AST/Float.h>


Optr layout_Smalltalk_AST_Float_Class_class;
Optr slot_Smalltalk_AST_Float_high;
Optr slot_Smalltalk_AST_Float_low;
Optr layout_Smalltalk_AST_Float;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend15542 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_asNumber, 0);
    // asNumber. 
    Send PSend15543 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_asNumber, 0);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend15544 = new_Send((Optr)int_10_Const, SMB_asFloat, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15545 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_size, 0);
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    // raisedTo:. 
    Send PSend15546 = new_Send((Optr)PSend15544, SMB_raisedTo_, 1, (Optr)PSend15545);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend15547 = new_Send((Optr)PSend15543, SMB__divide_, 1, (Optr)PSend15546);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend15548 = new_Send((Optr)PSend15542, SMB__plus_, 1, (Optr)PSend15547);
    Array PThreadedCode15541 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_send0, (Optr)PSend15542, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15543, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send0, (Optr)PSend15544, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15545, (Optr)&t_send1, (Optr)PSend15546, (Optr)&t_send1, (Optr)PSend15547, (Optr)&t_send1, (Optr)PSend15548, (Optr)&t_method_return);
    Method PMethod15540 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15541, 1, PSend15548);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15540, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_low() {
    Symbol SMB_low = new_Symbol(L"low");
    Array PThreadedCode15550 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_method_return);
    Method PMethod15549 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15550, 1, slot_Smalltalk_AST_Float_low);
    
    MethodClosure MC_SMB_low = new_MethodClosure((Method)PMethod15549, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low, MC_SMB_low);
}


static void init_SMB_low_() {
    Symbol SMB_low_ = new_Symbol(L"low:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15552 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15554 = new_Assign((Optr)slot_Smalltalk_AST_Float_low, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15553 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15554, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15551 = new_Method_with(PArray15552, empty_Array, empty_Array, PThreadedCode15553, 2, PAssign15554, self);
    
    MethodClosure MC_SMB_low_ = new_MethodClosure((Method)PMethod15551, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low_, MC_SMB_low_);
}


static void init_SMB_high() {
    Symbol SMB_high = new_Symbol(L"high");
    Array PThreadedCode15556 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_method_return);
    Method PMethod15555 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15556, 1, slot_Smalltalk_AST_Float_high);
    
    MethodClosure MC_SMB_high = new_MethodClosure((Method)PMethod15555, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_high, MC_SMB_high);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15558 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15561 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15563 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15567 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15566 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15567, (Optr)&t_block_return);
    Block PBlock15565 = new_Block_with(empty_Array, empty_Array, PThreadedCode15566, 1, PSend15567);
    // ifFalse:. 
    Send PSend15564 = new_Send((Optr)PSuper15563, SMB_ifFalse_, 1, (Optr)PBlock15565);
    Symbol SMB_low = new_Symbol(L"low");
    // low. 
    Send PSend15568 = new_Send((Optr)VAR_other_0_0, SMB_low, 0);
    // =. 
    Send PSend15569 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB__equals_, 1, (Optr)PSend15568);
    // escape:. 
    Send PSend15573 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15572 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15573, (Optr)&t_block_return);
    Block PBlock15571 = new_Block_with(empty_Array, empty_Array, PThreadedCode15572, 1, PSend15573);
    // ifFalse:. 
    Send PSend15570 = new_Send((Optr)PSend15569, SMB_ifFalse_, 1, (Optr)PBlock15571);
    Symbol SMB_high = new_Symbol(L"high");
    // high. 
    Send PSend15574 = new_Send((Optr)VAR_other_0_0, SMB_high, 0);
    // =. 
    Send PSend15575 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB__equals_, 1, (Optr)PSend15574);
    // escape:. 
    Send PSend15579 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15578 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15579, (Optr)&t_block_return);
    Block PBlock15577 = new_Block_with(empty_Array, empty_Array, PThreadedCode15578, 1, PSend15579);
    // ifFalse:. 
    Send PSend15576 = new_Send((Optr)PSend15575, SMB_ifFalse_, 1, (Optr)PBlock15577);
    Array PThreadedCode15562 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15563, (Optr)&t_send_ifFalse_, (Optr)PSend15564, (Optr)PBlock15565, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15568, (Optr)&t_send1, (Optr)PSend15569, (Optr)&t_send_ifFalse_, (Optr)PSend15570, (Optr)PBlock15571, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15574, (Optr)&t_send1, (Optr)PSend15575, (Optr)&t_send_ifFalse_, (Optr)PSend15576, (Optr)PBlock15577, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15560 = new_Block_with(PArray15561, empty_Array, PThreadedCode15562, 4, PSend15564, PSend15570, PSend15576, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15580 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15560);
    Array PThreadedCode15559 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15560, (Optr)&t_send1, (Optr)PSend15580, (Optr)&t_method_return);
    Method PMethod15557 = new_Method_with(PArray15558, empty_Array, empty_Array, PThreadedCode15559, 1, PSend15580);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15557, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_high_() {
    Symbol SMB_high_ = new_Symbol(L"high:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15582 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15584 = new_Assign((Optr)slot_Smalltalk_AST_Float_high, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15583 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15584, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15581 = new_Method_with(PArray15582, empty_Array, empty_Array, PThreadedCode15583, 2, PAssign15584, self);
    
    MethodClosure MC_SMB_high_ = new_MethodClosure((Method)PMethod15581, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_high_, MC_SMB_high_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15586 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    // visitFloat:. 
    Send PSend15588 = new_Send((Optr)VAR_visitor_0_0, SMB_visitFloat_, 1, (Optr)self);
    Array PThreadedCode15587 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15588, (Optr)&t_method_return);
    Method PMethod15585 = new_Method_with(PArray15586, empty_Array, empty_Array, PThreadedCode15587, 1, PSend15588);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15585, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15590 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printOn:. 
    Send PSend15592 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_2910 = new_Character(L'.');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2910_Const = new_Constant((Optr)char_2910);
    // <<. 
    Send PSend15593 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2910_Const);
    // printOn:. 
    Send PSend15594 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15591 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15592, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2910, (Optr)&t_send1, (Optr)PSend15593, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15594, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15589 = new_Method_with(PArray15590, empty_Array, empty_Array, PThreadedCode15591, 4, PSend15592, PSend15593, PSend15594, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15589, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_printOn_, MC_SMB_printOn_);
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
    init_SMB_high();
    init_SMB__equals_();
    init_SMB_high_();
    init_SMB_accept_();
    init_SMB_printOn_();
    
}