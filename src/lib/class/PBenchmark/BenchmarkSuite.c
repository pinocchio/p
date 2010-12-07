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


<<<<<<< HEAD
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
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7035 = new_Send((Optr)VAR_base_0_1, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_7039 = new_String(L"baseBenchmark cannot be self");
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    Constant string_7039_Const = new_Constant((Optr)string_7039);
    // signal:. 
    Send PSend7040 = new_Send((Optr)Error_classReference, SMB_signal_, 1, (Optr)string_7039_Const);
    Array PThreadedCode7038 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push1, (Optr)string_7039, (Optr)&t_send1, (Optr)PSend7040, (Optr)&t_block_return);
    Block PBlock7037 = new_Block_with(empty_Array, empty_Array, PThreadedCode7038, 1, PSend7040);
    // ifTrue:. 
    Send PSend7036 = new_Send((Optr)PSend7035, SMB_ifTrue_, 1, (Optr)PBlock7037);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7041 = new_Send((Optr)VAR_base_0_1, SMB_runAll, 0);
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend7042 = new_Send((Optr)PSend7041, SMB_runs, 0);
    Variable VAR_selector_2_0 = new_Variable_named(L"selector", 2);
    Variable VAR_aRun_2_1 = new_Variable_named(L"aRun", 2);
    Array PArray7044 = new_Array_with(2, (Optr)VAR_selector_2_0, (Optr)VAR_aRun_2_1);
    // runs. 
    Send PSend7046 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7047 = new_Send((Optr)PSend7046, SMB_at_, 1, (Optr)VAR_selector_2_0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend7048 = new_Send((Optr)PSend7047, SMB_base_, 1, (Optr)VAR_aRun_2_1);
    Array PThreadedCode7045 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7046, (Optr)&t_push_variable, (Optr)VAR_selector_2_0, (Optr)&t_send1, (Optr)PSend7047, (Optr)&t_push_variable, (Optr)VAR_aRun_2_1, (Optr)&t_send1, (Optr)PSend7048, (Optr)&t_method_return);
    Block PBlock7043 = new_Block_with(PArray7044, empty_Array, PThreadedCode7045, 1, PSend7048);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend7049 = new_Send((Optr)PSend7042, SMB_keysAndValuesDo_, 1, (Optr)PBlock7043);
    Array PThreadedCode7023 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_baseBenchmark, (Optr)&t_send1, (Optr)PSend7024, (Optr)&t_send_ifFalse_, (Optr)PSend7025, (Optr)PBlock7026, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7029, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7030, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_push_closure, (Optr)PBlock7031, (Optr)&t_send1, (Optr)PSend7034, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7035, (Optr)&t_send_ifTrue_, (Optr)PSend7036, (Optr)PBlock7037, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_send0, (Optr)PSend7041, (Optr)&t_send0, (Optr)PSend7042, (Optr)&t_push_closure, (Optr)PBlock7043, (Optr)&t_send1, (Optr)PSend7049, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7021 = new_Block_with(PArray7022, empty_Array, PThreadedCode7023, 6, PSend7025, PAssign7029, PSend7034, PSend7036, PSend7049, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7050 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7021);
    Array PThreadedCode7020 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7021, (Optr)&t_send1, (Optr)PSend7050, (Optr)&t_method_return);
    Method PMethod7018 = new_Method_with(empty_Array, PArray7019, empty_Array, PThreadedCode7020, 1, PSend7050);
    
    MethodClosure MC_SMB_runBaseBenchmark = new_MethodClosure((Method)PMethod7018, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runBaseBenchmark, MC_SMB_runBaseBenchmark);
=======
static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray7019 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7022 = new_Array_with(1, (Optr)VAR_run_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend7024 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_run_1_0, (Optr)VAR_run_1_0);
    Array PThreadedCode7023 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_send2, (Optr)PSend7024, (Optr)&t_method_return);
    Block PBlock7021 = new_Block_with(PArray7022, empty_Array, PThreadedCode7023, 1, PSend7024);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7025 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7021);
    Array PThreadedCode7020 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7021, (Optr)&t_send1, (Optr)PSend7025, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7018 = new_Method_with(PArray7019, empty_Array, empty_Array, PThreadedCode7020, 2, PSend7025, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod7018, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    // removeAll. 
<<<<<<< HEAD
    Send PSend7053 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_removeAll, 0);
    Array PThreadedCode7052 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7053, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7051 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7052, 2, PSend7053, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod7051, PBenchmark_BenchmarkSuite_Class);
