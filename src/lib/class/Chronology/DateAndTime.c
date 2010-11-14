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
    Send PSend20884 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20883 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20884, (Optr)&t_method_return);
    Method PMethod20882 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20883, 1, PSend20884);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20882, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20887 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_epoch = new_Symbol(L"epoch");
    // epoch. 
    Send PSend20888 = new_Send((Optr)PSend20887, SMB_epoch, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20889 = new_Send((Optr)self, SMB__minus_, 1, (Optr)PSend20888);
    // asSeconds. 
    Send PSend20890 = new_Send((Optr)PSend20889, SMB_asSeconds, 0);
    Array PThreadedCode20886 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20887, (Optr)&t_send0, (Optr)PSend20888, (Optr)&t_send1, (Optr)PSend20889, (Optr)&t_send0, (Optr)PSend20890, (Optr)&t_method_return);
    Method PMethod20885 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20886, 1, PSend20890);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20885, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20893 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20892 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20893, (Optr)&t_method_return);
    Method PMethod20891 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20892, 1, PSend20893);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20891, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20896 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20895 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20896, (Optr)&t_method_return);
    Method PMethod20894 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20895, 1, PSend20896);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20894, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode20898 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_method_return);
    Method PMethod20897 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20898, 1, slot_Chronology_DateAndTime_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod20897, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20901 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode20900 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20901, (Optr)&t_method_return);
    Method PMethod20899 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20900, 1, PSend20901);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20899, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_julianDayNumber() {
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    Array PThreadedCode20903 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_method_return);
    Method PMethod20902 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20903, 1, slot_Chronology_DateAndTime_jdn);
    
    MethodClosure MC_SMB_julianDayNumber = new_MethodClosure((Method)PMethod20902, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_julianDayNumber, MC_SMB_julianDayNumber);
}


static void init_SMB_dayOfMonth() {
    Symbol SMB_dayOfMonth = new_Symbol(L"dayOfMonth");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20907 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20908 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_method_return);
    Block PBlock20906 = new_Block_with(PArray20907, empty_Array, PThreadedCode20908, 1, VAR_d_1_0);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20909 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20906);
    Array PThreadedCode20905 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20906, (Optr)&t_send1, (Optr)PSend20909, (Optr)&t_method_return);
    Method PMethod20904 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20905, 1, PSend20909);
    
    MethodClosure MC_SMB_dayOfMonth = new_MethodClosure((Method)PMethod20904, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfMonth, MC_SMB_dayOfMonth);
}


