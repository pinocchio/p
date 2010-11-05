#include <lib/class/PBenchmark/BenchmarkSuite.h>


Optr layout_PBenchmark_BenchmarkSuite_Class_class;
Optr slot_PBenchmark_BenchmarkSuite_runs;
Optr layout_PBenchmark_BenchmarkSuite;


static void init_SMB_stdevSquared() {
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray7006 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend7008 = new_Send((Optr)VAR_run_1_1, SMB_stdev, 0);
    Symbol SMB_squared = new_Symbol(L"squared");
    // squared. 
    Send PSend7009 = new_Send((Optr)PSend7008, SMB_squared, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7010 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend7009);
    Array PThreadedCode7007 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend7008, (Optr)&t_send0, (Optr)PSend7009, (Optr)&t_send1, (Optr)PSend7010, (Optr)&t_method_return);
    Block PBlock7005 = new_Block_with(PArray7006, empty_Array, PThreadedCode7007, 1, PSend7010);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend7011 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock7005);
    Array PThreadedCode7004 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock7005, (Optr)&t_send2, (Optr)PSend7011, (Optr)&t_method_return);
    Method PMethod7003 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7004, 1, PSend7011);
    
    MethodClosure MC_SMB_stdevSquared = new_MethodClosure((Method)PMethod7003, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdevSquared, MC_SMB_stdevSquared);
}


static void init_SMB_lastResult() {
    Symbol SMB_lastResult = new_Symbol(L"lastResult");
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend7014 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend7015 = new_Send((Optr)PSend7014, SMB_last, 0);
    Array PThreadedCode7013 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7014, (Optr)&t_send0, (Optr)PSend7015, (Optr)&t_method_return);
    Method PMethod7012 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7013, 1, PSend7015);
    
    MethodClosure MC_SMB_lastResult = new_MethodClosure((Method)PMethod7012, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_lastResult, MC_SMB_lastResult);
}


static void init_SMB_d() {
    Symbol SMB_d = new_Symbol(L"d");
    Array PThreadedCode7017 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7016 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7017, 1, self);
    
    MethodClosure MC_SMB_d = new_MethodClosure((Method)PMethod7016, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_d, MC_SMB_d);
}


