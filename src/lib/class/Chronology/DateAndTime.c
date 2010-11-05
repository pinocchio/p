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
    Send PSend20720 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20719 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20720, (Optr)&t_method_return);
    Method PMethod20718 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20719, 1, PSend20720);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20718, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20723 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_epoch = new_Symbol(L"epoch");
    // epoch. 
    Send PSend20724 = new_Send((Optr)PSend20723, SMB_epoch, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20725 = new_Send((Optr)self, SMB__minus_, 1, (Optr)PSend20724);
    // asSeconds. 
    Send PSend20726 = new_Send((Optr)PSend20725, SMB_asSeconds, 0);
    Array PThreadedCode20722 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20723, (Optr)&t_send0, (Optr)PSend20724, (Optr)&t_send1, (Optr)PSend20725, (Optr)&t_send0, (Optr)PSend20726, (Optr)&t_method_return);
    Method PMethod20721 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20722, 1, PSend20726);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20721, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20729 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20728 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20729, (Optr)&t_method_return);
    Method PMethod20727 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20728, 1, PSend20729);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20727, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20732 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20731 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20732, (Optr)&t_method_return);
    Method PMethod20730 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20731, 1, PSend20732);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20730, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode20734 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_method_return);
    Method PMethod20733 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20734, 1, slot_Chronology_DateAndTime_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod20733, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20737 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode20736 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20737, (Optr)&t_method_return);
    Method PMethod20735 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20736, 1, PSend20737);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20735, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_julianDayNumber() {
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    Array PThreadedCode20739 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_method_return);
    Method PMethod20738 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20739, 1, slot_Chronology_DateAndTime_jdn);
    
    MethodClosure MC_SMB_julianDayNumber = new_MethodClosure((Method)PMethod20738, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_julianDayNumber, MC_SMB_julianDayNumber);
}


static void init_SMB_dayOfMonth() {
    Symbol SMB_dayOfMonth = new_Symbol(L"dayOfMonth");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20743 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20744 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_method_return);
    Block PBlock20742 = new_Block_with(PArray20743, empty_Array, PThreadedCode20744, 1, VAR_d_1_0);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20745 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20742);
    Array PThreadedCode20741 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20742, (Optr)&t_send1, (Optr)PSend20745, (Optr)&t_method_return);
    Method PMethod20740 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20741, 1, PSend20745);
    
    MethodClosure MC_SMB_dayOfMonth = new_MethodClosure((Method)PMethod20740, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfMonth, MC_SMB_dayOfMonth);
}


