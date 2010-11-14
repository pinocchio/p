#include <lib/class/Smalltalk/AST/KeywordSelector.h>


Optr layout_Smalltalk_AST_KeywordSelector_Class_class;
Optr layout_Smalltalk_AST_KeywordSelector;


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15302 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitKeywordSelector_ = new_Symbol(L"visitKeywordSelector:");
    // visitKeywordSelector:. 
    Send PSend15304 = new_Send((Optr)VAR_visitor_0_0, SMB_visitKeywordSelector_, 1, (Optr)self);
    Array PThreadedCode15303 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15304, (Optr)&t_method_return);
    Method PMethod15301 = new_Method_with(PArray15302, empty_Array, empty_Array, PThreadedCode15303, 1, PSend15304);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15301, Smalltalk_AST_KeywordSelector_Class);
    store_method(Smalltalk_AST_KeywordSelector_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_keywords_() {
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15306 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_newFromAll_ = new_Symbol(L"newFromAll:");
    // newFromAll:. 
    Send PSend15310 = new_Send((Optr)String_classReference, SMB_newFromAll_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend15309 = new_Send((Optr)PSend15310, SMB_asSymbol, 0);
    Assign PAssign15308 = new_Assign((Optr)slot_Smalltalk_AST_Selector_selector, (Optr)PSend15309);
    Array PThreadedCode15307 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign15308, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend15310, (Optr)&t_send0, (Optr)PSend15309, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15305 = new_Method_with(PArray15306, empty_Array, empty_Array, PThreadedCode15307, 2, PAssign15308, self);
    
    MethodClosure MC_SMB_keywords_ = new_MethodClosure((Method)PMethod15305, Smalltalk_AST_KeywordSelector_Class);
    store_method(Smalltalk_AST_KeywordSelector_Class, SMB_keywords_, MC_SMB_keywords_);
}

void init_Smalltalk_AST_ASTKeywordSelector_layout() {
    layout_Smalltalk_AST_KeywordSelector_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_KeywordSelector_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_KeywordSelector_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_KeywordSelector_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_KeywordSelector_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_KeywordSelector_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_KeywordSelector = new_Symbol(L"KeywordSelector");
    layout_Smalltalk_AST_KeywordSelector = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_KeywordSelector)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    Smalltalk_AST_KeywordSelector_Class = (Class)new_Class(Smalltalk_AST_Selector_Class, layout_Smalltalk_AST_KeywordSelector_Class_class);
    Smalltalk_AST_KeywordSelector_Class->layout = layout_Smalltalk_AST_KeywordSelector;
    Smalltalk_AST_KeywordSelector_Class->name = SMB_KeywordSelector;
    
}

void init_Smalltalk_AST_ASTKeywordSelector_methods() {
    init_SMB_accept_();
    init_SMB_keywords_();
    
}