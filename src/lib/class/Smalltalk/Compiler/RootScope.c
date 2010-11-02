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
    Array PArray13074 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13077 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13079 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Variable VAR_el_2_0 = new_Variable_named(L"el", 2);
    Array PArray13081 = new_Array_with(1, (Optr)VAR_el_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13083 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_el_2_0);
    Array PThreadedCode13082 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_el_2_0, (Optr)&t_send1, (Optr)PSend13083, (Optr)&t_method_return);
    Block PBlock13080 = new_Block_with(PArray13081, empty_Array, PThreadedCode13082, 1, PSend13083);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend13084 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifPresent_, 2, (Optr)PSend13079, (Optr)PBlock13080);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend13085 = new_Send((Optr)self, SMB_class, 0);
    // lookup:. 
    Send PSend13086 = new_Send((Optr)PSend13085, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Array PThreadedCode13078 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13079, (Optr)&t_push_closure, (Optr)PBlock13080, (Optr)&t_send2, (Optr)PSend13084, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13085, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13086, (Optr)&t_method_return);
    Block PBlock13076 = new_Block_with(PArray13077, empty_Array, PThreadedCode13078, 2, PSend13084, PSend13086);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13087 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13076);
    Array PThreadedCode13075 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13076, (Optr)&t_send1, (Optr)PSend13087, (Optr)&t_method_return);
    Method PMethod13073 = new_Method_with(PArray13074, empty_Array, empty_Array, PThreadedCode13075, 1, PSend13087);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13073, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_declareAll_() {
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray13089 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray13094 = new_Array_with(1, (Optr)VAR_element_1_0);
    Symbol SMB_declare_ = new_Symbol(L"declare:");
    // declare:. 
    Send PSend13096 = new_Send((Optr)self, SMB_declare_, 1, (Optr)VAR_element_1_0);
    Array PThreadedCode13095 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_send1, (Optr)PSend13096, (Optr)&t_method_return);
    Block PBlock13093 = new_Block_with(PArray13094, empty_Array, PThreadedCode13095, 1, PSend13096);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13097 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock13093);
    Array PThreadedCode13092 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13093, (Optr)&t_send1, (Optr)PSend13097, (Optr)&t_block_return);
    Block PBlock13091 = new_Block_with(empty_Array, empty_Array, PThreadedCode13092, 1, PSend13097);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend13098 = new_Send((Optr)VAR_aCollection_0_0, SMB_ifNotNil_, 1, (Optr)PBlock13091);
    Array PThreadedCode13090 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13091, (Optr)&t_send1, (Optr)PSend13098, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13088 = new_Method_with(PArray13089, empty_Array, empty_Array, PThreadedCode13090, 2, PSend13098, self);
    
    MethodClosure MC_SMB_declareAll_ = new_MethodClosure((Method)PMethod13088, Smalltalk_Compiler_RootScope_Class);
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
    Send PSend13102 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign13101 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)PSend13102);
    Array PThreadedCode13100 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13101, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend13102, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13099 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13100, 2, PAssign13101, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13099, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_declare_as_() {
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray13104 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13107 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13111 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13112 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_1);
    Array PThreadedCode13110 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend13111, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend13112, (Optr)&t_block_return);
    Block PBlock13109 = new_Block_with(empty_Array, empty_Array, PThreadedCode13110, 2, PSend13111, PSend13112);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13113 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock13109);
    String string_13114 = new_String(L"Double declaration for: ");
    Constant string_13114_Const = new_Constant((Optr)string_13114);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend13115 = new_Send((Optr)string_13114_Const, SMB__append_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend13116 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend13115);
    Array PThreadedCode13108 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock13109, (Optr)&t_send2, (Optr)PSend13113, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13114, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend13115, (Optr)&t_send1, (Optr)PSend13116, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock13106 = new_Block_with(PArray13107, empty_Array, PThreadedCode13108, 3, PSend13113, PSend13116, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13117 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13106);
    Array PThreadedCode13105 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13106, (Optr)&t_send1, (Optr)PSend13117, (Optr)&t_method_return);
    Method PMethod13103 = new_Method_with(PArray13104, empty_Array, empty_Array, PThreadedCode13105, 1, PSend13117);
    
    MethodClosure MC_SMB_declare_as_ = new_MethodClosure((Method)PMethod13103, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_declare_as_, MC_SMB_declare_as_);
}


