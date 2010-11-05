#include <lib/class/Chronology/Timespan.h>


Optr layout_Chronology_Timespan_Class_class;
Optr slot_Chronology_Timespan_start;
Optr slot_Chronology_Timespan_duration;
Optr layout_Chronology_Timespan;


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_duration = new_Symbol(L"duration");
    // duration. 
    Send PSend20329 = new_Send((Optr)self, SMB_duration, 0);
    Array PThreadedCode20328 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20329, (Optr)&t_method_return);
    Method PMethod20327 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20328, 1, PSend20329);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20327, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    // monthName. 
    Send PSend20332 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_monthName, 0);
    Array PThreadedCode20331 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20332, (Optr)&t_method_return);
    Method PMethod20330 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20331, 1, PSend20332);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod20330, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    // asDate. 
    Send PSend20335 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_asDate, 0);
    Array PThreadedCode20334 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20335, (Optr)&t_method_return);
    Method PMethod20333 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20334, 1, PSend20335);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20333, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20337 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend20339 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    // printOn:. 
    Send PSend20340 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_9255 = new_Character(L'D');
    Constant char_9255_Const = new_Constant((Optr)char_9255);
    // <<. 
    Send PSend20341 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9255_Const);
    // printOn:. 
    Send PSend20342 = new_Send((Optr)slot_Chronology_Timespan_duration, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend20343 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode20338 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend20339, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20340, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9255, (Optr)&t_send1, (Optr)PSend20341, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_duration, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20342, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend20343, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20336 = new_Method_with(PArray20337, empty_Array, empty_Array, PThreadedCode20338, 6, PSend20339, PSend20340, PSend20341, PSend20342, PSend20343, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20336, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_duration_() {
    Symbol SMB_duration_ = new_Symbol(L"duration:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray20345 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign20347 = new_Assign((Optr)slot_Chronology_Timespan_duration, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode20346 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20347, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20344 = new_Method_with(PArray20345, empty_Array, empty_Array, PThreadedCode20346, 2, PAssign20347, self);
    
    MethodClosure MC_SMB_duration_ = new_MethodClosure((Method)PMethod20344, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_duration_, MC_SMB_duration_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Array PThreadedCode20349 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_method_return);
    Method PMethod20348 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20349, 1, slot_Chronology_Timespan_start);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20348, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20351 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20354 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_asDateAndTime, 0);
    Assign PAssign20353 = new_Assign((Optr)slot_Chronology_Timespan_start, (Optr)PSend20354);
    Array PThreadedCode20352 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign20353, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20354, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20350 = new_Method_with(PArray20351, empty_Array, empty_Array, PThreadedCode20352, 2, PAssign20353, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod20350, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_start_, MC_SMB_start_);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    // year. 
    Send PSend20357 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_year, 0);
    Array PThreadedCode20356 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_send0, (Optr)PSend20357, (Optr)&t_method_return);
    Method PMethod20355 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20356, 1, PSend20357);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod20355, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_duration() {
    Symbol SMB_duration = new_Symbol(L"duration");
    Array PThreadedCode20359 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_duration, (Optr)&t_method_return);
    Method PMethod20358 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20359, 1, slot_Chronology_Timespan_duration);
    
    MethodClosure MC_SMB_duration = new_MethodClosure((Method)PMethod20358, Chronology_Timespan_Class);
    store_method(Chronology_Timespan_Class, SMB_duration, MC_SMB_duration);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20361 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend20363 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    // starting:duration:. 
    Send PSend20364 = new_Send((Optr)self, SMB_starting_duration_, 2, (Optr)VAR_aDateAndTime_0_0, (Optr)PSend20363);
    Array PThreadedCode20362 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend20363, (Optr)&t_send2, (Optr)PSend20364, (Optr)&t_method_return);
    Method PMethod20360 = new_Method_with(PArray20361, empty_Array, empty_Array, PThreadedCode20362, 1, PSend20364);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20360, HEADER(Chronology_Timespan_Class));
    store_method(HEADER(Chronology_Timespan_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_starting_duration_() {
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Variable VAR_aDuration_0_1 = new_Variable_named(L"aDuration", 0);
    Array PArray20366 = new_Array_with(2, (Optr)VAR_aDateAndTime_0_0, (Optr)VAR_aDuration_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20369 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20371 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_asDateAndTime, 0);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend20372 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend20371);
    Symbol SMB_duration_ = new_Symbol(L"duration:");
    // duration:. 
    Send PSend20373 = new_Send((Optr)VAR__receiver__1_0, SMB_duration_, 1, (Optr)VAR_aDuration_0_1);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20374 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20370 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20371, (Optr)&t_send1, (Optr)PSend20372, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_1, (Optr)&t_send1, (Optr)PSend20373, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20374, (Optr)&t_method_return);
    Block PBlock20368 = new_Block_with(PArray20369, empty_Array, PThreadedCode20370, 3, PSend20372, PSend20373, PSend20374);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20375 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20376 = new_Send((Optr)PBlock20368, SMB_value_, 1, (Optr)PSend20375);
    Array PThreadedCode20367 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock20368, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20375, (Optr)&t_send1, (Optr)PSend20376, (Optr)&t_method_return);
    Method PMethod20365 = new_Method_with(PArray20366, empty_Array, empty_Array, PThreadedCode20367, 1, PSend20376);
    
    MethodClosure MC_SMB_starting_duration_ = new_MethodClosure((Method)PMethod20365, HEADER(Chronology_Timespan_Class));
    store_method(HEADER(Chronology_Timespan_Class), SMB_starting_duration_, MC_SMB_starting_duration_);
}


static void init_class_SMB_current() {
    Symbol SMB_current = new_Symbol(L"current");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend20379 = new_Send((Optr)DateAndTime_classReference, SMB_now, 0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20380 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20379);
    Array PThreadedCode20378 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20379, (Optr)&t_send1, (Optr)PSend20380, (Optr)&t_method_return);
    Method PMethod20377 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20378, 1, PSend20380);
    
    MethodClosure MC_SMB_current = new_MethodClosure((Method)PMethod20377, HEADER(Chronology_Timespan_Class));
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