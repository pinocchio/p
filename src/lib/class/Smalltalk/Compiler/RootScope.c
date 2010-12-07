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
<<<<<<< HEAD
    Array PArray13368 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13371 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13373 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Variable VAR_el_2_0 = new_Variable_named(L"el", 2);
    Array PArray13375 = new_Array_with(1, (Optr)VAR_el_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13377 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_el_2_0);
    Array PThreadedCode13376 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_el_2_0, (Optr)&t_send1, (Optr)PSend13377, (Optr)&t_method_return);
    Block PBlock13374 = new_Block_with(PArray13375, empty_Array, PThreadedCode13376, 1, PSend13377);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend13378 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifPresent_, 2, (Optr)PSend13373, (Optr)PBlock13374);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend13379 = new_Send((Optr)self, SMB_class, 0);
    // lookup:. 
    Send PSend13380 = new_Send((Optr)PSend13379, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Array PThreadedCode13372 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13373, (Optr)&t_push_closure, (Optr)PBlock13374, (Optr)&t_send2, (Optr)PSend13378, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13379, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13380, (Optr)&t_method_return);
    Block PBlock13370 = new_Block_with(PArray13371, empty_Array, PThreadedCode13372, 2, PSend13378, PSend13380);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13381 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13370);
    Array PThreadedCode13369 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13370, (Optr)&t_send1, (Optr)PSend13381, (Optr)&t_method_return);
    Method PMethod13367 = new_Method_with(PArray13368, empty_Array, empty_Array, PThreadedCode13369, 1, PSend13381);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13367, Smalltalk_Compiler_RootScope_Class);
=======
    Array PArray13334 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13337 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13339 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Variable VAR_el_2_0 = new_Variable_named(L"el", 2);
    Array PArray13341 = new_Array_with(1, (Optr)VAR_el_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13343 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_el_2_0);
    Array PThreadedCode13342 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_el_2_0, (Optr)&t_send1, (Optr)PSend13343, (Optr)&t_method_return);
    Block PBlock13340 = new_Block_with(PArray13341, empty_Array, PThreadedCode13342, 1, PSend13343);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend13344 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifPresent_, 2, (Optr)PSend13339, (Optr)PBlock13340);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend13345 = new_Send((Optr)self, SMB_class, 0);
    // lookup:. 
    Send PSend13346 = new_Send((Optr)PSend13345, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Array PThreadedCode13338 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13339, (Optr)&t_push_closure, (Optr)PBlock13340, (Optr)&t_send2, (Optr)PSend13344, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13345, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13346, (Optr)&t_method_return);
    Block PBlock13336 = new_Block_with(PArray13337, empty_Array, PThreadedCode13338, 2, PSend13344, PSend13346);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13347 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13336);
    Array PThreadedCode13335 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13336, (Optr)&t_send1, (Optr)PSend13347, (Optr)&t_method_return);
    Method PMethod13333 = new_Method_with(PArray13334, empty_Array, empty_Array, PThreadedCode13335, 1, PSend13347);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13333, Smalltalk_Compiler_RootScope_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_declareAll_() {
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
<<<<<<< HEAD
    Array PArray13383 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray13388 = new_Array_with(1, (Optr)VAR_element_1_0);
    Symbol SMB_declare_ = new_Symbol(L"declare:");
    // declare:. 
    Send PSend13390 = new_Send((Optr)self, SMB_declare_, 1, (Optr)VAR_element_1_0);
    Array PThreadedCode13389 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_send1, (Optr)PSend13390, (Optr)&t_method_return);
    Block PBlock13387 = new_Block_with(PArray13388, empty_Array, PThreadedCode13389, 1, PSend13390);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13391 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock13387);
    Array PThreadedCode13386 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13387, (Optr)&t_send1, (Optr)PSend13391, (Optr)&t_block_return);
    Block PBlock13385 = new_Block_with(empty_Array, empty_Array, PThreadedCode13386, 1, PSend13391);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend13392 = new_Send((Optr)VAR_aCollection_0_0, SMB_ifNotNil_, 1, (Optr)PBlock13385);
    Array PThreadedCode13384 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13385, (Optr)&t_send1, (Optr)PSend13392, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13382 = new_Method_with(PArray13383, empty_Array, empty_Array, PThreadedCode13384, 2, PSend13392, self);
    
    MethodClosure MC_SMB_declareAll_ = new_MethodClosure((Method)PMethod13382, Smalltalk_Compiler_RootScope_Class);
