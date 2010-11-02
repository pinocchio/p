#include <lib/class/Smalltalk/AST/Selector.h>


Optr layout_Smalltalk_AST_Selector_Class_class;
Optr slot_Smalltalk_AST_Selector_selector;
Optr layout_Smalltalk_AST_Selector;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode14911 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Selector_selector, (Optr)&t_method_return);
    Method PMethod14910 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14911, 1, slot_Smalltalk_AST_Selector_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod14910, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14913 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14916 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign14915 = new_Assign((Optr)slot_Smalltalk_AST_Selector_selector, (Optr)PSend14916);
    Array PThreadedCode14914 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign14915, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend14916, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14912 = new_Method_with(PArray14913, empty_Array, empty_Array, PThreadedCode14914, 2, PAssign14915, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod14912, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray14918 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14921 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper14923 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14927 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14926 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14927, (Optr)&t_block_return);
    Block PBlock14925 = new_Block_with(empty_Array, empty_Array, PThreadedCode14926, 1, PSend14927);
    // ifFalse:. 
    Send PSend14924 = new_Send((Optr)PSuper14923, SMB_ifFalse_, 1, (Optr)PBlock14925);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend14928 = new_Send((Optr)VAR_other_0_0, SMB_selector, 0);
    // =. 
    Send PSend14929 = new_Send((Optr)slot_Smalltalk_AST_Selector_selector, SMB__equals_, 1, (Optr)PSend14928);
    Array PThreadedCode14922 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper14923, (Optr)&t_send_ifFalse_, (Optr)PSend14924, (Optr)PBlock14925, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Selector_selector, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14928, (Optr)&t_send1, (Optr)PSend14929, (Optr)&t_method_return);
    Block PBlock14920 = new_Block_with(PArray14921, empty_Array, PThreadedCode14922, 2, PSend14924, PSend14929);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14930 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14920);
    Array PThreadedCode14919 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14920, (Optr)&t_send1, (Optr)PSend14930, (Optr)&t_method_return);
    Method PMethod14917 = new_Method_with(PArray14918, empty_Array, empty_Array, PThreadedCode14919, 1, PSend14930);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14917, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14933 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14932 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14933, (Optr)&t_method_return);
    Method PMethod14931 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14932, 1, PSend14933);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod14931, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray14935 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend14937 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Selector_selector);
    Array PThreadedCode14936 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Selector_selector, (Optr)&t_send1, (Optr)PSend14937, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14934 = new_Method_with(PArray14935, empty_Array, empty_Array, PThreadedCode14936, 2, PSend14937, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod14934, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_selector = new_Symbol(L"selector");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_selector_Const = new_Constant((Optr)SMB_selector);
    // with:. 
    Send PSend14940 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_selector_Const);
    Array PThreadedCode14939 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_selector, (Optr)&t_send1, (Optr)PSend14940, (Optr)&t_method_return);
    Method PMethod14938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14939, 1, PSend14940);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod14938, HEADER(Smalltalk_AST_Selector_Class));
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