=======
    Send PSend7028 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_removeAll, 0);
    Array PThreadedCode7027 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7028, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7026 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7027, 2, PSend7028, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod7026, PBenchmark_BenchmarkSuite_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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
<<<<<<< HEAD
    Send PSend7056 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7057 = new_Send((Optr)self, SMB_runAll, 0);
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    // runBaseBenchmark. 
    Send PSend7058 = new_Send((Optr)self, SMB_runBaseBenchmark, 0);
    Array PThreadedCode7055 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7056, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7057, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7058, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7054 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7055, 4, PSend7056, PSend7057, PSend7058, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7054, PBenchmark_BenchmarkSuite_Class);
=======
    Send PSend7031 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7032 = new_Send((Optr)self, SMB_runAll, 0);
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    // runBaseBenchmark. 
    Send PSend7033 = new_Send((Optr)self, SMB_runBaseBenchmark, 0);
    Array PThreadedCode7030 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7031, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7032, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7033, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7029 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7030, 4, PSend7031, PSend7032, PSend7033, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7029, PBenchmark_BenchmarkSuite_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
<<<<<<< HEAD
    Array PThreadedCode7060 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7059 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7060, 1, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7059, PBenchmark_BenchmarkSuite_Class);
=======
    Array PThreadedCode7035 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7034 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7035, 1, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7034, PBenchmark_BenchmarkSuite_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
<<<<<<< HEAD
    Send PSend7063 = new_Send((Optr)self, SMB_sum, 0);
    Array PThreadedCode7062 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7063, (Optr)&t_method_return);
    Method PMethod7061 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7062, 1, PSend7063);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod7061, PBenchmark_BenchmarkSuite_Class);
=======
    Send PSend7038 = new_Send((Optr)self, SMB_sum, 0);
    Array PThreadedCode7037 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7038, (Optr)&t_method_return);
    Method PMethod7036 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7037, 1, PSend7038);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod7036, PBenchmark_BenchmarkSuite_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_total, MC_SMB_total);
}


<<<<<<< HEAD
static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray7065 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7068 = new_Array_with(1, (Optr)VAR_run_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend7070 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_run_1_0, (Optr)VAR_run_1_0);
    Array PThreadedCode7069 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_send2, (Optr)PSend7070, (Optr)&t_method_return);
    Block PBlock7067 = new_Block_with(PArray7068, empty_Array, PThreadedCode7069, 1, PSend7070);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7071 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7067);
    Array PThreadedCode7066 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7067, (Optr)&t_send1, (Optr)PSend7071, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7064 = new_Method_with(PArray7065, empty_Array, empty_Array, PThreadedCode7066, 2, PSend7071, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod7064, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Array PThreadedCode7073 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7072 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7073, 1, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7072, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_setUp, MC_SMB_setUp);
