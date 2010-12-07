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
    Array PThreadedCode24944 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_method_return);
    Method PMethod24943 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24944, 1, slot_PBenchmark_BenchmarkRun_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod24943, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper24947 = new_Super(SMB_initialize, 0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend24948 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode24946 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24947, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24948, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24945 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24946, 3, PSuper24947, PSend24948, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24945, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_inspectLabelOn_() {
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24950 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24953 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_block_return);
    Block PBlock24952 = new_Block_with(empty_Array, empty_Array, PThreadedCode24953, 1, slot_PBenchmark_BenchmarkRun_selector);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24954 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_name, SMB_ifNil_, 1, (Optr)PBlock24952);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend24955 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend24954);
    Array PThreadedCode24951 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)&t_push_closure, (Optr)PBlock24952, (Optr)&t_send1, (Optr)PSend24954, (Optr)&t_send1, (Optr)PSend24955, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24949 = new_Method_with(PArray24950, empty_Array, empty_Array, PThreadedCode24951, 2, PSend24955, self);
    
    MethodClosure MC_SMB_inspectLabelOn_ = new_MethodClosure((Method)PMethod24949, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_inspectLabelOn_, MC_SMB_inspectLabelOn_);
}


static void init_SMB_performCustomSelector_() {
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Variable VAR_prefix_0_0 = new_Variable_named(L"prefix", 0);
    Array PArray24957 = new_Array_with(1, (Optr)VAR_prefix_0_0);
    Variable VAR_customSelector_0_1 = new_Variable_named(L"customSelector", 0);
    Array PArray24958 = new_Array_with(1, (Optr)VAR_customSelector_0_1);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend24964 = new_Send((Optr)self, SMB_selector, 0);
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    // capitalized. 
    Send PSend24963 = new_Send((Optr)PSend24964, SMB_capitalized, 0);
    // ,. 
    Send PSend24962 = new_Send((Optr)VAR_prefix_0_0, SMB__append_, 1, (Optr)PSend24963);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend24961 = new_Send((Optr)PSend24962, SMB_asSymbol, 0);
    Assign PAssign24960 = new_Assign((Optr)VAR_customSelector_0_1, (Optr)PSend24961);
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    // respondsTo:. 
    Send PSend24965 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_respondsTo_, 1, (Optr)VAR_customSelector_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend24969 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_perform_, 1, (Optr)VAR_customSelector_0_1);
    Array PThreadedCode24968 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_variable, (Optr)VAR_customSelector_0_1, (Optr)&t_send1, (Optr)PSend24969, (Optr)&t_block_return);
    Block PBlock24967 = new_Block_with(empty_Array, empty_Array, PThreadedCode24968, 1, PSend24969);
    // ifTrue:. 
    Send PSend24966 = new_Send((Optr)PSend24965, SMB_ifTrue_, 1, (Optr)PBlock24967);
    Array PThreadedCode24959 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign24960, (Optr)&t_push_variable, (Optr)VAR_prefix_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24964, (Optr)&t_send0, (Optr)PSend24963, (Optr)&t_send1, (Optr)PSend24962, (Optr)&t_send0, (Optr)PSend24961, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_variable, (Optr)VAR_customSelector_0_1, (Optr)&t_send1, (Optr)PSend24965, (Optr)&t_send_ifTrue_, (Optr)PSend24966, (Optr)PBlock24967, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24956 = new_Method_with(PArray24957, PArray24958, empty_Array, PThreadedCode24959, 3, PAssign24960, PSend24966, self);
    
    MethodClosure MC_SMB_performCustomSelector_ = new_MethodClosure((Method)PMethod24956, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_performCustomSelector_, MC_SMB_performCustomSelector_);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24971 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper24973 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24972 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24973, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24970 = new_Method_with(PArray24971, empty_Array, empty_Array, PThreadedCode24972, 2, PSuper24973, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod24970, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24975 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    // inspectLabelOn:. 
    Send PSend24977 = new_Send((Optr)self, SMB_inspectLabelOn_, 1, (Optr)VAR_aStream_0_0);
    String string_24978 = new_String(L" ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_24978_Const = new_Constant((Optr)string_24978);
    // <<. 
    Send PSend24979 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_24978_Const);
    Super PSuper24980 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24976 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24977, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24978, (Optr)&t_send1, (Optr)PSend24979, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24980, (Optr)&t_method_return);
    Method PMethod24974 = new_Method_with(PArray24975, empty_Array, empty_Array, PThreadedCode24976, 3, PSend24977, PSend24979, PSuper24980);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod24974, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_probeCount() {
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    Array PThreadedCode24982 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)&t_method_return);
    Method PMethod24981 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24982, 1, slot_PBenchmark_AbstractBenchmark_probeCount);
    
    MethodClosure MC_SMB_probeCount = new_MethodClosure((Method)PMethod24981, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probeCount, MC_SMB_probeCount);
}


