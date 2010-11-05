#include <lib/class/Smalltalk/AST/Number.h>


Optr layout_Smalltalk_AST_Number_Class_class;
Optr slot_Smalltalk_AST_Number_number;
Optr slot_Smalltalk_AST_Number_base;
Optr layout_Smalltalk_AST_Number;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend15152 = new_Send((Optr)self, SMB_printString, 0);
    // asNumber. 
    Send PSend15153 = new_Send((Optr)PSend15152, SMB_asNumber, 0);
    Array PThreadedCode15151 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15152, (Optr)&t_send0, (Optr)PSend15153, (Optr)&t_method_return);
    Method PMethod15150 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15151, 1, PSend15153);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15150, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_number() {
    Symbol SMB_number = new_Symbol(L"number");
    Array PThreadedCode15155 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_method_return);
    Method PMethod15154 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15155, 1, slot_Smalltalk_AST_Number_number);
    
    MethodClosure MC_SMB_number = new_MethodClosure((Method)PMethod15154, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number, MC_SMB_number);
}


static void init_SMB_number_() {
    Symbol SMB_number_ = new_Symbol(L"number:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15157 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15159 = new_Assign((Optr)slot_Smalltalk_AST_Number_number, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15158 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15159, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15156 = new_Method_with(PArray15157, empty_Array, empty_Array, PThreadedCode15158, 2, PAssign15159, self);
    
    MethodClosure MC_SMB_number_ = new_MethodClosure((Method)PMethod15156, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number_, MC_SMB_number_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15161 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15164 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15166 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15170 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15169 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15170, (Optr)&t_block_return);
    Block PBlock15168 = new_Block_with(empty_Array, empty_Array, PThreadedCode15169, 1, PSend15170);
    // ifFalse:. 
    Send PSend15167 = new_Send((Optr)PSuper15166, SMB_ifFalse_, 1, (Optr)PBlock15168);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend15171 = new_Send((Optr)VAR_other_0_0, SMB_number, 0);
    // =. 
    Send PSend15172 = new_Send((Optr)slot_Smalltalk_AST_Number_number, SMB__equals_, 1, (Optr)PSend15171);
    // escape:. 
    Send PSend15176 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15175 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15176, (Optr)&t_block_return);
    Block PBlock15174 = new_Block_with(empty_Array, empty_Array, PThreadedCode15175, 1, PSend15176);
    // ifFalse:. 
    Send PSend15173 = new_Send((Optr)PSend15172, SMB_ifFalse_, 1, (Optr)PBlock15174);
    Symbol SMB_base = new_Symbol(L"base");
    // base. 
    Send PSend15177 = new_Send((Optr)VAR_other_0_0, SMB_base, 0);
    // =. 
    Send PSend15178 = new_Send((Optr)slot_Smalltalk_AST_Number_base, SMB__equals_, 1, (Optr)PSend15177);
    // escape:. 
    Send PSend15182 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15181 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15182, (Optr)&t_block_return);
    Block PBlock15180 = new_Block_with(empty_Array, empty_Array, PThreadedCode15181, 1, PSend15182);
    // ifFalse:. 
    Send PSend15179 = new_Send((Optr)PSend15178, SMB_ifFalse_, 1, (Optr)PBlock15180);
    Array PThreadedCode15165 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15166, (Optr)&t_send_ifFalse_, (Optr)PSend15167, (Optr)PBlock15168, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15171, (Optr)&t_send1, (Optr)PSend15172, (Optr)&t_send_ifFalse_, (Optr)PSend15173, (Optr)PBlock15174, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15177, (Optr)&t_send1, (Optr)PSend15178, (Optr)&t_send_ifFalse_, (Optr)PSend15179, (Optr)PBlock15180, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15163 = new_Block_with(PArray15164, empty_Array, PThreadedCode15165, 4, PSend15167, PSend15173, PSend15179, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15183 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15163);
    Array PThreadedCode15162 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15163, (Optr)&t_send1, (Optr)PSend15183, (Optr)&t_method_return);
    Method PMethod15160 = new_Method_with(PArray15161, empty_Array, empty_Array, PThreadedCode15162, 1, PSend15183);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15160, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_base() {
    Symbol SMB_base = new_Symbol(L"base");
    Array PThreadedCode15185 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_method_return);
    Method PMethod15184 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15185, 1, slot_Smalltalk_AST_Number_base);
    
    MethodClosure MC_SMB_base = new_MethodClosure((Method)PMethod15184, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_base, MC_SMB_base);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15187 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    // visitNumber:. 
    Send PSend15189 = new_Send((Optr)VAR_visitor_0_0, SMB_visitNumber_, 1, (Optr)self);
    Array PThreadedCode15188 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15189, (Optr)&t_method_return);
    Method PMethod15186 = new_Method_with(PArray15187, empty_Array, empty_Array, PThreadedCode15188, 1, PSend15189);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15186, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15191 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15193 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_base);
    String string_15194 = new_String(L"r");
    Constant string_15194_Const = new_Constant((Optr)string_15194);
    // <<. 
    Send PSend15195 = new_Send((Optr)PSend15193, SMB__shiftLeft_, 1, (Optr)string_15194_Const);
    // <<. 
    Send PSend15196 = new_Send((Optr)PSend15195, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_number);
    Array PThreadedCode15192 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_send1, (Optr)PSend15193, (Optr)&t_push1, (Optr)string_15194, (Optr)&t_send1, (Optr)PSend15195, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_send1, (Optr)PSend15196, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15190 = new_Method_with(PArray15191, empty_Array, empty_Array, PThreadedCode15192, 2, PSend15196, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15190, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15198 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15200 = new_Assign((Optr)slot_Smalltalk_AST_Number_base, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15199 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15200, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15197 = new_Method_with(PArray15198, empty_Array, empty_Array, PThreadedCode15199, 2, PAssign15200, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod15197, Smalltalk_AST_Number_Class);
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
    Send PSend15203 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_base_Const, (Optr)SMB_number_Const);
    Array PThreadedCode15202 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_base, (Optr)&t_push1, (Optr)SMB_number, (Optr)&t_send2, (Optr)PSend15203, (Optr)&t_method_return);
    Method PMethod15201 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15202, 1, PSend15203);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15201, HEADER(Smalltalk_AST_Number_Class));
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