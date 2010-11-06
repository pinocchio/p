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
    Array PArray13147 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13150 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13152 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Variable VAR_el_2_0 = new_Variable_named(L"el", 2);
    Array PArray13154 = new_Array_with(1, (Optr)VAR_el_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13156 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_el_2_0);
    Array PThreadedCode13155 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_el_2_0, (Optr)&t_send1, (Optr)PSend13156, (Optr)&t_method_return);
    Block PBlock13153 = new_Block_with(PArray13154, empty_Array, PThreadedCode13155, 1, PSend13156);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend13157 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifPresent_, 2, (Optr)PSend13152, (Optr)PBlock13153);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend13158 = new_Send((Optr)self, SMB_class, 0);
    // lookup:. 
    Send PSend13159 = new_Send((Optr)PSend13158, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Array PThreadedCode13151 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13152, (Optr)&t_push_closure, (Optr)PBlock13153, (Optr)&t_send2, (Optr)PSend13157, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13158, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13159, (Optr)&t_method_return);
    Block PBlock13149 = new_Block_with(PArray13150, empty_Array, PThreadedCode13151, 2, PSend13157, PSend13159);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13160 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13149);
    Array PThreadedCode13148 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13149, (Optr)&t_send1, (Optr)PSend13160, (Optr)&t_method_return);
    Method PMethod13146 = new_Method_with(PArray13147, empty_Array, empty_Array, PThreadedCode13148, 1, PSend13160);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13146, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_declareAll_() {
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray13162 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray13167 = new_Array_with(1, (Optr)VAR_element_1_0);
    Symbol SMB_declare_ = new_Symbol(L"declare:");
    // declare:. 
    Send PSend13169 = new_Send((Optr)self, SMB_declare_, 1, (Optr)VAR_element_1_0);
    Array PThreadedCode13168 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_send1, (Optr)PSend13169, (Optr)&t_method_return);
    Block PBlock13166 = new_Block_with(PArray13167, empty_Array, PThreadedCode13168, 1, PSend13169);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13170 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock13166);
    Array PThreadedCode13165 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13166, (Optr)&t_send1, (Optr)PSend13170, (Optr)&t_block_return);
    Block PBlock13164 = new_Block_with(empty_Array, empty_Array, PThreadedCode13165, 1, PSend13170);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend13171 = new_Send((Optr)VAR_aCollection_0_0, SMB_ifNotNil_, 1, (Optr)PBlock13164);
    Array PThreadedCode13163 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13164, (Optr)&t_send1, (Optr)PSend13171, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13161 = new_Method_with(PArray13162, empty_Array, empty_Array, PThreadedCode13163, 2, PSend13171, self);
    
    MethodClosure MC_SMB_declareAll_ = new_MethodClosure((Method)PMethod13161, Smalltalk_Compiler_RootScope_Class);
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
    Send PSend13175 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign13174 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)PSend13175);
    Array PThreadedCode13173 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13174, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend13175, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13172 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13173, 2, PAssign13174, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13172, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_declare_as_() {
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray13177 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13180 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13184 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13185 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_1);
    Array PThreadedCode13183 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend13184, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend13185, (Optr)&t_block_return);
    Block PBlock13182 = new_Block_with(empty_Array, empty_Array, PThreadedCode13183, 2, PSend13184, PSend13185);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13186 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock13182);
    String string_13187 = new_String(L"Double declaration for: ");
    Constant string_13187_Const = new_Constant((Optr)string_13187);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend13188 = new_Send((Optr)string_13187_Const, SMB__append_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend13189 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend13188);
    Array PThreadedCode13181 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock13182, (Optr)&t_send2, (Optr)PSend13186, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13187, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend13188, (Optr)&t_send1, (Optr)PSend13189, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock13179 = new_Block_with(PArray13180, empty_Array, PThreadedCode13181, 3, PSend13186, PSend13189, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13190 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13179);
    Array PThreadedCode13178 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13179, (Optr)&t_send1, (Optr)PSend13190, (Optr)&t_method_return);
    Method PMethod13176 = new_Method_with(PArray13177, empty_Array, empty_Array, PThreadedCode13178, 1, PSend13190);
    
    MethodClosure MC_SMB_declare_as_ = new_MethodClosure((Method)PMethod13176, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_declare_as_, MC_SMB_declare_as_);
}


