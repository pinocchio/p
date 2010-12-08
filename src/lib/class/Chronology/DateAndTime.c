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
    Send PSend21013 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode21012 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21013, (Optr)&t_method_return);
    Method PMethod21011 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21012, 1, PSend21013);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod21011, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend21016 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_epoch = new_Symbol(L"epoch");
    // epoch. 
    Send PSend21017 = new_Send((Optr)PSend21016, SMB_epoch, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend21018 = new_Send((Optr)self, SMB__minus_, 1, (Optr)PSend21017);
    // asSeconds. 
    Send PSend21019 = new_Send((Optr)PSend21018, SMB_asSeconds, 0);
    Array PThreadedCode21015 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21016, (Optr)&t_send0, (Optr)PSend21017, (Optr)&t_send1, (Optr)PSend21018, (Optr)&t_send0, (Optr)PSend21019, (Optr)&t_method_return);
    Method PMethod21014 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21015, 1, PSend21019);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod21014, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend21022 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode21021 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21022, (Optr)&t_method_return);
    Method PMethod21020 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21021, 1, PSend21022);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod21020, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend21025 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode21024 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21025, (Optr)&t_method_return);
    Method PMethod21023 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21024, 1, PSend21025);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod21023, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode21027 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_method_return);
    Method PMethod21026 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21027, 1, slot_Chronology_DateAndTime_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod21026, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend21030 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode21029 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend21030, (Optr)&t_method_return);
    Method PMethod21028 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21029, 1, PSend21030);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod21028, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_julianDayNumber() {
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    Array PThreadedCode21032 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_method_return);
    Method PMethod21031 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21032, 1, slot_Chronology_DateAndTime_jdn);
    
    MethodClosure MC_SMB_julianDayNumber = new_MethodClosure((Method)PMethod21031, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_julianDayNumber, MC_SMB_julianDayNumber);
}


static void init_SMB_dayOfMonth() {
    Symbol SMB_dayOfMonth = new_Symbol(L"dayOfMonth");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray21036 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode21037 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_method_return);
    Block PBlock21035 = new_Block_with(PArray21036, empty_Array, PThreadedCode21037, 1, VAR_d_1_0);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21038 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21035);
    Array PThreadedCode21034 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21035, (Optr)&t_send1, (Optr)PSend21038, (Optr)&t_method_return);
    Method PMethod21033 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21034, 1, PSend21038);
    
    MethodClosure MC_SMB_dayOfMonth = new_MethodClosure((Method)PMethod21033, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfMonth, MC_SMB_dayOfMonth);
}


