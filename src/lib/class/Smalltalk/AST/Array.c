#include <lib/class/Smalltalk/AST/Array.h>


Optr layout_Smalltalk_AST_Array_Class_class;
Optr slot_Smalltalk_AST_Array_literals;
Optr layout_Smalltalk_AST_Array;


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_literals = new_Symbol(L"literals");
    // literals. 
<<<<<<< HEAD
    Send PSend15556 = new_Send((Optr)self, SMB_literals, 0);
    // isEmpty. 
    Send PSend15557 = new_Send((Optr)PSend15556, SMB_isEmpty, 0);
    Array PThreadedCode15555 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15556, (Optr)&t_send0, (Optr)PSend15557, (Optr)&t_method_return);
    Method PMethod15554 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15555, 1, PSend15557);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod15554, Smalltalk_AST_Array_Class);
=======
    Send PSend15522 = new_Send((Optr)self, SMB_literals, 0);
    // isEmpty. 
    Send PSend15523 = new_Send((Optr)PSend15522, SMB_isEmpty, 0);
    Array PThreadedCode15521 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15522, (Optr)&t_send0, (Optr)PSend15523, (Optr)&t_method_return);
    Method PMethod15520 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15521, 1, PSend15523);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod15520, Smalltalk_AST_Array_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Array_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
<<<<<<< HEAD
    Array PArray15559 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15562 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15564 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15568 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15567 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15568, (Optr)&t_block_return);
    Block PBlock15566 = new_Block_with(empty_Array, empty_Array, PThreadedCode15567, 1, PSend15568);
    // ifFalse:. 
    Send PSend15565 = new_Send((Optr)PSuper15564, SMB_ifFalse_, 1, (Optr)PBlock15566);
    Symbol SMB_literals = new_Symbol(L"literals");
    // literals. 
    Send PSend15569 = new_Send((Optr)self, SMB_literals, 0);
    // literals. 
    Send PSend15570 = new_Send((Optr)VAR_other_0_0, SMB_literals, 0);
    // =. 
    Send PSend15571 = new_Send((Optr)PSend15569, SMB__equals_, 1, (Optr)PSend15570);
    // escape:. 
    Send PSend15575 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15574 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15575, (Optr)&t_block_return);
    Block PBlock15573 = new_Block_with(empty_Array, empty_Array, PThreadedCode15574, 1, PSend15575);
    // ifFalse:. 
    Send PSend15572 = new_Send((Optr)PSend15571, SMB_ifFalse_, 1, (Optr)PBlock15573);
    Array PThreadedCode15563 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15564, (Optr)&t_send_ifFalse_, (Optr)PSend15565, (Optr)PBlock15566, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15569, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15570, (Optr)&t_send1, (Optr)PSend15571, (Optr)&t_send_ifFalse_, (Optr)PSend15572, (Optr)PBlock15573, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15561 = new_Block_with(PArray15562, empty_Array, PThreadedCode15563, 3, PSend15565, PSend15572, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15576 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15561);
    Array PThreadedCode15560 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15561, (Optr)&t_send1, (Optr)PSend15576, (Optr)&t_method_return);
    Method PMethod15558 = new_Method_with(PArray15559, empty_Array, empty_Array, PThreadedCode15560, 1, PSend15576);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15558, Smalltalk_AST_Array_Class);
=======
    Array PArray15525 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15528 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15530 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15534 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15533 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15534, (Optr)&t_block_return);
    Block PBlock15532 = new_Block_with(empty_Array, empty_Array, PThreadedCode15533, 1, PSend15534);
    // ifFalse:. 
    Send PSend15531 = new_Send((Optr)PSuper15530, SMB_ifFalse_, 1, (Optr)PBlock15532);
    Symbol SMB_literals = new_Symbol(L"literals");
    // literals. 
    Send PSend15535 = new_Send((Optr)self, SMB_literals, 0);
    // literals. 
    Send PSend15536 = new_Send((Optr)VAR_other_0_0, SMB_literals, 0);
    // =. 
    Send PSend15537 = new_Send((Optr)PSend15535, SMB__equals_, 1, (Optr)PSend15536);
    // escape:. 
    Send PSend15541 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15540 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15541, (Optr)&t_block_return);
    Block PBlock15539 = new_Block_with(empty_Array, empty_Array, PThreadedCode15540, 1, PSend15541);
    // ifFalse:. 
    Send PSend15538 = new_Send((Optr)PSend15537, SMB_ifFalse_, 1, (Optr)PBlock15539);
    Array PThreadedCode15529 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15530, (Optr)&t_send_ifFalse_, (Optr)PSend15531, (Optr)PBlock15532, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15535, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15536, (Optr)&t_send1, (Optr)PSend15537, (Optr)&t_send_ifFalse_, (Optr)PSend15538, (Optr)PBlock15539, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15527 = new_Block_with(PArray15528, empty_Array, PThreadedCode15529, 3, PSend15531, PSend15538, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15542 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15527);
    Array PThreadedCode15526 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15527, (Optr)&t_send1, (Optr)PSend15542, (Optr)&t_method_return);
    Method PMethod15524 = new_Method_with(PArray15525, empty_Array, empty_Array, PThreadedCode15526, 1, PSend15542);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15524, Smalltalk_AST_Array_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Array_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray15578 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    // visitArray:. 
    Send PSend15580 = new_Send((Optr)VAR_visitor_0_0, SMB_visitArray_, 1, (Optr)self);
    Array PThreadedCode15579 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15580, (Optr)&t_method_return);
    Method PMethod15577 = new_Method_with(PArray15578, empty_Array, empty_Array, PThreadedCode15579, 1, PSend15580);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15577, Smalltalk_AST_Array_Class);
