#include <lib/class/PBenchmark/BenchmarkSuite.h>


Optr layout_PBenchmark_BenchmarkSuite_Class_class;
Optr slot_PBenchmark_BenchmarkSuite_runs;
Optr layout_PBenchmark_BenchmarkSuite;


static void init_SMB_stdevSquared() {
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray6982 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend6984 = new_Send((Optr)VAR_run_1_1, SMB_stdev, 0);
    Symbol SMB_squared = new_Symbol(L"squared");
    // squared. 
    Send PSend6985 = new_Send((Optr)PSend6984, SMB_squared, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6986 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend6985);
    Array PThreadedCode6983 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend6984, (Optr)&t_send0, (Optr)PSend6985, (Optr)&t_send1, (Optr)PSend6986, (Optr)&t_method_return);
    Block PBlock6981 = new_Block_with(PArray6982, empty_Array, PThreadedCode6983, 1, PSend6986);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend6987 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock6981);
    Array PThreadedCode6980 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock6981, (Optr)&t_send2, (Optr)PSend6987, (Optr)&t_method_return);
    Method PMethod6979 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6980, 1, PSend6987);
    
    MethodClosure MC_SMB_stdevSquared = new_MethodClosure((Method)PMethod6979, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdevSquared, MC_SMB_stdevSquared);
}


static void init_SMB_lastResult() {
    Symbol SMB_lastResult = new_Symbol(L"lastResult");
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend6990 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend6991 = new_Send((Optr)PSend6990, SMB_last, 0);
    Array PThreadedCode6989 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6990, (Optr)&t_send0, (Optr)PSend6991, (Optr)&t_method_return);
    Method PMethod6988 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6989, 1, PSend6991);
    
    MethodClosure MC_SMB_lastResult = new_MethodClosure((Method)PMethod6988, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_lastResult, MC_SMB_lastResult);
}


static void init_SMB_d() {
    Symbol SMB_d = new_Symbol(L"d");
    Array PThreadedCode6993 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod6992 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6993, 1, self);
    
    MethodClosure MC_SMB_d = new_MethodClosure((Method)PMethod6992, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_d, MC_SMB_d);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray6995 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray6998 = new_Array_with(1, (Optr)VAR_run_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend7000 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_run_1_0, (Optr)VAR_run_1_0);
    Array PThreadedCode6999 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_send2, (Optr)PSend7000, (Optr)&t_method_return);
    Block PBlock6997 = new_Block_with(PArray6998, empty_Array, PThreadedCode6999, 1, PSend7000);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7001 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock6997);
    Array PThreadedCode6996 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock6997, (Optr)&t_send1, (Optr)PSend7001, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6994 = new_Method_with(PArray6995, empty_Array, empty_Array, PThreadedCode6996, 2, PSend7001, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod6994, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
    Send PSend7004 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_removeAll, 0);
    Array PThreadedCode7003 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7004, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7002 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7003, 2, PSend7004, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod7002, PBenchmark_BenchmarkSuite_Class);
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
    Send PSend7007 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7008 = new_Send((Optr)self, SMB_runAll, 0);
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    // runBaseBenchmark. 
    Send PSend7009 = new_Send((Optr)self, SMB_runBaseBenchmark, 0);
    Array PThreadedCode7006 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7007, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7008, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7009, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7005 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7006, 4, PSend7007, PSend7008, PSend7009, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7005, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Array PThreadedCode7011 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7010 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7011, 1, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7010, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7014 = new_Send((Optr)self, SMB_sum, 0);
    Array PThreadedCode7013 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7014, (Optr)&t_method_return);
    Method PMethod7012 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7013, 1, PSend7014);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod7012, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_total, MC_SMB_total);
}