static void init_SMB_runBaseBenchmark() {
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    Variable VAR_results_0_0 = new_Variable_named(L"results", 0);
    Variable VAR_base_0_1 = new_Variable_named(L"base", 0);
    Array PArray7019 = new_Array_with(2, (Optr)VAR_results_0_0, (Optr)VAR_base_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7022 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_baseBenchmark = new_Symbol(L"baseBenchmark");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_baseBenchmark_Const = new_Constant((Optr)SMB_baseBenchmark);
    // respondsTo:. 
    Send PSend7024 = new_Send((Optr)self, SMB_respondsTo_, 1, (Optr)SMB_baseBenchmark_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7028 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7027 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7028, (Optr)&t_block_return);
    Block PBlock7026 = new_Block_with(empty_Array, empty_Array, PThreadedCode7027, 1, PSend7028);
    // ifFalse:. 
    Send PSend7025 = new_Send((Optr)PSend7024, SMB_ifFalse_, 1, (Optr)PBlock7026);
    // baseBenchmark. 
    Send PSend7030 = new_Send((Optr)self, SMB_baseBenchmark, 0);
    Assign PAssign7029 = new_Assign((Optr)VAR_base_0_1, (Optr)PSend7030);
    // escape:. 
    Send PSend7033 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7032 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7033, (Optr)&t_block_return);
    Block PBlock7031 = new_Block_with(empty_Array, empty_Array, PThreadedCode7032, 1, PSend7033);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend7034 = new_Send((Optr)VAR_base_0_1, SMB_ifNil_, 1, (Optr)PBlock7031);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7035 = new_Send((Optr)VAR_base_0_1, SMB_runAll, 0);
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend7036 = new_Send((Optr)PSend7035, SMB_runs, 0);
    Variable VAR_selector_2_0 = new_Variable_named(L"selector", 2);
    Variable VAR_run_2_1 = new_Variable_named(L"run", 2);
    Array PArray7038 = new_Array_with(2, (Optr)VAR_selector_2_0, (Optr)VAR_run_2_1);
    // runs. 
    Send PSend7040 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7041 = new_Send((Optr)PSend7040, SMB_at_, 1, (Optr)VAR_selector_2_0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend7042 = new_Send((Optr)PSend7041, SMB_base_, 1, (Optr)VAR_run_2_1);
    Array PThreadedCode7039 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7040, (Optr)&t_push_variable, (Optr)VAR_selector_2_0, (Optr)&t_send1, (Optr)PSend7041, (Optr)&t_push_variable, (Optr)VAR_run_2_1, (Optr)&t_send1, (Optr)PSend7042, (Optr)&t_method_return);
    Block PBlock7037 = new_Block_with(PArray7038, empty_Array, PThreadedCode7039, 1, PSend7042);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend7043 = new_Send((Optr)PSend7036, SMB_keysAndValuesDo_, 1, (Optr)PBlock7037);
    Array PThreadedCode7023 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_baseBenchmark, (Optr)&t_send1, (Optr)PSend7024, (Optr)&t_send_ifFalse_, (Optr)PSend7025, (Optr)PBlock7026, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7029, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7030, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_push_closure, (Optr)PBlock7031, (Optr)&t_send1, (Optr)PSend7034, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_send0, (Optr)PSend7035, (Optr)&t_send0, (Optr)PSend7036, (Optr)&t_push_closure, (Optr)PBlock7037, (Optr)&t_send1, (Optr)PSend7043, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7021 = new_Block_with(PArray7022, empty_Array, PThreadedCode7023, 5, PSend7025, PAssign7029, PSend7034, PSend7043, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7044 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7021);
    Array PThreadedCode7020 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7021, (Optr)&t_send1, (Optr)PSend7044, (Optr)&t_method_return);
    Method PMethod7018 = new_Method_with(empty_Array, PArray7019, empty_Array, PThreadedCode7020, 1, PSend7044);
    
    MethodClosure MC_SMB_runBaseBenchmark = new_MethodClosure((Method)PMethod7018, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runBaseBenchmark, MC_SMB_runBaseBenchmark);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend7047 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_removeAll, 0);
    Array PThreadedCode7046 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7047, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7045 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7046, 2, PSend7047, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod7045, PBenchmark_BenchmarkSuite_Class);
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
    Send PSend7050 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7051 = new_Send((Optr)self, SMB_runAll, 0);
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    // runBaseBenchmark. 
    Send PSend7052 = new_Send((Optr)self, SMB_runBaseBenchmark, 0);
    Array PThreadedCode7049 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7050, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7051, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7052, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7048 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7049, 4, PSend7050, PSend7051, PSend7052, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7048, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Array PThreadedCode7054 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7053 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7054, 1, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7053, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7057 = new_Send((Optr)self, SMB_sum, 0);
    Array PThreadedCode7056 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7057, (Optr)&t_method_return);
    Method PMethod7055 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7056, 1, PSend7057);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod7055, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_total, MC_SMB_total);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray7059 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7062 = new_Array_with(1, (Optr)VAR_run_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend7064 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_run_1_0, (Optr)VAR_run_1_0);
    Array PThreadedCode7063 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_send2, (Optr)PSend7064, (Optr)&t_method_return);
    Block PBlock7061 = new_Block_with(PArray7062, empty_Array, PThreadedCode7063, 1, PSend7064);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7065 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7061);
    Array PThreadedCode7060 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7061, (Optr)&t_send1, (Optr)PSend7065, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7058 = new_Method_with(PArray7059, empty_Array, empty_Array, PThreadedCode7060, 2, PSend7065, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod7058, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Array PThreadedCode7067 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7066 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7067, 1, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7066, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_run_() {
    /*
    run: probeCount
// 	^ self new probeCount: probeCount; run; yourself
    */
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7069 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR_run_0_1 = new_Variable_named(L"run", 0);
    Array PArray7070 = new_Array_with(1, (Optr)VAR_run_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7073 = new_Send((Optr)PBenchmarkRun_classReference, SMB_new, 0);
    Assign PAssign7072 = new_Assign((Optr)VAR_run_0_1, (Optr)PSend7073);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7075 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend7077 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)self);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend7078 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7079 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)PSend7078);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend7080 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    // benchmarkNameForSelector:. 
    Send PSend7081 = new_Send((Optr)self, SMB_benchmarkNameForSelector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend7082 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)PSend7081);
    Array PThreadedCode7076 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7077, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7078, (Optr)&t_send1, (Optr)PSend7079, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7080, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7081, (Optr)&t_send1, (Optr)PSend7082, (Optr)&t_method_return);
    Block PBlock7074 = new_Block_with(PArray7075, empty_Array, PThreadedCode7076, 4, PSend7077, PSend7079, PSend7080, PSend7082);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7083 = new_Send((Optr)PBlock7074, SMB_value_, 1, (Optr)VAR_run_0_1);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7084 = new_Send((Optr)VAR_run_0_1, SMB_run, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7085 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)VAR_run_0_1);
    Array PThreadedCode7071 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign7072, (Optr)&t_push_class_reference, (Optr)PBenchmarkRun_classReference, (Optr)&t_send0, (Optr)PSend7073, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7074, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send1, (Optr)PSend7083, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send0, (Optr)PSend7084, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send2, (Optr)PSend7085, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7068 = new_Method_with(PArray7069, PArray7070, empty_Array, PThreadedCode7071, 5, PAssign7072, PSend7083, PSend7084, PSend7085, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7068, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7088 = new_Send((Optr)self, SMB_sum, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7089 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7090 = new_Send((Optr)PSend7089, SMB_asFloat, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend7091 = new_Send((Optr)PSend7088, SMB__divide_, 1, (Optr)PSend7090);
    Array PThreadedCode7087 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7088, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7089, (Optr)&t_send0, (Optr)PSend7090, (Optr)&t_send1, (Optr)PSend7091, (Optr)&t_method_return);
    Method PMethod7086 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7087, 1, PSend7091);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod7086, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper7094 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7096 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign7095 = new_Assign((Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)PSend7096);
    Array PThreadedCode7093 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7094, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7095, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7092 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7093, 3, PSuper7094, PAssign7095, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7092, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7098 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7100 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend7101 = new_Send((Optr)PSend7100, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7102 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend7101);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7103 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend7104 = new_Send((Optr)PSend7103, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_7108 = new_String(L": ");
    Constant string_7108_Const = new_Constant((Optr)string_7108);
    // <<. 
    Send PSend7109 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_7108_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper7110 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode7107 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_7108, (Optr)&t_send1, (Optr)PSend7109, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper7110, (Optr)&t_block_return);
    Block PBlock7106 = new_Block_with(empty_Array, empty_Array, PThreadedCode7107, 2, PSend7109, PSuper7110);
    // ifTrue:. 
    Send PSend7105 = new_Send((Optr)PSend7104, SMB_ifTrue_, 1, (Optr)PBlock7106);
    Array PThreadedCode7099 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7100, (Optr)&t_send0, (Optr)PSend7101, (Optr)&t_send1, (Optr)PSend7102, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7103, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7104, (Optr)&t_send_ifTrue_, (Optr)PSend7105, (Optr)PBlock7106, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7097 = new_Method_with(PArray7098, empty_Array, empty_Array, PThreadedCode7099, 3, PSend7102, PSend7105, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod7097, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7112 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend7114 = new_Send((Optr)self, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7116 = new_Array_with(1, (Optr)VAR_run_1_0);
    // printOn:. 
    Send PSend7118 = new_Send((Optr)VAR_run_1_0, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4725 = new_Character(L' ');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_4725_Const = new_Constant((Optr)char_4725);
    // <<. 
    Send PSend7119 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4725_Const);
    Array PThreadedCode7117 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7118, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4725, (Optr)&t_send1, (Optr)PSend7119, (Optr)&t_method_return);
    Block PBlock7115 = new_Block_with(PArray7116, empty_Array, PThreadedCode7117, 2, PSend7118, PSend7119);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7120 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7115);
    Array PThreadedCode7113 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7114, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7115, (Optr)&t_send1, (Optr)PSend7120, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7111 = new_Method_with(PArray7112, empty_Array, empty_Array, PThreadedCode7113, 3, PSend7114, PSend7120, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7111, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_shouldRunSelector_() {
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7122 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7125 = new_Array_with(1, (Optr)VAR__return__1_0);
    Character char_435 = new_Character(L':');
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant char_435_Const = new_Constant((Optr)char_435);
    // includes:. 
    Send PSend7127 = new_Send((Optr)VAR_selector_0_0, SMB_includes_, 1, (Optr)char_435_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7131 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7130 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7131, (Optr)&t_block_return);
    Block PBlock7129 = new_Block_with(empty_Array, empty_Array, PThreadedCode7130, 1, PSend7131);
    // ifTrue:. 
    Send PSend7128 = new_Send((Optr)PSend7127, SMB_ifTrue_, 1, (Optr)PBlock7129);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7132 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Array PThreadedCode7126 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend7127, (Optr)&t_send_ifTrue_, (Optr)PSend7128, (Optr)PBlock7129, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7132, (Optr)&t_method_return);
    Block PBlock7124 = new_Block_with(PArray7125, empty_Array, PThreadedCode7126, 2, PSend7128, PSend7132);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7133 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7124);
    Array PThreadedCode7123 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7124, (Optr)&t_send1, (Optr)PSend7133, (Optr)&t_method_return);
    Method PMethod7121 = new_Method_with(PArray7122, empty_Array, empty_Array, PThreadedCode7123, 1, PSend7133);
    
    MethodClosure MC_SMB_shouldRunSelector_ = new_MethodClosure((Method)PMethod7121, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_shouldRunSelector_, MC_SMB_shouldRunSelector_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    // stdevSquared. 
    Send PSend7136 = new_Send((Optr)self, SMB_stdevSquared, 0);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend7137 = new_Send((Optr)PSend7136, SMB_sqrt, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7138 = new_Send((Optr)PSend7137, SMB_asFloat, 0);
    Array PThreadedCode7135 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7136, (Optr)&t_send0, (Optr)PSend7137, (Optr)&t_send0, (Optr)PSend7138, (Optr)&t_method_return);
    Method PMethod7134 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7135, 1, PSend7138);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod7134, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray7142 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend7144 = new_Send((Optr)VAR_run_1_1, SMB_average, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7145 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend7144);
    Array PThreadedCode7143 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend7144, (Optr)&t_send1, (Optr)PSend7145, (Optr)&t_method_return);
    Block PBlock7141 = new_Block_with(PArray7142, empty_Array, PThreadedCode7143, 1, PSend7145);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend7146 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock7141);
    Array PThreadedCode7140 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock7141, (Optr)&t_send2, (Optr)PSend7146, (Optr)&t_method_return);
    Method PMethod7139 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7140, 1, PSend7146);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod7139, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_benchmarkNameForSelector_() {
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7148 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7151 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7153 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7157 = new_Send((Optr)VAR_selector_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // copyFrom:to:. 
    Send PSend7158 = new_Send((Optr)VAR_selector_0_0, SMB_copyFrom_to_, 2, (Optr)int_6_Const, (Optr)PSend7157);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7159 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7158);
    Array PThreadedCode7156 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send0, (Optr)PSend7157, (Optr)&t_send2, (Optr)PSend7158, (Optr)&t_send1, (Optr)PSend7159, (Optr)&t_block_return);
    Block PBlock7155 = new_Block_with(empty_Array, empty_Array, PThreadedCode7156, 1, PSend7159);
    // ifTrue:. 
    Send PSend7154 = new_Send((Optr)PSend7153, SMB_ifTrue_, 1, (Optr)PBlock7155);
    Array PThreadedCode7152 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7153, (Optr)&t_send_ifTrue_, (Optr)PSend7154, (Optr)PBlock7155, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_method_return);
    Block PBlock7150 = new_Block_with(PArray7151, empty_Array, PThreadedCode7152, 2, PSend7154, VAR_selector_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7160 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7150);
    Array PThreadedCode7149 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7150, (Optr)&t_send1, (Optr)PSend7160, (Optr)&t_method_return);
    Method PMethod7147 = new_Method_with(PArray7148, empty_Array, empty_Array, PThreadedCode7149, 1, PSend7160);
    
    MethodClosure MC_SMB_benchmarkNameForSelector_ = new_MethodClosure((Method)PMethod7147, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_benchmarkNameForSelector_, MC_SMB_benchmarkNameForSelector_);
}


