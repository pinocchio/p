#include <lib/class/PBenchmark/BenchmarkSuite.h>


Optr layout_PBenchmark_BenchmarkSuite_Class_class;
Optr slot_PBenchmark_BenchmarkSuite_runs;
Optr layout_PBenchmark_BenchmarkSuite;


static void init_SMB_stdevSquared() {
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray7008 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend7010 = new_Send((Optr)VAR_run_1_1, SMB_stdev, 0);
    Symbol SMB_squared = new_Symbol(L"squared");
    // squared. 
    Send PSend7011 = new_Send((Optr)PSend7010, SMB_squared, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7012 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend7011);
    Array PThreadedCode7009 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend7010, (Optr)&t_send0, (Optr)PSend7011, (Optr)&t_send1, (Optr)PSend7012, (Optr)&t_method_return);
    Block PBlock7007 = new_Block_with(PArray7008, empty_Array, PThreadedCode7009, 1, PSend7012);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend7013 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock7007);
    Array PThreadedCode7006 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock7007, (Optr)&t_send2, (Optr)PSend7013, (Optr)&t_method_return);
    Method PMethod7005 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7006, 1, PSend7013);
    
    MethodClosure MC_SMB_stdevSquared = new_MethodClosure((Method)PMethod7005, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdevSquared, MC_SMB_stdevSquared);
}


static void init_SMB_lastResult() {
    Symbol SMB_lastResult = new_Symbol(L"lastResult");
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend7016 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend7017 = new_Send((Optr)PSend7016, SMB_last, 0);
    Array PThreadedCode7015 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7016, (Optr)&t_send0, (Optr)PSend7017, (Optr)&t_method_return);
    Method PMethod7014 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7015, 1, PSend7017);
    
    MethodClosure MC_SMB_lastResult = new_MethodClosure((Method)PMethod7014, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_lastResult, MC_SMB_lastResult);
}


static void init_SMB_d() {
    Symbol SMB_d = new_Symbol(L"d");
    Array PThreadedCode7019 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7018 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7019, 1, self);
    
    MethodClosure MC_SMB_d = new_MethodClosure((Method)PMethod7018, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_d, MC_SMB_d);
}


