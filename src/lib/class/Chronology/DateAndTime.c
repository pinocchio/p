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
    Send PSend20554 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20553 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20554, (Optr)&t_method_return);
    Method PMethod20552 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20553, 1, PSend20554);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20552, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20557 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_epoch = new_Symbol(L"epoch");
    // epoch. 
    Send PSend20558 = new_Send((Optr)PSend20557, SMB_epoch, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20559 = new_Send((Optr)self, SMB__minus_, 1, (Optr)PSend20558);
    // asSeconds. 
    Send PSend20560 = new_Send((Optr)PSend20559, SMB_asSeconds, 0);
    Array PThreadedCode20556 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20557, (Optr)&t_send0, (Optr)PSend20558, (Optr)&t_send1, (Optr)PSend20559, (Optr)&t_send0, (Optr)PSend20560, (Optr)&t_method_return);
    Method PMethod20555 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20556, 1, PSend20560);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20555, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20563 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20562 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20563, (Optr)&t_method_return);
    Method PMethod20561 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20562, 1, PSend20563);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20561, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20566 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20565 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20566, (Optr)&t_method_return);
    Method PMethod20564 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20565, 1, PSend20566);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20564, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode20568 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_method_return);
    Method PMethod20567 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20568, 1, slot_Chronology_DateAndTime_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod20567, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20571 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode20570 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20571, (Optr)&t_method_return);
    Method PMethod20569 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20570, 1, PSend20571);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20569, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_julianDayNumber() {
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    Array PThreadedCode20573 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_method_return);
    Method PMethod20572 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20573, 1, slot_Chronology_DateAndTime_jdn);
    
    MethodClosure MC_SMB_julianDayNumber = new_MethodClosure((Method)PMethod20572, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_julianDayNumber, MC_SMB_julianDayNumber);
}


static void init_SMB_dayOfMonth() {
    Symbol SMB_dayOfMonth = new_Symbol(L"dayOfMonth");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20577 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20578 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_method_return);
    Block PBlock20576 = new_Block_with(PArray20577, empty_Array, PThreadedCode20578, 1, VAR_d_1_0);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20579 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20576);
    Array PThreadedCode20575 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20576, (Optr)&t_send1, (Optr)PSend20579, (Optr)&t_method_return);
    Method PMethod20574 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20575, 1, PSend20579);
    
    MethodClosure MC_SMB_dayOfMonth = new_MethodClosure((Method)PMethod20574, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfMonth, MC_SMB_dayOfMonth);
}


