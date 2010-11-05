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
    Send PSend20684 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20683 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20684, (Optr)&t_method_return);
    Method PMethod20682 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20683, 1, PSend20684);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20682, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20687 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_epoch = new_Symbol(L"epoch");
    // epoch. 
    Send PSend20688 = new_Send((Optr)PSend20687, SMB_epoch, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20689 = new_Send((Optr)self, SMB__minus_, 1, (Optr)PSend20688);
    // asSeconds. 
    Send PSend20690 = new_Send((Optr)PSend20689, SMB_asSeconds, 0);
    Array PThreadedCode20686 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20687, (Optr)&t_send0, (Optr)PSend20688, (Optr)&t_send1, (Optr)PSend20689, (Optr)&t_send0, (Optr)PSend20690, (Optr)&t_method_return);
    Method PMethod20685 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20686, 1, PSend20690);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20685, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20693 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20692 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20693, (Optr)&t_method_return);
    Method PMethod20691 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20692, 1, PSend20693);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20691, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20696 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20695 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20696, (Optr)&t_method_return);
    Method PMethod20694 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20695, 1, PSend20696);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20694, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode20698 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_method_return);
    Method PMethod20697 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20698, 1, slot_Chronology_DateAndTime_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod20697, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20701 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode20700 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20701, (Optr)&t_method_return);
    Method PMethod20699 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20700, 1, PSend20701);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20699, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_julianDayNumber() {
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    Array PThreadedCode20703 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_method_return);
    Method PMethod20702 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20703, 1, slot_Chronology_DateAndTime_jdn);
    
    MethodClosure MC_SMB_julianDayNumber = new_MethodClosure((Method)PMethod20702, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_julianDayNumber, MC_SMB_julianDayNumber);
}


static void init_SMB_dayOfMonth() {
    Symbol SMB_dayOfMonth = new_Symbol(L"dayOfMonth");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20707 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20708 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_method_return);
    Block PBlock20706 = new_Block_with(PArray20707, empty_Array, PThreadedCode20708, 1, VAR_d_1_0);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20709 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20706);
    Array PThreadedCode20705 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20706, (Optr)&t_send1, (Optr)PSend20709, (Optr)&t_method_return);
    Method PMethod20704 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20705, 1, PSend20709);
    
    MethodClosure MC_SMB_dayOfMonth = new_MethodClosure((Method)PMethod20704, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfMonth, MC_SMB_dayOfMonth);
}


