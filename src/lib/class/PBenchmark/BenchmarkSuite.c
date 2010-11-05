#include <lib/class/PBenchmark/BenchmarkSuite.h>


Optr layout_PBenchmark_BenchmarkSuite_Class_class;
Optr slot_PBenchmark_BenchmarkSuite_runs;
Optr layout_PBenchmark_BenchmarkSuite;


static void init_SMB_stdevSquared() {
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray7007 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend7009 = new_Send((Optr)VAR_run_1_1, SMB_stdev, 0);
    Symbol SMB_squared = new_Symbol(L"squared");
    // squared. 
    Send PSend7010 = new_Send((Optr)PSend7009, SMB_squared, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7011 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend7010);
    Array PThreadedCode7008 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend7009, (Optr)&t_send0, (Optr)PSend7010, (Optr)&t_send1, (Optr)PSend7011, (Optr)&t_method_return);
    Block PBlock7006 = new_Block_with(PArray7007, empty_Array, PThreadedCode7008, 1, PSend7011);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend7012 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock7006);
    Array PThreadedCode7005 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock7006, (Optr)&t_send2, (Optr)PSend7012, (Optr)&t_method_return);
    Method PMethod7004 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7005, 1, PSend7012);
    
    MethodClosure MC_SMB_stdevSquared = new_MethodClosure((Method)PMethod7004, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdevSquared, MC_SMB_stdevSquared);
}


static void init_SMB_lastResult() {
    Symbol SMB_lastResult = new_Symbol(L"lastResult");
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend7015 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend7016 = new_Send((Optr)PSend7015, SMB_last, 0);
    Array PThreadedCode7014 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7015, (Optr)&t_send0, (Optr)PSend7016, (Optr)&t_method_return);
    Method PMethod7013 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7014, 1, PSend7016);
    
    MethodClosure MC_SMB_lastResult = new_MethodClosure((Method)PMethod7013, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_lastResult, MC_SMB_lastResult);
}


static void init_SMB_d() {
    Symbol SMB_d = new_Symbol(L"d");
    Array PThreadedCode7018 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7017 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7018, 1, self);
    
    MethodClosure MC_SMB_d = new_MethodClosure((Method)PMethod7017, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_d, MC_SMB_d);
}