static void init_SMB_runBaseBenchmark() {
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    Variable VAR_results_0_0 = new_Variable_named(L"results", 0);
    Variable VAR_base_0_1 = new_Variable_named(L"base", 0);
    Array PArray7021 = new_Array_with(2, (Optr)VAR_results_0_0, (Optr)VAR_base_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7024 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_baseBenchmark = new_Symbol(L"baseBenchmark");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_baseBenchmark_Const = new_Constant((Optr)SMB_baseBenchmark);
    // respondsTo:. 
    Send PSend7026 = new_Send((Optr)self, SMB_respondsTo_, 1, (Optr)SMB_baseBenchmark_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7030 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7029 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7030, (Optr)&t_block_return);
    Block PBlock7028 = new_Block_with(empty_Array, empty_Array, PThreadedCode7029, 1, PSend7030);
    // ifFalse:. 
    Send PSend7027 = new_Send((Optr)PSend7026, SMB_ifFalse_, 1, (Optr)PBlock7028);
    // baseBenchmark. 
    Send PSend7032 = new_Send((Optr)self, SMB_baseBenchmark, 0);
    Assign PAssign7031 = new_Assign((Optr)VAR_base_0_1, (Optr)PSend7032);
    // escape:. 
    Send PSend7035 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7034 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7035, (Optr)&t_block_return);
    Block PBlock7033 = new_Block_with(empty_Array, empty_Array, PThreadedCode7034, 1, PSend7035);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend7036 = new_Send((Optr)VAR_base_0_1, SMB_ifNil_, 1, (Optr)PBlock7033);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7037 = new_Send((Optr)VAR_base_0_1, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_7041 = new_String(L"baseBenchmark cannot be self");
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    Constant string_7041_Const = new_Constant((Optr)string_7041);
    // signal:. 
    Send PSend7042 = new_Send((Optr)Error_classReference, SMB_signal_, 1, (Optr)string_7041_Const);
    Array PThreadedCode7040 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push1, (Optr)string_7041, (Optr)&t_send1, (Optr)PSend7042, (Optr)&t_block_return);
    Block PBlock7039 = new_Block_with(empty_Array, empty_Array, PThreadedCode7040, 1, PSend7042);
    // ifTrue:. 
    Send PSend7038 = new_Send((Optr)PSend7037, SMB_ifTrue_, 1, (Optr)PBlock7039);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7043 = new_Send((Optr)VAR_base_0_1, SMB_runAll, 0);
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend7044 = new_Send((Optr)PSend7043, SMB_runs, 0);
    Variable VAR_selector_2_0 = new_Variable_named(L"selector", 2);
    Variable VAR_aRun_2_1 = new_Variable_named(L"aRun", 2);
    Array PArray7046 = new_Array_with(2, (Optr)VAR_selector_2_0, (Optr)VAR_aRun_2_1);
    // runs. 
    Send PSend7048 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7049 = new_Send((Optr)PSend7048, SMB_at_, 1, (Optr)VAR_selector_2_0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend7050 = new_Send((Optr)PSend7049, SMB_base_, 1, (Optr)VAR_aRun_2_1);
    Array PThreadedCode7047 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7048, (Optr)&t_push_variable, (Optr)VAR_selector_2_0, (Optr)&t_send1, (Optr)PSend7049, (Optr)&t_push_variable, (Optr)VAR_aRun_2_1, (Optr)&t_send1, (Optr)PSend7050, (Optr)&t_method_return);
    Block PBlock7045 = new_Block_with(PArray7046, empty_Array, PThreadedCode7047, 1, PSend7050);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend7051 = new_Send((Optr)PSend7044, SMB_keysAndValuesDo_, 1, (Optr)PBlock7045);
    Array PThreadedCode7025 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_baseBenchmark, (Optr)&t_send1, (Optr)PSend7026, (Optr)&t_send_ifFalse_, (Optr)PSend7027, (Optr)PBlock7028, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7031, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7032, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_push_closure, (Optr)PBlock7033, (Optr)&t_send1, (Optr)PSend7036, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7037, (Optr)&t_send_ifTrue_, (Optr)PSend7038, (Optr)PBlock7039, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_send0, (Optr)PSend7043, (Optr)&t_send0, (Optr)PSend7044, (Optr)&t_push_closure, (Optr)PBlock7045, (Optr)&t_send1, (Optr)PSend7051, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7023 = new_Block_with(PArray7024, empty_Array, PThreadedCode7025, 6, PSend7027, PAssign7031, PSend7036, PSend7038, PSend7051, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7052 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7023);
    Array PThreadedCode7022 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7023, (Optr)&t_send1, (Optr)PSend7052, (Optr)&t_method_return);
    Method PMethod7020 = new_Method_with(empty_Array, PArray7021, empty_Array, PThreadedCode7022, 1, PSend7052);
    
    MethodClosure MC_SMB_runBaseBenchmark = new_MethodClosure((Method)PMethod7020, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runBaseBenchmark, MC_SMB_runBaseBenchmark);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend7055 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_removeAll, 0);
    Array PThreadedCode7054 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7055, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7053 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7054, 2, PSend7055, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod7053, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_run() {
    /*
    run
// 	^ self run: 10
    */
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend7058 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7059 = new_Send((Optr)self, SMB_runAll, 0);
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    // runBaseBenchmark. 
    Send PSend7060 = new_Send((Optr)self, SMB_runBaseBenchmark, 0);
    Array PThreadedCode7057 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7058, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7059, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7060, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7057, 4, PSend7058, PSend7059, PSend7060, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7056, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Array PThreadedCode7062 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7061 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7062, 1, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7061, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7065 = new_Send((Optr)self, SMB_sum, 0);
    Array PThreadedCode7064 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7065, (Optr)&t_method_return);
    Method PMethod7063 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7064, 1, PSend7065);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod7063, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_total, MC_SMB_total);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray7067 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7070 = new_Array_with(1, (Optr)VAR_run_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend7072 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_run_1_0, (Optr)VAR_run_1_0);
    Array PThreadedCode7071 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_send2, (Optr)PSend7072, (Optr)&t_method_return);
    Block PBlock7069 = new_Block_with(PArray7070, empty_Array, PThreadedCode7071, 1, PSend7072);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7073 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7069);
    Array PThreadedCode7068 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7069, (Optr)&t_send1, (Optr)PSend7073, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7066 = new_Method_with(PArray7067, empty_Array, empty_Array, PThreadedCode7068, 2, PSend7073, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod7066, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Array PThreadedCode7075 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7074 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7075, 1, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7074, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_run_() {
    /*
    run: probeCount
// 	^ self new probeCount: probeCount; run; yourself
    */
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7077 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR_run_0_1 = new_Variable_named(L"run", 0);
    Array PArray7078 = new_Array_with(1, (Optr)VAR_run_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7081 = new_Send((Optr)PBenchmarkRun_classReference, SMB_new, 0);
    Assign PAssign7080 = new_Assign((Optr)VAR_run_0_1, (Optr)PSend7081);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7083 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend7085 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)self);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend7086 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7087 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)PSend7086);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend7088 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    // benchmarkNameForSelector:. 
    Send PSend7089 = new_Send((Optr)self, SMB_benchmarkNameForSelector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend7090 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)PSend7089);
    Array PThreadedCode7084 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7085, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7086, (Optr)&t_send1, (Optr)PSend7087, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7088, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7089, (Optr)&t_send1, (Optr)PSend7090, (Optr)&t_method_return);
    Block PBlock7082 = new_Block_with(PArray7083, empty_Array, PThreadedCode7084, 4, PSend7085, PSend7087, PSend7088, PSend7090);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7091 = new_Send((Optr)PBlock7082, SMB_value_, 1, (Optr)VAR_run_0_1);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7092 = new_Send((Optr)VAR_run_0_1, SMB_run, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7093 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)VAR_run_0_1);
    Array PThreadedCode7079 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign7080, (Optr)&t_push_class_reference, (Optr)PBenchmarkRun_classReference, (Optr)&t_send0, (Optr)PSend7081, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7082, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send1, (Optr)PSend7091, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send0, (Optr)PSend7092, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send2, (Optr)PSend7093, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_method_return);
    Method PMethod7076 = new_Method_with(PArray7077, PArray7078, empty_Array, PThreadedCode7079, 5, PAssign7080, PSend7091, PSend7092, PSend7093, VAR_run_0_1);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7076, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7096 = new_Send((Optr)self, SMB_sum, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7097 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7098 = new_Send((Optr)PSend7097, SMB_asFloat, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend7099 = new_Send((Optr)PSend7096, SMB__divide_, 1, (Optr)PSend7098);
    Array PThreadedCode7095 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7096, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7097, (Optr)&t_send0, (Optr)PSend7098, (Optr)&t_send1, (Optr)PSend7099, (Optr)&t_method_return);
    Method PMethod7094 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7095, 1, PSend7099);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod7094, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper7102 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7104 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign7103 = new_Assign((Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)PSend7104);
    Array PThreadedCode7101 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7102, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7103, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7104, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7100 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7101, 3, PSuper7102, PAssign7103, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7100, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7106 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7108 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend7109 = new_Send((Optr)PSend7108, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7110 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend7109);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7111 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend7112 = new_Send((Optr)PSend7111, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_7116 = new_String(L": ");
    Constant string_7116_Const = new_Constant((Optr)string_7116);
    // <<. 
    Send PSend7117 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_7116_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper7118 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode7115 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_7116, (Optr)&t_send1, (Optr)PSend7117, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper7118, (Optr)&t_block_return);
    Block PBlock7114 = new_Block_with(empty_Array, empty_Array, PThreadedCode7115, 2, PSend7117, PSuper7118);
    // ifTrue:. 
    Send PSend7113 = new_Send((Optr)PSend7112, SMB_ifTrue_, 1, (Optr)PBlock7114);
    Array PThreadedCode7107 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7108, (Optr)&t_send0, (Optr)PSend7109, (Optr)&t_send1, (Optr)PSend7110, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7111, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7112, (Optr)&t_send_ifTrue_, (Optr)PSend7113, (Optr)PBlock7114, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7105 = new_Method_with(PArray7106, empty_Array, empty_Array, PThreadedCode7107, 3, PSend7110, PSend7113, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod7105, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7120 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend7122 = new_Send((Optr)self, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7124 = new_Array_with(1, (Optr)VAR_run_1_0);
    // printOn:. 
    Send PSend7126 = new_Send((Optr)VAR_run_1_0, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4728 = new_Character(L' ');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_4728_Const = new_Constant((Optr)char_4728);
    // <<. 
    Send PSend7127 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4728_Const);
    Array PThreadedCode7125 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7126, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4728, (Optr)&t_send1, (Optr)PSend7127, (Optr)&t_method_return);
    Block PBlock7123 = new_Block_with(PArray7124, empty_Array, PThreadedCode7125, 2, PSend7126, PSend7127);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7128 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7123);
    Array PThreadedCode7121 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7122, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7123, (Optr)&t_send1, (Optr)PSend7128, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7119 = new_Method_with(PArray7120, empty_Array, empty_Array, PThreadedCode7121, 3, PSend7122, PSend7128, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7119, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_shouldRunSelector_() {
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7130 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7133 = new_Array_with(1, (Optr)VAR__return__1_0);
    Character char_444 = new_Character(L':');
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // includes:. 
    Send PSend7135 = new_Send((Optr)VAR_selector_0_0, SMB_includes_, 1, (Optr)char_444_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7139 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7138 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7139, (Optr)&t_block_return);
    Block PBlock7137 = new_Block_with(empty_Array, empty_Array, PThreadedCode7138, 1, PSend7139);
    // ifTrue:. 
    Send PSend7136 = new_Send((Optr)PSend7135, SMB_ifTrue_, 1, (Optr)PBlock7137);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7140 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Array PThreadedCode7134 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend7135, (Optr)&t_send_ifTrue_, (Optr)PSend7136, (Optr)PBlock7137, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7140, (Optr)&t_method_return);
    Block PBlock7132 = new_Block_with(PArray7133, empty_Array, PThreadedCode7134, 2, PSend7136, PSend7140);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7141 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7132);
    Array PThreadedCode7131 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7132, (Optr)&t_send1, (Optr)PSend7141, (Optr)&t_method_return);
    Method PMethod7129 = new_Method_with(PArray7130, empty_Array, empty_Array, PThreadedCode7131, 1, PSend7141);
    
    MethodClosure MC_SMB_shouldRunSelector_ = new_MethodClosure((Method)PMethod7129, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_shouldRunSelector_, MC_SMB_shouldRunSelector_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    // stdevSquared. 
    Send PSend7144 = new_Send((Optr)self, SMB_stdevSquared, 0);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend7145 = new_Send((Optr)PSend7144, SMB_sqrt, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7146 = new_Send((Optr)PSend7145, SMB_asFloat, 0);
    Array PThreadedCode7143 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7144, (Optr)&t_send0, (Optr)PSend7145, (Optr)&t_send0, (Optr)PSend7146, (Optr)&t_method_return);
    Method PMethod7142 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7143, 1, PSend7146);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod7142, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray7150 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend7152 = new_Send((Optr)VAR_run_1_1, SMB_average, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7153 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend7152);
    Array PThreadedCode7151 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend7152, (Optr)&t_send1, (Optr)PSend7153, (Optr)&t_method_return);
    Block PBlock7149 = new_Block_with(PArray7150, empty_Array, PThreadedCode7151, 1, PSend7153);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend7154 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock7149);
    Array PThreadedCode7148 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock7149, (Optr)&t_send2, (Optr)PSend7154, (Optr)&t_method_return);
    Method PMethod7147 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7148, 1, PSend7154);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod7147, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_benchmarkNameForSelector_() {
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7156 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7159 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7161 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7165 = new_Send((Optr)VAR_selector_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // copyFrom:to:. 
    Send PSend7166 = new_Send((Optr)VAR_selector_0_0, SMB_copyFrom_to_, 2, (Optr)int_6_Const, (Optr)PSend7165);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7167 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7166);
    Array PThreadedCode7164 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send0, (Optr)PSend7165, (Optr)&t_send2, (Optr)PSend7166, (Optr)&t_send1, (Optr)PSend7167, (Optr)&t_block_return);
    Block PBlock7163 = new_Block_with(empty_Array, empty_Array, PThreadedCode7164, 1, PSend7167);
    // ifTrue:. 
    Send PSend7162 = new_Send((Optr)PSend7161, SMB_ifTrue_, 1, (Optr)PBlock7163);
    Array PThreadedCode7160 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7161, (Optr)&t_send_ifTrue_, (Optr)PSend7162, (Optr)PBlock7163, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_method_return);
    Block PBlock7158 = new_Block_with(PArray7159, empty_Array, PThreadedCode7160, 2, PSend7162, VAR_selector_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7168 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7158);
    Array PThreadedCode7157 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7158, (Optr)&t_send1, (Optr)PSend7168, (Optr)&t_method_return);
    Method PMethod7155 = new_Method_with(PArray7156, empty_Array, empty_Array, PThreadedCode7157, 1, PSend7168);
    
    MethodClosure MC_SMB_benchmarkNameForSelector_ = new_MethodClosure((Method)PMethod7155, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_benchmarkNameForSelector_, MC_SMB_benchmarkNameForSelector_);
}


