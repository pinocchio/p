#include <lib/class/PBenchmark/BenchmarkSuite.h>


Optr layout_PBenchmark_BenchmarkSuite_Class_class;
Optr slot_PBenchmark_BenchmarkSuite_runs;
Optr layout_PBenchmark_BenchmarkSuite;


static void init_SMB_stdevSquared() {
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray6968 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend6970 = new_Send((Optr)VAR_run_1_1, SMB_stdev, 0);
    Symbol SMB_squared = new_Symbol(L"squared");
    // squared. 
    Send PSend6971 = new_Send((Optr)PSend6970, SMB_squared, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6972 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend6971);
    Array PThreadedCode6969 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend6970, (Optr)&t_send0, (Optr)PSend6971, (Optr)&t_send1, (Optr)PSend6972, (Optr)&t_method_return);
    Block PBlock6967 = new_Block_with(PArray6968, empty_Array, PThreadedCode6969, 1, PSend6972);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend6973 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock6967);
    Array PThreadedCode6966 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock6967, (Optr)&t_send2, (Optr)PSend6973, (Optr)&t_method_return);
    Method PMethod6965 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6966, 1, PSend6973);
    
    MethodClosure MC_SMB_stdevSquared = new_MethodClosure((Method)PMethod6965, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdevSquared, MC_SMB_stdevSquared);
}


static void init_SMB_lastResult() {
    Symbol SMB_lastResult = new_Symbol(L"lastResult");
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend6976 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend6977 = new_Send((Optr)PSend6976, SMB_last, 0);
    Array PThreadedCode6975 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6976, (Optr)&t_send0, (Optr)PSend6977, (Optr)&t_method_return);
    Method PMethod6974 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6975, 1, PSend6977);
    
    MethodClosure MC_SMB_lastResult = new_MethodClosure((Method)PMethod6974, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_lastResult, MC_SMB_lastResult);
}


static void init_SMB_d() {
    Symbol SMB_d = new_Symbol(L"d");
    Array PThreadedCode6979 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod6978 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6979, 1, self);
    
    MethodClosure MC_SMB_d = new_MethodClosure((Method)PMethod6978, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_d, MC_SMB_d);
}


