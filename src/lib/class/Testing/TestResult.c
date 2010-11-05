#include <lib/class/Testing/TestResult.h>


Optr layout_Testing_TestResult_Class_class;
Optr slot_Testing_TestResult_timeStamp;
Optr slot_Testing_TestResult_failures;
Optr slot_Testing_TestResult_errors;
Optr slot_Testing_TestResult_passed;
Optr layout_Testing_TestResult;


static void init_SMB_selectResultsForTestCase_() {
    Symbol SMB_selectResultsForTestCase_ = new_Symbol(L"selectResultsForTestCase:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray11487 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_passedSelectors_0_1 = new_Variable_named(L"passedSelectors", 0);
    Variable VAR_errorsSelectors_0_2 = new_Variable_named(L"errorsSelectors", 0);
    Variable VAR_failuresSelectors_0_3 = new_Variable_named(L"failuresSelectors", 0);
    Array PArray11488 = new_Array_with(3, (Optr)VAR_passedSelectors_0_1, (Optr)VAR_errorsSelectors_0_2, (Optr)VAR_failuresSelectors_0_3);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11492 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_select_thenCollect_ = new_Symbol(L"select:thenCollect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11494 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11496 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11497 = new_Send((Optr)PSend11496, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11495 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11496, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11497, (Optr)&t_method_return);
    Block PBlock11493 = new_Block_with(PArray11494, empty_Array, PThreadedCode11495, 1, PSend11497);
    Array PArray11499 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11501 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11500 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11501, (Optr)&t_method_return);
    Block PBlock11498 = new_Block_with(PArray11499, empty_Array, PThreadedCode11500, 1, PSend11501);
    // select:thenCollect:. 
    Send PSend11491 = new_Send((Optr)PSend11492, SMB_select_thenCollect_, 2, (Optr)PBlock11493, (Optr)PBlock11498);
    Assign PAssign11490 = new_Assign((Optr)VAR_passedSelectors_0_1, (Optr)PSend11491);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11504 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11506 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11508 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11509 = new_Send((Optr)PSend11508, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11507 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11508, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11509, (Optr)&t_method_return);
    Block PBlock11505 = new_Block_with(PArray11506, empty_Array, PThreadedCode11507, 1, PSend11509);
    Array PArray11511 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11513 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11512 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11513, (Optr)&t_method_return);
    Block PBlock11510 = new_Block_with(PArray11511, empty_Array, PThreadedCode11512, 1, PSend11513);
    // select:thenCollect:. 
    Send PSend11503 = new_Send((Optr)PSend11504, SMB_select_thenCollect_, 2, (Optr)PBlock11505, (Optr)PBlock11510);
    Assign PAssign11502 = new_Assign((Optr)VAR_errorsSelectors_0_2, (Optr)PSend11503);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11516 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11518 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11520 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11521 = new_Send((Optr)PSend11520, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11519 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11520, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11521, (Optr)&t_method_return);
    Block PBlock11517 = new_Block_with(PArray11518, empty_Array, PThreadedCode11519, 1, PSend11521);
    Array PArray11523 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11525 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11524 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11525, (Optr)&t_method_return);
    Block PBlock11522 = new_Block_with(PArray11523, empty_Array, PThreadedCode11524, 1, PSend11525);
    // select:thenCollect:. 
    Send PSend11515 = new_Send((Optr)PSend11516, SMB_select_thenCollect_, 2, (Optr)PBlock11517, (Optr)PBlock11522);
    Assign PAssign11514 = new_Assign((Optr)VAR_failuresSelectors_0_3, (Optr)PSend11515);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11527 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11529 = new_Send((Optr)VAR_passedSelectors_0_1, SMB_asSet, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend11530 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend11529);
    // asSet. 
    Send PSend11531 = new_Send((Optr)VAR_failuresSelectors_0_3, SMB_asSet, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend11532 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend11531);
    // asSet. 
    Send PSend11533 = new_Send((Optr)VAR_errorsSelectors_0_2, SMB_asSet, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend11534 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend11533);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11535 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11528 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_variable, (Optr)VAR_passedSelectors_0_1, (Optr)&t_send0, (Optr)PSend11529, (Optr)&t_send2, (Optr)PSend11530, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_variable, (Optr)VAR_failuresSelectors_0_3, (Optr)&t_send0, (Optr)PSend11531, (Optr)&t_send2, (Optr)PSend11532, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_variable, (Optr)VAR_errorsSelectors_0_2, (Optr)&t_send0, (Optr)PSend11533, (Optr)&t_send2, (Optr)PSend11534, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11535, (Optr)&t_method_return);
    Block PBlock11526 = new_Block_with(PArray11527, empty_Array, PThreadedCode11528, 4, PSend11530, PSend11532, PSend11534, PSend11535);
    // class. 
    Send PSend11536 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend11537 = new_Send((Optr)PSend11536, SMB_newTestDictionary, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11538 = new_Send((Optr)PBlock11526, SMB_value_, 1, (Optr)PSend11537);
    Array PThreadedCode11489 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign11490, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11492, (Optr)&t_push_closure, (Optr)PBlock11493, (Optr)&t_push_closure, (Optr)PBlock11498, (Optr)&t_send2, (Optr)PSend11491, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11502, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11504, (Optr)&t_push_closure, (Optr)PBlock11505, (Optr)&t_push_closure, (Optr)PBlock11510, (Optr)&t_send2, (Optr)PSend11503, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11514, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11516, (Optr)&t_push_closure, (Optr)PBlock11517, (Optr)&t_push_closure, (Optr)PBlock11522, (Optr)&t_send2, (Optr)PSend11515, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11526, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11536, (Optr)&t_send0, (Optr)PSend11537, (Optr)&t_send1, (Optr)PSend11538, (Optr)&t_method_return);
    Method PMethod11486 = new_Method_with(PArray11487, PArray11488, empty_Array, PThreadedCode11489, 4, PAssign11490, PAssign11502, PAssign11514, PSend11538);
    
    MethodClosure MC_SMB_selectResultsForTestCase_ = new_MethodClosure((Method)PMethod11486, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_selectResultsForTestCase_, MC_SMB_selectResultsForTestCase_);
}


static void init_SMB_hasPassed() {
    Symbol SMB_hasPassed = new_Symbol(L"hasPassed");
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    // hasErrors. 
    Send PSend11541 = new_Send((Optr)self, SMB_hasErrors, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11542 = new_Send((Optr)PSend11541, SMB_not, 0);
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    // hasFailures. 
    Send PSend11545 = new_Send((Optr)self, SMB_hasFailures, 0);
    // not. 
    Send PSend11546 = new_Send((Optr)PSend11545, SMB_not, 0);
    Array PThreadedCode11544 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11545, (Optr)&t_send0, (Optr)PSend11546, (Optr)&t_block_return);
    Block PBlock11543 = new_Block_with(empty_Array, empty_Array, PThreadedCode11544, 1, PSend11546);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11547 = new_Send((Optr)PSend11542, SMB_and_, 1, (Optr)PBlock11543);
    Array PThreadedCode11540 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11541, (Optr)&t_send0, (Optr)PSend11542, (Optr)&t_push_closure, (Optr)PBlock11543, (Optr)&t_send1, (Optr)PSend11547, (Optr)&t_method_return);
    Method PMethod11539 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11540, 1, PSend11547);
    
    MethodClosure MC_SMB_hasPassed = new_MethodClosure((Method)PMethod11539, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasPassed, MC_SMB_hasPassed);
}


