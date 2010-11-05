#include <lib/class/PBenchmark/BenchmarkSuite.h>


Optr layout_PBenchmark_BenchmarkSuite_Class_class;
Optr slot_PBenchmark_BenchmarkSuite_runs;
Optr layout_PBenchmark_BenchmarkSuite;


static void init_SMB_stdevSquared() {
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray7002 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend7004 = new_Send((Optr)VAR_run_1_1, SMB_stdev, 0);
    Symbol SMB_squared = new_Symbol(L"squared");
    // squared. 
    Send PSend7005 = new_Send((Optr)PSend7004, SMB_squared, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7006 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend7005);
    Array PThreadedCode7003 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend7004, (Optr)&t_send0, (Optr)PSend7005, (Optr)&t_send1, (Optr)PSend7006, (Optr)&t_method_return);
    Block PBlock7001 = new_Block_with(PArray7002, empty_Array, PThreadedCode7003, 1, PSend7006);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend7007 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock7001);
    Array PThreadedCode7000 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock7001, (Optr)&t_send2, (Optr)PSend7007, (Optr)&t_method_return);
    Method PMethod6999 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7000, 1, PSend7007);
    
    MethodClosure MC_SMB_stdevSquared = new_MethodClosure((Method)PMethod6999, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdevSquared, MC_SMB_stdevSquared);
}


static void init_SMB_lastResult() {
    Symbol SMB_lastResult = new_Symbol(L"lastResult");
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend7010 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend7011 = new_Send((Optr)PSend7010, SMB_last, 0);
    Array PThreadedCode7009 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7010, (Optr)&t_send0, (Optr)PSend7011, (Optr)&t_method_return);
    Method PMethod7008 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7009, 1, PSend7011);
    
    MethodClosure MC_SMB_lastResult = new_MethodClosure((Method)PMethod7008, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_lastResult, MC_SMB_lastResult);
}


static void init_SMB_d() {
    Symbol SMB_d = new_Symbol(L"d");
    Array PThreadedCode7013 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7012 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7013, 1, self);
    
    MethodClosure MC_SMB_d = new_MethodClosure((Method)PMethod7012, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_d, MC_SMB_d);
}


