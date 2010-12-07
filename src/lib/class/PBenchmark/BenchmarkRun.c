#include <lib/class/PBenchmark/BenchmarkRun.h>


Optr layout_PBenchmark_BenchmarkRun_Class_class;
Optr slot_PBenchmark_BenchmarkRun_probes;
Optr slot_PBenchmark_BenchmarkRun_target;
Optr slot_PBenchmark_BenchmarkRun_selector;
Optr slot_PBenchmark_BenchmarkRun_name;
Optr slot_PBenchmark_BenchmarkRun_base;
Optr layout_PBenchmark_BenchmarkRun;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode24982 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_method_return);
    Method PMethod24981 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24982, 1, slot_PBenchmark_BenchmarkRun_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod24981, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper24985 = new_Super(SMB_initialize, 0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend24986 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode24984 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24985, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24986, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24983 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24984, 3, PSuper24985, PSend24986, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24983, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_inspectLabelOn_() {
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24988 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24991 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_block_return);
    Block PBlock24990 = new_Block_with(empty_Array, empty_Array, PThreadedCode24991, 1, slot_PBenchmark_BenchmarkRun_selector);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24992 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_name, SMB_ifNil_, 1, (Optr)PBlock24990);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend24993 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend24992);
    Array PThreadedCode24989 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)&t_push_closure, (Optr)PBlock24990, (Optr)&t_send1, (Optr)PSend24992, (Optr)&t_send1, (Optr)PSend24993, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24987 = new_Method_with(PArray24988, empty_Array, empty_Array, PThreadedCode24989, 2, PSend24993, self);
    
    MethodClosure MC_SMB_inspectLabelOn_ = new_MethodClosure((Method)PMethod24987, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_inspectLabelOn_, MC_SMB_inspectLabelOn_);
}


static void init_SMB_performCustomSelector_() {
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Variable VAR_prefix_0_0 = new_Variable_named(L"prefix", 0);
    Array PArray24995 = new_Array_with(1, (Optr)VAR_prefix_0_0);
    Variable VAR_customSelector_0_1 = new_Variable_named(L"customSelector", 0);
    Array PArray24996 = new_Array_with(1, (Optr)VAR_customSelector_0_1);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend25002 = new_Send((Optr)self, SMB_selector, 0);
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    // capitalized. 
    Send PSend25001 = new_Send((Optr)PSend25002, SMB_capitalized, 0);
    // ,. 
    Send PSend25000 = new_Send((Optr)VAR_prefix_0_0, SMB__append_, 1, (Optr)PSend25001);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend24999 = new_Send((Optr)PSend25000, SMB_asSymbol, 0);
    Assign PAssign24998 = new_Assign((Optr)VAR_customSelector_0_1, (Optr)PSend24999);
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    // respondsTo:. 
    Send PSend25003 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_respondsTo_, 1, (Optr)VAR_customSelector_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend25007 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_perform_, 1, (Optr)VAR_customSelector_0_1);
    Array PThreadedCode25006 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_variable, (Optr)VAR_customSelector_0_1, (Optr)&t_send1, (Optr)PSend25007, (Optr)&t_block_return);
    Block PBlock25005 = new_Block_with(empty_Array, empty_Array, PThreadedCode25006, 1, PSend25007);
    // ifTrue:. 
    Send PSend25004 = new_Send((Optr)PSend25003, SMB_ifTrue_, 1, (Optr)PBlock25005);
    Array PThreadedCode24997 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign24998, (Optr)&t_push_variable, (Optr)VAR_prefix_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25002, (Optr)&t_send0, (Optr)PSend25001, (Optr)&t_send1, (Optr)PSend25000, (Optr)&t_send0, (Optr)PSend24999, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_variable, (Optr)VAR_customSelector_0_1, (Optr)&t_send1, (Optr)PSend25003, (Optr)&t_send_ifTrue_, (Optr)PSend25004, (Optr)PBlock25005, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24994 = new_Method_with(PArray24995, PArray24996, empty_Array, PThreadedCode24997, 3, PAssign24998, PSend25004, self);
    
    MethodClosure MC_SMB_performCustomSelector_ = new_MethodClosure((Method)PMethod24994, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_performCustomSelector_, MC_SMB_performCustomSelector_);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray25009 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper25011 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode25010 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper25011, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25008 = new_Method_with(PArray25009, empty_Array, empty_Array, PThreadedCode25010, 2, PSuper25011, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod25008, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray25013 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    // inspectLabelOn:. 
    Send PSend25015 = new_Send((Optr)self, SMB_inspectLabelOn_, 1, (Optr)VAR_aStream_0_0);
    String string_25016 = new_String(L" ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_25016_Const = new_Constant((Optr)string_25016);
    // <<. 
    Send PSend25017 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_25016_Const);
    Super PSuper25018 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode25014 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend25015, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_25016, (Optr)&t_send1, (Optr)PSend25017, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper25018, (Optr)&t_method_return);
    Method PMethod25012 = new_Method_with(PArray25013, empty_Array, empty_Array, PThreadedCode25014, 3, PSend25015, PSend25017, PSuper25018);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod25012, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_probeCount() {
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    Array PThreadedCode25020 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)&t_method_return);
    Method PMethod25019 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25020, 1, slot_PBenchmark_AbstractBenchmark_probeCount);
    
    MethodClosure MC_SMB_probeCount = new_MethodClosure((Method)PMethod25019, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probeCount, MC_SMB_probeCount);
}


