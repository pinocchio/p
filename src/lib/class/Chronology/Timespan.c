#include <lib/class/Chronology/Timespan.h>


Optr layout_Chronology_Timespan_Class_class;
Optr slot_Chronology_Timespan_start;
Optr slot_Chronology_Timespan_duration;
Optr layout_Chronology_Timespan;


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_duration = new_Symbol(L"duration");
    // duration. 
    Send PSend20299 = new_Send((Optr)self, SMB_duration, 0);
    Array PThreadedCode20298 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20299, (Optr)&t_method_return);
    Method PMethod20297 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20298, 1, PSend20299);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20297, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    // monthName. 
    Send PSend20302 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_monthName, 0);
    Array PThreadedCode20301 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20302, (Optr)&t_method_return);
    Method PMethod20300 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20301, 1, PSend20302);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod20300, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend20305 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_asDate, 0);
    Array PThreadedCode20304 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20305, (Optr)&t_method_return);
    Method PMethod20303 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20304, 1, PSend20305);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20303, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20307 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Character char_5746 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5746_Const = new_Constant((Optr)char_5746);
    // <<. 
    Send PSend20309 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5746_Const);
    // printOn:. 
    Send PSend20310 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_9231 = new_Character(L'D');
    Constant char_9231_Const = new_Constant((Optr)char_9231);
    // <<. 
    Send PSend20311 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9231_Const);
    // printOn:. 
    Send PSend20312 = new_Send((Optr)slot_Chronology_Timespan_duration, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend20313 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode20308 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5746, (Optr)&t_send1, (Optr)PSend20309, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20310, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9231, (Optr)&t_send1, (Optr)PSend20311, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_duration, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20312, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend20313, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20306 = new_Method_with(PArray20307, empty_Array, empty_Array, PThreadedCode20308, 6, PSend20309, PSend20310, PSend20311, PSend20312, PSend20313, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20306, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_duration_() {
    Symbol SMB_duration_ = new_Symbol(L"duration:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray20315 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign20317 = new_Assign((Optr)slot_Chronology_Timespan_duration, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode20316 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20317, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20314 = new_Method_with(PArray20315, empty_Array, empty_Array, PThreadedCode20316, 2, PAssign20317, self);
    
    MethodClosure MC_SMB_duration_ = new_MethodClosure((Method)PMethod20314, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_duration_, MC_SMB_duration_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Array PThreadedCode20319 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_method_return);
    Method PMethod20318 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20319, 1, slot_Chronology_Timespan_start);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20318, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20321 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20324 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_asDateAndTime, 0);
    Assign PAssign20323 = new_Assign((Optr)slot_Chronology_Timespan_start, (Optr)PSend20324);
    Array PThreadedCode20322 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign20323, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20324, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20320 = new_Method_with(PArray20321, empty_Array, empty_Array, PThreadedCode20322, 2, PAssign20323, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod20320, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_start_, MC_SMB_start_);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    // year. 
    Send PSend20327 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_year, 0);
    Array PThreadedCode20326 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20327, (Optr)&t_method_return);
    Method PMethod20325 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20326, 1, PSend20327);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod20325, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_duration() {
    Symbol SMB_duration = new_Symbol(L"duration");
    Array PThreadedCode20329 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_duration, (Optr)&t_method_return);
    Method PMethod20328 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20329, 1, slot_Chronology_Timespan_duration);
    
    MethodClosure MC_SMB_duration = new_MethodClosure((Method)PMethod20328, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_duration, MC_SMB_duration);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20331 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend20333 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    // starting:duration:. 
    Send PSend20334 = new_Send((Optr)self, SMB_starting_duration_, 2, (Optr)VAR_aDateAndTime_0_0, (Optr)PSend20333);
    Array PThreadedCode20332 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend20333, (Optr)&t_send2, (Optr)PSend20334, (Optr)&t_method_return);
    Method PMethod20330 = new_Method_with(PArray20331, empty_Array, empty_Array, PThreadedCode20332, 1, PSend20334);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20330, HEADER(Chronology_Timespan_Class));
    store_method(HEADER(Chronology_Timespan_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_starting_duration_() {
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Variable VAR_aDuration_0_1 = new_Variable_named(L"aDuration", 0);
    Array PArray20336 = new_Array_with(2, (Optr)VAR_aDateAndTime_0_0, (Optr)VAR_aDuration_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20339 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20341 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_asDateAndTime, 0);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend20342 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend20341);
    Symbol SMB_duration_ = new_Symbol(L"duration:");
    // duration:. 
    Send PSend20343 = new_Send((Optr)VAR__receiver__1_0, SMB_duration_, 1, (Optr)VAR_aDuration_0_1);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20344 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20340 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20341, (Optr)&t_send1, (Optr)PSend20342, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_1, (Optr)&t_send1, (Optr)PSend20343, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20344, (Optr)&t_method_return);
    Block PBlock20338 = new_Block_with(PArray20339, empty_Array, PThreadedCode20340, 3, PSend20342, PSend20343, PSend20344);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20345 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20346 = new_Send((Optr)PBlock20338, SMB_value_, 1, (Optr)PSend20345);
    Array PThreadedCode20337 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock20338, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20345, (Optr)&t_send1, (Optr)PSend20346, (Optr)&t_method_return);
    Method PMethod20335 = new_Method_with(PArray20336, empty_Array, empty_Array, PThreadedCode20337, 1, PSend20346);
    
    MethodClosure MC_SMB_starting_duration_ = new_MethodClosure((Method)PMethod20335, HEADER(Chronology_Timespan_Class));
    store_method(HEADER(Chronology_Timespan_Class), SMB_starting_duration_, MC_SMB_starting_duration_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend20349 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20350 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20349);
    Array PThreadedCode20348 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20349, (Optr)&t_send1, (Optr)PSend20350, (Optr)&t_method_return);
    Method PMethod20347 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20348, 1, PSend20350);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PMethod20347, HEADER(Chronology_Timespan_Class));
    store_method(HEADER(Chronology_Timespan_Class), SMB_current, MC_SMB_current);
}

void init_Chronology_Timespan_layout() {
    layout_Chronology_Timespan_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Chronology_Timespan_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Chronology_Timespan_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Chronology_Timespan_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Chronology_Timespan_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Chronology_Timespan_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Timespan = new_Symbol(L"Timespan");
    slot_Chronology_Timespan_start = (Optr)new_Slot(0, L"start");
    slot_Chronology_Timespan_duration = (Optr)new_Slot(1, L"duration");
    layout_Chronology_Timespan = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Chronology_Timespan)->values[0] = slot_Chronology_Timespan_start; // start 
    ((Array)layout_Chronology_Timespan)->values[1] = slot_Chronology_Timespan_duration; // duration 
    Chronology_Timespan_Class = (Class)new_Class(Object_Class, layout_Chronology_Timespan_Class_class);
    Class_set_superclass(Chronology_Timespan_Class, Object_Class);
    Chronology_Timespan_Class->layout = layout_Chronology_Timespan;
    HEADER(Chronology_Timespan_Class)->layout = layout_Chronology_Timespan_Class_class;
    Chronology_Timespan_Class->name = SMB_Timespan;
    
}

void init_Chronology_Timespan_methods() {
    init_SMB_asDuration();
    init_SMB_monthName();
    init_SMB_asDate();
    init_SMB_printOn_();
    init_SMB_duration_();
    init_SMB_asDateAndTime();
    init_SMB_start_();
    init_SMB_year();
    init_SMB_duration();
    init_class_SMB_starting_();
    init_class_SMB_starting_duration_();
    init_class_SMB_current();
    
}