=======
    Array PArray13349 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray13354 = new_Array_with(1, (Optr)VAR_element_1_0);
    Symbol SMB_declare_ = new_Symbol(L"declare:");
    // declare:. 
    Send PSend13356 = new_Send((Optr)self, SMB_declare_, 1, (Optr)VAR_element_1_0);
    Array PThreadedCode13355 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_send1, (Optr)PSend13356, (Optr)&t_method_return);
    Block PBlock13353 = new_Block_with(PArray13354, empty_Array, PThreadedCode13355, 1, PSend13356);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13357 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock13353);
    Array PThreadedCode13352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13353, (Optr)&t_send1, (Optr)PSend13357, (Optr)&t_block_return);
    Block PBlock13351 = new_Block_with(empty_Array, empty_Array, PThreadedCode13352, 1, PSend13357);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend13358 = new_Send((Optr)VAR_aCollection_0_0, SMB_ifNotNil_, 1, (Optr)PBlock13351);
    Array PThreadedCode13350 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock13351, (Optr)&t_send1, (Optr)PSend13358, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13348 = new_Method_with(PArray13349, empty_Array, empty_Array, PThreadedCode13350, 2, PSend13358, self);
    
    MethodClosure MC_SMB_declareAll_ = new_MethodClosure((Method)PMethod13348, Smalltalk_Compiler_RootScope_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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
<<<<<<< HEAD
    Send PSend13396 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign13395 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)PSend13396);
    Array PThreadedCode13394 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13395, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend13396, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13393 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13394, 2, PAssign13395, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13393, Smalltalk_Compiler_RootScope_Class);
=======
    Send PSend13362 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign13361 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)PSend13362);
    Array PThreadedCode13360 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13361, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend13362, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13359 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13360, 2, PAssign13361, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13359, Smalltalk_Compiler_RootScope_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_declare_as_() {
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
<<<<<<< HEAD
    Array PArray13398 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13401 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13405 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13406 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_1);
    Array PThreadedCode13404 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend13405, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend13406, (Optr)&t_block_return);
    Block PBlock13403 = new_Block_with(empty_Array, empty_Array, PThreadedCode13404, 2, PSend13405, PSend13406);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13407 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock13403);
    String string_13408 = new_String(L"Double declaration for: ");
    Constant string_13408_Const = new_Constant((Optr)string_13408);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend13409 = new_Send((Optr)string_13408_Const, SMB__append_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend13410 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend13409);
    Array PThreadedCode13402 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock13403, (Optr)&t_send2, (Optr)PSend13407, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13408, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend13409, (Optr)&t_send1, (Optr)PSend13410, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock13400 = new_Block_with(PArray13401, empty_Array, PThreadedCode13402, 3, PSend13407, PSend13410, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13411 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13400);
    Array PThreadedCode13399 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13400, (Optr)&t_send1, (Optr)PSend13411, (Optr)&t_method_return);
    Method PMethod13397 = new_Method_with(PArray13398, empty_Array, empty_Array, PThreadedCode13399, 1, PSend13411);
    
    MethodClosure MC_SMB_declare_as_ = new_MethodClosure((Method)PMethod13397, Smalltalk_Compiler_RootScope_Class);