static void init_SMB_ticks_offset_() {
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    Variable VAR_ticks_0_0 = new_Variable_named(L"ticks", 0);
    Variable VAR_utcOffset_0_1 = new_Variable_named(L"utcOffset", 0);
    Array PArray21040 = new_Array_with(2, (Optr)VAR_ticks_0_0, (Optr)VAR_utcOffset_0_1);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend21042 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // normalize:ticks:base:. 
    Send PSend21043 = new_Send((Optr)self, SMB_normalize_ticks_base_, 3, (Optr)int_2_Const, (Optr)VAR_ticks_0_0, (Optr)PSend21042);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend21045 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign21044 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)PSend21045);
    // at:. 
    Send PSend21047 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign21046 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)PSend21047);
    Assign PAssign21048 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_utcOffset_0_1);
    Array PThreadedCode21041 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21042, (Optr)&t_send3, (Optr)PSend21043, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21044, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21045, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21046, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend21047, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21048, (Optr)&t_push_variable, (Optr)VAR_utcOffset_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21039 = new_Method_with(PArray21040, empty_Array, empty_Array, PThreadedCode21041, 5, PSend21043, PAssign21044, PAssign21046, PAssign21048, self);
    
    MethodClosure MC_SMB_ticks_offset_ = new_MethodClosure((Method)PMethod21039, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks_offset_, MC_SMB_ticks_offset_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray21050 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Array PArray21051 = new_Array_with(1, (Optr)VAR_ticks_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21054 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign21053 = new_Assign((Optr)VAR_ticks_0_1, (Optr)PSend21054);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21055 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend21056 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // ticks. 
    Send PSend21057 = new_Send((Optr)PSend21056, SMB_ticks, 0);
    Variable VAR_ticks1_1_0 = new_Variable_named(L"ticks1", 1);
    Variable VAR_dticks_1_1 = new_Variable_named(L"dticks", 1);
    Array PArray21059 = new_Array_with(2, (Optr)VAR_ticks1_1_0, (Optr)VAR_dticks_1_1);
    // +. 
    Send PSend21061 = new_Send((Optr)VAR_ticks1_1_0, SMB__plus_, 1, (Optr)VAR_dticks_1_1);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend21062 = new_Send((Optr)VAR_ticks_0_1, SMB_addLast_, 1, (Optr)PSend21061);
    Array PThreadedCode21060 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_ticks1_1_0, (Optr)&t_push_variable, (Optr)VAR_dticks_1_1, (Optr)&t_send1, (Optr)PSend21061, (Optr)&t_send1, (Optr)PSend21062, (Optr)&t_method_return);
    Block PBlock21058 = new_Block_with(PArray21059, empty_Array, PThreadedCode21060, 1, PSend21062);
    Symbol SMB_with_do_ = new_Symbol(L"with:do:");
    // with:do:. 
    Send PSend21063 = new_Send((Optr)PSend21055, SMB_with_do_, 2, (Optr)PSend21057, (Optr)PBlock21058);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21065 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend21067 = new_Send((Optr)VAR_ticks_0_1, SMB_asArray, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21068 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21069 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21067, (Optr)PSend21068);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21070 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21066 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_send0, (Optr)PSend21067, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21068, (Optr)&t_send2, (Optr)PSend21069, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21070, (Optr)&t_method_return);
    Block PBlock21064 = new_Block_with(PArray21065, empty_Array, PThreadedCode21066, 2, PSend21069, PSend21070);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend21071 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21072 = new_Send((Optr)PSend21071, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21073 = new_Send((Optr)PBlock21064, SMB_value_, 1, (Optr)PSend21072);
    Array PThreadedCode21052 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign21053, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend21054, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21055, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend21056, (Optr)&t_send0, (Optr)PSend21057, (Optr)&t_push_closure, (Optr)PBlock21058, (Optr)&t_send2, (Optr)PSend21063, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock21064, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21071, (Optr)&t_send0, (Optr)PSend21072, (Optr)&t_send1, (Optr)PSend21073, (Optr)&t_method_return);
    Method PMethod21049 = new_Method_with(PArray21050, PArray21051, empty_Array, PThreadedCode21052, 3, PAssign21053, PSend21063, PSend21073);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod21049, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray21075 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol  SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_asDateAndTime_Const = new_Constant((Optr)SMB_asDateAndTime);
    // respondsTo:. 
    Send PSend21077 = new_Send((Optr)VAR_operand_0_0, SMB_respondsTo_, 1, (Optr)SMB_asDateAndTime_Const);
    Variable VAR_lticks_1_0 = new_Variable_named(L"lticks", 1);
    Variable VAR_rticks_1_1 = new_Variable_named(L"rticks", 1);
    Array PArray21079 = new_Array_with(2, (Optr)VAR_lticks_1_0, (Optr)VAR_rticks_1_1);
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    // asLocal. 
    Send PSend21083 = new_Send((Optr)self, SMB_asLocal, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21082 = new_Send((Optr)PSend21083, SMB_ticks, 0);
    Assign PAssign21081 = new_Assign((Optr)VAR_lticks_1_0, (Optr)PSend21082);
    // asDateAndTime. 
    Send PSend21087 = new_Send((Optr)VAR_operand_0_0, SMB_asDateAndTime, 0);
    // asLocal. 
    Send PSend21086 = new_Send((Optr)PSend21087, SMB_asLocal, 0);
    // ticks. 
    Send PSend21085 = new_Send((Optr)PSend21086, SMB_ticks, 0);
    Assign PAssign21084 = new_Assign((Optr)VAR_rticks_1_1, (Optr)PSend21085);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend21088 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend21089 = new_Send((Optr)VAR_lticks_1_0, SMB_first, 0);
    // first. 
    Send PSend21090 = new_Send((Optr)VAR_rticks_1_1, SMB_first, 0);
    // -. 
    Send PSend21091 = new_Send((Optr)PSend21089, SMB__minus_, 1, (Optr)PSend21090);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend21092 = new_Send((Optr)PSend21088, SMB__times_, 1, (Optr)PSend21091);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend21093 = new_Send((Optr)VAR_lticks_1_0, SMB_second, 0);
    // second. 
    Send PSend21094 = new_Send((Optr)VAR_rticks_1_1, SMB_second, 0);
    // -. 
    Send PSend21095 = new_Send((Optr)PSend21093, SMB__minus_, 1, (Optr)PSend21094);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend21096 = new_Send((Optr)PSend21092, SMB__plus_, 1, (Optr)PSend21095);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend21097 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)PSend21096);
    Array PThreadedCode21080 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign21081, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21083, (Optr)&t_send0, (Optr)PSend21082, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21084, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend21087, (Optr)&t_send0, (Optr)PSend21086, (Optr)&t_send0, (Optr)PSend21085, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21088, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend21089, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend21090, (Optr)&t_send1, (Optr)PSend21091, (Optr)&t_send1, (Optr)PSend21092, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend21093, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend21094, (Optr)&t_send1, (Optr)PSend21095, (Optr)&t_send1, (Optr)PSend21096, (Optr)&t_send1, (Optr)PSend21097, (Optr)&t_method_return);
    Block PBlock21078 = new_Block_with(empty_Array, PArray21079, PThreadedCode21080, 3, PAssign21081, PAssign21084, PSend21097);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend21100 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    // +. 
    Send PSend21101 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend21100);
    Array PThreadedCode21099 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend21100, (Optr)&t_send1, (Optr)PSend21101, (Optr)&t_block_return);
    Block PBlock21098 = new_Block_with(empty_Array, empty_Array, PThreadedCode21099, 1, PSend21101);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend21102 = new_Send((Optr)PSend21077, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21078, (Optr)PBlock21098);
    Array PThreadedCode21076 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_push1, (Optr)SMB_asDateAndTime, (Optr)&t_send1, (Optr)PSend21077, (Optr)&t_push_closure, (Optr)PBlock21078, (Optr)&t_push_closure, (Optr)PBlock21098, (Optr)&t_send2, (Optr)PSend21102, (Optr)&t_method_return);
    Method PMethod21074 = new_Method_with(PArray21075, empty_Array, empty_Array, PThreadedCode21076, 1, PSend21102);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod21074, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    Symbol SMB_month = new_Symbol(L"month");
    // month. 
    Send PSend21105 = new_Send((Optr)self, SMB_month, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend21106 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend21105);
    Array PThreadedCode21104 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21105, (Optr)&t_send1, (Optr)PSend21106, (Optr)&t_method_return);
    Method PMethod21103 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21104, 1, PSend21106);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod21103, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend21109 = new_Send((Optr)Date_classReference, SMB_starting_, 1, (Optr)self);
    Array PThreadedCode21108 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21109, (Optr)&t_method_return);
    Method PMethod21107 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21108, 1, PSend21109);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod21107, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_dayOfWeekAbbreviation() {
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    // dayOfWeekName. 
    Send PSend21112 = new_Send((Optr)self, SMB_dayOfWeekName, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend21113 = new_Send((Optr)PSend21112, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    Array PThreadedCode21111 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21112, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend21113, (Optr)&t_method_return);
    Method PMethod21110 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21111, 1, PSend21113);
    
    MethodClosure MC_SMB_dayOfWeekAbbreviation = new_MethodClosure((Method)PMethod21110, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekAbbreviation, MC_SMB_dayOfWeekAbbreviation);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21115 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    // printOn:withLeadingSpace:. 
    Send PSend21117 = new_Send((Optr)self, SMB_printOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode21116 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend21117, (Optr)&t_method_return);
    Method PMethod21114 = new_Method_with(PArray21115, empty_Array, empty_Array, PThreadedCode21116, 1, PSend21117);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21114, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_printYMDOn_withLeadingSpace_() {
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray21119 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_year_0_2 = new_Variable_named(L"year", 0);
    Variable VAR_month_0_3 = new_Variable_named(L"month", 0);
    Variable VAR_day_0_4 = new_Variable_named(L"day", 0);
    Array PArray21120 = new_Array_with(3, (Optr)VAR_year_0_2, (Optr)VAR_month_0_3, (Optr)VAR_day_0_4);
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray21123 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Assign PAssign21125 = new_Assign((Optr)VAR_year_0_2, (Optr)VAR_y_1_2);
    Assign PAssign21126 = new_Assign((Optr)VAR_month_0_3, (Optr)VAR_m_1_1);
    Assign PAssign21127 = new_Assign((Optr)VAR_day_0_4, (Optr)VAR_d_1_0);
    Array PThreadedCode21124 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign21125, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21126, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21127, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21122 = new_Block_with(PArray21123, empty_Array, PThreadedCode21124, 3, PAssign21125, PAssign21126, PAssign21127);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21128 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21122);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend21129 = new_Send((Optr)VAR_year_0_2, SMB_negative, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_2182 = new_Character(L'-');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    // nextPut:. 
    Send PSend21133 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPut_, 1, (Optr)char_2182_Const);
    Array PThreadedCode21132 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend21133, (Optr)&t_block_return);
    Block PBlock21131 = new_Block_with(empty_Array, empty_Array, PThreadedCode21132, 1, PSend21133);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend21139 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Array PThreadedCode21138 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend21139, (Optr)&t_block_return);
    Block PBlock21137 = new_Block_with(empty_Array, empty_Array, PThreadedCode21138, 1, PSend21139);
    // ifTrue:. 
    Send PSend21136 = new_Send((Optr)VAR_printLeadingSpaceToo_0_1, SMB_ifTrue_, 1, (Optr)PBlock21137);
    Array PThreadedCode21135 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend21136, (Optr)PBlock21137, (Optr)&t_block_return);
    Block PBlock21134 = new_Block_with(empty_Array, empty_Array, PThreadedCode21135, 1, PSend21136);
    // ifTrue:ifFalse:. 
    Send PSend21130 = new_Send((Optr)PSend21129, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21131, (Optr)PBlock21134);
    SmallInt int_1000 = new_SmallInt(1000);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    // <. 
    Send PSend21140 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_1000_Const);
    Character char_9456 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9456_Const = new_Constant((Optr)char_9456);
    // <<. 
    Send PSend21144 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode21143 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend21144, (Optr)&t_block_return);
    Block PBlock21142 = new_Block_with(empty_Array, empty_Array, PThreadedCode21143, 1, PSend21144);
    // ifTrue:. 
    Send PSend21141 = new_Send((Optr)PSend21140, SMB_ifTrue_, 1, (Optr)PBlock21142);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // <. 
    Send PSend21145 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_100_Const);
    // <<. 
    Send PSend21149 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode21148 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend21149, (Optr)&t_block_return);
    Block PBlock21147 = new_Block_with(empty_Array, empty_Array, PThreadedCode21148, 1, PSend21149);
    // ifTrue:. 
    Send PSend21146 = new_Send((Optr)PSend21145, SMB_ifTrue_, 1, (Optr)PBlock21147);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend21150 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21154 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode21153 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend21154, (Optr)&t_block_return);
    Block PBlock21152 = new_Block_with(empty_Array, empty_Array, PThreadedCode21153, 1, PSend21154);
    // ifTrue:. 
    Send PSend21151 = new_Send((Optr)PSend21150, SMB_ifTrue_, 1, (Optr)PBlock21152);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21155 = new_Send((Optr)VAR_year_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21156 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    // <. 
    Send PSend21157 = new_Send((Optr)VAR_month_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21161 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode21160 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend21161, (Optr)&t_block_return);
    Block PBlock21159 = new_Block_with(empty_Array, empty_Array, PThreadedCode21160, 1, PSend21161);
    // ifTrue:. 
    Send PSend21158 = new_Send((Optr)PSend21157, SMB_ifTrue_, 1, (Optr)PBlock21159);
    // printOn:. 
    Send PSend21162 = new_Send((Optr)VAR_month_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21163 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    // <. 
    Send PSend21164 = new_Send((Optr)VAR_day_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21168 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode21167 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend21168, (Optr)&t_block_return);
    Block PBlock21166 = new_Block_with(empty_Array, empty_Array, PThreadedCode21167, 1, PSend21168);
    // ifTrue:. 
    Send PSend21165 = new_Send((Optr)PSend21164, SMB_ifTrue_, 1, (Optr)PBlock21166);
    // printOn:. 
    Send PSend21169 = new_Send((Optr)VAR_day_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21121 = instantiate_Array_with(ThreadedCode_Class, 0, 101, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21122, (Optr)&t_send1, (Optr)PSend21128, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_send0, (Optr)PSend21129, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21130, (Optr)PBlock21131, (Optr)PBlock21134, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_send1, (Optr)PSend21140, (Optr)&t_send_ifTrue_, (Optr)PSend21141, (Optr)PBlock21142, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend21145, (Optr)&t_send_ifTrue_, (Optr)PSend21146, (Optr)PBlock21147, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21150, (Optr)&t_send_ifTrue_, (Optr)PSend21151, (Optr)PBlock21152, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21155, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend21156, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21157, (Optr)&t_send_ifTrue_, (Optr)PSend21158, (Optr)PBlock21159, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21162, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend21163, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21164, (Optr)&t_send_ifTrue_, (Optr)PSend21165, (Optr)PBlock21166, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21169, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21118 = new_Method_with(PArray21119, PArray21120, empty_Array, PThreadedCode21121, 13, PSend21128, PSend21130, PSend21141, PSend21146, PSend21151, PSend21155, PSend21156, PSend21158, PSend21162, PSend21163, PSend21165, PSend21169, self);
    
    MethodClosure MC_SMB_printYMDOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod21118, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_withLeadingSpace_, MC_SMB_printYMDOn_withLeadingSpace_);
}


static void init_SMB_dayOfWeek() {
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21172 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // rem:. 
    Send PSend21173 = new_Send((Optr)PSend21172, SMB_rem_, 1, (Optr)int_7_Const);
    // +. 
    Send PSend21174 = new_Send((Optr)PSend21173, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode21171 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21172, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend21173, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21174, (Optr)&t_method_return);
    Method PMethod21170 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21171, 1, PSend21174);
    
    MethodClosure MC_SMB_dayOfWeek = new_MethodClosure((Method)PMethod21170, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeek, MC_SMB_dayOfWeek);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend21177 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21178 = new_Send((Optr)PSend21177, SMB_seconds, 0);
    Array PThreadedCode21176 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend21177, (Optr)&t_send0, (Optr)PSend21178, (Optr)&t_method_return);
    Method PMethod21175 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21176, 1, PSend21178);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod21175, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend21181 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21182 = new_Send((Optr)PSend21181, SMB_hours, 0);
    Array PThreadedCode21180 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend21181, (Optr)&t_send0, (Optr)PSend21182, (Optr)&t_method_return);
    Method PMethod21179 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21180, 1, PSend21182);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod21179, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend21185 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode21184 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21185, (Optr)&t_method_return);
    Method PMethod21183 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21184, 1, PSend21185);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod21183, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend21188 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21189 = new_Send((Optr)PSend21188, SMB_minutes, 0);
    Array PThreadedCode21187 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend21188, (Optr)&t_send0, (Optr)PSend21189, (Optr)&t_method_return);
    Method PMethod21186 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21187, 1, PSend21189);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod21186, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minute, MC_SMB_minute);
}


