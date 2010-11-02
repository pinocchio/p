#include <lib/class/Chronology/DateAndTime.h>


Optr slot_Chronology_DateAndTime_Class_class_localTimeZone;
Optr layout_Chronology_DateAndTime_Class_class;
Optr slot_Chronology_DateAndTime_jdn;
Optr slot_Chronology_DateAndTime_seconds;
Optr slot_Chronology_DateAndTime_offset;
Optr layout_Chronology_DateAndTime;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20524 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20523 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20524, (Optr)&t_method_return);
    Method PMethod20522 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20523, 1, PSend20524);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20522, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20527 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_epoch = new_Symbol(L"epoch");
    // epoch. 
    Send PSend20528 = new_Send((Optr)PSend20527, SMB_epoch, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20529 = new_Send((Optr)self, SMB__minus_, 1, (Optr)PSend20528);
    // asSeconds. 
    Send PSend20530 = new_Send((Optr)PSend20529, SMB_asSeconds, 0);
    Array PThreadedCode20526 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20527, (Optr)&t_send0, (Optr)PSend20528, (Optr)&t_send1, (Optr)PSend20529, (Optr)&t_send0, (Optr)PSend20530, (Optr)&t_method_return);
    Method PMethod20525 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20526, 1, PSend20530);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20525, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20533 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20532 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20533, (Optr)&t_method_return);
    Method PMethod20531 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20532, 1, PSend20533);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20531, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20536 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20535 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20536, (Optr)&t_method_return);
    Method PMethod20534 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20535, 1, PSend20536);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20534, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode20538 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_method_return);
    Method PMethod20537 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20538, 1, slot_Chronology_DateAndTime_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod20537, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20541 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode20540 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20541, (Optr)&t_method_return);
    Method PMethod20539 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20540, 1, PSend20541);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20539, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_julianDayNumber() {
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    Array PThreadedCode20543 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_method_return);
    Method PMethod20542 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20543, 1, slot_Chronology_DateAndTime_jdn);
    
    MethodClosure MC_SMB_julianDayNumber = new_MethodClosure((Method)PMethod20542, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_julianDayNumber, MC_SMB_julianDayNumber);
}


static void init_SMB_dayOfMonth() {
    Symbol SMB_dayOfMonth = new_Symbol(L"dayOfMonth");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20547 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20548 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_method_return);
    Block PBlock20546 = new_Block_with(PArray20547, empty_Array, PThreadedCode20548, 1, VAR_d_1_0);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20549 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20546);
    Array PThreadedCode20545 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20546, (Optr)&t_send1, (Optr)PSend20549, (Optr)&t_method_return);
    Method PMethod20544 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20545, 1, PSend20549);
    
    MethodClosure MC_SMB_dayOfMonth = new_MethodClosure((Method)PMethod20544, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfMonth, MC_SMB_dayOfMonth);
}