static void init_SMB_runs() {
    Symbol SMB_runs = new_Symbol(L"runs");
    Array PThreadedCode7162 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_method_return);
    Method PMethod7161 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7162, 1, slot_PBenchmark_BenchmarkSuite_runs);
    
    MethodClosure MC_SMB_runs = new_MethodClosure((Method)PMethod7161, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runs, MC_SMB_runs);
}


static void init_SMB_runAll() {
    Symbol SMB_runAll = new_Symbol(L"runAll");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7165 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_allSelectors = new_Symbol(L"allSelectors");
    // allSelectors. 
    Send PSend7166 = new_Send((Optr)PSend7165, SMB_allSelectors, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray7168 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    // shouldRunSelector:. 
    Send PSend7170 = new_Send((Optr)self, SMB_shouldRunSelector_, 1, (Optr)VAR_selector_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend7174 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode7173 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7174, (Optr)&t_block_return);
    Block PBlock7172 = new_Block_with(empty_Array, empty_Array, PThreadedCode7173, 1, PSend7174);
    // ifTrue:. 
    Send PSend7171 = new_Send((Optr)PSend7170, SMB_ifTrue_, 1, (Optr)PBlock7172);
    Array PThreadedCode7169 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7170, (Optr)&t_send_ifTrue_, (Optr)PSend7171, (Optr)PBlock7172, (Optr)&t_method_return);
    Block PBlock7167 = new_Block_with(PArray7168, empty_Array, PThreadedCode7169, 1, PSend7171);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7175 = new_Send((Optr)PSend7166, SMB_do_, 1, (Optr)PBlock7167);
    Array PThreadedCode7164 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7165, (Optr)&t_send0, (Optr)PSend7166, (Optr)&t_push_closure, (Optr)PBlock7167, (Optr)&t_send1, (Optr)PSend7175, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7163 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7164, 2, PSend7175, self);
    
    MethodClosure MC_SMB_runAll = new_MethodClosure((Method)PMethod7163, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runAll, MC_SMB_runAll);
}


