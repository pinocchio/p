#include <lib/class/Smalltalk/AST/Symbol.h>


Optr layout_Smalltalk_AST_Symbol_Class_class;
Optr slot_Smalltalk_AST_Symbol_symbol;
Optr layout_Smalltalk_AST_Symbol;


static void init_SMB_symbol() {
    Symbol SMB_symbol = new_Symbol(L"symbol");
    Array PThreadedCode15148 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15147 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15148, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_symbol = new_MethodClosure((Method)PMethod15147, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_symbol, MC_SMB_symbol);
}


static void init_SMB_symbol_() {
    Symbol SMB_symbol_ = new_Symbol(L"symbol:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray15150 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend15153 = new_Send((Optr)VAR_aSymbol_0_0, SMB_asSymbol, 0);
    Assign PAssign15152 = new_Assign((Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)PSend15153);
    Array PThreadedCode15151 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign15152, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send0, (Optr)PSend15153, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15149 = new_Method_with(PArray15150, empty_Array, empty_Array, PThreadedCode15151, 2, PAssign15152, self);
    
    MethodClosure MC_SMB_symbol_ = new_MethodClosure((Method)PMethod15149, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_symbol_, MC_SMB_symbol_);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Array PThreadedCode15155 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15154 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15155, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PMethod15154, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_selectorSymbol() {
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    Array PThreadedCode15157 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15156 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15157, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_selectorSymbol = new_MethodClosure((Method)PMethod15156, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_selectorSymbol, MC_SMB_selectorSymbol);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15159 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15162 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15164 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15168 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15167 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15168, (Optr)&t_block_return);
    Block PBlock15166 = new_Block_with(empty_Array, empty_Array, PThreadedCode15167, 1, PSend15168);
    // ifFalse:. 
    Send PSend15165 = new_Send((Optr)PSuper15164, SMB_ifFalse_, 1, (Optr)PBlock15166);
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend15169 = new_Send((Optr)VAR_other_0_0, SMB_symbol, 0);
    // =. 
    Send PSend15170 = new_Send((Optr)slot_Smalltalk_AST_Symbol_symbol, SMB__equals_, 1, (Optr)PSend15169);
    // escape:. 
    Send PSend15174 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15173 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15174, (Optr)&t_block_return);
    Block PBlock15172 = new_Block_with(empty_Array, empty_Array, PThreadedCode15173, 1, PSend15174);
    // ifFalse:. 
    Send PSend15171 = new_Send((Optr)PSend15170, SMB_ifFalse_, 1, (Optr)PBlock15172);
    Array PThreadedCode15163 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15164, (Optr)&t_send_ifFalse_, (Optr)PSend15165, (Optr)PBlock15166, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15169, (Optr)&t_send1, (Optr)PSend15170, (Optr)&t_send_ifFalse_, (Optr)PSend15171, (Optr)PBlock15172, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15161 = new_Block_with(PArray15162, empty_Array, PThreadedCode15163, 3, PSend15165, PSend15171, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15175 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15161);
    Array PThreadedCode15160 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15161, (Optr)&t_send1, (Optr)PSend15175, (Optr)&t_method_return);
    Method PMethod15158 = new_Method_with(PArray15159, empty_Array, empty_Array, PThreadedCode15160, 1, PSend15175);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15158, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15177 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSymbol_ = new_Symbol(L"visitSymbol:");
    // visitSymbol:. 
    Send PSend15179 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSymbol_, 1, (Optr)self);
    Array PThreadedCode15178 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15179, (Optr)&t_method_return);
    Method PMethod15176 = new_Method_with(PArray15177, empty_Array, empty_Array, PThreadedCode15178, 1, PSend15179);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15176, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray15181 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15183 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Symbol_symbol);
    Array PThreadedCode15182 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_send1, (Optr)PSend15183, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15180 = new_Method_with(PArray15181, empty_Array, empty_Array, PThreadedCode15182, 2, PSend15183, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15180, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15185 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15187 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_symbol_ = new_Symbol(L"symbol:");
    // symbol:. 
    Send PSend15188 = new_Send((Optr)PSend15187, SMB_symbol_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15186 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15187, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend15188, (Optr)&t_method_return);
    Method PMethod15184 = new_Method_with(PArray15185, empty_Array, empty_Array, PThreadedCode15186, 1, PSend15188);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod15184, HEADER(Smalltalk_AST_Symbol_Class));
    store_method(HEADER(Smalltalk_AST_Symbol_Class), SMB_named_, MC_SMB_named_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_symbol = new_Symbol(L"symbol");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_symbol_Const = new_Constant((Optr)SMB_symbol);
    // with:. 
    Send PSend15191 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_symbol_Const);
    Array PThreadedCode15190 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_symbol, (Optr)&t_send1, (Optr)PSend15191, (Optr)&t_method_return);
    Method PMethod15189 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15190, 1, PSend15191);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15189, HEADER(Smalltalk_AST_Symbol_Class));
    store_method(HEADER(Smalltalk_AST_Symbol_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTSymbol_layout() {
    layout_Smalltalk_AST_Symbol_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Symbol_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Symbol_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Symbol_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Symbol_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Symbol_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Symbol = new_Symbol(L"Symbol");
    slot_Smalltalk_AST_Symbol_symbol = (Optr)new_Slot(0, L"symbol");
    layout_Smalltalk_AST_Symbol = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_Symbol)->values[0] = slot_Smalltalk_AST_Symbol_symbol; // symbol 
    Smalltalk_AST_Symbol_Class = (Class)new_Class(Smalltalk_AST_Literal_Class, layout_Smalltalk_AST_Symbol_Class_class);
    Smalltalk_AST_Symbol_Class->layout = layout_Smalltalk_AST_Symbol;
    Smalltalk_AST_Symbol_Class->name = SMB_Symbol;
    
}

void init_Smalltalk_AST_ASTSymbol_methods() {
    init_SMB_symbol();
    init_SMB_symbol_();
    init_SMB_asSymbol();
    init_SMB_selectorSymbol();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_class_SMB_named_();
    init_class_SMB_astSelectors();
    
}