static void init_SMB_isPassedFor_selector_() {
    Symbol SMB_isPassedFor_selector_ = new_Symbol(L"isPassedFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11549 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11551 = new_Send((Optr)self, SMB_passed, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11553 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11555 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11556 = new_Send((Optr)PSend11555, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11559 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11560 = new_Send((Optr)PSend11559, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11558 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11559, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11560, (Optr)&t_block_return);
    Block PBlock11557 = new_Block_with(empty_Array, empty_Array, PThreadedCode11558, 1, PSend11560);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11561 = new_Send((Optr)PSend11556, SMB_and_, 1, (Optr)PBlock11557);
    Array PThreadedCode11554 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11555, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11556, (Optr)&t_push_closure, (Optr)PBlock11557, (Optr)&t_send1, (Optr)PSend11561, (Optr)&t_method_return);
    Block PBlock11552 = new_Block_with(PArray11553, empty_Array, PThreadedCode11554, 1, PSend11561);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11562 = new_Send((Optr)PSend11551, SMB_anySatisfy_, 1, (Optr)PBlock11552);
    Array PThreadedCode11550 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11551, (Optr)&t_push_closure, (Optr)PBlock11552, (Optr)&t_send1, (Optr)PSend11562, (Optr)&t_method_return);
    Method PMethod11548 = new_Method_with(PArray11549, empty_Array, empty_Array, PThreadedCode11550, 1, PSend11562);
    
    MethodClosure MC_SMB_isPassedFor_selector_ = new_MethodClosure((Method)PMethod11548, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassedFor_selector_, MC_SMB_isPassedFor_selector_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper11565 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11567 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11566 = new_Assign((Optr)slot_Testing_TestResult_passed, (Optr)PSend11567);
    // new. 
    Send PSend11569 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11568 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11569);
    // new. 
    Send PSend11571 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11570 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11571);
    Array PThreadedCode11564 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11565, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11566, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11567, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11568, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11569, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11570, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11571, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11563 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11564, 5, PSuper11565, PAssign11566, PAssign11568, PAssign11570, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod11563, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_diff_() {
    Symbol SMB_diff_ = new_Symbol(L"diff:");
    Variable VAR_aTestResult_0_0 = new_Variable_named(L"aTestResult", 0);
    Array PArray11573 = new_Array_with(1, (Optr)VAR_aTestResult_0_0);
    Variable VAR_passed1Selectors_0_1 = new_Variable_named(L"passed1Selectors", 0);
    Variable VAR_failed1Selectors_0_2 = new_Variable_named(L"failed1Selectors", 0);
    Variable VAR_errors1Selectors_0_3 = new_Variable_named(L"errors1Selectors", 0);
    Variable VAR_passed2Selectors_0_4 = new_Variable_named(L"passed2Selectors", 0);
    Variable VAR_failed2Selectors_0_5 = new_Variable_named(L"failed2Selectors", 0);
    Variable VAR_errors2Selectors_0_6 = new_Variable_named(L"errors2Selectors", 0);
    Array PArray11574 = new_Array_with(6, (Optr)VAR_passed1Selectors_0_1, (Optr)VAR_failed1Selectors_0_2, (Optr)VAR_errors1Selectors_0_3, (Optr)VAR_passed2Selectors_0_4, (Optr)VAR_failed2Selectors_0_5, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11578 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11580 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11582 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11581 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11582, (Optr)&t_method_return);
    Block PBlock11579 = new_Block_with(PArray11580, empty_Array, PThreadedCode11581, 1, PSend11582);
    // collect:. 
    Send PSend11577 = new_Send((Optr)PSend11578, SMB_collect_, 1, (Optr)PBlock11579);
    Assign PAssign11576 = new_Assign((Optr)VAR_passed1Selectors_0_1, (Optr)PSend11577);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11585 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11587 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11589 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11588 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11589, (Optr)&t_method_return);
    Block PBlock11586 = new_Block_with(PArray11587, empty_Array, PThreadedCode11588, 1, PSend11589);
    // collect:. 
    Send PSend11584 = new_Send((Optr)PSend11585, SMB_collect_, 1, (Optr)PBlock11586);
    Assign PAssign11583 = new_Assign((Optr)VAR_failed1Selectors_0_2, (Optr)PSend11584);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11592 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11594 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11596 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11595 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11596, (Optr)&t_method_return);
    Block PBlock11593 = new_Block_with(PArray11594, empty_Array, PThreadedCode11595, 1, PSend11596);
    // collect:. 
    Send PSend11591 = new_Send((Optr)PSend11592, SMB_collect_, 1, (Optr)PBlock11593);
    Assign PAssign11590 = new_Assign((Optr)VAR_errors1Selectors_0_3, (Optr)PSend11591);
    // passed. 
    Send PSend11599 = new_Send((Optr)VAR_aTestResult_0_0, SMB_passed, 0);
    Array PArray11601 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11603 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11602 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11603, (Optr)&t_method_return);
    Block PBlock11600 = new_Block_with(PArray11601, empty_Array, PThreadedCode11602, 1, PSend11603);
    // collect:. 
    Send PSend11598 = new_Send((Optr)PSend11599, SMB_collect_, 1, (Optr)PBlock11600);
    Assign PAssign11597 = new_Assign((Optr)VAR_passed2Selectors_0_4, (Optr)PSend11598);
    // failures. 
    Send PSend11606 = new_Send((Optr)VAR_aTestResult_0_0, SMB_failures, 0);
    Array PArray11608 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11610 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11609 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11610, (Optr)&t_method_return);
    Block PBlock11607 = new_Block_with(PArray11608, empty_Array, PThreadedCode11609, 1, PSend11610);
    // collect:. 
    Send PSend11605 = new_Send((Optr)PSend11606, SMB_collect_, 1, (Optr)PBlock11607);
    Assign PAssign11604 = new_Assign((Optr)VAR_failed2Selectors_0_5, (Optr)PSend11605);
    // errors. 
    Send PSend11613 = new_Send((Optr)VAR_aTestResult_0_0, SMB_errors, 0);
    Array PArray11615 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11617 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11616 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11617, (Optr)&t_method_return);
    Block PBlock11614 = new_Block_with(PArray11615, empty_Array, PThreadedCode11616, 1, PSend11617);
    // collect:. 
    Send PSend11612 = new_Send((Optr)PSend11613, SMB_collect_, 1, (Optr)PBlock11614);
    Assign PAssign11611 = new_Assign((Optr)VAR_errors2Selectors_0_6, (Optr)PSend11612);
    Symbol SMB_copyWithoutAll_ = new_Symbol(L"copyWithoutAll:");
    // copyWithoutAll:. 
    Send PSend11618 = new_Send((Optr)VAR_passed1Selectors_0_1, SMB_copyWithoutAll_, 1, (Optr)VAR_passed2Selectors_0_4);
    // copyWithoutAll:. 
    Send PSend11619 = new_Send((Optr)VAR_failed1Selectors_0_2, SMB_copyWithoutAll_, 1, (Optr)VAR_failed2Selectors_0_5);
    // copyWithoutAll:. 
    Send PSend11620 = new_Send((Optr)VAR_errors1Selectors_0_3, SMB_copyWithoutAll_, 1, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend11621 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)PSend11618, (Optr)PSend11619, (Optr)PSend11620);
    Array PThreadedCode11575 = instantiate_Array_with(ThreadedCode_Class, 0, 92, (Optr)&t_push1, (Optr)PAssign11576, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11578, (Optr)&t_push_closure, (Optr)PBlock11579, (Optr)&t_send1, (Optr)PSend11577, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11583, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11585, (Optr)&t_push_closure, (Optr)PBlock11586, (Optr)&t_send1, (Optr)PSend11584, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11590, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11592, (Optr)&t_push_closure, (Optr)PBlock11593, (Optr)&t_send1, (Optr)PSend11591, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11597, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11599, (Optr)&t_push_closure, (Optr)PBlock11600, (Optr)&t_send1, (Optr)PSend11598, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11604, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11606, (Optr)&t_push_closure, (Optr)PBlock11607, (Optr)&t_send1, (Optr)PSend11605, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11611, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11613, (Optr)&t_push_closure, (Optr)PBlock11614, (Optr)&t_send1, (Optr)PSend11612, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_passed1Selectors_0_1, (Optr)&t_push_variable, (Optr)VAR_passed2Selectors_0_4, (Optr)&t_send1, (Optr)PSend11618, (Optr)&t_push_variable, (Optr)VAR_failed1Selectors_0_2, (Optr)&t_push_variable, (Optr)VAR_failed2Selectors_0_5, (Optr)&t_send1, (Optr)PSend11619, (Optr)&t_push_variable, (Optr)VAR_errors1Selectors_0_3, (Optr)&t_push_variable, (Optr)VAR_errors2Selectors_0_6, (Optr)&t_send1, (Optr)PSend11620, (Optr)&t_send3, (Optr)PSend11621, (Optr)&t_method_return);
    Method PMethod11572 = new_Method_with(PArray11573, PArray11574, empty_Array, PThreadedCode11575, 7, PAssign11576, PAssign11583, PAssign11590, PAssign11597, PAssign11604, PAssign11611, PSend11621);
    
    MethodClosure MC_SMB_diff_ = new_MethodClosure((Method)PMethod11572, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_diff_, MC_SMB_diff_);
}


