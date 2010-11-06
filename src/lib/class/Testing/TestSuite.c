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
    Send PSend11447 = new_Send((Optr)slot_Testing_TestSuite_resources, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    // defaultResources. 
    Send PSend11452 = new_Send((Optr)self, SMB_defaultResources, 0);
    Assign PAssign11451 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)PSend11452);
    Array PThreadedCode11450 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11451, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11452, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11449 = new_Block_with(empty_Array, empty_Array, PThreadedCode11450, 1, PAssign11451);
    // ifTrue:. 
    Send PSend11448 = new_Send((Optr)PSend11447, SMB_ifTrue_, 1, (Optr)PBlock11449);
    Array PThreadedCode11446 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_send0, (Optr)PSend11447, (Optr)&t_send_ifTrue_, (Optr)PSend11448, (Optr)PBlock11449, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_resources, (Optr)&t_method_return);
    Method PMethod11445 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11446, 2, PSend11448, slot_Testing_TestSuite_resources);
    
    MethodClosure MC_SMB_resources = new_MethodClosure((Method)PMethod11445, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources, MC_SMB_resources);
}


static void init_SMB_defaultResources() {
    Symbol SMB_defaultResources = new_Symbol(L"defaultResources");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11455 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11456 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Variable VAR_coll_1_0 = new_Variable_named(L"coll", 1);
    Variable VAR_testCase_1_1 = new_Variable_named(L"testCase", 1);
    Array PArray11458 = new_Array_with(2, (Optr)VAR_coll_1_0, (Optr)VAR_testCase_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11461 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11463 = new_Send((Optr)VAR_testCase_1_1, SMB_resources, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11464 = new_Send((Optr)VAR__receiver__2_0, SMB_addAll_, 1, (Optr)PSend11463);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11465 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode11462 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_testCase_1_1, (Optr)&t_send0, (Optr)PSend11463, (Optr)&t_send1, (Optr)PSend11464, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11465, (Optr)&t_method_return);
    Block PBlock11460 = new_Block_with(PArray11461, empty_Array, PThreadedCode11462, 2, PSend11464, PSend11465);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11466 = new_Send((Optr)PBlock11460, SMB_value_, 1, (Optr)VAR_coll_1_0);
    Array PThreadedCode11459 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock11460, (Optr)&t_push_variable, (Optr)VAR_coll_1_0, (Optr)&t_send1, (Optr)PSend11466, (Optr)&t_method_return);
    Block PBlock11457 = new_Block_with(PArray11458, empty_Array, PThreadedCode11459, 1, PSend11466);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend11467 = new_Send((Optr)PSend11455, SMB_inject_into_, 2, (Optr)PSend11456, (Optr)PBlock11457);
    Array PThreadedCode11454 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11455, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11456, (Optr)&t_push_closure, (Optr)PBlock11457, (Optr)&t_send2, (Optr)PSend11467, (Optr)&t_method_return);
    Method PMethod11453 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11454, 1, PSend11467);
    
    MethodClosure MC_SMB_defaultResources = new_MethodClosure((Method)PMethod11453, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_defaultResources, MC_SMB_defaultResources);
}


