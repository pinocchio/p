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
    Array PArray7496 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_aStream_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7499 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7501 = new_Send((Optr)VAR_selector_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // copyFrom:to:. 
    Send PSend7502 = new_Send((Optr)VAR_selector_0_0, SMB_copyFrom_to_, 2, (Optr)int_6_Const, (Optr)PSend7501);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7503 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend7502);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend7504 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode7500 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send0, (Optr)PSend7501, (Optr)&t_send2, (Optr)PSend7502, (Optr)&t_send1, (Optr)PSend7503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7504, (Optr)&t_method_return);
    Block PBlock7498 = new_Block_with(PArray7499, empty_Array, PThreadedCode7500, 2, PSend7503, PSend7504);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7505 = new_Send((Optr)PBlock7498, SMB_value_, 1, (Optr)VAR_aStream_0_1);
    Symbol  SMB_Pinocchio = new_Symbol(L"Pinocchio");
    Symbol SMB_printResults_selector_named_on_ = new_Symbol(L"printResults:selector:named:on:");
    Constant SMB_Pinocchio_Const = new_Constant((Optr)SMB_Pinocchio);
    // printResults:selector:named:on:. 
    Send PSend7506 = new_Send((Optr)self, SMB_printResults_selector_named_on_, 4, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults, (Optr)VAR_selector_0_0, (Optr)SMB_Pinocchio_Const, (Optr)VAR_aStream_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol  SMB_Smalltalk = new_Symbol(L"Smalltalk");
    Constant SMB_Smalltalk_Const = new_Constant((Optr)SMB_Smalltalk);
    // printResults:selector:named:on:. 
    Send PSend7510 = new_Send((Optr)self, SMB_printResults_selector_named_on_, 4, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults, (Optr)VAR_selector_0_0, (Optr)SMB_Smalltalk_Const, (Optr)VAR_aStream_0_1);
    Array PThreadedCode7509 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_Smalltalk, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send4, (Optr)PSend7510, (Optr)&t_block_return);
    Block PBlock7508 = new_Block_with(empty_Array, empty_Array, PThreadedCode7509, 1, PSend7510);
    // ifTrue:. 
    Send PSend7507 = new_Send((Optr)slot_Collection_Benchmark_MultiDictBenchmark_useStDict, SMB_ifTrue_, 1, (Optr)PBlock7508);
    Array PThreadedCode7497 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_closure, (Optr)PBlock7498, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send1, (Optr)PSend7505, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_Pinocchio, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send4, (Optr)PSend7506, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_useStDict, (Optr)&t_send_ifTrue_, (Optr)PSend7507, (Optr)PBlock7508, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7495 = new_Method_with(PArray7496, empty_Array, empty_Array, PThreadedCode7497, 4, PSend7505, PSend7506, PSend7507, self);
    
    MethodClosure MC_SMB_printSelector_on_ = new_MethodClosure((Method)PMethod7495, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_printSelector_on_, MC_SMB_printSelector_on_);
}