=======
static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7040 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7042 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend7043 = new_Send((Optr)PSend7042, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7044 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend7043);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7045 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend7046 = new_Send((Optr)PSend7045, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_7050 = new_String(L": ");
    Constant string_7050_Const = new_Constant((Optr)string_7050);
    // <<. 
    Send PSend7051 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_7050_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper7052 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode7049 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_7050, (Optr)&t_send1, (Optr)PSend7051, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper7052, (Optr)&t_block_return);
    Block PBlock7048 = new_Block_with(empty_Array, empty_Array, PThreadedCode7049, 2, PSend7051, PSuper7052);
    // ifTrue:. 
    Send PSend7047 = new_Send((Optr)PSend7046, SMB_ifTrue_, 1, (Optr)PBlock7048);
    Array PThreadedCode7041 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7042, (Optr)&t_send0, (Optr)PSend7043, (Optr)&t_send1, (Optr)PSend7044, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7045, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7046, (Optr)&t_send_ifTrue_, (Optr)PSend7047, (Optr)PBlock7048, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7039 = new_Method_with(PArray7040, empty_Array, empty_Array, PThreadedCode7041, 3, PSend7044, PSend7047, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod7039, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_run_() {
    /*
    run: probeCount
// 	^ self new probeCount: probeCount; run; yourself
    */
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
<<<<<<< HEAD
    Array PArray7075 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR_run_0_1 = new_Variable_named(L"run", 0);
    Array PArray7076 = new_Array_with(1, (Optr)VAR_run_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7079 = new_Send((Optr)PBenchmarkRun_classReference, SMB_new, 0);
    Assign PAssign7078 = new_Assign((Optr)VAR_run_0_1, (Optr)PSend7079);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7081 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend7083 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)self);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend7084 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7085 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)PSend7084);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend7086 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    // benchmarkNameForSelector:. 
    Send PSend7087 = new_Send((Optr)self, SMB_benchmarkNameForSelector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend7088 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)PSend7087);
    Array PThreadedCode7082 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7083, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7084, (Optr)&t_send1, (Optr)PSend7085, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7086, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7087, (Optr)&t_send1, (Optr)PSend7088, (Optr)&t_method_return);
    Block PBlock7080 = new_Block_with(PArray7081, empty_Array, PThreadedCode7082, 4, PSend7083, PSend7085, PSend7086, PSend7088);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7089 = new_Send((Optr)PBlock7080, SMB_value_, 1, (Optr)VAR_run_0_1);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7090 = new_Send((Optr)VAR_run_0_1, SMB_run, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7091 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)VAR_run_0_1);
    Array PThreadedCode7077 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign7078, (Optr)&t_push_class_reference, (Optr)PBenchmarkRun_classReference, (Optr)&t_send0, (Optr)PSend7079, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7080, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send1, (Optr)PSend7089, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send0, (Optr)PSend7090, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send2, (Optr)PSend7091, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_method_return);
    Method PMethod7074 = new_Method_with(PArray7075, PArray7076, empty_Array, PThreadedCode7077, 5, PAssign7078, PSend7089, PSend7090, PSend7091, VAR_run_0_1);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7074, PBenchmark_BenchmarkSuite_Class);
=======
    Array PArray7054 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR_run_0_1 = new_Variable_named(L"run", 0);
    Array PArray7055 = new_Array_with(1, (Optr)VAR_run_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7058 = new_Send((Optr)PBenchmarkRun_classReference, SMB_new, 0);
    Assign PAssign7057 = new_Assign((Optr)VAR_run_0_1, (Optr)PSend7058);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7060 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend7062 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)self);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend7063 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7064 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)PSend7063);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend7065 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    // benchmarkNameForSelector:. 
    Send PSend7066 = new_Send((Optr)self, SMB_benchmarkNameForSelector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend7067 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)PSend7066);
    Array PThreadedCode7061 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7062, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7063, (Optr)&t_send1, (Optr)PSend7064, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7065, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend7066, (Optr)&t_send1, (Optr)PSend7067, (Optr)&t_method_return);
    Block PBlock7059 = new_Block_with(PArray7060, empty_Array, PThreadedCode7061, 4, PSend7062, PSend7064, PSend7065, PSend7067);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7068 = new_Send((Optr)PBlock7059, SMB_value_, 1, (Optr)VAR_run_0_1);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7069 = new_Send((Optr)VAR_run_0_1, SMB_run, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7070 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)VAR_run_0_1);
    Array PThreadedCode7056 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign7057, (Optr)&t_push_class_reference, (Optr)PBenchmarkRun_classReference, (Optr)&t_send0, (Optr)PSend7058, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7059, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send1, (Optr)PSend7068, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send0, (Optr)PSend7069, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_send2, (Optr)PSend7070, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_run_0_1, (Optr)&t_method_return);
    Method PMethod7053 = new_Method_with(PArray7054, PArray7055, empty_Array, PThreadedCode7056, 5, PAssign7057, PSend7068, PSend7069, PSend7070, VAR_run_0_1);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7053, PBenchmark_BenchmarkSuite_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Array PThreadedCode7072 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7071 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7072, 1, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7071, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
<<<<<<< HEAD
    Send PSend7094 = new_Send((Optr)self, SMB_sum, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7095 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7096 = new_Send((Optr)PSend7095, SMB_asFloat, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend7097 = new_Send((Optr)PSend7094, SMB__divide_, 1, (Optr)PSend7096);
    Array PThreadedCode7093 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7094, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7095, (Optr)&t_send0, (Optr)PSend7096, (Optr)&t_send1, (Optr)PSend7097, (Optr)&t_method_return);
    Method PMethod7092 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7093, 1, PSend7097);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod7092, PBenchmark_BenchmarkSuite_Class);