static void init_SMB_ticks_offset_() {
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    Variable VAR_ticks_0_0 = new_Variable_named(L"ticks", 0);
    Variable VAR_utcOffset_0_1 = new_Variable_named(L"utcOffset", 0);
    Array PArray20551 = new_Array_with(2, (Optr)VAR_ticks_0_0, (Optr)VAR_utcOffset_0_1);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20553 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // normalize:ticks:base:. 
    Send PSend20554 = new_Send((Optr)self, SMB_normalize_ticks_base_, 3, (Optr)int_2_Const, (Optr)VAR_ticks_0_0, (Optr)PSend20553);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend20556 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign20555 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)PSend20556);
    // at:. 
    Send PSend20558 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20557 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)PSend20558);
    Assign PAssign20559 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_utcOffset_0_1);
    Array PThreadedCode20552 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20553, (Optr)&t_send3, (Optr)PSend20554, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20555, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20556, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20557, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20558, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20559, (Optr)&t_push_variable, (Optr)VAR_utcOffset_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20550 = new_Method_with(PArray20551, empty_Array, empty_Array, PThreadedCode20552, 5, PSend20554, PAssign20555, PAssign20557, PAssign20559, self);
    
    MethodClosure MC_SMB_ticks_offset_ = new_MethodClosure((Method)PMethod20550, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks_offset_, MC_SMB_ticks_offset_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20561 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Array PArray20562 = new_Array_with(1, (Optr)VAR_ticks_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20565 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign20564 = new_Assign((Optr)VAR_ticks_0_1, (Optr)PSend20565);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20566 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20567 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // ticks. 
    Send PSend20568 = new_Send((Optr)PSend20567, SMB_ticks, 0);
    Variable VAR_ticks1_1_0 = new_Variable_named(L"ticks1", 1);
    Variable VAR_dticks_1_1 = new_Variable_named(L"dticks", 1);
    Array PArray20570 = new_Array_with(2, (Optr)VAR_ticks1_1_0, (Optr)VAR_dticks_1_1);
    // +. 
    Send PSend20572 = new_Send((Optr)VAR_ticks1_1_0, SMB__plus_, 1, (Optr)VAR_dticks_1_1);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend20573 = new_Send((Optr)VAR_ticks_0_1, SMB_addLast_, 1, (Optr)PSend20572);
    Array PThreadedCode20571 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_ticks1_1_0, (Optr)&t_push_variable, (Optr)VAR_dticks_1_1, (Optr)&t_send1, (Optr)PSend20572, (Optr)&t_send1, (Optr)PSend20573, (Optr)&t_method_return);
    Block PBlock20569 = new_Block_with(PArray20570, empty_Array, PThreadedCode20571, 1, PSend20573);
    Symbol SMB_with_do_ = new_Symbol(L"with:do:");
    // with:do:. 
    Send PSend20574 = new_Send((Optr)PSend20566, SMB_with_do_, 2, (Optr)PSend20568, (Optr)PBlock20569);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20576 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20578 = new_Send((Optr)VAR_ticks_0_1, SMB_asArray, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20579 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20580 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20578, (Optr)PSend20579);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20581 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20577 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_send0, (Optr)PSend20578, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20579, (Optr)&t_send2, (Optr)PSend20580, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20581, (Optr)&t_method_return);
    Block PBlock20575 = new_Block_with(PArray20576, empty_Array, PThreadedCode20577, 2, PSend20580, PSend20581);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20582 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20583 = new_Send((Optr)PSend20582, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20584 = new_Send((Optr)PBlock20575, SMB_value_, 1, (Optr)PSend20583);
    Array PThreadedCode20563 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20564, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20565, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20566, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20567, (Optr)&t_send0, (Optr)PSend20568, (Optr)&t_push_closure, (Optr)PBlock20569, (Optr)&t_send2, (Optr)PSend20574, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20575, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20582, (Optr)&t_send0, (Optr)PSend20583, (Optr)&t_send1, (Optr)PSend20584, (Optr)&t_method_return);
    Method PMethod20560 = new_Method_with(PArray20561, PArray20562, empty_Array, PThreadedCode20563, 3, PAssign20564, PSend20574, PSend20584);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20560, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20586 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol  SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_asDateAndTime_Const = new_Constant((Optr)SMB_asDateAndTime);
    // respondsTo:. 
    Send PSend20588 = new_Send((Optr)VAR_operand_0_0, SMB_respondsTo_, 1, (Optr)SMB_asDateAndTime_Const);
    Variable VAR_lticks_1_0 = new_Variable_named(L"lticks", 1);
    Variable VAR_rticks_1_1 = new_Variable_named(L"rticks", 1);
    Array PArray20590 = new_Array_with(2, (Optr)VAR_lticks_1_0, (Optr)VAR_rticks_1_1);
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    // asLocal. 
    Send PSend20594 = new_Send((Optr)self, SMB_asLocal, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20593 = new_Send((Optr)PSend20594, SMB_ticks, 0);
    Assign PAssign20592 = new_Assign((Optr)VAR_lticks_1_0, (Optr)PSend20593);
    // asDateAndTime. 
    Send PSend20598 = new_Send((Optr)VAR_operand_0_0, SMB_asDateAndTime, 0);
    // asLocal. 
    Send PSend20597 = new_Send((Optr)PSend20598, SMB_asLocal, 0);
    // ticks. 
    Send PSend20596 = new_Send((Optr)PSend20597, SMB_ticks, 0);
    Assign PAssign20595 = new_Assign((Optr)VAR_rticks_1_1, (Optr)PSend20596);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20599 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20600 = new_Send((Optr)VAR_lticks_1_0, SMB_first, 0);
    // first. 
    Send PSend20601 = new_Send((Optr)VAR_rticks_1_1, SMB_first, 0);
    // -. 
    Send PSend20602 = new_Send((Optr)PSend20600, SMB__minus_, 1, (Optr)PSend20601);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20603 = new_Send((Optr)PSend20599, SMB__times_, 1, (Optr)PSend20602);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20604 = new_Send((Optr)VAR_lticks_1_0, SMB_second, 0);
    // second. 
    Send PSend20605 = new_Send((Optr)VAR_rticks_1_1, SMB_second, 0);
    // -. 
    Send PSend20606 = new_Send((Optr)PSend20604, SMB__minus_, 1, (Optr)PSend20605);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20607 = new_Send((Optr)PSend20603, SMB__plus_, 1, (Optr)PSend20606);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20608 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)PSend20607);
    Array PThreadedCode20591 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign20592, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20594, (Optr)&t_send0, (Optr)PSend20593, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20595, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20598, (Optr)&t_send0, (Optr)PSend20597, (Optr)&t_send0, (Optr)PSend20596, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20599, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20600, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20601, (Optr)&t_send1, (Optr)PSend20602, (Optr)&t_send1, (Optr)PSend20603, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20604, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20605, (Optr)&t_send1, (Optr)PSend20606, (Optr)&t_send1, (Optr)PSend20607, (Optr)&t_send1, (Optr)PSend20608, (Optr)&t_method_return);
    Block PBlock20589 = new_Block_with(empty_Array, PArray20590, PThreadedCode20591, 3, PAssign20592, PAssign20595, PSend20608);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20611 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    // +. 
    Send PSend20612 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20611);
    Array PThreadedCode20610 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20611, (Optr)&t_send1, (Optr)PSend20612, (Optr)&t_block_return);
    Block PBlock20609 = new_Block_with(empty_Array, empty_Array, PThreadedCode20610, 1, PSend20612);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend20613 = new_Send((Optr)PSend20588, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20589, (Optr)PBlock20609);
    Array PThreadedCode20587 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_push1, (Optr)SMB_asDateAndTime, (Optr)&t_send1, (Optr)PSend20588, (Optr)&t_push_closure, (Optr)PBlock20589, (Optr)&t_push_closure, (Optr)PBlock20609, (Optr)&t_send2, (Optr)PSend20613, (Optr)&t_method_return);
    Method PMethod20585 = new_Method_with(PArray20586, empty_Array, empty_Array, PThreadedCode20587, 1, PSend20613);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20585, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    Symbol SMB_month = new_Symbol(L"month");
    // month. 
    Send PSend20616 = new_Send((Optr)self, SMB_month, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20617 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20616);
    Array PThreadedCode20615 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20616, (Optr)&t_send1, (Optr)PSend20617, (Optr)&t_method_return);
    Method PMethod20614 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20615, 1, PSend20617);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod20614, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20620 = new_Send((Optr)Date_classReference, SMB_starting_, 1, (Optr)self);
    Array PThreadedCode20619 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20620, (Optr)&t_method_return);
    Method PMethod20618 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20619, 1, PSend20620);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20618, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20622 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    // printOn:withLeadingSpace:. 
    Send PSend20624 = new_Send((Optr)self, SMB_printOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode20623 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend20624, (Optr)&t_method_return);
    Method PMethod20621 = new_Method_with(PArray20622, empty_Array, empty_Array, PThreadedCode20623, 1, PSend20624);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20621, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_printYMDOn_withLeadingSpace_() {
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray20626 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_year_0_2 = new_Variable_named(L"year", 0);
    Variable VAR_month_0_3 = new_Variable_named(L"month", 0);
    Variable VAR_day_0_4 = new_Variable_named(L"day", 0);
    Array PArray20627 = new_Array_with(3, (Optr)VAR_year_0_2, (Optr)VAR_month_0_3, (Optr)VAR_day_0_4);
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20630 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Assign PAssign20632 = new_Assign((Optr)VAR_year_0_2, (Optr)VAR_y_1_2);
    Assign PAssign20633 = new_Assign((Optr)VAR_month_0_3, (Optr)VAR_m_1_1);
    Assign PAssign20634 = new_Assign((Optr)VAR_day_0_4, (Optr)VAR_d_1_0);
    Array PThreadedCode20631 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign20632, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20633, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20634, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock20629 = new_Block_with(PArray20630, empty_Array, PThreadedCode20631, 3, PAssign20632, PAssign20633, PAssign20634);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20635 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20629);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20636 = new_Send((Optr)VAR_year_0_2, SMB_negative, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_2170 = new_Character(L'-');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_2170_Const = new_Constant((Optr)char_2170);
    // nextPut:. 
    Send PSend20640 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPut_, 1, (Optr)char_2170_Const);
    Array PThreadedCode20639 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2170, (Optr)&t_send1, (Optr)PSend20640, (Optr)&t_block_return);
    Block PBlock20638 = new_Block_with(empty_Array, empty_Array, PThreadedCode20639, 1, PSend20640);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend20646 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Array PThreadedCode20645 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend20646, (Optr)&t_block_return);
    Block PBlock20644 = new_Block_with(empty_Array, empty_Array, PThreadedCode20645, 1, PSend20646);
    // ifTrue:. 
    Send PSend20643 = new_Send((Optr)VAR_printLeadingSpaceToo_0_1, SMB_ifTrue_, 1, (Optr)PBlock20644);
    Array PThreadedCode20642 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20643, (Optr)PBlock20644, (Optr)&t_block_return);
    Block PBlock20641 = new_Block_with(empty_Array, empty_Array, PThreadedCode20642, 1, PSend20643);
    // ifTrue:ifFalse:. 
    Send PSend20637 = new_Send((Optr)PSend20636, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20638, (Optr)PBlock20641);
    SmallInt int_1000 = new_SmallInt(1000);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    // <. 
    Send PSend20647 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_1000_Const);
    Character char_9135 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9135_Const = new_Constant((Optr)char_9135);
    // <<. 
    Send PSend20651 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20650 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20651, (Optr)&t_block_return);
    Block PBlock20649 = new_Block_with(empty_Array, empty_Array, PThreadedCode20650, 1, PSend20651);
    // ifTrue:. 
    Send PSend20648 = new_Send((Optr)PSend20647, SMB_ifTrue_, 1, (Optr)PBlock20649);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // <. 
    Send PSend20652 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_100_Const);
    // <<. 
    Send PSend20656 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20655 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20656, (Optr)&t_block_return);
    Block PBlock20654 = new_Block_with(empty_Array, empty_Array, PThreadedCode20655, 1, PSend20656);
    // ifTrue:. 
    Send PSend20653 = new_Send((Optr)PSend20652, SMB_ifTrue_, 1, (Optr)PBlock20654);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20657 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20661 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20660 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20661, (Optr)&t_block_return);
    Block PBlock20659 = new_Block_with(empty_Array, empty_Array, PThreadedCode20660, 1, PSend20661);
    // ifTrue:. 
    Send PSend20658 = new_Send((Optr)PSend20657, SMB_ifTrue_, 1, (Optr)PBlock20659);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20662 = new_Send((Optr)VAR_year_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20663 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2170_Const);
    // <. 
    Send PSend20664 = new_Send((Optr)VAR_month_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20668 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20667 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20668, (Optr)&t_block_return);
    Block PBlock20666 = new_Block_with(empty_Array, empty_Array, PThreadedCode20667, 1, PSend20668);
    // ifTrue:. 
    Send PSend20665 = new_Send((Optr)PSend20664, SMB_ifTrue_, 1, (Optr)PBlock20666);
    // printOn:. 
    Send PSend20669 = new_Send((Optr)VAR_month_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20670 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2170_Const);
    // <. 
    Send PSend20671 = new_Send((Optr)VAR_day_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20675 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20674 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20675, (Optr)&t_block_return);
    Block PBlock20673 = new_Block_with(empty_Array, empty_Array, PThreadedCode20674, 1, PSend20675);
    // ifTrue:. 
    Send PSend20672 = new_Send((Optr)PSend20671, SMB_ifTrue_, 1, (Optr)PBlock20673);
    // printOn:. 
    Send PSend20676 = new_Send((Optr)VAR_day_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20628 = instantiate_Array_with(ThreadedCode_Class, 0, 101, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20629, (Optr)&t_send1, (Optr)PSend20635, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_send0, (Optr)PSend20636, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20637, (Optr)PBlock20638, (Optr)PBlock20641, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_send1, (Optr)PSend20647, (Optr)&t_send_ifTrue_, (Optr)PSend20648, (Optr)PBlock20649, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20652, (Optr)&t_send_ifTrue_, (Optr)PSend20653, (Optr)PBlock20654, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20657, (Optr)&t_send_ifTrue_, (Optr)PSend20658, (Optr)PBlock20659, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20662, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2170, (Optr)&t_send1, (Optr)PSend20663, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20664, (Optr)&t_send_ifTrue_, (Optr)PSend20665, (Optr)PBlock20666, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20669, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2170, (Optr)&t_send1, (Optr)PSend20670, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20671, (Optr)&t_send_ifTrue_, (Optr)PSend20672, (Optr)PBlock20673, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20676, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20625 = new_Method_with(PArray20626, PArray20627, empty_Array, PThreadedCode20628, 13, PSend20635, PSend20637, PSend20648, PSend20653, PSend20658, PSend20662, PSend20663, PSend20665, PSend20669, PSend20670, PSend20672, PSend20676, self);
    
    MethodClosure MC_SMB_printYMDOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20625, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_withLeadingSpace_, MC_SMB_printYMDOn_withLeadingSpace_);
}


