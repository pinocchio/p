#include <lib/class/Smalltalk/AST/Path.h>


Optr layout_Smalltalk_AST_Path_Class_class;
Optr slot_Smalltalk_AST_Path_path;
Optr layout_Smalltalk_AST_Path;


static void init_SMB_path_() {
    Symbol SMB_path_ = new_Symbol(L"path:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray15591 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15593 = new_Assign((Optr)slot_Smalltalk_AST_Path_path, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15592 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15593, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15590 = new_Method_with(PArray15591, empty_Array, empty_Array, PThreadedCode15592, 2, PAssign15593, self);
    
    MethodClosure MC_SMB_path_ = new_MethodClosure((Method)PMethod15590, Smalltalk_AST_Path_Class);
=======
    Array PArray15557 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15559 = new_Assign((Optr)slot_Smalltalk_AST_Path_path, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15558 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15559, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15556 = new_Method_with(PArray15557, empty_Array, empty_Array, PThreadedCode15558, 2, PAssign15559, self);
    
    MethodClosure MC_SMB_path_ = new_MethodClosure((Method)PMethod15556, Smalltalk_AST_Path_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Path_Class, SMB_path_, MC_SMB_path_);
}


static void init_SMB_path() {
    Symbol SMB_path = new_Symbol(L"path");
<<<<<<< HEAD
    Array PThreadedCode15595 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Path_path, (Optr)&t_method_return);
    Method PMethod15594 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15595, 1, slot_Smalltalk_AST_Path_path);
    
    MethodClosure MC_SMB_path = new_MethodClosure((Method)PMethod15594, Smalltalk_AST_Path_Class);
=======
    Array PThreadedCode15561 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Path_path, (Optr)&t_method_return);
    Method PMethod15560 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15561, 1, slot_Smalltalk_AST_Path_path);
    
    MethodClosure MC_SMB_path = new_MethodClosure((Method)PMethod15560, Smalltalk_AST_Path_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Path_Class, SMB_path, MC_SMB_path);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
<<<<<<< HEAD
    Array PArray15597 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15600 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15602 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15606 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15605 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15606, (Optr)&t_block_return);
    Block PBlock15604 = new_Block_with(empty_Array, empty_Array, PThreadedCode15605, 1, PSend15606);
    // ifFalse:. 
    Send PSend15603 = new_Send((Optr)PSuper15602, SMB_ifFalse_, 1, (Optr)PBlock15604);
    Symbol SMB_path = new_Symbol(L"path");
    // path. 
    Send PSend15607 = new_Send((Optr)VAR_other_0_0, SMB_path, 0);
    // =. 
    Send PSend15608 = new_Send((Optr)slot_Smalltalk_AST_Path_path, SMB__equals_, 1, (Optr)PSend15607);
    // escape:. 
    Send PSend15612 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15611 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15612, (Optr)&t_block_return);
    Block PBlock15610 = new_Block_with(empty_Array, empty_Array, PThreadedCode15611, 1, PSend15612);
    // ifFalse:. 
    Send PSend15609 = new_Send((Optr)PSend15608, SMB_ifFalse_, 1, (Optr)PBlock15610);
    Array PThreadedCode15601 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15602, (Optr)&t_send_ifFalse_, (Optr)PSend15603, (Optr)PBlock15604, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Path_path, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15607, (Optr)&t_send1, (Optr)PSend15608, (Optr)&t_send_ifFalse_, (Optr)PSend15609, (Optr)PBlock15610, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15599 = new_Block_with(PArray15600, empty_Array, PThreadedCode15601, 3, PSend15603, PSend15609, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15613 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15599);
    Array PThreadedCode15598 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15599, (Optr)&t_send1, (Optr)PSend15613, (Optr)&t_method_return);
    Method PMethod15596 = new_Method_with(PArray15597, empty_Array, empty_Array, PThreadedCode15598, 1, PSend15613);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15596, Smalltalk_AST_Path_Class);