static void init_SMB_ticks_offset_() {
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    Variable VAR_ticks_0_0 = new_Variable_named(L"ticks", 0);
    Variable VAR_utcOffset_0_1 = new_Variable_named(L"utcOffset", 0);
    Array PArray20711 = new_Array_with(2, (Optr)VAR_ticks_0_0, (Optr)VAR_utcOffset_0_1);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20713 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // normalize:ticks:base:. 
    Send PSend20714 = new_Send((Optr)self, SMB_normalize_ticks_base_, 3, (Optr)int_2_Const, (Optr)VAR_ticks_0_0, (Optr)PSend20713);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend20716 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign20715 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)PSend20716);
    // at:. 
    Send PSend20718 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20717 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)PSend20718);
    Assign PAssign20719 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_utcOffset_0_1);
    Array PThreadedCode20712 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20713, (Optr)&t_send3, (Optr)PSend20714, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20715, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20716, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20717, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20718, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20719, (Optr)&t_push_variable, (Optr)VAR_utcOffset_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20710 = new_Method_with(PArray20711, empty_Array, empty_Array, PThreadedCode20712, 5, PSend20714, PAssign20715, PAssign20717, PAssign20719, self);
    
    MethodClosure MC_SMB_ticks_offset_ = new_MethodClosure((Method)PMethod20710, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks_offset_, MC_SMB_ticks_offset_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20721 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Array PArray20722 = new_Array_with(1, (Optr)VAR_ticks_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20725 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign20724 = new_Assign((Optr)VAR_ticks_0_1, (Optr)PSend20725);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20726 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20727 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // ticks. 
    Send PSend20728 = new_Send((Optr)PSend20727, SMB_ticks, 0);
    Variable VAR_ticks1_1_0 = new_Variable_named(L"ticks1", 1);
    Variable VAR_dticks_1_1 = new_Variable_named(L"dticks", 1);
    Array PArray20730 = new_Array_with(2, (Optr)VAR_ticks1_1_0, (Optr)VAR_dticks_1_1);
    // +. 
    Send PSend20732 = new_Send((Optr)VAR_ticks1_1_0, SMB__plus_, 1, (Optr)VAR_dticks_1_1);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend20733 = new_Send((Optr)VAR_ticks_0_1, SMB_addLast_, 1, (Optr)PSend20732);
    Array PThreadedCode20731 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_ticks1_1_0, (Optr)&t_push_variable, (Optr)VAR_dticks_1_1, (Optr)&t_send1, (Optr)PSend20732, (Optr)&t_send1, (Optr)PSend20733, (Optr)&t_method_return);
    Block PBlock20729 = new_Block_with(PArray20730, empty_Array, PThreadedCode20731, 1, PSend20733);
    Symbol SMB_with_do_ = new_Symbol(L"with:do:");
    // with:do:. 
    Send PSend20734 = new_Send((Optr)PSend20726, SMB_with_do_, 2, (Optr)PSend20728, (Optr)PBlock20729);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20736 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20738 = new_Send((Optr)VAR_ticks_0_1, SMB_asArray, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20739 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20740 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20738, (Optr)PSend20739);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20741 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20737 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_send0, (Optr)PSend20738, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20739, (Optr)&t_send2, (Optr)PSend20740, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20741, (Optr)&t_method_return);
    Block PBlock20735 = new_Block_with(PArray20736, empty_Array, PThreadedCode20737, 2, PSend20740, PSend20741);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20742 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20743 = new_Send((Optr)PSend20742, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20744 = new_Send((Optr)PBlock20735, SMB_value_, 1, (Optr)PSend20743);
    Array PThreadedCode20723 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20724, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20725, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20726, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20727, (Optr)&t_send0, (Optr)PSend20728, (Optr)&t_push_closure, (Optr)PBlock20729, (Optr)&t_send2, (Optr)PSend20734, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20735, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20742, (Optr)&t_send0, (Optr)PSend20743, (Optr)&t_send1, (Optr)PSend20744, (Optr)&t_method_return);
    Method PMethod20720 = new_Method_with(PArray20721, PArray20722, empty_Array, PThreadedCode20723, 3, PAssign20724, PSend20734, PSend20744);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20720, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20746 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol  SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_asDateAndTime_Const = new_Constant((Optr)SMB_asDateAndTime);
    // respondsTo:. 
    Send PSend20748 = new_Send((Optr)VAR_operand_0_0, SMB_respondsTo_, 1, (Optr)SMB_asDateAndTime_Const);
    Variable VAR_lticks_1_0 = new_Variable_named(L"lticks", 1);
    Variable VAR_rticks_1_1 = new_Variable_named(L"rticks", 1);
    Array PArray20750 = new_Array_with(2, (Optr)VAR_lticks_1_0, (Optr)VAR_rticks_1_1);
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    // asLocal. 
    Send PSend20754 = new_Send((Optr)self, SMB_asLocal, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20753 = new_Send((Optr)PSend20754, SMB_ticks, 0);
    Assign PAssign20752 = new_Assign((Optr)VAR_lticks_1_0, (Optr)PSend20753);
    // asDateAndTime. 
    Send PSend20758 = new_Send((Optr)VAR_operand_0_0, SMB_asDateAndTime, 0);
    // asLocal. 
    Send PSend20757 = new_Send((Optr)PSend20758, SMB_asLocal, 0);
    // ticks. 
    Send PSend20756 = new_Send((Optr)PSend20757, SMB_ticks, 0);
    Assign PAssign20755 = new_Assign((Optr)VAR_rticks_1_1, (Optr)PSend20756);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20759 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20760 = new_Send((Optr)VAR_lticks_1_0, SMB_first, 0);
    // first. 
    Send PSend20761 = new_Send((Optr)VAR_rticks_1_1, SMB_first, 0);
    // -. 
    Send PSend20762 = new_Send((Optr)PSend20760, SMB__minus_, 1, (Optr)PSend20761);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20763 = new_Send((Optr)PSend20759, SMB__times_, 1, (Optr)PSend20762);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20764 = new_Send((Optr)VAR_lticks_1_0, SMB_second, 0);
    // second. 
    Send PSend20765 = new_Send((Optr)VAR_rticks_1_1, SMB_second, 0);
    // -. 
    Send PSend20766 = new_Send((Optr)PSend20764, SMB__minus_, 1, (Optr)PSend20765);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20767 = new_Send((Optr)PSend20763, SMB__plus_, 1, (Optr)PSend20766);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20768 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)PSend20767);
    Array PThreadedCode20751 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign20752, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20754, (Optr)&t_send0, (Optr)PSend20753, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20755, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20758, (Optr)&t_send0, (Optr)PSend20757, (Optr)&t_send0, (Optr)PSend20756, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20759, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20760, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20761, (Optr)&t_send1, (Optr)PSend20762, (Optr)&t_send1, (Optr)PSend20763, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20764, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20765, (Optr)&t_send1, (Optr)PSend20766, (Optr)&t_send1, (Optr)PSend20767, (Optr)&t_send1, (Optr)PSend20768, (Optr)&t_method_return);
    Block PBlock20749 = new_Block_with(empty_Array, PArray20750, PThreadedCode20751, 3, PAssign20752, PAssign20755, PSend20768);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20771 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    // +. 
    Send PSend20772 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20771);
    Array PThreadedCode20770 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20771, (Optr)&t_send1, (Optr)PSend20772, (Optr)&t_block_return);
    Block PBlock20769 = new_Block_with(empty_Array, empty_Array, PThreadedCode20770, 1, PSend20772);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend20773 = new_Send((Optr)PSend20748, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20749, (Optr)PBlock20769);
    Array PThreadedCode20747 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_push1, (Optr)SMB_asDateAndTime, (Optr)&t_send1, (Optr)PSend20748, (Optr)&t_push_closure, (Optr)PBlock20749, (Optr)&t_push_closure, (Optr)PBlock20769, (Optr)&t_send2, (Optr)PSend20773, (Optr)&t_method_return);
    Method PMethod20745 = new_Method_with(PArray20746, empty_Array, empty_Array, PThreadedCode20747, 1, PSend20773);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20745, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    Symbol SMB_month = new_Symbol(L"month");
    // month. 
    Send PSend20776 = new_Send((Optr)self, SMB_month, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20777 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20776);
    Array PThreadedCode20775 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20776, (Optr)&t_send1, (Optr)PSend20777, (Optr)&t_method_return);
    Method PMethod20774 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20775, 1, PSend20777);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod20774, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20780 = new_Send((Optr)Date_classReference, SMB_starting_, 1, (Optr)self);
    Array PThreadedCode20779 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20780, (Optr)&t_method_return);
    Method PMethod20778 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20779, 1, PSend20780);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20778, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_dayOfWeekAbbreviation() {
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    // dayOfWeekName. 
    Send PSend20783 = new_Send((Optr)self, SMB_dayOfWeekName, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20784 = new_Send((Optr)PSend20783, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    Array PThreadedCode20782 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20783, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20784, (Optr)&t_method_return);
    Method PMethod20781 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20782, 1, PSend20784);
    
    MethodClosure MC_SMB_dayOfWeekAbbreviation = new_MethodClosure((Method)PMethod20781, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekAbbreviation, MC_SMB_dayOfWeekAbbreviation);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20786 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    // printOn:withLeadingSpace:. 
    Send PSend20788 = new_Send((Optr)self, SMB_printOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode20787 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend20788, (Optr)&t_method_return);
    Method PMethod20785 = new_Method_with(PArray20786, empty_Array, empty_Array, PThreadedCode20787, 1, PSend20788);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20785, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_printYMDOn_withLeadingSpace_() {
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray20790 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_year_0_2 = new_Variable_named(L"year", 0);
    Variable VAR_month_0_3 = new_Variable_named(L"month", 0);
    Variable VAR_day_0_4 = new_Variable_named(L"day", 0);
    Array PArray20791 = new_Array_with(3, (Optr)VAR_year_0_2, (Optr)VAR_month_0_3, (Optr)VAR_day_0_4);
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20794 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Assign PAssign20796 = new_Assign((Optr)VAR_year_0_2, (Optr)VAR_y_1_2);
    Assign PAssign20797 = new_Assign((Optr)VAR_month_0_3, (Optr)VAR_m_1_1);
    Assign PAssign20798 = new_Assign((Optr)VAR_day_0_4, (Optr)VAR_d_1_0);
    Array PThreadedCode20795 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign20796, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20797, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20798, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock20793 = new_Block_with(PArray20794, empty_Array, PThreadedCode20795, 3, PAssign20796, PAssign20797, PAssign20798);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20799 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20793);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20800 = new_Send((Optr)VAR_year_0_2, SMB_negative, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_2173 = new_Character(L'-');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_2173_Const = new_Constant((Optr)char_2173);
    // nextPut:. 
    Send PSend20804 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPut_, 1, (Optr)char_2173_Const);
    Array PThreadedCode20803 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend20804, (Optr)&t_block_return);
    Block PBlock20802 = new_Block_with(empty_Array, empty_Array, PThreadedCode20803, 1, PSend20804);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend20810 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Array PThreadedCode20809 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend20810, (Optr)&t_block_return);
    Block PBlock20808 = new_Block_with(empty_Array, empty_Array, PThreadedCode20809, 1, PSend20810);
    // ifTrue:. 
    Send PSend20807 = new_Send((Optr)VAR_printLeadingSpaceToo_0_1, SMB_ifTrue_, 1, (Optr)PBlock20808);
    Array PThreadedCode20806 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20807, (Optr)PBlock20808, (Optr)&t_block_return);
    Block PBlock20805 = new_Block_with(empty_Array, empty_Array, PThreadedCode20806, 1, PSend20807);
    // ifTrue:ifFalse:. 
    Send PSend20801 = new_Send((Optr)PSend20800, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20802, (Optr)PBlock20805);
    SmallInt int_1000 = new_SmallInt(1000);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    // <. 
    Send PSend20811 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_1000_Const);
    Character char_9197 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    // <<. 
    Send PSend20815 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20814 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20815, (Optr)&t_block_return);
    Block PBlock20813 = new_Block_with(empty_Array, empty_Array, PThreadedCode20814, 1, PSend20815);
    // ifTrue:. 
    Send PSend20812 = new_Send((Optr)PSend20811, SMB_ifTrue_, 1, (Optr)PBlock20813);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // <. 
    Send PSend20816 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_100_Const);
    // <<. 
    Send PSend20820 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20819 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20820, (Optr)&t_block_return);
    Block PBlock20818 = new_Block_with(empty_Array, empty_Array, PThreadedCode20819, 1, PSend20820);
    // ifTrue:. 
    Send PSend20817 = new_Send((Optr)PSend20816, SMB_ifTrue_, 1, (Optr)PBlock20818);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20821 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20825 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20824 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20825, (Optr)&t_block_return);
    Block PBlock20823 = new_Block_with(empty_Array, empty_Array, PThreadedCode20824, 1, PSend20825);
    // ifTrue:. 
    Send PSend20822 = new_Send((Optr)PSend20821, SMB_ifTrue_, 1, (Optr)PBlock20823);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20826 = new_Send((Optr)VAR_year_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20827 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2173_Const);
    // <. 
    Send PSend20828 = new_Send((Optr)VAR_month_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20832 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20831 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20832, (Optr)&t_block_return);
    Block PBlock20830 = new_Block_with(empty_Array, empty_Array, PThreadedCode20831, 1, PSend20832);
    // ifTrue:. 
    Send PSend20829 = new_Send((Optr)PSend20828, SMB_ifTrue_, 1, (Optr)PBlock20830);
    // printOn:. 
    Send PSend20833 = new_Send((Optr)VAR_month_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20834 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2173_Const);
    // <. 
    Send PSend20835 = new_Send((Optr)VAR_day_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20839 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20838 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20839, (Optr)&t_block_return);
    Block PBlock20837 = new_Block_with(empty_Array, empty_Array, PThreadedCode20838, 1, PSend20839);
    // ifTrue:. 
    Send PSend20836 = new_Send((Optr)PSend20835, SMB_ifTrue_, 1, (Optr)PBlock20837);
    // printOn:. 
    Send PSend20840 = new_Send((Optr)VAR_day_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20792 = instantiate_Array_with(ThreadedCode_Class, 0, 101, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20793, (Optr)&t_send1, (Optr)PSend20799, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_send0, (Optr)PSend20800, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20801, (Optr)PBlock20802, (Optr)PBlock20805, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_send1, (Optr)PSend20811, (Optr)&t_send_ifTrue_, (Optr)PSend20812, (Optr)PBlock20813, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20816, (Optr)&t_send_ifTrue_, (Optr)PSend20817, (Optr)PBlock20818, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20821, (Optr)&t_send_ifTrue_, (Optr)PSend20822, (Optr)PBlock20823, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20826, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend20827, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20828, (Optr)&t_send_ifTrue_, (Optr)PSend20829, (Optr)PBlock20830, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20833, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend20834, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20835, (Optr)&t_send_ifTrue_, (Optr)PSend20836, (Optr)PBlock20837, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20840, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20789 = new_Method_with(PArray20790, PArray20791, empty_Array, PThreadedCode20792, 13, PSend20799, PSend20801, PSend20812, PSend20817, PSend20822, PSend20826, PSend20827, PSend20829, PSend20833, PSend20834, PSend20836, PSend20840, self);
    
    MethodClosure MC_SMB_printYMDOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20789, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_withLeadingSpace_, MC_SMB_printYMDOn_withLeadingSpace_);
}