static void init_SMB_runBaseBenchmark() {
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    Variable VAR_results_0_0 = new_Variable_named(L"results", 0);
    Variable VAR_base_0_1 = new_Variable_named(L"base", 0);
    Array PArray7015 = new_Array_with(2, (Optr)VAR_results_0_0, (Optr)VAR_base_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7018 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_baseBenchmark = new_Symbol(L"baseBenchmark");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_baseBenchmark_Const = new_Constant((Optr)SMB_baseBenchmark);
    // respondsTo:. 
    Send PSend7020 = new_Send((Optr)self, SMB_respondsTo_, 1, (Optr)SMB_baseBenchmark_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7024 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7023 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7024, (Optr)&t_block_return);
    Block PBlock7022 = new_Block_with(empty_Array, empty_Array, PThreadedCode7023, 1, PSend7024);
    // ifFalse:. 
    Send PSend7021 = new_Send((Optr)PSend7020, SMB_ifFalse_, 1, (Optr)PBlock7022);
    // baseBenchmark. 
    Send PSend7026 = new_Send((Optr)self, SMB_baseBenchmark, 0);
    Assign PAssign7025 = new_Assign((Optr)VAR_base_0_1, (Optr)PSend7026);
    // escape:. 
    Send PSend7029 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7028 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7029, (Optr)&t_block_return);
    Block PBlock7027 = new_Block_with(empty_Array, empty_Array, PThreadedCode7028, 1, PSend7029);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend7030 = new_Send((Optr)VAR_base_0_1, SMB_ifNil_, 1, (Optr)PBlock7027);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7031 = new_Send((Optr)VAR_base_0_1, SMB_runAll, 0);
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend7032 = new_Send((Optr)PSend7031, SMB_runs, 0);
    Variable VAR_selector_2_0 = new_Variable_named(L"selector", 2);
    Variable VAR_run_2_1 = new_Variable_named(L"run", 2);
    Array PArray7034 = new_Array_with(2, (Optr)VAR_selector_2_0, (Optr)VAR_run_2_1);
    // runs. 
    Send PSend7036 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7037 = new_Send((Optr)PSend7036, SMB_at_, 1, (Optr)VAR_selector_2_0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend7038 = new_Send((Optr)PSend7037, SMB_base_, 1, (Optr)VAR_run_2_1);
    Array PThreadedCode7035 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7036, (Optr)&t_push_variable, (Optr)VAR_selector_2_0, (Optr)&t_send1, (Optr)PSend7037, (Optr)&t_push_variable, (Optr)VAR_run_2_1, (Optr)&t_send1, (Optr)PSend7038, (Optr)&t_method_return);
    Block PBlock7033 = new_Block_with(PArray7034, empty_Array, PThreadedCode7035, 1, PSend7038);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend7039 = new_Send((Optr)PSend7032, SMB_keysAndValuesDo_, 1, (Optr)PBlock7033);
    Array PThreadedCode7019 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_baseBenchmark, (Optr)&t_send1, (Optr)PSend7020, (Optr)&t_send_ifFalse_, (Optr)PSend7021, (Optr)PBlock7022, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7025, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7026, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_push_closure, (Optr)PBlock7027, (Optr)&t_send1, (Optr)PSend7030, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_send0, (Optr)PSend7031, (Optr)&t_send0, (Optr)PSend7032, (Optr)&t_push_closure, (Optr)PBlock7033, (Optr)&t_send1, (Optr)PSend7039, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7017 = new_Block_with(PArray7018, empty_Array, PThreadedCode7019, 5, PSend7021, PAssign7025, PSend7030, PSend7039, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7040 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7017);
    Array PThreadedCode7016 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7017, (Optr)&t_send1, (Optr)PSend7040, (Optr)&t_method_return);
    Method PMethod7014 = new_Method_with(empty_Array, PArray7015, empty_Array, PThreadedCode7016, 1, PSend7040);
    
    MethodClosure MC_SMB_runBaseBenchmark = new_MethodClosure((Method)PMethod7014, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runBaseBenchmark, MC_SMB_runBaseBenchmark);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend7043 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_removeAll, 0);
    Array PThreadedCode7042 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7043, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7041 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7042, 2, PSend7043, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod7041, PBenchmark_BenchmarkSuite_Class);
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
    Send PSend7046 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7047 = new_Send((Optr)self, SMB_runAll, 0);
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    // runBaseBenchmark. 
    Send PSend7048 = new_Send((Optr)self, SMB_runBaseBenchmark, 0);
    Array PThreadedCode7045 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7046, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7047, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7048, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7044 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7045, 4, PSend7046, PSend7047, PSend7048, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7044, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Array PThreadedCode7050 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7049 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7050, 1, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7049, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7053 = new_Send((Optr)self, SMB_sum, 0);
    Array PThreadedCode7052 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7053, (Optr)&t_method_return);
    Method PMethod7051 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7052, 1, PSend7053);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod7051, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_total, MC_SMB_total);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray7055 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7058 = new_Array_with(1, (Optr)VAR_run_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend7060 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_run_1_0, (Optr)VAR_run_1_0);
    Array PThreadedCode7059 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_send2, (Optr)PSend7060, (Optr)&t_method_return);
    Block PBlock7057 = new_Block_with(PArray7058, empty_Array, PThreadedCode7059, 1, PSend7060);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7061 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7057);
    Array PThreadedCode7056 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7057, (Optr)&t_send1, (Optr)PSend7061, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7054 = new_Method_with(PArray7055, empty_Array, empty_Array, PThreadedCode7056, 2, PSend7061, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod7054, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Array PThreadedCode7063 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7062 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7063, 1, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7062, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_run_() {
    /*
    run: probeCount
// 	^ self new probeCount: probeCount; run; yourself
    */
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7065 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR_run_0_1 = new_Variable_named(L"run", 0);
    Array PArray7066 = new_Array_with(1, (Optr)VAR_run_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7069 = new_Send((Optr)PBenchmarkRun_classReference, SMB_new, 0);
    Assign PAssign7068 = new_Assign((Optr)VAR_run_0_1, (Optr)PSend7069);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7071 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend7073 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)self);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend7074 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7075 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)PSend7074);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend7076 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    // benchmarkNameForSelector:. 
    Send PSend7077 = new_Send((Optr)self, SMB_benchmarkNameForSelector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend7078 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)PSend7077);
    Array PThreadedCode7072 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7073, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7074, (Optr)&t_send1, (Optr)PSend7075, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7076, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7077, (Optr)&t_send1, (Optr)PSend7078, (Optr)&t_method_return);
    Block PBlock7070 = new_Block_with(PArray7071, empty_Array, PThreadedCode7072, 4, PSend7073, PSend7075, PSend7076, PSend7078);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7079 = new_Send((Optr)PBlock7070, SMB_value_, 1, (Optr)VAR_run_0_1);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7080 = new_Send((Optr)VAR_run_0_1, SMB_run, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7081 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)VAR_run_0_1);
    Array PThreadedCode7067 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign7068, (Optr)&t_push_class_reference, (Optr)PBenchmarkRun_classReference, (Optr)&t_send0, (Optr)PSend7069, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7070, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send1, (Optr)PSend7079, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send0, (Optr)PSend7080, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send2, (Optr)PSend7081, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7064 = new_Method_with(PArray7065, PArray7066, empty_Array, PThreadedCode7067, 5, PAssign7068, PSend7079, PSend7080, PSend7081, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7064, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7084 = new_Send((Optr)self, SMB_sum, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7085 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7086 = new_Send((Optr)PSend7085, SMB_asFloat, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend7087 = new_Send((Optr)PSend7084, SMB__divide_, 1, (Optr)PSend7086);
    Array PThreadedCode7083 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7084, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7085, (Optr)&t_send0, (Optr)PSend7086, (Optr)&t_send1, (Optr)PSend7087, (Optr)&t_method_return);
    Method PMethod7082 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7083, 1, PSend7087);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod7082, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper7090 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7092 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign7091 = new_Assign((Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)PSend7092);
    Array PThreadedCode7089 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7090, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7091, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7092, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7088 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7089, 3, PSuper7090, PAssign7091, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7088, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7094 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7096 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend7097 = new_Send((Optr)PSend7096, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7098 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend7097);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7099 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend7100 = new_Send((Optr)PSend7099, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_7104 = new_String(L": ");
    Constant string_7104_Const = new_Constant((Optr)string_7104);
    // <<. 
    Send PSend7105 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_7104_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper7106 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode7103 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_7104, (Optr)&t_send1, (Optr)PSend7105, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper7106, (Optr)&t_block_return);
    Block PBlock7102 = new_Block_with(empty_Array, empty_Array, PThreadedCode7103, 2, PSend7105, PSuper7106);
    // ifTrue:. 
    Send PSend7101 = new_Send((Optr)PSend7100, SMB_ifTrue_, 1, (Optr)PBlock7102);
    Array PThreadedCode7095 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7096, (Optr)&t_send0, (Optr)PSend7097, (Optr)&t_send1, (Optr)PSend7098, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7099, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7100, (Optr)&t_send_ifTrue_, (Optr)PSend7101, (Optr)PBlock7102, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7093 = new_Method_with(PArray7094, empty_Array, empty_Array, PThreadedCode7095, 3, PSend7098, PSend7101, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod7093, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7108 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend7110 = new_Send((Optr)self, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7112 = new_Array_with(1, (Optr)VAR_run_1_0);
    // printOn:. 
    Send PSend7114 = new_Send((Optr)VAR_run_1_0, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4725 = new_Character(L' ');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_4725_Const = new_Constant((Optr)char_4725);
    // <<. 
    Send PSend7115 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4725_Const);
    Array PThreadedCode7113 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7114, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4725, (Optr)&t_send1, (Optr)PSend7115, (Optr)&t_method_return);
    Block PBlock7111 = new_Block_with(PArray7112, empty_Array, PThreadedCode7113, 2, PSend7114, PSend7115);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7116 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7111);
    Array PThreadedCode7109 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7110, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7111, (Optr)&t_send1, (Optr)PSend7116, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7107 = new_Method_with(PArray7108, empty_Array, empty_Array, PThreadedCode7109, 3, PSend7110, PSend7116, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7107, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_shouldRunSelector_() {
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7118 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7121 = new_Array_with(1, (Optr)VAR__return__1_0);
    Character char_435 = new_Character(L':');
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant char_435_Const = new_Constant((Optr)char_435);
    // includes:. 
    Send PSend7123 = new_Send((Optr)VAR_selector_0_0, SMB_includes_, 1, (Optr)char_435_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7127 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7126 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7127, (Optr)&t_block_return);
    Block PBlock7125 = new_Block_with(empty_Array, empty_Array, PThreadedCode7126, 1, PSend7127);
    // ifTrue:. 
    Send PSend7124 = new_Send((Optr)PSend7123, SMB_ifTrue_, 1, (Optr)PBlock7125);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7128 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Array PThreadedCode7122 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend7123, (Optr)&t_send_ifTrue_, (Optr)PSend7124, (Optr)PBlock7125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7128, (Optr)&t_method_return);
    Block PBlock7120 = new_Block_with(PArray7121, empty_Array, PThreadedCode7122, 2, PSend7124, PSend7128);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7129 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7120);
    Array PThreadedCode7119 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7120, (Optr)&t_send1, (Optr)PSend7129, (Optr)&t_method_return);
    Method PMethod7117 = new_Method_with(PArray7118, empty_Array, empty_Array, PThreadedCode7119, 1, PSend7129);
    
    MethodClosure MC_SMB_shouldRunSelector_ = new_MethodClosure((Method)PMethod7117, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_shouldRunSelector_, MC_SMB_shouldRunSelector_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    // stdevSquared. 
    Send PSend7132 = new_Send((Optr)self, SMB_stdevSquared, 0);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend7133 = new_Send((Optr)PSend7132, SMB_sqrt, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7134 = new_Send((Optr)PSend7133, SMB_asFloat, 0);
    Array PThreadedCode7131 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7132, (Optr)&t_send0, (Optr)PSend7133, (Optr)&t_send0, (Optr)PSend7134, (Optr)&t_method_return);
    Method PMethod7130 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7131, 1, PSend7134);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod7130, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray7138 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend7140 = new_Send((Optr)VAR_run_1_1, SMB_average, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7141 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend7140);
    Array PThreadedCode7139 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend7140, (Optr)&t_send1, (Optr)PSend7141, (Optr)&t_method_return);
    Block PBlock7137 = new_Block_with(PArray7138, empty_Array, PThreadedCode7139, 1, PSend7141);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend7142 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock7137);
    Array PThreadedCode7136 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock7137, (Optr)&t_send2, (Optr)PSend7142, (Optr)&t_method_return);
    Method PMethod7135 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7136, 1, PSend7142);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod7135, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_benchmarkNameForSelector_() {
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7144 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7147 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7149 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7153 = new_Send((Optr)VAR_selector_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // copyFrom:to:. 
    Send PSend7154 = new_Send((Optr)VAR_selector_0_0, SMB_copyFrom_to_, 2, (Optr)int_6_Const, (Optr)PSend7153);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7155 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7154);
    Array PThreadedCode7152 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send0, (Optr)PSend7153, (Optr)&t_send2, (Optr)PSend7154, (Optr)&t_send1, (Optr)PSend7155, (Optr)&t_block_return);
    Block PBlock7151 = new_Block_with(empty_Array, empty_Array, PThreadedCode7152, 1, PSend7155);
    // ifTrue:. 
    Send PSend7150 = new_Send((Optr)PSend7149, SMB_ifTrue_, 1, (Optr)PBlock7151);
    Array PThreadedCode7148 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7149, (Optr)&t_send_ifTrue_, (Optr)PSend7150, (Optr)PBlock7151, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_method_return);
    Block PBlock7146 = new_Block_with(PArray7147, empty_Array, PThreadedCode7148, 2, PSend7150, VAR_selector_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7156 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7146);
    Array PThreadedCode7145 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7146, (Optr)&t_send1, (Optr)PSend7156, (Optr)&t_method_return);
    Method PMethod7143 = new_Method_with(PArray7144, empty_Array, empty_Array, PThreadedCode7145, 1, PSend7156);
    
    MethodClosure MC_SMB_benchmarkNameForSelector_ = new_MethodClosure((Method)PMethod7143, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_benchmarkNameForSelector_, MC_SMB_benchmarkNameForSelector_);
}


