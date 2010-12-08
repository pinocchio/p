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
    Array PArray13395 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13398 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13400 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Variable VAR_el_2_0 = new_Variable_named(L"el", 2);
    Array PArray13402 = new_Array_with(1, (Optr)VAR_el_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13404 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_el_2_0);
    Array PThreadedCode13403 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_el_2_0, (Optr)&t_send1, (Optr)PSend13404, (Optr)&t_method_return);
    Block PBlock13401 = new_Block_with(PArray13402, empty_Array, PThreadedCode13403, 1, PSend13404);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend13405 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifPresent_, 2, (Optr)PSend13400, (Optr)PBlock13401);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend13406 = new_Send((Optr)self, SMB_class, 0);
    // lookup:. 
    Send PSend13407 = new_Send((Optr)PSend13406, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Array PThreadedCode13399 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13400, (Optr)&t_push_closure, (Optr)PBlock13401, (Optr)&t_send2, (Optr)PSend13405, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13406, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13407, (Optr)&t_method_return);
    Block PBlock13397 = new_Block_with(PArray13398, empty_Array, PThreadedCode13399, 2, PSend13405, PSend13407);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13408 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13397);
    Array PThreadedCode13396 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13397, (Optr)&t_send1, (Optr)PSend13408, (Optr)&t_method_return);
    Method PMethod13394 = new_Method_with(PArray13395, empty_Array, empty_Array, PThreadedCode13396, 1, PSend13408);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13394, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_declareAll_() {
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray13410 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray13415 = new_Array_with(1, (Optr)VAR_element_1_0);
    Symbol SMB_declare_ = new_Symbol(L"declare:");
    // declare:. 
    Send PSend13417 = new_Send((Optr)self, SMB_declare_, 1, (Optr)VAR_element_1_0);
    Array PThreadedCode13416 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_send1, (Optr)PSend13417, (Optr)&t_method_return);
    Block PBlock13414 = new_Block_with(PArray13415, empty_Array, PThreadedCode13416, 1, PSend13417);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13418 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock13414);
    Array PThreadedCode13413 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13414, (Optr)&t_send1, (Optr)PSend13418, (Optr)&t_block_return);
    Block PBlock13412 = new_Block_with(empty_Array, empty_Array, PThreadedCode13413, 1, PSend13418);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend13419 = new_Send((Optr)VAR_aCollection_0_0, SMB_ifNotNil_, 1, (Optr)PBlock13412);
    Array PThreadedCode13411 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13412, (Optr)&t_send1, (Optr)PSend13419, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13409 = new_Method_with(PArray13410, empty_Array, empty_Array, PThreadedCode13411, 2, PSend13419, self);
    
    MethodClosure MC_SMB_declareAll_ = new_MethodClosure((Method)PMethod13409, Smalltalk_Compiler_RootScope_Class);
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
    Send PSend13423 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign13422 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)PSend13423);
    Array PThreadedCode13421 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13422, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend13423, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13421, 2, PAssign13422, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13420, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_declare_as_() {
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray13425 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13428 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13432 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13433 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_1);
    Array PThreadedCode13431 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend13432, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend13433, (Optr)&t_block_return);
    Block PBlock13430 = new_Block_with(empty_Array, empty_Array, PThreadedCode13431, 2, PSend13432, PSend13433);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13434 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock13430);
    String string_13435 = new_String(L"Double declaration for: ");
    Constant string_13435_Const = new_Constant((Optr)string_13435);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend13436 = new_Send((Optr)string_13435_Const, SMB__append_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend13437 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend13436);
    Array PThreadedCode13429 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock13430, (Optr)&t_send2, (Optr)PSend13434, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13435, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend13436, (Optr)&t_send1, (Optr)PSend13437, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock13427 = new_Block_with(PArray13428, empty_Array, PThreadedCode13429, 3, PSend13434, PSend13437, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13438 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13427);
    Array PThreadedCode13426 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13427, (Optr)&t_send1, (Optr)PSend13438, (Optr)&t_method_return);
    Method PMethod13424 = new_Method_with(PArray13425, empty_Array, empty_Array, PThreadedCode13426, 1, PSend13438);
    
    MethodClosure MC_SMB_declare_as_ = new_MethodClosure((Method)PMethod13424, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_declare_as_, MC_SMB_declare_as_);
}


static void init_SMB_isRootScope() {
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
    Array PThreadedCode13440 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod13439 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13440, 1, true_Const);
    
    MethodClosure MC_SMB_isRootScope = new_MethodClosure((Method)PMethod13439, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_isRootScope, MC_SMB_isRootScope);
}