static void init_SMB_ticks_offset_() {
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    Variable VAR_ticks_0_0 = new_Variable_named(L"ticks", 0);
    Variable VAR_utcOffset_0_1 = new_Variable_named(L"utcOffset", 0);
    Array PArray20581 = new_Array_with(2, (Optr)VAR_ticks_0_0, (Optr)VAR_utcOffset_0_1);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20583 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // normalize:ticks:base:. 
    Send PSend20584 = new_Send((Optr)self, SMB_normalize_ticks_base_, 3, (Optr)int_2_Const, (Optr)VAR_ticks_0_0, (Optr)PSend20583);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend20586 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign20585 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)PSend20586);
    // at:. 
    Send PSend20588 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20587 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)PSend20588);
    Assign PAssign20589 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_utcOffset_0_1);
    Array PThreadedCode20582 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20583, (Optr)&t_send3, (Optr)PSend20584, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20585, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20586, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20587, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20588, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20589, (Optr)&t_push_variable, (Optr)VAR_utcOffset_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20580 = new_Method_with(PArray20581, empty_Array, empty_Array, PThreadedCode20582, 5, PSend20584, PAssign20585, PAssign20587, PAssign20589, self);
    
    MethodClosure MC_SMB_ticks_offset_ = new_MethodClosure((Method)PMethod20580, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks_offset_, MC_SMB_ticks_offset_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20591 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Array PArray20592 = new_Array_with(1, (Optr)VAR_ticks_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20595 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign20594 = new_Assign((Optr)VAR_ticks_0_1, (Optr)PSend20595);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20596 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20597 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // ticks. 
    Send PSend20598 = new_Send((Optr)PSend20597, SMB_ticks, 0);
    Variable VAR_ticks1_1_0 = new_Variable_named(L"ticks1", 1);
    Variable VAR_dticks_1_1 = new_Variable_named(L"dticks", 1);
    Array PArray20600 = new_Array_with(2, (Optr)VAR_ticks1_1_0, (Optr)VAR_dticks_1_1);
    // +. 
    Send PSend20602 = new_Send((Optr)VAR_ticks1_1_0, SMB__plus_, 1, (Optr)VAR_dticks_1_1);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend20603 = new_Send((Optr)VAR_ticks_0_1, SMB_addLast_, 1, (Optr)PSend20602);
    Array PThreadedCode20601 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_ticks1_1_0, (Optr)&t_push_variable, (Optr)VAR_dticks_1_1, (Optr)&t_send1, (Optr)PSend20602, (Optr)&t_send1, (Optr)PSend20603, (Optr)&t_method_return);
    Block PBlock20599 = new_Block_with(PArray20600, empty_Array, PThreadedCode20601, 1, PSend20603);
    Symbol SMB_with_do_ = new_Symbol(L"with:do:");
    // with:do:. 
    Send PSend20604 = new_Send((Optr)PSend20596, SMB_with_do_, 2, (Optr)PSend20598, (Optr)PBlock20599);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20606 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20608 = new_Send((Optr)VAR_ticks_0_1, SMB_asArray, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20609 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20610 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20608, (Optr)PSend20609);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20611 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20607 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_send0, (Optr)PSend20608, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20609, (Optr)&t_send2, (Optr)PSend20610, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20611, (Optr)&t_method_return);
    Block PBlock20605 = new_Block_with(PArray20606, empty_Array, PThreadedCode20607, 2, PSend20610, PSend20611);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20612 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20613 = new_Send((Optr)PSend20612, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20614 = new_Send((Optr)PBlock20605, SMB_value_, 1, (Optr)PSend20613);
    Array PThreadedCode20593 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20594, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20595, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20596, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20597, (Optr)&t_send0, (Optr)PSend20598, (Optr)&t_push_closure, (Optr)PBlock20599, (Optr)&t_send2, (Optr)PSend20604, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20605, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20612, (Optr)&t_send0, (Optr)PSend20613, (Optr)&t_send1, (Optr)PSend20614, (Optr)&t_method_return);
    Method PMethod20590 = new_Method_with(PArray20591, PArray20592, empty_Array, PThreadedCode20593, 3, PAssign20594, PSend20604, PSend20614);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20590, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20616 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol  SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_asDateAndTime_Const = new_Constant((Optr)SMB_asDateAndTime);
    // respondsTo:. 
    Send PSend20618 = new_Send((Optr)VAR_operand_0_0, SMB_respondsTo_, 1, (Optr)SMB_asDateAndTime_Const);
    Variable VAR_lticks_1_0 = new_Variable_named(L"lticks", 1);
    Variable VAR_rticks_1_1 = new_Variable_named(L"rticks", 1);
    Array PArray20620 = new_Array_with(2, (Optr)VAR_lticks_1_0, (Optr)VAR_rticks_1_1);
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    // asLocal. 
    Send PSend20624 = new_Send((Optr)self, SMB_asLocal, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20623 = new_Send((Optr)PSend20624, SMB_ticks, 0);
    Assign PAssign20622 = new_Assign((Optr)VAR_lticks_1_0, (Optr)PSend20623);
    // asDateAndTime. 
    Send PSend20628 = new_Send((Optr)VAR_operand_0_0, SMB_asDateAndTime, 0);
    // asLocal. 
    Send PSend20627 = new_Send((Optr)PSend20628, SMB_asLocal, 0);
    // ticks. 
    Send PSend20626 = new_Send((Optr)PSend20627, SMB_ticks, 0);
    Assign PAssign20625 = new_Assign((Optr)VAR_rticks_1_1, (Optr)PSend20626);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20629 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20630 = new_Send((Optr)VAR_lticks_1_0, SMB_first, 0);
    // first. 
    Send PSend20631 = new_Send((Optr)VAR_rticks_1_1, SMB_first, 0);
    // -. 
    Send PSend20632 = new_Send((Optr)PSend20630, SMB__minus_, 1, (Optr)PSend20631);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20633 = new_Send((Optr)PSend20629, SMB__times_, 1, (Optr)PSend20632);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20634 = new_Send((Optr)VAR_lticks_1_0, SMB_second, 0);
    // second. 
    Send PSend20635 = new_Send((Optr)VAR_rticks_1_1, SMB_second, 0);
    // -. 
    Send PSend20636 = new_Send((Optr)PSend20634, SMB__minus_, 1, (Optr)PSend20635);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20637 = new_Send((Optr)PSend20633, SMB__plus_, 1, (Optr)PSend20636);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20638 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)PSend20637);
    Array PThreadedCode20621 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign20622, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20624, (Optr)&t_send0, (Optr)PSend20623, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20625, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20628, (Optr)&t_send0, (Optr)PSend20627, (Optr)&t_send0, (Optr)PSend20626, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20629, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20630, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20631, (Optr)&t_send1, (Optr)PSend20632, (Optr)&t_send1, (Optr)PSend20633, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20634, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20635, (Optr)&t_send1, (Optr)PSend20636, (Optr)&t_send1, (Optr)PSend20637, (Optr)&t_send1, (Optr)PSend20638, (Optr)&t_method_return);
    Block PBlock20619 = new_Block_with(empty_Array, PArray20620, PThreadedCode20621, 3, PAssign20622, PAssign20625, PSend20638);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20641 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    // +. 
    Send PSend20642 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20641);
    Array PThreadedCode20640 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20641, (Optr)&t_send1, (Optr)PSend20642, (Optr)&t_block_return);
    Block PBlock20639 = new_Block_with(empty_Array, empty_Array, PThreadedCode20640, 1, PSend20642);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend20643 = new_Send((Optr)PSend20618, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20619, (Optr)PBlock20639);
    Array PThreadedCode20617 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_push1, (Optr)SMB_asDateAndTime, (Optr)&t_send1, (Optr)PSend20618, (Optr)&t_push_closure, (Optr)PBlock20619, (Optr)&t_push_closure, (Optr)PBlock20639, (Optr)&t_send2, (Optr)PSend20643, (Optr)&t_method_return);
    Method PMethod20615 = new_Method_with(PArray20616, empty_Array, empty_Array, PThreadedCode20617, 1, PSend20643);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20615, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    Symbol SMB_month = new_Symbol(L"month");
    // month. 
    Send PSend20646 = new_Send((Optr)self, SMB_month, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20647 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20646);
    Array PThreadedCode20645 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20646, (Optr)&t_send1, (Optr)PSend20647, (Optr)&t_method_return);
    Method PMethod20644 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20645, 1, PSend20647);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod20644, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20650 = new_Send((Optr)Date_classReference, SMB_starting_, 1, (Optr)self);
    Array PThreadedCode20649 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20650, (Optr)&t_method_return);
    Method PMethod20648 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20649, 1, PSend20650);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20648, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_dayOfWeekAbbreviation() {
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    // dayOfWeekName. 
    Send PSend20653 = new_Send((Optr)self, SMB_dayOfWeekName, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20654 = new_Send((Optr)PSend20653, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    Array PThreadedCode20652 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20653, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20654, (Optr)&t_method_return);
    Method PMethod20651 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20652, 1, PSend20654);
    
    MethodClosure MC_SMB_dayOfWeekAbbreviation = new_MethodClosure((Method)PMethod20651, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekAbbreviation, MC_SMB_dayOfWeekAbbreviation);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20656 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    // printOn:withLeadingSpace:. 
    Send PSend20658 = new_Send((Optr)self, SMB_printOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode20657 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend20658, (Optr)&t_method_return);
    Method PMethod20655 = new_Method_with(PArray20656, empty_Array, empty_Array, PThreadedCode20657, 1, PSend20658);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20655, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_printYMDOn_withLeadingSpace_() {
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray20660 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_year_0_2 = new_Variable_named(L"year", 0);
    Variable VAR_month_0_3 = new_Variable_named(L"month", 0);
    Variable VAR_day_0_4 = new_Variable_named(L"day", 0);
    Array PArray20661 = new_Array_with(3, (Optr)VAR_year_0_2, (Optr)VAR_month_0_3, (Optr)VAR_day_0_4);
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20664 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Assign PAssign20666 = new_Assign((Optr)VAR_year_0_2, (Optr)VAR_y_1_2);
    Assign PAssign20667 = new_Assign((Optr)VAR_month_0_3, (Optr)VAR_m_1_1);
    Assign PAssign20668 = new_Assign((Optr)VAR_day_0_4, (Optr)VAR_d_1_0);
    Array PThreadedCode20665 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign20666, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20667, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20668, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock20663 = new_Block_with(PArray20664, empty_Array, PThreadedCode20665, 3, PAssign20666, PAssign20667, PAssign20668);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20669 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20663);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20670 = new_Send((Optr)VAR_year_0_2, SMB_negative, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_2173 = new_Character(L'-');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_2173_Const = new_Constant((Optr)char_2173);
    // nextPut:. 
    Send PSend20674 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPut_, 1, (Optr)char_2173_Const);
    Array PThreadedCode20673 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend20674, (Optr)&t_block_return);
    Block PBlock20672 = new_Block_with(empty_Array, empty_Array, PThreadedCode20673, 1, PSend20674);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend20680 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Array PThreadedCode20679 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend20680, (Optr)&t_block_return);
    Block PBlock20678 = new_Block_with(empty_Array, empty_Array, PThreadedCode20679, 1, PSend20680);
    // ifTrue:. 
    Send PSend20677 = new_Send((Optr)VAR_printLeadingSpaceToo_0_1, SMB_ifTrue_, 1, (Optr)PBlock20678);
    Array PThreadedCode20676 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20677, (Optr)PBlock20678, (Optr)&t_block_return);
    Block PBlock20675 = new_Block_with(empty_Array, empty_Array, PThreadedCode20676, 1, PSend20677);
    // ifTrue:ifFalse:. 
    Send PSend20671 = new_Send((Optr)PSend20670, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20672, (Optr)PBlock20675);
    SmallInt int_1000 = new_SmallInt(1000);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    // <. 
    Send PSend20681 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_1000_Const);
    Character char_9159 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9159_Const = new_Constant((Optr)char_9159);
    // <<. 
    Send PSend20685 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20684 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20685, (Optr)&t_block_return);
    Block PBlock20683 = new_Block_with(empty_Array, empty_Array, PThreadedCode20684, 1, PSend20685);
    // ifTrue:. 
    Send PSend20682 = new_Send((Optr)PSend20681, SMB_ifTrue_, 1, (Optr)PBlock20683);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // <. 
    Send PSend20686 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_100_Const);
    // <<. 
    Send PSend20690 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20689 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20690, (Optr)&t_block_return);
    Block PBlock20688 = new_Block_with(empty_Array, empty_Array, PThreadedCode20689, 1, PSend20690);
    // ifTrue:. 
    Send PSend20687 = new_Send((Optr)PSend20686, SMB_ifTrue_, 1, (Optr)PBlock20688);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20691 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20695 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20694 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20695, (Optr)&t_block_return);
    Block PBlock20693 = new_Block_with(empty_Array, empty_Array, PThreadedCode20694, 1, PSend20695);
    // ifTrue:. 
    Send PSend20692 = new_Send((Optr)PSend20691, SMB_ifTrue_, 1, (Optr)PBlock20693);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20696 = new_Send((Optr)VAR_year_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20697 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2173_Const);
    // <. 
    Send PSend20698 = new_Send((Optr)VAR_month_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20702 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20701 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20702, (Optr)&t_block_return);
    Block PBlock20700 = new_Block_with(empty_Array, empty_Array, PThreadedCode20701, 1, PSend20702);
    // ifTrue:. 
    Send PSend20699 = new_Send((Optr)PSend20698, SMB_ifTrue_, 1, (Optr)PBlock20700);
    // printOn:. 
    Send PSend20703 = new_Send((Optr)VAR_month_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20704 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2173_Const);
    // <. 
    Send PSend20705 = new_Send((Optr)VAR_day_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20709 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20708 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20709, (Optr)&t_block_return);
    Block PBlock20707 = new_Block_with(empty_Array, empty_Array, PThreadedCode20708, 1, PSend20709);
    // ifTrue:. 
    Send PSend20706 = new_Send((Optr)PSend20705, SMB_ifTrue_, 1, (Optr)PBlock20707);
    // printOn:. 
    Send PSend20710 = new_Send((Optr)VAR_day_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20662 = instantiate_Array_with(ThreadedCode_Class, 0, 101, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20663, (Optr)&t_send1, (Optr)PSend20669, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_send0, (Optr)PSend20670, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20671, (Optr)PBlock20672, (Optr)PBlock20675, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_send1, (Optr)PSend20681, (Optr)&t_send_ifTrue_, (Optr)PSend20682, (Optr)PBlock20683, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20686, (Optr)&t_send_ifTrue_, (Optr)PSend20687, (Optr)PBlock20688, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20691, (Optr)&t_send_ifTrue_, (Optr)PSend20692, (Optr)PBlock20693, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20696, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend20697, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20698, (Optr)&t_send_ifTrue_, (Optr)PSend20699, (Optr)PBlock20700, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20703, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend20704, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20705, (Optr)&t_send_ifTrue_, (Optr)PSend20706, (Optr)PBlock20707, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20710, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20659 = new_Method_with(PArray20660, PArray20661, empty_Array, PThreadedCode20662, 13, PSend20669, PSend20671, PSend20682, PSend20687, PSend20692, PSend20696, PSend20697, PSend20699, PSend20703, PSend20704, PSend20706, PSend20710, self);
    
    MethodClosure MC_SMB_printYMDOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20659, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_withLeadingSpace_, MC_SMB_printYMDOn_withLeadingSpace_);
}