static void init_SMB_runs() {
    Symbol SMB_runs = new_Symbol(L"runs");
    Array PThreadedCode7158 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_method_return);
    Method PMethod7157 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7158, 1, slot_PBenchmark_BenchmarkSuite_runs);
    
    MethodClosure MC_SMB_runs = new_MethodClosure((Method)PMethod7157, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runs, MC_SMB_runs);
}


static void init_SMB_runAll() {
    Symbol SMB_runAll = new_Symbol(L"runAll");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7161 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_allSelectors = new_Symbol(L"allSelectors");
    // allSelectors. 
    Send PSend7162 = new_Send((Optr)PSend7161, SMB_allSelectors, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray7164 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    // shouldRunSelector:. 
    Send PSend7166 = new_Send((Optr)self, SMB_shouldRunSelector_, 1, (Optr)VAR_selector_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend7170 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode7169 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7170, (Optr)&t_block_return);
    Block PBlock7168 = new_Block_with(empty_Array, empty_Array, PThreadedCode7169, 1, PSend7170);
    // ifTrue:. 
    Send PSend7167 = new_Send((Optr)PSend7166, SMB_ifTrue_, 1, (Optr)PBlock7168);
    Array PThreadedCode7165 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7166, (Optr)&t_send_ifTrue_, (Optr)PSend7167, (Optr)PBlock7168, (Optr)&t_method_return);
    Block PBlock7163 = new_Block_with(PArray7164, empty_Array, PThreadedCode7165, 1, PSend7167);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7171 = new_Send((Optr)PSend7162, SMB_do_, 1, (Optr)PBlock7163);
    Array PThreadedCode7160 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7161, (Optr)&t_send0, (Optr)PSend7162, (Optr)&t_push_closure, (Optr)PBlock7163, (Optr)&t_send1, (Optr)PSend7171, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7159 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7160, 2, PSend7171, self);
    
    MethodClosure MC_SMB_runAll = new_MethodClosure((Method)PMethod7159, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runAll, MC_SMB_runAll);
}


