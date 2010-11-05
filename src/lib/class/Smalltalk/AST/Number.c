#include <lib/class/Smalltalk/AST/Number.h>


Optr layout_Smalltalk_AST_Number_Class_class;
Optr slot_Smalltalk_AST_Number_number;
Optr slot_Smalltalk_AST_Number_base;
Optr layout_Smalltalk_AST_Number;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend15261 = new_Send((Optr)self, SMB_printString, 0);
    // asNumber. 
    Send PSend15262 = new_Send((Optr)PSend15261, SMB_asNumber, 0);
    Array PThreadedCode15260 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15261, (Optr)&t_send0, (Optr)PSend15262, (Optr)&t_method_return);
    Method PMethod15259 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15260, 1, PSend15262);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15259, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_number() {
    Symbol SMB_number = new_Symbol(L"number");
    Array PThreadedCode15264 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_method_return);
    Method PMethod15263 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15264, 1, slot_Smalltalk_AST_Number_number);
    
    MethodClosure MC_SMB_number = new_MethodClosure((Method)PMethod15263, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number, MC_SMB_number);
}


static void init_SMB_number_() {
    Symbol SMB_number_ = new_Symbol(L"number:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15266 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15268 = new_Assign((Optr)slot_Smalltalk_AST_Number_number, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15267 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15268, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15265 = new_Method_with(PArray15266, empty_Array, empty_Array, PThreadedCode15267, 2, PAssign15268, self);
    
    MethodClosure MC_SMB_number_ = new_MethodClosure((Method)PMethod15265, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number_, MC_SMB_number_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15270 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15273 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15275 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15279 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15278 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15279, (Optr)&t_block_return);
    Block PBlock15277 = new_Block_with(empty_Array, empty_Array, PThreadedCode15278, 1, PSend15279);
    // ifFalse:. 
    Send PSend15276 = new_Send((Optr)PSuper15275, SMB_ifFalse_, 1, (Optr)PBlock15277);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend15280 = new_Send((Optr)VAR_other_0_0, SMB_number, 0);
    // =. 
    Send PSend15281 = new_Send((Optr)slot_Smalltalk_AST_Number_number, SMB__equals_, 1, (Optr)PSend15280);
    // escape:. 
    Send PSend15285 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15284 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15285, (Optr)&t_block_return);
    Block PBlock15283 = new_Block_with(empty_Array, empty_Array, PThreadedCode15284, 1, PSend15285);
    // ifFalse:. 
    Send PSend15282 = new_Send((Optr)PSend15281, SMB_ifFalse_, 1, (Optr)PBlock15283);
    Symbol SMB_base = new_Symbol(L"base");
    // base. 
    Send PSend15286 = new_Send((Optr)VAR_other_0_0, SMB_base, 0);
    // =. 
    Send PSend15287 = new_Send((Optr)slot_Smalltalk_AST_Number_base, SMB__equals_, 1, (Optr)PSend15286);
    // escape:. 
    Send PSend15291 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15290 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15291, (Optr)&t_block_return);
    Block PBlock15289 = new_Block_with(empty_Array, empty_Array, PThreadedCode15290, 1, PSend15291);
    // ifFalse:. 
    Send PSend15288 = new_Send((Optr)PSend15287, SMB_ifFalse_, 1, (Optr)PBlock15289);
    Array PThreadedCode15274 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15275, (Optr)&t_send_ifFalse_, (Optr)PSend15276, (Optr)PBlock15277, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15280, (Optr)&t_send1, (Optr)PSend15281, (Optr)&t_send_ifFalse_, (Optr)PSend15282, (Optr)PBlock15283, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15286, (Optr)&t_send1, (Optr)PSend15287, (Optr)&t_send_ifFalse_, (Optr)PSend15288, (Optr)PBlock15289, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15272 = new_Block_with(PArray15273, empty_Array, PThreadedCode15274, 4, PSend15276, PSend15282, PSend15288, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15292 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15272);
    Array PThreadedCode15271 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15272, (Optr)&t_send1, (Optr)PSend15292, (Optr)&t_method_return);
    Method PMethod15269 = new_Method_with(PArray15270, empty_Array, empty_Array, PThreadedCode15271, 1, PSend15292);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15269, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_base() {
    Symbol SMB_base = new_Symbol(L"base");
    Array PThreadedCode15294 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_method_return);
    Method PMethod15293 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15294, 1, slot_Smalltalk_AST_Number_base);
    
    MethodClosure MC_SMB_base = new_MethodClosure((Method)PMethod15293, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_base, MC_SMB_base);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15296 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    // visitNumber:. 
    Send PSend15298 = new_Send((Optr)VAR_visitor_0_0, SMB_visitNumber_, 1, (Optr)self);
    Array PThreadedCode15297 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15298, (Optr)&t_method_return);
    Method PMethod15295 = new_Method_with(PArray15296, empty_Array, empty_Array, PThreadedCode15297, 1, PSend15298);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15295, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15300 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15302 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_base);
    String string_15303 = new_String(L"r");
    Constant string_15303_Const = new_Constant((Optr)string_15303);
    // <<. 
    Send PSend15304 = new_Send((Optr)PSend15302, SMB__shiftLeft_, 1, (Optr)string_15303_Const);
    // <<. 
    Send PSend15305 = new_Send((Optr)PSend15304, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_number);
    Array PThreadedCode15301 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_send1, (Optr)PSend15302, (Optr)&t_push1, (Optr)string_15303, (Optr)&t_send1, (Optr)PSend15304, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_send1, (Optr)PSend15305, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15299 = new_Method_with(PArray15300, empty_Array, empty_Array, PThreadedCode15301, 2, PSend15305, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15299, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15307 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15309 = new_Assign((Optr)slot_Smalltalk_AST_Number_base, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15308 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15309, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15306 = new_Method_with(PArray15307, empty_Array, empty_Array, PThreadedCode15308, 2, PAssign15309, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod15306, Smalltalk_AST_Number_Class);
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
    Send PSend15312 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_base_Const, (Optr)SMB_number_Const);
    Array PThreadedCode15311 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_base, (Optr)&t_push1, (Optr)SMB_number, (Optr)&t_send2, (Optr)PSend15312, (Optr)&t_method_return);
    Method PMethod15310 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15311, 1, PSend15312);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15310, HEADER(Smalltalk_AST_Number_Class));
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