static void init_SMB_isRootScope() {
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
    Array PThreadedCode13119 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod13118 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13119, 1, true_Const);
    
    MethodClosure MC_SMB_isRootScope = new_MethodClosure((Method)PMethod13118, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_isRootScope, MC_SMB_isRootScope);
}


static void init_SMB_parentScope() {
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    String string_13122 = new_String(L"RootScope has no parent!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13122_Const = new_Constant((Optr)string_13122);
    // error:. 
    Send PSend13123 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13122_Const);
    Array PThreadedCode13121 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13122, (Optr)&t_send1, (Optr)PSend13123, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13120 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13121, 2, PSend13123, self);
    
    MethodClosure MC_SMB_parentScope = new_MethodClosure((Method)PMethod13120, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_parentScope, MC_SMB_parentScope);
}


static void init_SMB_declare_() {
    Symbol SMB_declare_ = new_Symbol(L"declare:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13125 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13127 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    // asVariableAt:. 
    Send PSend13128 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_asVariableAt_, 1, (Optr)self);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend13129 = new_Send((Optr)self, SMB_declare_as_, 2, (Optr)PSend13127, (Optr)PSend13128);
    Array PThreadedCode13126 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13127, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend13128, (Optr)&t_send2, (Optr)PSend13129, (Optr)&t_method_return);
    Method PMethod13124 = new_Method_with(PArray13125, empty_Array, empty_Array, PThreadedCode13126, 1, PSend13129);
    
    MethodClosure MC_SMB_declare_ = new_MethodClosure((Method)PMethod13124, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_declare_, MC_SMB_declare_);
}


static void init_SMB_depth() {
    Symbol SMB_depth = new_Symbol(L"depth");
    SmallInt int_n1 = new_SmallInt(-1);
    Array PThreadedCode13131 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_method_return);
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    Method PMethod13130 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13131, 1, int_n1_Const);
    
    MethodClosure MC_SMB_depth = new_MethodClosure((Method)PMethod13130, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_depth, MC_SMB_depth);
}


static void init_class_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13133 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13136 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13138 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13141 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode13140 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13141, (Optr)&t_block_return);
    Block PBlock13139 = new_Block_with(empty_Array, empty_Array, PThreadedCode13140, 1, PSend13141);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13142 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)PSend13138, (Optr)PBlock13139);
    Array PThreadedCode13137 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13138, (Optr)&t_push_closure, (Optr)PBlock13139, (Optr)&t_send2, (Optr)PSend13142, (Optr)&t_method_return);
    Block PBlock13135 = new_Block_with(PArray13136, empty_Array, PThreadedCode13137, 1, PSend13142);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13143 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13135);
    Array PThreadedCode13134 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13135, (Optr)&t_send1, (Optr)PSend13143, (Optr)&t_method_return);
    Method PMethod13132 = new_Method_with(PArray13133, empty_Array, empty_Array, PThreadedCode13134, 1, PSend13143);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13132, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookup_, MC_SMB_lookup_);
}


static void init_class_SMB_lookupNamed_() {
    Symbol SMB_lookupNamed_ = new_Symbol(L"lookupNamed:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray13145 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_variableNotFound = new_Symbol(L"variableNotFound");
    // variableNotFound. 
    Send PSend13149 = new_Send((Optr)VAR_aSymbol_0_0, SMB_variableNotFound, 0);
    Array PThreadedCode13148 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send0, (Optr)PSend13149, (Optr)&t_block_return);
    Block PBlock13147 = new_Block_with(empty_Array, empty_Array, PThreadedCode13148, 1, PSend13149);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend13150 = new_Send((Optr)self, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)PBlock13147);
    Array PThreadedCode13146 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_closure, (Optr)PBlock13147, (Optr)&t_send2, (Optr)PSend13150, (Optr)&t_method_return);
    Method PMethod13144 = new_Method_with(PArray13145, empty_Array, empty_Array, PThreadedCode13146, 1, PSend13150);
    
    MethodClosure MC_SMB_lookupNamed_ = new_MethodClosure((Method)PMethod13144, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookupNamed_, MC_SMB_lookupNamed_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper13153 = new_Super(SMB_initialize, 0);
    Symbol SMB_clearGlobals = new_Symbol(L"clearGlobals");
    // clearGlobals. 
    Send PSend13154 = new_Send((Optr)self, SMB_clearGlobals, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13156 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13155 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13156);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13157 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13152 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper13153, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13154, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13155, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13156, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13157, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13151 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13152, 5, PSuper13153, PSend13154, PAssign13155, PSend13157, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13151, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_clearGlobals() {
    Symbol SMB_clearGlobals = new_Symbol(L"clearGlobals");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13161 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13160 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13161);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13162 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13159 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign13160, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13161, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13162, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13158 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13159, 3, PAssign13160, PSend13162, self);
    
    MethodClosure MC_SMB_clearGlobals = new_MethodClosure((Method)PMethod13158, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_clearGlobals, MC_SMB_clearGlobals);
}