static void init_SMB_hasEqualTicks_() {
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray21191 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    // julianDayNumber. 
    Send PSend21193 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_julianDayNumber, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21194 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__equals_, 1, (Optr)PSend21193);
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    // secondsSinceMidnight. 
    Send PSend21197 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_secondsSinceMidnight, 0);
    // =. 
    Send PSend21198 = new_Send((Optr)slot_Chronology_DateAndTime_seconds, SMB__equals_, 1, (Optr)PSend21197);
    Array PThreadedCode21196 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend21197, (Optr)&t_send1, (Optr)PSend21198, (Optr)&t_block_return);
    Block PBlock21195 = new_Block_with(empty_Array, empty_Array, PThreadedCode21196, 1, PSend21198);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend21199 = new_Send((Optr)PSend21194, SMB_and_, 1, (Optr)PBlock21195);
    Array PThreadedCode21192 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend21193, (Optr)&t_send1, (Optr)PSend21194, (Optr)&t_push_closure, (Optr)PBlock21195, (Optr)&t_send1, (Optr)PSend21199, (Optr)&t_method_return);
    Method PMethod21190 = new_Method_with(PArray21191, empty_Array, empty_Array, PThreadedCode21192, 1, PSend21199);
    
    MethodClosure MC_SMB_hasEqualTicks_ = new_MethodClosure((Method)PMethod21190, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hasEqualTicks_, MC_SMB_hasEqualTicks_);
}


static void init_SMB_month() {
    Symbol SMB_month = new_Symbol(L"month");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray21203 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode21204 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_method_return);
    Block PBlock21202 = new_Block_with(PArray21203, empty_Array, PThreadedCode21204, 1, VAR_m_1_1);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21205 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21202);
    Array PThreadedCode21201 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21202, (Optr)&t_send1, (Optr)PSend21205, (Optr)&t_method_return);
    Method PMethod21200 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21201, 1, PSend21205);
    
    MethodClosure MC_SMB_month = new_MethodClosure((Method)PMethod21200, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_month, MC_SMB_month);
}