static void init_SMB_runBaseBenchmark() {
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    Variable VAR_results_0_0 = new_Variable_named(L"results", 0);
    Array PArray7016 = new_Array_with(1, (Optr)VAR_results_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7019 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7021 = new_Send((Optr)self, SMB_class, 0);
    Symbol  SMB_baseBenchmark = new_Symbol(L"baseBenchmark");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_baseBenchmark_Const = new_Constant((Optr)SMB_baseBenchmark);
    // respondsTo:. 
    Send PSend7022 = new_Send((Optr)PSend7021, SMB_respondsTo_, 1, (Optr)SMB_baseBenchmark_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7026 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7025 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7026, (Optr)&t_block_return);
    Block PBlock7024 = new_Block_with(empty_Array, empty_Array, PThreadedCode7025, 1, PSend7026);
    // ifFalse:. 
    Send PSend7023 = new_Send((Optr)PSend7022, SMB_ifFalse_, 1, (Optr)PBlock7024);
    // class. 
    Send PSend7027 = new_Send((Optr)self, SMB_class, 0);
    // baseBenchmark. 
    Send PSend7028 = new_Send((Optr)PSend7027, SMB_baseBenchmark, 0);
    // class. 
    Send PSend7029 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend7030 = new_Send((Optr)PSend7028, SMB__equals_, 1, (Optr)PSend7029);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend7034 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7033 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7034, (Optr)&t_block_return);
    Block PBlock7032 = new_Block_with(empty_Array, empty_Array, PThreadedCode7033, 1, PSend7034);
    // ifTrue:. 
    Send PSend7031 = new_Send((Optr)PSend7030, SMB_ifTrue_, 1, (Optr)PBlock7032);
    // class. 
    Send PSend7035 = new_Send((Optr)self, SMB_class, 0);
    // baseBenchmark. 
    Send PSend7036 = new_Send((Optr)PSend7035, SMB_baseBenchmark, 0);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7037 = new_Send((Optr)PSend7036, SMB_run, 0);
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend7038 = new_Send((Optr)PSend7037, SMB_runs, 0);
    Variable VAR_selector_2_0 = new_Variable_named(L"selector", 2);
    Variable VAR_run_2_1 = new_Variable_named(L"run", 2);
    Array PArray7040 = new_Array_with(2, (Optr)VAR_selector_2_0, (Optr)VAR_run_2_1);
    // runs. 
    Send PSend7042 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7043 = new_Send((Optr)PSend7042, SMB_at_, 1, (Optr)VAR_selector_2_0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend7044 = new_Send((Optr)PSend7043, SMB_base_, 1, (Optr)VAR_run_2_1);
    Array PThreadedCode7041 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7042, (Optr)&t_push_variable, (Optr)VAR_selector_2_0, (Optr)&t_send1, (Optr)PSend7043, (Optr)&t_push_variable, (Optr)VAR_run_2_1, (Optr)&t_send1, (Optr)PSend7044, (Optr)&t_method_return);
    Block PBlock7039 = new_Block_with(PArray7040, empty_Array, PThreadedCode7041, 1, PSend7044);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend7045 = new_Send((Optr)PSend7038, SMB_keysAndValuesDo_, 1, (Optr)PBlock7039);
    Array PThreadedCode7020 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7021, (Optr)&t_push1, (Optr)SMB_baseBenchmark, (Optr)&t_send1, (Optr)PSend7022, (Optr)&t_send_ifFalse_, (Optr)PSend7023, (Optr)PBlock7024, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7027, (Optr)&t_send0, (Optr)PSend7028, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7029, (Optr)&t_send1, (Optr)PSend7030, (Optr)&t_send_ifTrue_, (Optr)PSend7031, (Optr)PBlock7032, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7035, (Optr)&t_send0, (Optr)PSend7036, (Optr)&t_send0, (Optr)PSend7037, (Optr)&t_send0, (Optr)PSend7038, (Optr)&t_push_closure, (Optr)PBlock7039, (Optr)&t_send1, (Optr)PSend7045, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7018 = new_Block_with(PArray7019, empty_Array, PThreadedCode7020, 4, PSend7023, PSend7031, PSend7045, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7046 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7018);
    Array PThreadedCode7017 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7018, (Optr)&t_send1, (Optr)PSend7046, (Optr)&t_method_return);
    Method PMethod7015 = new_Method_with(empty_Array, PArray7016, empty_Array, PThreadedCode7017, 1, PSend7046);
    
    MethodClosure MC_SMB_runBaseBenchmark = new_MethodClosure((Method)PMethod7015, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runBaseBenchmark, MC_SMB_runBaseBenchmark);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7048 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7050 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend7051 = new_Send((Optr)PSend7050, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7052 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend7051);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7053 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend7054 = new_Send((Optr)PSend7053, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_7058 = new_String(L": ");
    Constant string_7058_Const = new_Constant((Optr)string_7058);
    // <<. 
    Send PSend7059 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_7058_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper7060 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode7057 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_7058, (Optr)&t_send1, (Optr)PSend7059, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper7060, (Optr)&t_block_return);
    Block PBlock7056 = new_Block_with(empty_Array, empty_Array, PThreadedCode7057, 2, PSend7059, PSuper7060);
    // ifTrue:. 
    Send PSend7055 = new_Send((Optr)PSend7054, SMB_ifTrue_, 1, (Optr)PBlock7056);
    Array PThreadedCode7049 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7050, (Optr)&t_send0, (Optr)PSend7051, (Optr)&t_send1, (Optr)PSend7052, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7053, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7054, (Optr)&t_send_ifTrue_, (Optr)PSend7055, (Optr)PBlock7056, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7047 = new_Method_with(PArray7048, empty_Array, empty_Array, PThreadedCode7049, 3, PSend7052, PSend7055, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod7047, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_run_() {
    /*
    run: probeCount
// 	^ self new probeCount: probeCount; run; yourself
    */
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7062 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR_run_0_1 = new_Variable_named(L"run", 0);
    Array PArray7063 = new_Array_with(1, (Optr)VAR_run_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7066 = new_Send((Optr)PBenchmarkRun_classReference, SMB_new, 0);
    Assign PAssign7065 = new_Assign((Optr)VAR_run_0_1, (Optr)PSend7066);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7068 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend7070 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)self);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend7071 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7072 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)PSend7071);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend7073 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    // benchmarkNameForSelector:. 
    Send PSend7074 = new_Send((Optr)self, SMB_benchmarkNameForSelector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend7075 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)PSend7074);
    Array PThreadedCode7069 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7070, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7071, (Optr)&t_send1, (Optr)PSend7072, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7073, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7074, (Optr)&t_send1, (Optr)PSend7075, (Optr)&t_method_return);
    Block PBlock7067 = new_Block_with(PArray7068, empty_Array, PThreadedCode7069, 4, PSend7070, PSend7072, PSend7073, PSend7075);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7076 = new_Send((Optr)PBlock7067, SMB_value_, 1, (Optr)VAR_run_0_1);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7077 = new_Send((Optr)VAR_run_0_1, SMB_run, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7078 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)VAR_run_0_1);
    Array PThreadedCode7064 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign7065, (Optr)&t_push_class_reference, (Optr)PBenchmarkRun_classReference, (Optr)&t_send0, (Optr)PSend7066, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7067, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send1, (Optr)PSend7076, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send0, (Optr)PSend7077, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send2, (Optr)PSend7078, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7061 = new_Method_with(PArray7062, PArray7063, empty_Array, PThreadedCode7064, 5, PAssign7065, PSend7076, PSend7077, PSend7078, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7061, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Array PThreadedCode7080 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7079 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7080, 1, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7079, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend7083 = new_Send((Optr)self, SMB_sum, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7084 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7085 = new_Send((Optr)PSend7084, SMB_asFloat, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend7086 = new_Send((Optr)PSend7083, SMB__divide_, 1, (Optr)PSend7085);
    Array PThreadedCode7082 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7083, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7084, (Optr)&t_send0, (Optr)PSend7085, (Optr)&t_send1, (Optr)PSend7086, (Optr)&t_method_return);
    Method PMethod7081 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7082, 1, PSend7086);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod7081, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7090 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign7089 = new_Assign((Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)PSend7090);
    Array PThreadedCode7088 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign7089, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7090, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7087 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7088, 2, PAssign7089, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7087, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    // stdevSquared. 
    Send PSend7093 = new_Send((Optr)self, SMB_stdevSquared, 0);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend7094 = new_Send((Optr)PSend7093, SMB_sqrt, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7095 = new_Send((Optr)PSend7094, SMB_asFloat, 0);
    Array PThreadedCode7092 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7093, (Optr)&t_send0, (Optr)PSend7094, (Optr)&t_send0, (Optr)PSend7095, (Optr)&t_method_return);
    Method PMethod7091 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7092, 1, PSend7095);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod7091, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7097 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend7099 = new_Send((Optr)self, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7101 = new_Array_with(1, (Optr)VAR_run_1_0);
    // printOn:. 
    Send PSend7103 = new_Send((Optr)VAR_run_1_0, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4726 = new_Character(L' ');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // <<. 
    Send PSend7104 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4726_Const);
    Array PThreadedCode7102 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7103, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend7104, (Optr)&t_method_return);
    Block PBlock7100 = new_Block_with(PArray7101, empty_Array, PThreadedCode7102, 2, PSend7103, PSend7104);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7105 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7100);
    Array PThreadedCode7098 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7099, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7100, (Optr)&t_send1, (Optr)PSend7105, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7096 = new_Method_with(PArray7097, empty_Array, empty_Array, PThreadedCode7098, 3, PSend7099, PSend7105, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7096, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_shouldRunSelector_() {
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7107 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7110 = new_Array_with(1, (Optr)VAR__return__1_0);
    Character char_435 = new_Character(L':');
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant char_435_Const = new_Constant((Optr)char_435);
    // includes:. 
    Send PSend7112 = new_Send((Optr)VAR_selector_0_0, SMB_includes_, 1, (Optr)char_435_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7116 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7115 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7116, (Optr)&t_block_return);
    Block PBlock7114 = new_Block_with(empty_Array, empty_Array, PThreadedCode7115, 1, PSend7116);
    // ifTrue:. 
    Send PSend7113 = new_Send((Optr)PSend7112, SMB_ifTrue_, 1, (Optr)PBlock7114);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7117 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Array PThreadedCode7111 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend7112, (Optr)&t_send_ifTrue_, (Optr)PSend7113, (Optr)PBlock7114, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7117, (Optr)&t_method_return);
    Block PBlock7109 = new_Block_with(PArray7110, empty_Array, PThreadedCode7111, 2, PSend7113, PSend7117);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7118 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7109);
    Array PThreadedCode7108 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7109, (Optr)&t_send1, (Optr)PSend7118, (Optr)&t_method_return);
    Method PMethod7106 = new_Method_with(PArray7107, empty_Array, empty_Array, PThreadedCode7108, 1, PSend7118);
    
    MethodClosure MC_SMB_shouldRunSelector_ = new_MethodClosure((Method)PMethod7106, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_shouldRunSelector_, MC_SMB_shouldRunSelector_);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray7122 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend7124 = new_Send((Optr)VAR_run_1_1, SMB_average, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7125 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend7124);
    Array PThreadedCode7123 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend7124, (Optr)&t_send1, (Optr)PSend7125, (Optr)&t_method_return);
    Block PBlock7121 = new_Block_with(PArray7122, empty_Array, PThreadedCode7123, 1, PSend7125);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend7126 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock7121);
    Array PThreadedCode7120 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock7121, (Optr)&t_send2, (Optr)PSend7126, (Optr)&t_method_return);
    Method PMethod7119 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7120, 1, PSend7126);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod7119, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_benchmarkNameForSelector_() {
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7128 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7131 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7133 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7137 = new_Send((Optr)VAR_selector_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // copyFrom:to:. 
    Send PSend7138 = new_Send((Optr)VAR_selector_0_0, SMB_copyFrom_to_, 2, (Optr)int_6_Const, (Optr)PSend7137);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7139 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7138);
    Array PThreadedCode7136 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send0, (Optr)PSend7137, (Optr)&t_send2, (Optr)PSend7138, (Optr)&t_send1, (Optr)PSend7139, (Optr)&t_block_return);
    Block PBlock7135 = new_Block_with(empty_Array, empty_Array, PThreadedCode7136, 1, PSend7139);
    // ifTrue:. 
    Send PSend7134 = new_Send((Optr)PSend7133, SMB_ifTrue_, 1, (Optr)PBlock7135);
    Array PThreadedCode7132 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7133, (Optr)&t_send_ifTrue_, (Optr)PSend7134, (Optr)PBlock7135, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_method_return);
    Block PBlock7130 = new_Block_with(PArray7131, empty_Array, PThreadedCode7132, 2, PSend7134, VAR_selector_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7140 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7130);
    Array PThreadedCode7129 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7130, (Optr)&t_send1, (Optr)PSend7140, (Optr)&t_method_return);
    Method PMethod7127 = new_Method_with(PArray7128, empty_Array, empty_Array, PThreadedCode7129, 1, PSend7140);
    
    MethodClosure MC_SMB_benchmarkNameForSelector_ = new_MethodClosure((Method)PMethod7127, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_benchmarkNameForSelector_, MC_SMB_benchmarkNameForSelector_);
}