static void init_SMB_dayOfWeekAbbreviation() {
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    // dayOfWeekName. 
    Send PSend20679 = new_Send((Optr)self, SMB_dayOfWeekName, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20680 = new_Send((Optr)PSend20679, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    Array PThreadedCode20678 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20679, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20680, (Optr)&t_method_return);
    Method PMethod20677 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20678, 1, PSend20680);
    
    MethodClosure MC_SMB_dayOfWeekAbbreviation = new_MethodClosure((Method)PMethod20677, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekAbbreviation, MC_SMB_dayOfWeekAbbreviation);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20683 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20684 = new_Send((Optr)PSend20683, SMB_seconds, 0);
    Array PThreadedCode20682 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20683, (Optr)&t_send0, (Optr)PSend20684, (Optr)&t_method_return);
    Method PMethod20681 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20682, 1, PSend20684);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20681, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_setJdn_seconds_offset_() {
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    Variable VAR_julDays_0_0 = new_Variable_named(L"julDays", 0);
    Variable VAR_secs_0_1 = new_Variable_named(L"secs", 0);
    Variable VAR_anOffset_0_2 = new_Variable_named(L"anOffset", 0);
    Array PArray20686 = new_Array_with(3, (Optr)VAR_julDays_0_0, (Optr)VAR_secs_0_1, (Optr)VAR_anOffset_0_2);
    Assign PAssign20688 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)VAR_julDays_0_0);
    Assign PAssign20689 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)VAR_secs_0_1);
    Assign PAssign20690 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_anOffset_0_2);
    Array PThreadedCode20687 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign20688, (Optr)&t_push_variable, (Optr)VAR_julDays_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20689, (Optr)&t_push_variable, (Optr)VAR_secs_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20690, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20685 = new_Method_with(PArray20686, empty_Array, empty_Array, PThreadedCode20687, 4, PAssign20688, PAssign20689, PAssign20690, self);
    
    MethodClosure MC_SMB_setJdn_seconds_offset_ = new_MethodClosure((Method)PMethod20685, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_setJdn_seconds_offset_, MC_SMB_setJdn_seconds_offset_);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20693 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20694 = new_Send((Optr)PSend20693, SMB_hours, 0);
    Array PThreadedCode20692 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20693, (Optr)&t_send0, (Optr)PSend20694, (Optr)&t_method_return);
    Method PMethod20691 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20692, 1, PSend20694);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20691, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20697 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20696 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20697, (Optr)&t_method_return);
    Method PMethod20695 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20696, 1, PSend20697);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20695, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20700 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20701 = new_Send((Optr)PSend20700, SMB_minutes, 0);
    Array PThreadedCode20699 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20700, (Optr)&t_send0, (Optr)PSend20701, (Optr)&t_method_return);
    Method PMethod20698 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20699, 1, PSend20701);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20698, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minute, MC_SMB_minute);
}


static void init_SMB_dayOfWeek() {
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20704 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // rem:. 
    Send PSend20705 = new_Send((Optr)PSend20704, SMB_rem_, 1, (Optr)int_7_Const);
    // +. 
    Send PSend20706 = new_Send((Optr)PSend20705, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode20703 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20704, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20705, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20706, (Optr)&t_method_return);
    Method PMethod20702 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20703, 1, PSend20706);
    
    MethodClosure MC_SMB_dayOfWeek = new_MethodClosure((Method)PMethod20702, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeek, MC_SMB_dayOfWeek);
}


static void init_SMB_hasEqualTicks_() {
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20708 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    // julianDayNumber. 
    Send PSend20710 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_julianDayNumber, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20711 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__equals_, 1, (Optr)PSend20710);
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    // secondsSinceMidnight. 
    Send PSend20714 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_secondsSinceMidnight, 0);
    // =. 
    Send PSend20715 = new_Send((Optr)slot_Chronology_DateAndTime_seconds, SMB__equals_, 1, (Optr)PSend20714);
    Array PThreadedCode20713 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20714, (Optr)&t_send1, (Optr)PSend20715, (Optr)&t_block_return);
    Block PBlock20712 = new_Block_with(empty_Array, empty_Array, PThreadedCode20713, 1, PSend20715);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend20716 = new_Send((Optr)PSend20711, SMB_and_, 1, (Optr)PBlock20712);
    Array PThreadedCode20709 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20710, (Optr)&t_send1, (Optr)PSend20711, (Optr)&t_push_closure, (Optr)PBlock20712, (Optr)&t_send1, (Optr)PSend20716, (Optr)&t_method_return);
    Method PMethod20707 = new_Method_with(PArray20708, empty_Array, empty_Array, PThreadedCode20709, 1, PSend20716);
    
    MethodClosure MC_SMB_hasEqualTicks_ = new_MethodClosure((Method)PMethod20707, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hasEqualTicks_, MC_SMB_hasEqualTicks_);
}


static void init_SMB_month() {
    Symbol SMB_month = new_Symbol(L"month");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20720 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20721 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_method_return);
    Block PBlock20719 = new_Block_with(PArray20720, empty_Array, PThreadedCode20721, 1, VAR_m_1_1);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20722 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20719);
    Array PThreadedCode20718 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20719, (Optr)&t_send1, (Optr)PSend20722, (Optr)&t_method_return);
    Method PMethod20717 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20718, 1, PSend20722);
    
    MethodClosure MC_SMB_month = new_MethodClosure((Method)PMethod20717, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_month, MC_SMB_month);
}