static void init_SMB_ticks_offset_() {
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    Variable VAR_ticks_0_0 = new_Variable_named(L"ticks", 0);
    Variable VAR_utcOffset_0_1 = new_Variable_named(L"utcOffset", 0);
    Array PArray20911 = new_Array_with(2, (Optr)VAR_ticks_0_0, (Optr)VAR_utcOffset_0_1);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20913 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // normalize:ticks:base:. 
    Send PSend20914 = new_Send((Optr)self, SMB_normalize_ticks_base_, 3, (Optr)int_2_Const, (Optr)VAR_ticks_0_0, (Optr)PSend20913);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend20916 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign20915 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)PSend20916);
    // at:. 
    Send PSend20918 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20917 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)PSend20918);
    Assign PAssign20919 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_utcOffset_0_1);
    Array PThreadedCode20912 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20913, (Optr)&t_send3, (Optr)PSend20914, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20915, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20916, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20917, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20918, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20919, (Optr)&t_push_variable, (Optr)VAR_utcOffset_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20910 = new_Method_with(PArray20911, empty_Array, empty_Array, PThreadedCode20912, 5, PSend20914, PAssign20915, PAssign20917, PAssign20919, self);
    
    MethodClosure MC_SMB_ticks_offset_ = new_MethodClosure((Method)PMethod20910, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks_offset_, MC_SMB_ticks_offset_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20921 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Array PArray20922 = new_Array_with(1, (Optr)VAR_ticks_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20925 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign20924 = new_Assign((Optr)VAR_ticks_0_1, (Optr)PSend20925);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20926 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20927 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // ticks. 
    Send PSend20928 = new_Send((Optr)PSend20927, SMB_ticks, 0);
    Variable VAR_ticks1_1_0 = new_Variable_named(L"ticks1", 1);
    Variable VAR_dticks_1_1 = new_Variable_named(L"dticks", 1);
    Array PArray20930 = new_Array_with(2, (Optr)VAR_ticks1_1_0, (Optr)VAR_dticks_1_1);
    // +. 
    Send PSend20932 = new_Send((Optr)VAR_ticks1_1_0, SMB__plus_, 1, (Optr)VAR_dticks_1_1);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend20933 = new_Send((Optr)VAR_ticks_0_1, SMB_addLast_, 1, (Optr)PSend20932);
    Array PThreadedCode20931 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_ticks1_1_0, (Optr)&t_push_variable, (Optr)VAR_dticks_1_1, (Optr)&t_send1, (Optr)PSend20932, (Optr)&t_send1, (Optr)PSend20933, (Optr)&t_method_return);
    Block PBlock20929 = new_Block_with(PArray20930, empty_Array, PThreadedCode20931, 1, PSend20933);
    Symbol SMB_with_do_ = new_Symbol(L"with:do:");
    // with:do:. 
    Send PSend20934 = new_Send((Optr)PSend20926, SMB_with_do_, 2, (Optr)PSend20928, (Optr)PBlock20929);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20936 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20938 = new_Send((Optr)VAR_ticks_0_1, SMB_asArray, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20939 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20940 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20938, (Optr)PSend20939);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20941 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20937 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_send0, (Optr)PSend20938, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20939, (Optr)&t_send2, (Optr)PSend20940, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20941, (Optr)&t_method_return);
    Block PBlock20935 = new_Block_with(PArray20936, empty_Array, PThreadedCode20937, 2, PSend20940, PSend20941);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20942 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20943 = new_Send((Optr)PSend20942, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20944 = new_Send((Optr)PBlock20935, SMB_value_, 1, (Optr)PSend20943);
    Array PThreadedCode20923 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20924, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20925, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20926, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20927, (Optr)&t_send0, (Optr)PSend20928, (Optr)&t_push_closure, (Optr)PBlock20929, (Optr)&t_send2, (Optr)PSend20934, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20935, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20942, (Optr)&t_send0, (Optr)PSend20943, (Optr)&t_send1, (Optr)PSend20944, (Optr)&t_method_return);
    Method PMethod20920 = new_Method_with(PArray20921, PArray20922, empty_Array, PThreadedCode20923, 3, PAssign20924, PSend20934, PSend20944);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20920, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20946 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol  SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_asDateAndTime_Const = new_Constant((Optr)SMB_asDateAndTime);
    // respondsTo:. 
    Send PSend20948 = new_Send((Optr)VAR_operand_0_0, SMB_respondsTo_, 1, (Optr)SMB_asDateAndTime_Const);
    Variable VAR_lticks_1_0 = new_Variable_named(L"lticks", 1);
    Variable VAR_rticks_1_1 = new_Variable_named(L"rticks", 1);
    Array PArray20950 = new_Array_with(2, (Optr)VAR_lticks_1_0, (Optr)VAR_rticks_1_1);
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    // asLocal. 
    Send PSend20954 = new_Send((Optr)self, SMB_asLocal, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20953 = new_Send((Optr)PSend20954, SMB_ticks, 0);
    Assign PAssign20952 = new_Assign((Optr)VAR_lticks_1_0, (Optr)PSend20953);
    // asDateAndTime. 
    Send PSend20958 = new_Send((Optr)VAR_operand_0_0, SMB_asDateAndTime, 0);
    // asLocal. 
    Send PSend20957 = new_Send((Optr)PSend20958, SMB_asLocal, 0);
    // ticks. 
    Send PSend20956 = new_Send((Optr)PSend20957, SMB_ticks, 0);
    Assign PAssign20955 = new_Assign((Optr)VAR_rticks_1_1, (Optr)PSend20956);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20959 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20960 = new_Send((Optr)VAR_lticks_1_0, SMB_first, 0);
    // first. 
    Send PSend20961 = new_Send((Optr)VAR_rticks_1_1, SMB_first, 0);
    // -. 
    Send PSend20962 = new_Send((Optr)PSend20960, SMB__minus_, 1, (Optr)PSend20961);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20963 = new_Send((Optr)PSend20959, SMB__times_, 1, (Optr)PSend20962);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20964 = new_Send((Optr)VAR_lticks_1_0, SMB_second, 0);
    // second. 
    Send PSend20965 = new_Send((Optr)VAR_rticks_1_1, SMB_second, 0);
    // -. 
    Send PSend20966 = new_Send((Optr)PSend20964, SMB__minus_, 1, (Optr)PSend20965);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20967 = new_Send((Optr)PSend20963, SMB__plus_, 1, (Optr)PSend20966);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20968 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)PSend20967);
    Array PThreadedCode20951 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign20952, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20954, (Optr)&t_send0, (Optr)PSend20953, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20955, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20958, (Optr)&t_send0, (Optr)PSend20957, (Optr)&t_send0, (Optr)PSend20956, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20959, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20960, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20961, (Optr)&t_send1, (Optr)PSend20962, (Optr)&t_send1, (Optr)PSend20963, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20964, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20965, (Optr)&t_send1, (Optr)PSend20966, (Optr)&t_send1, (Optr)PSend20967, (Optr)&t_send1, (Optr)PSend20968, (Optr)&t_method_return);
    Block PBlock20949 = new_Block_with(empty_Array, PArray20950, PThreadedCode20951, 3, PAssign20952, PAssign20955, PSend20968);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20971 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    // +. 
    Send PSend20972 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20971);
    Array PThreadedCode20970 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20971, (Optr)&t_send1, (Optr)PSend20972, (Optr)&t_block_return);
    Block PBlock20969 = new_Block_with(empty_Array, empty_Array, PThreadedCode20970, 1, PSend20972);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend20973 = new_Send((Optr)PSend20948, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20949, (Optr)PBlock20969);
    Array PThreadedCode20947 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_push1, (Optr)SMB_asDateAndTime, (Optr)&t_send1, (Optr)PSend20948, (Optr)&t_push_closure, (Optr)PBlock20949, (Optr)&t_push_closure, (Optr)PBlock20969, (Optr)&t_send2, (Optr)PSend20973, (Optr)&t_method_return);
    Method PMethod20945 = new_Method_with(PArray20946, empty_Array, empty_Array, PThreadedCode20947, 1, PSend20973);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20945, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    Symbol SMB_month = new_Symbol(L"month");
    // month. 
    Send PSend20976 = new_Send((Optr)self, SMB_month, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20977 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20976);
    Array PThreadedCode20975 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20976, (Optr)&t_send1, (Optr)PSend20977, (Optr)&t_method_return);
    Method PMethod20974 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20975, 1, PSend20977);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod20974, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20980 = new_Send((Optr)Date_classReference, SMB_starting_, 1, (Optr)self);
    Array PThreadedCode20979 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20980, (Optr)&t_method_return);
    Method PMethod20978 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20979, 1, PSend20980);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20978, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20982 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    // printOn:withLeadingSpace:. 
    Send PSend20984 = new_Send((Optr)self, SMB_printOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode20983 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend20984, (Optr)&t_method_return);
    Method PMethod20981 = new_Method_with(PArray20982, empty_Array, empty_Array, PThreadedCode20983, 1, PSend20984);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20981, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_printYMDOn_withLeadingSpace_() {
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray20986 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_year_0_2 = new_Variable_named(L"year", 0);
    Variable VAR_month_0_3 = new_Variable_named(L"month", 0);
    Variable VAR_day_0_4 = new_Variable_named(L"day", 0);
    Array PArray20987 = new_Array_with(3, (Optr)VAR_year_0_2, (Optr)VAR_month_0_3, (Optr)VAR_day_0_4);
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20990 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Assign PAssign20992 = new_Assign((Optr)VAR_year_0_2, (Optr)VAR_y_1_2);
    Assign PAssign20993 = new_Assign((Optr)VAR_month_0_3, (Optr)VAR_m_1_1);
    Assign PAssign20994 = new_Assign((Optr)VAR_day_0_4, (Optr)VAR_d_1_0);
    Array PThreadedCode20991 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign20992, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20993, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20994, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock20989 = new_Block_with(PArray20990, empty_Array, PThreadedCode20991, 3, PAssign20992, PAssign20993, PAssign20994);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20995 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20989);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20996 = new_Send((Optr)VAR_year_0_2, SMB_negative, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_2179 = new_Character(L'-');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_2179_Const = new_Constant((Optr)char_2179);
    // nextPut:. 
    Send PSend21000 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPut_, 1, (Optr)char_2179_Const);
    Array PThreadedCode20999 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2179, (Optr)&t_send1, (Optr)PSend21000, (Optr)&t_block_return);
    Block PBlock20998 = new_Block_with(empty_Array, empty_Array, PThreadedCode20999, 1, PSend21000);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend21006 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Array PThreadedCode21005 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend21006, (Optr)&t_block_return);
    Block PBlock21004 = new_Block_with(empty_Array, empty_Array, PThreadedCode21005, 1, PSend21006);
    // ifTrue:. 
    Send PSend21003 = new_Send((Optr)VAR_printLeadingSpaceToo_0_1, SMB_ifTrue_, 1, (Optr)PBlock21004);
    Array PThreadedCode21002 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend21003, (Optr)PBlock21004, (Optr)&t_block_return);
    Block PBlock21001 = new_Block_with(empty_Array, empty_Array, PThreadedCode21002, 1, PSend21003);
    // ifTrue:ifFalse:. 
    Send PSend20997 = new_Send((Optr)PSend20996, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20998, (Optr)PBlock21001);
    SmallInt int_1000 = new_SmallInt(1000);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    // <. 
    Send PSend21007 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_1000_Const);
    Character char_9397 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9397_Const = new_Constant((Optr)char_9397);
    // <<. 
    Send PSend21011 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode21010 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend21011, (Optr)&t_block_return);
    Block PBlock21009 = new_Block_with(empty_Array, empty_Array, PThreadedCode21010, 1, PSend21011);
    // ifTrue:. 
    Send PSend21008 = new_Send((Optr)PSend21007, SMB_ifTrue_, 1, (Optr)PBlock21009);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // <. 
    Send PSend21012 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_100_Const);
    // <<. 
    Send PSend21016 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode21015 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend21016, (Optr)&t_block_return);
    Block PBlock21014 = new_Block_with(empty_Array, empty_Array, PThreadedCode21015, 1, PSend21016);
    // ifTrue:. 
    Send PSend21013 = new_Send((Optr)PSend21012, SMB_ifTrue_, 1, (Optr)PBlock21014);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend21017 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21021 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode21020 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend21021, (Optr)&t_block_return);
    Block PBlock21019 = new_Block_with(empty_Array, empty_Array, PThreadedCode21020, 1, PSend21021);
    // ifTrue:. 
    Send PSend21018 = new_Send((Optr)PSend21017, SMB_ifTrue_, 1, (Optr)PBlock21019);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21022 = new_Send((Optr)VAR_year_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21023 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2179_Const);
    // <. 
    Send PSend21024 = new_Send((Optr)VAR_month_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21028 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode21027 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend21028, (Optr)&t_block_return);
    Block PBlock21026 = new_Block_with(empty_Array, empty_Array, PThreadedCode21027, 1, PSend21028);
    // ifTrue:. 
    Send PSend21025 = new_Send((Optr)PSend21024, SMB_ifTrue_, 1, (Optr)PBlock21026);
    // printOn:. 
    Send PSend21029 = new_Send((Optr)VAR_month_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21030 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2179_Const);
    // <. 
    Send PSend21031 = new_Send((Optr)VAR_day_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21035 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode21034 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend21035, (Optr)&t_block_return);
    Block PBlock21033 = new_Block_with(empty_Array, empty_Array, PThreadedCode21034, 1, PSend21035);
    // ifTrue:. 
    Send PSend21032 = new_Send((Optr)PSend21031, SMB_ifTrue_, 1, (Optr)PBlock21033);
    // printOn:. 
    Send PSend21036 = new_Send((Optr)VAR_day_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20988 = instantiate_Array_with(ThreadedCode_Class, 0, 101, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20989, (Optr)&t_send1, (Optr)PSend20995, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_send0, (Optr)PSend20996, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20997, (Optr)PBlock20998, (Optr)PBlock21001, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_send1, (Optr)PSend21007, (Optr)&t_send_ifTrue_, (Optr)PSend21008, (Optr)PBlock21009, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend21012, (Optr)&t_send_ifTrue_, (Optr)PSend21013, (Optr)PBlock21014, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21017, (Optr)&t_send_ifTrue_, (Optr)PSend21018, (Optr)PBlock21019, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21022, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2179, (Optr)&t_send1, (Optr)PSend21023, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21024, (Optr)&t_send_ifTrue_, (Optr)PSend21025, (Optr)PBlock21026, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21029, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2179, (Optr)&t_send1, (Optr)PSend21030, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21031, (Optr)&t_send_ifTrue_, (Optr)PSend21032, (Optr)PBlock21033, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21036, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20985 = new_Method_with(PArray20986, PArray20987, empty_Array, PThreadedCode20988, 13, PSend20995, PSend20997, PSend21008, PSend21013, PSend21018, PSend21022, PSend21023, PSend21025, PSend21029, PSend21030, PSend21032, PSend21036, self);
    
    MethodClosure MC_SMB_printYMDOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20985, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_withLeadingSpace_, MC_SMB_printYMDOn_withLeadingSpace_);
}


