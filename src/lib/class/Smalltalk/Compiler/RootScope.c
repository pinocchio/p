#include <lib/class/Smalltalk/Compiler/RootScope.h>


Optr slot_Smalltalk_Compiler_RootScope_Class_class_decls;
Optr layout_Smalltalk_Compiler_RootScope_Class_class;
Optr slot_Smalltalk_Compiler_RootScope_declarations;
Optr layout_Smalltalk_Compiler_RootScope;


static void init_SMB_lookup_() {
    /*
    lookup: anASTVariable
// 	"For now return nil for easier exporting"
// 
// 	^ decls at: anASTVariable name ifAbsent: [ ^ nil ]
    */
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13098 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13101 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13103 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Variable VAR_el_2_0 = new_Variable_named(L"el", 2);
    Array PArray13105 = new_Array_with(1, (Optr)VAR_el_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13107 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_el_2_0);
    Array PThreadedCode13106 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_el_2_0, (Optr)&t_send1, (Optr)PSend13107, (Optr)&t_method_return);
    Block PBlock13104 = new_Block_with(PArray13105, empty_Array, PThreadedCode13106, 1, PSend13107);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend13108 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifPresent_, 2, (Optr)PSend13103, (Optr)PBlock13104);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend13109 = new_Send((Optr)self, SMB_class, 0);
    // lookup:. 
    Send PSend13110 = new_Send((Optr)PSend13109, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Array PThreadedCode13102 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13103, (Optr)&t_push_closure, (Optr)PBlock13104, (Optr)&t_send2, (Optr)PSend13108, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13109, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13110, (Optr)&t_method_return);
    Block PBlock13100 = new_Block_with(PArray13101, empty_Array, PThreadedCode13102, 2, PSend13108, PSend13110);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13111 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13100);
    Array PThreadedCode13099 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13100, (Optr)&t_send1, (Optr)PSend13111, (Optr)&t_method_return);
    Method PMethod13097 = new_Method_with(PArray13098, empty_Array, empty_Array, PThreadedCode13099, 1, PSend13111);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13097, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_declareAll_() {
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray13113 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray13118 = new_Array_with(1, (Optr)VAR_element_1_0);
    Symbol SMB_declare_ = new_Symbol(L"declare:");
    // declare:. 
    Send PSend13120 = new_Send((Optr)self, SMB_declare_, 1, (Optr)VAR_element_1_0);
    Array PThreadedCode13119 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_send1, (Optr)PSend13120, (Optr)&t_method_return);
    Block PBlock13117 = new_Block_with(PArray13118, empty_Array, PThreadedCode13119, 1, PSend13120);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13121 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock13117);
    Array PThreadedCode13116 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13117, (Optr)&t_send1, (Optr)PSend13121, (Optr)&t_block_return);
    Block PBlock13115 = new_Block_with(empty_Array, empty_Array, PThreadedCode13116, 1, PSend13121);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend13122 = new_Send((Optr)VAR_aCollection_0_0, SMB_ifNotNil_, 1, (Optr)PBlock13115);
    Array PThreadedCode13114 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13115, (Optr)&t_send1, (Optr)PSend13122, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13112 = new_Method_with(PArray13113, empty_Array, empty_Array, PThreadedCode13114, 2, PSend13122, self);
    
    MethodClosure MC_SMB_declareAll_ = new_MethodClosure((Method)PMethod13112, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_declareAll_, MC_SMB_declareAll_);
}


