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
    Send PSend20695 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20694 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20695, (Optr)&t_method_return);
    Method PMethod20693 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20694, 1, PSend20695);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20693, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20698 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_epoch = new_Symbol(L"epoch");
    // epoch. 
    Send PSend20699 = new_Send((Optr)PSend20698, SMB_epoch, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20700 = new_Send((Optr)self, SMB__minus_, 1, (Optr)PSend20699);
    // asSeconds. 
    Send PSend20701 = new_Send((Optr)PSend20700, SMB_asSeconds, 0);
    Array PThreadedCode20697 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20698, (Optr)&t_send0, (Optr)PSend20699, (Optr)&t_send1, (Optr)PSend20700, (Optr)&t_send0, (Optr)PSend20701, (Optr)&t_method_return);
    Method PMethod20696 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20697, 1, PSend20701);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20696, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20704 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20703 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20704, (Optr)&t_method_return);
    Method PMethod20702 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20703, 1, PSend20704);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20702, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20707 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20706 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20707, (Optr)&t_method_return);
    Method PMethod20705 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20706, 1, PSend20707);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20705, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode20709 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_method_return);
    Method PMethod20708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20709, 1, slot_Chronology_DateAndTime_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod20708, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20712 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode20711 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20712, (Optr)&t_method_return);
    Method PMethod20710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20711, 1, PSend20712);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20710, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_julianDayNumber() {
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    Array PThreadedCode20714 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_method_return);
    Method PMethod20713 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20714, 1, slot_Chronology_DateAndTime_jdn);
    
    MethodClosure MC_SMB_julianDayNumber = new_MethodClosure((Method)PMethod20713, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_julianDayNumber, MC_SMB_julianDayNumber);
}


static void init_SMB_dayOfMonth() {
    Symbol SMB_dayOfMonth = new_Symbol(L"dayOfMonth");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20718 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20719 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_method_return);
    Block PBlock20717 = new_Block_with(PArray20718, empty_Array, PThreadedCode20719, 1, VAR_d_1_0);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20720 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20717);
    Array PThreadedCode20716 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20717, (Optr)&t_send1, (Optr)PSend20720, (Optr)&t_method_return);
    Method PMethod20715 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20716, 1, PSend20720);
    
    MethodClosure MC_SMB_dayOfMonth = new_MethodClosure((Method)PMethod20715, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfMonth, MC_SMB_dayOfMonth);
}