static void init_SMB_dayOfWeekAbbreviation() {
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    // dayOfWeekName. 
    Send PSend21039 = new_Send((Optr)self, SMB_dayOfWeekName, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend21040 = new_Send((Optr)PSend21039, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    Array PThreadedCode21038 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21039, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend21040, (Optr)&t_method_return);
    Method PMethod21037 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21038, 1, PSend21040);
    
    MethodClosure MC_SMB_dayOfWeekAbbreviation = new_MethodClosure((Method)PMethod21037, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekAbbreviation, MC_SMB_dayOfWeekAbbreviation);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend21043 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21044 = new_Send((Optr)PSend21043, SMB_seconds, 0);
    Array PThreadedCode21042 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend21043, (Optr)&t_send0, (Optr)PSend21044, (Optr)&t_method_return);
    Method PMethod21041 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21042, 1, PSend21044);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod21041, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_setJdn_seconds_offset_() {
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    Variable VAR_julDays_0_0 = new_Variable_named(L"julDays", 0);
    Variable VAR_secs_0_1 = new_Variable_named(L"secs", 0);
    Variable VAR_anOffset_0_2 = new_Variable_named(L"anOffset", 0);
    Array PArray21046 = new_Array_with(3, (Optr)VAR_julDays_0_0, (Optr)VAR_secs_0_1, (Optr)VAR_anOffset_0_2);
    Assign PAssign21048 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)VAR_julDays_0_0);
    Assign PAssign21049 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)VAR_secs_0_1);
    Assign PAssign21050 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_anOffset_0_2);
    Array PThreadedCode21047 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign21048, (Optr)&t_push_variable, (Optr)VAR_julDays_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21049, (Optr)&t_push_variable, (Optr)VAR_secs_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21050, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21045 = new_Method_with(PArray21046, empty_Array, empty_Array, PThreadedCode21047, 4, PAssign21048, PAssign21049, PAssign21050, self);
    
    MethodClosure MC_SMB_setJdn_seconds_offset_ = new_MethodClosure((Method)PMethod21045, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_setJdn_seconds_offset_, MC_SMB_setJdn_seconds_offset_);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend21053 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21054 = new_Send((Optr)PSend21053, SMB_hours, 0);
    Array PThreadedCode21052 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend21053, (Optr)&t_send0, (Optr)PSend21054, (Optr)&t_method_return);
    Method PMethod21051 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21052, 1, PSend21054);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod21051, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend21057 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode21056 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21057, (Optr)&t_method_return);
    Method PMethod21055 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21056, 1, PSend21057);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod21055, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend21060 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21061 = new_Send((Optr)PSend21060, SMB_minutes, 0);
    Array PThreadedCode21059 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend21060, (Optr)&t_send0, (Optr)PSend21061, (Optr)&t_method_return);
    Method PMethod21058 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21059, 1, PSend21061);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod21058, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_minute, MC_SMB_minute);
}


static void init_SMB_dayOfWeek() {
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21064 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // rem:. 
    Send PSend21065 = new_Send((Optr)PSend21064, SMB_rem_, 1, (Optr)int_7_Const);
    // +. 
    Send PSend21066 = new_Send((Optr)PSend21065, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode21063 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21064, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend21065, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21066, (Optr)&t_method_return);
    Method PMethod21062 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21063, 1, PSend21066);
    
    MethodClosure MC_SMB_dayOfWeek = new_MethodClosure((Method)PMethod21062, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeek, MC_SMB_dayOfWeek);
}


static void init_SMB_hasEqualTicks_() {
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray21068 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    // julianDayNumber. 
    Send PSend21070 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_julianDayNumber, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21071 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__equals_, 1, (Optr)PSend21070);
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    // secondsSinceMidnight. 
    Send PSend21074 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_secondsSinceMidnight, 0);
    // =. 
    Send PSend21075 = new_Send((Optr)slot_Chronology_DateAndTime_seconds, SMB__equals_, 1, (Optr)PSend21074);
    Array PThreadedCode21073 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend21074, (Optr)&t_send1, (Optr)PSend21075, (Optr)&t_block_return);
    Block PBlock21072 = new_Block_with(empty_Array, empty_Array, PThreadedCode21073, 1, PSend21075);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend21076 = new_Send((Optr)PSend21071, SMB_and_, 1, (Optr)PBlock21072);
    Array PThreadedCode21069 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend21070, (Optr)&t_send1, (Optr)PSend21071, (Optr)&t_push_closure, (Optr)PBlock21072, (Optr)&t_send1, (Optr)PSend21076, (Optr)&t_method_return);
    Method PMethod21067 = new_Method_with(PArray21068, empty_Array, empty_Array, PThreadedCode21069, 1, PSend21076);
    
    MethodClosure MC_SMB_hasEqualTicks_ = new_MethodClosure((Method)PMethod21067, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_hasEqualTicks_, MC_SMB_hasEqualTicks_);
}