static void init_SMB_keyBlock_() {
    Symbol SMB_keyBlock_ = new_Symbol(L"keyBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7512 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7514 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_keyBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7513 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7514, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7511 = new_Method_with(PArray7512, empty_Array, empty_Array, PThreadedCode7513, 2, PAssign7514, self);
    
    MethodClosure MC_SMB_keyBlock_ = new_MethodClosure((Method)PMethod7511, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_keyBlock_, MC_SMB_keyBlock_);
}


static void init_SMB_runSelector_dictSize_benchmark_results_() {
    Symbol SMB_runSelector_dictSize_benchmark_results_ = new_Symbol(L"runSelector:dictSize:benchmark:results:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_benchmark_0_2 = new_Variable_named(L"benchmark", 0);
    Variable VAR_results_0_3 = new_Variable_named(L"results", 0);
    Array PArray7516 = new_Array_with(4, (Optr)VAR_selector_0_0, (Optr)VAR_size_0_1, (Optr)VAR_benchmark_0_2, (Optr)VAR_results_0_3);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray7517 = new_Array_with(1, (Optr)VAR_result_0_4);
    Symbol SMB_dictSize_ = new_Symbol(L"dictSize:");
    // dictSize:. 
    Send PSend7519 = new_Send((Optr)VAR_benchmark_0_2, SMB_dictSize_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend7520 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7521 = new_Send((Optr)VAR_benchmark_0_2, SMB_probeCount_, 1, (Optr)PSend7520);
    Symbol SMB_keyBlockGenerator_ = new_Symbol(L"keyBlockGenerator:");
    // keyBlockGenerator:. 
    Send PSend7522 = new_Send((Optr)self, SMB_keyBlockGenerator_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_keyBlock_ = new_Symbol(L"keyBlock:");
    // keyBlock:. 
    Send PSend7523 = new_Send((Optr)VAR_benchmark_0_2, SMB_keyBlock_, 1, (Optr)PSend7522);
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend7525 = new_Send((Optr)VAR_benchmark_0_2, SMB_run_, 1, (Optr)VAR_selector_0_0);
    Assign PAssign7524 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend7525);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7526 = new_Send((Optr)VAR_results_0_3, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7527 = new_Send((Optr)PSend7526, SMB_at_put_, 2, (Optr)VAR_size_0_1, (Optr)VAR_result_0_4);
    Array PThreadedCode7518 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_benchmark_0_2, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend7519, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_benchmark_0_2, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7520, (Optr)&t_send1, (Optr)PSend7521, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_benchmark_0_2, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend7522, (Optr)&t_send1, (Optr)PSend7523, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7524, (Optr)&t_push_variable, (Optr)VAR_benchmark_0_2, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7525, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_results_0_3, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7526, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_send2, (Optr)PSend7527, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7515 = new_Method_with(PArray7516, PArray7517, empty_Array, PThreadedCode7518, 6, PSend7519, PSend7521, PSend7523, PAssign7524, PSend7527, self);
    
    MethodClosure MC_SMB_runSelector_dictSize_benchmark_results_ = new_MethodClosure((Method)PMethod7515, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_runSelector_dictSize_benchmark_results_, MC_SMB_runSelector_dictSize_benchmark_results_);
}


static void init_SMB_keyBlockGenerator_() {
    Symbol SMB_keyBlockGenerator_ = new_Symbol(L"keyBlockGenerator:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7529 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7531 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_keyBlockGenerator, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7530 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7531, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7528 = new_Method_with(PArray7529, empty_Array, empty_Array, PThreadedCode7530, 2, PAssign7531, self);
    
    MethodClosure MC_SMB_keyBlockGenerator_ = new_MethodClosure((Method)PMethod7528, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_keyBlockGenerator_, MC_SMB_keyBlockGenerator_);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7535 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign7534 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults, (Optr)PSend7535);
    // new. 
    Send PSend7537 = new_Send((Optr)PBSTDictionary_classReference, SMB_new, 0);
    Assign PAssign7536 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_stBenchmark, (Optr)PSend7537);
    // new. 
    Send PSend7539 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign7538 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults, (Optr)PSend7539);
    // new. 
    Send PSend7541 = new_Send((Optr)PBDictionary_classReference, SMB_new, 0);
    Assign PAssign7540 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_pBenchmark, (Optr)PSend7541);
    Array PThreadedCode7533 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign7534, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7535, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7536, (Optr)&t_push_class_reference, (Optr)PBSTDictionary_classReference, (Optr)&t_send0, (Optr)PSend7537, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7538, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7539, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7540, (Optr)&t_push_class_reference, (Optr)PBDictionary_classReference, (Optr)&t_send0, (Optr)PSend7541, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7532 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7533, 5, PAssign7534, PAssign7536, PAssign7538, PAssign7540, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod7532, Collection_Benchmark_MultiDictBenchmark_Class);
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
    Send PSend7544 = new_Send((Optr)self, SMB_selectors, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray7546 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend7548 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode7547 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7548, (Optr)&t_method_return);
    Block PBlock7545 = new_Block_with(PArray7546, empty_Array, PThreadedCode7547, 1, PSend7548);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7549 = new_Send((Optr)PSend7544, SMB_do_, 1, (Optr)PBlock7545);
    Array PThreadedCode7543 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7544, (Optr)&t_push_closure, (Optr)PBlock7545, (Optr)&t_send1, (Optr)PSend7549, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7542 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7543, 2, PSend7549, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7542, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_keyBlockGenerator() {
    Symbol SMB_keyBlockGenerator = new_Symbol(L"keyBlockGenerator");
    Array PThreadedCode7551 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_keyBlockGenerator, (Optr)&t_method_return);
    Method PMethod7550 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7551, 1, slot_Collection_Benchmark_MultiDictBenchmark_keyBlockGenerator);
    
    MethodClosure MC_SMB_keyBlockGenerator = new_MethodClosure((Method)PMethod7550, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_keyBlockGenerator, MC_SMB_keyBlockGenerator);
}