static void init_SMB_asLocal() {
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20725 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20726 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend20727 = new_Send((Optr)PSend20726, SMB_localOffset, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20728 = new_Send((Optr)PSend20725, SMB__equals_, 1, (Optr)PSend20727);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20731 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock20730 = new_Block_with(empty_Array, empty_Array, PThreadedCode20731, 1, self);
    // class. 
    Send PSend20734 = new_Send((Optr)self, SMB_class, 0);
    // localOffset. 
    Send PSend20735 = new_Send((Optr)PSend20734, SMB_localOffset, 0);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    // utcOffset:. 
    Send PSend20736 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)PSend20735);
    Array PThreadedCode20733 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20734, (Optr)&t_send0, (Optr)PSend20735, (Optr)&t_send1, (Optr)PSend20736, (Optr)&t_block_return);
    Block PBlock20732 = new_Block_with(empty_Array, empty_Array, PThreadedCode20733, 1, PSend20736);
    // ifTrue:ifFalse:. 
    Send PSend20729 = new_Send((Optr)PSend20728, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20730, (Optr)PBlock20732);
    Array PThreadedCode20724 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20725, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20726, (Optr)&t_send0, (Optr)PSend20727, (Optr)&t_send1, (Optr)PSend20728, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20729, (Optr)PBlock20730, (Optr)PBlock20732, (Optr)&t_method_return);
    Method PMethod20723 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20724, 1, PSend20729);
    
    MethodClosure MC_SMB_asLocal = new_MethodClosure((Method)PMethod20723, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asLocal, MC_SMB_asLocal);
}


static void init_SMB_printOn_withLeadingSpace_() {
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray20738 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray20739 = new_Array_with(3, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend20741 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Character char_20742 = new_Character(L'T');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_20742_Const = new_Constant((Optr)char_20742);
    // <<. 
    Send PSend20743 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_20742_Const);
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    // printHMSOn:. 
    Send PSend20744 = new_Send((Optr)self, SMB_printHMSOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20745 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_positive, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_20749 = new_Character(L'+');
    Array PThreadedCode20748 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_20749, (Optr)&t_block_return);
    Constant char_20749_Const = new_Constant((Optr)char_20749);
    Block PBlock20747 = new_Block_with(empty_Array, empty_Array, PThreadedCode20748, 1, char_20749_Const);
    Character char_2170 = new_Character(L'-');
    Array PThreadedCode20751 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_2170, (Optr)&t_block_return);
    Constant char_2170_Const = new_Constant((Optr)char_2170);
    Block PBlock20750 = new_Block_with(empty_Array, empty_Array, PThreadedCode20751, 1, char_2170_Const);
    // ifTrue:ifFalse:. 
    Send PSend20746 = new_Send((Optr)PSend20745, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20747, (Optr)PBlock20750);
    // <<. 
    Send PSend20752 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20746);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20755 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20754 = new_Send((Optr)PSend20755, SMB_abs, 0);
    Assign PAssign20753 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20754);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20756 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9135 = new_Character(L'0');
    Constant char_9135_Const = new_Constant((Optr)char_9135);
    // <<. 
    Send PSend20760 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20759 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20760, (Optr)&t_block_return);
    Block PBlock20758 = new_Block_with(empty_Array, empty_Array, PThreadedCode20759, 1, PSend20760);
    // ifTrue:. 
    Send PSend20757 = new_Send((Optr)PSend20756, SMB_ifTrue_, 1, (Optr)PBlock20758);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20761 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20762 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20765 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_minutes, 0);
    // abs. 
    Send PSend20764 = new_Send((Optr)PSend20765, SMB_abs, 0);
    Assign PAssign20763 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20764);
    // <. 
    Send PSend20766 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20770 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20769 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20770, (Optr)&t_block_return);
    Block PBlock20768 = new_Block_with(empty_Array, empty_Array, PThreadedCode20769, 1, PSend20770);
    // ifTrue:. 
    Send PSend20767 = new_Send((Optr)PSend20766, SMB_ifTrue_, 1, (Optr)PBlock20768);
    // printOn:. 
    Send PSend20771 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20772 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20773 = new_Send((Optr)PSend20772, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // seconds. 
    Send PSend20780 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    // abs. 
    Send PSend20779 = new_Send((Optr)PSend20780, SMB_abs, 0);
    Symbol SMB_truncated = new_Symbol(L"truncated");
    // truncated. 
    Send PSend20778 = new_Send((Optr)PSend20779, SMB_truncated, 0);
    Assign PAssign20777 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20778);
    // <<. 
    Send PSend20781 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // printOn:. 
    Send PSend20782 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20776 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20777, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20780, (Optr)&t_send0, (Optr)PSend20779, (Optr)&t_send0, (Optr)PSend20778, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20781, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20782, (Optr)&t_block_return);
    Block PBlock20775 = new_Block_with(empty_Array, empty_Array, PThreadedCode20776, 3, PAssign20777, PSend20781, PSend20782);
    // ifFalse:. 
    Send PSend20774 = new_Send((Optr)PSend20773, SMB_ifFalse_, 1, (Optr)PBlock20775);
    Array PThreadedCode20740 = instantiate_Array_with(ThreadedCode_Class, 0, 107, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send2, (Optr)PSend20741, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_20742, (Optr)&t_send1, (Optr)PSend20743, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20744, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20745, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20746, (Optr)PBlock20747, (Optr)PBlock20750, (Optr)&t_send1, (Optr)PSend20752, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20753, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20755, (Optr)&t_send0, (Optr)PSend20754, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20756, (Optr)&t_send_ifTrue_, (Optr)PSend20757, (Optr)PBlock20758, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20761, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20762, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20763, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20765, (Optr)&t_send0, (Optr)PSend20764, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20766, (Optr)&t_send_ifTrue_, (Optr)PSend20767, (Optr)PBlock20768, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20771, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20772, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20773, (Optr)&t_send_ifFalse_, (Optr)PSend20774, (Optr)PBlock20775, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20737 = new_Method_with(PArray20738, PArray20739, empty_Array, PThreadedCode20740, 13, PSend20741, PSend20743, PSend20744, PSend20752, PAssign20753, PSend20757, PSend20761, PSend20762, PAssign20763, PSend20767, PSend20771, PSend20774, self);
    
    MethodClosure MC_SMB_printOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20737, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_withLeadingSpace_, MC_SMB_printOn_withLeadingSpace_);
}


static void init_SMB_asUTC() {
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    Symbol SMB_isZero = new_Symbol(L"isZero");
    // isZero. 
    Send PSend20785 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_isZero, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20788 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock20787 = new_Block_with(empty_Array, empty_Array, PThreadedCode20788, 1, self);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // utcOffset:. 
    Send PSend20791 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)int_0_Const);
    Array PThreadedCode20790 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20791, (Optr)&t_block_return);
    Block PBlock20789 = new_Block_with(empty_Array, empty_Array, PThreadedCode20790, 1, PSend20791);
    // ifTrue:ifFalse:. 
    Send PSend20786 = new_Send((Optr)PSend20785, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20787, (Optr)PBlock20789);
    Array PThreadedCode20784 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20785, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20786, (Optr)PBlock20787, (Optr)PBlock20789, (Optr)&t_method_return);
    Method PMethod20783 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20784, 1, PSend20786);
    
    MethodClosure MC_SMB_asUTC = new_MethodClosure((Method)PMethod20783, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asUTC, MC_SMB_asUTC);
}


static void init_SMB_dayOfWeekName() {
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    // dayOfWeek. 
    Send PSend20794 = new_Send((Optr)self, SMB_dayOfWeek, 0);
    Symbol SMB_nameOfDay_ = new_Symbol(L"nameOfDay:");
    // nameOfDay:. 
    Send PSend20795 = new_Send((Optr)PWeek_classReference, SMB_nameOfDay_, 1, (Optr)PSend20794);
    Array PThreadedCode20793 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PWeek_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20794, (Optr)&t_send1, (Optr)PSend20795, (Optr)&t_method_return);
    Method PMethod20792 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20793, 1, PSend20795);
    
    MethodClosure MC_SMB_dayOfWeekName = new_MethodClosure((Method)PMethod20792, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekName, MC_SMB_dayOfWeekName);
}


