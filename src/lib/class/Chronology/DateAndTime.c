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
    Send PSend20611 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20610 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20611, (Optr)&t_method_return);
    Method PMethod20609 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20610, 1, PSend20611);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20609, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20614 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_epoch = new_Symbol(L"epoch");
    // epoch. 
    Send PSend20615 = new_Send((Optr)PSend20614, SMB_epoch, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20616 = new_Send((Optr)self, SMB__minus_, 1, (Optr)PSend20615);
    // asSeconds. 
    Send PSend20617 = new_Send((Optr)PSend20616, SMB_asSeconds, 0);
    Array PThreadedCode20613 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20614, (Optr)&t_send0, (Optr)PSend20615, (Optr)&t_send1, (Optr)PSend20616, (Optr)&t_send0, (Optr)PSend20617, (Optr)&t_method_return);
    Method PMethod20612 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20613, 1, PSend20617);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20612, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20620 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20619 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20620, (Optr)&t_method_return);
    Method PMethod20618 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20619, 1, PSend20620);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20618, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20623 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20622 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20623, (Optr)&t_method_return);
    Method PMethod20621 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20622, 1, PSend20623);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20621, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode20625 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_method_return);
    Method PMethod20624 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20625, 1, slot_Chronology_DateAndTime_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod20624, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20628 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode20627 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20628, (Optr)&t_method_return);
    Method PMethod20626 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20627, 1, PSend20628);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20626, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_julianDayNumber() {
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    Array PThreadedCode20630 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_method_return);
    Method PMethod20629 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20630, 1, slot_Chronology_DateAndTime_jdn);
    
    MethodClosure MC_SMB_julianDayNumber = new_MethodClosure((Method)PMethod20629, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_julianDayNumber, MC_SMB_julianDayNumber);
}


static void init_SMB_dayOfMonth() {
    Symbol SMB_dayOfMonth = new_Symbol(L"dayOfMonth");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20634 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20635 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_method_return);
    Block PBlock20633 = new_Block_with(PArray20634, empty_Array, PThreadedCode20635, 1, VAR_d_1_0);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20636 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20633);
    Array PThreadedCode20632 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20633, (Optr)&t_send1, (Optr)PSend20636, (Optr)&t_method_return);
    Method PMethod20631 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20632, 1, PSend20636);
    
    MethodClosure MC_SMB_dayOfMonth = new_MethodClosure((Method)PMethod20631, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfMonth, MC_SMB_dayOfMonth);
}