=======
    Array PArray13364 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13367 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13371 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13372 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_1);
    Array PThreadedCode13370 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend13371, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend13372, (Optr)&t_block_return);
    Block PBlock13369 = new_Block_with(empty_Array, empty_Array, PThreadedCode13370, 2, PSend13371, PSend13372);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13373 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_declarations, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock13369);
    String string_13374 = new_String(L"Double declaration for: ");
    Constant string_13374_Const = new_Constant((Optr)string_13374);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend13375 = new_Send((Optr)string_13374_Const, SMB__append_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend13376 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend13375);
    Array PThreadedCode13368 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_declarations, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock13369, (Optr)&t_send2, (Optr)PSend13373, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13374, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend13375, (Optr)&t_send1, (Optr)PSend13376, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock13366 = new_Block_with(PArray13367, empty_Array, PThreadedCode13368, 3, PSend13373, PSend13376, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13377 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13366);
    Array PThreadedCode13365 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13366, (Optr)&t_send1, (Optr)PSend13377, (Optr)&t_method_return);
    Method PMethod13363 = new_Method_with(PArray13364, empty_Array, empty_Array, PThreadedCode13365, 1, PSend13377);
    
    MethodClosure MC_SMB_declare_as_ = new_MethodClosure((Method)PMethod13363, Smalltalk_Compiler_RootScope_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_declare_as_, MC_SMB_declare_as_);
}


static void init_SMB_isRootScope() {
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
<<<<<<< HEAD
    Array PThreadedCode13413 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod13412 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13413, 1, true_Const);
    
    MethodClosure MC_SMB_isRootScope = new_MethodClosure((Method)PMethod13412, Smalltalk_Compiler_RootScope_Class);
=======
    Array PThreadedCode13379 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod13378 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13379, 1, true_Const);
    
    MethodClosure MC_SMB_isRootScope = new_MethodClosure((Method)PMethod13378, Smalltalk_Compiler_RootScope_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_isRootScope, MC_SMB_isRootScope);
}


static void init_SMB_parentScope() {
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
<<<<<<< HEAD
    String string_13416 = new_String(L"RootScope has no parent!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13416_Const = new_Constant((Optr)string_13416);
    // error:. 
    Send PSend13417 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13416_Const);
    Array PThreadedCode13415 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13416, (Optr)&t_send1, (Optr)PSend13417, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13414 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13415, 2, PSend13417, self);
    
    MethodClosure MC_SMB_parentScope = new_MethodClosure((Method)PMethod13414, Smalltalk_Compiler_RootScope_Class);
=======
    String string_13382 = new_String(L"RootScope has no parent!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13382_Const = new_Constant((Optr)string_13382);
    // error:. 
    Send PSend13383 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13382_Const);
    Array PThreadedCode13381 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13382, (Optr)&t_send1, (Optr)PSend13383, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13380 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13381, 2, PSend13383, self);
    
    MethodClosure MC_SMB_parentScope = new_MethodClosure((Method)PMethod13380, Smalltalk_Compiler_RootScope_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_parentScope, MC_SMB_parentScope);
}


static void init_SMB_declare_() {
    Symbol SMB_declare_ = new_Symbol(L"declare:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
<<<<<<< HEAD
    Array PArray13419 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13421 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    // asVariableAt:. 
    Send PSend13422 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_asVariableAt_, 1, (Optr)self);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend13423 = new_Send((Optr)self, SMB_declare_as_, 2, (Optr)PSend13421, (Optr)PSend13422);
    Array PThreadedCode13420 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13421, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend13422, (Optr)&t_send2, (Optr)PSend13423, (Optr)&t_method_return);
    Method PMethod13418 = new_Method_with(PArray13419, empty_Array, empty_Array, PThreadedCode13420, 1, PSend13423);
    
    MethodClosure MC_SMB_declare_ = new_MethodClosure((Method)PMethod13418, Smalltalk_Compiler_RootScope_Class);
=======
    Array PArray13385 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13387 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    // asVariableAt:. 
    Send PSend13388 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_asVariableAt_, 1, (Optr)self);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend13389 = new_Send((Optr)self, SMB_declare_as_, 2, (Optr)PSend13387, (Optr)PSend13388);
    Array PThreadedCode13386 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13387, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend13388, (Optr)&t_send2, (Optr)PSend13389, (Optr)&t_method_return);
    Method PMethod13384 = new_Method_with(PArray13385, empty_Array, empty_Array, PThreadedCode13386, 1, PSend13389);
    
    MethodClosure MC_SMB_declare_ = new_MethodClosure((Method)PMethod13384, Smalltalk_Compiler_RootScope_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_declare_, MC_SMB_declare_);
}