static void init_SMB_utcOffset_() {
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray20797 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR_equiv_0_1 = new_Variable_named(L"equiv", 0);
    Array PArray20798 = new_Array_with(1, (Optr)VAR_equiv_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20803 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20804 = new_Send((Optr)self, SMB_offset, 0);
    // -. 
    Send PSend20802 = new_Send((Optr)PSend20803, SMB__minus_, 1, (Optr)PSend20804);
    // +. 
    Send PSend20801 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20802);
    Assign PAssign20800 = new_Assign((Optr)VAR_equiv_0_1, (Optr)PSend20801);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20806 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20808 = new_Send((Optr)VAR_equiv_0_1, SMB_ticks, 0);
    // asDuration. 
    Send PSend20809 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20810 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20808, (Optr)PSend20809);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20811 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20807 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send0, (Optr)PSend20808, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20809, (Optr)&t_send2, (Optr)PSend20810, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20811, (Optr)&t_method_return);
    Block PBlock20805 = new_Block_with(PArray20806, empty_Array, PThreadedCode20807, 2, PSend20810, PSend20811);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20812 = new_Send((Optr)PBlock20805, SMB_value_, 1, (Optr)VAR_equiv_0_1);
    Array PThreadedCode20799 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20800, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20803, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20804, (Optr)&t_send1, (Optr)PSend20802, (Optr)&t_send1, (Optr)PSend20801, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20805, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send1, (Optr)PSend20812, (Optr)&t_method_return);
    Method PMethod20796 = new_Method_with(PArray20797, PArray20798, empty_Array, PThreadedCode20799, 2, PAssign20800, PSend20812);
    
    MethodClosure MC_SMB_utcOffset_ = new_MethodClosure((Method)PMethod20796, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_utcOffset_, MC_SMB_utcOffset_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray20814 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Variable VAR_comparandAsDateAndTime_0_1 = new_Variable_named(L"comparandAsDateAndTime", 0);
    Array PArray20815 = new_Array_with(1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20818 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20820 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20824 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode20823 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend20824, (Optr)&t_block_return);
    Block PBlock20822 = new_Block_with(empty_Array, empty_Array, PThreadedCode20823, 1, PSend20824);
    // ifTrue:. 
    Send PSend20821 = new_Send((Optr)PSend20820, SMB_ifTrue_, 1, (Optr)PBlock20822);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20826 = new_Send((Optr)VAR_comparand_0_0, SMB_asDateAndTime, 0);
    Assign PAssign20825 = new_Assign((Optr)VAR_comparandAsDateAndTime_0_1, (Optr)PSend20826);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20827 = new_Send((Optr)self, SMB_offset, 0);
    // offset. 
    Send PSend20828 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_offset, 0);
    // =. 
    Send PSend20829 = new_Send((Optr)PSend20827, SMB__equals_, 1, (Optr)PSend20828);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    // hasEqualTicks:. 
    Send PSend20833 = new_Send((Optr)self, SMB_hasEqualTicks_, 1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Array PThreadedCode20832 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send1, (Optr)PSend20833, (Optr)&t_block_return);
    Block PBlock20831 = new_Block_with(empty_Array, empty_Array, PThreadedCode20832, 1, PSend20833);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend20836 = new_Send((Optr)self, SMB_asUTC, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20837 = new_Send((Optr)PSend20836, SMB_ticks, 0);
    // asUTC. 
    Send PSend20838 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_asUTC, 0);
    // ticks. 
    Send PSend20839 = new_Send((Optr)PSend20838, SMB_ticks, 0);
    // =. 
    Send PSend20840 = new_Send((Optr)PSend20837, SMB__equals_, 1, (Optr)PSend20839);
    Array PThreadedCode20835 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20836, (Optr)&t_send0, (Optr)PSend20837, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend20838, (Optr)&t_send0, (Optr)PSend20839, (Optr)&t_send1, (Optr)PSend20840, (Optr)&t_block_return);
    Block PBlock20834 = new_Block_with(empty_Array, empty_Array, PThreadedCode20835, 1, PSend20840);
    // ifTrue:ifFalse:. 
    Send PSend20830 = new_Send((Optr)PSend20829, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20831, (Optr)PBlock20834);
    Array PThreadedCode20819 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20820, (Optr)&t_send_ifTrue_, (Optr)PSend20821, (Optr)PBlock20822, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20825, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20826, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20827, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend20828, (Optr)&t_send1, (Optr)PSend20829, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20830, (Optr)PBlock20831, (Optr)PBlock20834, (Optr)&t_method_return);
    Block PBlock20817 = new_Block_with(PArray20818, empty_Array, PThreadedCode20819, 3, PSend20821, PAssign20825, PSend20830);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20841 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20817);
    Array PThreadedCode20816 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20817, (Optr)&t_send1, (Optr)PSend20841, (Optr)&t_method_return);
    Method PMethod20813 = new_Method_with(PArray20814, PArray20815, empty_Array, PThreadedCode20816, 1, PSend20841);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20813, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_secondsSinceMidnight() {
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    Array PThreadedCode20843 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_method_return);
    Method PMethod20842 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20843, 1, slot_Chronology_DateAndTime_seconds);
    
    MethodClosure MC_SMB_secondsSinceMidnight = new_MethodClosure((Method)PMethod20842, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_secondsSinceMidnight, MC_SMB_secondsSinceMidnight);
}