=======
    Array PArray15544 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    // visitArray:. 
    Send PSend15546 = new_Send((Optr)VAR_visitor_0_0, SMB_visitArray_, 1, (Optr)self);
    Array PThreadedCode15545 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15546, (Optr)&t_method_return);
    Method PMethod15543 = new_Method_with(PArray15544, empty_Array, empty_Array, PThreadedCode15545, 1, PSend15546);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15543, Smalltalk_AST_Array_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Array_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_literals() {
    Symbol SMB_literals = new_Symbol(L"literals");
<<<<<<< HEAD
    Array PThreadedCode15582 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Array_literals, (Optr)&t_method_return);
    Method PMethod15581 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15582, 1, slot_Smalltalk_AST_Array_literals);
    
    MethodClosure MC_SMB_literals = new_MethodClosure((Method)PMethod15581, Smalltalk_AST_Array_Class);
=======
    Array PThreadedCode15548 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Array_literals, (Optr)&t_method_return);
    Method PMethod15547 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15548, 1, slot_Smalltalk_AST_Array_literals);
    
    MethodClosure MC_SMB_literals = new_MethodClosure((Method)PMethod15547, Smalltalk_AST_Array_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Array_Class, SMB_literals, MC_SMB_literals);
}


static void init_SMB_literals_() {
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
<<<<<<< HEAD
    Array PArray15584 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15586 = new_Assign((Optr)slot_Smalltalk_AST_Array_literals, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15585 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15586, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15583 = new_Method_with(PArray15584, empty_Array, empty_Array, PThreadedCode15585, 2, PAssign15586, self);
    
    MethodClosure MC_SMB_literals_ = new_MethodClosure((Method)PMethod15583, Smalltalk_AST_Array_Class);
=======
    Array PArray15550 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15552 = new_Assign((Optr)slot_Smalltalk_AST_Array_literals, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15551 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15552, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15549 = new_Method_with(PArray15550, empty_Array, empty_Array, PThreadedCode15551, 2, PAssign15552, self);
    
    MethodClosure MC_SMB_literals_ = new_MethodClosure((Method)PMethod15549, Smalltalk_AST_Array_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Array_Class, SMB_literals_, MC_SMB_literals_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_literals = new_Symbol(L"literals");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_literals_Const = new_Constant((Optr)SMB_literals);
    // with:. 
<<<<<<< HEAD
    Send PSend15589 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_literals_Const);
    Array PThreadedCode15588 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_literals, (Optr)&t_send1, (Optr)PSend15589, (Optr)&t_method_return);
    Method PMethod15587 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15588, 1, PSend15589);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15587, HEADER(Smalltalk_AST_Array_Class));
=======
    Send PSend15555 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_literals_Const);
    Array PThreadedCode15554 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_literals, (Optr)&t_send1, (Optr)PSend15555, (Optr)&t_method_return);
    Method PMethod15553 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15554, 1, PSend15555);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15553, HEADER(Smalltalk_AST_Array_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Smalltalk_AST_Array_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTArray_layout() {
    layout_Smalltalk_AST_Array_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Array = new_Symbol(L"Array");
    slot_Smalltalk_AST_Array_literals = (Optr)new_Slot(0, L"literals");
    layout_Smalltalk_AST_Array = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_Array)->values[0] = slot_Smalltalk_AST_Array_literals; // literals 
    Smalltalk_AST_Array_Class = (Class)new_Class(Smalltalk_AST_Literal_Class, layout_Smalltalk_AST_Array_Class_class);
    Smalltalk_AST_Array_Class->layout = layout_Smalltalk_AST_Array;
    Smalltalk_AST_Array_Class->name = SMB_Array;
    
}

void init_Smalltalk_AST_ASTArray_methods() {
    init_SMB_isEmpty();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_literals();
    init_SMB_literals_();
    init_class_SMB_astSelectors();
    
}