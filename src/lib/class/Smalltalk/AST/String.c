#include <lib/class/Smalltalk/AST/String.h>


Optr layout_Smalltalk_AST_String_Class_class;
Optr slot_Smalltalk_AST_String_string;
Optr layout_Smalltalk_AST_String;


static void init_SMB_string_() {
    Symbol SMB_string_ = new_Symbol(L"string:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray15227 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign15229 = new_Assign((Optr)slot_Smalltalk_AST_String_string, (Optr)VAR_aString_0_0);
    Array PThreadedCode15228 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15229, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15226 = new_Method_with(PArray15227, empty_Array, empty_Array, PThreadedCode15228, 2, PAssign15229, self);
    
    MethodClosure MC_SMB_string_ = new_MethodClosure((Method)PMethod15226, Smalltalk_AST_String_Class);
    store_method(Smalltalk_AST_String_Class, SMB_string_, MC_SMB_string_);
}


static void init_SMB_string() {
    Symbol SMB_string = new_Symbol(L"string");
    Array PThreadedCode15231 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_String_string, (Optr)&t_method_return);
    Method PMethod15230 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15231, 1, slot_Smalltalk_AST_String_string);
    
    MethodClosure MC_SMB_string = new_MethodClosure((Method)PMethod15230, Smalltalk_AST_String_Class);
    store_method(Smalltalk_AST_String_Class, SMB_string, MC_SMB_string);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15233 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15236 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15238 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15242 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15241 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15242, (Optr)&t_block_return);
    Block PBlock15240 = new_Block_with(empty_Array, empty_Array, PThreadedCode15241, 1, PSend15242);
    // ifFalse:. 
    Send PSend15239 = new_Send((Optr)PSuper15238, SMB_ifFalse_, 1, (Optr)PBlock15240);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend15243 = new_Send((Optr)VAR_other_0_0, SMB_string, 0);
    // =. 
    Send PSend15244 = new_Send((Optr)slot_Smalltalk_AST_String_string, SMB__equals_, 1, (Optr)PSend15243);
    // escape:. 
    Send PSend15248 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15247 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15248, (Optr)&t_block_return);
    Block PBlock15246 = new_Block_with(empty_Array, empty_Array, PThreadedCode15247, 1, PSend15248);
    // ifFalse:. 
    Send PSend15245 = new_Send((Optr)PSend15244, SMB_ifFalse_, 1, (Optr)PBlock15246);
    Array PThreadedCode15237 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15238, (Optr)&t_send_ifFalse_, (Optr)PSend15239, (Optr)PBlock15240, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_String_string, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15243, (Optr)&t_send1, (Optr)PSend15244, (Optr)&t_send_ifFalse_, (Optr)PSend15245, (Optr)PBlock15246, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15235 = new_Block_with(PArray15236, empty_Array, PThreadedCode15237, 3, PSend15239, PSend15245, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15249 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15235);
    Array PThreadedCode15234 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15235, (Optr)&t_send1, (Optr)PSend15249, (Optr)&t_method_return);
    Method PMethod15232 = new_Method_with(PArray15233, empty_Array, empty_Array, PThreadedCode15234, 1, PSend15249);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15232, Smalltalk_AST_String_Class);
    store_method(Smalltalk_AST_String_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15251 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitString_ = new_Symbol(L"visitString:");
    // visitString:. 
    Send PSend15253 = new_Send((Optr)VAR_visitor_0_0, SMB_visitString_, 1, (Optr)self);
    Array PThreadedCode15252 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15253, (Optr)&t_method_return);
    Method PMethod15250 = new_Method_with(PArray15251, empty_Array, empty_Array, PThreadedCode15252, 1, PSend15253);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15250, Smalltalk_AST_String_Class);
    store_method(Smalltalk_AST_String_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend15256 = new_Send((Optr)self, SMB_string, 0);
    Array PThreadedCode15255 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15256, (Optr)&t_method_return);
    Method PMethod15254 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15255, 1, PSend15256);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod15254, Smalltalk_AST_String_Class);
    store_method(Smalltalk_AST_String_Class, SMB_asString, MC_SMB_asString);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_string = new_Symbol(L"string");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_string_Const = new_Constant((Optr)SMB_string);
    // with:. 
    Send PSend15259 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_string_Const);
    Array PThreadedCode15258 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_string, (Optr)&t_send1, (Optr)PSend15259, (Optr)&t_method_return);
    Method PMethod15257 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15258, 1, PSend15259);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15257, HEADER(Smalltalk_AST_String_Class));
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