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
    Array PThreadedCode24748 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_method_return);
    Method PMethod24747 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24748, 1, slot_PBenchmark_BenchmarkRun_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod24747, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24750 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper24752 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24751 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24752, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24749 = new_Method_with(PArray24750, empty_Array, empty_Array, PThreadedCode24751, 2, PSuper24752, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod24749, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper24755 = new_Super(SMB_initialize, 0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend24756 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode24754 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24755, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24756, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24753 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24754, 3, PSuper24755, PSend24756, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24753, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_inspectLabelOn_() {
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24758 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24761 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_block_return);
    Block PBlock24760 = new_Block_with(empty_Array, empty_Array, PThreadedCode24761, 1, slot_PBenchmark_BenchmarkRun_selector);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24762 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_name, SMB_ifNil_, 1, (Optr)PBlock24760);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend24763 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend24762);
    Array PThreadedCode24759 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)&t_push_closure, (Optr)PBlock24760, (Optr)&t_send1, (Optr)PSend24762, (Optr)&t_send1, (Optr)PSend24763, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24757 = new_Method_with(PArray24758, empty_Array, empty_Array, PThreadedCode24759, 2, PSend24763, self);
    
    MethodClosure MC_SMB_inspectLabelOn_ = new_MethodClosure((Method)PMethod24757, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_inspectLabelOn_, MC_SMB_inspectLabelOn_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24765 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    // inspectLabelOn:. 
    Send PSend24767 = new_Send((Optr)self, SMB_inspectLabelOn_, 1, (Optr)VAR_aStream_0_0);
    String string_24768 = new_String(L" ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_24768_Const = new_Constant((Optr)string_24768);
    // <<. 
    Send PSend24769 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_24768_Const);
    Super PSuper24770 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24766 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24767, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24768, (Optr)&t_send1, (Optr)PSend24769, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24770, (Optr)&t_method_return);
    Method PMethod24764 = new_Method_with(PArray24765, empty_Array, empty_Array, PThreadedCode24766, 3, PSend24767, PSend24769, PSuper24770);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod24764, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_probeCount() {
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    Array PThreadedCode24772 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)&t_method_return);
    Method PMethod24771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24772, 1, slot_PBenchmark_AbstractBenchmark_probeCount);
    
    MethodClosure MC_SMB_probeCount = new_MethodClosure((Method)PMethod24771, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probeCount, MC_SMB_probeCount);
}


static void init_SMB_probeCount_() {
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24774 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24776 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24775 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24776, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24773 = new_Method_with(PArray24774, empty_Array, empty_Array, PThreadedCode24775, 2, PAssign24776, self);
    
    MethodClosure MC_SMB_probeCount_ = new_MethodClosure((Method)PMethod24773, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probeCount_, MC_SMB_probeCount_);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend24779 = new_Send((Optr)self, SMB_probes, 0);
    // sum. 
    Send PSend24780 = new_Send((Optr)PSend24779, SMB_sum, 0);
    Array PThreadedCode24778 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24779, (Optr)&t_send0, (Optr)PSend24780, (Optr)&t_method_return);
    Method PMethod24777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24778, 1, PSend24780);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod24777, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_aRun_0_0 = new_Variable_named(L"aRun", 0);
    Array PArray24782 = new_Array_with(1, (Optr)VAR_aRun_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend24784 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_aRun_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24788 = new_String(L"Do not set the base to the same as self");
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    Constant string_24788_Const = new_Constant((Optr)string_24788);
    // signal:. 
    Send PSend24789 = new_Send((Optr)Error_classReference, SMB_signal_, 1, (Optr)string_24788_Const);
    Array PThreadedCode24787 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push1, (Optr)string_24788, (Optr)&t_send1, (Optr)PSend24789, (Optr)&t_block_return);
    Block PBlock24786 = new_Block_with(empty_Array, empty_Array, PThreadedCode24787, 1, PSend24789);
    // ifTrue:. 
    Send PSend24785 = new_Send((Optr)PSend24784, SMB_ifTrue_, 1, (Optr)PBlock24786);
    Assign PAssign24790 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)VAR_aRun_0_0);
    Array PThreadedCode24783 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aRun_0_0, (Optr)&t_send1, (Optr)PSend24784, (Optr)&t_send_ifTrue_, (Optr)PSend24785, (Optr)PBlock24786, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24790, (Optr)&t_push_variable, (Optr)VAR_aRun_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24781 = new_Method_with(PArray24782, empty_Array, empty_Array, PThreadedCode24783, 3, PSend24785, PAssign24790, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod24781, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_base_, MC_SMB_base_);
}


