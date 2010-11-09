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
    // baseBenchmark. 
    Send PSend7031 = new_Send((Optr)self, SMB_baseBenchmark, 0);
    Assign PAssign7030 = new_Assign((Optr)VAR_base_0_1, (Optr)PSend7031);
    // escape:. 
    Send PSend7034 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7033 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7034, (Optr)&t_block_return);
    Block PBlock7032 = new_Block_with(empty_Array, empty_Array, PThreadedCode7033, 1, PSend7034);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend7035 = new_Send((Optr)VAR_base_0_1, SMB_ifNil_, 1, (Optr)PBlock7032);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7036 = new_Send((Optr)VAR_base_0_1, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_7040 = new_String(L"baseBenchmark cannot be self");
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    Constant string_7040_Const = new_Constant((Optr)string_7040);
    // signal:. 
    Send PSend7041 = new_Send((Optr)Error_classReference, SMB_signal_, 1, (Optr)string_7040_Const);
    Array PThreadedCode7039 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push1, (Optr)string_7040, (Optr)&t_send1, (Optr)PSend7041, (Optr)&t_block_return);
    Block PBlock7038 = new_Block_with(empty_Array, empty_Array, PThreadedCode7039, 1, PSend7041);
    // ifTrue:. 
    Send PSend7037 = new_Send((Optr)PSend7036, SMB_ifTrue_, 1, (Optr)PBlock7038);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7042 = new_Send((Optr)VAR_base_0_1, SMB_runAll, 0);
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend7043 = new_Send((Optr)PSend7042, SMB_runs, 0);
    Variable VAR_selector_2_0 = new_Variable_named(L"selector", 2);
    Variable VAR_aRun_2_1 = new_Variable_named(L"aRun", 2);
    Array PArray7045 = new_Array_with(2, (Optr)VAR_selector_2_0, (Optr)VAR_aRun_2_1);
    // runs. 
    Send PSend7047 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7048 = new_Send((Optr)PSend7047, SMB_at_, 1, (Optr)VAR_selector_2_0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend7049 = new_Send((Optr)PSend7048, SMB_base_, 1, (Optr)VAR_aRun_2_1);
    Array PThreadedCode7046 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7047, (Optr)&t_push_variable, (Optr)VAR_selector_2_0, (Optr)&t_send1, (Optr)PSend7048, (Optr)&t_push_variable, (Optr)VAR_aRun_2_1, (Optr)&t_send1, (Optr)PSend7049, (Optr)&t_method_return);
    Block PBlock7044 = new_Block_with(PArray7045, empty_Array, PThreadedCode7046, 1, PSend7049);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend7050 = new_Send((Optr)PSend7043, SMB_keysAndValuesDo_, 1, (Optr)PBlock7044);
    Array PThreadedCode7024 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_baseBenchmark, (Optr)&t_send1, (Optr)PSend7025, (Optr)&t_send_ifFalse_, (Optr)PSend7026, (Optr)PBlock7027, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7030, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7031, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_push_closure, (Optr)PBlock7032, (Optr)&t_send1, (Optr)PSend7035, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7036, (Optr)&t_send_ifTrue_, (Optr)PSend7037, (Optr)PBlock7038, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_send0, (Optr)PSend7042, (Optr)&t_send0, (Optr)PSend7043, (Optr)&t_push_closure, (Optr)PBlock7044, (Optr)&t_send1, (Optr)PSend7050, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7022 = new_Block_with(PArray7023, empty_Array, PThreadedCode7024, 6, PSend7026, PAssign7030, PSend7035, PSend7037, PSend7050, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7051 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7022);
    Array PThreadedCode7021 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7022, (Optr)&t_send1, (Optr)PSend7051, (Optr)&t_method_return);
    Method PMethod7019 = new_Method_with(empty_Array, PArray7020, empty_Array, PThreadedCode7021, 1, PSend7051);
    
    MethodClosure MC_SMB_runBaseBenchmark = new_MethodClosure((Method)PMethod7019, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runBaseBenchmark, MC_SMB_runBaseBenchmark);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend7054 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_removeAll, 0);
    Array PThreadedCode7053 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7054, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7052 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7053, 2, PSend7054, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod7052, PBenchmark_BenchmarkSuite_Class);
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
    Send PSend7057 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7058 = new_Send((Optr)self, SMB_runAll, 0);
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    // runBaseBenchmark. 
    Send PSend7059 = new_Send((Optr)self, SMB_runBaseBenchmark, 0);
    Array PThreadedCode7056 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7057, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7058, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7059, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7055 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7056, 4, PSend7057, PSend7058, PSend7059, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7055, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Array PThreadedCode7061 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7060 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7061, 1, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7060, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7064 = new_Send((Optr)self, SMB_sum, 0);
    Array PThreadedCode7063 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7064, (Optr)&t_method_return);
    Method PMethod7062 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7063, 1, PSend7064);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod7062, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_total, MC_SMB_total);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray7066 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7069 = new_Array_with(1, (Optr)VAR_run_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend7071 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_run_1_0, (Optr)VAR_run_1_0);
    Array PThreadedCode7070 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_send2, (Optr)PSend7071, (Optr)&t_method_return);
    Block PBlock7068 = new_Block_with(PArray7069, empty_Array, PThreadedCode7070, 1, PSend7071);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7072 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7068);
    Array PThreadedCode7067 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7068, (Optr)&t_send1, (Optr)PSend7072, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7065 = new_Method_with(PArray7066, empty_Array, empty_Array, PThreadedCode7067, 2, PSend7072, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod7065, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Array PThreadedCode7074 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7073 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7074, 1, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7073, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_run_() {
    /*
    run: probeCount
// 	^ self new probeCount: probeCount; run; yourself
    */
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7076 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR_run_0_1 = new_Variable_named(L"run", 0);
    Array PArray7077 = new_Array_with(1, (Optr)VAR_run_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7080 = new_Send((Optr)PBenchmarkRun_classReference, SMB_new, 0);
    Assign PAssign7079 = new_Assign((Optr)VAR_run_0_1, (Optr)PSend7080);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7082 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend7084 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)self);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend7085 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7086 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)PSend7085);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend7087 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    // benchmarkNameForSelector:. 
    Send PSend7088 = new_Send((Optr)self, SMB_benchmarkNameForSelector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend7089 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)PSend7088);
    Array PThreadedCode7083 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7084, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7085, (Optr)&t_send1, (Optr)PSend7086, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7087, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7088, (Optr)&t_send1, (Optr)PSend7089, (Optr)&t_method_return);
    Block PBlock7081 = new_Block_with(PArray7082, empty_Array, PThreadedCode7083, 4, PSend7084, PSend7086, PSend7087, PSend7089);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7090 = new_Send((Optr)PBlock7081, SMB_value_, 1, (Optr)VAR_run_0_1);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7091 = new_Send((Optr)VAR_run_0_1, SMB_run, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7092 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)VAR_run_0_1);
    Array PThreadedCode7078 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign7079, (Optr)&t_push_class_reference, (Optr)PBenchmarkRun_classReference, (Optr)&t_send0, (Optr)PSend7080, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7081, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send1, (Optr)PSend7090, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send0, (Optr)PSend7091, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send2, (Optr)PSend7092, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_method_return);
    Method PMethod7075 = new_Method_with(PArray7076, PArray7077, empty_Array, PThreadedCode7078, 5, PAssign7079, PSend7090, PSend7091, PSend7092, VAR_run_0_1);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7075, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7095 = new_Send((Optr)self, SMB_sum, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7096 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7097 = new_Send((Optr)PSend7096, SMB_asFloat, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend7098 = new_Send((Optr)PSend7095, SMB__divide_, 1, (Optr)PSend7097);
    Array PThreadedCode7094 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7095, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7096, (Optr)&t_send0, (Optr)PSend7097, (Optr)&t_send1, (Optr)PSend7098, (Optr)&t_method_return);
    Method PMethod7093 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7094, 1, PSend7098);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod7093, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper7101 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7103 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign7102 = new_Assign((Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)PSend7103);
    Array PThreadedCode7100 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7101, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7102, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7103, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7099 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7100, 3, PSuper7101, PAssign7102, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7099, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7105 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7107 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend7108 = new_Send((Optr)PSend7107, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7109 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend7108);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7110 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend7111 = new_Send((Optr)PSend7110, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_7115 = new_String(L": ");
    Constant string_7115_Const = new_Constant((Optr)string_7115);
    // <<. 
    Send PSend7116 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_7115_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper7117 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode7114 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_7115, (Optr)&t_send1, (Optr)PSend7116, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper7117, (Optr)&t_block_return);
    Block PBlock7113 = new_Block_with(empty_Array, empty_Array, PThreadedCode7114, 2, PSend7116, PSuper7117);
    // ifTrue:. 
    Send PSend7112 = new_Send((Optr)PSend7111, SMB_ifTrue_, 1, (Optr)PBlock7113);
    Array PThreadedCode7106 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7107, (Optr)&t_send0, (Optr)PSend7108, (Optr)&t_send1, (Optr)PSend7109, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7110, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7111, (Optr)&t_send_ifTrue_, (Optr)PSend7112, (Optr)PBlock7113, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7104 = new_Method_with(PArray7105, empty_Array, empty_Array, PThreadedCode7106, 3, PSend7109, PSend7112, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod7104, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7119 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend7121 = new_Send((Optr)self, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7123 = new_Array_with(1, (Optr)VAR_run_1_0);
    // printOn:. 
    Send PSend7125 = new_Send((Optr)VAR_run_1_0, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4726 = new_Character(L' ');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // <<. 
    Send PSend7126 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4726_Const);
    Array PThreadedCode7124 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend7126, (Optr)&t_method_return);
    Block PBlock7122 = new_Block_with(PArray7123, empty_Array, PThreadedCode7124, 2, PSend7125, PSend7126);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7127 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7122);
    Array PThreadedCode7120 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7121, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7122, (Optr)&t_send1, (Optr)PSend7127, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7118 = new_Method_with(PArray7119, empty_Array, empty_Array, PThreadedCode7120, 3, PSend7121, PSend7127, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7118, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_shouldRunSelector_() {
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7129 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7132 = new_Array_with(1, (Optr)VAR__return__1_0);
    Character char_444 = new_Character(L':');
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // includes:. 
    Send PSend7134 = new_Send((Optr)VAR_selector_0_0, SMB_includes_, 1, (Optr)char_444_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7138 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7137 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7138, (Optr)&t_block_return);
    Block PBlock7136 = new_Block_with(empty_Array, empty_Array, PThreadedCode7137, 1, PSend7138);
    // ifTrue:. 
    Send PSend7135 = new_Send((Optr)PSend7134, SMB_ifTrue_, 1, (Optr)PBlock7136);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7139 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Array PThreadedCode7133 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend7134, (Optr)&t_send_ifTrue_, (Optr)PSend7135, (Optr)PBlock7136, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7139, (Optr)&t_method_return);
    Block PBlock7131 = new_Block_with(PArray7132, empty_Array, PThreadedCode7133, 2, PSend7135, PSend7139);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7140 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7131);
    Array PThreadedCode7130 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7131, (Optr)&t_send1, (Optr)PSend7140, (Optr)&t_method_return);
    Method PMethod7128 = new_Method_with(PArray7129, empty_Array, empty_Array, PThreadedCode7130, 1, PSend7140);
    
    MethodClosure MC_SMB_shouldRunSelector_ = new_MethodClosure((Method)PMethod7128, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_shouldRunSelector_, MC_SMB_shouldRunSelector_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    // stdevSquared. 
    Send PSend7143 = new_Send((Optr)self, SMB_stdevSquared, 0);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend7144 = new_Send((Optr)PSend7143, SMB_sqrt, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7145 = new_Send((Optr)PSend7144, SMB_asFloat, 0);
    Array PThreadedCode7142 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7143, (Optr)&t_send0, (Optr)PSend7144, (Optr)&t_send0, (Optr)PSend7145, (Optr)&t_method_return);
    Method PMethod7141 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7142, 1, PSend7145);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod7141, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray7149 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend7151 = new_Send((Optr)VAR_run_1_1, SMB_average, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7152 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend7151);
    Array PThreadedCode7150 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend7151, (Optr)&t_send1, (Optr)PSend7152, (Optr)&t_method_return);
    Block PBlock7148 = new_Block_with(PArray7149, empty_Array, PThreadedCode7150, 1, PSend7152);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend7153 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock7148);
    Array PThreadedCode7147 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock7148, (Optr)&t_send2, (Optr)PSend7153, (Optr)&t_method_return);
    Method PMethod7146 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7147, 1, PSend7153);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod7146, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_benchmarkNameForSelector_() {
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7155 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7158 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7160 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7164 = new_Send((Optr)VAR_selector_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // copyFrom:to:. 
    Send PSend7165 = new_Send((Optr)VAR_selector_0_0, SMB_copyFrom_to_, 2, (Optr)int_6_Const, (Optr)PSend7164);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7166 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7165);
    Array PThreadedCode7163 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send0, (Optr)PSend7164, (Optr)&t_send2, (Optr)PSend7165, (Optr)&t_send1, (Optr)PSend7166, (Optr)&t_block_return);
    Block PBlock7162 = new_Block_with(empty_Array, empty_Array, PThreadedCode7163, 1, PSend7166);
    // ifTrue:. 
    Send PSend7161 = new_Send((Optr)PSend7160, SMB_ifTrue_, 1, (Optr)PBlock7162);
    Array PThreadedCode7159 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7160, (Optr)&t_send_ifTrue_, (Optr)PSend7161, (Optr)PBlock7162, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_method_return);
    Block PBlock7157 = new_Block_with(PArray7158, empty_Array, PThreadedCode7159, 2, PSend7161, VAR_selector_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7167 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7157);
    Array PThreadedCode7156 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7157, (Optr)&t_send1, (Optr)PSend7167, (Optr)&t_method_return);
    Method PMethod7154 = new_Method_with(PArray7155, empty_Array, empty_Array, PThreadedCode7156, 1, PSend7167);
    
    MethodClosure MC_SMB_benchmarkNameForSelector_ = new_MethodClosure((Method)PMethod7154, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_benchmarkNameForSelector_, MC_SMB_benchmarkNameForSelector_);
}