static void init_SMB_isRootScope() {
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
    Array PThreadedCode13192 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod13191 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13192, 1, true_Const);
    
    MethodClosure MC_SMB_isRootScope = new_MethodClosure((Method)PMethod13191, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_isRootScope, MC_SMB_isRootScope);
}


static void init_SMB_parentScope() {
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    String string_13195 = new_String(L"RootScope has no parent!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13195_Const = new_Constant((Optr)string_13195);
    // error:. 
    Send PSend13196 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13195_Const);
    Array PThreadedCode13194 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13195, (Optr)&t_send1, (Optr)PSend13196, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13193 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13194, 2, PSend13196, self);
    
    MethodClosure MC_SMB_parentScope = new_MethodClosure((Method)PMethod13193, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_parentScope, MC_SMB_parentScope);
}


static void init_SMB_declare_() {
    Symbol SMB_declare_ = new_Symbol(L"declare:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13198 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13200 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    // asVariableAt:. 
    Send PSend13201 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_asVariableAt_, 1, (Optr)self);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend13202 = new_Send((Optr)self, SMB_declare_as_, 2, (Optr)PSend13200, (Optr)PSend13201);
    Array PThreadedCode13199 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13200, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend13201, (Optr)&t_send2, (Optr)PSend13202, (Optr)&t_method_return);
    Method PMethod13197 = new_Method_with(PArray13198, empty_Array, empty_Array, PThreadedCode13199, 1, PSend13202);
    
    MethodClosure MC_SMB_declare_ = new_MethodClosure((Method)PMethod13197, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_declare_, MC_SMB_declare_);
}


static void init_SMB_depth() {
    Symbol SMB_depth = new_Symbol(L"depth");
    SmallInt int_n1 = new_SmallInt(-1);
    Array PThreadedCode13204 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_method_return);
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    Method PMethod13203 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13204, 1, int_n1_Const);
    
    MethodClosure MC_SMB_depth = new_MethodClosure((Method)PMethod13203, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_depth, MC_SMB_depth);
}


static void init_class_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13206 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13209 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13211 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13214 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode13213 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13214, (Optr)&t_block_return);
    Block PBlock13212 = new_Block_with(empty_Array, empty_Array, PThreadedCode13213, 1, PSend13214);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13215 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)PSend13211, (Optr)PBlock13212);
    Array PThreadedCode13210 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13211, (Optr)&t_push_closure, (Optr)PBlock13212, (Optr)&t_send2, (Optr)PSend13215, (Optr)&t_method_return);
    Block PBlock13208 = new_Block_with(PArray13209, empty_Array, PThreadedCode13210, 1, PSend13215);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13216 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13208);
    Array PThreadedCode13207 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13208, (Optr)&t_send1, (Optr)PSend13216, (Optr)&t_method_return);
    Method PMethod13205 = new_Method_with(PArray13206, empty_Array, empty_Array, PThreadedCode13207, 1, PSend13216);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13205, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookup_, MC_SMB_lookup_);
}


static void init_class_SMB_lookupNamed_() {
    Symbol SMB_lookupNamed_ = new_Symbol(L"lookupNamed:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray13218 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_variableNotFound = new_Symbol(L"variableNotFound");
    // variableNotFound. 
    Send PSend13222 = new_Send((Optr)VAR_aSymbol_0_0, SMB_variableNotFound, 0);
    Array PThreadedCode13221 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send0, (Optr)PSend13222, (Optr)&t_block_return);
    Block PBlock13220 = new_Block_with(empty_Array, empty_Array, PThreadedCode13221, 1, PSend13222);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend13223 = new_Send((Optr)self, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)PBlock13220);
    Array PThreadedCode13219 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_closure, (Optr)PBlock13220, (Optr)&t_send2, (Optr)PSend13223, (Optr)&t_method_return);
    Method PMethod13217 = new_Method_with(PArray13218, empty_Array, empty_Array, PThreadedCode13219, 1, PSend13223);
    
    MethodClosure MC_SMB_lookupNamed_ = new_MethodClosure((Method)PMethod13217, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookupNamed_, MC_SMB_lookupNamed_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper13226 = new_Super(SMB_initialize, 0);
    Symbol SMB_clearGlobals = new_Symbol(L"clearGlobals");
    // clearGlobals. 
    Send PSend13227 = new_Send((Optr)self, SMB_clearGlobals, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13229 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13228 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13229);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13230 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13225 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper13226, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13227, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13228, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13229, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13230, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13224 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13225, 5, PSuper13226, PSend13227, PAssign13228, PSend13230, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13224, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_clearGlobals() {
    Symbol SMB_clearGlobals = new_Symbol(L"clearGlobals");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13234 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13233 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13234);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13235 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13232 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign13233, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13234, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13235, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13231 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13232, 3, PAssign13233, PSend13235, self);
    
    MethodClosure MC_SMB_clearGlobals = new_MethodClosure((Method)PMethod13231, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_clearGlobals, MC_SMB_clearGlobals);
}


