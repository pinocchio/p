#include <lib/class/Smalltalk/AST/Number.h>


Optr layout_Smalltalk_AST_Number_Class_class;
Optr slot_Smalltalk_AST_Number_number;
Optr slot_Smalltalk_AST_Number_base;
Optr layout_Smalltalk_AST_Number;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend15236 = new_Send((Optr)self, SMB_printString, 0);
    // asNumber. 
    Send PSend15237 = new_Send((Optr)PSend15236, SMB_asNumber, 0);
    Array PThreadedCode15235 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15236, (Optr)&t_send0, (Optr)PSend15237, (Optr)&t_method_return);
    Method PMethod15234 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15235, 1, PSend15237);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15234, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_number() {
    Symbol SMB_number = new_Symbol(L"number");
    Array PThreadedCode15239 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_method_return);
    Method PMethod15238 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15239, 1, slot_Smalltalk_AST_Number_number);
    
    MethodClosure MC_SMB_number = new_MethodClosure((Method)PMethod15238, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number, MC_SMB_number);
}


static void init_SMB_number_() {
    Symbol SMB_number_ = new_Symbol(L"number:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15241 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15243 = new_Assign((Optr)slot_Smalltalk_AST_Number_number, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15242 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15243, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15240 = new_Method_with(PArray15241, empty_Array, empty_Array, PThreadedCode15242, 2, PAssign15243, self);
    
    MethodClosure MC_SMB_number_ = new_MethodClosure((Method)PMethod15240, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number_, MC_SMB_number_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15245 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15248 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15250 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15254 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15253 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15254, (Optr)&t_block_return);
    Block PBlock15252 = new_Block_with(empty_Array, empty_Array, PThreadedCode15253, 1, PSend15254);
    // ifFalse:. 
    Send PSend15251 = new_Send((Optr)PSuper15250, SMB_ifFalse_, 1, (Optr)PBlock15252);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend15255 = new_Send((Optr)VAR_other_0_0, SMB_number, 0);
    // =. 
    Send PSend15256 = new_Send((Optr)slot_Smalltalk_AST_Number_number, SMB__equals_, 1, (Optr)PSend15255);
    // escape:. 
    Send PSend15260 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15259 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15260, (Optr)&t_block_return);
    Block PBlock15258 = new_Block_with(empty_Array, empty_Array, PThreadedCode15259, 1, PSend15260);
    // ifFalse:. 
    Send PSend15257 = new_Send((Optr)PSend15256, SMB_ifFalse_, 1, (Optr)PBlock15258);
    Symbol SMB_base = new_Symbol(L"base");
    // base. 
    Send PSend15261 = new_Send((Optr)VAR_other_0_0, SMB_base, 0);
    // =. 
    Send PSend15262 = new_Send((Optr)slot_Smalltalk_AST_Number_base, SMB__equals_, 1, (Optr)PSend15261);
    // escape:. 
    Send PSend15266 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15265 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15266, (Optr)&t_block_return);
    Block PBlock15264 = new_Block_with(empty_Array, empty_Array, PThreadedCode15265, 1, PSend15266);
    // ifFalse:. 
    Send PSend15263 = new_Send((Optr)PSend15262, SMB_ifFalse_, 1, (Optr)PBlock15264);
    Array PThreadedCode15249 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15250, (Optr)&t_send_ifFalse_, (Optr)PSend15251, (Optr)PBlock15252, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15255, (Optr)&t_send1, (Optr)PSend15256, (Optr)&t_send_ifFalse_, (Optr)PSend15257, (Optr)PBlock15258, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15261, (Optr)&t_send1, (Optr)PSend15262, (Optr)&t_send_ifFalse_, (Optr)PSend15263, (Optr)PBlock15264, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15247 = new_Block_with(PArray15248, empty_Array, PThreadedCode15249, 4, PSend15251, PSend15257, PSend15263, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15267 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15247);
    Array PThreadedCode15246 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15247, (Optr)&t_send1, (Optr)PSend15267, (Optr)&t_method_return);
    Method PMethod15244 = new_Method_with(PArray15245, empty_Array, empty_Array, PThreadedCode15246, 1, PSend15267);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15244, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_base() {
    Symbol SMB_base = new_Symbol(L"base");
    Array PThreadedCode15269 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_method_return);
    Method PMethod15268 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15269, 1, slot_Smalltalk_AST_Number_base);
    
    MethodClosure MC_SMB_base = new_MethodClosure((Method)PMethod15268, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_base, MC_SMB_base);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15271 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    // visitNumber:. 
    Send PSend15273 = new_Send((Optr)VAR_visitor_0_0, SMB_visitNumber_, 1, (Optr)self);
    Array PThreadedCode15272 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15273, (Optr)&t_method_return);
    Method PMethod15270 = new_Method_with(PArray15271, empty_Array, empty_Array, PThreadedCode15272, 1, PSend15273);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15270, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15275 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15277 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_base);
    String string_15278 = new_String(L"r");
    Constant string_15278_Const = new_Constant((Optr)string_15278);
    // <<. 
    Send PSend15279 = new_Send((Optr)PSend15277, SMB__shiftLeft_, 1, (Optr)string_15278_Const);
    // <<. 
    Send PSend15280 = new_Send((Optr)PSend15279, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_number);
    Array PThreadedCode15276 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_send1, (Optr)PSend15277, (Optr)&t_push1, (Optr)string_15278, (Optr)&t_send1, (Optr)PSend15279, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_send1, (Optr)PSend15280, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15274 = new_Method_with(PArray15275, empty_Array, empty_Array, PThreadedCode15276, 2, PSend15280, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15274, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15282 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15284 = new_Assign((Optr)slot_Smalltalk_AST_Number_base, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15283 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15284, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15281 = new_Method_with(PArray15282, empty_Array, empty_Array, PThreadedCode15283, 2, PAssign15284, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod15281, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_base_, MC_SMB_base_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_base = new_Symbol(L"base");
    Symbol  SMB_number = new_Symbol(L"number");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_base_Const = new_Constant((Optr)SMB_base);
    Constant SMB_number_Const = new_Constant((Optr)SMB_number);
    // with:with:. 
    Send PSend15287 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_base_Const, (Optr)SMB_number_Const);
    Array PThreadedCode15286 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_base, (Optr)&t_push1, (Optr)SMB_number, (Optr)&t_send2, (Optr)PSend15287, (Optr)&t_method_return);
    Method PMethod15285 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15286, 1, PSend15287);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15285, HEADER(Smalltalk_AST_Number_Class));
    store_method(HEADER(Smalltalk_AST_Number_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTNumber_layout() {
    layout_Smalltalk_AST_Number_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Number = new_Symbol(L"Number");
    slot_Smalltalk_AST_Number_number = (Optr)new_Slot(0, L"number");
    slot_Smalltalk_AST_Number_base = (Optr)new_Slot(1, L"base");
    layout_Smalltalk_AST_Number = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_Number)->values[0] = slot_Smalltalk_AST_Number_number; // number 
    ((Array)layout_Smalltalk_AST_Number)->values[1] = slot_Smalltalk_AST_Number_base; // base 
    Smalltalk_AST_Number_Class = (Class)new_Class(Smalltalk_AST_Literal_Class, layout_Smalltalk_AST_Number_Class_class);
    Smalltalk_AST_Number_Class->layout = layout_Smalltalk_AST_Number;
    Smalltalk_AST_Number_Class->name = SMB_Number;
    
}

void init_Smalltalk_AST_ASTNumber_methods() {
    init_SMB_asNumber();
    init_SMB_number();
    init_SMB_number_();
    init_SMB__equals_();
    init_SMB_base();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_base_();
    init_class_SMB_astSelectors();
    
}