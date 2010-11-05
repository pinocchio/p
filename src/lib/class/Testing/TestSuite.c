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
    Send PSend11398 = new_Send((Optr)slot_Testing_TestSuite_resources, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    // defaultResources. 
    Send PSend11403 = new_Send((Optr)self, SMB_defaultResources, 0);
    Assign PAssign11402 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)PSend11403);
    Array PThreadedCode11401 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11402, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11403, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11400 = new_Block_with(empty_Array, empty_Array, PThreadedCode11401, 1, PAssign11402);
    // ifTrue:. 
    Send PSend11399 = new_Send((Optr)PSend11398, SMB_ifTrue_, 1, (Optr)PBlock11400);
    Array PThreadedCode11397 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_send0, (Optr)PSend11398, (Optr)&t_send_ifTrue_, (Optr)PSend11399, (Optr)PBlock11400, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_method_return);
    Method PMethod11396 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11397, 2, PSend11399, slot_Testing_TestSuite_resources);
    
    MethodClosure MC_SMB_resources = new_MethodClosure((Method)PMethod11396, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources, MC_SMB_resources);
}


static void init_SMB_defaultResources() {
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11406 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11407 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Variable VAR_coll_1_0 = new_Variable_named(L"coll", 1);
    Variable VAR_testCase_1_1 = new_Variable_named(L"testCase", 1);
    Array PArray11409 = new_Array_with(2, (Optr)VAR_coll_1_0, (Optr)VAR_testCase_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11412 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11414 = new_Send((Optr)VAR_testCase_1_1, SMB_resources, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11415 = new_Send((Optr)VAR__receiver__2_0, SMB_addAll_, 1, (Optr)PSend11414);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11416 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode11413 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_testCase_1_1, (Optr)&t_send0, (Optr)PSend11414, (Optr)&t_send1, (Optr)PSend11415, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11416, (Optr)&t_method_return);
    Block PBlock11411 = new_Block_with(PArray11412, empty_Array, PThreadedCode11413, 2, PSend11415, PSend11416);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11417 = new_Send((Optr)PBlock11411, SMB_value_, 1, (Optr)VAR_coll_1_0);
    Array PThreadedCode11410 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11411, (Optr)&t_push_variable, (Optr)VAR_coll_1_0, (Optr)&t_send1, (Optr)PSend11417, (Optr)&t_method_return);
    Block PBlock11408 = new_Block_with(PArray11409, empty_Array, PThreadedCode11410, 1, PSend11417);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend11418 = new_Send((Optr)PSend11406, SMB_inject_into_, 2, (Optr)PSend11407, (Optr)PBlock11408);
    Array PThreadedCode11405 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11406, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11407, (Optr)&t_push_closure, (Optr)PBlock11408, (Optr)&t_send2, (Optr)PSend11418, (Optr)&t_method_return);
    Method PMethod11404 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11405, 1, PSend11418);
    
    MethodClosure MC_SMB_defaultResources = new_MethodClosure((Method)PMethod11404, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_defaultResources, MC_SMB_defaultResources);
}


