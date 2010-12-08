#include <lib/class/Smalltalk/AST/Array.h>


Optr layout_Smalltalk_AST_Array_Class_class;
Optr slot_Smalltalk_AST_Array_literals;
Optr layout_Smalltalk_AST_Array;


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_literals = new_Symbol(L"literals");
    // literals. 
    Send PSend15583 = new_Send((Optr)self, SMB_literals, 0);
    // isEmpty. 
    Send PSend15584 = new_Send((Optr)PSend15583, SMB_isEmpty, 0);
    Array PThreadedCode15582 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15583, (Optr)&t_send0, (Optr)PSend15584, (Optr)&t_method_return);
    Method PMethod15581 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15582, 1, PSend15584);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod15581, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_isEmpty, MC_SMB_isEmpty);
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
    Symbol SMB_literals = new_Symbol(L"literals");
    // literals. 
    Send PSend15596 = new_Send((Optr)self, SMB_literals, 0);
    // literals. 
    Send PSend15597 = new_Send((Optr)VAR_other_0_0, SMB_literals, 0);
    // =. 
    Send PSend15598 = new_Send((Optr)PSend15596, SMB__equals_, 1, (Optr)PSend15597);
    // escape:. 
    Send PSend15602 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15601 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15602, (Optr)&t_block_return);
    Block PBlock15600 = new_Block_with(empty_Array, empty_Array, PThreadedCode15601, 1, PSend15602);
    // ifFalse:. 
    Send PSend15599 = new_Send((Optr)PSend15598, SMB_ifFalse_, 1, (Optr)PBlock15600);
    Array PThreadedCode15590 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15591, (Optr)&t_send_ifFalse_, (Optr)PSend15592, (Optr)PBlock15593, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15596, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15597, (Optr)&t_send1, (Optr)PSend15598, (Optr)&t_send_ifFalse_, (Optr)PSend15599, (Optr)PBlock15600, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15588 = new_Block_with(PArray15589, empty_Array, PThreadedCode15590, 3, PSend15592, PSend15599, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15603 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15588);
    Array PThreadedCode15587 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15588, (Optr)&t_send1, (Optr)PSend15603, (Optr)&t_method_return);
    Method PMethod15585 = new_Method_with(PArray15586, empty_Array, empty_Array, PThreadedCode15587, 1, PSend15603);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15585, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15605 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    // visitArray:. 
    Send PSend15607 = new_Send((Optr)VAR_visitor_0_0, SMB_visitArray_, 1, (Optr)self);
    Array PThreadedCode15606 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15607, (Optr)&t_method_return);
    Method PMethod15604 = new_Method_with(PArray15605, empty_Array, empty_Array, PThreadedCode15606, 1, PSend15607);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15604, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_literals() {
    Symbol SMB_literals = new_Symbol(L"literals");
    Array PThreadedCode15609 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Array_literals, (Optr)&t_method_return);
    Method PMethod15608 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15609, 1, slot_Smalltalk_AST_Array_literals);
    
    MethodClosure MC_SMB_literals = new_MethodClosure((Method)PMethod15608, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_literals, MC_SMB_literals);
}


static void init_SMB_literals_() {
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray15611 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15613 = new_Assign((Optr)slot_Smalltalk_AST_Array_literals, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15612 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15613, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15610 = new_Method_with(PArray15611, empty_Array, empty_Array, PThreadedCode15612, 2, PAssign15613, self);
    
    MethodClosure MC_SMB_literals_ = new_MethodClosure((Method)PMethod15610, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_literals_, MC_SMB_literals_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_literals = new_Symbol(L"literals");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_literals_Const = new_Constant((Optr)SMB_literals);
    // with:. 
    Send PSend15616 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_literals_Const);
    Array PThreadedCode15615 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_literals, (Optr)&t_send1, (Optr)PSend15616, (Optr)&t_method_return);
    Method PMethod15614 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15615, 1, PSend15616);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15614, HEADER(Smalltalk_AST_Array_Class));
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