static void init_SMB_runs() {
    Symbol SMB_runs = new_Symbol(L"runs");
    Array PThreadedCode7142 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_method_return);
    Method PMethod7141 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7142, 1, slot_PBenchmark_BenchmarkSuite_runs);
    
    MethodClosure MC_SMB_runs = new_MethodClosure((Method)PMethod7141, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runs, MC_SMB_runs);
}


static void init_SMB_runAll() {
    Symbol SMB_runAll = new_Symbol(L"runAll");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7145 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_allSelectors = new_Symbol(L"allSelectors");
    // allSelectors. 
    Send PSend7146 = new_Send((Optr)PSend7145, SMB_allSelectors, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray7148 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    // shouldRunSelector:. 
    Send PSend7150 = new_Send((Optr)self, SMB_shouldRunSelector_, 1, (Optr)VAR_selector_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend7154 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode7153 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7154, (Optr)&t_block_return);
    Block PBlock7152 = new_Block_with(empty_Array, empty_Array, PThreadedCode7153, 1, PSend7154);
    // ifTrue:. 
    Send PSend7151 = new_Send((Optr)PSend7150, SMB_ifTrue_, 1, (Optr)PBlock7152);
    Array PThreadedCode7149 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7150, (Optr)&t_send_ifTrue_, (Optr)PSend7151, (Optr)PBlock7152, (Optr)&t_method_return);
    Block PBlock7147 = new_Block_with(PArray7148, empty_Array, PThreadedCode7149, 1, PSend7151);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7155 = new_Send((Optr)PSend7146, SMB_do_, 1, (Optr)PBlock7147);
    Array PThreadedCode7144 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7145, (Optr)&t_send0, (Optr)PSend7146, (Optr)&t_push_closure, (Optr)PBlock7147, (Optr)&t_send1, (Optr)PSend7155, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7143 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7144, 2, PSend7155, self);
    
    MethodClosure MC_SMB_runAll = new_MethodClosure((Method)PMethod7143, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runAll, MC_SMB_runAll);
}


