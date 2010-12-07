#include <lib/class/Chronology/Timespan.h>


Optr layout_Chronology_Timespan_Class_class;
Optr slot_Chronology_Timespan_start;
Optr slot_Chronology_Timespan_duration;
Optr layout_Chronology_Timespan;


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_duration = new_Symbol(L"duration");
    // duration. 
    Send PSend20691 = new_Send((Optr)self, SMB_duration, 0);
    Array PThreadedCode20690 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20691, (Optr)&t_method_return);
    Method PMethod20689 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20690, 1, PSend20691);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20689, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    // monthName. 
    Send PSend20694 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_monthName, 0);
    Array PThreadedCode20693 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20694, (Optr)&t_method_return);
    Method PMethod20692 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20693, 1, PSend20694);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod20692, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend20697 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_asDate, 0);
    Array PThreadedCode20696 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20697, (Optr)&t_method_return);
    Method PMethod20695 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20696, 1, PSend20697);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20695, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20699 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend20701 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    // printOn:. 
    Send PSend20702 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_9525 = new_Character(L'D');
    Constant char_9525_Const = new_Constant((Optr)char_9525);
    // <<. 
    Send PSend20703 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9525_Const);
    // printOn:. 
    Send PSend20704 = new_Send((Optr)slot_Chronology_Timespan_duration, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend20705 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode20700 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend20701, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20702, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9525, (Optr)&t_send1, (Optr)PSend20703, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_duration, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20704, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend20705, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20698 = new_Method_with(PArray20699, empty_Array, empty_Array, PThreadedCode20700, 6, PSend20701, PSend20702, PSend20703, PSend20704, PSend20705, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20698, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_duration_() {
    Symbol SMB_duration_ = new_Symbol(L"duration:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray20707 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign20709 = new_Assign((Optr)slot_Chronology_Timespan_duration, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode20708 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20709, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20706 = new_Method_with(PArray20707, empty_Array, empty_Array, PThreadedCode20708, 2, PAssign20709, self);
    
    MethodClosure MC_SMB_duration_ = new_MethodClosure((Method)PMethod20706, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_duration_, MC_SMB_duration_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Array PThreadedCode20711 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_method_return);
    Method PMethod20710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20711, 1, slot_Chronology_Timespan_start);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20710, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20713 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20716 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_asDateAndTime, 0);
    Assign PAssign20715 = new_Assign((Optr)slot_Chronology_Timespan_start, (Optr)PSend20716);
    Array PThreadedCode20714 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign20715, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20716, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20712 = new_Method_with(PArray20713, empty_Array, empty_Array, PThreadedCode20714, 2, PAssign20715, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod20712, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_start_, MC_SMB_start_);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    // year. 
    Send PSend20719 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_year, 0);
    Array PThreadedCode20718 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20719, (Optr)&t_method_return);
    Method PMethod20717 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20718, 1, PSend20719);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod20717, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_duration() {
    Symbol SMB_duration = new_Symbol(L"duration");
    Array PThreadedCode20721 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_duration, (Optr)&t_method_return);
    Method PMethod20720 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20721, 1, slot_Chronology_Timespan_duration);
    
    MethodClosure MC_SMB_duration = new_MethodClosure((Method)PMethod20720, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_duration, MC_SMB_duration);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20723 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend20725 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    // starting:duration:. 
    Send PSend20726 = new_Send((Optr)self, SMB_starting_duration_, 2, (Optr)VAR_aDateAndTime_0_0, (Optr)PSend20725);
    Array PThreadedCode20724 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend20725, (Optr)&t_send2, (Optr)PSend20726, (Optr)&t_method_return);
    Method PMethod20722 = new_Method_with(PArray20723, empty_Array, empty_Array, PThreadedCode20724, 1, PSend20726);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20722, HEADER(Chronology_Timespan_Class));
    store_method(HEADER(Chronology_Timespan_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_starting_duration_() {
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Variable VAR_aDuration_0_1 = new_Variable_named(L"aDuration", 0);
    Array PArray20728 = new_Array_with(2, (Optr)VAR_aDateAndTime_0_0, (Optr)VAR_aDuration_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20731 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20733 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_asDateAndTime, 0);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend20734 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend20733);
    Symbol SMB_duration_ = new_Symbol(L"duration:");
    // duration:. 
    Send PSend20735 = new_Send((Optr)VAR__receiver__1_0, SMB_duration_, 1, (Optr)VAR_aDuration_0_1);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20736 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20732 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20733, (Optr)&t_send1, (Optr)PSend20734, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_1, (Optr)&t_send1, (Optr)PSend20735, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20736, (Optr)&t_method_return);
    Block PBlock20730 = new_Block_with(PArray20731, empty_Array, PThreadedCode20732, 3, PSend20734, PSend20735, PSend20736);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20737 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20738 = new_Send((Optr)PBlock20730, SMB_value_, 1, (Optr)PSend20737);
    Array PThreadedCode20729 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock20730, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20737, (Optr)&t_send1, (Optr)PSend20738, (Optr)&t_method_return);
    Method PMethod20727 = new_Method_with(PArray20728, empty_Array, empty_Array, PThreadedCode20729, 1, PSend20738);
    
    MethodClosure MC_SMB_starting_duration_ = new_MethodClosure((Method)PMethod20727, HEADER(Chronology_Timespan_Class));
    store_method(HEADER(Chronology_Timespan_Class), SMB_starting_duration_, MC_SMB_starting_duration_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend20741 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20742 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20741);
    Array PThreadedCode20740 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20741, (Optr)&t_send1, (Optr)PSend20742, (Optr)&t_method_return);
    Method PMethod20739 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20740, 1, PSend20742);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PMethod20739, HEADER(Chronology_Timespan_Class));
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