static void init_SMB_run_() {
    /*
    run: probeCount
// 	^ self new probeCount: probeCount; run
    */
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7553 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7555 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7556 = new_Send((Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)PSend7555);
    // new. 
    Send PSend7557 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // at:put:. 
    Send PSend7558 = new_Send((Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)PSend7557);
    Symbol SMB_sizes = new_Symbol(L"sizes");
    // sizes. 
    Send PSend7559 = new_Send((Optr)self, SMB_sizes, 0);
    Variable VAR_size_1_0 = new_Variable_named(L"size", 1);
    Array PArray7561 = new_Array_with(1, (Optr)VAR_size_1_0);
    Symbol SMB_run_dictSize_ = new_Symbol(L"run:dictSize:");
    // run:dictSize:. 
    Send PSend7563 = new_Send((Optr)self, SMB_run_dictSize_, 2, (Optr)VAR_selector_0_0, (Optr)VAR_size_1_0);
    Array PThreadedCode7562 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_size_1_0, (Optr)&t_send2, (Optr)PSend7563, (Optr)&t_method_return);
    Block PBlock7560 = new_Block_with(PArray7561, empty_Array, PThreadedCode7562, 1, PSend7563);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7564 = new_Send((Optr)PSend7559, SMB_do_, 1, (Optr)PBlock7560);
    Array PThreadedCode7554 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7555, (Optr)&t_send2, (Optr)PSend7556, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7557, (Optr)&t_send2, (Optr)PSend7558, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7559, (Optr)&t_push_closure, (Optr)PBlock7560, (Optr)&t_send1, (Optr)PSend7564, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7552 = new_Method_with(PArray7553, empty_Array, empty_Array, PThreadedCode7554, 4, PSend7556, PSend7558, PSend7564, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7552, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    Assign PAssign7567 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_probeCount, (Optr)int_30_Const);
    Assign PAssign7568 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_useStDict, (Optr)true_Const);
    Assign PAssign7569 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_randomized, (Optr)false_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7572 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_keyBlock = new_Symbol(L"keyBlock");
    // keyBlock. 
    Send PSend7574 = new_Send((Optr)self, SMB_keyBlock, 0);
    Array PThreadedCode7573 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7574, (Optr)&t_method_return);
    Block PBlock7571 = new_Block_with(PArray7572, empty_Array, PThreadedCode7573, 1, PSend7574);
    Assign PAssign7570 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_keyBlockGenerator, (Optr)PBlock7571);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend7575 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode7566 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign7567, (Optr)&t_push1, (Optr)int_30, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7568, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7569, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7570, (Optr)&t_push_closure, (Optr)PBlock7571, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7575, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7565 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7566, 6, PAssign7567, PAssign7568, PAssign7569, PAssign7570, PSend7575, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7565, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_useStDict_() {
    Symbol SMB_useStDict_ = new_Symbol(L"useStDict:");
    Variable VAR_aBool_0_0 = new_Variable_named(L"aBool", 0);
    Array PArray7577 = new_Array_with(1, (Optr)VAR_aBool_0_0);
    Assign PAssign7579 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_useStDict, (Optr)VAR_aBool_0_0);
    Array PThreadedCode7578 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7579, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7576 = new_Method_with(PArray7577, empty_Array, empty_Array, PThreadedCode7578, 2, PAssign7579, self);
    
    MethodClosure MC_SMB_useStDict_ = new_MethodClosure((Method)PMethod7576, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_useStDict_, MC_SMB_useStDict_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7581 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_pRun_0_1 = new_Variable_named(L"pRun", 0);
    Variable VAR_sRun_0_2 = new_Variable_named(L"sRun", 0);
    Array PArray7582 = new_Array_with(2, (Optr)VAR_pRun_0_1, (Optr)VAR_sRun_0_2);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend7584 = new_Send((Optr)VAR_aStream_0_0, SMB_tab, 0);
    Symbol SMB_sizes = new_Symbol(L"sizes");
    // sizes. 
    Send PSend7585 = new_Send((Optr)self, SMB_sizes, 0);
    Variable VAR_size_1_0 = new_Variable_named(L"size", 1);
    Array PArray7587 = new_Array_with(1, (Optr)VAR_size_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray7590 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend7592 = new_Send((Optr)VAR_size_1_0, SMB_asString, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7593 = new_Send((Optr)VAR__receiver__2_0, SMB__shiftLeft_, 1, (Optr)PSend7592);
    // tab. 
    Send PSend7594 = new_Send((Optr)VAR__receiver__2_0, SMB_tab, 0);
    // tab. 
    Send PSend7595 = new_Send((Optr)VAR__receiver__2_0, SMB_tab, 0);
    Array PThreadedCode7591 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_size_1_0, (Optr)&t_send0, (Optr)PSend7592, (Optr)&t_send1, (Optr)PSend7593, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend7594, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend7595, (Optr)&t_method_return);
    Block PBlock7589 = new_Block_with(PArray7590, empty_Array, PThreadedCode7591, 3, PSend7593, PSend7594, PSend7595);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7596 = new_Send((Optr)PBlock7589, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode7588 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock7589, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7596, (Optr)&t_method_return);
    Block PBlock7586 = new_Block_with(PArray7587, empty_Array, PThreadedCode7588, 1, PSend7596);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7597 = new_Send((Optr)PSend7585, SMB_do_, 1, (Optr)PBlock7586);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend7598 = new_Send((Optr)VAR_aStream_0_0, SMB_lf, 0);
    Symbol SMB_selectors = new_Symbol(L"selectors");
    // selectors. 
    Send PSend7599 = new_Send((Optr)self, SMB_selectors, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray7601 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_printSelector_on_ = new_Symbol(L"printSelector:on:");
    // printSelector:on:. 
    Send PSend7603 = new_Send((Optr)self, SMB_printSelector_on_, 2, (Optr)VAR_selector_1_0, (Optr)VAR_aStream_0_0);
    Array PThreadedCode7602 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send2, (Optr)PSend7603, (Optr)&t_method_return);
    Block PBlock7600 = new_Block_with(PArray7601, empty_Array, PThreadedCode7602, 1, PSend7603);
    // do:. 
    Send PSend7604 = new_Send((Optr)PSend7599, SMB_do_, 1, (Optr)PBlock7600);
    Array PThreadedCode7583 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend7584, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7585, (Optr)&t_push_closure, (Optr)PBlock7586, (Optr)&t_send1, (Optr)PSend7597, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend7598, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7599, (Optr)&t_push_closure, (Optr)PBlock7600, (Optr)&t_send1, (Optr)PSend7604, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7580 = new_Method_with(PArray7581, PArray7582, empty_Array, PThreadedCode7583, 5, PSend7584, PSend7597, PSend7598, PSend7604, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7580, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_probeCount() {
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    Array PThreadedCode7606 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_probeCount, (Optr)&t_method_return);
    Method PMethod7605 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7606, 1, slot_Collection_Benchmark_MultiDictBenchmark_probeCount);
    
    MethodClosure MC_SMB_probeCount = new_MethodClosure((Method)PMethod7605, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_probeCount, MC_SMB_probeCount);
}


static void init_SMB_selectors() {
    Symbol SMB_selectors = new_Symbol(L"selectors");
    Variable VAR_selectors_0_0 = new_Variable_named(L"selectors", 0);
    Array PArray7608 = new_Array_with(1, (Optr)VAR_selectors_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7611 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign7610 = new_Assign((Optr)VAR_selectors_0_0, (Optr)PSend7611);
    Symbol  SMB_benchAtPut = new_Symbol(L"benchAtPut");
    Symbol SMB_add_ = new_Symbol(L"add:");
    Constant SMB_benchAtPut_Const = new_Constant((Optr)SMB_benchAtPut);
    // add:. 
    Send PSend7612 = new_Send((Optr)VAR_selectors_0_0, SMB_add_, 1, (Optr)SMB_benchAtPut_Const);
    Symbol  SMB_benchIncludes = new_Symbol(L"benchIncludes");
    Constant SMB_benchIncludes_Const = new_Constant((Optr)SMB_benchIncludes);
    // add:. 
    Send PSend7613 = new_Send((Optr)VAR_selectors_0_0, SMB_add_, 1, (Optr)SMB_benchIncludes_Const);
    Symbol  SMB_benchIncludesKey = new_Symbol(L"benchIncludesKey");
    Constant SMB_benchIncludesKey_Const = new_Constant((Optr)SMB_benchIncludesKey);
    // add:. 
    Send PSend7614 = new_Send((Optr)VAR_selectors_0_0, SMB_add_, 1, (Optr)SMB_benchIncludesKey_Const);
    Symbol  SMB_benchDo = new_Symbol(L"benchDo");
    Constant SMB_benchDo_Const = new_Constant((Optr)SMB_benchDo);
    // add:. 
    Send PSend7615 = new_Send((Optr)VAR_selectors_0_0, SMB_add_, 1, (Optr)SMB_benchDo_Const);
    Array PThreadedCode7609 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign7610, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend7611, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selectors_0_0, (Optr)&t_push1, (Optr)SMB_benchAtPut, (Optr)&t_send1, (Optr)PSend7612, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selectors_0_0, (Optr)&t_push1, (Optr)SMB_benchIncludes, (Optr)&t_send1, (Optr)PSend7613, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selectors_0_0, (Optr)&t_push1, (Optr)SMB_benchIncludesKey, (Optr)&t_send1, (Optr)PSend7614, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selectors_0_0, (Optr)&t_push1, (Optr)SMB_benchDo, (Optr)&t_send1, (Optr)PSend7615, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selectors_0_0, (Optr)&t_method_return);
    Method PMethod7607 = new_Method_with(empty_Array, PArray7608, empty_Array, PThreadedCode7609, 6, PAssign7610, PSend7612, PSend7613, PSend7614, PSend7615, VAR_selectors_0_0);
    
    MethodClosure MC_SMB_selectors = new_MethodClosure((Method)PMethod7607, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_selectors, MC_SMB_selectors);
}


static void init_SMB_probeCount_() {
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray7617 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Assign PAssign7619 = new_Assign((Optr)slot_Collection_Benchmark_MultiDictBenchmark_probeCount, (Optr)VAR_aValue_0_0);
    Array PThreadedCode7618 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7619, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7616 = new_Method_with(PArray7617, empty_Array, empty_Array, PThreadedCode7618, 2, PAssign7619, self);
    
    MethodClosure MC_SMB_probeCount_ = new_MethodClosure((Method)PMethod7616, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_probeCount_, MC_SMB_probeCount_);
}


static void init_SMB_sizes() {
    Symbol SMB_sizes = new_Symbol(L"sizes");
    Variable VAR_sizes_0_0 = new_Variable_named(L"sizes", 0);
    Array PArray7621 = new_Array_with(1, (Optr)VAR_sizes_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7624 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign7623 = new_Assign((Optr)VAR_sizes_0_0, (Optr)PSend7624);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_add_ = new_Symbol(L"add:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // add:. 
    Send PSend7625 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_10_Const);
    SmallInt int_25 = new_SmallInt(25);
    Constant int_25_Const = new_Constant((Optr)int_25);
    // add:. 
    Send PSend7626 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_25_Const);
    SmallInt int_50 = new_SmallInt(50);
    Constant int_50_Const = new_Constant((Optr)int_50);
    // add:. 
    Send PSend7627 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_50_Const);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // add:. 
    Send PSend7628 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_100_Const);
    SmallInt int_250 = new_SmallInt(250);
    Constant int_250_Const = new_Constant((Optr)int_250);
    // add:. 
    Send PSend7629 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_250_Const);
    SmallInt int_500 = new_SmallInt(500);
    Constant int_500_Const = new_Constant((Optr)int_500);
    // add:. 
    Send PSend7630 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_500_Const);
    SmallInt int_1000 = new_SmallInt(1000);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    // add:. 
    Send PSend7631 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_1000_Const);
    SmallInt int_2500 = new_SmallInt(2500);
    Constant int_2500_Const = new_Constant((Optr)int_2500);
    // add:. 
    Send PSend7632 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_2500_Const);
    SmallInt int_5000 = new_SmallInt(5000);
    Constant int_5000_Const = new_Constant((Optr)int_5000);
    // add:. 
    Send PSend7633 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_5000_Const);
    SmallInt int_10000 = new_SmallInt(10000);
    Constant int_10000_Const = new_Constant((Optr)int_10000);
    // add:. 
    Send PSend7634 = new_Send((Optr)VAR_sizes_0_0, SMB_add_, 1, (Optr)int_10000_Const);
    Array PThreadedCode7622 = instantiate_Array_with(ThreadedCode_Class, 0, 81, (Optr)&t_push1, (Optr)PAssign7623, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend7624, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend7625, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_25, (Optr)&t_send1, (Optr)PSend7626, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_50, (Optr)&t_send1, (Optr)PSend7627, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend7628, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_250, (Optr)&t_send1, (Optr)PSend7629, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_send1, (Optr)PSend7630, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_send1, (Optr)PSend7631, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_2500, (Optr)&t_send1, (Optr)PSend7632, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_5000, (Optr)&t_send1, (Optr)PSend7633, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_push1, (Optr)int_10000, (Optr)&t_send1, (Optr)PSend7634, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizes_0_0, (Optr)&t_method_return);
    Method PMethod7620 = new_Method_with(empty_Array, PArray7621, empty_Array, PThreadedCode7622, 12, PAssign7623, PSend7625, PSend7626, PSend7627, PSend7628, PSend7629, PSend7630, PSend7631, PSend7632, PSend7633, PSend7634, VAR_sizes_0_0);
    
    MethodClosure MC_SMB_sizes = new_MethodClosure((Method)PMethod7620, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_sizes, MC_SMB_sizes);
}