static void init_SMB_probeCount_() {
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray25022 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign25024 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)VAR_anObject_0_0);
    Array PThreadedCode25023 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign25024, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25021 = new_Method_with(PArray25022, empty_Array, empty_Array, PThreadedCode25023, 2, PAssign25024, self);
    
    MethodClosure MC_SMB_probeCount_ = new_MethodClosure((Method)PMethod25021, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probeCount_, MC_SMB_probeCount_);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend25027 = new_Send((Optr)self, SMB_probes, 0);
    // sum. 
    Send PSend25028 = new_Send((Optr)PSend25027, SMB_sum, 0);
    Array PThreadedCode25026 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25027, (Optr)&t_send0, (Optr)PSend25028, (Optr)&t_method_return);
    Method PMethod25025 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25026, 1, PSend25028);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod25025, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_aRun_0_0 = new_Variable_named(L"aRun", 0);
    Array PArray25030 = new_Array_with(1, (Optr)VAR_aRun_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend25032 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_aRun_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_25036 = new_String(L"Do not set the base to the same as self");
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    Constant string_25036_Const = new_Constant((Optr)string_25036);
    // signal:. 
    Send PSend25037 = new_Send((Optr)Error_classReference, SMB_signal_, 1, (Optr)string_25036_Const);
    Array PThreadedCode25035 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push1, (Optr)string_25036, (Optr)&t_send1, (Optr)PSend25037, (Optr)&t_block_return);
    Block PBlock25034 = new_Block_with(empty_Array, empty_Array, PThreadedCode25035, 1, PSend25037);
    // ifTrue:. 
    Send PSend25033 = new_Send((Optr)PSend25032, SMB_ifTrue_, 1, (Optr)PBlock25034);
    Assign PAssign25038 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)VAR_aRun_0_0);
    Array PThreadedCode25031 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aRun_0_0, (Optr)&t_send1, (Optr)PSend25032, (Optr)&t_send_ifTrue_, (Optr)PSend25033, (Optr)PBlock25034, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign25038, (Optr)&t_push_variable, (Optr)VAR_aRun_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25029 = new_Method_with(PArray25030, empty_Array, empty_Array, PThreadedCode25031, 3, PSend25033, PAssign25038, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod25029, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_base_, MC_SMB_base_);
}


static void init_SMB_probes() {
    Symbol SMB_probes = new_Symbol(L"probes");
    Array PThreadedCode25040 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)&t_method_return);
    Method PMethod25039 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25040, 1, slot_PBenchmark_BenchmarkRun_probes);
    
    MethodClosure MC_SMB_probes = new_MethodClosure((Method)PMethod25039, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probes, MC_SMB_probes);
}