static void init_SMB_ticks_offset_() {
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    Variable VAR_ticks_0_0 = new_Variable_named(L"ticks", 0);
    Variable VAR_utcOffset_0_1 = new_Variable_named(L"utcOffset", 0);
    Array PArray20638 = new_Array_with(2, (Optr)VAR_ticks_0_0, (Optr)VAR_utcOffset_0_1);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20640 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // normalize:ticks:base:. 
    Send PSend20641 = new_Send((Optr)self, SMB_normalize_ticks_base_, 3, (Optr)int_2_Const, (Optr)VAR_ticks_0_0, (Optr)PSend20640);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend20643 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign20642 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)PSend20643);
    // at:. 
    Send PSend20645 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20644 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)PSend20645);
    Assign PAssign20646 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_utcOffset_0_1);
    Array PThreadedCode20639 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20640, (Optr)&t_send3, (Optr)PSend20641, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20642, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20643, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20644, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20645, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20646, (Optr)&t_push_variable, (Optr)VAR_utcOffset_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20637 = new_Method_with(PArray20638, empty_Array, empty_Array, PThreadedCode20639, 5, PSend20641, PAssign20642, PAssign20644, PAssign20646, self);
    
    MethodClosure MC_SMB_ticks_offset_ = new_MethodClosure((Method)PMethod20637, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks_offset_, MC_SMB_ticks_offset_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20648 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Array PArray20649 = new_Array_with(1, (Optr)VAR_ticks_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20652 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign20651 = new_Assign((Optr)VAR_ticks_0_1, (Optr)PSend20652);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20653 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20654 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // ticks. 
    Send PSend20655 = new_Send((Optr)PSend20654, SMB_ticks, 0);
    Variable VAR_ticks1_1_0 = new_Variable_named(L"ticks1", 1);
    Variable VAR_dticks_1_1 = new_Variable_named(L"dticks", 1);
    Array PArray20657 = new_Array_with(2, (Optr)VAR_ticks1_1_0, (Optr)VAR_dticks_1_1);
    // +. 
    Send PSend20659 = new_Send((Optr)VAR_ticks1_1_0, SMB__plus_, 1, (Optr)VAR_dticks_1_1);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend20660 = new_Send((Optr)VAR_ticks_0_1, SMB_addLast_, 1, (Optr)PSend20659);
    Array PThreadedCode20658 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_ticks1_1_0, (Optr)&t_push_variable, (Optr)VAR_dticks_1_1, (Optr)&t_send1, (Optr)PSend20659, (Optr)&t_send1, (Optr)PSend20660, (Optr)&t_method_return);
    Block PBlock20656 = new_Block_with(PArray20657, empty_Array, PThreadedCode20658, 1, PSend20660);
    Symbol SMB_with_do_ = new_Symbol(L"with:do:");
    // with:do:. 
    Send PSend20661 = new_Send((Optr)PSend20653, SMB_with_do_, 2, (Optr)PSend20655, (Optr)PBlock20656);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20663 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20665 = new_Send((Optr)VAR_ticks_0_1, SMB_asArray, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20666 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20667 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20665, (Optr)PSend20666);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20668 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20664 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_send0, (Optr)PSend20665, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20666, (Optr)&t_send2, (Optr)PSend20667, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20668, (Optr)&t_method_return);
    Block PBlock20662 = new_Block_with(PArray20663, empty_Array, PThreadedCode20664, 2, PSend20667, PSend20668);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20669 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20670 = new_Send((Optr)PSend20669, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20671 = new_Send((Optr)PBlock20662, SMB_value_, 1, (Optr)PSend20670);
    Array PThreadedCode20650 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20651, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20652, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20653, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20654, (Optr)&t_send0, (Optr)PSend20655, (Optr)&t_push_closure, (Optr)PBlock20656, (Optr)&t_send2, (Optr)PSend20661, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20662, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20669, (Optr)&t_send0, (Optr)PSend20670, (Optr)&t_send1, (Optr)PSend20671, (Optr)&t_method_return);
    Method PMethod20647 = new_Method_with(PArray20648, PArray20649, empty_Array, PThreadedCode20650, 3, PAssign20651, PSend20661, PSend20671);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20647, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20673 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol  SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_asDateAndTime_Const = new_Constant((Optr)SMB_asDateAndTime);
    // respondsTo:. 
    Send PSend20675 = new_Send((Optr)VAR_operand_0_0, SMB_respondsTo_, 1, (Optr)SMB_asDateAndTime_Const);
    Variable VAR_lticks_1_0 = new_Variable_named(L"lticks", 1);
    Variable VAR_rticks_1_1 = new_Variable_named(L"rticks", 1);
    Array PArray20677 = new_Array_with(2, (Optr)VAR_lticks_1_0, (Optr)VAR_rticks_1_1);
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    // asLocal. 
    Send PSend20681 = new_Send((Optr)self, SMB_asLocal, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20680 = new_Send((Optr)PSend20681, SMB_ticks, 0);
    Assign PAssign20679 = new_Assign((Optr)VAR_lticks_1_0, (Optr)PSend20680);
    // asDateAndTime. 
    Send PSend20685 = new_Send((Optr)VAR_operand_0_0, SMB_asDateAndTime, 0);
    // asLocal. 
    Send PSend20684 = new_Send((Optr)PSend20685, SMB_asLocal, 0);
    // ticks. 
    Send PSend20683 = new_Send((Optr)PSend20684, SMB_ticks, 0);
    Assign PAssign20682 = new_Assign((Optr)VAR_rticks_1_1, (Optr)PSend20683);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20686 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20687 = new_Send((Optr)VAR_lticks_1_0, SMB_first, 0);
    // first. 
    Send PSend20688 = new_Send((Optr)VAR_rticks_1_1, SMB_first, 0);
    // -. 
    Send PSend20689 = new_Send((Optr)PSend20687, SMB__minus_, 1, (Optr)PSend20688);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20690 = new_Send((Optr)PSend20686, SMB__times_, 1, (Optr)PSend20689);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20691 = new_Send((Optr)VAR_lticks_1_0, SMB_second, 0);
    // second. 
    Send PSend20692 = new_Send((Optr)VAR_rticks_1_1, SMB_second, 0);
    // -. 
    Send PSend20693 = new_Send((Optr)PSend20691, SMB__minus_, 1, (Optr)PSend20692);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20694 = new_Send((Optr)PSend20690, SMB__plus_, 1, (Optr)PSend20693);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20695 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)PSend20694);
    Array PThreadedCode20678 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign20679, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20681, (Optr)&t_send0, (Optr)PSend20680, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20682, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20685, (Optr)&t_send0, (Optr)PSend20684, (Optr)&t_send0, (Optr)PSend20683, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20686, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20687, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20688, (Optr)&t_send1, (Optr)PSend20689, (Optr)&t_send1, (Optr)PSend20690, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20691, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20692, (Optr)&t_send1, (Optr)PSend20693, (Optr)&t_send1, (Optr)PSend20694, (Optr)&t_send1, (Optr)PSend20695, (Optr)&t_method_return);
    Block PBlock20676 = new_Block_with(empty_Array, PArray20677, PThreadedCode20678, 3, PAssign20679, PAssign20682, PSend20695);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20698 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    // +. 
    Send PSend20699 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20698);
    Array PThreadedCode20697 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20698, (Optr)&t_send1, (Optr)PSend20699, (Optr)&t_block_return);
    Block PBlock20696 = new_Block_with(empty_Array, empty_Array, PThreadedCode20697, 1, PSend20699);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend20700 = new_Send((Optr)PSend20675, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20676, (Optr)PBlock20696);
    Array PThreadedCode20674 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_push1, (Optr)SMB_asDateAndTime, (Optr)&t_send1, (Optr)PSend20675, (Optr)&t_push_closure, (Optr)PBlock20676, (Optr)&t_push_closure, (Optr)PBlock20696, (Optr)&t_send2, (Optr)PSend20700, (Optr)&t_method_return);
    Method PMethod20672 = new_Method_with(PArray20673, empty_Array, empty_Array, PThreadedCode20674, 1, PSend20700);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20672, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    Symbol SMB_month = new_Symbol(L"month");
    // month. 
    Send PSend20703 = new_Send((Optr)self, SMB_month, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20704 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20703);
    Array PThreadedCode20702 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20703, (Optr)&t_send1, (Optr)PSend20704, (Optr)&t_method_return);
    Method PMethod20701 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20702, 1, PSend20704);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod20701, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20707 = new_Send((Optr)Date_classReference, SMB_starting_, 1, (Optr)self);
    Array PThreadedCode20706 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20707, (Optr)&t_method_return);
    Method PMethod20705 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20706, 1, PSend20707);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20705, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_dayOfWeekAbbreviation() {
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    // dayOfWeekName. 
    Send PSend20710 = new_Send((Optr)self, SMB_dayOfWeekName, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20711 = new_Send((Optr)PSend20710, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    Array PThreadedCode20709 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20710, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20711, (Optr)&t_method_return);
    Method PMethod20708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20709, 1, PSend20711);
    
    MethodClosure MC_SMB_dayOfWeekAbbreviation = new_MethodClosure((Method)PMethod20708, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekAbbreviation, MC_SMB_dayOfWeekAbbreviation);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20713 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    // printOn:withLeadingSpace:. 
    Send PSend20715 = new_Send((Optr)self, SMB_printOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode20714 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend20715, (Optr)&t_method_return);
    Method PMethod20712 = new_Method_with(PArray20713, empty_Array, empty_Array, PThreadedCode20714, 1, PSend20715);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20712, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_printYMDOn_withLeadingSpace_() {
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray20717 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_year_0_2 = new_Variable_named(L"year", 0);
    Variable VAR_month_0_3 = new_Variable_named(L"month", 0);
    Variable VAR_day_0_4 = new_Variable_named(L"day", 0);
    Array PArray20718 = new_Array_with(3, (Optr)VAR_year_0_2, (Optr)VAR_month_0_3, (Optr)VAR_day_0_4);
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20721 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Assign PAssign20723 = new_Assign((Optr)VAR_year_0_2, (Optr)VAR_y_1_2);
    Assign PAssign20724 = new_Assign((Optr)VAR_month_0_3, (Optr)VAR_m_1_1);
    Assign PAssign20725 = new_Assign((Optr)VAR_day_0_4, (Optr)VAR_d_1_0);
    Array PThreadedCode20722 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign20723, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20724, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20725, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock20720 = new_Block_with(PArray20721, empty_Array, PThreadedCode20722, 3, PAssign20723, PAssign20724, PAssign20725);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20726 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20720);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20727 = new_Send((Optr)VAR_year_0_2, SMB_negative, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_2182 = new_Character(L'-');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    // nextPut:. 
    Send PSend20731 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPut_, 1, (Optr)char_2182_Const);
    Array PThreadedCode20730 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend20731, (Optr)&t_block_return);
    Block PBlock20729 = new_Block_with(empty_Array, empty_Array, PThreadedCode20730, 1, PSend20731);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend20737 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Array PThreadedCode20736 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend20737, (Optr)&t_block_return);
    Block PBlock20735 = new_Block_with(empty_Array, empty_Array, PThreadedCode20736, 1, PSend20737);
    // ifTrue:. 
    Send PSend20734 = new_Send((Optr)VAR_printLeadingSpaceToo_0_1, SMB_ifTrue_, 1, (Optr)PBlock20735);
    Array PThreadedCode20733 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20734, (Optr)PBlock20735, (Optr)&t_block_return);
    Block PBlock20732 = new_Block_with(empty_Array, empty_Array, PThreadedCode20733, 1, PSend20734);
    // ifTrue:ifFalse:. 
    Send PSend20728 = new_Send((Optr)PSend20727, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20729, (Optr)PBlock20732);
    SmallInt int_1000 = new_SmallInt(1000);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    // <. 
    Send PSend20738 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_1000_Const);
    Character char_9124 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9124_Const = new_Constant((Optr)char_9124);
    // <<. 
    Send PSend20742 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20741 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20742, (Optr)&t_block_return);
    Block PBlock20740 = new_Block_with(empty_Array, empty_Array, PThreadedCode20741, 1, PSend20742);
    // ifTrue:. 
    Send PSend20739 = new_Send((Optr)PSend20738, SMB_ifTrue_, 1, (Optr)PBlock20740);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // <. 
    Send PSend20743 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_100_Const);
    // <<. 
    Send PSend20747 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20746 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20747, (Optr)&t_block_return);
    Block PBlock20745 = new_Block_with(empty_Array, empty_Array, PThreadedCode20746, 1, PSend20747);
    // ifTrue:. 
    Send PSend20744 = new_Send((Optr)PSend20743, SMB_ifTrue_, 1, (Optr)PBlock20745);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20748 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20752 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20751 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20752, (Optr)&t_block_return);
    Block PBlock20750 = new_Block_with(empty_Array, empty_Array, PThreadedCode20751, 1, PSend20752);
    // ifTrue:. 
    Send PSend20749 = new_Send((Optr)PSend20748, SMB_ifTrue_, 1, (Optr)PBlock20750);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20753 = new_Send((Optr)VAR_year_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20754 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    // <. 
    Send PSend20755 = new_Send((Optr)VAR_month_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20759 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20758 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20759, (Optr)&t_block_return);
    Block PBlock20757 = new_Block_with(empty_Array, empty_Array, PThreadedCode20758, 1, PSend20759);
    // ifTrue:. 
    Send PSend20756 = new_Send((Optr)PSend20755, SMB_ifTrue_, 1, (Optr)PBlock20757);
    // printOn:. 
    Send PSend20760 = new_Send((Optr)VAR_month_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20761 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    // <. 
    Send PSend20762 = new_Send((Optr)VAR_day_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20766 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20765 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20766, (Optr)&t_block_return);
    Block PBlock20764 = new_Block_with(empty_Array, empty_Array, PThreadedCode20765, 1, PSend20766);
    // ifTrue:. 
    Send PSend20763 = new_Send((Optr)PSend20762, SMB_ifTrue_, 1, (Optr)PBlock20764);
    // printOn:. 
    Send PSend20767 = new_Send((Optr)VAR_day_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20719 = instantiate_Array_with(ThreadedCode_Class, 0, 101, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20720, (Optr)&t_send1, (Optr)PSend20726, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_send0, (Optr)PSend20727, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20728, (Optr)PBlock20729, (Optr)PBlock20732, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_send1, (Optr)PSend20738, (Optr)&t_send_ifTrue_, (Optr)PSend20739, (Optr)PBlock20740, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20743, (Optr)&t_send_ifTrue_, (Optr)PSend20744, (Optr)PBlock20745, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20748, (Optr)&t_send_ifTrue_, (Optr)PSend20749, (Optr)PBlock20750, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20753, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend20754, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20755, (Optr)&t_send_ifTrue_, (Optr)PSend20756, (Optr)PBlock20757, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20760, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend20761, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20762, (Optr)&t_send_ifTrue_, (Optr)PSend20763, (Optr)PBlock20764, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20767, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20716 = new_Method_with(PArray20717, PArray20718, empty_Array, PThreadedCode20719, 13, PSend20726, PSend20728, PSend20739, PSend20744, PSend20749, PSend20753, PSend20754, PSend20756, PSend20760, PSend20761, PSend20763, PSend20767, self);
    
    MethodClosure MC_SMB_printYMDOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20716, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_withLeadingSpace_, MC_SMB_printYMDOn_withLeadingSpace_);
}


static void init_SMB_dayOfWeek() {
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20770 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // rem:. 
    Send PSend20771 = new_Send((Optr)PSend20770, SMB_rem_, 1, (Optr)int_7_Const);
    // +. 
    Send PSend20772 = new_Send((Optr)PSend20771, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode20769 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20770, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20771, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20772, (Optr)&t_method_return);
    Method PMethod20768 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20769, 1, PSend20772);
    
    MethodClosure MC_SMB_dayOfWeek = new_MethodClosure((Method)PMethod20768, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeek, MC_SMB_dayOfWeek);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20775 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20776 = new_Send((Optr)PSend20775, SMB_seconds, 0);
    Array PThreadedCode20774 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20775, (Optr)&t_send0, (Optr)PSend20776, (Optr)&t_method_return);
    Method PMethod20773 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20774, 1, PSend20776);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20773, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20779 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20780 = new_Send((Optr)PSend20779, SMB_hours, 0);
    Array PThreadedCode20778 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20779, (Optr)&t_send0, (Optr)PSend20780, (Optr)&t_method_return);
    Method PMethod20777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20778, 1, PSend20780);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20777, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20783 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20782 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20783, (Optr)&t_method_return);
    Method PMethod20781 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20782, 1, PSend20783);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20781, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20786 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20787 = new_Send((Optr)PSend20786, SMB_minutes, 0);
    Array PThreadedCode20785 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20786, (Optr)&t_send0, (Optr)PSend20787, (Optr)&t_method_return);
    Method PMethod20784 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20785, 1, PSend20787);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20784, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minute, MC_SMB_minute);
}