=======
    Send PSend7075 = new_Send((Optr)self, SMB_sum, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7076 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7077 = new_Send((Optr)PSend7076, SMB_asFloat, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend7078 = new_Send((Optr)PSend7075, SMB__divide_, 1, (Optr)PSend7077);
    Array PThreadedCode7074 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7075, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7076, (Optr)&t_send0, (Optr)PSend7077, (Optr)&t_send1, (Optr)PSend7078, (Optr)&t_method_return);
    Method PMethod7073 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7074, 1, PSend7078);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod7073, PBenchmark_BenchmarkSuite_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
<<<<<<< HEAD
    Super PSuper7100 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7102 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign7101 = new_Assign((Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)PSend7102);
    Array PThreadedCode7099 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7100, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7101, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7102, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7098 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7099, 3, PSuper7100, PAssign7101, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7098, PBenchmark_BenchmarkSuite_Class);
=======
    Super PSuper7081 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7083 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign7082 = new_Assign((Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)PSend7083);
    Array PThreadedCode7080 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7081, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7082, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend7083, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7079 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7080, 3, PSuper7081, PAssign7082, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7079, PBenchmark_BenchmarkSuite_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_initialize, MC_SMB_initialize);
}


<<<<<<< HEAD
static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray7104 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7106 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend7107 = new_Send((Optr)PSend7106, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend7108 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend7107);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7109 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend7110 = new_Send((Optr)PSend7109, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_7114 = new_String(L": ");
    Constant string_7114_Const = new_Constant((Optr)string_7114);
    // <<. 
    Send PSend7115 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_7114_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper7116 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode7113 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_7114, (Optr)&t_send1, (Optr)PSend7115, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper7116, (Optr)&t_block_return);
    Block PBlock7112 = new_Block_with(empty_Array, empty_Array, PThreadedCode7113, 2, PSend7115, PSuper7116);
    // ifTrue:. 
    Send PSend7111 = new_Send((Optr)PSend7110, SMB_ifTrue_, 1, (Optr)PBlock7112);
    Array PThreadedCode7105 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7106, (Optr)&t_send0, (Optr)PSend7107, (Optr)&t_send1, (Optr)PSend7108, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_send0, (Optr)PSend7109, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7110, (Optr)&t_send_ifTrue_, (Optr)PSend7111, (Optr)PBlock7112, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7103 = new_Method_with(PArray7104, empty_Array, empty_Array, PThreadedCode7105, 3, PSend7108, PSend7111, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod7103, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
=======
static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    // stdevSquared. 
    Send PSend7086 = new_Send((Optr)self, SMB_stdevSquared, 0);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend7087 = new_Send((Optr)PSend7086, SMB_sqrt, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7088 = new_Send((Optr)PSend7087, SMB_asFloat, 0);
    Array PThreadedCode7085 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7086, (Optr)&t_send0, (Optr)PSend7087, (Optr)&t_send0, (Optr)PSend7088, (Optr)&t_method_return);
    Method PMethod7084 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7085, 1, PSend7088);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod7084, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdev, MC_SMB_stdev);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray7118 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend7120 = new_Send((Optr)self, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7122 = new_Array_with(1, (Optr)VAR_run_1_0);
    // printOn:. 
    Send PSend7124 = new_Send((Optr)VAR_run_1_0, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
=======
    Array PArray7090 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend7092 = new_Send((Optr)self, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_run_1_0 = new_Variable_named(L"run", 1);
    Array PArray7094 = new_Array_with(1, (Optr)VAR_run_1_0);
    // printOn:. 
    Send PSend7096 = new_Send((Optr)VAR_run_1_0, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Character char_4726 = new_Character(L' ');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // <<. 
<<<<<<< HEAD
    Send PSend7125 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4726_Const);
    Array PThreadedCode7123 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7124, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend7125, (Optr)&t_method_return);
    Block PBlock7121 = new_Block_with(PArray7122, empty_Array, PThreadedCode7123, 2, PSend7124, PSend7125);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7126 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7121);
    Array PThreadedCode7119 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7120, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7121, (Optr)&t_send1, (Optr)PSend7126, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7117 = new_Method_with(PArray7118, empty_Array, empty_Array, PThreadedCode7119, 3, PSend7120, PSend7126, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7117, PBenchmark_BenchmarkSuite_Class);
=======
    Send PSend7097 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4726_Const);
    Array PThreadedCode7095 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_run_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7096, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend7097, (Optr)&t_method_return);
    Block PBlock7093 = new_Block_with(PArray7094, empty_Array, PThreadedCode7095, 2, PSend7096, PSend7097);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7098 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_do_, 1, (Optr)PBlock7093);
    Array PThreadedCode7091 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend7092, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_closure, (Optr)PBlock7093, (Optr)&t_send1, (Optr)PSend7098, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7089 = new_Method_with(PArray7090, empty_Array, empty_Array, PThreadedCode7091, 3, PSend7092, PSend7098, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7089, PBenchmark_BenchmarkSuite_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_shouldRunSelector_() {
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
<<<<<<< HEAD
    Array PArray7128 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7131 = new_Array_with(1, (Optr)VAR__return__1_0);
=======
    Array PArray7100 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7103 = new_Array_with(1, (Optr)VAR__return__1_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Character char_444 = new_Character(L':');
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // includes:. 
<<<<<<< HEAD
    Send PSend7133 = new_Send((Optr)VAR_selector_0_0, SMB_includes_, 1, (Optr)char_444_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7137 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7136 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7137, (Optr)&t_block_return);
    Block PBlock7135 = new_Block_with(empty_Array, empty_Array, PThreadedCode7136, 1, PSend7137);
    // ifTrue:. 
    Send PSend7134 = new_Send((Optr)PSend7133, SMB_ifTrue_, 1, (Optr)PBlock7135);
=======
    Send PSend7105 = new_Send((Optr)VAR_selector_0_0, SMB_includes_, 1, (Optr)char_444_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7109 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7108 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7109, (Optr)&t_block_return);
    Block PBlock7107 = new_Block_with(empty_Array, empty_Array, PThreadedCode7108, 1, PSend7109);
    // ifTrue:. 
    Send PSend7106 = new_Send((Optr)PSend7105, SMB_ifTrue_, 1, (Optr)PBlock7107);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
<<<<<<< HEAD
    Send PSend7138 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Array PThreadedCode7132 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend7133, (Optr)&t_send_ifTrue_, (Optr)PSend7134, (Optr)PBlock7135, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7138, (Optr)&t_method_return);
    Block PBlock7130 = new_Block_with(PArray7131, empty_Array, PThreadedCode7132, 2, PSend7134, PSend7138);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7139 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7130);
    Array PThreadedCode7129 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7130, (Optr)&t_send1, (Optr)PSend7139, (Optr)&t_method_return);
    Method PMethod7127 = new_Method_with(PArray7128, empty_Array, empty_Array, PThreadedCode7129, 1, PSend7139);
    
    MethodClosure MC_SMB_shouldRunSelector_ = new_MethodClosure((Method)PMethod7127, PBenchmark_BenchmarkSuite_Class);