static void init_SMB_errorCount() {
    Symbol SMB_errorCount = new_Symbol(L"errorCount");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11624 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11625 = new_Send((Optr)PSend11624, SMB_size, 0);
    Array PThreadedCode11623 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11624, (Optr)&t_send0, (Optr)PSend11625, (Optr)&t_method_return);
    Method PMethod11622 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11623, 1, PSend11625);
    
    MethodClosure MC_SMB_errorCount = new_MethodClosure((Method)PMethod11622, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errorCount, MC_SMB_errorCount);
}


static void init_SMB_timeStamp_() {
    Symbol SMB_timeStamp_ = new_Symbol(L"timeStamp:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11627 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11629 = new_Assign((Optr)slot_Testing_TestResult_timeStamp, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11628 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11629, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11626 = new_Method_with(PArray11627, empty_Array, empty_Array, PThreadedCode11628, 2, PAssign11629, self);
    
    MethodClosure MC_SMB_timeStamp_ = new_MethodClosure((Method)PMethod11626, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp_, MC_SMB_timeStamp_);
}


static void init_SMB_errors() {
    Symbol SMB_errors = new_Symbol(L"errors");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11632 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Array PThreadedCode11631 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11632, (Optr)&t_method_return);
    Method PMethod11630 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11631, 1, PSend11632);
    
    MethodClosure MC_SMB_errors = new_MethodClosure((Method)PMethod11630, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errors, MC_SMB_errors);
}


static void init_SMB_passed() {
    Symbol SMB_passed = new_Symbol(L"passed");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11635 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11636 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11637 = new_Send((Optr)PSend11635, SMB__append_, 1, (Optr)PSend11636);
    Array PThreadedCode11634 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11635, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11636, (Optr)&t_send1, (Optr)PSend11637, (Optr)&t_method_return);
    Method PMethod11633 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11634, 1, PSend11637);
    
    MethodClosure MC_SMB_passed = new_MethodClosure((Method)PMethod11633, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passed, MC_SMB_passed);
}


static void init_SMB_fileOutOn_() {
    Symbol SMB_fileOutOn_ = new_Symbol(L"fileOutOn:");
    Variable VAR_aFileStream_0_0 = new_Variable_named(L"aFileStream", 0);
    Array PArray11639 = new_Array_with(1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_printer_0_1 = new_Variable_named(L"printer", 0);
    Array PArray11640 = new_Array_with(1, (Optr)VAR_printer_0_1);
    Variable VAR_title_1_0 = new_Variable_named(L"title", 1);
    Variable VAR_testCases_1_1 = new_Variable_named(L"testCases", 1);
    Array PArray11644 = new_Array_with(2, (Optr)VAR_title_1_0, (Optr)VAR_testCases_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11647 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11649 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11650 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)VAR_title_1_0);
    // cr. 
    Send PSend11651 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11648 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11649, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_title_1_0, (Optr)&t_send1, (Optr)PSend11650, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11651, (Optr)&t_method_return);
    Block PBlock11646 = new_Block_with(PArray11647, empty_Array, PThreadedCode11648, 3, PSend11649, PSend11650, PSend11651);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11652 = new_Send((Optr)PBlock11646, SMB_value_, 1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_aTestCase_2_0 = new_Variable_named(L"aTestCase", 2);
    Array PArray11654 = new_Array_with(1, (Optr)VAR_aTestCase_2_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11656 = new_Send((Optr)VAR_aTestCase_2_0, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    // cr. 
    Send PSend11657 = new_Send((Optr)VAR_aFileStream_0_0, SMB_cr, 0);
    Array PThreadedCode11655 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aTestCase_2_0, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11656, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send0, (Optr)PSend11657, (Optr)&t_method_return);
    Block PBlock11653 = new_Block_with(PArray11654, empty_Array, PThreadedCode11655, 2, PSend11656, PSend11657);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11658 = new_Send((Optr)VAR_testCases_1_1, SMB_do_, 1, (Optr)PBlock11653);
    Array PThreadedCode11645 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11646, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11652, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCases_1_1, (Optr)&t_push_closure, (Optr)PBlock11653, (Optr)&t_send1, (Optr)PSend11658, (Optr)&t_method_return);
    Block PBlock11643 = new_Block_with(PArray11644, empty_Array, PThreadedCode11645, 2, PSend11652, PSend11658);
    Assign PAssign11642 = new_Assign((Optr)VAR_printer_0_1, (Optr)PBlock11643);
    // printOn:. 
    Send PSend11659 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    String string_11660 = new_String(L"Failures:");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11661 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Constant string_11660_Const = new_Constant((Optr)string_11660);
    // value:value:. 
    Send PSend11662 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11660_Const, (Optr)PSend11661);
    String string_11663 = new_String(L"Errors:");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11664 = new_Send((Optr)self, SMB_errors, 0);
    Constant string_11663_Const = new_Constant((Optr)string_11663);
    // value:value:. 
    Send PSend11665 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11663_Const, (Optr)PSend11664);
    Array PThreadedCode11641 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11642, (Optr)&t_push_closure, (Optr)PBlock11643, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11659, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11660, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11661, (Optr)&t_send2, (Optr)PSend11662, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11663, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11664, (Optr)&t_send2, (Optr)PSend11665, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11638 = new_Method_with(PArray11639, PArray11640, empty_Array, PThreadedCode11641, 5, PAssign11642, PSend11659, PSend11662, PSend11665, self);
    
    MethodClosure MC_SMB_fileOutOn_ = new_MethodClosure((Method)PMethod11638, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_fileOutOn_, MC_SMB_fileOutOn_);
}


static void init_SMB_runCase_() {
    Symbol SMB_runCase_ = new_Symbol(L"runCase:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11667 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Variable VAR_testCasePassed_0_1 = new_Variable_named(L"testCasePassed", 0);
    Array PArray11668 = new_Array_with(1, (Optr)VAR_testCasePassed_0_1);
    Assign PAssign11670 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)true_Const);
    Symbol SMB_runCase = new_Symbol(L"runCase");
    // runCase. 
    Send PSend11675 = new_Send((Optr)VAR_aTestCase_0_0, SMB_runCase, 0);
    Array PThreadedCode11674 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11675, (Optr)&t_block_return);
    Block PBlock11673 = new_Block_with(empty_Array, empty_Array, PThreadedCode11674, 1, PSend11675);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11676 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend11677 = new_Send((Optr)PSend11676, SMB_failure, 0);
    Variable VAR_signal_1_0 = new_Variable_named(L"signal", 1);
    Array PArray11679 = new_Array_with(1, (Optr)VAR_signal_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11681 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11682 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    Symbol SMB_return_ = new_Symbol(L"return:");
    // return:. 
    Send PSend11683 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11680 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11681, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11682, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11683, (Optr)&t_method_return);
    Block PBlock11678 = new_Block_with(PArray11679, empty_Array, PThreadedCode11680, 3, PSend11681, PAssign11682, PSend11683);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11684 = new_Send((Optr)PBlock11673, SMB_on_do_, 2, (Optr)PSend11677, (Optr)PBlock11678);
    Array PThreadedCode11672 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock11673, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11676, (Optr)&t_send0, (Optr)PSend11677, (Optr)&t_push_closure, (Optr)PBlock11678, (Optr)&t_send2, (Optr)PSend11684, (Optr)&t_block_return);
    Block PBlock11671 = new_Block_with(empty_Array, empty_Array, PThreadedCode11672, 1, PSend11684);
    // class. 
    Send PSend11685 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend11686 = new_Send((Optr)PSend11685, SMB_error, 0);
    Array PArray11688 = new_Array_with(1, (Optr)VAR_signal_1_0);
    // add:. 
    Send PSend11690 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11691 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    // return:. 
    Send PSend11692 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11689 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11690, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11691, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11692, (Optr)&t_method_return);
    Block PBlock11687 = new_Block_with(PArray11688, empty_Array, PThreadedCode11689, 3, PSend11690, PAssign11691, PSend11692);
    // on:do:. 
    Send PSend11693 = new_Send((Optr)PBlock11671, SMB_on_do_, 2, (Optr)PSend11686, (Optr)PBlock11687);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // add:. 
    Send PSend11697 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11696 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11697, (Optr)&t_block_return);
    Block PBlock11695 = new_Block_with(empty_Array, empty_Array, PThreadedCode11696, 1, PSend11697);
    // ifTrue:. 
    Send PSend11694 = new_Send((Optr)VAR_testCasePassed_0_1, SMB_ifTrue_, 1, (Optr)PBlock11695);
    Array PThreadedCode11669 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign11670, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11671, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11685, (Optr)&t_send0, (Optr)PSend11686, (Optr)&t_push_closure, (Optr)PBlock11687, (Optr)&t_send2, (Optr)PSend11693, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCasePassed_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend11694, (Optr)PBlock11695, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11666 = new_Method_with(PArray11667, PArray11668, empty_Array, PThreadedCode11669, 4, PAssign11670, PSend11693, PSend11694, self);
    
    MethodClosure MC_SMB_runCase_ = new_MethodClosure((Method)PMethod11666, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_runCase_, MC_SMB_runCase_);
}