static void init_SMB_hasEqualTicks_() {
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20789 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    // julianDayNumber. 
    Send PSend20791 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_julianDayNumber, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20792 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__equals_, 1, (Optr)PSend20791);
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    // secondsSinceMidnight. 
    Send PSend20795 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_secondsSinceMidnight, 0);
    // =. 
    Send PSend20796 = new_Send((Optr)slot_Chronology_DateAndTime_seconds, SMB__equals_, 1, (Optr)PSend20795);
    Array PThreadedCode20794 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20795, (Optr)&t_send1, (Optr)PSend20796, (Optr)&t_block_return);
    Block PBlock20793 = new_Block_with(empty_Array, empty_Array, PThreadedCode20794, 1, PSend20796);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend20797 = new_Send((Optr)PSend20792, SMB_and_, 1, (Optr)PBlock20793);
    Array PThreadedCode20790 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20791, (Optr)&t_send1, (Optr)PSend20792, (Optr)&t_push_closure, (Optr)PBlock20793, (Optr)&t_send1, (Optr)PSend20797, (Optr)&t_method_return);
    Method PMethod20788 = new_Method_with(PArray20789, empty_Array, empty_Array, PThreadedCode20790, 1, PSend20797);
    
    MethodClosure MC_SMB_hasEqualTicks_ = new_MethodClosure((Method)PMethod20788, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hasEqualTicks_, MC_SMB_hasEqualTicks_);
}


static void init_SMB_month() {
    Symbol SMB_month = new_Symbol(L"month");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20801 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20802 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_method_return);
    Block PBlock20800 = new_Block_with(PArray20801, empty_Array, PThreadedCode20802, 1, VAR_m_1_1);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20803 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20800);
    Array PThreadedCode20799 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20800, (Optr)&t_send1, (Optr)PSend20803, (Optr)&t_method_return);
    Method PMethod20798 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20799, 1, PSend20803);
    
    MethodClosure MC_SMB_month = new_MethodClosure((Method)PMethod20798, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_month, MC_SMB_month);
}