static void init_SMB_ticks_offset_() {
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    Variable VAR_ticks_0_0 = new_Variable_named(L"ticks", 0);
    Variable VAR_utcOffset_0_1 = new_Variable_named(L"utcOffset", 0);
    Array PArray20722 = new_Array_with(2, (Optr)VAR_ticks_0_0, (Optr)VAR_utcOffset_0_1);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20724 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // normalize:ticks:base:. 
    Send PSend20725 = new_Send((Optr)self, SMB_normalize_ticks_base_, 3, (Optr)int_2_Const, (Optr)VAR_ticks_0_0, (Optr)PSend20724);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend20727 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign20726 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)PSend20727);
    // at:. 
    Send PSend20729 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20728 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)PSend20729);
    Assign PAssign20730 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_utcOffset_0_1);
    Array PThreadedCode20723 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20724, (Optr)&t_send3, (Optr)PSend20725, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20726, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20727, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20728, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20729, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20730, (Optr)&t_push_variable, (Optr)VAR_utcOffset_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20721 = new_Method_with(PArray20722, empty_Array, empty_Array, PThreadedCode20723, 5, PSend20725, PAssign20726, PAssign20728, PAssign20730, self);
    
    MethodClosure MC_SMB_ticks_offset_ = new_MethodClosure((Method)PMethod20721, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks_offset_, MC_SMB_ticks_offset_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20732 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Array PArray20733 = new_Array_with(1, (Optr)VAR_ticks_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20736 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign20735 = new_Assign((Optr)VAR_ticks_0_1, (Optr)PSend20736);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20737 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20738 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // ticks. 
    Send PSend20739 = new_Send((Optr)PSend20738, SMB_ticks, 0);
    Variable VAR_ticks1_1_0 = new_Variable_named(L"ticks1", 1);
    Variable VAR_dticks_1_1 = new_Variable_named(L"dticks", 1);
    Array PArray20741 = new_Array_with(2, (Optr)VAR_ticks1_1_0, (Optr)VAR_dticks_1_1);
    // +. 
    Send PSend20743 = new_Send((Optr)VAR_ticks1_1_0, SMB__plus_, 1, (Optr)VAR_dticks_1_1);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend20744 = new_Send((Optr)VAR_ticks_0_1, SMB_addLast_, 1, (Optr)PSend20743);
    Array PThreadedCode20742 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_ticks1_1_0, (Optr)&t_push_variable, (Optr)VAR_dticks_1_1, (Optr)&t_send1, (Optr)PSend20743, (Optr)&t_send1, (Optr)PSend20744, (Optr)&t_method_return);
    Block PBlock20740 = new_Block_with(PArray20741, empty_Array, PThreadedCode20742, 1, PSend20744);
    Symbol SMB_with_do_ = new_Symbol(L"with:do:");
    // with:do:. 
    Send PSend20745 = new_Send((Optr)PSend20737, SMB_with_do_, 2, (Optr)PSend20739, (Optr)PBlock20740);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20747 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20749 = new_Send((Optr)VAR_ticks_0_1, SMB_asArray, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20750 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20751 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20749, (Optr)PSend20750);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20752 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20748 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_send0, (Optr)PSend20749, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20750, (Optr)&t_send2, (Optr)PSend20751, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20752, (Optr)&t_method_return);
    Block PBlock20746 = new_Block_with(PArray20747, empty_Array, PThreadedCode20748, 2, PSend20751, PSend20752);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20753 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20754 = new_Send((Optr)PSend20753, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20755 = new_Send((Optr)PBlock20746, SMB_value_, 1, (Optr)PSend20754);
    Array PThreadedCode20734 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20735, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20736, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20737, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20738, (Optr)&t_send0, (Optr)PSend20739, (Optr)&t_push_closure, (Optr)PBlock20740, (Optr)&t_send2, (Optr)PSend20745, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20746, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20753, (Optr)&t_send0, (Optr)PSend20754, (Optr)&t_send1, (Optr)PSend20755, (Optr)&t_method_return);
    Method PMethod20731 = new_Method_with(PArray20732, PArray20733, empty_Array, PThreadedCode20734, 3, PAssign20735, PSend20745, PSend20755);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20731, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20757 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol  SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_asDateAndTime_Const = new_Constant((Optr)SMB_asDateAndTime);
    // respondsTo:. 
    Send PSend20759 = new_Send((Optr)VAR_operand_0_0, SMB_respondsTo_, 1, (Optr)SMB_asDateAndTime_Const);
    Variable VAR_lticks_1_0 = new_Variable_named(L"lticks", 1);
    Variable VAR_rticks_1_1 = new_Variable_named(L"rticks", 1);
    Array PArray20761 = new_Array_with(2, (Optr)VAR_lticks_1_0, (Optr)VAR_rticks_1_1);
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    // asLocal. 
    Send PSend20765 = new_Send((Optr)self, SMB_asLocal, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20764 = new_Send((Optr)PSend20765, SMB_ticks, 0);
    Assign PAssign20763 = new_Assign((Optr)VAR_lticks_1_0, (Optr)PSend20764);
    // asDateAndTime. 
    Send PSend20769 = new_Send((Optr)VAR_operand_0_0, SMB_asDateAndTime, 0);
    // asLocal. 
    Send PSend20768 = new_Send((Optr)PSend20769, SMB_asLocal, 0);
    // ticks. 
    Send PSend20767 = new_Send((Optr)PSend20768, SMB_ticks, 0);
    Assign PAssign20766 = new_Assign((Optr)VAR_rticks_1_1, (Optr)PSend20767);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20770 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20771 = new_Send((Optr)VAR_lticks_1_0, SMB_first, 0);
    // first. 
    Send PSend20772 = new_Send((Optr)VAR_rticks_1_1, SMB_first, 0);
    // -. 
    Send PSend20773 = new_Send((Optr)PSend20771, SMB__minus_, 1, (Optr)PSend20772);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20774 = new_Send((Optr)PSend20770, SMB__times_, 1, (Optr)PSend20773);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20775 = new_Send((Optr)VAR_lticks_1_0, SMB_second, 0);
    // second. 
    Send PSend20776 = new_Send((Optr)VAR_rticks_1_1, SMB_second, 0);
    // -. 
    Send PSend20777 = new_Send((Optr)PSend20775, SMB__minus_, 1, (Optr)PSend20776);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20778 = new_Send((Optr)PSend20774, SMB__plus_, 1, (Optr)PSend20777);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20779 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)PSend20778);
    Array PThreadedCode20762 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign20763, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20765, (Optr)&t_send0, (Optr)PSend20764, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20766, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20769, (Optr)&t_send0, (Optr)PSend20768, (Optr)&t_send0, (Optr)PSend20767, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20770, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20771, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20772, (Optr)&t_send1, (Optr)PSend20773, (Optr)&t_send1, (Optr)PSend20774, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20775, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20776, (Optr)&t_send1, (Optr)PSend20777, (Optr)&t_send1, (Optr)PSend20778, (Optr)&t_send1, (Optr)PSend20779, (Optr)&t_method_return);
    Block PBlock20760 = new_Block_with(empty_Array, PArray20761, PThreadedCode20762, 3, PAssign20763, PAssign20766, PSend20779);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20782 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    // +. 
    Send PSend20783 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20782);
    Array PThreadedCode20781 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20782, (Optr)&t_send1, (Optr)PSend20783, (Optr)&t_block_return);
    Block PBlock20780 = new_Block_with(empty_Array, empty_Array, PThreadedCode20781, 1, PSend20783);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend20784 = new_Send((Optr)PSend20759, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20760, (Optr)PBlock20780);
    Array PThreadedCode20758 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_push1, (Optr)SMB_asDateAndTime, (Optr)&t_send1, (Optr)PSend20759, (Optr)&t_push_closure, (Optr)PBlock20760, (Optr)&t_push_closure, (Optr)PBlock20780, (Optr)&t_send2, (Optr)PSend20784, (Optr)&t_method_return);
    Method PMethod20756 = new_Method_with(PArray20757, empty_Array, empty_Array, PThreadedCode20758, 1, PSend20784);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20756, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    Symbol SMB_month = new_Symbol(L"month");
    // month. 
    Send PSend20787 = new_Send((Optr)self, SMB_month, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20788 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20787);
    Array PThreadedCode20786 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20787, (Optr)&t_send1, (Optr)PSend20788, (Optr)&t_method_return);
    Method PMethod20785 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20786, 1, PSend20788);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod20785, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20791 = new_Send((Optr)Date_classReference, SMB_starting_, 1, (Optr)self);
    Array PThreadedCode20790 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20791, (Optr)&t_method_return);
    Method PMethod20789 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20790, 1, PSend20791);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20789, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_dayOfWeekAbbreviation() {
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    // dayOfWeekName. 
    Send PSend20794 = new_Send((Optr)self, SMB_dayOfWeekName, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20795 = new_Send((Optr)PSend20794, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    Array PThreadedCode20793 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20794, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20795, (Optr)&t_method_return);
    Method PMethod20792 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20793, 1, PSend20795);
    
    MethodClosure MC_SMB_dayOfWeekAbbreviation = new_MethodClosure((Method)PMethod20792, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekAbbreviation, MC_SMB_dayOfWeekAbbreviation);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20797 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    // printOn:withLeadingSpace:. 
    Send PSend20799 = new_Send((Optr)self, SMB_printOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode20798 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend20799, (Optr)&t_method_return);
    Method PMethod20796 = new_Method_with(PArray20797, empty_Array, empty_Array, PThreadedCode20798, 1, PSend20799);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20796, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_printYMDOn_withLeadingSpace_() {
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray20801 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_year_0_2 = new_Variable_named(L"year", 0);
    Variable VAR_month_0_3 = new_Variable_named(L"month", 0);
    Variable VAR_day_0_4 = new_Variable_named(L"day", 0);
    Array PArray20802 = new_Array_with(3, (Optr)VAR_year_0_2, (Optr)VAR_month_0_3, (Optr)VAR_day_0_4);
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20805 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Assign PAssign20807 = new_Assign((Optr)VAR_year_0_2, (Optr)VAR_y_1_2);
    Assign PAssign20808 = new_Assign((Optr)VAR_month_0_3, (Optr)VAR_m_1_1);
    Assign PAssign20809 = new_Assign((Optr)VAR_day_0_4, (Optr)VAR_d_1_0);
    Array PThreadedCode20806 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign20807, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20808, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20809, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock20804 = new_Block_with(PArray20805, empty_Array, PThreadedCode20806, 3, PAssign20807, PAssign20808, PAssign20809);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20810 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20804);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20811 = new_Send((Optr)VAR_year_0_2, SMB_negative, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_2182 = new_Character(L'-');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    // nextPut:. 
    Send PSend20815 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPut_, 1, (Optr)char_2182_Const);
    Array PThreadedCode20814 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend20815, (Optr)&t_block_return);
    Block PBlock20813 = new_Block_with(empty_Array, empty_Array, PThreadedCode20814, 1, PSend20815);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend20821 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Array PThreadedCode20820 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend20821, (Optr)&t_block_return);
    Block PBlock20819 = new_Block_with(empty_Array, empty_Array, PThreadedCode20820, 1, PSend20821);
    // ifTrue:. 
    Send PSend20818 = new_Send((Optr)VAR_printLeadingSpaceToo_0_1, SMB_ifTrue_, 1, (Optr)PBlock20819);
    Array PThreadedCode20817 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20818, (Optr)PBlock20819, (Optr)&t_block_return);
    Block PBlock20816 = new_Block_with(empty_Array, empty_Array, PThreadedCode20817, 1, PSend20818);
    // ifTrue:ifFalse:. 
    Send PSend20812 = new_Send((Optr)PSend20811, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20813, (Optr)PBlock20816);
    SmallInt int_1000 = new_SmallInt(1000);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    // <. 
    Send PSend20822 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_1000_Const);
    Character char_9208 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9208_Const = new_Constant((Optr)char_9208);
    // <<. 
    Send PSend20826 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20825 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20826, (Optr)&t_block_return);
    Block PBlock20824 = new_Block_with(empty_Array, empty_Array, PThreadedCode20825, 1, PSend20826);
    // ifTrue:. 
    Send PSend20823 = new_Send((Optr)PSend20822, SMB_ifTrue_, 1, (Optr)PBlock20824);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // <. 
    Send PSend20827 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_100_Const);
    // <<. 
    Send PSend20831 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20830 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20831, (Optr)&t_block_return);
    Block PBlock20829 = new_Block_with(empty_Array, empty_Array, PThreadedCode20830, 1, PSend20831);
    // ifTrue:. 
    Send PSend20828 = new_Send((Optr)PSend20827, SMB_ifTrue_, 1, (Optr)PBlock20829);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20832 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20836 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20835 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20836, (Optr)&t_block_return);
    Block PBlock20834 = new_Block_with(empty_Array, empty_Array, PThreadedCode20835, 1, PSend20836);
    // ifTrue:. 
    Send PSend20833 = new_Send((Optr)PSend20832, SMB_ifTrue_, 1, (Optr)PBlock20834);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20837 = new_Send((Optr)VAR_year_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20838 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    // <. 
    Send PSend20839 = new_Send((Optr)VAR_month_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20843 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20842 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20843, (Optr)&t_block_return);
    Block PBlock20841 = new_Block_with(empty_Array, empty_Array, PThreadedCode20842, 1, PSend20843);
    // ifTrue:. 
    Send PSend20840 = new_Send((Optr)PSend20839, SMB_ifTrue_, 1, (Optr)PBlock20841);
    // printOn:. 
    Send PSend20844 = new_Send((Optr)VAR_month_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20845 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    // <. 
    Send PSend20846 = new_Send((Optr)VAR_day_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20850 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20849 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20850, (Optr)&t_block_return);
    Block PBlock20848 = new_Block_with(empty_Array, empty_Array, PThreadedCode20849, 1, PSend20850);
    // ifTrue:. 
    Send PSend20847 = new_Send((Optr)PSend20846, SMB_ifTrue_, 1, (Optr)PBlock20848);
    // printOn:. 
    Send PSend20851 = new_Send((Optr)VAR_day_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20803 = instantiate_Array_with(ThreadedCode_Class, 0, 101, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20804, (Optr)&t_send1, (Optr)PSend20810, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_send0, (Optr)PSend20811, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20812, (Optr)PBlock20813, (Optr)PBlock20816, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_send1, (Optr)PSend20822, (Optr)&t_send_ifTrue_, (Optr)PSend20823, (Optr)PBlock20824, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20827, (Optr)&t_send_ifTrue_, (Optr)PSend20828, (Optr)PBlock20829, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20832, (Optr)&t_send_ifTrue_, (Optr)PSend20833, (Optr)PBlock20834, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20837, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend20838, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20839, (Optr)&t_send_ifTrue_, (Optr)PSend20840, (Optr)PBlock20841, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20844, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend20845, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20846, (Optr)&t_send_ifTrue_, (Optr)PSend20847, (Optr)PBlock20848, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20851, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20800 = new_Method_with(PArray20801, PArray20802, empty_Array, PThreadedCode20803, 13, PSend20810, PSend20812, PSend20823, PSend20828, PSend20833, PSend20837, PSend20838, PSend20840, PSend20844, PSend20845, PSend20847, PSend20851, self);
    
    MethodClosure MC_SMB_printYMDOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20800, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_withLeadingSpace_, MC_SMB_printYMDOn_withLeadingSpace_);
}


static void init_SMB_dayOfWeek() {
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20854 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // rem:. 
    Send PSend20855 = new_Send((Optr)PSend20854, SMB_rem_, 1, (Optr)int_7_Const);
    // +. 
    Send PSend20856 = new_Send((Optr)PSend20855, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode20853 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20854, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20855, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20856, (Optr)&t_method_return);
    Method PMethod20852 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20853, 1, PSend20856);
    
    MethodClosure MC_SMB_dayOfWeek = new_MethodClosure((Method)PMethod20852, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeek, MC_SMB_dayOfWeek);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20859 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20860 = new_Send((Optr)PSend20859, SMB_seconds, 0);
    Array PThreadedCode20858 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20859, (Optr)&t_send0, (Optr)PSend20860, (Optr)&t_method_return);
    Method PMethod20857 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20858, 1, PSend20860);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20857, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20863 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20864 = new_Send((Optr)PSend20863, SMB_hours, 0);
    Array PThreadedCode20862 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20863, (Optr)&t_send0, (Optr)PSend20864, (Optr)&t_method_return);
    Method PMethod20861 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20862, 1, PSend20864);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20861, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20867 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20866 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20867, (Optr)&t_method_return);
    Method PMethod20865 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20866, 1, PSend20867);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20865, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20870 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20871 = new_Send((Optr)PSend20870, SMB_minutes, 0);
    Array PThreadedCode20869 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20870, (Optr)&t_send0, (Optr)PSend20871, (Optr)&t_method_return);
    Method PMethod20868 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20869, 1, PSend20871);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20868, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minute, MC_SMB_minute);
}


