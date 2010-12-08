#include <lib/class/Collection/Benchmark/MultiDictBenchmark.h>


Optr layout_Collection_Benchmark_MultiDictBenchmark_Class_class;
Optr slot_Collection_Benchmark_MultiDictBenchmark_stResults;
Optr slot_Collection_Benchmark_MultiDictBenchmark_pResults;
Optr slot_Collection_Benchmark_MultiDictBenchmark_sResults;
Optr slot_Collection_Benchmark_MultiDictBenchmark_stBenchmark;
Optr slot_Collection_Benchmark_MultiDictBenchmark_pBenchmark;
Optr slot_Collection_Benchmark_MultiDictBenchmark_sBenchmark;
Optr slot_Collection_Benchmark_MultiDictBenchmark_probeCount;
Optr slot_Collection_Benchmark_MultiDictBenchmark_keyBlock;
Optr slot_Collection_Benchmark_MultiDictBenchmark_useStDict;
Optr slot_Collection_Benchmark_MultiDictBenchmark_randomized;
Optr slot_Collection_Benchmark_MultiDictBenchmark_keyBlockGenerator;
Optr layout_Collection_Benchmark_MultiDictBenchmark;


static void init_SMB_printSelector_on_() {
    Symbol SMB_printSelector_on_ = new_Symbol(L"printSelector:on:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray7513 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_aStream_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7516 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7518 = new_Send((Optr)VAR_selector_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // copyFrom:to:. 
    Send PSend7519 = new_Send((Optr)VAR_selector_0_0, SMB_copyFrom_to_, 2, (Optr)int_6_Const, (Optr)PSend7518);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7520 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend7519);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend7521 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode7517 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send0, (Optr)PSend7518, (Optr)&t_send2, (Optr)PSend7519, (Optr)&t_send1, (Optr)PSend7520, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7521, (Optr)&t_method_return);
    Block PBlock7515 = new_Block_with(PArray7516, empty_Array, PThreadedCode7517, 2, PSend7520, PSend7521);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7522 = new_Send((Optr)PBlock7515, SMB_value_, 1, (Optr)VAR_aStream_0_1);
    Symbol  SMB_Pinocchio = new_Symbol(L"Pinocchio");
    Symbol SMB_printResults_selector_named_on_ = new_Symbol(L"printResults:selector:named:on:");
    Constant SMB_Pinocchio_Const = new_Constant((Optr)SMB_Pinocchio);
    // printResults:selector:named:on:. 
    Send PSend7523 = new_Send((Optr)self, SMB_printResults_selector_named_on_, 4, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults, (Optr)VAR_selector_0_0, (Optr)SMB_Pinocchio_Const, (Optr)VAR_aStream_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol  SMB_Smalltalk = new_Symbol(L"Smalltalk");
    Constant SMB_Smalltalk_Const = new_Constant((Optr)SMB_Smalltalk);
    // printResults:selector:named:on:. 
    Send PSend7527 = new_Send((Optr)self, SMB_printResults_selector_named_on_, 4, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults, (Optr)VAR_selector_0_0, (Optr)SMB_Smalltalk_Const, (Optr)VAR_aStream_0_1);
    Array PThreadedCode7526 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_Smalltalk, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send4, (Optr)PSend7527, (Optr)&t_block_return);
    Block PBlock7525 = new_Block_with(empty_Array, empty_Array, PThreadedCode7526, 1, PSend7527);
    // ifTrue:. 
    Send PSend7524 = new_Send((Optr)slot_Collection_Benchmark_MultiDictBenchmark_useStDict, SMB_ifTrue_, 1, (Optr)PBlock7525);
    Array PThreadedCode7514 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_closure, (Optr)PBlock7515, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send1, (Optr)PSend7522, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_Pinocchio, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send4, (Optr)PSend7523, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_useStDict, (Optr)&t_send_ifTrue_, (Optr)PSend7524, (Optr)PBlock7525, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7512 = new_Method_with(PArray7513, empty_Array, empty_Array, PThreadedCode7514, 4, PSend7522, PSend7523, PSend7524, self);
    
    MethodClosure MC_SMB_printSelector_on_ = new_MethodClosure((Method)PMethod7512, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_printSelector_on_, MC_SMB_printSelector_on_);
}