static void init_SMB_runBaseBenchmark() {
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    Variable VAR_results_0_0 = new_Variable_named(L"results", 0);
    Variable VAR_base_0_1 = new_Variable_named(L"base", 0);
    Array PArray7020 = new_Array_with(2, (Optr)VAR_results_0_0, (Optr)VAR_base_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7023 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_baseBenchmark = new_Symbol(L"baseBenchmark");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_baseBenchmark_Const = new_Constant((Optr)SMB_baseBenchmark);
    // respondsTo:. 
    Send PSend7025 = new_Send((Optr)self, SMB_respondsTo_, 1, (Optr)SMB_baseBenchmark_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7029 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7028 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7029, (Optr)&t_block_return);
    Block PBlock7027 = new_Block_with(empty_Array, empty_Array, PThreadedCode7028, 1, PSend7029);
    // ifFalse:. 
    Send PSend7026 = new_Send((Optr)PSend7025, SMB_ifFalse_, 1, (Optr)PBlock7027);
    String string_7030 = new_String(L"Running Base Benchmark");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_7030_Const = new_Constant((Optr)string_7030);
    // warn:. 
    Send PSend7031 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_7030_Const);
    // baseBenchmark. 
    Send PSend7033 = new_Send((Optr)self, SMB_baseBenchmark, 0);
    Assign PAssign7032 = new_Assign((Optr)VAR_base_0_1, (Optr)PSend7033);
    // escape:. 
    Send PSend7036 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7035 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7036, (Optr)&t_block_return);
    Block PBlock7034 = new_Block_with(empty_Array, empty_Array, PThreadedCode7035, 1, PSend7036);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend7037 = new_Send((Optr)VAR_base_0_1, SMB_ifNil_, 1, (Optr)PBlock7034);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7038 = new_Send((Optr)VAR_base_0_1, SMB_runAll, 0);
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend7039 = new_Send((Optr)PSend7038, SMB_runs, 0);
    Variable VAR_selector_2_0 = new_Variable_named(L"selector", 2);
    Variable VAR_run_2_1 = new_Variable_named(L"run", 2);
    Array PArray7041 = new_Array_with(2, (Optr)VAR_selector_2_0, (Optr)VAR_run_2_1);
    // runs. 
    Send PSend7043 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7044 = new_Send((Optr)PSend7043, SMB_at_, 1, (Optr)VAR_selector_2_0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend7045 = new_Send((Optr)PSend7044, SMB_base_, 1, (Optr)VAR_run_2_1);
    Array PThreadedCode7042 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7043, (Optr)&t_push_variable, (Optr)VAR_selector_2_0, (Optr)&t_send1, (Optr)PSend7044, (Optr)&t_push_variable, (Optr)VAR_run_2_1, (Optr)&t_send1, (Optr)PSend7045, (Optr)&t_method_return);
    Block PBlock7040 = new_Block_with(PArray7041, empty_Array, PThreadedCode7042, 1, PSend7045);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend7046 = new_Send((Optr)PSend7039, SMB_keysAndValuesDo_, 1, (Optr)PBlock7040);
    Array PThreadedCode7024 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_baseBenchmark, (Optr)&t_send1, (Optr)PSend7025, (Optr)&t_send_ifFalse_, (Optr)PSend7026, (Optr)PBlock7027, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_7030, (Optr)&t_send1, (Optr)PSend7031, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7032, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7033, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_push_closure, (Optr)PBlock7034, (Optr)&t_send1, (Optr)PSend7037, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_send0, (Optr)PSend7038, (Optr)&t_send0, (Optr)PSend7039, (Optr)&t_push_closure, (Optr)PBlock7040, (Optr)&t_send1, (Optr)PSend7046, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7022 = new_Block_with(PArray7023, empty_Array, PThreadedCode7024, 6, PSend7026, PSend7031, PAssign7032, PSend7037, PSend7046, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7047 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7022);
    Array PThreadedCode7021 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7022, (Optr)&t_send1, (Optr)PSend7047, (Optr)&t_method_return);
    Method PMethod7019 = new_Method_with(empty_Array, PArray7020, empty_Array, PThreadedCode7021, 1, PSend7047);
    
    MethodClosure MC_SMB_runBaseBenchmark = new_MethodClosure((Method)PMethod7019, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runBaseBenchmark, MC_SMB_runBaseBenchmark);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend7050 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_removeAll, 0);
    Array PThreadedCode7049 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7050, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7048 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7049, 2, PSend7050, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod7048, PBenchmark_BenchmarkSuite_Class);
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
    Send PSend7053 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7054 = new_Send((Optr)self, SMB_runAll, 0);
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    // runBaseBenchmark. 
    Send PSend7055 = new_Send((Optr)self, SMB_runBaseBenchmark, 0);
    String string_7056 = new_String(L"ended run");
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Constant string_7056_Const = new_Constant((Optr)string_7056);
    // warn:. 
    Send PSend7057 = new_Send((Optr)self, SMB_warn_, 1, (Optr)string_7056_Const);
    Array PThreadedCode7052 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7053, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7054, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7055, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_7056, (Optr)&t_send1, (Optr)PSend7057, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7051 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7052, 5, PSend7053, PSend7054, PSend7055, PSend7057, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7051, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Array PThreadedCode7059 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7058 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7059, 1, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7058, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7062 = new_Send((Optr)self, SMB_sum, 0);
    Array PThreadedCode7061 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7062, (Optr)&t_method_return);
    Method PMethod7060 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7061, 1, PSend7062);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod7060, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_total, MC_SMB_total);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray7064 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7067 = new_Array_with(1, (Optr)VAR_run_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend7069 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_run_1_0, (Optr)VAR_run_1_0);
    Array PThreadedCode7068 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_send2, (Optr)PSend7069, (Optr)&t_method_return);
    Block PBlock7066 = new_Block_with(PArray7067, empty_Array, PThreadedCode7068, 1, PSend7069);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7070 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7066);
    Array PThreadedCode7065 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7066, (Optr)&t_send1, (Optr)PSend7070, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7063 = new_Method_with(PArray7064, empty_Array, empty_Array, PThreadedCode7065, 2, PSend7070, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod7063, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Array PThreadedCode7072 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7071 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7072, 1, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7071, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_run_() {
    /*
    run: probeCount
// 	^ self new probeCount: probeCount; run; yourself
    */
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7074 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR_run_0_1 = new_Variable_named(L"run", 0);
    Array PArray7075 = new_Array_with(1, (Optr)VAR_run_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7078 = new_Send((Optr)PBenchmarkRun_classReference, SMB_new, 0);
    Assign PAssign7077 = new_Assign((Optr)VAR_run_0_1, (Optr)PSend7078);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7080 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend7082 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)self);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend7083 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7084 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)PSend7083);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend7085 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    // benchmarkNameForSelector:. 
    Send PSend7086 = new_Send((Optr)self, SMB_benchmarkNameForSelector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend7087 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)PSend7086);
    Array PThreadedCode7081 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7082, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7083, (Optr)&t_send1, (Optr)PSend7084, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7085, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7086, (Optr)&t_send1, (Optr)PSend7087, (Optr)&t_method_return);
    Block PBlock7079 = new_Block_with(PArray7080, empty_Array, PThreadedCode7081, 4, PSend7082, PSend7084, PSend7085, PSend7087);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7088 = new_Send((Optr)PBlock7079, SMB_value_, 1, (Optr)VAR_run_0_1);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7089 = new_Send((Optr)VAR_run_0_1, SMB_run, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7090 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)VAR_run_0_1);
    Array PThreadedCode7076 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign7077, (Optr)&t_push_class_reference, (Optr)PBenchmarkRun_classReference, (Optr)&t_send0, (Optr)PSend7078, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7079, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send1, (Optr)PSend7088, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send0, (Optr)PSend7089, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send2, (Optr)PSend7090, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7073 = new_Method_with(PArray7074, PArray7075, empty_Array, PThreadedCode7076, 5, PAssign7077, PSend7088, PSend7089, PSend7090, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7073, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7093 = new_Send((Optr)self, SMB_sum, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7094 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7095 = new_Send((Optr)PSend7094, SMB_asFloat, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend7096 = new_Send((Optr)PSend7093, SMB__divide_, 1, (Optr)PSend7095);
    Array PThreadedCode7092 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7093, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7094, (Optr)&t_send0, (Optr)PSend7095, (Optr)&t_send1, (Optr)PSend7096, (Optr)&t_method_return);
    Method PMethod7091 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7092, 1, PSend7096);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod7091, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper7099 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7101 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign7100 = new_Assign((Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)PSend7101);
    Array PThreadedCode7098 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7099, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7100, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7101, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7097 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7098, 3, PSuper7099, PAssign7100, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7097, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7103 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7105 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend7106 = new_Send((Optr)PSend7105, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7107 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend7106);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7108 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend7109 = new_Send((Optr)PSend7108, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_7113 = new_String(L": ");
    Constant string_7113_Const = new_Constant((Optr)string_7113);
    // <<. 
    Send PSend7114 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_7113_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper7115 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode7112 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_7113, (Optr)&t_send1, (Optr)PSend7114, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper7115, (Optr)&t_block_return);
    Block PBlock7111 = new_Block_with(empty_Array, empty_Array, PThreadedCode7112, 2, PSend7114, PSuper7115);
    // ifTrue:. 
    Send PSend7110 = new_Send((Optr)PSend7109, SMB_ifTrue_, 1, (Optr)PBlock7111);
    Array PThreadedCode7104 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7105, (Optr)&t_send0, (Optr)PSend7106, (Optr)&t_send1, (Optr)PSend7107, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7108, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7109, (Optr)&t_send_ifTrue_, (Optr)PSend7110, (Optr)PBlock7111, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7102 = new_Method_with(PArray7103, empty_Array, empty_Array, PThreadedCode7104, 3, PSend7107, PSend7110, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod7102, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7117 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend7119 = new_Send((Optr)self, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7121 = new_Array_with(1, (Optr)VAR_run_1_0);
    // printOn:. 
    Send PSend7123 = new_Send((Optr)VAR_run_1_0, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4726 = new_Character(L' ');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // <<. 
    Send PSend7124 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4726_Const);
    Array PThreadedCode7122 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7123, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend7124, (Optr)&t_method_return);
    Block PBlock7120 = new_Block_with(PArray7121, empty_Array, PThreadedCode7122, 2, PSend7123, PSend7124);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7125 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7120);
    Array PThreadedCode7118 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7119, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7120, (Optr)&t_send1, (Optr)PSend7125, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7116 = new_Method_with(PArray7117, empty_Array, empty_Array, PThreadedCode7118, 3, PSend7119, PSend7125, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7116, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_shouldRunSelector_() {
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7127 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7130 = new_Array_with(1, (Optr)VAR__return__1_0);
    Character char_444 = new_Character(L':');
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // includes:. 
    Send PSend7132 = new_Send((Optr)VAR_selector_0_0, SMB_includes_, 1, (Optr)char_444_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7136 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7135 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7136, (Optr)&t_block_return);
    Block PBlock7134 = new_Block_with(empty_Array, empty_Array, PThreadedCode7135, 1, PSend7136);
    // ifTrue:. 
    Send PSend7133 = new_Send((Optr)PSend7132, SMB_ifTrue_, 1, (Optr)PBlock7134);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7137 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Array PThreadedCode7131 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend7132, (Optr)&t_send_ifTrue_, (Optr)PSend7133, (Optr)PBlock7134, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7137, (Optr)&t_method_return);
    Block PBlock7129 = new_Block_with(PArray7130, empty_Array, PThreadedCode7131, 2, PSend7133, PSend7137);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7138 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7129);
    Array PThreadedCode7128 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7129, (Optr)&t_send1, (Optr)PSend7138, (Optr)&t_method_return);
    Method PMethod7126 = new_Method_with(PArray7127, empty_Array, empty_Array, PThreadedCode7128, 1, PSend7138);
    
    MethodClosure MC_SMB_shouldRunSelector_ = new_MethodClosure((Method)PMethod7126, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_shouldRunSelector_, MC_SMB_shouldRunSelector_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    // stdevSquared. 
    Send PSend7141 = new_Send((Optr)self, SMB_stdevSquared, 0);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend7142 = new_Send((Optr)PSend7141, SMB_sqrt, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7143 = new_Send((Optr)PSend7142, SMB_asFloat, 0);
    Array PThreadedCode7140 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7141, (Optr)&t_send0, (Optr)PSend7142, (Optr)&t_send0, (Optr)PSend7143, (Optr)&t_method_return);
    Method PMethod7139 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7140, 1, PSend7143);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod7139, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray7147 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend7149 = new_Send((Optr)VAR_run_1_1, SMB_average, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7150 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend7149);
    Array PThreadedCode7148 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend7149, (Optr)&t_send1, (Optr)PSend7150, (Optr)&t_method_return);
    Block PBlock7146 = new_Block_with(PArray7147, empty_Array, PThreadedCode7148, 1, PSend7150);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend7151 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock7146);
    Array PThreadedCode7145 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock7146, (Optr)&t_send2, (Optr)PSend7151, (Optr)&t_method_return);
    Method PMethod7144 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7145, 1, PSend7151);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod7144, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_benchmarkNameForSelector_() {
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7153 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7156 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7158 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7162 = new_Send((Optr)VAR_selector_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // copyFrom:to:. 
    Send PSend7163 = new_Send((Optr)VAR_selector_0_0, SMB_copyFrom_to_, 2, (Optr)int_6_Const, (Optr)PSend7162);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7164 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7163);
    Array PThreadedCode7161 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send0, (Optr)PSend7162, (Optr)&t_send2, (Optr)PSend7163, (Optr)&t_send1, (Optr)PSend7164, (Optr)&t_block_return);
    Block PBlock7160 = new_Block_with(empty_Array, empty_Array, PThreadedCode7161, 1, PSend7164);
    // ifTrue:. 
    Send PSend7159 = new_Send((Optr)PSend7158, SMB_ifTrue_, 1, (Optr)PBlock7160);
    Array PThreadedCode7157 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7158, (Optr)&t_send_ifTrue_, (Optr)PSend7159, (Optr)PBlock7160, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_method_return);
    Block PBlock7155 = new_Block_with(PArray7156, empty_Array, PThreadedCode7157, 2, PSend7159, VAR_selector_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7165 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7155);
    Array PThreadedCode7154 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7155, (Optr)&t_send1, (Optr)PSend7165, (Optr)&t_method_return);
    Method PMethod7152 = new_Method_with(PArray7153, empty_Array, empty_Array, PThreadedCode7154, 1, PSend7165);
    
    MethodClosure MC_SMB_benchmarkNameForSelector_ = new_MethodClosure((Method)PMethod7152, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_benchmarkNameForSelector_, MC_SMB_benchmarkNameForSelector_);
}


