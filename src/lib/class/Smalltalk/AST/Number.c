#include <lib/class/Smalltalk/AST/Number.h>


Optr layout_Smalltalk_AST_Number_Class_class;
Optr slot_Smalltalk_AST_Number_number;
Optr slot_Smalltalk_AST_Number_base;
Optr layout_Smalltalk_AST_Number;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend15457 = new_Send((Optr)self, SMB_printString, 0);
    // asNumber. 
    Send PSend15458 = new_Send((Optr)PSend15457, SMB_asNumber, 0);
    Array PThreadedCode15456 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15457, (Optr)&t_send0, (Optr)PSend15458, (Optr)&t_method_return);
    Method PMethod15455 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15456, 1, PSend15458);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15455, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_number() {
    Symbol SMB_number = new_Symbol(L"number");
    Array PThreadedCode15460 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_method_return);
    Method PMethod15459 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15460, 1, slot_Smalltalk_AST_Number_number);
    
    MethodClosure MC_SMB_number = new_MethodClosure((Method)PMethod15459, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number, MC_SMB_number);
}


static void init_SMB_number_() {
    Symbol SMB_number_ = new_Symbol(L"number:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15462 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15464 = new_Assign((Optr)slot_Smalltalk_AST_Number_number, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15463 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15464, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15461 = new_Method_with(PArray15462, empty_Array, empty_Array, PThreadedCode15463, 2, PAssign15464, self);
    
    MethodClosure MC_SMB_number_ = new_MethodClosure((Method)PMethod15461, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number_, MC_SMB_number_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15466 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15469 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15471 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15475 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15474 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15475, (Optr)&t_block_return);
    Block PBlock15473 = new_Block_with(empty_Array, empty_Array, PThreadedCode15474, 1, PSend15475);
    // ifFalse:. 
    Send PSend15472 = new_Send((Optr)PSuper15471, SMB_ifFalse_, 1, (Optr)PBlock15473);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend15476 = new_Send((Optr)VAR_other_0_0, SMB_number, 0);
    // =. 
    Send PSend15477 = new_Send((Optr)slot_Smalltalk_AST_Number_number, SMB__equals_, 1, (Optr)PSend15476);
    // escape:. 
    Send PSend15481 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15480 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15481, (Optr)&t_block_return);
    Block PBlock15479 = new_Block_with(empty_Array, empty_Array, PThreadedCode15480, 1, PSend15481);
    // ifFalse:. 
    Send PSend15478 = new_Send((Optr)PSend15477, SMB_ifFalse_, 1, (Optr)PBlock15479);
    Symbol SMB_base = new_Symbol(L"base");
    // base. 
    Send PSend15482 = new_Send((Optr)VAR_other_0_0, SMB_base, 0);
    // =. 
    Send PSend15483 = new_Send((Optr)slot_Smalltalk_AST_Number_base, SMB__equals_, 1, (Optr)PSend15482);
    // escape:. 
    Send PSend15487 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15486 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15487, (Optr)&t_block_return);
    Block PBlock15485 = new_Block_with(empty_Array, empty_Array, PThreadedCode15486, 1, PSend15487);
    // ifFalse:. 
    Send PSend15484 = new_Send((Optr)PSend15483, SMB_ifFalse_, 1, (Optr)PBlock15485);
    Array PThreadedCode15470 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15471, (Optr)&t_send_ifFalse_, (Optr)PSend15472, (Optr)PBlock15473, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15476, (Optr)&t_send1, (Optr)PSend15477, (Optr)&t_send_ifFalse_, (Optr)PSend15478, (Optr)PBlock15479, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15482, (Optr)&t_send1, (Optr)PSend15483, (Optr)&t_send_ifFalse_, (Optr)PSend15484, (Optr)PBlock15485, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15468 = new_Block_with(PArray15469, empty_Array, PThreadedCode15470, 4, PSend15472, PSend15478, PSend15484, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15488 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15468);
    Array PThreadedCode15467 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15468, (Optr)&t_send1, (Optr)PSend15488, (Optr)&t_method_return);
    Method PMethod15465 = new_Method_with(PArray15466, empty_Array, empty_Array, PThreadedCode15467, 1, PSend15488);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15465, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_base() {
    Symbol SMB_base = new_Symbol(L"base");
    Array PThreadedCode15490 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_method_return);
    Method PMethod15489 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15490, 1, slot_Smalltalk_AST_Number_base);
    
    MethodClosure MC_SMB_base = new_MethodClosure((Method)PMethod15489, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_base, MC_SMB_base);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15492 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    // visitNumber:. 
    Send PSend15494 = new_Send((Optr)VAR_visitor_0_0, SMB_visitNumber_, 1, (Optr)self);
    Array PThreadedCode15493 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15494, (Optr)&t_method_return);
    Method PMethod15491 = new_Method_with(PArray15492, empty_Array, empty_Array, PThreadedCode15493, 1, PSend15494);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15491, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15496 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15498 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_base);
    String string_15499 = new_String(L"r");
    Constant string_15499_Const = new_Constant((Optr)string_15499);
    // <<. 
    Send PSend15500 = new_Send((Optr)PSend15498, SMB__shiftLeft_, 1, (Optr)string_15499_Const);
    // <<. 
    Send PSend15501 = new_Send((Optr)PSend15500, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_number);
    Array PThreadedCode15497 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_send1, (Optr)PSend15498, (Optr)&t_push1, (Optr)string_15499, (Optr)&t_send1, (Optr)PSend15500, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_send1, (Optr)PSend15501, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15495 = new_Method_with(PArray15496, empty_Array, empty_Array, PThreadedCode15497, 2, PSend15501, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15495, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15503 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15505 = new_Assign((Optr)slot_Smalltalk_AST_Number_base, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15504 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15505, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15502 = new_Method_with(PArray15503, empty_Array, empty_Array, PThreadedCode15504, 2, PAssign15505, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod15502, Smalltalk_AST_Number_Class);
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
    Send PSend15508 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_base_Const, (Optr)SMB_number_Const);
    Array PThreadedCode15507 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_base, (Optr)&t_push1, (Optr)SMB_number, (Optr)&t_send2, (Optr)PSend15508, (Optr)&t_method_return);
    Method PMethod15506 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15507, 1, PSend15508);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15506, HEADER(Smalltalk_AST_Number_Class));
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