=======
    Send PSend7110 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Array PThreadedCode7104 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend7105, (Optr)&t_send_ifTrue_, (Optr)PSend7106, (Optr)PBlock7107, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7110, (Optr)&t_method_return);
    Block PBlock7102 = new_Block_with(PArray7103, empty_Array, PThreadedCode7104, 2, PSend7106, PSend7110);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7111 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7102);
    Array PThreadedCode7101 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7102, (Optr)&t_send1, (Optr)PSend7111, (Optr)&t_method_return);
    Method PMethod7099 = new_Method_with(PArray7100, empty_Array, empty_Array, PThreadedCode7101, 1, PSend7111);
    
    MethodClosure MC_SMB_shouldRunSelector_ = new_MethodClosure((Method)PMethod7099, PBenchmark_BenchmarkSuite_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_shouldRunSelector_, MC_SMB_shouldRunSelector_);
}


<<<<<<< HEAD
static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Symbol SMB_stdevSquared = new_Symbol(L"stdevSquared");
    // stdevSquared. 
    Send PSend7142 = new_Send((Optr)self, SMB_stdevSquared, 0);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend7143 = new_Send((Optr)PSend7142, SMB_sqrt, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend7144 = new_Send((Optr)PSend7143, SMB_asFloat, 0);
    Array PThreadedCode7141 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7142, (Optr)&t_send0, (Optr)PSend7143, (Optr)&t_send0, (Optr)PSend7144, (Optr)&t_method_return);
    Method PMethod7140 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7141, 1, PSend7144);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod7140, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_stdev, MC_SMB_stdev);
