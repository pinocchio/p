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
    Array PArray11498 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_passedSelectors_0_1 = new_Variable_named(L"passedSelectors", 0);
    Variable VAR_errorsSelectors_0_2 = new_Variable_named(L"errorsSelectors", 0);
    Variable VAR_failuresSelectors_0_3 = new_Variable_named(L"failuresSelectors", 0);
    Array PArray11499 = new_Array_with(3, (Optr)VAR_passedSelectors_0_1, (Optr)VAR_errorsSelectors_0_2, (Optr)VAR_failuresSelectors_0_3);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11503 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_select_thenCollect_ = new_Symbol(L"select:thenCollect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11505 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11507 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11508 = new_Send((Optr)PSend11507, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11506 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11507, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11508, (Optr)&t_method_return);
    Block PBlock11504 = new_Block_with(PArray11505, empty_Array, PThreadedCode11506, 1, PSend11508);
    Array PArray11510 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11512 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11511 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11512, (Optr)&t_method_return);
    Block PBlock11509 = new_Block_with(PArray11510, empty_Array, PThreadedCode11511, 1, PSend11512);
    // select:thenCollect:. 
    Send PSend11502 = new_Send((Optr)PSend11503, SMB_select_thenCollect_, 2, (Optr)PBlock11504, (Optr)PBlock11509);
    Assign PAssign11501 = new_Assign((Optr)VAR_passedSelectors_0_1, (Optr)PSend11502);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11515 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11517 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11519 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11520 = new_Send((Optr)PSend11519, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11518 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11519, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11520, (Optr)&t_method_return);
    Block PBlock11516 = new_Block_with(PArray11517, empty_Array, PThreadedCode11518, 1, PSend11520);
    Array PArray11522 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11524 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11523 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11524, (Optr)&t_method_return);
    Block PBlock11521 = new_Block_with(PArray11522, empty_Array, PThreadedCode11523, 1, PSend11524);
    // select:thenCollect:. 
    Send PSend11514 = new_Send((Optr)PSend11515, SMB_select_thenCollect_, 2, (Optr)PBlock11516, (Optr)PBlock11521);
    Assign PAssign11513 = new_Assign((Optr)VAR_errorsSelectors_0_2, (Optr)PSend11514);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11527 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11529 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11531 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11532 = new_Send((Optr)PSend11531, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11530 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11531, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11532, (Optr)&t_method_return);
    Block PBlock11528 = new_Block_with(PArray11529, empty_Array, PThreadedCode11530, 1, PSend11532);
    Array PArray11534 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11536 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11535 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11536, (Optr)&t_method_return);
    Block PBlock11533 = new_Block_with(PArray11534, empty_Array, PThreadedCode11535, 1, PSend11536);
    // select:thenCollect:. 
    Send PSend11526 = new_Send((Optr)PSend11527, SMB_select_thenCollect_, 2, (Optr)PBlock11528, (Optr)PBlock11533);
    Assign PAssign11525 = new_Assign((Optr)VAR_failuresSelectors_0_3, (Optr)PSend11526);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11538 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11540 = new_Send((Optr)VAR_passedSelectors_0_1, SMB_asSet, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend11541 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend11540);
    // asSet. 
    Send PSend11542 = new_Send((Optr)VAR_failuresSelectors_0_3, SMB_asSet, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend11543 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend11542);
    // asSet. 
    Send PSend11544 = new_Send((Optr)VAR_errorsSelectors_0_2, SMB_asSet, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend11545 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend11544);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11546 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11539 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_variable, (Optr)VAR_passedSelectors_0_1, (Optr)&t_send0, (Optr)PSend11540, (Optr)&t_send2, (Optr)PSend11541, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_variable, (Optr)VAR_failuresSelectors_0_3, (Optr)&t_send0, (Optr)PSend11542, (Optr)&t_send2, (Optr)PSend11543, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_variable, (Optr)VAR_errorsSelectors_0_2, (Optr)&t_send0, (Optr)PSend11544, (Optr)&t_send2, (Optr)PSend11545, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11546, (Optr)&t_method_return);
    Block PBlock11537 = new_Block_with(PArray11538, empty_Array, PThreadedCode11539, 4, PSend11541, PSend11543, PSend11545, PSend11546);
    // class. 
    Send PSend11547 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend11548 = new_Send((Optr)PSend11547, SMB_newTestDictionary, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11549 = new_Send((Optr)PBlock11537, SMB_value_, 1, (Optr)PSend11548);
    Array PThreadedCode11500 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign11501, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11503, (Optr)&t_push_closure, (Optr)PBlock11504, (Optr)&t_push_closure, (Optr)PBlock11509, (Optr)&t_send2, (Optr)PSend11502, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11513, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11515, (Optr)&t_push_closure, (Optr)PBlock11516, (Optr)&t_push_closure, (Optr)PBlock11521, (Optr)&t_send2, (Optr)PSend11514, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11525, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11527, (Optr)&t_push_closure, (Optr)PBlock11528, (Optr)&t_push_closure, (Optr)PBlock11533, (Optr)&t_send2, (Optr)PSend11526, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11537, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11547, (Optr)&t_send0, (Optr)PSend11548, (Optr)&t_send1, (Optr)PSend11549, (Optr)&t_method_return);
    Method PMethod11497 = new_Method_with(PArray11498, PArray11499, empty_Array, PThreadedCode11500, 4, PAssign11501, PAssign11513, PAssign11525, PSend11549);
    
    MethodClosure MC_SMB_selectResultsForTestCase_ = new_MethodClosure((Method)PMethod11497, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_selectResultsForTestCase_, MC_SMB_selectResultsForTestCase_);
}


static void init_SMB_hasPassed() {
    Symbol SMB_hasPassed = new_Symbol(L"hasPassed");
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    // hasErrors. 
    Send PSend11552 = new_Send((Optr)self, SMB_hasErrors, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11553 = new_Send((Optr)PSend11552, SMB_not, 0);
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    // hasFailures. 
    Send PSend11556 = new_Send((Optr)self, SMB_hasFailures, 0);
    // not. 
    Send PSend11557 = new_Send((Optr)PSend11556, SMB_not, 0);
    Array PThreadedCode11555 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11556, (Optr)&t_send0, (Optr)PSend11557, (Optr)&t_block_return);
    Block PBlock11554 = new_Block_with(empty_Array, empty_Array, PThreadedCode11555, 1, PSend11557);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11558 = new_Send((Optr)PSend11553, SMB_and_, 1, (Optr)PBlock11554);
    Array PThreadedCode11551 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11552, (Optr)&t_send0, (Optr)PSend11553, (Optr)&t_push_closure, (Optr)PBlock11554, (Optr)&t_send1, (Optr)PSend11558, (Optr)&t_method_return);
    Method PMethod11550 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11551, 1, PSend11558);
    
    MethodClosure MC_SMB_hasPassed = new_MethodClosure((Method)PMethod11550, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasPassed, MC_SMB_hasPassed);
}