static void init_SMB_target_() {
    Symbol SMB_target_ = new_Symbol(L"target:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray25042 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign25044 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)VAR_anObject_0_0);
    Array PThreadedCode25043 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign25044, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25041 = new_Method_with(PArray25042, empty_Array, empty_Array, PThreadedCode25043, 2, PAssign25044, self);
    
    MethodClosure MC_SMB_target_ = new_MethodClosure((Method)PMethod25041, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_target_, MC_SMB_target_);
}


static void init_SMB_runProbe() {
    Symbol SMB_runProbe = new_Symbol(L"runProbe");
    Variable VAR_time_0_0 = new_Variable_named(L"time", 0);
    Array PArray25046 = new_Array_with(1, (Optr)VAR_time_0_0);
    Symbol SMB_setUpProbe = new_Symbol(L"setUpProbe");
    // setUpProbe. 
    Send PSend25048 = new_Send((Optr)self, SMB_setUpProbe, 0);
    Symbol SMB_currentMillis = new_Symbol(L"currentMillis");
    // currentMillis. 
    Send PSend25050 = new_Send((Optr)self, SMB_currentMillis, 0);
    Assign PAssign25049 = new_Assign((Optr)VAR_time_0_0, (Optr)PSend25050);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend25051 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_perform_, 1, (Optr)slot_PBenchmark_BenchmarkRun_selector);
    // currentMillis. 
    Send PSend25054 = new_Send((Optr)self, SMB_currentMillis, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend25053 = new_Send((Optr)PSend25054, SMB__minus_, 1, (Optr)VAR_time_0_0);
    Assign PAssign25052 = new_Assign((Optr)VAR_time_0_0, (Optr)PSend25053);
    Symbol SMB_tearDownProbe = new_Symbol(L"tearDownProbe");
    // tearDownProbe. 
    Send PSend25055 = new_Send((Optr)self, SMB_tearDownProbe, 0);
    Float float_1000_0 = new_Float(1000.0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant float_1000_0_Const = new_Constant((Optr)float_1000_0);
    // /. 
    Send PSend25056 = new_Send((Optr)VAR_time_0_0, SMB__divide_, 1, (Optr)float_1000_0_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend25057 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_probes, SMB_add_, 1, (Optr)PSend25056);
    Array PThreadedCode25047 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25048, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign25049, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25050, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_send1, (Optr)PSend25051, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign25052, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25054, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_send1, (Optr)PSend25053, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25055, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_push1, (Optr)float_1000_0, (Optr)&t_send1, (Optr)PSend25056, (Optr)&t_send1, (Optr)PSend25057, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_method_return);
    Method PMethod25045 = new_Method_with(empty_Array, PArray25046, empty_Array, PThreadedCode25047, 7, PSend25048, PAssign25049, PSend25051, PAssign25052, PSend25055, PSend25057, VAR_time_0_0);
    
    MethodClosure MC_SMB_runProbe = new_MethodClosure((Method)PMethod25045, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_runProbe, MC_SMB_runProbe);
}


static void init_SMB_probes_() {
    Symbol SMB_probes_ = new_Symbol(L"probes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray25059 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign25061 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)VAR_anObject_0_0);
    Array PThreadedCode25060 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign25061, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25058 = new_Method_with(PArray25059, empty_Array, empty_Array, PThreadedCode25060, 2, PAssign25061, self);
    
    MethodClosure MC_SMB_probes_ = new_MethodClosure((Method)PMethod25058, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probes_, MC_SMB_probes_);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend25064 = new_Send((Optr)self, SMB_average, 0);
    Array PThreadedCode25063 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25064, (Optr)&t_method_return);
    Method PMethod25062 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25063, 1, PSend25064);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod25062, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_total, MC_SMB_total);
}


