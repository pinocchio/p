#include <lib/class/Smalltalk/AST/Selector.h>


Optr layout_Smalltalk_AST_Selector_Class_class;
Optr slot_Smalltalk_AST_Selector_selector;
Optr layout_Smalltalk_AST_Selector;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode15330 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Selector_selector, (Optr)&t_method_return);
    Method PMethod15329 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15330, 1, slot_Smalltalk_AST_Selector_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod15329, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15332 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend15335 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign15334 = new_Assign((Optr)slot_Smalltalk_AST_Selector_selector, (Optr)PSend15335);
    Array PThreadedCode15333 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign15334, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend15335, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15331 = new_Method_with(PArray15332, empty_Array, empty_Array, PThreadedCode15333, 2, PAssign15334, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod15331, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15337 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15340 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15342 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15346 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15345 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15346, (Optr)&t_block_return);
    Block PBlock15344 = new_Block_with(empty_Array, empty_Array, PThreadedCode15345, 1, PSend15346);
    // ifFalse:. 
    Send PSend15343 = new_Send((Optr)PSuper15342, SMB_ifFalse_, 1, (Optr)PBlock15344);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend15347 = new_Send((Optr)VAR_other_0_0, SMB_selector, 0);
    // =. 
    Send PSend15348 = new_Send((Optr)slot_Smalltalk_AST_Selector_selector, SMB__equals_, 1, (Optr)PSend15347);
    Array PThreadedCode15341 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15342, (Optr)&t_send_ifFalse_, (Optr)PSend15343, (Optr)PBlock15344, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Selector_selector, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15347, (Optr)&t_send1, (Optr)PSend15348, (Optr)&t_method_return);
    Block PBlock15339 = new_Block_with(PArray15340, empty_Array, PThreadedCode15341, 2, PSend15343, PSend15348);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15349 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15339);
    Array PThreadedCode15338 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15339, (Optr)&t_send1, (Optr)PSend15349, (Optr)&t_method_return);
    Method PMethod15336 = new_Method_with(PArray15337, empty_Array, empty_Array, PThreadedCode15338, 1, PSend15349);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15336, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15352 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode15351 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend15352, (Optr)&t_method_return);
    Method PMethod15350 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15351, 1, PSend15352);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod15350, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray15354 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15356 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Selector_selector);
    Array PThreadedCode15355 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Selector_selector, (Optr)&t_send1, (Optr)PSend15356, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15353 = new_Method_with(PArray15354, empty_Array, empty_Array, PThreadedCode15355, 2, PSend15356, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15353, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_selector = new_Symbol(L"selector");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_selector_Const = new_Constant((Optr)SMB_selector);
    // with:. 
    Send PSend15359 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_selector_Const);
    Array PThreadedCode15358 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_selector, (Optr)&t_send1, (Optr)PSend15359, (Optr)&t_method_return);
    Method PMethod15357 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15358, 1, PSend15359);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15357, HEADER(Smalltalk_AST_Selector_Class));
    store_method(HEADER(Smalltalk_AST_Selector_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTSelector_layout() {
    layout_Smalltalk_AST_Selector_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Selector_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Selector_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Selector_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Selector_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Selector_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Selector = new_Symbol(L"Selector");
    slot_Smalltalk_AST_Selector_selector = (Optr)new_Slot(0, L"selector");
    layout_Smalltalk_AST_Selector = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_Selector)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    Smalltalk_AST_Selector_Class = (Class)new_Class(Smalltalk_AST_Node_Class, layout_Smalltalk_AST_Selector_Class_class);
    Smalltalk_AST_Selector_Class->layout = layout_Smalltalk_AST_Selector;
    Smalltalk_AST_Selector_Class->name = SMB_Selector;
    
}

void init_Smalltalk_AST_ASTSelector_methods() {
    init_SMB_selector();
    init_SMB_selector_();
    init_SMB__equals_();
    init_SMB_parameters();
    init_SMB_printOn_();
    init_class_SMB_astSelectors();
    
}