static void init_SMB_asLocal() {
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20806 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20807 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend20808 = new_Send((Optr)PSend20807, SMB_localOffset, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20809 = new_Send((Optr)PSend20806, SMB__equals_, 1, (Optr)PSend20808);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20812 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock20811 = new_Block_with(empty_Array, empty_Array, PThreadedCode20812, 1, self);
    // class. 
    Send PSend20815 = new_Send((Optr)self, SMB_class, 0);
    // localOffset. 
    Send PSend20816 = new_Send((Optr)PSend20815, SMB_localOffset, 0);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    // utcOffset:. 
    Send PSend20817 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)PSend20816);
    Array PThreadedCode20814 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20815, (Optr)&t_send0, (Optr)PSend20816, (Optr)&t_send1, (Optr)PSend20817, (Optr)&t_block_return);
    Block PBlock20813 = new_Block_with(empty_Array, empty_Array, PThreadedCode20814, 1, PSend20817);
    // ifTrue:ifFalse:. 
    Send PSend20810 = new_Send((Optr)PSend20809, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20811, (Optr)PBlock20813);
    Array PThreadedCode20805 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20806, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20807, (Optr)&t_send0, (Optr)PSend20808, (Optr)&t_send1, (Optr)PSend20809, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20810, (Optr)PBlock20811, (Optr)PBlock20813, (Optr)&t_method_return);
    Method PMethod20804 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20805, 1, PSend20810);
    
    MethodClosure MC_SMB_asLocal = new_MethodClosure((Method)PMethod20804, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asLocal, MC_SMB_asLocal);
}


static void init_SMB_printOn_withLeadingSpace_() {
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray20819 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray20820 = new_Array_with(3, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend20822 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Character char_20823 = new_Character(L'T');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_20823_Const = new_Constant((Optr)char_20823);
    // <<. 
    Send PSend20824 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_20823_Const);
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    // printHMSOn:. 
    Send PSend20825 = new_Send((Optr)self, SMB_printHMSOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20826 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_positive, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_20830 = new_Character(L'+');
    Array PThreadedCode20829 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_20830, (Optr)&t_block_return);
    Constant char_20830_Const = new_Constant((Optr)char_20830);
    Block PBlock20828 = new_Block_with(empty_Array, empty_Array, PThreadedCode20829, 1, char_20830_Const);
    Character char_2182 = new_Character(L'-');
    Array PThreadedCode20832 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_block_return);
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    Block PBlock20831 = new_Block_with(empty_Array, empty_Array, PThreadedCode20832, 1, char_2182_Const);
    // ifTrue:ifFalse:. 
    Send PSend20827 = new_Send((Optr)PSend20826, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20828, (Optr)PBlock20831);
    // <<. 
    Send PSend20833 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20827);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20836 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20835 = new_Send((Optr)PSend20836, SMB_abs, 0);
    Assign PAssign20834 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20835);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20837 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9124 = new_Character(L'0');
    Constant char_9124_Const = new_Constant((Optr)char_9124);
    // <<. 
    Send PSend20841 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20840 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20841, (Optr)&t_block_return);
    Block PBlock20839 = new_Block_with(empty_Array, empty_Array, PThreadedCode20840, 1, PSend20841);
    // ifTrue:. 
    Send PSend20838 = new_Send((Optr)PSend20837, SMB_ifTrue_, 1, (Optr)PBlock20839);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20842 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20843 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20846 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_minutes, 0);
    // abs. 
    Send PSend20845 = new_Send((Optr)PSend20846, SMB_abs, 0);
    Assign PAssign20844 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20845);
    // <. 
    Send PSend20847 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20851 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20850 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20851, (Optr)&t_block_return);
    Block PBlock20849 = new_Block_with(empty_Array, empty_Array, PThreadedCode20850, 1, PSend20851);
    // ifTrue:. 
    Send PSend20848 = new_Send((Optr)PSend20847, SMB_ifTrue_, 1, (Optr)PBlock20849);
    // printOn:. 
    Send PSend20852 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20853 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20854 = new_Send((Optr)PSend20853, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // seconds. 
    Send PSend20861 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    // abs. 
    Send PSend20860 = new_Send((Optr)PSend20861, SMB_abs, 0);
    Symbol SMB_truncated = new_Symbol(L"truncated");
    // truncated. 
    Send PSend20859 = new_Send((Optr)PSend20860, SMB_truncated, 0);
    Assign PAssign20858 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20859);
    // <<. 
    Send PSend20862 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // printOn:. 
    Send PSend20863 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20857 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20858, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20861, (Optr)&t_send0, (Optr)PSend20860, (Optr)&t_send0, (Optr)PSend20859, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20862, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20863, (Optr)&t_block_return);
    Block PBlock20856 = new_Block_with(empty_Array, empty_Array, PThreadedCode20857, 3, PAssign20858, PSend20862, PSend20863);
    // ifFalse:. 
    Send PSend20855 = new_Send((Optr)PSend20854, SMB_ifFalse_, 1, (Optr)PBlock20856);
    Array PThreadedCode20821 = instantiate_Array_with(ThreadedCode_Class, 0, 107, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send2, (Optr)PSend20822, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_20823, (Optr)&t_send1, (Optr)PSend20824, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20825, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20826, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20827, (Optr)PBlock20828, (Optr)PBlock20831, (Optr)&t_send1, (Optr)PSend20833, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20834, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20836, (Optr)&t_send0, (Optr)PSend20835, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20837, (Optr)&t_send_ifTrue_, (Optr)PSend20838, (Optr)PBlock20839, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20842, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20843, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20844, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20846, (Optr)&t_send0, (Optr)PSend20845, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20847, (Optr)&t_send_ifTrue_, (Optr)PSend20848, (Optr)PBlock20849, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20852, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20853, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20854, (Optr)&t_send_ifFalse_, (Optr)PSend20855, (Optr)PBlock20856, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20818 = new_Method_with(PArray20819, PArray20820, empty_Array, PThreadedCode20821, 13, PSend20822, PSend20824, PSend20825, PSend20833, PAssign20834, PSend20838, PSend20842, PSend20843, PAssign20844, PSend20848, PSend20852, PSend20855, self);
    
    MethodClosure MC_SMB_printOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20818, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_withLeadingSpace_, MC_SMB_printOn_withLeadingSpace_);
}


static void init_SMB_setJdn_seconds_offset_() {
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    Variable VAR_julDays_0_0 = new_Variable_named(L"julDays", 0);
    Variable VAR_secs_0_1 = new_Variable_named(L"secs", 0);
    Variable VAR_anOffset_0_2 = new_Variable_named(L"anOffset", 0);
    Array PArray20865 = new_Array_with(3, (Optr)VAR_julDays_0_0, (Optr)VAR_secs_0_1, (Optr)VAR_anOffset_0_2);
    Assign PAssign20867 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)VAR_julDays_0_0);
    Assign PAssign20868 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)VAR_secs_0_1);
    Assign PAssign20869 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_anOffset_0_2);
    Array PThreadedCode20866 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign20867, (Optr)&t_push_variable, (Optr)VAR_julDays_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20868, (Optr)&t_push_variable, (Optr)VAR_secs_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20869, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20864 = new_Method_with(PArray20865, empty_Array, empty_Array, PThreadedCode20866, 4, PAssign20867, PAssign20868, PAssign20869, self);
    
    MethodClosure MC_SMB_setJdn_seconds_offset_ = new_MethodClosure((Method)PMethod20864, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_setJdn_seconds_offset_, MC_SMB_setJdn_seconds_offset_);
}


