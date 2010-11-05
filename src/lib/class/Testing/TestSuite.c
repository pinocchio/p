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
    Send PSend11363 = new_Send((Optr)slot_Testing_TestSuite_resources, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    // defaultResources. 
    Send PSend11368 = new_Send((Optr)self, SMB_defaultResources, 0);
    Assign PAssign11367 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)PSend11368);
    Array PThreadedCode11366 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11367, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11368, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11365 = new_Block_with(empty_Array, empty_Array, PThreadedCode11366, 1, PAssign11367);
    // ifTrue:. 
    Send PSend11364 = new_Send((Optr)PSend11363, SMB_ifTrue_, 1, (Optr)PBlock11365);
    Array PThreadedCode11362 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_send0, (Optr)PSend11363, (Optr)&t_send_ifTrue_, (Optr)PSend11364, (Optr)PBlock11365, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_method_return);
    Method PMethod11361 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11362, 2, PSend11364, slot_Testing_TestSuite_resources);
    
    MethodClosure MC_SMB_resources = new_MethodClosure((Method)PMethod11361, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources, MC_SMB_resources);
}


static void init_SMB_defaultResources() {
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11371 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11372 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Variable VAR_coll_1_0 = new_Variable_named(L"coll", 1);
    Variable VAR_testCase_1_1 = new_Variable_named(L"testCase", 1);
    Array PArray11374 = new_Array_with(2, (Optr)VAR_coll_1_0, (Optr)VAR_testCase_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11377 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11379 = new_Send((Optr)VAR_testCase_1_1, SMB_resources, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11380 = new_Send((Optr)VAR__receiver__2_0, SMB_addAll_, 1, (Optr)PSend11379);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11381 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode11378 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_testCase_1_1, (Optr)&t_send0, (Optr)PSend11379, (Optr)&t_send1, (Optr)PSend11380, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11381, (Optr)&t_method_return);
    Block PBlock11376 = new_Block_with(PArray11377, empty_Array, PThreadedCode11378, 2, PSend11380, PSend11381);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11382 = new_Send((Optr)PBlock11376, SMB_value_, 1, (Optr)VAR_coll_1_0);
    Array PThreadedCode11375 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11376, (Optr)&t_push_variable, (Optr)VAR_coll_1_0, (Optr)&t_send1, (Optr)PSend11382, (Optr)&t_method_return);
    Block PBlock11373 = new_Block_with(PArray11374, empty_Array, PThreadedCode11375, 1, PSend11382);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend11383 = new_Send((Optr)PSend11371, SMB_inject_into_, 2, (Optr)PSend11372, (Optr)PBlock11373);
    Array PThreadedCode11370 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11371, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11372, (Optr)&t_push_closure, (Optr)PBlock11373, (Optr)&t_send2, (Optr)PSend11383, (Optr)&t_method_return);
    Method PMethod11369 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11370, 1, PSend11383);
    
    MethodClosure MC_SMB_defaultResources = new_MethodClosure((Method)PMethod11369, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_defaultResources, MC_SMB_defaultResources);
}