static void init_SMB_normalize_ticks_base_() {
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    Variable VAR_i_0_0 = new_Variable_named(L"i", 0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Variable VAR_base_0_2 = new_Variable_named(L"base", 0);
    Array PArray20845 = new_Array_with(3, (Optr)VAR_i_0_0, (Optr)VAR_ticks_0_1, (Optr)VAR_base_0_2);
    Variable VAR_tick_0_3 = new_Variable_named(L"tick", 0);
    Variable VAR_quo_0_4 = new_Variable_named(L"quo", 0);
    Variable VAR_rem_0_5 = new_Variable_named(L"rem", 0);
    Array PArray20846 = new_Array_with(3, (Optr)VAR_tick_0_3, (Optr)VAR_quo_0_4, (Optr)VAR_rem_0_5);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20849 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)VAR_i_0_0);
    Assign PAssign20848 = new_Assign((Optr)VAR_tick_0_3, (Optr)PSend20849);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20851 = new_Send((Optr)VAR_tick_0_3, SMB_quo_, 1, (Optr)VAR_base_0_2);
    Assign PAssign20850 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend20851);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20853 = new_Send((Optr)VAR_tick_0_3, SMB_rem_, 1, (Optr)VAR_base_0_2);
    Assign PAssign20852 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend20853);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20854 = new_Send((Optr)VAR_rem_0_5, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend20859 = new_Send((Optr)VAR_quo_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign20858 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend20859);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20861 = new_Send((Optr)VAR_base_0_2, SMB__plus_, 1, (Optr)VAR_rem_0_5);
    Assign PAssign20860 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend20861);
    Array PThreadedCode20857 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign20858, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20859, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20860, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send1, (Optr)PSend20861, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock20856 = new_Block_with(empty_Array, empty_Array, PThreadedCode20857, 2, PAssign20858, PAssign20860);
    // ifTrue:. 
    Send PSend20855 = new_Send((Optr)PSend20854, SMB_ifTrue_, 1, (Optr)PBlock20856);
    // -. 
    Send PSend20862 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // -. 
    Send PSend20863 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend20864 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)PSend20863);
    // +. 
    Send PSend20865 = new_Send((Optr)PSend20864, SMB__plus_, 1, (Optr)VAR_quo_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20866 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)PSend20862, (Optr)PSend20865);
    // at:put:. 
    Send PSend20867 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)VAR_i_0_0, (Optr)VAR_rem_0_5);
    Array PThreadedCode20847 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push1, (Optr)PAssign20848, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_send1, (Optr)PSend20849, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20850, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend20851, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20852, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend20853, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send0, (Optr)PSend20854, (Optr)&t_send_ifTrue_, (Optr)PSend20855, (Optr)PBlock20856, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20862, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20863, (Optr)&t_send1, (Optr)PSend20864, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_send1, (Optr)PSend20865, (Optr)&t_send2, (Optr)PSend20866, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send2, (Optr)PSend20867, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20844 = new_Method_with(PArray20845, PArray20846, empty_Array, PThreadedCode20847, 7, PAssign20848, PAssign20850, PAssign20852, PSend20855, PSend20866, PSend20867, self);
    
    MethodClosure MC_SMB_normalize_ticks_base_ = new_MethodClosure((Method)PMethod20844, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_normalize_ticks_base_, MC_SMB_normalize_ticks_base_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray20869 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20872 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20874 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20875 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20876 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20874, (Optr)PSend20875);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20877 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20873 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20874, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20875, (Optr)&t_send2, (Optr)PSend20876, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20877, (Optr)&t_method_return);
    Block PBlock20871 = new_Block_with(PArray20872, empty_Array, PThreadedCode20873, 2, PSend20876, PSend20877);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20878 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20879 = new_Send((Optr)PSend20878, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20880 = new_Send((Optr)PBlock20871, SMB_value_, 1, (Optr)PSend20879);
    Array PThreadedCode20870 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock20871, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20878, (Optr)&t_send0, (Optr)PSend20879, (Optr)&t_send1, (Optr)PSend20880, (Optr)&t_method_return);
    Method PMethod20868 = new_Method_with(PArray20869, empty_Array, empty_Array, PThreadedCode20870, 1, PSend20880);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod20868, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Array PThreadedCode20882 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20881 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20882, 1, self);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20881, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_midnight() {
    /*
    midnight
// 
// 	^ self now midnight
// 
    */
    Symbol SMB_midnight = new_Symbol(L"midnight");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20885 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20886 = new_Send((Optr)PSend20885, SMB_basicNew, 0);
    // class. 
    Send PSend20887 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend20888 = new_Send((Optr)PSend20887, SMB_localOffset, 0);
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // setJdn:seconds:offset:. 
    Send PSend20889 = new_Send((Optr)PSend20886, SMB_setJdn_seconds_offset_, 3, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)int_0_Const, (Optr)PSend20888);
    Array PThreadedCode20884 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20885, (Optr)&t_send0, (Optr)PSend20886, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20887, (Optr)&t_send0, (Optr)PSend20888, (Optr)&t_send3, (Optr)PSend20889, (Optr)&t_method_return);
    Method PMethod20883 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20884, 1, PSend20889);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod20883, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_midnight, MC_SMB_midnight);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20891 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_l_0_1 = new_Variable_named(L"l", 0);
    Variable VAR_n_0_2 = new_Variable_named(L"n", 0);
    Variable VAR_i_0_3 = new_Variable_named(L"i", 0);
    Variable VAR_j_0_4 = new_Variable_named(L"j", 0);
    Variable VAR_dd_0_5 = new_Variable_named(L"dd", 0);
    Variable VAR_mm_0_6 = new_Variable_named(L"mm", 0);
    Variable VAR_yyyy_0_7 = new_Variable_named(L"yyyy", 0);
    Array PArray20892 = new_Array_with(7, (Optr)VAR_l_0_1, (Optr)VAR_n_0_2, (Optr)VAR_i_0_3, (Optr)VAR_j_0_4, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_68569 = new_SmallInt(68569);
    Constant int_68569_Const = new_Constant((Optr)int_68569);
    // +. 
    Send PSend20895 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_68569_Const);
    Assign PAssign20894 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend20895);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // *. 
    Send PSend20898 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_4_Const);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_146097 = new_SmallInt(146097);
    Constant int_146097_Const = new_Constant((Optr)int_146097);
    // //. 
    Send PSend20897 = new_Send((Optr)PSend20898, SMB__quotient_, 1, (Optr)int_146097_Const);
    Assign PAssign20896 = new_Assign((Optr)VAR_n_0_2, (Optr)PSend20897);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // *. 
    Send PSend20903 = new_Send((Optr)VAR_n_0_2, SMB__times_, 1, (Optr)int_146097_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // +. 
    Send PSend20902 = new_Send((Optr)PSend20903, SMB__plus_, 1, (Optr)int_3_Const);
    // //. 
    Send PSend20901 = new_Send((Optr)PSend20902, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend20900 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend20901);
    Assign PAssign20899 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend20900);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20907 = new_Send((Optr)VAR_l_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_4000 = new_SmallInt(4000);
    Constant int_4000_Const = new_Constant((Optr)int_4000);
    // *. 
    Send PSend20906 = new_Send((Optr)PSend20907, SMB__times_, 1, (Optr)int_4000_Const);
    SmallInt int_1461001 = new_SmallInt(1461001);
    Constant int_1461001_Const = new_Constant((Optr)int_1461001);
    // //. 
    Send PSend20905 = new_Send((Optr)PSend20906, SMB__quotient_, 1, (Optr)int_1461001_Const);
    Assign PAssign20904 = new_Assign((Optr)VAR_i_0_3, (Optr)PSend20905);
    SmallInt int_1461 = new_SmallInt(1461);
    Constant int_1461_Const = new_Constant((Optr)int_1461);
    // *. 
    Send PSend20912 = new_Send((Optr)VAR_i_0_3, SMB__times_, 1, (Optr)int_1461_Const);
    // //. 
    Send PSend20911 = new_Send((Optr)PSend20912, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend20910 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend20911);
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // +. 
    Send PSend20909 = new_Send((Optr)PSend20910, SMB__plus_, 1, (Optr)int_31_Const);
    Assign PAssign20908 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend20909);
    SmallInt int_80 = new_SmallInt(80);
    Constant int_80_Const = new_Constant((Optr)int_80);
    // *. 
    Send PSend20915 = new_Send((Optr)int_80_Const, SMB__times_, 1, (Optr)VAR_l_0_1);
    SmallInt int_2447 = new_SmallInt(2447);
    Constant int_2447_Const = new_Constant((Optr)int_2447);
    // //. 
    Send PSend20914 = new_Send((Optr)PSend20915, SMB__quotient_, 1, (Optr)int_2447_Const);
    Assign PAssign20913 = new_Assign((Optr)VAR_j_0_4, (Optr)PSend20914);
    // *. 
    Send PSend20919 = new_Send((Optr)VAR_j_0_4, SMB__times_, 1, (Optr)int_2447_Const);
    // //. 
    Send PSend20918 = new_Send((Optr)PSend20919, SMB__quotient_, 1, (Optr)int_80_Const);
    // -. 
    Send PSend20917 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend20918);
    Assign PAssign20916 = new_Assign((Optr)VAR_dd_0_5, (Optr)PSend20917);
    SmallInt int_11 = new_SmallInt(11);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // //. 
    Send PSend20921 = new_Send((Optr)VAR_j_0_4, SMB__quotient_, 1, (Optr)int_11_Const);
    Assign PAssign20920 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend20921);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend20924 = new_Send((Optr)VAR_j_0_4, SMB__plus_, 1, (Optr)int_2_Const);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // *. 
    Send PSend20925 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_12_Const);
    // -. 
    Send PSend20923 = new_Send((Optr)PSend20924, SMB__minus_, 1, (Optr)PSend20925);
    Assign PAssign20922 = new_Assign((Optr)VAR_mm_0_6, (Optr)PSend20923);
    SmallInt int_49 = new_SmallInt(49);
    Constant int_49_Const = new_Constant((Optr)int_49);
    // -. 
    Send PSend20930 = new_Send((Optr)VAR_n_0_2, SMB__minus_, 1, (Optr)int_49_Const);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // *. 
    Send PSend20929 = new_Send((Optr)PSend20930, SMB__times_, 1, (Optr)int_100_Const);
    // +. 
    Send PSend20928 = new_Send((Optr)PSend20929, SMB__plus_, 1, (Optr)VAR_i_0_3);
    // +. 
    Send PSend20927 = new_Send((Optr)PSend20928, SMB__plus_, 1, (Optr)VAR_l_0_1);
    Assign PAssign20926 = new_Assign((Optr)VAR_yyyy_0_7, (Optr)PSend20927);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend20931 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_value_, 3, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Array PThreadedCode20893 = instantiate_Array_with(ThreadedCode_Class, 0, 177, (Optr)&t_push1, (Optr)PAssign20894, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push1, (Optr)int_68569, (Optr)&t_send1, (Optr)PSend20895, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20896, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20898, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend20897, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20899, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend20903, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20902, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20901, (Optr)&t_send1, (Optr)PSend20900, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20904, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20907, (Optr)&t_push1, (Optr)int_4000, (Optr)&t_send1, (Optr)PSend20906, (Optr)&t_push1, (Optr)int_1461001, (Optr)&t_send1, (Optr)PSend20905, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20908, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_push1, (Optr)int_1461, (Optr)&t_send1, (Optr)PSend20912, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20911, (Optr)&t_send1, (Optr)PSend20910, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend20909, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20913, (Optr)&t_push1, (Optr)int_80, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend20915, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend20914, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20916, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend20919, (Optr)&t_push1, (Optr)int_80, (Optr)&t_send1, (Optr)PSend20918, (Optr)&t_send1, (Optr)PSend20917, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20920, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_11, (Optr)&t_send1, (Optr)PSend20921, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20922, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20924, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20925, (Optr)&t_send1, (Optr)PSend20923, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20926, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_49, (Optr)&t_send1, (Optr)PSend20930, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20929, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_send1, (Optr)PSend20928, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend20927, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_dd_0_5, (Optr)&t_push_variable, (Optr)VAR_mm_0_6, (Optr)&t_push_variable, (Optr)VAR_yyyy_0_7, (Optr)&t_send3, (Optr)PSend20931, (Optr)&t_method_return);
    Method PMethod20890 = new_Method_with(PArray20891, PArray20892, empty_Array, PThreadedCode20893, 11, PAssign20894, PAssign20896, PAssign20899, PAssign20904, PAssign20908, PAssign20913, PAssign20916, PAssign20920, PAssign20922, PAssign20926, PSend20931);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod20890, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printYMDOn_() {
    Symbol SMB_printYMDOn_ = new_Symbol(L"printYMDOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20933 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend20935 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode20934 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend20935, (Optr)&t_method_return);
    Method PMethod20932 = new_Method_with(PArray20933, empty_Array, empty_Array, PThreadedCode20934, 1, PSend20935);
    
    MethodClosure MC_SMB_printYMDOn_ = new_MethodClosure((Method)PMethod20932, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_, MC_SMB_printYMDOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20938 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode20937 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send2, (Optr)PSend20938, (Optr)&t_method_return);
    Method PMethod20936 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20937, 1, PSend20938);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20936, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20942 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20943 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_method_return);
    Block PBlock20941 = new_Block_with(PArray20942, empty_Array, PThreadedCode20943, 1, VAR_y_1_2);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20944 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20941);
    Array PThreadedCode20940 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20941, (Optr)&t_send1, (Optr)PSend20944, (Optr)&t_method_return);
    Method PMethod20939 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20940, 1, PSend20944);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod20939, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_printHMSOn_() {
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20946 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_h_0_1 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_2 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_3 = new_Variable_named(L"s", 0);
    Array PArray20947 = new_Array_with(3, (Optr)VAR_h_0_1, (Optr)VAR_m_0_2, (Optr)VAR_s_0_3);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20951 = new_Send((Optr)self, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20950 = new_Send((Optr)PSend20951, SMB_abs, 0);
    Assign PAssign20949 = new_Assign((Optr)VAR_h_0_1, (Optr)PSend20950);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20954 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend20953 = new_Send((Optr)PSend20954, SMB_abs, 0);
    Assign PAssign20952 = new_Assign((Optr)VAR_m_0_2, (Optr)PSend20953);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20957 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend20956 = new_Send((Optr)PSend20957, SMB_abs, 0);
    Assign PAssign20955 = new_Assign((Optr)VAR_s_0_3, (Optr)PSend20956);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20958 = new_Send((Optr)VAR_h_0_1, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9135 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9135_Const = new_Constant((Optr)char_9135);
    // <<. 
    Send PSend20962 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20961 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20962, (Optr)&t_block_return);
    Block PBlock20960 = new_Block_with(empty_Array, empty_Array, PThreadedCode20961, 1, PSend20962);
    // ifTrue:. 
    Send PSend20959 = new_Send((Optr)PSend20958, SMB_ifTrue_, 1, (Optr)PBlock20960);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20963 = new_Send((Optr)VAR_h_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20964 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20965 = new_Send((Optr)VAR_m_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20969 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20968 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20969, (Optr)&t_block_return);
    Block PBlock20967 = new_Block_with(empty_Array, empty_Array, PThreadedCode20968, 1, PSend20969);
    // ifTrue:. 
    Send PSend20966 = new_Send((Optr)PSend20965, SMB_ifTrue_, 1, (Optr)PBlock20967);
    // printOn:. 
    Send PSend20970 = new_Send((Optr)VAR_m_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20971 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20972 = new_Send((Optr)VAR_s_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20976 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20975 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20976, (Optr)&t_block_return);
    Block PBlock20974 = new_Block_with(empty_Array, empty_Array, PThreadedCode20975, 1, PSend20976);
    // ifTrue:. 
    Send PSend20973 = new_Send((Optr)PSend20972, SMB_ifTrue_, 1, (Optr)PBlock20974);
    // printOn:. 
    Send PSend20977 = new_Send((Optr)VAR_s_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20948 = instantiate_Array_with(ThreadedCode_Class, 0, 93, (Optr)&t_push1, (Optr)PAssign20949, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20951, (Optr)&t_send0, (Optr)PSend20950, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20952, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20954, (Optr)&t_send0, (Optr)PSend20953, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20955, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20957, (Optr)&t_send0, (Optr)PSend20956, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20958, (Optr)&t_send_ifTrue_, (Optr)PSend20959, (Optr)PBlock20960, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20964, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20965, (Optr)&t_send_ifTrue_, (Optr)PSend20966, (Optr)PBlock20967, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20970, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20971, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20972, (Optr)&t_send_ifTrue_, (Optr)PSend20973, (Optr)PBlock20974, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20977, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20945 = new_Method_with(PArray20946, PArray20947, empty_Array, PThreadedCode20948, 12, PAssign20949, PAssign20952, PAssign20955, PSend20959, PSend20963, PSend20964, PSend20966, PSend20970, PSend20971, PSend20973, PSend20977, self);
    
    MethodClosure MC_SMB_printHMSOn_ = new_MethodClosure((Method)PMethod20945, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printHMSOn_, MC_SMB_printHMSOn_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray20979 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20982 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20984 = new_Send((Optr)VAR_aJulianDayNumber_0_0, SMB_days, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20985 = new_Send((Optr)PSend20984, SMB_ticks, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend20986 = new_Send((Optr)self, SMB_localOffset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20987 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20985, (Optr)PSend20986);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20988 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20983 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send0, (Optr)PSend20984, (Optr)&t_send0, (Optr)PSend20985, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20986, (Optr)&t_send2, (Optr)PSend20987, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20988, (Optr)&t_method_return);
    Block PBlock20981 = new_Block_with(PArray20982, empty_Array, PThreadedCode20983, 2, PSend20987, PSend20988);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20989 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20990 = new_Send((Optr)PBlock20981, SMB_value_, 1, (Optr)PSend20989);
    Array PThreadedCode20980 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock20981, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20989, (Optr)&t_send1, (Optr)PSend20990, (Optr)&t_method_return);
    Method PMethod20978 = new_Method_with(PArray20979, empty_Array, empty_Array, PThreadedCode20980, 1, PSend20990);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod20978, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_localTimeZone() {
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend20996 = new_Send((Optr)PTimeZone_classReference, SMB_default, 0);
    Assign PAssign20995 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)PSend20996);
    Array PThreadedCode20994 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign20995, (Optr)&t_push_class_reference, (Optr)PTimeZone_classReference, (Optr)&t_send0, (Optr)PSend20996, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock20993 = new_Block_with(empty_Array, empty_Array, PThreadedCode20994, 1, PAssign20995);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend20997 = new_Send((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, SMB_ifNil_, 1, (Optr)PBlock20993);
    Array PThreadedCode20992 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)&t_push_closure, (Optr)PBlock20993, (Optr)&t_send1, (Optr)PSend20997, (Optr)&t_method_return);
    Method PMethod20991 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20992, 1, PSend20997);
    
    MethodClosure MC_SMB_localTimeZone = new_MethodClosure((Method)PMethod20991, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone, MC_SMB_localTimeZone);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend21000 = new_Send((Optr)self, SMB_midnight, 0);
    Array PThreadedCode20999 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21000, (Optr)&t_method_return);
    Method PMethod20998 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20999, 1, PSend21000);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod20998, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_epoch() {
    Symbol SMB_epoch = new_Symbol(L"epoch");
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21003 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend21004 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend21003);
    Array PThreadedCode21002 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21003, (Optr)&t_send1, (Optr)PSend21004, (Optr)&t_method_return);
    Method PMethod21001 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21002, 1, PSend21004);
    
    MethodClosure MC_SMB_epoch = new_MethodClosure((Method)PMethod21001, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_epoch, MC_SMB_epoch);
}