static void init_SMB_probeCount_() {
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24984 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24986 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24985 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24986, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24983 = new_Method_with(PArray24984, empty_Array, empty_Array, PThreadedCode24985, 2, PAssign24986, self);
    
    MethodClosure MC_SMB_probeCount_ = new_MethodClosure((Method)PMethod24983, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probeCount_, MC_SMB_probeCount_);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend24989 = new_Send((Optr)self, SMB_probes, 0);
    // sum. 
    Send PSend24990 = new_Send((Optr)PSend24989, SMB_sum, 0);
    Array PThreadedCode24988 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24989, (Optr)&t_send0, (Optr)PSend24990, (Optr)&t_method_return);
    Method PMethod24987 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24988, 1, PSend24990);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod24987, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_aRun_0_0 = new_Variable_named(L"aRun", 0);
    Array PArray24992 = new_Array_with(1, (Optr)VAR_aRun_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend24994 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_aRun_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24998 = new_String(L"Do not set the base to the same as self");
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    Constant string_24998_Const = new_Constant((Optr)string_24998);
    // signal:. 
    Send PSend24999 = new_Send((Optr)Error_classReference, SMB_signal_, 1, (Optr)string_24998_Const);
    Array PThreadedCode24997 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push1, (Optr)string_24998, (Optr)&t_send1, (Optr)PSend24999, (Optr)&t_block_return);
    Block PBlock24996 = new_Block_with(empty_Array, empty_Array, PThreadedCode24997, 1, PSend24999);
    // ifTrue:. 
    Send PSend24995 = new_Send((Optr)PSend24994, SMB_ifTrue_, 1, (Optr)PBlock24996);
    Assign PAssign25000 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)VAR_aRun_0_0);
    Array PThreadedCode24993 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aRun_0_0, (Optr)&t_send1, (Optr)PSend24994, (Optr)&t_send_ifTrue_, (Optr)PSend24995, (Optr)PBlock24996, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign25000, (Optr)&t_push_variable, (Optr)VAR_aRun_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24991 = new_Method_with(PArray24992, empty_Array, empty_Array, PThreadedCode24993, 3, PSend24995, PAssign25000, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod24991, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_base_, MC_SMB_base_);
}


static void init_SMB_probes() {
    Symbol SMB_probes = new_Symbol(L"probes");
    Array PThreadedCode25002 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)&t_method_return);
    Method PMethod25001 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25002, 1, slot_PBenchmark_BenchmarkRun_probes);
    
    MethodClosure MC_SMB_probes = new_MethodClosure((Method)PMethod25001, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probes, MC_SMB_probes);
}


