#include <lib/class/Smalltalk/AST/KeywordMessageDefinition.h>


Optr layout_Smalltalk_AST_KeywordMessageDefinition_Class_class;
Optr slot_Smalltalk_AST_KeywordMessageDefinition_parameters;
Optr layout_Smalltalk_AST_KeywordMessageDefinition;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray15989 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15991 = new_Assign((Optr)slot_Smalltalk_AST_KeywordMessageDefinition_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15990 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15991, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15988 = new_Method_with(PArray15989, empty_Array, empty_Array, PThreadedCode15990, 2, PAssign15991, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod15988, Smalltalk_AST_KeywordMessageDefinition_Class);
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15993 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15996 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15998 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16002 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16001 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16002, (Optr)&t_block_return);
    Block PBlock16000 = new_Block_with(empty_Array, empty_Array, PThreadedCode16001, 1, PSend16002);
    // ifFalse:. 
    Send PSend15999 = new_Send((Optr)PSuper15998, SMB_ifFalse_, 1, (Optr)PBlock16000);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend16003 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend16004 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend16005 = new_Send((Optr)PSend16003, SMB__equals_, 1, (Optr)PSend16004);
    // escape:. 
    Send PSend16009 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16008 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16009, (Optr)&t_block_return);
    Block PBlock16007 = new_Block_with(empty_Array, empty_Array, PThreadedCode16008, 1, PSend16009);
    // ifFalse:. 
    Send PSend16006 = new_Send((Optr)PSend16005, SMB_ifFalse_, 1, (Optr)PBlock16007);
    Array PThreadedCode15997 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15998, (Optr)&t_send_ifFalse_, (Optr)PSend15999, (Optr)PBlock16000, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16003, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16004, (Optr)&t_send1, (Optr)PSend16005, (Optr)&t_send_ifFalse_, (Optr)PSend16006, (Optr)PBlock16007, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15995 = new_Block_with(PArray15996, empty_Array, PThreadedCode15997, 3, PSend15999, PSend16006, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16010 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15995);
    Array PThreadedCode15994 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15995, (Optr)&t_send1, (Optr)PSend16010, (Optr)&t_method_return);
    Method PMethod15992 = new_Method_with(PArray15993, empty_Array, empty_Array, PThreadedCode15994, 1, PSend16010);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15992, Smalltalk_AST_KeywordMessageDefinition_Class);
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Array PThreadedCode16012 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_KeywordMessageDefinition_parameters, (Optr)&t_method_return);
    Method PMethod16011 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16012, 1, slot_Smalltalk_AST_KeywordMessageDefinition_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod16011, Smalltalk_AST_KeywordMessageDefinition_Class);
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray16014 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitKeywordMessageDefinition_ = new_Symbol(L"visitKeywordMessageDefinition:");
    // visitKeywordMessageDefinition:. 
    Send PSend16016 = new_Send((Optr)VAR_visitor_0_0, SMB_visitKeywordMessageDefinition_, 1, (Optr)self);
    Array PThreadedCode16015 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16016, (Optr)&t_method_return);
    Method PMethod16013 = new_Method_with(PArray16014, empty_Array, empty_Array, PThreadedCode16015, 1, PSend16016);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod16013, Smalltalk_AST_KeywordMessageDefinition_Class);
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