#include <lib/class/Smalltalk/AST/String.h>


Optr layout_Smalltalk_AST_String_Class_class;
Optr slot_Smalltalk_AST_String_string;
Optr layout_Smalltalk_AST_String;


static void init_SMB_string_() {
    Symbol SMB_string_ = new_Symbol(L"string:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray15398 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign15400 = new_Assign((Optr)slot_Smalltalk_AST_String_string, (Optr)VAR_aString_0_0);
    Array PThreadedCode15399 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15400, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15397 = new_Method_with(PArray15398, empty_Array, empty_Array, PThreadedCode15399, 2, PAssign15400, self);
    
    MethodClosure MC_SMB_string_ = new_MethodClosure((Method)PMethod15397, Smalltalk_AST_String_Class);
    store_method(Smalltalk_AST_String_Class, SMB_string_, MC_SMB_string_);
}


static void init_SMB_string() {
    Symbol SMB_string = new_Symbol(L"string");
    Array PThreadedCode15402 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_String_string, (Optr)&t_method_return);
    Method PMethod15401 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15402, 1, slot_Smalltalk_AST_String_string);
    
    MethodClosure MC_SMB_string = new_MethodClosure((Method)PMethod15401, Smalltalk_AST_String_Class);
    store_method(Smalltalk_AST_String_Class, SMB_string, MC_SMB_string);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15404 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15407 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15409 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15413 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15412 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15413, (Optr)&t_block_return);
    Block PBlock15411 = new_Block_with(empty_Array, empty_Array, PThreadedCode15412, 1, PSend15413);
    // ifFalse:. 
    Send PSend15410 = new_Send((Optr)PSuper15409, SMB_ifFalse_, 1, (Optr)PBlock15411);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend15414 = new_Send((Optr)VAR_other_0_0, SMB_string, 0);
    // =. 
    Send PSend15415 = new_Send((Optr)slot_Smalltalk_AST_String_string, SMB__equals_, 1, (Optr)PSend15414);
    // escape:. 
    Send PSend15419 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15418 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15419, (Optr)&t_block_return);
    Block PBlock15417 = new_Block_with(empty_Array, empty_Array, PThreadedCode15418, 1, PSend15419);
    // ifFalse:. 
    Send PSend15416 = new_Send((Optr)PSend15415, SMB_ifFalse_, 1, (Optr)PBlock15417);
    Array PThreadedCode15408 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15409, (Optr)&t_send_ifFalse_, (Optr)PSend15410, (Optr)PBlock15411, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_String_string, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15414, (Optr)&t_send1, (Optr)PSend15415, (Optr)&t_send_ifFalse_, (Optr)PSend15416, (Optr)PBlock15417, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15406 = new_Block_with(PArray15407, empty_Array, PThreadedCode15408, 3, PSend15410, PSend15416, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15420 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15406);
    Array PThreadedCode15405 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15406, (Optr)&t_send1, (Optr)PSend15420, (Optr)&t_method_return);
    Method PMethod15403 = new_Method_with(PArray15404, empty_Array, empty_Array, PThreadedCode15405, 1, PSend15420);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15403, Smalltalk_AST_String_Class);
    store_method(Smalltalk_AST_String_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15422 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitString_ = new_Symbol(L"visitString:");
    // visitString:. 
    Send PSend15424 = new_Send((Optr)VAR_visitor_0_0, SMB_visitString_, 1, (Optr)self);
    Array PThreadedCode15423 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15424, (Optr)&t_method_return);
    Method PMethod15421 = new_Method_with(PArray15422, empty_Array, empty_Array, PThreadedCode15423, 1, PSend15424);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15421, Smalltalk_AST_String_Class);
    store_method(Smalltalk_AST_String_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend15427 = new_Send((Optr)self, SMB_string, 0);
    Array PThreadedCode15426 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15427, (Optr)&t_method_return);
    Method PMethod15425 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15426, 1, PSend15427);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod15425, Smalltalk_AST_String_Class);
    store_method(Smalltalk_AST_String_Class, SMB_asString, MC_SMB_asString);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_string = new_Symbol(L"string");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_string_Const = new_Constant((Optr)SMB_string);
    // with:. 
    Send PSend15430 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_string_Const);
    Array PThreadedCode15429 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_string, (Optr)&t_send1, (Optr)PSend15430, (Optr)&t_method_return);
    Method PMethod15428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15429, 1, PSend15430);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15428, HEADER(Smalltalk_AST_String_Class));
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