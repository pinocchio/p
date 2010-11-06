#include <lib/class/PBenchmark/BenchmarkRun.h>


Optr slot_PBenchmark_BenchmarkRun_Class_class_layout;
Optr slot_PBenchmark_BenchmarkRun_Class_class_superclass;
Optr slot_PBenchmark_BenchmarkRun_Class_class_methods;
Optr slot_PBenchmark_BenchmarkRun_Class_class_name;
Optr slot_PBenchmark_BenchmarkRun_Class_class_package;
Optr layout_PBenchmark_BenchmarkRun_Class_class;
Optr slot_PBenchmark_BenchmarkRun_probeCount;
Optr slot_PBenchmark_BenchmarkRun_probes;
Optr slot_PBenchmark_BenchmarkRun_target;
Optr slot_PBenchmark_BenchmarkRun_selector;
Optr slot_PBenchmark_BenchmarkRun_name;
Optr slot_PBenchmark_BenchmarkRun_base;
Optr layout_PBenchmark_BenchmarkRun;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode2 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_method_return);
    Method PMethod1 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2, 1, slot_PBenchmark_BenchmarkRun_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod1, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper5 = new_Super(SMB_initialize, 0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend6 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode4 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper5, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4, 3, PSuper5, PSend6, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod3, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_inspectLabelOn_() {
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray8 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode11 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_block_return);
    Block PBlock10 = new_Block_with(empty_Array, empty_Array, PThreadedCode11, 1, slot_PBenchmark_BenchmarkRun_selector);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend12 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_name, SMB_ifNil_, 1, (Optr)PBlock10);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend13 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend12);
    Array PThreadedCode9 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)&t_push_closure, (Optr)PBlock10, (Optr)&t_send1, (Optr)PSend12, (Optr)&t_send1, (Optr)PSend13, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7 = new_Method_with(PArray8, empty_Array, empty_Array, PThreadedCode9, 2, PSend13, self);
    
    MethodClosure MC_SMB_inspectLabelOn_ = new_MethodClosure((Method)PMethod7, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_inspectLabelOn_, MC_SMB_inspectLabelOn_);
}


static void init_SMB_performCustomSelector_() {
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Variable VAR_prefix_0_0 = new_Variable_named(L"prefix", 0);
    Array PArray15 = new_Array_with(1, (Optr)VAR_prefix_0_0);
    Variable VAR_customSelector_0_1 = new_Variable_named(L"customSelector", 0);
    Array PArray16 = new_Array_with(1, (Optr)VAR_customSelector_0_1);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend22 = new_Send((Optr)self, SMB_selector, 0);
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    // capitalized. 
    Send PSend21 = new_Send((Optr)PSend22, SMB_capitalized, 0);
    // ,. 
    Send PSend20 = new_Send((Optr)VAR_prefix_0_0, SMB__append_, 1, (Optr)PSend21);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend19 = new_Send((Optr)PSend20, SMB_asSymbol, 0);
    Assign PAssign18 = new_Assign((Optr)VAR_customSelector_0_1, (Optr)PSend19);
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    // respondsTo:. 
    Send PSend23 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_respondsTo_, 1, (Optr)VAR_customSelector_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend27 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_perform_, 1, (Optr)VAR_customSelector_0_1);
    Array PThreadedCode26 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_variable, (Optr)VAR_customSelector_0_1, (Optr)&t_send1, (Optr)PSend27, (Optr)&t_block_return);
    Block PBlock25 = new_Block_with(empty_Array, empty_Array, PThreadedCode26, 1, PSend27);
    // ifTrue:. 
    Send PSend24 = new_Send((Optr)PSend23, SMB_ifTrue_, 1, (Optr)PBlock25);
    Array PThreadedCode17 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign18, (Optr)&t_push_variable, (Optr)VAR_prefix_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22, (Optr)&t_send0, (Optr)PSend21, (Optr)&t_send1, (Optr)PSend20, (Optr)&t_send0, (Optr)PSend19, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_variable, (Optr)VAR_customSelector_0_1, (Optr)&t_send1, (Optr)PSend23, (Optr)&t_send_ifTrue_, (Optr)PSend24, (Optr)PBlock25, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14 = new_Method_with(PArray15, PArray16, empty_Array, PThreadedCode17, 3, PAssign18, PSend24, self);
    
    MethodClosure MC_SMB_performCustomSelector_ = new_MethodClosure((Method)PMethod14, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_performCustomSelector_, MC_SMB_performCustomSelector_);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray29 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Super PSuper31 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode30 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper31, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod28 = new_Method_with(PArray29, empty_Array, empty_Array, PThreadedCode30, 2, PSuper31, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod28, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray33 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    // inspectLabelOn:. 
    Send PSend35 = new_Send((Optr)self, SMB_inspectLabelOn_, 1, (Optr)VAR_aStream_0_0);
    String string_36 = new_String(L" ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_36_Const = new_Constant((Optr)string_36);
    // <<. 
    Send PSend37 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_36_Const);
    Super PSuper38 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode34 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend35, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_36, (Optr)&t_send1, (Optr)PSend37, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper38, (Optr)&t_method_return);
    Method PMethod32 = new_Method_with(PArray33, empty_Array, empty_Array, PThreadedCode34, 3, PSend35, PSend37, PSuper38);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod32, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_probeCount() {
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    Array PThreadedCode40 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probeCount, (Optr)&t_method_return);
    Method PMethod39 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode40, 1, slot_PBenchmark_BenchmarkRun_probeCount);
    
    MethodClosure MC_SMB_probeCount = new_MethodClosure((Method)PMethod39, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probeCount, MC_SMB_probeCount);
}