static void init_SMB_month() {
    Symbol SMB_month = new_Symbol(L"month");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray21080 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode21081 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_method_return);
    Block PBlock21079 = new_Block_with(PArray21080, empty_Array, PThreadedCode21081, 1, VAR_m_1_1);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21082 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21079);
    Array PThreadedCode21078 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21079, (Optr)&t_send1, (Optr)PSend21082, (Optr)&t_method_return);
    Method PMethod21077 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21078, 1, PSend21082);
    
    MethodClosure MC_SMB_month = new_MethodClosure((Method)PMethod21077, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_month, MC_SMB_month);
}


static void init_SMB_asLocal() {
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21085 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend21086 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21087 = new_Send((Optr)PSend21086, SMB_localOffset, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21088 = new_Send((Optr)PSend21085, SMB__equals_, 1, (Optr)PSend21087);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode21091 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock21090 = new_Block_with(empty_Array, empty_Array, PThreadedCode21091, 1, self);
    // class. 
    Send PSend21094 = new_Send((Optr)self, SMB_class, 0);
    // localOffset. 
    Send PSend21095 = new_Send((Optr)PSend21094, SMB_localOffset, 0);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    // utcOffset:. 
    Send PSend21096 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)PSend21095);
    Array PThreadedCode21093 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21094, (Optr)&t_send0, (Optr)PSend21095, (Optr)&t_send1, (Optr)PSend21096, (Optr)&t_block_return);
    Block PBlock21092 = new_Block_with(empty_Array, empty_Array, PThreadedCode21093, 1, PSend21096);
    // ifTrue:ifFalse:. 
    Send PSend21089 = new_Send((Optr)PSend21088, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21090, (Optr)PBlock21092);
    Array PThreadedCode21084 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21085, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21086, (Optr)&t_send0, (Optr)PSend21087, (Optr)&t_send1, (Optr)PSend21088, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21089, (Optr)PBlock21090, (Optr)PBlock21092, (Optr)&t_method_return);
    Method PMethod21083 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21084, 1, PSend21089);
    
    MethodClosure MC_SMB_asLocal = new_MethodClosure((Method)PMethod21083, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asLocal, MC_SMB_asLocal);
}


static void init_SMB_printOn_withLeadingSpace_() {
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
    Array PArray21098 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray21099 = new_Array_with(3, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend21101 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Character char_21102 = new_Character(L'T');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_21102_Const = new_Constant((Optr)char_21102);
    // <<. 
    Send PSend21103 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_21102_Const);
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    // printHMSOn:. 
    Send PSend21104 = new_Send((Optr)self, SMB_printHMSOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend21105 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_positive, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_21109 = new_Character(L'+');
    Array PThreadedCode21108 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_21109, (Optr)&t_block_return);
    Constant char_21109_Const = new_Constant((Optr)char_21109);
    Block PBlock21107 = new_Block_with(empty_Array, empty_Array, PThreadedCode21108, 1, char_21109_Const);
    Character char_2179 = new_Character(L'-');
    Array PThreadedCode21111 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_2179, (Optr)&t_block_return);
    Constant char_2179_Const = new_Constant((Optr)char_2179);
    Block PBlock21110 = new_Block_with(empty_Array, empty_Array, PThreadedCode21111, 1, char_2179_Const);
    // ifTrue:ifFalse:. 
    Send PSend21106 = new_Send((Optr)PSend21105, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21107, (Optr)PBlock21110);
    // <<. 
    Send PSend21112 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21106);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21115 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend21114 = new_Send((Optr)PSend21115, SMB_abs, 0);
    Assign PAssign21113 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend21114);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend21116 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9397 = new_Character(L'0');
    Constant char_9397_Const = new_Constant((Optr)char_9397);
    // <<. 
    Send PSend21120 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode21119 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend21120, (Optr)&t_block_return);
    Block PBlock21118 = new_Block_with(empty_Array, empty_Array, PThreadedCode21119, 1, PSend21120);
    // ifTrue:. 
    Send PSend21117 = new_Send((Optr)PSend21116, SMB_ifTrue_, 1, (Optr)PBlock21118);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21121 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend21122 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21125 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_minutes, 0);
    // abs. 
    Send PSend21124 = new_Send((Optr)PSend21125, SMB_abs, 0);
    Assign PAssign21123 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend21124);
    // <. 
    Send PSend21126 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21130 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode21129 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend21130, (Optr)&t_block_return);
    Block PBlock21128 = new_Block_with(empty_Array, empty_Array, PThreadedCode21129, 1, PSend21130);
    // ifTrue:. 
    Send PSend21127 = new_Send((Optr)PSend21126, SMB_ifTrue_, 1, (Optr)PBlock21128);
    // printOn:. 
    Send PSend21131 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21132 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend21133 = new_Send((Optr)PSend21132, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // seconds. 
    Send PSend21140 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    // abs. 
    Send PSend21139 = new_Send((Optr)PSend21140, SMB_abs, 0);
    Symbol SMB_truncated = new_Symbol(L"truncated");
    // truncated. 
    Send PSend21138 = new_Send((Optr)PSend21139, SMB_truncated, 0);
    Assign PAssign21137 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend21138);
    // <<. 
    Send PSend21141 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // printOn:. 
    Send PSend21142 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21136 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign21137, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21140, (Optr)&t_send0, (Optr)PSend21139, (Optr)&t_send0, (Optr)PSend21138, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21141, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21142, (Optr)&t_block_return);
    Block PBlock21135 = new_Block_with(empty_Array, empty_Array, PThreadedCode21136, 3, PAssign21137, PSend21141, PSend21142);
    // ifFalse:. 
    Send PSend21134 = new_Send((Optr)PSend21133, SMB_ifFalse_, 1, (Optr)PBlock21135);
    Array PThreadedCode21100 = instantiate_Array_with(ThreadedCode_Class, 0, 107, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send2, (Optr)PSend21101, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_21102, (Optr)&t_send1, (Optr)PSend21103, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21104, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21105, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21106, (Optr)PBlock21107, (Optr)PBlock21110, (Optr)&t_send1, (Optr)PSend21112, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21113, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21115, (Optr)&t_send0, (Optr)PSend21114, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21116, (Optr)&t_send_ifTrue_, (Optr)PSend21117, (Optr)PBlock21118, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21121, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21122, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21123, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21125, (Optr)&t_send0, (Optr)PSend21124, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21126, (Optr)&t_send_ifTrue_, (Optr)PSend21127, (Optr)PBlock21128, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21131, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21132, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend21133, (Optr)&t_send_ifFalse_, (Optr)PSend21134, (Optr)PBlock21135, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21097 = new_Method_with(PArray21098, PArray21099, empty_Array, PThreadedCode21100, 13, PSend21101, PSend21103, PSend21104, PSend21112, PAssign21113, PSend21117, PSend21121, PSend21122, PAssign21123, PSend21127, PSend21131, PSend21134, self);
    
    MethodClosure MC_SMB_printOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod21097, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printOn_withLeadingSpace_, MC_SMB_printOn_withLeadingSpace_);
}