static void init_SMB_hasEqualTicks_() {
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20873 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    // julianDayNumber. 
    Send PSend20875 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_julianDayNumber, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20876 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__equals_, 1, (Optr)PSend20875);
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    // secondsSinceMidnight. 
    Send PSend20879 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_secondsSinceMidnight, 0);
    // =. 
    Send PSend20880 = new_Send((Optr)slot_Chronology_DateAndTime_seconds, SMB__equals_, 1, (Optr)PSend20879);
    Array PThreadedCode20878 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20879, (Optr)&t_send1, (Optr)PSend20880, (Optr)&t_block_return);
    Block PBlock20877 = new_Block_with(empty_Array, empty_Array, PThreadedCode20878, 1, PSend20880);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend20881 = new_Send((Optr)PSend20876, SMB_and_, 1, (Optr)PBlock20877);
    Array PThreadedCode20874 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20875, (Optr)&t_send1, (Optr)PSend20876, (Optr)&t_push_closure, (Optr)PBlock20877, (Optr)&t_send1, (Optr)PSend20881, (Optr)&t_method_return);
    Method PMethod20872 = new_Method_with(PArray20873, empty_Array, empty_Array, PThreadedCode20874, 1, PSend20881);
    
    MethodClosure MC_SMB_hasEqualTicks_ = new_MethodClosure((Method)PMethod20872, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hasEqualTicks_, MC_SMB_hasEqualTicks_);
}


static void init_SMB_month() {
    Symbol SMB_month = new_Symbol(L"month");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20885 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20886 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_method_return);
    Block PBlock20884 = new_Block_with(PArray20885, empty_Array, PThreadedCode20886, 1, VAR_m_1_1);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20887 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20884);
    Array PThreadedCode20883 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20884, (Optr)&t_send1, (Optr)PSend20887, (Optr)&t_method_return);
    Method PMethod20882 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20883, 1, PSend20887);
    
    MethodClosure MC_SMB_month = new_MethodClosure((Method)PMethod20882, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_month, MC_SMB_month);
}