static void init_SMB_failureCount() {
    Symbol SMB_failureCount = new_Symbol(L"failureCount");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11700 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11701 = new_Send((Optr)PSend11700, SMB_size, 0);
    Array PThreadedCode11699 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11700, (Optr)&t_send0, (Optr)PSend11701, (Optr)&t_method_return);
    Method PMethod11698 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11699, 1, PSend11701);
    
    MethodClosure MC_SMB_failureCount = new_MethodClosure((Method)PMethod11698, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failureCount, MC_SMB_failureCount);
}


static void init_SMB_resetFailures() {
    Symbol SMB_resetFailures = new_Symbol(L"resetFailures");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11705 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11704 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11705);
    Array PThreadedCode11703 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11704, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11705, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11702 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11703, 2, PAssign11704, self);
    
    MethodClosure MC_SMB_resetFailures = new_MethodClosure((Method)PMethod11702, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetFailures, MC_SMB_resetFailures);
}


static void init_SMB_dispatchResultsIntoHistory() {
    Symbol SMB_dispatchResultsIntoHistory = new_Symbol(L"dispatchResultsIntoHistory");
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    // classesTested. 
    Send PSend11708 = new_Send((Optr)self, SMB_classesTested, 0);
    Variable VAR_testClass_1_0 = new_Variable_named(L"testClass", 1);
    Array PArray11710 = new_Array_with(1, (Optr)VAR_testClass_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11712 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_selectResultsForTestCase_ = new_Symbol(L"selectResultsForTestCase:");
    // selectResultsForTestCase:. 
    Send PSend11713 = new_Send((Optr)self, SMB_selectResultsForTestCase_, 1, (Optr)VAR_testClass_1_0);
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    // historyAt:put:. 
    Send PSend11714 = new_Send((Optr)PSend11712, SMB_historyAt_put_, 2, (Optr)VAR_testClass_1_0, (Optr)PSend11713);
    Array PThreadedCode11711 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11712, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_send1, (Optr)PSend11713, (Optr)&t_send2, (Optr)PSend11714, (Optr)&t_method_return);
    Block PBlock11709 = new_Block_with(PArray11710, empty_Array, PThreadedCode11711, 1, PSend11714);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11715 = new_Send((Optr)PSend11708, SMB_do_, 1, (Optr)PBlock11709);
    Array PThreadedCode11707 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11708, (Optr)&t_push_closure, (Optr)PBlock11709, (Optr)&t_send1, (Optr)PSend11715, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11706 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11707, 2, PSend11715, self);
    
    MethodClosure MC_SMB_dispatchResultsIntoHistory = new_MethodClosure((Method)PMethod11706, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_dispatchResultsIntoHistory, MC_SMB_dispatchResultsIntoHistory);
}


static void init_SMB_isFailureFor_selector_() {
    Symbol SMB_isFailureFor_selector_ = new_Symbol(L"isFailureFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11717 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11719 = new_Send((Optr)self, SMB_failures, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11721 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11723 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11724 = new_Send((Optr)PSend11723, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11727 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11728 = new_Send((Optr)PSend11727, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11726 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11727, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11728, (Optr)&t_block_return);
    Block PBlock11725 = new_Block_with(empty_Array, empty_Array, PThreadedCode11726, 1, PSend11728);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11729 = new_Send((Optr)PSend11724, SMB_and_, 1, (Optr)PBlock11725);
    Array PThreadedCode11722 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11723, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11724, (Optr)&t_push_closure, (Optr)PBlock11725, (Optr)&t_send1, (Optr)PSend11729, (Optr)&t_method_return);
    Block PBlock11720 = new_Block_with(PArray11721, empty_Array, PThreadedCode11722, 1, PSend11729);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11730 = new_Send((Optr)PSend11719, SMB_anySatisfy_, 1, (Optr)PBlock11720);
    Array PThreadedCode11718 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11719, (Optr)&t_push_closure, (Optr)PBlock11720, (Optr)&t_send1, (Optr)PSend11730, (Optr)&t_method_return);
    Method PMethod11716 = new_Method_with(PArray11717, empty_Array, empty_Array, PThreadedCode11718, 1, PSend11730);
    
    MethodClosure MC_SMB_isFailureFor_selector_ = new_MethodClosure((Method)PMethod11716, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailureFor_selector_, MC_SMB_isFailureFor_selector_);
}


static void init_SMB_timeStamp() {
    Symbol SMB_timeStamp = new_Symbol(L"timeStamp");
    Array PThreadedCode11732 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_timeStamp, (Optr)&t_method_return);
    Method PMethod11731 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11732, 1, slot_Testing_TestResult_timeStamp);
    
    MethodClosure MC_SMB_timeStamp = new_MethodClosure((Method)PMethod11731, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp, MC_SMB_timeStamp);
}


static void init_SMB_resetErrors() {
    Symbol SMB_resetErrors = new_Symbol(L"resetErrors");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11736 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11735 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11736);
    Array PThreadedCode11734 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11735, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11736, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11733 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11734, 2, PAssign11735, self);
    
    MethodClosure MC_SMB_resetErrors = new_MethodClosure((Method)PMethod11733, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetErrors, MC_SMB_resetErrors);
}


static void init_SMB_unexpectedErrors() {
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11740 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11742 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11741 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11742, (Optr)&t_method_return);
    Block PBlock11739 = new_Block_with(PArray11740, empty_Array, PThreadedCode11741, 1, PSend11742);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11743 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_select_, 1, (Optr)PBlock11739);
    Array PThreadedCode11738 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_closure, (Optr)PBlock11739, (Optr)&t_send1, (Optr)PSend11743, (Optr)&t_method_return);
    Method PMethod11737 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11738, 1, PSend11743);
    
    MethodClosure MC_SMB_unexpectedErrors = new_MethodClosure((Method)PMethod11737, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrors, MC_SMB_unexpectedErrors);
}


static void init_SMB_isFailure_() {
    Symbol SMB_isFailure_ = new_Symbol(L"isFailure:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11745 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11747 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11748 = new_Send((Optr)PSend11747, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11746 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11747, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11748, (Optr)&t_method_return);
    Method PMethod11744 = new_Method_with(PArray11745, empty_Array, empty_Array, PThreadedCode11746, 1, PSend11748);
    
    MethodClosure MC_SMB_isFailure_ = new_MethodClosure((Method)PMethod11744, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailure_, MC_SMB_isFailure_);
}


static void init_SMB_classesTested() {
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11751 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11753 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11755 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Array PThreadedCode11754 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11755, (Optr)&t_method_return);
    Block PBlock11752 = new_Block_with(PArray11753, empty_Array, PThreadedCode11754, 1, PSend11755);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend11756 = new_Send((Optr)PSend11751, SMB_collect_, 1, (Optr)PBlock11752);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11757 = new_Send((Optr)PSend11756, SMB_asSet, 0);
    Array PThreadedCode11750 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11751, (Optr)&t_push_closure, (Optr)PBlock11752, (Optr)&t_send1, (Optr)PSend11756, (Optr)&t_send0, (Optr)PSend11757, (Optr)&t_method_return);
    Method PMethod11749 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11750, 1, PSend11757);
    
    MethodClosure MC_SMB_classesTested = new_MethodClosure((Method)PMethod11749, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_classesTested, MC_SMB_classesTested);
}