static void init_class_SMB_lookupNamed_ifAbsent_() {
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray13237 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13239 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode13238 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend13239, (Optr)&t_method_return);
    Method PMethod13236 = new_Method_with(PArray13237, empty_Array, empty_Array, PThreadedCode13238, 1, PSend13239);
    
    MethodClosure MC_SMB_lookupNamed_ifAbsent_ = new_MethodClosure((Method)PMethod13236, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookupNamed_ifAbsent_, MC_SMB_lookupNamed_ifAbsent_);
}


static void init_class_SMB_globalDefinition() {
    Symbol SMB_globalDefinition = new_Symbol(L"globalDefinition");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13243 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_13245 = new_String(L"nil");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13246 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)nil_Const);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_13245_Const = new_Constant((Optr)string_13245);
    // with:with:. 
    Send PSend13247 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13245_Const, (Optr)PSend13246);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend13248 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend13247);
    String string_13249 = new_String(L"true");
    // new:. 
    Send PSend13250 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)true_Const);
    Constant string_13249_Const = new_Constant((Optr)string_13249);
    // with:with:. 
    Send PSend13251 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13249_Const, (Optr)PSend13250);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend13252 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend13251);
    SmallInt int_3 = new_SmallInt(3);
    String string_13253 = new_String(L"false");
    // new:. 
    Send PSend13254 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)false_Const);
    Constant string_13253_Const = new_Constant((Optr)string_13253);
    // with:with:. 
    Send PSend13255 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13253_Const, (Optr)PSend13254);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend13256 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend13255);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend13257 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode13244 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13245, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13246, (Optr)&t_send2, (Optr)PSend13247, (Optr)&t_send2, (Optr)PSend13248, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13249, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend13250, (Optr)&t_send2, (Optr)PSend13251, (Optr)&t_send2, (Optr)PSend13252, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13253, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend13254, (Optr)&t_send2, (Optr)PSend13255, (Optr)&t_send2, (Optr)PSend13256, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend13257, (Optr)&t_method_return);
    Block PBlock13242 = new_Block_with(PArray13243, empty_Array, PThreadedCode13244, 4, PSend13248, PSend13252, PSend13256, PSend13257);
    // new:. 
    Send PSend13258 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_3_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13259 = new_Send((Optr)PBlock13242, SMB_value_, 1, (Optr)PSend13258);
    Array PThreadedCode13241 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock13242, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend13258, (Optr)&t_send1, (Optr)PSend13259, (Optr)&t_method_return);
    Method PMethod13240 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13241, 1, PSend13259);
    
    MethodClosure MC_SMB_globalDefinition = new_MethodClosure((Method)PMethod13240, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_globalDefinition, MC_SMB_globalDefinition);
}


static void init_class_SMB_initializeGlobals() {
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    Symbol SMB_globalDefinition = new_Symbol(L"globalDefinition");
    // globalDefinition. 
    Send PSend13262 = new_Send((Optr)self, SMB_globalDefinition, 0);
    Variable VAR_pair_1_0 = new_Variable_named(L"pair", 1);
    Array PArray13264 = new_Array_with(1, (Optr)VAR_pair_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend13266 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend13267 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13268 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_put_, 2, (Optr)PSend13266, (Optr)PSend13267);
    Array PThreadedCode13265 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13266, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend13267, (Optr)&t_send2, (Optr)PSend13268, (Optr)&t_method_return);
    Block PBlock13263 = new_Block_with(PArray13264, empty_Array, PThreadedCode13265, 1, PSend13268);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13269 = new_Send((Optr)PSend13262, SMB_do_, 1, (Optr)PBlock13263);
    Array PThreadedCode13261 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13262, (Optr)&t_push_closure, (Optr)PBlock13263, (Optr)&t_send1, (Optr)PSend13269, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13260 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13261, 2, PSend13269, self);
    
    MethodClosure MC_SMB_initializeGlobals = new_MethodClosure((Method)PMethod13260, HEADER(Smalltalk_Compiler_RootScope_Class));
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