static void init_SMB_asUTC() {
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    Symbol SMB_isZero = new_Symbol(L"isZero");
    // isZero. 
    Send PSend20872 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_isZero, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20875 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock20874 = new_Block_with(empty_Array, empty_Array, PThreadedCode20875, 1, self);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // utcOffset:. 
    Send PSend20878 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)int_0_Const);
    Array PThreadedCode20877 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20878, (Optr)&t_block_return);
    Block PBlock20876 = new_Block_with(empty_Array, empty_Array, PThreadedCode20877, 1, PSend20878);
    // ifTrue:ifFalse:. 
    Send PSend20873 = new_Send((Optr)PSend20872, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20874, (Optr)PBlock20876);
    Array PThreadedCode20871 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20872, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20873, (Optr)PBlock20874, (Optr)PBlock20876, (Optr)&t_method_return);
    Method PMethod20870 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20871, 1, PSend20873);
    
    MethodClosure MC_SMB_asUTC = new_MethodClosure((Method)PMethod20870, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asUTC, MC_SMB_asUTC);
}


static void init_SMB_dayOfWeekName() {
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    // dayOfWeek. 
    Send PSend20881 = new_Send((Optr)self, SMB_dayOfWeek, 0);
    Symbol SMB_nameOfDay_ = new_Symbol(L"nameOfDay:");
    // nameOfDay:. 
    Send PSend20882 = new_Send((Optr)PWeek_classReference, SMB_nameOfDay_, 1, (Optr)PSend20881);
    Array PThreadedCode20880 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PWeek_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20881, (Optr)&t_send1, (Optr)PSend20882, (Optr)&t_method_return);
    Method PMethod20879 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20880, 1, PSend20882);
    
    MethodClosure MC_SMB_dayOfWeekName = new_MethodClosure((Method)PMethod20879, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekName, MC_SMB_dayOfWeekName);
}


static void init_SMB_utcOffset_() {
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray20884 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR_equiv_0_1 = new_Variable_named(L"equiv", 0);
    Array PArray20885 = new_Array_with(1, (Optr)VAR_equiv_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20890 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20891 = new_Send((Optr)self, SMB_offset, 0);
    // -. 
    Send PSend20889 = new_Send((Optr)PSend20890, SMB__minus_, 1, (Optr)PSend20891);
    // +. 
    Send PSend20888 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20889);
    Assign PAssign20887 = new_Assign((Optr)VAR_equiv_0_1, (Optr)PSend20888);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20893 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20895 = new_Send((Optr)VAR_equiv_0_1, SMB_ticks, 0);
    // asDuration. 
    Send PSend20896 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20897 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20895, (Optr)PSend20896);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20898 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20894 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send0, (Optr)PSend20895, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20896, (Optr)&t_send2, (Optr)PSend20897, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20898, (Optr)&t_method_return);
    Block PBlock20892 = new_Block_with(PArray20893, empty_Array, PThreadedCode20894, 2, PSend20897, PSend20898);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20899 = new_Send((Optr)PBlock20892, SMB_value_, 1, (Optr)VAR_equiv_0_1);
    Array PThreadedCode20886 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20887, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20890, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20891, (Optr)&t_send1, (Optr)PSend20889, (Optr)&t_send1, (Optr)PSend20888, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20892, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send1, (Optr)PSend20899, (Optr)&t_method_return);
    Method PMethod20883 = new_Method_with(PArray20884, PArray20885, empty_Array, PThreadedCode20886, 2, PAssign20887, PSend20899);
    
    MethodClosure MC_SMB_utcOffset_ = new_MethodClosure((Method)PMethod20883, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_utcOffset_, MC_SMB_utcOffset_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray20901 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Variable VAR_comparandAsDateAndTime_0_1 = new_Variable_named(L"comparandAsDateAndTime", 0);
    Array PArray20902 = new_Array_with(1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20905 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20907 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20911 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode20910 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend20911, (Optr)&t_block_return);
    Block PBlock20909 = new_Block_with(empty_Array, empty_Array, PThreadedCode20910, 1, PSend20911);
    // ifTrue:. 
    Send PSend20908 = new_Send((Optr)PSend20907, SMB_ifTrue_, 1, (Optr)PBlock20909);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20913 = new_Send((Optr)VAR_comparand_0_0, SMB_asDateAndTime, 0);
    Assign PAssign20912 = new_Assign((Optr)VAR_comparandAsDateAndTime_0_1, (Optr)PSend20913);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20914 = new_Send((Optr)self, SMB_offset, 0);
    // offset. 
    Send PSend20915 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_offset, 0);
    // =. 
    Send PSend20916 = new_Send((Optr)PSend20914, SMB__equals_, 1, (Optr)PSend20915);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    // hasEqualTicks:. 
    Send PSend20920 = new_Send((Optr)self, SMB_hasEqualTicks_, 1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Array PThreadedCode20919 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send1, (Optr)PSend20920, (Optr)&t_block_return);
    Block PBlock20918 = new_Block_with(empty_Array, empty_Array, PThreadedCode20919, 1, PSend20920);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend20923 = new_Send((Optr)self, SMB_asUTC, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20924 = new_Send((Optr)PSend20923, SMB_ticks, 0);
    // asUTC. 
    Send PSend20925 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_asUTC, 0);
    // ticks. 
    Send PSend20926 = new_Send((Optr)PSend20925, SMB_ticks, 0);
    // =. 
    Send PSend20927 = new_Send((Optr)PSend20924, SMB__equals_, 1, (Optr)PSend20926);
    Array PThreadedCode20922 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20923, (Optr)&t_send0, (Optr)PSend20924, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend20925, (Optr)&t_send0, (Optr)PSend20926, (Optr)&t_send1, (Optr)PSend20927, (Optr)&t_block_return);
    Block PBlock20921 = new_Block_with(empty_Array, empty_Array, PThreadedCode20922, 1, PSend20927);
    // ifTrue:ifFalse:. 
    Send PSend20917 = new_Send((Optr)PSend20916, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20918, (Optr)PBlock20921);
    Array PThreadedCode20906 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20907, (Optr)&t_send_ifTrue_, (Optr)PSend20908, (Optr)PBlock20909, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20912, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20913, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20914, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend20915, (Optr)&t_send1, (Optr)PSend20916, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20917, (Optr)PBlock20918, (Optr)PBlock20921, (Optr)&t_method_return);
    Block PBlock20904 = new_Block_with(PArray20905, empty_Array, PThreadedCode20906, 3, PSend20908, PAssign20912, PSend20917);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20928 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20904);
    Array PThreadedCode20903 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20904, (Optr)&t_send1, (Optr)PSend20928, (Optr)&t_method_return);
    Method PMethod20900 = new_Method_with(PArray20901, PArray20902, empty_Array, PThreadedCode20903, 1, PSend20928);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20900, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_secondsSinceMidnight() {
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    Array PThreadedCode20930 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_method_return);
    Method PMethod20929 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20930, 1, slot_Chronology_DateAndTime_seconds);
    
    MethodClosure MC_SMB_secondsSinceMidnight = new_MethodClosure((Method)PMethod20929, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_secondsSinceMidnight, MC_SMB_secondsSinceMidnight);
}