static void init_SMB_tearDownProbe() {
    Symbol SMB_tearDownProbe = new_Symbol(L"tearDownProbe");
    Symbol  SMB_tearDown = new_Symbol(L"tearDown");
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Constant SMB_tearDown_Const = new_Constant((Optr)SMB_tearDown);
    // performCustomSelector:. 
    Send PSend24793 = new_Send((Optr)self, SMB_performCustomSelector_, 1, (Optr)SMB_tearDown_Const);
    // tearDown. 
    Send PSend24794 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_tearDown, 0);
    Array PThreadedCode24792 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_tearDown, (Optr)&t_send1, (Optr)PSend24793, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_send0, (Optr)PSend24794, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24791 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24792, 3, PSend24793, PSend24794, self);
    
    MethodClosure MC_SMB_tearDownProbe = new_MethodClosure((Method)PMethod24791, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_tearDownProbe, MC_SMB_tearDownProbe);
}


static void init_SMB_probes() {
    Symbol SMB_probes = new_Symbol(L"probes");
    Array PThreadedCode24796 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)&t_method_return);
    Method PMethod24795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24796, 1, slot_PBenchmark_BenchmarkRun_probes);
    
    MethodClosure MC_SMB_probes = new_MethodClosure((Method)PMethod24795, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probes, MC_SMB_probes);
}