static void init_SMB_runs() {
    Symbol SMB_runs = new_Symbol(L"runs");
    Array PThreadedCode7170 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_method_return);
    Method PMethod7169 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7170, 1, slot_PBenchmark_BenchmarkSuite_runs);
    
    MethodClosure MC_SMB_runs = new_MethodClosure((Method)PMethod7169, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runs, MC_SMB_runs);
}


static void init_SMB_runAll() {
    Symbol SMB_runAll = new_Symbol(L"runAll");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7173 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_allSelectors = new_Symbol(L"allSelectors");
    // allSelectors. 
    Send PSend7174 = new_Send((Optr)PSend7173, SMB_allSelectors, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray7176 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    // shouldRunSelector:. 
    Send PSend7178 = new_Send((Optr)self, SMB_shouldRunSelector_, 1, (Optr)VAR_selector_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend7182 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode7181 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7182, (Optr)&t_block_return);
    Block PBlock7180 = new_Block_with(empty_Array, empty_Array, PThreadedCode7181, 1, PSend7182);
    // ifTrue:. 
    Send PSend7179 = new_Send((Optr)PSend7178, SMB_ifTrue_, 1, (Optr)PBlock7180);
    Array PThreadedCode7177 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7178, (Optr)&t_send_ifTrue_, (Optr)PSend7179, (Optr)PBlock7180, (Optr)&t_method_return);
    Block PBlock7175 = new_Block_with(PArray7176, empty_Array, PThreadedCode7177, 1, PSend7179);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7183 = new_Send((Optr)PSend7174, SMB_do_, 1, (Optr)PBlock7175);
    Array PThreadedCode7172 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7173, (Optr)&t_send0, (Optr)PSend7174, (Optr)&t_push_closure, (Optr)PBlock7175, (Optr)&t_send1, (Optr)PSend7183, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7171 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7172, 2, PSend7183, self);
    
    MethodClosure MC_SMB_runAll = new_MethodClosure((Method)PMethod7171, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runAll, MC_SMB_runAll);
}