static void init_class_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_run_ = new_Symbol(L"run:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // run:. 
    Send PSend7178 = new_Send((Optr)self, SMB_run_, 1, (Optr)int_10_Const);
    Array PThreadedCode7177 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend7178, (Optr)&t_method_return);
    Method PMethod7176 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7177, 1, PSend7178);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7176, HEADER(PBenchmark_BenchmarkSuite_Class));
    store_method(HEADER(PBenchmark_BenchmarkSuite_Class), SMB_run, MC_SMB_run);
}


static void init_class_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_probeCount_0_0 = new_Variable_named(L"probeCount", 0);
    Array PArray7180 = new_Array_with(1, (Optr)VAR_probeCount_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7183 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7185 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)VAR_probeCount_0_0);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7186 = new_Send((Optr)VAR__receiver__1_0, SMB_run, 0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend7187 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode7184 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_probeCount_0_0, (Optr)&t_send1, (Optr)PSend7185, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7186, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7187, (Optr)&t_method_return);
    Block PBlock7182 = new_Block_with(PArray7183, empty_Array, PThreadedCode7184, 3, PSend7185, PSend7186, PSend7187);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7188 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7189 = new_Send((Optr)PBlock7182, SMB_value_, 1, (Optr)PSend7188);
    Array PThreadedCode7181 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock7182, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7188, (Optr)&t_send1, (Optr)PSend7189, (Optr)&t_method_return);
    Method PMethod7179 = new_Method_with(PArray7180, empty_Array, empty_Array, PThreadedCode7181, 1, PSend7189);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7179, HEADER(PBenchmark_BenchmarkSuite_Class));
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