static void init_SMB_dayOfWeek() {
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20713 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // rem:. 
    Send PSend20714 = new_Send((Optr)PSend20713, SMB_rem_, 1, (Optr)int_7_Const);
    // +. 
    Send PSend20715 = new_Send((Optr)PSend20714, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode20712 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20713, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20714, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20715, (Optr)&t_method_return);
    Method PMethod20711 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20712, 1, PSend20715);
    
    MethodClosure MC_SMB_dayOfWeek = new_MethodClosure((Method)PMethod20711, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeek, MC_SMB_dayOfWeek);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20718 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20719 = new_Send((Optr)PSend20718, SMB_seconds, 0);
    Array PThreadedCode20717 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20718, (Optr)&t_send0, (Optr)PSend20719, (Optr)&t_method_return);
    Method PMethod20716 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20717, 1, PSend20719);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20716, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20722 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20723 = new_Send((Optr)PSend20722, SMB_hours, 0);
    Array PThreadedCode20721 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20722, (Optr)&t_send0, (Optr)PSend20723, (Optr)&t_method_return);
    Method PMethod20720 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20721, 1, PSend20723);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20720, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20726 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20725 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20726, (Optr)&t_method_return);
    Method PMethod20724 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20725, 1, PSend20726);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20724, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20729 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20730 = new_Send((Optr)PSend20729, SMB_minutes, 0);
    Array PThreadedCode20728 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20729, (Optr)&t_send0, (Optr)PSend20730, (Optr)&t_method_return);
    Method PMethod20727 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20728, 1, PSend20730);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20727, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minute, MC_SMB_minute);
}


static void init_SMB_hasEqualTicks_() {
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20732 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    // julianDayNumber. 
    Send PSend20734 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_julianDayNumber, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20735 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__equals_, 1, (Optr)PSend20734);
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    // secondsSinceMidnight. 
    Send PSend20738 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_secondsSinceMidnight, 0);
    // =. 
    Send PSend20739 = new_Send((Optr)slot_Chronology_DateAndTime_seconds, SMB__equals_, 1, (Optr)PSend20738);
    Array PThreadedCode20737 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20738, (Optr)&t_send1, (Optr)PSend20739, (Optr)&t_block_return);
    Block PBlock20736 = new_Block_with(empty_Array, empty_Array, PThreadedCode20737, 1, PSend20739);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend20740 = new_Send((Optr)PSend20735, SMB_and_, 1, (Optr)PBlock20736);
    Array PThreadedCode20733 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20734, (Optr)&t_send1, (Optr)PSend20735, (Optr)&t_push_closure, (Optr)PBlock20736, (Optr)&t_send1, (Optr)PSend20740, (Optr)&t_method_return);
    Method PMethod20731 = new_Method_with(PArray20732, empty_Array, empty_Array, PThreadedCode20733, 1, PSend20740);
    
    MethodClosure MC_SMB_hasEqualTicks_ = new_MethodClosure((Method)PMethod20731, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hasEqualTicks_, MC_SMB_hasEqualTicks_);
}


static void init_SMB_month() {
    Symbol SMB_month = new_Symbol(L"month");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20744 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20745 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_method_return);
    Block PBlock20743 = new_Block_with(PArray20744, empty_Array, PThreadedCode20745, 1, VAR_m_1_1);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20746 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20743);
    Array PThreadedCode20742 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20743, (Optr)&t_send1, (Optr)PSend20746, (Optr)&t_method_return);
    Method PMethod20741 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20742, 1, PSend20746);
    
    MethodClosure MC_SMB_month = new_MethodClosure((Method)PMethod20741, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_month, MC_SMB_month);
}


