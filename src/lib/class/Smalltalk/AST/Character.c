#include <lib/class/Smalltalk/AST/Character.h>


Optr layout_Smalltalk_AST_Character_Class_class;
Optr slot_Smalltalk_AST_Character_char;
Optr layout_Smalltalk_AST_Character;


static void init_SMB_char() {
    Symbol SMB_char = new_Symbol(L"char");
    Array PThreadedCode15507 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Character_char, (Optr)&t_method_return);
    Method PMethod15506 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15507, 1, slot_Smalltalk_AST_Character_char);
    
    MethodClosure MC_SMB_char = new_MethodClosure((Method)PMethod15506, Smalltalk_AST_Character_Class);
    store_method(Smalltalk_AST_Character_Class, SMB_char, MC_SMB_char);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15509 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15512 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15514 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15518 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15517 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15518, (Optr)&t_block_return);
    Block PBlock15516 = new_Block_with(empty_Array, empty_Array, PThreadedCode15517, 1, PSend15518);
    // ifFalse:. 
    Send PSend15515 = new_Send((Optr)PSuper15514, SMB_ifFalse_, 1, (Optr)PBlock15516);
    Symbol SMB_char = new_Symbol(L"char");
    // char. 
    Send PSend15519 = new_Send((Optr)VAR_other_0_0, SMB_char, 0);
    // =. 
    Send PSend15520 = new_Send((Optr)slot_Smalltalk_AST_Character_char, SMB__equals_, 1, (Optr)PSend15519);
    // escape:. 
    Send PSend15524 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15523 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15524, (Optr)&t_block_return);
    Block PBlock15522 = new_Block_with(empty_Array, empty_Array, PThreadedCode15523, 1, PSend15524);
    // ifFalse:. 
    Send PSend15521 = new_Send((Optr)PSend15520, SMB_ifFalse_, 1, (Optr)PBlock15522);
    Array PThreadedCode15513 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15514, (Optr)&t_send_ifFalse_, (Optr)PSend15515, (Optr)PBlock15516, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Character_char, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15519, (Optr)&t_send1, (Optr)PSend15520, (Optr)&t_send_ifFalse_, (Optr)PSend15521, (Optr)PBlock15522, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15511 = new_Block_with(PArray15512, empty_Array, PThreadedCode15513, 3, PSend15515, PSend15521, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15525 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15511);
    Array PThreadedCode15510 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15511, (Optr)&t_send1, (Optr)PSend15525, (Optr)&t_method_return);
    Method PMethod15508 = new_Method_with(PArray15509, empty_Array, empty_Array, PThreadedCode15510, 1, PSend15525);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15508, Smalltalk_AST_Character_Class);
    store_method(Smalltalk_AST_Character_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15527 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitCharacter_ = new_Symbol(L"visitCharacter:");
    // visitCharacter:. 
    Send PSend15529 = new_Send((Optr)VAR_visitor_0_0, SMB_visitCharacter_, 1, (Optr)self);
    Array PThreadedCode15528 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15529, (Optr)&t_method_return);
    Method PMethod15526 = new_Method_with(PArray15527, empty_Array, empty_Array, PThreadedCode15528, 1, PSend15529);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15526, Smalltalk_AST_Character_Class);
    store_method(Smalltalk_AST_Character_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_char_() {
    Symbol SMB_char_ = new_Symbol(L"char:");
    Variable VAR_aChar_0_0 = new_Variable_named(L"aChar", 0);
    Array PArray15531 = new_Array_with(1, (Optr)VAR_aChar_0_0);
    Assign PAssign15533 = new_Assign((Optr)slot_Smalltalk_AST_Character_char, (Optr)VAR_aChar_0_0);
    Array PThreadedCode15532 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15533, (Optr)&t_push_variable, (Optr)VAR_aChar_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15530 = new_Method_with(PArray15531, empty_Array, empty_Array, PThreadedCode15532, 2, PAssign15533, self);
    
    MethodClosure MC_SMB_char_ = new_MethodClosure((Method)PMethod15530, Smalltalk_AST_Character_Class);
    store_method(Smalltalk_AST_Character_Class, SMB_char_, MC_SMB_char_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_char = new_Symbol(L"char");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_char_Const = new_Constant((Optr)SMB_char);
    // with:. 
    Send PSend15536 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_char_Const);
    Array PThreadedCode15535 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_char, (Optr)&t_send1, (Optr)PSend15536, (Optr)&t_method_return);
    Method PMethod15534 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15535, 1, PSend15536);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15534, HEADER(Smalltalk_AST_Character_Class));
    store_method(HEADER(Smalltalk_AST_Character_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTCharacter_layout() {
    layout_Smalltalk_AST_Character_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Character_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Character_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Character_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Character_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Character_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Character = new_Symbol(L"Character");
    slot_Smalltalk_AST_Character_char = (Optr)new_Slot(0, L"char");
    layout_Smalltalk_AST_Character = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_Character)->values[0] = slot_Smalltalk_AST_Character_char; // char 
    Smalltalk_AST_Character_Class = (Class)new_Class(Smalltalk_AST_Literal_Class, layout_Smalltalk_AST_Character_Class_class);
    Smalltalk_AST_Character_Class->layout = layout_Smalltalk_AST_Character;
    Smalltalk_AST_Character_Class->name = SMB_Character;
    
}

void init_Smalltalk_AST_ASTCharacter_methods() {
    init_SMB_char();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_char_();
    init_class_SMB_astSelectors();
    
}