static void init_SMB_probeCount_() {
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray42 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign44 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probeCount, (Optr)VAR_anObject_0_0);
    Array PThreadedCode43 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign44, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod41 = new_Method_with(PArray42, empty_Array, empty_Array, PThreadedCode43, 2, PAssign44, self);
    
    MethodClosure MC_SMB_probeCount_ = new_MethodClosure((Method)PMethod41, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probeCount_, MC_SMB_probeCount_);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend47 = new_Send((Optr)self, SMB_probes, 0);
    // sum. 
    Send PSend48 = new_Send((Optr)PSend47, SMB_sum, 0);
    Array PThreadedCode46 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend47, (Optr)&t_send0, (Optr)PSend48, (Optr)&t_method_return);
    Method PMethod45 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode46, 1, PSend48);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod45, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_sum, MC_SMB_sum);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_aRun_0_0 = new_Variable_named(L"aRun", 0);
    Array PArray50 = new_Array_with(1, (Optr)VAR_aRun_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend52 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_aRun_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_56 = new_String(L"Do not set the base to the same as self");
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    Constant string_56_Const = new_Constant((Optr)string_56);
    // signal:. 
    Send PSend57 = new_Send((Optr)Error_classReference, SMB_signal_, 1, (Optr)string_56_Const);
    Array PThreadedCode55 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push1, (Optr)string_56, (Optr)&t_send1, (Optr)PSend57, (Optr)&t_block_return);
    Block PBlock54 = new_Block_with(empty_Array, empty_Array, PThreadedCode55, 1, PSend57);
    // ifTrue:. 
    Send PSend53 = new_Send((Optr)PSend52, SMB_ifTrue_, 1, (Optr)PBlock54);
    Assign PAssign58 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)VAR_aRun_0_0);
    Array PThreadedCode51 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aRun_0_0, (Optr)&t_send1, (Optr)PSend52, (Optr)&t_send_ifTrue_, (Optr)PSend53, (Optr)PBlock54, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign58, (Optr)&t_push_variable, (Optr)VAR_aRun_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod49 = new_Method_with(PArray50, empty_Array, empty_Array, PThreadedCode51, 3, PSend53, PAssign58, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod49, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_base_, MC_SMB_base_);
}


static void init_SMB_probes() {
    Symbol SMB_probes = new_Symbol(L"probes");
    Array PThreadedCode60 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)&t_method_return);
    Method PMethod59 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode60, 1, slot_PBenchmark_BenchmarkRun_probes);
    
    MethodClosure MC_SMB_probes = new_MethodClosure((Method)PMethod59, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probes, MC_SMB_probes);
}