static void init_SMB_asUTC() {
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    Symbol SMB_isZero = new_Symbol(L"isZero");
    // isZero. 
    Send PSend21145 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_isZero, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode21148 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock21147 = new_Block_with(empty_Array, empty_Array, PThreadedCode21148, 1, self);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // utcOffset:. 
    Send PSend21151 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)int_0_Const);
    Array PThreadedCode21150 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend21151, (Optr)&t_block_return);
    Block PBlock21149 = new_Block_with(empty_Array, empty_Array, PThreadedCode21150, 1, PSend21151);
    // ifTrue:ifFalse:. 
    Send PSend21146 = new_Send((Optr)PSend21145, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21147, (Optr)PBlock21149);
    Array PThreadedCode21144 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21145, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21146, (Optr)PBlock21147, (Optr)PBlock21149, (Optr)&t_method_return);
    Method PMethod21143 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21144, 1, PSend21146);
    
    MethodClosure MC_SMB_asUTC = new_MethodClosure((Method)PMethod21143, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_asUTC, MC_SMB_asUTC);
}


static void init_SMB_dayOfWeekName() {
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    // dayOfWeek. 
    Send PSend21154 = new_Send((Optr)self, SMB_dayOfWeek, 0);
    Symbol SMB_nameOfDay_ = new_Symbol(L"nameOfDay:");
    // nameOfDay:. 
    Send PSend21155 = new_Send((Optr)PWeek_classReference, SMB_nameOfDay_, 1, (Optr)PSend21154);
    Array PThreadedCode21153 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PWeek_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21154, (Optr)&t_send1, (Optr)PSend21155, (Optr)&t_method_return);
    Method PMethod21152 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21153, 1, PSend21155);
    
    MethodClosure MC_SMB_dayOfWeekName = new_MethodClosure((Method)PMethod21152, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekName, MC_SMB_dayOfWeekName);
}


static void init_SMB_utcOffset_() {
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray21157 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR_equiv_0_1 = new_Variable_named(L"equiv", 0);
    Array PArray21158 = new_Array_with(1, (Optr)VAR_equiv_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend21163 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21164 = new_Send((Optr)self, SMB_offset, 0);
    // -. 
    Send PSend21162 = new_Send((Optr)PSend21163, SMB__minus_, 1, (Optr)PSend21164);
    // +. 
    Send PSend21161 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend21162);
    Assign PAssign21160 = new_Assign((Optr)VAR_equiv_0_1, (Optr)PSend21161);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21166 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21168 = new_Send((Optr)VAR_equiv_0_1, SMB_ticks, 0);
    // asDuration. 
    Send PSend21169 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21170 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21168, (Optr)PSend21169);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21171 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21167 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send0, (Optr)PSend21168, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21169, (Optr)&t_send2, (Optr)PSend21170, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21171, (Optr)&t_method_return);
    Block PBlock21165 = new_Block_with(PArray21166, empty_Array, PThreadedCode21167, 2, PSend21170, PSend21171);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21172 = new_Send((Optr)PBlock21165, SMB_value_, 1, (Optr)VAR_equiv_0_1);
    Array PThreadedCode21159 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign21160, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21163, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21164, (Optr)&t_send1, (Optr)PSend21162, (Optr)&t_send1, (Optr)PSend21161, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock21165, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send1, (Optr)PSend21172, (Optr)&t_method_return);
    Method PMethod21156 = new_Method_with(PArray21157, PArray21158, empty_Array, PThreadedCode21159, 2, PAssign21160, PSend21172);
    
    MethodClosure MC_SMB_utcOffset_ = new_MethodClosure((Method)PMethod21156, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_utcOffset_, MC_SMB_utcOffset_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray21174 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Variable VAR_comparandAsDateAndTime_0_1 = new_Variable_named(L"comparandAsDateAndTime", 0);
    Array PArray21175 = new_Array_with(1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21178 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21180 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21184 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode21183 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend21184, (Optr)&t_block_return);
    Block PBlock21182 = new_Block_with(empty_Array, empty_Array, PThreadedCode21183, 1, PSend21184);
    // ifTrue:. 
    Send PSend21181 = new_Send((Optr)PSend21180, SMB_ifTrue_, 1, (Optr)PBlock21182);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend21186 = new_Send((Optr)VAR_comparand_0_0, SMB_asDateAndTime, 0);
    Assign PAssign21185 = new_Assign((Optr)VAR_comparandAsDateAndTime_0_1, (Optr)PSend21186);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21187 = new_Send((Optr)self, SMB_offset, 0);
    // offset. 
    Send PSend21188 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_offset, 0);
    // =. 
    Send PSend21189 = new_Send((Optr)PSend21187, SMB__equals_, 1, (Optr)PSend21188);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    // hasEqualTicks:. 
    Send PSend21193 = new_Send((Optr)self, SMB_hasEqualTicks_, 1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Array PThreadedCode21192 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send1, (Optr)PSend21193, (Optr)&t_block_return);
    Block PBlock21191 = new_Block_with(empty_Array, empty_Array, PThreadedCode21192, 1, PSend21193);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend21196 = new_Send((Optr)self, SMB_asUTC, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21197 = new_Send((Optr)PSend21196, SMB_ticks, 0);
    // asUTC. 
    Send PSend21198 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_asUTC, 0);
    // ticks. 
    Send PSend21199 = new_Send((Optr)PSend21198, SMB_ticks, 0);
    // =. 
    Send PSend21200 = new_Send((Optr)PSend21197, SMB__equals_, 1, (Optr)PSend21199);
    Array PThreadedCode21195 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21196, (Optr)&t_send0, (Optr)PSend21197, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend21198, (Optr)&t_send0, (Optr)PSend21199, (Optr)&t_send1, (Optr)PSend21200, (Optr)&t_block_return);
    Block PBlock21194 = new_Block_with(empty_Array, empty_Array, PThreadedCode21195, 1, PSend21200);
    // ifTrue:ifFalse:. 
    Send PSend21190 = new_Send((Optr)PSend21189, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21191, (Optr)PBlock21194);
    Array PThreadedCode21179 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend21180, (Optr)&t_send_ifTrue_, (Optr)PSend21181, (Optr)PBlock21182, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21185, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend21186, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21187, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend21188, (Optr)&t_send1, (Optr)PSend21189, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21190, (Optr)PBlock21191, (Optr)PBlock21194, (Optr)&t_method_return);
    Block PBlock21177 = new_Block_with(PArray21178, empty_Array, PThreadedCode21179, 3, PSend21181, PAssign21185, PSend21190);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21201 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21177);
    Array PThreadedCode21176 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21177, (Optr)&t_send1, (Optr)PSend21201, (Optr)&t_method_return);
    Method PMethod21173 = new_Method_with(PArray21174, PArray21175, empty_Array, PThreadedCode21176, 1, PSend21201);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod21173, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_secondsSinceMidnight() {
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    Array PThreadedCode21203 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_method_return);
    Method PMethod21202 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21203, 1, slot_Chronology_DateAndTime_seconds);
    
    MethodClosure MC_SMB_secondsSinceMidnight = new_MethodClosure((Method)PMethod21202, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_secondsSinceMidnight, MC_SMB_secondsSinceMidnight);
}


