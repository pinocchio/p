#include <lib/class/Testing/TestSuite.h>


Optr layout_Testing_TestSuite_Class_class;
Optr slot_Testing_TestSuite_tests;
Optr slot_Testing_TestSuite_resources;
Optr slot_Testing_TestSuite_name;
Optr layout_Testing_TestSuite;


static void init_SMB_resources() {
    Symbol SMB_resources = new_Symbol(L"resources");
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend11374 = new_Send((Optr)slot_Testing_TestSuite_resources, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    // defaultResources. 
    Send PSend11379 = new_Send((Optr)self, SMB_defaultResources, 0);
    Assign PAssign11378 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)PSend11379);
    Array PThreadedCode11377 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11378, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11379, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11376 = new_Block_with(empty_Array, empty_Array, PThreadedCode11377, 1, PAssign11378);
    // ifTrue:. 
    Send PSend11375 = new_Send((Optr)PSend11374, SMB_ifTrue_, 1, (Optr)PBlock11376);
    Array PThreadedCode11373 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_send0, (Optr)PSend11374, (Optr)&t_send_ifTrue_, (Optr)PSend11375, (Optr)PBlock11376, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_method_return);
    Method PMethod11372 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11373, 2, PSend11375, slot_Testing_TestSuite_resources);
    
    MethodClosure MC_SMB_resources = new_MethodClosure((Method)PMethod11372, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources, MC_SMB_resources);
}


static void init_SMB_defaultResources() {
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11382 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11383 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Variable VAR_coll_1_0 = new_Variable_named(L"coll", 1);
    Variable VAR_testCase_1_1 = new_Variable_named(L"testCase", 1);
    Array PArray11385 = new_Array_with(2, (Optr)VAR_coll_1_0, (Optr)VAR_testCase_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11388 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11390 = new_Send((Optr)VAR_testCase_1_1, SMB_resources, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11391 = new_Send((Optr)VAR__receiver__2_0, SMB_addAll_, 1, (Optr)PSend11390);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11392 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode11389 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_testCase_1_1, (Optr)&t_send0, (Optr)PSend11390, (Optr)&t_send1, (Optr)PSend11391, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11392, (Optr)&t_method_return);
    Block PBlock11387 = new_Block_with(PArray11388, empty_Array, PThreadedCode11389, 2, PSend11391, PSend11392);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11393 = new_Send((Optr)PBlock11387, SMB_value_, 1, (Optr)VAR_coll_1_0);
    Array PThreadedCode11386 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11387, (Optr)&t_push_variable, (Optr)VAR_coll_1_0, (Optr)&t_send1, (Optr)PSend11393, (Optr)&t_method_return);
    Block PBlock11384 = new_Block_with(PArray11385, empty_Array, PThreadedCode11386, 1, PSend11393);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend11394 = new_Send((Optr)PSend11382, SMB_inject_into_, 2, (Optr)PSend11383, (Optr)PBlock11384);
    Array PThreadedCode11381 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11382, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11383, (Optr)&t_push_closure, (Optr)PBlock11384, (Optr)&t_send2, (Optr)PSend11394, (Optr)&t_method_return);
    Method PMethod11380 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11381, 1, PSend11394);
    
    MethodClosure MC_SMB_defaultResources = new_MethodClosure((Method)PMethod11380, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_defaultResources, MC_SMB_defaultResources);
}