static void init_SMB_target_() {
    Symbol SMB_target_ = new_Symbol(L"target:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray62 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign64 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)VAR_anObject_0_0);
    Array PThreadedCode63 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign64, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod61 = new_Method_with(PArray62, empty_Array, empty_Array, PThreadedCode63, 2, PAssign64, self);
    
    MethodClosure MC_SMB_target_ = new_MethodClosure((Method)PMethod61, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_target_, MC_SMB_target_);
}


static void init_SMB_runProbe() {
    Symbol SMB_runProbe = new_Symbol(L"runProbe");
    Variable VAR_time_0_0 = new_Variable_named(L"time", 0);
    Array PArray66 = new_Array_with(1, (Optr)VAR_time_0_0);
    Symbol SMB_setUpProbe = new_Symbol(L"setUpProbe");
    // setUpProbe. 
    Send PSend68 = new_Send((Optr)self, SMB_setUpProbe, 0);
    Symbol SMB_currentMillis = new_Symbol(L"currentMillis");
    // currentMillis. 
    Send PSend70 = new_Send((Optr)self, SMB_currentMillis, 0);
    Assign PAssign69 = new_Assign((Optr)VAR_time_0_0, (Optr)PSend70);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend71 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_perform_, 1, (Optr)slot_PBenchmark_BenchmarkRun_selector);
    // currentMillis. 
    Send PSend74 = new_Send((Optr)self, SMB_currentMillis, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend73 = new_Send((Optr)PSend74, SMB__minus_, 1, (Optr)VAR_time_0_0);
    Assign PAssign72 = new_Assign((Optr)VAR_time_0_0, (Optr)PSend73);
    Symbol SMB_tearDownProbe = new_Symbol(L"tearDownProbe");
    // tearDownProbe. 
    Send PSend75 = new_Send((Optr)self, SMB_tearDownProbe, 0);
    Float float_1000_0 = new_Float(1000.0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    Constant float_1000_0_Const = new_Constant((Optr)float_1000_0);
    // /. 
    Send PSend76 = new_Send((Optr)VAR_time_0_0, SMB__divide_, 1, (Optr)float_1000_0_Const);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend77 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_probes, SMB_add_, 1, (Optr)PSend76);
    Array PThreadedCode67 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend68, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign69, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend70, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)&t_send1, (Optr)PSend71, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign72, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend74, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_send1, (Optr)PSend73, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend75, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_push1, (Optr)float_1000_0, (Optr)&t_send1, (Optr)PSend76, (Optr)&t_send1, (Optr)PSend77, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_time_0_0, (Optr)&t_method_return);
    Method PMethod65 = new_Method_with(empty_Array, PArray66, empty_Array, PThreadedCode67, 7, PSend68, PAssign69, PSend71, PAssign72, PSend75, PSend77, VAR_time_0_0);
    
    MethodClosure MC_SMB_runProbe = new_MethodClosure((Method)PMethod65, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_runProbe, MC_SMB_runProbe);
}


static void init_SMB_probes_() {
    Symbol SMB_probes_ = new_Symbol(L"probes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray79 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign81 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)VAR_anObject_0_0);
    Array PThreadedCode80 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign81, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod78 = new_Method_with(PArray79, empty_Array, empty_Array, PThreadedCode80, 2, PAssign81, self);
    
    MethodClosure MC_SMB_probes_ = new_MethodClosure((Method)PMethod78, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_probes_, MC_SMB_probes_);
}


static void init_SMB_total() {
    Symbol SMB_total = new_Symbol(L"total");
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend84 = new_Send((Optr)self, SMB_average, 0);
    Array PThreadedCode83 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend84, (Optr)&t_method_return);
    Method PMethod82 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode83, 1, PSend84);
    
    MethodClosure MC_SMB_total = new_MethodClosure((Method)PMethod82, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_total, MC_SMB_total);
}