static void init_SMB_keyBlock_() {
    Symbol SMB_keyBlock_ = new_Symbol(L"keyBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7529 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7531 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_keyBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7530 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7531, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7528 = new_Method_with(PArray7529, empty_Array, empty_Array, PThreadedCode7530, 2, PAssign7531, self);
    
    MethodClosure MC_SMB_keyBlock_ = new_MethodClosure((Method)PMethod7528, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_keyBlock_, MC_SMB_keyBlock_);
}


static void init_SMB_runSelector_dictSize_benchmark_results_() {
    Symbol SMB_runSelector_dictSize_benchmark_results_ = new_Symbol(L"runSelector:dictSize:benchmark:results:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_benchmark_0_2 = new_Variable_named(L"benchmark", 0);
    Variable VAR_results_0_3 = new_Variable_named(L"results", 0);
    Array PArray7533 = new_Array_with(4, (Optr)VAR_selector_0_0, (Optr)VAR_size_0_1, (Optr)VAR_benchmark_0_2, (Optr)VAR_results_0_3);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray7534 = new_Array_with(1, (Optr)VAR_result_0_4);
    Symbol SMB_dictSize_ = new_Symbol(L"dictSize:");
    // dictSize:. 
    Send PSend7536 = new_Send((Optr)VAR_benchmark_0_2, SMB_dictSize_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend7537 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7538 = new_Send((Optr)VAR_benchmark_0_2, SMB_probeCount_, 1, (Optr)PSend7537);
    Symbol SMB_keyBlockGenerator = new_Symbol(L"keyBlockGenerator");
    // keyBlockGenerator. 
    Send PSend7539 = new_Send((Optr)self, SMB_keyBlockGenerator, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7540 = new_Send((Optr)PSend7539, SMB_value_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_keyBlock_ = new_Symbol(L"keyBlock:");
    // keyBlock:. 
    Send PSend7541 = new_Send((Optr)VAR_benchmark_0_2, SMB_keyBlock_, 1, (Optr)PSend7540);
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend7543 = new_Send((Optr)VAR_benchmark_0_2, SMB_run_, 1, (Optr)VAR_selector_0_0);
    Assign PAssign7542 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend7543);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7544 = new_Send((Optr)VAR_results_0_3, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7545 = new_Send((Optr)PSend7544, SMB_at_put_, 2, (Optr)VAR_size_0_1, (Optr)VAR_result_0_4);
    Array PThreadedCode7535 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push_variable, (Optr)VAR_benchmark_0_2, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend7536, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_benchmark_0_2, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7537, (Optr)&t_send1, (Optr)PSend7538, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_benchmark_0_2, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7539, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend7540, (Optr)&t_send1, (Optr)PSend7541, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7542, (Optr)&t_push_variable, (Optr)VAR_benchmark_0_2, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7543, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_results_0_3, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7544, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_send2, (Optr)PSend7545, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7532 = new_Method_with(PArray7533, PArray7534, empty_Array, PThreadedCode7535, 6, PSend7536, PSend7538, PSend7541, PAssign7542, PSend7545, self);
    
    MethodClosure MC_SMB_runSelector_dictSize_benchmark_results_ = new_MethodClosure((Method)PMethod7532, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_runSelector_dictSize_benchmark_results_, MC_SMB_runSelector_dictSize_benchmark_results_);
}


static void init_SMB_keyBlockGenerator_() {
    Symbol SMB_keyBlockGenerator_ = new_Symbol(L"keyBlockGenerator:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7547 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7549 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_keyBlockGenerator, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7548 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7549, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7546 = new_Method_with(PArray7547, empty_Array, empty_Array, PThreadedCode7548, 2, PAssign7549, self);
    
    MethodClosure MC_SMB_keyBlockGenerator_ = new_MethodClosure((Method)PMethod7546, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_keyBlockGenerator_, MC_SMB_keyBlockGenerator_);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7553 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign7552 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults, (Optr)PSend7553);
    // new. 
    Send PSend7555 = new_Send((Optr)PBSTDictionary_classReference, SMB_new, 0);
    Assign PAssign7554 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_stBenchmark, (Optr)PSend7555);
    // new. 
    Send PSend7557 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign7556 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults, (Optr)PSend7557);
    // new. 
    Send PSend7559 = new_Send((Optr)PBDictionary_classReference, SMB_new, 0);
    Assign PAssign7558 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_pBenchmark, (Optr)PSend7559);
    Array PThreadedCode7551 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign7552, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7553, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7554, (Optr)&t_push_class_reference, (Optr)PBSTDictionary_classReference, (Optr)&t_send0, (Optr)PSend7555, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7556, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7557, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7558, (Optr)&t_push_class_reference, (Optr)PBDictionary_classReference, (Optr)&t_send0, (Optr)PSend7559, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7550 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7551, 5, PAssign7552, PAssign7554, PAssign7556, PAssign7558, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod7550, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_run() {
    /*
    run
// 	^ self new run
    */
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_selectors = new_Symbol(L"selectors");
    // selectors. 
    Send PSend7562 = new_Send((Optr)self, SMB_selectors, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray7564 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend7566 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode7565 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7566, (Optr)&t_method_return);
    Block PBlock7563 = new_Block_with(PArray7564, empty_Array, PThreadedCode7565, 1, PSend7566);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7567 = new_Send((Optr)PSend7562, SMB_do_, 1, (Optr)PBlock7563);
    Array PThreadedCode7561 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7562, (Optr)&t_push_closure, (Optr)PBlock7563, (Optr)&t_send1, (Optr)PSend7567, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7560 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7561, 2, PSend7567, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7560, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_keyBlockGenerator() {
    Symbol SMB_keyBlockGenerator = new_Symbol(L"keyBlockGenerator");
    Array PThreadedCode7569 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_keyBlockGenerator, (Optr)&t_method_return);
    Method PMethod7568 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7569, 1, slot_Collection_Benchmark_MultiDictBenchmark_keyBlockGenerator);
    
    MethodClosure MC_SMB_keyBlockGenerator = new_MethodClosure((Method)PMethod7568, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_keyBlockGenerator, MC_SMB_keyBlockGenerator);
}


static void init_SMB_run_() {
    /*
    run: probeCount
// 	^ self new probeCount: probeCount; run
    */
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7571 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7573 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7574 = new_Send((Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)PSend7573);
    // new. 
    Send PSend7575 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // at:put:. 
    Send PSend7576 = new_Send((Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)PSend7575);
    Symbol SMB_sizes = new_Symbol(L"sizes");
    // sizes. 
    Send PSend7577 = new_Send((Optr)self, SMB_sizes, 0);
    Variable VAR_size_1_0 = new_Variable_named(L"size", 1);
    Array PArray7579 = new_Array_with(1, (Optr)VAR_size_1_0);
    Symbol SMB_run_dictSize_ = new_Symbol(L"run:dictSize:");
    // run:dictSize:. 
    Send PSend7581 = new_Send((Optr)self, SMB_run_dictSize_, 2, (Optr)VAR_selector_0_0, (Optr)VAR_size_1_0);
    Array PThreadedCode7580 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_size_1_0, (Optr)&t_send2, (Optr)PSend7581, (Optr)&t_method_return);
    Block PBlock7578 = new_Block_with(PArray7579, empty_Array, PThreadedCode7580, 1, PSend7581);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7582 = new_Send((Optr)PSend7577, SMB_do_, 1, (Optr)PBlock7578);
    Array PThreadedCode7572 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7573, (Optr)&t_send2, (Optr)PSend7574, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7575, (Optr)&t_send2, (Optr)PSend7576, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7577, (Optr)&t_push_closure, (Optr)PBlock7578, (Optr)&t_send1, (Optr)PSend7582, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7570 = new_Method_with(PArray7571, empty_Array, empty_Array, PThreadedCode7572, 4, PSend7574, PSend7576, PSend7582, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7570, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    Assign PAssign7585 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_probeCount, (Optr)int_30_Const);
    Assign PAssign7586 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_useStDict, (Optr)true_Const);
    Assign PAssign7587 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_randomized, (Optr)false_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7590 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_keyBlock = new_Symbol(L"keyBlock");
    // keyBlock. 
    Send PSend7592 = new_Send((Optr)self, SMB_keyBlock, 0);
    Array PThreadedCode7591 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7592, (Optr)&t_method_return);
    Block PBlock7589 = new_Block_with(PArray7590, empty_Array, PThreadedCode7591, 1, PSend7592);
    Assign PAssign7588 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_keyBlockGenerator, (Optr)PBlock7589);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend7593 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode7584 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign7585, (Optr)&t_push1, (Optr)int_30, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7586, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7587, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7588, (Optr)&t_push_closure, (Optr)PBlock7589, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7593, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7583 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7584, 6, PAssign7585, PAssign7586, PAssign7587, PAssign7588, PSend7593, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7583, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_useStDict_() {
    Symbol SMB_useStDict_ = new_Symbol(L"useStDict:");
    Variable VAR_aBool_0_0 = new_Variable_named(L"aBool", 0);
    Array PArray7595 = new_Array_with(1, (Optr)VAR_aBool_0_0);
    Assign PAssign7597 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_useStDict, (Optr)VAR_aBool_0_0);
    Array PThreadedCode7596 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7597, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7594 = new_Method_with(PArray7595, empty_Array, empty_Array, PThreadedCode7596, 2, PAssign7597, self);
    
    MethodClosure MC_SMB_useStDict_ = new_MethodClosure((Method)PMethod7594, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_useStDict_, MC_SMB_useStDict_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7599 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_pRun_0_1 = new_Variable_named(L"pRun", 0);
    Variable VAR_sRun_0_2 = new_Variable_named(L"sRun", 0);
    Array PArray7600 = new_Array_with(2, (Optr)VAR_pRun_0_1, (Optr)VAR_sRun_0_2);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend7602 = new_Send((Optr)VAR_aStream_0_0, SMB_tab, 0);
    Symbol SMB_sizes = new_Symbol(L"sizes");
    // sizes. 
    Send PSend7603 = new_Send((Optr)self, SMB_sizes, 0);
    Variable VAR_size_1_0 = new_Variable_named(L"size", 1);
    Array PArray7605 = new_Array_with(1, (Optr)VAR_size_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray7608 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend7610 = new_Send((Optr)VAR_size_1_0, SMB_asString, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7611 = new_Send((Optr)VAR__receiver__2_0, SMB__shiftLeft_, 1, (Optr)PSend7610);
    // tab. 
    Send PSend7612 = new_Send((Optr)VAR__receiver__2_0, SMB_tab, 0);
    // tab. 
    Send PSend7613 = new_Send((Optr)VAR__receiver__2_0, SMB_tab, 0);
    Array PThreadedCode7609 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_size_1_0, (Optr)&t_send0, (Optr)PSend7610, (Optr)&t_send1, (Optr)PSend7611, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend7612, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend7613, (Optr)&t_method_return);
    Block PBlock7607 = new_Block_with(PArray7608, empty_Array, PThreadedCode7609, 3, PSend7611, PSend7612, PSend7613);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7614 = new_Send((Optr)PBlock7607, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode7606 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock7607, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7614, (Optr)&t_method_return);
    Block PBlock7604 = new_Block_with(PArray7605, empty_Array, PThreadedCode7606, 1, PSend7614);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7615 = new_Send((Optr)PSend7603, SMB_do_, 1, (Optr)PBlock7604);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend7616 = new_Send((Optr)VAR_aStream_0_0, SMB_lf, 0);
    Symbol SMB_selectors = new_Symbol(L"selectors");
    // selectors. 
    Send PSend7617 = new_Send((Optr)self, SMB_selectors, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray7619 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_printSelector_on_ = new_Symbol(L"printSelector:on:");
    // printSelector:on:. 
    Send PSend7621 = new_Send((Optr)self, SMB_printSelector_on_, 2, (Optr)VAR_selector_1_0, (Optr)VAR_aStream_0_0);
    Array PThreadedCode7620 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send2, (Optr)PSend7621, (Optr)&t_method_return);
    Block PBlock7618 = new_Block_with(PArray7619, empty_Array, PThreadedCode7620, 1, PSend7621);
    // do:. 
    Send PSend7622 = new_Send((Optr)PSend7617, SMB_do_, 1, (Optr)PBlock7618);
    Array PThreadedCode7601 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend7602, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7603, (Optr)&t_push_closure, (Optr)PBlock7604, (Optr)&t_send1, (Optr)PSend7615, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend7616, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7617, (Optr)&t_push_closure, (Optr)PBlock7618, (Optr)&t_send1, (Optr)PSend7622, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7598 = new_Method_with(PArray7599, PArray7600, empty_Array, PThreadedCode7601, 5, PSend7602, PSend7615, PSend7616, PSend7622, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7598, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_probeCount() {
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    Array PThreadedCode7624 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_probeCount, (Optr)&t_method_return);
    Method PMethod7623 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7624, 1, slot_Collection_Benchmark_MultiDictBenchmark_probeCount);
    
    MethodClosure MC_SMB_probeCount = new_MethodClosure((Method)PMethod7623, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_probeCount, MC_SMB_probeCount);
}


static void init_SMB_selectors() {
    Symbol SMB_selectors = new_Symbol(L"selectors");
    Variable VAR_selectors_0_0 = new_Variable_named(L"selectors", 0);
    Array PArray7626 = new_Array_with(1, (Optr)VAR_selectors_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7629 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign7628 = new_Assign((Optr)VAR_selectors_0_0, (Optr)PSend7629);
    Symbol  SMB_benchAtPut = new_Symbol(L"benchAtPut");
    Symbol SMB_add_ = new_Symbol(L"add:");
    Constant SMB_benchAtPut_Const = new_Constant((Optr)SMB_benchAtPut);
    // add:. 
    Send PSend7630 = new_Send((Optr)VAR_selectors_0_0, SMB_add_, 1, (Optr)SMB_benchAtPut_Const);
    Symbol  SMB_benchIncludes = new_Symbol(L"benchIncludes");
    Constant SMB_benchIncludes_Const = new_Constant((Optr)SMB_benchIncludes);
    // add:. 
    Send PSend7631 = new_Send((Optr)VAR_selectors_0_0, SMB_add_, 1, (Optr)SMB_benchIncludes_Const);
    Symbol  SMB_benchIncludesKey = new_Symbol(L"benchIncludesKey");
    Constant SMB_benchIncludesKey_Const = new_Constant((Optr)SMB_benchIncludesKey);
    // add:. 
    Send PSend7632 = new_Send((Optr)VAR_selectors_0_0, SMB_add_, 1, (Optr)SMB_benchIncludesKey_Const);
    Symbol  SMB_benchDo = new_Symbol(L"benchDo");
    Constant SMB_benchDo_Const = new_Constant((Optr)SMB_benchDo);
    // add:. 
    Send PSend7633 = new_Send((Optr)VAR_selectors_0_0, SMB_add_, 1, (Optr)SMB_benchDo_Const);
    Array PThreadedCode7627 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign7628, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend7629, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selectors_0_0, (Optr)&t_push1, (Optr)SMB_benchAtPut, (Optr)&t_send1, (Optr)PSend7630, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selectors_0_0, (Optr)&t_push1, (Optr)SMB_benchIncludes, (Optr)&t_send1, (Optr)PSend7631, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selectors_0_0, (Optr)&t_push1, (Optr)SMB_benchIncludesKey, (Optr)&t_send1, (Optr)PSend7632, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selectors_0_0, (Optr)&t_push1, (Optr)SMB_benchDo, (Optr)&t_send1, (Optr)PSend7633, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selectors_0_0, (Optr)&t_method_return);
    Method PMethod7625 = new_Method_with(empty_Array, PArray7626, empty_Array, PThreadedCode7627, 6, PAssign7628, PSend7630, PSend7631, PSend7632, PSend7633, VAR_selectors_0_0);
    
    MethodClosure MC_SMB_selectors = new_MethodClosure((Method)PMethod7625, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_selectors, MC_SMB_selectors);
}


static void init_SMB_probeCount_() {
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray7635 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Assign PAssign7637 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_probeCount, (Optr)VAR_aValue_0_0);
    Array PThreadedCode7636 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7637, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7634 = new_Method_with(PArray7635, empty_Array, empty_Array, PThreadedCode7636, 2, PAssign7637, self);
    
    MethodClosure MC_SMB_probeCount_ = new_MethodClosure((Method)PMethod7634, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_probeCount_, MC_SMB_probeCount_);
}


