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
    Array PArray13336 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13339 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13341 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Variable VAR_el_2_0 = new_Variable_named(L"el", 2);
    Array PArray13343 = new_Array_with(1, (Optr)VAR_el_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13345 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_el_2_0);
    Array PThreadedCode13344 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_el_2_0, (Optr)&t_send1, (Optr)PSend13345, (Optr)&t_method_return);
    Block PBlock13342 = new_Block_with(PArray13343, empty_Array, PThreadedCode13344, 1, PSend13345);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend13346 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifPresent_, 2, (Optr)PSend13341, (Optr)PBlock13342);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend13347 = new_Send((Optr)self, SMB_class, 0);
    // lookup:. 
    Send PSend13348 = new_Send((Optr)PSend13347, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Array PThreadedCode13340 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13341, (Optr)&t_push_closure, (Optr)PBlock13342, (Optr)&t_send2, (Optr)PSend13346, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13347, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13348, (Optr)&t_method_return);
    Block PBlock13338 = new_Block_with(PArray13339, empty_Array, PThreadedCode13340, 2, PSend13346, PSend13348);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13349 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13338);
    Array PThreadedCode13337 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13338, (Optr)&t_send1, (Optr)PSend13349, (Optr)&t_method_return);
    Method PMethod13335 = new_Method_with(PArray13336, empty_Array, empty_Array, PThreadedCode13337, 1, PSend13349);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13335, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_declareAll_() {
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray13351 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray13356 = new_Array_with(1, (Optr)VAR_element_1_0);
    Symbol SMB_declare_ = new_Symbol(L"declare:");
    // declare:. 
    Send PSend13358 = new_Send((Optr)self, SMB_declare_, 1, (Optr)VAR_element_1_0);
    Array PThreadedCode13357 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_send1, (Optr)PSend13358, (Optr)&t_method_return);
    Block PBlock13355 = new_Block_with(PArray13356, empty_Array, PThreadedCode13357, 1, PSend13358);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13359 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock13355);
    Array PThreadedCode13354 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13355, (Optr)&t_send1, (Optr)PSend13359, (Optr)&t_block_return);
    Block PBlock13353 = new_Block_with(empty_Array, empty_Array, PThreadedCode13354, 1, PSend13359);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend13360 = new_Send((Optr)VAR_aCollection_0_0, SMB_ifNotNil_, 1, (Optr)PBlock13353);
    Array PThreadedCode13352 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13353, (Optr)&t_send1, (Optr)PSend13360, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13350 = new_Method_with(PArray13351, empty_Array, empty_Array, PThreadedCode13352, 2, PSend13360, self);
    
    MethodClosure MC_SMB_declareAll_ = new_MethodClosure((Method)PMethod13350, Smalltalk_Compiler_RootScope_Class);
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
    Send PSend13364 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign13363 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)PSend13364);
    Array PThreadedCode13362 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13363, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend13364, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13361 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13362, 2, PAssign13363, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13361, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_declare_as_() {
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray13366 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13369 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13373 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13374 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_1);
    Array PThreadedCode13372 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend13373, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend13374, (Optr)&t_block_return);
    Block PBlock13371 = new_Block_with(empty_Array, empty_Array, PThreadedCode13372, 2, PSend13373, PSend13374);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13375 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock13371);
    String string_13376 = new_String(L"Double declaration for: ");
    Constant string_13376_Const = new_Constant((Optr)string_13376);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend13377 = new_Send((Optr)string_13376_Const, SMB__append_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend13378 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend13377);
    Array PThreadedCode13370 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock13371, (Optr)&t_send2, (Optr)PSend13375, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13376, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend13377, (Optr)&t_send1, (Optr)PSend13378, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock13368 = new_Block_with(PArray13369, empty_Array, PThreadedCode13370, 3, PSend13375, PSend13378, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13379 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13368);
    Array PThreadedCode13367 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13368, (Optr)&t_send1, (Optr)PSend13379, (Optr)&t_method_return);
    Method PMethod13365 = new_Method_with(PArray13366, empty_Array, empty_Array, PThreadedCode13367, 1, PSend13379);
    
    MethodClosure MC_SMB_declare_as_ = new_MethodClosure((Method)PMethod13365, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_declare_as_, MC_SMB_declare_as_);
}


static void init_SMB_isRootScope() {
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
    Array PThreadedCode13381 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod13380 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13381, 1, true_Const);
    
    MethodClosure MC_SMB_isRootScope = new_MethodClosure((Method)PMethod13380, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_isRootScope, MC_SMB_isRootScope);
}