static void init_SMB_unexpectedErrorCount() {
    Symbol SMB_unexpectedErrorCount = new_Symbol(L"unexpectedErrorCount");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11760 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11761 = new_Send((Optr)PSend11760, SMB_size, 0);
    Array PThreadedCode11759 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11760, (Optr)&t_send0, (Optr)PSend11761, (Optr)&t_method_return);
    Method PMethod11758 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11759, 1, PSend11761);
    
    MethodClosure MC_SMB_unexpectedErrorCount = new_MethodClosure((Method)PMethod11758, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrorCount, MC_SMB_unexpectedErrorCount);
}


static void init_SMB_passedCount() {
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11764 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11765 = new_Send((Optr)PSend11764, SMB_size, 0);
    Array PThreadedCode11763 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11764, (Optr)&t_send0, (Optr)PSend11765, (Optr)&t_method_return);
    Method PMethod11762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11763, 1, PSend11765);
    
    MethodClosure MC_SMB_passedCount = new_MethodClosure((Method)PMethod11762, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passedCount, MC_SMB_passedCount);
}


static void init_SMB_failures() {
    Symbol SMB_failures = new_Symbol(L"failures");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11769 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend11771 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11772 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11771);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11773 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11770 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11771, (Optr)&t_send1, (Optr)PSend11772, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11773, (Optr)&t_method_return);
    Block PBlock11768 = new_Block_with(PArray11769, empty_Array, PThreadedCode11770, 2, PSend11772, PSend11773);
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend11774 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11775 = new_Send((Optr)PBlock11768, SMB_value_, 1, (Optr)PSend11774);
    Array PThreadedCode11767 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11768, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11774, (Optr)&t_send1, (Optr)PSend11775, (Optr)&t_method_return);
    Method PMethod11766 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11767, 1, PSend11775);
    
    MethodClosure MC_SMB_failures = new_MethodClosure((Method)PMethod11766, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failures, MC_SMB_failures);
}


static void init_SMB_correctCount() {
    Symbol SMB_correctCount = new_Symbol(L"correctCount");
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    // passedCount. 
    Send PSend11778 = new_Send((Optr)self, SMB_passedCount, 0);
    Array PThreadedCode11777 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11778, (Optr)&t_method_return);
    Method PMethod11776 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11777, 1, PSend11778);
    
    MethodClosure MC_SMB_correctCount = new_MethodClosure((Method)PMethod11776, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_correctCount, MC_SMB_correctCount);
}


static void init_SMB_isPassed_() {
    Symbol SMB_isPassed_ = new_Symbol(L"isPassed:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11780 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11782 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11783 = new_Send((Optr)PSend11782, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11781 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11782, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11783, (Optr)&t_method_return);
    Method PMethod11779 = new_Method_with(PArray11780, empty_Array, empty_Array, PThreadedCode11781, 1, PSend11783);
    
    MethodClosure MC_SMB_isPassed_ = new_MethodClosure((Method)PMethod11779, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassed_, MC_SMB_isPassed_);
}


static void init_SMB_expectedPassCount() {
    Symbol SMB_expectedPassCount = new_Symbol(L"expectedPassCount");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11786 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11787 = new_Send((Optr)PSend11786, SMB_size, 0);
    Array PThreadedCode11785 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11786, (Optr)&t_send0, (Optr)PSend11787, (Optr)&t_method_return);
    Method PMethod11784 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11785, 1, PSend11787);
    
    MethodClosure MC_SMB_expectedPassCount = new_MethodClosure((Method)PMethod11784, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPassCount, MC_SMB_expectedPassCount);
}


static void init_SMB_defects() {
    Symbol SMB_defects = new_Symbol(L"defects");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11791 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11793 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11794 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11793);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11795 = new_Send((Optr)self, SMB_failures, 0);
    // addAll:. 
    Send PSend11796 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11795);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11797 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11792 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11793, (Optr)&t_send1, (Optr)PSend11794, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11795, (Optr)&t_send1, (Optr)PSend11796, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11797, (Optr)&t_method_return);
    Block PBlock11790 = new_Block_with(PArray11791, empty_Array, PThreadedCode11792, 3, PSend11794, PSend11796, PSend11797);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11798 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11799 = new_Send((Optr)PBlock11790, SMB_value_, 1, (Optr)PSend11798);
    Array PThreadedCode11789 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock11790, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11798, (Optr)&t_send1, (Optr)PSend11799, (Optr)&t_method_return);
    Method PMethod11788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11789, 1, PSend11799);
    
    MethodClosure MC_SMB_defects = new_MethodClosure((Method)PMethod11788, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_defects, MC_SMB_defects);
}


static void init_SMB_expectedDefectCount() {
    Symbol SMB_expectedDefectCount = new_Symbol(L"expectedDefectCount");
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11802 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11803 = new_Send((Optr)PSend11802, SMB_size, 0);
    Array PThreadedCode11801 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11802, (Optr)&t_send0, (Optr)PSend11803, (Optr)&t_method_return);
    Method PMethod11800 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11801, 1, PSend11803);
    
    MethodClosure MC_SMB_expectedDefectCount = new_MethodClosure((Method)PMethod11800, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefectCount, MC_SMB_expectedDefectCount);
}


static void init_SMB_expectedDefects() {
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend11806 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_asOrderedCollection, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11807 = new_Send((Optr)slot_Testing_TestResult_errors, SMB__append_, 1, (Optr)PSend11806);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11809 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11811 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11812 = new_Send((Optr)PSend11811, SMB_not, 0);
    Array PThreadedCode11810 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11811, (Optr)&t_send0, (Optr)PSend11812, (Optr)&t_method_return);
    Block PBlock11808 = new_Block_with(PArray11809, empty_Array, PThreadedCode11810, 1, PSend11812);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11813 = new_Send((Optr)PSend11807, SMB_select_, 1, (Optr)PBlock11808);
    Array PThreadedCode11805 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend11806, (Optr)&t_send1, (Optr)PSend11807, (Optr)&t_push_closure, (Optr)PBlock11808, (Optr)&t_send1, (Optr)PSend11813, (Optr)&t_method_return);
    Method PMethod11804 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11805, 1, PSend11813);
    
    MethodClosure MC_SMB_expectedDefects = new_MethodClosure((Method)PMethod11804, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefects, MC_SMB_expectedDefects);
}


static void init_SMB_expectedPasses() {
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11817 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11819 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11818 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11819, (Optr)&t_method_return);
    Block PBlock11816 = new_Block_with(PArray11817, empty_Array, PThreadedCode11818, 1, PSend11819);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11820 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock11816);
    Array PThreadedCode11815 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock11816, (Optr)&t_send1, (Optr)PSend11820, (Optr)&t_method_return);
    Method PMethod11814 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11815, 1, PSend11820);
    
    MethodClosure MC_SMB_expectedPasses = new_MethodClosure((Method)PMethod11814, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPasses, MC_SMB_expectedPasses);
}


static void init_SMB_unexpectedFailureCount() {
    Symbol SMB_unexpectedFailureCount = new_Symbol(L"unexpectedFailureCount");
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend11823 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11824 = new_Send((Optr)PSend11823, SMB_size, 0);
    Array PThreadedCode11822 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11823, (Optr)&t_send0, (Optr)PSend11824, (Optr)&t_method_return);
    Method PMethod11821 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11822, 1, PSend11824);
    
    MethodClosure MC_SMB_unexpectedFailureCount = new_MethodClosure((Method)PMethod11821, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailureCount, MC_SMB_unexpectedFailureCount);
}