static void init_class_SMB_localTimeZone_() {
    Symbol SMB_localTimeZone_ = new_Symbol(L"localTimeZone:");
    Variable VAR_aTimeZone_0_0 = new_Variable_named(L"aTimeZone", 0);
    Array PArray21006 = new_Array_with(1, (Optr)VAR_aTimeZone_0_0);
    Assign PAssign21008 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)VAR_aTimeZone_0_0);
    Array PThreadedCode21007 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21008, (Optr)&t_push_variable, (Optr)VAR_aTimeZone_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21005 = new_Method_with(PArray21006, empty_Array, empty_Array, PThreadedCode21007, 2, PAssign21008, self);
    
    MethodClosure MC_SMB_localTimeZone_ = new_MethodClosure((Method)PMethod21005, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone_, MC_SMB_localTimeZone_);
}


static void init_class_SMB_localOffset() {
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21011 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21012 = new_Send((Optr)PSend21011, SMB_offset, 0);
    Array PThreadedCode21010 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21011, (Optr)&t_send0, (Optr)PSend21012, (Optr)&t_method_return);
    Method PMethod21009 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21010, 1, PSend21012);
    
    MethodClosure MC_SMB_localOffset = new_MethodClosure((Method)PMethod21009, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localOffset, MC_SMB_localOffset);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21015 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21016 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21017 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21018 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend21016, (Optr)PSend21017);
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21019 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21020 = new_Send((Optr)PSend21019, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21021 = new_Send((Optr)PSend21015, SMB_ticks_offset_, 2, (Optr)PSend21018, (Optr)PSend21020);
    Array PThreadedCode21014 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21015, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21016, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21017, (Optr)&t_send2, (Optr)PSend21018, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21019, (Optr)&t_send0, (Optr)PSend21020, (Optr)&t_send2, (Optr)PSend21021, (Optr)&t_method_return);
    Method PMethod21013 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21014, 1, PSend21021);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod21013, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_midnight() {
    Symbol SMB_midnight = new_Symbol(L"midnight");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend21024 = new_Send((Optr)self, SMB_now, 0);
    // midnight. 
    Send PSend21025 = new_Send((Optr)PSend21024, SMB_midnight, 0);
    Array PThreadedCode21023 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21024, (Optr)&t_send0, (Optr)PSend21025, (Optr)&t_method_return);
    Method PMethod21022 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21023, 1, PSend21025);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21022, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_midnight, MC_SMB_midnight);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21028 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Array PThreadedCode21027 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21028, (Optr)&t_method_return);
    Method PMethod21026 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21027, 1, PSend21028);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod21026, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_totalSeconds, MC_SMB_totalSeconds);
}

