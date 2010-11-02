#include <lib/class/Smalltalk/AST/Number.h>


Optr layout_Smalltalk_AST_Number_Class_class;
Optr slot_Smalltalk_AST_Number_number;
Optr slot_Smalltalk_AST_Number_base;
Optr layout_Smalltalk_AST_Number;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend15065 = new_Send((Optr)self, SMB_printString, 0);
    // asNumber. 
    Send PSend15066 = new_Send((Optr)PSend15065, SMB_asNumber, 0);
    Array PThreadedCode15064 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15065, (Optr)&t_send0, (Optr)PSend15066, (Optr)&t_method_return);
    Method PMethod15063 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15064, 1, PSend15066);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15063, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_number() {
    Symbol SMB_number = new_Symbol(L"number");
    Array PThreadedCode15068 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_method_return);
    Method PMethod15067 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15068, 1, slot_Smalltalk_AST_Number_number);
    
    MethodClosure MC_SMB_number = new_MethodClosure((Method)PMethod15067, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number, MC_SMB_number);
}


static void init_SMB_number_() {
    Symbol SMB_number_ = new_Symbol(L"number:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15070 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15072 = new_Assign((Optr)slot_Smalltalk_AST_Number_number, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15071 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15072, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15069 = new_Method_with(PArray15070, empty_Array, empty_Array, PThreadedCode15071, 2, PAssign15072, self);
    
    MethodClosure MC_SMB_number_ = new_MethodClosure((Method)PMethod15069, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number_, MC_SMB_number_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15074 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15077 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15079 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15083 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15082 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15083, (Optr)&t_block_return);
    Block PBlock15081 = new_Block_with(empty_Array, empty_Array, PThreadedCode15082, 1, PSend15083);
    // ifFalse:. 
    Send PSend15080 = new_Send((Optr)PSuper15079, SMB_ifFalse_, 1, (Optr)PBlock15081);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend15084 = new_Send((Optr)VAR_other_0_0, SMB_number, 0);
    // =. 
    Send PSend15085 = new_Send((Optr)slot_Smalltalk_AST_Number_number, SMB__equals_, 1, (Optr)PSend15084);
    // escape:. 
    Send PSend15089 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15088 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15089, (Optr)&t_block_return);
    Block PBlock15087 = new_Block_with(empty_Array, empty_Array, PThreadedCode15088, 1, PSend15089);
    // ifFalse:. 
    Send PSend15086 = new_Send((Optr)PSend15085, SMB_ifFalse_, 1, (Optr)PBlock15087);
    Symbol SMB_base = new_Symbol(L"base");
    // base. 
    Send PSend15090 = new_Send((Optr)VAR_other_0_0, SMB_base, 0);
    // =. 
    Send PSend15091 = new_Send((Optr)slot_Smalltalk_AST_Number_base, SMB__equals_, 1, (Optr)PSend15090);
    // escape:. 
    Send PSend15095 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15094 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15095, (Optr)&t_block_return);
    Block PBlock15093 = new_Block_with(empty_Array, empty_Array, PThreadedCode15094, 1, PSend15095);
    // ifFalse:. 
    Send PSend15092 = new_Send((Optr)PSend15091, SMB_ifFalse_, 1, (Optr)PBlock15093);
    Array PThreadedCode15078 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15079, (Optr)&t_send_ifFalse_, (Optr)PSend15080, (Optr)PBlock15081, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15084, (Optr)&t_send1, (Optr)PSend15085, (Optr)&t_send_ifFalse_, (Optr)PSend15086, (Optr)PBlock15087, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15090, (Optr)&t_send1, (Optr)PSend15091, (Optr)&t_send_ifFalse_, (Optr)PSend15092, (Optr)PBlock15093, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15076 = new_Block_with(PArray15077, empty_Array, PThreadedCode15078, 4, PSend15080, PSend15086, PSend15092, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15096 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15076);
    Array PThreadedCode15075 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15076, (Optr)&t_send1, (Optr)PSend15096, (Optr)&t_method_return);
    Method PMethod15073 = new_Method_with(PArray15074, empty_Array, empty_Array, PThreadedCode15075, 1, PSend15096);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15073, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_base() {
    Symbol SMB_base = new_Symbol(L"base");
    Array PThreadedCode15098 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_method_return);
    Method PMethod15097 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15098, 1, slot_Smalltalk_AST_Number_base);
    
    MethodClosure MC_SMB_base = new_MethodClosure((Method)PMethod15097, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_base, MC_SMB_base);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15100 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    // visitNumber:. 
    Send PSend15102 = new_Send((Optr)VAR_visitor_0_0, SMB_visitNumber_, 1, (Optr)self);
    Array PThreadedCode15101 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15102, (Optr)&t_method_return);
    Method PMethod15099 = new_Method_with(PArray15100, empty_Array, empty_Array, PThreadedCode15101, 1, PSend15102);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15099, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15104 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15106 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_base);
    String string_15107 = new_String(L"r");
    Constant string_15107_Const = new_Constant((Optr)string_15107);
    // <<. 
    Send PSend15108 = new_Send((Optr)PSend15106, SMB__shiftLeft_, 1, (Optr)string_15107_Const);
    // <<. 
    Send PSend15109 = new_Send((Optr)PSend15108, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_number);
    Array PThreadedCode15105 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_send1, (Optr)PSend15106, (Optr)&t_push1, (Optr)string_15107, (Optr)&t_send1, (Optr)PSend15108, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_send1, (Optr)PSend15109, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15103 = new_Method_with(PArray15104, empty_Array, empty_Array, PThreadedCode15105, 2, PSend15109, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15103, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15111 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15113 = new_Assign((Optr)slot_Smalltalk_AST_Number_base, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15112 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15113, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15110 = new_Method_with(PArray15111, empty_Array, empty_Array, PThreadedCode15112, 2, PAssign15113, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod15110, Smalltalk_AST_Number_Class);
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
    Send PSend15116 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_base_Const, (Optr)SMB_number_Const);
    Array PThreadedCode15115 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_base, (Optr)&t_push1, (Optr)SMB_number, (Optr)&t_send2, (Optr)PSend15116, (Optr)&t_method_return);
    Method PMethod15114 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15115, 1, PSend15116);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15114, HEADER(Smalltalk_AST_Number_Class));
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