static void init_SMB_target_() {
    Symbol SMB_target_ = new_Symbol(L"target:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray25004 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign25006 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)VAR_anObject_0_0);
    Array PThreadedCode25005 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign25006, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25003 = new_Method_with(PArray25004, empty_Array, empty_Array, PThreadedCode25005, 2, PAssign25006, self);
    
    MethodClosure MC_SMB_target_ = new_MethodClosure((Method)PMethod25003, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_target_, MC_SMB_target_);
}


static void init_SMB_runProbe() {
    Symbol SMB_runProbe = new_Symbol(L"runProbe");
    Variable VAR_time_0_0 = new_Variable_named(L"time", 0);
    Array PArray25008 = new_Array_with(1, (Optr)VAR_time_0_0);
    Symbol SMB_setUpProbe = new_Symbol(L"setUpProbe");
    // setUpProbe. 
    Send PSend25010 = new_Send((Optr)self, SMB_setUpProbe, 0);
    Symbol SMB_currentMillis = new_Symbol(L"currentMillis");
    // currentMillis. 
    Send PSend25012 = new_Send((Optr)self, SMB_currentMillis, 0);
    Assign PAssign25011 = new_Assign((Optr)VAR_time_0_0, (Optr)PSend25012);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend25013 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_perform_, 1, (Optr)slot_PBenchmark_BenchmarkRun_selector);
    // currentMillis. 
    Send PSend25016 = new_Send((Optr)self, SMB_currentMillis, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend25015 = new_Send((Optr)PSend25016, SMB__minus_, 1, (Optr)VAR_time_0_0);
    Assign PAssign25014 = new_Assign((Optr)VAR_time_0_0, (Optr)PSend25015);
    Symbol SMB_tearDownProbe = new_Symbol(L"tearDownProbe");
    // tearDownProbe. 
    Send PSend25017 = new_Send((Optr)self, SMB_tearDownProbe, 0);
    Float float_1000_0 = new_Float(1000.0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant float_1000_0_Const = new_Constant((Optr)float_1000_0);
    // /. 
    Send PSend25018 = new_Send((Optr)VAR_time_0_0, SMB__divide_, 1, (Optr)float_1000_0_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend25019 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_probes, SMB_add_, 1, (Optr)PSend25018);
    Array PThreadedCode25009 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25010, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign25011, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25012, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_send1, (Optr)PSend25013, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign25014, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25016, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_send1, (Optr)PSend25015, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25017, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_push1, (Optr)float_1000_0, (Optr)&t_send1, (Optr)PSend25018, (Optr)&t_send1, (Optr)PSend25019, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_method_return);
    Method PMethod25007 = new_Method_with(empty_Array, PArray25008, empty_Array, PThreadedCode25009, 7, PSend25010, PAssign25011, PSend25013, PAssign25014, PSend25017, PSend25019, VAR_time_0_0);
    
    MethodClosure MC_SMB_runProbe = new_MethodClosure((Method)PMethod25007, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_runProbe, MC_SMB_runProbe);
}


static void init_SMB_probes_() {
    Symbol SMB_probes_ = new_Symbol(L"probes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray25021 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign25023 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)VAR_anObject_0_0);
    Array PThreadedCode25022 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign25023, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25020 = new_Method_with(PArray25021, empty_Array, empty_Array, PThreadedCode25022, 2, PAssign25023, self);
    
    MethodClosure MC_SMB_probes_ = new_MethodClosure((Method)PMethod25020, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probes_, MC_SMB_probes_);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend25026 = new_Send((Optr)self, SMB_average, 0);
    Array PThreadedCode25025 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25026, (Optr)&t_method_return);
    Method PMethod25024 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25025, 1, PSend25026);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod25024, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_total, MC_SMB_total);
}