static void init_SMB_asLocal() {
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20749 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20750 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend20751 = new_Send((Optr)PSend20750, SMB_localOffset, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20752 = new_Send((Optr)PSend20749, SMB__equals_, 1, (Optr)PSend20751);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20755 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock20754 = new_Block_with(empty_Array, empty_Array, PThreadedCode20755, 1, self);
    // class. 
    Send PSend20758 = new_Send((Optr)self, SMB_class, 0);
    // localOffset. 
    Send PSend20759 = new_Send((Optr)PSend20758, SMB_localOffset, 0);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    // utcOffset:. 
    Send PSend20760 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)PSend20759);
    Array PThreadedCode20757 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20758, (Optr)&t_send0, (Optr)PSend20759, (Optr)&t_send1, (Optr)PSend20760, (Optr)&t_block_return);
    Block PBlock20756 = new_Block_with(empty_Array, empty_Array, PThreadedCode20757, 1, PSend20760);
    // ifTrue:ifFalse:. 
    Send PSend20753 = new_Send((Optr)PSend20752, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20754, (Optr)PBlock20756);
    Array PThreadedCode20748 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20749, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20750, (Optr)&t_send0, (Optr)PSend20751, (Optr)&t_send1, (Optr)PSend20752, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20753, (Optr)PBlock20754, (Optr)PBlock20756, (Optr)&t_method_return);
    Method PMethod20747 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20748, 1, PSend20753);
    
    MethodClosure MC_SMB_asLocal = new_MethodClosure((Method)PMethod20747, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asLocal, MC_SMB_asLocal);
}


static void init_SMB_printOn_withLeadingSpace_() {
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray20762 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray20763 = new_Array_with(3, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend20765 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Character char_20766 = new_Character(L'T');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_20766_Const = new_Constant((Optr)char_20766);
    // <<. 
    Send PSend20767 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_20766_Const);
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    // printHMSOn:. 
    Send PSend20768 = new_Send((Optr)self, SMB_printHMSOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20769 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_positive, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_20773 = new_Character(L'+');
    Array PThreadedCode20772 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_20773, (Optr)&t_block_return);
    Constant char_20773_Const = new_Constant((Optr)char_20773);
    Block PBlock20771 = new_Block_with(empty_Array, empty_Array, PThreadedCode20772, 1, char_20773_Const);
    Character char_2173 = new_Character(L'-');
    Array PThreadedCode20775 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_block_return);
    Constant char_2173_Const = new_Constant((Optr)char_2173);
    Block PBlock20774 = new_Block_with(empty_Array, empty_Array, PThreadedCode20775, 1, char_2173_Const);
    // ifTrue:ifFalse:. 
    Send PSend20770 = new_Send((Optr)PSend20769, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20771, (Optr)PBlock20774);
    // <<. 
    Send PSend20776 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20770);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20779 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20778 = new_Send((Optr)PSend20779, SMB_abs, 0);
    Assign PAssign20777 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20778);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20780 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9159 = new_Character(L'0');
    Constant char_9159_Const = new_Constant((Optr)char_9159);
    // <<. 
    Send PSend20784 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20783 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20784, (Optr)&t_block_return);
    Block PBlock20782 = new_Block_with(empty_Array, empty_Array, PThreadedCode20783, 1, PSend20784);
    // ifTrue:. 
    Send PSend20781 = new_Send((Optr)PSend20780, SMB_ifTrue_, 1, (Optr)PBlock20782);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20785 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20786 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20789 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_minutes, 0);
    // abs. 
    Send PSend20788 = new_Send((Optr)PSend20789, SMB_abs, 0);
    Assign PAssign20787 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20788);
    // <. 
    Send PSend20790 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20794 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20793 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20794, (Optr)&t_block_return);
    Block PBlock20792 = new_Block_with(empty_Array, empty_Array, PThreadedCode20793, 1, PSend20794);
    // ifTrue:. 
    Send PSend20791 = new_Send((Optr)PSend20790, SMB_ifTrue_, 1, (Optr)PBlock20792);
    // printOn:. 
    Send PSend20795 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20796 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20797 = new_Send((Optr)PSend20796, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // seconds. 
    Send PSend20804 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    // abs. 
    Send PSend20803 = new_Send((Optr)PSend20804, SMB_abs, 0);
    Symbol SMB_truncated = new_Symbol(L"truncated");
    // truncated. 
    Send PSend20802 = new_Send((Optr)PSend20803, SMB_truncated, 0);
    Assign PAssign20801 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20802);
    // <<. 
    Send PSend20805 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // printOn:. 
    Send PSend20806 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20800 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20801, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20804, (Optr)&t_send0, (Optr)PSend20803, (Optr)&t_send0, (Optr)PSend20802, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20805, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20806, (Optr)&t_block_return);
    Block PBlock20799 = new_Block_with(empty_Array, empty_Array, PThreadedCode20800, 3, PAssign20801, PSend20805, PSend20806);
    // ifFalse:. 
    Send PSend20798 = new_Send((Optr)PSend20797, SMB_ifFalse_, 1, (Optr)PBlock20799);
    Array PThreadedCode20764 = instantiate_Array_with(ThreadedCode_Class, 0, 107, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send2, (Optr)PSend20765, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_20766, (Optr)&t_send1, (Optr)PSend20767, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20768, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20769, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20770, (Optr)PBlock20771, (Optr)PBlock20774, (Optr)&t_send1, (Optr)PSend20776, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20777, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20779, (Optr)&t_send0, (Optr)PSend20778, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20780, (Optr)&t_send_ifTrue_, (Optr)PSend20781, (Optr)PBlock20782, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20785, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20786, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20787, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20789, (Optr)&t_send0, (Optr)PSend20788, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20790, (Optr)&t_send_ifTrue_, (Optr)PSend20791, (Optr)PBlock20792, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20795, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20796, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20797, (Optr)&t_send_ifFalse_, (Optr)PSend20798, (Optr)PBlock20799, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20761 = new_Method_with(PArray20762, PArray20763, empty_Array, PThreadedCode20764, 13, PSend20765, PSend20767, PSend20768, PSend20776, PAssign20777, PSend20781, PSend20785, PSend20786, PAssign20787, PSend20791, PSend20795, PSend20798, self);
    
    MethodClosure MC_SMB_printOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20761, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_withLeadingSpace_, MC_SMB_printOn_withLeadingSpace_);
}


static void init_SMB_setJdn_seconds_offset_() {
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    Variable VAR_julDays_0_0 = new_Variable_named(L"julDays", 0);
    Variable VAR_secs_0_1 = new_Variable_named(L"secs", 0);
    Variable VAR_anOffset_0_2 = new_Variable_named(L"anOffset", 0);
    Array PArray20808 = new_Array_with(3, (Optr)VAR_julDays_0_0, (Optr)VAR_secs_0_1, (Optr)VAR_anOffset_0_2);
    Assign PAssign20810 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)VAR_julDays_0_0);
    Assign PAssign20811 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)VAR_secs_0_1);
    Assign PAssign20812 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_anOffset_0_2);
    Array PThreadedCode20809 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign20810, (Optr)&t_push_variable, (Optr)VAR_julDays_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20811, (Optr)&t_push_variable, (Optr)VAR_secs_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20812, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20807 = new_Method_with(PArray20808, empty_Array, empty_Array, PThreadedCode20809, 4, PAssign20810, PAssign20811, PAssign20812, self);
    
    MethodClosure MC_SMB_setJdn_seconds_offset_ = new_MethodClosure((Method)PMethod20807, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_setJdn_seconds_offset_, MC_SMB_setJdn_seconds_offset_);
}