static void init_SMB_asLocal() {
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20890 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20891 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend20892 = new_Send((Optr)PSend20891, SMB_localOffset, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20893 = new_Send((Optr)PSend20890, SMB__equals_, 1, (Optr)PSend20892);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20896 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock20895 = new_Block_with(empty_Array, empty_Array, PThreadedCode20896, 1, self);
    // class. 
    Send PSend20899 = new_Send((Optr)self, SMB_class, 0);
    // localOffset. 
    Send PSend20900 = new_Send((Optr)PSend20899, SMB_localOffset, 0);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    // utcOffset:. 
    Send PSend20901 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)PSend20900);
    Array PThreadedCode20898 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20899, (Optr)&t_send0, (Optr)PSend20900, (Optr)&t_send1, (Optr)PSend20901, (Optr)&t_block_return);
    Block PBlock20897 = new_Block_with(empty_Array, empty_Array, PThreadedCode20898, 1, PSend20901);
    // ifTrue:ifFalse:. 
    Send PSend20894 = new_Send((Optr)PSend20893, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20895, (Optr)PBlock20897);
    Array PThreadedCode20889 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20890, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20891, (Optr)&t_send0, (Optr)PSend20892, (Optr)&t_send1, (Optr)PSend20893, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20894, (Optr)PBlock20895, (Optr)PBlock20897, (Optr)&t_method_return);
    Method PMethod20888 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20889, 1, PSend20894);
    
    MethodClosure MC_SMB_asLocal = new_MethodClosure((Method)PMethod20888, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asLocal, MC_SMB_asLocal);
}


static void init_SMB_printOn_withLeadingSpace_() {
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray20903 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray20904 = new_Array_with(3, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend20906 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Character char_20907 = new_Character(L'T');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_20907_Const = new_Constant((Optr)char_20907);
    // <<. 
    Send PSend20908 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_20907_Const);
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    // printHMSOn:. 
    Send PSend20909 = new_Send((Optr)self, SMB_printHMSOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20910 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_positive, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_20914 = new_Character(L'+');
    Array PThreadedCode20913 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_20914, (Optr)&t_block_return);
    Constant char_20914_Const = new_Constant((Optr)char_20914);
    Block PBlock20912 = new_Block_with(empty_Array, empty_Array, PThreadedCode20913, 1, char_20914_Const);
    Character char_2182 = new_Character(L'-');
    Array PThreadedCode20916 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_block_return);
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    Block PBlock20915 = new_Block_with(empty_Array, empty_Array, PThreadedCode20916, 1, char_2182_Const);
    // ifTrue:ifFalse:. 
    Send PSend20911 = new_Send((Optr)PSend20910, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20912, (Optr)PBlock20915);
    // <<. 
    Send PSend20917 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20911);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20920 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20919 = new_Send((Optr)PSend20920, SMB_abs, 0);
    Assign PAssign20918 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20919);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20921 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9208 = new_Character(L'0');
    Constant char_9208_Const = new_Constant((Optr)char_9208);
    // <<. 
    Send PSend20925 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20924 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20925, (Optr)&t_block_return);
    Block PBlock20923 = new_Block_with(empty_Array, empty_Array, PThreadedCode20924, 1, PSend20925);
    // ifTrue:. 
    Send PSend20922 = new_Send((Optr)PSend20921, SMB_ifTrue_, 1, (Optr)PBlock20923);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20926 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20927 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20930 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_minutes, 0);
    // abs. 
    Send PSend20929 = new_Send((Optr)PSend20930, SMB_abs, 0);
    Assign PAssign20928 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20929);
    // <. 
    Send PSend20931 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20935 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20934 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20935, (Optr)&t_block_return);
    Block PBlock20933 = new_Block_with(empty_Array, empty_Array, PThreadedCode20934, 1, PSend20935);
    // ifTrue:. 
    Send PSend20932 = new_Send((Optr)PSend20931, SMB_ifTrue_, 1, (Optr)PBlock20933);
    // printOn:. 
    Send PSend20936 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20937 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20938 = new_Send((Optr)PSend20937, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // seconds. 
    Send PSend20945 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    // abs. 
    Send PSend20944 = new_Send((Optr)PSend20945, SMB_abs, 0);
    Symbol SMB_truncated = new_Symbol(L"truncated");
    // truncated. 
    Send PSend20943 = new_Send((Optr)PSend20944, SMB_truncated, 0);
    Assign PAssign20942 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20943);
    // <<. 
    Send PSend20946 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // printOn:. 
    Send PSend20947 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20941 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20942, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20945, (Optr)&t_send0, (Optr)PSend20944, (Optr)&t_send0, (Optr)PSend20943, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20946, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20947, (Optr)&t_block_return);
    Block PBlock20940 = new_Block_with(empty_Array, empty_Array, PThreadedCode20941, 3, PAssign20942, PSend20946, PSend20947);
    // ifFalse:. 
    Send PSend20939 = new_Send((Optr)PSend20938, SMB_ifFalse_, 1, (Optr)PBlock20940);
    Array PThreadedCode20905 = instantiate_Array_with(ThreadedCode_Class, 0, 107, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send2, (Optr)PSend20906, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_20907, (Optr)&t_send1, (Optr)PSend20908, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20909, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20910, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20911, (Optr)PBlock20912, (Optr)PBlock20915, (Optr)&t_send1, (Optr)PSend20917, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20918, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20920, (Optr)&t_send0, (Optr)PSend20919, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20921, (Optr)&t_send_ifTrue_, (Optr)PSend20922, (Optr)PBlock20923, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20926, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20927, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20928, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20930, (Optr)&t_send0, (Optr)PSend20929, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20931, (Optr)&t_send_ifTrue_, (Optr)PSend20932, (Optr)PBlock20933, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20936, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20937, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20938, (Optr)&t_send_ifFalse_, (Optr)PSend20939, (Optr)PBlock20940, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20902 = new_Method_with(PArray20903, PArray20904, empty_Array, PThreadedCode20905, 13, PSend20906, PSend20908, PSend20909, PSend20917, PAssign20918, PSend20922, PSend20926, PSend20927, PAssign20928, PSend20932, PSend20936, PSend20939, self);
    
    MethodClosure MC_SMB_printOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20902, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_withLeadingSpace_, MC_SMB_printOn_withLeadingSpace_);
}


static void init_SMB_setJdn_seconds_offset_() {
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    Variable VAR_julDays_0_0 = new_Variable_named(L"julDays", 0);
    Variable VAR_secs_0_1 = new_Variable_named(L"secs", 0);
    Variable VAR_anOffset_0_2 = new_Variable_named(L"anOffset", 0);
    Array PArray20949 = new_Array_with(3, (Optr)VAR_julDays_0_0, (Optr)VAR_secs_0_1, (Optr)VAR_anOffset_0_2);
    Assign PAssign20951 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)VAR_julDays_0_0);
    Assign PAssign20952 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)VAR_secs_0_1);
    Assign PAssign20953 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_anOffset_0_2);
    Array PThreadedCode20950 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign20951, (Optr)&t_push_variable, (Optr)VAR_julDays_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20952, (Optr)&t_push_variable, (Optr)VAR_secs_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20953, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20948 = new_Method_with(PArray20949, empty_Array, empty_Array, PThreadedCode20950, 4, PAssign20951, PAssign20952, PAssign20953, self);
    
    MethodClosure MC_SMB_setJdn_seconds_offset_ = new_MethodClosure((Method)PMethod20948, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_setJdn_seconds_offset_, MC_SMB_setJdn_seconds_offset_);
}