static void init_SMB_initialize() {
    /*
    initialize
// 	super initialize.
// 	self clearGlobals.
// 	decls := PDictionary new.
// 	self initializeGlobals
    */
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13126 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign13125 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)PSend13126);
    Array PThreadedCode13124 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13125, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend13126, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13123 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13124, 2, PAssign13125, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13123, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_declare_as_() {
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray13128 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13131 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13135 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13136 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_1);
    Array PThreadedCode13134 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend13135, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend13136, (Optr)&t_block_return);
    Block PBlock13133 = new_Block_with(empty_Array, empty_Array, PThreadedCode13134, 2, PSend13135, PSend13136);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13137 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock13133);
    String string_13138 = new_String(L"Double declaration for: ");
    Constant string_13138_Const = new_Constant((Optr)string_13138);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend13139 = new_Send((Optr)string_13138_Const, SMB__append_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend13140 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend13139);
    Array PThreadedCode13132 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock13133, (Optr)&t_send2, (Optr)PSend13137, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13138, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend13139, (Optr)&t_send1, (Optr)PSend13140, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock13130 = new_Block_with(PArray13131, empty_Array, PThreadedCode13132, 3, PSend13137, PSend13140, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13141 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13130);
    Array PThreadedCode13129 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13130, (Optr)&t_send1, (Optr)PSend13141, (Optr)&t_method_return);
    Method PMethod13127 = new_Method_with(PArray13128, empty_Array, empty_Array, PThreadedCode13129, 1, PSend13141);
    
    MethodClosure MC_SMB_declare_as_ = new_MethodClosure((Method)PMethod13127, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_declare_as_, MC_SMB_declare_as_);
}


static void init_SMB_isRootScope() {
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
    Array PThreadedCode13143 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod13142 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13143, 1, true_Const);
    
    MethodClosure MC_SMB_isRootScope = new_MethodClosure((Method)PMethod13142, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_isRootScope, MC_SMB_isRootScope);
}


static void init_SMB_parentScope() {
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    String string_13146 = new_String(L"RootScope has no parent!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13146_Const = new_Constant((Optr)string_13146);
    // error:. 
    Send PSend13147 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13146_Const);
    Array PThreadedCode13145 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13146, (Optr)&t_send1, (Optr)PSend13147, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13144 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13145, 2, PSend13147, self);
    
    MethodClosure MC_SMB_parentScope = new_MethodClosure((Method)PMethod13144, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_parentScope, MC_SMB_parentScope);
}


static void init_SMB_declare_() {
    Symbol SMB_declare_ = new_Symbol(L"declare:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13149 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13151 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    // asVariableAt:. 
    Send PSend13152 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_asVariableAt_, 1, (Optr)self);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend13153 = new_Send((Optr)self, SMB_declare_as_, 2, (Optr)PSend13151, (Optr)PSend13152);
    Array PThreadedCode13150 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13151, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend13152, (Optr)&t_send2, (Optr)PSend13153, (Optr)&t_method_return);
    Method PMethod13148 = new_Method_with(PArray13149, empty_Array, empty_Array, PThreadedCode13150, 1, PSend13153);
    
    MethodClosure MC_SMB_declare_ = new_MethodClosure((Method)PMethod13148, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_declare_, MC_SMB_declare_);
}


static void init_SMB_depth() {
    Symbol SMB_depth = new_Symbol(L"depth");
    SmallInt int_n1 = new_SmallInt(-1);
    Array PThreadedCode13155 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_method_return);
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    Method PMethod13154 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13155, 1, int_n1_Const);
    
    MethodClosure MC_SMB_depth = new_MethodClosure((Method)PMethod13154, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_depth, MC_SMB_depth);
}


static void init_class_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13157 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13160 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13162 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13165 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode13164 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13165, (Optr)&t_block_return);
    Block PBlock13163 = new_Block_with(empty_Array, empty_Array, PThreadedCode13164, 1, PSend13165);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13166 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)PSend13162, (Optr)PBlock13163);
    Array PThreadedCode13161 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13162, (Optr)&t_push_closure, (Optr)PBlock13163, (Optr)&t_send2, (Optr)PSend13166, (Optr)&t_method_return);
    Block PBlock13159 = new_Block_with(PArray13160, empty_Array, PThreadedCode13161, 1, PSend13166);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13167 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13159);
    Array PThreadedCode13158 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13159, (Optr)&t_send1, (Optr)PSend13167, (Optr)&t_method_return);
    Method PMethod13156 = new_Method_with(PArray13157, empty_Array, empty_Array, PThreadedCode13158, 1, PSend13167);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13156, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookup_, MC_SMB_lookup_);
}