static void init_SMB_ticks_offset_() {
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    Variable VAR_ticks_0_0 = new_Variable_named(L"ticks", 0);
    Variable VAR_utcOffset_0_1 = new_Variable_named(L"utcOffset", 0);
    Array PArray20747 = new_Array_with(2, (Optr)VAR_ticks_0_0, (Optr)VAR_utcOffset_0_1);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20749 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // normalize:ticks:base:. 
    Send PSend20750 = new_Send((Optr)self, SMB_normalize_ticks_base_, 3, (Optr)int_2_Const, (Optr)VAR_ticks_0_0, (Optr)PSend20749);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend20752 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign20751 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)PSend20752);
    // at:. 
    Send PSend20754 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20753 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)PSend20754);
    Assign PAssign20755 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_utcOffset_0_1);
    Array PThreadedCode20748 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20749, (Optr)&t_send3, (Optr)PSend20750, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20751, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20752, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20753, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20754, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20755, (Optr)&t_push_variable, (Optr)VAR_utcOffset_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20746 = new_Method_with(PArray20747, empty_Array, empty_Array, PThreadedCode20748, 5, PSend20750, PAssign20751, PAssign20753, PAssign20755, self);
    
    MethodClosure MC_SMB_ticks_offset_ = new_MethodClosure((Method)PMethod20746, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks_offset_, MC_SMB_ticks_offset_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20757 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Array PArray20758 = new_Array_with(1, (Optr)VAR_ticks_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20761 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign20760 = new_Assign((Optr)VAR_ticks_0_1, (Optr)PSend20761);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20762 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20763 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // ticks. 
    Send PSend20764 = new_Send((Optr)PSend20763, SMB_ticks, 0);
    Variable VAR_ticks1_1_0 = new_Variable_named(L"ticks1", 1);
    Variable VAR_dticks_1_1 = new_Variable_named(L"dticks", 1);
    Array PArray20766 = new_Array_with(2, (Optr)VAR_ticks1_1_0, (Optr)VAR_dticks_1_1);
    // +. 
    Send PSend20768 = new_Send((Optr)VAR_ticks1_1_0, SMB__plus_, 1, (Optr)VAR_dticks_1_1);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend20769 = new_Send((Optr)VAR_ticks_0_1, SMB_addLast_, 1, (Optr)PSend20768);
    Array PThreadedCode20767 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_ticks1_1_0, (Optr)&t_push_variable, (Optr)VAR_dticks_1_1, (Optr)&t_send1, (Optr)PSend20768, (Optr)&t_send1, (Optr)PSend20769, (Optr)&t_method_return);
    Block PBlock20765 = new_Block_with(PArray20766, empty_Array, PThreadedCode20767, 1, PSend20769);
    Symbol SMB_with_do_ = new_Symbol(L"with:do:");
    // with:do:. 
    Send PSend20770 = new_Send((Optr)PSend20762, SMB_with_do_, 2, (Optr)PSend20764, (Optr)PBlock20765);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20772 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20774 = new_Send((Optr)VAR_ticks_0_1, SMB_asArray, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20775 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20776 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20774, (Optr)PSend20775);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20777 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20773 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_send0, (Optr)PSend20774, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20775, (Optr)&t_send2, (Optr)PSend20776, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20777, (Optr)&t_method_return);
    Block PBlock20771 = new_Block_with(PArray20772, empty_Array, PThreadedCode20773, 2, PSend20776, PSend20777);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20778 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20779 = new_Send((Optr)PSend20778, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20780 = new_Send((Optr)PBlock20771, SMB_value_, 1, (Optr)PSend20779);
    Array PThreadedCode20759 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20760, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20761, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20762, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20763, (Optr)&t_send0, (Optr)PSend20764, (Optr)&t_push_closure, (Optr)PBlock20765, (Optr)&t_send2, (Optr)PSend20770, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20771, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20778, (Optr)&t_send0, (Optr)PSend20779, (Optr)&t_send1, (Optr)PSend20780, (Optr)&t_method_return);
    Method PMethod20756 = new_Method_with(PArray20757, PArray20758, empty_Array, PThreadedCode20759, 3, PAssign20760, PSend20770, PSend20780);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20756, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20782 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol  SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_asDateAndTime_Const = new_Constant((Optr)SMB_asDateAndTime);
    // respondsTo:. 
    Send PSend20784 = new_Send((Optr)VAR_operand_0_0, SMB_respondsTo_, 1, (Optr)SMB_asDateAndTime_Const);
    Variable VAR_lticks_1_0 = new_Variable_named(L"lticks", 1);
    Variable VAR_rticks_1_1 = new_Variable_named(L"rticks", 1);
    Array PArray20786 = new_Array_with(2, (Optr)VAR_lticks_1_0, (Optr)VAR_rticks_1_1);
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    // asLocal. 
    Send PSend20790 = new_Send((Optr)self, SMB_asLocal, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20789 = new_Send((Optr)PSend20790, SMB_ticks, 0);
    Assign PAssign20788 = new_Assign((Optr)VAR_lticks_1_0, (Optr)PSend20789);
    // asDateAndTime. 
    Send PSend20794 = new_Send((Optr)VAR_operand_0_0, SMB_asDateAndTime, 0);
    // asLocal. 
    Send PSend20793 = new_Send((Optr)PSend20794, SMB_asLocal, 0);
    // ticks. 
    Send PSend20792 = new_Send((Optr)PSend20793, SMB_ticks, 0);
    Assign PAssign20791 = new_Assign((Optr)VAR_rticks_1_1, (Optr)PSend20792);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20795 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20796 = new_Send((Optr)VAR_lticks_1_0, SMB_first, 0);
    // first. 
    Send PSend20797 = new_Send((Optr)VAR_rticks_1_1, SMB_first, 0);
    // -. 
    Send PSend20798 = new_Send((Optr)PSend20796, SMB__minus_, 1, (Optr)PSend20797);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20799 = new_Send((Optr)PSend20795, SMB__times_, 1, (Optr)PSend20798);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20800 = new_Send((Optr)VAR_lticks_1_0, SMB_second, 0);
    // second. 
    Send PSend20801 = new_Send((Optr)VAR_rticks_1_1, SMB_second, 0);
    // -. 
    Send PSend20802 = new_Send((Optr)PSend20800, SMB__minus_, 1, (Optr)PSend20801);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20803 = new_Send((Optr)PSend20799, SMB__plus_, 1, (Optr)PSend20802);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20804 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)PSend20803);
    Array PThreadedCode20787 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign20788, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20790, (Optr)&t_send0, (Optr)PSend20789, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20791, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20794, (Optr)&t_send0, (Optr)PSend20793, (Optr)&t_send0, (Optr)PSend20792, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20795, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20796, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20797, (Optr)&t_send1, (Optr)PSend20798, (Optr)&t_send1, (Optr)PSend20799, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20800, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20801, (Optr)&t_send1, (Optr)PSend20802, (Optr)&t_send1, (Optr)PSend20803, (Optr)&t_send1, (Optr)PSend20804, (Optr)&t_method_return);
    Block PBlock20785 = new_Block_with(empty_Array, PArray20786, PThreadedCode20787, 3, PAssign20788, PAssign20791, PSend20804);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20807 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    // +. 
    Send PSend20808 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20807);
    Array PThreadedCode20806 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20807, (Optr)&t_send1, (Optr)PSend20808, (Optr)&t_block_return);
    Block PBlock20805 = new_Block_with(empty_Array, empty_Array, PThreadedCode20806, 1, PSend20808);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend20809 = new_Send((Optr)PSend20784, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20785, (Optr)PBlock20805);
    Array PThreadedCode20783 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_push1, (Optr)SMB_asDateAndTime, (Optr)&t_send1, (Optr)PSend20784, (Optr)&t_push_closure, (Optr)PBlock20785, (Optr)&t_push_closure, (Optr)PBlock20805, (Optr)&t_send2, (Optr)PSend20809, (Optr)&t_method_return);
    Method PMethod20781 = new_Method_with(PArray20782, empty_Array, empty_Array, PThreadedCode20783, 1, PSend20809);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20781, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    Symbol SMB_month = new_Symbol(L"month");
    // month. 
    Send PSend20812 = new_Send((Optr)self, SMB_month, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20813 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20812);
    Array PThreadedCode20811 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20812, (Optr)&t_send1, (Optr)PSend20813, (Optr)&t_method_return);
    Method PMethod20810 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20811, 1, PSend20813);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod20810, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20816 = new_Send((Optr)Date_classReference, SMB_starting_, 1, (Optr)self);
    Array PThreadedCode20815 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20816, (Optr)&t_method_return);
    Method PMethod20814 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20815, 1, PSend20816);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20814, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_dayOfWeekAbbreviation() {
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    // dayOfWeekName. 
    Send PSend20819 = new_Send((Optr)self, SMB_dayOfWeekName, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20820 = new_Send((Optr)PSend20819, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    Array PThreadedCode20818 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20819, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20820, (Optr)&t_method_return);
    Method PMethod20817 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20818, 1, PSend20820);
    
    MethodClosure MC_SMB_dayOfWeekAbbreviation = new_MethodClosure((Method)PMethod20817, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekAbbreviation, MC_SMB_dayOfWeekAbbreviation);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20822 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    // printOn:withLeadingSpace:. 
    Send PSend20824 = new_Send((Optr)self, SMB_printOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode20823 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend20824, (Optr)&t_method_return);
    Method PMethod20821 = new_Method_with(PArray20822, empty_Array, empty_Array, PThreadedCode20823, 1, PSend20824);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20821, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_printYMDOn_withLeadingSpace_() {
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray20826 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_year_0_2 = new_Variable_named(L"year", 0);
    Variable VAR_month_0_3 = new_Variable_named(L"month", 0);
    Variable VAR_day_0_4 = new_Variable_named(L"day", 0);
    Array PArray20827 = new_Array_with(3, (Optr)VAR_year_0_2, (Optr)VAR_month_0_3, (Optr)VAR_day_0_4);
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20830 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Assign PAssign20832 = new_Assign((Optr)VAR_year_0_2, (Optr)VAR_y_1_2);
    Assign PAssign20833 = new_Assign((Optr)VAR_month_0_3, (Optr)VAR_m_1_1);
    Assign PAssign20834 = new_Assign((Optr)VAR_day_0_4, (Optr)VAR_d_1_0);
    Array PThreadedCode20831 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign20832, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20833, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20834, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock20829 = new_Block_with(PArray20830, empty_Array, PThreadedCode20831, 3, PAssign20832, PAssign20833, PAssign20834);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20835 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20829);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20836 = new_Send((Optr)VAR_year_0_2, SMB_negative, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_2173 = new_Character(L'-');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_2173_Const = new_Constant((Optr)char_2173);
    // nextPut:. 
    Send PSend20840 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPut_, 1, (Optr)char_2173_Const);
    Array PThreadedCode20839 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend20840, (Optr)&t_block_return);
    Block PBlock20838 = new_Block_with(empty_Array, empty_Array, PThreadedCode20839, 1, PSend20840);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend20846 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Array PThreadedCode20845 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend20846, (Optr)&t_block_return);
    Block PBlock20844 = new_Block_with(empty_Array, empty_Array, PThreadedCode20845, 1, PSend20846);
    // ifTrue:. 
    Send PSend20843 = new_Send((Optr)VAR_printLeadingSpaceToo_0_1, SMB_ifTrue_, 1, (Optr)PBlock20844);
    Array PThreadedCode20842 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20843, (Optr)PBlock20844, (Optr)&t_block_return);
    Block PBlock20841 = new_Block_with(empty_Array, empty_Array, PThreadedCode20842, 1, PSend20843);
    // ifTrue:ifFalse:. 
    Send PSend20837 = new_Send((Optr)PSend20836, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20838, (Optr)PBlock20841);
    SmallInt int_1000 = new_SmallInt(1000);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    // <. 
    Send PSend20847 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_1000_Const);
    Character char_9197 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    // <<. 
    Send PSend20851 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20850 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20851, (Optr)&t_block_return);
    Block PBlock20849 = new_Block_with(empty_Array, empty_Array, PThreadedCode20850, 1, PSend20851);
    // ifTrue:. 
    Send PSend20848 = new_Send((Optr)PSend20847, SMB_ifTrue_, 1, (Optr)PBlock20849);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // <. 
    Send PSend20852 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_100_Const);
    // <<. 
    Send PSend20856 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20855 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20856, (Optr)&t_block_return);
    Block PBlock20854 = new_Block_with(empty_Array, empty_Array, PThreadedCode20855, 1, PSend20856);
    // ifTrue:. 
    Send PSend20853 = new_Send((Optr)PSend20852, SMB_ifTrue_, 1, (Optr)PBlock20854);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20857 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20861 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20860 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20861, (Optr)&t_block_return);
    Block PBlock20859 = new_Block_with(empty_Array, empty_Array, PThreadedCode20860, 1, PSend20861);
    // ifTrue:. 
    Send PSend20858 = new_Send((Optr)PSend20857, SMB_ifTrue_, 1, (Optr)PBlock20859);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20862 = new_Send((Optr)VAR_year_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20863 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2173_Const);
    // <. 
    Send PSend20864 = new_Send((Optr)VAR_month_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20868 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20867 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20868, (Optr)&t_block_return);
    Block PBlock20866 = new_Block_with(empty_Array, empty_Array, PThreadedCode20867, 1, PSend20868);
    // ifTrue:. 
    Send PSend20865 = new_Send((Optr)PSend20864, SMB_ifTrue_, 1, (Optr)PBlock20866);
    // printOn:. 
    Send PSend20869 = new_Send((Optr)VAR_month_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20870 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2173_Const);
    // <. 
    Send PSend20871 = new_Send((Optr)VAR_day_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20875 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20874 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20875, (Optr)&t_block_return);
    Block PBlock20873 = new_Block_with(empty_Array, empty_Array, PThreadedCode20874, 1, PSend20875);
    // ifTrue:. 
    Send PSend20872 = new_Send((Optr)PSend20871, SMB_ifTrue_, 1, (Optr)PBlock20873);
    // printOn:. 
    Send PSend20876 = new_Send((Optr)VAR_day_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20828 = instantiate_Array_with(ThreadedCode_Class, 0, 101, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20829, (Optr)&t_send1, (Optr)PSend20835, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_send0, (Optr)PSend20836, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20837, (Optr)PBlock20838, (Optr)PBlock20841, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_send1, (Optr)PSend20847, (Optr)&t_send_ifTrue_, (Optr)PSend20848, (Optr)PBlock20849, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20852, (Optr)&t_send_ifTrue_, (Optr)PSend20853, (Optr)PBlock20854, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20857, (Optr)&t_send_ifTrue_, (Optr)PSend20858, (Optr)PBlock20859, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20862, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend20863, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20864, (Optr)&t_send_ifTrue_, (Optr)PSend20865, (Optr)PBlock20866, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20869, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend20870, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20871, (Optr)&t_send_ifTrue_, (Optr)PSend20872, (Optr)PBlock20873, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20876, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20825 = new_Method_with(PArray20826, PArray20827, empty_Array, PThreadedCode20828, 13, PSend20835, PSend20837, PSend20848, PSend20853, PSend20858, PSend20862, PSend20863, PSend20865, PSend20869, PSend20870, PSend20872, PSend20876, self);
    
    MethodClosure MC_SMB_printYMDOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20825, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_withLeadingSpace_, MC_SMB_printYMDOn_withLeadingSpace_);
}