static void init_SMB_runs() {
    Symbol SMB_runs = new_Symbol(L"runs");
    Array PThreadedCode7167 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_method_return);
    Method PMethod7166 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7167, 1, slot_PBenchmark_BenchmarkSuite_runs);
    
    MethodClosure MC_SMB_runs = new_MethodClosure((Method)PMethod7166, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runs, MC_SMB_runs);
}


static void init_SMB_runAll() {
    Symbol SMB_runAll = new_Symbol(L"runAll");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7170 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_allSelectors = new_Symbol(L"allSelectors");
    // allSelectors. 
    Send PSend7171 = new_Send((Optr)PSend7170, SMB_allSelectors, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray7173 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    // shouldRunSelector:. 
    Send PSend7175 = new_Send((Optr)self, SMB_shouldRunSelector_, 1, (Optr)VAR_selector_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend7179 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode7178 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7179, (Optr)&t_block_return);
    Block PBlock7177 = new_Block_with(empty_Array, empty_Array, PThreadedCode7178, 1, PSend7179);
    // ifTrue:. 
    Send PSend7176 = new_Send((Optr)PSend7175, SMB_ifTrue_, 1, (Optr)PBlock7177);
    Array PThreadedCode7174 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7175, (Optr)&t_send_ifTrue_, (Optr)PSend7176, (Optr)PBlock7177, (Optr)&t_method_return);
    Block PBlock7172 = new_Block_with(PArray7173, empty_Array, PThreadedCode7174, 1, PSend7176);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7180 = new_Send((Optr)PSend7171, SMB_do_, 1, (Optr)PBlock7172);
    Array PThreadedCode7169 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7170, (Optr)&t_send0, (Optr)PSend7171, (Optr)&t_push_closure, (Optr)PBlock7172, (Optr)&t_send1, (Optr)PSend7180, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7168 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7169, 2, PSend7180, self);
    
    MethodClosure MC_SMB_runAll = new_MethodClosure((Method)PMethod7168, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runAll, MC_SMB_runAll);
}