static void init_SMB_asLocal() {
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21208 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend21209 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21210 = new_Send((Optr)PSend21209, SMB_localOffset, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21211 = new_Send((Optr)PSend21208, SMB__equals_, 1, (Optr)PSend21210);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode21214 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock21213 = new_Block_with(empty_Array, empty_Array, PThreadedCode21214, 1, self);
    // class. 
    Send PSend21217 = new_Send((Optr)self, SMB_class, 0);
    // localOffset. 
    Send PSend21218 = new_Send((Optr)PSend21217, SMB_localOffset, 0);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    // utcOffset:. 
    Send PSend21219 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)PSend21218);
    Array PThreadedCode21216 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21217, (Optr)&t_send0, (Optr)PSend21218, (Optr)&t_send1, (Optr)PSend21219, (Optr)&t_block_return);
    Block PBlock21215 = new_Block_with(empty_Array, empty_Array, PThreadedCode21216, 1, PSend21219);
    // ifTrue:ifFalse:. 
    Send PSend21212 = new_Send((Optr)PSend21211, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21213, (Optr)PBlock21215);
    Array PThreadedCode21207 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21208, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21209, (Optr)&t_send0, (Optr)PSend21210, (Optr)&t_send1, (Optr)PSend21211, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21212, (Optr)PBlock21213, (Optr)PBlock21215, (Optr)&t_method_return);
    Method PMethod21206 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21207, 1, PSend21212);
    
    MethodClosure MC_SMB_asLocal = new_MethodClosure((Method)PMethod21206, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asLocal, MC_SMB_asLocal);
}


static void init_SMB_printOn_withLeadingSpace_() {
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray21221 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray21222 = new_Array_with(3, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend21224 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Character char_21225 = new_Character(L'T');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_21225_Const = new_Constant((Optr)char_21225);
    // <<. 
    Send PSend21226 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_21225_Const);
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    // printHMSOn:. 
    Send PSend21227 = new_Send((Optr)self, SMB_printHMSOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend21228 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_positive, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_21232 = new_Character(L'+');
    Array PThreadedCode21231 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_21232, (Optr)&t_block_return);
    Constant char_21232_Const = new_Constant((Optr)char_21232);
    Block PBlock21230 = new_Block_with(empty_Array, empty_Array, PThreadedCode21231, 1, char_21232_Const);
    Character char_2182 = new_Character(L'-');
    Array PThreadedCode21234 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_block_return);
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    Block PBlock21233 = new_Block_with(empty_Array, empty_Array, PThreadedCode21234, 1, char_2182_Const);
    // ifTrue:ifFalse:. 
    Send PSend21229 = new_Send((Optr)PSend21228, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21230, (Optr)PBlock21233);
    // <<. 
    Send PSend21235 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21229);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21238 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend21237 = new_Send((Optr)PSend21238, SMB_abs, 0);
    Assign PAssign21236 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend21237);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend21239 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9456 = new_Character(L'0');
    Constant char_9456_Const = new_Constant((Optr)char_9456);
    // <<. 
    Send PSend21243 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode21242 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend21243, (Optr)&t_block_return);
    Block PBlock21241 = new_Block_with(empty_Array, empty_Array, PThreadedCode21242, 1, PSend21243);
    // ifTrue:. 
    Send PSend21240 = new_Send((Optr)PSend21239, SMB_ifTrue_, 1, (Optr)PBlock21241);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21244 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend21245 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21248 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_minutes, 0);
    // abs. 
    Send PSend21247 = new_Send((Optr)PSend21248, SMB_abs, 0);
    Assign PAssign21246 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend21247);
    // <. 
    Send PSend21249 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21253 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode21252 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend21253, (Optr)&t_block_return);
    Block PBlock21251 = new_Block_with(empty_Array, empty_Array, PThreadedCode21252, 1, PSend21253);
    // ifTrue:. 
    Send PSend21250 = new_Send((Optr)PSend21249, SMB_ifTrue_, 1, (Optr)PBlock21251);
    // printOn:. 
    Send PSend21254 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21255 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend21256 = new_Send((Optr)PSend21255, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // seconds. 
    Send PSend21263 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    // abs. 
    Send PSend21262 = new_Send((Optr)PSend21263, SMB_abs, 0);
    Symbol SMB_truncated = new_Symbol(L"truncated");
    // truncated. 
    Send PSend21261 = new_Send((Optr)PSend21262, SMB_truncated, 0);
    Assign PAssign21260 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend21261);
    // <<. 
    Send PSend21264 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // printOn:. 
    Send PSend21265 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21259 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign21260, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21263, (Optr)&t_send0, (Optr)PSend21262, (Optr)&t_send0, (Optr)PSend21261, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21264, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21265, (Optr)&t_block_return);
    Block PBlock21258 = new_Block_with(empty_Array, empty_Array, PThreadedCode21259, 3, PAssign21260, PSend21264, PSend21265);
    // ifFalse:. 
    Send PSend21257 = new_Send((Optr)PSend21256, SMB_ifFalse_, 1, (Optr)PBlock21258);
    Array PThreadedCode21223 = instantiate_Array_with(ThreadedCode_Class, 0, 107, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send2, (Optr)PSend21224, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_21225, (Optr)&t_send1, (Optr)PSend21226, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21227, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21228, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21229, (Optr)PBlock21230, (Optr)PBlock21233, (Optr)&t_send1, (Optr)PSend21235, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21236, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21238, (Optr)&t_send0, (Optr)PSend21237, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21239, (Optr)&t_send_ifTrue_, (Optr)PSend21240, (Optr)PBlock21241, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21244, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21245, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21246, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21248, (Optr)&t_send0, (Optr)PSend21247, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21249, (Optr)&t_send_ifTrue_, (Optr)PSend21250, (Optr)PBlock21251, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21254, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21255, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend21256, (Optr)&t_send_ifFalse_, (Optr)PSend21257, (Optr)PBlock21258, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21220 = new_Method_with(PArray21221, PArray21222, empty_Array, PThreadedCode21223, 13, PSend21224, PSend21226, PSend21227, PSend21235, PAssign21236, PSend21240, PSend21244, PSend21245, PAssign21246, PSend21250, PSend21254, PSend21257, self);
    
    MethodClosure MC_SMB_printOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod21220, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_withLeadingSpace_, MC_SMB_printOn_withLeadingSpace_);
}


static void init_SMB_setJdn_seconds_offset_() {
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    Variable VAR_julDays_0_0 = new_Variable_named(L"julDays", 0);
    Variable VAR_secs_0_1 = new_Variable_named(L"secs", 0);
    Variable VAR_anOffset_0_2 = new_Variable_named(L"anOffset", 0);
    Array PArray21267 = new_Array_with(3, (Optr)VAR_julDays_0_0, (Optr)VAR_secs_0_1, (Optr)VAR_anOffset_0_2);
    Assign PAssign21269 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)VAR_julDays_0_0);
    Assign PAssign21270 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)VAR_secs_0_1);
    Assign PAssign21271 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_anOffset_0_2);
    Array PThreadedCode21268 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign21269, (Optr)&t_push_variable, (Optr)VAR_julDays_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21270, (Optr)&t_push_variable, (Optr)VAR_secs_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21271, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21266 = new_Method_with(PArray21267, empty_Array, empty_Array, PThreadedCode21268, 4, PAssign21269, PAssign21270, PAssign21271, self);
    
    MethodClosure MC_SMB_setJdn_seconds_offset_ = new_MethodClosure((Method)PMethod21266, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_setJdn_seconds_offset_, MC_SMB_setJdn_seconds_offset_);
}