static void init_class_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_run_ = new_Symbol(L"run:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // run:. 
    Send PSend7186 = new_Send((Optr)self, SMB_run_, 1, (Optr)int_10_Const);
    Array PThreadedCode7185 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend7186, (Optr)&t_method_return);
    Method PMethod7184 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7185, 1, PSend7186);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7184, HEADER(PBenchmark_BenchmarkSuite_Class));
    store_method(HEADER(PBenchmark_BenchmarkSuite_Class), SMB_run, MC_SMB_run);
}


static void init_class_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_probeCount_0_0 = new_Variable_named(L"probeCount", 0);
    Array PArray7188 = new_Array_with(1, (Optr)VAR_probeCount_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7191 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7193 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)VAR_probeCount_0_0);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7194 = new_Send((Optr)VAR__receiver__1_0, SMB_run, 0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend7195 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode7192 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_probeCount_0_0, (Optr)&t_send1, (Optr)PSend7193, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7194, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7195, (Optr)&t_method_return);
    Block PBlock7190 = new_Block_with(PArray7191, empty_Array, PThreadedCode7192, 3, PSend7193, PSend7194, PSend7195);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7196 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7197 = new_Send((Optr)PBlock7190, SMB_value_, 1, (Optr)PSend7196);
    Array PThreadedCode7189 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock7190, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7196, (Optr)&t_send1, (Optr)PSend7197, (Optr)&t_method_return);
    Method PMethod7187 = new_Method_with(PArray7188, empty_Array, empty_Array, PThreadedCode7189, 1, PSend7197);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7187, HEADER(PBenchmark_BenchmarkSuite_Class));
    store_method(HEADER(PBenchmark_BenchmarkSuite_Class), SMB_run_, MC_SMB_run_);
}