static void init_SMB_isPassedFor_selector_() {
    Symbol SMB_isPassedFor_selector_ = new_Symbol(L"isPassedFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11560 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11562 = new_Send((Optr)self, SMB_passed, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11564 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11566 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11567 = new_Send((Optr)PSend11566, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11570 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11571 = new_Send((Optr)PSend11570, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11569 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11570, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11571, (Optr)&t_block_return);
    Block PBlock11568 = new_Block_with(empty_Array, empty_Array, PThreadedCode11569, 1, PSend11571);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11572 = new_Send((Optr)PSend11567, SMB_and_, 1, (Optr)PBlock11568);
    Array PThreadedCode11565 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11566, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11567, (Optr)&t_push_closure, (Optr)PBlock11568, (Optr)&t_send1, (Optr)PSend11572, (Optr)&t_method_return);
    Block PBlock11563 = new_Block_with(PArray11564, empty_Array, PThreadedCode11565, 1, PSend11572);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11573 = new_Send((Optr)PSend11562, SMB_anySatisfy_, 1, (Optr)PBlock11563);
    Array PThreadedCode11561 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11562, (Optr)&t_push_closure, (Optr)PBlock11563, (Optr)&t_send1, (Optr)PSend11573, (Optr)&t_method_return);
    Method PMethod11559 = new_Method_with(PArray11560, empty_Array, empty_Array, PThreadedCode11561, 1, PSend11573);
    
    MethodClosure MC_SMB_isPassedFor_selector_ = new_MethodClosure((Method)PMethod11559, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassedFor_selector_, MC_SMB_isPassedFor_selector_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper11576 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11578 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11577 = new_Assign((Optr)slot_Testing_TestResult_passed, (Optr)PSend11578);
    // new. 
    Send PSend11580 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11579 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11580);
    // new. 
    Send PSend11582 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11581 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11582);
    Array PThreadedCode11575 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11576, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11577, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11578, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11579, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11580, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11581, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11582, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11574 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11575, 5, PSuper11576, PAssign11577, PAssign11579, PAssign11581, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod11574, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_diff_() {
    Symbol SMB_diff_ = new_Symbol(L"diff:");
    Variable VAR_aTestResult_0_0 = new_Variable_named(L"aTestResult", 0);
    Array PArray11584 = new_Array_with(1, (Optr)VAR_aTestResult_0_0);
    Variable VAR_passed1Selectors_0_1 = new_Variable_named(L"passed1Selectors", 0);
    Variable VAR_failed1Selectors_0_2 = new_Variable_named(L"failed1Selectors", 0);
    Variable VAR_errors1Selectors_0_3 = new_Variable_named(L"errors1Selectors", 0);
    Variable VAR_passed2Selectors_0_4 = new_Variable_named(L"passed2Selectors", 0);
    Variable VAR_failed2Selectors_0_5 = new_Variable_named(L"failed2Selectors", 0);
    Variable VAR_errors2Selectors_0_6 = new_Variable_named(L"errors2Selectors", 0);
    Array PArray11585 = new_Array_with(6, (Optr)VAR_passed1Selectors_0_1, (Optr)VAR_failed1Selectors_0_2, (Optr)VAR_errors1Selectors_0_3, (Optr)VAR_passed2Selectors_0_4, (Optr)VAR_failed2Selectors_0_5, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11589 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11591 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11593 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11592 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11593, (Optr)&t_method_return);
    Block PBlock11590 = new_Block_with(PArray11591, empty_Array, PThreadedCode11592, 1, PSend11593);
    // collect:. 
    Send PSend11588 = new_Send((Optr)PSend11589, SMB_collect_, 1, (Optr)PBlock11590);
    Assign PAssign11587 = new_Assign((Optr)VAR_passed1Selectors_0_1, (Optr)PSend11588);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11596 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11598 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11600 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11599 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11600, (Optr)&t_method_return);
    Block PBlock11597 = new_Block_with(PArray11598, empty_Array, PThreadedCode11599, 1, PSend11600);
    // collect:. 
    Send PSend11595 = new_Send((Optr)PSend11596, SMB_collect_, 1, (Optr)PBlock11597);
    Assign PAssign11594 = new_Assign((Optr)VAR_failed1Selectors_0_2, (Optr)PSend11595);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11603 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11605 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11607 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11606 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11607, (Optr)&t_method_return);
    Block PBlock11604 = new_Block_with(PArray11605, empty_Array, PThreadedCode11606, 1, PSend11607);
    // collect:. 
    Send PSend11602 = new_Send((Optr)PSend11603, SMB_collect_, 1, (Optr)PBlock11604);
    Assign PAssign11601 = new_Assign((Optr)VAR_errors1Selectors_0_3, (Optr)PSend11602);
    // passed. 
    Send PSend11610 = new_Send((Optr)VAR_aTestResult_0_0, SMB_passed, 0);
    Array PArray11612 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11614 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11613 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11614, (Optr)&t_method_return);
    Block PBlock11611 = new_Block_with(PArray11612, empty_Array, PThreadedCode11613, 1, PSend11614);
    // collect:. 
    Send PSend11609 = new_Send((Optr)PSend11610, SMB_collect_, 1, (Optr)PBlock11611);
    Assign PAssign11608 = new_Assign((Optr)VAR_passed2Selectors_0_4, (Optr)PSend11609);
    // failures. 
    Send PSend11617 = new_Send((Optr)VAR_aTestResult_0_0, SMB_failures, 0);
    Array PArray11619 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11621 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11620 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11621, (Optr)&t_method_return);
    Block PBlock11618 = new_Block_with(PArray11619, empty_Array, PThreadedCode11620, 1, PSend11621);
    // collect:. 
    Send PSend11616 = new_Send((Optr)PSend11617, SMB_collect_, 1, (Optr)PBlock11618);
    Assign PAssign11615 = new_Assign((Optr)VAR_failed2Selectors_0_5, (Optr)PSend11616);
    // errors. 
    Send PSend11624 = new_Send((Optr)VAR_aTestResult_0_0, SMB_errors, 0);
    Array PArray11626 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11628 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11627 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11628, (Optr)&t_method_return);
    Block PBlock11625 = new_Block_with(PArray11626, empty_Array, PThreadedCode11627, 1, PSend11628);
    // collect:. 
    Send PSend11623 = new_Send((Optr)PSend11624, SMB_collect_, 1, (Optr)PBlock11625);
    Assign PAssign11622 = new_Assign((Optr)VAR_errors2Selectors_0_6, (Optr)PSend11623);
    Symbol SMB_copyWithoutAll_ = new_Symbol(L"copyWithoutAll:");
    // copyWithoutAll:. 
    Send PSend11629 = new_Send((Optr)VAR_passed1Selectors_0_1, SMB_copyWithoutAll_, 1, (Optr)VAR_passed2Selectors_0_4);
    // copyWithoutAll:. 
    Send PSend11630 = new_Send((Optr)VAR_failed1Selectors_0_2, SMB_copyWithoutAll_, 1, (Optr)VAR_failed2Selectors_0_5);
    // copyWithoutAll:. 
    Send PSend11631 = new_Send((Optr)VAR_errors1Selectors_0_3, SMB_copyWithoutAll_, 1, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend11632 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)PSend11629, (Optr)PSend11630, (Optr)PSend11631);
    Array PThreadedCode11586 = instantiate_Array_with(ThreadedCode_Class, 0, 92, (Optr)&t_push1, (Optr)PAssign11587, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11589, (Optr)&t_push_closure, (Optr)PBlock11590, (Optr)&t_send1, (Optr)PSend11588, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11594, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11596, (Optr)&t_push_closure, (Optr)PBlock11597, (Optr)&t_send1, (Optr)PSend11595, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11601, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11603, (Optr)&t_push_closure, (Optr)PBlock11604, (Optr)&t_send1, (Optr)PSend11602, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11608, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11610, (Optr)&t_push_closure, (Optr)PBlock11611, (Optr)&t_send1, (Optr)PSend11609, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11615, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11617, (Optr)&t_push_closure, (Optr)PBlock11618, (Optr)&t_send1, (Optr)PSend11616, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11622, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11624, (Optr)&t_push_closure, (Optr)PBlock11625, (Optr)&t_send1, (Optr)PSend11623, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_passed1Selectors_0_1, (Optr)&t_push_variable, (Optr)VAR_passed2Selectors_0_4, (Optr)&t_send1, (Optr)PSend11629, (Optr)&t_push_variable, (Optr)VAR_failed1Selectors_0_2, (Optr)&t_push_variable, (Optr)VAR_failed2Selectors_0_5, (Optr)&t_send1, (Optr)PSend11630, (Optr)&t_push_variable, (Optr)VAR_errors1Selectors_0_3, (Optr)&t_push_variable, (Optr)VAR_errors2Selectors_0_6, (Optr)&t_send1, (Optr)PSend11631, (Optr)&t_send3, (Optr)PSend11632, (Optr)&t_method_return);
    Method PMethod11583 = new_Method_with(PArray11584, PArray11585, empty_Array, PThreadedCode11586, 7, PAssign11587, PAssign11594, PAssign11601, PAssign11608, PAssign11615, PAssign11622, PSend11632);
    
    MethodClosure MC_SMB_diff_ = new_MethodClosure((Method)PMethod11583, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_diff_, MC_SMB_diff_);
}