static void init_SMB_addDependentToHierachy_() {
    Symbol SMB_addDependentToHierachy_ = new_Symbol(L"addDependentToHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11385 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_addDependent_ = new_Symbol(L"addDependent:");
    // addDependent:. 
    Send PSend11387 = new_Send((Optr)self, SMB_addDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11388 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11390 = new_Array_with(1, (Optr)VAR_each_1_0);
    // addDependentToHierachy:. 
    Send PSend11392 = new_Send((Optr)VAR_each_1_0, SMB_addDependentToHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11391 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11392, (Optr)&t_method_return);
    Block PBlock11389 = new_Block_with(PArray11390, empty_Array, PThreadedCode11391, 1, PSend11392);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11393 = new_Send((Optr)PSend11388, SMB_do_, 1, (Optr)PBlock11389);
    Array PThreadedCode11386 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11387, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11388, (Optr)&t_push_closure, (Optr)PBlock11389, (Optr)&t_send1, (Optr)PSend11393, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11384 = new_Method_with(PArray11385, empty_Array, empty_Array, PThreadedCode11386, 3, PSend11387, PSend11393, self);
    
    MethodClosure MC_SMB_addDependentToHierachy_ = new_MethodClosure((Method)PMethod11384, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addDependentToHierachy_, MC_SMB_addDependentToHierachy_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray11395 = new_Array_with(1, (Optr)VAR_result_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11398 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11401 = new_Send((Optr)TestResult_classReference, SMB_new, 0);
    Assign PAssign11400 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend11401);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11402 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_res_2_0 = new_Variable_named(L"res", 2);
    Array PArray11404 = new_Array_with(1, (Optr)VAR_res_2_0);
    Symbol SMB_isAvailable = new_Symbol(L"isAvailable");
    // isAvailable. 
    Send PSend11406 = new_Send((Optr)VAR_res_2_0, SMB_isAvailable, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signalInitializationError = new_Symbol(L"signalInitializationError");
    // signalInitializationError. 
    Send PSend11410 = new_Send((Optr)VAR_res_2_0, SMB_signalInitializationError, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11411 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11410);
    Array PThreadedCode11409 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11410, (Optr)&t_send1, (Optr)PSend11411, (Optr)&t_block_return);
    Block PBlock11408 = new_Block_with(empty_Array, empty_Array, PThreadedCode11409, 1, PSend11411);
    // ifFalse:. 
    Send PSend11407 = new_Send((Optr)PSend11406, SMB_ifFalse_, 1, (Optr)PBlock11408);
    Array PThreadedCode11405 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11406, (Optr)&t_send_ifFalse_, (Optr)PSend11407, (Optr)PBlock11408, (Optr)&t_method_return);
    Block PBlock11403 = new_Block_with(PArray11404, empty_Array, PThreadedCode11405, 1, PSend11407);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11412 = new_Send((Optr)PSend11402, SMB_do_, 1, (Optr)PBlock11403);
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend11415 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_result_0_0);
    Array PThreadedCode11414 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send1, (Optr)PSend11415, (Optr)&t_block_return);
    Block PBlock11413 = new_Block_with(empty_Array, empty_Array, PThreadedCode11414, 1, PSend11415);
    // resources. 
    Send PSend11418 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray11420 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend11422 = new_Send((Optr)VAR_each_2_0, SMB_reset, 0);
    Array PThreadedCode11421 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send0, (Optr)PSend11422, (Optr)&t_method_return);
    Block PBlock11419 = new_Block_with(PArray11420, empty_Array, PThreadedCode11421, 1, PSend11422);
    // do:. 
    Send PSend11423 = new_Send((Optr)PSend11418, SMB_do_, 1, (Optr)PBlock11419);
    Array PThreadedCode11417 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11418, (Optr)&t_push_closure, (Optr)PBlock11419, (Optr)&t_send1, (Optr)PSend11423, (Optr)&t_block_return);
    Block PBlock11416 = new_Block_with(empty_Array, empty_Array, PThreadedCode11417, 1, PSend11423);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend11424 = new_Send((Optr)PBlock11413, SMB_ensure_, 1, (Optr)PBlock11416);
    Array PThreadedCode11399 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign11400, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_send0, (Optr)PSend11401, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11402, (Optr)&t_push_closure, (Optr)PBlock11403, (Optr)&t_send1, (Optr)PSend11412, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11413, (Optr)&t_push_closure, (Optr)PBlock11416, (Optr)&t_send1, (Optr)PSend11424, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Block PBlock11397 = new_Block_with(PArray11398, empty_Array, PThreadedCode11399, 4, PAssign11400, PSend11412, PSend11424, VAR_result_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11425 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11397);
    Array PThreadedCode11396 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11397, (Optr)&t_send1, (Optr)PSend11425, (Optr)&t_method_return);
    Method PMethod11394 = new_Method_with(empty_Array, PArray11395, empty_Array, PThreadedCode11396, 1, PSend11425);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod11394, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_addTest_() {
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    Variable VAR_aTest_0_0 = new_Variable_named(L"aTest", 0);
    Array PArray11427 = new_Array_with(1, (Optr)VAR_aTest_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11429 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11430 = new_Send((Optr)PSend11429, SMB_add_, 1, (Optr)VAR_aTest_0_0);
    Array PThreadedCode11428 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11429, (Optr)&t_push_variable, (Optr)VAR_aTest_0_0, (Optr)&t_send1, (Optr)PSend11430, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11426 = new_Method_with(PArray11427, empty_Array, empty_Array, PThreadedCode11428, 2, PSend11430, self);
    
    MethodClosure MC_SMB_addTest_ = new_MethodClosure((Method)PMethod11426, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTest_, MC_SMB_addTest_);
}


static void init_SMB_resources_() {
    Symbol SMB_resources_ = new_Symbol(L"resources:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11432 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11434 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11433 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11434, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11431 = new_Method_with(PArray11432, empty_Array, empty_Array, PThreadedCode11433, 2, PAssign11434, self);
    
    MethodClosure MC_SMB_resources_ = new_MethodClosure((Method)PMethod11431, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources_, MC_SMB_resources_);
}


static void init_SMB_addTests_() {
    Symbol SMB_addTests_ = new_Symbol(L"addTests:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11436 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_eachTest_1_0 = new_Variable_named(L"eachTest", 1);
    Array PArray11439 = new_Array_with(1, (Optr)VAR_eachTest_1_0);
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    // addTest:. 
    Send PSend11441 = new_Send((Optr)self, SMB_addTest_, 1, (Optr)VAR_eachTest_1_0);
    Array PThreadedCode11440 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_eachTest_1_0, (Optr)&t_send1, (Optr)PSend11441, (Optr)&t_method_return);
    Block PBlock11438 = new_Block_with(PArray11439, empty_Array, PThreadedCode11440, 1, PSend11441);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11442 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock11438);
    Array PThreadedCode11437 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock11438, (Optr)&t_send1, (Optr)PSend11442, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11435 = new_Method_with(PArray11436, empty_Array, empty_Array, PThreadedCode11437, 2, PSend11442, self);
    
    MethodClosure MC_SMB_addTests_ = new_MethodClosure((Method)PMethod11435, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTests_, MC_SMB_addTests_);
}


static void init_SMB_removeDependentFromHierachy_() {
    Symbol SMB_removeDependentFromHierachy_ = new_Symbol(L"removeDependentFromHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11444 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_removeDependent_ = new_Symbol(L"removeDependent:");
    // removeDependent:. 
    Send PSend11446 = new_Send((Optr)self, SMB_removeDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11447 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11449 = new_Array_with(1, (Optr)VAR_each_1_0);
    // removeDependentFromHierachy:. 
    Send PSend11451 = new_Send((Optr)VAR_each_1_0, SMB_removeDependentFromHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11450 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11451, (Optr)&t_method_return);
    Block PBlock11448 = new_Block_with(PArray11449, empty_Array, PThreadedCode11450, 1, PSend11451);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11452 = new_Send((Optr)PSend11447, SMB_do_, 1, (Optr)PBlock11448);
    Array PThreadedCode11445 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11446, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11447, (Optr)&t_push_closure, (Optr)PBlock11448, (Optr)&t_send1, (Optr)PSend11452, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11443 = new_Method_with(PArray11444, empty_Array, empty_Array, PThreadedCode11445, 3, PSend11446, PSend11452, self);
    
    MethodClosure MC_SMB_removeDependentFromHierachy_ = new_MethodClosure((Method)PMethod11443, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_removeDependentFromHierachy_, MC_SMB_removeDependentFromHierachy_);
}


static void init_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11454 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11456 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11458 = new_Array_with(1, (Optr)VAR_each_1_0);
    // run:. 
    Send PSend11460 = new_Send((Optr)VAR_each_1_0, SMB_run_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11459 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11460, (Optr)&t_method_return);
    Block PBlock11457 = new_Block_with(PArray11458, empty_Array, PThreadedCode11459, 1, PSend11460);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11461 = new_Send((Optr)PSend11456, SMB_do_, 1, (Optr)PBlock11457);
    Array PThreadedCode11455 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11456, (Optr)&t_push_closure, (Optr)PBlock11457, (Optr)&t_send1, (Optr)PSend11461, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11453 = new_Method_with(PArray11454, empty_Array, empty_Array, PThreadedCode11455, 2, PSend11461, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod11453, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11463 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign11465 = new_Assign((Optr)slot_Testing_TestSuite_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode11464 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11465, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11462 = new_Method_with(PArray11463, empty_Array, empty_Array, PThreadedCode11464, 2, PAssign11465, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod11462, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode11467 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_name, (Optr)&t_method_return);
    Method PMethod11466 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11467, 1, slot_Testing_TestSuite_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod11466, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend11470 = new_Send((Optr)slot_Testing_TestSuite_tests, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11475 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11474 = new_Assign((Optr)slot_Testing_TestSuite_tests, (Optr)PSend11475);
    Array PThreadedCode11473 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign11474, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11475, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11472 = new_Block_with(empty_Array, empty_Array, PThreadedCode11473, 1, PAssign11474);
    // ifTrue:. 
    Send PSend11471 = new_Send((Optr)PSend11470, SMB_ifTrue_, 1, (Optr)PBlock11472);
    Array PThreadedCode11469 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_send0, (Optr)PSend11470, (Optr)&t_send_ifTrue_, (Optr)PSend11471, (Optr)PBlock11472, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_method_return);
    Method PMethod11468 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11469, 2, PSend11471, slot_Testing_TestSuite_tests);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11468, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_tests, MC_SMB_tests);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11477 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11480 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend11482 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11483 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11481 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11482, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11483, (Optr)&t_method_return);
    Block PBlock11479 = new_Block_with(PArray11480, empty_Array, PThreadedCode11481, 2, PSend11482, PSend11483);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11484 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11485 = new_Send((Optr)PBlock11479, SMB_value_, 1, (Optr)PSend11484);
    Array PThreadedCode11478 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11479, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11484, (Optr)&t_send1, (Optr)PSend11485, (Optr)&t_method_return);
    Method PMethod11476 = new_Method_with(PArray11477, empty_Array, empty_Array, PThreadedCode11478, 1, PSend11485);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod11476, HEADER(Testing_TestSuite_Class));
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