static void init_class_SMB_lookupNamed_() {
    Symbol SMB_lookupNamed_ = new_Symbol(L"lookupNamed:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray13169 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_variableNotFound = new_Symbol(L"variableNotFound");
    // variableNotFound. 
    Send PSend13173 = new_Send((Optr)VAR_aSymbol_0_0, SMB_variableNotFound, 0);
    Array PThreadedCode13172 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send0, (Optr)PSend13173, (Optr)&t_block_return);
    Block PBlock13171 = new_Block_with(empty_Array, empty_Array, PThreadedCode13172, 1, PSend13173);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend13174 = new_Send((Optr)self, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)PBlock13171);
    Array PThreadedCode13170 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_closure, (Optr)PBlock13171, (Optr)&t_send2, (Optr)PSend13174, (Optr)&t_method_return);
    Method PMethod13168 = new_Method_with(PArray13169, empty_Array, empty_Array, PThreadedCode13170, 1, PSend13174);
    
    MethodClosure MC_SMB_lookupNamed_ = new_MethodClosure((Method)PMethod13168, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookupNamed_, MC_SMB_lookupNamed_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper13177 = new_Super(SMB_initialize, 0);
    Symbol SMB_clearGlobals = new_Symbol(L"clearGlobals");
    // clearGlobals. 
    Send PSend13178 = new_Send((Optr)self, SMB_clearGlobals, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13180 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13179 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13180);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13181 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13176 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper13177, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13178, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13179, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13180, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13181, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13175 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13176, 5, PSuper13177, PSend13178, PAssign13179, PSend13181, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13175, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_clearGlobals() {
    Symbol SMB_clearGlobals = new_Symbol(L"clearGlobals");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13185 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13184 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13185);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13186 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13183 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign13184, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13185, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13186, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13182 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13183, 3, PAssign13184, PSend13186, self);
    
    MethodClosure MC_SMB_clearGlobals = new_MethodClosure((Method)PMethod13182, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_clearGlobals, MC_SMB_clearGlobals);
}


static void init_class_SMB_lookupNamed_ifAbsent_() {
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray13188 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13190 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode13189 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend13190, (Optr)&t_method_return);
    Method PMethod13187 = new_Method_with(PArray13188, empty_Array, empty_Array, PThreadedCode13189, 1, PSend13190);
    
    MethodClosure MC_SMB_lookupNamed_ifAbsent_ = new_MethodClosure((Method)PMethod13187, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookupNamed_ifAbsent_, MC_SMB_lookupNamed_ifAbsent_);
}


static void init_class_SMB_globalDefinition() {
    Symbol SMB_globalDefinition = new_Symbol(L"globalDefinition");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13194 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_13196 = new_String(L"nil");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13197 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)nil_Const);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_13196_Const = new_Constant((Optr)string_13196);
    // with:with:. 
    Send PSend13198 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13196_Const, (Optr)PSend13197);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend13199 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend13198);
    String string_13200 = new_String(L"true");
    // new:. 
    Send PSend13201 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)true_Const);
    Constant string_13200_Const = new_Constant((Optr)string_13200);
    // with:with:. 
    Send PSend13202 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13200_Const, (Optr)PSend13201);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend13203 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend13202);
    SmallInt int_3 = new_SmallInt(3);
    String string_13204 = new_String(L"false");
    // new:. 
    Send PSend13205 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)false_Const);
    Constant string_13204_Const = new_Constant((Optr)string_13204);
    // with:with:. 
    Send PSend13206 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13204_Const, (Optr)PSend13205);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend13207 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend13206);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend13208 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode13195 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13196, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13197, (Optr)&t_send2, (Optr)PSend13198, (Optr)&t_send2, (Optr)PSend13199, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13200, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend13201, (Optr)&t_send2, (Optr)PSend13202, (Optr)&t_send2, (Optr)PSend13203, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13204, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend13205, (Optr)&t_send2, (Optr)PSend13206, (Optr)&t_send2, (Optr)PSend13207, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend13208, (Optr)&t_method_return);
    Block PBlock13193 = new_Block_with(PArray13194, empty_Array, PThreadedCode13195, 4, PSend13199, PSend13203, PSend13207, PSend13208);
    // new:. 
    Send PSend13209 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_3_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13210 = new_Send((Optr)PBlock13193, SMB_value_, 1, (Optr)PSend13209);
    Array PThreadedCode13192 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock13193, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend13209, (Optr)&t_send1, (Optr)PSend13210, (Optr)&t_method_return);
    Method PMethod13191 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13192, 1, PSend13210);
    
    MethodClosure MC_SMB_globalDefinition = new_MethodClosure((Method)PMethod13191, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_globalDefinition, MC_SMB_globalDefinition);
}