static void init_SMB_dayOfWeek() {
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend20879 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // rem:. 
    Send PSend20880 = new_Send((Optr)PSend20879, SMB_rem_, 1, (Optr)int_7_Const);
    // +. 
    Send PSend20881 = new_Send((Optr)PSend20880, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode20878 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20879, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20880, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20881, (Optr)&t_method_return);
    Method PMethod20877 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20878, 1, PSend20881);
    
    MethodClosure MC_SMB_dayOfWeek = new_MethodClosure((Method)PMethod20877, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeek, MC_SMB_dayOfWeek);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20884 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20885 = new_Send((Optr)PSend20884, SMB_seconds, 0);
    Array PThreadedCode20883 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20884, (Optr)&t_send0, (Optr)PSend20885, (Optr)&t_method_return);
    Method PMethod20882 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20883, 1, PSend20885);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20882, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20888 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20889 = new_Send((Optr)PSend20888, SMB_hours, 0);
    Array PThreadedCode20887 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20888, (Optr)&t_send0, (Optr)PSend20889, (Optr)&t_method_return);
    Method PMethod20886 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20887, 1, PSend20889);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20886, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20892 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20891 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20892, (Optr)&t_method_return);
    Method PMethod20890 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20891, 1, PSend20892);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20890, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20895 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20896 = new_Send((Optr)PSend20895, SMB_minutes, 0);
    Array PThreadedCode20894 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20895, (Optr)&t_send0, (Optr)PSend20896, (Optr)&t_method_return);
    Method PMethod20893 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20894, 1, PSend20896);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20893, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minute, MC_SMB_minute);
}


static void init_SMB_hasEqualTicks_() {
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20898 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    // julianDayNumber. 
    Send PSend20900 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_julianDayNumber, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20901 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__equals_, 1, (Optr)PSend20900);
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    // secondsSinceMidnight. 
    Send PSend20904 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_secondsSinceMidnight, 0);
    // =. 
    Send PSend20905 = new_Send((Optr)slot_Chronology_DateAndTime_seconds, SMB__equals_, 1, (Optr)PSend20904);
    Array PThreadedCode20903 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20904, (Optr)&t_send1, (Optr)PSend20905, (Optr)&t_block_return);
    Block PBlock20902 = new_Block_with(empty_Array, empty_Array, PThreadedCode20903, 1, PSend20905);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend20906 = new_Send((Optr)PSend20901, SMB_and_, 1, (Optr)PBlock20902);
    Array PThreadedCode20899 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20900, (Optr)&t_send1, (Optr)PSend20901, (Optr)&t_push_closure, (Optr)PBlock20902, (Optr)&t_send1, (Optr)PSend20906, (Optr)&t_method_return);
    Method PMethod20897 = new_Method_with(PArray20898, empty_Array, empty_Array, PThreadedCode20899, 1, PSend20906);
    
    MethodClosure MC_SMB_hasEqualTicks_ = new_MethodClosure((Method)PMethod20897, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hasEqualTicks_, MC_SMB_hasEqualTicks_);
}


static void init_SMB_month() {
    Symbol SMB_month = new_Symbol(L"month");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20910 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20911 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_method_return);
    Block PBlock20909 = new_Block_with(PArray20910, empty_Array, PThreadedCode20911, 1, VAR_m_1_1);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20912 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20909);
    Array PThreadedCode20908 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20909, (Optr)&t_send1, (Optr)PSend20912, (Optr)&t_method_return);
    Method PMethod20907 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20908, 1, PSend20912);
    
    MethodClosure MC_SMB_month = new_MethodClosure((Method)PMethod20907, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_month, MC_SMB_month);
}