static void init_SMB_runBaseBenchmark() {
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    Variable VAR_results_0_0 = new_Variable_named(L"results", 0);
    Variable VAR_base_0_1 = new_Variable_named(L"base", 0);
    Array PArray6981 = new_Array_with(2, (Optr)VAR_results_0_0, (Optr)VAR_base_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6984 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_baseBenchmark = new_Symbol(L"baseBenchmark");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_baseBenchmark_Const = new_Constant((Optr)SMB_baseBenchmark);
    // respondsTo:. 
    Send PSend6986 = new_Send((Optr)self, SMB_respondsTo_, 1, (Optr)SMB_baseBenchmark_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6990 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode6989 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend6990, (Optr)&t_block_return);
    Block PBlock6988 = new_Block_with(empty_Array, empty_Array, PThreadedCode6989, 1, PSend6990);
    // ifFalse:. 
    Send PSend6987 = new_Send((Optr)PSend6986, SMB_ifFalse_, 1, (Optr)PBlock6988);
    // baseBenchmark. 
    Send PSend6992 = new_Send((Optr)self, SMB_baseBenchmark, 0);
    Assign PAssign6991 = new_Assign((Optr)VAR_base_0_1, (Optr)PSend6992);
    // escape:. 
    Send PSend6995 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode6994 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend6995, (Optr)&t_block_return);
    Block PBlock6993 = new_Block_with(empty_Array, empty_Array, PThreadedCode6994, 1, PSend6995);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend6996 = new_Send((Optr)VAR_base_0_1, SMB_ifNil_, 1, (Optr)PBlock6993);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend6997 = new_Send((Optr)VAR_base_0_1, SMB_runAll, 0);
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend6998 = new_Send((Optr)PSend6997, SMB_runs, 0);
    Variable VAR_selector_2_0 = new_Variable_named(L"selector", 2);
    Variable VAR_run_2_1 = new_Variable_named(L"run", 2);
    Array PArray7000 = new_Array_with(2, (Optr)VAR_selector_2_0, (Optr)VAR_run_2_1);
    // runs. 
    Send PSend7002 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7003 = new_Send((Optr)PSend7002, SMB_at_, 1, (Optr)VAR_selector_2_0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend7004 = new_Send((Optr)PSend7003, SMB_base_, 1, (Optr)VAR_run_2_1);
    Array PThreadedCode7001 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7002, (Optr)&t_push_variable, (Optr)VAR_selector_2_0, (Optr)&t_send1, (Optr)PSend7003, (Optr)&t_push_variable, (Optr)VAR_run_2_1, (Optr)&t_send1, (Optr)PSend7004, (Optr)&t_method_return);
    Block PBlock6999 = new_Block_with(PArray7000, empty_Array, PThreadedCode7001, 1, PSend7004);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend7005 = new_Send((Optr)PSend6998, SMB_keysAndValuesDo_, 1, (Optr)PBlock6999);
    Array PThreadedCode6985 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_baseBenchmark, (Optr)&t_send1, (Optr)PSend6986, (Optr)&t_send_ifFalse_, (Optr)PSend6987, (Optr)PBlock6988, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6991, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6992, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_push_closure, (Optr)PBlock6993, (Optr)&t_send1, (Optr)PSend6996, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_send0, (Optr)PSend6997, (Optr)&t_send0, (Optr)PSend6998, (Optr)&t_push_closure, (Optr)PBlock6999, (Optr)&t_send1, (Optr)PSend7005, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6983 = new_Block_with(PArray6984, empty_Array, PThreadedCode6985, 5, PSend6987, PAssign6991, PSend6996, PSend7005, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7006 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6983);
    Array PThreadedCode6982 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6983, (Optr)&t_send1, (Optr)PSend7006, (Optr)&t_method_return);
    Method PMethod6980 = new_Method_with(empty_Array, PArray6981, empty_Array, PThreadedCode6982, 1, PSend7006);
    
    MethodClosure MC_SMB_runBaseBenchmark = new_MethodClosure((Method)PMethod6980, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runBaseBenchmark, MC_SMB_runBaseBenchmark);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend7009 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_removeAll, 0);
    Array PThreadedCode7008 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7009, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7007 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7008, 2, PSend7009, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod7007, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_run() {
    /*
    run
// 	^ self run: 30
    */
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend7012 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7013 = new_Send((Optr)self, SMB_runAll, 0);
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    // runBaseBenchmark. 
    Send PSend7014 = new_Send((Optr)self, SMB_runBaseBenchmark, 0);
    Array PThreadedCode7011 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7012, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7013, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7014, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7010 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7011, 4, PSend7012, PSend7013, PSend7014, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7010, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Array PThreadedCode7016 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7015 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7016, 1, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7015, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7019 = new_Send((Optr)self, SMB_sum, 0);
    Array PThreadedCode7018 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7019, (Optr)&t_method_return);
    Method PMethod7017 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7018, 1, PSend7019);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod7017, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_total, MC_SMB_total);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray7021 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7024 = new_Array_with(1, (Optr)VAR_run_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend7026 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_run_1_0, (Optr)VAR_run_1_0);
    Array PThreadedCode7025 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_send2, (Optr)PSend7026, (Optr)&t_method_return);
    Block PBlock7023 = new_Block_with(PArray7024, empty_Array, PThreadedCode7025, 1, PSend7026);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7027 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7023);
    Array PThreadedCode7022 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7023, (Optr)&t_send1, (Optr)PSend7027, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7020 = new_Method_with(PArray7021, empty_Array, empty_Array, PThreadedCode7022, 2, PSend7027, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod7020, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Array PThreadedCode7029 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7028 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7029, 1, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7028, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_run_() {
    /*
    run: probeCount
// 	^ self new probeCount: probeCount; run; yourself
    */
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7031 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR_run_0_1 = new_Variable_named(L"run", 0);
    Array PArray7032 = new_Array_with(1, (Optr)VAR_run_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7035 = new_Send((Optr)PBenchmarkRun_classReference, SMB_new, 0);
    Assign PAssign7034 = new_Assign((Optr)VAR_run_0_1, (Optr)PSend7035);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7037 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend7039 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)self);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend7040 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7041 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)PSend7040);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend7042 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    // benchmarkNameForSelector:. 
    Send PSend7043 = new_Send((Optr)self, SMB_benchmarkNameForSelector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend7044 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)PSend7043);
    Array PThreadedCode7038 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7039, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7040, (Optr)&t_send1, (Optr)PSend7041, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7042, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7043, (Optr)&t_send1, (Optr)PSend7044, (Optr)&t_method_return);
    Block PBlock7036 = new_Block_with(PArray7037, empty_Array, PThreadedCode7038, 4, PSend7039, PSend7041, PSend7042, PSend7044);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7045 = new_Send((Optr)PBlock7036, SMB_value_, 1, (Optr)VAR_run_0_1);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7046 = new_Send((Optr)VAR_run_0_1, SMB_run, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7047 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)VAR_run_0_1);
    Array PThreadedCode7033 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign7034, (Optr)&t_push_class_reference, (Optr)PBenchmarkRun_classReference, (Optr)&t_send0, (Optr)PSend7035, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7036, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send1, (Optr)PSend7045, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send0, (Optr)PSend7046, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send2, (Optr)PSend7047, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7030 = new_Method_with(PArray7031, PArray7032, empty_Array, PThreadedCode7033, 5, PAssign7034, PSend7045, PSend7046, PSend7047, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7030, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7050 = new_Send((Optr)self, SMB_sum, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7051 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7052 = new_Send((Optr)PSend7051, SMB_asFloat, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend7053 = new_Send((Optr)PSend7050, SMB__divide_, 1, (Optr)PSend7052);
    Array PThreadedCode7049 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7050, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7051, (Optr)&t_send0, (Optr)PSend7052, (Optr)&t_send1, (Optr)PSend7053, (Optr)&t_method_return);
    Method PMethod7048 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7049, 1, PSend7053);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod7048, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper7056 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7058 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign7057 = new_Assign((Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)PSend7058);
    Array PThreadedCode7055 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7056, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7057, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7058, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7054 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7055, 3, PSuper7056, PAssign7057, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7054, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7060 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7062 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend7063 = new_Send((Optr)PSend7062, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7064 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend7063);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7065 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend7066 = new_Send((Optr)PSend7065, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_7070 = new_String(L": ");
    Constant string_7070_Const = new_Constant((Optr)string_7070);
    // <<. 
    Send PSend7071 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_7070_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper7072 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode7069 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_7070, (Optr)&t_send1, (Optr)PSend7071, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper7072, (Optr)&t_block_return);
    Block PBlock7068 = new_Block_with(empty_Array, empty_Array, PThreadedCode7069, 2, PSend7071, PSuper7072);
    // ifTrue:. 
    Send PSend7067 = new_Send((Optr)PSend7066, SMB_ifTrue_, 1, (Optr)PBlock7068);
    Array PThreadedCode7061 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7062, (Optr)&t_send0, (Optr)PSend7063, (Optr)&t_send1, (Optr)PSend7064, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7065, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7066, (Optr)&t_send_ifTrue_, (Optr)PSend7067, (Optr)PBlock7068, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7059 = new_Method_with(PArray7060, empty_Array, empty_Array, PThreadedCode7061, 3, PSend7064, PSend7067, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod7059, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7074 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend7076 = new_Send((Optr)self, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7078 = new_Array_with(1, (Optr)VAR_run_1_0);
    // printOn:. 
    Send PSend7080 = new_Send((Optr)VAR_run_1_0, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4725 = new_Character(L' ');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_4725_Const = new_Constant((Optr)char_4725);
    // <<. 
    Send PSend7081 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4725_Const);
    Array PThreadedCode7079 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7080, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4725, (Optr)&t_send1, (Optr)PSend7081, (Optr)&t_method_return);
    Block PBlock7077 = new_Block_with(PArray7078, empty_Array, PThreadedCode7079, 2, PSend7080, PSend7081);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7082 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7077);
    Array PThreadedCode7075 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7076, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7077, (Optr)&t_send1, (Optr)PSend7082, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7073 = new_Method_with(PArray7074, empty_Array, empty_Array, PThreadedCode7075, 3, PSend7076, PSend7082, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7073, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_shouldRunSelector_() {
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7084 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7087 = new_Array_with(1, (Optr)VAR__return__1_0);
    Character char_435 = new_Character(L':');
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant char_435_Const = new_Constant((Optr)char_435);
    // includes:. 
    Send PSend7089 = new_Send((Optr)VAR_selector_0_0, SMB_includes_, 1, (Optr)char_435_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7093 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7092 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7093, (Optr)&t_block_return);
    Block PBlock7091 = new_Block_with(empty_Array, empty_Array, PThreadedCode7092, 1, PSend7093);
    // ifTrue:. 
    Send PSend7090 = new_Send((Optr)PSend7089, SMB_ifTrue_, 1, (Optr)PBlock7091);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7094 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Array PThreadedCode7088 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend7089, (Optr)&t_send_ifTrue_, (Optr)PSend7090, (Optr)PBlock7091, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7094, (Optr)&t_method_return);
    Block PBlock7086 = new_Block_with(PArray7087, empty_Array, PThreadedCode7088, 2, PSend7090, PSend7094);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7095 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7086);
    Array PThreadedCode7085 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7086, (Optr)&t_send1, (Optr)PSend7095, (Optr)&t_method_return);
    Method PMethod7083 = new_Method_with(PArray7084, empty_Array, empty_Array, PThreadedCode7085, 1, PSend7095);
    
    MethodClosure MC_SMB_shouldRunSelector_ = new_MethodClosure((Method)PMethod7083, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_shouldRunSelector_, MC_SMB_shouldRunSelector_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    // stdevSquared. 
    Send PSend7098 = new_Send((Optr)self, SMB_stdevSquared, 0);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend7099 = new_Send((Optr)PSend7098, SMB_sqrt, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7100 = new_Send((Optr)PSend7099, SMB_asFloat, 0);
    Array PThreadedCode7097 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7098, (Optr)&t_send0, (Optr)PSend7099, (Optr)&t_send0, (Optr)PSend7100, (Optr)&t_method_return);
    Method PMethod7096 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7097, 1, PSend7100);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod7096, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray7104 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend7106 = new_Send((Optr)VAR_run_1_1, SMB_average, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7107 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend7106);
    Array PThreadedCode7105 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend7106, (Optr)&t_send1, (Optr)PSend7107, (Optr)&t_method_return);
    Block PBlock7103 = new_Block_with(PArray7104, empty_Array, PThreadedCode7105, 1, PSend7107);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend7108 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock7103);
    Array PThreadedCode7102 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock7103, (Optr)&t_send2, (Optr)PSend7108, (Optr)&t_method_return);
    Method PMethod7101 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7102, 1, PSend7108);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod7101, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_benchmarkNameForSelector_() {
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7110 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7113 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7115 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7119 = new_Send((Optr)VAR_selector_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // copyFrom:to:. 
    Send PSend7120 = new_Send((Optr)VAR_selector_0_0, SMB_copyFrom_to_, 2, (Optr)int_6_Const, (Optr)PSend7119);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7121 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7120);
    Array PThreadedCode7118 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send0, (Optr)PSend7119, (Optr)&t_send2, (Optr)PSend7120, (Optr)&t_send1, (Optr)PSend7121, (Optr)&t_block_return);
    Block PBlock7117 = new_Block_with(empty_Array, empty_Array, PThreadedCode7118, 1, PSend7121);
    // ifTrue:. 
    Send PSend7116 = new_Send((Optr)PSend7115, SMB_ifTrue_, 1, (Optr)PBlock7117);
    Array PThreadedCode7114 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7115, (Optr)&t_send_ifTrue_, (Optr)PSend7116, (Optr)PBlock7117, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_method_return);
    Block PBlock7112 = new_Block_with(PArray7113, empty_Array, PThreadedCode7114, 2, PSend7116, VAR_selector_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7122 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7112);
    Array PThreadedCode7111 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7112, (Optr)&t_send1, (Optr)PSend7122, (Optr)&t_method_return);
    Method PMethod7109 = new_Method_with(PArray7110, empty_Array, empty_Array, PThreadedCode7111, 1, PSend7122);
    
    MethodClosure MC_SMB_benchmarkNameForSelector_ = new_MethodClosure((Method)PMethod7109, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_benchmarkNameForSelector_, MC_SMB_benchmarkNameForSelector_);
}