static void init_SMB_depth() {
    Symbol SMB_depth = new_Symbol(L"depth");
    SmallInt int_n1 = new_SmallInt(-1);
<<<<<<< HEAD
    Array PThreadedCode13425 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_method_return);
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    Method PMethod13424 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13425, 1, int_n1_Const);
    
    MethodClosure MC_SMB_depth = new_MethodClosure((Method)PMethod13424, Smalltalk_Compiler_RootScope_Class);
=======
    Array PThreadedCode13391 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_method_return);
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    Method PMethod13390 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13391, 1, int_n1_Const);
    
    MethodClosure MC_SMB_depth = new_MethodClosure((Method)PMethod13390, Smalltalk_Compiler_RootScope_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_RootScope_Class, SMB_depth, MC_SMB_depth);
}


static void init_class_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
<<<<<<< HEAD
    Array PArray13427 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13430 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13432 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13435 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode13434 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13435, (Optr)&t_block_return);
    Block PBlock13433 = new_Block_with(empty_Array, empty_Array, PThreadedCode13434, 1, PSend13435);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13436 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)PSend13432, (Optr)PBlock13433);
    Array PThreadedCode13431 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13432, (Optr)&t_push_closure, (Optr)PBlock13433, (Optr)&t_send2, (Optr)PSend13436, (Optr)&t_method_return);
    Block PBlock13429 = new_Block_with(PArray13430, empty_Array, PThreadedCode13431, 1, PSend13436);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13437 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13429);
    Array PThreadedCode13428 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13429, (Optr)&t_send1, (Optr)PSend13437, (Optr)&t_method_return);
    Method PMethod13426 = new_Method_with(PArray13427, empty_Array, empty_Array, PThreadedCode13428, 1, PSend13437);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13426, HEADER(Smalltalk_Compiler_RootScope_Class));
=======
    Array PArray13393 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13396 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13398 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13401 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode13400 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13401, (Optr)&t_block_return);
    Block PBlock13399 = new_Block_with(empty_Array, empty_Array, PThreadedCode13400, 1, PSend13401);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13402 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)PSend13398, (Optr)PBlock13399);
    Array PThreadedCode13397 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13398, (Optr)&t_push_closure, (Optr)PBlock13399, (Optr)&t_send2, (Optr)PSend13402, (Optr)&t_method_return);
    Block PBlock13395 = new_Block_with(PArray13396, empty_Array, PThreadedCode13397, 1, PSend13402);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13403 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13395);
    Array PThreadedCode13394 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13395, (Optr)&t_send1, (Optr)PSend13403, (Optr)&t_method_return);
    Method PMethod13392 = new_Method_with(PArray13393, empty_Array, empty_Array, PThreadedCode13394, 1, PSend13403);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13392, HEADER(Smalltalk_Compiler_RootScope_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookup_, MC_SMB_lookup_);
}


static void init_class_SMB_lookupNamed_() {
    Symbol SMB_lookupNamed_ = new_Symbol(L"lookupNamed:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
<<<<<<< HEAD
    Array PArray13439 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_variableNotFound = new_Symbol(L"variableNotFound");
    // variableNotFound. 
    Send PSend13443 = new_Send((Optr)VAR_aSymbol_0_0, SMB_variableNotFound, 0);
    Array PThreadedCode13442 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send0, (Optr)PSend13443, (Optr)&t_block_return);
    Block PBlock13441 = new_Block_with(empty_Array, empty_Array, PThreadedCode13442, 1, PSend13443);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend13444 = new_Send((Optr)self, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)PBlock13441);
    Array PThreadedCode13440 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_closure, (Optr)PBlock13441, (Optr)&t_send2, (Optr)PSend13444, (Optr)&t_method_return);
    Method PMethod13438 = new_Method_with(PArray13439, empty_Array, empty_Array, PThreadedCode13440, 1, PSend13444);
    
    MethodClosure MC_SMB_lookupNamed_ = new_MethodClosure((Method)PMethod13438, HEADER(Smalltalk_Compiler_RootScope_Class));