static void init_SMB_addDependentToHierachy_() {
    Symbol SMB_addDependentToHierachy_ = new_Symbol(L"addDependentToHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11420 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_addDependent_ = new_Symbol(L"addDependent:");
    // addDependent:. 
    Send PSend11422 = new_Send((Optr)self, SMB_addDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11423 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11425 = new_Array_with(1, (Optr)VAR_each_1_0);
    // addDependentToHierachy:. 
    Send PSend11427 = new_Send((Optr)VAR_each_1_0, SMB_addDependentToHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11426 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11427, (Optr)&t_method_return);
    Block PBlock11424 = new_Block_with(PArray11425, empty_Array, PThreadedCode11426, 1, PSend11427);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11428 = new_Send((Optr)PSend11423, SMB_do_, 1, (Optr)PBlock11424);
    Array PThreadedCode11421 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11422, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11423, (Optr)&t_push_closure, (Optr)PBlock11424, (Optr)&t_send1, (Optr)PSend11428, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11419 = new_Method_with(PArray11420, empty_Array, empty_Array, PThreadedCode11421, 3, PSend11422, PSend11428, self);
    
    MethodClosure MC_SMB_addDependentToHierachy_ = new_MethodClosure((Method)PMethod11419, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addDependentToHierachy_, MC_SMB_addDependentToHierachy_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray11430 = new_Array_with(1, (Optr)VAR_result_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11433 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11436 = new_Send((Optr)TestResult_classReference, SMB_new, 0);
    Assign PAssign11435 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend11436);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11437 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_res_2_0 = new_Variable_named(L"res", 2);
    Array PArray11439 = new_Array_with(1, (Optr)VAR_res_2_0);
    Symbol SMB_isAvailable = new_Symbol(L"isAvailable");
    // isAvailable. 
    Send PSend11441 = new_Send((Optr)VAR_res_2_0, SMB_isAvailable, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signalInitializationError = new_Symbol(L"signalInitializationError");
    // signalInitializationError. 
    Send PSend11445 = new_Send((Optr)VAR_res_2_0, SMB_signalInitializationError, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11446 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11445);
    Array PThreadedCode11444 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11445, (Optr)&t_send1, (Optr)PSend11446, (Optr)&t_block_return);
    Block PBlock11443 = new_Block_with(empty_Array, empty_Array, PThreadedCode11444, 1, PSend11446);
    // ifFalse:. 
    Send PSend11442 = new_Send((Optr)PSend11441, SMB_ifFalse_, 1, (Optr)PBlock11443);
    Array PThreadedCode11440 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11441, (Optr)&t_send_ifFalse_, (Optr)PSend11442, (Optr)PBlock11443, (Optr)&t_method_return);
    Block PBlock11438 = new_Block_with(PArray11439, empty_Array, PThreadedCode11440, 1, PSend11442);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11447 = new_Send((Optr)PSend11437, SMB_do_, 1, (Optr)PBlock11438);
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend11450 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_result_0_0);
    Array PThreadedCode11449 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send1, (Optr)PSend11450, (Optr)&t_block_return);
    Block PBlock11448 = new_Block_with(empty_Array, empty_Array, PThreadedCode11449, 1, PSend11450);
    // resources. 
    Send PSend11453 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray11455 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend11457 = new_Send((Optr)VAR_each_2_0, SMB_reset, 0);
    Array PThreadedCode11456 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send0, (Optr)PSend11457, (Optr)&t_method_return);
    Block PBlock11454 = new_Block_with(PArray11455, empty_Array, PThreadedCode11456, 1, PSend11457);
    // do:. 
    Send PSend11458 = new_Send((Optr)PSend11453, SMB_do_, 1, (Optr)PBlock11454);
    Array PThreadedCode11452 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11453, (Optr)&t_push_closure, (Optr)PBlock11454, (Optr)&t_send1, (Optr)PSend11458, (Optr)&t_block_return);
    Block PBlock11451 = new_Block_with(empty_Array, empty_Array, PThreadedCode11452, 1, PSend11458);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend11459 = new_Send((Optr)PBlock11448, SMB_ensure_, 1, (Optr)PBlock11451);
    Array PThreadedCode11434 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign11435, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_send0, (Optr)PSend11436, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11437, (Optr)&t_push_closure, (Optr)PBlock11438, (Optr)&t_send1, (Optr)PSend11447, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11448, (Optr)&t_push_closure, (Optr)PBlock11451, (Optr)&t_send1, (Optr)PSend11459, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Block PBlock11432 = new_Block_with(PArray11433, empty_Array, PThreadedCode11434, 4, PAssign11435, PSend11447, PSend11459, VAR_result_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11460 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11432);
    Array PThreadedCode11431 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11432, (Optr)&t_send1, (Optr)PSend11460, (Optr)&t_method_return);
    Method PMethod11429 = new_Method_with(empty_Array, PArray11430, empty_Array, PThreadedCode11431, 1, PSend11460);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod11429, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_addTest_() {
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    Variable VAR_aTest_0_0 = new_Variable_named(L"aTest", 0);
    Array PArray11462 = new_Array_with(1, (Optr)VAR_aTest_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11464 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11465 = new_Send((Optr)PSend11464, SMB_add_, 1, (Optr)VAR_aTest_0_0);
    Array PThreadedCode11463 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11464, (Optr)&t_push_variable, (Optr)VAR_aTest_0_0, (Optr)&t_send1, (Optr)PSend11465, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11461 = new_Method_with(PArray11462, empty_Array, empty_Array, PThreadedCode11463, 2, PSend11465, self);
    
    MethodClosure MC_SMB_addTest_ = new_MethodClosure((Method)PMethod11461, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTest_, MC_SMB_addTest_);
}


static void init_SMB_resources_() {
    Symbol SMB_resources_ = new_Symbol(L"resources:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11467 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11469 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11468 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11469, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11466 = new_Method_with(PArray11467, empty_Array, empty_Array, PThreadedCode11468, 2, PAssign11469, self);
    
    MethodClosure MC_SMB_resources_ = new_MethodClosure((Method)PMethod11466, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources_, MC_SMB_resources_);
}


static void init_SMB_addTests_() {
    Symbol SMB_addTests_ = new_Symbol(L"addTests:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11471 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_eachTest_1_0 = new_Variable_named(L"eachTest", 1);
    Array PArray11474 = new_Array_with(1, (Optr)VAR_eachTest_1_0);
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    // addTest:. 
    Send PSend11476 = new_Send((Optr)self, SMB_addTest_, 1, (Optr)VAR_eachTest_1_0);
    Array PThreadedCode11475 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_eachTest_1_0, (Optr)&t_send1, (Optr)PSend11476, (Optr)&t_method_return);
    Block PBlock11473 = new_Block_with(PArray11474, empty_Array, PThreadedCode11475, 1, PSend11476);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11477 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock11473);
    Array PThreadedCode11472 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock11473, (Optr)&t_send1, (Optr)PSend11477, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11470 = new_Method_with(PArray11471, empty_Array, empty_Array, PThreadedCode11472, 2, PSend11477, self);
    
    MethodClosure MC_SMB_addTests_ = new_MethodClosure((Method)PMethod11470, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTests_, MC_SMB_addTests_);
}


static void init_SMB_removeDependentFromHierachy_() {
    Symbol SMB_removeDependentFromHierachy_ = new_Symbol(L"removeDependentFromHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11479 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_removeDependent_ = new_Symbol(L"removeDependent:");
    // removeDependent:. 
    Send PSend11481 = new_Send((Optr)self, SMB_removeDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11482 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11484 = new_Array_with(1, (Optr)VAR_each_1_0);
    // removeDependentFromHierachy:. 
    Send PSend11486 = new_Send((Optr)VAR_each_1_0, SMB_removeDependentFromHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11485 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11486, (Optr)&t_method_return);
    Block PBlock11483 = new_Block_with(PArray11484, empty_Array, PThreadedCode11485, 1, PSend11486);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11487 = new_Send((Optr)PSend11482, SMB_do_, 1, (Optr)PBlock11483);
    Array PThreadedCode11480 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11481, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11482, (Optr)&t_push_closure, (Optr)PBlock11483, (Optr)&t_send1, (Optr)PSend11487, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11478 = new_Method_with(PArray11479, empty_Array, empty_Array, PThreadedCode11480, 3, PSend11481, PSend11487, self);
    
    MethodClosure MC_SMB_removeDependentFromHierachy_ = new_MethodClosure((Method)PMethod11478, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_removeDependentFromHierachy_, MC_SMB_removeDependentFromHierachy_);
}


static void init_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11489 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11491 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11493 = new_Array_with(1, (Optr)VAR_each_1_0);
    // run:. 
    Send PSend11495 = new_Send((Optr)VAR_each_1_0, SMB_run_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11494 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11495, (Optr)&t_method_return);
    Block PBlock11492 = new_Block_with(PArray11493, empty_Array, PThreadedCode11494, 1, PSend11495);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11496 = new_Send((Optr)PSend11491, SMB_do_, 1, (Optr)PBlock11492);
    Array PThreadedCode11490 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11491, (Optr)&t_push_closure, (Optr)PBlock11492, (Optr)&t_send1, (Optr)PSend11496, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11488 = new_Method_with(PArray11489, empty_Array, empty_Array, PThreadedCode11490, 2, PSend11496, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod11488, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11498 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign11500 = new_Assign((Optr)slot_Testing_TestSuite_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode11499 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11500, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11497 = new_Method_with(PArray11498, empty_Array, empty_Array, PThreadedCode11499, 2, PAssign11500, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod11497, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode11502 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_name, (Optr)&t_method_return);
    Method PMethod11501 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11502, 1, slot_Testing_TestSuite_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod11501, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend11505 = new_Send((Optr)slot_Testing_TestSuite_tests, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11510 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11509 = new_Assign((Optr)slot_Testing_TestSuite_tests, (Optr)PSend11510);
    Array PThreadedCode11508 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign11509, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11510, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11507 = new_Block_with(empty_Array, empty_Array, PThreadedCode11508, 1, PAssign11509);
    // ifTrue:. 
    Send PSend11506 = new_Send((Optr)PSend11505, SMB_ifTrue_, 1, (Optr)PBlock11507);
    Array PThreadedCode11504 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_send0, (Optr)PSend11505, (Optr)&t_send_ifTrue_, (Optr)PSend11506, (Optr)PBlock11507, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_method_return);
    Method PMethod11503 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11504, 2, PSend11506, slot_Testing_TestSuite_tests);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11503, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_tests, MC_SMB_tests);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11512 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11515 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend11517 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11518 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11516 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11517, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11518, (Optr)&t_method_return);
    Block PBlock11514 = new_Block_with(PArray11515, empty_Array, PThreadedCode11516, 2, PSend11517, PSend11518);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11519 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11520 = new_Send((Optr)PBlock11514, SMB_value_, 1, (Optr)PSend11519);
    Array PThreadedCode11513 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11514, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11519, (Optr)&t_send1, (Optr)PSend11520, (Optr)&t_method_return);
    Method PMethod11511 = new_Method_with(PArray11512, empty_Array, empty_Array, PThreadedCode11513, 1, PSend11520);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod11511, HEADER(Testing_TestSuite_Class));
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