static void init_SMB_sizes() {
    Symbol SMB_sizes = new_Symbol(L"sizes");
    Variable VAR_sizes_0_0 = new_Variable_named(L"sizes", 0);
    Array PArray7639 = new_Array_with(1, (Optr)VAR_sizes_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7642 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign7641 = new_Assign((Optr)VAR_sizes_0_0, (Optr)PSend7642);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_add_ = new_Symbol(L"add:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // add:. 
    Send PSend7643 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_10_Const);
    SmallInt int_25 = new_SmallInt(25);
    Constant int_25_Const = new_Constant((Optr)int_25);
    // add:. 
    Send PSend7644 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_25_Const);
    SmallInt int_50 = new_SmallInt(50);
    Constant int_50_Const = new_Constant((Optr)int_50);
    // add:. 
    Send PSend7645 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_50_Const);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // add:. 
    Send PSend7646 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_100_Const);
    SmallInt int_250 = new_SmallInt(250);
    Constant int_250_Const = new_Constant((Optr)int_250);
    // add:. 
    Send PSend7647 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_250_Const);
    SmallInt int_500 = new_SmallInt(500);
    Constant int_500_Const = new_Constant((Optr)int_500);
    // add:. 
    Send PSend7648 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_500_Const);
    SmallInt int_1000 = new_SmallInt(1000);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    // add:. 
    Send PSend7649 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_1000_Const);
    SmallInt int_2500 = new_SmallInt(2500);
    Constant int_2500_Const = new_Constant((Optr)int_2500);
    // add:. 
    Send PSend7650 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_2500_Const);
    SmallInt int_5000 = new_SmallInt(5000);
    Constant int_5000_Const = new_Constant((Optr)int_5000);
    // add:. 
    Send PSend7651 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_5000_Const);
    SmallInt int_10000 = new_SmallInt(10000);
    Constant int_10000_Const = new_Constant((Optr)int_10000);
    // add:. 
    Send PSend7652 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_10000_Const);
    Array PThreadedCode7640 = instantiate_Array_with(ThreadedCode_Class, 0, 81, (Optr)&t_push1, (Optr)PAssign7641, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend7642, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend7643, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_25, (Optr)&t_send1, (Optr)PSend7644, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_50, (Optr)&t_send1, (Optr)PSend7645, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend7646, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_250, (Optr)&t_send1, (Optr)PSend7647, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_send1, (Optr)PSend7648, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_send1, (Optr)PSend7649, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_2500, (Optr)&t_send1, (Optr)PSend7650, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_5000, (Optr)&t_send1, (Optr)PSend7651, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_10000, (Optr)&t_send1, (Optr)PSend7652, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_method_return);
    Method PMethod7638 = new_Method_with(empty_Array, PArray7639, empty_Array, PThreadedCode7640, 12, PAssign7641, PSend7643, PSend7644, PSend7645, PSend7646, PSend7647, PSend7648, PSend7649, PSend7650, PSend7651, PSend7652, VAR_sizes_0_0);
    
    MethodClosure MC_SMB_sizes = new_MethodClosure((Method)PMethod7638, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_sizes, MC_SMB_sizes);
}