static void init_SMB_parentScope() {
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    String string_13443 = new_String(L"RootScope has no parent!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13443_Const = new_Constant((Optr)string_13443);
    // error:. 
    Send PSend13444 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13443_Const);
    Array PThreadedCode13442 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13443, (Optr)&t_send1, (Optr)PSend13444, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13441 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13442, 2, PSend13444, self);
    
    MethodClosure MC_SMB_parentScope = new_MethodClosure((Method)PMethod13441, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_parentScope, MC_SMB_parentScope);
}


static void init_SMB_declare_() {
    Symbol SMB_declare_ = new_Symbol(L"declare:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13446 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13448 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    // asVariableAt:. 
    Send PSend13449 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_asVariableAt_, 1, (Optr)self);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend13450 = new_Send((Optr)self, SMB_declare_as_, 2, (Optr)PSend13448, (Optr)PSend13449);
    Array PThreadedCode13447 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13448, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend13449, (Optr)&t_send2, (Optr)PSend13450, (Optr)&t_method_return);
    Method PMethod13445 = new_Method_with(PArray13446, empty_Array, empty_Array, PThreadedCode13447, 1, PSend13450);
    
    MethodClosure MC_SMB_declare_ = new_MethodClosure((Method)PMethod13445, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_declare_, MC_SMB_declare_);
}


static void init_SMB_depth() {
    Symbol SMB_depth = new_Symbol(L"depth");
    SmallInt int_n1 = new_SmallInt(-1);
    Array PThreadedCode13452 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_method_return);
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    Method PMethod13451 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13452, 1, int_n1_Const);
    
    MethodClosure MC_SMB_depth = new_MethodClosure((Method)PMethod13451, Smalltalk_Compiler_RootScope_Class);
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_depth, MC_SMB_depth);
}


static void init_class_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13454 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13457 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13459 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13462 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode13461 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13462, (Optr)&t_block_return);
    Block PBlock13460 = new_Block_with(empty_Array, empty_Array, PThreadedCode13461, 1, PSend13462);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13463 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)PSend13459, (Optr)PBlock13460);
    Array PThreadedCode13458 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13459, (Optr)&t_push_closure, (Optr)PBlock13460, (Optr)&t_send2, (Optr)PSend13463, (Optr)&t_method_return);
    Block PBlock13456 = new_Block_with(PArray13457, empty_Array, PThreadedCode13458, 1, PSend13463);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13464 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13456);
    Array PThreadedCode13455 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13456, (Optr)&t_send1, (Optr)PSend13464, (Optr)&t_method_return);
    Method PMethod13453 = new_Method_with(PArray13454, empty_Array, empty_Array, PThreadedCode13455, 1, PSend13464);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13453, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookup_, MC_SMB_lookup_);
}


static void init_class_SMB_lookupNamed_() {
    Symbol SMB_lookupNamed_ = new_Symbol(L"lookupNamed:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray13466 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_variableNotFound = new_Symbol(L"variableNotFound");
    // variableNotFound. 
    Send PSend13470 = new_Send((Optr)VAR_aSymbol_0_0, SMB_variableNotFound, 0);
    Array PThreadedCode13469 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send0, (Optr)PSend13470, (Optr)&t_block_return);
    Block PBlock13468 = new_Block_with(empty_Array, empty_Array, PThreadedCode13469, 1, PSend13470);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend13471 = new_Send((Optr)self, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)PBlock13468);
    Array PThreadedCode13467 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_closure, (Optr)PBlock13468, (Optr)&t_send2, (Optr)PSend13471, (Optr)&t_method_return);
    Method PMethod13465 = new_Method_with(PArray13466, empty_Array, empty_Array, PThreadedCode13467, 1, PSend13471);
    
    MethodClosure MC_SMB_lookupNamed_ = new_MethodClosure((Method)PMethod13465, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookupNamed_, MC_SMB_lookupNamed_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper13474 = new_Super(SMB_initialize, 0);
    Symbol SMB_clearGlobals = new_Symbol(L"clearGlobals");
    // clearGlobals. 
    Send PSend13475 = new_Send((Optr)self, SMB_clearGlobals, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13477 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13476 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13477);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13478 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13473 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper13474, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13475, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13476, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13477, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13478, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13472 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13473, 5, PSuper13474, PSend13475, PAssign13476, PSend13478, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13472, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_clearGlobals() {
    Symbol SMB_clearGlobals = new_Symbol(L"clearGlobals");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13482 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13481 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13482);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13483 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13480 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign13481, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13482, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13483, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13479 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13480, 3, PAssign13481, PSend13483, self);
    
    MethodClosure MC_SMB_clearGlobals = new_MethodClosure((Method)PMethod13479, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_clearGlobals, MC_SMB_clearGlobals);
}