static void init_SMB_dayOfWeek() {
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20843 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // rem:. 
    Send PSend20844 = new_Send((Optr)PSend20843, SMB_rem_, 1, (Optr)int_7_Const);
    // +. 
    Send PSend20845 = new_Send((Optr)PSend20844, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode20842 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20843, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20844, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20845, (Optr)&t_method_return);
    Method PMethod20841 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20842, 1, PSend20845);
    
    MethodClosure MC_SMB_dayOfWeek = new_MethodClosure((Method)PMethod20841, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeek, MC_SMB_dayOfWeek);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20848 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20849 = new_Send((Optr)PSend20848, SMB_seconds, 0);
    Array PThreadedCode20847 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20848, (Optr)&t_send0, (Optr)PSend20849, (Optr)&t_method_return);
    Method PMethod20846 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20847, 1, PSend20849);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20846, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20852 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20853 = new_Send((Optr)PSend20852, SMB_hours, 0);
    Array PThreadedCode20851 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20852, (Optr)&t_send0, (Optr)PSend20853, (Optr)&t_method_return);
    Method PMethod20850 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20851, 1, PSend20853);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20850, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20856 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20855 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20856, (Optr)&t_method_return);
    Method PMethod20854 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20855, 1, PSend20856);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20854, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20859 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20860 = new_Send((Optr)PSend20859, SMB_minutes, 0);
    Array PThreadedCode20858 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20859, (Optr)&t_send0, (Optr)PSend20860, (Optr)&t_method_return);
    Method PMethod20857 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20858, 1, PSend20860);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20857, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minute, MC_SMB_minute);
}


static void init_SMB_hasEqualTicks_() {
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20862 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    // julianDayNumber. 
    Send PSend20864 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_julianDayNumber, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20865 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__equals_, 1, (Optr)PSend20864);
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    // secondsSinceMidnight. 
    Send PSend20868 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_secondsSinceMidnight, 0);
    // =. 
    Send PSend20869 = new_Send((Optr)slot_Chronology_DateAndTime_seconds, SMB__equals_, 1, (Optr)PSend20868);
    Array PThreadedCode20867 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20868, (Optr)&t_send1, (Optr)PSend20869, (Optr)&t_block_return);
    Block PBlock20866 = new_Block_with(empty_Array, empty_Array, PThreadedCode20867, 1, PSend20869);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend20870 = new_Send((Optr)PSend20865, SMB_and_, 1, (Optr)PBlock20866);
    Array PThreadedCode20863 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20864, (Optr)&t_send1, (Optr)PSend20865, (Optr)&t_push_closure, (Optr)PBlock20866, (Optr)&t_send1, (Optr)PSend20870, (Optr)&t_method_return);
    Method PMethod20861 = new_Method_with(PArray20862, empty_Array, empty_Array, PThreadedCode20863, 1, PSend20870);
    
    MethodClosure MC_SMB_hasEqualTicks_ = new_MethodClosure((Method)PMethod20861, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hasEqualTicks_, MC_SMB_hasEqualTicks_);
}


static void init_SMB_month() {
    Symbol SMB_month = new_Symbol(L"month");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20874 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20875 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_method_return);
    Block PBlock20873 = new_Block_with(PArray20874, empty_Array, PThreadedCode20875, 1, VAR_m_1_1);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20876 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20873);
    Array PThreadedCode20872 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20873, (Optr)&t_send1, (Optr)PSend20876, (Optr)&t_method_return);
    Method PMethod20871 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20872, 1, PSend20876);
    
    MethodClosure MC_SMB_month = new_MethodClosure((Method)PMethod20871, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_month, MC_SMB_month);
}