static void init_SMB_normalize_ticks_base_() {
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    Variable VAR_i_0_0 = new_Variable_named(L"i", 0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Variable VAR_base_0_2 = new_Variable_named(L"base", 0);
    Array PArray20932 = new_Array_with(3, (Optr)VAR_i_0_0, (Optr)VAR_ticks_0_1, (Optr)VAR_base_0_2);
    Variable VAR_tick_0_3 = new_Variable_named(L"tick", 0);
    Variable VAR_quo_0_4 = new_Variable_named(L"quo", 0);
    Variable VAR_rem_0_5 = new_Variable_named(L"rem", 0);
    Array PArray20933 = new_Array_with(3, (Optr)VAR_tick_0_3, (Optr)VAR_quo_0_4, (Optr)VAR_rem_0_5);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend20936 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)VAR_i_0_0);
    Assign PAssign20935 = new_Assign((Optr)VAR_tick_0_3, (Optr)PSend20936);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20938 = new_Send((Optr)VAR_tick_0_3, SMB_quo_, 1, (Optr)VAR_base_0_2);
    Assign PAssign20937 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend20938);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20940 = new_Send((Optr)VAR_tick_0_3, SMB_rem_, 1, (Optr)VAR_base_0_2);
    Assign PAssign20939 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend20940);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20941 = new_Send((Optr)VAR_rem_0_5, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend20946 = new_Send((Optr)VAR_quo_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign20945 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend20946);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20948 = new_Send((Optr)VAR_base_0_2, SMB__plus_, 1, (Optr)VAR_rem_0_5);
    Assign PAssign20947 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend20948);
    Array PThreadedCode20944 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign20945, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20946, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20947, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send1, (Optr)PSend20948, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock20943 = new_Block_with(empty_Array, empty_Array, PThreadedCode20944, 2, PAssign20945, PAssign20947);
    // ifTrue:. 
    Send PSend20942 = new_Send((Optr)PSend20941, SMB_ifTrue_, 1, (Optr)PBlock20943);
    // -. 
    Send PSend20949 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // -. 
    Send PSend20950 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend20951 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)PSend20950);
    // +. 
    Send PSend20952 = new_Send((Optr)PSend20951, SMB__plus_, 1, (Optr)VAR_quo_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend20953 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)PSend20949, (Optr)PSend20952);
    // at:put:. 
    Send PSend20954 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)VAR_i_0_0, (Optr)VAR_rem_0_5);
    Array PThreadedCode20934 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push1, (Optr)PAssign20935, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_send1, (Optr)PSend20936, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20937, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend20938, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20939, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend20940, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send0, (Optr)PSend20941, (Optr)&t_send_ifTrue_, (Optr)PSend20942, (Optr)PBlock20943, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20949, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20950, (Optr)&t_send1, (Optr)PSend20951, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_send1, (Optr)PSend20952, (Optr)&t_send2, (Optr)PSend20953, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send2, (Optr)PSend20954, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20931 = new_Method_with(PArray20932, PArray20933, empty_Array, PThreadedCode20934, 7, PAssign20935, PAssign20937, PAssign20939, PSend20942, PSend20953, PSend20954, self);
    
    MethodClosure MC_SMB_normalize_ticks_base_ = new_MethodClosure((Method)PMethod20931, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_normalize_ticks_base_, MC_SMB_normalize_ticks_base_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray20956 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20959 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20961 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20962 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20963 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20961, (Optr)PSend20962);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20964 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20960 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20961, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20962, (Optr)&t_send2, (Optr)PSend20963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20964, (Optr)&t_method_return);
    Block PBlock20958 = new_Block_with(PArray20959, empty_Array, PThreadedCode20960, 2, PSend20963, PSend20964);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20965 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20966 = new_Send((Optr)PSend20965, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20967 = new_Send((Optr)PBlock20958, SMB_value_, 1, (Optr)PSend20966);
    Array PThreadedCode20957 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock20958, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20965, (Optr)&t_send0, (Optr)PSend20966, (Optr)&t_send1, (Optr)PSend20967, (Optr)&t_method_return);
    Method PMethod20955 = new_Method_with(PArray20956, empty_Array, empty_Array, PThreadedCode20957, 1, PSend20967);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod20955, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Array PThreadedCode20969 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20968 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20969, 1, self);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20968, Chronology_DateAndTime_Class);
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
    Send PSend20972 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20973 = new_Send((Optr)PSend20972, SMB_basicNew, 0);
    // class. 
    Send PSend20974 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend20975 = new_Send((Optr)PSend20974, SMB_localOffset, 0);
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // setJdn:seconds:offset:. 
    Send PSend20976 = new_Send((Optr)PSend20973, SMB_setJdn_seconds_offset_, 3, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)int_0_Const, (Optr)PSend20975);
    Array PThreadedCode20971 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20972, (Optr)&t_send0, (Optr)PSend20973, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20974, (Optr)&t_send0, (Optr)PSend20975, (Optr)&t_send3, (Optr)PSend20976, (Optr)&t_method_return);
    Method PMethod20970 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20971, 1, PSend20976);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod20970, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_midnight, MC_SMB_midnight);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20978 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_l_0_1 = new_Variable_named(L"l", 0);
    Variable VAR_n_0_2 = new_Variable_named(L"n", 0);
    Variable VAR_i_0_3 = new_Variable_named(L"i", 0);
    Variable VAR_j_0_4 = new_Variable_named(L"j", 0);
    Variable VAR_dd_0_5 = new_Variable_named(L"dd", 0);
    Variable VAR_mm_0_6 = new_Variable_named(L"mm", 0);
    Variable VAR_yyyy_0_7 = new_Variable_named(L"yyyy", 0);
    Array PArray20979 = new_Array_with(7, (Optr)VAR_l_0_1, (Optr)VAR_n_0_2, (Optr)VAR_i_0_3, (Optr)VAR_j_0_4, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_68569 = new_SmallInt(68569);
    Constant int_68569_Const = new_Constant((Optr)int_68569);
    // +. 
    Send PSend20982 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_68569_Const);
    Assign PAssign20981 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend20982);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // *. 
    Send PSend20985 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_4_Const);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_146097 = new_SmallInt(146097);
    Constant int_146097_Const = new_Constant((Optr)int_146097);
    // //. 
    Send PSend20984 = new_Send((Optr)PSend20985, SMB__quotient_, 1, (Optr)int_146097_Const);
    Assign PAssign20983 = new_Assign((Optr)VAR_n_0_2, (Optr)PSend20984);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // *. 
    Send PSend20990 = new_Send((Optr)VAR_n_0_2, SMB__times_, 1, (Optr)int_146097_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // +. 
    Send PSend20989 = new_Send((Optr)PSend20990, SMB__plus_, 1, (Optr)int_3_Const);
    // //. 
    Send PSend20988 = new_Send((Optr)PSend20989, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend20987 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend20988);
    Assign PAssign20986 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend20987);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20994 = new_Send((Optr)VAR_l_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_4000 = new_SmallInt(4000);
    Constant int_4000_Const = new_Constant((Optr)int_4000);
    // *. 
    Send PSend20993 = new_Send((Optr)PSend20994, SMB__times_, 1, (Optr)int_4000_Const);
    SmallInt int_1461001 = new_SmallInt(1461001);
    Constant int_1461001_Const = new_Constant((Optr)int_1461001);
    // //. 
    Send PSend20992 = new_Send((Optr)PSend20993, SMB__quotient_, 1, (Optr)int_1461001_Const);
    Assign PAssign20991 = new_Assign((Optr)VAR_i_0_3, (Optr)PSend20992);
    SmallInt int_1461 = new_SmallInt(1461);
    Constant int_1461_Const = new_Constant((Optr)int_1461);
    // *. 
    Send PSend20999 = new_Send((Optr)VAR_i_0_3, SMB__times_, 1, (Optr)int_1461_Const);
    // //. 
    Send PSend20998 = new_Send((Optr)PSend20999, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend20997 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend20998);
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // +. 
    Send PSend20996 = new_Send((Optr)PSend20997, SMB__plus_, 1, (Optr)int_31_Const);
    Assign PAssign20995 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend20996);
    SmallInt int_80 = new_SmallInt(80);
    Constant int_80_Const = new_Constant((Optr)int_80);
    // *. 
    Send PSend21002 = new_Send((Optr)int_80_Const, SMB__times_, 1, (Optr)VAR_l_0_1);
    SmallInt int_2447 = new_SmallInt(2447);
    Constant int_2447_Const = new_Constant((Optr)int_2447);
    // //. 
    Send PSend21001 = new_Send((Optr)PSend21002, SMB__quotient_, 1, (Optr)int_2447_Const);
    Assign PAssign21000 = new_Assign((Optr)VAR_j_0_4, (Optr)PSend21001);
    // *. 
    Send PSend21006 = new_Send((Optr)VAR_j_0_4, SMB__times_, 1, (Optr)int_2447_Const);
    // //. 
    Send PSend21005 = new_Send((Optr)PSend21006, SMB__quotient_, 1, (Optr)int_80_Const);
    // -. 
    Send PSend21004 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21005);
    Assign PAssign21003 = new_Assign((Optr)VAR_dd_0_5, (Optr)PSend21004);
    SmallInt int_11 = new_SmallInt(11);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // //. 
    Send PSend21008 = new_Send((Optr)VAR_j_0_4, SMB__quotient_, 1, (Optr)int_11_Const);
    Assign PAssign21007 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21008);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend21011 = new_Send((Optr)VAR_j_0_4, SMB__plus_, 1, (Optr)int_2_Const);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // *. 
    Send PSend21012 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_12_Const);
    // -. 
    Send PSend21010 = new_Send((Optr)PSend21011, SMB__minus_, 1, (Optr)PSend21012);
    Assign PAssign21009 = new_Assign((Optr)VAR_mm_0_6, (Optr)PSend21010);
    SmallInt int_49 = new_SmallInt(49);
    Constant int_49_Const = new_Constant((Optr)int_49);
    // -. 
    Send PSend21017 = new_Send((Optr)VAR_n_0_2, SMB__minus_, 1, (Optr)int_49_Const);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // *. 
    Send PSend21016 = new_Send((Optr)PSend21017, SMB__times_, 1, (Optr)int_100_Const);
    // +. 
    Send PSend21015 = new_Send((Optr)PSend21016, SMB__plus_, 1, (Optr)VAR_i_0_3);
    // +. 
    Send PSend21014 = new_Send((Optr)PSend21015, SMB__plus_, 1, (Optr)VAR_l_0_1);
    Assign PAssign21013 = new_Assign((Optr)VAR_yyyy_0_7, (Optr)PSend21014);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend21018 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_value_, 3, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Array PThreadedCode20980 = instantiate_Array_with(ThreadedCode_Class, 0, 177, (Optr)&t_push1, (Optr)PAssign20981, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push1, (Optr)int_68569, (Optr)&t_send1, (Optr)PSend20982, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20983, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20985, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend20984, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20986, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend20990, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20989, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20988, (Optr)&t_send1, (Optr)PSend20987, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20991, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20994, (Optr)&t_push1, (Optr)int_4000, (Optr)&t_send1, (Optr)PSend20993, (Optr)&t_push1, (Optr)int_1461001, (Optr)&t_send1, (Optr)PSend20992, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20995, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_push1, (Optr)int_1461, (Optr)&t_send1, (Optr)PSend20999, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20998, (Optr)&t_send1, (Optr)PSend20997, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend20996, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21000, (Optr)&t_push1, (Optr)int_80, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21002, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21001, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21003, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21006, (Optr)&t_push1, (Optr)int_80, (Optr)&t_send1, (Optr)PSend21005, (Optr)&t_send1, (Optr)PSend21004, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21007, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_11, (Optr)&t_send1, (Optr)PSend21008, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21009, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend21011, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21012, (Optr)&t_send1, (Optr)PSend21010, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21013, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_49, (Optr)&t_send1, (Optr)PSend21017, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend21016, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_send1, (Optr)PSend21015, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21014, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_dd_0_5, (Optr)&t_push_variable, (Optr)VAR_mm_0_6, (Optr)&t_push_variable, (Optr)VAR_yyyy_0_7, (Optr)&t_send3, (Optr)PSend21018, (Optr)&t_method_return);
    Method PMethod20977 = new_Method_with(PArray20978, PArray20979, empty_Array, PThreadedCode20980, 11, PAssign20981, PAssign20983, PAssign20986, PAssign20991, PAssign20995, PAssign21000, PAssign21003, PAssign21007, PAssign21009, PAssign21013, PSend21018);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod20977, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printYMDOn_() {
    Symbol SMB_printYMDOn_ = new_Symbol(L"printYMDOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21020 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend21022 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode21021 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend21022, (Optr)&t_method_return);
    Method PMethod21019 = new_Method_with(PArray21020, empty_Array, empty_Array, PThreadedCode21021, 1, PSend21022);
    
    MethodClosure MC_SMB_printYMDOn_ = new_MethodClosure((Method)PMethod21019, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_, MC_SMB_printYMDOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21025 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode21024 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send2, (Optr)PSend21025, (Optr)&t_method_return);
    Method PMethod21023 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21024, 1, PSend21025);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod21023, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray21029 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode21030 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_method_return);
    Block PBlock21028 = new_Block_with(PArray21029, empty_Array, PThreadedCode21030, 1, VAR_y_1_2);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21031 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21028);
    Array PThreadedCode21027 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21028, (Optr)&t_send1, (Optr)PSend21031, (Optr)&t_method_return);
    Method PMethod21026 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21027, 1, PSend21031);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod21026, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_printHMSOn_() {
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21033 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_h_0_1 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_2 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_3 = new_Variable_named(L"s", 0);
    Array PArray21034 = new_Array_with(3, (Optr)VAR_h_0_1, (Optr)VAR_m_0_2, (Optr)VAR_s_0_3);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21038 = new_Send((Optr)self, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend21037 = new_Send((Optr)PSend21038, SMB_abs, 0);
    Assign PAssign21036 = new_Assign((Optr)VAR_h_0_1, (Optr)PSend21037);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21041 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend21040 = new_Send((Optr)PSend21041, SMB_abs, 0);
    Assign PAssign21039 = new_Assign((Optr)VAR_m_0_2, (Optr)PSend21040);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21044 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend21043 = new_Send((Optr)PSend21044, SMB_abs, 0);
    Assign PAssign21042 = new_Assign((Optr)VAR_s_0_3, (Optr)PSend21043);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend21045 = new_Send((Optr)VAR_h_0_1, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9124 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9124_Const = new_Constant((Optr)char_9124);
    // <<. 
    Send PSend21049 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode21048 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend21049, (Optr)&t_block_return);
    Block PBlock21047 = new_Block_with(empty_Array, empty_Array, PThreadedCode21048, 1, PSend21049);
    // ifTrue:. 
    Send PSend21046 = new_Send((Optr)PSend21045, SMB_ifTrue_, 1, (Optr)PBlock21047);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21050 = new_Send((Optr)VAR_h_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend21051 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend21052 = new_Send((Optr)VAR_m_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21056 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode21055 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend21056, (Optr)&t_block_return);
    Block PBlock21054 = new_Block_with(empty_Array, empty_Array, PThreadedCode21055, 1, PSend21056);
    // ifTrue:. 
    Send PSend21053 = new_Send((Optr)PSend21052, SMB_ifTrue_, 1, (Optr)PBlock21054);
    // printOn:. 
    Send PSend21057 = new_Send((Optr)VAR_m_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21058 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend21059 = new_Send((Optr)VAR_s_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21063 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode21062 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend21063, (Optr)&t_block_return);
    Block PBlock21061 = new_Block_with(empty_Array, empty_Array, PThreadedCode21062, 1, PSend21063);
    // ifTrue:. 
    Send PSend21060 = new_Send((Optr)PSend21059, SMB_ifTrue_, 1, (Optr)PBlock21061);
    // printOn:. 
    Send PSend21064 = new_Send((Optr)VAR_s_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21035 = instantiate_Array_with(ThreadedCode_Class, 0, 93, (Optr)&t_push1, (Optr)PAssign21036, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21038, (Optr)&t_send0, (Optr)PSend21037, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21039, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21041, (Optr)&t_send0, (Optr)PSend21040, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21042, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21044, (Optr)&t_send0, (Optr)PSend21043, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21045, (Optr)&t_send_ifTrue_, (Optr)PSend21046, (Optr)PBlock21047, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21050, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21051, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21052, (Optr)&t_send_ifTrue_, (Optr)PSend21053, (Optr)PBlock21054, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21057, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21058, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21059, (Optr)&t_send_ifTrue_, (Optr)PSend21060, (Optr)PBlock21061, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21064, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21032 = new_Method_with(PArray21033, PArray21034, empty_Array, PThreadedCode21035, 12, PAssign21036, PAssign21039, PAssign21042, PSend21046, PSend21050, PSend21051, PSend21053, PSend21057, PSend21058, PSend21060, PSend21064, self);
    
    MethodClosure MC_SMB_printHMSOn_ = new_MethodClosure((Method)PMethod21032, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printHMSOn_, MC_SMB_printHMSOn_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray21066 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21069 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend21071 = new_Send((Optr)VAR_aJulianDayNumber_0_0, SMB_days, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21072 = new_Send((Optr)PSend21071, SMB_ticks, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21073 = new_Send((Optr)self, SMB_localOffset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21074 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21072, (Optr)PSend21073);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21075 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21070 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send0, (Optr)PSend21071, (Optr)&t_send0, (Optr)PSend21072, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21073, (Optr)&t_send2, (Optr)PSend21074, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21075, (Optr)&t_method_return);
    Block PBlock21068 = new_Block_with(PArray21069, empty_Array, PThreadedCode21070, 2, PSend21074, PSend21075);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21076 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21077 = new_Send((Optr)PBlock21068, SMB_value_, 1, (Optr)PSend21076);
    Array PThreadedCode21067 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21068, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21076, (Optr)&t_send1, (Optr)PSend21077, (Optr)&t_method_return);
    Method PMethod21065 = new_Method_with(PArray21066, empty_Array, empty_Array, PThreadedCode21067, 1, PSend21077);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod21065, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_localTimeZone() {
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend21083 = new_Send((Optr)PTimeZone_classReference, SMB_default, 0);
    Assign PAssign21082 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)PSend21083);
    Array PThreadedCode21081 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign21082, (Optr)&t_push_class_reference, (Optr)PTimeZone_classReference, (Optr)&t_send0, (Optr)PSend21083, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21080 = new_Block_with(empty_Array, empty_Array, PThreadedCode21081, 1, PAssign21082);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21084 = new_Send((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, SMB_ifNil_, 1, (Optr)PBlock21080);
    Array PThreadedCode21079 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)&t_push_closure, (Optr)PBlock21080, (Optr)&t_send1, (Optr)PSend21084, (Optr)&t_method_return);
    Method PMethod21078 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21079, 1, PSend21084);
    
    MethodClosure MC_SMB_localTimeZone = new_MethodClosure((Method)PMethod21078, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone, MC_SMB_localTimeZone);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend21087 = new_Send((Optr)self, SMB_midnight, 0);
    Array PThreadedCode21086 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21087, (Optr)&t_method_return);
    Method PMethod21085 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21086, 1, PSend21087);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod21085, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_epoch() {
    Symbol SMB_epoch = new_Symbol(L"epoch");
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21090 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend21091 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend21090);
    Array PThreadedCode21089 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21090, (Optr)&t_send1, (Optr)PSend21091, (Optr)&t_method_return);
    Method PMethod21088 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21089, 1, PSend21091);
    
    MethodClosure MC_SMB_epoch = new_MethodClosure((Method)PMethod21088, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_epoch, MC_SMB_epoch);
}