static void init_SMB_asUTC() {
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    Symbol SMB_isZero = new_Symbol(L"isZero");
    // isZero. 
    Send PSend21274 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_isZero, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode21277 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock21276 = new_Block_with(empty_Array, empty_Array, PThreadedCode21277, 1, self);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // utcOffset:. 
    Send PSend21280 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)int_0_Const);
    Array PThreadedCode21279 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend21280, (Optr)&t_block_return);
    Block PBlock21278 = new_Block_with(empty_Array, empty_Array, PThreadedCode21279, 1, PSend21280);
    // ifTrue:ifFalse:. 
    Send PSend21275 = new_Send((Optr)PSend21274, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21276, (Optr)PBlock21278);
    Array PThreadedCode21273 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21274, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21275, (Optr)PBlock21276, (Optr)PBlock21278, (Optr)&t_method_return);
    Method PMethod21272 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21273, 1, PSend21275);
    
    MethodClosure MC_SMB_asUTC = new_MethodClosure((Method)PMethod21272, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asUTC, MC_SMB_asUTC);
}


static void init_SMB_dayOfWeekName() {
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    // dayOfWeek. 
    Send PSend21283 = new_Send((Optr)self, SMB_dayOfWeek, 0);
    Symbol SMB_nameOfDay_ = new_Symbol(L"nameOfDay:");
    // nameOfDay:. 
    Send PSend21284 = new_Send((Optr)PWeek_classReference, SMB_nameOfDay_, 1, (Optr)PSend21283);
    Array PThreadedCode21282 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PWeek_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21283, (Optr)&t_send1, (Optr)PSend21284, (Optr)&t_method_return);
    Method PMethod21281 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21282, 1, PSend21284);
    
    MethodClosure MC_SMB_dayOfWeekName = new_MethodClosure((Method)PMethod21281, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekName, MC_SMB_dayOfWeekName);
}


static void init_SMB_utcOffset_() {
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray21286 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR_equiv_0_1 = new_Variable_named(L"equiv", 0);
    Array PArray21287 = new_Array_with(1, (Optr)VAR_equiv_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend21292 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21293 = new_Send((Optr)self, SMB_offset, 0);
    // -. 
    Send PSend21291 = new_Send((Optr)PSend21292, SMB__minus_, 1, (Optr)PSend21293);
    // +. 
    Send PSend21290 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend21291);
    Assign PAssign21289 = new_Assign((Optr)VAR_equiv_0_1, (Optr)PSend21290);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21295 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21297 = new_Send((Optr)VAR_equiv_0_1, SMB_ticks, 0);
    // asDuration. 
    Send PSend21298 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21299 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21297, (Optr)PSend21298);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21300 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21296 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send0, (Optr)PSend21297, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21298, (Optr)&t_send2, (Optr)PSend21299, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21300, (Optr)&t_method_return);
    Block PBlock21294 = new_Block_with(PArray21295, empty_Array, PThreadedCode21296, 2, PSend21299, PSend21300);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21301 = new_Send((Optr)PBlock21294, SMB_value_, 1, (Optr)VAR_equiv_0_1);
    Array PThreadedCode21288 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign21289, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21292, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21293, (Optr)&t_send1, (Optr)PSend21291, (Optr)&t_send1, (Optr)PSend21290, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock21294, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send1, (Optr)PSend21301, (Optr)&t_method_return);
    Method PMethod21285 = new_Method_with(PArray21286, PArray21287, empty_Array, PThreadedCode21288, 2, PAssign21289, PSend21301);
    
    MethodClosure MC_SMB_utcOffset_ = new_MethodClosure((Method)PMethod21285, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_utcOffset_, MC_SMB_utcOffset_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray21303 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Variable VAR_comparandAsDateAndTime_0_1 = new_Variable_named(L"comparandAsDateAndTime", 0);
    Array PArray21304 = new_Array_with(1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21307 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21309 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21313 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode21312 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend21313, (Optr)&t_block_return);
    Block PBlock21311 = new_Block_with(empty_Array, empty_Array, PThreadedCode21312, 1, PSend21313);
    // ifTrue:. 
    Send PSend21310 = new_Send((Optr)PSend21309, SMB_ifTrue_, 1, (Optr)PBlock21311);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend21315 = new_Send((Optr)VAR_comparand_0_0, SMB_asDateAndTime, 0);
    Assign PAssign21314 = new_Assign((Optr)VAR_comparandAsDateAndTime_0_1, (Optr)PSend21315);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21316 = new_Send((Optr)self, SMB_offset, 0);
    // offset. 
    Send PSend21317 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_offset, 0);
    // =. 
    Send PSend21318 = new_Send((Optr)PSend21316, SMB__equals_, 1, (Optr)PSend21317);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    // hasEqualTicks:. 
    Send PSend21322 = new_Send((Optr)self, SMB_hasEqualTicks_, 1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Array PThreadedCode21321 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send1, (Optr)PSend21322, (Optr)&t_block_return);
    Block PBlock21320 = new_Block_with(empty_Array, empty_Array, PThreadedCode21321, 1, PSend21322);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend21325 = new_Send((Optr)self, SMB_asUTC, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21326 = new_Send((Optr)PSend21325, SMB_ticks, 0);
    // asUTC. 
    Send PSend21327 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_asUTC, 0);
    // ticks. 
    Send PSend21328 = new_Send((Optr)PSend21327, SMB_ticks, 0);
    // =. 
    Send PSend21329 = new_Send((Optr)PSend21326, SMB__equals_, 1, (Optr)PSend21328);
    Array PThreadedCode21324 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21325, (Optr)&t_send0, (Optr)PSend21326, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend21327, (Optr)&t_send0, (Optr)PSend21328, (Optr)&t_send1, (Optr)PSend21329, (Optr)&t_block_return);
    Block PBlock21323 = new_Block_with(empty_Array, empty_Array, PThreadedCode21324, 1, PSend21329);
    // ifTrue:ifFalse:. 
    Send PSend21319 = new_Send((Optr)PSend21318, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21320, (Optr)PBlock21323);
    Array PThreadedCode21308 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend21309, (Optr)&t_send_ifTrue_, (Optr)PSend21310, (Optr)PBlock21311, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21314, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend21315, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21316, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend21317, (Optr)&t_send1, (Optr)PSend21318, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21319, (Optr)PBlock21320, (Optr)PBlock21323, (Optr)&t_method_return);
    Block PBlock21306 = new_Block_with(PArray21307, empty_Array, PThreadedCode21308, 3, PSend21310, PAssign21314, PSend21319);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21330 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21306);
    Array PThreadedCode21305 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21306, (Optr)&t_send1, (Optr)PSend21330, (Optr)&t_method_return);
    Method PMethod21302 = new_Method_with(PArray21303, PArray21304, empty_Array, PThreadedCode21305, 1, PSend21330);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod21302, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_secondsSinceMidnight() {
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    Array PThreadedCode21332 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_method_return);
    Method PMethod21331 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21332, 1, slot_Chronology_DateAndTime_seconds);
    
    MethodClosure MC_SMB_secondsSinceMidnight = new_MethodClosure((Method)PMethod21331, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_secondsSinceMidnight, MC_SMB_secondsSinceMidnight);
}