static void init_SMB_keyBlock() {
    Symbol SMB_keyBlock = new_Symbol(L"keyBlock");
    Array PThreadedCode7654 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_keyBlock, (Optr)&t_method_return);
    Method PMethod7653 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7654, 1, slot_Collection_Benchmark_MultiDictBenchmark_keyBlock);
    
    MethodClosure MC_SMB_keyBlock = new_MethodClosure((Method)PMethod7653, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_keyBlock, MC_SMB_keyBlock);
}


static void init_SMB_run_dictSize_() {
    Symbol SMB_run_dictSize_ = new_Symbol(L"run:dictSize:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray7656 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_size_0_1);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray7657 = new_Array_with(1, (Optr)VAR_result_0_2);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_runSelector_dictSize_benchmark_results_ = new_Symbol(L"runSelector:dictSize:benchmark:results:");
    // runSelector:dictSize:benchmark:results:. 
    Send PSend7662 = new_Send((Optr)self, SMB_runSelector_dictSize_benchmark_results_, 4, (Optr)VAR_selector_0_0, (Optr)VAR_size_0_1, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stBenchmark, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults);
    Array PThreadedCode7661 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stBenchmark, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults, (Optr)&t_send4, (Optr)PSend7662, (Optr)&t_block_return);
    Block PBlock7660 = new_Block_with(empty_Array, empty_Array, PThreadedCode7661, 1, PSend7662);
    // ifTrue:. 
    Send PSend7659 = new_Send((Optr)slot_Collection_Benchmark_MultiDictBenchmark_useStDict, SMB_ifTrue_, 1, (Optr)PBlock7660);
    // runSelector:dictSize:benchmark:results:. 
    Send PSend7663 = new_Send((Optr)self, SMB_runSelector_dictSize_benchmark_results_, 4, (Optr)VAR_selector_0_0, (Optr)VAR_size_0_1, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pBenchmark, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults);
    Array PThreadedCode7658 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_useStDict, (Optr)&t_send_ifTrue_, (Optr)PSend7659, (Optr)PBlock7660, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pBenchmark, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults, (Optr)&t_send4, (Optr)PSend7663, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7655 = new_Method_with(PArray7656, PArray7657, empty_Array, PThreadedCode7658, 3, PSend7659, PSend7663, self);
    
    MethodClosure MC_SMB_run_dictSize_ = new_MethodClosure((Method)PMethod7655, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_run_dictSize_, MC_SMB_run_dictSize_);
}