static void init_SMB_runs() {
    Symbol SMB_runs = new_Symbol(L"runs");
    Array PThreadedCode7124 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_method_return);
    Method PMethod7123 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7124, 1, slot_PBenchmark_BenchmarkSuite_runs);
    
    MethodClosure MC_SMB_runs = new_MethodClosure((Method)PMethod7123, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runs, MC_SMB_runs);
}


static void init_SMB_runAll() {
    Symbol SMB_runAll = new_Symbol(L"runAll");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7127 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_allSelectors = new_Symbol(L"allSelectors");
    // allSelectors. 
    Send PSend7128 = new_Send((Optr)PSend7127, SMB_allSelectors, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray7130 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    // shouldRunSelector:. 
    Send PSend7132 = new_Send((Optr)self, SMB_shouldRunSelector_, 1, (Optr)VAR_selector_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend7136 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode7135 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7136, (Optr)&t_block_return);
    Block PBlock7134 = new_Block_with(empty_Array, empty_Array, PThreadedCode7135, 1, PSend7136);
    // ifTrue:. 
    Send PSend7133 = new_Send((Optr)PSend7132, SMB_ifTrue_, 1, (Optr)PBlock7134);
    Array PThreadedCode7131 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7132, (Optr)&t_send_ifTrue_, (Optr)PSend7133, (Optr)PBlock7134, (Optr)&t_method_return);
    Block PBlock7129 = new_Block_with(PArray7130, empty_Array, PThreadedCode7131, 1, PSend7133);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7137 = new_Send((Optr)PSend7128, SMB_do_, 1, (Optr)PBlock7129);
    Array PThreadedCode7126 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7127, (Optr)&t_send0, (Optr)PSend7128, (Optr)&t_push_closure, (Optr)PBlock7129, (Optr)&t_send1, (Optr)PSend7137, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7125 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7126, 2, PSend7137, self);
    
    MethodClosure MC_SMB_runAll = new_MethodClosure((Method)PMethod7125, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runAll, MC_SMB_runAll);
}