=======
    Array PArray15563 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15566 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15568 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15572 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15571 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15572, (Optr)&t_block_return);
    Block PBlock15570 = new_Block_with(empty_Array, empty_Array, PThreadedCode15571, 1, PSend15572);
    // ifFalse:. 
    Send PSend15569 = new_Send((Optr)PSuper15568, SMB_ifFalse_, 1, (Optr)PBlock15570);
    Symbol SMB_path = new_Symbol(L"path");
    // path. 
    Send PSend15573 = new_Send((Optr)VAR_other_0_0, SMB_path, 0);
    // =. 
    Send PSend15574 = new_Send((Optr)slot_Smalltalk_AST_Path_path, SMB__equals_, 1, (Optr)PSend15573);
    // escape:. 
    Send PSend15578 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15577 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15578, (Optr)&t_block_return);
    Block PBlock15576 = new_Block_with(empty_Array, empty_Array, PThreadedCode15577, 1, PSend15578);
    // ifFalse:. 
    Send PSend15575 = new_Send((Optr)PSend15574, SMB_ifFalse_, 1, (Optr)PBlock15576);
    Array PThreadedCode15567 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15568, (Optr)&t_send_ifFalse_, (Optr)PSend15569, (Optr)PBlock15570, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Path_path, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15573, (Optr)&t_send1, (Optr)PSend15574, (Optr)&t_send_ifFalse_, (Optr)PSend15575, (Optr)PBlock15576, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15565 = new_Block_with(PArray15566, empty_Array, PThreadedCode15567, 3, PSend15569, PSend15575, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15579 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15565);
    Array PThreadedCode15564 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15565, (Optr)&t_send1, (Optr)PSend15579, (Optr)&t_method_return);
    Method PMethod15562 = new_Method_with(PArray15563, empty_Array, empty_Array, PThreadedCode15564, 1, PSend15579);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15562, Smalltalk_AST_Path_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Path_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray15615 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitPath_ = new_Symbol(L"visitPath:");
    // visitPath:. 
    Send PSend15617 = new_Send((Optr)VAR_visitor_0_0, SMB_visitPath_, 1, (Optr)self);
    Array PThreadedCode15616 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15617, (Optr)&t_method_return);
    Method PMethod15614 = new_Method_with(PArray15615, empty_Array, empty_Array, PThreadedCode15616, 1, PSend15617);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15614, Smalltalk_AST_Path_Class);
=======
    Array PArray15581 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitPath_ = new_Symbol(L"visitPath:");
    // visitPath:. 
    Send PSend15583 = new_Send((Optr)VAR_visitor_0_0, SMB_visitPath_, 1, (Optr)self);
    Array PThreadedCode15582 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15583, (Optr)&t_method_return);
    Method PMethod15580 = new_Method_with(PArray15581, empty_Array, empty_Array, PThreadedCode15582, 1, PSend15583);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15580, Smalltalk_AST_Path_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_Path_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Smalltalk_AST_ASTPath_layout() {
    layout_Smalltalk_AST_Path_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Path_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Path_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Path_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Path_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Path_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Path = new_Symbol(L"Path");
    slot_Smalltalk_AST_Path_path = (Optr)new_Slot(0, L"path");
    layout_Smalltalk_AST_Path = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_Path)->values[0] = slot_Smalltalk_AST_Path_path; // path 
    Smalltalk_AST_Path_Class = (Class)new_Class(Smalltalk_AST_Node_Class, layout_Smalltalk_AST_Path_Class_class);
    Smalltalk_AST_Path_Class->layout = layout_Smalltalk_AST_Path;
    Smalltalk_AST_Path_Class->name = SMB_Path;
    
}

void init_Smalltalk_AST_ASTPath_methods() {
    init_SMB_path_();
    init_SMB_path();
    init_SMB__equals_();
    init_SMB_accept_();
    
}