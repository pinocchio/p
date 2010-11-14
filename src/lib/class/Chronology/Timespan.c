#include <lib/class/Chronology/Timespan.h>


Optr layout_Chronology_Timespan_Class_class;
Optr slot_Chronology_Timespan_start;
Optr slot_Chronology_Timespan_duration;
Optr layout_Chronology_Timespan;


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_duration = new_Symbol(L"duration");
    // duration. 
    Send PSend20659 = new_Send((Optr)self, SMB_duration, 0);
    Array PThreadedCode20658 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20659, (Optr)&t_method_return);
    Method PMethod20657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20658, 1, PSend20659);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20657, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    // monthName. 
    Send PSend20662 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_monthName, 0);
    Array PThreadedCode20661 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20662, (Optr)&t_method_return);
    Method PMethod20660 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20661, 1, PSend20662);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod20660, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend20665 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_asDate, 0);
    Array PThreadedCode20664 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20665, (Optr)&t_method_return);
    Method PMethod20663 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20664, 1, PSend20665);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20663, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20667 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend20669 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    // printOn:. 
    Send PSend20670 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_9493 = new_Character(L'D');
    Constant char_9493_Const = new_Constant((Optr)char_9493);
    // <<. 
    Send PSend20671 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9493_Const);
    // printOn:. 
    Send PSend20672 = new_Send((Optr)slot_Chronology_Timespan_duration, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend20673 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode20668 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend20669, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20670, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9493, (Optr)&t_send1, (Optr)PSend20671, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_duration, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20672, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend20673, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20666 = new_Method_with(PArray20667, empty_Array, empty_Array, PThreadedCode20668, 6, PSend20669, PSend20670, PSend20671, PSend20672, PSend20673, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20666, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_duration_() {
    Symbol SMB_duration_ = new_Symbol(L"duration:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray20675 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign20677 = new_Assign((Optr)slot_Chronology_Timespan_duration, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode20676 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20677, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20674 = new_Method_with(PArray20675, empty_Array, empty_Array, PThreadedCode20676, 2, PAssign20677, self);
    
    MethodClosure MC_SMB_duration_ = new_MethodClosure((Method)PMethod20674, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_duration_, MC_SMB_duration_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Array PThreadedCode20679 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_method_return);
    Method PMethod20678 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20679, 1, slot_Chronology_Timespan_start);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20678, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20681 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20684 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_asDateAndTime, 0);
    Assign PAssign20683 = new_Assign((Optr)slot_Chronology_Timespan_start, (Optr)PSend20684);
    Array PThreadedCode20682 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign20683, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20684, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20680 = new_Method_with(PArray20681, empty_Array, empty_Array, PThreadedCode20682, 2, PAssign20683, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod20680, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_start_, MC_SMB_start_);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    // year. 
    Send PSend20687 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_year, 0);
    Array PThreadedCode20686 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20687, (Optr)&t_method_return);
    Method PMethod20685 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20686, 1, PSend20687);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod20685, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_duration() {
    Symbol SMB_duration = new_Symbol(L"duration");
    Array PThreadedCode20689 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_duration, (Optr)&t_method_return);
    Method PMethod20688 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20689, 1, slot_Chronology_Timespan_duration);
    
    MethodClosure MC_SMB_duration = new_MethodClosure((Method)PMethod20688, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_duration, MC_SMB_duration);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20691 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend20693 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    // starting:duration:. 
    Send PSend20694 = new_Send((Optr)self, SMB_starting_duration_, 2, (Optr)VAR_aDateAndTime_0_0, (Optr)PSend20693);
    Array PThreadedCode20692 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend20693, (Optr)&t_send2, (Optr)PSend20694, (Optr)&t_method_return);
    Method PMethod20690 = new_Method_with(PArray20691, empty_Array, empty_Array, PThreadedCode20692, 1, PSend20694);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20690, HEADER(Chronology_Timespan_Class));
    store_method(HEADER(Chronology_Timespan_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_starting_duration_() {
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Variable VAR_aDuration_0_1 = new_Variable_named(L"aDuration", 0);
    Array PArray20696 = new_Array_with(2, (Optr)VAR_aDateAndTime_0_0, (Optr)VAR_aDuration_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20699 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20701 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_asDateAndTime, 0);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend20702 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend20701);
    Symbol SMB_duration_ = new_Symbol(L"duration:");
    // duration:. 
    Send PSend20703 = new_Send((Optr)VAR__receiver__1_0, SMB_duration_, 1, (Optr)VAR_aDuration_0_1);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20704 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20700 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20701, (Optr)&t_send1, (Optr)PSend20702, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_1, (Optr)&t_send1, (Optr)PSend20703, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20704, (Optr)&t_method_return);
    Block PBlock20698 = new_Block_with(PArray20699, empty_Array, PThreadedCode20700, 3, PSend20702, PSend20703, PSend20704);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20705 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20706 = new_Send((Optr)PBlock20698, SMB_value_, 1, (Optr)PSend20705);
    Array PThreadedCode20697 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock20698, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20705, (Optr)&t_send1, (Optr)PSend20706, (Optr)&t_method_return);
    Method PMethod20695 = new_Method_with(PArray20696, empty_Array, empty_Array, PThreadedCode20697, 1, PSend20706);
    
    MethodClosure MC_SMB_starting_duration_ = new_MethodClosure((Method)PMethod20695, HEADER(Chronology_Timespan_Class));
    store_method(HEADER(Chronology_Timespan_Class), SMB_starting_duration_, MC_SMB_starting_duration_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend20709 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20710 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20709);
    Array PThreadedCode20708 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20709, (Optr)&t_send1, (Optr)PSend20710, (Optr)&t_method_return);
    Method PMethod20707 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20708, 1, PSend20710);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PMethod20707, HEADER(Chronology_Timespan_Class));
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