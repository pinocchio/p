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
    Array PThreadedCode24545 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_method_return);
    Method PMethod24544 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24545, 1, slot_PBenchmark_BenchmarkRun_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod24544, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper24548 = new_Super(SMB_initialize, 0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend24549 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode24547 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24548, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24549, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24546 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24547, 3, PSuper24548, PSend24549, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24546, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_inspectLabelOn_() {
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24551 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24554 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_block_return);
    Block PBlock24553 = new_Block_with(empty_Array, empty_Array, PThreadedCode24554, 1, slot_PBenchmark_BenchmarkRun_selector);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24555 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_name, SMB_ifNil_, 1, (Optr)PBlock24553);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend24556 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend24555);
    Array PThreadedCode24552 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)&t_push_closure, (Optr)PBlock24553, (Optr)&t_send1, (Optr)PSend24555, (Optr)&t_send1, (Optr)PSend24556, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24550 = new_Method_with(PArray24551, empty_Array, empty_Array, PThreadedCode24552, 2, PSend24556, self);
    
    MethodClosure MC_SMB_inspectLabelOn_ = new_MethodClosure((Method)PMethod24550, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_inspectLabelOn_, MC_SMB_inspectLabelOn_);
}


static void init_SMB_performCustomSelector_() {
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Variable VAR_prefix_0_0 = new_Variable_named(L"prefix", 0);
    Array PArray24558 = new_Array_with(1, (Optr)VAR_prefix_0_0);
    Variable VAR_customSelector_0_1 = new_Variable_named(L"customSelector", 0);
    Array PArray24559 = new_Array_with(1, (Optr)VAR_customSelector_0_1);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend24565 = new_Send((Optr)self, SMB_selector, 0);
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    // capitalized. 
    Send PSend24564 = new_Send((Optr)PSend24565, SMB_capitalized, 0);
    // ,. 
    Send PSend24563 = new_Send((Optr)VAR_prefix_0_0, SMB__append_, 1, (Optr)PSend24564);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend24562 = new_Send((Optr)PSend24563, SMB_asSymbol, 0);
    Assign PAssign24561 = new_Assign((Optr)VAR_customSelector_0_1, (Optr)PSend24562);
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    // respondsTo:. 
    Send PSend24566 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_respondsTo_, 1, (Optr)VAR_customSelector_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend24570 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_perform_, 1, (Optr)VAR_customSelector_0_1);
    Array PThreadedCode24569 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_variable, (Optr)VAR_customSelector_0_1, (Optr)&t_send1, (Optr)PSend24570, (Optr)&t_block_return);
    Block PBlock24568 = new_Block_with(empty_Array, empty_Array, PThreadedCode24569, 1, PSend24570);
    // ifTrue:. 
    Send PSend24567 = new_Send((Optr)PSend24566, SMB_ifTrue_, 1, (Optr)PBlock24568);
    Array PThreadedCode24560 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign24561, (Optr)&t_push_variable, (Optr)VAR_prefix_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24565, (Optr)&t_send0, (Optr)PSend24564, (Optr)&t_send1, (Optr)PSend24563, (Optr)&t_send0, (Optr)PSend24562, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_variable, (Optr)VAR_customSelector_0_1, (Optr)&t_send1, (Optr)PSend24566, (Optr)&t_send_ifTrue_, (Optr)PSend24567, (Optr)PBlock24568, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24557 = new_Method_with(PArray24558, PArray24559, empty_Array, PThreadedCode24560, 3, PAssign24561, PSend24567, self);
    
    MethodClosure MC_SMB_performCustomSelector_ = new_MethodClosure((Method)PMethod24557, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_performCustomSelector_, MC_SMB_performCustomSelector_);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24572 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper24574 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24573 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24574, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24571 = new_Method_with(PArray24572, empty_Array, empty_Array, PThreadedCode24573, 2, PSuper24574, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod24571, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24576 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    // inspectLabelOn:. 
    Send PSend24578 = new_Send((Optr)self, SMB_inspectLabelOn_, 1, (Optr)VAR_aStream_0_0);
    String string_24579 = new_String(L" ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_24579_Const = new_Constant((Optr)string_24579);
    // <<. 
    Send PSend24580 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_24579_Const);
    Super PSuper24581 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24577 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24578, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24579, (Optr)&t_send1, (Optr)PSend24580, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24581, (Optr)&t_method_return);
    Method PMethod24575 = new_Method_with(PArray24576, empty_Array, empty_Array, PThreadedCode24577, 3, PSend24578, PSend24580, PSuper24581);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod24575, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_probeCount() {
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    Array PThreadedCode24583 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)&t_method_return);
    Method PMethod24582 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24583, 1, slot_PBenchmark_AbstractBenchmark_probeCount);
    
    MethodClosure MC_SMB_probeCount = new_MethodClosure((Method)PMethod24582, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probeCount, MC_SMB_probeCount);
}