static void init_SMB_target_() {
    Symbol SMB_target_ = new_Symbol(L"target:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24798 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24800 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24799 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24800, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24797 = new_Method_with(PArray24798, empty_Array, empty_Array, PThreadedCode24799, 2, PAssign24800, self);
    
    MethodClosure MC_SMB_target_ = new_MethodClosure((Method)PMethod24797, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_target_, MC_SMB_target_);
}


static void init_SMB_runProbe() {
    Symbol SMB_runProbe = new_Symbol(L"runProbe");
    Variable VAR_time_0_0 = new_Variable_named(L"time", 0);
    Array PArray24802 = new_Array_with(1, (Optr)VAR_time_0_0);
    Symbol SMB_setUpProbe = new_Symbol(L"setUpProbe");
    // setUpProbe. 
    Send PSend24804 = new_Send((Optr)self, SMB_setUpProbe, 0);
    Symbol SMB_currentMillis = new_Symbol(L"currentMillis");
    // currentMillis. 
    Send PSend24806 = new_Send((Optr)self, SMB_currentMillis, 0);
    Assign PAssign24805 = new_Assign((Optr)VAR_time_0_0, (Optr)PSend24806);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend24807 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_perform_, 1, (Optr)slot_PBenchmark_BenchmarkRun_selector);
    // currentMillis. 
    Send PSend24810 = new_Send((Optr)self, SMB_currentMillis, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24809 = new_Send((Optr)PSend24810, SMB__minus_, 1, (Optr)VAR_time_0_0);
    Assign PAssign24808 = new_Assign((Optr)VAR_time_0_0, (Optr)PSend24809);
    Symbol SMB_tearDownProbe = new_Symbol(L"tearDownProbe");
    // tearDownProbe. 
    Send PSend24811 = new_Send((Optr)self, SMB_tearDownProbe, 0);
    Float float_1000_0 = new_Float(1000.0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant float_1000_0_Const = new_Constant((Optr)float_1000_0);
    // /. 
    Send PSend24812 = new_Send((Optr)VAR_time_0_0, SMB__divide_, 1, (Optr)float_1000_0_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24813 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_probes, SMB_add_, 1, (Optr)PSend24812);
    Array PThreadedCode24803 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24804, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24805, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24806, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_send1, (Optr)PSend24807, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24808, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24810, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_send1, (Optr)PSend24809, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24811, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_push1, (Optr)float_1000_0, (Optr)&t_send1, (Optr)PSend24812, (Optr)&t_send1, (Optr)PSend24813, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_method_return);
    Method PMethod24801 = new_Method_with(empty_Array, PArray24802, empty_Array, PThreadedCode24803, 7, PSend24804, PAssign24805, PSend24807, PAssign24808, PSend24811, PSend24813, VAR_time_0_0);
    
    MethodClosure MC_SMB_runProbe = new_MethodClosure((Method)PMethod24801, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_runProbe, MC_SMB_runProbe);
}


static void init_SMB_probes_() {
    Symbol SMB_probes_ = new_Symbol(L"probes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24815 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24817 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24816 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24817, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24814 = new_Method_with(PArray24815, empty_Array, empty_Array, PThreadedCode24816, 2, PAssign24817, self);
    
    MethodClosure MC_SMB_probes_ = new_MethodClosure((Method)PMethod24814, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probes_, MC_SMB_probes_);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend24820 = new_Send((Optr)self, SMB_average, 0);
    Array PThreadedCode24819 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24820, (Optr)&t_method_return);
    Method PMethod24818 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24819, 1, PSend24820);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod24818, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_total, MC_SMB_total);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    Assign PAssign24823 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)int_30_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend24825 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount);
    Assign PAssign24824 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)PSend24825);
    Array PThreadedCode24822 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24823, (Optr)&t_push1, (Optr)int_30, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24824, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_slot, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)&t_send1, (Optr)PSend24825, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24821 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24822, 3, PAssign24823, PAssign24824, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod24821, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend24828 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_runProbe = new_Symbol(L"runProbe");
    // runProbe. 
    Send PSend24831 = new_Send((Optr)self, SMB_runProbe, 0);
    Array PThreadedCode24830 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24831, (Optr)&t_block_return);
    Block PBlock24829 = new_Block_with(empty_Array, empty_Array, PThreadedCode24830, 1, PSend24831);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend24832 = new_Send((Optr)PSend24828, SMB_timesRepeat_, 1, (Optr)PBlock24829);
    Array PThreadedCode24827 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24828, (Optr)&t_push_closure, (Optr)PBlock24829, (Optr)&t_send1, (Optr)PSend24832, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24826 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24827, 2, PSend24832, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod24826, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24834 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24836 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24835 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24836, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24833 = new_Method_with(PArray24834, empty_Array, empty_Array, PThreadedCode24835, 2, PAssign24836, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod24833, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Variable VAR_avg_0_0 = new_Variable_named(L"avg", 0);
    Array PArray24838 = new_Array_with(1, (Optr)VAR_avg_0_0);
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend24842 = new_Send((Optr)self, SMB_probes, 0);
    // average. 
    Send PSend24841 = new_Send((Optr)PSend24842, SMB_average, 0);
    Assign PAssign24840 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend24841);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // average. 
    Send PSend24847 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_average, 0);
    // -. 
    Send PSend24846 = new_Send((Optr)VAR_avg_0_0, SMB__minus_, 1, (Optr)PSend24847);
    Assign PAssign24845 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend24846);
    Array PThreadedCode24844 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24845, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_send0, (Optr)PSend24847, (Optr)&t_send1, (Optr)PSend24846, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24843 = new_Block_with(empty_Array, empty_Array, PThreadedCode24844, 1, PAssign24845);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24848 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_ifNotNil_, 1, (Optr)PBlock24843);
    Array PThreadedCode24839 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24840, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24842, (Optr)&t_send0, (Optr)PSend24841, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_push_closure, (Optr)PBlock24843, (Optr)&t_send1, (Optr)PSend24848, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_method_return);
    Method PMethod24837 = new_Method_with(empty_Array, PArray24838, empty_Array, PThreadedCode24839, 3, PAssign24840, PSend24848, VAR_avg_0_0);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod24837, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24850 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24852 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode24851 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24852, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24849 = new_Method_with(PArray24850, empty_Array, empty_Array, PThreadedCode24851, 2, PAssign24852, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod24849, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Variable VAR_stdev_0_0 = new_Variable_named(L"stdev", 0);
    Array PArray24854 = new_Array_with(1, (Optr)VAR_stdev_0_0);
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend24858 = new_Send((Optr)self, SMB_probes, 0);
    // stdev. 
    Send PSend24857 = new_Send((Optr)PSend24858, SMB_stdev, 0);
    Assign PAssign24856 = new_Assign((Optr)VAR_stdev_0_0, (Optr)PSend24857);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // stdev. 
    Send PSend24863 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_stdev, 0);
    // +. 
    Send PSend24862 = new_Send((Optr)VAR_stdev_0_0, SMB__plus_, 1, (Optr)PSend24863);
    Assign PAssign24861 = new_Assign((Optr)VAR_stdev_0_0, (Optr)PSend24862);
    Array PThreadedCode24860 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24861, (Optr)&t_push_variable, (Optr)VAR_stdev_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_send0, (Optr)PSend24863, (Optr)&t_send1, (Optr)PSend24862, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24859 = new_Block_with(empty_Array, empty_Array, PThreadedCode24860, 1, PAssign24861);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24864 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_ifNotNil_, 1, (Optr)PBlock24859);
    Array PThreadedCode24855 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24856, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24858, (Optr)&t_send0, (Optr)PSend24857, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_push_closure, (Optr)PBlock24859, (Optr)&t_send1, (Optr)PSend24864, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stdev_0_0, (Optr)&t_method_return);
    Method PMethod24853 = new_Method_with(empty_Array, PArray24854, empty_Array, PThreadedCode24855, 3, PAssign24856, PSend24864, VAR_stdev_0_0);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod24853, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_performCustomSelector_() {
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Variable VAR_prefix_0_0 = new_Variable_named(L"prefix", 0);
    Array PArray24866 = new_Array_with(1, (Optr)VAR_prefix_0_0);
    Variable VAR_customSelector_0_1 = new_Variable_named(L"customSelector", 0);
    Array PArray24867 = new_Array_with(1, (Optr)VAR_customSelector_0_1);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend24873 = new_Send((Optr)self, SMB_selector, 0);
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    // capitalized. 
    Send PSend24872 = new_Send((Optr)PSend24873, SMB_capitalized, 0);
    // ,. 
    Send PSend24871 = new_Send((Optr)VAR_prefix_0_0, SMB__append_, 1, (Optr)PSend24872);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend24870 = new_Send((Optr)PSend24871, SMB_asSymbol, 0);
    Assign PAssign24869 = new_Assign((Optr)VAR_customSelector_0_1, (Optr)PSend24870);
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    // respondsTo:. 
    Send PSend24874 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_respondsTo_, 1, (Optr)VAR_customSelector_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend24878 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_perform_, 1, (Optr)VAR_customSelector_0_1);
    Array PThreadedCode24877 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_variable, (Optr)VAR_customSelector_0_1, (Optr)&t_send1, (Optr)PSend24878, (Optr)&t_block_return);
    Block PBlock24876 = new_Block_with(empty_Array, empty_Array, PThreadedCode24877, 1, PSend24878);
    // ifTrue:. 
    Send PSend24875 = new_Send((Optr)PSend24874, SMB_ifTrue_, 1, (Optr)PBlock24876);
    Array PThreadedCode24868 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign24869, (Optr)&t_push_variable, (Optr)VAR_prefix_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24873, (Optr)&t_send0, (Optr)PSend24872, (Optr)&t_send1, (Optr)PSend24871, (Optr)&t_send0, (Optr)PSend24870, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_variable, (Optr)VAR_customSelector_0_1, (Optr)&t_send1, (Optr)PSend24874, (Optr)&t_send_ifTrue_, (Optr)PSend24875, (Optr)PBlock24876, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24865 = new_Method_with(PArray24866, PArray24867, empty_Array, PThreadedCode24868, 3, PAssign24869, PSend24875, self);
    
    MethodClosure MC_SMB_performCustomSelector_ = new_MethodClosure((Method)PMethod24865, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_performCustomSelector_, MC_SMB_performCustomSelector_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode24880 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)&t_method_return);
    Method PMethod24879 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24880, 1, slot_PBenchmark_BenchmarkRun_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod24879, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_target() {
    Symbol SMB_target = new_Symbol(L"target");
    Array PThreadedCode24882 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_method_return);
    Method PMethod24881 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24882, 1, slot_PBenchmark_BenchmarkRun_target);
    
    MethodClosure MC_SMB_target = new_MethodClosure((Method)PMethod24881, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_target, MC_SMB_target);
}