static void init_SMB_asUTC() {
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    Symbol SMB_isZero = new_Symbol(L"isZero");
    // isZero. 
    Send PSend20956 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_isZero, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20959 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock20958 = new_Block_with(empty_Array, empty_Array, PThreadedCode20959, 1, self);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // utcOffset:. 
    Send PSend20962 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)int_0_Const);
    Array PThreadedCode20961 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20962, (Optr)&t_block_return);
    Block PBlock20960 = new_Block_with(empty_Array, empty_Array, PThreadedCode20961, 1, PSend20962);
    // ifTrue:ifFalse:. 
    Send PSend20957 = new_Send((Optr)PSend20956, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20958, (Optr)PBlock20960);
    Array PThreadedCode20955 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20956, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20957, (Optr)PBlock20958, (Optr)PBlock20960, (Optr)&t_method_return);
    Method PMethod20954 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20955, 1, PSend20957);
    
    MethodClosure MC_SMB_asUTC = new_MethodClosure((Method)PMethod20954, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asUTC, MC_SMB_asUTC);
}


static void init_SMB_dayOfWeekName() {
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    // dayOfWeek. 
    Send PSend20965 = new_Send((Optr)self, SMB_dayOfWeek, 0);
    Symbol SMB_nameOfDay_ = new_Symbol(L"nameOfDay:");
    // nameOfDay:. 
    Send PSend20966 = new_Send((Optr)PWeek_classReference, SMB_nameOfDay_, 1, (Optr)PSend20965);
    Array PThreadedCode20964 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PWeek_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20965, (Optr)&t_send1, (Optr)PSend20966, (Optr)&t_method_return);
    Method PMethod20963 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20964, 1, PSend20966);
    
    MethodClosure MC_SMB_dayOfWeekName = new_MethodClosure((Method)PMethod20963, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekName, MC_SMB_dayOfWeekName);
}


static void init_SMB_utcOffset_() {
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray20968 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR_equiv_0_1 = new_Variable_named(L"equiv", 0);
    Array PArray20969 = new_Array_with(1, (Optr)VAR_equiv_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20974 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20975 = new_Send((Optr)self, SMB_offset, 0);
    // -. 
    Send PSend20973 = new_Send((Optr)PSend20974, SMB__minus_, 1, (Optr)PSend20975);
    // +. 
    Send PSend20972 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20973);
    Assign PAssign20971 = new_Assign((Optr)VAR_equiv_0_1, (Optr)PSend20972);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20977 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20979 = new_Send((Optr)VAR_equiv_0_1, SMB_ticks, 0);
    // asDuration. 
    Send PSend20980 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20981 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20979, (Optr)PSend20980);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20982 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20978 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send0, (Optr)PSend20979, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20980, (Optr)&t_send2, (Optr)PSend20981, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20982, (Optr)&t_method_return);
    Block PBlock20976 = new_Block_with(PArray20977, empty_Array, PThreadedCode20978, 2, PSend20981, PSend20982);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20983 = new_Send((Optr)PBlock20976, SMB_value_, 1, (Optr)VAR_equiv_0_1);
    Array PThreadedCode20970 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20971, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20974, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20975, (Optr)&t_send1, (Optr)PSend20973, (Optr)&t_send1, (Optr)PSend20972, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20976, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send1, (Optr)PSend20983, (Optr)&t_method_return);
    Method PMethod20967 = new_Method_with(PArray20968, PArray20969, empty_Array, PThreadedCode20970, 2, PAssign20971, PSend20983);
    
    MethodClosure MC_SMB_utcOffset_ = new_MethodClosure((Method)PMethod20967, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_utcOffset_, MC_SMB_utcOffset_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray20985 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Variable VAR_comparandAsDateAndTime_0_1 = new_Variable_named(L"comparandAsDateAndTime", 0);
    Array PArray20986 = new_Array_with(1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20989 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20991 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20995 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode20994 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend20995, (Optr)&t_block_return);
    Block PBlock20993 = new_Block_with(empty_Array, empty_Array, PThreadedCode20994, 1, PSend20995);
    // ifTrue:. 
    Send PSend20992 = new_Send((Optr)PSend20991, SMB_ifTrue_, 1, (Optr)PBlock20993);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend20997 = new_Send((Optr)VAR_comparand_0_0, SMB_asDateAndTime, 0);
    Assign PAssign20996 = new_Assign((Optr)VAR_comparandAsDateAndTime_0_1, (Optr)PSend20997);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20998 = new_Send((Optr)self, SMB_offset, 0);
    // offset. 
    Send PSend20999 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_offset, 0);
    // =. 
    Send PSend21000 = new_Send((Optr)PSend20998, SMB__equals_, 1, (Optr)PSend20999);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    // hasEqualTicks:. 
    Send PSend21004 = new_Send((Optr)self, SMB_hasEqualTicks_, 1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Array PThreadedCode21003 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send1, (Optr)PSend21004, (Optr)&t_block_return);
    Block PBlock21002 = new_Block_with(empty_Array, empty_Array, PThreadedCode21003, 1, PSend21004);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend21007 = new_Send((Optr)self, SMB_asUTC, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21008 = new_Send((Optr)PSend21007, SMB_ticks, 0);
    // asUTC. 
    Send PSend21009 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_asUTC, 0);
    // ticks. 
    Send PSend21010 = new_Send((Optr)PSend21009, SMB_ticks, 0);
    // =. 
    Send PSend21011 = new_Send((Optr)PSend21008, SMB__equals_, 1, (Optr)PSend21010);
    Array PThreadedCode21006 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21007, (Optr)&t_send0, (Optr)PSend21008, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend21009, (Optr)&t_send0, (Optr)PSend21010, (Optr)&t_send1, (Optr)PSend21011, (Optr)&t_block_return);
    Block PBlock21005 = new_Block_with(empty_Array, empty_Array, PThreadedCode21006, 1, PSend21011);
    // ifTrue:ifFalse:. 
    Send PSend21001 = new_Send((Optr)PSend21000, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21002, (Optr)PBlock21005);
    Array PThreadedCode20990 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20991, (Optr)&t_send_ifTrue_, (Optr)PSend20992, (Optr)PBlock20993, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20996, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20997, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20998, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend20999, (Optr)&t_send1, (Optr)PSend21000, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21001, (Optr)PBlock21002, (Optr)PBlock21005, (Optr)&t_method_return);
    Block PBlock20988 = new_Block_with(PArray20989, empty_Array, PThreadedCode20990, 3, PSend20992, PAssign20996, PSend21001);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21012 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20988);
    Array PThreadedCode20987 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20988, (Optr)&t_send1, (Optr)PSend21012, (Optr)&t_method_return);
    Method PMethod20984 = new_Method_with(PArray20985, PArray20986, empty_Array, PThreadedCode20987, 1, PSend21012);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20984, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_secondsSinceMidnight() {
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    Array PThreadedCode21014 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_method_return);
    Method PMethod21013 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21014, 1, slot_Chronology_DateAndTime_seconds);
    
    MethodClosure MC_SMB_secondsSinceMidnight = new_MethodClosure((Method)PMethod21013, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_secondsSinceMidnight, MC_SMB_secondsSinceMidnight);
}