static void init_SMB_probeCount_() {
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24585 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24587 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24586 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24587, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24584 = new_Method_with(PArray24585, empty_Array, empty_Array, PThreadedCode24586, 2, PAssign24587, self);
    
    MethodClosure MC_SMB_probeCount_ = new_MethodClosure((Method)PMethod24584, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probeCount_, MC_SMB_probeCount_);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend24590 = new_Send((Optr)self, SMB_probes, 0);
    // sum. 
    Send PSend24591 = new_Send((Optr)PSend24590, SMB_sum, 0);
    Array PThreadedCode24589 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24590, (Optr)&t_send0, (Optr)PSend24591, (Optr)&t_method_return);
    Method PMethod24588 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24589, 1, PSend24591);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod24588, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_aRun_0_0 = new_Variable_named(L"aRun", 0);
    Array PArray24593 = new_Array_with(1, (Optr)VAR_aRun_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend24595 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_aRun_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24599 = new_String(L"Do not set the base to the same as self");
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    Constant string_24599_Const = new_Constant((Optr)string_24599);
    // signal:. 
    Send PSend24600 = new_Send((Optr)Error_classReference, SMB_signal_, 1, (Optr)string_24599_Const);
    Array PThreadedCode24598 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push1, (Optr)string_24599, (Optr)&t_send1, (Optr)PSend24600, (Optr)&t_block_return);
    Block PBlock24597 = new_Block_with(empty_Array, empty_Array, PThreadedCode24598, 1, PSend24600);
    // ifTrue:. 
    Send PSend24596 = new_Send((Optr)PSend24595, SMB_ifTrue_, 1, (Optr)PBlock24597);
    Assign PAssign24601 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)VAR_aRun_0_0);
    Array PThreadedCode24594 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aRun_0_0, (Optr)&t_send1, (Optr)PSend24595, (Optr)&t_send_ifTrue_, (Optr)PSend24596, (Optr)PBlock24597, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24601, (Optr)&t_push_variable, (Optr)VAR_aRun_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24592 = new_Method_with(PArray24593, empty_Array, empty_Array, PThreadedCode24594, 3, PSend24596, PAssign24601, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod24592, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_base_, MC_SMB_base_);
}


static void init_SMB_probes() {
    Symbol SMB_probes = new_Symbol(L"probes");
    Array PThreadedCode24603 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)&t_method_return);
    Method PMethod24602 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24603, 1, slot_PBenchmark_BenchmarkRun_probes);
    
    MethodClosure MC_SMB_probes = new_MethodClosure((Method)PMethod24602, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probes, MC_SMB_probes);
}