static void init_SMB_asLocal() {
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20915 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20916 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend20917 = new_Send((Optr)PSend20916, SMB_localOffset, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20918 = new_Send((Optr)PSend20915, SMB__equals_, 1, (Optr)PSend20917);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20921 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock20920 = new_Block_with(empty_Array, empty_Array, PThreadedCode20921, 1, self);
    // class. 
    Send PSend20924 = new_Send((Optr)self, SMB_class, 0);
    // localOffset. 
    Send PSend20925 = new_Send((Optr)PSend20924, SMB_localOffset, 0);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    // utcOffset:. 
    Send PSend20926 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)PSend20925);
    Array PThreadedCode20923 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20924, (Optr)&t_send0, (Optr)PSend20925, (Optr)&t_send1, (Optr)PSend20926, (Optr)&t_block_return);
    Block PBlock20922 = new_Block_with(empty_Array, empty_Array, PThreadedCode20923, 1, PSend20926);
    // ifTrue:ifFalse:. 
    Send PSend20919 = new_Send((Optr)PSend20918, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20920, (Optr)PBlock20922);
    Array PThreadedCode20914 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20915, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20916, (Optr)&t_send0, (Optr)PSend20917, (Optr)&t_send1, (Optr)PSend20918, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20919, (Optr)PBlock20920, (Optr)PBlock20922, (Optr)&t_method_return);
    Method PMethod20913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20914, 1, PSend20919);
    
    MethodClosure MC_SMB_asLocal = new_MethodClosure((Method)PMethod20913, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asLocal, MC_SMB_asLocal);
}


static void init_SMB_printOn_withLeadingSpace_() {
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray20928 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray20929 = new_Array_with(3, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend20931 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Character char_20932 = new_Character(L'T');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_20932_Const = new_Constant((Optr)char_20932);
    // <<. 
    Send PSend20933 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_20932_Const);
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    // printHMSOn:. 
    Send PSend20934 = new_Send((Optr)self, SMB_printHMSOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20935 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_positive, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_20939 = new_Character(L'+');
    Array PThreadedCode20938 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_20939, (Optr)&t_block_return);
    Constant char_20939_Const = new_Constant((Optr)char_20939);
    Block PBlock20937 = new_Block_with(empty_Array, empty_Array, PThreadedCode20938, 1, char_20939_Const);
    Character char_2173 = new_Character(L'-');
    Array PThreadedCode20941 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_block_return);
    Constant char_2173_Const = new_Constant((Optr)char_2173);
    Block PBlock20940 = new_Block_with(empty_Array, empty_Array, PThreadedCode20941, 1, char_2173_Const);
    // ifTrue:ifFalse:. 
    Send PSend20936 = new_Send((Optr)PSend20935, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20937, (Optr)PBlock20940);
    // <<. 
    Send PSend20942 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20936);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20945 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20944 = new_Send((Optr)PSend20945, SMB_abs, 0);
    Assign PAssign20943 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20944);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20946 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9197 = new_Character(L'0');
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    // <<. 
    Send PSend20950 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20949 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20950, (Optr)&t_block_return);
    Block PBlock20948 = new_Block_with(empty_Array, empty_Array, PThreadedCode20949, 1, PSend20950);
    // ifTrue:. 
    Send PSend20947 = new_Send((Optr)PSend20946, SMB_ifTrue_, 1, (Optr)PBlock20948);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20951 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20952 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20955 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_minutes, 0);
    // abs. 
    Send PSend20954 = new_Send((Optr)PSend20955, SMB_abs, 0);
    Assign PAssign20953 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20954);
    // <. 
    Send PSend20956 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20960 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20959 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20960, (Optr)&t_block_return);
    Block PBlock20958 = new_Block_with(empty_Array, empty_Array, PThreadedCode20959, 1, PSend20960);
    // ifTrue:. 
    Send PSend20957 = new_Send((Optr)PSend20956, SMB_ifTrue_, 1, (Optr)PBlock20958);
    // printOn:. 
    Send PSend20961 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20962 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20963 = new_Send((Optr)PSend20962, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // seconds. 
    Send PSend20970 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    // abs. 
    Send PSend20969 = new_Send((Optr)PSend20970, SMB_abs, 0);
    Symbol SMB_truncated = new_Symbol(L"truncated");
    // truncated. 
    Send PSend20968 = new_Send((Optr)PSend20969, SMB_truncated, 0);
    Assign PAssign20967 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20968);
    // <<. 
    Send PSend20971 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // printOn:. 
    Send PSend20972 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20966 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20967, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20970, (Optr)&t_send0, (Optr)PSend20969, (Optr)&t_send0, (Optr)PSend20968, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20971, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20972, (Optr)&t_block_return);
    Block PBlock20965 = new_Block_with(empty_Array, empty_Array, PThreadedCode20966, 3, PAssign20967, PSend20971, PSend20972);
    // ifFalse:. 
    Send PSend20964 = new_Send((Optr)PSend20963, SMB_ifFalse_, 1, (Optr)PBlock20965);
    Array PThreadedCode20930 = instantiate_Array_with(ThreadedCode_Class, 0, 107, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send2, (Optr)PSend20931, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_20932, (Optr)&t_send1, (Optr)PSend20933, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20934, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20935, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20936, (Optr)PBlock20937, (Optr)PBlock20940, (Optr)&t_send1, (Optr)PSend20942, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20943, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20945, (Optr)&t_send0, (Optr)PSend20944, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20946, (Optr)&t_send_ifTrue_, (Optr)PSend20947, (Optr)PBlock20948, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20951, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20952, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20953, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20955, (Optr)&t_send0, (Optr)PSend20954, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20956, (Optr)&t_send_ifTrue_, (Optr)PSend20957, (Optr)PBlock20958, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20961, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20962, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20963, (Optr)&t_send_ifFalse_, (Optr)PSend20964, (Optr)PBlock20965, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20927 = new_Method_with(PArray20928, PArray20929, empty_Array, PThreadedCode20930, 13, PSend20931, PSend20933, PSend20934, PSend20942, PAssign20943, PSend20947, PSend20951, PSend20952, PAssign20953, PSend20957, PSend20961, PSend20964, self);
    
    MethodClosure MC_SMB_printOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20927, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_withLeadingSpace_, MC_SMB_printOn_withLeadingSpace_);
}


static void init_SMB_setJdn_seconds_offset_() {
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    Variable VAR_julDays_0_0 = new_Variable_named(L"julDays", 0);
    Variable VAR_secs_0_1 = new_Variable_named(L"secs", 0);
    Variable VAR_anOffset_0_2 = new_Variable_named(L"anOffset", 0);
    Array PArray20974 = new_Array_with(3, (Optr)VAR_julDays_0_0, (Optr)VAR_secs_0_1, (Optr)VAR_anOffset_0_2);
    Assign PAssign20976 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)VAR_julDays_0_0);
    Assign PAssign20977 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)VAR_secs_0_1);
    Assign PAssign20978 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_anOffset_0_2);
    Array PThreadedCode20975 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign20976, (Optr)&t_push_variable, (Optr)VAR_julDays_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20977, (Optr)&t_push_variable, (Optr)VAR_secs_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20978, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20973 = new_Method_with(PArray20974, empty_Array, empty_Array, PThreadedCode20975, 4, PAssign20976, PAssign20977, PAssign20978, self);
    
    MethodClosure MC_SMB_setJdn_seconds_offset_ = new_MethodClosure((Method)PMethod20973, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_setJdn_seconds_offset_, MC_SMB_setJdn_seconds_offset_);
}