static void init_SMB_asLocal() {
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20879 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20880 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend20881 = new_Send((Optr)PSend20880, SMB_localOffset, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20882 = new_Send((Optr)PSend20879, SMB__equals_, 1, (Optr)PSend20881);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20885 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock20884 = new_Block_with(empty_Array, empty_Array, PThreadedCode20885, 1, self);
    // class. 
    Send PSend20888 = new_Send((Optr)self, SMB_class, 0);
    // localOffset. 
    Send PSend20889 = new_Send((Optr)PSend20888, SMB_localOffset, 0);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    // utcOffset:. 
    Send PSend20890 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)PSend20889);
    Array PThreadedCode20887 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20888, (Optr)&t_send0, (Optr)PSend20889, (Optr)&t_send1, (Optr)PSend20890, (Optr)&t_block_return);
    Block PBlock20886 = new_Block_with(empty_Array, empty_Array, PThreadedCode20887, 1, PSend20890);
    // ifTrue:ifFalse:. 
    Send PSend20883 = new_Send((Optr)PSend20882, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20884, (Optr)PBlock20886);
    Array PThreadedCode20878 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20879, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20880, (Optr)&t_send0, (Optr)PSend20881, (Optr)&t_send1, (Optr)PSend20882, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20883, (Optr)PBlock20884, (Optr)PBlock20886, (Optr)&t_method_return);
    Method PMethod20877 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20878, 1, PSend20883);
    
    MethodClosure MC_SMB_asLocal = new_MethodClosure((Method)PMethod20877, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asLocal, MC_SMB_asLocal);
}


static void init_SMB_printOn_withLeadingSpace_() {
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray20892 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray20893 = new_Array_with(3, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend20895 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Character char_20896 = new_Character(L'T');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_20896_Const = new_Constant((Optr)char_20896);
    // <<. 
    Send PSend20897 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_20896_Const);
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    // printHMSOn:. 
    Send PSend20898 = new_Send((Optr)self, SMB_printHMSOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20899 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_positive, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_20903 = new_Character(L'+');
    Array PThreadedCode20902 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_20903, (Optr)&t_block_return);
    Constant char_20903_Const = new_Constant((Optr)char_20903);
    Block PBlock20901 = new_Block_with(empty_Array, empty_Array, PThreadedCode20902, 1, char_20903_Const);
    Character char_2173 = new_Character(L'-');
    Array PThreadedCode20905 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_block_return);
    Constant char_2173_Const = new_Constant((Optr)char_2173);
    Block PBlock20904 = new_Block_with(empty_Array, empty_Array, PThreadedCode20905, 1, char_2173_Const);
    // ifTrue:ifFalse:. 
    Send PSend20900 = new_Send((Optr)PSend20899, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20901, (Optr)PBlock20904);
    // <<. 
    Send PSend20906 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20900);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20909 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20908 = new_Send((Optr)PSend20909, SMB_abs, 0);
    Assign PAssign20907 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20908);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20910 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9197 = new_Character(L'0');
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    // <<. 
    Send PSend20914 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20913 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20914, (Optr)&t_block_return);
    Block PBlock20912 = new_Block_with(empty_Array, empty_Array, PThreadedCode20913, 1, PSend20914);
    // ifTrue:. 
    Send PSend20911 = new_Send((Optr)PSend20910, SMB_ifTrue_, 1, (Optr)PBlock20912);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20915 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20916 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20919 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_minutes, 0);
    // abs. 
    Send PSend20918 = new_Send((Optr)PSend20919, SMB_abs, 0);
    Assign PAssign20917 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20918);
    // <. 
    Send PSend20920 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20924 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20923 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20924, (Optr)&t_block_return);
    Block PBlock20922 = new_Block_with(empty_Array, empty_Array, PThreadedCode20923, 1, PSend20924);
    // ifTrue:. 
    Send PSend20921 = new_Send((Optr)PSend20920, SMB_ifTrue_, 1, (Optr)PBlock20922);
    // printOn:. 
    Send PSend20925 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20926 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20927 = new_Send((Optr)PSend20926, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // seconds. 
    Send PSend20934 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    // abs. 
    Send PSend20933 = new_Send((Optr)PSend20934, SMB_abs, 0);
    Symbol SMB_truncated = new_Symbol(L"truncated");
    // truncated. 
    Send PSend20932 = new_Send((Optr)PSend20933, SMB_truncated, 0);
    Assign PAssign20931 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20932);
    // <<. 
    Send PSend20935 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // printOn:. 
    Send PSend20936 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20930 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20931, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20934, (Optr)&t_send0, (Optr)PSend20933, (Optr)&t_send0, (Optr)PSend20932, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20935, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20936, (Optr)&t_block_return);
    Block PBlock20929 = new_Block_with(empty_Array, empty_Array, PThreadedCode20930, 3, PAssign20931, PSend20935, PSend20936);
    // ifFalse:. 
    Send PSend20928 = new_Send((Optr)PSend20927, SMB_ifFalse_, 1, (Optr)PBlock20929);
    Array PThreadedCode20894 = instantiate_Array_with(ThreadedCode_Class, 0, 107, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send2, (Optr)PSend20895, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_20896, (Optr)&t_send1, (Optr)PSend20897, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20898, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20899, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20900, (Optr)PBlock20901, (Optr)PBlock20904, (Optr)&t_send1, (Optr)PSend20906, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20907, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20909, (Optr)&t_send0, (Optr)PSend20908, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20910, (Optr)&t_send_ifTrue_, (Optr)PSend20911, (Optr)PBlock20912, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20915, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20916, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20917, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20919, (Optr)&t_send0, (Optr)PSend20918, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20920, (Optr)&t_send_ifTrue_, (Optr)PSend20921, (Optr)PBlock20922, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20925, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20926, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20927, (Optr)&t_send_ifFalse_, (Optr)PSend20928, (Optr)PBlock20929, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20891 = new_Method_with(PArray20892, PArray20893, empty_Array, PThreadedCode20894, 13, PSend20895, PSend20897, PSend20898, PSend20906, PAssign20907, PSend20911, PSend20915, PSend20916, PAssign20917, PSend20921, PSend20925, PSend20928, self);
    
    MethodClosure MC_SMB_printOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20891, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_withLeadingSpace_, MC_SMB_printOn_withLeadingSpace_);
}


static void init_SMB_setJdn_seconds_offset_() {
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    Variable VAR_julDays_0_0 = new_Variable_named(L"julDays", 0);
    Variable VAR_secs_0_1 = new_Variable_named(L"secs", 0);
    Variable VAR_anOffset_0_2 = new_Variable_named(L"anOffset", 0);
    Array PArray20938 = new_Array_with(3, (Optr)VAR_julDays_0_0, (Optr)VAR_secs_0_1, (Optr)VAR_anOffset_0_2);
    Assign PAssign20940 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)VAR_julDays_0_0);
    Assign PAssign20941 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)VAR_secs_0_1);
    Assign PAssign20942 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_anOffset_0_2);
    Array PThreadedCode20939 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign20940, (Optr)&t_push_variable, (Optr)VAR_julDays_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20941, (Optr)&t_push_variable, (Optr)VAR_secs_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20942, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20937 = new_Method_with(PArray20938, empty_Array, empty_Array, PThreadedCode20939, 4, PAssign20940, PAssign20941, PAssign20942, self);
    
    MethodClosure MC_SMB_setJdn_seconds_offset_ = new_MethodClosure((Method)PMethod20937, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_setJdn_seconds_offset_, MC_SMB_setJdn_seconds_offset_);
}