static void init_SMB_isErrorFor_selector_() {
    Symbol SMB_isErrorFor_selector_ = new_Symbol(L"isErrorFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11826 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11828 = new_Send((Optr)self, SMB_errors, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11830 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11832 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11833 = new_Send((Optr)PSend11832, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11836 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11837 = new_Send((Optr)PSend11836, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11835 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11836, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11837, (Optr)&t_block_return);
    Block PBlock11834 = new_Block_with(empty_Array, empty_Array, PThreadedCode11835, 1, PSend11837);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11838 = new_Send((Optr)PSend11833, SMB_and_, 1, (Optr)PBlock11834);
    Array PThreadedCode11831 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11832, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11833, (Optr)&t_push_closure, (Optr)PBlock11834, (Optr)&t_send1, (Optr)PSend11838, (Optr)&t_method_return);
    Block PBlock11829 = new_Block_with(PArray11830, empty_Array, PThreadedCode11831, 1, PSend11838);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11839 = new_Send((Optr)PSend11828, SMB_anySatisfy_, 1, (Optr)PBlock11829);
    Array PThreadedCode11827 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11828, (Optr)&t_push_closure, (Optr)PBlock11829, (Optr)&t_send1, (Optr)PSend11839, (Optr)&t_method_return);
    Method PMethod11825 = new_Method_with(PArray11826, empty_Array, empty_Array, PThreadedCode11827, 1, PSend11839);
    
    MethodClosure MC_SMB_isErrorFor_selector_ = new_MethodClosure((Method)PMethod11825, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isErrorFor_selector_, MC_SMB_isErrorFor_selector_);
}


static void init_SMB_hasErrors() {
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11842 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11843 = new_Send((Optr)PSend11842, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend11844 = new_Send((Optr)PSend11843, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode11841 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11842, (Optr)&t_send0, (Optr)PSend11843, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11844, (Optr)&t_method_return);
    Method PMethod11840 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11841, 1, PSend11844);
    
    MethodClosure MC_SMB_hasErrors = new_MethodClosure((Method)PMethod11840, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasErrors, MC_SMB_hasErrors);
}


static void init_SMB_unexpectedPasses() {
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11848 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11850 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11851 = new_Send((Optr)PSend11850, SMB_not, 0);
    Array PThreadedCode11849 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11850, (Optr)&t_send0, (Optr)PSend11851, (Optr)&t_method_return);
    Block PBlock11847 = new_Block_with(PArray11848, empty_Array, PThreadedCode11849, 1, PSend11851);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11852 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock11847);
    Array PThreadedCode11846 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock11847, (Optr)&t_send1, (Optr)PSend11852, (Optr)&t_method_return);
    Method PMethod11845 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11846, 1, PSend11852);
    
    MethodClosure MC_SMB_unexpectedPasses = new_MethodClosure((Method)PMethod11845, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPasses, MC_SMB_unexpectedPasses);
}


static void init_SMB_isError_() {
    Symbol SMB_isError_ = new_Symbol(L"isError:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11854 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11856 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11857 = new_Send((Optr)PSend11856, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11855 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11856, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11857, (Optr)&t_method_return);
    Method PMethod11853 = new_Method_with(PArray11854, empty_Array, empty_Array, PThreadedCode11855, 1, PSend11857);
    
    MethodClosure MC_SMB_isError_ = new_MethodClosure((Method)PMethod11853, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isError_, MC_SMB_isError_);
}


static void init_SMB_unexpectedPassCount() {
    Symbol SMB_unexpectedPassCount = new_Symbol(L"unexpectedPassCount");
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend11860 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11861 = new_Send((Optr)PSend11860, SMB_size, 0);
    Array PThreadedCode11859 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11860, (Optr)&t_send0, (Optr)PSend11861, (Optr)&t_method_return);
    Method PMethod11858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11859, 1, PSend11861);
    
    MethodClosure MC_SMB_unexpectedPassCount = new_MethodClosure((Method)PMethod11858, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPassCount, MC_SMB_unexpectedPassCount);
}


static void init_SMB_runCount() {
    Symbol SMB_runCount = new_Symbol(L"runCount");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11864 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_size, 0);
    // size. 
    Send PSend11865 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11866 = new_Send((Optr)PSend11864, SMB__plus_, 1, (Optr)PSend11865);
    // size. 
    Send PSend11867 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_size, 0);
    // +. 
    Send PSend11868 = new_Send((Optr)PSend11866, SMB__plus_, 1, (Optr)PSend11867);
    Array PThreadedCode11863 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send0, (Optr)PSend11864, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend11865, (Optr)&t_send1, (Optr)PSend11866, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send0, (Optr)PSend11867, (Optr)&t_send1, (Optr)PSend11868, (Optr)&t_method_return);
    Method PMethod11862 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11863, 1, PSend11868);
    
    MethodClosure MC_SMB_runCount = new_MethodClosure((Method)PMethod11862, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_runCount, MC_SMB_runCount);
}


static void init_SMB_updateResultsInHistory() {
    Symbol SMB_updateResultsInHistory = new_Symbol(L"updateResultsInHistory");
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // with:with:with:. 
    Send PSend11871 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_status_1_0 = new_Variable_named(L"status", 1);
    Array PArray11873 = new_Array_with(1, (Optr)VAR_status_1_0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend11875 = new_Send((Optr)self, SMB_perform_, 1, (Optr)VAR_status_1_0);
    Variable VAR_testCase_2_0 = new_Variable_named(L"testCase", 2);
    Array PArray11877 = new_Array_with(1, (Optr)VAR_testCase_2_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11879 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    // updateTestHistoryFor:status:. 
    Send PSend11880 = new_Send((Optr)PSend11879, SMB_updateTestHistoryFor_status_, 2, (Optr)VAR_testCase_2_0, (Optr)VAR_status_1_0);
    Array PThreadedCode11878 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11879, (Optr)&t_push_variable, (Optr)VAR_testCase_2_0, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send2, (Optr)PSend11880, (Optr)&t_method_return);
    Block PBlock11876 = new_Block_with(PArray11877, empty_Array, PThreadedCode11878, 1, PSend11880);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11881 = new_Send((Optr)PSend11875, SMB_do_, 1, (Optr)PBlock11876);
    Array PThreadedCode11874 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send1, (Optr)PSend11875, (Optr)&t_push_closure, (Optr)PBlock11876, (Optr)&t_send1, (Optr)PSend11881, (Optr)&t_method_return);
    Block PBlock11872 = new_Block_with(PArray11873, empty_Array, PThreadedCode11874, 1, PSend11881);
    // do:. 
    Send PSend11882 = new_Send((Optr)PSend11871, SMB_do_, 1, (Optr)PBlock11872);
    Array PThreadedCode11870 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend11871, (Optr)&t_push_closure, (Optr)PBlock11872, (Optr)&t_send1, (Optr)PSend11882, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11869 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11870, 2, PSend11882, self);
    
    MethodClosure MC_SMB_updateResultsInHistory = new_MethodClosure((Method)PMethod11869, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_updateResultsInHistory, MC_SMB_updateResultsInHistory);
}


static void init_SMB_unexpectedFailures() {
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11886 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11888 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11887 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11888, (Optr)&t_method_return);
    Block PBlock11885 = new_Block_with(PArray11886, empty_Array, PThreadedCode11887, 1, PSend11888);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11889 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_select_, 1, (Optr)PBlock11885);
    Array PThreadedCode11884 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_closure, (Optr)PBlock11885, (Optr)&t_send1, (Optr)PSend11889, (Optr)&t_method_return);
    Method PMethod11883 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11884, 1, PSend11889);
    
    MethodClosure MC_SMB_unexpectedFailures = new_MethodClosure((Method)PMethod11883, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailures, MC_SMB_unexpectedFailures);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11893 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11895 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_passed);
    // addAll:. 
    Send PSend11896 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_failures);
    // addAll:. 
    Send PSend11897 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_errors);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11898 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11894 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send1, (Optr)PSend11895, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send1, (Optr)PSend11896, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send1, (Optr)PSend11897, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11898, (Optr)&t_method_return);
    Block PBlock11892 = new_Block_with(PArray11893, empty_Array, PThreadedCode11894, 4, PSend11895, PSend11896, PSend11897, PSend11898);
    Symbol SMB_runCount = new_Symbol(L"runCount");
    // runCount. 
    Send PSend11899 = new_Send((Optr)self, SMB_runCount, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend11900 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)PSend11899);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11901 = new_Send((Optr)PBlock11892, SMB_value_, 1, (Optr)PSend11900);
    Array PThreadedCode11891 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock11892, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11899, (Optr)&t_send1, (Optr)PSend11900, (Optr)&t_send1, (Optr)PSend11901, (Optr)&t_method_return);
    Method PMethod11890 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11891, 1, PSend11901);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11890, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_tests, MC_SMB_tests);
}


