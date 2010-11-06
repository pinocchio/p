#include <lib/class/Chronology/Timespan.h>


Optr layout_Chronology_Timespan_Class_class;
Optr slot_Chronology_Timespan_start;
Optr slot_Chronology_Timespan_duration;
Optr layout_Chronology_Timespan;


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_duration = new_Symbol(L"duration");
    // duration. 
    Send PSend20470 = new_Send((Optr)self, SMB_duration, 0);
    Array PThreadedCode20469 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20470, (Optr)&t_method_return);
    Method PMethod20468 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20469, 1, PSend20470);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20468, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    // monthName. 
    Send PSend20473 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_monthName, 0);
    Array PThreadedCode20472 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20473, (Optr)&t_method_return);
    Method PMethod20471 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20472, 1, PSend20473);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod20471, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend20476 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_asDate, 0);
    Array PThreadedCode20475 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20476, (Optr)&t_method_return);
    Method PMethod20474 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20475, 1, PSend20476);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20474, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20478 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Character char_5737 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5737_Const = new_Constant((Optr)char_5737);
    // <<. 
    Send PSend20480 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5737_Const);
    // printOn:. 
    Send PSend20481 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_9304 = new_Character(L'D');
    Constant char_9304_Const = new_Constant((Optr)char_9304);
    // <<. 
    Send PSend20482 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9304_Const);
    // printOn:. 
    Send PSend20483 = new_Send((Optr)slot_Chronology_Timespan_duration, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend20484 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode20479 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5737, (Optr)&t_send1, (Optr)PSend20480, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20481, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9304, (Optr)&t_send1, (Optr)PSend20482, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_duration, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20483, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend20484, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20477 = new_Method_with(PArray20478, empty_Array, empty_Array, PThreadedCode20479, 6, PSend20480, PSend20481, PSend20482, PSend20483, PSend20484, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20477, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_duration_() {
    Symbol SMB_duration_ = new_Symbol(L"duration:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray20486 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign20488 = new_Assign((Optr)slot_Chronology_Timespan_duration, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode20487 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20488, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20485 = new_Method_with(PArray20486, empty_Array, empty_Array, PThreadedCode20487, 2, PAssign20488, self);
    
    MethodClosure MC_SMB_duration_ = new_MethodClosure((Method)PMethod20485, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_duration_, MC_SMB_duration_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Array PThreadedCode20490 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_method_return);
    Method PMethod20489 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20490, 1, slot_Chronology_Timespan_start);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20489, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20492 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20495 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_asDateAndTime, 0);
    Assign PAssign20494 = new_Assign((Optr)slot_Chronology_Timespan_start, (Optr)PSend20495);
    Array PThreadedCode20493 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign20494, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20495, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20491 = new_Method_with(PArray20492, empty_Array, empty_Array, PThreadedCode20493, 2, PAssign20494, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod20491, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_start_, MC_SMB_start_);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    // year. 
    Send PSend20498 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_year, 0);
    Array PThreadedCode20497 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20498, (Optr)&t_method_return);
    Method PMethod20496 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20497, 1, PSend20498);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod20496, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_duration() {
    Symbol SMB_duration = new_Symbol(L"duration");
    Array PThreadedCode20500 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_duration, (Optr)&t_method_return);
    Method PMethod20499 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20500, 1, slot_Chronology_Timespan_duration);
    
    MethodClosure MC_SMB_duration = new_MethodClosure((Method)PMethod20499, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_duration, MC_SMB_duration);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20502 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend20504 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    // starting:duration:. 
    Send PSend20505 = new_Send((Optr)self, SMB_starting_duration_, 2, (Optr)VAR_aDateAndTime_0_0, (Optr)PSend20504);
    Array PThreadedCode20503 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend20504, (Optr)&t_send2, (Optr)PSend20505, (Optr)&t_method_return);
    Method PMethod20501 = new_Method_with(PArray20502, empty_Array, empty_Array, PThreadedCode20503, 1, PSend20505);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20501, HEADER(Chronology_Timespan_Class));
    store_method(HEADER(Chronology_Timespan_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_starting_duration_() {
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Variable VAR_aDuration_0_1 = new_Variable_named(L"aDuration", 0);
    Array PArray20507 = new_Array_with(2, (Optr)VAR_aDateAndTime_0_0, (Optr)VAR_aDuration_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20510 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20512 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_asDateAndTime, 0);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend20513 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend20512);
    Symbol SMB_duration_ = new_Symbol(L"duration:");
    // duration:. 
    Send PSend20514 = new_Send((Optr)VAR__receiver__1_0, SMB_duration_, 1, (Optr)VAR_aDuration_0_1);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20515 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20511 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20512, (Optr)&t_send1, (Optr)PSend20513, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_1, (Optr)&t_send1, (Optr)PSend20514, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20515, (Optr)&t_method_return);
    Block PBlock20509 = new_Block_with(PArray20510, empty_Array, PThreadedCode20511, 3, PSend20513, PSend20514, PSend20515);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20516 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20517 = new_Send((Optr)PBlock20509, SMB_value_, 1, (Optr)PSend20516);
    Array PThreadedCode20508 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock20509, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20516, (Optr)&t_send1, (Optr)PSend20517, (Optr)&t_method_return);
    Method PMethod20506 = new_Method_with(PArray20507, empty_Array, empty_Array, PThreadedCode20508, 1, PSend20517);
    
    MethodClosure MC_SMB_starting_duration_ = new_MethodClosure((Method)PMethod20506, HEADER(Chronology_Timespan_Class));
    store_method(HEADER(Chronology_Timespan_Class), SMB_starting_duration_, MC_SMB_starting_duration_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend20520 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20521 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20520);
    Array PThreadedCode20519 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20520, (Optr)&t_send1, (Optr)PSend20521, (Optr)&t_method_return);
    Method PMethod20518 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20519, 1, PSend20521);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PMethod20518, HEADER(Chronology_Timespan_Class));
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