static void init_SMB_tearDownProbe() {
    Symbol SMB_tearDownProbe = new_Symbol(L"tearDownProbe");
    Symbol  SMB_tearDown = new_Symbol(L"tearDown");
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Constant SMB_tearDown_Const = new_Constant((Optr)SMB_tearDown);
    // performCustomSelector:. 
    Send PSend87 = new_Send((Optr)self, SMB_performCustomSelector_, 1, (Optr)SMB_tearDown_Const);
    // tearDown. 
    Send PSend88 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_tearDown, 0);
    Array PThreadedCode86 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_tearDown, (Optr)&t_send1, (Optr)PSend87, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_send0, (Optr)PSend88, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod85 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode86, 3, PSend87, PSend88, self);
    
    MethodClosure MC_SMB_tearDownProbe = new_MethodClosure((Method)PMethod85, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_tearDownProbe, MC_SMB_tearDownProbe);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    Assign PAssign91 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probeCount, (Optr)int_30_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend93 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)slot_PBenchmark_BenchmarkRun_probeCount);
    Assign PAssign92 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_probes, (Optr)PSend93);
    Array PThreadedCode90 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign91, (Optr)&t_push1, (Optr)int_30, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign92, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_probeCount, (Optr)&t_send1, (Optr)PSend93, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod89 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode90, 3, PAssign91, PAssign92, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod89, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend96 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_runProbe = new_Symbol(L"runProbe");
    // runProbe. 
    Send PSend99 = new_Send((Optr)self, SMB_runProbe, 0);
    Array PThreadedCode98 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend99, (Optr)&t_block_return);
    Block PBlock97 = new_Block_with(empty_Array, empty_Array, PThreadedCode98, 1, PSend99);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend100 = new_Send((Optr)PSend96, SMB_timesRepeat_, 1, (Optr)PBlock97);
    Array PThreadedCode95 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend96, (Optr)&t_push_closure, (Optr)PBlock97, (Optr)&t_send1, (Optr)PSend100, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod94 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode95, 2, PSend100, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod94, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray102 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign104 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_selector, (Optr)VAR_anObject_0_0);
    Array PThreadedCode103 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign104, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod101 = new_Method_with(PArray102, empty_Array, empty_Array, PThreadedCode103, 2, PAssign104, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod101, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB_setUpProbe() {
    Symbol SMB_setUpProbe = new_Symbol(L"setUpProbe");
    Variable VAR_customSetUp_0_0 = new_Variable_named(L"customSetUp", 0);
    Array PArray106 = new_Array_with(1, (Optr)VAR_customSetUp_0_0);
    Symbol SMB_setUp = new_Symbol(L"setUp");
    // setUp. 
    Send PSend108 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_target, SMB_setUp, 0);
    Symbol SMB_performCustomSelector_ = new_Symbol(L"performCustomSelector:");
    Constant SMB_setUp_Const = new_Constant((Optr)SMB_setUp);
    // performCustomSelector:. 
    Send PSend109 = new_Send((Optr)self, SMB_performCustomSelector_, 1, (Optr)SMB_setUp_Const);
    Array PThreadedCode107 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_send0, (Optr)PSend108, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_setUp, (Optr)&t_send1, (Optr)PSend109, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod105 = new_Method_with(empty_Array, PArray106, empty_Array, PThreadedCode107, 3, PSend108, PSend109, self);
    
    MethodClosure MC_SMB_setUpProbe = new_MethodClosure((Method)PMethod105, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_setUpProbe, MC_SMB_setUpProbe);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Variable VAR_avg_0_0 = new_Variable_named(L"avg", 0);
    Array PArray111 = new_Array_with(1, (Optr)VAR_avg_0_0);
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend115 = new_Send((Optr)self, SMB_probes, 0);
    // average. 
    Send PSend114 = new_Send((Optr)PSend115, SMB_average, 0);
    Assign PAssign113 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend114);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // average. 
    Send PSend120 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_average, 0);
    // -. 
    Send PSend119 = new_Send((Optr)VAR_avg_0_0, SMB__minus_, 1, (Optr)PSend120);
    Assign PAssign118 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend119);
    Array PThreadedCode117 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign118, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_send0, (Optr)PSend120, (Optr)&t_send1, (Optr)PSend119, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock116 = new_Block_with(empty_Array, empty_Array, PThreadedCode117, 1, PAssign118);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend121 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_ifNotNil_, 1, (Optr)PBlock116);
    Array PThreadedCode112 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign113, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend115, (Optr)&t_send0, (Optr)PSend114, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_push_closure, (Optr)PBlock116, (Optr)&t_send1, (Optr)PSend121, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_method_return);
    Method PMethod110 = new_Method_with(empty_Array, PArray111, empty_Array, PThreadedCode112, 3, PAssign113, PSend121, VAR_avg_0_0);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod110, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray123 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign125 = new_Assign((Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode124 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign125, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod122 = new_Method_with(PArray123, empty_Array, empty_Array, PThreadedCode124, 2, PAssign125, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod122, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Variable VAR_stdev_0_0 = new_Variable_named(L"stdev", 0);
    Array PArray127 = new_Array_with(1, (Optr)VAR_stdev_0_0);
    Symbol SMB_probes = new_Symbol(L"probes");
    // probes. 
    Send PSend131 = new_Send((Optr)self, SMB_probes, 0);
    // stdev. 
    Send PSend130 = new_Send((Optr)PSend131, SMB_stdev, 0);
    Assign PAssign129 = new_Assign((Optr)VAR_stdev_0_0, (Optr)PSend130);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // stdev. 
    Send PSend136 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_stdev, 0);
    // +. 
    Send PSend135 = new_Send((Optr)VAR_stdev_0_0, SMB__plus_, 1, (Optr)PSend136);
    Assign PAssign134 = new_Assign((Optr)VAR_stdev_0_0, (Optr)PSend135);
    Array PThreadedCode133 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign134, (Optr)&t_push_variable, (Optr)VAR_stdev_0_0, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_send0, (Optr)PSend136, (Optr)&t_send1, (Optr)PSend135, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock132 = new_Block_with(empty_Array, empty_Array, PThreadedCode133, 1, PAssign134);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend137 = new_Send((Optr)slot_PBenchmark_BenchmarkRun_base, SMB_ifNotNil_, 1, (Optr)PBlock132);
    Array PThreadedCode128 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign129, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend131, (Optr)&t_send0, (Optr)PSend130, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_base, (Optr)&t_push_closure, (Optr)PBlock132, (Optr)&t_send1, (Optr)PSend137, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stdev_0_0, (Optr)&t_method_return);
    Method PMethod126 = new_Method_with(empty_Array, PArray127, empty_Array, PThreadedCode128, 3, PAssign129, PSend137, VAR_stdev_0_0);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod126, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode139 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_name, (Optr)&t_method_return);
    Method PMethod138 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode139, 1, slot_PBenchmark_BenchmarkRun_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod138, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_target() {
    Symbol SMB_target = new_Symbol(L"target");
    Array PThreadedCode141 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_BenchmarkRun_target, (Optr)&t_method_return);
    Method PMethod140 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode141, 1, slot_PBenchmark_BenchmarkRun_target);
    
    MethodClosure MC_SMB_target = new_MethodClosure((Method)PMethod140, PBenchmark_BenchmarkRun_Class);
    store_method(PBenchmark_BenchmarkRun_Class, SMB_target, MC_SMB_target);
}