static void init_SMB_addDependentToHierachy_() {
    Symbol SMB_addDependentToHierachy_ = new_Symbol(L"addDependentToHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11396 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_addDependent_ = new_Symbol(L"addDependent:");
    // addDependent:. 
    Send PSend11398 = new_Send((Optr)self, SMB_addDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11399 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11401 = new_Array_with(1, (Optr)VAR_each_1_0);
    // addDependentToHierachy:. 
    Send PSend11403 = new_Send((Optr)VAR_each_1_0, SMB_addDependentToHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11402 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11403, (Optr)&t_method_return);
    Block PBlock11400 = new_Block_with(PArray11401, empty_Array, PThreadedCode11402, 1, PSend11403);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11404 = new_Send((Optr)PSend11399, SMB_do_, 1, (Optr)PBlock11400);
    Array PThreadedCode11397 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11398, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11399, (Optr)&t_push_closure, (Optr)PBlock11400, (Optr)&t_send1, (Optr)PSend11404, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11395 = new_Method_with(PArray11396, empty_Array, empty_Array, PThreadedCode11397, 3, PSend11398, PSend11404, self);
    
    MethodClosure MC_SMB_addDependentToHierachy_ = new_MethodClosure((Method)PMethod11395, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addDependentToHierachy_, MC_SMB_addDependentToHierachy_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray11406 = new_Array_with(1, (Optr)VAR_result_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11409 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11412 = new_Send((Optr)TestResult_classReference, SMB_new, 0);
    Assign PAssign11411 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend11412);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11413 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_res_2_0 = new_Variable_named(L"res", 2);
    Array PArray11415 = new_Array_with(1, (Optr)VAR_res_2_0);
    Symbol SMB_isAvailable = new_Symbol(L"isAvailable");
    // isAvailable. 
    Send PSend11417 = new_Send((Optr)VAR_res_2_0, SMB_isAvailable, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signalInitializationError = new_Symbol(L"signalInitializationError");
    // signalInitializationError. 
    Send PSend11421 = new_Send((Optr)VAR_res_2_0, SMB_signalInitializationError, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11422 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11421);
    Array PThreadedCode11420 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11421, (Optr)&t_send1, (Optr)PSend11422, (Optr)&t_block_return);
    Block PBlock11419 = new_Block_with(empty_Array, empty_Array, PThreadedCode11420, 1, PSend11422);
    // ifFalse:. 
    Send PSend11418 = new_Send((Optr)PSend11417, SMB_ifFalse_, 1, (Optr)PBlock11419);
    Array PThreadedCode11416 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11417, (Optr)&t_send_ifFalse_, (Optr)PSend11418, (Optr)PBlock11419, (Optr)&t_method_return);
    Block PBlock11414 = new_Block_with(PArray11415, empty_Array, PThreadedCode11416, 1, PSend11418);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11423 = new_Send((Optr)PSend11413, SMB_do_, 1, (Optr)PBlock11414);
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend11426 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_result_0_0);
    Array PThreadedCode11425 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send1, (Optr)PSend11426, (Optr)&t_block_return);
    Block PBlock11424 = new_Block_with(empty_Array, empty_Array, PThreadedCode11425, 1, PSend11426);
    // resources. 
    Send PSend11429 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray11431 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend11433 = new_Send((Optr)VAR_each_2_0, SMB_reset, 0);
    Array PThreadedCode11432 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send0, (Optr)PSend11433, (Optr)&t_method_return);
    Block PBlock11430 = new_Block_with(PArray11431, empty_Array, PThreadedCode11432, 1, PSend11433);
    // do:. 
    Send PSend11434 = new_Send((Optr)PSend11429, SMB_do_, 1, (Optr)PBlock11430);
    Array PThreadedCode11428 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11429, (Optr)&t_push_closure, (Optr)PBlock11430, (Optr)&t_send1, (Optr)PSend11434, (Optr)&t_block_return);
    Block PBlock11427 = new_Block_with(empty_Array, empty_Array, PThreadedCode11428, 1, PSend11434);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend11435 = new_Send((Optr)PBlock11424, SMB_ensure_, 1, (Optr)PBlock11427);
    Array PThreadedCode11410 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign11411, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_send0, (Optr)PSend11412, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11413, (Optr)&t_push_closure, (Optr)PBlock11414, (Optr)&t_send1, (Optr)PSend11423, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11424, (Optr)&t_push_closure, (Optr)PBlock11427, (Optr)&t_send1, (Optr)PSend11435, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Block PBlock11408 = new_Block_with(PArray11409, empty_Array, PThreadedCode11410, 4, PAssign11411, PSend11423, PSend11435, VAR_result_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11436 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11408);
    Array PThreadedCode11407 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11408, (Optr)&t_send1, (Optr)PSend11436, (Optr)&t_method_return);
    Method PMethod11405 = new_Method_with(empty_Array, PArray11406, empty_Array, PThreadedCode11407, 1, PSend11436);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod11405, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_addTest_() {
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    Variable VAR_aTest_0_0 = new_Variable_named(L"aTest", 0);
    Array PArray11438 = new_Array_with(1, (Optr)VAR_aTest_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11440 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11441 = new_Send((Optr)PSend11440, SMB_add_, 1, (Optr)VAR_aTest_0_0);
    Array PThreadedCode11439 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11440, (Optr)&t_push_variable, (Optr)VAR_aTest_0_0, (Optr)&t_send1, (Optr)PSend11441, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11437 = new_Method_with(PArray11438, empty_Array, empty_Array, PThreadedCode11439, 2, PSend11441, self);
    
    MethodClosure MC_SMB_addTest_ = new_MethodClosure((Method)PMethod11437, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTest_, MC_SMB_addTest_);
}


static void init_SMB_resources_() {
    Symbol SMB_resources_ = new_Symbol(L"resources:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11443 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11445 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11444 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11445, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11442 = new_Method_with(PArray11443, empty_Array, empty_Array, PThreadedCode11444, 2, PAssign11445, self);
    
    MethodClosure MC_SMB_resources_ = new_MethodClosure((Method)PMethod11442, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources_, MC_SMB_resources_);
}


static void init_SMB_addTests_() {
    Symbol SMB_addTests_ = new_Symbol(L"addTests:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11447 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_eachTest_1_0 = new_Variable_named(L"eachTest", 1);
    Array PArray11450 = new_Array_with(1, (Optr)VAR_eachTest_1_0);
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    // addTest:. 
    Send PSend11452 = new_Send((Optr)self, SMB_addTest_, 1, (Optr)VAR_eachTest_1_0);
    Array PThreadedCode11451 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_eachTest_1_0, (Optr)&t_send1, (Optr)PSend11452, (Optr)&t_method_return);
    Block PBlock11449 = new_Block_with(PArray11450, empty_Array, PThreadedCode11451, 1, PSend11452);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11453 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock11449);
    Array PThreadedCode11448 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock11449, (Optr)&t_send1, (Optr)PSend11453, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11446 = new_Method_with(PArray11447, empty_Array, empty_Array, PThreadedCode11448, 2, PSend11453, self);
    
    MethodClosure MC_SMB_addTests_ = new_MethodClosure((Method)PMethod11446, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTests_, MC_SMB_addTests_);
}


static void init_SMB_removeDependentFromHierachy_() {
    Symbol SMB_removeDependentFromHierachy_ = new_Symbol(L"removeDependentFromHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11455 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_removeDependent_ = new_Symbol(L"removeDependent:");
    // removeDependent:. 
    Send PSend11457 = new_Send((Optr)self, SMB_removeDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11458 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11460 = new_Array_with(1, (Optr)VAR_each_1_0);
    // removeDependentFromHierachy:. 
    Send PSend11462 = new_Send((Optr)VAR_each_1_0, SMB_removeDependentFromHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11461 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11462, (Optr)&t_method_return);
    Block PBlock11459 = new_Block_with(PArray11460, empty_Array, PThreadedCode11461, 1, PSend11462);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11463 = new_Send((Optr)PSend11458, SMB_do_, 1, (Optr)PBlock11459);
    Array PThreadedCode11456 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11457, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11458, (Optr)&t_push_closure, (Optr)PBlock11459, (Optr)&t_send1, (Optr)PSend11463, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11454 = new_Method_with(PArray11455, empty_Array, empty_Array, PThreadedCode11456, 3, PSend11457, PSend11463, self);
    
    MethodClosure MC_SMB_removeDependentFromHierachy_ = new_MethodClosure((Method)PMethod11454, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_removeDependentFromHierachy_, MC_SMB_removeDependentFromHierachy_);
}


static void init_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11465 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11467 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11469 = new_Array_with(1, (Optr)VAR_each_1_0);
    // run:. 
    Send PSend11471 = new_Send((Optr)VAR_each_1_0, SMB_run_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11470 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11471, (Optr)&t_method_return);
    Block PBlock11468 = new_Block_with(PArray11469, empty_Array, PThreadedCode11470, 1, PSend11471);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11472 = new_Send((Optr)PSend11467, SMB_do_, 1, (Optr)PBlock11468);
    Array PThreadedCode11466 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11467, (Optr)&t_push_closure, (Optr)PBlock11468, (Optr)&t_send1, (Optr)PSend11472, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11464 = new_Method_with(PArray11465, empty_Array, empty_Array, PThreadedCode11466, 2, PSend11472, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod11464, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11474 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign11476 = new_Assign((Optr)slot_Testing_TestSuite_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode11475 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11476, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11473 = new_Method_with(PArray11474, empty_Array, empty_Array, PThreadedCode11475, 2, PAssign11476, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod11473, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode11478 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_name, (Optr)&t_method_return);
    Method PMethod11477 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11478, 1, slot_Testing_TestSuite_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod11477, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend11481 = new_Send((Optr)slot_Testing_TestSuite_tests, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11486 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11485 = new_Assign((Optr)slot_Testing_TestSuite_tests, (Optr)PSend11486);
    Array PThreadedCode11484 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign11485, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11486, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11483 = new_Block_with(empty_Array, empty_Array, PThreadedCode11484, 1, PAssign11485);
    // ifTrue:. 
    Send PSend11482 = new_Send((Optr)PSend11481, SMB_ifTrue_, 1, (Optr)PBlock11483);
    Array PThreadedCode11480 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_send0, (Optr)PSend11481, (Optr)&t_send_ifTrue_, (Optr)PSend11482, (Optr)PBlock11483, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_method_return);
    Method PMethod11479 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11480, 2, PSend11482, slot_Testing_TestSuite_tests);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11479, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_tests, MC_SMB_tests);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11488 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11491 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend11493 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11494 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11492 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11493, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11494, (Optr)&t_method_return);
    Block PBlock11490 = new_Block_with(PArray11491, empty_Array, PThreadedCode11492, 2, PSend11493, PSend11494);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11495 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11496 = new_Send((Optr)PBlock11490, SMB_value_, 1, (Optr)PSend11495);
    Array PThreadedCode11489 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11490, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11495, (Optr)&t_send1, (Optr)PSend11496, (Optr)&t_method_return);
    Method PMethod11487 = new_Method_with(PArray11488, empty_Array, empty_Array, PThreadedCode11489, 1, PSend11496);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod11487, HEADER(Testing_TestSuite_Class));
    store_method(HEADER(Testing_TestSuite_Class), SMB_named_, MC_SMB_named_);
}