static void init_SMB_normalize_ticks_base_() {
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    Variable VAR_i_0_0 = new_Variable_named(L"i", 0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Variable VAR_base_0_2 = new_Variable_named(L"base", 0);
    Array PArray21334 = new_Array_with(3, (Optr)VAR_i_0_0, (Optr)VAR_ticks_0_1, (Optr)VAR_base_0_2);
    Variable VAR_tick_0_3 = new_Variable_named(L"tick", 0);
    Variable VAR_quo_0_4 = new_Variable_named(L"quo", 0);
    Variable VAR_rem_0_5 = new_Variable_named(L"rem", 0);
    Array PArray21335 = new_Array_with(3, (Optr)VAR_tick_0_3, (Optr)VAR_quo_0_4, (Optr)VAR_rem_0_5);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21338 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)VAR_i_0_0);
    Assign PAssign21337 = new_Assign((Optr)VAR_tick_0_3, (Optr)PSend21338);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend21340 = new_Send((Optr)VAR_tick_0_3, SMB_quo_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21339 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21340);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend21342 = new_Send((Optr)VAR_tick_0_3, SMB_rem_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21341 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21342);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend21343 = new_Send((Optr)VAR_rem_0_5, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend21348 = new_Send((Optr)VAR_quo_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign21347 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21348);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend21350 = new_Send((Optr)VAR_base_0_2, SMB__plus_, 1, (Optr)VAR_rem_0_5);
    Assign PAssign21349 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21350);
    Array PThreadedCode21346 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign21347, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21348, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21349, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send1, (Optr)PSend21350, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21345 = new_Block_with(empty_Array, empty_Array, PThreadedCode21346, 2, PAssign21347, PAssign21349);
    // ifTrue:. 
    Send PSend21344 = new_Send((Optr)PSend21343, SMB_ifTrue_, 1, (Optr)PBlock21345);
    // -. 
    Send PSend21351 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // -. 
    Send PSend21352 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend21353 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)PSend21352);
    // +. 
    Send PSend21354 = new_Send((Optr)PSend21353, SMB__plus_, 1, (Optr)VAR_quo_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend21355 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)PSend21351, (Optr)PSend21354);
    // at:put:. 
    Send PSend21356 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)VAR_i_0_0, (Optr)VAR_rem_0_5);
    Array PThreadedCode21336 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push1, (Optr)PAssign21337, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_send1, (Optr)PSend21338, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21339, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21340, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21341, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21342, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send0, (Optr)PSend21343, (Optr)&t_send_ifTrue_, (Optr)PSend21344, (Optr)PBlock21345, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21351, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21352, (Optr)&t_send1, (Optr)PSend21353, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_send1, (Optr)PSend21354, (Optr)&t_send2, (Optr)PSend21355, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send2, (Optr)PSend21356, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21333 = new_Method_with(PArray21334, PArray21335, empty_Array, PThreadedCode21336, 7, PAssign21337, PAssign21339, PAssign21341, PSend21344, PSend21355, PSend21356, self);
    
    MethodClosure MC_SMB_normalize_ticks_base_ = new_MethodClosure((Method)PMethod21333, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_normalize_ticks_base_, MC_SMB_normalize_ticks_base_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray21358 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21361 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21363 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend21364 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21365 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21363, (Optr)PSend21364);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21366 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21362 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21363, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21364, (Optr)&t_send2, (Optr)PSend21365, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21366, (Optr)&t_method_return);
    Block PBlock21360 = new_Block_with(PArray21361, empty_Array, PThreadedCode21362, 2, PSend21365, PSend21366);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend21367 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21368 = new_Send((Optr)PSend21367, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21369 = new_Send((Optr)PBlock21360, SMB_value_, 1, (Optr)PSend21368);
    Array PThreadedCode21359 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock21360, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21367, (Optr)&t_send0, (Optr)PSend21368, (Optr)&t_send1, (Optr)PSend21369, (Optr)&t_method_return);
    Method PMethod21357 = new_Method_with(PArray21358, empty_Array, empty_Array, PThreadedCode21359, 1, PSend21369);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21357, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Array PThreadedCode21371 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21370 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21371, 1, self);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod21370, Chronology_DateAndTime_Class);
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
    Send PSend21374 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21375 = new_Send((Optr)PSend21374, SMB_basicNew, 0);
    // class. 
    Send PSend21376 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21377 = new_Send((Optr)PSend21376, SMB_localOffset, 0);
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // setJdn:seconds:offset:. 
    Send PSend21378 = new_Send((Optr)PSend21375, SMB_setJdn_seconds_offset_, 3, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)int_0_Const, (Optr)PSend21377);
    Array PThreadedCode21373 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21374, (Optr)&t_send0, (Optr)PSend21375, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21376, (Optr)&t_send0, (Optr)PSend21377, (Optr)&t_send3, (Optr)PSend21378, (Optr)&t_method_return);
    Method PMethod21372 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21373, 1, PSend21378);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21372, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_midnight, MC_SMB_midnight);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21380 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_l_0_1 = new_Variable_named(L"l", 0);
    Variable VAR_n_0_2 = new_Variable_named(L"n", 0);
    Variable VAR_i_0_3 = new_Variable_named(L"i", 0);
    Variable VAR_j_0_4 = new_Variable_named(L"j", 0);
    Variable VAR_dd_0_5 = new_Variable_named(L"dd", 0);
    Variable VAR_mm_0_6 = new_Variable_named(L"mm", 0);
    Variable VAR_yyyy_0_7 = new_Variable_named(L"yyyy", 0);
    Array PArray21381 = new_Array_with(7, (Optr)VAR_l_0_1, (Optr)VAR_n_0_2, (Optr)VAR_i_0_3, (Optr)VAR_j_0_4, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_68569 = new_SmallInt(68569);
    Constant int_68569_Const = new_Constant((Optr)int_68569);
    // +. 
    Send PSend21384 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_68569_Const);
    Assign PAssign21383 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21384);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // *. 
    Send PSend21387 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_4_Const);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_146097 = new_SmallInt(146097);
    Constant int_146097_Const = new_Constant((Optr)int_146097);
    // //. 
    Send PSend21386 = new_Send((Optr)PSend21387, SMB__quotient_, 1, (Optr)int_146097_Const);
    Assign PAssign21385 = new_Assign((Optr)VAR_n_0_2, (Optr)PSend21386);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // *. 
    Send PSend21392 = new_Send((Optr)VAR_n_0_2, SMB__times_, 1, (Optr)int_146097_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // +. 
    Send PSend21391 = new_Send((Optr)PSend21392, SMB__plus_, 1, (Optr)int_3_Const);
    // //. 
    Send PSend21390 = new_Send((Optr)PSend21391, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21389 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21390);
    Assign PAssign21388 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21389);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21396 = new_Send((Optr)VAR_l_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_4000 = new_SmallInt(4000);
    Constant int_4000_Const = new_Constant((Optr)int_4000);
    // *. 
    Send PSend21395 = new_Send((Optr)PSend21396, SMB__times_, 1, (Optr)int_4000_Const);
    SmallInt int_1461001 = new_SmallInt(1461001);
    Constant int_1461001_Const = new_Constant((Optr)int_1461001);
    // //. 
    Send PSend21394 = new_Send((Optr)PSend21395, SMB__quotient_, 1, (Optr)int_1461001_Const);
    Assign PAssign21393 = new_Assign((Optr)VAR_i_0_3, (Optr)PSend21394);
    SmallInt int_1461 = new_SmallInt(1461);
    Constant int_1461_Const = new_Constant((Optr)int_1461);
    // *. 
    Send PSend21401 = new_Send((Optr)VAR_i_0_3, SMB__times_, 1, (Optr)int_1461_Const);
    // //. 
    Send PSend21400 = new_Send((Optr)PSend21401, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21399 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21400);
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // +. 
    Send PSend21398 = new_Send((Optr)PSend21399, SMB__plus_, 1, (Optr)int_31_Const);
    Assign PAssign21397 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21398);
    SmallInt int_80 = new_SmallInt(80);
    Constant int_80_Const = new_Constant((Optr)int_80);
    // *. 
    Send PSend21404 = new_Send((Optr)int_80_Const, SMB__times_, 1, (Optr)VAR_l_0_1);
    SmallInt int_2447 = new_SmallInt(2447);
    Constant int_2447_Const = new_Constant((Optr)int_2447);
    // //. 
    Send PSend21403 = new_Send((Optr)PSend21404, SMB__quotient_, 1, (Optr)int_2447_Const);
    Assign PAssign21402 = new_Assign((Optr)VAR_j_0_4, (Optr)PSend21403);
    // *. 
    Send PSend21408 = new_Send((Optr)VAR_j_0_4, SMB__times_, 1, (Optr)int_2447_Const);
    // //. 
    Send PSend21407 = new_Send((Optr)PSend21408, SMB__quotient_, 1, (Optr)int_80_Const);
    // -. 
    Send PSend21406 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21407);
    Assign PAssign21405 = new_Assign((Optr)VAR_dd_0_5, (Optr)PSend21406);
    SmallInt int_11 = new_SmallInt(11);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // //. 
    Send PSend21410 = new_Send((Optr)VAR_j_0_4, SMB__quotient_, 1, (Optr)int_11_Const);
    Assign PAssign21409 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21410);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend21413 = new_Send((Optr)VAR_j_0_4, SMB__plus_, 1, (Optr)int_2_Const);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // *. 
    Send PSend21414 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_12_Const);
    // -. 
    Send PSend21412 = new_Send((Optr)PSend21413, SMB__minus_, 1, (Optr)PSend21414);
    Assign PAssign21411 = new_Assign((Optr)VAR_mm_0_6, (Optr)PSend21412);
    SmallInt int_49 = new_SmallInt(49);
    Constant int_49_Const = new_Constant((Optr)int_49);
    // -. 
    Send PSend21419 = new_Send((Optr)VAR_n_0_2, SMB__minus_, 1, (Optr)int_49_Const);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // *. 
    Send PSend21418 = new_Send((Optr)PSend21419, SMB__times_, 1, (Optr)int_100_Const);
    // +. 
    Send PSend21417 = new_Send((Optr)PSend21418, SMB__plus_, 1, (Optr)VAR_i_0_3);
    // +. 
    Send PSend21416 = new_Send((Optr)PSend21417, SMB__plus_, 1, (Optr)VAR_l_0_1);
    Assign PAssign21415 = new_Assign((Optr)VAR_yyyy_0_7, (Optr)PSend21416);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend21420 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_value_, 3, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Array PThreadedCode21382 = instantiate_Array_with(ThreadedCode_Class, 0, 177, (Optr)&t_push1, (Optr)PAssign21383, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push1, (Optr)int_68569, (Optr)&t_send1, (Optr)PSend21384, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21385, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21387, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21388, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21392, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend21391, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21390, (Optr)&t_send1, (Optr)PSend21389, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21393, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21396, (Optr)&t_push1, (Optr)int_4000, (Optr)&t_send1, (Optr)PSend21395, (Optr)&t_push1, (Optr)int_1461001, (Optr)&t_send1, (Optr)PSend21394, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21397, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_push1, (Optr)int_1461, (Optr)&t_send1, (Optr)PSend21401, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21400, (Optr)&t_send1, (Optr)PSend21399, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend21398, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21402, (Optr)&t_push1, (Optr)int_80, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21404, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21403, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21405, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21408, (Optr)&t_push1, (Optr)int_80, (Optr)&t_send1, (Optr)PSend21407, (Optr)&t_send1, (Optr)PSend21406, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21409, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_11, (Optr)&t_send1, (Optr)PSend21410, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21411, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend21413, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21414, (Optr)&t_send1, (Optr)PSend21412, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21415, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_49, (Optr)&t_send1, (Optr)PSend21419, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend21418, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_send1, (Optr)PSend21417, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21416, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_dd_0_5, (Optr)&t_push_variable, (Optr)VAR_mm_0_6, (Optr)&t_push_variable, (Optr)VAR_yyyy_0_7, (Optr)&t_send3, (Optr)PSend21420, (Optr)&t_method_return);
    Method PMethod21379 = new_Method_with(PArray21380, PArray21381, empty_Array, PThreadedCode21382, 11, PAssign21383, PAssign21385, PAssign21388, PAssign21393, PAssign21397, PAssign21402, PAssign21405, PAssign21409, PAssign21411, PAssign21415, PSend21420);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod21379, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printYMDOn_() {
    Symbol SMB_printYMDOn_ = new_Symbol(L"printYMDOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21422 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend21424 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode21423 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend21424, (Optr)&t_method_return);
    Method PMethod21421 = new_Method_with(PArray21422, empty_Array, empty_Array, PThreadedCode21423, 1, PSend21424);
    
    MethodClosure MC_SMB_printYMDOn_ = new_MethodClosure((Method)PMethod21421, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_, MC_SMB_printYMDOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21427 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode21426 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send2, (Optr)PSend21427, (Optr)&t_method_return);
    Method PMethod21425 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21426, 1, PSend21427);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod21425, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray21431 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode21432 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_method_return);
    Block PBlock21430 = new_Block_with(PArray21431, empty_Array, PThreadedCode21432, 1, VAR_y_1_2);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21433 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21430);
    Array PThreadedCode21429 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21430, (Optr)&t_send1, (Optr)PSend21433, (Optr)&t_method_return);
    Method PMethod21428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21429, 1, PSend21433);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod21428, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_printHMSOn_() {
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21435 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_h_0_1 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_2 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_3 = new_Variable_named(L"s", 0);
    Array PArray21436 = new_Array_with(3, (Optr)VAR_h_0_1, (Optr)VAR_m_0_2, (Optr)VAR_s_0_3);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21440 = new_Send((Optr)self, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend21439 = new_Send((Optr)PSend21440, SMB_abs, 0);
    Assign PAssign21438 = new_Assign((Optr)VAR_h_0_1, (Optr)PSend21439);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21443 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend21442 = new_Send((Optr)PSend21443, SMB_abs, 0);
    Assign PAssign21441 = new_Assign((Optr)VAR_m_0_2, (Optr)PSend21442);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21446 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend21445 = new_Send((Optr)PSend21446, SMB_abs, 0);
    Assign PAssign21444 = new_Assign((Optr)VAR_s_0_3, (Optr)PSend21445);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend21447 = new_Send((Optr)VAR_h_0_1, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9456 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9456_Const = new_Constant((Optr)char_9456);
    // <<. 
    Send PSend21451 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode21450 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend21451, (Optr)&t_block_return);
    Block PBlock21449 = new_Block_with(empty_Array, empty_Array, PThreadedCode21450, 1, PSend21451);
    // ifTrue:. 
    Send PSend21448 = new_Send((Optr)PSend21447, SMB_ifTrue_, 1, (Optr)PBlock21449);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21452 = new_Send((Optr)VAR_h_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend21453 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend21454 = new_Send((Optr)VAR_m_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21458 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode21457 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend21458, (Optr)&t_block_return);
    Block PBlock21456 = new_Block_with(empty_Array, empty_Array, PThreadedCode21457, 1, PSend21458);
    // ifTrue:. 
    Send PSend21455 = new_Send((Optr)PSend21454, SMB_ifTrue_, 1, (Optr)PBlock21456);
    // printOn:. 
    Send PSend21459 = new_Send((Optr)VAR_m_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21460 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend21461 = new_Send((Optr)VAR_s_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21465 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode21464 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend21465, (Optr)&t_block_return);
    Block PBlock21463 = new_Block_with(empty_Array, empty_Array, PThreadedCode21464, 1, PSend21465);
    // ifTrue:. 
    Send PSend21462 = new_Send((Optr)PSend21461, SMB_ifTrue_, 1, (Optr)PBlock21463);
    // printOn:. 
    Send PSend21466 = new_Send((Optr)VAR_s_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21437 = instantiate_Array_with(ThreadedCode_Class, 0, 93, (Optr)&t_push1, (Optr)PAssign21438, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21440, (Optr)&t_send0, (Optr)PSend21439, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21441, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21443, (Optr)&t_send0, (Optr)PSend21442, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21444, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21446, (Optr)&t_send0, (Optr)PSend21445, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21447, (Optr)&t_send_ifTrue_, (Optr)PSend21448, (Optr)PBlock21449, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21452, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21453, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21454, (Optr)&t_send_ifTrue_, (Optr)PSend21455, (Optr)PBlock21456, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21459, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21460, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21461, (Optr)&t_send_ifTrue_, (Optr)PSend21462, (Optr)PBlock21463, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21466, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21434 = new_Method_with(PArray21435, PArray21436, empty_Array, PThreadedCode21437, 12, PAssign21438, PAssign21441, PAssign21444, PSend21448, PSend21452, PSend21453, PSend21455, PSend21459, PSend21460, PSend21462, PSend21466, self);
    
    MethodClosure MC_SMB_printHMSOn_ = new_MethodClosure((Method)PMethod21434, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printHMSOn_, MC_SMB_printHMSOn_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray21468 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21471 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend21473 = new_Send((Optr)VAR_aJulianDayNumber_0_0, SMB_days, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21474 = new_Send((Optr)PSend21473, SMB_ticks, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21475 = new_Send((Optr)self, SMB_localOffset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21476 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21474, (Optr)PSend21475);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21477 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21472 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send0, (Optr)PSend21473, (Optr)&t_send0, (Optr)PSend21474, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21475, (Optr)&t_send2, (Optr)PSend21476, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21477, (Optr)&t_method_return);
    Block PBlock21470 = new_Block_with(PArray21471, empty_Array, PThreadedCode21472, 2, PSend21476, PSend21477);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21478 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21479 = new_Send((Optr)PBlock21470, SMB_value_, 1, (Optr)PSend21478);
    Array PThreadedCode21469 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21470, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21478, (Optr)&t_send1, (Optr)PSend21479, (Optr)&t_method_return);
    Method PMethod21467 = new_Method_with(PArray21468, empty_Array, empty_Array, PThreadedCode21469, 1, PSend21479);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod21467, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_localTimeZone() {
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend21485 = new_Send((Optr)PTimeZone_classReference, SMB_default, 0);
    Assign PAssign21484 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)PSend21485);
    Array PThreadedCode21483 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign21484, (Optr)&t_push_class_reference, (Optr)PTimeZone_classReference, (Optr)&t_send0, (Optr)PSend21485, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21482 = new_Block_with(empty_Array, empty_Array, PThreadedCode21483, 1, PAssign21484);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21486 = new_Send((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, SMB_ifNil_, 1, (Optr)PBlock21482);
    Array PThreadedCode21481 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)&t_push_closure, (Optr)PBlock21482, (Optr)&t_send1, (Optr)PSend21486, (Optr)&t_method_return);
    Method PMethod21480 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21481, 1, PSend21486);
    
    MethodClosure MC_SMB_localTimeZone = new_MethodClosure((Method)PMethod21480, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone, MC_SMB_localTimeZone);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend21489 = new_Send((Optr)self, SMB_midnight, 0);
    Array PThreadedCode21488 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21489, (Optr)&t_method_return);
    Method PMethod21487 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21488, 1, PSend21489);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod21487, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_epoch() {
    Symbol SMB_epoch = new_Symbol(L"epoch");
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21492 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend21493 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend21492);
    Array PThreadedCode21491 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21492, (Optr)&t_send1, (Optr)PSend21493, (Optr)&t_method_return);
    Method PMethod21490 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21491, 1, PSend21493);
    
    MethodClosure MC_SMB_epoch = new_MethodClosure((Method)PMethod21490, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_epoch, MC_SMB_epoch);
}