static void init_SMB_asUTC() {
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    Symbol SMB_isZero = new_Symbol(L"isZero");
    // isZero. 
    Send PSend20945 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_isZero, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20948 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock20947 = new_Block_with(empty_Array, empty_Array, PThreadedCode20948, 1, self);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // utcOffset:. 
    Send PSend20951 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)int_0_Const);
    Array PThreadedCode20950 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20951, (Optr)&t_block_return);
    Block PBlock20949 = new_Block_with(empty_Array, empty_Array, PThreadedCode20950, 1, PSend20951);
    // ifTrue:ifFalse:. 
    Send PSend20946 = new_Send((Optr)PSend20945, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20947, (Optr)PBlock20949);
    Array PThreadedCode20944 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20945, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20946, (Optr)PBlock20947, (Optr)PBlock20949, (Optr)&t_method_return);
    Method PMethod20943 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20944, 1, PSend20946);
    
    MethodClosure MC_SMB_asUTC = new_MethodClosure((Method)PMethod20943, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asUTC, MC_SMB_asUTC);
}


static void init_SMB_dayOfWeekName() {
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    // dayOfWeek. 
    Send PSend20954 = new_Send((Optr)self, SMB_dayOfWeek, 0);
    Symbol SMB_nameOfDay_ = new_Symbol(L"nameOfDay:");
    // nameOfDay:. 
    Send PSend20955 = new_Send((Optr)PWeek_classReference, SMB_nameOfDay_, 1, (Optr)PSend20954);
    Array PThreadedCode20953 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PWeek_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20954, (Optr)&t_send1, (Optr)PSend20955, (Optr)&t_method_return);
    Method PMethod20952 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20953, 1, PSend20955);
    
    MethodClosure MC_SMB_dayOfWeekName = new_MethodClosure((Method)PMethod20952, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekName, MC_SMB_dayOfWeekName);
}


static void init_SMB_utcOffset_() {
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray20957 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR_equiv_0_1 = new_Variable_named(L"equiv", 0);
    Array PArray20958 = new_Array_with(1, (Optr)VAR_equiv_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20963 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20964 = new_Send((Optr)self, SMB_offset, 0);
    // -. 
    Send PSend20962 = new_Send((Optr)PSend20963, SMB__minus_, 1, (Optr)PSend20964);
    // +. 
    Send PSend20961 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20962);
    Assign PAssign20960 = new_Assign((Optr)VAR_equiv_0_1, (Optr)PSend20961);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20966 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20968 = new_Send((Optr)VAR_equiv_0_1, SMB_ticks, 0);
    // asDuration. 
    Send PSend20969 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20970 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20968, (Optr)PSend20969);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20971 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20967 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send0, (Optr)PSend20968, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20969, (Optr)&t_send2, (Optr)PSend20970, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20971, (Optr)&t_method_return);
    Block PBlock20965 = new_Block_with(PArray20966, empty_Array, PThreadedCode20967, 2, PSend20970, PSend20971);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20972 = new_Send((Optr)PBlock20965, SMB_value_, 1, (Optr)VAR_equiv_0_1);
    Array PThreadedCode20959 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20960, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20963, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20964, (Optr)&t_send1, (Optr)PSend20962, (Optr)&t_send1, (Optr)PSend20961, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20965, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send1, (Optr)PSend20972, (Optr)&t_method_return);
    Method PMethod20956 = new_Method_with(PArray20957, PArray20958, empty_Array, PThreadedCode20959, 2, PAssign20960, PSend20972);
    
    MethodClosure MC_SMB_utcOffset_ = new_MethodClosure((Method)PMethod20956, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_utcOffset_, MC_SMB_utcOffset_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray20974 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Variable VAR_comparandAsDateAndTime_0_1 = new_Variable_named(L"comparandAsDateAndTime", 0);
    Array PArray20975 = new_Array_with(1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20978 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20980 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20984 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode20983 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend20984, (Optr)&t_block_return);
    Block PBlock20982 = new_Block_with(empty_Array, empty_Array, PThreadedCode20983, 1, PSend20984);
    // ifTrue:. 
    Send PSend20981 = new_Send((Optr)PSend20980, SMB_ifTrue_, 1, (Optr)PBlock20982);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20986 = new_Send((Optr)VAR_comparand_0_0, SMB_asDateAndTime, 0);
    Assign PAssign20985 = new_Assign((Optr)VAR_comparandAsDateAndTime_0_1, (Optr)PSend20986);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20987 = new_Send((Optr)self, SMB_offset, 0);
    // offset. 
    Send PSend20988 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_offset, 0);
    // =. 
    Send PSend20989 = new_Send((Optr)PSend20987, SMB__equals_, 1, (Optr)PSend20988);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    // hasEqualTicks:. 
    Send PSend20993 = new_Send((Optr)self, SMB_hasEqualTicks_, 1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Array PThreadedCode20992 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send1, (Optr)PSend20993, (Optr)&t_block_return);
    Block PBlock20991 = new_Block_with(empty_Array, empty_Array, PThreadedCode20992, 1, PSend20993);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend20996 = new_Send((Optr)self, SMB_asUTC, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20997 = new_Send((Optr)PSend20996, SMB_ticks, 0);
    // asUTC. 
    Send PSend20998 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_asUTC, 0);
    // ticks. 
    Send PSend20999 = new_Send((Optr)PSend20998, SMB_ticks, 0);
    // =. 
    Send PSend21000 = new_Send((Optr)PSend20997, SMB__equals_, 1, (Optr)PSend20999);
    Array PThreadedCode20995 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20996, (Optr)&t_send0, (Optr)PSend20997, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend20998, (Optr)&t_send0, (Optr)PSend20999, (Optr)&t_send1, (Optr)PSend21000, (Optr)&t_block_return);
    Block PBlock20994 = new_Block_with(empty_Array, empty_Array, PThreadedCode20995, 1, PSend21000);
    // ifTrue:ifFalse:. 
    Send PSend20990 = new_Send((Optr)PSend20989, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20991, (Optr)PBlock20994);
    Array PThreadedCode20979 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20980, (Optr)&t_send_ifTrue_, (Optr)PSend20981, (Optr)PBlock20982, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20985, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20986, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20987, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend20988, (Optr)&t_send1, (Optr)PSend20989, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20990, (Optr)PBlock20991, (Optr)PBlock20994, (Optr)&t_method_return);
    Block PBlock20977 = new_Block_with(PArray20978, empty_Array, PThreadedCode20979, 3, PSend20981, PAssign20985, PSend20990);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21001 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20977);
    Array PThreadedCode20976 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20977, (Optr)&t_send1, (Optr)PSend21001, (Optr)&t_method_return);
    Method PMethod20973 = new_Method_with(PArray20974, PArray20975, empty_Array, PThreadedCode20976, 1, PSend21001);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20973, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_secondsSinceMidnight() {
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    Array PThreadedCode21003 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_method_return);
    Method PMethod21002 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21003, 1, slot_Chronology_DateAndTime_seconds);
    
    MethodClosure MC_SMB_secondsSinceMidnight = new_MethodClosure((Method)PMethod21002, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_secondsSinceMidnight, MC_SMB_secondsSinceMidnight);
}


