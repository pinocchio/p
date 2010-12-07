#include <lib/class/Smalltalk/AST/Symbol.h>


Optr layout_Smalltalk_AST_Symbol_Class_class;
Optr slot_Smalltalk_AST_Symbol_symbol;
Optr layout_Smalltalk_AST_Symbol;


static void init_SMB_symbol() {
    Symbol SMB_symbol = new_Symbol(L"symbol");
<<<<<<< HEAD
    Array PThreadedCode15510 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15509 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15510, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_symbol = new_MethodClosure((Method)PMethod15509, Smalltalk_AST_Symbol_Class);
=======
    Array PThreadedCode15476 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15475 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15476, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_symbol = new_MethodClosure((Method)PMethod15475, Smalltalk_AST_Symbol_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Symbol_Class, SMB_symbol, MC_SMB_symbol);
}


static void init_SMB_symbol_() {
    Symbol SMB_symbol_ = new_Symbol(L"symbol:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
<<<<<<< HEAD
    Array PArray15512 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend15515 = new_Send((Optr)VAR_aSymbol_0_0, SMB_asSymbol, 0);
    Assign PAssign15514 = new_Assign((Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)PSend15515);
    Array PThreadedCode15513 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign15514, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send0, (Optr)PSend15515, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15511 = new_Method_with(PArray15512, empty_Array, empty_Array, PThreadedCode15513, 2, PAssign15514, self);
    
    MethodClosure MC_SMB_symbol_ = new_MethodClosure((Method)PMethod15511, Smalltalk_AST_Symbol_Class);
=======
    Array PArray15478 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend15481 = new_Send((Optr)VAR_aSymbol_0_0, SMB_asSymbol, 0);
    Assign PAssign15480 = new_Assign((Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)PSend15481);
    Array PThreadedCode15479 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign15480, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send0, (Optr)PSend15481, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15477 = new_Method_with(PArray15478, empty_Array, empty_Array, PThreadedCode15479, 2, PAssign15480, self);
    
    MethodClosure MC_SMB_symbol_ = new_MethodClosure((Method)PMethod15477, Smalltalk_AST_Symbol_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Symbol_Class, SMB_symbol_, MC_SMB_symbol_);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
<<<<<<< HEAD
    Array PThreadedCode15517 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15516 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15517, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PMethod15516, Smalltalk_AST_Symbol_Class);
=======
    Array PThreadedCode15483 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15482 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15483, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PMethod15482, Smalltalk_AST_Symbol_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Symbol_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_selectorSymbol() {
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
<<<<<<< HEAD
    Array PThreadedCode15519 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15518 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15519, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_selectorSymbol = new_MethodClosure((Method)PMethod15518, Smalltalk_AST_Symbol_Class);
=======
    Array PThreadedCode15485 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15484 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15485, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_selectorSymbol = new_MethodClosure((Method)PMethod15484, Smalltalk_AST_Symbol_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Symbol_Class, SMB_selectorSymbol, MC_SMB_selectorSymbol);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
<<<<<<< HEAD
    Array PArray15521 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15524 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15526 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15530 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15529 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15530, (Optr)&t_block_return);
    Block PBlock15528 = new_Block_with(empty_Array, empty_Array, PThreadedCode15529, 1, PSend15530);
    // ifFalse:. 
    Send PSend15527 = new_Send((Optr)PSuper15526, SMB_ifFalse_, 1, (Optr)PBlock15528);
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend15531 = new_Send((Optr)VAR_other_0_0, SMB_symbol, 0);
    // =. 
    Send PSend15532 = new_Send((Optr)slot_Smalltalk_AST_Symbol_symbol, SMB__equals_, 1, (Optr)PSend15531);
    // escape:. 
    Send PSend15536 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15535 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15536, (Optr)&t_block_return);
    Block PBlock15534 = new_Block_with(empty_Array, empty_Array, PThreadedCode15535, 1, PSend15536);
    // ifFalse:. 
    Send PSend15533 = new_Send((Optr)PSend15532, SMB_ifFalse_, 1, (Optr)PBlock15534);
    Array PThreadedCode15525 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15526, (Optr)&t_send_ifFalse_, (Optr)PSend15527, (Optr)PBlock15528, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15531, (Optr)&t_send1, (Optr)PSend15532, (Optr)&t_send_ifFalse_, (Optr)PSend15533, (Optr)PBlock15534, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15523 = new_Block_with(PArray15524, empty_Array, PThreadedCode15525, 3, PSend15527, PSend15533, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15537 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15523);
    Array PThreadedCode15522 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15523, (Optr)&t_send1, (Optr)PSend15537, (Optr)&t_method_return);
    Method PMethod15520 = new_Method_with(PArray15521, empty_Array, empty_Array, PThreadedCode15522, 1, PSend15537);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15520, Smalltalk_AST_Symbol_Class);