static void init_class_SMB_initializeGlobals() {
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    Symbol SMB_globalDefinition = new_Symbol(L"globalDefinition");
    // globalDefinition. 
    Send PSend13213 = new_Send((Optr)self, SMB_globalDefinition, 0);
    Variable VAR_pair_1_0 = new_Variable_named(L"pair", 1);
    Array PArray13215 = new_Array_with(1, (Optr)VAR_pair_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend13217 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend13218 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13219 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_put_, 2, (Optr)PSend13217, (Optr)PSend13218);
    Array PThreadedCode13216 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13217, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend13218, (Optr)&t_send2, (Optr)PSend13219, (Optr)&t_method_return);
    Block PBlock13214 = new_Block_with(PArray13215, empty_Array, PThreadedCode13216, 1, PSend13219);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13220 = new_Send((Optr)PSend13213, SMB_do_, 1, (Optr)PBlock13214);
    Array PThreadedCode13212 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13213, (Optr)&t_push_closure, (Optr)PBlock13214, (Optr)&t_send1, (Optr)PSend13220, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13211 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13212, 2, PSend13220, self);
    
    MethodClosure MC_SMB_initializeGlobals = new_MethodClosure((Method)PMethod13211, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_initializeGlobals, MC_SMB_initializeGlobals);
}

void init_Smalltalk_Compiler_PRootScope_layout() {
    slot_Smalltalk_Compiler_RootScope_Class_class_decls = (Optr)new_Slot(5, L"decls");
    layout_Smalltalk_Compiler_RootScope_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Smalltalk_Compiler_RootScope_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Compiler_RootScope_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Compiler_RootScope_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Compiler_RootScope_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Compiler_RootScope_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Smalltalk_Compiler_RootScope_Class_class)->values[5] = slot_Smalltalk_Compiler_RootScope_Class_class_decls; // decls 
    
    Symbol  SMB_RootScope = new_Symbol(L"RootScope");
    slot_Smalltalk_Compiler_RootScope_declarations = (Optr)new_Slot(0, L"declarations");
    layout_Smalltalk_Compiler_RootScope = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_Compiler_RootScope)->values[0] = slot_Smalltalk_Compiler_RootScope_declarations; // declarations 
    Smalltalk_Compiler_RootScope_Class = (Class)new_Class(Smalltalk_Compiler_Scope_Class, layout_Smalltalk_Compiler_RootScope_Class_class);
    Smalltalk_Compiler_RootScope_Class->layout = layout_Smalltalk_Compiler_RootScope;
    Smalltalk_Compiler_RootScope_Class->name = SMB_RootScope;
    
}

void init_Smalltalk_Compiler_PRootScope_methods() {
    init_SMB_lookup_();
    init_SMB_declareAll_();
    init_SMB_initialize();
    init_SMB_declare_as_();
    init_SMB_isRootScope();
    init_SMB_parentScope();
    init_SMB_declare_();
    init_SMB_depth();
    init_class_SMB_lookup_();
    init_class_SMB_lookupNamed_();
    init_class_SMB_initialize();
    init_class_SMB_clearGlobals();
    init_class_SMB_lookupNamed_ifAbsent_();
    init_class_SMB_globalDefinition();
    init_class_SMB_initializeGlobals();
    
}