static void init_SMB_keyBlock() {
    Symbol SMB_keyBlock = new_Symbol(L"keyBlock");
    Array PThreadedCode7636 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_keyBlock, (Optr)&t_method_return);
    Method PMethod7635 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7636, 1, slot_Collection_Benchmark_MultiDictBenchmark_keyBlock);
    
    MethodClosure MC_SMB_keyBlock = new_MethodClosure((Method)PMethod7635, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_keyBlock, MC_SMB_keyBlock);
}


static void init_SMB_run_dictSize_() {
    Symbol SMB_run_dictSize_ = new_Symbol(L"run:dictSize:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray7638 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_size_0_1);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray7639 = new_Array_with(1, (Optr)VAR_result_0_2);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_runSelector_dictSize_benchmark_results_ = new_Symbol(L"runSelector:dictSize:benchmark:results:");
    // runSelector:dictSize:benchmark:results:. 
    Send PSend7644 = new_Send((Optr)self, SMB_runSelector_dictSize_benchmark_results_, 4, (Optr)VAR_selector_0_0, (Optr)VAR_size_0_1, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stBenchmark, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults);
    Array PThreadedCode7643 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stBenchmark, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_stResults, (Optr)&t_send4, (Optr)PSend7644, (Optr)&t_block_return);
    Block PBlock7642 = new_Block_with(empty_Array, empty_Array, PThreadedCode7643, 1, PSend7644);
    // ifTrue:. 
    Send PSend7641 = new_Send((Optr)slot_Collection_Benchmark_MultiDictBenchmark_useStDict, SMB_ifTrue_, 1, (Optr)PBlock7642);
    // runSelector:dictSize:benchmark:results:. 
    Send PSend7645 = new_Send((Optr)self, SMB_runSelector_dictSize_benchmark_results_, 4, (Optr)VAR_selector_0_0, (Optr)VAR_size_0_1, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pBenchmark, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults);
    Array PThreadedCode7640 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_useStDict, (Optr)&t_send_ifTrue_, (Optr)PSend7641, (Optr)PBlock7642, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pBenchmark, (Optr)&t_push_slot, (Optr)slot_Collection_Benchmark_MultiDictBenchmark_pResults, (Optr)&t_send4, (Optr)PSend7645, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7637 = new_Method_with(PArray7638, PArray7639, empty_Array, PThreadedCode7640, 3, PSend7641, PSend7645, self);
    
    MethodClosure MC_SMB_run_dictSize_ = new_MethodClosure((Method)PMethod7637, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_run_dictSize_, MC_SMB_run_dictSize_);
}


