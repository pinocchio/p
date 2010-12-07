#include <lib/class/Smalltalk/AST/String.h>


Optr layout_Smalltalk_AST_String_Class_class;
Optr slot_Smalltalk_AST_String_string;
Optr layout_Smalltalk_AST_String;


static void init_SMB_string_() {
    Symbol SMB_string_ = new_Symbol(L"string:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray15619 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign15621 = new_Assign((Optr)slot_Smalltalk_AST_String_string, (Optr)VAR_aString_0_0);
    Array PThreadedCode15620 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15621, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15618 = new_Method_with(PArray15619, empty_Array, empty_Array, PThreadedCode15620, 2, PAssign15621, self);
    
    MethodClosure MC_SMB_string_ = new_MethodClosure((Method)PMethod15618, Smalltalk_AST_String_Class);
=======
    Array PArray15585 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign15587 = new_Assign((Optr)slot_Smalltalk_AST_String_string, (Optr)VAR_aString_0_0);
    Array PThreadedCode15586 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15587, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15584 = new_Method_with(PArray15585, empty_Array, empty_Array, PThreadedCode15586, 2, PAssign15587, self);
    
    MethodClosure MC_SMB_string_ = new_MethodClosure((Method)PMethod15584, Smalltalk_AST_String_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_String_Class, SMB_string_, MC_SMB_string_);
}


static void init_SMB_string() {
    Symbol SMB_string = new_Symbol(L"string");
<<<<<<< HEAD
    Array PThreadedCode15623 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_String_string, (Optr)&t_method_return);
    Method PMethod15622 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15623, 1, slot_Smalltalk_AST_String_string);
    
    MethodClosure MC_SMB_string = new_MethodClosure((Method)PMethod15622, Smalltalk_AST_String_Class);
=======
    Array PThreadedCode15589 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_String_string, (Optr)&t_method_return);
    Method PMethod15588 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15589, 1, slot_Smalltalk_AST_String_string);
    
    MethodClosure MC_SMB_string = new_MethodClosure((Method)PMethod15588, Smalltalk_AST_String_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_String_Class, SMB_string, MC_SMB_string);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
<<<<<<< HEAD
    Array PArray15625 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15628 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15630 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15634 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15633 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15634, (Optr)&t_block_return);
    Block PBlock15632 = new_Block_with(empty_Array, empty_Array, PThreadedCode15633, 1, PSend15634);
    // ifFalse:. 
    Send PSend15631 = new_Send((Optr)PSuper15630, SMB_ifFalse_, 1, (Optr)PBlock15632);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend15635 = new_Send((Optr)VAR_other_0_0, SMB_string, 0);
    // =. 
    Send PSend15636 = new_Send((Optr)slot_Smalltalk_AST_String_string, SMB__equals_, 1, (Optr)PSend15635);
    // escape:. 
    Send PSend15640 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15639 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15640, (Optr)&t_block_return);
    Block PBlock15638 = new_Block_with(empty_Array, empty_Array, PThreadedCode15639, 1, PSend15640);
    // ifFalse:. 
    Send PSend15637 = new_Send((Optr)PSend15636, SMB_ifFalse_, 1, (Optr)PBlock15638);
    Array PThreadedCode15629 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15630, (Optr)&t_send_ifFalse_, (Optr)PSend15631, (Optr)PBlock15632, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_String_string, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15635, (Optr)&t_send1, (Optr)PSend15636, (Optr)&t_send_ifFalse_, (Optr)PSend15637, (Optr)PBlock15638, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15627 = new_Block_with(PArray15628, empty_Array, PThreadedCode15629, 3, PSend15631, PSend15637, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15641 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15627);
    Array PThreadedCode15626 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15627, (Optr)&t_send1, (Optr)PSend15641, (Optr)&t_method_return);
    Method PMethod15624 = new_Method_with(PArray15625, empty_Array, empty_Array, PThreadedCode15626, 1, PSend15641);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15624, Smalltalk_AST_String_Class);