static void init_SMB_normalize_ticks_base_() {
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    Variable VAR_i_0_0 = new_Variable_named(L"i", 0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Variable VAR_base_0_2 = new_Variable_named(L"base", 0);
    Array PArray21205 = new_Array_with(3, (Optr)VAR_i_0_0, (Optr)VAR_ticks_0_1, (Optr)VAR_base_0_2);
    Variable VAR_tick_0_3 = new_Variable_named(L"tick", 0);
    Variable VAR_quo_0_4 = new_Variable_named(L"quo", 0);
    Variable VAR_rem_0_5 = new_Variable_named(L"rem", 0);
    Array PArray21206 = new_Array_with(3, (Optr)VAR_tick_0_3, (Optr)VAR_quo_0_4, (Optr)VAR_rem_0_5);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21209 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)VAR_i_0_0);
    Assign PAssign21208 = new_Assign((Optr)VAR_tick_0_3, (Optr)PSend21209);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend21211 = new_Send((Optr)VAR_tick_0_3, SMB_quo_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21210 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21211);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend21213 = new_Send((Optr)VAR_tick_0_3, SMB_rem_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21212 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21213);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend21214 = new_Send((Optr)VAR_rem_0_5, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend21219 = new_Send((Optr)VAR_quo_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign21218 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21219);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend21221 = new_Send((Optr)VAR_base_0_2, SMB__plus_, 1, (Optr)VAR_rem_0_5);
    Assign PAssign21220 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21221);
    Array PThreadedCode21217 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign21218, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21219, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21220, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send1, (Optr)PSend21221, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21216 = new_Block_with(empty_Array, empty_Array, PThreadedCode21217, 2, PAssign21218, PAssign21220);
    // ifTrue:. 
    Send PSend21215 = new_Send((Optr)PSend21214, SMB_ifTrue_, 1, (Optr)PBlock21216);
    // -. 
    Send PSend21222 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // -. 
    Send PSend21223 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend21224 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)PSend21223);
    // +. 
    Send PSend21225 = new_Send((Optr)PSend21224, SMB__plus_, 1, (Optr)VAR_quo_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend21226 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)PSend21222, (Optr)PSend21225);
    // at:put:. 
    Send PSend21227 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)VAR_i_0_0, (Optr)VAR_rem_0_5);
    Array PThreadedCode21207 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push1, (Optr)PAssign21208, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_send1, (Optr)PSend21209, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21210, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21211, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21212, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21213, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send0, (Optr)PSend21214, (Optr)&t_send_ifTrue_, (Optr)PSend21215, (Optr)PBlock21216, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21222, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21223, (Optr)&t_send1, (Optr)PSend21224, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_send1, (Optr)PSend21225, (Optr)&t_send2, (Optr)PSend21226, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send2, (Optr)PSend21227, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21204 = new_Method_with(PArray21205, PArray21206, empty_Array, PThreadedCode21207, 7, PAssign21208, PAssign21210, PAssign21212, PSend21215, PSend21226, PSend21227, self);
    
    MethodClosure MC_SMB_normalize_ticks_base_ = new_MethodClosure((Method)PMethod21204, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_normalize_ticks_base_, MC_SMB_normalize_ticks_base_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
    Array PArray21229 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21232 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21234 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend21235 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21236 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21234, (Optr)PSend21235);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21237 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21233 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21234, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21235, (Optr)&t_send2, (Optr)PSend21236, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21237, (Optr)&t_method_return);
    Block PBlock21231 = new_Block_with(PArray21232, empty_Array, PThreadedCode21233, 2, PSend21236, PSend21237);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend21238 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21239 = new_Send((Optr)PSend21238, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21240 = new_Send((Optr)PBlock21231, SMB_value_, 1, (Optr)PSend21239);
    Array PThreadedCode21230 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock21231, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21238, (Optr)&t_send0, (Optr)PSend21239, (Optr)&t_send1, (Optr)PSend21240, (Optr)&t_method_return);
    Method PMethod21228 = new_Method_with(PArray21229, empty_Array, empty_Array, PThreadedCode21230, 1, PSend21240);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21228, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Array PThreadedCode21242 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21241 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21242, 1, self);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod21241, Chronology_DateAndTime_Class);
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
    Send PSend21245 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21246 = new_Send((Optr)PSend21245, SMB_basicNew, 0);
    // class. 
    Send PSend21247 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21248 = new_Send((Optr)PSend21247, SMB_localOffset, 0);
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // setJdn:seconds:offset:. 
    Send PSend21249 = new_Send((Optr)PSend21246, SMB_setJdn_seconds_offset_, 3, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)int_0_Const, (Optr)PSend21248);
    Array PThreadedCode21244 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21245, (Optr)&t_send0, (Optr)PSend21246, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21247, (Optr)&t_send0, (Optr)PSend21248, (Optr)&t_send3, (Optr)PSend21249, (Optr)&t_method_return);
    Method PMethod21243 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21244, 1, PSend21249);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21243, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_midnight, MC_SMB_midnight);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21251 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_l_0_1 = new_Variable_named(L"l", 0);
    Variable VAR_n_0_2 = new_Variable_named(L"n", 0);
    Variable VAR_i_0_3 = new_Variable_named(L"i", 0);
    Variable VAR_j_0_4 = new_Variable_named(L"j", 0);
    Variable VAR_dd_0_5 = new_Variable_named(L"dd", 0);
    Variable VAR_mm_0_6 = new_Variable_named(L"mm", 0);
    Variable VAR_yyyy_0_7 = new_Variable_named(L"yyyy", 0);
    Array PArray21252 = new_Array_with(7, (Optr)VAR_l_0_1, (Optr)VAR_n_0_2, (Optr)VAR_i_0_3, (Optr)VAR_j_0_4, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_68569 = new_SmallInt(68569);
    Constant int_68569_Const = new_Constant((Optr)int_68569);
    // +. 
    Send PSend21255 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_68569_Const);
    Assign PAssign21254 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21255);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // *. 
    Send PSend21258 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_4_Const);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_146097 = new_SmallInt(146097);
    Constant int_146097_Const = new_Constant((Optr)int_146097);
    // //. 
    Send PSend21257 = new_Send((Optr)PSend21258, SMB__quotient_, 1, (Optr)int_146097_Const);
    Assign PAssign21256 = new_Assign((Optr)VAR_n_0_2, (Optr)PSend21257);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // *. 
    Send PSend21263 = new_Send((Optr)VAR_n_0_2, SMB__times_, 1, (Optr)int_146097_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // +. 
    Send PSend21262 = new_Send((Optr)PSend21263, SMB__plus_, 1, (Optr)int_3_Const);
    // //. 
    Send PSend21261 = new_Send((Optr)PSend21262, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21260 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21261);
    Assign PAssign21259 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21260);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21267 = new_Send((Optr)VAR_l_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_4000 = new_SmallInt(4000);
    Constant int_4000_Const = new_Constant((Optr)int_4000);
    // *. 
    Send PSend21266 = new_Send((Optr)PSend21267, SMB__times_, 1, (Optr)int_4000_Const);
    SmallInt int_1461001 = new_SmallInt(1461001);
    Constant int_1461001_Const = new_Constant((Optr)int_1461001);
    // //. 
    Send PSend21265 = new_Send((Optr)PSend21266, SMB__quotient_, 1, (Optr)int_1461001_Const);
    Assign PAssign21264 = new_Assign((Optr)VAR_i_0_3, (Optr)PSend21265);
    SmallInt int_1461 = new_SmallInt(1461);
    Constant int_1461_Const = new_Constant((Optr)int_1461);
    // *. 
    Send PSend21272 = new_Send((Optr)VAR_i_0_3, SMB__times_, 1, (Optr)int_1461_Const);
    // //. 
    Send PSend21271 = new_Send((Optr)PSend21272, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21270 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21271);
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // +. 
    Send PSend21269 = new_Send((Optr)PSend21270, SMB__plus_, 1, (Optr)int_31_Const);
    Assign PAssign21268 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21269);
    SmallInt int_80 = new_SmallInt(80);
    Constant int_80_Const = new_Constant((Optr)int_80);
    // *. 
    Send PSend21275 = new_Send((Optr)int_80_Const, SMB__times_, 1, (Optr)VAR_l_0_1);
    SmallInt int_2447 = new_SmallInt(2447);
    Constant int_2447_Const = new_Constant((Optr)int_2447);
    // //. 
    Send PSend21274 = new_Send((Optr)PSend21275, SMB__quotient_, 1, (Optr)int_2447_Const);
    Assign PAssign21273 = new_Assign((Optr)VAR_j_0_4, (Optr)PSend21274);
    // *. 
    Send PSend21279 = new_Send((Optr)VAR_j_0_4, SMB__times_, 1, (Optr)int_2447_Const);
    // //. 
    Send PSend21278 = new_Send((Optr)PSend21279, SMB__quotient_, 1, (Optr)int_80_Const);
    // -. 
    Send PSend21277 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21278);
    Assign PAssign21276 = new_Assign((Optr)VAR_dd_0_5, (Optr)PSend21277);
    SmallInt int_11 = new_SmallInt(11);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // //. 
    Send PSend21281 = new_Send((Optr)VAR_j_0_4, SMB__quotient_, 1, (Optr)int_11_Const);
    Assign PAssign21280 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21281);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend21284 = new_Send((Optr)VAR_j_0_4, SMB__plus_, 1, (Optr)int_2_Const);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // *. 
    Send PSend21285 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_12_Const);
    // -. 
    Send PSend21283 = new_Send((Optr)PSend21284, SMB__minus_, 1, (Optr)PSend21285);
    Assign PAssign21282 = new_Assign((Optr)VAR_mm_0_6, (Optr)PSend21283);
    SmallInt int_49 = new_SmallInt(49);
    Constant int_49_Const = new_Constant((Optr)int_49);
    // -. 
    Send PSend21290 = new_Send((Optr)VAR_n_0_2, SMB__minus_, 1, (Optr)int_49_Const);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // *. 
    Send PSend21289 = new_Send((Optr)PSend21290, SMB__times_, 1, (Optr)int_100_Const);
    // +. 
    Send PSend21288 = new_Send((Optr)PSend21289, SMB__plus_, 1, (Optr)VAR_i_0_3);
    // +. 
    Send PSend21287 = new_Send((Optr)PSend21288, SMB__plus_, 1, (Optr)VAR_l_0_1);
    Assign PAssign21286 = new_Assign((Optr)VAR_yyyy_0_7, (Optr)PSend21287);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend21291 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_value_, 3, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Array PThreadedCode21253 = instantiate_Array_with(ThreadedCode_Class, 0, 177, (Optr)&t_push1, (Optr)PAssign21254, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push1, (Optr)int_68569, (Optr)&t_send1, (Optr)PSend21255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21256, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21258, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21257, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21259, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21263, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend21262, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21261, (Optr)&t_send1, (Optr)PSend21260, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21264, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21267, (Optr)&t_push1, (Optr)int_4000, (Optr)&t_send1, (Optr)PSend21266, (Optr)&t_push1, (Optr)int_1461001, (Optr)&t_send1, (Optr)PSend21265, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21268, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_push1, (Optr)int_1461, (Optr)&t_send1, (Optr)PSend21272, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21271, (Optr)&t_send1, (Optr)PSend21270, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend21269, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21273, (Optr)&t_push1, (Optr)int_80, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21275, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21274, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21276, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21279, (Optr)&t_push1, (Optr)int_80, (Optr)&t_send1, (Optr)PSend21278, (Optr)&t_send1, (Optr)PSend21277, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21280, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_11, (Optr)&t_send1, (Optr)PSend21281, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21282, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend21284, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21285, (Optr)&t_send1, (Optr)PSend21283, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21286, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_49, (Optr)&t_send1, (Optr)PSend21290, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend21289, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_send1, (Optr)PSend21288, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21287, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_dd_0_5, (Optr)&t_push_variable, (Optr)VAR_mm_0_6, (Optr)&t_push_variable, (Optr)VAR_yyyy_0_7, (Optr)&t_send3, (Optr)PSend21291, (Optr)&t_method_return);
    Method PMethod21250 = new_Method_with(PArray21251, PArray21252, empty_Array, PThreadedCode21253, 11, PAssign21254, PAssign21256, PAssign21259, PAssign21264, PAssign21268, PAssign21273, PAssign21276, PAssign21280, PAssign21282, PAssign21286, PSend21291);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod21250, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printYMDOn_() {
    Symbol SMB_printYMDOn_ = new_Symbol(L"printYMDOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21293 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend21295 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode21294 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend21295, (Optr)&t_method_return);
    Method PMethod21292 = new_Method_with(PArray21293, empty_Array, empty_Array, PThreadedCode21294, 1, PSend21295);
    
    MethodClosure MC_SMB_printYMDOn_ = new_MethodClosure((Method)PMethod21292, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_, MC_SMB_printYMDOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21298 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode21297 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send2, (Optr)PSend21298, (Optr)&t_method_return);
    Method PMethod21296 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21297, 1, PSend21298);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod21296, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray21302 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode21303 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_method_return);
    Block PBlock21301 = new_Block_with(PArray21302, empty_Array, PThreadedCode21303, 1, VAR_y_1_2);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21304 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21301);
    Array PThreadedCode21300 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21301, (Optr)&t_send1, (Optr)PSend21304, (Optr)&t_method_return);
    Method PMethod21299 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21300, 1, PSend21304);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod21299, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_printHMSOn_() {
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21306 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_h_0_1 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_2 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_3 = new_Variable_named(L"s", 0);
    Array PArray21307 = new_Array_with(3, (Optr)VAR_h_0_1, (Optr)VAR_m_0_2, (Optr)VAR_s_0_3);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21311 = new_Send((Optr)self, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend21310 = new_Send((Optr)PSend21311, SMB_abs, 0);
    Assign PAssign21309 = new_Assign((Optr)VAR_h_0_1, (Optr)PSend21310);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21314 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend21313 = new_Send((Optr)PSend21314, SMB_abs, 0);
    Assign PAssign21312 = new_Assign((Optr)VAR_m_0_2, (Optr)PSend21313);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21317 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend21316 = new_Send((Optr)PSend21317, SMB_abs, 0);
    Assign PAssign21315 = new_Assign((Optr)VAR_s_0_3, (Optr)PSend21316);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend21318 = new_Send((Optr)VAR_h_0_1, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9397 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9397_Const = new_Constant((Optr)char_9397);
    // <<. 
    Send PSend21322 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode21321 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend21322, (Optr)&t_block_return);
    Block PBlock21320 = new_Block_with(empty_Array, empty_Array, PThreadedCode21321, 1, PSend21322);
    // ifTrue:. 
    Send PSend21319 = new_Send((Optr)PSend21318, SMB_ifTrue_, 1, (Optr)PBlock21320);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21323 = new_Send((Optr)VAR_h_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend21324 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend21325 = new_Send((Optr)VAR_m_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21329 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode21328 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend21329, (Optr)&t_block_return);
    Block PBlock21327 = new_Block_with(empty_Array, empty_Array, PThreadedCode21328, 1, PSend21329);
    // ifTrue:. 
    Send PSend21326 = new_Send((Optr)PSend21325, SMB_ifTrue_, 1, (Optr)PBlock21327);
    // printOn:. 
    Send PSend21330 = new_Send((Optr)VAR_m_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21331 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend21332 = new_Send((Optr)VAR_s_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21336 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode21335 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend21336, (Optr)&t_block_return);
    Block PBlock21334 = new_Block_with(empty_Array, empty_Array, PThreadedCode21335, 1, PSend21336);
    // ifTrue:. 
    Send PSend21333 = new_Send((Optr)PSend21332, SMB_ifTrue_, 1, (Optr)PBlock21334);
    // printOn:. 
    Send PSend21337 = new_Send((Optr)VAR_s_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21308 = instantiate_Array_with(ThreadedCode_Class, 0, 93, (Optr)&t_push1, (Optr)PAssign21309, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21311, (Optr)&t_send0, (Optr)PSend21310, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21312, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21314, (Optr)&t_send0, (Optr)PSend21313, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21315, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21317, (Optr)&t_send0, (Optr)PSend21316, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21318, (Optr)&t_send_ifTrue_, (Optr)PSend21319, (Optr)PBlock21320, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21323, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21324, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21325, (Optr)&t_send_ifTrue_, (Optr)PSend21326, (Optr)PBlock21327, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21330, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21331, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21332, (Optr)&t_send_ifTrue_, (Optr)PSend21333, (Optr)PBlock21334, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21337, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21305 = new_Method_with(PArray21306, PArray21307, empty_Array, PThreadedCode21308, 12, PAssign21309, PAssign21312, PAssign21315, PSend21319, PSend21323, PSend21324, PSend21326, PSend21330, PSend21331, PSend21333, PSend21337, self);
    
    MethodClosure MC_SMB_printHMSOn_ = new_MethodClosure((Method)PMethod21305, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_printHMSOn_, MC_SMB_printHMSOn_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray21339 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21342 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend21344 = new_Send((Optr)VAR_aJulianDayNumber_0_0, SMB_days, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21345 = new_Send((Optr)PSend21344, SMB_ticks, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21346 = new_Send((Optr)self, SMB_localOffset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21347 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21345, (Optr)PSend21346);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21348 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21343 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send0, (Optr)PSend21344, (Optr)&t_send0, (Optr)PSend21345, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21346, (Optr)&t_send2, (Optr)PSend21347, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21348, (Optr)&t_method_return);
    Block PBlock21341 = new_Block_with(PArray21342, empty_Array, PThreadedCode21343, 2, PSend21347, PSend21348);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21349 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21350 = new_Send((Optr)PBlock21341, SMB_value_, 1, (Optr)PSend21349);
    Array PThreadedCode21340 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21341, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21349, (Optr)&t_send1, (Optr)PSend21350, (Optr)&t_method_return);
    Method PMethod21338 = new_Method_with(PArray21339, empty_Array, empty_Array, PThreadedCode21340, 1, PSend21350);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod21338, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_localTimeZone() {
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
    Send PSend21356 = new_Send((Optr)PTimeZone_classReference, SMB_default, 0);
    Assign PAssign21355 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)PSend21356);
    Array PThreadedCode21354 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign21355, (Optr)&t_push_class_reference, (Optr)PTimeZone_classReference, (Optr)&t_send0, (Optr)PSend21356, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21353 = new_Block_with(empty_Array, empty_Array, PThreadedCode21354, 1, PAssign21355);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21357 = new_Send((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, SMB_ifNil_, 1, (Optr)PBlock21353);
    Array PThreadedCode21352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)&t_push_closure, (Optr)PBlock21353, (Optr)&t_send1, (Optr)PSend21357, (Optr)&t_method_return);
    Method PMethod21351 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21352, 1, PSend21357);
    
    MethodClosure MC_SMB_localTimeZone = new_MethodClosure((Method)PMethod21351, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone, MC_SMB_localTimeZone);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend21360 = new_Send((Optr)self, SMB_midnight, 0);
    Array PThreadedCode21359 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21360, (Optr)&t_method_return);
    Method PMethod21358 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21359, 1, PSend21360);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod21358, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_epoch() {
    Symbol SMB_epoch = new_Symbol(L"epoch");
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21363 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend21364 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend21363);
    Array PThreadedCode21362 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21363, (Optr)&t_send1, (Optr)PSend21364, (Optr)&t_method_return);
    Method PMethod21361 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21362, 1, PSend21364);
    
    MethodClosure MC_SMB_epoch = new_MethodClosure((Method)PMethod21361, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_epoch, MC_SMB_epoch);
}