static void init_SMB_addDependentToHierachy_() {
    Symbol SMB_addDependentToHierachy_ = new_Symbol(L"addDependentToHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11469 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_addDependent_ = new_Symbol(L"addDependent:");
    // addDependent:. 
    Send PSend11471 = new_Send((Optr)self, SMB_addDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11472 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11474 = new_Array_with(1, (Optr)VAR_each_1_0);
    // addDependentToHierachy:. 
    Send PSend11476 = new_Send((Optr)VAR_each_1_0, SMB_addDependentToHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11475 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11476, (Optr)&t_method_return);
    Block PBlock11473 = new_Block_with(PArray11474, empty_Array, PThreadedCode11475, 1, PSend11476);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11477 = new_Send((Optr)PSend11472, SMB_do_, 1, (Optr)PBlock11473);
    Array PThreadedCode11470 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11471, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11472, (Optr)&t_push_closure, (Optr)PBlock11473, (Optr)&t_send1, (Optr)PSend11477, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11468 = new_Method_with(PArray11469, empty_Array, empty_Array, PThreadedCode11470, 3, PSend11471, PSend11477, self);
    
    MethodClosure MC_SMB_addDependentToHierachy_ = new_MethodClosure((Method)PMethod11468, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addDependentToHierachy_, MC_SMB_addDependentToHierachy_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray11479 = new_Array_with(1, (Optr)VAR_result_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11482 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11485 = new_Send((Optr)TestResult_classReference, SMB_new, 0);
    Assign PAssign11484 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend11485);
    Symbol SMB_resources = new_Symbol(L"resources");
    // resources. 
    Send PSend11486 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_res_2_0 = new_Variable_named(L"res", 2);
    Array PArray11488 = new_Array_with(1, (Optr)VAR_res_2_0);
    Symbol SMB_isAvailable = new_Symbol(L"isAvailable");
    // isAvailable. 
    Send PSend11490 = new_Send((Optr)VAR_res_2_0, SMB_isAvailable, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signalInitializationError = new_Symbol(L"signalInitializationError");
    // signalInitializationError. 
    Send PSend11494 = new_Send((Optr)VAR_res_2_0, SMB_signalInitializationError, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11495 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11494);
    Array PThreadedCode11493 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11494, (Optr)&t_send1, (Optr)PSend11495, (Optr)&t_block_return);
    Block PBlock11492 = new_Block_with(empty_Array, empty_Array, PThreadedCode11493, 1, PSend11495);
    // ifFalse:. 
    Send PSend11491 = new_Send((Optr)PSend11490, SMB_ifFalse_, 1, (Optr)PBlock11492);
    Array PThreadedCode11489 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_res_2_0, (Optr)&t_send0, (Optr)PSend11490, (Optr)&t_send_ifFalse_, (Optr)PSend11491, (Optr)PBlock11492, (Optr)&t_method_return);
    Block PBlock11487 = new_Block_with(PArray11488, empty_Array, PThreadedCode11489, 1, PSend11491);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11496 = new_Send((Optr)PSend11486, SMB_do_, 1, (Optr)PBlock11487);
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend11499 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_result_0_0);
    Array PThreadedCode11498 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_send1, (Optr)PSend11499, (Optr)&t_block_return);
    Block PBlock11497 = new_Block_with(empty_Array, empty_Array, PThreadedCode11498, 1, PSend11499);
    // resources. 
    Send PSend11502 = new_Send((Optr)self, SMB_resources, 0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray11504 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend11506 = new_Send((Optr)VAR_each_2_0, SMB_reset, 0);
    Array PThreadedCode11505 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send0, (Optr)PSend11506, (Optr)&t_method_return);
    Block PBlock11503 = new_Block_with(PArray11504, empty_Array, PThreadedCode11505, 1, PSend11506);
    // do:. 
    Send PSend11507 = new_Send((Optr)PSend11502, SMB_do_, 1, (Optr)PBlock11503);
    Array PThreadedCode11501 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11502, (Optr)&t_push_closure, (Optr)PBlock11503, (Optr)&t_send1, (Optr)PSend11507, (Optr)&t_block_return);
    Block PBlock11500 = new_Block_with(empty_Array, empty_Array, PThreadedCode11501, 1, PSend11507);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend11508 = new_Send((Optr)PBlock11497, SMB_ensure_, 1, (Optr)PBlock11500);
    Array PThreadedCode11483 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign11484, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_send0, (Optr)PSend11485, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11486, (Optr)&t_push_closure, (Optr)PBlock11487, (Optr)&t_send1, (Optr)PSend11496, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11497, (Optr)&t_push_closure, (Optr)PBlock11500, (Optr)&t_send1, (Optr)PSend11508, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Block PBlock11481 = new_Block_with(PArray11482, empty_Array, PThreadedCode11483, 4, PAssign11484, PSend11496, PSend11508, VAR_result_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11509 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11481);
    Array PThreadedCode11480 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11481, (Optr)&t_send1, (Optr)PSend11509, (Optr)&t_method_return);
    Method PMethod11478 = new_Method_with(empty_Array, PArray11479, empty_Array, PThreadedCode11480, 1, PSend11509);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod11478, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_addTest_() {
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    Variable VAR_aTest_0_0 = new_Variable_named(L"aTest", 0);
    Array PArray11511 = new_Array_with(1, (Optr)VAR_aTest_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11513 = new_Send((Optr)self, SMB_tests, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11514 = new_Send((Optr)PSend11513, SMB_add_, 1, (Optr)VAR_aTest_0_0);
    Array PThreadedCode11512 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11513, (Optr)&t_push_variable, (Optr)VAR_aTest_0_0, (Optr)&t_send1, (Optr)PSend11514, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11510 = new_Method_with(PArray11511, empty_Array, empty_Array, PThreadedCode11512, 2, PSend11514, self);
    
    MethodClosure MC_SMB_addTest_ = new_MethodClosure((Method)PMethod11510, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTest_, MC_SMB_addTest_);
}


static void init_SMB_resources_() {
    Symbol SMB_resources_ = new_Symbol(L"resources:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11516 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11518 = new_Assign((Optr)slot_Testing_TestSuite_resources, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11517 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11518, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11515 = new_Method_with(PArray11516, empty_Array, empty_Array, PThreadedCode11517, 2, PAssign11518, self);
    
    MethodClosure MC_SMB_resources_ = new_MethodClosure((Method)PMethod11515, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_resources_, MC_SMB_resources_);
}


static void init_SMB_addTests_() {
    Symbol SMB_addTests_ = new_Symbol(L"addTests:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray11520 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_eachTest_1_0 = new_Variable_named(L"eachTest", 1);
    Array PArray11523 = new_Array_with(1, (Optr)VAR_eachTest_1_0);
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    // addTest:. 
    Send PSend11525 = new_Send((Optr)self, SMB_addTest_, 1, (Optr)VAR_eachTest_1_0);
    Array PThreadedCode11524 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_eachTest_1_0, (Optr)&t_send1, (Optr)PSend11525, (Optr)&t_method_return);
    Block PBlock11522 = new_Block_with(PArray11523, empty_Array, PThreadedCode11524, 1, PSend11525);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11526 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock11522);
    Array PThreadedCode11521 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock11522, (Optr)&t_send1, (Optr)PSend11526, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11519 = new_Method_with(PArray11520, empty_Array, empty_Array, PThreadedCode11521, 2, PSend11526, self);
    
    MethodClosure MC_SMB_addTests_ = new_MethodClosure((Method)PMethod11519, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_addTests_, MC_SMB_addTests_);
}


static void init_SMB_removeDependentFromHierachy_() {
    Symbol SMB_removeDependentFromHierachy_ = new_Symbol(L"removeDependentFromHierachy:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11528 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_removeDependent_ = new_Symbol(L"removeDependent:");
    // removeDependent:. 
    Send PSend11530 = new_Send((Optr)self, SMB_removeDependent_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11531 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11533 = new_Array_with(1, (Optr)VAR_each_1_0);
    // removeDependentFromHierachy:. 
    Send PSend11535 = new_Send((Optr)VAR_each_1_0, SMB_removeDependentFromHierachy_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11534 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11535, (Optr)&t_method_return);
    Block PBlock11532 = new_Block_with(PArray11533, empty_Array, PThreadedCode11534, 1, PSend11535);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11536 = new_Send((Optr)PSend11531, SMB_do_, 1, (Optr)PBlock11532);
    Array PThreadedCode11529 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11530, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11531, (Optr)&t_push_closure, (Optr)PBlock11532, (Optr)&t_send1, (Optr)PSend11536, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11527 = new_Method_with(PArray11528, empty_Array, empty_Array, PThreadedCode11529, 3, PSend11530, PSend11536, self);
    
    MethodClosure MC_SMB_removeDependentFromHierachy_ = new_MethodClosure((Method)PMethod11527, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_removeDependentFromHierachy_, MC_SMB_removeDependentFromHierachy_);
}


static void init_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11538 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11540 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11542 = new_Array_with(1, (Optr)VAR_each_1_0);
    // run:. 
    Send PSend11544 = new_Send((Optr)VAR_each_1_0, SMB_run_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11543 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11544, (Optr)&t_method_return);
    Block PBlock11541 = new_Block_with(PArray11542, empty_Array, PThreadedCode11543, 1, PSend11544);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11545 = new_Send((Optr)PSend11540, SMB_do_, 1, (Optr)PBlock11541);
    Array PThreadedCode11539 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11540, (Optr)&t_push_closure, (Optr)PBlock11541, (Optr)&t_send1, (Optr)PSend11545, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11537 = new_Method_with(PArray11538, empty_Array, empty_Array, PThreadedCode11539, 2, PSend11545, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod11537, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11547 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign11549 = new_Assign((Optr)slot_Testing_TestSuite_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode11548 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11549, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11546 = new_Method_with(PArray11547, empty_Array, empty_Array, PThreadedCode11548, 2, PAssign11549, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod11546, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode11551 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_name, (Optr)&t_method_return);
    Method PMethod11550 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11551, 1, slot_Testing_TestSuite_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod11550, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend11554 = new_Send((Optr)slot_Testing_TestSuite_tests, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11559 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11558 = new_Assign((Optr)slot_Testing_TestSuite_tests, (Optr)PSend11559);
    Array PThreadedCode11557 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign11558, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11559, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock11556 = new_Block_with(empty_Array, empty_Array, PThreadedCode11557, 1, PAssign11558);
    // ifTrue:. 
    Send PSend11555 = new_Send((Optr)PSend11554, SMB_ifTrue_, 1, (Optr)PBlock11556);
    Array PThreadedCode11553 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_send0, (Optr)PSend11554, (Optr)&t_send_ifTrue_, (Optr)PSend11555, (Optr)PBlock11556, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_TestSuite_tests, (Optr)&t_method_return);
    Method PMethod11552 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11553, 2, PSend11555, slot_Testing_TestSuite_tests);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11552, Testing_TestSuite_Class);
    store_method(Testing_TestSuite_Class, SMB_tests, MC_SMB_tests);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11561 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11564 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend11566 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11567 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11565 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11566, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11567, (Optr)&t_method_return);
    Block PBlock11563 = new_Block_with(PArray11564, empty_Array, PThreadedCode11565, 2, PSend11566, PSend11567);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11568 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11569 = new_Send((Optr)PBlock11563, SMB_value_, 1, (Optr)PSend11568);
    Array PThreadedCode11562 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11563, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11568, (Optr)&t_send1, (Optr)PSend11569, (Optr)&t_method_return);
    Method PMethod11560 = new_Method_with(PArray11561, empty_Array, empty_Array, PThreadedCode11562, 1, PSend11569);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod11560, HEADER(Testing_TestSuite_Class));
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