static void init_SMB_printResults_selector_named_on_() {
    Symbol SMB_printResults_selector_named_on_ = new_Symbol(L"printResults:selector:named:on:");
    Variable VAR_results_0_0 = new_Variable_named(L"results", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Variable VAR_name_0_2 = new_Variable_named(L"name", 0);
    Variable VAR_aStream_0_3 = new_Variable_named(L"aStream", 0);
    Array PArray7665 = new_Array_with(4, (Optr)VAR_results_0_0, (Optr)VAR_selector_0_1, (Optr)VAR_name_0_2, (Optr)VAR_aStream_0_3);
    Variable VAR_runs_0_4 = new_Variable_named(L"runs", 0);
    Array PArray7666 = new_Array_with(1, (Optr)VAR_runs_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7669 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray7672 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7674 = new_Send((Optr)VAR__receiver__2_0, SMB__shiftLeft_, 1, (Optr)VAR_name_0_2);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend7675 = new_Send((Optr)VAR__receiver__2_0, SMB_tab, 0);
    Array PThreadedCode7673 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_name_0_2, (Optr)&t_send1, (Optr)PSend7674, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend7675, (Optr)&t_method_return);
    Block PBlock7671 = new_Block_with(PArray7672, empty_Array, PThreadedCode7673, 2, PSend7674, PSend7675);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7676 = new_Send((Optr)PBlock7671, SMB_value_, 1, (Optr)VAR_aStream_0_3);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7681 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7680 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7681, (Optr)&t_block_return);
    Block PBlock7679 = new_Block_with(empty_Array, empty_Array, PThreadedCode7680, 1, PSend7681);
    // at:ifAbsent:. 
    Send PSend7678 = new_Send((Optr)VAR_results_0_0, SMB_at_ifAbsent_, 2, (Optr)VAR_selector_0_1, (Optr)PBlock7679);
    Assign PAssign7677 = new_Assign((Optr)VAR_runs_0_4, (Optr)PSend7678);
    Symbol SMB_sizes = new_Symbol(L"sizes");
    // sizes. 
    Send PSend7682 = new_Send((Optr)self, SMB_sizes, 0);
    Variable VAR_size_2_0 = new_Variable_named(L"size", 2);
    Array PArray7684 = new_Array_with(1, (Optr)VAR_size_2_0);
    Variable VAR_run_3_0 = new_Variable_named(L"run", 3);
    Array PArray7687 = new_Array_with(1, (Optr)VAR_run_3_0);
    Variable VAR__receiver__4_0 = new_Variable_named(L"_receiver_", 4);
    Array PArray7690 = new_Array_with(1, (Optr)VAR__receiver__4_0);
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend7692 = new_Send((Optr)VAR_run_3_0, SMB_average, 0);
    // <<. 
    Send PSend7693 = new_Send((Optr)VAR__receiver__4_0, SMB__shiftLeft_, 1, (Optr)PSend7692);
    // tab. 
    Send PSend7694 = new_Send((Optr)VAR__receiver__4_0, SMB_tab, 0);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend7695 = new_Send((Optr)VAR_run_3_0, SMB_stdev, 0);
    // <<. 
    Send PSend7696 = new_Send((Optr)VAR__receiver__4_0, SMB__shiftLeft_, 1, (Optr)PSend7695);
    // tab. 
    Send PSend7697 = new_Send((Optr)VAR__receiver__4_0, SMB_tab, 0);
    Array PThreadedCode7691 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_run_3_0, (Optr)&t_send0, (Optr)PSend7692, (Optr)&t_send1, (Optr)PSend7693, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_send0, (Optr)PSend7694, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_run_3_0, (Optr)&t_send0, (Optr)PSend7695, (Optr)&t_send1, (Optr)PSend7696, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_send0, (Optr)PSend7697, (Optr)&t_method_return);
    Block PBlock7689 = new_Block_with(PArray7690, empty_Array, PThreadedCode7691, 4, PSend7693, PSend7694, PSend7696, PSend7697);
    // value:. 
    Send PSend7698 = new_Send((Optr)PBlock7689, SMB_value_, 1, (Optr)VAR_aStream_0_3);
    Array PThreadedCode7688 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock7689, (Optr)&t_push_variable, (Optr)VAR_aStream_0_3, (Optr)&t_send1, (Optr)PSend7698, (Optr)&t_method_return);
    Block PBlock7686 = new_Block_with(PArray7687, empty_Array, PThreadedCode7688, 1, PSend7698);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend7699 = new_Send((Optr)VAR_runs_0_4, SMB_at_ifPresent_, 2, (Optr)VAR_size_2_0, (Optr)PBlock7686);
    Array PThreadedCode7685 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_runs_0_4, (Optr)&t_push_variable, (Optr)VAR_size_2_0, (Optr)&t_push_closure, (Optr)PBlock7686, (Optr)&t_send2, (Optr)PSend7699, (Optr)&t_method_return);
    Block PBlock7683 = new_Block_with(PArray7684, empty_Array, PThreadedCode7685, 1, PSend7699);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7700 = new_Send((Optr)PSend7682, SMB_do_, 1, (Optr)PBlock7683);
    Array PArray7702 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend7704 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    // lf. 
    Send PSend7705 = new_Send((Optr)VAR__receiver__2_0, SMB_lf, 0);
    Array PThreadedCode7703 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend7704, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend7705, (Optr)&t_method_return);
    Block PBlock7701 = new_Block_with(PArray7702, empty_Array, PThreadedCode7703, 2, PSend7704, PSend7705);
    // value:. 
    Send PSend7706 = new_Send((Optr)PBlock7701, SMB_value_, 1, (Optr)VAR_aStream_0_3);
    Array PThreadedCode7670 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_closure, (Optr)PBlock7671, (Optr)&t_push_variable, (Optr)VAR_aStream_0_3, (Optr)&t_send1, (Optr)PSend7676, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7677, (Optr)&t_push_variable, (Optr)VAR_results_0_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_push_closure, (Optr)PBlock7679, (Optr)&t_send2, (Optr)PSend7678, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7682, (Optr)&t_push_closure, (Optr)PBlock7683, (Optr)&t_send1, (Optr)PSend7700, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7701, (Optr)&t_push_variable, (Optr)VAR_aStream_0_3, (Optr)&t_send1, (Optr)PSend7706, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7668 = new_Block_with(PArray7669, empty_Array, PThreadedCode7670, 5, PSend7676, PAssign7677, PSend7700, PSend7706, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7707 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7668);
    Array PThreadedCode7667 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7668, (Optr)&t_send1, (Optr)PSend7707, (Optr)&t_method_return);
    Method PMethod7664 = new_Method_with(PArray7665, PArray7666, empty_Array, PThreadedCode7667, 1, PSend7707);
    
    MethodClosure MC_SMB_printResults_selector_named_on_ = new_MethodClosure((Method)PMethod7664, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_printResults_selector_named_on_, MC_SMB_printResults_selector_named_on_);
}