static void init_SMB_asUTC() {
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    Symbol SMB_isZero = new_Symbol(L"isZero");
    // isZero. 
    Send PSend20815 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_isZero, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20818 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock20817 = new_Block_with(empty_Array, empty_Array, PThreadedCode20818, 1, self);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // utcOffset:. 
    Send PSend20821 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)int_0_Const);
    Array PThreadedCode20820 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20821, (Optr)&t_block_return);
    Block PBlock20819 = new_Block_with(empty_Array, empty_Array, PThreadedCode20820, 1, PSend20821);
    // ifTrue:ifFalse:. 
    Send PSend20816 = new_Send((Optr)PSend20815, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20817, (Optr)PBlock20819);
    Array PThreadedCode20814 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20815, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20816, (Optr)PBlock20817, (Optr)PBlock20819, (Optr)&t_method_return);
    Method PMethod20813 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20814, 1, PSend20816);
    
    MethodClosure MC_SMB_asUTC = new_MethodClosure((Method)PMethod20813, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asUTC, MC_SMB_asUTC);
}


static void init_SMB_dayOfWeekName() {
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    // dayOfWeek. 
    Send PSend20824 = new_Send((Optr)self, SMB_dayOfWeek, 0);
    Symbol SMB_nameOfDay_ = new_Symbol(L"nameOfDay:");
    // nameOfDay:. 
    Send PSend20825 = new_Send((Optr)PWeek_classReference, SMB_nameOfDay_, 1, (Optr)PSend20824);
    Array PThreadedCode20823 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PWeek_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20824, (Optr)&t_send1, (Optr)PSend20825, (Optr)&t_method_return);
    Method PMethod20822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20823, 1, PSend20825);
    
    MethodClosure MC_SMB_dayOfWeekName = new_MethodClosure((Method)PMethod20822, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekName, MC_SMB_dayOfWeekName);
}


static void init_SMB_utcOffset_() {
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray20827 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR_equiv_0_1 = new_Variable_named(L"equiv", 0);
    Array PArray20828 = new_Array_with(1, (Optr)VAR_equiv_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20833 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20834 = new_Send((Optr)self, SMB_offset, 0);
    // -. 
    Send PSend20832 = new_Send((Optr)PSend20833, SMB__minus_, 1, (Optr)PSend20834);
    // +. 
    Send PSend20831 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20832);
    Assign PAssign20830 = new_Assign((Optr)VAR_equiv_0_1, (Optr)PSend20831);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20836 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20838 = new_Send((Optr)VAR_equiv_0_1, SMB_ticks, 0);
    // asDuration. 
    Send PSend20839 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20840 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20838, (Optr)PSend20839);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20841 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20837 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send0, (Optr)PSend20838, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20839, (Optr)&t_send2, (Optr)PSend20840, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20841, (Optr)&t_method_return);
    Block PBlock20835 = new_Block_with(PArray20836, empty_Array, PThreadedCode20837, 2, PSend20840, PSend20841);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20842 = new_Send((Optr)PBlock20835, SMB_value_, 1, (Optr)VAR_equiv_0_1);
    Array PThreadedCode20829 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20830, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20833, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20834, (Optr)&t_send1, (Optr)PSend20832, (Optr)&t_send1, (Optr)PSend20831, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20835, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send1, (Optr)PSend20842, (Optr)&t_method_return);
    Method PMethod20826 = new_Method_with(PArray20827, PArray20828, empty_Array, PThreadedCode20829, 2, PAssign20830, PSend20842);
    
    MethodClosure MC_SMB_utcOffset_ = new_MethodClosure((Method)PMethod20826, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_utcOffset_, MC_SMB_utcOffset_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray20844 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Variable VAR_comparandAsDateAndTime_0_1 = new_Variable_named(L"comparandAsDateAndTime", 0);
    Array PArray20845 = new_Array_with(1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20848 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20850 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20854 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode20853 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend20854, (Optr)&t_block_return);
    Block PBlock20852 = new_Block_with(empty_Array, empty_Array, PThreadedCode20853, 1, PSend20854);
    // ifTrue:. 
    Send PSend20851 = new_Send((Optr)PSend20850, SMB_ifTrue_, 1, (Optr)PBlock20852);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20856 = new_Send((Optr)VAR_comparand_0_0, SMB_asDateAndTime, 0);
    Assign PAssign20855 = new_Assign((Optr)VAR_comparandAsDateAndTime_0_1, (Optr)PSend20856);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20857 = new_Send((Optr)self, SMB_offset, 0);
    // offset. 
    Send PSend20858 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_offset, 0);
    // =. 
    Send PSend20859 = new_Send((Optr)PSend20857, SMB__equals_, 1, (Optr)PSend20858);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    // hasEqualTicks:. 
    Send PSend20863 = new_Send((Optr)self, SMB_hasEqualTicks_, 1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Array PThreadedCode20862 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send1, (Optr)PSend20863, (Optr)&t_block_return);
    Block PBlock20861 = new_Block_with(empty_Array, empty_Array, PThreadedCode20862, 1, PSend20863);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend20866 = new_Send((Optr)self, SMB_asUTC, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20867 = new_Send((Optr)PSend20866, SMB_ticks, 0);
    // asUTC. 
    Send PSend20868 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_asUTC, 0);
    // ticks. 
    Send PSend20869 = new_Send((Optr)PSend20868, SMB_ticks, 0);
    // =. 
    Send PSend20870 = new_Send((Optr)PSend20867, SMB__equals_, 1, (Optr)PSend20869);
    Array PThreadedCode20865 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20866, (Optr)&t_send0, (Optr)PSend20867, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend20868, (Optr)&t_send0, (Optr)PSend20869, (Optr)&t_send1, (Optr)PSend20870, (Optr)&t_block_return);
    Block PBlock20864 = new_Block_with(empty_Array, empty_Array, PThreadedCode20865, 1, PSend20870);
    // ifTrue:ifFalse:. 
    Send PSend20860 = new_Send((Optr)PSend20859, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20861, (Optr)PBlock20864);
    Array PThreadedCode20849 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20850, (Optr)&t_send_ifTrue_, (Optr)PSend20851, (Optr)PBlock20852, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20855, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20856, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20857, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend20858, (Optr)&t_send1, (Optr)PSend20859, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20860, (Optr)PBlock20861, (Optr)PBlock20864, (Optr)&t_method_return);
    Block PBlock20847 = new_Block_with(PArray20848, empty_Array, PThreadedCode20849, 3, PSend20851, PAssign20855, PSend20860);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20871 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20847);
    Array PThreadedCode20846 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20847, (Optr)&t_send1, (Optr)PSend20871, (Optr)&t_method_return);
    Method PMethod20843 = new_Method_with(PArray20844, PArray20845, empty_Array, PThreadedCode20846, 1, PSend20871);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20843, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_secondsSinceMidnight() {
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    Array PThreadedCode20873 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_method_return);
    Method PMethod20872 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20873, 1, slot_Chronology_DateAndTime_seconds);
    
    MethodClosure MC_SMB_secondsSinceMidnight = new_MethodClosure((Method)PMethod20872, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_secondsSinceMidnight, MC_SMB_secondsSinceMidnight);
}