static void init_SMB_hasFailures() {
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11904 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11905 = new_Send((Optr)PSend11904, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend11906 = new_Send((Optr)PSend11905, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode11903 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11904, (Optr)&t_send0, (Optr)PSend11905, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11906, (Optr)&t_method_return);
    Method PMethod11902 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11903, 1, PSend11906);
    
    MethodClosure MC_SMB_hasFailures = new_MethodClosure((Method)PMethod11902, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasFailures, MC_SMB_hasFailures);
}


static void init_class_SMB_historyAt_() {
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray11908 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend11910 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Array PThreadedCode11909 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend11910, (Optr)&t_method_return);
    Method PMethod11907 = new_Method_with(PArray11908, empty_Array, empty_Array, PThreadedCode11909, 1, PSend11910);
    
    MethodClosure MC_SMB_historyAt_ = new_MethodClosure((Method)PMethod11907, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_, MC_SMB_historyAt_);
}


static void init_class_SMB_resumableFailure() {
    Symbol SMB_resumableFailure = new_Symbol(L"resumableFailure");
    Array PThreadedCode11912 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ResumableTestFailure_classReference, (Optr)&t_method_return);
    Method PMethod11911 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11912, 1, ResumableTestFailure_classReference);
    
    MethodClosure MC_SMB_resumableFailure = new_MethodClosure((Method)PMethod11911, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_resumableFailure, MC_SMB_resumableFailure);
}


static void init_class_SMB_failure() {
    Symbol SMB_failure = new_Symbol(L"failure");
    Array PThreadedCode11914 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)TestFailure_classReference, (Optr)&t_method_return);
    Method PMethod11913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11914, 1, TestFailure_classReference);
    
    MethodClosure MC_SMB_failure = new_MethodClosure((Method)PMethod11913, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_failure, MC_SMB_failure);
}


static void init_class_SMB_updateTestHistoryFor_status_() {
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Variable VAR_aSymbol_0_1 = new_Variable_named(L"aSymbol", 0);
    Array PArray11916 = new_Array_with(2, (Optr)VAR_aTestCase_0_0, (Optr)VAR_aSymbol_0_1);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Variable VAR_sel_0_3 = new_Variable_named(L"sel", 0);
    Array PArray11917 = new_Array_with(2, (Optr)VAR_cls_0_2, (Optr)VAR_sel_0_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11920 = new_Send((Optr)VAR_aTestCase_0_0, SMB_class, 0);
    Assign PAssign11919 = new_Assign((Optr)VAR_cls_0_2, (Optr)PSend11920);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11922 = new_Send((Optr)VAR_aTestCase_0_0, SMB_selector, 0);
    Assign PAssign11921 = new_Assign((Optr)VAR_sel_0_3, (Optr)PSend11922);
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    // removeFromTestHistory:in:. 
    Send PSend11923 = new_Send((Optr)self, SMB_removeFromTestHistory_in_, 2, (Optr)VAR_sel_0_3, (Optr)VAR_cls_0_2);
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    // historyAt:. 
    Send PSend11924 = new_Send((Optr)self, SMB_historyAt_, 1, (Optr)VAR_cls_0_2);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend11925 = new_Send((Optr)PSend11924, SMB_at_, 1, (Optr)VAR_aSymbol_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11926 = new_Send((Optr)PSend11925, SMB_add_, 1, (Optr)VAR_sel_0_3);
    Array PThreadedCode11918 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign11919, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11920, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11921, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11922, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend11923, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send1, (Optr)PSend11924, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_1, (Optr)&t_send1, (Optr)PSend11925, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_send1, (Optr)PSend11926, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11915 = new_Method_with(PArray11916, PArray11917, empty_Array, PThreadedCode11918, 5, PAssign11919, PAssign11921, PSend11923, PSend11926, self);
    
    MethodClosure MC_SMB_updateTestHistoryFor_status_ = new_MethodClosure((Method)PMethod11915, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_updateTestHistoryFor_status_, MC_SMB_updateTestHistoryFor_status_);
}


static void init_class_SMB_newTestDictionary() {
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11930 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol  SMB_timeStamp = new_Symbol(L"timeStamp");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_timeStamp_Const = new_Constant((Optr)SMB_timeStamp);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // at:put:. 
    Send PSend11932 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_timeStamp_Const, (Optr)int_0_Const);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11933 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend11934 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend11933);
    Symbol  SMB_failures = new_Symbol(L"failures");
    // new. 
    Send PSend11935 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend11936 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend11935);
    Symbol  SMB_errors = new_Symbol(L"errors");
    // new. 
    Send PSend11937 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend11938 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend11937);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11939 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11931 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_timeStamp, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend11932, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11933, (Optr)&t_send2, (Optr)PSend11934, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11935, (Optr)&t_send2, (Optr)PSend11936, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11937, (Optr)&t_send2, (Optr)PSend11938, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11939, (Optr)&t_method_return);
    Block PBlock11929 = new_Block_with(PArray11930, empty_Array, PThreadedCode11931, 5, PSend11932, PSend11934, PSend11936, PSend11938, PSend11939);
    // new. 
    Send PSend11940 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11941 = new_Send((Optr)PBlock11929, SMB_value_, 1, (Optr)PSend11940);
    Array PThreadedCode11928 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock11929, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend11940, (Optr)&t_send1, (Optr)PSend11941, (Optr)&t_method_return);
    Method PMethod11927 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11928, 1, PSend11941);
    
    MethodClosure MC_SMB_newTestDictionary = new_MethodClosure((Method)PMethod11927, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_newTestDictionary, MC_SMB_newTestDictionary);
}


static void init_class_SMB_historyFor_() {
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray11943 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_history_0_1 = new_Variable_named(L"history", 0);
    Array PArray11944 = new_Array_with(1, (Optr)VAR_history_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11947 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend11950 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Assign PAssign11949 = new_Assign((Optr)VAR_history_0_1, (Optr)PSend11950);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend11953 = new_Send((Optr)self, SMB_newTestDictionary, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11954 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11953);
    Array PThreadedCode11952 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11953, (Optr)&t_send1, (Optr)PSend11954, (Optr)&t_block_return);
    Block PBlock11951 = new_Block_with(empty_Array, empty_Array, PThreadedCode11952, 1, PSend11954);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend11955 = new_Send((Optr)VAR_history_0_1, SMB_ifNil_, 1, (Optr)PBlock11951);
    Array PThreadedCode11948 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign11949, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend11950, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_push_closure, (Optr)PBlock11951, (Optr)&t_send1, (Optr)PSend11955, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_method_return);
    Block PBlock11946 = new_Block_with(PArray11947, empty_Array, PThreadedCode11948, 3, PAssign11949, PSend11955, VAR_history_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11956 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11946);
    Array PThreadedCode11945 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11946, (Optr)&t_send1, (Optr)PSend11956, (Optr)&t_method_return);
    Method PMethod11942 = new_Method_with(PArray11943, PArray11944, empty_Array, PThreadedCode11945, 1, PSend11956);
    
    MethodClosure MC_SMB_historyFor_ = new_MethodClosure((Method)PMethod11942, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyFor_, MC_SMB_historyFor_);
}


static void init_class_SMB_signalFailureWith_() {
    Symbol SMB_signalFailureWith_ = new_Symbol(L"signalFailureWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11958 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend11960 = new_Send((Optr)self, SMB_failure, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend11961 = new_Send((Optr)PSend11960, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode11959 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11960, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11961, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11957 = new_Method_with(PArray11958, empty_Array, empty_Array, PThreadedCode11959, 2, PSend11961, self);
    
    MethodClosure MC_SMB_signalFailureWith_ = new_MethodClosure((Method)PMethod11957, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalFailureWith_, MC_SMB_signalFailureWith_);
}


static void init_class_SMB_signalErrorWith_() {
    Symbol SMB_signalErrorWith_ = new_Symbol(L"signalErrorWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11963 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend11965 = new_Send((Optr)self, SMB_error, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend11966 = new_Send((Optr)PSend11965, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode11964 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11965, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11966, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11962 = new_Method_with(PArray11963, empty_Array, empty_Array, PThreadedCode11964, 2, PSend11966, self);
    
    MethodClosure MC_SMB_signalErrorWith_ = new_MethodClosure((Method)PMethod11962, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalErrorWith_, MC_SMB_signalErrorWith_);
}


static void init_class_SMB_exError() {
    Symbol SMB_exError = new_Symbol(L"exError");
    Array PThreadedCode11968 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_method_return);
    Method PMethod11967 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11968, 1, Error_classReference);
    
    MethodClosure MC_SMB_exError = new_MethodClosure((Method)PMethod11967, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_exError, MC_SMB_exError);
}