static void init_SMB_tearDownProbe() {
    Symbol SMB_tearDownProbe = new_Symbol(L"tearDownProbe");
    Symbol  SMB_tearDown = new_Symbol(L"tearDown");
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Constant SMB_tearDown_Const = new_Constant((Optr)SMB_tearDown);
    // performCustomSelector:. 
    Send PSend25067 = new_Send((Optr)self, SMB_performCustomSelector_, 1, (Optr)SMB_tearDown_Const);
    // tearDown. 
    Send PSend25068 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_tearDown, 0);
    Array PThreadedCode25066 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_tearDown, (Optr)&t_send1, (Optr)PSend25067, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_send0, (Optr)PSend25068, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25065 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25066, 3, PSend25067, PSend25068, self);
    
    MethodClosure MC_SMB_tearDownProbe = new_MethodClosure((Method)PMethod25065, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_tearDownProbe, MC_SMB_tearDownProbe);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    Assign PAssign25071 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)int_30_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend25073 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount);
    Assign PAssign25072 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)PSend25073);
    Array PThreadedCode25070 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign25071, (Optr)&t_push1, (Optr)int_30, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign25072, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_slot, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)&t_send1, (Optr)PSend25073, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25069 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25070, 3, PAssign25071, PAssign25072, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod25069, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend25076 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_runProbe = new_Symbol(L"runProbe");
    // runProbe. 
    Send PSend25079 = new_Send((Optr)self, SMB_runProbe, 0);
    Array PThreadedCode25078 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25079, (Optr)&t_block_return);
    Block PBlock25077 = new_Block_with(empty_Array, empty_Array, PThreadedCode25078, 1, PSend25079);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend25080 = new_Send((Optr)PSend25076, SMB_timesRepeat_, 1, (Optr)PBlock25077);
    Array PThreadedCode25075 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25076, (Optr)&t_push_closure, (Optr)PBlock25077, (Optr)&t_send1, (Optr)PSend25080, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25074 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25075, 2, PSend25080, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod25074, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray25082 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign25084 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)VAR_anObject_0_0);
    Array PThreadedCode25083 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign25084, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25081 = new_Method_with(PArray25082, empty_Array, empty_Array, PThreadedCode25083, 2, PAssign25084, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod25081, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB_setUpProbe() {
    Symbol SMB_setUpProbe = new_Symbol(L"setUpProbe");
    Variable VAR_customSetUp_0_0 = new_Variable_named(L"customSetUp", 0);
    Array PArray25086 = new_Array_with(1, (Optr)VAR_customSetUp_0_0);
    Symbol SMB_setUp = new_Symbol(L"setUp");
    // setUp. 
    Send PSend25088 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_setUp, 0);
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Constant SMB_setUp_Const = new_Constant((Optr)SMB_setUp);
    // performCustomSelector:. 
    Send PSend25089 = new_Send((Optr)self, SMB_performCustomSelector_, 1, (Optr)SMB_setUp_Const);
    Array PThreadedCode25087 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_send0, (Optr)PSend25088, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_setUp, (Optr)&t_send1, (Optr)PSend25089, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25085 = new_Method_with(empty_Array, PArray25086, empty_Array, PThreadedCode25087, 3, PSend25088, PSend25089, self);
    
    MethodClosure MC_SMB_setUpProbe = new_MethodClosure((Method)PMethod25085, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_setUpProbe, MC_SMB_setUpProbe);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Variable VAR_avg_0_0 = new_Variable_named(L"avg", 0);
    Array PArray25091 = new_Array_with(1, (Optr)VAR_avg_0_0);
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend25095 = new_Send((Optr)self, SMB_probes, 0);
    // average. 
    Send PSend25094 = new_Send((Optr)PSend25095, SMB_average, 0);
    Assign PAssign25093 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend25094);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // average. 
    Send PSend25100 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_average, 0);
    // -. 
    Send PSend25099 = new_Send((Optr)VAR_avg_0_0, SMB__minus_, 1, (Optr)PSend25100);
    Assign PAssign25098 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend25099);
    Array PThreadedCode25097 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign25098, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_send0, (Optr)PSend25100, (Optr)&t_send1, (Optr)PSend25099, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock25096 = new_Block_with(empty_Array, empty_Array, PThreadedCode25097, 1, PAssign25098);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend25101 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_ifNotNil_, 1, (Optr)PBlock25096);
    Array PThreadedCode25092 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign25093, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25095, (Optr)&t_send0, (Optr)PSend25094, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_push_closure, (Optr)PBlock25096, (Optr)&t_send1, (Optr)PSend25101, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_method_return);
    Method PMethod25090 = new_Method_with(empty_Array, PArray25091, empty_Array, PThreadedCode25092, 3, PAssign25093, PSend25101, VAR_avg_0_0);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod25090, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray25103 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign25105 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode25104 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign25105, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25102 = new_Method_with(PArray25103, empty_Array, empty_Array, PThreadedCode25104, 2, PAssign25105, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod25102, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Variable VAR_stdev_0_0 = new_Variable_named(L"stdev", 0);
    Array PArray25107 = new_Array_with(1, (Optr)VAR_stdev_0_0);
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend25111 = new_Send((Optr)self, SMB_probes, 0);
    // stdev. 
    Send PSend25110 = new_Send((Optr)PSend25111, SMB_stdev, 0);
    Assign PAssign25109 = new_Assign((Optr)VAR_stdev_0_0, (Optr)PSend25110);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // stdev. 
    Send PSend25116 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_stdev, 0);
    // +. 
    Send PSend25115 = new_Send((Optr)VAR_stdev_0_0, SMB__plus_, 1, (Optr)PSend25116);
    Assign PAssign25114 = new_Assign((Optr)VAR_stdev_0_0, (Optr)PSend25115);
    Array PThreadedCode25113 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign25114, (Optr)&t_push_variable, (Optr)VAR_stdev_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_send0, (Optr)PSend25116, (Optr)&t_send1, (Optr)PSend25115, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock25112 = new_Block_with(empty_Array, empty_Array, PThreadedCode25113, 1, PAssign25114);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend25117 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_ifNotNil_, 1, (Optr)PBlock25112);
    Array PThreadedCode25108 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign25109, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25111, (Optr)&t_send0, (Optr)PSend25110, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_push_closure, (Optr)PBlock25112, (Optr)&t_send1, (Optr)PSend25117, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stdev_0_0, (Optr)&t_method_return);
    Method PMethod25106 = new_Method_with(empty_Array, PArray25107, empty_Array, PThreadedCode25108, 3, PAssign25109, PSend25117, VAR_stdev_0_0);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod25106, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode25119 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)&t_method_return);
    Method PMethod25118 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25119, 1, slot_PBenchmark_BenchmarkRun_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod25118, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_target() {
    Symbol SMB_target = new_Symbol(L"target");
    Array PThreadedCode25121 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_method_return);
    Method PMethod25120 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25121, 1, slot_PBenchmark_BenchmarkRun_target);
    
    MethodClosure MC_SMB_target = new_MethodClosure((Method)PMethod25120, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_target, MC_SMB_target);
}