static void init_class_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7710 = new_Send((Optr)self, SMB_new, 0);
    // run. 
    Send PSend7711 = new_Send((Optr)PSend7710, SMB_run, 0);
    Array PThreadedCode7709 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7710, (Optr)&t_send0, (Optr)PSend7711, (Optr)&t_method_return);
    Method PMethod7708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7709, 1, PSend7711);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7708, HEADER(Collection_Benchmark_MultiDictBenchmark_Class));
    store_method(HEADER(Collection_Benchmark_MultiDictBenchmark_Class), SMB_run, MC_SMB_run);
}


static void init_class_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_probeCount_0_0 = new_Variable_named(L"probeCount", 0);
    Array PArray7713 = new_Array_with(1, (Optr)VAR_probeCount_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7716 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7718 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)VAR_probeCount_0_0);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7719 = new_Send((Optr)VAR__receiver__1_0, SMB_run, 0);
    Array PThreadedCode7717 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_probeCount_0_0, (Optr)&t_send1, (Optr)PSend7718, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7719, (Optr)&t_method_return);
    Block PBlock7715 = new_Block_with(PArray7716, empty_Array, PThreadedCode7717, 2, PSend7718, PSend7719);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7720 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7721 = new_Send((Optr)PBlock7715, SMB_value_, 1, (Optr)PSend7720);
    Array PThreadedCode7714 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock7715, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7720, (Optr)&t_send1, (Optr)PSend7721, (Optr)&t_method_return);
    Method PMethod7712 = new_Method_with(PArray7713, empty_Array, empty_Array, PThreadedCode7714, 1, PSend7721);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7712, HEADER(Collection_Benchmark_MultiDictBenchmark_Class));
    store_method(HEADER(Collection_Benchmark_MultiDictBenchmark_Class), SMB_run_, MC_SMB_run_);
}

