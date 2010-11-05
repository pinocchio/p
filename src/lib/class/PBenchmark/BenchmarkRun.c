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
    Array PThreadedCode24404 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_method_return);
    Method PMethod24403 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24404, 1, slot_PBenchmark_BenchmarkRun_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod24403, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper24407 = new_Super(SMB_initialize, 0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend24408 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode24406 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24407, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24408, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24405 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24406, 3, PSuper24407, PSend24408, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24405, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_inspectLabelOn_() {
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24410 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24413 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_block_return);
    Block PBlock24412 = new_Block_with(empty_Array, empty_Array, PThreadedCode24413, 1, slot_PBenchmark_BenchmarkRun_selector);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24414 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_name, SMB_ifNil_, 1, (Optr)PBlock24412);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend24415 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend24414);
    Array PThreadedCode24411 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)&t_push_closure, (Optr)PBlock24412, (Optr)&t_send1, (Optr)PSend24414, (Optr)&t_send1, (Optr)PSend24415, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24409 = new_Method_with(PArray24410, empty_Array, empty_Array, PThreadedCode24411, 2, PSend24415, self);
    
    MethodClosure MC_SMB_inspectLabelOn_ = new_MethodClosure((Method)PMethod24409, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_inspectLabelOn_, MC_SMB_inspectLabelOn_);
}


static void init_SMB_performCustomSelector_() {
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Variable VAR_prefix_0_0 = new_Variable_named(L"prefix", 0);
    Array PArray24417 = new_Array_with(1, (Optr)VAR_prefix_0_0);
    Variable VAR_customSelector_0_1 = new_Variable_named(L"customSelector", 0);
    Array PArray24418 = new_Array_with(1, (Optr)VAR_customSelector_0_1);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend24424 = new_Send((Optr)self, SMB_selector, 0);
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    // capitalized. 
    Send PSend24423 = new_Send((Optr)PSend24424, SMB_capitalized, 0);
    // ,. 
    Send PSend24422 = new_Send((Optr)VAR_prefix_0_0, SMB__append_, 1, (Optr)PSend24423);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend24421 = new_Send((Optr)PSend24422, SMB_asSymbol, 0);
    Assign PAssign24420 = new_Assign((Optr)VAR_customSelector_0_1, (Optr)PSend24421);
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    // respondsTo:. 
    Send PSend24425 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_respondsTo_, 1, (Optr)VAR_customSelector_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend24429 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_perform_, 1, (Optr)VAR_customSelector_0_1);
    Array PThreadedCode24428 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_variable, (Optr)VAR_customSelector_0_1, (Optr)&t_send1, (Optr)PSend24429, (Optr)&t_block_return);
    Block PBlock24427 = new_Block_with(empty_Array, empty_Array, PThreadedCode24428, 1, PSend24429);
    // ifTrue:. 
    Send PSend24426 = new_Send((Optr)PSend24425, SMB_ifTrue_, 1, (Optr)PBlock24427);
    Array PThreadedCode24419 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign24420, (Optr)&t_push_variable, (Optr)VAR_prefix_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24424, (Optr)&t_send0, (Optr)PSend24423, (Optr)&t_send1, (Optr)PSend24422, (Optr)&t_send0, (Optr)PSend24421, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_variable, (Optr)VAR_customSelector_0_1, (Optr)&t_send1, (Optr)PSend24425, (Optr)&t_send_ifTrue_, (Optr)PSend24426, (Optr)PBlock24427, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24416 = new_Method_with(PArray24417, PArray24418, empty_Array, PThreadedCode24419, 3, PAssign24420, PSend24426, self);
    
    MethodClosure MC_SMB_performCustomSelector_ = new_MethodClosure((Method)PMethod24416, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_performCustomSelector_, MC_SMB_performCustomSelector_);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24431 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper24433 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24432 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24433, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24430 = new_Method_with(PArray24431, empty_Array, empty_Array, PThreadedCode24432, 2, PSuper24433, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod24430, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24435 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    // inspectLabelOn:. 
    Send PSend24437 = new_Send((Optr)self, SMB_inspectLabelOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4725 = new_Character(L' ');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_4725_Const = new_Constant((Optr)char_4725);
    // nextPut:. 
    Send PSend24438 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPut_, 1, (Optr)char_4725_Const);
    Super PSuper24439 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24436 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24437, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4725, (Optr)&t_send1, (Optr)PSend24438, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24439, (Optr)&t_method_return);
    Method PMethod24434 = new_Method_with(PArray24435, empty_Array, empty_Array, PThreadedCode24436, 3, PSend24437, PSend24438, PSuper24439);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod24434, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_probeCount() {
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    Array PThreadedCode24441 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)&t_method_return);
    Method PMethod24440 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24441, 1, slot_PBenchmark_AbstractBenchmark_probeCount);
    
    MethodClosure MC_SMB_probeCount = new_MethodClosure((Method)PMethod24440, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probeCount, MC_SMB_probeCount);
}