static void init_SMB_normalize_ticks_base_() {
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    Variable VAR_i_0_0 = new_Variable_named(L"i", 0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Variable VAR_base_0_2 = new_Variable_named(L"base", 0);
    Array PArray21016 = new_Array_with(3, (Optr)VAR_i_0_0, (Optr)VAR_ticks_0_1, (Optr)VAR_base_0_2);
    Variable VAR_tick_0_3 = new_Variable_named(L"tick", 0);
    Variable VAR_quo_0_4 = new_Variable_named(L"quo", 0);
    Variable VAR_rem_0_5 = new_Variable_named(L"rem", 0);
    Array PArray21017 = new_Array_with(3, (Optr)VAR_tick_0_3, (Optr)VAR_quo_0_4, (Optr)VAR_rem_0_5);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21020 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)VAR_i_0_0);
    Assign PAssign21019 = new_Assign((Optr)VAR_tick_0_3, (Optr)PSend21020);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend21022 = new_Send((Optr)VAR_tick_0_3, SMB_quo_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21021 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21022);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend21024 = new_Send((Optr)VAR_tick_0_3, SMB_rem_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21023 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21024);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend21025 = new_Send((Optr)VAR_rem_0_5, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend21030 = new_Send((Optr)VAR_quo_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign21029 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21030);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend21032 = new_Send((Optr)VAR_base_0_2, SMB__plus_, 1, (Optr)VAR_rem_0_5);
    Assign PAssign21031 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21032);
    Array PThreadedCode21028 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign21029, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21030, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21031, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send1, (Optr)PSend21032, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21027 = new_Block_with(empty_Array, empty_Array, PThreadedCode21028, 2, PAssign21029, PAssign21031);
    // ifTrue:. 
    Send PSend21026 = new_Send((Optr)PSend21025, SMB_ifTrue_, 1, (Optr)PBlock21027);
    // -. 
    Send PSend21033 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // -. 
    Send PSend21034 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend21035 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)PSend21034);
    // +. 
    Send PSend21036 = new_Send((Optr)PSend21035, SMB__plus_, 1, (Optr)VAR_quo_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend21037 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)PSend21033, (Optr)PSend21036);
    // at:put:. 
    Send PSend21038 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)VAR_i_0_0, (Optr)VAR_rem_0_5);
    Array PThreadedCode21018 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push1, (Optr)PAssign21019, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_send1, (Optr)PSend21020, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21021, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21022, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21023, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21024, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send0, (Optr)PSend21025, (Optr)&t_send_ifTrue_, (Optr)PSend21026, (Optr)PBlock21027, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21033, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21034, (Optr)&t_send1, (Optr)PSend21035, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_send1, (Optr)PSend21036, (Optr)&t_send2, (Optr)PSend21037, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send2, (Optr)PSend21038, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21015 = new_Method_with(PArray21016, PArray21017, empty_Array, PThreadedCode21018, 7, PAssign21019, PAssign21021, PAssign21023, PSend21026, PSend21037, PSend21038, self);
    
    MethodClosure MC_SMB_normalize_ticks_base_ = new_MethodClosure((Method)PMethod21015, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_normalize_ticks_base_, MC_SMB_normalize_ticks_base_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray21040 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21043 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21045 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend21046 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21047 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21045, (Optr)PSend21046);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21048 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21044 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21045, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21046, (Optr)&t_send2, (Optr)PSend21047, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21048, (Optr)&t_method_return);
    Block PBlock21042 = new_Block_with(PArray21043, empty_Array, PThreadedCode21044, 2, PSend21047, PSend21048);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend21049 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21050 = new_Send((Optr)PSend21049, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21051 = new_Send((Optr)PBlock21042, SMB_value_, 1, (Optr)PSend21050);
    Array PThreadedCode21041 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock21042, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21049, (Optr)&t_send0, (Optr)PSend21050, (Optr)&t_send1, (Optr)PSend21051, (Optr)&t_method_return);
    Method PMethod21039 = new_Method_with(PArray21040, empty_Array, empty_Array, PThreadedCode21041, 1, PSend21051);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21039, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Array PThreadedCode21053 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21052 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21053, 1, self);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod21052, Chronology_DateAndTime_Class);
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
    Send PSend21056 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21057 = new_Send((Optr)PSend21056, SMB_basicNew, 0);
    // class. 
    Send PSend21058 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21059 = new_Send((Optr)PSend21058, SMB_localOffset, 0);
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // setJdn:seconds:offset:. 
    Send PSend21060 = new_Send((Optr)PSend21057, SMB_setJdn_seconds_offset_, 3, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)int_0_Const, (Optr)PSend21059);
    Array PThreadedCode21055 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21056, (Optr)&t_send0, (Optr)PSend21057, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21058, (Optr)&t_send0, (Optr)PSend21059, (Optr)&t_send3, (Optr)PSend21060, (Optr)&t_method_return);
    Method PMethod21054 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21055, 1, PSend21060);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21054, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_midnight, MC_SMB_midnight);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21062 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_l_0_1 = new_Variable_named(L"l", 0);
    Variable VAR_n_0_2 = new_Variable_named(L"n", 0);
    Variable VAR_i_0_3 = new_Variable_named(L"i", 0);
    Variable VAR_j_0_4 = new_Variable_named(L"j", 0);
    Variable VAR_dd_0_5 = new_Variable_named(L"dd", 0);
    Variable VAR_mm_0_6 = new_Variable_named(L"mm", 0);
    Variable VAR_yyyy_0_7 = new_Variable_named(L"yyyy", 0);
    Array PArray21063 = new_Array_with(7, (Optr)VAR_l_0_1, (Optr)VAR_n_0_2, (Optr)VAR_i_0_3, (Optr)VAR_j_0_4, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_68569 = new_SmallInt(68569);
    Constant int_68569_Const = new_Constant((Optr)int_68569);
    // +. 
    Send PSend21066 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_68569_Const);
    Assign PAssign21065 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21066);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // *. 
    Send PSend21069 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_4_Const);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_146097 = new_SmallInt(146097);
    Constant int_146097_Const = new_Constant((Optr)int_146097);
    // //. 
    Send PSend21068 = new_Send((Optr)PSend21069, SMB__quotient_, 1, (Optr)int_146097_Const);
    Assign PAssign21067 = new_Assign((Optr)VAR_n_0_2, (Optr)PSend21068);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // *. 
    Send PSend21074 = new_Send((Optr)VAR_n_0_2, SMB__times_, 1, (Optr)int_146097_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // +. 
    Send PSend21073 = new_Send((Optr)PSend21074, SMB__plus_, 1, (Optr)int_3_Const);
    // //. 
    Send PSend21072 = new_Send((Optr)PSend21073, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21071 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21072);
    Assign PAssign21070 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21071);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21078 = new_Send((Optr)VAR_l_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_4000 = new_SmallInt(4000);
    Constant int_4000_Const = new_Constant((Optr)int_4000);
    // *. 
    Send PSend21077 = new_Send((Optr)PSend21078, SMB__times_, 1, (Optr)int_4000_Const);
    SmallInt int_1461001 = new_SmallInt(1461001);
    Constant int_1461001_Const = new_Constant((Optr)int_1461001);
    // //. 
    Send PSend21076 = new_Send((Optr)PSend21077, SMB__quotient_, 1, (Optr)int_1461001_Const);
    Assign PAssign21075 = new_Assign((Optr)VAR_i_0_3, (Optr)PSend21076);
    SmallInt int_1461 = new_SmallInt(1461);
    Constant int_1461_Const = new_Constant((Optr)int_1461);
    // *. 
    Send PSend21083 = new_Send((Optr)VAR_i_0_3, SMB__times_, 1, (Optr)int_1461_Const);
    // //. 
    Send PSend21082 = new_Send((Optr)PSend21083, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21081 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21082);
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // +. 
    Send PSend21080 = new_Send((Optr)PSend21081, SMB__plus_, 1, (Optr)int_31_Const);
    Assign PAssign21079 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21080);
    SmallInt int_80 = new_SmallInt(80);
    Constant int_80_Const = new_Constant((Optr)int_80);
    // *. 
    Send PSend21086 = new_Send((Optr)int_80_Const, SMB__times_, 1, (Optr)VAR_l_0_1);
    SmallInt int_2447 = new_SmallInt(2447);
    Constant int_2447_Const = new_Constant((Optr)int_2447);
    // //. 
    Send PSend21085 = new_Send((Optr)PSend21086, SMB__quotient_, 1, (Optr)int_2447_Const);
    Assign PAssign21084 = new_Assign((Optr)VAR_j_0_4, (Optr)PSend21085);
    // *. 
    Send PSend21090 = new_Send((Optr)VAR_j_0_4, SMB__times_, 1, (Optr)int_2447_Const);
    // //. 
    Send PSend21089 = new_Send((Optr)PSend21090, SMB__quotient_, 1, (Optr)int_80_Const);
    // -. 
    Send PSend21088 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21089);
    Assign PAssign21087 = new_Assign((Optr)VAR_dd_0_5, (Optr)PSend21088);
    SmallInt int_11 = new_SmallInt(11);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // //. 
    Send PSend21092 = new_Send((Optr)VAR_j_0_4, SMB__quotient_, 1, (Optr)int_11_Const);
    Assign PAssign21091 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21092);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend21095 = new_Send((Optr)VAR_j_0_4, SMB__plus_, 1, (Optr)int_2_Const);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // *. 
    Send PSend21096 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_12_Const);
    // -. 
    Send PSend21094 = new_Send((Optr)PSend21095, SMB__minus_, 1, (Optr)PSend21096);
    Assign PAssign21093 = new_Assign((Optr)VAR_mm_0_6, (Optr)PSend21094);
    SmallInt int_49 = new_SmallInt(49);
    Constant int_49_Const = new_Constant((Optr)int_49);
    // -. 
    Send PSend21101 = new_Send((Optr)VAR_n_0_2, SMB__minus_, 1, (Optr)int_49_Const);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // *. 
    Send PSend21100 = new_Send((Optr)PSend21101, SMB__times_, 1, (Optr)int_100_Const);
    // +. 
    Send PSend21099 = new_Send((Optr)PSend21100, SMB__plus_, 1, (Optr)VAR_i_0_3);
    // +. 
    Send PSend21098 = new_Send((Optr)PSend21099, SMB__plus_, 1, (Optr)VAR_l_0_1);
    Assign PAssign21097 = new_Assign((Optr)VAR_yyyy_0_7, (Optr)PSend21098);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend21102 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_value_, 3, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Array PThreadedCode21064 = instantiate_Array_with(ThreadedCode_Class, 0, 177, (Optr)&t_push1, (Optr)PAssign21065, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push1, (Optr)int_68569, (Optr)&t_send1, (Optr)PSend21066, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21067, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21069, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21068, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21070, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21074, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend21073, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21072, (Optr)&t_send1, (Optr)PSend21071, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21075, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21078, (Optr)&t_push1, (Optr)int_4000, (Optr)&t_send1, (Optr)PSend21077, (Optr)&t_push1, (Optr)int_1461001, (Optr)&t_send1, (Optr)PSend21076, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21079, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_push1, (Optr)int_1461, (Optr)&t_send1, (Optr)PSend21083, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21082, (Optr)&t_send1, (Optr)PSend21081, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend21080, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21084, (Optr)&t_push1, (Optr)int_80, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21086, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21085, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21087, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21090, (Optr)&t_push1, (Optr)int_80, (Optr)&t_send1, (Optr)PSend21089, (Optr)&t_send1, (Optr)PSend21088, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21091, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_11, (Optr)&t_send1, (Optr)PSend21092, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21093, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend21095, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21096, (Optr)&t_send1, (Optr)PSend21094, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21097, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_49, (Optr)&t_send1, (Optr)PSend21101, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend21100, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_send1, (Optr)PSend21099, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21098, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_dd_0_5, (Optr)&t_push_variable, (Optr)VAR_mm_0_6, (Optr)&t_push_variable, (Optr)VAR_yyyy_0_7, (Optr)&t_send3, (Optr)PSend21102, (Optr)&t_method_return);
    Method PMethod21061 = new_Method_with(PArray21062, PArray21063, empty_Array, PThreadedCode21064, 11, PAssign21065, PAssign21067, PAssign21070, PAssign21075, PAssign21079, PAssign21084, PAssign21087, PAssign21091, PAssign21093, PAssign21097, PSend21102);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod21061, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printYMDOn_() {
    Symbol SMB_printYMDOn_ = new_Symbol(L"printYMDOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21104 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend21106 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode21105 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend21106, (Optr)&t_method_return);
    Method PMethod21103 = new_Method_with(PArray21104, empty_Array, empty_Array, PThreadedCode21105, 1, PSend21106);
    
    MethodClosure MC_SMB_printYMDOn_ = new_MethodClosure((Method)PMethod21103, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_, MC_SMB_printYMDOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21109 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode21108 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send2, (Optr)PSend21109, (Optr)&t_method_return);
    Method PMethod21107 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21108, 1, PSend21109);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod21107, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray21113 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode21114 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_method_return);
    Block PBlock21112 = new_Block_with(PArray21113, empty_Array, PThreadedCode21114, 1, VAR_y_1_2);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21115 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21112);
    Array PThreadedCode21111 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21112, (Optr)&t_send1, (Optr)PSend21115, (Optr)&t_method_return);
    Method PMethod21110 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21111, 1, PSend21115);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod21110, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_printHMSOn_() {
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21117 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_h_0_1 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_2 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_3 = new_Variable_named(L"s", 0);
    Array PArray21118 = new_Array_with(3, (Optr)VAR_h_0_1, (Optr)VAR_m_0_2, (Optr)VAR_s_0_3);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21122 = new_Send((Optr)self, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend21121 = new_Send((Optr)PSend21122, SMB_abs, 0);
    Assign PAssign21120 = new_Assign((Optr)VAR_h_0_1, (Optr)PSend21121);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21125 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend21124 = new_Send((Optr)PSend21125, SMB_abs, 0);
    Assign PAssign21123 = new_Assign((Optr)VAR_m_0_2, (Optr)PSend21124);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21128 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend21127 = new_Send((Optr)PSend21128, SMB_abs, 0);
    Assign PAssign21126 = new_Assign((Optr)VAR_s_0_3, (Optr)PSend21127);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend21129 = new_Send((Optr)VAR_h_0_1, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9208 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9208_Const = new_Constant((Optr)char_9208);
    // <<. 
    Send PSend21133 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode21132 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend21133, (Optr)&t_block_return);
    Block PBlock21131 = new_Block_with(empty_Array, empty_Array, PThreadedCode21132, 1, PSend21133);
    // ifTrue:. 
    Send PSend21130 = new_Send((Optr)PSend21129, SMB_ifTrue_, 1, (Optr)PBlock21131);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21134 = new_Send((Optr)VAR_h_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend21135 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend21136 = new_Send((Optr)VAR_m_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21140 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode21139 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend21140, (Optr)&t_block_return);
    Block PBlock21138 = new_Block_with(empty_Array, empty_Array, PThreadedCode21139, 1, PSend21140);
    // ifTrue:. 
    Send PSend21137 = new_Send((Optr)PSend21136, SMB_ifTrue_, 1, (Optr)PBlock21138);
    // printOn:. 
    Send PSend21141 = new_Send((Optr)VAR_m_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21142 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend21143 = new_Send((Optr)VAR_s_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21147 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode21146 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend21147, (Optr)&t_block_return);
    Block PBlock21145 = new_Block_with(empty_Array, empty_Array, PThreadedCode21146, 1, PSend21147);
    // ifTrue:. 
    Send PSend21144 = new_Send((Optr)PSend21143, SMB_ifTrue_, 1, (Optr)PBlock21145);
    // printOn:. 
    Send PSend21148 = new_Send((Optr)VAR_s_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21119 = instantiate_Array_with(ThreadedCode_Class, 0, 93, (Optr)&t_push1, (Optr)PAssign21120, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21122, (Optr)&t_send0, (Optr)PSend21121, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21123, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21125, (Optr)&t_send0, (Optr)PSend21124, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21126, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21128, (Optr)&t_send0, (Optr)PSend21127, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21129, (Optr)&t_send_ifTrue_, (Optr)PSend21130, (Optr)PBlock21131, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21134, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21135, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21136, (Optr)&t_send_ifTrue_, (Optr)PSend21137, (Optr)PBlock21138, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21141, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21142, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21143, (Optr)&t_send_ifTrue_, (Optr)PSend21144, (Optr)PBlock21145, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21148, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21116 = new_Method_with(PArray21117, PArray21118, empty_Array, PThreadedCode21119, 12, PAssign21120, PAssign21123, PAssign21126, PSend21130, PSend21134, PSend21135, PSend21137, PSend21141, PSend21142, PSend21144, PSend21148, self);
    
    MethodClosure MC_SMB_printHMSOn_ = new_MethodClosure((Method)PMethod21116, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printHMSOn_, MC_SMB_printHMSOn_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray21150 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21153 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend21155 = new_Send((Optr)VAR_aJulianDayNumber_0_0, SMB_days, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21156 = new_Send((Optr)PSend21155, SMB_ticks, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21157 = new_Send((Optr)self, SMB_localOffset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21158 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21156, (Optr)PSend21157);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21159 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21154 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send0, (Optr)PSend21155, (Optr)&t_send0, (Optr)PSend21156, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21157, (Optr)&t_send2, (Optr)PSend21158, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21159, (Optr)&t_method_return);
    Block PBlock21152 = new_Block_with(PArray21153, empty_Array, PThreadedCode21154, 2, PSend21158, PSend21159);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21160 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21161 = new_Send((Optr)PBlock21152, SMB_value_, 1, (Optr)PSend21160);
    Array PThreadedCode21151 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21152, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21160, (Optr)&t_send1, (Optr)PSend21161, (Optr)&t_method_return);
    Method PMethod21149 = new_Method_with(PArray21150, empty_Array, empty_Array, PThreadedCode21151, 1, PSend21161);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod21149, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_localTimeZone() {
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend21167 = new_Send((Optr)PTimeZone_classReference, SMB_default, 0);
    Assign PAssign21166 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)PSend21167);
    Array PThreadedCode21165 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign21166, (Optr)&t_push_class_reference, (Optr)PTimeZone_classReference, (Optr)&t_send0, (Optr)PSend21167, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21164 = new_Block_with(empty_Array, empty_Array, PThreadedCode21165, 1, PAssign21166);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21168 = new_Send((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, SMB_ifNil_, 1, (Optr)PBlock21164);
    Array PThreadedCode21163 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)&t_push_closure, (Optr)PBlock21164, (Optr)&t_send1, (Optr)PSend21168, (Optr)&t_method_return);
    Method PMethod21162 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21163, 1, PSend21168);
    
    MethodClosure MC_SMB_localTimeZone = new_MethodClosure((Method)PMethod21162, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone, MC_SMB_localTimeZone);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend21171 = new_Send((Optr)self, SMB_midnight, 0);
    Array PThreadedCode21170 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21171, (Optr)&t_method_return);
    Method PMethod21169 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21170, 1, PSend21171);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod21169, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_epoch() {
    Symbol SMB_epoch = new_Symbol(L"epoch");
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21174 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend21175 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend21174);
    Array PThreadedCode21173 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21174, (Optr)&t_send1, (Optr)PSend21175, (Optr)&t_method_return);
    Method PMethod21172 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21173, 1, PSend21175);
    
    MethodClosure MC_SMB_epoch = new_MethodClosure((Method)PMethod21172, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_epoch, MC_SMB_epoch);
}