static void init_class_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_run_ = new_Symbol(L"run:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // run:. 
    Send PSend7183 = new_Send((Optr)self, SMB_run_, 1, (Optr)int_10_Const);
    Array PThreadedCode7182 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend7183, (Optr)&t_method_return);
    Method PMethod7181 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7182, 1, PSend7183);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7181, HEADER(PBenchmark_BenchmarkSuite_Class));
    store_method(HEADER(PBenchmark_BenchmarkSuite_Class), SMB_run, MC_SMB_run);
}


static void init_class_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_probeCount_0_0 = new_Variable_named(L"probeCount", 0);
    Array PArray7185 = new_Array_with(1, (Optr)VAR_probeCount_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7188 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7190 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)VAR_probeCount_0_0);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7191 = new_Send((Optr)VAR__receiver__1_0, SMB_run, 0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend7192 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode7189 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_probeCount_0_0, (Optr)&t_send1, (Optr)PSend7190, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7191, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7192, (Optr)&t_method_return);
    Block PBlock7187 = new_Block_with(PArray7188, empty_Array, PThreadedCode7189, 3, PSend7190, PSend7191, PSend7192);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7193 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7194 = new_Send((Optr)PBlock7187, SMB_value_, 1, (Optr)PSend7193);
    Array PThreadedCode7186 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock7187, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7193, (Optr)&t_send1, (Optr)PSend7194, (Optr)&t_method_return);
    Method PMethod7184 = new_Method_with(PArray7185, empty_Array, empty_Array, PThreadedCode7186, 1, PSend7194);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7184, HEADER(PBenchmark_BenchmarkSuite_Class));
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