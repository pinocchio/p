#include <lib/class/Smalltalk/AST/KeywordMessageDefinition.h>


Optr layout_Smalltalk_AST_KeywordMessageDefinition_Class_class;
Optr slot_Smalltalk_AST_KeywordMessageDefinition_parameters;
Optr layout_Smalltalk_AST_KeywordMessageDefinition;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
<<<<<<< HEAD
    Array PArray16021 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign16023 = new_Assign((Optr)slot_Smalltalk_AST_KeywordMessageDefinition_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode16022 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16023, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16020 = new_Method_with(PArray16021, empty_Array, empty_Array, PThreadedCode16022, 2, PAssign16023, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod16020, Smalltalk_AST_KeywordMessageDefinition_Class);
=======
    Array PArray15987 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15989 = new_Assign((Optr)slot_Smalltalk_AST_KeywordMessageDefinition_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15988 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15989, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15986 = new_Method_with(PArray15987, empty_Array, empty_Array, PThreadedCode15988, 2, PAssign15989, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod15986, Smalltalk_AST_KeywordMessageDefinition_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
<<<<<<< HEAD
    Array PArray16025 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16028 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper16030 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16034 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16033 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16034, (Optr)&t_block_return);
    Block PBlock16032 = new_Block_with(empty_Array, empty_Array, PThreadedCode16033, 1, PSend16034);
    // ifFalse:. 
    Send PSend16031 = new_Send((Optr)PSuper16030, SMB_ifFalse_, 1, (Optr)PBlock16032);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend16035 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend16036 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend16037 = new_Send((Optr)PSend16035, SMB__equals_, 1, (Optr)PSend16036);
    // escape:. 
    Send PSend16041 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16040 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16041, (Optr)&t_block_return);
    Block PBlock16039 = new_Block_with(empty_Array, empty_Array, PThreadedCode16040, 1, PSend16041);
    // ifFalse:. 
    Send PSend16038 = new_Send((Optr)PSend16037, SMB_ifFalse_, 1, (Optr)PBlock16039);
    Array PThreadedCode16029 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper16030, (Optr)&t_send_ifFalse_, (Optr)PSend16031, (Optr)PBlock16032, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16035, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16036, (Optr)&t_send1, (Optr)PSend16037, (Optr)&t_send_ifFalse_, (Optr)PSend16038, (Optr)PBlock16039, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock16027 = new_Block_with(PArray16028, empty_Array, PThreadedCode16029, 3, PSend16031, PSend16038, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16042 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16027);
    Array PThreadedCode16026 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16027, (Optr)&t_send1, (Optr)PSend16042, (Optr)&t_method_return);
    Method PMethod16024 = new_Method_with(PArray16025, empty_Array, empty_Array, PThreadedCode16026, 1, PSend16042);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod16024, Smalltalk_AST_KeywordMessageDefinition_Class);
=======
    Array PArray15991 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15994 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15996 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16000 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15999 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16000, (Optr)&t_block_return);
    Block PBlock15998 = new_Block_with(empty_Array, empty_Array, PThreadedCode15999, 1, PSend16000);
    // ifFalse:. 
    Send PSend15997 = new_Send((Optr)PSuper15996, SMB_ifFalse_, 1, (Optr)PBlock15998);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend16001 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend16002 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend16003 = new_Send((Optr)PSend16001, SMB__equals_, 1, (Optr)PSend16002);
    // escape:. 
    Send PSend16007 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16006 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16007, (Optr)&t_block_return);
    Block PBlock16005 = new_Block_with(empty_Array, empty_Array, PThreadedCode16006, 1, PSend16007);
    // ifFalse:. 
    Send PSend16004 = new_Send((Optr)PSend16003, SMB_ifFalse_, 1, (Optr)PBlock16005);
    Array PThreadedCode15995 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15996, (Optr)&t_send_ifFalse_, (Optr)PSend15997, (Optr)PBlock15998, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16001, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16002, (Optr)&t_send1, (Optr)PSend16003, (Optr)&t_send_ifFalse_, (Optr)PSend16004, (Optr)PBlock16005, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15993 = new_Block_with(PArray15994, empty_Array, PThreadedCode15995, 3, PSend15997, PSend16004, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16008 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15993);
    Array PThreadedCode15992 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15993, (Optr)&t_send1, (Optr)PSend16008, (Optr)&t_method_return);
    Method PMethod15990 = new_Method_with(PArray15991, empty_Array, empty_Array, PThreadedCode15992, 1, PSend16008);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15990, Smalltalk_AST_KeywordMessageDefinition_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
<<<<<<< HEAD
    Array PThreadedCode16044 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_KeywordMessageDefinition_parameters, (Optr)&t_method_return);
    Method PMethod16043 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16044, 1, slot_Smalltalk_AST_KeywordMessageDefinition_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod16043, Smalltalk_AST_KeywordMessageDefinition_Class);
=======
    Array PThreadedCode16010 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_KeywordMessageDefinition_parameters, (Optr)&t_method_return);
    Method PMethod16009 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16010, 1, slot_Smalltalk_AST_KeywordMessageDefinition_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod16009, Smalltalk_AST_KeywordMessageDefinition_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray16046 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitKeywordMessageDefinition_ = new_Symbol(L"visitKeywordMessageDefinition:");
    // visitKeywordMessageDefinition:. 
    Send PSend16048 = new_Send((Optr)VAR_visitor_0_0, SMB_visitKeywordMessageDefinition_, 1, (Optr)self);
    Array PThreadedCode16047 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16048, (Optr)&t_method_return);
    Method PMethod16045 = new_Method_with(PArray16046, empty_Array, empty_Array, PThreadedCode16047, 1, PSend16048);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod16045, Smalltalk_AST_KeywordMessageDefinition_Class);
=======
    Array PArray16012 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitKeywordMessageDefinition_ = new_Symbol(L"visitKeywordMessageDefinition:");
    // visitKeywordMessageDefinition:. 
    Send PSend16014 = new_Send((Optr)VAR_visitor_0_0, SMB_visitKeywordMessageDefinition_, 1, (Optr)self);
    Array PThreadedCode16013 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16014, (Optr)&t_method_return);
    Method PMethod16011 = new_Method_with(PArray16012, empty_Array, empty_Array, PThreadedCode16013, 1, PSend16014);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod16011, Smalltalk_AST_KeywordMessageDefinition_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Smalltalk_AST_ASTKeywordMessageDefinition_layout() {
    layout_Smalltalk_AST_KeywordMessageDefinition_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_KeywordMessageDefinition = new_Symbol(L"KeywordMessageDefinition");
    slot_Smalltalk_AST_KeywordMessageDefinition_parameters = (Optr)new_Slot(1, L"parameters");
    layout_Smalltalk_AST_KeywordMessageDefinition = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition)->values[1] = slot_Smalltalk_AST_KeywordMessageDefinition_parameters; // parameters 
    Smalltalk_AST_KeywordMessageDefinition_Class = (Class)new_Class(Smalltalk_AST_KeywordSelector_Class, layout_Smalltalk_AST_KeywordMessageDefinition_Class_class);
    Smalltalk_AST_KeywordMessageDefinition_Class->layout = layout_Smalltalk_AST_KeywordMessageDefinition;
    Smalltalk_AST_KeywordMessageDefinition_Class->name = SMB_KeywordMessageDefinition;
    
}

void init_Smalltalk_AST_ASTKeywordMessageDefinition_methods() {
    init_SMB_parameters_();
    init_SMB__equals_();
    init_SMB_parameters();
    init_SMB_accept_();
    
}