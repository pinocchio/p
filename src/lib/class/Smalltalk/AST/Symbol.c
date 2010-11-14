#include <lib/class/Smalltalk/AST/Symbol.h>


Optr layout_Smalltalk_AST_Symbol_Class_class;
Optr slot_Smalltalk_AST_Symbol_symbol;
Optr layout_Smalltalk_AST_Symbol;


static void init_SMB_symbol() {
    Symbol SMB_symbol = new_Symbol(L"symbol");
    Array PThreadedCode15478 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15477 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15478, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_symbol = new_MethodClosure((Method)PMethod15477, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_symbol, MC_SMB_symbol);
}


static void init_SMB_symbol_() {
    Symbol SMB_symbol_ = new_Symbol(L"symbol:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray15480 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend15483 = new_Send((Optr)VAR_aSymbol_0_0, SMB_asSymbol, 0);
    Assign PAssign15482 = new_Assign((Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)PSend15483);
    Array PThreadedCode15481 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign15482, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send0, (Optr)PSend15483, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15479 = new_Method_with(PArray15480, empty_Array, empty_Array, PThreadedCode15481, 2, PAssign15482, self);
    
    MethodClosure MC_SMB_symbol_ = new_MethodClosure((Method)PMethod15479, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_symbol_, MC_SMB_symbol_);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Array PThreadedCode15485 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15484 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15485, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PMethod15484, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_selectorSymbol() {
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    Array PThreadedCode15487 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15486 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15487, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_selectorSymbol = new_MethodClosure((Method)PMethod15486, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_selectorSymbol, MC_SMB_selectorSymbol);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15489 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15492 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15494 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15498 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15497 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15498, (Optr)&t_block_return);
    Block PBlock15496 = new_Block_with(empty_Array, empty_Array, PThreadedCode15497, 1, PSend15498);
    // ifFalse:. 
    Send PSend15495 = new_Send((Optr)PSuper15494, SMB_ifFalse_, 1, (Optr)PBlock15496);
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend15499 = new_Send((Optr)VAR_other_0_0, SMB_symbol, 0);
    // =. 
    Send PSend15500 = new_Send((Optr)slot_Smalltalk_AST_Symbol_symbol, SMB__equals_, 1, (Optr)PSend15499);
    // escape:. 
    Send PSend15504 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15503 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15504, (Optr)&t_block_return);
    Block PBlock15502 = new_Block_with(empty_Array, empty_Array, PThreadedCode15503, 1, PSend15504);
    // ifFalse:. 
    Send PSend15501 = new_Send((Optr)PSend15500, SMB_ifFalse_, 1, (Optr)PBlock15502);
    Array PThreadedCode15493 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15494, (Optr)&t_send_ifFalse_, (Optr)PSend15495, (Optr)PBlock15496, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15499, (Optr)&t_send1, (Optr)PSend15500, (Optr)&t_send_ifFalse_, (Optr)PSend15501, (Optr)PBlock15502, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15491 = new_Block_with(PArray15492, empty_Array, PThreadedCode15493, 3, PSend15495, PSend15501, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15505 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15491);
    Array PThreadedCode15490 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15491, (Optr)&t_send1, (Optr)PSend15505, (Optr)&t_method_return);
    Method PMethod15488 = new_Method_with(PArray15489, empty_Array, empty_Array, PThreadedCode15490, 1, PSend15505);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15488, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15507 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSymbol_ = new_Symbol(L"visitSymbol:");
    // visitSymbol:. 
    Send PSend15509 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSymbol_, 1, (Optr)self);
    Array PThreadedCode15508 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15509, (Optr)&t_method_return);
    Method PMethod15506 = new_Method_with(PArray15507, empty_Array, empty_Array, PThreadedCode15508, 1, PSend15509);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15506, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray15511 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15513 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Symbol_symbol);
    Array PThreadedCode15512 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_send1, (Optr)PSend15513, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15510 = new_Method_with(PArray15511, empty_Array, empty_Array, PThreadedCode15512, 2, PSend15513, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15510, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15515 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15517 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_symbol_ = new_Symbol(L"symbol:");
    // symbol:. 
    Send PSend15518 = new_Send((Optr)PSend15517, SMB_symbol_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15516 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15517, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend15518, (Optr)&t_method_return);
    Method PMethod15514 = new_Method_with(PArray15515, empty_Array, empty_Array, PThreadedCode15516, 1, PSend15518);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod15514, HEADER(Smalltalk_AST_Symbol_Class));
    store_method(HEADER(Smalltalk_AST_Symbol_Class), SMB_named_, MC_SMB_named_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_symbol = new_Symbol(L"symbol");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_symbol_Const = new_Constant((Optr)SMB_symbol);
    // with:. 
    Send PSend15521 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_symbol_Const);
    Array PThreadedCode15520 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_symbol, (Optr)&t_send1, (Optr)PSend15521, (Optr)&t_method_return);
    Method PMethod15519 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15520, 1, PSend15521);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15519, HEADER(Smalltalk_AST_Symbol_Class));
    store_method(HEADER(Smalltalk_AST_Symbol_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTSymbol_layout() {
    layout_Smalltalk_AST_Symbol_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Symbol_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Symbol_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Symbol_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Symbol_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Symbol_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Symbol = new_Symbol(L"Symbol");
    slot_Smalltalk_AST_Symbol_symbol = (Optr)new_Slot(0, L"symbol");
    layout_Smalltalk_AST_Symbol = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_Symbol)->values[0] = slot_Smalltalk_AST_Symbol_symbol; // symbol 
    Smalltalk_AST_Symbol_Class = (Class)new_Class(Smalltalk_AST_Literal_Class, layout_Smalltalk_AST_Symbol_Class_class);
    Smalltalk_AST_Symbol_Class->layout = layout_Smalltalk_AST_Symbol;
    Smalltalk_AST_Symbol_Class->name = SMB_Symbol;
    
}

void init_Smalltalk_AST_ASTSymbol_methods() {
    init_SMB_symbol();
    init_SMB_symbol_();
    init_SMB_asSymbol();
    init_SMB_selectorSymbol();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_class_SMB_named_();
    init_class_SMB_astSelectors();
    
}