static void init_class_SMB_localTimeZone_() {
    Symbol SMB_localTimeZone_ = new_Symbol(L"localTimeZone:");
    Variable VAR_aTimeZone_0_0 = new_Variable_named(L"aTimeZone", 0);
    Array PArray21093 = new_Array_with(1, (Optr)VAR_aTimeZone_0_0);
    Assign PAssign21095 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)VAR_aTimeZone_0_0);
    Array PThreadedCode21094 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21095, (Optr)&t_push_variable, (Optr)VAR_aTimeZone_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21092 = new_Method_with(PArray21093, empty_Array, empty_Array, PThreadedCode21094, 2, PAssign21095, self);
    
    MethodClosure MC_SMB_localTimeZone_ = new_MethodClosure((Method)PMethod21092, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone_, MC_SMB_localTimeZone_);
}


static void init_class_SMB_localOffset() {
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21098 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21099 = new_Send((Optr)PSend21098, SMB_offset, 0);
    Array PThreadedCode21097 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21098, (Optr)&t_send0, (Optr)PSend21099, (Optr)&t_method_return);
    Method PMethod21096 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21097, 1, PSend21099);
    
    MethodClosure MC_SMB_localOffset = new_MethodClosure((Method)PMethod21096, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localOffset, MC_SMB_localOffset);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21102 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21103 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21104 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21105 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend21103, (Optr)PSend21104);
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21106 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21107 = new_Send((Optr)PSend21106, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21108 = new_Send((Optr)PSend21102, SMB_ticks_offset_, 2, (Optr)PSend21105, (Optr)PSend21107);
    Array PThreadedCode21101 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21102, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21103, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21104, (Optr)&t_send2, (Optr)PSend21105, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21106, (Optr)&t_send0, (Optr)PSend21107, (Optr)&t_send2, (Optr)PSend21108, (Optr)&t_method_return);
    Method PMethod21100 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21101, 1, PSend21108);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod21100, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_midnight() {
    Symbol SMB_midnight = new_Symbol(L"midnight");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend21111 = new_Send((Optr)self, SMB_now, 0);
    // midnight. 
    Send PSend21112 = new_Send((Optr)PSend21111, SMB_midnight, 0);
    Array PThreadedCode21110 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21111, (Optr)&t_send0, (Optr)PSend21112, (Optr)&t_method_return);
    Method PMethod21109 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21110, 1, PSend21112);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21109, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_midnight, MC_SMB_midnight);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21115 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Array PThreadedCode21114 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21115, (Optr)&t_method_return);
    Method PMethod21113 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21114, 1, PSend21115);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod21113, HEADER(Chronology_DateAndTime_Class));
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