void init_PBenchmark_PBenchmarkSuite_layout() {
    layout_PBenchmark_BenchmarkSuite_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PBenchmark_BenchmarkSuite_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PBenchmark_BenchmarkSuite_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PBenchmark_BenchmarkSuite_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PBenchmark_BenchmarkSuite_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PBenchmark_BenchmarkSuite_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_BenchmarkSuite = new_Symbol(L"BenchmarkSuite");
    slot_PBenchmark_BenchmarkSuite_runs = (Optr)new_Slot(1, L"runs");
    layout_PBenchmark_BenchmarkSuite = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_PBenchmark_BenchmarkSuite)->values[0] = slot_PBenchmark_AbstractBenchmark_probeCount; // probeCount 
    ((Array)layout_PBenchmark_BenchmarkSuite)->values[1] = slot_PBenchmark_BenchmarkSuite_runs; // runs 
    PBenchmark_BenchmarkSuite_Class = (Class)new_Class(PBenchmark_AbstractBenchmark_Class, layout_PBenchmark_BenchmarkSuite_Class_class);
    PBenchmark_BenchmarkSuite_Class->layout = layout_PBenchmark_BenchmarkSuite;
    PBenchmark_BenchmarkSuite_Class->name = SMB_BenchmarkSuite;
    
}

void init_PBenchmark_PBenchmarkSuite_methods() {
    init_SMB_stdevSquared();
    init_SMB_lastResult();
    init_SMB_d();
    init_SMB_runBaseBenchmark();
    init_SMB_reset();
    init_SMB_run();
    init_SMB_tearDown();
    init_SMB_total();
    init_SMB_inspectChildrenOn_();
    init_SMB_setUp();
    init_SMB_run_();
    init_SMB_average();
    init_SMB_initialize();
    init_SMB_inspectNameOn_();
    init_SMB_printOn_();
    init_SMB_shouldRunSelector_();
    init_SMB_stdev();
    init_SMB_sum();
    init_SMB_benchmarkNameForSelector_();
    init_SMB_runs();
    init_SMB_runAll();
    init_class_SMB_run();
    init_class_SMB_run_();
    
}