static void init_class_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_run_ = new_Symbol(L"run:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // run:. 
    Send PSend7174 = new_Send((Optr)self, SMB_run_, 1, (Optr)int_10_Const);
    Array PThreadedCode7173 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend7174, (Optr)&t_method_return);
    Method PMethod7172 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7173, 1, PSend7174);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7172, HEADER(PBenchmark_BenchmarkSuite_Class));
    store_method(HEADER(PBenchmark_BenchmarkSuite_Class), SMB_run, MC_SMB_run);
}


static void init_class_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_probeCount_0_0 = new_Variable_named(L"probeCount", 0);
    Array PArray7176 = new_Array_with(1, (Optr)VAR_probeCount_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7179 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7181 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)VAR_probeCount_0_0);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7182 = new_Send((Optr)VAR__receiver__1_0, SMB_run, 0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend7183 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode7180 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_probeCount_0_0, (Optr)&t_send1, (Optr)PSend7181, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7182, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7183, (Optr)&t_method_return);
    Block PBlock7178 = new_Block_with(PArray7179, empty_Array, PThreadedCode7180, 3, PSend7181, PSend7182, PSend7183);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7184 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7185 = new_Send((Optr)PBlock7178, SMB_value_, 1, (Optr)PSend7184);
    Array PThreadedCode7177 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock7178, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7184, (Optr)&t_send1, (Optr)PSend7185, (Optr)&t_method_return);
    Method PMethod7175 = new_Method_with(PArray7176, empty_Array, empty_Array, PThreadedCode7177, 1, PSend7185);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7175, HEADER(PBenchmark_BenchmarkSuite_Class));
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