=======
static void init_SMB_runBaseBenchmark() {
    Symbol SMB_runBaseBenchmark = new_Symbol(L"runBaseBenchmark");
    Variable VAR_results_0_0 = new_Variable_named(L"results", 0);
    Variable VAR_base_0_1 = new_Variable_named(L"base", 0);
    Array PArray7113 = new_Array_with(2, (Optr)VAR_results_0_0, (Optr)VAR_base_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7116 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_baseBenchmark = new_Symbol(L"baseBenchmark");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_baseBenchmark_Const = new_Constant((Optr)SMB_baseBenchmark);
    // respondsTo:. 
    Send PSend7118 = new_Send((Optr)self, SMB_respondsTo_, 1, (Optr)SMB_baseBenchmark_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7122 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7121 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7122, (Optr)&t_block_return);
    Block PBlock7120 = new_Block_with(empty_Array, empty_Array, PThreadedCode7121, 1, PSend7122);
    // ifFalse:. 
    Send PSend7119 = new_Send((Optr)PSend7118, SMB_ifFalse_, 1, (Optr)PBlock7120);
    // baseBenchmark. 
    Send PSend7124 = new_Send((Optr)self, SMB_baseBenchmark, 0);
    Assign PAssign7123 = new_Assign((Optr)VAR_base_0_1, (Optr)PSend7124);
    // escape:. 
    Send PSend7127 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode7126 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7127, (Optr)&t_block_return);
    Block PBlock7125 = new_Block_with(empty_Array, empty_Array, PThreadedCode7126, 1, PSend7127);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend7128 = new_Send((Optr)VAR_base_0_1, SMB_ifNil_, 1, (Optr)PBlock7125);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7129 = new_Send((Optr)VAR_base_0_1, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_7133 = new_String(L"baseBenchmark cannot be self");
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    Constant string_7133_Const = new_Constant((Optr)string_7133);
    // signal:. 
    Send PSend7134 = new_Send((Optr)Error_classReference, SMB_signal_, 1, (Optr)string_7133_Const);
    Array PThreadedCode7132 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push1, (Optr)string_7133, (Optr)&t_send1, (Optr)PSend7134, (Optr)&t_block_return);
    Block PBlock7131 = new_Block_with(empty_Array, empty_Array, PThreadedCode7132, 1, PSend7134);
    // ifTrue:. 
    Send PSend7130 = new_Send((Optr)PSend7129, SMB_ifTrue_, 1, (Optr)PBlock7131);
    Symbol SMB_runAll = new_Symbol(L"runAll");
    // runAll. 
    Send PSend7135 = new_Send((Optr)VAR_base_0_1, SMB_runAll, 0);
    Symbol SMB_runs = new_Symbol(L"runs");
    // runs. 
    Send PSend7136 = new_Send((Optr)PSend7135, SMB_runs, 0);
    Variable VAR_selector_2_0 = new_Variable_named(L"selector", 2);
    Variable VAR_aRun_2_1 = new_Variable_named(L"aRun", 2);
    Array PArray7138 = new_Array_with(2, (Optr)VAR_selector_2_0, (Optr)VAR_aRun_2_1);
    // runs. 
    Send PSend7140 = new_Send((Optr)self, SMB_runs, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7141 = new_Send((Optr)PSend7140, SMB_at_, 1, (Optr)VAR_selector_2_0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend7142 = new_Send((Optr)PSend7141, SMB_base_, 1, (Optr)VAR_aRun_2_1);
    Array PThreadedCode7139 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7140, (Optr)&t_push_variable, (Optr)VAR_selector_2_0, (Optr)&t_send1, (Optr)PSend7141, (Optr)&t_push_variable, (Optr)VAR_aRun_2_1, (Optr)&t_send1, (Optr)PSend7142, (Optr)&t_method_return);
    Block PBlock7137 = new_Block_with(PArray7138, empty_Array, PThreadedCode7139, 1, PSend7142);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend7143 = new_Send((Optr)PSend7136, SMB_keysAndValuesDo_, 1, (Optr)PBlock7137);
    Array PThreadedCode7117 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_baseBenchmark, (Optr)&t_send1, (Optr)PSend7118, (Optr)&t_send_ifFalse_, (Optr)PSend7119, (Optr)PBlock7120, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7123, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7124, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_push_closure, (Optr)PBlock7125, (Optr)&t_send1, (Optr)PSend7128, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7129, (Optr)&t_send_ifTrue_, (Optr)PSend7130, (Optr)PBlock7131, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_base_0_1, (Optr)&t_send0, (Optr)PSend7135, (Optr)&t_send0, (Optr)PSend7136, (Optr)&t_push_closure, (Optr)PBlock7137, (Optr)&t_send1, (Optr)PSend7143, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7115 = new_Block_with(PArray7116, empty_Array, PThreadedCode7117, 6, PSend7119, PAssign7123, PSend7128, PSend7130, PSend7143, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7144 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7115);
    Array PThreadedCode7114 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7115, (Optr)&t_send1, (Optr)PSend7144, (Optr)&t_method_return);
    Method PMethod7112 = new_Method_with(empty_Array, PArray7113, empty_Array, PThreadedCode7114, 1, PSend7144);
    
    MethodClosure MC_SMB_runBaseBenchmark = new_MethodClosure((Method)PMethod7112, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runBaseBenchmark, MC_SMB_runBaseBenchmark);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Variable VAR_sum_1_0 = new_Variable_named(L"sum", 1);
    Variable VAR_run_1_1 = new_Variable_named(L"run", 1);
    Array PArray7148 = new_Array_with(2, (Optr)VAR_sum_1_0, (Optr)VAR_run_1_1);
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend7150 = new_Send((Optr)VAR_run_1_1, SMB_average, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend7151 = new_Send((Optr)VAR_sum_1_0, SMB__plus_, 1, (Optr)PSend7150);
    Array PThreadedCode7149 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_sum_1_0, (Optr)&t_push_variable, (Optr)VAR_run_1_1, (Optr)&t_send0, (Optr)PSend7150, (Optr)&t_send1, (Optr)PSend7151, (Optr)&t_method_return);
    Block PBlock7147 = new_Block_with(PArray7148, empty_Array, PThreadedCode7149, 1, PSend7151);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // inject:into:. 
    Send PSend7152 = new_Send((Optr)slot_PBenchmark_BenchmarkSuite_runs, SMB_inject_into_, 2, (Optr)int_0_Const, (Optr)PBlock7147);
    Array PThreadedCode7146 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_push_0, (Optr)&t_push_closure, (Optr)PBlock7147, (Optr)&t_send2, (Optr)PSend7152, (Optr)&t_method_return);
    Method PMethod7145 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7146, 1, PSend7152);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod7145, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_benchmarkNameForSelector_() {
    Symbol SMB_benchmarkNameForSelector_ = new_Symbol(L"benchmarkNameForSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray7154 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7157 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_bench = new_Symbol(L"bench");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant SMB_bench_Const = new_Constant((Optr)SMB_bench);
    // beginsWith:. 
    Send PSend7159 = new_Send((Optr)VAR_selector_0_0, SMB_beginsWith_, 1, (Optr)SMB_bench_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7163 = new_Send((Optr)VAR_selector_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // copyFrom:to:. 
    Send PSend7164 = new_Send((Optr)VAR_selector_0_0, SMB_copyFrom_to_, 2, (Optr)int_6_Const, (Optr)PSend7163);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7165 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7164);
    Array PThreadedCode7162 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send0, (Optr)PSend7163, (Optr)&t_send2, (Optr)PSend7164, (Optr)&t_send1, (Optr)PSend7165, (Optr)&t_block_return);
    Block PBlock7161 = new_Block_with(empty_Array, empty_Array, PThreadedCode7162, 1, PSend7165);
    // ifTrue:. 
    Send PSend7160 = new_Send((Optr)PSend7159, SMB_ifTrue_, 1, (Optr)PBlock7161);
    Array PThreadedCode7158 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push1, (Optr)SMB_bench, (Optr)&t_send1, (Optr)PSend7159, (Optr)&t_send_ifTrue_, (Optr)PSend7160, (Optr)PBlock7161, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_method_return);
    Block PBlock7156 = new_Block_with(PArray7157, empty_Array, PThreadedCode7158, 2, PSend7160, VAR_selector_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7166 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7156);
    Array PThreadedCode7155 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7156, (Optr)&t_send1, (Optr)PSend7166, (Optr)&t_method_return);
    Method PMethod7153 = new_Method_with(PArray7154, empty_Array, empty_Array, PThreadedCode7155, 1, PSend7166);
    
    MethodClosure MC_SMB_benchmarkNameForSelector_ = new_MethodClosure((Method)PMethod7153, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_benchmarkNameForSelector_, MC_SMB_benchmarkNameForSelector_);
}