=======
    Array PArray15591 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15594 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15596 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15600 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15599 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15600, (Optr)&t_block_return);
    Block PBlock15598 = new_Block_with(empty_Array, empty_Array, PThreadedCode15599, 1, PSend15600);
    // ifFalse:. 
    Send PSend15597 = new_Send((Optr)PSuper15596, SMB_ifFalse_, 1, (Optr)PBlock15598);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend15601 = new_Send((Optr)VAR_other_0_0, SMB_string, 0);
    // =. 
    Send PSend15602 = new_Send((Optr)slot_Smalltalk_AST_String_string, SMB__equals_, 1, (Optr)PSend15601);
    // escape:. 
    Send PSend15606 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15605 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15606, (Optr)&t_block_return);
    Block PBlock15604 = new_Block_with(empty_Array, empty_Array, PThreadedCode15605, 1, PSend15606);
    // ifFalse:. 
    Send PSend15603 = new_Send((Optr)PSend15602, SMB_ifFalse_, 1, (Optr)PBlock15604);
    Array PThreadedCode15595 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15596, (Optr)&t_send_ifFalse_, (Optr)PSend15597, (Optr)PBlock15598, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_String_string, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15601, (Optr)&t_send1, (Optr)PSend15602, (Optr)&t_send_ifFalse_, (Optr)PSend15603, (Optr)PBlock15604, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15593 = new_Block_with(PArray15594, empty_Array, PThreadedCode15595, 3, PSend15597, PSend15603, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15607 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15593);
    Array PThreadedCode15592 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15593, (Optr)&t_send1, (Optr)PSend15607, (Optr)&t_method_return);
    Method PMethod15590 = new_Method_with(PArray15591, empty_Array, empty_Array, PThreadedCode15592, 1, PSend15607);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15590, Smalltalk_AST_String_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_String_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray15643 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitString_ = new_Symbol(L"visitString:");
    // visitString:. 
    Send PSend15645 = new_Send((Optr)VAR_visitor_0_0, SMB_visitString_, 1, (Optr)self);
    Array PThreadedCode15644 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15645, (Optr)&t_method_return);
    Method PMethod15642 = new_Method_with(PArray15643, empty_Array, empty_Array, PThreadedCode15644, 1, PSend15645);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15642, Smalltalk_AST_String_Class);
=======
    Array PArray15609 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitString_ = new_Symbol(L"visitString:");
    // visitString:. 
    Send PSend15611 = new_Send((Optr)VAR_visitor_0_0, SMB_visitString_, 1, (Optr)self);
    Array PThreadedCode15610 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15611, (Optr)&t_method_return);
    Method PMethod15608 = new_Method_with(PArray15609, empty_Array, empty_Array, PThreadedCode15610, 1, PSend15611);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15608, Smalltalk_AST_String_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_String_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
<<<<<<< HEAD
    Send PSend15648 = new_Send((Optr)self, SMB_string, 0);
    Array PThreadedCode15647 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15648, (Optr)&t_method_return);
    Method PMethod15646 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15647, 1, PSend15648);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod15646, Smalltalk_AST_String_Class);
=======
    Send PSend15614 = new_Send((Optr)self, SMB_string, 0);
    Array PThreadedCode15613 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15614, (Optr)&t_method_return);
    Method PMethod15612 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15613, 1, PSend15614);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod15612, Smalltalk_AST_String_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_String_Class, SMB_asString, MC_SMB_asString);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_string = new_Symbol(L"string");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_string_Const = new_Constant((Optr)SMB_string);
    // with:. 
<<<<<<< HEAD
    Send PSend15651 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_string_Const);
    Array PThreadedCode15650 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_string, (Optr)&t_send1, (Optr)PSend15651, (Optr)&t_method_return);
    Method PMethod15649 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15650, 1, PSend15651);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15649, HEADER(Smalltalk_AST_String_Class));
=======
    Send PSend15617 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_string_Const);
    Array PThreadedCode15616 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_string, (Optr)&t_send1, (Optr)PSend15617, (Optr)&t_method_return);
    Method PMethod15615 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15616, 1, PSend15617);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15615, HEADER(Smalltalk_AST_String_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Smalltalk_AST_String_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTString_layout() {
    layout_Smalltalk_AST_String_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_String_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_String_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_String_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_String_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_String_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_String = new_Symbol(L"String");
    slot_Smalltalk_AST_String_string = (Optr)new_Slot(0, L"string");
    layout_Smalltalk_AST_String = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_String)->values[0] = slot_Smalltalk_AST_String_string; // string 
    Smalltalk_AST_String_Class = (Class)new_Class(Smalltalk_AST_Literal_Class, layout_Smalltalk_AST_String_Class_class);
    Smalltalk_AST_String_Class->layout = layout_Smalltalk_AST_String;
    Smalltalk_AST_String_Class->name = SMB_String;
    
}

void init_Smalltalk_AST_ASTString_methods() {
    init_SMB_string_();
    init_SMB_string();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_asString();
    init_class_SMB_astSelectors();
    
}