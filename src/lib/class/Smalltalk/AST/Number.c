#include <lib/class/Smalltalk/AST/Number.h>


Optr layout_Smalltalk_AST_Number_Class_class;
Optr slot_Smalltalk_AST_Number_number;
Optr slot_Smalltalk_AST_Number_base;
Optr layout_Smalltalk_AST_Number;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend15095 = new_Send((Optr)self, SMB_printString, 0);
    // asNumber. 
    Send PSend15096 = new_Send((Optr)PSend15095, SMB_asNumber, 0);
    Array PThreadedCode15094 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15095, (Optr)&t_send0, (Optr)PSend15096, (Optr)&t_method_return);
    Method PMethod15093 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15094, 1, PSend15096);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15093, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_number() {
    Symbol SMB_number = new_Symbol(L"number");
    Array PThreadedCode15098 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_method_return);
    Method PMethod15097 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15098, 1, slot_Smalltalk_AST_Number_number);
    
    MethodClosure MC_SMB_number = new_MethodClosure((Method)PMethod15097, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number, MC_SMB_number);
}


static void init_SMB_number_() {
    Symbol SMB_number_ = new_Symbol(L"number:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15100 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15102 = new_Assign((Optr)slot_Smalltalk_AST_Number_number, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15101 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15102, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15099 = new_Method_with(PArray15100, empty_Array, empty_Array, PThreadedCode15101, 2, PAssign15102, self);
    
    MethodClosure MC_SMB_number_ = new_MethodClosure((Method)PMethod15099, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number_, MC_SMB_number_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15104 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15107 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15109 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15113 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15112 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15113, (Optr)&t_block_return);
    Block PBlock15111 = new_Block_with(empty_Array, empty_Array, PThreadedCode15112, 1, PSend15113);
    // ifFalse:. 
    Send PSend15110 = new_Send((Optr)PSuper15109, SMB_ifFalse_, 1, (Optr)PBlock15111);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend15114 = new_Send((Optr)VAR_other_0_0, SMB_number, 0);
    // =. 
    Send PSend15115 = new_Send((Optr)slot_Smalltalk_AST_Number_number, SMB__equals_, 1, (Optr)PSend15114);
    // escape:. 
    Send PSend15119 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15118 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15119, (Optr)&t_block_return);
    Block PBlock15117 = new_Block_with(empty_Array, empty_Array, PThreadedCode15118, 1, PSend15119);
    // ifFalse:. 
    Send PSend15116 = new_Send((Optr)PSend15115, SMB_ifFalse_, 1, (Optr)PBlock15117);
    Symbol SMB_base = new_Symbol(L"base");
    // base. 
    Send PSend15120 = new_Send((Optr)VAR_other_0_0, SMB_base, 0);
    // =. 
    Send PSend15121 = new_Send((Optr)slot_Smalltalk_AST_Number_base, SMB__equals_, 1, (Optr)PSend15120);
    // escape:. 
    Send PSend15125 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15124 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15125, (Optr)&t_block_return);
    Block PBlock15123 = new_Block_with(empty_Array, empty_Array, PThreadedCode15124, 1, PSend15125);
    // ifFalse:. 
    Send PSend15122 = new_Send((Optr)PSend15121, SMB_ifFalse_, 1, (Optr)PBlock15123);
    Array PThreadedCode15108 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15109, (Optr)&t_send_ifFalse_, (Optr)PSend15110, (Optr)PBlock15111, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15114, (Optr)&t_send1, (Optr)PSend15115, (Optr)&t_send_ifFalse_, (Optr)PSend15116, (Optr)PBlock15117, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15120, (Optr)&t_send1, (Optr)PSend15121, (Optr)&t_send_ifFalse_, (Optr)PSend15122, (Optr)PBlock15123, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15106 = new_Block_with(PArray15107, empty_Array, PThreadedCode15108, 4, PSend15110, PSend15116, PSend15122, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15126 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15106);
    Array PThreadedCode15105 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15106, (Optr)&t_send1, (Optr)PSend15126, (Optr)&t_method_return);
    Method PMethod15103 = new_Method_with(PArray15104, empty_Array, empty_Array, PThreadedCode15105, 1, PSend15126);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15103, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_base() {
    Symbol SMB_base = new_Symbol(L"base");
    Array PThreadedCode15128 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_method_return);
    Method PMethod15127 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15128, 1, slot_Smalltalk_AST_Number_base);
    
    MethodClosure MC_SMB_base = new_MethodClosure((Method)PMethod15127, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_base, MC_SMB_base);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15130 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    // visitNumber:. 
    Send PSend15132 = new_Send((Optr)VAR_visitor_0_0, SMB_visitNumber_, 1, (Optr)self);
    Array PThreadedCode15131 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15132, (Optr)&t_method_return);
    Method PMethod15129 = new_Method_with(PArray15130, empty_Array, empty_Array, PThreadedCode15131, 1, PSend15132);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15129, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15134 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15136 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_base);
    String string_15137 = new_String(L"r");
    Constant string_15137_Const = new_Constant((Optr)string_15137);
    // <<. 
    Send PSend15138 = new_Send((Optr)PSend15136, SMB__shiftLeft_, 1, (Optr)string_15137_Const);
    // <<. 
    Send PSend15139 = new_Send((Optr)PSend15138, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_number);
    Array PThreadedCode15135 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_send1, (Optr)PSend15136, (Optr)&t_push1, (Optr)string_15137, (Optr)&t_send1, (Optr)PSend15138, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_send1, (Optr)PSend15139, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15133 = new_Method_with(PArray15134, empty_Array, empty_Array, PThreadedCode15135, 2, PSend15139, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15133, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15141 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15143 = new_Assign((Optr)slot_Smalltalk_AST_Number_base, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15142 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15143, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15140 = new_Method_with(PArray15141, empty_Array, empty_Array, PThreadedCode15142, 2, PAssign15143, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod15140, Smalltalk_AST_Number_Class);
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
    Send PSend15146 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_base_Const, (Optr)SMB_number_Const);
    Array PThreadedCode15145 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_base, (Optr)&t_push1, (Optr)SMB_number, (Optr)&t_send2, (Optr)PSend15146, (Optr)&t_method_return);
    Method PMethod15144 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15145, 1, PSend15146);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15144, HEADER(Smalltalk_AST_Number_Class));
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