static void init_SMB_runs() {
    Symbol SMB_runs = new_Symbol(L"runs");
    Array PThreadedCode7168 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkSuite_runs, (Optr)&t_method_return);
    Method PMethod7167 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7168, 1, slot_PBenchmark_BenchmarkSuite_runs);
    
    MethodClosure MC_SMB_runs = new_MethodClosure((Method)PMethod7167, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runs, MC_SMB_runs);
}


static void init_SMB_runAll() {
    Symbol SMB_runAll = new_Symbol(L"runAll");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7171 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_allSelectors = new_Symbol(L"allSelectors");
    // allSelectors. 
    Send PSend7172 = new_Send((Optr)PSend7171, SMB_allSelectors, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray7174 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_shouldRunSelector_ = new_Symbol(L"shouldRunSelector:");
    // shouldRunSelector:. 
    Send PSend7176 = new_Send((Optr)self, SMB_shouldRunSelector_, 1, (Optr)VAR_selector_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_run_ = new_Symbol(L"run:");
    // run:. 
    Send PSend7180 = new_Send((Optr)self, SMB_run_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode7179 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7180, (Optr)&t_block_return);
    Block PBlock7178 = new_Block_with(empty_Array, empty_Array, PThreadedCode7179, 1, PSend7180);
    // ifTrue:. 
    Send PSend7177 = new_Send((Optr)PSend7176, SMB_ifTrue_, 1, (Optr)PBlock7178);
    Array PThreadedCode7175 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend7176, (Optr)&t_send_ifTrue_, (Optr)PSend7177, (Optr)PBlock7178, (Optr)&t_method_return);
    Block PBlock7173 = new_Block_with(PArray7174, empty_Array, PThreadedCode7175, 1, PSend7177);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7181 = new_Send((Optr)PSend7172, SMB_do_, 1, (Optr)PBlock7173);
    Array PThreadedCode7170 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7171, (Optr)&t_send0, (Optr)PSend7172, (Optr)&t_push_closure, (Optr)PBlock7173, (Optr)&t_send1, (Optr)PSend7181, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7169 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7170, 2, PSend7181, self);
    
    MethodClosure MC_SMB_runAll = new_MethodClosure((Method)PMethod7169, PBenchmark_BenchmarkSuite_Class);
    store_method(PBenchmark_BenchmarkSuite_Class, SMB_runAll, MC_SMB_runAll);
}