static void init_SMB_tearDownProbe() {
    Symbol SMB_tearDownProbe = new_Symbol(L"tearDownProbe");
    Symbol  SMB_tearDown = new_Symbol(L"tearDown");
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Constant SMB_tearDown_Const = new_Constant((Optr)SMB_tearDown);
    // performCustomSelector:. 
    Send PSend25029 = new_Send((Optr)self, SMB_performCustomSelector_, 1, (Optr)SMB_tearDown_Const);
    // tearDown. 
    Send PSend25030 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_tearDown, 0);
    Array PThreadedCode25028 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_tearDown, (Optr)&t_send1, (Optr)PSend25029, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_send0, (Optr)PSend25030, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25027 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25028, 3, PSend25029, PSend25030, self);
    
    MethodClosure MC_SMB_tearDownProbe = new_MethodClosure((Method)PMethod25027, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_tearDownProbe, MC_SMB_tearDownProbe);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    Assign PAssign25033 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)int_30_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend25035 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount);
    Assign PAssign25034 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)PSend25035);
    Array PThreadedCode25032 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign25033, (Optr)&t_push1, (Optr)int_30, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign25034, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_slot, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)&t_send1, (Optr)PSend25035, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25031 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25032, 3, PAssign25033, PAssign25034, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod25031, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend25038 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_runProbe = new_Symbol(L"runProbe");
    // runProbe. 
    Send PSend25041 = new_Send((Optr)self, SMB_runProbe, 0);
    Array PThreadedCode25040 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25041, (Optr)&t_block_return);
    Block PBlock25039 = new_Block_with(empty_Array, empty_Array, PThreadedCode25040, 1, PSend25041);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend25042 = new_Send((Optr)PSend25038, SMB_timesRepeat_, 1, (Optr)PBlock25039);
    Array PThreadedCode25037 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25038, (Optr)&t_push_closure, (Optr)PBlock25039, (Optr)&t_send1, (Optr)PSend25042, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25036 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25037, 2, PSend25042, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod25036, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray25044 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign25046 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)VAR_anObject_0_0);
    Array PThreadedCode25045 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign25046, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25043 = new_Method_with(PArray25044, empty_Array, empty_Array, PThreadedCode25045, 2, PAssign25046, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod25043, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB_setUpProbe() {
    Symbol SMB_setUpProbe = new_Symbol(L"setUpProbe");
    Variable VAR_customSetUp_0_0 = new_Variable_named(L"customSetUp", 0);
    Array PArray25048 = new_Array_with(1, (Optr)VAR_customSetUp_0_0);
    Symbol SMB_setUp = new_Symbol(L"setUp");
    // setUp. 
    Send PSend25050 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_setUp, 0);
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Constant SMB_setUp_Const = new_Constant((Optr)SMB_setUp);
    // performCustomSelector:. 
    Send PSend25051 = new_Send((Optr)self, SMB_performCustomSelector_, 1, (Optr)SMB_setUp_Const);
    Array PThreadedCode25049 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_send0, (Optr)PSend25050, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_setUp, (Optr)&t_send1, (Optr)PSend25051, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25047 = new_Method_with(empty_Array, PArray25048, empty_Array, PThreadedCode25049, 3, PSend25050, PSend25051, self);
    
    MethodClosure MC_SMB_setUpProbe = new_MethodClosure((Method)PMethod25047, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_setUpProbe, MC_SMB_setUpProbe);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Variable VAR_avg_0_0 = new_Variable_named(L"avg", 0);
    Array PArray25053 = new_Array_with(1, (Optr)VAR_avg_0_0);
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend25057 = new_Send((Optr)self, SMB_probes, 0);
    // average. 
    Send PSend25056 = new_Send((Optr)PSend25057, SMB_average, 0);
    Assign PAssign25055 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend25056);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // average. 
    Send PSend25062 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_average, 0);
    // -. 
    Send PSend25061 = new_Send((Optr)VAR_avg_0_0, SMB__minus_, 1, (Optr)PSend25062);
    Assign PAssign25060 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend25061);
    Array PThreadedCode25059 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign25060, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_send0, (Optr)PSend25062, (Optr)&t_send1, (Optr)PSend25061, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock25058 = new_Block_with(empty_Array, empty_Array, PThreadedCode25059, 1, PAssign25060);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend25063 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_ifNotNil_, 1, (Optr)PBlock25058);
    Array PThreadedCode25054 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign25055, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25057, (Optr)&t_send0, (Optr)PSend25056, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_push_closure, (Optr)PBlock25058, (Optr)&t_send1, (Optr)PSend25063, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_method_return);
    Method PMethod25052 = new_Method_with(empty_Array, PArray25053, empty_Array, PThreadedCode25054, 3, PAssign25055, PSend25063, VAR_avg_0_0);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod25052, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray25065 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign25067 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode25066 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign25067, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25064 = new_Method_with(PArray25065, empty_Array, empty_Array, PThreadedCode25066, 2, PAssign25067, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod25064, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Variable VAR_stdev_0_0 = new_Variable_named(L"stdev", 0);
    Array PArray25069 = new_Array_with(1, (Optr)VAR_stdev_0_0);
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend25073 = new_Send((Optr)self, SMB_probes, 0);
    // stdev. 
    Send PSend25072 = new_Send((Optr)PSend25073, SMB_stdev, 0);
    Assign PAssign25071 = new_Assign((Optr)VAR_stdev_0_0, (Optr)PSend25072);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // stdev. 
    Send PSend25078 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_stdev, 0);
    // +. 
    Send PSend25077 = new_Send((Optr)VAR_stdev_0_0, SMB__plus_, 1, (Optr)PSend25078);
    Assign PAssign25076 = new_Assign((Optr)VAR_stdev_0_0, (Optr)PSend25077);
    Array PThreadedCode25075 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign25076, (Optr)&t_push_variable, (Optr)VAR_stdev_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_send0, (Optr)PSend25078, (Optr)&t_send1, (Optr)PSend25077, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock25074 = new_Block_with(empty_Array, empty_Array, PThreadedCode25075, 1, PAssign25076);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend25079 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_ifNotNil_, 1, (Optr)PBlock25074);
    Array PThreadedCode25070 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign25071, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend25073, (Optr)&t_send0, (Optr)PSend25072, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_push_closure, (Optr)PBlock25074, (Optr)&t_send1, (Optr)PSend25079, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stdev_0_0, (Optr)&t_method_return);
    Method PMethod25068 = new_Method_with(empty_Array, PArray25069, empty_Array, PThreadedCode25070, 3, PAssign25071, PSend25079, VAR_stdev_0_0);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod25068, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode25081 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)&t_method_return);
    Method PMethod25080 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25081, 1, slot_PBenchmark_BenchmarkRun_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod25080, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_target() {
    Symbol SMB_target = new_Symbol(L"target");
    Array PThreadedCode25083 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_method_return);
    Method PMethod25082 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25083, 1, slot_PBenchmark_BenchmarkRun_target);
    
    MethodClosure MC_SMB_target = new_MethodClosure((Method)PMethod25082, PBenchmark_BenchmarkRun_Class);
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