static void init_SMB_setUpProbe() {
    Symbol SMB_setUpProbe = new_Symbol(L"setUpProbe");
    Variable VAR_customSetUp_0_0 = new_Variable_named(L"customSetUp", 0);
    Array PArray24884 = new_Array_with(1, (Optr)VAR_customSetUp_0_0);
    Symbol SMB_setUp = new_Symbol(L"setUp");
    // setUp. 
    Send PSend24886 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_setUp, 0);
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Constant SMB_setUp_Const = new_Constant((Optr)SMB_setUp);
    // performCustomSelector:. 
    Send PSend24887 = new_Send((Optr)self, SMB_performCustomSelector_, 1, (Optr)SMB_setUp_Const);
    Array PThreadedCode24885 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_send0, (Optr)PSend24886, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_setUp, (Optr)&t_send1, (Optr)PSend24887, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24883 = new_Method_with(empty_Array, PArray24884, empty_Array, PThreadedCode24885, 3, PSend24886, PSend24887, self);
    
    MethodClosure MC_SMB_setUpProbe = new_MethodClosure((Method)PMethod24883, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_setUpProbe, MC_SMB_setUpProbe);
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
    init_SMB_inspectNameOn_();
    init_SMB_initialize();
    init_SMB_inspectLabelOn_();
    init_SMB_printOn_();
    init_SMB_probeCount();
    init_SMB_probeCount_();
    init_SMB_sum();
    init_SMB_base_();
    init_SMB_tearDownProbe();
    init_SMB_probes();
    init_SMB_target_();
    init_SMB_runProbe();
    init_SMB_probes_();
    init_SMB_total();
    init_SMB_reset();
    init_SMB_run();
    init_SMB_selector_();
    init_SMB_average();
    init_SMB_name_();
    init_SMB_stdev();
    init_SMB_performCustomSelector_();
    init_SMB_name();
    init_SMB_target();
    init_SMB_setUpProbe();
    
}