static void init_SMB_errorCount() {
    Symbol SMB_errorCount = new_Symbol(L"errorCount");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11635 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11636 = new_Send((Optr)PSend11635, SMB_size, 0);
    Array PThreadedCode11634 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11635, (Optr)&t_send0, (Optr)PSend11636, (Optr)&t_method_return);
    Method PMethod11633 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11634, 1, PSend11636);
    
    MethodClosure MC_SMB_errorCount = new_MethodClosure((Method)PMethod11633, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errorCount, MC_SMB_errorCount);
}


static void init_SMB_timeStamp_() {
    Symbol SMB_timeStamp_ = new_Symbol(L"timeStamp:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11638 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11640 = new_Assign((Optr)slot_Testing_TestResult_timeStamp, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11639 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11640, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11637 = new_Method_with(PArray11638, empty_Array, empty_Array, PThreadedCode11639, 2, PAssign11640, self);
    
    MethodClosure MC_SMB_timeStamp_ = new_MethodClosure((Method)PMethod11637, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp_, MC_SMB_timeStamp_);
}


static void init_SMB_errors() {
    Symbol SMB_errors = new_Symbol(L"errors");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11643 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Array PThreadedCode11642 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11643, (Optr)&t_method_return);
    Method PMethod11641 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11642, 1, PSend11643);
    
    MethodClosure MC_SMB_errors = new_MethodClosure((Method)PMethod11641, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errors, MC_SMB_errors);
}


static void init_SMB_passed() {
    Symbol SMB_passed = new_Symbol(L"passed");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11646 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11647 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11648 = new_Send((Optr)PSend11646, SMB__append_, 1, (Optr)PSend11647);
    Array PThreadedCode11645 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11646, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11647, (Optr)&t_send1, (Optr)PSend11648, (Optr)&t_method_return);
    Method PMethod11644 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11645, 1, PSend11648);
    
    MethodClosure MC_SMB_passed = new_MethodClosure((Method)PMethod11644, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passed, MC_SMB_passed);
}


static void init_SMB_fileOutOn_() {
    Symbol SMB_fileOutOn_ = new_Symbol(L"fileOutOn:");
    Variable VAR_aFileStream_0_0 = new_Variable_named(L"aFileStream", 0);
    Array PArray11650 = new_Array_with(1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_printer_0_1 = new_Variable_named(L"printer", 0);
    Array PArray11651 = new_Array_with(1, (Optr)VAR_printer_0_1);
    Variable VAR_title_1_0 = new_Variable_named(L"title", 1);
    Variable VAR_testCases_1_1 = new_Variable_named(L"testCases", 1);
    Array PArray11655 = new_Array_with(2, (Optr)VAR_title_1_0, (Optr)VAR_testCases_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11658 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11660 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11661 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)VAR_title_1_0);
    // cr. 
    Send PSend11662 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11659 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11660, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_title_1_0, (Optr)&t_send1, (Optr)PSend11661, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11662, (Optr)&t_method_return);
    Block PBlock11657 = new_Block_with(PArray11658, empty_Array, PThreadedCode11659, 3, PSend11660, PSend11661, PSend11662);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11663 = new_Send((Optr)PBlock11657, SMB_value_, 1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_aTestCase_2_0 = new_Variable_named(L"aTestCase", 2);
    Array PArray11665 = new_Array_with(1, (Optr)VAR_aTestCase_2_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11667 = new_Send((Optr)VAR_aTestCase_2_0, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    // cr. 
    Send PSend11668 = new_Send((Optr)VAR_aFileStream_0_0, SMB_cr, 0);
    Array PThreadedCode11666 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aTestCase_2_0, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11667, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send0, (Optr)PSend11668, (Optr)&t_method_return);
    Block PBlock11664 = new_Block_with(PArray11665, empty_Array, PThreadedCode11666, 2, PSend11667, PSend11668);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11669 = new_Send((Optr)VAR_testCases_1_1, SMB_do_, 1, (Optr)PBlock11664);
    Array PThreadedCode11656 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11657, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11663, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCases_1_1, (Optr)&t_push_closure, (Optr)PBlock11664, (Optr)&t_send1, (Optr)PSend11669, (Optr)&t_method_return);
    Block PBlock11654 = new_Block_with(PArray11655, empty_Array, PThreadedCode11656, 2, PSend11663, PSend11669);
    Assign PAssign11653 = new_Assign((Optr)VAR_printer_0_1, (Optr)PBlock11654);
    // printOn:. 
    Send PSend11670 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    String string_11671 = new_String(L"Failures:");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11672 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Constant string_11671_Const = new_Constant((Optr)string_11671);
    // value:value:. 
    Send PSend11673 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11671_Const, (Optr)PSend11672);
    String string_11674 = new_String(L"Errors:");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11675 = new_Send((Optr)self, SMB_errors, 0);
    Constant string_11674_Const = new_Constant((Optr)string_11674);
    // value:value:. 
    Send PSend11676 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11674_Const, (Optr)PSend11675);
    Array PThreadedCode11652 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11653, (Optr)&t_push_closure, (Optr)PBlock11654, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11670, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11671, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11672, (Optr)&t_send2, (Optr)PSend11673, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11674, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11675, (Optr)&t_send2, (Optr)PSend11676, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11649 = new_Method_with(PArray11650, PArray11651, empty_Array, PThreadedCode11652, 5, PAssign11653, PSend11670, PSend11673, PSend11676, self);
    
    MethodClosure MC_SMB_fileOutOn_ = new_MethodClosure((Method)PMethod11649, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_fileOutOn_, MC_SMB_fileOutOn_);
}