static void init_SMB_printResults_selector_named_on_() {
    Symbol SMB_printResults_selector_named_on_ = new_Symbol(L"printResults:selector:named:on:");
    Variable VAR_results_0_0 = new_Variable_named(L"results", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Variable VAR_name_0_2 = new_Variable_named(L"name", 0);
    Variable VAR_aStream_0_3 = new_Variable_named(L"aStream", 0);
    Array PArray7647 = new_Array_with(4, (Optr)VAR_results_0_0, (Optr)VAR_selector_0_1, (Optr)VAR_name_0_2, (Optr)VAR_aStream_0_3);
    Variable VAR_runs_0_4 = new_Variable_named(L"runs", 0);
    Variable VAR_run_0_5 = new_Variable_named(L"run", 0);
    Array PArray7648 = new_Array_with(2, (Optr)VAR_runs_0_4, (Optr)VAR_run_0_5);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7651 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7653 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_name_0_2);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend7654 = new_Send((Optr)VAR__receiver__1_0, SMB_tab, 0);
    Array PThreadedCode7652 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_name_0_2, (Optr)&t_send1, (Optr)PSend7653, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7654, (Optr)&t_method_return);
    Block PBlock7650 = new_Block_with(PArray7651, empty_Array, PThreadedCode7652, 2, PSend7653, PSend7654);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7655 = new_Send((Optr)PBlock7650, SMB_value_, 1, (Optr)VAR_aStream_0_3);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7657 = new_Send((Optr)VAR_results_0_0, SMB_at_, 1, (Optr)VAR_selector_0_1);
    Assign PAssign7656 = new_Assign((Optr)VAR_runs_0_4, (Optr)PSend7657);
    Symbol SMB_sizes = new_Symbol(L"sizes");
    // sizes. 
    Send PSend7658 = new_Send((Optr)self, SMB_sizes, 0);
    Variable VAR_size_1_0 = new_Variable_named(L"size", 1);
    Array PArray7660 = new_Array_with(1, (Optr)VAR_size_1_0);
    // at:. 
    Send PSend7663 = new_Send((Optr)VAR_runs_0_4, SMB_at_, 1, (Optr)VAR_size_1_0);
    Assign PAssign7662 = new_Assign((Optr)VAR_run_0_5, (Optr)PSend7663);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray7665 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend7667 = new_Send((Optr)VAR_run_0_5, SMB_average, 0);
    // <<. 
    Send PSend7668 = new_Send((Optr)VAR__receiver__2_0, SMB__shiftLeft_, 1, (Optr)PSend7667);
    // tab. 
    Send PSend7669 = new_Send((Optr)VAR__receiver__2_0, SMB_tab, 0);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend7670 = new_Send((Optr)VAR_run_0_5, SMB_stdev, 0);
    // <<. 
    Send PSend7671 = new_Send((Optr)VAR__receiver__2_0, SMB__shiftLeft_, 1, (Optr)PSend7670);
    // tab. 
    Send PSend7672 = new_Send((Optr)VAR__receiver__2_0, SMB_tab, 0);
    Array PThreadedCode7666 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_run_0_5, (Optr)&t_send0, (Optr)PSend7667, (Optr)&t_send1, (Optr)PSend7668, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend7669, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_run_0_5, (Optr)&t_send0, (Optr)PSend7670, (Optr)&t_send1, (Optr)PSend7671, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend7672, (Optr)&t_method_return);
    Block PBlock7664 = new_Block_with(PArray7665, empty_Array, PThreadedCode7666, 4, PSend7668, PSend7669, PSend7671, PSend7672);
    // value:. 
    Send PSend7673 = new_Send((Optr)PBlock7664, SMB_value_, 1, (Optr)VAR_aStream_0_3);
    Array PThreadedCode7661 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign7662, (Optr)&t_push_variable, (Optr)VAR_runs_0_4, (Optr)&t_push_variable, (Optr)VAR_size_1_0, (Optr)&t_send1, (Optr)PSend7663, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7664, (Optr)&t_push_variable, (Optr)VAR_aStream_0_3, (Optr)&t_send1, (Optr)PSend7673, (Optr)&t_method_return);
    Block PBlock7659 = new_Block_with(PArray7660, empty_Array, PThreadedCode7661, 2, PAssign7662, PSend7673);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7674 = new_Send((Optr)PSend7658, SMB_do_, 1, (Optr)PBlock7659);
    Array PArray7676 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend7678 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    // lf. 
    Send PSend7679 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode7677 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7678, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7679, (Optr)&t_method_return);
    Block PBlock7675 = new_Block_with(PArray7676, empty_Array, PThreadedCode7677, 2, PSend7678, PSend7679);
    // value:. 
    Send PSend7680 = new_Send((Optr)PBlock7675, SMB_value_, 1, (Optr)VAR_aStream_0_3);
    Array PThreadedCode7649 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_closure, (Optr)PBlock7650, (Optr)&t_push_variable, (Optr)VAR_aStream_0_3, (Optr)&t_send1, (Optr)PSend7655, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7656, (Optr)&t_push_variable, (Optr)VAR_results_0_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend7657, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7658, (Optr)&t_push_closure, (Optr)PBlock7659, (Optr)&t_send1, (Optr)PSend7674, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7675, (Optr)&t_push_variable, (Optr)VAR_aStream_0_3, (Optr)&t_send1, (Optr)PSend7680, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7646 = new_Method_with(PArray7647, PArray7648, empty_Array, PThreadedCode7649, 5, PSend7655, PAssign7656, PSend7674, PSend7680, self);
    
    MethodClosure MC_SMB_printResults_selector_named_on_ = new_MethodClosure((Method)PMethod7646, Collection_Benchmark_MultiDictBenchmark_Class);
    store_method(Collection_Benchmark_MultiDictBenchmark_Class, SMB_printResults_selector_named_on_, MC_SMB_printResults_selector_named_on_);
}