void init_Testing_TestSuite_layout() {
    layout_Testing_TestSuite_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Testing_TestSuite_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Testing_TestSuite_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Testing_TestSuite_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Testing_TestSuite_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Testing_TestSuite_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_TestSuite = new_Symbol(L"TestSuite");
    slot_Testing_TestSuite_tests = (Optr)new_Slot(0, L"tests");
    slot_Testing_TestSuite_resources = (Optr)new_Slot(1, L"resources");
    slot_Testing_TestSuite_name = (Optr)new_Slot(2, L"name");
    layout_Testing_TestSuite = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Testing_TestSuite)->values[0] = slot_Testing_TestSuite_tests; // tests 
    ((Array)layout_Testing_TestSuite)->values[1] = slot_Testing_TestSuite_resources; // resources 
    ((Array)layout_Testing_TestSuite)->values[2] = slot_Testing_TestSuite_name; // name 
    Testing_TestSuite_Class = (Class)new_Class(Object_Class, layout_Testing_TestSuite_Class_class);
    Class_set_superclass(Testing_TestSuite_Class, Object_Class);
    Testing_TestSuite_Class->layout = layout_Testing_TestSuite;
    HEADER(Testing_TestSuite_Class)->layout = layout_Testing_TestSuite_Class_class;
    Testing_TestSuite_Class->name = SMB_TestSuite;
    
}

void init_Testing_TestSuite_methods() {
    init_SMB_resources();
    init_SMB_defaultResources();
    init_SMB_addDependentToHierachy_();
    init_SMB_run();
    init_SMB_addTest_();
    init_SMB_resources_();
    init_SMB_addTests_();
    init_SMB_removeDependentFromHierachy_();
    init_SMB_run_();
    init_SMB_name_();
    init_SMB_name();
    init_SMB_tests();
    init_class_SMB_named_();
    
}