static void init_SMB_runCase_() {
    Symbol SMB_runCase_ = new_Symbol(L"runCase:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11678 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Variable VAR_testCasePassed_0_1 = new_Variable_named(L"testCasePassed", 0);
    Array PArray11679 = new_Array_with(1, (Optr)VAR_testCasePassed_0_1);
    Assign PAssign11681 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)true_Const);
    Symbol SMB_runCase = new_Symbol(L"runCase");
    // runCase. 
    Send PSend11686 = new_Send((Optr)VAR_aTestCase_0_0, SMB_runCase, 0);
    Array PThreadedCode11685 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11686, (Optr)&t_block_return);
    Block PBlock11684 = new_Block_with(empty_Array, empty_Array, PThreadedCode11685, 1, PSend11686);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11687 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend11688 = new_Send((Optr)PSend11687, SMB_failure, 0);
    Variable VAR_signal_1_0 = new_Variable_named(L"signal", 1);
    Array PArray11690 = new_Array_with(1, (Optr)VAR_signal_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11692 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11693 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    Symbol SMB_return_ = new_Symbol(L"return:");
    // return:. 
    Send PSend11694 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11691 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11692, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11693, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11694, (Optr)&t_method_return);
    Block PBlock11689 = new_Block_with(PArray11690, empty_Array, PThreadedCode11691, 3, PSend11692, PAssign11693, PSend11694);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11695 = new_Send((Optr)PBlock11684, SMB_on_do_, 2, (Optr)PSend11688, (Optr)PBlock11689);
    Array PThreadedCode11683 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock11684, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11687, (Optr)&t_send0, (Optr)PSend11688, (Optr)&t_push_closure, (Optr)PBlock11689, (Optr)&t_send2, (Optr)PSend11695, (Optr)&t_block_return);
    Block PBlock11682 = new_Block_with(empty_Array, empty_Array, PThreadedCode11683, 1, PSend11695);
    // class. 
    Send PSend11696 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend11697 = new_Send((Optr)PSend11696, SMB_error, 0);
    Array PArray11699 = new_Array_with(1, (Optr)VAR_signal_1_0);
    // add:. 
    Send PSend11701 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11702 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    // return:. 
    Send PSend11703 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11700 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11701, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11702, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11703, (Optr)&t_method_return);
    Block PBlock11698 = new_Block_with(PArray11699, empty_Array, PThreadedCode11700, 3, PSend11701, PAssign11702, PSend11703);
    // on:do:. 
    Send PSend11704 = new_Send((Optr)PBlock11682, SMB_on_do_, 2, (Optr)PSend11697, (Optr)PBlock11698);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // add:. 
    Send PSend11708 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11707 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11708, (Optr)&t_block_return);
    Block PBlock11706 = new_Block_with(empty_Array, empty_Array, PThreadedCode11707, 1, PSend11708);
    // ifTrue:. 
    Send PSend11705 = new_Send((Optr)VAR_testCasePassed_0_1, SMB_ifTrue_, 1, (Optr)PBlock11706);
    Array PThreadedCode11680 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign11681, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11682, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11696, (Optr)&t_send0, (Optr)PSend11697, (Optr)&t_push_closure, (Optr)PBlock11698, (Optr)&t_send2, (Optr)PSend11704, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCasePassed_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend11705, (Optr)PBlock11706, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11677 = new_Method_with(PArray11678, PArray11679, empty_Array, PThreadedCode11680, 4, PAssign11681, PSend11704, PSend11705, self);
    
    MethodClosure MC_SMB_runCase_ = new_MethodClosure((Method)PMethod11677, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_runCase_, MC_SMB_runCase_);
}


static void init_SMB_failureCount() {
    Symbol SMB_failureCount = new_Symbol(L"failureCount");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11711 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11712 = new_Send((Optr)PSend11711, SMB_size, 0);
    Array PThreadedCode11710 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11711, (Optr)&t_send0, (Optr)PSend11712, (Optr)&t_method_return);
    Method PMethod11709 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11710, 1, PSend11712);
    
    MethodClosure MC_SMB_failureCount = new_MethodClosure((Method)PMethod11709, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failureCount, MC_SMB_failureCount);
}


static void init_SMB_resetFailures() {
    Symbol SMB_resetFailures = new_Symbol(L"resetFailures");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11716 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11715 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11716);
    Array PThreadedCode11714 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11715, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11716, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11713 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11714, 2, PAssign11715, self);
    
    MethodClosure MC_SMB_resetFailures = new_MethodClosure((Method)PMethod11713, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetFailures, MC_SMB_resetFailures);
}


static void init_SMB_dispatchResultsIntoHistory() {
    Symbol SMB_dispatchResultsIntoHistory = new_Symbol(L"dispatchResultsIntoHistory");
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    // classesTested. 
    Send PSend11719 = new_Send((Optr)self, SMB_classesTested, 0);
    Variable VAR_testClass_1_0 = new_Variable_named(L"testClass", 1);
    Array PArray11721 = new_Array_with(1, (Optr)VAR_testClass_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11723 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_selectResultsForTestCase_ = new_Symbol(L"selectResultsForTestCase:");
    // selectResultsForTestCase:. 
    Send PSend11724 = new_Send((Optr)self, SMB_selectResultsForTestCase_, 1, (Optr)VAR_testClass_1_0);
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    // historyAt:put:. 
    Send PSend11725 = new_Send((Optr)PSend11723, SMB_historyAt_put_, 2, (Optr)VAR_testClass_1_0, (Optr)PSend11724);
    Array PThreadedCode11722 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11723, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_send1, (Optr)PSend11724, (Optr)&t_send2, (Optr)PSend11725, (Optr)&t_method_return);
    Block PBlock11720 = new_Block_with(PArray11721, empty_Array, PThreadedCode11722, 1, PSend11725);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11726 = new_Send((Optr)PSend11719, SMB_do_, 1, (Optr)PBlock11720);
    Array PThreadedCode11718 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11719, (Optr)&t_push_closure, (Optr)PBlock11720, (Optr)&t_send1, (Optr)PSend11726, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11717 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11718, 2, PSend11726, self);
    
    MethodClosure MC_SMB_dispatchResultsIntoHistory = new_MethodClosure((Method)PMethod11717, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_dispatchResultsIntoHistory, MC_SMB_dispatchResultsIntoHistory);
}


static void init_SMB_isFailureFor_selector_() {
    Symbol SMB_isFailureFor_selector_ = new_Symbol(L"isFailureFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11728 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11730 = new_Send((Optr)self, SMB_failures, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11732 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11734 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11735 = new_Send((Optr)PSend11734, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11738 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11739 = new_Send((Optr)PSend11738, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11737 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11738, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11739, (Optr)&t_block_return);
    Block PBlock11736 = new_Block_with(empty_Array, empty_Array, PThreadedCode11737, 1, PSend11739);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11740 = new_Send((Optr)PSend11735, SMB_and_, 1, (Optr)PBlock11736);
    Array PThreadedCode11733 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11734, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11735, (Optr)&t_push_closure, (Optr)PBlock11736, (Optr)&t_send1, (Optr)PSend11740, (Optr)&t_method_return);
    Block PBlock11731 = new_Block_with(PArray11732, empty_Array, PThreadedCode11733, 1, PSend11740);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11741 = new_Send((Optr)PSend11730, SMB_anySatisfy_, 1, (Optr)PBlock11731);
    Array PThreadedCode11729 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11730, (Optr)&t_push_closure, (Optr)PBlock11731, (Optr)&t_send1, (Optr)PSend11741, (Optr)&t_method_return);
    Method PMethod11727 = new_Method_with(PArray11728, empty_Array, empty_Array, PThreadedCode11729, 1, PSend11741);
    
    MethodClosure MC_SMB_isFailureFor_selector_ = new_MethodClosure((Method)PMethod11727, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailureFor_selector_, MC_SMB_isFailureFor_selector_);
}


static void init_SMB_timeStamp() {
    Symbol SMB_timeStamp = new_Symbol(L"timeStamp");
    Array PThreadedCode11743 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_timeStamp, (Optr)&t_method_return);
    Method PMethod11742 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11743, 1, slot_Testing_TestResult_timeStamp);
    
    MethodClosure MC_SMB_timeStamp = new_MethodClosure((Method)PMethod11742, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp, MC_SMB_timeStamp);
}


static void init_SMB_resetErrors() {
    Symbol SMB_resetErrors = new_Symbol(L"resetErrors");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11747 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11746 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11747);
    Array PThreadedCode11745 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11746, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11747, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11744 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11745, 2, PAssign11746, self);
    
    MethodClosure MC_SMB_resetErrors = new_MethodClosure((Method)PMethod11744, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetErrors, MC_SMB_resetErrors);
}