void init_PBenchmark_PBenchmarkRun_layout() {
    layout_PBenchmark_BenchmarkRun_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PBenchmark_BenchmarkRun_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PBenchmark_BenchmarkRun_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PBenchmark_BenchmarkRun_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PBenchmark_BenchmarkRun_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PBenchmark_BenchmarkRun_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_BenchmarkRun = new_Symbol(L"BenchmarkRun");
    slot_PBenchmark_BenchmarkRun_probes = (Optr)new_Slot(1, L"probes");
    slot_PBenchmark_BenchmarkRun_target = (Optr)new_Slot(2, L"target");
    slot_PBenchmark_BenchmarkRun_selector = (Optr)new_Slot(3, L"selector");
    slot_PBenchmark_BenchmarkRun_name = (Optr)new_Slot(4, L"name");
    slot_PBenchmark_BenchmarkRun_base = (Optr)new_Slot(5, L"base");
    layout_PBenchmark_BenchmarkRun = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_PBenchmark_BenchmarkRun)->values[0] = slot_PBenchmark_AbstractBenchmark_probeCount; // probeCount 
    ((Array)layout_PBenchmark_BenchmarkRun)->values[1] = slot_PBenchmark_BenchmarkRun_probes; // probes 
    ((Array)layout_PBenchmark_BenchmarkRun)->values[2] = slot_PBenchmark_BenchmarkRun_target; // target 
    ((Array)layout_PBenchmark_BenchmarkRun)->values[3] = slot_PBenchmark_BenchmarkRun_selector; // selector 
    ((Array)layout_PBenchmark_BenchmarkRun)->values[4] = slot_PBenchmark_BenchmarkRun_name; // name 
    ((Array)layout_PBenchmark_BenchmarkRun)->values[5] = slot_PBenchmark_BenchmarkRun_base; // base 
    PBenchmark_BenchmarkRun_Class = (Class)new_Class(PBenchmark_AbstractBenchmark_Class, layout_PBenchmark_BenchmarkRun_Class_class);
    PBenchmark_BenchmarkRun_Class->layout = layout_PBenchmark_BenchmarkRun;
    PBenchmark_BenchmarkRun_Class->name = SMB_BenchmarkRun;
    
}

void init_PBenchmark_PBenchmarkRun_methods() {
    init_SMB_selector();
    init_SMB_initialize();
    init_SMB_inspectLabelOn_();
    init_SMB_performCustomSelector_();
    init_SMB_inspectNameOn_();
    init_SMB_printOn_();
    init_SMB_probeCount();
    init_SMB_probeCount_();
    init_SMB_sum();
    init_SMB_base_();
    init_SMB_probes();
    init_SMB_target_();
    init_SMB_runProbe();
    init_SMB_probes_();
    init_SMB_total();
    init_SMB_tearDownProbe();
    init_SMB_reset();
    init_SMB_run();
    init_SMB_selector_();
    init_SMB_setUpProbe();
    init_SMB_average();
    init_SMB_name_();
    init_SMB_stdev();
    init_SMB_name();
    init_SMB_target();
    
}