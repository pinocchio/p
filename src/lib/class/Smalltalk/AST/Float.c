#include <lib/class/Smalltalk/AST/Float.h>


Optr layout_Smalltalk_AST_Float_Class_class;
Optr slot_Smalltalk_AST_Float_high;
Optr slot_Smalltalk_AST_Float_low;
Optr layout_Smalltalk_AST_Float;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend15572 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_asNumber, 0);
    // asNumber. 
    Send PSend15573 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_asNumber, 0);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend15574 = new_Send((Optr)int_10_Const, SMB_asFloat, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15575 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_size, 0);
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    // raisedTo:. 
    Send PSend15576 = new_Send((Optr)PSend15574, SMB_raisedTo_, 1, (Optr)PSend15575);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend15577 = new_Send((Optr)PSend15573, SMB__divide_, 1, (Optr)PSend15576);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend15578 = new_Send((Optr)PSend15572, SMB__plus_, 1, (Optr)PSend15577);
    Array PThreadedCode15571 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_send0, (Optr)PSend15572, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15573, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send0, (Optr)PSend15574, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15575, (Optr)&t_send1, (Optr)PSend15576, (Optr)&t_send1, (Optr)PSend15577, (Optr)&t_send1, (Optr)PSend15578, (Optr)&t_method_return);
    Method PMethod15570 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15571, 1, PSend15578);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15570, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_low() {
    Symbol SMB_low = new_Symbol(L"low");
    Array PThreadedCode15580 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_method_return);
    Method PMethod15579 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15580, 1, slot_Smalltalk_AST_Float_low);
    
    MethodClosure MC_SMB_low = new_MethodClosure((Method)PMethod15579, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low, MC_SMB_low);
}


static void init_SMB_low_() {
    Symbol SMB_low_ = new_Symbol(L"low:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15582 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15584 = new_Assign((Optr)slot_Smalltalk_AST_Float_low, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15583 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15584, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15581 = new_Method_with(PArray15582, empty_Array, empty_Array, PThreadedCode15583, 2, PAssign15584, self);
    
    MethodClosure MC_SMB_low_ = new_MethodClosure((Method)PMethod15581, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low_, MC_SMB_low_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15586 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15589 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15591 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15595 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15594 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15595, (Optr)&t_block_return);
    Block PBlock15593 = new_Block_with(empty_Array, empty_Array, PThreadedCode15594, 1, PSend15595);
    // ifFalse:. 
    Send PSend15592 = new_Send((Optr)PSuper15591, SMB_ifFalse_, 1, (Optr)PBlock15593);
    Symbol SMB_low = new_Symbol(L"low");
    // low. 
    Send PSend15596 = new_Send((Optr)VAR_other_0_0, SMB_low, 0);
    // =. 
    Send PSend15597 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB__equals_, 1, (Optr)PSend15596);
    // escape:. 
    Send PSend15601 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15600 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15601, (Optr)&t_block_return);
    Block PBlock15599 = new_Block_with(empty_Array, empty_Array, PThreadedCode15600, 1, PSend15601);
    // ifFalse:. 
    Send PSend15598 = new_Send((Optr)PSend15597, SMB_ifFalse_, 1, (Optr)PBlock15599);
    Symbol SMB_high = new_Symbol(L"high");
    // high. 
    Send PSend15602 = new_Send((Optr)VAR_other_0_0, SMB_high, 0);
    // =. 
    Send PSend15603 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB__equals_, 1, (Optr)PSend15602);
    // escape:. 
    Send PSend15607 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15606 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15607, (Optr)&t_block_return);
    Block PBlock15605 = new_Block_with(empty_Array, empty_Array, PThreadedCode15606, 1, PSend15607);
    // ifFalse:. 
    Send PSend15604 = new_Send((Optr)PSend15603, SMB_ifFalse_, 1, (Optr)PBlock15605);
    Array PThreadedCode15590 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15591, (Optr)&t_send_ifFalse_, (Optr)PSend15592, (Optr)PBlock15593, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15596, (Optr)&t_send1, (Optr)PSend15597, (Optr)&t_send_ifFalse_, (Optr)PSend15598, (Optr)PBlock15599, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15602, (Optr)&t_send1, (Optr)PSend15603, (Optr)&t_send_ifFalse_, (Optr)PSend15604, (Optr)PBlock15605, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15588 = new_Block_with(PArray15589, empty_Array, PThreadedCode15590, 4, PSend15592, PSend15598, PSend15604, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15608 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15588);
    Array PThreadedCode15587 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15588, (Optr)&t_send1, (Optr)PSend15608, (Optr)&t_method_return);
    Method PMethod15585 = new_Method_with(PArray15586, empty_Array, empty_Array, PThreadedCode15587, 1, PSend15608);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15585, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15610 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    // visitFloat:. 
    Send PSend15612 = new_Send((Optr)VAR_visitor_0_0, SMB_visitFloat_, 1, (Optr)self);
    Array PThreadedCode15611 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15612, (Optr)&t_method_return);
    Method PMethod15609 = new_Method_with(PArray15610, empty_Array, empty_Array, PThreadedCode15611, 1, PSend15612);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15609, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15614 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printOn:. 
    Send PSend15616 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_2898 = new_Character(L'.');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2898_Const = new_Constant((Optr)char_2898);
    // <<. 
    Send PSend15617 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2898_Const);
    // printOn:. 
    Send PSend15618 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15615 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15616, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2898, (Optr)&t_send1, (Optr)PSend15617, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15618, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15613 = new_Method_with(PArray15614, empty_Array, empty_Array, PThreadedCode15615, 4, PSend15616, PSend15617, PSend15618, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15613, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_high_() {
    Symbol SMB_high_ = new_Symbol(L"high:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15620 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15622 = new_Assign((Optr)slot_Smalltalk_AST_Float_high, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15621 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15622, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15619 = new_Method_with(PArray15620, empty_Array, empty_Array, PThreadedCode15621, 2, PAssign15622, self);
    
    MethodClosure MC_SMB_high_ = new_MethodClosure((Method)PMethod15619, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_high_, MC_SMB_high_);
}


static void init_SMB_high() {
    Symbol SMB_high = new_Symbol(L"high");
    Array PThreadedCode15624 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_method_return);
    Method PMethod15623 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15624, 1, slot_Smalltalk_AST_Float_high);
    
    MethodClosure MC_SMB_high = new_MethodClosure((Method)PMethod15623, Smalltalk_AST_Float_Class);
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