static void init_class_SMB_lookupNamed_ifAbsent_() {
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray13164 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13166 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode13165 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend13166, (Optr)&t_method_return);
    Method PMethod13163 = new_Method_with(PArray13164, empty_Array, empty_Array, PThreadedCode13165, 1, PSend13166);
    
    MethodClosure MC_SMB_lookupNamed_ifAbsent_ = new_MethodClosure((Method)PMethod13163, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookupNamed_ifAbsent_, MC_SMB_lookupNamed_ifAbsent_);
}


static void init_class_SMB_globalDefinition() {
    Symbol SMB_globalDefinition = new_Symbol(L"globalDefinition");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13170 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_13172 = new_String(L"nil");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13173 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)nil_Const);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_13172_Const = new_Constant((Optr)string_13172);
    // with:with:. 
    Send PSend13174 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13172_Const, (Optr)PSend13173);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend13175 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend13174);
    String string_13176 = new_String(L"true");
    // new:. 
    Send PSend13177 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)true_Const);
    Constant string_13176_Const = new_Constant((Optr)string_13176);
    // with:with:. 
    Send PSend13178 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13176_Const, (Optr)PSend13177);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend13179 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend13178);
    SmallInt int_3 = new_SmallInt(3);
    String string_13180 = new_String(L"false");
    // new:. 
    Send PSend13181 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)false_Const);
    Constant string_13180_Const = new_Constant((Optr)string_13180);
    // with:with:. 
    Send PSend13182 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13180_Const, (Optr)PSend13181);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend13183 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend13182);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend13184 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode13171 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13172, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13173, (Optr)&t_send2, (Optr)PSend13174, (Optr)&t_send2, (Optr)PSend13175, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13176, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend13177, (Optr)&t_send2, (Optr)PSend13178, (Optr)&t_send2, (Optr)PSend13179, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13180, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend13181, (Optr)&t_send2, (Optr)PSend13182, (Optr)&t_send2, (Optr)PSend13183, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend13184, (Optr)&t_method_return);
    Block PBlock13169 = new_Block_with(PArray13170, empty_Array, PThreadedCode13171, 4, PSend13175, PSend13179, PSend13183, PSend13184);
    // new:. 
    Send PSend13185 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_3_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13186 = new_Send((Optr)PBlock13169, SMB_value_, 1, (Optr)PSend13185);
    Array PThreadedCode13168 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock13169, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend13185, (Optr)&t_send1, (Optr)PSend13186, (Optr)&t_method_return);
    Method PMethod13167 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13168, 1, PSend13186);
    
    MethodClosure MC_SMB_globalDefinition = new_MethodClosure((Method)PMethod13167, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_globalDefinition, MC_SMB_globalDefinition);
}


static void init_class_SMB_initializeGlobals() {
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    Symbol SMB_globalDefinition = new_Symbol(L"globalDefinition");
    // globalDefinition. 
    Send PSend13189 = new_Send((Optr)self, SMB_globalDefinition, 0);
    Variable VAR_pair_1_0 = new_Variable_named(L"pair", 1);
    Array PArray13191 = new_Array_with(1, (Optr)VAR_pair_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend13193 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend13194 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13195 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_put_, 2, (Optr)PSend13193, (Optr)PSend13194);
    Array PThreadedCode13192 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13193, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend13194, (Optr)&t_send2, (Optr)PSend13195, (Optr)&t_method_return);
    Block PBlock13190 = new_Block_with(PArray13191, empty_Array, PThreadedCode13192, 1, PSend13195);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13196 = new_Send((Optr)PSend13189, SMB_do_, 1, (Optr)PBlock13190);
    Array PThreadedCode13188 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13189, (Optr)&t_push_closure, (Optr)PBlock13190, (Optr)&t_send1, (Optr)PSend13196, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13187 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13188, 2, PSend13196, self);
    
    MethodClosure MC_SMB_initializeGlobals = new_MethodClosure((Method)PMethod13187, HEADER(Smalltalk_Compiler_RootScope_Class));
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