static void init_class_SMB_localTimeZone_() {
    Symbol SMB_localTimeZone_ = new_Symbol(L"localTimeZone:");
    Variable VAR_aTimeZone_0_0 = new_Variable_named(L"aTimeZone", 0);
    Array PArray21495 = new_Array_with(1, (Optr)VAR_aTimeZone_0_0);
    Assign PAssign21497 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)VAR_aTimeZone_0_0);
    Array PThreadedCode21496 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21497, (Optr)&t_push_variable, (Optr)VAR_aTimeZone_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21494 = new_Method_with(PArray21495, empty_Array, empty_Array, PThreadedCode21496, 2, PAssign21497, self);
    
    MethodClosure MC_SMB_localTimeZone_ = new_MethodClosure((Method)PMethod21494, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone_, MC_SMB_localTimeZone_);
}


static void init_class_SMB_localOffset() {
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21500 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21501 = new_Send((Optr)PSend21500, SMB_offset, 0);
    Array PThreadedCode21499 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21500, (Optr)&t_send0, (Optr)PSend21501, (Optr)&t_method_return);
    Method PMethod21498 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21499, 1, PSend21501);
    
    MethodClosure MC_SMB_localOffset = new_MethodClosure((Method)PMethod21498, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localOffset, MC_SMB_localOffset);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21504 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21505 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21506 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21507 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend21505, (Optr)PSend21506);
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21508 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21509 = new_Send((Optr)PSend21508, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21510 = new_Send((Optr)PSend21504, SMB_ticks_offset_, 2, (Optr)PSend21507, (Optr)PSend21509);
    Array PThreadedCode21503 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21504, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21505, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21506, (Optr)&t_send2, (Optr)PSend21507, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21508, (Optr)&t_send0, (Optr)PSend21509, (Optr)&t_send2, (Optr)PSend21510, (Optr)&t_method_return);
    Method PMethod21502 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21503, 1, PSend21510);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod21502, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_midnight() {
    Symbol SMB_midnight = new_Symbol(L"midnight");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend21513 = new_Send((Optr)self, SMB_now, 0);
    // midnight. 
    Send PSend21514 = new_Send((Optr)PSend21513, SMB_midnight, 0);
    Array PThreadedCode21512 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21513, (Optr)&t_send0, (Optr)PSend21514, (Optr)&t_method_return);
    Method PMethod21511 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21512, 1, PSend21514);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21511, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_midnight, MC_SMB_midnight);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21517 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Array PThreadedCode21516 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21517, (Optr)&t_method_return);
    Method PMethod21515 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21516, 1, PSend21517);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod21515, HEADER(Chronology_DateAndTime_Class));
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