=======
    Array PArray13405 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_variableNotFound = new_Symbol(L"variableNotFound");
    // variableNotFound. 
    Send PSend13409 = new_Send((Optr)VAR_aSymbol_0_0, SMB_variableNotFound, 0);
    Array PThreadedCode13408 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send0, (Optr)PSend13409, (Optr)&t_block_return);
    Block PBlock13407 = new_Block_with(empty_Array, empty_Array, PThreadedCode13408, 1, PSend13409);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend13410 = new_Send((Optr)self, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)PBlock13407);
    Array PThreadedCode13406 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_closure, (Optr)PBlock13407, (Optr)&t_send2, (Optr)PSend13410, (Optr)&t_method_return);
    Method PMethod13404 = new_Method_with(PArray13405, empty_Array, empty_Array, PThreadedCode13406, 1, PSend13410);
    
    MethodClosure MC_SMB_lookupNamed_ = new_MethodClosure((Method)PMethod13404, HEADER(Smalltalk_Compiler_RootScope_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookupNamed_, MC_SMB_lookupNamed_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
<<<<<<< HEAD
    Super PSuper13447 = new_Super(SMB_initialize, 0);
    Symbol SMB_clearGlobals = new_Symbol(L"clearGlobals");
    // clearGlobals. 
    Send PSend13448 = new_Send((Optr)self, SMB_clearGlobals, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13450 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13449 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13450);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13451 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13446 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper13447, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13448, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13449, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13450, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13451, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13445 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13446, 5, PSuper13447, PSend13448, PAssign13449, PSend13451, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13445, HEADER(Smalltalk_Compiler_RootScope_Class));
=======
    Super PSuper13413 = new_Super(SMB_initialize, 0);
    Symbol SMB_clearGlobals = new_Symbol(L"clearGlobals");
    // clearGlobals. 
    Send PSend13414 = new_Send((Optr)self, SMB_clearGlobals, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13416 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13415 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13416);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13417 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13412 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper13413, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13414, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13415, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13416, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13417, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13411 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13412, 5, PSuper13413, PSend13414, PAssign13415, PSend13417, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13411, HEADER(Smalltalk_Compiler_RootScope_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_clearGlobals() {
    Symbol SMB_clearGlobals = new_Symbol(L"clearGlobals");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
<<<<<<< HEAD
    Send PSend13455 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13454 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13455);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13456 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13453 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign13454, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13455, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13456, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13452 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13453, 3, PAssign13454, PSend13456, self);
    
    MethodClosure MC_SMB_clearGlobals = new_MethodClosure((Method)PMethod13452, HEADER(Smalltalk_Compiler_RootScope_Class));
=======
    Send PSend13421 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign13420 = new_Assign((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)PSend13421);
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    // initializeGlobals. 
    Send PSend13422 = new_Send((Optr)self, SMB_initializeGlobals, 0);
    Array PThreadedCode13419 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign13420, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend13421, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13422, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13418 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13419, 3, PAssign13420, PSend13422, self);
    
    MethodClosure MC_SMB_clearGlobals = new_MethodClosure((Method)PMethod13418, HEADER(Smalltalk_Compiler_RootScope_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_clearGlobals, MC_SMB_clearGlobals);
}


static void init_class_SMB_lookupNamed_ifAbsent_() {
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray13458 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13460 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode13459 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend13460, (Optr)&t_method_return);
    Method PMethod13457 = new_Method_with(PArray13458, empty_Array, empty_Array, PThreadedCode13459, 1, PSend13460);
    
    MethodClosure MC_SMB_lookupNamed_ifAbsent_ = new_MethodClosure((Method)PMethod13457, HEADER(Smalltalk_Compiler_RootScope_Class));