static void init_SMB_normalize_ticks_base_() {
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    Variable VAR_i_0_0 = new_Variable_named(L"i", 0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Variable VAR_base_0_2 = new_Variable_named(L"base", 0);
    Array PArray21005 = new_Array_with(3, (Optr)VAR_i_0_0, (Optr)VAR_ticks_0_1, (Optr)VAR_base_0_2);
    Variable VAR_tick_0_3 = new_Variable_named(L"tick", 0);
    Variable VAR_quo_0_4 = new_Variable_named(L"quo", 0);
    Variable VAR_rem_0_5 = new_Variable_named(L"rem", 0);
    Array PArray21006 = new_Array_with(3, (Optr)VAR_tick_0_3, (Optr)VAR_quo_0_4, (Optr)VAR_rem_0_5);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21009 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)VAR_i_0_0);
    Assign PAssign21008 = new_Assign((Optr)VAR_tick_0_3, (Optr)PSend21009);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend21011 = new_Send((Optr)VAR_tick_0_3, SMB_quo_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21010 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21011);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend21013 = new_Send((Optr)VAR_tick_0_3, SMB_rem_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21012 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21013);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend21014 = new_Send((Optr)VAR_rem_0_5, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend21019 = new_Send((Optr)VAR_quo_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign21018 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21019);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend21021 = new_Send((Optr)VAR_base_0_2, SMB__plus_, 1, (Optr)VAR_rem_0_5);
    Assign PAssign21020 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21021);
    Array PThreadedCode21017 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign21018, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21019, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21020, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send1, (Optr)PSend21021, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21016 = new_Block_with(empty_Array, empty_Array, PThreadedCode21017, 2, PAssign21018, PAssign21020);
    // ifTrue:. 
    Send PSend21015 = new_Send((Optr)PSend21014, SMB_ifTrue_, 1, (Optr)PBlock21016);
    // -. 
    Send PSend21022 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // -. 
    Send PSend21023 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend21024 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)PSend21023);
    // +. 
    Send PSend21025 = new_Send((Optr)PSend21024, SMB__plus_, 1, (Optr)VAR_quo_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend21026 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)PSend21022, (Optr)PSend21025);
    // at:put:. 
    Send PSend21027 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)VAR_i_0_0, (Optr)VAR_rem_0_5);
    Array PThreadedCode21007 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push1, (Optr)PAssign21008, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_send1, (Optr)PSend21009, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21010, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21011, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21012, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21013, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send0, (Optr)PSend21014, (Optr)&t_send_ifTrue_, (Optr)PSend21015, (Optr)PBlock21016, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21022, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21023, (Optr)&t_send1, (Optr)PSend21024, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_send1, (Optr)PSend21025, (Optr)&t_send2, (Optr)PSend21026, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send2, (Optr)PSend21027, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21004 = new_Method_with(PArray21005, PArray21006, empty_Array, PThreadedCode21007, 7, PAssign21008, PAssign21010, PAssign21012, PSend21015, PSend21026, PSend21027, self);
    
    MethodClosure MC_SMB_normalize_ticks_base_ = new_MethodClosure((Method)PMethod21004, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_normalize_ticks_base_, MC_SMB_normalize_ticks_base_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray21029 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21032 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21034 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend21035 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21036 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21034, (Optr)PSend21035);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21037 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21033 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21034, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21035, (Optr)&t_send2, (Optr)PSend21036, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21037, (Optr)&t_method_return);
    Block PBlock21031 = new_Block_with(PArray21032, empty_Array, PThreadedCode21033, 2, PSend21036, PSend21037);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend21038 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21039 = new_Send((Optr)PSend21038, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21040 = new_Send((Optr)PBlock21031, SMB_value_, 1, (Optr)PSend21039);
    Array PThreadedCode21030 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock21031, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21038, (Optr)&t_send0, (Optr)PSend21039, (Optr)&t_send1, (Optr)PSend21040, (Optr)&t_method_return);
    Method PMethod21028 = new_Method_with(PArray21029, empty_Array, empty_Array, PThreadedCode21030, 1, PSend21040);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21028, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Array PThreadedCode21042 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21041 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21042, 1, self);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod21041, Chronology_DateAndTime_Class);
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
    Send PSend21045 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21046 = new_Send((Optr)PSend21045, SMB_basicNew, 0);
    // class. 
    Send PSend21047 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21048 = new_Send((Optr)PSend21047, SMB_localOffset, 0);
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // setJdn:seconds:offset:. 
    Send PSend21049 = new_Send((Optr)PSend21046, SMB_setJdn_seconds_offset_, 3, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)int_0_Const, (Optr)PSend21048);
    Array PThreadedCode21044 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21045, (Optr)&t_send0, (Optr)PSend21046, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21047, (Optr)&t_send0, (Optr)PSend21048, (Optr)&t_send3, (Optr)PSend21049, (Optr)&t_method_return);
    Method PMethod21043 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21044, 1, PSend21049);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21043, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_midnight, MC_SMB_midnight);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21051 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_l_0_1 = new_Variable_named(L"l", 0);
    Variable VAR_n_0_2 = new_Variable_named(L"n", 0);
    Variable VAR_i_0_3 = new_Variable_named(L"i", 0);
    Variable VAR_j_0_4 = new_Variable_named(L"j", 0);
    Variable VAR_dd_0_5 = new_Variable_named(L"dd", 0);
    Variable VAR_mm_0_6 = new_Variable_named(L"mm", 0);
    Variable VAR_yyyy_0_7 = new_Variable_named(L"yyyy", 0);
    Array PArray21052 = new_Array_with(7, (Optr)VAR_l_0_1, (Optr)VAR_n_0_2, (Optr)VAR_i_0_3, (Optr)VAR_j_0_4, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_68569 = new_SmallInt(68569);
    Constant int_68569_Const = new_Constant((Optr)int_68569);
    // +. 
    Send PSend21055 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_68569_Const);
    Assign PAssign21054 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21055);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // *. 
    Send PSend21058 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_4_Const);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_146097 = new_SmallInt(146097);
    Constant int_146097_Const = new_Constant((Optr)int_146097);
    // //. 
    Send PSend21057 = new_Send((Optr)PSend21058, SMB__quotient_, 1, (Optr)int_146097_Const);
    Assign PAssign21056 = new_Assign((Optr)VAR_n_0_2, (Optr)PSend21057);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // *. 
    Send PSend21063 = new_Send((Optr)VAR_n_0_2, SMB__times_, 1, (Optr)int_146097_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // +. 
    Send PSend21062 = new_Send((Optr)PSend21063, SMB__plus_, 1, (Optr)int_3_Const);
    // //. 
    Send PSend21061 = new_Send((Optr)PSend21062, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21060 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21061);
    Assign PAssign21059 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21060);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21067 = new_Send((Optr)VAR_l_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_4000 = new_SmallInt(4000);
    Constant int_4000_Const = new_Constant((Optr)int_4000);
    // *. 
    Send PSend21066 = new_Send((Optr)PSend21067, SMB__times_, 1, (Optr)int_4000_Const);
    SmallInt int_1461001 = new_SmallInt(1461001);
    Constant int_1461001_Const = new_Constant((Optr)int_1461001);
    // //. 
    Send PSend21065 = new_Send((Optr)PSend21066, SMB__quotient_, 1, (Optr)int_1461001_Const);
    Assign PAssign21064 = new_Assign((Optr)VAR_i_0_3, (Optr)PSend21065);
    SmallInt int_1461 = new_SmallInt(1461);
    Constant int_1461_Const = new_Constant((Optr)int_1461);
    // *. 
    Send PSend21072 = new_Send((Optr)VAR_i_0_3, SMB__times_, 1, (Optr)int_1461_Const);
    // //. 
    Send PSend21071 = new_Send((Optr)PSend21072, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21070 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21071);
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // +. 
    Send PSend21069 = new_Send((Optr)PSend21070, SMB__plus_, 1, (Optr)int_31_Const);
    Assign PAssign21068 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21069);
    SmallInt int_80 = new_SmallInt(80);
    Constant int_80_Const = new_Constant((Optr)int_80);
    // *. 
    Send PSend21075 = new_Send((Optr)int_80_Const, SMB__times_, 1, (Optr)VAR_l_0_1);
    SmallInt int_2447 = new_SmallInt(2447);
    Constant int_2447_Const = new_Constant((Optr)int_2447);
    // //. 
    Send PSend21074 = new_Send((Optr)PSend21075, SMB__quotient_, 1, (Optr)int_2447_Const);
    Assign PAssign21073 = new_Assign((Optr)VAR_j_0_4, (Optr)PSend21074);
    // *. 
    Send PSend21079 = new_Send((Optr)VAR_j_0_4, SMB__times_, 1, (Optr)int_2447_Const);
    // //. 
    Send PSend21078 = new_Send((Optr)PSend21079, SMB__quotient_, 1, (Optr)int_80_Const);
    // -. 
    Send PSend21077 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21078);
    Assign PAssign21076 = new_Assign((Optr)VAR_dd_0_5, (Optr)PSend21077);
    SmallInt int_11 = new_SmallInt(11);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // //. 
    Send PSend21081 = new_Send((Optr)VAR_j_0_4, SMB__quotient_, 1, (Optr)int_11_Const);
    Assign PAssign21080 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21081);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend21084 = new_Send((Optr)VAR_j_0_4, SMB__plus_, 1, (Optr)int_2_Const);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // *. 
    Send PSend21085 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_12_Const);
    // -. 
    Send PSend21083 = new_Send((Optr)PSend21084, SMB__minus_, 1, (Optr)PSend21085);
    Assign PAssign21082 = new_Assign((Optr)VAR_mm_0_6, (Optr)PSend21083);
    SmallInt int_49 = new_SmallInt(49);
    Constant int_49_Const = new_Constant((Optr)int_49);
    // -. 
    Send PSend21090 = new_Send((Optr)VAR_n_0_2, SMB__minus_, 1, (Optr)int_49_Const);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // *. 
    Send PSend21089 = new_Send((Optr)PSend21090, SMB__times_, 1, (Optr)int_100_Const);
    // +. 
    Send PSend21088 = new_Send((Optr)PSend21089, SMB__plus_, 1, (Optr)VAR_i_0_3);
    // +. 
    Send PSend21087 = new_Send((Optr)PSend21088, SMB__plus_, 1, (Optr)VAR_l_0_1);
    Assign PAssign21086 = new_Assign((Optr)VAR_yyyy_0_7, (Optr)PSend21087);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend21091 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_value_, 3, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Array PThreadedCode21053 = instantiate_Array_with(ThreadedCode_Class, 0, 177, (Optr)&t_push1, (Optr)PAssign21054, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push1, (Optr)int_68569, (Optr)&t_send1, (Optr)PSend21055, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21056, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21058, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21057, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21059, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21063, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend21062, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21061, (Optr)&t_send1, (Optr)PSend21060, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21064, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21067, (Optr)&t_push1, (Optr)int_4000, (Optr)&t_send1, (Optr)PSend21066, (Optr)&t_push1, (Optr)int_1461001, (Optr)&t_send1, (Optr)PSend21065, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21068, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_push1, (Optr)int_1461, (Optr)&t_send1, (Optr)PSend21072, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21071, (Optr)&t_send1, (Optr)PSend21070, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend21069, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21073, (Optr)&t_push1, (Optr)int_80, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21075, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21074, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21076, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21079, (Optr)&t_push1, (Optr)int_80, (Optr)&t_send1, (Optr)PSend21078, (Optr)&t_send1, (Optr)PSend21077, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21080, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_11, (Optr)&t_send1, (Optr)PSend21081, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21082, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend21084, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21085, (Optr)&t_send1, (Optr)PSend21083, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21086, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_49, (Optr)&t_send1, (Optr)PSend21090, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend21089, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_send1, (Optr)PSend21088, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21087, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_dd_0_5, (Optr)&t_push_variable, (Optr)VAR_mm_0_6, (Optr)&t_push_variable, (Optr)VAR_yyyy_0_7, (Optr)&t_send3, (Optr)PSend21091, (Optr)&t_method_return);
    Method PMethod21050 = new_Method_with(PArray21051, PArray21052, empty_Array, PThreadedCode21053, 11, PAssign21054, PAssign21056, PAssign21059, PAssign21064, PAssign21068, PAssign21073, PAssign21076, PAssign21080, PAssign21082, PAssign21086, PSend21091);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod21050, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printYMDOn_() {
    Symbol SMB_printYMDOn_ = new_Symbol(L"printYMDOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21093 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend21095 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode21094 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend21095, (Optr)&t_method_return);
    Method PMethod21092 = new_Method_with(PArray21093, empty_Array, empty_Array, PThreadedCode21094, 1, PSend21095);
    
    MethodClosure MC_SMB_printYMDOn_ = new_MethodClosure((Method)PMethod21092, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_, MC_SMB_printYMDOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21098 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode21097 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send2, (Optr)PSend21098, (Optr)&t_method_return);
    Method PMethod21096 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21097, 1, PSend21098);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod21096, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray21102 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode21103 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_method_return);
    Block PBlock21101 = new_Block_with(PArray21102, empty_Array, PThreadedCode21103, 1, VAR_y_1_2);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21104 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21101);
    Array PThreadedCode21100 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21101, (Optr)&t_send1, (Optr)PSend21104, (Optr)&t_method_return);
    Method PMethod21099 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21100, 1, PSend21104);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod21099, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_printHMSOn_() {
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21106 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_h_0_1 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_2 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_3 = new_Variable_named(L"s", 0);
    Array PArray21107 = new_Array_with(3, (Optr)VAR_h_0_1, (Optr)VAR_m_0_2, (Optr)VAR_s_0_3);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21111 = new_Send((Optr)self, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend21110 = new_Send((Optr)PSend21111, SMB_abs, 0);
    Assign PAssign21109 = new_Assign((Optr)VAR_h_0_1, (Optr)PSend21110);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21114 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend21113 = new_Send((Optr)PSend21114, SMB_abs, 0);
    Assign PAssign21112 = new_Assign((Optr)VAR_m_0_2, (Optr)PSend21113);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21117 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend21116 = new_Send((Optr)PSend21117, SMB_abs, 0);
    Assign PAssign21115 = new_Assign((Optr)VAR_s_0_3, (Optr)PSend21116);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend21118 = new_Send((Optr)VAR_h_0_1, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9197 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    // <<. 
    Send PSend21122 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode21121 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend21122, (Optr)&t_block_return);
    Block PBlock21120 = new_Block_with(empty_Array, empty_Array, PThreadedCode21121, 1, PSend21122);
    // ifTrue:. 
    Send PSend21119 = new_Send((Optr)PSend21118, SMB_ifTrue_, 1, (Optr)PBlock21120);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21123 = new_Send((Optr)VAR_h_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend21124 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend21125 = new_Send((Optr)VAR_m_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21129 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode21128 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend21129, (Optr)&t_block_return);
    Block PBlock21127 = new_Block_with(empty_Array, empty_Array, PThreadedCode21128, 1, PSend21129);
    // ifTrue:. 
    Send PSend21126 = new_Send((Optr)PSend21125, SMB_ifTrue_, 1, (Optr)PBlock21127);
    // printOn:. 
    Send PSend21130 = new_Send((Optr)VAR_m_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21131 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend21132 = new_Send((Optr)VAR_s_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21136 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode21135 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend21136, (Optr)&t_block_return);
    Block PBlock21134 = new_Block_with(empty_Array, empty_Array, PThreadedCode21135, 1, PSend21136);
    // ifTrue:. 
    Send PSend21133 = new_Send((Optr)PSend21132, SMB_ifTrue_, 1, (Optr)PBlock21134);
    // printOn:. 
    Send PSend21137 = new_Send((Optr)VAR_s_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21108 = instantiate_Array_with(ThreadedCode_Class, 0, 93, (Optr)&t_push1, (Optr)PAssign21109, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21111, (Optr)&t_send0, (Optr)PSend21110, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21112, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21114, (Optr)&t_send0, (Optr)PSend21113, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21115, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21117, (Optr)&t_send0, (Optr)PSend21116, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21118, (Optr)&t_send_ifTrue_, (Optr)PSend21119, (Optr)PBlock21120, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21123, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend21124, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21125, (Optr)&t_send_ifTrue_, (Optr)PSend21126, (Optr)PBlock21127, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21130, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend21131, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21132, (Optr)&t_send_ifTrue_, (Optr)PSend21133, (Optr)PBlock21134, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21137, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21105 = new_Method_with(PArray21106, PArray21107, empty_Array, PThreadedCode21108, 12, PAssign21109, PAssign21112, PAssign21115, PSend21119, PSend21123, PSend21124, PSend21126, PSend21130, PSend21131, PSend21133, PSend21137, self);
    
    MethodClosure MC_SMB_printHMSOn_ = new_MethodClosure((Method)PMethod21105, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printHMSOn_, MC_SMB_printHMSOn_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray21139 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21142 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend21144 = new_Send((Optr)VAR_aJulianDayNumber_0_0, SMB_days, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21145 = new_Send((Optr)PSend21144, SMB_ticks, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21146 = new_Send((Optr)self, SMB_localOffset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21147 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21145, (Optr)PSend21146);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21148 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21143 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send0, (Optr)PSend21144, (Optr)&t_send0, (Optr)PSend21145, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21146, (Optr)&t_send2, (Optr)PSend21147, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21148, (Optr)&t_method_return);
    Block PBlock21141 = new_Block_with(PArray21142, empty_Array, PThreadedCode21143, 2, PSend21147, PSend21148);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21149 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21150 = new_Send((Optr)PBlock21141, SMB_value_, 1, (Optr)PSend21149);
    Array PThreadedCode21140 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21141, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21149, (Optr)&t_send1, (Optr)PSend21150, (Optr)&t_method_return);
    Method PMethod21138 = new_Method_with(PArray21139, empty_Array, empty_Array, PThreadedCode21140, 1, PSend21150);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod21138, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_localTimeZone() {
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend21156 = new_Send((Optr)PTimeZone_classReference, SMB_default, 0);
    Assign PAssign21155 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)PSend21156);
    Array PThreadedCode21154 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign21155, (Optr)&t_push_class_reference, (Optr)PTimeZone_classReference, (Optr)&t_send0, (Optr)PSend21156, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21153 = new_Block_with(empty_Array, empty_Array, PThreadedCode21154, 1, PAssign21155);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21157 = new_Send((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, SMB_ifNil_, 1, (Optr)PBlock21153);
    Array PThreadedCode21152 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)&t_push_closure, (Optr)PBlock21153, (Optr)&t_send1, (Optr)PSend21157, (Optr)&t_method_return);
    Method PMethod21151 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21152, 1, PSend21157);
    
    MethodClosure MC_SMB_localTimeZone = new_MethodClosure((Method)PMethod21151, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone, MC_SMB_localTimeZone);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend21160 = new_Send((Optr)self, SMB_midnight, 0);
    Array PThreadedCode21159 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21160, (Optr)&t_method_return);
    Method PMethod21158 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21159, 1, PSend21160);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod21158, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_epoch() {
    Symbol SMB_epoch = new_Symbol(L"epoch");
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21163 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend21164 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend21163);
    Array PThreadedCode21162 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21163, (Optr)&t_send1, (Optr)PSend21164, (Optr)&t_method_return);
    Method PMethod21161 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21162, 1, PSend21164);
    
    MethodClosure MC_SMB_epoch = new_MethodClosure((Method)PMethod21161, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_epoch, MC_SMB_epoch);
}