void init_PBenchmark_PBenchmarkRun_layout() {
    slot_PBenchmark_BenchmarkRun_Class_class_layout = (Optr)new_Slot(0, L"layout");
    slot_PBenchmark_BenchmarkRun_Class_class_superclass = (Optr)new_Slot(1, L"superclass");
    slot_PBenchmark_BenchmarkRun_Class_class_methods = (Optr)new_Slot(2, L"methods");
    slot_PBenchmark_BenchmarkRun_Class_class_name = (Optr)new_Slot(3, L"name");
    slot_PBenchmark_BenchmarkRun_Class_class_package = (Optr)new_Slot(4, L"package");
    layout_PBenchmark_BenchmarkRun_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PBenchmark_BenchmarkRun_Class_class)->values[0] = slot_PBenchmark_BenchmarkRun_Class_class_layout; // layout 
    ((Array)layout_PBenchmark_BenchmarkRun_Class_class)->values[1] = slot_PBenchmark_BenchmarkRun_Class_class_superclass; // superclass 
    ((Array)layout_PBenchmark_BenchmarkRun_Class_class)->values[2] = slot_PBenchmark_BenchmarkRun_Class_class_methods; // methods 
    ((Array)layout_PBenchmark_BenchmarkRun_Class_class)->values[3] = slot_PBenchmark_BenchmarkRun_Class_class_name; // name 
    ((Array)layout_PBenchmark_BenchmarkRun_Class_class)->values[4] = slot_PBenchmark_BenchmarkRun_Class_class_package; // package 
    
    Symbol  SMB_BenchmarkRun = new_Symbol(L"BenchmarkRun");
    slot_PBenchmark_BenchmarkRun_probeCount = (Optr)new_Slot(0, L"probeCount");
    slot_PBenchmark_BenchmarkRun_probes = (Optr)new_Slot(1, L"probes");
    slot_PBenchmark_BenchmarkRun_target = (Optr)new_Slot(2, L"target");
    slot_PBenchmark_BenchmarkRun_selector = (Optr)new_Slot(3, L"selector");
    slot_PBenchmark_BenchmarkRun_name = (Optr)new_Slot(4, L"name");
    slot_PBenchmark_BenchmarkRun_base = (Optr)new_Slot(5, L"base");
    layout_PBenchmark_BenchmarkRun = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_PBenchmark_BenchmarkRun)->values[0] = slot_PBenchmark_BenchmarkRun_probeCount; // probeCount 
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