static void init_class_SMB_localTimeZone_() {
    Symbol SMB_localTimeZone_ = new_Symbol(L"localTimeZone:");
    Variable VAR_aTimeZone_0_0 = new_Variable_named(L"aTimeZone", 0);
    Array PArray21177 = new_Array_with(1, (Optr)VAR_aTimeZone_0_0);
    Assign PAssign21179 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)VAR_aTimeZone_0_0);
    Array PThreadedCode21178 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21179, (Optr)&t_push_variable, (Optr)VAR_aTimeZone_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21176 = new_Method_with(PArray21177, empty_Array, empty_Array, PThreadedCode21178, 2, PAssign21179, self);
    
    MethodClosure MC_SMB_localTimeZone_ = new_MethodClosure((Method)PMethod21176, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone_, MC_SMB_localTimeZone_);
}


static void init_class_SMB_localOffset() {
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21182 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21183 = new_Send((Optr)PSend21182, SMB_offset, 0);
    Array PThreadedCode21181 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21182, (Optr)&t_send0, (Optr)PSend21183, (Optr)&t_method_return);
    Method PMethod21180 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21181, 1, PSend21183);
    
    MethodClosure MC_SMB_localOffset = new_MethodClosure((Method)PMethod21180, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localOffset, MC_SMB_localOffset);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21186 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21187 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21188 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21189 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend21187, (Optr)PSend21188);
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21190 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21191 = new_Send((Optr)PSend21190, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21192 = new_Send((Optr)PSend21186, SMB_ticks_offset_, 2, (Optr)PSend21189, (Optr)PSend21191);
    Array PThreadedCode21185 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21186, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21187, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21188, (Optr)&t_send2, (Optr)PSend21189, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21190, (Optr)&t_send0, (Optr)PSend21191, (Optr)&t_send2, (Optr)PSend21192, (Optr)&t_method_return);
    Method PMethod21184 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21185, 1, PSend21192);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod21184, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_midnight() {
    Symbol SMB_midnight = new_Symbol(L"midnight");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend21195 = new_Send((Optr)self, SMB_now, 0);
    // midnight. 
    Send PSend21196 = new_Send((Optr)PSend21195, SMB_midnight, 0);
    Array PThreadedCode21194 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21195, (Optr)&t_send0, (Optr)PSend21196, (Optr)&t_method_return);
    Method PMethod21193 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21194, 1, PSend21196);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21193, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_midnight, MC_SMB_midnight);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21199 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Array PThreadedCode21198 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21199, (Optr)&t_method_return);
    Method PMethod21197 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21198, 1, PSend21199);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod21197, HEADER(Chronology_DateAndTime_Class));
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