static void init_SMB_runs() {
    Symbol SMB_runs = new_Symbol(L"runs");
    Array PThreadedCode7169 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_method_return);
    Method PMethod7168 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7169, 1, slot_PBenchmark_BenchmarkSuite_runs);
    
    MethodClosure MC_SMB_runs = new_MethodClosure((Method)PMethod7168, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runs, MC_SMB_runs);
}


static void init_SMB_runAll() {
    Symbol SMB_runAll = new_Symbol(L"runAll");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7172 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_allSelectors = new_Symbol(L"allSelectors");
    // allSelectors. 
    Send PSend7173 = new_Send((Optr)PSend7172, SMB_allSelectors, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray7175 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    // shouldRunSelector:. 
    Send PSend7177 = new_Send((Optr)self, SMB_shouldRunSelector_, 1, (Optr)VAR_selector_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend7181 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode7180 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7181, (Optr)&t_block_return);
    Block PBlock7179 = new_Block_with(empty_Array, empty_Array, PThreadedCode7180, 1, PSend7181);
    // ifTrue:. 
    Send PSend7178 = new_Send((Optr)PSend7177, SMB_ifTrue_, 1, (Optr)PBlock7179);
    Array PThreadedCode7176 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7177, (Optr)&t_send_ifTrue_, (Optr)PSend7178, (Optr)PBlock7179, (Optr)&t_method_return);
    Block PBlock7174 = new_Block_with(PArray7175, empty_Array, PThreadedCode7176, 1, PSend7178);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7182 = new_Send((Optr)PSend7173, SMB_do_, 1, (Optr)PBlock7174);
    Array PThreadedCode7171 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7172, (Optr)&t_send0, (Optr)PSend7173, (Optr)&t_push_closure, (Optr)PBlock7174, (Optr)&t_send1, (Optr)PSend7182, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7170 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7171, 2, PSend7182, self);
    
    MethodClosure MC_SMB_runAll = new_MethodClosure((Method)PMethod7170, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runAll, MC_SMB_runAll);
}