static void init_class_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_run_ = new_Symbol(L"run:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // run:. 
    Send PSend7140 = new_Send((Optr)self, SMB_run_, 1, (Optr)int_30_Const);
    Array PThreadedCode7139 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend7140, (Optr)&t_method_return);
    Method PMethod7138 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7139, 1, PSend7140);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7138, HEADER(PBenchmark_BenchmarkSuite_Class));
    store_method(HEADER(PBenchmark_BenchmarkSuite_Class), SMB_run, MC_SMB_run);
}


static void init_class_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_probeCount_0_0 = new_Variable_named(L"probeCount", 0);
    Array PArray7142 = new_Array_with(1, (Optr)VAR_probeCount_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7145 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7147 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)VAR_probeCount_0_0);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7148 = new_Send((Optr)VAR__receiver__1_0, SMB_run, 0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend7149 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode7146 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_probeCount_0_0, (Optr)&t_send1, (Optr)PSend7147, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7148, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7149, (Optr)&t_method_return);
    Block PBlock7144 = new_Block_with(PArray7145, empty_Array, PThreadedCode7146, 3, PSend7147, PSend7148, PSend7149);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7150 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7151 = new_Send((Optr)PBlock7144, SMB_value_, 1, (Optr)PSend7150);
    Array PThreadedCode7143 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock7144, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7150, (Optr)&t_send1, (Optr)PSend7151, (Optr)&t_method_return);
    Method PMethod7141 = new_Method_with(PArray7142, empty_Array, empty_Array, PThreadedCode7143, 1, PSend7151);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7141, HEADER(PBenchmark_BenchmarkSuite_Class));
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