=======
    Array PArray15487 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15490 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15492 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15496 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15495 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15496, (Optr)&t_block_return);
    Block PBlock15494 = new_Block_with(empty_Array, empty_Array, PThreadedCode15495, 1, PSend15496);
    // ifFalse:. 
    Send PSend15493 = new_Send((Optr)PSuper15492, SMB_ifFalse_, 1, (Optr)PBlock15494);
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend15497 = new_Send((Optr)VAR_other_0_0, SMB_symbol, 0);
    // =. 
    Send PSend15498 = new_Send((Optr)slot_Smalltalk_AST_Symbol_symbol, SMB__equals_, 1, (Optr)PSend15497);
    // escape:. 
    Send PSend15502 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15501 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15502, (Optr)&t_block_return);
    Block PBlock15500 = new_Block_with(empty_Array, empty_Array, PThreadedCode15501, 1, PSend15502);
    // ifFalse:. 
    Send PSend15499 = new_Send((Optr)PSend15498, SMB_ifFalse_, 1, (Optr)PBlock15500);
    Array PThreadedCode15491 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15492, (Optr)&t_send_ifFalse_, (Optr)PSend15493, (Optr)PBlock15494, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15497, (Optr)&t_send1, (Optr)PSend15498, (Optr)&t_send_ifFalse_, (Optr)PSend15499, (Optr)PBlock15500, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15489 = new_Block_with(PArray15490, empty_Array, PThreadedCode15491, 3, PSend15493, PSend15499, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15503 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15489);
    Array PThreadedCode15488 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15489, (Optr)&t_send1, (Optr)PSend15503, (Optr)&t_method_return);
    Method PMethod15486 = new_Method_with(PArray15487, empty_Array, empty_Array, PThreadedCode15488, 1, PSend15503);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15486, Smalltalk_AST_Symbol_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Symbol_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray15539 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSymbol_ = new_Symbol(L"visitSymbol:");
    // visitSymbol:. 
    Send PSend15541 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSymbol_, 1, (Optr)self);
    Array PThreadedCode15540 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15541, (Optr)&t_method_return);
    Method PMethod15538 = new_Method_with(PArray15539, empty_Array, empty_Array, PThreadedCode15540, 1, PSend15541);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15538, Smalltalk_AST_Symbol_Class);
=======
    Array PArray15505 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSymbol_ = new_Symbol(L"visitSymbol:");
    // visitSymbol:. 
    Send PSend15507 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSymbol_, 1, (Optr)self);
    Array PThreadedCode15506 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15507, (Optr)&t_method_return);
    Method PMethod15504 = new_Method_with(PArray15505, empty_Array, empty_Array, PThreadedCode15506, 1, PSend15507);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15504, Smalltalk_AST_Symbol_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Symbol_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
<<<<<<< HEAD
    Array PArray15543 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15545 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Symbol_symbol);
    Array PThreadedCode15544 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_send1, (Optr)PSend15545, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15542 = new_Method_with(PArray15543, empty_Array, empty_Array, PThreadedCode15544, 2, PSend15545, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15542, Smalltalk_AST_Symbol_Class);
=======
    Array PArray15509 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15511 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Symbol_symbol);
    Array PThreadedCode15510 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_send1, (Optr)PSend15511, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15508 = new_Method_with(PArray15509, empty_Array, empty_Array, PThreadedCode15510, 2, PSend15511, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15508, Smalltalk_AST_Symbol_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Symbol_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray15547 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15549 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_symbol_ = new_Symbol(L"symbol:");
    // symbol:. 
    Send PSend15550 = new_Send((Optr)PSend15549, SMB_symbol_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15548 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15549, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend15550, (Optr)&t_method_return);
    Method PMethod15546 = new_Method_with(PArray15547, empty_Array, empty_Array, PThreadedCode15548, 1, PSend15550);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod15546, HEADER(Smalltalk_AST_Symbol_Class));
=======
    Array PArray15513 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15515 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_symbol_ = new_Symbol(L"symbol:");
    // symbol:. 
    Send PSend15516 = new_Send((Optr)PSend15515, SMB_symbol_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15514 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15515, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend15516, (Optr)&t_method_return);
    Method PMethod15512 = new_Method_with(PArray15513, empty_Array, empty_Array, PThreadedCode15514, 1, PSend15516);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod15512, HEADER(Smalltalk_AST_Symbol_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Smalltalk_AST_Symbol_Class), SMB_named_, MC_SMB_named_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_symbol = new_Symbol(L"symbol");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_symbol_Const = new_Constant((Optr)SMB_symbol);
    // with:. 
<<<<<<< HEAD
    Send PSend15553 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_symbol_Const);
    Array PThreadedCode15552 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_symbol, (Optr)&t_send1, (Optr)PSend15553, (Optr)&t_method_return);
    Method PMethod15551 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15552, 1, PSend15553);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15551, HEADER(Smalltalk_AST_Symbol_Class));
=======
    Send PSend15519 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_symbol_Const);
    Array PThreadedCode15518 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_symbol, (Optr)&t_send1, (Optr)PSend15519, (Optr)&t_method_return);
    Method PMethod15517 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15518, 1, PSend15519);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15517, HEADER(Smalltalk_AST_Symbol_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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