static void init_SMB_asUTC() {
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    Symbol SMB_isZero = new_Symbol(L"isZero");
    // isZero. 
    Send PSend20981 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_isZero, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20984 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock20983 = new_Block_with(empty_Array, empty_Array, PThreadedCode20984, 1, self);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // utcOffset:. 
    Send PSend20987 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)int_0_Const);
    Array PThreadedCode20986 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20987, (Optr)&t_block_return);
    Block PBlock20985 = new_Block_with(empty_Array, empty_Array, PThreadedCode20986, 1, PSend20987);
    // ifTrue:ifFalse:. 
    Send PSend20982 = new_Send((Optr)PSend20981, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20983, (Optr)PBlock20985);
    Array PThreadedCode20980 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend20981, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20982, (Optr)PBlock20983, (Optr)PBlock20985, (Optr)&t_method_return);
    Method PMethod20979 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20980, 1, PSend20982);
    
    MethodClosure MC_SMB_asUTC = new_MethodClosure((Method)PMethod20979, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asUTC, MC_SMB_asUTC);
}


static void init_SMB_dayOfWeekName() {
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    // dayOfWeek. 
    Send PSend20990 = new_Send((Optr)self, SMB_dayOfWeek, 0);
    Symbol SMB_nameOfDay_ = new_Symbol(L"nameOfDay:");
    // nameOfDay:. 
    Send PSend20991 = new_Send((Optr)PWeek_classReference, SMB_nameOfDay_, 1, (Optr)PSend20990);
    Array PThreadedCode20989 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PWeek_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20990, (Optr)&t_send1, (Optr)PSend20991, (Optr)&t_method_return);
    Method PMethod20988 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20989, 1, PSend20991);
    
    MethodClosure MC_SMB_dayOfWeekName = new_MethodClosure((Method)PMethod20988, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekName, MC_SMB_dayOfWeekName);
}


static void init_SMB_utcOffset_() {
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray20993 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR_equiv_0_1 = new_Variable_named(L"equiv", 0);
    Array PArray20994 = new_Array_with(1, (Optr)VAR_equiv_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20999 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21000 = new_Send((Optr)self, SMB_offset, 0);
    // -. 
    Send PSend20998 = new_Send((Optr)PSend20999, SMB__minus_, 1, (Optr)PSend21000);
    // +. 
    Send PSend20997 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20998);
    Assign PAssign20996 = new_Assign((Optr)VAR_equiv_0_1, (Optr)PSend20997);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21002 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21004 = new_Send((Optr)VAR_equiv_0_1, SMB_ticks, 0);
    // asDuration. 
    Send PSend21005 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21006 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21004, (Optr)PSend21005);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21007 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21003 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send0, (Optr)PSend21004, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21005, (Optr)&t_send2, (Optr)PSend21006, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21007, (Optr)&t_method_return);
    Block PBlock21001 = new_Block_with(PArray21002, empty_Array, PThreadedCode21003, 2, PSend21006, PSend21007);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21008 = new_Send((Optr)PBlock21001, SMB_value_, 1, (Optr)VAR_equiv_0_1);
    Array PThreadedCode20995 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20996, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend20999, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21000, (Optr)&t_send1, (Optr)PSend20998, (Optr)&t_send1, (Optr)PSend20997, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock21001, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send1, (Optr)PSend21008, (Optr)&t_method_return);
    Method PMethod20992 = new_Method_with(PArray20993, PArray20994, empty_Array, PThreadedCode20995, 2, PAssign20996, PSend21008);
    
    MethodClosure MC_SMB_utcOffset_ = new_MethodClosure((Method)PMethod20992, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_utcOffset_, MC_SMB_utcOffset_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray21010 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Variable VAR_comparandAsDateAndTime_0_1 = new_Variable_named(L"comparandAsDateAndTime", 0);
    Array PArray21011 = new_Array_with(1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21014 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21016 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21020 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode21019 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend21020, (Optr)&t_block_return);
    Block PBlock21018 = new_Block_with(empty_Array, empty_Array, PThreadedCode21019, 1, PSend21020);
    // ifTrue:. 
    Send PSend21017 = new_Send((Optr)PSend21016, SMB_ifTrue_, 1, (Optr)PBlock21018);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend21022 = new_Send((Optr)VAR_comparand_0_0, SMB_asDateAndTime, 0);
    Assign PAssign21021 = new_Assign((Optr)VAR_comparandAsDateAndTime_0_1, (Optr)PSend21022);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21023 = new_Send((Optr)self, SMB_offset, 0);
    // offset. 
    Send PSend21024 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_offset, 0);
    // =. 
    Send PSend21025 = new_Send((Optr)PSend21023, SMB__equals_, 1, (Optr)PSend21024);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    // hasEqualTicks:. 
    Send PSend21029 = new_Send((Optr)self, SMB_hasEqualTicks_, 1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Array PThreadedCode21028 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send1, (Optr)PSend21029, (Optr)&t_block_return);
    Block PBlock21027 = new_Block_with(empty_Array, empty_Array, PThreadedCode21028, 1, PSend21029);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend21032 = new_Send((Optr)self, SMB_asUTC, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21033 = new_Send((Optr)PSend21032, SMB_ticks, 0);
    // asUTC. 
    Send PSend21034 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_asUTC, 0);
    // ticks. 
    Send PSend21035 = new_Send((Optr)PSend21034, SMB_ticks, 0);
    // =. 
    Send PSend21036 = new_Send((Optr)PSend21033, SMB__equals_, 1, (Optr)PSend21035);
    Array PThreadedCode21031 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21032, (Optr)&t_send0, (Optr)PSend21033, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend21034, (Optr)&t_send0, (Optr)PSend21035, (Optr)&t_send1, (Optr)PSend21036, (Optr)&t_block_return);
    Block PBlock21030 = new_Block_with(empty_Array, empty_Array, PThreadedCode21031, 1, PSend21036);
    // ifTrue:ifFalse:. 
    Send PSend21026 = new_Send((Optr)PSend21025, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21027, (Optr)PBlock21030);
    Array PThreadedCode21015 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend21016, (Optr)&t_send_ifTrue_, (Optr)PSend21017, (Optr)PBlock21018, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21021, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend21022, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21023, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend21024, (Optr)&t_send1, (Optr)PSend21025, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21026, (Optr)PBlock21027, (Optr)PBlock21030, (Optr)&t_method_return);
    Block PBlock21013 = new_Block_with(PArray21014, empty_Array, PThreadedCode21015, 3, PSend21017, PAssign21021, PSend21026);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21037 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21013);
    Array PThreadedCode21012 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21013, (Optr)&t_send1, (Optr)PSend21037, (Optr)&t_method_return);
    Method PMethod21009 = new_Method_with(PArray21010, PArray21011, empty_Array, PThreadedCode21012, 1, PSend21037);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod21009, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_secondsSinceMidnight() {
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    Array PThreadedCode21039 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_method_return);
    Method PMethod21038 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21039, 1, slot_Chronology_DateAndTime_seconds);
    
    MethodClosure MC_SMB_secondsSinceMidnight = new_MethodClosure((Method)PMethod21038, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_secondsSinceMidnight, MC_SMB_secondsSinceMidnight);
}