static void init_class_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7683 = new_Send((Optr)self, SMB_new, 0);
    // run. 
    Send PSend7684 = new_Send((Optr)PSend7683, SMB_run, 0);
    Array PThreadedCode7682 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7683, (Optr)&t_send0, (Optr)PSend7684, (Optr)&t_method_return);
    Method PMethod7681 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7682, 1, PSend7684);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7681, HEADER(Collection_Benchmark_MultiDictBenchmark_Class));
    store_method(HEADER(Collection_Benchmark_MultiDictBenchmark_Class), SMB_run, MC_SMB_run);
}


static void init_class_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_probeCount_0_0 = new_Variable_named(L"probeCount", 0);
    Array PArray7686 = new_Array_with(1, (Optr)VAR_probeCount_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7689 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7691 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)VAR_probeCount_0_0);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7692 = new_Send((Optr)VAR__receiver__1_0, SMB_run, 0);
    Array PThreadedCode7690 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_probeCount_0_0, (Optr)&t_send1, (Optr)PSend7691, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7692, (Optr)&t_method_return);
    Block PBlock7688 = new_Block_with(PArray7689, empty_Array, PThreadedCode7690, 2, PSend7691, PSend7692);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7693 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7694 = new_Send((Optr)PBlock7688, SMB_value_, 1, (Optr)PSend7693);
    Array PThreadedCode7687 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock7688, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7693, (Optr)&t_send1, (Optr)PSend7694, (Optr)&t_method_return);
    Method PMethod7685 = new_Method_with(PArray7686, empty_Array, empty_Array, PThreadedCode7687, 1, PSend7694);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7685, HEADER(Collection_Benchmark_MultiDictBenchmark_Class));
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