static void init_SMB_parentScope() {
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    String string_13384 = new_String(L"RootScope has no parent!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13384_Const = new_Constant((Optr)string_13384);
    // error:. 
    Send PSend13385 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13384_Const);
    Array PThreadedCode13383 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13384, (Optr)&t_send1, (Optr)PSend13385, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13382 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13383, 2, PSend13385, self);
    
    MethodClosure MC_SMB_parentScope = new_MethodClosure((Method)PMethod13382, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_parentScope, MC_SMB_parentScope);
}


static void init_SMB_declare_() {
    Symbol SMB_declare_ = new_Symbol(L"declare:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13387 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13389 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    // asVariableAt:. 
    Send PSend13390 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_asVariableAt_, 1, (Optr)self);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend13391 = new_Send((Optr)self, SMB_declare_as_, 2, (Optr)PSend13389, (Optr)PSend13390);
    Array PThreadedCode13388 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13389, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend13390, (Optr)&t_send2, (Optr)PSend13391, (Optr)&t_method_return);
    Method PMethod13386 = new_Method_with(PArray13387, empty_Array, empty_Array, PThreadedCode13388, 1, PSend13391);
    
    MethodClosure MC_SMB_declare_ = new_MethodClosure((Method)PMethod13386, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_declare_, MC_SMB_declare_);
}


static void init_SMB_depth() {
    Symbol SMB_depth = new_Symbol(L"depth");
    SmallInt int_n1 = new_SmallInt(-1);
    Array PThreadedCode13393 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_method_return);
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    Method PMethod13392 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13393, 1, int_n1_Const);
    
    MethodClosure MC_SMB_depth = new_MethodClosure((Method)PMethod13392, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_depth, MC_SMB_depth);
}


static void init_class_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13395 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13398 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13400 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13403 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode13402 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13403, (Optr)&t_block_return);
    Block PBlock13401 = new_Block_with(empty_Array, empty_Array, PThreadedCode13402, 1, PSend13403);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13404 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)PSend13400, (Optr)PBlock13401);
    Array PThreadedCode13399 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13400, (Optr)&t_push_closure, (Optr)PBlock13401, (Optr)&t_send2, (Optr)PSend13404, (Optr)&t_method_return);
    Block PBlock13397 = new_Block_with(PArray13398, empty_Array, PThreadedCode13399, 1, PSend13404);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13405 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13397);
    Array PThreadedCode13396 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13397, (Optr)&t_send1, (Optr)PSend13405, (Optr)&t_method_return);
    Method PMethod13394 = new_Method_with(PArray13395, empty_Array, empty_Array, PThreadedCode13396, 1, PSend13405);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13394, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookup_, MC_SMB_lookup_);
}


static void init_class_SMB_lookupNamed_() {
    Symbol SMB_lookupNamed_ = new_Symbol(L"lookupNamed:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray13407 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_variableNotFound = new_Symbol(L"variableNotFound");
    // variableNotFound. 
    Send PSend13411 = new_Send((Optr)VAR_aSymbol_0_0, SMB_variableNotFound, 0);
    Array PThreadedCode13410 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send0, (Optr)PSend13411, (Optr)&t_block_return);
    Block PBlock13409 = new_Block_with(empty_Array, empty_Array, PThreadedCode13410, 1, PSend13411);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend13412 = new_Send((Optr)self, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)PBlock13409);
    Array PThreadedCode13408 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_closure, (Optr)PBlock13409, (Optr)&t_send2, (Optr)PSend13412, (Optr)&t_method_return);
    Method PMethod13406 = new_Method_with(PArray13407, empty_Array, empty_Array, PThreadedCode13408, 1, PSend13412);
    
    MethodClosure MC_SMB_lookupNamed_ = new_MethodClosure((Method)PMethod13406, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookupNamed_, MC_SMB_lookupNamed_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper13415 = new_Super(SMB_initialize, 0);
    Symbol SMB_clearGlobals = new_Symbol(L"clearGlobals");
    // clearGlobals. 
    Send PSend13416 = new_Send((Optr)self, SMB_clearGlobals, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13418 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13417 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13418);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13419 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13414 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper13415, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13416, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13417, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13418, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13419, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13413 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13414, 5, PSuper13415, PSend13416, PAssign13417, PSend13419, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13413, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_clearGlobals() {
    Symbol SMB_clearGlobals = new_Symbol(L"clearGlobals");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13423 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13422 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13423);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13424 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13421 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign13422, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13423, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13424, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13421, 3, PAssign13422, PSend13424, self);
    
    MethodClosure MC_SMB_clearGlobals = new_MethodClosure((Method)PMethod13420, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_clearGlobals, MC_SMB_clearGlobals);
}