static void init_SMB_target_() {
    Symbol SMB_target_ = new_Symbol(L"target:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24605 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24607 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24606 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24607, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24604 = new_Method_with(PArray24605, empty_Array, empty_Array, PThreadedCode24606, 2, PAssign24607, self);
    
    MethodClosure MC_SMB_target_ = new_MethodClosure((Method)PMethod24604, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_target_, MC_SMB_target_);
}


static void init_SMB_runProbe() {
    Symbol SMB_runProbe = new_Symbol(L"runProbe");
    Variable VAR_time_0_0 = new_Variable_named(L"time", 0);
    Array PArray24609 = new_Array_with(1, (Optr)VAR_time_0_0);
    Symbol SMB_setUpProbe = new_Symbol(L"setUpProbe");
    // setUpProbe. 
    Send PSend24611 = new_Send((Optr)self, SMB_setUpProbe, 0);
    Symbol SMB_currentMillis = new_Symbol(L"currentMillis");
    // currentMillis. 
    Send PSend24613 = new_Send((Optr)self, SMB_currentMillis, 0);
    Assign PAssign24612 = new_Assign((Optr)VAR_time_0_0, (Optr)PSend24613);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend24614 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_perform_, 1, (Optr)slot_PBenchmark_BenchmarkRun_selector);
    // currentMillis. 
    Send PSend24617 = new_Send((Optr)self, SMB_currentMillis, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24616 = new_Send((Optr)PSend24617, SMB__minus_, 1, (Optr)VAR_time_0_0);
    Assign PAssign24615 = new_Assign((Optr)VAR_time_0_0, (Optr)PSend24616);
    Symbol SMB_tearDownProbe = new_Symbol(L"tearDownProbe");
    // tearDownProbe. 
    Send PSend24618 = new_Send((Optr)self, SMB_tearDownProbe, 0);
    Float float_1000_0 = new_Float(1000.0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant float_1000_0_Const = new_Constant((Optr)float_1000_0);
    // /. 
    Send PSend24619 = new_Send((Optr)VAR_time_0_0, SMB__divide_, 1, (Optr)float_1000_0_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24620 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_probes, SMB_add_, 1, (Optr)PSend24619);
    Array PThreadedCode24610 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24611, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24612, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24613, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_send1, (Optr)PSend24614, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24615, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24617, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_send1, (Optr)PSend24616, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24618, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_push1, (Optr)float_1000_0, (Optr)&t_send1, (Optr)PSend24619, (Optr)&t_send1, (Optr)PSend24620, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_method_return);
    Method PMethod24608 = new_Method_with(empty_Array, PArray24609, empty_Array, PThreadedCode24610, 7, PSend24611, PAssign24612, PSend24614, PAssign24615, PSend24618, PSend24620, VAR_time_0_0);
    
    MethodClosure MC_SMB_runProbe = new_MethodClosure((Method)PMethod24608, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_runProbe, MC_SMB_runProbe);
}


static void init_SMB_probes_() {
    Symbol SMB_probes_ = new_Symbol(L"probes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24622 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24624 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24623 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24624, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24621 = new_Method_with(PArray24622, empty_Array, empty_Array, PThreadedCode24623, 2, PAssign24624, self);
    
    MethodClosure MC_SMB_probes_ = new_MethodClosure((Method)PMethod24621, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probes_, MC_SMB_probes_);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend24627 = new_Send((Optr)self, SMB_average, 0);
    Array PThreadedCode24626 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24627, (Optr)&t_method_return);
    Method PMethod24625 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24626, 1, PSend24627);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod24625, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_total, MC_SMB_total);
}