static void init_SMB_probeCount_() {
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24443 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24445 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24444 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24445, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24442 = new_Method_with(PArray24443, empty_Array, empty_Array, PThreadedCode24444, 2, PAssign24445, self);
    
    MethodClosure MC_SMB_probeCount_ = new_MethodClosure((Method)PMethod24442, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probeCount_, MC_SMB_probeCount_);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend24448 = new_Send((Optr)self, SMB_probes, 0);
    // sum. 
    Send PSend24449 = new_Send((Optr)PSend24448, SMB_sum, 0);
    Array PThreadedCode24447 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24448, (Optr)&t_send0, (Optr)PSend24449, (Optr)&t_method_return);
    Method PMethod24446 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24447, 1, PSend24449);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod24446, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_aRun_0_0 = new_Variable_named(L"aRun", 0);
    Array PArray24451 = new_Array_with(1, (Optr)VAR_aRun_0_0);
    Assign PAssign24453 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)VAR_aRun_0_0);
    Array PThreadedCode24452 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24453, (Optr)&t_push_variable, (Optr)VAR_aRun_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24450 = new_Method_with(PArray24451, empty_Array, empty_Array, PThreadedCode24452, 2, PAssign24453, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod24450, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_base_, MC_SMB_base_);
}


static void init_SMB_probes() {
    Symbol SMB_probes = new_Symbol(L"probes");
    Array PThreadedCode24455 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)&t_method_return);
    Method PMethod24454 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24455, 1, slot_PBenchmark_BenchmarkRun_probes);
    
    MethodClosure MC_SMB_probes = new_MethodClosure((Method)PMethod24454, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probes, MC_SMB_probes);
}


static void init_SMB_target_() {
    Symbol SMB_target_ = new_Symbol(L"target:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24457 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24459 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24458 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24459, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24456 = new_Method_with(PArray24457, empty_Array, empty_Array, PThreadedCode24458, 2, PAssign24459, self);
    
    MethodClosure MC_SMB_target_ = new_MethodClosure((Method)PMethod24456, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_target_, MC_SMB_target_);
}


static void init_SMB_runProbe() {
    Symbol SMB_runProbe = new_Symbol(L"runProbe");
    Variable VAR_time_0_0 = new_Variable_named(L"time", 0);
    Array PArray24461 = new_Array_with(1, (Optr)VAR_time_0_0);
    Symbol SMB_setUpProbe = new_Symbol(L"setUpProbe");
    // setUpProbe. 
    Send PSend24463 = new_Send((Optr)self, SMB_setUpProbe, 0);
    Symbol SMB_currentMillis = new_Symbol(L"currentMillis");
    // currentMillis. 
    Send PSend24465 = new_Send((Optr)self, SMB_currentMillis, 0);
    Assign PAssign24464 = new_Assign((Optr)VAR_time_0_0, (Optr)PSend24465);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend24466 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_perform_, 1, (Optr)slot_PBenchmark_BenchmarkRun_selector);
    // currentMillis. 
    Send PSend24469 = new_Send((Optr)self, SMB_currentMillis, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24468 = new_Send((Optr)PSend24469, SMB__minus_, 1, (Optr)VAR_time_0_0);
    Assign PAssign24467 = new_Assign((Optr)VAR_time_0_0, (Optr)PSend24468);
    Symbol SMB_tearDownProbe = new_Symbol(L"tearDownProbe");
    // tearDownProbe. 
    Send PSend24470 = new_Send((Optr)self, SMB_tearDownProbe, 0);
    Float float_1000_0 = new_Float(1000.0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant float_1000_0_Const = new_Constant((Optr)float_1000_0);
    // /. 
    Send PSend24471 = new_Send((Optr)VAR_time_0_0, SMB__divide_, 1, (Optr)float_1000_0_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24472 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_probes, SMB_add_, 1, (Optr)PSend24471);
    Array PThreadedCode24462 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24463, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24464, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24465, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_send1, (Optr)PSend24466, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24467, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24469, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_send1, (Optr)PSend24468, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24470, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_push1, (Optr)float_1000_0, (Optr)&t_send1, (Optr)PSend24471, (Optr)&t_send1, (Optr)PSend24472, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_method_return);
    Method PMethod24460 = new_Method_with(empty_Array, PArray24461, empty_Array, PThreadedCode24462, 7, PSend24463, PAssign24464, PSend24466, PAssign24467, PSend24470, PSend24472, VAR_time_0_0);
    
    MethodClosure MC_SMB_runProbe = new_MethodClosure((Method)PMethod24460, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_runProbe, MC_SMB_runProbe);
}


static void init_SMB_probes_() {
    Symbol SMB_probes_ = new_Symbol(L"probes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24474 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24476 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24475 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24476, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24473 = new_Method_with(PArray24474, empty_Array, empty_Array, PThreadedCode24475, 2, PAssign24476, self);
    
    MethodClosure MC_SMB_probes_ = new_MethodClosure((Method)PMethod24473, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probes_, MC_SMB_probes_);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend24479 = new_Send((Optr)self, SMB_average, 0);
    Array PThreadedCode24478 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24479, (Optr)&t_method_return);
    Method PMethod24477 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24478, 1, PSend24479);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod24477, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_total, MC_SMB_total);
}


