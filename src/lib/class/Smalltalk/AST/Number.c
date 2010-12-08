#include <lib/class/Smalltalk/AST/Number.h>


Optr layout_Smalltalk_AST_Number_Class_class;
Optr slot_Smalltalk_AST_Number_number;
Optr slot_Smalltalk_AST_Number_base;
Optr layout_Smalltalk_AST_Number;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend15484 = new_Send((Optr)self, SMB_printString, 0);
    // asNumber. 
    Send PSend15485 = new_Send((Optr)PSend15484, SMB_asNumber, 0);
    Array PThreadedCode15483 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15484, (Optr)&t_send0, (Optr)PSend15485, (Optr)&t_method_return);
    Method PMethod15482 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15483, 1, PSend15485);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15482, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_number() {
    Symbol SMB_number = new_Symbol(L"number");
    Array PThreadedCode15487 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_method_return);
    Method PMethod15486 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15487, 1, slot_Smalltalk_AST_Number_number);
    
    MethodClosure MC_SMB_number = new_MethodClosure((Method)PMethod15486, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number, MC_SMB_number);
}


static void init_SMB_number_() {
    Symbol SMB_number_ = new_Symbol(L"number:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15489 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15491 = new_Assign((Optr)slot_Smalltalk_AST_Number_number, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15490 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15491, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15488 = new_Method_with(PArray15489, empty_Array, empty_Array, PThreadedCode15490, 2, PAssign15491, self);
    
    MethodClosure MC_SMB_number_ = new_MethodClosure((Method)PMethod15488, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number_, MC_SMB_number_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15493 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15496 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15498 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15502 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15501 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15502, (Optr)&t_block_return);
    Block PBlock15500 = new_Block_with(empty_Array, empty_Array, PThreadedCode15501, 1, PSend15502);
    // ifFalse:. 
    Send PSend15499 = new_Send((Optr)PSuper15498, SMB_ifFalse_, 1, (Optr)PBlock15500);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend15503 = new_Send((Optr)VAR_other_0_0, SMB_number, 0);
    // =. 
    Send PSend15504 = new_Send((Optr)slot_Smalltalk_AST_Number_number, SMB__equals_, 1, (Optr)PSend15503);
    // escape:. 
    Send PSend15508 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15507 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15508, (Optr)&t_block_return);
    Block PBlock15506 = new_Block_with(empty_Array, empty_Array, PThreadedCode15507, 1, PSend15508);
    // ifFalse:. 
    Send PSend15505 = new_Send((Optr)PSend15504, SMB_ifFalse_, 1, (Optr)PBlock15506);
    Symbol SMB_base = new_Symbol(L"base");
    // base. 
    Send PSend15509 = new_Send((Optr)VAR_other_0_0, SMB_base, 0);
    // =. 
    Send PSend15510 = new_Send((Optr)slot_Smalltalk_AST_Number_base, SMB__equals_, 1, (Optr)PSend15509);
    // escape:. 
    Send PSend15514 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15513 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15514, (Optr)&t_block_return);
    Block PBlock15512 = new_Block_with(empty_Array, empty_Array, PThreadedCode15513, 1, PSend15514);
    // ifFalse:. 
    Send PSend15511 = new_Send((Optr)PSend15510, SMB_ifFalse_, 1, (Optr)PBlock15512);
    Array PThreadedCode15497 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15498, (Optr)&t_send_ifFalse_, (Optr)PSend15499, (Optr)PBlock15500, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15503, (Optr)&t_send1, (Optr)PSend15504, (Optr)&t_send_ifFalse_, (Optr)PSend15505, (Optr)PBlock15506, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15509, (Optr)&t_send1, (Optr)PSend15510, (Optr)&t_send_ifFalse_, (Optr)PSend15511, (Optr)PBlock15512, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15495 = new_Block_with(PArray15496, empty_Array, PThreadedCode15497, 4, PSend15499, PSend15505, PSend15511, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15515 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15495);
    Array PThreadedCode15494 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15495, (Optr)&t_send1, (Optr)PSend15515, (Optr)&t_method_return);
    Method PMethod15492 = new_Method_with(PArray15493, empty_Array, empty_Array, PThreadedCode15494, 1, PSend15515);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15492, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_base() {
    Symbol SMB_base = new_Symbol(L"base");
    Array PThreadedCode15517 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_method_return);
    Method PMethod15516 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15517, 1, slot_Smalltalk_AST_Number_base);
    
    MethodClosure MC_SMB_base = new_MethodClosure((Method)PMethod15516, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_base, MC_SMB_base);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15519 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    // visitNumber:. 
    Send PSend15521 = new_Send((Optr)VAR_visitor_0_0, SMB_visitNumber_, 1, (Optr)self);
    Array PThreadedCode15520 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15521, (Optr)&t_method_return);
    Method PMethod15518 = new_Method_with(PArray15519, empty_Array, empty_Array, PThreadedCode15520, 1, PSend15521);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15518, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15523 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15525 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_base);
    String string_15526 = new_String(L"r");
    Constant string_15526_Const = new_Constant((Optr)string_15526);
    // <<. 
    Send PSend15527 = new_Send((Optr)PSend15525, SMB__shiftLeft_, 1, (Optr)string_15526_Const);
    // <<. 
    Send PSend15528 = new_Send((Optr)PSend15527, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_number);
    Array PThreadedCode15524 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_send1, (Optr)PSend15525, (Optr)&t_push1, (Optr)string_15526, (Optr)&t_send1, (Optr)PSend15527, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_send1, (Optr)PSend15528, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15522 = new_Method_with(PArray15523, empty_Array, empty_Array, PThreadedCode15524, 2, PSend15528, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15522, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15530 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15532 = new_Assign((Optr)slot_Smalltalk_AST_Number_base, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15531 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15532, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15529 = new_Method_with(PArray15530, empty_Array, empty_Array, PThreadedCode15531, 2, PAssign15532, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod15529, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_base_, MC_SMB_base_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_base = new_Symbol(L"base");
    Symbol  SMB_number = new_Symbol(L"number");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_base_Const = new_Constant((Optr)SMB_base);
    Constant SMB_number_Const = new_Constant((Optr)SMB_number);
    // with:with:. 
    Send PSend15535 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_base_Const, (Optr)SMB_number_Const);
    Array PThreadedCode15534 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_base, (Optr)&t_push1, (Optr)SMB_number, (Optr)&t_send2, (Optr)PSend15535, (Optr)&t_method_return);
    Method PMethod15533 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15534, 1, PSend15535);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15533, HEADER(Smalltalk_AST_Number_Class));
    store_method(HEADER(Smalltalk_AST_Number_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTNumber_layout() {
    layout_Smalltalk_AST_Number_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Number = new_Symbol(L"Number");
    slot_Smalltalk_AST_Number_number = (Optr)new_Slot(0, L"number");
    slot_Smalltalk_AST_Number_base = (Optr)new_Slot(1, L"base");
    layout_Smalltalk_AST_Number = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_Number)->values[0] = slot_Smalltalk_AST_Number_number; // number 
    ((Array)layout_Smalltalk_AST_Number)->values[1] = slot_Smalltalk_AST_Number_base; // base 
    Smalltalk_AST_Number_Class = (Class)new_Class(Smalltalk_AST_Literal_Class, layout_Smalltalk_AST_Number_Class_class);
    Smalltalk_AST_Number_Class->layout = layout_Smalltalk_AST_Number;
    Smalltalk_AST_Number_Class->name = SMB_Number;
    
}

void init_Smalltalk_AST_ASTNumber_methods() {
    init_SMB_asNumber();
    init_SMB_number();
    init_SMB_number_();
    init_SMB__equals_();
    init_SMB_base();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_base_();
    init_class_SMB_astSelectors();
    
}