static void init_SMB_normalize_ticks_base_() {
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    Variable VAR_i_0_0 = new_Variable_named(L"i", 0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Variable VAR_base_0_2 = new_Variable_named(L"base", 0);
    Array PArray21041 = new_Array_with(3, (Optr)VAR_i_0_0, (Optr)VAR_ticks_0_1, (Optr)VAR_base_0_2);
    Variable VAR_tick_0_3 = new_Variable_named(L"tick", 0);
    Variable VAR_quo_0_4 = new_Variable_named(L"quo", 0);
    Variable VAR_rem_0_5 = new_Variable_named(L"rem", 0);
    Array PArray21042 = new_Array_with(3, (Optr)VAR_tick_0_3, (Optr)VAR_quo_0_4, (Optr)VAR_rem_0_5);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21045 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)VAR_i_0_0);
    Assign PAssign21044 = new_Assign((Optr)VAR_tick_0_3, (Optr)PSend21045);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend21047 = new_Send((Optr)VAR_tick_0_3, SMB_quo_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21046 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21047);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend21049 = new_Send((Optr)VAR_tick_0_3, SMB_rem_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21048 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21049);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend21050 = new_Send((Optr)VAR_rem_0_5, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend21055 = new_Send((Optr)VAR_quo_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign21054 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21055);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend21057 = new_Send((Optr)VAR_base_0_2, SMB__plus_, 1, (Optr)VAR_rem_0_5);
    Assign PAssign21056 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21057);
    Array PThreadedCode21053 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign21054, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21055, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21056, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send1, (Optr)PSend21057, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21052 = new_Block_with(empty_Array, empty_Array, PThreadedCode21053, 2, PAssign21054, PAssign21056);
    // ifTrue:. 
    Send PSend21051 = new_Send((Optr)PSend21050, SMB_ifTrue_, 1, (Optr)PBlock21052);
    // -. 
    Send PSend21058 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // -. 
    Send PSend21059 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend21060 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)PSend21059);
    // +. 
    Send PSend21061 = new_Send((Optr)PSend21060, SMB__plus_, 1, (Optr)VAR_quo_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend21062 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)PSend21058, (Optr)PSend21061);
    // at:put:. 
    Send PSend21063 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)VAR_i_0_0, (Optr)VAR_rem_0_5);
    Array PThreadedCode21043 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push1, (Optr)PAssign21044, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_send1, (Optr)PSend21045, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21046, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21047, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21048, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21049, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send0, (Optr)PSend21050, (Optr)&t_send_ifTrue_, (Optr)PSend21051, (Optr)PBlock21052, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21058, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21059, (Optr)&t_send1, (Optr)PSend21060, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_send1, (Optr)PSend21061, (Optr)&t_send2, (Optr)PSend21062, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send2, (Optr)PSend21063, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21040 = new_Method_with(PArray21041, PArray21042, empty_Array, PThreadedCode21043, 7, PAssign21044, PAssign21046, PAssign21048, PSend21051, PSend21062, PSend21063, self);
    
    MethodClosure MC_SMB_normalize_ticks_base_ = new_MethodClosure((Method)PMethod21040, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_normalize_ticks_base_, MC_SMB_normalize_ticks_base_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray21065 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21068 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21070 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend21071 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21072 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21070, (Optr)PSend21071);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21073 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21069 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21070, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21071, (Optr)&t_send2, (Optr)PSend21072, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21073, (Optr)&t_method_return);
    Block PBlock21067 = new_Block_with(PArray21068, empty_Array, PThreadedCode21069, 2, PSend21072, PSend21073);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend21074 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21075 = new_Send((Optr)PSend21074, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21076 = new_Send((Optr)PBlock21067, SMB_value_, 1, (Optr)PSend21075);
    Array PThreadedCode21066 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock21067, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21074, (Optr)&t_send0, (Optr)PSend21075, (Optr)&t_send1, (Optr)PSend21076, (Optr)&t_method_return);
    Method PMethod21064 = new_Method_with(PArray21065, empty_Array, empty_Array, PThreadedCode21066, 1, PSend21076);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21064, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Array PThreadedCode21078 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21077 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21078, 1, self);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod21077, Chronology_DateAndTime_Class);
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
    Send PSend21081 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21082 = new_Send((Optr)PSend21081, SMB_basicNew, 0);
    // class. 
    Send PSend21083 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21084 = new_Send((Optr)PSend21083, SMB_localOffset, 0);
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // setJdn:seconds:offset:. 
    Send PSend21085 = new_Send((Optr)PSend21082, SMB_setJdn_seconds_offset_, 3, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)int_0_Const, (Optr)PSend21084);
    Array PThreadedCode21080 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21081, (Optr)&t_send0, (Optr)PSend21082, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21083, (Optr)&t_send0, (Optr)PSend21084, (Optr)&t_send3, (Optr)PSend21085, (Optr)&t_method_return);
    Method PMethod21079 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21080, 1, PSend21085);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21079, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_midnight, MC_SMB_midnight);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21087 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_l_0_1 = new_Variable_named(L"l", 0);
    Variable VAR_n_0_2 = new_Variable_named(L"n", 0);
    Variable VAR_i_0_3 = new_Variable_named(L"i", 0);
    Variable VAR_j_0_4 = new_Variable_named(L"j", 0);
    Variable VAR_dd_0_5 = new_Variable_named(L"dd", 0);
    Variable VAR_mm_0_6 = new_Variable_named(L"mm", 0);
    Variable VAR_yyyy_0_7 = new_Variable_named(L"yyyy", 0);
    Array PArray21088 = new_Array_with(7, (Optr)VAR_l_0_1, (Optr)VAR_n_0_2, (Optr)VAR_i_0_3, (Optr)VAR_j_0_4, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_68569 = new_SmallInt(68569);
    Constant int_68569_Const = new_Constant((Optr)int_68569);
    // +. 
    Send PSend21091 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_68569_Const);
    Assign PAssign21090 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21091);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // *. 
    Send PSend21094 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_4_Const);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_146097 = new_SmallInt(146097);
    Constant int_146097_Const = new_Constant((Optr)int_146097);
    // //. 
    Send PSend21093 = new_Send((Optr)PSend21094, SMB__quotient_, 1, (Optr)int_146097_Const);
    Assign PAssign21092 = new_Assign((Optr)VAR_n_0_2, (Optr)PSend21093);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // *. 
    Send PSend21099 = new_Send((Optr)VAR_n_0_2, SMB__times_, 1, (Optr)int_146097_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // +. 
    Send PSend21098 = new_Send((Optr)PSend21099, SMB__plus_, 1, (Optr)int_3_Const);
    // //. 
    Send PSend21097 = new_Send((Optr)PSend21098, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21096 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21097);
    Assign PAssign21095 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21096);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21103 = new_Send((Optr)VAR_l_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_4000 = new_SmallInt(4000);
    Constant int_4000_Const = new_Constant((Optr)int_4000);
    // *. 
    Send PSend21102 = new_Send((Optr)PSend21103, SMB__times_, 1, (Optr)int_4000_Const);
    SmallInt int_1461001 = new_SmallInt(1461001);
    Constant int_1461001_Const = new_Constant((Optr)int_1461001);
    // //. 
    Send PSend21101 = new_Send((Optr)PSend21102, SMB__quotient_, 1, (Optr)int_1461001_Const);
    Assign PAssign21100 = new_Assign((Optr)VAR_i_0_3, (Optr)PSend21101);
    SmallInt int_1461 = new_SmallInt(1461);
    Constant int_1461_Const = new_Constant((Optr)int_1461);
    // *. 
    Send PSend21108 = new_Send((Optr)VAR_i_0_3, SMB__times_, 1, (Optr)int_1461_Const);
    // //. 
    Send PSend21107 = new_Send((Optr)PSend21108, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21106 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21107);
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // +. 
    Send PSend21105 = new_Send((Optr)PSend21106, SMB__plus_, 1, (Optr)int_31_Const);
    Assign PAssign21104 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21105);
    SmallInt int_80 = new_SmallInt(80);
    Constant int_80_Const = new_Constant((Optr)int_80);
    // *. 
    Send PSend21111 = new_Send((Optr)int_80_Const, SMB__times_, 1, (Optr)VAR_l_0_1);
    SmallInt int_2447 = new_SmallInt(2447);
    Constant int_2447_Const = new_Constant((Optr)int_2447);
    // //. 
    Send PSend21110 = new_Send((Optr)PSend21111, SMB__quotient_, 1, (Optr)int_2447_Const);
    Assign PAssign21109 = new_Assign((Optr)VAR_j_0_4, (Optr)PSend21110);
    // *. 
    Send PSend21115 = new_Send((Optr)VAR_j_0_4, SMB__times_, 1, (Optr)int_2447_Const);
    // //. 
    Send PSend21114 = new_Send((Optr)PSend21115, SMB__quotient_, 1, (Optr)int_80_Const);
    // -. 
    Send PSend21113 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21114);
    Assign PAssign21112 = new_Assign((Optr)VAR_dd_0_5, (Optr)PSend21113);
    SmallInt int_11 = new_SmallInt(11);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // //. 
    Send PSend21117 = new_Send((Optr)VAR_j_0_4, SMB__quotient_, 1, (Optr)int_11_Const);
    Assign PAssign21116 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21117);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend21120 = new_Send((Optr)VAR_j_0_4, SMB__plus_, 1, (Optr)int_2_Const);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // *. 
    Send PSend21121 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_12_Const);
    // -. 
    Send PSend21119 = new_Send((Optr)PSend21120, SMB__minus_, 1, (Optr)PSend21121);
    Assign PAssign21118 = new_Assign((Optr)VAR_mm_0_6, (Optr)PSend21119);
    SmallInt int_49 = new_SmallInt(49);
    Constant int_49_Const = new_Constant((Optr)int_49);
    // -. 
    Send PSend21126 = new_Send((Optr)VAR_n_0_2, SMB__minus_, 1, (Optr)int_49_Const);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // *. 
    Send PSend21125 = new_Send((Optr)PSend21126, SMB__times_, 1, (Optr)int_100_Const);
    // +. 
    Send PSend21124 = new_Send((Optr)PSend21125, SMB__plus_, 1, (Optr)VAR_i_0_3);
    // +. 
    Send PSend21123 = new_Send((Optr)PSend21124, SMB__plus_, 1, (Optr)VAR_l_0_1);
    Assign PAssign21122 = new_Assign((Optr)VAR_yyyy_0_7, (Optr)PSend21123);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend21127 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_value_, 3, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Array PThreadedCode21089 = instantiate_Array_with(ThreadedCode_Class, 0, 177, (Optr)&t_push1, (Optr)PAssign21090, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push1, (Optr)int_68569, (Optr)&t_send1, (Optr)PSend21091, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21092, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21094, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21093, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21095, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21099, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend21098, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21097, (Optr)&t_send1, (Optr)PSend21096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21100, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21103, (Optr)&t_push1, (Optr)int_4000, (Optr)&t_send1, (Optr)PSend21102, (Optr)&t_push1, (Optr)int_1461001, (Optr)&t_send1, (Optr)PSend21101, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21104, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_push1, (Optr)int_1461, (Optr)&t_send1, (Optr)PSend21108, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21107, (Optr)&t_send1, (Optr)PSend21106, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend21105, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21109, (Optr)&t_push1, (Optr)int_80, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21111, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21110, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21112, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21115, (Optr)&t_push1, (Optr)int_80, (Optr)&t_send1, (Optr)PSend21114, (Optr)&t_send1, (Optr)PSend21113, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21116, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_11, (Optr)&t_send1, (Optr)PSend21117, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21118, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend21120, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21121, (Optr)&t_send1, (Optr)PSend21119, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21122, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_49, (Optr)&t_send1, (Optr)PSend21126, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend21125, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_send1, (Optr)PSend21124, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21123, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_dd_0_5, (Optr)&t_push_variable, (Optr)VAR_mm_0_6, (Optr)&t_push_variable, (Optr)VAR_yyyy_0_7, (Optr)&t_send3, (Optr)PSend21127, (Optr)&t_method_return);
    Method PMethod21086 = new_Method_with(PArray21087, PArray21088, empty_Array, PThreadedCode21089, 11, PAssign21090, PAssign21092, PAssign21095, PAssign21100, PAssign21104, PAssign21109, PAssign21112, PAssign21116, PAssign21118, PAssign21122, PSend21127);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod21086, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printYMDOn_() {
    Symbol SMB_printYMDOn_ = new_Symbol(L"printYMDOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21129 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend21131 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode21130 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend21131, (Optr)&t_method_return);
    Method PMethod21128 = new_Method_with(PArray21129, empty_Array, empty_Array, PThreadedCode21130, 1, PSend21131);
    
    MethodClosure MC_SMB_printYMDOn_ = new_MethodClosure((Method)PMethod21128, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_, MC_SMB_printYMDOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21134 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode21133 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send2, (Optr)PSend21134, (Optr)&t_method_return);
    Method PMethod21132 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21133, 1, PSend21134);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod21132, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray21138 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode21139 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_method_return);
    Block PBlock21137 = new_Block_with(PArray21138, empty_Array, PThreadedCode21139, 1, VAR_y_1_2);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21140 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21137);
    Array PThreadedCode21136 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21137, (Optr)&t_send1, (Optr)PSend21140, (Optr)&t_method_return);
    Method PMethod21135 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21136, 1, PSend21140);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod21135, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_printHMSOn_() {
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21142 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_h_0_1 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_2 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_3 = new_Variable_named(L"s", 0);
    Array PArray21143 = new_Array_with(3, (Optr)VAR_h_0_1, (Optr)VAR_m_0_2, (Optr)VAR_s_0_3);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21147 = new_Send((Optr)self, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend21146 = new_Send((Optr)PSend21147, SMB_abs, 0);
    Assign PAssign21145 = new_Assign((Optr)VAR_h_0_1, (Optr)PSend21146);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21150 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend21149 = new_Send((Optr)PSend21150, SMB_abs, 0);
    Assign PAssign21148 = new_Assign((Optr)VAR_m_0_2, (Optr)PSend21149);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21153 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend21152 = new_Send((Optr)PSend21153, SMB_abs, 0);
    Assign PAssign21151 = new_Assign((Optr)VAR_s_0_3, (Optr)PSend21152);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend21154 = new_Send((Optr)VAR_h_0_1, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9197 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    // <<. 
    Send PSend21158 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode21157 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend21158, (Optr)&t_block_return);
    Block PBlock21156 = new_Block_with(empty_Array, empty_Array, PThreadedCode21157, 1, PSend21158);
    // ifTrue:. 
    Send PSend21155 = new_Send((Optr)PSend21154, SMB_ifTrue_, 1, (Optr)PBlock21156);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21159 = new_Send((Optr)VAR_h_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend21160 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend21161 = new_Send((Optr)VAR_m_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21165 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode21164 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend21165, (Optr)&t_block_return);
    Block PBlock21163 = new_Block_with(empty_Array, empty_Array, PThreadedCode21164, 1, PSend21165);
    // ifTrue:. 
    Send PSend21162 = new_Send((Optr)PSend21161, SMB_ifTrue_, 1, (Optr)PBlock21163);
    // printOn:. 
    Send PSend21166 = new_Send((Optr)VAR_m_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21167 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend21168 = new_Send((Optr)VAR_s_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21172 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode21171 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend21172, (Optr)&t_block_return);
    Block PBlock21170 = new_Block_with(empty_Array, empty_Array, PThreadedCode21171, 1, PSend21172);
    // ifTrue:. 
    Send PSend21169 = new_Send((Optr)PSend21168, SMB_ifTrue_, 1, (Optr)PBlock21170);
    // printOn:. 
    Send PSend21173 = new_Send((Optr)VAR_s_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21144 = instantiate_Array_with(ThreadedCode_Class, 0, 93, (Optr)&t_push1, (Optr)PAssign21145, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21147, (Optr)&t_send0, (Optr)PSend21146, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21148, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21150, (Optr)&t_send0, (Optr)PSend21149, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21151, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21153, (Optr)&t_send0, (Optr)PSend21152, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21154, (Optr)&t_send_ifTrue_, (Optr)PSend21155, (Optr)PBlock21156, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21159, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend21160, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21161, (Optr)&t_send_ifTrue_, (Optr)PSend21162, (Optr)PBlock21163, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21166, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend21167, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21168, (Optr)&t_send_ifTrue_, (Optr)PSend21169, (Optr)PBlock21170, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21173, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21141 = new_Method_with(PArray21142, PArray21143, empty_Array, PThreadedCode21144, 12, PAssign21145, PAssign21148, PAssign21151, PSend21155, PSend21159, PSend21160, PSend21162, PSend21166, PSend21167, PSend21169, PSend21173, self);
    
    MethodClosure MC_SMB_printHMSOn_ = new_MethodClosure((Method)PMethod21141, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printHMSOn_, MC_SMB_printHMSOn_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray21175 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21178 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend21180 = new_Send((Optr)VAR_aJulianDayNumber_0_0, SMB_days, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21181 = new_Send((Optr)PSend21180, SMB_ticks, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21182 = new_Send((Optr)self, SMB_localOffset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21183 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21181, (Optr)PSend21182);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21184 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21179 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send0, (Optr)PSend21180, (Optr)&t_send0, (Optr)PSend21181, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21182, (Optr)&t_send2, (Optr)PSend21183, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21184, (Optr)&t_method_return);
    Block PBlock21177 = new_Block_with(PArray21178, empty_Array, PThreadedCode21179, 2, PSend21183, PSend21184);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21185 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21186 = new_Send((Optr)PBlock21177, SMB_value_, 1, (Optr)PSend21185);
    Array PThreadedCode21176 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21177, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21185, (Optr)&t_send1, (Optr)PSend21186, (Optr)&t_method_return);
    Method PMethod21174 = new_Method_with(PArray21175, empty_Array, empty_Array, PThreadedCode21176, 1, PSend21186);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod21174, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_localTimeZone() {
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend21192 = new_Send((Optr)PTimeZone_classReference, SMB_default, 0);
    Assign PAssign21191 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)PSend21192);
    Array PThreadedCode21190 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign21191, (Optr)&t_push_class_reference, (Optr)PTimeZone_classReference, (Optr)&t_send0, (Optr)PSend21192, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21189 = new_Block_with(empty_Array, empty_Array, PThreadedCode21190, 1, PAssign21191);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21193 = new_Send((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, SMB_ifNil_, 1, (Optr)PBlock21189);
    Array PThreadedCode21188 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)&t_push_closure, (Optr)PBlock21189, (Optr)&t_send1, (Optr)PSend21193, (Optr)&t_method_return);
    Method PMethod21187 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21188, 1, PSend21193);
    
    MethodClosure MC_SMB_localTimeZone = new_MethodClosure((Method)PMethod21187, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone, MC_SMB_localTimeZone);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend21196 = new_Send((Optr)self, SMB_midnight, 0);
    Array PThreadedCode21195 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21196, (Optr)&t_method_return);
    Method PMethod21194 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21195, 1, PSend21196);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod21194, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_epoch() {
    Symbol SMB_epoch = new_Symbol(L"epoch");
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21199 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend21200 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend21199);
    Array PThreadedCode21198 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21199, (Optr)&t_send1, (Optr)PSend21200, (Optr)&t_method_return);
    Method PMethod21197 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21198, 1, PSend21200);
    
    MethodClosure MC_SMB_epoch = new_MethodClosure((Method)PMethod21197, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_epoch, MC_SMB_epoch);
}