static void init_class_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_run_ = new_Symbol(L"run:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // run:. 
    Send PSend7185 = new_Send((Optr)self, SMB_run_, 1, (Optr)int_10_Const);
    Array PThreadedCode7184 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend7185, (Optr)&t_method_return);
    Method PMethod7183 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7184, 1, PSend7185);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7183, HEADER(PBenchmark_BenchmarkSuite_Class));
    store_method(HEADER(PBenchmark_BenchmarkSuite_Class), SMB_run, MC_SMB_run);
}


static void init_class_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_probeCount_0_0 = new_Variable_named(L"probeCount", 0);
    Array PArray7187 = new_Array_with(1, (Optr)VAR_probeCount_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7190 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7192 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)VAR_probeCount_0_0);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7193 = new_Send((Optr)VAR__receiver__1_0, SMB_run, 0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend7194 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode7191 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_probeCount_0_0, (Optr)&t_send1, (Optr)PSend7192, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7193, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7194, (Optr)&t_method_return);
    Block PBlock7189 = new_Block_with(PArray7190, empty_Array, PThreadedCode7191, 3, PSend7192, PSend7193, PSend7194);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7195 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7196 = new_Send((Optr)PBlock7189, SMB_value_, 1, (Optr)PSend7195);
    Array PThreadedCode7188 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock7189, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7195, (Optr)&t_send1, (Optr)PSend7196, (Optr)&t_method_return);
    Method PMethod7186 = new_Method_with(PArray7187, empty_Array, empty_Array, PThreadedCode7188, 1, PSend7196);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7186, HEADER(PBenchmark_BenchmarkSuite_Class));
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