=======
    Array PArray13424 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend13426 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_ifAbsent_, 2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode13425 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend13426, (Optr)&t_method_return);
    Method PMethod13423 = new_Method_with(PArray13424, empty_Array, empty_Array, PThreadedCode13425, 1, PSend13426);
    
    MethodClosure MC_SMB_lookupNamed_ifAbsent_ = new_MethodClosure((Method)PMethod13423, HEADER(Smalltalk_Compiler_RootScope_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_lookupNamed_ifAbsent_, MC_SMB_lookupNamed_ifAbsent_);
}


static void init_class_SMB_globalDefinition() {
    Symbol SMB_globalDefinition = new_Symbol(L"globalDefinition");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
<<<<<<< HEAD
    Array PArray13464 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_13466 = new_String(L"nil");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13467 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)nil_Const);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_13466_Const = new_Constant((Optr)string_13466);
    // with:with:. 
    Send PSend13468 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13466_Const, (Optr)PSend13467);
=======
    Array PArray13430 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    String string_13432 = new_String(L"nil");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13433 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)nil_Const);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant string_13432_Const = new_Constant((Optr)string_13432);
    // with:with:. 
    Send PSend13434 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13432_Const, (Optr)PSend13433);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
<<<<<<< HEAD
    Send PSend13469 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend13468);
    String string_13470 = new_String(L"true");
    // new:. 
    Send PSend13471 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)true_Const);
    Constant string_13470_Const = new_Constant((Optr)string_13470);
    // with:with:. 
    Send PSend13472 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13470_Const, (Optr)PSend13471);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend13473 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend13472);
    SmallInt int_3 = new_SmallInt(3);
    String string_13474 = new_String(L"false");
    // new:. 
    Send PSend13475 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)false_Const);
    Constant string_13474_Const = new_Constant((Optr)string_13474);
    // with:with:. 
    Send PSend13476 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13474_Const, (Optr)PSend13475);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend13477 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend13476);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend13478 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode13465 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13466, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13467, (Optr)&t_send2, (Optr)PSend13468, (Optr)&t_send2, (Optr)PSend13469, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13470, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend13471, (Optr)&t_send2, (Optr)PSend13472, (Optr)&t_send2, (Optr)PSend13473, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13474, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend13475, (Optr)&t_send2, (Optr)PSend13476, (Optr)&t_send2, (Optr)PSend13477, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend13478, (Optr)&t_method_return);
    Block PBlock13463 = new_Block_with(PArray13464, empty_Array, PThreadedCode13465, 4, PSend13469, PSend13473, PSend13477, PSend13478);
    // new:. 
    Send PSend13479 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_3_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13480 = new_Send((Optr)PBlock13463, SMB_value_, 1, (Optr)PSend13479);
    Array PThreadedCode13462 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock13463, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend13479, (Optr)&t_send1, (Optr)PSend13480, (Optr)&t_method_return);
    Method PMethod13461 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13462, 1, PSend13480);
    
    MethodClosure MC_SMB_globalDefinition = new_MethodClosure((Method)PMethod13461, HEADER(Smalltalk_Compiler_RootScope_Class));