static void init_class_SMB_localTimeZone_() {
    Symbol SMB_localTimeZone_ = new_Symbol(L"localTimeZone:");
    Variable VAR_aTimeZone_0_0 = new_Variable_named(L"aTimeZone", 0);
    Array PArray21166 = new_Array_with(1, (Optr)VAR_aTimeZone_0_0);
    Assign PAssign21168 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)VAR_aTimeZone_0_0);
    Array PThreadedCode21167 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21168, (Optr)&t_push_variable, (Optr)VAR_aTimeZone_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21165 = new_Method_with(PArray21166, empty_Array, empty_Array, PThreadedCode21167, 2, PAssign21168, self);
    
    MethodClosure MC_SMB_localTimeZone_ = new_MethodClosure((Method)PMethod21165, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone_, MC_SMB_localTimeZone_);
}


static void init_class_SMB_localOffset() {
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21171 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21172 = new_Send((Optr)PSend21171, SMB_offset, 0);
    Array PThreadedCode21170 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21171, (Optr)&t_send0, (Optr)PSend21172, (Optr)&t_method_return);
    Method PMethod21169 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21170, 1, PSend21172);
    
    MethodClosure MC_SMB_localOffset = new_MethodClosure((Method)PMethod21169, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localOffset, MC_SMB_localOffset);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21175 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21176 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21177 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21178 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend21176, (Optr)PSend21177);
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21179 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21180 = new_Send((Optr)PSend21179, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21181 = new_Send((Optr)PSend21175, SMB_ticks_offset_, 2, (Optr)PSend21178, (Optr)PSend21180);
    Array PThreadedCode21174 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21175, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21176, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21177, (Optr)&t_send2, (Optr)PSend21178, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21179, (Optr)&t_send0, (Optr)PSend21180, (Optr)&t_send2, (Optr)PSend21181, (Optr)&t_method_return);
    Method PMethod21173 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21174, 1, PSend21181);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod21173, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_midnight() {
    Symbol SMB_midnight = new_Symbol(L"midnight");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend21184 = new_Send((Optr)self, SMB_now, 0);
    // midnight. 
    Send PSend21185 = new_Send((Optr)PSend21184, SMB_midnight, 0);
    Array PThreadedCode21183 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21184, (Optr)&t_send0, (Optr)PSend21185, (Optr)&t_method_return);
    Method PMethod21182 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21183, 1, PSend21185);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21182, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_midnight, MC_SMB_midnight);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21188 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Array PThreadedCode21187 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21188, (Optr)&t_method_return);
    Method PMethod21186 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21187, 1, PSend21188);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod21186, HEADER(Chronology_DateAndTime_Class));
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