static void init_SMB_tearDownProbe() {
    Symbol SMB_tearDownProbe = new_Symbol(L"tearDownProbe");
    Symbol  SMB_tearDown = new_Symbol(L"tearDown");
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Constant SMB_tearDown_Const = new_Constant((Optr)SMB_tearDown);
    // performCustomSelector:. 
    Send PSend24482 = new_Send((Optr)self, SMB_performCustomSelector_, 1, (Optr)SMB_tearDown_Const);
    // tearDown. 
    Send PSend24483 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_tearDown, 0);
    Array PThreadedCode24481 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_tearDown, (Optr)&t_send1, (Optr)PSend24482, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_send0, (Optr)PSend24483, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24480 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24481, 3, PSend24482, PSend24483, self);
    
    MethodClosure MC_SMB_tearDownProbe = new_MethodClosure((Method)PMethod24480, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_tearDownProbe, MC_SMB_tearDownProbe);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    Assign PAssign24486 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)int_30_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend24488 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount);
    Assign PAssign24487 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)PSend24488);
    Array PThreadedCode24485 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24486, (Optr)&t_push1, (Optr)int_30, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24487, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_slot, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)&t_send1, (Optr)PSend24488, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24484 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24485, 3, PAssign24486, PAssign24487, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod24484, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend24491 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_runProbe = new_Symbol(L"runProbe");
    // runProbe. 
    Send PSend24494 = new_Send((Optr)self, SMB_runProbe, 0);
    Array PThreadedCode24493 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24494, (Optr)&t_block_return);
    Block PBlock24492 = new_Block_with(empty_Array, empty_Array, PThreadedCode24493, 1, PSend24494);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend24495 = new_Send((Optr)PSend24491, SMB_timesRepeat_, 1, (Optr)PBlock24492);
    Array PThreadedCode24490 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24491, (Optr)&t_push_closure, (Optr)PBlock24492, (Optr)&t_send1, (Optr)PSend24495, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24489 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24490, 2, PSend24495, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod24489, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24497 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24499 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24498 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24499, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24496 = new_Method_with(PArray24497, empty_Array, empty_Array, PThreadedCode24498, 2, PAssign24499, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod24496, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB_setUpProbe() {
    Symbol SMB_setUpProbe = new_Symbol(L"setUpProbe");
    Variable VAR_customSetUp_0_0 = new_Variable_named(L"customSetUp", 0);
    Array PArray24501 = new_Array_with(1, (Optr)VAR_customSetUp_0_0);
    Symbol SMB_setUp = new_Symbol(L"setUp");
    // setUp. 
    Send PSend24503 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_setUp, 0);
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Constant SMB_setUp_Const = new_Constant((Optr)SMB_setUp);
    // performCustomSelector:. 
    Send PSend24504 = new_Send((Optr)self, SMB_performCustomSelector_, 1, (Optr)SMB_setUp_Const);
    Array PThreadedCode24502 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_send0, (Optr)PSend24503, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_setUp, (Optr)&t_send1, (Optr)PSend24504, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24500 = new_Method_with(empty_Array, PArray24501, empty_Array, PThreadedCode24502, 3, PSend24503, PSend24504, self);
    
    MethodClosure MC_SMB_setUpProbe = new_MethodClosure((Method)PMethod24500, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_setUpProbe, MC_SMB_setUpProbe);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Variable VAR_avg_0_0 = new_Variable_named(L"avg", 0);
    Array PArray24506 = new_Array_with(1, (Optr)VAR_avg_0_0);
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend24510 = new_Send((Optr)self, SMB_probes, 0);
    // average. 
    Send PSend24509 = new_Send((Optr)PSend24510, SMB_average, 0);
    Assign PAssign24508 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend24509);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // average. 
    Send PSend24515 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_average, 0);
    // -. 
    Send PSend24514 = new_Send((Optr)VAR_avg_0_0, SMB__minus_, 1, (Optr)PSend24515);
    Assign PAssign24513 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend24514);
    Array PThreadedCode24512 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24513, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_send0, (Optr)PSend24515, (Optr)&t_send1, (Optr)PSend24514, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24511 = new_Block_with(empty_Array, empty_Array, PThreadedCode24512, 1, PAssign24513);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24516 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_ifNotNil_, 1, (Optr)PBlock24511);
    Array PThreadedCode24507 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24508, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24510, (Optr)&t_send0, (Optr)PSend24509, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_push_closure, (Optr)PBlock24511, (Optr)&t_send1, (Optr)PSend24516, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_method_return);
    Method PMethod24505 = new_Method_with(empty_Array, PArray24506, empty_Array, PThreadedCode24507, 3, PAssign24508, PSend24516, VAR_avg_0_0);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod24505, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24518 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24520 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode24519 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24520, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24517 = new_Method_with(PArray24518, empty_Array, empty_Array, PThreadedCode24519, 2, PAssign24520, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod24517, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Variable VAR_stdev_0_0 = new_Variable_named(L"stdev", 0);
    Array PArray24522 = new_Array_with(1, (Optr)VAR_stdev_0_0);
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend24526 = new_Send((Optr)self, SMB_probes, 0);
    // stdev. 
    Send PSend24525 = new_Send((Optr)PSend24526, SMB_stdev, 0);
    Assign PAssign24524 = new_Assign((Optr)VAR_stdev_0_0, (Optr)PSend24525);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // stdev. 
    Send PSend24531 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_stdev, 0);
    // +. 
    Send PSend24530 = new_Send((Optr)VAR_stdev_0_0, SMB__plus_, 1, (Optr)PSend24531);
    Assign PAssign24529 = new_Assign((Optr)VAR_stdev_0_0, (Optr)PSend24530);
    Array PThreadedCode24528 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24529, (Optr)&t_push_variable, (Optr)VAR_stdev_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_send0, (Optr)PSend24531, (Optr)&t_send1, (Optr)PSend24530, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24527 = new_Block_with(empty_Array, empty_Array, PThreadedCode24528, 1, PAssign24529);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24532 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_ifNotNil_, 1, (Optr)PBlock24527);
    Array PThreadedCode24523 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24524, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24526, (Optr)&t_send0, (Optr)PSend24525, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_push_closure, (Optr)PBlock24527, (Optr)&t_send1, (Optr)PSend24532, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stdev_0_0, (Optr)&t_method_return);
    Method PMethod24521 = new_Method_with(empty_Array, PArray24522, empty_Array, PThreadedCode24523, 3, PAssign24524, PSend24532, VAR_stdev_0_0);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod24521, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode24534 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)&t_method_return);
    Method PMethod24533 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24534, 1, slot_PBenchmark_BenchmarkRun_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod24533, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_target() {
    Symbol SMB_target = new_Symbol(L"target");
    Array PThreadedCode24536 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_method_return);
    Method PMethod24535 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24536, 1, slot_PBenchmark_BenchmarkRun_target);
    
    MethodClosure MC_SMB_target = new_MethodClosure((Method)PMethod24535, PBenchmark_BenchmarkRun_Class);
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