static void init_SMB_unexpectedErrors() {
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11751 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11753 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11752 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11753, (Optr)&t_method_return);
    Block PBlock11750 = new_Block_with(PArray11751, empty_Array, PThreadedCode11752, 1, PSend11753);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11754 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_select_, 1, (Optr)PBlock11750);
    Array PThreadedCode11749 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_closure, (Optr)PBlock11750, (Optr)&t_send1, (Optr)PSend11754, (Optr)&t_method_return);
    Method PMethod11748 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11749, 1, PSend11754);
    
    MethodClosure MC_SMB_unexpectedErrors = new_MethodClosure((Method)PMethod11748, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrors, MC_SMB_unexpectedErrors);
}


static void init_SMB_isFailure_() {
    Symbol SMB_isFailure_ = new_Symbol(L"isFailure:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11756 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11758 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11759 = new_Send((Optr)PSend11758, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11757 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11758, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11759, (Optr)&t_method_return);
    Method PMethod11755 = new_Method_with(PArray11756, empty_Array, empty_Array, PThreadedCode11757, 1, PSend11759);
    
    MethodClosure MC_SMB_isFailure_ = new_MethodClosure((Method)PMethod11755, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailure_, MC_SMB_isFailure_);
}


static void init_SMB_classesTested() {
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11762 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11764 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11766 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Array PThreadedCode11765 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11766, (Optr)&t_method_return);
    Block PBlock11763 = new_Block_with(PArray11764, empty_Array, PThreadedCode11765, 1, PSend11766);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend11767 = new_Send((Optr)PSend11762, SMB_collect_, 1, (Optr)PBlock11763);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11768 = new_Send((Optr)PSend11767, SMB_asSet, 0);
    Array PThreadedCode11761 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11762, (Optr)&t_push_closure, (Optr)PBlock11763, (Optr)&t_send1, (Optr)PSend11767, (Optr)&t_send0, (Optr)PSend11768, (Optr)&t_method_return);
    Method PMethod11760 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11761, 1, PSend11768);
    
    MethodClosure MC_SMB_classesTested = new_MethodClosure((Method)PMethod11760, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_classesTested, MC_SMB_classesTested);
}


static void init_SMB_unexpectedErrorCount() {
    Symbol SMB_unexpectedErrorCount = new_Symbol(L"unexpectedErrorCount");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11771 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11772 = new_Send((Optr)PSend11771, SMB_size, 0);
    Array PThreadedCode11770 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11771, (Optr)&t_send0, (Optr)PSend11772, (Optr)&t_method_return);
    Method PMethod11769 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11770, 1, PSend11772);
    
    MethodClosure MC_SMB_unexpectedErrorCount = new_MethodClosure((Method)PMethod11769, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrorCount, MC_SMB_unexpectedErrorCount);
}


static void init_SMB_passedCount() {
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11775 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11776 = new_Send((Optr)PSend11775, SMB_size, 0);
    Array PThreadedCode11774 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11775, (Optr)&t_send0, (Optr)PSend11776, (Optr)&t_method_return);
    Method PMethod11773 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11774, 1, PSend11776);
    
    MethodClosure MC_SMB_passedCount = new_MethodClosure((Method)PMethod11773, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passedCount, MC_SMB_passedCount);
}


static void init_SMB_failures() {
    Symbol SMB_failures = new_Symbol(L"failures");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11780 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend11782 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11783 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11782);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11784 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11781 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11782, (Optr)&t_send1, (Optr)PSend11783, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11784, (Optr)&t_method_return);
    Block PBlock11779 = new_Block_with(PArray11780, empty_Array, PThreadedCode11781, 2, PSend11783, PSend11784);
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend11785 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11786 = new_Send((Optr)PBlock11779, SMB_value_, 1, (Optr)PSend11785);
    Array PThreadedCode11778 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11779, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11785, (Optr)&t_send1, (Optr)PSend11786, (Optr)&t_method_return);
    Method PMethod11777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11778, 1, PSend11786);
    
    MethodClosure MC_SMB_failures = new_MethodClosure((Method)PMethod11777, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failures, MC_SMB_failures);
}


static void init_SMB_correctCount() {
    Symbol SMB_correctCount = new_Symbol(L"correctCount");
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    // passedCount. 
    Send PSend11789 = new_Send((Optr)self, SMB_passedCount, 0);
    Array PThreadedCode11788 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11789, (Optr)&t_method_return);
    Method PMethod11787 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11788, 1, PSend11789);
    
    MethodClosure MC_SMB_correctCount = new_MethodClosure((Method)PMethod11787, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_correctCount, MC_SMB_correctCount);
}


static void init_SMB_isPassed_() {
    Symbol SMB_isPassed_ = new_Symbol(L"isPassed:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11791 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11793 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11794 = new_Send((Optr)PSend11793, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11792 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11793, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11794, (Optr)&t_method_return);
    Method PMethod11790 = new_Method_with(PArray11791, empty_Array, empty_Array, PThreadedCode11792, 1, PSend11794);
    
    MethodClosure MC_SMB_isPassed_ = new_MethodClosure((Method)PMethod11790, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassed_, MC_SMB_isPassed_);
}


static void init_SMB_expectedPassCount() {
    Symbol SMB_expectedPassCount = new_Symbol(L"expectedPassCount");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11797 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11798 = new_Send((Optr)PSend11797, SMB_size, 0);
    Array PThreadedCode11796 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11797, (Optr)&t_send0, (Optr)PSend11798, (Optr)&t_method_return);
    Method PMethod11795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11796, 1, PSend11798);
    
    MethodClosure MC_SMB_expectedPassCount = new_MethodClosure((Method)PMethod11795, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPassCount, MC_SMB_expectedPassCount);
}


static void init_SMB_defects() {
    Symbol SMB_defects = new_Symbol(L"defects");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11802 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11804 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11805 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11804);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11806 = new_Send((Optr)self, SMB_failures, 0);
    // addAll:. 
    Send PSend11807 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11806);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11808 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11803 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11804, (Optr)&t_send1, (Optr)PSend11805, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11806, (Optr)&t_send1, (Optr)PSend11807, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11808, (Optr)&t_method_return);
    Block PBlock11801 = new_Block_with(PArray11802, empty_Array, PThreadedCode11803, 3, PSend11805, PSend11807, PSend11808);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11809 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11810 = new_Send((Optr)PBlock11801, SMB_value_, 1, (Optr)PSend11809);
    Array PThreadedCode11800 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock11801, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11809, (Optr)&t_send1, (Optr)PSend11810, (Optr)&t_method_return);
    Method PMethod11799 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11800, 1, PSend11810);
    
    MethodClosure MC_SMB_defects = new_MethodClosure((Method)PMethod11799, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_defects, MC_SMB_defects);
}


static void init_SMB_expectedDefectCount() {
    Symbol SMB_expectedDefectCount = new_Symbol(L"expectedDefectCount");
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11813 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11814 = new_Send((Optr)PSend11813, SMB_size, 0);
    Array PThreadedCode11812 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11813, (Optr)&t_send0, (Optr)PSend11814, (Optr)&t_method_return);
    Method PMethod11811 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11812, 1, PSend11814);
    
    MethodClosure MC_SMB_expectedDefectCount = new_MethodClosure((Method)PMethod11811, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefectCount, MC_SMB_expectedDefectCount);
}


