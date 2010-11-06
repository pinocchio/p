#include <lib/class/Smalltalk/AST/Symbol.h>


Optr layout_Smalltalk_AST_Symbol_Class_class;
Optr slot_Smalltalk_AST_Symbol_symbol;
Optr layout_Smalltalk_AST_Symbol;


static void init_SMB_symbol() {
    Symbol SMB_symbol = new_Symbol(L"symbol");
    Array PThreadedCode15289 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15288 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15289, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_symbol = new_MethodClosure((Method)PMethod15288, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_symbol, MC_SMB_symbol);
}


static void init_SMB_symbol_() {
    Symbol SMB_symbol_ = new_Symbol(L"symbol:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray15291 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend15294 = new_Send((Optr)VAR_aSymbol_0_0, SMB_asSymbol, 0);
    Assign PAssign15293 = new_Assign((Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)PSend15294);
    Array PThreadedCode15292 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign15293, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send0, (Optr)PSend15294, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15290 = new_Method_with(PArray15291, empty_Array, empty_Array, PThreadedCode15292, 2, PAssign15293, self);
    
    MethodClosure MC_SMB_symbol_ = new_MethodClosure((Method)PMethod15290, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_symbol_, MC_SMB_symbol_);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Array PThreadedCode15296 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15295 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15296, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PMethod15295, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_selectorSymbol() {
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    Array PThreadedCode15298 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_method_return);
    Method PMethod15297 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15298, 1, slot_Smalltalk_AST_Symbol_symbol);
    
    MethodClosure MC_SMB_selectorSymbol = new_MethodClosure((Method)PMethod15297, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_selectorSymbol, MC_SMB_selectorSymbol);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15300 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15303 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15305 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15309 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15308 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15309, (Optr)&t_block_return);
    Block PBlock15307 = new_Block_with(empty_Array, empty_Array, PThreadedCode15308, 1, PSend15309);
    // ifFalse:. 
    Send PSend15306 = new_Send((Optr)PSuper15305, SMB_ifFalse_, 1, (Optr)PBlock15307);
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend15310 = new_Send((Optr)VAR_other_0_0, SMB_symbol, 0);
    // =. 
    Send PSend15311 = new_Send((Optr)slot_Smalltalk_AST_Symbol_symbol, SMB__equals_, 1, (Optr)PSend15310);
    // escape:. 
    Send PSend15315 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15314 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15315, (Optr)&t_block_return);
    Block PBlock15313 = new_Block_with(empty_Array, empty_Array, PThreadedCode15314, 1, PSend15315);
    // ifFalse:. 
    Send PSend15312 = new_Send((Optr)PSend15311, SMB_ifFalse_, 1, (Optr)PBlock15313);
    Array PThreadedCode15304 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15305, (Optr)&t_send_ifFalse_, (Optr)PSend15306, (Optr)PBlock15307, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15310, (Optr)&t_send1, (Optr)PSend15311, (Optr)&t_send_ifFalse_, (Optr)PSend15312, (Optr)PBlock15313, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15302 = new_Block_with(PArray15303, empty_Array, PThreadedCode15304, 3, PSend15306, PSend15312, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15316 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15302);
    Array PThreadedCode15301 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15302, (Optr)&t_send1, (Optr)PSend15316, (Optr)&t_method_return);
    Method PMethod15299 = new_Method_with(PArray15300, empty_Array, empty_Array, PThreadedCode15301, 1, PSend15316);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15299, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15318 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSymbol_ = new_Symbol(L"visitSymbol:");
    // visitSymbol:. 
    Send PSend15320 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSymbol_, 1, (Optr)self);
    Array PThreadedCode15319 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15320, (Optr)&t_method_return);
    Method PMethod15317 = new_Method_with(PArray15318, empty_Array, empty_Array, PThreadedCode15319, 1, PSend15320);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15317, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray15322 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15324 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Symbol_symbol);
    Array PThreadedCode15323 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Symbol_symbol, (Optr)&t_send1, (Optr)PSend15324, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15321 = new_Method_with(PArray15322, empty_Array, empty_Array, PThreadedCode15323, 2, PSend15324, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15321, Smalltalk_AST_Symbol_Class);
    store_method(Smalltalk_AST_Symbol_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15326 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15328 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_symbol_ = new_Symbol(L"symbol:");
    // symbol:. 
    Send PSend15329 = new_Send((Optr)PSend15328, SMB_symbol_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15327 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15328, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend15329, (Optr)&t_method_return);
    Method PMethod15325 = new_Method_with(PArray15326, empty_Array, empty_Array, PThreadedCode15327, 1, PSend15329);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod15325, HEADER(Smalltalk_AST_Symbol_Class));
    store_method(HEADER(Smalltalk_AST_Symbol_Class), SMB_named_, MC_SMB_named_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_symbol = new_Symbol(L"symbol");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_symbol_Const = new_Constant((Optr)SMB_symbol);
    // with:. 
    Send PSend15332 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_symbol_Const);
    Array PThreadedCode15331 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_symbol, (Optr)&t_send1, (Optr)PSend15332, (Optr)&t_method_return);
    Method PMethod15330 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15331, 1, PSend15332);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15330, HEADER(Smalltalk_AST_Symbol_Class));
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