=======
    Send PSend13435 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend13434);
    String string_13436 = new_String(L"true");
    // new:. 
    Send PSend13437 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)true_Const);
    Constant string_13436_Const = new_Constant((Optr)string_13436);
    // with:with:. 
    Send PSend13438 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13436_Const, (Optr)PSend13437);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend13439 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend13438);
    SmallInt int_3 = new_SmallInt(3);
    String string_13440 = new_String(L"false");
    // new:. 
    Send PSend13441 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)false_Const);
    Constant string_13440_Const = new_Constant((Optr)string_13440);
    // with:with:. 
    Send PSend13442 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)string_13440_Const, (Optr)PSend13441);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend13443 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend13442);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend13444 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode13431 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13432, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend13433, (Optr)&t_send2, (Optr)PSend13434, (Optr)&t_send2, (Optr)PSend13435, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13436, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend13437, (Optr)&t_send2, (Optr)PSend13438, (Optr)&t_send2, (Optr)PSend13439, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)string_13440, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend13441, (Optr)&t_send2, (Optr)PSend13442, (Optr)&t_send2, (Optr)PSend13443, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend13444, (Optr)&t_method_return);
    Block PBlock13429 = new_Block_with(PArray13430, empty_Array, PThreadedCode13431, 4, PSend13435, PSend13439, PSend13443, PSend13444);
    // new:. 
    Send PSend13445 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_3_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13446 = new_Send((Optr)PBlock13429, SMB_value_, 1, (Optr)PSend13445);
    Array PThreadedCode13428 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock13429, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend13445, (Optr)&t_send1, (Optr)PSend13446, (Optr)&t_method_return);
    Method PMethod13427 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13428, 1, PSend13446);
    
    MethodClosure MC_SMB_globalDefinition = new_MethodClosure((Method)PMethod13427, HEADER(Smalltalk_Compiler_RootScope_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Smalltalk_Compiler_RootScope_Class), SMB_globalDefinition, MC_SMB_globalDefinition);
}


static void init_class_SMB_initializeGlobals() {
    Symbol SMB_initializeGlobals = new_Symbol(L"initializeGlobals");
    Symbol SMB_globalDefinition = new_Symbol(L"globalDefinition");
    // globalDefinition. 
<<<<<<< HEAD
    Send PSend13483 = new_Send((Optr)self, SMB_globalDefinition, 0);
    Variable VAR_pair_1_0 = new_Variable_named(L"pair", 1);
    Array PArray13485 = new_Array_with(1, (Optr)VAR_pair_1_0);
=======
    Send PSend13449 = new_Send((Optr)self, SMB_globalDefinition, 0);
    Variable VAR_pair_1_0 = new_Variable_named(L"pair", 1);
    Array PArray13451 = new_Array_with(1, (Optr)VAR_pair_1_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
<<<<<<< HEAD
    Send PSend13487 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend13488 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13489 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_put_, 2, (Optr)PSend13487, (Optr)PSend13488);
    Array PThreadedCode13486 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13487, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend13488, (Optr)&t_send2, (Optr)PSend13489, (Optr)&t_method_return);
    Block PBlock13484 = new_Block_with(PArray13485, empty_Array, PThreadedCode13486, 1, PSend13489);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13490 = new_Send((Optr)PSend13483, SMB_do_, 1, (Optr)PBlock13484);
    Array PThreadedCode13482 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13483, (Optr)&t_push_closure, (Optr)PBlock13484, (Optr)&t_send1, (Optr)PSend13490, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13481 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13482, 2, PSend13490, self);
    
    MethodClosure MC_SMB_initializeGlobals = new_MethodClosure((Method)PMethod13481, HEADER(Smalltalk_Compiler_RootScope_Class));
=======
    Send PSend13453 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend13454 = new_Send((Optr)VAR_pair_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13455 = new_Send((Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, SMB_at_put_, 2, (Optr)PSend13453, (Optr)PSend13454);
    Array PThreadedCode13452 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_RootScope_Class_class_decls, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13453, (Optr)&t_push_variable, (Optr)VAR_pair_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend13454, (Optr)&t_send2, (Optr)PSend13455, (Optr)&t_method_return);
    Block PBlock13450 = new_Block_with(PArray13451, empty_Array, PThreadedCode13452, 1, PSend13455);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13456 = new_Send((Optr)PSend13449, SMB_do_, 1, (Optr)PBlock13450);
    Array PThreadedCode13448 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13449, (Optr)&t_push_closure, (Optr)PBlock13450, (Optr)&t_send1, (Optr)PSend13456, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13447 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13448, 2, PSend13456, self);
    
    MethodClosure MC_SMB_initializeGlobals = new_MethodClosure((Method)PMethod13447, HEADER(Smalltalk_Compiler_RootScope_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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