static void init_SMB_expectedDefects() {
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend11817 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_asOrderedCollection, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11818 = new_Send((Optr)slot_Testing_TestResult_errors, SMB__append_, 1, (Optr)PSend11817);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11820 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11822 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11823 = new_Send((Optr)PSend11822, SMB_not, 0);
    Array PThreadedCode11821 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11822, (Optr)&t_send0, (Optr)PSend11823, (Optr)&t_method_return);
    Block PBlock11819 = new_Block_with(PArray11820, empty_Array, PThreadedCode11821, 1, PSend11823);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11824 = new_Send((Optr)PSend11818, SMB_select_, 1, (Optr)PBlock11819);
    Array PThreadedCode11816 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend11817, (Optr)&t_send1, (Optr)PSend11818, (Optr)&t_push_closure, (Optr)PBlock11819, (Optr)&t_send1, (Optr)PSend11824, (Optr)&t_method_return);
    Method PMethod11815 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11816, 1, PSend11824);
    
    MethodClosure MC_SMB_expectedDefects = new_MethodClosure((Method)PMethod11815, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefects, MC_SMB_expectedDefects);
}


static void init_SMB_expectedPasses() {
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11828 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11830 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11829 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11830, (Optr)&t_method_return);
    Block PBlock11827 = new_Block_with(PArray11828, empty_Array, PThreadedCode11829, 1, PSend11830);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11831 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock11827);
    Array PThreadedCode11826 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock11827, (Optr)&t_send1, (Optr)PSend11831, (Optr)&t_method_return);
    Method PMethod11825 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11826, 1, PSend11831);
    
    MethodClosure MC_SMB_expectedPasses = new_MethodClosure((Method)PMethod11825, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPasses, MC_SMB_expectedPasses);
}


static void init_SMB_unexpectedFailureCount() {
    Symbol SMB_unexpectedFailureCount = new_Symbol(L"unexpectedFailureCount");
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend11834 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11835 = new_Send((Optr)PSend11834, SMB_size, 0);
    Array PThreadedCode11833 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11834, (Optr)&t_send0, (Optr)PSend11835, (Optr)&t_method_return);
    Method PMethod11832 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11833, 1, PSend11835);
    
    MethodClosure MC_SMB_unexpectedFailureCount = new_MethodClosure((Method)PMethod11832, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailureCount, MC_SMB_unexpectedFailureCount);
}


static void init_SMB_isErrorFor_selector_() {
    Symbol SMB_isErrorFor_selector_ = new_Symbol(L"isErrorFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11837 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11839 = new_Send((Optr)self, SMB_errors, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11841 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11843 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11844 = new_Send((Optr)PSend11843, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11847 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11848 = new_Send((Optr)PSend11847, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11846 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11847, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11848, (Optr)&t_block_return);
    Block PBlock11845 = new_Block_with(empty_Array, empty_Array, PThreadedCode11846, 1, PSend11848);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11849 = new_Send((Optr)PSend11844, SMB_and_, 1, (Optr)PBlock11845);
    Array PThreadedCode11842 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11843, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11844, (Optr)&t_push_closure, (Optr)PBlock11845, (Optr)&t_send1, (Optr)PSend11849, (Optr)&t_method_return);
    Block PBlock11840 = new_Block_with(PArray11841, empty_Array, PThreadedCode11842, 1, PSend11849);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11850 = new_Send((Optr)PSend11839, SMB_anySatisfy_, 1, (Optr)PBlock11840);
    Array PThreadedCode11838 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11839, (Optr)&t_push_closure, (Optr)PBlock11840, (Optr)&t_send1, (Optr)PSend11850, (Optr)&t_method_return);
    Method PMethod11836 = new_Method_with(PArray11837, empty_Array, empty_Array, PThreadedCode11838, 1, PSend11850);
    
    MethodClosure MC_SMB_isErrorFor_selector_ = new_MethodClosure((Method)PMethod11836, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isErrorFor_selector_, MC_SMB_isErrorFor_selector_);
}


static void init_SMB_hasErrors() {
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11853 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11854 = new_Send((Optr)PSend11853, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend11855 = new_Send((Optr)PSend11854, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode11852 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11853, (Optr)&t_send0, (Optr)PSend11854, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11855, (Optr)&t_method_return);
    Method PMethod11851 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11852, 1, PSend11855);
    
    MethodClosure MC_SMB_hasErrors = new_MethodClosure((Method)PMethod11851, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasErrors, MC_SMB_hasErrors);
}


static void init_SMB_unexpectedPasses() {
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11859 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11861 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11862 = new_Send((Optr)PSend11861, SMB_not, 0);
    Array PThreadedCode11860 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11861, (Optr)&t_send0, (Optr)PSend11862, (Optr)&t_method_return);
    Block PBlock11858 = new_Block_with(PArray11859, empty_Array, PThreadedCode11860, 1, PSend11862);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11863 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock11858);
    Array PThreadedCode11857 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock11858, (Optr)&t_send1, (Optr)PSend11863, (Optr)&t_method_return);
    Method PMethod11856 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11857, 1, PSend11863);
    
    MethodClosure MC_SMB_unexpectedPasses = new_MethodClosure((Method)PMethod11856, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPasses, MC_SMB_unexpectedPasses);
}


static void init_SMB_isError_() {
    Symbol SMB_isError_ = new_Symbol(L"isError:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11865 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11867 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11868 = new_Send((Optr)PSend11867, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11866 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11867, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11868, (Optr)&t_method_return);
    Method PMethod11864 = new_Method_with(PArray11865, empty_Array, empty_Array, PThreadedCode11866, 1, PSend11868);
    
    MethodClosure MC_SMB_isError_ = new_MethodClosure((Method)PMethod11864, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isError_, MC_SMB_isError_);
}


static void init_SMB_unexpectedPassCount() {
    Symbol SMB_unexpectedPassCount = new_Symbol(L"unexpectedPassCount");
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend11871 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11872 = new_Send((Optr)PSend11871, SMB_size, 0);
    Array PThreadedCode11870 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11871, (Optr)&t_send0, (Optr)PSend11872, (Optr)&t_method_return);
    Method PMethod11869 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11870, 1, PSend11872);
    
    MethodClosure MC_SMB_unexpectedPassCount = new_MethodClosure((Method)PMethod11869, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPassCount, MC_SMB_unexpectedPassCount);
}


static void init_SMB_runCount() {
    Symbol SMB_runCount = new_Symbol(L"runCount");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11875 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_size, 0);
    // size. 
    Send PSend11876 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11877 = new_Send((Optr)PSend11875, SMB__plus_, 1, (Optr)PSend11876);
    // size. 
    Send PSend11878 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_size, 0);
    // +. 
    Send PSend11879 = new_Send((Optr)PSend11877, SMB__plus_, 1, (Optr)PSend11878);
    Array PThreadedCode11874 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send0, (Optr)PSend11875, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend11876, (Optr)&t_send1, (Optr)PSend11877, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send0, (Optr)PSend11878, (Optr)&t_send1, (Optr)PSend11879, (Optr)&t_method_return);
    Method PMethod11873 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11874, 1, PSend11879);
    
    MethodClosure MC_SMB_runCount = new_MethodClosure((Method)PMethod11873, Testing_TestResult_Class);
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
    Send PSend11882 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_status_1_0 = new_Variable_named(L"status", 1);
    Array PArray11884 = new_Array_with(1, (Optr)VAR_status_1_0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend11886 = new_Send((Optr)self, SMB_perform_, 1, (Optr)VAR_status_1_0);
    Variable VAR_testCase_2_0 = new_Variable_named(L"testCase", 2);
    Array PArray11888 = new_Array_with(1, (Optr)VAR_testCase_2_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11890 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    // updateTestHistoryFor:status:. 
    Send PSend11891 = new_Send((Optr)PSend11890, SMB_updateTestHistoryFor_status_, 2, (Optr)VAR_testCase_2_0, (Optr)VAR_status_1_0);
    Array PThreadedCode11889 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11890, (Optr)&t_push_variable, (Optr)VAR_testCase_2_0, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send2, (Optr)PSend11891, (Optr)&t_method_return);
    Block PBlock11887 = new_Block_with(PArray11888, empty_Array, PThreadedCode11889, 1, PSend11891);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11892 = new_Send((Optr)PSend11886, SMB_do_, 1, (Optr)PBlock11887);
    Array PThreadedCode11885 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send1, (Optr)PSend11886, (Optr)&t_push_closure, (Optr)PBlock11887, (Optr)&t_send1, (Optr)PSend11892, (Optr)&t_method_return);
    Block PBlock11883 = new_Block_with(PArray11884, empty_Array, PThreadedCode11885, 1, PSend11892);
    // do:. 
    Send PSend11893 = new_Send((Optr)PSend11882, SMB_do_, 1, (Optr)PBlock11883);
    Array PThreadedCode11881 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend11882, (Optr)&t_push_closure, (Optr)PBlock11883, (Optr)&t_send1, (Optr)PSend11893, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11880 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11881, 2, PSend11893, self);
    
    MethodClosure MC_SMB_updateResultsInHistory = new_MethodClosure((Method)PMethod11880, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_updateResultsInHistory, MC_SMB_updateResultsInHistory);
}