static void init_SMB_normalize_ticks_base_() {
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    Variable VAR_i_0_0 = new_Variable_named(L"i", 0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Variable VAR_base_0_2 = new_Variable_named(L"base", 0);
    Array PArray20875 = new_Array_with(3, (Optr)VAR_i_0_0, (Optr)VAR_ticks_0_1, (Optr)VAR_base_0_2);
    Variable VAR_tick_0_3 = new_Variable_named(L"tick", 0);
    Variable VAR_quo_0_4 = new_Variable_named(L"quo", 0);
    Variable VAR_rem_0_5 = new_Variable_named(L"rem", 0);
    Array PArray20876 = new_Array_with(3, (Optr)VAR_tick_0_3, (Optr)VAR_quo_0_4, (Optr)VAR_rem_0_5);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20879 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)VAR_i_0_0);
    Assign PAssign20878 = new_Assign((Optr)VAR_tick_0_3, (Optr)PSend20879);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20881 = new_Send((Optr)VAR_tick_0_3, SMB_quo_, 1, (Optr)VAR_base_0_2);
    Assign PAssign20880 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend20881);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20883 = new_Send((Optr)VAR_tick_0_3, SMB_rem_, 1, (Optr)VAR_base_0_2);
    Assign PAssign20882 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend20883);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20884 = new_Send((Optr)VAR_rem_0_5, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend20889 = new_Send((Optr)VAR_quo_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign20888 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend20889);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20891 = new_Send((Optr)VAR_base_0_2, SMB__plus_, 1, (Optr)VAR_rem_0_5);
    Assign PAssign20890 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend20891);
    Array PThreadedCode20887 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign20888, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20889, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20890, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send1, (Optr)PSend20891, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock20886 = new_Block_with(empty_Array, empty_Array, PThreadedCode20887, 2, PAssign20888, PAssign20890);
    // ifTrue:. 
    Send PSend20885 = new_Send((Optr)PSend20884, SMB_ifTrue_, 1, (Optr)PBlock20886);
    // -. 
    Send PSend20892 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // -. 
    Send PSend20893 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend20894 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)PSend20893);
    // +. 
    Send PSend20895 = new_Send((Optr)PSend20894, SMB__plus_, 1, (Optr)VAR_quo_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20896 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)PSend20892, (Optr)PSend20895);
    // at:put:. 
    Send PSend20897 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)VAR_i_0_0, (Optr)VAR_rem_0_5);
    Array PThreadedCode20877 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push1, (Optr)PAssign20878, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_send1, (Optr)PSend20879, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20880, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend20881, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20882, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend20883, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send0, (Optr)PSend20884, (Optr)&t_send_ifTrue_, (Optr)PSend20885, (Optr)PBlock20886, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20892, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20893, (Optr)&t_send1, (Optr)PSend20894, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_send1, (Optr)PSend20895, (Optr)&t_send2, (Optr)PSend20896, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send2, (Optr)PSend20897, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20874 = new_Method_with(PArray20875, PArray20876, empty_Array, PThreadedCode20877, 7, PAssign20878, PAssign20880, PAssign20882, PSend20885, PSend20896, PSend20897, self);
    
    MethodClosure MC_SMB_normalize_ticks_base_ = new_MethodClosure((Method)PMethod20874, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_normalize_ticks_base_, MC_SMB_normalize_ticks_base_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray20899 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20902 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20904 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20905 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20906 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20904, (Optr)PSend20905);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20907 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20903 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20904, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20905, (Optr)&t_send2, (Optr)PSend20906, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20907, (Optr)&t_method_return);
    Block PBlock20901 = new_Block_with(PArray20902, empty_Array, PThreadedCode20903, 2, PSend20906, PSend20907);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20908 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20909 = new_Send((Optr)PSend20908, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20910 = new_Send((Optr)PBlock20901, SMB_value_, 1, (Optr)PSend20909);
    Array PThreadedCode20900 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock20901, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20908, (Optr)&t_send0, (Optr)PSend20909, (Optr)&t_send1, (Optr)PSend20910, (Optr)&t_method_return);
    Method PMethod20898 = new_Method_with(PArray20899, empty_Array, empty_Array, PThreadedCode20900, 1, PSend20910);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod20898, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Array PThreadedCode20912 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20911 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20912, 1, self);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20911, Chronology_DateAndTime_Class);
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
    Send PSend20915 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20916 = new_Send((Optr)PSend20915, SMB_basicNew, 0);
    // class. 
    Send PSend20917 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend20918 = new_Send((Optr)PSend20917, SMB_localOffset, 0);
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // setJdn:seconds:offset:. 
    Send PSend20919 = new_Send((Optr)PSend20916, SMB_setJdn_seconds_offset_, 3, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)int_0_Const, (Optr)PSend20918);
    Array PThreadedCode20914 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20915, (Optr)&t_send0, (Optr)PSend20916, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20917, (Optr)&t_send0, (Optr)PSend20918, (Optr)&t_send3, (Optr)PSend20919, (Optr)&t_method_return);
    Method PMethod20913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20914, 1, PSend20919);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod20913, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_midnight, MC_SMB_midnight);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20921 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_l_0_1 = new_Variable_named(L"l", 0);
    Variable VAR_n_0_2 = new_Variable_named(L"n", 0);
    Variable VAR_i_0_3 = new_Variable_named(L"i", 0);
    Variable VAR_j_0_4 = new_Variable_named(L"j", 0);
    Variable VAR_dd_0_5 = new_Variable_named(L"dd", 0);
    Variable VAR_mm_0_6 = new_Variable_named(L"mm", 0);
    Variable VAR_yyyy_0_7 = new_Variable_named(L"yyyy", 0);
    Array PArray20922 = new_Array_with(7, (Optr)VAR_l_0_1, (Optr)VAR_n_0_2, (Optr)VAR_i_0_3, (Optr)VAR_j_0_4, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_68569 = new_SmallInt(68569);
    Constant int_68569_Const = new_Constant((Optr)int_68569);
    // +. 
    Send PSend20925 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_68569_Const);
    Assign PAssign20924 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend20925);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // *. 
    Send PSend20928 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_4_Const);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_146097 = new_SmallInt(146097);
    Constant int_146097_Const = new_Constant((Optr)int_146097);
    // //. 
    Send PSend20927 = new_Send((Optr)PSend20928, SMB__quotient_, 1, (Optr)int_146097_Const);
    Assign PAssign20926 = new_Assign((Optr)VAR_n_0_2, (Optr)PSend20927);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // *. 
    Send PSend20933 = new_Send((Optr)VAR_n_0_2, SMB__times_, 1, (Optr)int_146097_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // +. 
    Send PSend20932 = new_Send((Optr)PSend20933, SMB__plus_, 1, (Optr)int_3_Const);
    // //. 
    Send PSend20931 = new_Send((Optr)PSend20932, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend20930 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend20931);
    Assign PAssign20929 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend20930);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20937 = new_Send((Optr)VAR_l_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_4000 = new_SmallInt(4000);
    Constant int_4000_Const = new_Constant((Optr)int_4000);
    // *. 
    Send PSend20936 = new_Send((Optr)PSend20937, SMB__times_, 1, (Optr)int_4000_Const);
    SmallInt int_1461001 = new_SmallInt(1461001);
    Constant int_1461001_Const = new_Constant((Optr)int_1461001);
    // //. 
    Send PSend20935 = new_Send((Optr)PSend20936, SMB__quotient_, 1, (Optr)int_1461001_Const);
    Assign PAssign20934 = new_Assign((Optr)VAR_i_0_3, (Optr)PSend20935);
    SmallInt int_1461 = new_SmallInt(1461);
    Constant int_1461_Const = new_Constant((Optr)int_1461);
    // *. 
    Send PSend20942 = new_Send((Optr)VAR_i_0_3, SMB__times_, 1, (Optr)int_1461_Const);
    // //. 
    Send PSend20941 = new_Send((Optr)PSend20942, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend20940 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend20941);
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // +. 
    Send PSend20939 = new_Send((Optr)PSend20940, SMB__plus_, 1, (Optr)int_31_Const);
    Assign PAssign20938 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend20939);
    SmallInt int_80 = new_SmallInt(80);
    Constant int_80_Const = new_Constant((Optr)int_80);
    // *. 
    Send PSend20945 = new_Send((Optr)int_80_Const, SMB__times_, 1, (Optr)VAR_l_0_1);
    SmallInt int_2447 = new_SmallInt(2447);
    Constant int_2447_Const = new_Constant((Optr)int_2447);
    // //. 
    Send PSend20944 = new_Send((Optr)PSend20945, SMB__quotient_, 1, (Optr)int_2447_Const);
    Assign PAssign20943 = new_Assign((Optr)VAR_j_0_4, (Optr)PSend20944);
    // *. 
    Send PSend20949 = new_Send((Optr)VAR_j_0_4, SMB__times_, 1, (Optr)int_2447_Const);
    // //. 
    Send PSend20948 = new_Send((Optr)PSend20949, SMB__quotient_, 1, (Optr)int_80_Const);
    // -. 
    Send PSend20947 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend20948);
    Assign PAssign20946 = new_Assign((Optr)VAR_dd_0_5, (Optr)PSend20947);
    SmallInt int_11 = new_SmallInt(11);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // //. 
    Send PSend20951 = new_Send((Optr)VAR_j_0_4, SMB__quotient_, 1, (Optr)int_11_Const);
    Assign PAssign20950 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend20951);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend20954 = new_Send((Optr)VAR_j_0_4, SMB__plus_, 1, (Optr)int_2_Const);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // *. 
    Send PSend20955 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_12_Const);
    // -. 
    Send PSend20953 = new_Send((Optr)PSend20954, SMB__minus_, 1, (Optr)PSend20955);
    Assign PAssign20952 = new_Assign((Optr)VAR_mm_0_6, (Optr)PSend20953);
    SmallInt int_49 = new_SmallInt(49);
    Constant int_49_Const = new_Constant((Optr)int_49);
    // -. 
    Send PSend20960 = new_Send((Optr)VAR_n_0_2, SMB__minus_, 1, (Optr)int_49_Const);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // *. 
    Send PSend20959 = new_Send((Optr)PSend20960, SMB__times_, 1, (Optr)int_100_Const);
    // +. 
    Send PSend20958 = new_Send((Optr)PSend20959, SMB__plus_, 1, (Optr)VAR_i_0_3);
    // +. 
    Send PSend20957 = new_Send((Optr)PSend20958, SMB__plus_, 1, (Optr)VAR_l_0_1);
    Assign PAssign20956 = new_Assign((Optr)VAR_yyyy_0_7, (Optr)PSend20957);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend20961 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_value_, 3, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Array PThreadedCode20923 = instantiate_Array_with(ThreadedCode_Class, 0, 177, (Optr)&t_push1, (Optr)PAssign20924, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push1, (Optr)int_68569, (Optr)&t_send1, (Optr)PSend20925, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20926, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20928, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend20927, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20929, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend20933, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20932, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20931, (Optr)&t_send1, (Optr)PSend20930, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20934, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20937, (Optr)&t_push1, (Optr)int_4000, (Optr)&t_send1, (Optr)PSend20936, (Optr)&t_push1, (Optr)int_1461001, (Optr)&t_send1, (Optr)PSend20935, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20938, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_push1, (Optr)int_1461, (Optr)&t_send1, (Optr)PSend20942, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20941, (Optr)&t_send1, (Optr)PSend20940, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend20939, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20943, (Optr)&t_push1, (Optr)int_80, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend20945, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend20944, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20946, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend20949, (Optr)&t_push1, (Optr)int_80, (Optr)&t_send1, (Optr)PSend20948, (Optr)&t_send1, (Optr)PSend20947, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20950, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_11, (Optr)&t_send1, (Optr)PSend20951, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20952, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20954, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20955, (Optr)&t_send1, (Optr)PSend20953, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20956, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_49, (Optr)&t_send1, (Optr)PSend20960, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20959, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_send1, (Optr)PSend20958, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend20957, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_dd_0_5, (Optr)&t_push_variable, (Optr)VAR_mm_0_6, (Optr)&t_push_variable, (Optr)VAR_yyyy_0_7, (Optr)&t_send3, (Optr)PSend20961, (Optr)&t_method_return);
    Method PMethod20920 = new_Method_with(PArray20921, PArray20922, empty_Array, PThreadedCode20923, 11, PAssign20924, PAssign20926, PAssign20929, PAssign20934, PAssign20938, PAssign20943, PAssign20946, PAssign20950, PAssign20952, PAssign20956, PSend20961);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod20920, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printYMDOn_() {
    Symbol SMB_printYMDOn_ = new_Symbol(L"printYMDOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20963 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend20965 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode20964 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend20965, (Optr)&t_method_return);
    Method PMethod20962 = new_Method_with(PArray20963, empty_Array, empty_Array, PThreadedCode20964, 1, PSend20965);
    
    MethodClosure MC_SMB_printYMDOn_ = new_MethodClosure((Method)PMethod20962, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_, MC_SMB_printYMDOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20968 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode20967 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send2, (Optr)PSend20968, (Optr)&t_method_return);
    Method PMethod20966 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20967, 1, PSend20968);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20966, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20972 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20973 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_method_return);
    Block PBlock20971 = new_Block_with(PArray20972, empty_Array, PThreadedCode20973, 1, VAR_y_1_2);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20974 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20971);
    Array PThreadedCode20970 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20971, (Optr)&t_send1, (Optr)PSend20974, (Optr)&t_method_return);
    Method PMethod20969 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20970, 1, PSend20974);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod20969, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_printHMSOn_() {
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20976 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_h_0_1 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_2 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_3 = new_Variable_named(L"s", 0);
    Array PArray20977 = new_Array_with(3, (Optr)VAR_h_0_1, (Optr)VAR_m_0_2, (Optr)VAR_s_0_3);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20981 = new_Send((Optr)self, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20980 = new_Send((Optr)PSend20981, SMB_abs, 0);
    Assign PAssign20979 = new_Assign((Optr)VAR_h_0_1, (Optr)PSend20980);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20984 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend20983 = new_Send((Optr)PSend20984, SMB_abs, 0);
    Assign PAssign20982 = new_Assign((Optr)VAR_m_0_2, (Optr)PSend20983);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20987 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend20986 = new_Send((Optr)PSend20987, SMB_abs, 0);
    Assign PAssign20985 = new_Assign((Optr)VAR_s_0_3, (Optr)PSend20986);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20988 = new_Send((Optr)VAR_h_0_1, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9159 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9159_Const = new_Constant((Optr)char_9159);
    // <<. 
    Send PSend20992 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20991 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20992, (Optr)&t_block_return);
    Block PBlock20990 = new_Block_with(empty_Array, empty_Array, PThreadedCode20991, 1, PSend20992);
    // ifTrue:. 
    Send PSend20989 = new_Send((Optr)PSend20988, SMB_ifTrue_, 1, (Optr)PBlock20990);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20993 = new_Send((Optr)VAR_h_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20994 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20995 = new_Send((Optr)VAR_m_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20999 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20998 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20999, (Optr)&t_block_return);
    Block PBlock20997 = new_Block_with(empty_Array, empty_Array, PThreadedCode20998, 1, PSend20999);
    // ifTrue:. 
    Send PSend20996 = new_Send((Optr)PSend20995, SMB_ifTrue_, 1, (Optr)PBlock20997);
    // printOn:. 
    Send PSend21000 = new_Send((Optr)VAR_m_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21001 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend21002 = new_Send((Optr)VAR_s_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21006 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode21005 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend21006, (Optr)&t_block_return);
    Block PBlock21004 = new_Block_with(empty_Array, empty_Array, PThreadedCode21005, 1, PSend21006);
    // ifTrue:. 
    Send PSend21003 = new_Send((Optr)PSend21002, SMB_ifTrue_, 1, (Optr)PBlock21004);
    // printOn:. 
    Send PSend21007 = new_Send((Optr)VAR_s_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20978 = instantiate_Array_with(ThreadedCode_Class, 0, 93, (Optr)&t_push1, (Optr)PAssign20979, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20981, (Optr)&t_send0, (Optr)PSend20980, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20982, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20984, (Optr)&t_send0, (Optr)PSend20983, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20985, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20987, (Optr)&t_send0, (Optr)PSend20986, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20988, (Optr)&t_send_ifTrue_, (Optr)PSend20989, (Optr)PBlock20990, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20993, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20994, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20995, (Optr)&t_send_ifTrue_, (Optr)PSend20996, (Optr)PBlock20997, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21000, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend21001, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21002, (Optr)&t_send_ifTrue_, (Optr)PSend21003, (Optr)PBlock21004, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21007, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20975 = new_Method_with(PArray20976, PArray20977, empty_Array, PThreadedCode20978, 12, PAssign20979, PAssign20982, PAssign20985, PSend20989, PSend20993, PSend20994, PSend20996, PSend21000, PSend21001, PSend21003, PSend21007, self);
    
    MethodClosure MC_SMB_printHMSOn_ = new_MethodClosure((Method)PMethod20975, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printHMSOn_, MC_SMB_printHMSOn_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray21009 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21012 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend21014 = new_Send((Optr)VAR_aJulianDayNumber_0_0, SMB_days, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21015 = new_Send((Optr)PSend21014, SMB_ticks, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21016 = new_Send((Optr)self, SMB_localOffset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21017 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21015, (Optr)PSend21016);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21018 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21013 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send0, (Optr)PSend21014, (Optr)&t_send0, (Optr)PSend21015, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21016, (Optr)&t_send2, (Optr)PSend21017, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21018, (Optr)&t_method_return);
    Block PBlock21011 = new_Block_with(PArray21012, empty_Array, PThreadedCode21013, 2, PSend21017, PSend21018);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21019 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21020 = new_Send((Optr)PBlock21011, SMB_value_, 1, (Optr)PSend21019);
    Array PThreadedCode21010 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21011, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21019, (Optr)&t_send1, (Optr)PSend21020, (Optr)&t_method_return);
    Method PMethod21008 = new_Method_with(PArray21009, empty_Array, empty_Array, PThreadedCode21010, 1, PSend21020);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod21008, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_localTimeZone() {
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend21026 = new_Send((Optr)PTimeZone_classReference, SMB_default, 0);
    Assign PAssign21025 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)PSend21026);
    Array PThreadedCode21024 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign21025, (Optr)&t_push_class_reference, (Optr)PTimeZone_classReference, (Optr)&t_send0, (Optr)PSend21026, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21023 = new_Block_with(empty_Array, empty_Array, PThreadedCode21024, 1, PAssign21025);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21027 = new_Send((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, SMB_ifNil_, 1, (Optr)PBlock21023);
    Array PThreadedCode21022 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)&t_push_closure, (Optr)PBlock21023, (Optr)&t_send1, (Optr)PSend21027, (Optr)&t_method_return);
    Method PMethod21021 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21022, 1, PSend21027);
    
    MethodClosure MC_SMB_localTimeZone = new_MethodClosure((Method)PMethod21021, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone, MC_SMB_localTimeZone);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend21030 = new_Send((Optr)self, SMB_midnight, 0);
    Array PThreadedCode21029 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21030, (Optr)&t_method_return);
    Method PMethod21028 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21029, 1, PSend21030);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod21028, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_epoch() {
    Symbol SMB_epoch = new_Symbol(L"epoch");
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21033 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend21034 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend21033);
    Array PThreadedCode21032 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21033, (Optr)&t_send1, (Optr)PSend21034, (Optr)&t_method_return);
    Method PMethod21031 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21032, 1, PSend21034);
    
    MethodClosure MC_SMB_epoch = new_MethodClosure((Method)PMethod21031, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_epoch, MC_SMB_epoch);
}