static void init_class_SMB_historyAt_put_() {
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Variable VAR_aDictionary_0_1 = new_Variable_named(L"aDictionary", 0);
    Array PArray11970 = new_Array_with(2, (Optr)VAR_aTestCaseClass_0_0, (Optr)VAR_aDictionary_0_1);
    Symbol SMB_history_ = new_Symbol(L"history:");
    // history:. 
    Send PSend11972 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history_, 1, (Optr)VAR_aDictionary_0_1);
    Array PThreadedCode11971 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_1, (Optr)&t_send1, (Optr)PSend11972, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11969 = new_Method_with(PArray11970, empty_Array, empty_Array, PThreadedCode11971, 2, PSend11972, self);
    
    MethodClosure MC_SMB_historyAt_put_ = new_MethodClosure((Method)PMethod11969, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_put_, MC_SMB_historyAt_put_);
}


static void init_class_SMB_removeFromTestHistory_in_() {
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Variable VAR_aTestCaseClass_0_1 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray11974 = new_Array_with(2, (Optr)VAR_aSelector_0_0, (Optr)VAR_aTestCaseClass_0_1);
    Variable VAR_lastRun_0_2 = new_Variable_named(L"lastRun", 0);
    Array PArray11975 = new_Array_with(1, (Optr)VAR_lastRun_0_2);
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    // historyFor:. 
    Send PSend11978 = new_Send((Optr)self, SMB_historyFor_, 1, (Optr)VAR_aTestCaseClass_0_1);
    Assign PAssign11977 = new_Assign((Optr)VAR_lastRun_0_2, (Optr)PSend11978);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // with:with:with:. 
    Send PSend11979 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_set_1_0 = new_Variable_named(L"set", 1);
    Array PArray11981 = new_Array_with(1, (Optr)VAR_set_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend11983 = new_Send((Optr)VAR_lastRun_0_2, SMB_at_, 1, (Optr)VAR_set_1_0);
    Array PThreadedCode11985 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock11984 = new_Block_with(empty_Array, empty_Array, PThreadedCode11985, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend11986 = new_Send((Optr)PSend11983, SMB_remove_ifAbsent_, 2, (Optr)VAR_aSelector_0_0, (Optr)PBlock11984);
    Array PThreadedCode11982 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_lastRun_0_2, (Optr)&t_push_variable, (Optr)VAR_set_1_0, (Optr)&t_send1, (Optr)PSend11983, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_push_closure, (Optr)PBlock11984, (Optr)&t_send2, (Optr)PSend11986, (Optr)&t_method_return);
    Block PBlock11980 = new_Block_with(PArray11981, empty_Array, PThreadedCode11982, 1, PSend11986);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11987 = new_Send((Optr)PSend11979, SMB_do_, 1, (Optr)PBlock11980);
    Array PThreadedCode11976 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign11977, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_1, (Optr)&t_send1, (Optr)PSend11978, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend11979, (Optr)&t_push_closure, (Optr)PBlock11980, (Optr)&t_send1, (Optr)PSend11987, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11973 = new_Method_with(PArray11974, PArray11975, empty_Array, PThreadedCode11976, 3, PAssign11977, PSend11987, self);
    
    MethodClosure MC_SMB_removeFromTestHistory_in_ = new_MethodClosure((Method)PMethod11973, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_removeFromTestHistory_in_, MC_SMB_removeFromTestHistory_in_);
}


static void init_class_SMB_error() {
    Symbol SMB_error = new_Symbol(L"error");
    Symbol SMB_exError = new_Symbol(L"exError");
    // exError. 
    Send PSend11990 = new_Send((Optr)self, SMB_exError, 0);
    Array PThreadedCode11989 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11990, (Optr)&t_method_return);
    Method PMethod11988 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11989, 1, PSend11990);
    
    MethodClosure MC_SMB_error = new_MethodClosure((Method)PMethod11988, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_error, MC_SMB_error);
}

void init_Testing_TestResult_layout() {
    layout_Testing_TestResult_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Testing_TestResult_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Testing_TestResult_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Testing_TestResult_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Testing_TestResult_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Testing_TestResult_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_TestResult = new_Symbol(L"TestResult");
    slot_Testing_TestResult_timeStamp = (Optr)new_Slot(0, L"timeStamp");
    slot_Testing_TestResult_failures = (Optr)new_Slot(1, L"failures");
    slot_Testing_TestResult_errors = (Optr)new_Slot(2, L"errors");
    slot_Testing_TestResult_passed = (Optr)new_Slot(3, L"passed");
    layout_Testing_TestResult = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Testing_TestResult)->values[0] = slot_Testing_TestResult_timeStamp; // timeStamp 
    ((Array)layout_Testing_TestResult)->values[1] = slot_Testing_TestResult_failures; // failures 
    ((Array)layout_Testing_TestResult)->values[2] = slot_Testing_TestResult_errors; // errors 
    ((Array)layout_Testing_TestResult)->values[3] = slot_Testing_TestResult_passed; // passed 
    Testing_TestResult_Class = (Class)new_Class(Object_Class, layout_Testing_TestResult_Class_class);
    Class_set_superclass(Testing_TestResult_Class, Object_Class);
    Testing_TestResult_Class->layout = layout_Testing_TestResult;
    HEADER(Testing_TestResult_Class)->layout = layout_Testing_TestResult_Class_class;
    Testing_TestResult_Class->name = SMB_TestResult;
    
}

void init_Testing_TestResult_methods() {
    init_SMB_selectResultsForTestCase_();
    init_SMB_hasPassed();
    init_SMB_isPassedFor_selector_();
    init_SMB_initialize();
    init_SMB_diff_();
    init_SMB_errorCount();
    init_SMB_timeStamp_();
    init_SMB_errors();
    init_SMB_passed();
    init_SMB_fileOutOn_();
    init_SMB_runCase_();
    init_SMB_failureCount();
    init_SMB_resetFailures();
    init_SMB_dispatchResultsIntoHistory();
    init_SMB_isFailureFor_selector_();
    init_SMB_timeStamp();
    init_SMB_resetErrors();
    init_SMB_unexpectedErrors();
    init_SMB_isFailure_();
    init_SMB_classesTested();
    init_SMB_unexpectedErrorCount();
    init_SMB_passedCount();
    init_SMB_failures();
    init_SMB_correctCount();
    init_SMB_isPassed_();
    init_SMB_expectedPassCount();
    init_SMB_defects();
    init_SMB_expectedDefectCount();
    init_SMB_expectedDefects();
    init_SMB_expectedPasses();
    init_SMB_unexpectedFailureCount();
    init_SMB_isErrorFor_selector_();
    init_SMB_hasErrors();
    init_SMB_unexpectedPasses();
    init_SMB_isError_();
    init_SMB_unexpectedPassCount();
    init_SMB_runCount();
    init_SMB_updateResultsInHistory();
    init_SMB_unexpectedFailures();
    init_SMB_tests();
    init_SMB_hasFailures();
    init_class_SMB_historyAt_();
    init_class_SMB_resumableFailure();
    init_class_SMB_failure();
    init_class_SMB_updateTestHistoryFor_status_();
    init_class_SMB_newTestDictionary();
    init_class_SMB_historyFor_();
    init_class_SMB_signalFailureWith_();
    init_class_SMB_signalErrorWith_();
    init_class_SMB_exError();
    init_class_SMB_historyAt_put_();
    init_class_SMB_removeFromTestHistory_in_();
    init_class_SMB_error();
    
}