static void init_class_SMB_localTimeZone_() {
    Symbol SMB_localTimeZone_ = new_Symbol(L"localTimeZone:");
    Variable VAR_aTimeZone_0_0 = new_Variable_named(L"aTimeZone", 0);
    Array PArray21366 = new_Array_with(1, (Optr)VAR_aTimeZone_0_0);
    Assign PAssign21368 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)VAR_aTimeZone_0_0);
    Array PThreadedCode21367 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21368, (Optr)&t_push_variable, (Optr)VAR_aTimeZone_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21365 = new_Method_with(PArray21366, empty_Array, empty_Array, PThreadedCode21367, 2, PAssign21368, self);
    
    MethodClosure MC_SMB_localTimeZone_ = new_MethodClosure((Method)PMethod21365, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone_, MC_SMB_localTimeZone_);
}


static void init_class_SMB_localOffset() {
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21371 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21372 = new_Send((Optr)PSend21371, SMB_offset, 0);
    Array PThreadedCode21370 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21371, (Optr)&t_send0, (Optr)PSend21372, (Optr)&t_method_return);
    Method PMethod21369 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21370, 1, PSend21372);
    
    MethodClosure MC_SMB_localOffset = new_MethodClosure((Method)PMethod21369, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localOffset, MC_SMB_localOffset);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21375 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21376 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21377 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21378 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend21376, (Optr)PSend21377);
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21379 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21380 = new_Send((Optr)PSend21379, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21381 = new_Send((Optr)PSend21375, SMB_ticks_offset_, 2, (Optr)PSend21378, (Optr)PSend21380);
    Array PThreadedCode21374 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21375, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21376, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21377, (Optr)&t_send2, (Optr)PSend21378, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21379, (Optr)&t_send0, (Optr)PSend21380, (Optr)&t_send2, (Optr)PSend21381, (Optr)&t_method_return);
    Method PMethod21373 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21374, 1, PSend21381);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod21373, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_midnight() {
    Symbol SMB_midnight = new_Symbol(L"midnight");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
    Send PSend21384 = new_Send((Optr)self, SMB_now, 0);
    // midnight. 
    Send PSend21385 = new_Send((Optr)PSend21384, SMB_midnight, 0);
    Array PThreadedCode21383 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21384, (Optr)&t_send0, (Optr)PSend21385, (Optr)&t_method_return);
    Method PMethod21382 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21383, 1, PSend21385);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21382, HEADER(Chronology_DateAndTime_Class));
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_midnight, MC_SMB_midnight);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21388 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Array PThreadedCode21387 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21388, (Optr)&t_method_return);
    Method PMethod21386 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21387, 1, PSend21388);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod21386, HEADER(Chronology_DateAndTime_Class));
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