static void init_class_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_run_ = new_Symbol(L"run:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // run:. 
    Send PSend7158 = new_Send((Optr)self, SMB_run_, 1, (Optr)int_30_Const);
    Array PThreadedCode7157 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend7158, (Optr)&t_method_return);
    Method PMethod7156 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7157, 1, PSend7158);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7156, HEADER(PBenchmark_BenchmarkSuite_Class));
    store_method(HEADER(PBenchmark_BenchmarkSuite_Class), SMB_run, MC_SMB_run);
}


static void init_class_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_probeCount_0_0 = new_Variable_named(L"probeCount", 0);
    Array PArray7160 = new_Array_with(1, (Optr)VAR_probeCount_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7163 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7165 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)VAR_probeCount_0_0);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7166 = new_Send((Optr)VAR__receiver__1_0, SMB_run, 0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend7167 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode7164 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_probeCount_0_0, (Optr)&t_send1, (Optr)PSend7165, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7166, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7167, (Optr)&t_method_return);
    Block PBlock7162 = new_Block_with(PArray7163, empty_Array, PThreadedCode7164, 3, PSend7165, PSend7166, PSend7167);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7168 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7169 = new_Send((Optr)PBlock7162, SMB_value_, 1, (Optr)PSend7168);
    Array PThreadedCode7161 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock7162, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7168, (Optr)&t_send1, (Optr)PSend7169, (Optr)&t_method_return);
    Method PMethod7159 = new_Method_with(PArray7160, empty_Array, empty_Array, PThreadedCode7161, 1, PSend7169);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7159, HEADER(PBenchmark_BenchmarkSuite_Class));
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
    init_SMB_inspectChildrenOn_();
    init_SMB_reset();
    init_SMB_run();
    init_SMB_tearDown();
    init_SMB_total();
    init_SMB_runBaseBenchmark();
    init_SMB_inspectNameOn_();
    init_SMB_run_();
    init_SMB_setUp();
    init_SMB_average();
    init_SMB_initialize();
    init_SMB_stdev();
    init_SMB_printOn_();
    init_SMB_shouldRunSelector_();
    init_SMB_sum();
    init_SMB_benchmarkNameForSelector_();
    init_SMB_runs();
    init_SMB_runAll();
    init_class_SMB_run();
    init_class_SMB_run_();
    
}