static void init_class_SMB_lookupNamed_ifAbsent_() {
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray13426 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13428 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode13427 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend13428, (Optr)&t_method_return);
    Method PMethod13425 = new_Method_with(PArray13426, empty_Array, empty_Array, PThreadedCode13427, 1, PSend13428);
    
    MethodClosure MC_SMB_lookupNamed_ifAbsent_ = new_MethodClosure((Method)PMethod13425, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookupNamed_ifAbsent_, MC_SMB_lookupNamed_ifAbsent_);
}


static void init_class_SMB_globalDefinition() {
    Symbol SMB_globalDefinition = new_Symbol(L"globalDefinition");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13432 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_13434 = new_String(L"nil");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13435 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)nil_Const);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_13434_Const = new_Constant((Optr)string_13434);
    // with:with:. 
    Send PSend13436 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13434_Const, (Optr)PSend13435);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend13437 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend13436);
    String string_13438 = new_String(L"true");
    // new:. 
    Send PSend13439 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)true_Const);
    Constant string_13438_Const = new_Constant((Optr)string_13438);
    // with:with:. 
    Send PSend13440 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13438_Const, (Optr)PSend13439);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend13441 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend13440);
    SmallInt int_3 = new_SmallInt(3);
    String string_13442 = new_String(L"false");
    // new:. 
    Send PSend13443 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)false_Const);
    Constant string_13442_Const = new_Constant((Optr)string_13442);
    // with:with:. 
    Send PSend13444 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13442_Const, (Optr)PSend13443);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend13445 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend13444);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend13446 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode13433 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13434, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13435, (Optr)&t_send2, (Optr)PSend13436, (Optr)&t_send2, (Optr)PSend13437, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13438, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend13439, (Optr)&t_send2, (Optr)PSend13440, (Optr)&t_send2, (Optr)PSend13441, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13442, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend13443, (Optr)&t_send2, (Optr)PSend13444, (Optr)&t_send2, (Optr)PSend13445, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend13446, (Optr)&t_method_return);
    Block PBlock13431 = new_Block_with(PArray13432, empty_Array, PThreadedCode13433, 4, PSend13437, PSend13441, PSend13445, PSend13446);
    // new:. 
    Send PSend13447 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_3_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13448 = new_Send((Optr)PBlock13431, SMB_value_, 1, (Optr)PSend13447);
    Array PThreadedCode13430 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock13431, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend13447, (Optr)&t_send1, (Optr)PSend13448, (Optr)&t_method_return);
    Method PMethod13429 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13430, 1, PSend13448);
    
    MethodClosure MC_SMB_globalDefinition = new_MethodClosure((Method)PMethod13429, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_globalDefinition, MC_SMB_globalDefinition);
}


static void init_class_SMB_initializeGlobals() {
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    Symbol SMB_globalDefinition = new_Symbol(L"globalDefinition");
    // globalDefinition. 
    Send PSend13451 = new_Send((Optr)self, SMB_globalDefinition, 0);
    Variable VAR_pair_1_0 = new_Variable_named(L"pair", 1);
    Array PArray13453 = new_Array_with(1, (Optr)VAR_pair_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend13455 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend13456 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13457 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_put_, 2, (Optr)PSend13455, (Optr)PSend13456);
    Array PThreadedCode13454 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13455, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend13456, (Optr)&t_send2, (Optr)PSend13457, (Optr)&t_method_return);
    Block PBlock13452 = new_Block_with(PArray13453, empty_Array, PThreadedCode13454, 1, PSend13457);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13458 = new_Send((Optr)PSend13451, SMB_do_, 1, (Optr)PBlock13452);
    Array PThreadedCode13450 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13451, (Optr)&t_push_closure, (Optr)PBlock13452, (Optr)&t_send1, (Optr)PSend13458, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13449 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13450, 2, PSend13458, self);
    
    MethodClosure MC_SMB_initializeGlobals = new_MethodClosure((Method)PMethod13449, HEADER(Smalltalk_Compiler_RootScope_Class));
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