void init_Chronology_DateAndTime_layout() {
    slot_Chronology_DateAndTime_Class_class_localTimeZone = (Optr)new_Slot(5, L"localTimeZone");
    layout_Chronology_DateAndTime_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Chronology_DateAndTime_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Chronology_DateAndTime_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Chronology_DateAndTime_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Chronology_DateAndTime_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Chronology_DateAndTime_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Chronology_DateAndTime_Class_class)->values[5] = slot_Chronology_DateAndTime_Class_class_localTimeZone; // localTimeZone 
    
    Symbol  SMB_DateAndTime = new_Symbol(L"DateAndTime");
    slot_Chronology_DateAndTime_jdn = (Optr)new_Slot(0, L"jdn");
    slot_Chronology_DateAndTime_seconds = (Optr)new_Slot(1, L"seconds");
    slot_Chronology_DateAndTime_offset = (Optr)new_Slot(2, L"offset");
    layout_Chronology_DateAndTime = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Chronology_DateAndTime)->values[0] = slot_Chronology_DateAndTime_jdn; // jdn 
    ((Array)layout_Chronology_DateAndTime)->values[1] = slot_Chronology_DateAndTime_seconds; // seconds 
    ((Array)layout_Chronology_DateAndTime)->values[2] = slot_Chronology_DateAndTime_offset; // offset 
    Chronology_DateAndTime_Class = (Class)new_Class(Object_Class, layout_Chronology_DateAndTime_Class_class);
    Class_set_superclass(Chronology_DateAndTime_Class, Object_Class);
    Chronology_DateAndTime_Class->layout = layout_Chronology_DateAndTime;
    HEADER(Chronology_DateAndTime_Class)->layout = layout_Chronology_DateAndTime_Class_class;
    Chronology_DateAndTime_Class->name = SMB_DateAndTime;
    
}

void init_Chronology_DateAndTime_methods() {
    init_SMB_minutes();
    init_SMB_asSeconds();
    init_SMB_seconds();
    init_SMB_hour();
    init_SMB_offset();
    init_SMB_asDuration();
    init_SMB_julianDayNumber();
    init_SMB_dayOfMonth();
    init_SMB_ticks_offset_();
    init_SMB__plus_();
    init_SMB__minus_();
    init_SMB_monthName();
    init_SMB_asDate();
    init_SMB_printOn_();
    init_SMB_printYMDOn_withLeadingSpace_();
    init_SMB_dayOfWeekAbbreviation();
    init_SMB_second();
    init_SMB_setJdn_seconds_offset_();
    init_SMB_hour24();
    init_SMB_hours();
    init_SMB_minute();
    init_SMB_dayOfWeek();
    init_SMB_hasEqualTicks_();
    init_SMB_month();
    init_SMB_asLocal();
    init_SMB_printOn_withLeadingSpace_();
    init_SMB_asUTC();
    init_SMB_dayOfWeekName();
    init_SMB_utcOffset_();
    init_SMB__equals_();
    init_SMB_secondsSinceMidnight();
    init_SMB_normalize_ticks_base_();
    init_SMB_offset_();
    init_SMB_asDateAndTime();
    init_SMB_midnight();
    init_SMB_dayMonthYearDo_();
    init_SMB_printYMDOn_();
    init_SMB_ticks();
    init_SMB_year();
    init_SMB_printHMSOn_();
    init_class_SMB_julianDayNumber_();
    init_class_SMB_localTimeZone();
    init_class_SMB_today();
    init_class_SMB_epoch();
    init_class_SMB_localTimeZone_();
    init_class_SMB_localOffset();
    init_class_SMB_now();
    init_class_SMB_midnight();
    init_class_SMB_totalSeconds();
    
}