static void init_class_SMB_localTimeZone_() {
    Symbol SMB_localTimeZone_ = new_Symbol(L"localTimeZone:");
    Variable VAR_aTimeZone_0_0 = new_Variable_named(L"aTimeZone", 0);
    Array PArray21036 = new_Array_with(1, (Optr)VAR_aTimeZone_0_0);
    Assign PAssign21038 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)VAR_aTimeZone_0_0);
    Array PThreadedCode21037 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21038, (Optr)&t_push_variable, (Optr)VAR_aTimeZone_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21035 = new_Method_with(PArray21036, empty_Array, empty_Array, PThreadedCode21037, 2, PAssign21038, self);
    
    MethodClosure MC_SMB_localTimeZone_ = new_MethodClosure((Method)PMethod21035, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone_, MC_SMB_localTimeZone_);
}


static void init_class_SMB_localOffset() {
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21041 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21042 = new_Send((Optr)PSend21041, SMB_offset, 0);
    Array PThreadedCode21040 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21041, (Optr)&t_send0, (Optr)PSend21042, (Optr)&t_method_return);
    Method PMethod21039 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21040, 1, PSend21042);
    
    MethodClosure MC_SMB_localOffset = new_MethodClosure((Method)PMethod21039, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localOffset, MC_SMB_localOffset);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21045 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21046 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21047 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21048 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend21046, (Optr)PSend21047);
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21049 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21050 = new_Send((Optr)PSend21049, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21051 = new_Send((Optr)PSend21045, SMB_ticks_offset_, 2, (Optr)PSend21048, (Optr)PSend21050);
    Array PThreadedCode21044 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21045, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21046, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21047, (Optr)&t_send2, (Optr)PSend21048, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21049, (Optr)&t_send0, (Optr)PSend21050, (Optr)&t_send2, (Optr)PSend21051, (Optr)&t_method_return);
    Method PMethod21043 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21044, 1, PSend21051);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod21043, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_midnight() {
    Symbol SMB_midnight = new_Symbol(L"midnight");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend21054 = new_Send((Optr)self, SMB_now, 0);
    // midnight. 
    Send PSend21055 = new_Send((Optr)PSend21054, SMB_midnight, 0);
    Array PThreadedCode21053 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21054, (Optr)&t_send0, (Optr)PSend21055, (Optr)&t_method_return);
    Method PMethod21052 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21053, 1, PSend21055);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21052, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_midnight, MC_SMB_midnight);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21058 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Array PThreadedCode21057 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21058, (Optr)&t_method_return);
    Method PMethod21056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21057, 1, PSend21058);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod21056, HEADER(Chronology_DateAndTime_Class));
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
    init_SMB_dayOfWeekAbbreviation();
    init_SMB_printOn_();
    init_SMB_printYMDOn_withLeadingSpace_();
    init_SMB_dayOfWeek();
    init_SMB_second();
    init_SMB_hour24();
    init_SMB_hours();
    init_SMB_minute();
    init_SMB_hasEqualTicks_();
    init_SMB_month();
    init_SMB_asLocal();
    init_SMB_printOn_withLeadingSpace_();
    init_SMB_setJdn_seconds_offset_();
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