void init_Collection_Benchmark_MultiDictBenchmark_layout() {
    layout_Collection_Benchmark_MultiDictBenchmark_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_MultiDictBenchmark = new_Symbol(L"MultiDictBenchmark");
    slot_Collection_Benchmark_MultiDictBenchmark_stResults = (Optr)new_Slot(0, L"stResults");
    slot_Collection_Benchmark_MultiDictBenchmark_pResults = (Optr)new_Slot(1, L"pResults");
    slot_Collection_Benchmark_MultiDictBenchmark_sResults = (Optr)new_Slot(2, L"sResults");
    slot_Collection_Benchmark_MultiDictBenchmark_stBenchmark = (Optr)new_Slot(3, L"stBenchmark");
    slot_Collection_Benchmark_MultiDictBenchmark_pBenchmark = (Optr)new_Slot(4, L"pBenchmark");
    slot_Collection_Benchmark_MultiDictBenchmark_sBenchmark = (Optr)new_Slot(5, L"sBenchmark");
    slot_Collection_Benchmark_MultiDictBenchmark_probeCount = (Optr)new_Slot(6, L"probeCount");
    slot_Collection_Benchmark_MultiDictBenchmark_keyBlock = (Optr)new_Slot(7, L"keyBlock");
    slot_Collection_Benchmark_MultiDictBenchmark_useStDict = (Optr)new_Slot(8, L"useStDict");
    slot_Collection_Benchmark_MultiDictBenchmark_randomized = (Optr)new_Slot(9, L"randomized");
    slot_Collection_Benchmark_MultiDictBenchmark_keyBlockGenerator = (Optr)new_Slot(10, L"keyBlockGenerator");
    layout_Collection_Benchmark_MultiDictBenchmark = (Optr)create_layout_with_vars(ObjectLayout_Class, 11);
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark)->values[0] = slot_Collection_Benchmark_MultiDictBenchmark_stResults; // stResults 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark)->values[1] = slot_Collection_Benchmark_MultiDictBenchmark_pResults; // pResults 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark)->values[2] = slot_Collection_Benchmark_MultiDictBenchmark_sResults; // sResults 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark)->values[3] = slot_Collection_Benchmark_MultiDictBenchmark_stBenchmark; // stBenchmark 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark)->values[4] = slot_Collection_Benchmark_MultiDictBenchmark_pBenchmark; // pBenchmark 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark)->values[5] = slot_Collection_Benchmark_MultiDictBenchmark_sBenchmark; // sBenchmark 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark)->values[6] = slot_Collection_Benchmark_MultiDictBenchmark_probeCount; // probeCount 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark)->values[7] = slot_Collection_Benchmark_MultiDictBenchmark_keyBlock; // keyBlock 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark)->values[8] = slot_Collection_Benchmark_MultiDictBenchmark_useStDict; // useStDict 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark)->values[9] = slot_Collection_Benchmark_MultiDictBenchmark_randomized; // randomized 
    ((Array)layout_Collection_Benchmark_MultiDictBenchmark)->values[10] = slot_Collection_Benchmark_MultiDictBenchmark_keyBlockGenerator; // keyBlockGenerator 
    Collection_Benchmark_MultiDictBenchmark_Class = (Class)new_Class(Object_Class, layout_Collection_Benchmark_MultiDictBenchmark_Class_class);
    Collection_Benchmark_MultiDictBenchmark_Class->layout = layout_Collection_Benchmark_MultiDictBenchmark;
    Collection_Benchmark_MultiDictBenchmark_Class->name = SMB_MultiDictBenchmark;
    
}

void init_Collection_Benchmark_MultiDictBenchmark_methods() {
    init_SMB_printSelector_on_();
    init_SMB_keyBlock_();
    init_SMB_runSelector_dictSize_benchmark_results_();
    init_SMB_keyBlockGenerator_();
    init_SMB_reset();
    init_SMB_run();
    init_SMB_keyBlockGenerator();
    init_SMB_run_();
    init_SMB_initialize();
    init_SMB_useStDict_();
    init_SMB_printOn_();
    init_SMB_probeCount();
    init_SMB_selectors();
    init_SMB_probeCount_();
    init_SMB_sizes();
    init_SMB_keyBlock();
    init_SMB_run_dictSize_();
    init_SMB_printResults_selector_named_on_();
    init_class_SMB_run();
    init_class_SMB_run_();
    
}