static void init_class_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_run_ = new_Symbol(L"run:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // run:. 
    Send PSend7184 = new_Send((Optr)self, SMB_run_, 1, (Optr)int_10_Const);
    Array PThreadedCode7183 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend7184, (Optr)&t_method_return);
    Method PMethod7182 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7183, 1, PSend7184);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod7182, HEADER(PBenchmark_BenchmarkSuite_Class));
    store_method(HEADER(PBenchmark_BenchmarkSuite_Class), SMB_run, MC_SMB_run);
}


static void init_class_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_probeCount_0_0 = new_Variable_named(L"probeCount", 0);
    Array PArray7186 = new_Array_with(1, (Optr)VAR_probeCount_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7189 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    // probeCount:. 
    Send PSend7191 = new_Send((Optr)VAR__receiver__1_0, SMB_probeCount_, 1, (Optr)VAR_probeCount_0_0);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend7192 = new_Send((Optr)VAR__receiver__1_0, SMB_run, 0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend7193 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode7190 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_probeCount_0_0, (Optr)&t_send1, (Optr)PSend7191, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7192, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend7193, (Optr)&t_method_return);
    Block PBlock7188 = new_Block_with(PArray7189, empty_Array, PThreadedCode7190, 3, PSend7191, PSend7192, PSend7193);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7194 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7195 = new_Send((Optr)PBlock7188, SMB_value_, 1, (Optr)PSend7194);
    Array PThreadedCode7187 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock7188, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7194, (Optr)&t_send1, (Optr)PSend7195, (Optr)&t_method_return);
    Method PMethod7185 = new_Method_with(PArray7186, empty_Array, empty_Array, PThreadedCode7187, 1, PSend7195);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod7185, HEADER(PBenchmark_BenchmarkSuite_Class));
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
    init_SMB_inspectNameOn_();
    init_SMB_run_();
    init_SMB_setUp();
    init_SMB_average();
    init_SMB_initialize();
    init_SMB_stdev();
    init_SMB_printOn_();
    init_SMB_shouldRunSelector_();
    init_SMB_runBaseBenchmark();
    init_SMB_sum();
    init_SMB_benchmarkNameForSelector_();
    init_SMB_runs();
    init_SMB_runAll();
    init_class_SMB_run();
    init_class_SMB_run_();
    
}