static void init_SMB_unexpectedFailures() {
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11897 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11899 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11898 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11899, (Optr)&t_method_return);
    Block PBlock11896 = new_Block_with(PArray11897, empty_Array, PThreadedCode11898, 1, PSend11899);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11900 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_select_, 1, (Optr)PBlock11896);
    Array PThreadedCode11895 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_closure, (Optr)PBlock11896, (Optr)&t_send1, (Optr)PSend11900, (Optr)&t_method_return);
    Method PMethod11894 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11895, 1, PSend11900);
    
    MethodClosure MC_SMB_unexpectedFailures = new_MethodClosure((Method)PMethod11894, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailures, MC_SMB_unexpectedFailures);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11904 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11906 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_passed);
    // addAll:. 
    Send PSend11907 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_failures);
    // addAll:. 
    Send PSend11908 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_errors);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11909 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11905 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send1, (Optr)PSend11906, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send1, (Optr)PSend11907, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send1, (Optr)PSend11908, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11909, (Optr)&t_method_return);
    Block PBlock11903 = new_Block_with(PArray11904, empty_Array, PThreadedCode11905, 4, PSend11906, PSend11907, PSend11908, PSend11909);
    Symbol SMB_runCount = new_Symbol(L"runCount");
    // runCount. 
    Send PSend11910 = new_Send((Optr)self, SMB_runCount, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend11911 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)PSend11910);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11912 = new_Send((Optr)PBlock11903, SMB_value_, 1, (Optr)PSend11911);
    Array PThreadedCode11902 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock11903, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11910, (Optr)&t_send1, (Optr)PSend11911, (Optr)&t_send1, (Optr)PSend11912, (Optr)&t_method_return);
    Method PMethod11901 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11902, 1, PSend11912);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11901, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_tests, MC_SMB_tests);
}


static void init_SMB_hasFailures() {
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11915 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11916 = new_Send((Optr)PSend11915, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend11917 = new_Send((Optr)PSend11916, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode11914 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11915, (Optr)&t_send0, (Optr)PSend11916, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11917, (Optr)&t_method_return);
    Method PMethod11913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11914, 1, PSend11917);
    
    MethodClosure MC_SMB_hasFailures = new_MethodClosure((Method)PMethod11913, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasFailures, MC_SMB_hasFailures);
}


static void init_class_SMB_historyAt_() {
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray11919 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend11921 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Array PThreadedCode11920 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend11921, (Optr)&t_method_return);
    Method PMethod11918 = new_Method_with(PArray11919, empty_Array, empty_Array, PThreadedCode11920, 1, PSend11921);
    
    MethodClosure MC_SMB_historyAt_ = new_MethodClosure((Method)PMethod11918, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_, MC_SMB_historyAt_);
}


static void init_class_SMB_resumableFailure() {
    Symbol SMB_resumableFailure = new_Symbol(L"resumableFailure");
    Array PThreadedCode11923 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ResumableTestFailure_classReference, (Optr)&t_method_return);
    Method PMethod11922 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11923, 1, ResumableTestFailure_classReference);
    
    MethodClosure MC_SMB_resumableFailure = new_MethodClosure((Method)PMethod11922, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_resumableFailure, MC_SMB_resumableFailure);
}


static void init_class_SMB_failure() {
    Symbol SMB_failure = new_Symbol(L"failure");
    Array PThreadedCode11925 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)TestFailure_classReference, (Optr)&t_method_return);
    Method PMethod11924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11925, 1, TestFailure_classReference);
    
    MethodClosure MC_SMB_failure = new_MethodClosure((Method)PMethod11924, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_failure, MC_SMB_failure);
}


static void init_class_SMB_updateTestHistoryFor_status_() {
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Variable VAR_aSymbol_0_1 = new_Variable_named(L"aSymbol", 0);
    Array PArray11927 = new_Array_with(2, (Optr)VAR_aTestCase_0_0, (Optr)VAR_aSymbol_0_1);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Variable VAR_sel_0_3 = new_Variable_named(L"sel", 0);
    Array PArray11928 = new_Array_with(2, (Optr)VAR_cls_0_2, (Optr)VAR_sel_0_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11931 = new_Send((Optr)VAR_aTestCase_0_0, SMB_class, 0);
    Assign PAssign11930 = new_Assign((Optr)VAR_cls_0_2, (Optr)PSend11931);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11933 = new_Send((Optr)VAR_aTestCase_0_0, SMB_selector, 0);
    Assign PAssign11932 = new_Assign((Optr)VAR_sel_0_3, (Optr)PSend11933);
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    // removeFromTestHistory:in:. 
    Send PSend11934 = new_Send((Optr)self, SMB_removeFromTestHistory_in_, 2, (Optr)VAR_sel_0_3, (Optr)VAR_cls_0_2);
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    // historyAt:. 
    Send PSend11935 = new_Send((Optr)self, SMB_historyAt_, 1, (Optr)VAR_cls_0_2);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend11936 = new_Send((Optr)PSend11935, SMB_at_, 1, (Optr)VAR_aSymbol_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11937 = new_Send((Optr)PSend11936, SMB_add_, 1, (Optr)VAR_sel_0_3);
    Array PThreadedCode11929 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign11930, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11931, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11932, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11933, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend11934, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send1, (Optr)PSend11935, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_1, (Optr)&t_send1, (Optr)PSend11936, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_send1, (Optr)PSend11937, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11926 = new_Method_with(PArray11927, PArray11928, empty_Array, PThreadedCode11929, 5, PAssign11930, PAssign11932, PSend11934, PSend11937, self);
    
    MethodClosure MC_SMB_updateTestHistoryFor_status_ = new_MethodClosure((Method)PMethod11926, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_updateTestHistoryFor_status_, MC_SMB_updateTestHistoryFor_status_);
}


static void init_class_SMB_newTestDictionary() {
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11941 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol  SMB_timeStamp = new_Symbol(L"timeStamp");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_timeStamp_Const = new_Constant((Optr)SMB_timeStamp);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // at:put:. 
    Send PSend11943 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_timeStamp_Const, (Optr)int_0_Const);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11944 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend11945 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend11944);
    Symbol  SMB_failures = new_Symbol(L"failures");
    // new. 
    Send PSend11946 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend11947 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend11946);
    Symbol  SMB_errors = new_Symbol(L"errors");
    // new. 
    Send PSend11948 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend11949 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend11948);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11950 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11942 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_timeStamp, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend11943, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11944, (Optr)&t_send2, (Optr)PSend11945, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11946, (Optr)&t_send2, (Optr)PSend11947, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11948, (Optr)&t_send2, (Optr)PSend11949, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11950, (Optr)&t_method_return);
    Block PBlock11940 = new_Block_with(PArray11941, empty_Array, PThreadedCode11942, 5, PSend11943, PSend11945, PSend11947, PSend11949, PSend11950);
    // new. 
    Send PSend11951 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11952 = new_Send((Optr)PBlock11940, SMB_value_, 1, (Optr)PSend11951);
    Array PThreadedCode11939 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock11940, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend11951, (Optr)&t_send1, (Optr)PSend11952, (Optr)&t_method_return);
    Method PMethod11938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11939, 1, PSend11952);
    
    MethodClosure MC_SMB_newTestDictionary = new_MethodClosure((Method)PMethod11938, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_newTestDictionary, MC_SMB_newTestDictionary);
}