static void init_SMB_tearDownProbe() {
    Symbol SMB_tearDownProbe = new_Symbol(L"tearDownProbe");
    Symbol  SMB_tearDown = new_Symbol(L"tearDown");
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Constant SMB_tearDown_Const = new_Constant((Optr)SMB_tearDown);
    // performCustomSelector:. 
    Send PSend24630 = new_Send((Optr)self, SMB_performCustomSelector_, 1, (Optr)SMB_tearDown_Const);
    // tearDown. 
    Send PSend24631 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_tearDown, 0);
    Array PThreadedCode24629 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_tearDown, (Optr)&t_send1, (Optr)PSend24630, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_send0, (Optr)PSend24631, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24628 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24629, 3, PSend24630, PSend24631, self);
    
    MethodClosure MC_SMB_tearDownProbe = new_MethodClosure((Method)PMethod24628, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_tearDownProbe, MC_SMB_tearDownProbe);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    Assign PAssign24634 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)int_30_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend24636 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount);
    Assign PAssign24635 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)PSend24636);
    Array PThreadedCode24633 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24634, (Optr)&t_push1, (Optr)int_30, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24635, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_slot, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)&t_send1, (Optr)PSend24636, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24632 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24633, 3, PAssign24634, PAssign24635, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod24632, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend24639 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_runProbe = new_Symbol(L"runProbe");
    // runProbe. 
    Send PSend24642 = new_Send((Optr)self, SMB_runProbe, 0);
    Array PThreadedCode24641 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24642, (Optr)&t_block_return);
    Block PBlock24640 = new_Block_with(empty_Array, empty_Array, PThreadedCode24641, 1, PSend24642);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend24643 = new_Send((Optr)PSend24639, SMB_timesRepeat_, 1, (Optr)PBlock24640);
    Array PThreadedCode24638 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24639, (Optr)&t_push_closure, (Optr)PBlock24640, (Optr)&t_send1, (Optr)PSend24643, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24637 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24638, 2, PSend24643, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod24637, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24645 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24647 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24646 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24647, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24644 = new_Method_with(PArray24645, empty_Array, empty_Array, PThreadedCode24646, 2, PAssign24647, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod24644, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB_setUpProbe() {
    Symbol SMB_setUpProbe = new_Symbol(L"setUpProbe");
    Variable VAR_customSetUp_0_0 = new_Variable_named(L"customSetUp", 0);
    Array PArray24649 = new_Array_with(1, (Optr)VAR_customSetUp_0_0);
    Symbol SMB_setUp = new_Symbol(L"setUp");
    // setUp. 
    Send PSend24651 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_setUp, 0);
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Constant SMB_setUp_Const = new_Constant((Optr)SMB_setUp);
    // performCustomSelector:. 
    Send PSend24652 = new_Send((Optr)self, SMB_performCustomSelector_, 1, (Optr)SMB_setUp_Const);
    Array PThreadedCode24650 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_send0, (Optr)PSend24651, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_setUp, (Optr)&t_send1, (Optr)PSend24652, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24648 = new_Method_with(empty_Array, PArray24649, empty_Array, PThreadedCode24650, 3, PSend24651, PSend24652, self);
    
    MethodClosure MC_SMB_setUpProbe = new_MethodClosure((Method)PMethod24648, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_setUpProbe, MC_SMB_setUpProbe);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Variable VAR_avg_0_0 = new_Variable_named(L"avg", 0);
    Array PArray24654 = new_Array_with(1, (Optr)VAR_avg_0_0);
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend24658 = new_Send((Optr)self, SMB_probes, 0);
    // average. 
    Send PSend24657 = new_Send((Optr)PSend24658, SMB_average, 0);
    Assign PAssign24656 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend24657);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // average. 
    Send PSend24663 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_average, 0);
    // -. 
    Send PSend24662 = new_Send((Optr)VAR_avg_0_0, SMB__minus_, 1, (Optr)PSend24663);
    Assign PAssign24661 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend24662);
    Array PThreadedCode24660 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24661, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_send0, (Optr)PSend24663, (Optr)&t_send1, (Optr)PSend24662, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24659 = new_Block_with(empty_Array, empty_Array, PThreadedCode24660, 1, PAssign24661);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24664 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_ifNotNil_, 1, (Optr)PBlock24659);
    Array PThreadedCode24655 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24656, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24658, (Optr)&t_send0, (Optr)PSend24657, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_push_closure, (Optr)PBlock24659, (Optr)&t_send1, (Optr)PSend24664, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_method_return);
    Method PMethod24653 = new_Method_with(empty_Array, PArray24654, empty_Array, PThreadedCode24655, 3, PAssign24656, PSend24664, VAR_avg_0_0);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod24653, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24666 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24668 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode24667 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24668, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24665 = new_Method_with(PArray24666, empty_Array, empty_Array, PThreadedCode24667, 2, PAssign24668, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod24665, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Variable VAR_stdev_0_0 = new_Variable_named(L"stdev", 0);
    Array PArray24670 = new_Array_with(1, (Optr)VAR_stdev_0_0);
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend24674 = new_Send((Optr)self, SMB_probes, 0);
    // stdev. 
    Send PSend24673 = new_Send((Optr)PSend24674, SMB_stdev, 0);
    Assign PAssign24672 = new_Assign((Optr)VAR_stdev_0_0, (Optr)PSend24673);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // stdev. 
    Send PSend24679 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_stdev, 0);
    // +. 
    Send PSend24678 = new_Send((Optr)VAR_stdev_0_0, SMB__plus_, 1, (Optr)PSend24679);
    Assign PAssign24677 = new_Assign((Optr)VAR_stdev_0_0, (Optr)PSend24678);
    Array PThreadedCode24676 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24677, (Optr)&t_push_variable, (Optr)VAR_stdev_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_send0, (Optr)PSend24679, (Optr)&t_send1, (Optr)PSend24678, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24675 = new_Block_with(empty_Array, empty_Array, PThreadedCode24676, 1, PAssign24677);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24680 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_ifNotNil_, 1, (Optr)PBlock24675);
    Array PThreadedCode24671 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24672, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24674, (Optr)&t_send0, (Optr)PSend24673, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_push_closure, (Optr)PBlock24675, (Optr)&t_send1, (Optr)PSend24680, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stdev_0_0, (Optr)&t_method_return);
    Method PMethod24669 = new_Method_with(empty_Array, PArray24670, empty_Array, PThreadedCode24671, 3, PAssign24672, PSend24680, VAR_stdev_0_0);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod24669, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode24682 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)&t_method_return);
    Method PMethod24681 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24682, 1, slot_PBenchmark_BenchmarkRun_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod24681, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_target() {
    Symbol SMB_target = new_Symbol(L"target");
    Array PThreadedCode24684 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_method_return);
    Method PMethod24683 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24684, 1, slot_PBenchmark_BenchmarkRun_target);
    
    MethodClosure MC_SMB_target = new_MethodClosure((Method)PMethod24683, PBenchmark_BenchmarkRun_Class);
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