static void init_class_SMB_localTimeZone_() {
    Symbol SMB_localTimeZone_ = new_Symbol(L"localTimeZone:");
    Variable VAR_aTimeZone_0_0 = new_Variable_named(L"aTimeZone", 0);
    Array PArray21202 = new_Array_with(1, (Optr)VAR_aTimeZone_0_0);
    Assign PAssign21204 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)VAR_aTimeZone_0_0);
    Array PThreadedCode21203 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21204, (Optr)&t_push_variable, (Optr)VAR_aTimeZone_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21201 = new_Method_with(PArray21202, empty_Array, empty_Array, PThreadedCode21203, 2, PAssign21204, self);
    
    MethodClosure MC_SMB_localTimeZone_ = new_MethodClosure((Method)PMethod21201, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone_, MC_SMB_localTimeZone_);
}


static void init_class_SMB_localOffset() {
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21207 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21208 = new_Send((Optr)PSend21207, SMB_offset, 0);
    Array PThreadedCode21206 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21207, (Optr)&t_send0, (Optr)PSend21208, (Optr)&t_method_return);
    Method PMethod21205 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21206, 1, PSend21208);
    
    MethodClosure MC_SMB_localOffset = new_MethodClosure((Method)PMethod21205, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localOffset, MC_SMB_localOffset);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21211 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21212 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21213 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21214 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend21212, (Optr)PSend21213);
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21215 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21216 = new_Send((Optr)PSend21215, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21217 = new_Send((Optr)PSend21211, SMB_ticks_offset_, 2, (Optr)PSend21214, (Optr)PSend21216);
    Array PThreadedCode21210 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21211, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21212, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21213, (Optr)&t_send2, (Optr)PSend21214, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21215, (Optr)&t_send0, (Optr)PSend21216, (Optr)&t_send2, (Optr)PSend21217, (Optr)&t_method_return);
    Method PMethod21209 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21210, 1, PSend21217);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod21209, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_midnight() {
    Symbol SMB_midnight = new_Symbol(L"midnight");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend21220 = new_Send((Optr)self, SMB_now, 0);
    // midnight. 
    Send PSend21221 = new_Send((Optr)PSend21220, SMB_midnight, 0);
    Array PThreadedCode21219 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21220, (Optr)&t_send0, (Optr)PSend21221, (Optr)&t_method_return);
    Method PMethod21218 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21219, 1, PSend21221);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21218, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_midnight, MC_SMB_midnight);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21224 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Array PThreadedCode21223 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21224, (Optr)&t_method_return);
    Method PMethod21222 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21223, 1, PSend21224);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod21222, HEADER(Chronology_DateAndTime_Class));
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