static void init_class_SMB_historyFor_() {
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray11954 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_history_0_1 = new_Variable_named(L"history", 0);
    Array PArray11955 = new_Array_with(1, (Optr)VAR_history_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11958 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend11961 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Assign PAssign11960 = new_Assign((Optr)VAR_history_0_1, (Optr)PSend11961);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend11964 = new_Send((Optr)self, SMB_newTestDictionary, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11965 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11964);
    Array PThreadedCode11963 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11964, (Optr)&t_send1, (Optr)PSend11965, (Optr)&t_block_return);
    Block PBlock11962 = new_Block_with(empty_Array, empty_Array, PThreadedCode11963, 1, PSend11965);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend11966 = new_Send((Optr)VAR_history_0_1, SMB_ifNil_, 1, (Optr)PBlock11962);
    Array PThreadedCode11959 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign11960, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend11961, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_push_closure, (Optr)PBlock11962, (Optr)&t_send1, (Optr)PSend11966, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_method_return);
    Block PBlock11957 = new_Block_with(PArray11958, empty_Array, PThreadedCode11959, 3, PAssign11960, PSend11966, VAR_history_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11967 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11957);
    Array PThreadedCode11956 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11957, (Optr)&t_send1, (Optr)PSend11967, (Optr)&t_method_return);
    Method PMethod11953 = new_Method_with(PArray11954, PArray11955, empty_Array, PThreadedCode11956, 1, PSend11967);
    
    MethodClosure MC_SMB_historyFor_ = new_MethodClosure((Method)PMethod11953, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyFor_, MC_SMB_historyFor_);
}


static void init_class_SMB_signalFailureWith_() {
    Symbol SMB_signalFailureWith_ = new_Symbol(L"signalFailureWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11969 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend11971 = new_Send((Optr)self, SMB_failure, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend11972 = new_Send((Optr)PSend11971, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode11970 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11971, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11972, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11968 = new_Method_with(PArray11969, empty_Array, empty_Array, PThreadedCode11970, 2, PSend11972, self);
    
    MethodClosure MC_SMB_signalFailureWith_ = new_MethodClosure((Method)PMethod11968, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalFailureWith_, MC_SMB_signalFailureWith_);
}


static void init_class_SMB_signalErrorWith_() {
    Symbol SMB_signalErrorWith_ = new_Symbol(L"signalErrorWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11974 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend11976 = new_Send((Optr)self, SMB_error, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend11977 = new_Send((Optr)PSend11976, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode11975 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11976, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11977, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11973 = new_Method_with(PArray11974, empty_Array, empty_Array, PThreadedCode11975, 2, PSend11977, self);
    
    MethodClosure MC_SMB_signalErrorWith_ = new_MethodClosure((Method)PMethod11973, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalErrorWith_, MC_SMB_signalErrorWith_);
}


static void init_class_SMB_exError() {
    Symbol SMB_exError = new_Symbol(L"exError");
    Array PThreadedCode11979 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_method_return);
    Method PMethod11978 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11979, 1, Error_classReference);
    
    MethodClosure MC_SMB_exError = new_MethodClosure((Method)PMethod11978, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_exError, MC_SMB_exError);
}


static void init_class_SMB_historyAt_put_() {
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Variable VAR_aDictionary_0_1 = new_Variable_named(L"aDictionary", 0);
    Array PArray11981 = new_Array_with(2, (Optr)VAR_aTestCaseClass_0_0, (Optr)VAR_aDictionary_0_1);
    Symbol SMB_history_ = new_Symbol(L"history:");
    // history:. 
    Send PSend11983 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history_, 1, (Optr)VAR_aDictionary_0_1);
    Array PThreadedCode11982 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_1, (Optr)&t_send1, (Optr)PSend11983, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11980 = new_Method_with(PArray11981, empty_Array, empty_Array, PThreadedCode11982, 2, PSend11983, self);
    
    MethodClosure MC_SMB_historyAt_put_ = new_MethodClosure((Method)PMethod11980, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_put_, MC_SMB_historyAt_put_);
}


static void init_class_SMB_removeFromTestHistory_in_() {
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Variable VAR_aTestCaseClass_0_1 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray11985 = new_Array_with(2, (Optr)VAR_aSelector_0_0, (Optr)VAR_aTestCaseClass_0_1);
    Variable VAR_lastRun_0_2 = new_Variable_named(L"lastRun", 0);
    Array PArray11986 = new_Array_with(1, (Optr)VAR_lastRun_0_2);
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    // historyFor:. 
    Send PSend11989 = new_Send((Optr)self, SMB_historyFor_, 1, (Optr)VAR_aTestCaseClass_0_1);
    Assign PAssign11988 = new_Assign((Optr)VAR_lastRun_0_2, (Optr)PSend11989);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // with:with:with:. 
    Send PSend11990 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_set_1_0 = new_Variable_named(L"set", 1);
    Array PArray11992 = new_Array_with(1, (Optr)VAR_set_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend11994 = new_Send((Optr)VAR_lastRun_0_2, SMB_at_, 1, (Optr)VAR_set_1_0);
    Array PThreadedCode11996 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock11995 = new_Block_with(empty_Array, empty_Array, PThreadedCode11996, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend11997 = new_Send((Optr)PSend11994, SMB_remove_ifAbsent_, 2, (Optr)VAR_aSelector_0_0, (Optr)PBlock11995);
    Array PThreadedCode11993 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_lastRun_0_2, (Optr)&t_push_variable, (Optr)VAR_set_1_0, (Optr)&t_send1, (Optr)PSend11994, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_push_closure, (Optr)PBlock11995, (Optr)&t_send2, (Optr)PSend11997, (Optr)&t_method_return);
    Block PBlock11991 = new_Block_with(PArray11992, empty_Array, PThreadedCode11993, 1, PSend11997);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11998 = new_Send((Optr)PSend11990, SMB_do_, 1, (Optr)PBlock11991);
    Array PThreadedCode11987 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign11988, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_1, (Optr)&t_send1, (Optr)PSend11989, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend11990, (Optr)&t_push_closure, (Optr)PBlock11991, (Optr)&t_send1, (Optr)PSend11998, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11984 = new_Method_with(PArray11985, PArray11986, empty_Array, PThreadedCode11987, 3, PAssign11988, PSend11998, self);
    
    MethodClosure MC_SMB_removeFromTestHistory_in_ = new_MethodClosure((Method)PMethod11984, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_removeFromTestHistory_in_, MC_SMB_removeFromTestHistory_in_);
}


static void init_class_SMB_error() {
    Symbol SMB_error = new_Symbol(L"error");
    Symbol SMB_exError = new_Symbol(L"exError");
    // exError. 
    Send PSend12001 = new_Send((Optr)self, SMB_exError, 0);
    Array PThreadedCode12000 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12001, (Optr)&t_method_return);
    Method PMethod11999 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12000, 1, PSend12001);
    
    MethodClosure MC_SMB_error = new_MethodClosure((Method)PMethod11999, HEADER(Testing_TestResult_Class));
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