static void init_class_SMB_lookupNamed_ifAbsent_() {
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray13485 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13487 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode13486 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend13487, (Optr)&t_method_return);
    Method PMethod13484 = new_Method_with(PArray13485, empty_Array, empty_Array, PThreadedCode13486, 1, PSend13487);
    
    MethodClosure MC_SMB_lookupNamed_ifAbsent_ = new_MethodClosure((Method)PMethod13484, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookupNamed_ifAbsent_, MC_SMB_lookupNamed_ifAbsent_);
}


static void init_class_SMB_globalDefinition() {
    Symbol SMB_globalDefinition = new_Symbol(L"globalDefinition");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13491 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_13493 = new_String(L"nil");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13494 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)nil_Const);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_13493_Const = new_Constant((Optr)string_13493);
    // with:with:. 
    Send PSend13495 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13493_Const, (Optr)PSend13494);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend13496 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend13495);
    String string_13497 = new_String(L"true");
    // new:. 
    Send PSend13498 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)true_Const);
    Constant string_13497_Const = new_Constant((Optr)string_13497);
    // with:with:. 
    Send PSend13499 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13497_Const, (Optr)PSend13498);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend13500 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend13499);
    SmallInt int_3 = new_SmallInt(3);
    String string_13501 = new_String(L"false");
    // new:. 
    Send PSend13502 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)false_Const);
    Constant string_13501_Const = new_Constant((Optr)string_13501);
    // with:with:. 
    Send PSend13503 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13501_Const, (Optr)PSend13502);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend13504 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend13503);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend13505 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode13492 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13493, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13494, (Optr)&t_send2, (Optr)PSend13495, (Optr)&t_send2, (Optr)PSend13496, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13497, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend13498, (Optr)&t_send2, (Optr)PSend13499, (Optr)&t_send2, (Optr)PSend13500, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13501, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend13502, (Optr)&t_send2, (Optr)PSend13503, (Optr)&t_send2, (Optr)PSend13504, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend13505, (Optr)&t_method_return);
    Block PBlock13490 = new_Block_with(PArray13491, empty_Array, PThreadedCode13492, 4, PSend13496, PSend13500, PSend13504, PSend13505);
    // new:. 
    Send PSend13506 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_3_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13507 = new_Send((Optr)PBlock13490, SMB_value_, 1, (Optr)PSend13506);
    Array PThreadedCode13489 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock13490, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend13506, (Optr)&t_send1, (Optr)PSend13507, (Optr)&t_method_return);
    Method PMethod13488 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13489, 1, PSend13507);
    
    MethodClosure MC_SMB_globalDefinition = new_MethodClosure((Method)PMethod13488, HEADER(Smalltalk_Compiler_RootScope_Class));
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_globalDefinition, MC_SMB_globalDefinition);
}


static void init_class_SMB_initializeGlobals() {
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    Symbol SMB_globalDefinition = new_Symbol(L"globalDefinition");
    // globalDefinition. 
    Send PSend13510 = new_Send((Optr)self, SMB_globalDefinition, 0);
    Variable VAR_pair_1_0 = new_Variable_named(L"pair", 1);
    Array PArray13512 = new_Array_with(1, (Optr)VAR_pair_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend13514 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend13515 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13516 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_put_, 2, (Optr)PSend13514, (Optr)PSend13515);
    Array PThreadedCode13513 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13514, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend13515, (Optr)&t_send2, (Optr)PSend13516, (Optr)&t_method_return);
    Block PBlock13511 = new_Block_with(PArray13512, empty_Array, PThreadedCode13513, 1, PSend13516);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13517 = new_Send((Optr)PSend13510, SMB_do_, 1, (Optr)PBlock13511);
    Array PThreadedCode13509 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13510, (Optr)&t_push_closure, (Optr)PBlock13511, (Optr)&t_send1, (Optr)PSend13517, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13508 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13509, 2, PSend13517, self);
    
    MethodClosure MC_SMB_initializeGlobals = new_MethodClosure((Method)PMethod13508, HEADER(Smalltalk_Compiler_RootScope_Class));
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