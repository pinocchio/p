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
<<<<<<< HEAD
    Send PSend20916 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20915 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20916, (Optr)&t_method_return);
    Method PMethod20914 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20915, 1, PSend20916);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20914, Chronology_DateAndTime_Class);
=======
    Send PSend20882 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20881 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20882, (Optr)&t_method_return);
    Method PMethod20880 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20881, 1, PSend20882);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20880, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
<<<<<<< HEAD
    Send PSend20919 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_epoch = new_Symbol(L"epoch");
    // epoch. 
    Send PSend20920 = new_Send((Optr)PSend20919, SMB_epoch, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20921 = new_Send((Optr)self, SMB__minus_, 1, (Optr)PSend20920);
    // asSeconds. 
    Send PSend20922 = new_Send((Optr)PSend20921, SMB_asSeconds, 0);
    Array PThreadedCode20918 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20919, (Optr)&t_send0, (Optr)PSend20920, (Optr)&t_send1, (Optr)PSend20921, (Optr)&t_send0, (Optr)PSend20922, (Optr)&t_method_return);
    Method PMethod20917 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20918, 1, PSend20922);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20917, Chronology_DateAndTime_Class);
=======
    Send PSend20885 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_epoch = new_Symbol(L"epoch");
    // epoch. 
    Send PSend20886 = new_Send((Optr)PSend20885, SMB_epoch, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20887 = new_Send((Optr)self, SMB__minus_, 1, (Optr)PSend20886);
    // asSeconds. 
    Send PSend20888 = new_Send((Optr)PSend20887, SMB_asSeconds, 0);
    Array PThreadedCode20884 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20885, (Optr)&t_send0, (Optr)PSend20886, (Optr)&t_send1, (Optr)PSend20887, (Optr)&t_send0, (Optr)PSend20888, (Optr)&t_method_return);
    Method PMethod20883 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20884, 1, PSend20888);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20883, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
<<<<<<< HEAD
    Send PSend20925 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20924 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20925, (Optr)&t_method_return);
    Method PMethod20923 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20924, 1, PSend20925);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20923, Chronology_DateAndTime_Class);
=======
    Send PSend20891 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20890 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20891, (Optr)&t_method_return);
    Method PMethod20889 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20890, 1, PSend20891);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20889, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
<<<<<<< HEAD
    Send PSend20928 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20927 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20928, (Optr)&t_method_return);
    Method PMethod20926 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20927, 1, PSend20928);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20926, Chronology_DateAndTime_Class);
=======
    Send PSend20894 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20893 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20894, (Optr)&t_method_return);
    Method PMethod20892 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20893, 1, PSend20894);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20892, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
<<<<<<< HEAD
    Array PThreadedCode20930 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_method_return);
    Method PMethod20929 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20930, 1, slot_Chronology_DateAndTime_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod20929, Chronology_DateAndTime_Class);
=======
    Array PThreadedCode20896 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_method_return);
    Method PMethod20895 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20896, 1, slot_Chronology_DateAndTime_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod20895, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
<<<<<<< HEAD
    Send PSend20933 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode20932 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20933, (Optr)&t_method_return);
    Method PMethod20931 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20932, 1, PSend20933);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20931, Chronology_DateAndTime_Class);
=======
    Send PSend20899 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode20898 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend20899, (Optr)&t_method_return);
    Method PMethod20897 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20898, 1, PSend20899);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20897, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_julianDayNumber() {
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
<<<<<<< HEAD
    Array PThreadedCode20935 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_method_return);
    Method PMethod20934 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20935, 1, slot_Chronology_DateAndTime_jdn);
    
    MethodClosure MC_SMB_julianDayNumber = new_MethodClosure((Method)PMethod20934, Chronology_DateAndTime_Class);
=======
    Array PThreadedCode20901 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_method_return);
    Method PMethod20900 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20901, 1, slot_Chronology_DateAndTime_jdn);
    
    MethodClosure MC_SMB_julianDayNumber = new_MethodClosure((Method)PMethod20900, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_julianDayNumber, MC_SMB_julianDayNumber);
}


static void init_SMB_dayOfMonth() {
    Symbol SMB_dayOfMonth = new_Symbol(L"dayOfMonth");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
<<<<<<< HEAD
    Array PArray20939 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20940 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_method_return);
    Block PBlock20938 = new_Block_with(PArray20939, empty_Array, PThreadedCode20940, 1, VAR_d_1_0);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20941 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20938);
    Array PThreadedCode20937 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20938, (Optr)&t_send1, (Optr)PSend20941, (Optr)&t_method_return);
    Method PMethod20936 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20937, 1, PSend20941);
    
    MethodClosure MC_SMB_dayOfMonth = new_MethodClosure((Method)PMethod20936, Chronology_DateAndTime_Class);
=======
    Array PArray20905 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20906 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_method_return);
    Block PBlock20904 = new_Block_with(PArray20905, empty_Array, PThreadedCode20906, 1, VAR_d_1_0);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20907 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20904);
    Array PThreadedCode20903 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20904, (Optr)&t_send1, (Optr)PSend20907, (Optr)&t_method_return);
    Method PMethod20902 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20903, 1, PSend20907);
    
    MethodClosure MC_SMB_dayOfMonth = new_MethodClosure((Method)PMethod20902, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_dayOfMonth, MC_SMB_dayOfMonth);
}


static void init_SMB_ticks_offset_() {
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    Variable VAR_ticks_0_0 = new_Variable_named(L"ticks", 0);
    Variable VAR_utcOffset_0_1 = new_Variable_named(L"utcOffset", 0);
<<<<<<< HEAD
    Array PArray20943 = new_Array_with(2, (Optr)VAR_ticks_0_0, (Optr)VAR_utcOffset_0_1);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20945 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
=======
    Array PArray20909 = new_Array_with(2, (Optr)VAR_ticks_0_0, (Optr)VAR_utcOffset_0_1);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20911 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // normalize:ticks:base:. 
<<<<<<< HEAD
    Send PSend20946 = new_Send((Optr)self, SMB_normalize_ticks_base_, 3, (Optr)int_2_Const, (Optr)VAR_ticks_0_0, (Optr)PSend20945);
=======
    Send PSend20912 = new_Send((Optr)self, SMB_normalize_ticks_base_, 3, (Optr)int_2_Const, (Optr)VAR_ticks_0_0, (Optr)PSend20911);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
<<<<<<< HEAD
    Send PSend20948 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign20947 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)PSend20948);
    // at:. 
    Send PSend20950 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20949 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)PSend20950);
    Assign PAssign20951 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_utcOffset_0_1);
    Array PThreadedCode20944 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20945, (Optr)&t_send3, (Optr)PSend20946, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20947, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20948, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20949, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20950, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20951, (Optr)&t_push_variable, (Optr)VAR_utcOffset_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20942 = new_Method_with(PArray20943, empty_Array, empty_Array, PThreadedCode20944, 5, PSend20946, PAssign20947, PAssign20949, PAssign20951, self);
    
    MethodClosure MC_SMB_ticks_offset_ = new_MethodClosure((Method)PMethod20942, Chronology_DateAndTime_Class);
=======
    Send PSend20914 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign20913 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)PSend20914);
    // at:. 
    Send PSend20916 = new_Send((Optr)VAR_ticks_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20915 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)PSend20916);
    Assign PAssign20917 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_utcOffset_0_1);
    Array PThreadedCode20910 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20911, (Optr)&t_send3, (Optr)PSend20912, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20913, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20914, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20915, (Optr)&t_push_variable, (Optr)VAR_ticks_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20916, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20917, (Optr)&t_push_variable, (Optr)VAR_utcOffset_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20908 = new_Method_with(PArray20909, empty_Array, empty_Array, PThreadedCode20910, 5, PSend20912, PAssign20913, PAssign20915, PAssign20917, self);
    
    MethodClosure MC_SMB_ticks_offset_ = new_MethodClosure((Method)PMethod20908, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_ticks_offset_, MC_SMB_ticks_offset_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
<<<<<<< HEAD
    Array PArray20953 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Array PArray20954 = new_Array_with(1, (Optr)VAR_ticks_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20957 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign20956 = new_Assign((Optr)VAR_ticks_0_1, (Optr)PSend20957);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20958 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20959 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // ticks. 
    Send PSend20960 = new_Send((Optr)PSend20959, SMB_ticks, 0);
    Variable VAR_ticks1_1_0 = new_Variable_named(L"ticks1", 1);
    Variable VAR_dticks_1_1 = new_Variable_named(L"dticks", 1);
    Array PArray20962 = new_Array_with(2, (Optr)VAR_ticks1_1_0, (Optr)VAR_dticks_1_1);
    // +. 
    Send PSend20964 = new_Send((Optr)VAR_ticks1_1_0, SMB__plus_, 1, (Optr)VAR_dticks_1_1);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend20965 = new_Send((Optr)VAR_ticks_0_1, SMB_addLast_, 1, (Optr)PSend20964);
    Array PThreadedCode20963 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_ticks1_1_0, (Optr)&t_push_variable, (Optr)VAR_dticks_1_1, (Optr)&t_send1, (Optr)PSend20964, (Optr)&t_send1, (Optr)PSend20965, (Optr)&t_method_return);
    Block PBlock20961 = new_Block_with(PArray20962, empty_Array, PThreadedCode20963, 1, PSend20965);
    Symbol SMB_with_do_ = new_Symbol(L"with:do:");
    // with:do:. 
    Send PSend20966 = new_Send((Optr)PSend20958, SMB_with_do_, 2, (Optr)PSend20960, (Optr)PBlock20961);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20968 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20970 = new_Send((Optr)VAR_ticks_0_1, SMB_asArray, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20971 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20972 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20970, (Optr)PSend20971);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20973 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20969 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_send0, (Optr)PSend20970, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20971, (Optr)&t_send2, (Optr)PSend20972, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20973, (Optr)&t_method_return);
    Block PBlock20967 = new_Block_with(PArray20968, empty_Array, PThreadedCode20969, 2, PSend20972, PSend20973);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20974 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20975 = new_Send((Optr)PSend20974, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20976 = new_Send((Optr)PBlock20967, SMB_value_, 1, (Optr)PSend20975);
    Array PThreadedCode20955 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20956, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20957, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20958, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20959, (Optr)&t_send0, (Optr)PSend20960, (Optr)&t_push_closure, (Optr)PBlock20961, (Optr)&t_send2, (Optr)PSend20966, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20967, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20974, (Optr)&t_send0, (Optr)PSend20975, (Optr)&t_send1, (Optr)PSend20976, (Optr)&t_method_return);
    Method PMethod20952 = new_Method_with(PArray20953, PArray20954, empty_Array, PThreadedCode20955, 3, PAssign20956, PSend20966, PSend20976);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20952, Chronology_DateAndTime_Class);
=======
    Array PArray20919 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Array PArray20920 = new_Array_with(1, (Optr)VAR_ticks_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20923 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign20922 = new_Assign((Optr)VAR_ticks_0_1, (Optr)PSend20923);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20924 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20925 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // ticks. 
    Send PSend20926 = new_Send((Optr)PSend20925, SMB_ticks, 0);
    Variable VAR_ticks1_1_0 = new_Variable_named(L"ticks1", 1);
    Variable VAR_dticks_1_1 = new_Variable_named(L"dticks", 1);
    Array PArray20928 = new_Array_with(2, (Optr)VAR_ticks1_1_0, (Optr)VAR_dticks_1_1);
    // +. 
    Send PSend20930 = new_Send((Optr)VAR_ticks1_1_0, SMB__plus_, 1, (Optr)VAR_dticks_1_1);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend20931 = new_Send((Optr)VAR_ticks_0_1, SMB_addLast_, 1, (Optr)PSend20930);
    Array PThreadedCode20929 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_ticks1_1_0, (Optr)&t_push_variable, (Optr)VAR_dticks_1_1, (Optr)&t_send1, (Optr)PSend20930, (Optr)&t_send1, (Optr)PSend20931, (Optr)&t_method_return);
    Block PBlock20927 = new_Block_with(PArray20928, empty_Array, PThreadedCode20929, 1, PSend20931);
    Symbol SMB_with_do_ = new_Symbol(L"with:do:");
    // with:do:. 
    Send PSend20932 = new_Send((Optr)PSend20924, SMB_with_do_, 2, (Optr)PSend20926, (Optr)PBlock20927);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20934 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20936 = new_Send((Optr)VAR_ticks_0_1, SMB_asArray, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend20937 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend20938 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend20936, (Optr)PSend20937);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20939 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20935 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_send0, (Optr)PSend20936, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20937, (Optr)&t_send2, (Optr)PSend20938, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20939, (Optr)&t_method_return);
    Block PBlock20933 = new_Block_with(PArray20934, empty_Array, PThreadedCode20935, 2, PSend20938, PSend20939);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20940 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20941 = new_Send((Optr)PSend20940, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend20942 = new_Send((Optr)PBlock20933, SMB_value_, 1, (Optr)PSend20941);
    Array PThreadedCode20921 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign20922, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20923, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20924, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20925, (Optr)&t_send0, (Optr)PSend20926, (Optr)&t_push_closure, (Optr)PBlock20927, (Optr)&t_send2, (Optr)PSend20932, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock20933, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20940, (Optr)&t_send0, (Optr)PSend20941, (Optr)&t_send1, (Optr)PSend20942, (Optr)&t_method_return);
    Method PMethod20918 = new_Method_with(PArray20919, PArray20920, empty_Array, PThreadedCode20921, 3, PAssign20922, PSend20932, PSend20942);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20918, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
<<<<<<< HEAD
    Array PArray20978 = new_Array_with(1, (Optr)VAR_operand_0_0);
=======
    Array PArray20944 = new_Array_with(1, (Optr)VAR_operand_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol  SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Constant SMB_asDateAndTime_Const = new_Constant((Optr)SMB_asDateAndTime);
    // respondsTo:. 
<<<<<<< HEAD
    Send PSend20980 = new_Send((Optr)VAR_operand_0_0, SMB_respondsTo_, 1, (Optr)SMB_asDateAndTime_Const);
    Variable VAR_lticks_1_0 = new_Variable_named(L"lticks", 1);
    Variable VAR_rticks_1_1 = new_Variable_named(L"rticks", 1);
    Array PArray20982 = new_Array_with(2, (Optr)VAR_lticks_1_0, (Optr)VAR_rticks_1_1);
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    // asLocal. 
    Send PSend20986 = new_Send((Optr)self, SMB_asLocal, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20985 = new_Send((Optr)PSend20986, SMB_ticks, 0);
    Assign PAssign20984 = new_Assign((Optr)VAR_lticks_1_0, (Optr)PSend20985);
    // asDateAndTime. 
    Send PSend20990 = new_Send((Optr)VAR_operand_0_0, SMB_asDateAndTime, 0);
    // asLocal. 
    Send PSend20989 = new_Send((Optr)PSend20990, SMB_asLocal, 0);
    // ticks. 
    Send PSend20988 = new_Send((Optr)PSend20989, SMB_ticks, 0);
    Assign PAssign20987 = new_Assign((Optr)VAR_rticks_1_1, (Optr)PSend20988);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20991 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20992 = new_Send((Optr)VAR_lticks_1_0, SMB_first, 0);
    // first. 
    Send PSend20993 = new_Send((Optr)VAR_rticks_1_1, SMB_first, 0);
    // -. 
    Send PSend20994 = new_Send((Optr)PSend20992, SMB__minus_, 1, (Optr)PSend20993);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20995 = new_Send((Optr)PSend20991, SMB__times_, 1, (Optr)PSend20994);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20996 = new_Send((Optr)VAR_lticks_1_0, SMB_second, 0);
    // second. 
    Send PSend20997 = new_Send((Optr)VAR_rticks_1_1, SMB_second, 0);
    // -. 
    Send PSend20998 = new_Send((Optr)PSend20996, SMB__minus_, 1, (Optr)PSend20997);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20999 = new_Send((Optr)PSend20995, SMB__plus_, 1, (Optr)PSend20998);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend21000 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)PSend20999);
    Array PThreadedCode20983 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign20984, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20986, (Optr)&t_send0, (Optr)PSend20985, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20987, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20990, (Optr)&t_send0, (Optr)PSend20989, (Optr)&t_send0, (Optr)PSend20988, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20991, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20992, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20993, (Optr)&t_send1, (Optr)PSend20994, (Optr)&t_send1, (Optr)PSend20995, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20996, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20997, (Optr)&t_send1, (Optr)PSend20998, (Optr)&t_send1, (Optr)PSend20999, (Optr)&t_send1, (Optr)PSend21000, (Optr)&t_method_return);
    Block PBlock20981 = new_Block_with(empty_Array, PArray20982, PThreadedCode20983, 3, PAssign20984, PAssign20987, PSend21000);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend21003 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    // +. 
    Send PSend21004 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend21003);
    Array PThreadedCode21002 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend21003, (Optr)&t_send1, (Optr)PSend21004, (Optr)&t_block_return);
    Block PBlock21001 = new_Block_with(empty_Array, empty_Array, PThreadedCode21002, 1, PSend21004);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend21005 = new_Send((Optr)PSend20980, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20981, (Optr)PBlock21001);
    Array PThreadedCode20979 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_push1, (Optr)SMB_asDateAndTime, (Optr)&t_send1, (Optr)PSend20980, (Optr)&t_push_closure, (Optr)PBlock20981, (Optr)&t_push_closure, (Optr)PBlock21001, (Optr)&t_send2, (Optr)PSend21005, (Optr)&t_method_return);
    Method PMethod20977 = new_Method_with(PArray20978, empty_Array, empty_Array, PThreadedCode20979, 1, PSend21005);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20977, Chronology_DateAndTime_Class);
=======
    Send PSend20946 = new_Send((Optr)VAR_operand_0_0, SMB_respondsTo_, 1, (Optr)SMB_asDateAndTime_Const);
    Variable VAR_lticks_1_0 = new_Variable_named(L"lticks", 1);
    Variable VAR_rticks_1_1 = new_Variable_named(L"rticks", 1);
    Array PArray20948 = new_Array_with(2, (Optr)VAR_lticks_1_0, (Optr)VAR_rticks_1_1);
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    // asLocal. 
    Send PSend20952 = new_Send((Optr)self, SMB_asLocal, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20951 = new_Send((Optr)PSend20952, SMB_ticks, 0);
    Assign PAssign20950 = new_Assign((Optr)VAR_lticks_1_0, (Optr)PSend20951);
    // asDateAndTime. 
    Send PSend20956 = new_Send((Optr)VAR_operand_0_0, SMB_asDateAndTime, 0);
    // asLocal. 
    Send PSend20955 = new_Send((Optr)PSend20956, SMB_asLocal, 0);
    // ticks. 
    Send PSend20954 = new_Send((Optr)PSend20955, SMB_ticks, 0);
    Assign PAssign20953 = new_Assign((Optr)VAR_rticks_1_1, (Optr)PSend20954);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20957 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20958 = new_Send((Optr)VAR_lticks_1_0, SMB_first, 0);
    // first. 
    Send PSend20959 = new_Send((Optr)VAR_rticks_1_1, SMB_first, 0);
    // -. 
    Send PSend20960 = new_Send((Optr)PSend20958, SMB__minus_, 1, (Optr)PSend20959);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20961 = new_Send((Optr)PSend20957, SMB__times_, 1, (Optr)PSend20960);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20962 = new_Send((Optr)VAR_lticks_1_0, SMB_second, 0);
    // second. 
    Send PSend20963 = new_Send((Optr)VAR_rticks_1_1, SMB_second, 0);
    // -. 
    Send PSend20964 = new_Send((Optr)PSend20962, SMB__minus_, 1, (Optr)PSend20963);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20965 = new_Send((Optr)PSend20961, SMB__plus_, 1, (Optr)PSend20964);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20966 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)PSend20965);
    Array PThreadedCode20949 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign20950, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20952, (Optr)&t_send0, (Optr)PSend20951, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20953, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20956, (Optr)&t_send0, (Optr)PSend20955, (Optr)&t_send0, (Optr)PSend20954, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20957, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20958, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20959, (Optr)&t_send1, (Optr)PSend20960, (Optr)&t_send1, (Optr)PSend20961, (Optr)&t_push_variable, (Optr)VAR_lticks_1_0, (Optr)&t_send0, (Optr)PSend20962, (Optr)&t_push_variable, (Optr)VAR_rticks_1_1, (Optr)&t_send0, (Optr)PSend20963, (Optr)&t_send1, (Optr)PSend20964, (Optr)&t_send1, (Optr)PSend20965, (Optr)&t_send1, (Optr)PSend20966, (Optr)&t_method_return);
    Block PBlock20947 = new_Block_with(empty_Array, PArray20948, PThreadedCode20949, 3, PAssign20950, PAssign20953, PSend20966);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20969 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    // +. 
    Send PSend20970 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20969);
    Array PThreadedCode20968 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20969, (Optr)&t_send1, (Optr)PSend20970, (Optr)&t_block_return);
    Block PBlock20967 = new_Block_with(empty_Array, empty_Array, PThreadedCode20968, 1, PSend20970);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend20971 = new_Send((Optr)PSend20946, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20947, (Optr)PBlock20967);
    Array PThreadedCode20945 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_push1, (Optr)SMB_asDateAndTime, (Optr)&t_send1, (Optr)PSend20946, (Optr)&t_push_closure, (Optr)PBlock20947, (Optr)&t_push_closure, (Optr)PBlock20967, (Optr)&t_send2, (Optr)PSend20971, (Optr)&t_method_return);
    Method PMethod20943 = new_Method_with(PArray20944, empty_Array, empty_Array, PThreadedCode20945, 1, PSend20971);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20943, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_monthName() {
    Symbol SMB_monthName = new_Symbol(L"monthName");
    Symbol SMB_month = new_Symbol(L"month");
    // month. 
<<<<<<< HEAD
    Send PSend21008 = new_Send((Optr)self, SMB_month, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend21009 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend21008);
    Array PThreadedCode21007 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21008, (Optr)&t_send1, (Optr)PSend21009, (Optr)&t_method_return);
    Method PMethod21006 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21007, 1, PSend21009);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod21006, Chronology_DateAndTime_Class);
=======
    Send PSend20974 = new_Send((Optr)self, SMB_month, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20975 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20974);
    Array PThreadedCode20973 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20974, (Optr)&t_send1, (Optr)PSend20975, (Optr)&t_method_return);
    Method PMethod20972 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20973, 1, PSend20975);
    
    MethodClosure MC_SMB_monthName = new_MethodClosure((Method)PMethod20972, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_monthName, MC_SMB_monthName);
}


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
<<<<<<< HEAD
    Send PSend21012 = new_Send((Optr)Date_classReference, SMB_starting_, 1, (Optr)self);
    Array PThreadedCode21011 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21012, (Optr)&t_method_return);
    Method PMethod21010 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21011, 1, PSend21012);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod21010, Chronology_DateAndTime_Class);
=======
    Send PSend20978 = new_Send((Optr)Date_classReference, SMB_starting_, 1, (Optr)self);
    Array PThreadedCode20977 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20978, (Optr)&t_method_return);
    Method PMethod20976 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20977, 1, PSend20978);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20976, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_asDate, MC_SMB_asDate);
}


<<<<<<< HEAD
static void init_SMB_dayOfWeekAbbreviation() {
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    // dayOfWeekName. 
    Send PSend21015 = new_Send((Optr)self, SMB_dayOfWeekName, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend21016 = new_Send((Optr)PSend21015, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    Array PThreadedCode21014 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21015, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend21016, (Optr)&t_method_return);
    Method PMethod21013 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21014, 1, PSend21016);
    
    MethodClosure MC_SMB_dayOfWeekAbbreviation = new_MethodClosure((Method)PMethod21013, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekAbbreviation, MC_SMB_dayOfWeekAbbreviation);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21018 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    // printOn:withLeadingSpace:. 
    Send PSend21020 = new_Send((Optr)self, SMB_printOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode21019 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend21020, (Optr)&t_method_return);
    Method PMethod21017 = new_Method_with(PArray21018, empty_Array, empty_Array, PThreadedCode21019, 1, PSend21020);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21017, Chronology_DateAndTime_Class);
=======
static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20980 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    // printOn:withLeadingSpace:. 
    Send PSend20982 = new_Send((Optr)self, SMB_printOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode20981 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend20982, (Optr)&t_method_return);
    Method PMethod20979 = new_Method_with(PArray20980, empty_Array, empty_Array, PThreadedCode20981, 1, PSend20982);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20979, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_printYMDOn_withLeadingSpace_() {
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
<<<<<<< HEAD
    Array PArray21022 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_year_0_2 = new_Variable_named(L"year", 0);
    Variable VAR_month_0_3 = new_Variable_named(L"month", 0);
    Variable VAR_day_0_4 = new_Variable_named(L"day", 0);
    Array PArray21023 = new_Array_with(3, (Optr)VAR_year_0_2, (Optr)VAR_month_0_3, (Optr)VAR_day_0_4);
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray21026 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Assign PAssign21028 = new_Assign((Optr)VAR_year_0_2, (Optr)VAR_y_1_2);
    Assign PAssign21029 = new_Assign((Optr)VAR_month_0_3, (Optr)VAR_m_1_1);
    Assign PAssign21030 = new_Assign((Optr)VAR_day_0_4, (Optr)VAR_d_1_0);
    Array PThreadedCode21027 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign21028, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21029, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21030, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21025 = new_Block_with(PArray21026, empty_Array, PThreadedCode21027, 3, PAssign21028, PAssign21029, PAssign21030);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21031 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21025);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend21032 = new_Send((Optr)VAR_year_0_2, SMB_negative, 0);
=======
    Array PArray20984 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_year_0_2 = new_Variable_named(L"year", 0);
    Variable VAR_month_0_3 = new_Variable_named(L"month", 0);
    Variable VAR_day_0_4 = new_Variable_named(L"day", 0);
    Array PArray20985 = new_Array_with(3, (Optr)VAR_year_0_2, (Optr)VAR_month_0_3, (Optr)VAR_day_0_4);
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20988 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Assign PAssign20990 = new_Assign((Optr)VAR_year_0_2, (Optr)VAR_y_1_2);
    Assign PAssign20991 = new_Assign((Optr)VAR_month_0_3, (Optr)VAR_m_1_1);
    Assign PAssign20992 = new_Assign((Optr)VAR_day_0_4, (Optr)VAR_d_1_0);
    Array PThreadedCode20989 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign20990, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20991, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20992, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock20987 = new_Block_with(PArray20988, empty_Array, PThreadedCode20989, 3, PAssign20990, PAssign20991, PAssign20992);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend20993 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20987);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20994 = new_Send((Optr)VAR_year_0_2, SMB_negative, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_2179 = new_Character(L'-');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_2179_Const = new_Constant((Optr)char_2179);
    // nextPut:. 
<<<<<<< HEAD
    Send PSend21036 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPut_, 1, (Optr)char_2182_Const);
    Array PThreadedCode21035 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend21036, (Optr)&t_block_return);
    Block PBlock21034 = new_Block_with(empty_Array, empty_Array, PThreadedCode21035, 1, PSend21036);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend21042 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Array PThreadedCode21041 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend21042, (Optr)&t_block_return);
    Block PBlock21040 = new_Block_with(empty_Array, empty_Array, PThreadedCode21041, 1, PSend21042);
    // ifTrue:. 
    Send PSend21039 = new_Send((Optr)VAR_printLeadingSpaceToo_0_1, SMB_ifTrue_, 1, (Optr)PBlock21040);
    Array PThreadedCode21038 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend21039, (Optr)PBlock21040, (Optr)&t_block_return);
    Block PBlock21037 = new_Block_with(empty_Array, empty_Array, PThreadedCode21038, 1, PSend21039);
    // ifTrue:ifFalse:. 
    Send PSend21033 = new_Send((Optr)PSend21032, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21034, (Optr)PBlock21037);
=======
    Send PSend20998 = new_Send((Optr)VAR_aStream_0_0, SMB_nextPut_, 1, (Optr)char_2179_Const);
    Array PThreadedCode20997 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2179, (Optr)&t_send1, (Optr)PSend20998, (Optr)&t_block_return);
    Block PBlock20996 = new_Block_with(empty_Array, empty_Array, PThreadedCode20997, 1, PSend20998);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend21004 = new_Send((Optr)VAR_aStream_0_0, SMB_space, 0);
    Array PThreadedCode21003 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend21004, (Optr)&t_block_return);
    Block PBlock21002 = new_Block_with(empty_Array, empty_Array, PThreadedCode21003, 1, PSend21004);
    // ifTrue:. 
    Send PSend21001 = new_Send((Optr)VAR_printLeadingSpaceToo_0_1, SMB_ifTrue_, 1, (Optr)PBlock21002);
    Array PThreadedCode21000 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend21001, (Optr)PBlock21002, (Optr)&t_block_return);
    Block PBlock20999 = new_Block_with(empty_Array, empty_Array, PThreadedCode21000, 1, PSend21001);
    // ifTrue:ifFalse:. 
    Send PSend20995 = new_Send((Optr)PSend20994, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20996, (Optr)PBlock20999);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1000 = new_SmallInt(1000);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    // <. 
<<<<<<< HEAD
    Send PSend21043 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_1000_Const);
    Character char_9429 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9429_Const = new_Constant((Optr)char_9429);
    // <<. 
    Send PSend21047 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode21046 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend21047, (Optr)&t_block_return);
    Block PBlock21045 = new_Block_with(empty_Array, empty_Array, PThreadedCode21046, 1, PSend21047);
    // ifTrue:. 
    Send PSend21044 = new_Send((Optr)PSend21043, SMB_ifTrue_, 1, (Optr)PBlock21045);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // <. 
    Send PSend21048 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_100_Const);
    // <<. 
    Send PSend21052 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode21051 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend21052, (Optr)&t_block_return);
    Block PBlock21050 = new_Block_with(empty_Array, empty_Array, PThreadedCode21051, 1, PSend21052);
    // ifTrue:. 
    Send PSend21049 = new_Send((Optr)PSend21048, SMB_ifTrue_, 1, (Optr)PBlock21050);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend21053 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21057 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode21056 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend21057, (Optr)&t_block_return);
    Block PBlock21055 = new_Block_with(empty_Array, empty_Array, PThreadedCode21056, 1, PSend21057);
    // ifTrue:. 
    Send PSend21054 = new_Send((Optr)PSend21053, SMB_ifTrue_, 1, (Optr)PBlock21055);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21058 = new_Send((Optr)VAR_year_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21059 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    // <. 
    Send PSend21060 = new_Send((Optr)VAR_month_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21064 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode21063 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend21064, (Optr)&t_block_return);
    Block PBlock21062 = new_Block_with(empty_Array, empty_Array, PThreadedCode21063, 1, PSend21064);
    // ifTrue:. 
    Send PSend21061 = new_Send((Optr)PSend21060, SMB_ifTrue_, 1, (Optr)PBlock21062);
    // printOn:. 
    Send PSend21065 = new_Send((Optr)VAR_month_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21066 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    // <. 
    Send PSend21067 = new_Send((Optr)VAR_day_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21071 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode21070 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend21071, (Optr)&t_block_return);
    Block PBlock21069 = new_Block_with(empty_Array, empty_Array, PThreadedCode21070, 1, PSend21071);
    // ifTrue:. 
    Send PSend21068 = new_Send((Optr)PSend21067, SMB_ifTrue_, 1, (Optr)PBlock21069);
    // printOn:. 
    Send PSend21072 = new_Send((Optr)VAR_day_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21024 = instantiate_Array_with(ThreadedCode_Class, 0, 101, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21025, (Optr)&t_send1, (Optr)PSend21031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_send0, (Optr)PSend21032, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21033, (Optr)PBlock21034, (Optr)PBlock21037, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_send1, (Optr)PSend21043, (Optr)&t_send_ifTrue_, (Optr)PSend21044, (Optr)PBlock21045, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend21048, (Optr)&t_send_ifTrue_, (Optr)PSend21049, (Optr)PBlock21050, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21053, (Optr)&t_send_ifTrue_, (Optr)PSend21054, (Optr)PBlock21055, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21058, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend21059, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21060, (Optr)&t_send_ifTrue_, (Optr)PSend21061, (Optr)PBlock21062, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21065, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend21066, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21067, (Optr)&t_send_ifTrue_, (Optr)PSend21068, (Optr)PBlock21069, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21072, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21021 = new_Method_with(PArray21022, PArray21023, empty_Array, PThreadedCode21024, 13, PSend21031, PSend21033, PSend21044, PSend21049, PSend21054, PSend21058, PSend21059, PSend21061, PSend21065, PSend21066, PSend21068, PSend21072, self);
    
    MethodClosure MC_SMB_printYMDOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod21021, Chronology_DateAndTime_Class);
=======
    Send PSend21005 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_1000_Const);
    Character char_9395 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9395_Const = new_Constant((Optr)char_9395);
    // <<. 
    Send PSend21009 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode21008 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend21009, (Optr)&t_block_return);
    Block PBlock21007 = new_Block_with(empty_Array, empty_Array, PThreadedCode21008, 1, PSend21009);
    // ifTrue:. 
    Send PSend21006 = new_Send((Optr)PSend21005, SMB_ifTrue_, 1, (Optr)PBlock21007);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // <. 
    Send PSend21010 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_100_Const);
    // <<. 
    Send PSend21014 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode21013 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend21014, (Optr)&t_block_return);
    Block PBlock21012 = new_Block_with(empty_Array, empty_Array, PThreadedCode21013, 1, PSend21014);
    // ifTrue:. 
    Send PSend21011 = new_Send((Optr)PSend21010, SMB_ifTrue_, 1, (Optr)PBlock21012);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend21015 = new_Send((Optr)VAR_year_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21019 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode21018 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend21019, (Optr)&t_block_return);
    Block PBlock21017 = new_Block_with(empty_Array, empty_Array, PThreadedCode21018, 1, PSend21019);
    // ifTrue:. 
    Send PSend21016 = new_Send((Optr)PSend21015, SMB_ifTrue_, 1, (Optr)PBlock21017);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21020 = new_Send((Optr)VAR_year_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21021 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2179_Const);
    // <. 
    Send PSend21022 = new_Send((Optr)VAR_month_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21026 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode21025 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend21026, (Optr)&t_block_return);
    Block PBlock21024 = new_Block_with(empty_Array, empty_Array, PThreadedCode21025, 1, PSend21026);
    // ifTrue:. 
    Send PSend21023 = new_Send((Optr)PSend21022, SMB_ifTrue_, 1, (Optr)PBlock21024);
    // printOn:. 
    Send PSend21027 = new_Send((Optr)VAR_month_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21028 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2179_Const);
    // <. 
    Send PSend21029 = new_Send((Optr)VAR_day_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21033 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode21032 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend21033, (Optr)&t_block_return);
    Block PBlock21031 = new_Block_with(empty_Array, empty_Array, PThreadedCode21032, 1, PSend21033);
    // ifTrue:. 
    Send PSend21030 = new_Send((Optr)PSend21029, SMB_ifTrue_, 1, (Optr)PBlock21031);
    // printOn:. 
    Send PSend21034 = new_Send((Optr)VAR_day_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20986 = instantiate_Array_with(ThreadedCode_Class, 0, 101, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20987, (Optr)&t_send1, (Optr)PSend20993, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_send0, (Optr)PSend20994, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20995, (Optr)PBlock20996, (Optr)PBlock20999, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_send1, (Optr)PSend21005, (Optr)&t_send_ifTrue_, (Optr)PSend21006, (Optr)PBlock21007, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend21010, (Optr)&t_send_ifTrue_, (Optr)PSend21011, (Optr)PBlock21012, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21015, (Optr)&t_send_ifTrue_, (Optr)PSend21016, (Optr)PBlock21017, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_year_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21020, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2179, (Optr)&t_send1, (Optr)PSend21021, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21022, (Optr)&t_send_ifTrue_, (Optr)PSend21023, (Optr)PBlock21024, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_month_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21027, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2179, (Optr)&t_send1, (Optr)PSend21028, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21029, (Optr)&t_send_ifTrue_, (Optr)PSend21030, (Optr)PBlock21031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_day_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21034, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20983 = new_Method_with(PArray20984, PArray20985, empty_Array, PThreadedCode20986, 13, PSend20993, PSend20995, PSend21006, PSend21011, PSend21016, PSend21020, PSend21021, PSend21023, PSend21027, PSend21028, PSend21030, PSend21034, self);
    
    MethodClosure MC_SMB_printYMDOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod20983, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_withLeadingSpace_, MC_SMB_printYMDOn_withLeadingSpace_);
}


static void init_SMB_dayOfWeekAbbreviation() {
    Symbol SMB_dayOfWeekAbbreviation = new_Symbol(L"dayOfWeekAbbreviation");
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    // dayOfWeekName. 
    Send PSend21037 = new_Send((Optr)self, SMB_dayOfWeekName, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
<<<<<<< HEAD
    // +. 
    Send PSend21075 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // rem:. 
    Send PSend21076 = new_Send((Optr)PSend21075, SMB_rem_, 1, (Optr)int_7_Const);
    // +. 
    Send PSend21077 = new_Send((Optr)PSend21076, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode21074 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21075, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend21076, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21077, (Optr)&t_method_return);
    Method PMethod21073 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21074, 1, PSend21077);
    
    MethodClosure MC_SMB_dayOfWeek = new_MethodClosure((Method)PMethod21073, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeek, MC_SMB_dayOfWeek);
=======
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend21038 = new_Send((Optr)PSend21037, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    Array PThreadedCode21036 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21037, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend21038, (Optr)&t_method_return);
    Method PMethod21035 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21036, 1, PSend21038);
    
    MethodClosure MC_SMB_dayOfWeekAbbreviation = new_MethodClosure((Method)PMethod21035, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekAbbreviation, MC_SMB_dayOfWeekAbbreviation);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
<<<<<<< HEAD
    Send PSend21080 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21081 = new_Send((Optr)PSend21080, SMB_seconds, 0);
    Array PThreadedCode21079 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend21080, (Optr)&t_send0, (Optr)PSend21081, (Optr)&t_method_return);
    Method PMethod21078 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21079, 1, PSend21081);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod21078, Chronology_DateAndTime_Class);
=======
    Send PSend21041 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21042 = new_Send((Optr)PSend21041, SMB_seconds, 0);
    Array PThreadedCode21040 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend21041, (Optr)&t_send0, (Optr)PSend21042, (Optr)&t_method_return);
    Method PMethod21039 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21040, 1, PSend21042);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod21039, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_setJdn_seconds_offset_() {
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    Variable VAR_julDays_0_0 = new_Variable_named(L"julDays", 0);
    Variable VAR_secs_0_1 = new_Variable_named(L"secs", 0);
    Variable VAR_anOffset_0_2 = new_Variable_named(L"anOffset", 0);
    Array PArray21044 = new_Array_with(3, (Optr)VAR_julDays_0_0, (Optr)VAR_secs_0_1, (Optr)VAR_anOffset_0_2);
    Assign PAssign21046 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)VAR_julDays_0_0);
    Assign PAssign21047 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)VAR_secs_0_1);
    Assign PAssign21048 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_anOffset_0_2);
    Array PThreadedCode21045 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign21046, (Optr)&t_push_variable, (Optr)VAR_julDays_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21047, (Optr)&t_push_variable, (Optr)VAR_secs_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21048, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21043 = new_Method_with(PArray21044, empty_Array, empty_Array, PThreadedCode21045, 4, PAssign21046, PAssign21047, PAssign21048, self);
    
    MethodClosure MC_SMB_setJdn_seconds_offset_ = new_MethodClosure((Method)PMethod21043, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_setJdn_seconds_offset_, MC_SMB_setJdn_seconds_offset_);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
<<<<<<< HEAD
    Send PSend21084 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21085 = new_Send((Optr)PSend21084, SMB_hours, 0);
    Array PThreadedCode21083 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend21084, (Optr)&t_send0, (Optr)PSend21085, (Optr)&t_method_return);
    Method PMethod21082 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21083, 1, PSend21085);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod21082, Chronology_DateAndTime_Class);
=======
    Send PSend21051 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21052 = new_Send((Optr)PSend21051, SMB_hours, 0);
    Array PThreadedCode21050 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend21051, (Optr)&t_send0, (Optr)PSend21052, (Optr)&t_method_return);
    Method PMethod21049 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21050, 1, PSend21052);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod21049, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
<<<<<<< HEAD
    Send PSend21088 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode21087 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21088, (Optr)&t_method_return);
    Method PMethod21086 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21087, 1, PSend21088);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod21086, Chronology_DateAndTime_Class);
=======
    Send PSend21055 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode21054 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21055, (Optr)&t_method_return);
    Method PMethod21053 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21054, 1, PSend21055);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod21053, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
<<<<<<< HEAD
    Send PSend21091 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21092 = new_Send((Optr)PSend21091, SMB_minutes, 0);
    Array PThreadedCode21090 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend21091, (Optr)&t_send0, (Optr)PSend21092, (Optr)&t_method_return);
    Method PMethod21089 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21090, 1, PSend21092);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod21089, Chronology_DateAndTime_Class);
=======
    Send PSend21058 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_DateAndTime_seconds);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21059 = new_Send((Optr)PSend21058, SMB_minutes, 0);
    Array PThreadedCode21057 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send1, (Optr)PSend21058, (Optr)&t_send0, (Optr)PSend21059, (Optr)&t_method_return);
    Method PMethod21056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21057, 1, PSend21059);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod21056, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_minute, MC_SMB_minute);
}


static void init_SMB_dayOfWeek() {
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21062 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // rem:. 
    Send PSend21063 = new_Send((Optr)PSend21062, SMB_rem_, 1, (Optr)int_7_Const);
    // +. 
    Send PSend21064 = new_Send((Optr)PSend21063, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode21061 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21062, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend21063, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21064, (Optr)&t_method_return);
    Method PMethod21060 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21061, 1, PSend21064);
    
    MethodClosure MC_SMB_dayOfWeek = new_MethodClosure((Method)PMethod21060, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeek, MC_SMB_dayOfWeek);
}


static void init_SMB_hasEqualTicks_() {
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
<<<<<<< HEAD
    Array PArray21094 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    // julianDayNumber. 
    Send PSend21096 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_julianDayNumber, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21097 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__equals_, 1, (Optr)PSend21096);
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    // secondsSinceMidnight. 
    Send PSend21100 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_secondsSinceMidnight, 0);
    // =. 
    Send PSend21101 = new_Send((Optr)slot_Chronology_DateAndTime_seconds, SMB__equals_, 1, (Optr)PSend21100);
    Array PThreadedCode21099 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend21100, (Optr)&t_send1, (Optr)PSend21101, (Optr)&t_block_return);
    Block PBlock21098 = new_Block_with(empty_Array, empty_Array, PThreadedCode21099, 1, PSend21101);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend21102 = new_Send((Optr)PSend21097, SMB_and_, 1, (Optr)PBlock21098);
    Array PThreadedCode21095 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend21096, (Optr)&t_send1, (Optr)PSend21097, (Optr)&t_push_closure, (Optr)PBlock21098, (Optr)&t_send1, (Optr)PSend21102, (Optr)&t_method_return);
    Method PMethod21093 = new_Method_with(PArray21094, empty_Array, empty_Array, PThreadedCode21095, 1, PSend21102);
    
    MethodClosure MC_SMB_hasEqualTicks_ = new_MethodClosure((Method)PMethod21093, Chronology_DateAndTime_Class);
=======
    Array PArray21066 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_julianDayNumber = new_Symbol(L"julianDayNumber");
    // julianDayNumber. 
    Send PSend21068 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_julianDayNumber, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21069 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__equals_, 1, (Optr)PSend21068);
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
    // secondsSinceMidnight. 
    Send PSend21072 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_secondsSinceMidnight, 0);
    // =. 
    Send PSend21073 = new_Send((Optr)slot_Chronology_DateAndTime_seconds, SMB__equals_, 1, (Optr)PSend21072);
    Array PThreadedCode21071 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend21072, (Optr)&t_send1, (Optr)PSend21073, (Optr)&t_block_return);
    Block PBlock21070 = new_Block_with(empty_Array, empty_Array, PThreadedCode21071, 1, PSend21073);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend21074 = new_Send((Optr)PSend21069, SMB_and_, 1, (Optr)PBlock21070);
    Array PThreadedCode21067 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend21068, (Optr)&t_send1, (Optr)PSend21069, (Optr)&t_push_closure, (Optr)PBlock21070, (Optr)&t_send1, (Optr)PSend21074, (Optr)&t_method_return);
    Method PMethod21065 = new_Method_with(PArray21066, empty_Array, empty_Array, PThreadedCode21067, 1, PSend21074);
    
    MethodClosure MC_SMB_hasEqualTicks_ = new_MethodClosure((Method)PMethod21065, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_hasEqualTicks_, MC_SMB_hasEqualTicks_);
}


static void init_SMB_month() {
    Symbol SMB_month = new_Symbol(L"month");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
<<<<<<< HEAD
    Array PArray21106 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode21107 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_method_return);
    Block PBlock21105 = new_Block_with(PArray21106, empty_Array, PThreadedCode21107, 1, VAR_m_1_1);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21108 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21105);
    Array PThreadedCode21104 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21105, (Optr)&t_send1, (Optr)PSend21108, (Optr)&t_method_return);
    Method PMethod21103 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21104, 1, PSend21108);
    
    MethodClosure MC_SMB_month = new_MethodClosure((Method)PMethod21103, Chronology_DateAndTime_Class);
=======
    Array PArray21078 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode21079 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_method_return);
    Block PBlock21077 = new_Block_with(PArray21078, empty_Array, PThreadedCode21079, 1, VAR_m_1_1);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21080 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21077);
    Array PThreadedCode21076 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21077, (Optr)&t_send1, (Optr)PSend21080, (Optr)&t_method_return);
    Method PMethod21075 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21076, 1, PSend21080);
    
    MethodClosure MC_SMB_month = new_MethodClosure((Method)PMethod21075, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_month, MC_SMB_month);
}


static void init_SMB_asLocal() {
    Symbol SMB_asLocal = new_Symbol(L"asLocal");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
<<<<<<< HEAD
    Send PSend21111 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend21112 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21113 = new_Send((Optr)PSend21112, SMB_localOffset, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21114 = new_Send((Optr)PSend21111, SMB__equals_, 1, (Optr)PSend21113);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode21117 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock21116 = new_Block_with(empty_Array, empty_Array, PThreadedCode21117, 1, self);
    // class. 
    Send PSend21120 = new_Send((Optr)self, SMB_class, 0);
    // localOffset. 
    Send PSend21121 = new_Send((Optr)PSend21120, SMB_localOffset, 0);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    // utcOffset:. 
    Send PSend21122 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)PSend21121);
    Array PThreadedCode21119 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21120, (Optr)&t_send0, (Optr)PSend21121, (Optr)&t_send1, (Optr)PSend21122, (Optr)&t_block_return);
    Block PBlock21118 = new_Block_with(empty_Array, empty_Array, PThreadedCode21119, 1, PSend21122);
    // ifTrue:ifFalse:. 
    Send PSend21115 = new_Send((Optr)PSend21114, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21116, (Optr)PBlock21118);
    Array PThreadedCode21110 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21111, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21112, (Optr)&t_send0, (Optr)PSend21113, (Optr)&t_send1, (Optr)PSend21114, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21115, (Optr)PBlock21116, (Optr)PBlock21118, (Optr)&t_method_return);
    Method PMethod21109 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21110, 1, PSend21115);
    
    MethodClosure MC_SMB_asLocal = new_MethodClosure((Method)PMethod21109, Chronology_DateAndTime_Class);
=======
    Send PSend21083 = new_Send((Optr)self, SMB_offset, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend21084 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21085 = new_Send((Optr)PSend21084, SMB_localOffset, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21086 = new_Send((Optr)PSend21083, SMB__equals_, 1, (Optr)PSend21085);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode21089 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock21088 = new_Block_with(empty_Array, empty_Array, PThreadedCode21089, 1, self);
    // class. 
    Send PSend21092 = new_Send((Optr)self, SMB_class, 0);
    // localOffset. 
    Send PSend21093 = new_Send((Optr)PSend21092, SMB_localOffset, 0);
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    // utcOffset:. 
    Send PSend21094 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)PSend21093);
    Array PThreadedCode21091 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21092, (Optr)&t_send0, (Optr)PSend21093, (Optr)&t_send1, (Optr)PSend21094, (Optr)&t_block_return);
    Block PBlock21090 = new_Block_with(empty_Array, empty_Array, PThreadedCode21091, 1, PSend21094);
    // ifTrue:ifFalse:. 
    Send PSend21087 = new_Send((Optr)PSend21086, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21088, (Optr)PBlock21090);
    Array PThreadedCode21082 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21083, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21084, (Optr)&t_send0, (Optr)PSend21085, (Optr)&t_send1, (Optr)PSend21086, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21087, (Optr)PBlock21088, (Optr)PBlock21090, (Optr)&t_method_return);
    Method PMethod21081 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21082, 1, PSend21087);
    
    MethodClosure MC_SMB_asLocal = new_MethodClosure((Method)PMethod21081, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_asLocal, MC_SMB_asLocal);
}


static void init_SMB_printOn_withLeadingSpace_() {
    Symbol SMB_printOn_withLeadingSpace_ = new_Symbol(L"printOn:withLeadingSpace:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_printLeadingSpaceToo_0_1 = new_Variable_named(L"printLeadingSpaceToo", 0);
<<<<<<< HEAD
    Array PArray21124 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray21125 = new_Array_with(3, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend21127 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Character char_21128 = new_Character(L'T');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_21128_Const = new_Constant((Optr)char_21128);
    // <<. 
    Send PSend21129 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_21128_Const);
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    // printHMSOn:. 
    Send PSend21130 = new_Send((Optr)self, SMB_printHMSOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend21131 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_positive, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_21135 = new_Character(L'+');
    Array PThreadedCode21134 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_21135, (Optr)&t_block_return);
    Constant char_21135_Const = new_Constant((Optr)char_21135);
    Block PBlock21133 = new_Block_with(empty_Array, empty_Array, PThreadedCode21134, 1, char_21135_Const);
    Character char_2182 = new_Character(L'-');
    Array PThreadedCode21137 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_block_return);
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    Block PBlock21136 = new_Block_with(empty_Array, empty_Array, PThreadedCode21137, 1, char_2182_Const);
    // ifTrue:ifFalse:. 
    Send PSend21132 = new_Send((Optr)PSend21131, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21133, (Optr)PBlock21136);
    // <<. 
    Send PSend21138 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21132);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21141 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend21140 = new_Send((Optr)PSend21141, SMB_abs, 0);
    Assign PAssign21139 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend21140);
=======
    Array PArray21096 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray21097 = new_Array_with(3, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend21099 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)VAR_printLeadingSpaceToo_0_1);
    Character char_21100 = new_Character(L'T');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_21100_Const = new_Constant((Optr)char_21100);
    // <<. 
    Send PSend21101 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_21100_Const);
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    // printHMSOn:. 
    Send PSend21102 = new_Send((Optr)self, SMB_printHMSOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend21103 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_positive, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Character char_21107 = new_Character(L'+');
    Array PThreadedCode21106 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_21107, (Optr)&t_block_return);
    Constant char_21107_Const = new_Constant((Optr)char_21107);
    Block PBlock21105 = new_Block_with(empty_Array, empty_Array, PThreadedCode21106, 1, char_21107_Const);
    Character char_2179 = new_Character(L'-');
    Array PThreadedCode21109 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)char_2179, (Optr)&t_block_return);
    Constant char_2179_Const = new_Constant((Optr)char_2179);
    Block PBlock21108 = new_Block_with(empty_Array, empty_Array, PThreadedCode21109, 1, char_2179_Const);
    // ifTrue:ifFalse:. 
    Send PSend21104 = new_Send((Optr)PSend21103, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21105, (Optr)PBlock21108);
    // <<. 
    Send PSend21110 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21104);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21113 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend21112 = new_Send((Optr)PSend21113, SMB_abs, 0);
    Assign PAssign21111 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend21112);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
<<<<<<< HEAD
    Send PSend21142 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9429 = new_Character(L'0');
    Constant char_9429_Const = new_Constant((Optr)char_9429);
    // <<. 
    Send PSend21146 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode21145 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend21146, (Optr)&t_block_return);
    Block PBlock21144 = new_Block_with(empty_Array, empty_Array, PThreadedCode21145, 1, PSend21146);
    // ifTrue:. 
    Send PSend21143 = new_Send((Optr)PSend21142, SMB_ifTrue_, 1, (Optr)PBlock21144);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21147 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend21148 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21151 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_minutes, 0);
    // abs. 
    Send PSend21150 = new_Send((Optr)PSend21151, SMB_abs, 0);
    Assign PAssign21149 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend21150);
    // <. 
    Send PSend21152 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21156 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode21155 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend21156, (Optr)&t_block_return);
    Block PBlock21154 = new_Block_with(empty_Array, empty_Array, PThreadedCode21155, 1, PSend21156);
    // ifTrue:. 
    Send PSend21153 = new_Send((Optr)PSend21152, SMB_ifTrue_, 1, (Optr)PBlock21154);
    // printOn:. 
    Send PSend21157 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21158 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
=======
    Send PSend21114 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9395 = new_Character(L'0');
    Constant char_9395_Const = new_Constant((Optr)char_9395);
    // <<. 
    Send PSend21118 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode21117 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend21118, (Optr)&t_block_return);
    Block PBlock21116 = new_Block_with(empty_Array, empty_Array, PThreadedCode21117, 1, PSend21118);
    // ifTrue:. 
    Send PSend21115 = new_Send((Optr)PSend21114, SMB_ifTrue_, 1, (Optr)PBlock21116);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21119 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend21120 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21123 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_minutes, 0);
    // abs. 
    Send PSend21122 = new_Send((Optr)PSend21123, SMB_abs, 0);
    Assign PAssign21121 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend21122);
    // <. 
    Send PSend21124 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21128 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode21127 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend21128, (Optr)&t_block_return);
    Block PBlock21126 = new_Block_with(empty_Array, empty_Array, PThreadedCode21127, 1, PSend21128);
    // ifTrue:. 
    Send PSend21125 = new_Send((Optr)PSend21124, SMB_ifTrue_, 1, (Optr)PBlock21126);
    // printOn:. 
    Send PSend21129 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21130 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
<<<<<<< HEAD
    Send PSend21159 = new_Send((Optr)PSend21158, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // seconds. 
    Send PSend21166 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    // abs. 
    Send PSend21165 = new_Send((Optr)PSend21166, SMB_abs, 0);
    Symbol SMB_truncated = new_Symbol(L"truncated");
    // truncated. 
    Send PSend21164 = new_Send((Optr)PSend21165, SMB_truncated, 0);
    Assign PAssign21163 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend21164);
    // <<. 
    Send PSend21167 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // printOn:. 
    Send PSend21168 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21162 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign21163, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21166, (Optr)&t_send0, (Optr)PSend21165, (Optr)&t_send0, (Optr)PSend21164, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21167, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21168, (Optr)&t_block_return);
    Block PBlock21161 = new_Block_with(empty_Array, empty_Array, PThreadedCode21162, 3, PAssign21163, PSend21167, PSend21168);
    // ifFalse:. 
    Send PSend21160 = new_Send((Optr)PSend21159, SMB_ifFalse_, 1, (Optr)PBlock21161);
    Array PThreadedCode21126 = instantiate_Array_with(ThreadedCode_Class, 0, 107, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send2, (Optr)PSend21127, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_21128, (Optr)&t_send1, (Optr)PSend21129, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21130, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21131, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21132, (Optr)PBlock21133, (Optr)PBlock21136, (Optr)&t_send1, (Optr)PSend21138, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21139, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21141, (Optr)&t_send0, (Optr)PSend21140, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21142, (Optr)&t_send_ifTrue_, (Optr)PSend21143, (Optr)PBlock21144, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21147, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21148, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21149, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21151, (Optr)&t_send0, (Optr)PSend21150, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21152, (Optr)&t_send_ifTrue_, (Optr)PSend21153, (Optr)PBlock21154, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21157, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21158, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend21159, (Optr)&t_send_ifFalse_, (Optr)PSend21160, (Optr)PBlock21161, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21123 = new_Method_with(PArray21124, PArray21125, empty_Array, PThreadedCode21126, 13, PSend21127, PSend21129, PSend21130, PSend21138, PAssign21139, PSend21143, PSend21147, PSend21148, PAssign21149, PSend21153, PSend21157, PSend21160, self);
    
    MethodClosure MC_SMB_printOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod21123, Chronology_DateAndTime_Class);
=======
    Send PSend21131 = new_Send((Optr)PSend21130, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // seconds. 
    Send PSend21138 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_seconds, 0);
    // abs. 
    Send PSend21137 = new_Send((Optr)PSend21138, SMB_abs, 0);
    Symbol SMB_truncated = new_Symbol(L"truncated");
    // truncated. 
    Send PSend21136 = new_Send((Optr)PSend21137, SMB_truncated, 0);
    Assign PAssign21135 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend21136);
    // <<. 
    Send PSend21139 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // printOn:. 
    Send PSend21140 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21134 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign21135, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21138, (Optr)&t_send0, (Optr)PSend21137, (Optr)&t_send0, (Optr)PSend21136, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21139, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21140, (Optr)&t_block_return);
    Block PBlock21133 = new_Block_with(empty_Array, empty_Array, PThreadedCode21134, 3, PAssign21135, PSend21139, PSend21140);
    // ifFalse:. 
    Send PSend21132 = new_Send((Optr)PSend21131, SMB_ifFalse_, 1, (Optr)PBlock21133);
    Array PThreadedCode21098 = instantiate_Array_with(ThreadedCode_Class, 0, 107, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_printLeadingSpaceToo_0_1, (Optr)&t_send2, (Optr)PSend21099, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_21100, (Optr)&t_send1, (Optr)PSend21101, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21102, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21103, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21104, (Optr)PBlock21105, (Optr)PBlock21108, (Optr)&t_send1, (Optr)PSend21110, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21111, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21113, (Optr)&t_send0, (Optr)PSend21112, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21114, (Optr)&t_send_ifTrue_, (Optr)PSend21115, (Optr)PBlock21116, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21119, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21120, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21121, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21123, (Optr)&t_send0, (Optr)PSend21122, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21124, (Optr)&t_send_ifTrue_, (Optr)PSend21125, (Optr)PBlock21126, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21129, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21130, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend21131, (Optr)&t_send_ifFalse_, (Optr)PSend21132, (Optr)PBlock21133, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21095 = new_Method_with(PArray21096, PArray21097, empty_Array, PThreadedCode21098, 13, PSend21099, PSend21101, PSend21102, PSend21110, PAssign21111, PSend21115, PSend21119, PSend21120, PAssign21121, PSend21125, PSend21129, PSend21132, self);
    
    MethodClosure MC_SMB_printOn_withLeadingSpace_ = new_MethodClosure((Method)PMethod21095, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_printOn_withLeadingSpace_, MC_SMB_printOn_withLeadingSpace_);
}


<<<<<<< HEAD
static void init_SMB_setJdn_seconds_offset_() {
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    Variable VAR_julDays_0_0 = new_Variable_named(L"julDays", 0);
    Variable VAR_secs_0_1 = new_Variable_named(L"secs", 0);
    Variable VAR_anOffset_0_2 = new_Variable_named(L"anOffset", 0);
    Array PArray21170 = new_Array_with(3, (Optr)VAR_julDays_0_0, (Optr)VAR_secs_0_1, (Optr)VAR_anOffset_0_2);
    Assign PAssign21172 = new_Assign((Optr)slot_Chronology_DateAndTime_jdn, (Optr)VAR_julDays_0_0);
    Assign PAssign21173 = new_Assign((Optr)slot_Chronology_DateAndTime_seconds, (Optr)VAR_secs_0_1);
    Assign PAssign21174 = new_Assign((Optr)slot_Chronology_DateAndTime_offset, (Optr)VAR_anOffset_0_2);
    Array PThreadedCode21171 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign21172, (Optr)&t_push_variable, (Optr)VAR_julDays_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21173, (Optr)&t_push_variable, (Optr)VAR_secs_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21174, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21169 = new_Method_with(PArray21170, empty_Array, empty_Array, PThreadedCode21171, 4, PAssign21172, PAssign21173, PAssign21174, self);
    
    MethodClosure MC_SMB_setJdn_seconds_offset_ = new_MethodClosure((Method)PMethod21169, Chronology_DateAndTime_Class);
    store_method(Chronology_DateAndTime_Class, SMB_setJdn_seconds_offset_, MC_SMB_setJdn_seconds_offset_);
}


=======
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_SMB_asUTC() {
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    Symbol SMB_isZero = new_Symbol(L"isZero");
    // isZero. 
<<<<<<< HEAD
    Send PSend21177 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_isZero, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode21180 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock21179 = new_Block_with(empty_Array, empty_Array, PThreadedCode21180, 1, self);
=======
    Send PSend21143 = new_Send((Optr)slot_Chronology_DateAndTime_offset, SMB_isZero, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode21146 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock21145 = new_Block_with(empty_Array, empty_Array, PThreadedCode21146, 1, self);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // utcOffset:. 
<<<<<<< HEAD
    Send PSend21183 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)int_0_Const);
    Array PThreadedCode21182 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend21183, (Optr)&t_block_return);
    Block PBlock21181 = new_Block_with(empty_Array, empty_Array, PThreadedCode21182, 1, PSend21183);
    // ifTrue:ifFalse:. 
    Send PSend21178 = new_Send((Optr)PSend21177, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21179, (Optr)PBlock21181);
    Array PThreadedCode21176 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21177, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21178, (Optr)PBlock21179, (Optr)PBlock21181, (Optr)&t_method_return);
    Method PMethod21175 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21176, 1, PSend21178);
    
    MethodClosure MC_SMB_asUTC = new_MethodClosure((Method)PMethod21175, Chronology_DateAndTime_Class);
=======
    Send PSend21149 = new_Send((Optr)self, SMB_utcOffset_, 1, (Optr)int_0_Const);
    Array PThreadedCode21148 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend21149, (Optr)&t_block_return);
    Block PBlock21147 = new_Block_with(empty_Array, empty_Array, PThreadedCode21148, 1, PSend21149);
    // ifTrue:ifFalse:. 
    Send PSend21144 = new_Send((Optr)PSend21143, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21145, (Optr)PBlock21147);
    Array PThreadedCode21142 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_offset, (Optr)&t_send0, (Optr)PSend21143, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21144, (Optr)PBlock21145, (Optr)PBlock21147, (Optr)&t_method_return);
    Method PMethod21141 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21142, 1, PSend21144);
    
    MethodClosure MC_SMB_asUTC = new_MethodClosure((Method)PMethod21141, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_asUTC, MC_SMB_asUTC);
}


static void init_SMB_dayOfWeekName() {
    Symbol SMB_dayOfWeekName = new_Symbol(L"dayOfWeekName");
    Symbol SMB_dayOfWeek = new_Symbol(L"dayOfWeek");
    // dayOfWeek. 
<<<<<<< HEAD
    Send PSend21186 = new_Send((Optr)self, SMB_dayOfWeek, 0);
    Symbol SMB_nameOfDay_ = new_Symbol(L"nameOfDay:");
    // nameOfDay:. 
    Send PSend21187 = new_Send((Optr)PWeek_classReference, SMB_nameOfDay_, 1, (Optr)PSend21186);
    Array PThreadedCode21185 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PWeek_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21186, (Optr)&t_send1, (Optr)PSend21187, (Optr)&t_method_return);
    Method PMethod21184 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21185, 1, PSend21187);
    
    MethodClosure MC_SMB_dayOfWeekName = new_MethodClosure((Method)PMethod21184, Chronology_DateAndTime_Class);
=======
    Send PSend21152 = new_Send((Optr)self, SMB_dayOfWeek, 0);
    Symbol SMB_nameOfDay_ = new_Symbol(L"nameOfDay:");
    // nameOfDay:. 
    Send PSend21153 = new_Send((Optr)PWeek_classReference, SMB_nameOfDay_, 1, (Optr)PSend21152);
    Array PThreadedCode21151 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PWeek_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21152, (Optr)&t_send1, (Optr)PSend21153, (Optr)&t_method_return);
    Method PMethod21150 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21151, 1, PSend21153);
    
    MethodClosure MC_SMB_dayOfWeekName = new_MethodClosure((Method)PMethod21150, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_dayOfWeekName, MC_SMB_dayOfWeekName);
}


static void init_SMB_utcOffset_() {
    Symbol SMB_utcOffset_ = new_Symbol(L"utcOffset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
<<<<<<< HEAD
    Array PArray21189 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR_equiv_0_1 = new_Variable_named(L"equiv", 0);
    Array PArray21190 = new_Array_with(1, (Optr)VAR_equiv_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend21195 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21196 = new_Send((Optr)self, SMB_offset, 0);
    // -. 
    Send PSend21194 = new_Send((Optr)PSend21195, SMB__minus_, 1, (Optr)PSend21196);
    // +. 
    Send PSend21193 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend21194);
    Assign PAssign21192 = new_Assign((Optr)VAR_equiv_0_1, (Optr)PSend21193);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21198 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21200 = new_Send((Optr)VAR_equiv_0_1, SMB_ticks, 0);
    // asDuration. 
    Send PSend21201 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21202 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21200, (Optr)PSend21201);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21203 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21199 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send0, (Optr)PSend21200, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21201, (Optr)&t_send2, (Optr)PSend21202, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21203, (Optr)&t_method_return);
    Block PBlock21197 = new_Block_with(PArray21198, empty_Array, PThreadedCode21199, 2, PSend21202, PSend21203);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21204 = new_Send((Optr)PBlock21197, SMB_value_, 1, (Optr)VAR_equiv_0_1);
    Array PThreadedCode21191 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign21192, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21195, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21196, (Optr)&t_send1, (Optr)PSend21194, (Optr)&t_send1, (Optr)PSend21193, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock21197, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send1, (Optr)PSend21204, (Optr)&t_method_return);
    Method PMethod21188 = new_Method_with(PArray21189, PArray21190, empty_Array, PThreadedCode21191, 2, PAssign21192, PSend21204);
    
    MethodClosure MC_SMB_utcOffset_ = new_MethodClosure((Method)PMethod21188, Chronology_DateAndTime_Class);
=======
    Array PArray21155 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR_equiv_0_1 = new_Variable_named(L"equiv", 0);
    Array PArray21156 = new_Array_with(1, (Optr)VAR_equiv_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend21161 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21162 = new_Send((Optr)self, SMB_offset, 0);
    // -. 
    Send PSend21160 = new_Send((Optr)PSend21161, SMB__minus_, 1, (Optr)PSend21162);
    // +. 
    Send PSend21159 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend21160);
    Assign PAssign21158 = new_Assign((Optr)VAR_equiv_0_1, (Optr)PSend21159);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21164 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21166 = new_Send((Optr)VAR_equiv_0_1, SMB_ticks, 0);
    // asDuration. 
    Send PSend21167 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21168 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21166, (Optr)PSend21167);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21169 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21165 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send0, (Optr)PSend21166, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21167, (Optr)&t_send2, (Optr)PSend21168, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21169, (Optr)&t_method_return);
    Block PBlock21163 = new_Block_with(PArray21164, empty_Array, PThreadedCode21165, 2, PSend21168, PSend21169);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21170 = new_Send((Optr)PBlock21163, SMB_value_, 1, (Optr)VAR_equiv_0_1);
    Array PThreadedCode21157 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign21158, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21161, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21162, (Optr)&t_send1, (Optr)PSend21160, (Optr)&t_send1, (Optr)PSend21159, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock21163, (Optr)&t_push_variable, (Optr)VAR_equiv_0_1, (Optr)&t_send1, (Optr)PSend21170, (Optr)&t_method_return);
    Method PMethod21154 = new_Method_with(PArray21155, PArray21156, empty_Array, PThreadedCode21157, 2, PAssign21158, PSend21170);
    
    MethodClosure MC_SMB_utcOffset_ = new_MethodClosure((Method)PMethod21154, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_utcOffset_, MC_SMB_utcOffset_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
<<<<<<< HEAD
    Array PArray21206 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Variable VAR_comparandAsDateAndTime_0_1 = new_Variable_named(L"comparandAsDateAndTime", 0);
    Array PArray21207 = new_Array_with(1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21210 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21212 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21216 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode21215 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend21216, (Optr)&t_block_return);
    Block PBlock21214 = new_Block_with(empty_Array, empty_Array, PThreadedCode21215, 1, PSend21216);
    // ifTrue:. 
    Send PSend21213 = new_Send((Optr)PSend21212, SMB_ifTrue_, 1, (Optr)PBlock21214);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend21218 = new_Send((Optr)VAR_comparand_0_0, SMB_asDateAndTime, 0);
    Assign PAssign21217 = new_Assign((Optr)VAR_comparandAsDateAndTime_0_1, (Optr)PSend21218);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21219 = new_Send((Optr)self, SMB_offset, 0);
    // offset. 
    Send PSend21220 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_offset, 0);
    // =. 
    Send PSend21221 = new_Send((Optr)PSend21219, SMB__equals_, 1, (Optr)PSend21220);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    // hasEqualTicks:. 
    Send PSend21225 = new_Send((Optr)self, SMB_hasEqualTicks_, 1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Array PThreadedCode21224 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send1, (Optr)PSend21225, (Optr)&t_block_return);
    Block PBlock21223 = new_Block_with(empty_Array, empty_Array, PThreadedCode21224, 1, PSend21225);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend21228 = new_Send((Optr)self, SMB_asUTC, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21229 = new_Send((Optr)PSend21228, SMB_ticks, 0);
    // asUTC. 
    Send PSend21230 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_asUTC, 0);
    // ticks. 
    Send PSend21231 = new_Send((Optr)PSend21230, SMB_ticks, 0);
    // =. 
    Send PSend21232 = new_Send((Optr)PSend21229, SMB__equals_, 1, (Optr)PSend21231);
    Array PThreadedCode21227 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21228, (Optr)&t_send0, (Optr)PSend21229, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend21230, (Optr)&t_send0, (Optr)PSend21231, (Optr)&t_send1, (Optr)PSend21232, (Optr)&t_block_return);
    Block PBlock21226 = new_Block_with(empty_Array, empty_Array, PThreadedCode21227, 1, PSend21232);
    // ifTrue:ifFalse:. 
    Send PSend21222 = new_Send((Optr)PSend21221, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21223, (Optr)PBlock21226);
    Array PThreadedCode21211 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend21212, (Optr)&t_send_ifTrue_, (Optr)PSend21213, (Optr)PBlock21214, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21217, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend21218, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21219, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend21220, (Optr)&t_send1, (Optr)PSend21221, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21222, (Optr)PBlock21223, (Optr)PBlock21226, (Optr)&t_method_return);
    Block PBlock21209 = new_Block_with(PArray21210, empty_Array, PThreadedCode21211, 3, PSend21213, PAssign21217, PSend21222);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21233 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21209);
    Array PThreadedCode21208 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21209, (Optr)&t_send1, (Optr)PSend21233, (Optr)&t_method_return);
    Method PMethod21205 = new_Method_with(PArray21206, PArray21207, empty_Array, PThreadedCode21208, 1, PSend21233);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod21205, Chronology_DateAndTime_Class);
=======
    Array PArray21172 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Variable VAR_comparandAsDateAndTime_0_1 = new_Variable_named(L"comparandAsDateAndTime", 0);
    Array PArray21173 = new_Array_with(1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21176 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21178 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21182 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode21181 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend21182, (Optr)&t_block_return);
    Block PBlock21180 = new_Block_with(empty_Array, empty_Array, PThreadedCode21181, 1, PSend21182);
    // ifTrue:. 
    Send PSend21179 = new_Send((Optr)PSend21178, SMB_ifTrue_, 1, (Optr)PBlock21180);
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    // asDateAndTime. 
    Send PSend21184 = new_Send((Optr)VAR_comparand_0_0, SMB_asDateAndTime, 0);
    Assign PAssign21183 = new_Assign((Optr)VAR_comparandAsDateAndTime_0_1, (Optr)PSend21184);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21185 = new_Send((Optr)self, SMB_offset, 0);
    // offset. 
    Send PSend21186 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_offset, 0);
    // =. 
    Send PSend21187 = new_Send((Optr)PSend21185, SMB__equals_, 1, (Optr)PSend21186);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_hasEqualTicks_ = new_Symbol(L"hasEqualTicks:");
    // hasEqualTicks:. 
    Send PSend21191 = new_Send((Optr)self, SMB_hasEqualTicks_, 1, (Optr)VAR_comparandAsDateAndTime_0_1);
    Array PThreadedCode21190 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send1, (Optr)PSend21191, (Optr)&t_block_return);
    Block PBlock21189 = new_Block_with(empty_Array, empty_Array, PThreadedCode21190, 1, PSend21191);
    Symbol SMB_asUTC = new_Symbol(L"asUTC");
    // asUTC. 
    Send PSend21194 = new_Send((Optr)self, SMB_asUTC, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21195 = new_Send((Optr)PSend21194, SMB_ticks, 0);
    // asUTC. 
    Send PSend21196 = new_Send((Optr)VAR_comparandAsDateAndTime_0_1, SMB_asUTC, 0);
    // ticks. 
    Send PSend21197 = new_Send((Optr)PSend21196, SMB_ticks, 0);
    // =. 
    Send PSend21198 = new_Send((Optr)PSend21195, SMB__equals_, 1, (Optr)PSend21197);
    Array PThreadedCode21193 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21194, (Optr)&t_send0, (Optr)PSend21195, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend21196, (Optr)&t_send0, (Optr)PSend21197, (Optr)&t_send1, (Optr)PSend21198, (Optr)&t_block_return);
    Block PBlock21192 = new_Block_with(empty_Array, empty_Array, PThreadedCode21193, 1, PSend21198);
    // ifTrue:ifFalse:. 
    Send PSend21188 = new_Send((Optr)PSend21187, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21189, (Optr)PBlock21192);
    Array PThreadedCode21177 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend21178, (Optr)&t_send_ifTrue_, (Optr)PSend21179, (Optr)PBlock21180, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21183, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend21184, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21185, (Optr)&t_push_variable, (Optr)VAR_comparandAsDateAndTime_0_1, (Optr)&t_send0, (Optr)PSend21186, (Optr)&t_send1, (Optr)PSend21187, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21188, (Optr)PBlock21189, (Optr)PBlock21192, (Optr)&t_method_return);
    Block PBlock21175 = new_Block_with(PArray21176, empty_Array, PThreadedCode21177, 3, PSend21179, PAssign21183, PSend21188);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21199 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21175);
    Array PThreadedCode21174 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21175, (Optr)&t_send1, (Optr)PSend21199, (Optr)&t_method_return);
    Method PMethod21171 = new_Method_with(PArray21172, PArray21173, empty_Array, PThreadedCode21174, 1, PSend21199);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod21171, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_secondsSinceMidnight() {
    Symbol SMB_secondsSinceMidnight = new_Symbol(L"secondsSinceMidnight");
<<<<<<< HEAD
    Array PThreadedCode21235 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_method_return);
    Method PMethod21234 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21235, 1, slot_Chronology_DateAndTime_seconds);
    
    MethodClosure MC_SMB_secondsSinceMidnight = new_MethodClosure((Method)PMethod21234, Chronology_DateAndTime_Class);
=======
    Array PThreadedCode21201 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_method_return);
    Method PMethod21200 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21201, 1, slot_Chronology_DateAndTime_seconds);
    
    MethodClosure MC_SMB_secondsSinceMidnight = new_MethodClosure((Method)PMethod21200, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_secondsSinceMidnight, MC_SMB_secondsSinceMidnight);
}


static void init_SMB_normalize_ticks_base_() {
    Symbol SMB_normalize_ticks_base_ = new_Symbol(L"normalize:ticks:base:");
    Variable VAR_i_0_0 = new_Variable_named(L"i", 0);
    Variable VAR_ticks_0_1 = new_Variable_named(L"ticks", 0);
    Variable VAR_base_0_2 = new_Variable_named(L"base", 0);
<<<<<<< HEAD
    Array PArray21237 = new_Array_with(3, (Optr)VAR_i_0_0, (Optr)VAR_ticks_0_1, (Optr)VAR_base_0_2);
    Variable VAR_tick_0_3 = new_Variable_named(L"tick", 0);
    Variable VAR_quo_0_4 = new_Variable_named(L"quo", 0);
    Variable VAR_rem_0_5 = new_Variable_named(L"rem", 0);
    Array PArray21238 = new_Array_with(3, (Optr)VAR_tick_0_3, (Optr)VAR_quo_0_4, (Optr)VAR_rem_0_5);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21241 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)VAR_i_0_0);
    Assign PAssign21240 = new_Assign((Optr)VAR_tick_0_3, (Optr)PSend21241);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend21243 = new_Send((Optr)VAR_tick_0_3, SMB_quo_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21242 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21243);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend21245 = new_Send((Optr)VAR_tick_0_3, SMB_rem_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21244 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21245);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend21246 = new_Send((Optr)VAR_rem_0_5, SMB_negative, 0);
=======
    Array PArray21203 = new_Array_with(3, (Optr)VAR_i_0_0, (Optr)VAR_ticks_0_1, (Optr)VAR_base_0_2);
    Variable VAR_tick_0_3 = new_Variable_named(L"tick", 0);
    Variable VAR_quo_0_4 = new_Variable_named(L"quo", 0);
    Variable VAR_rem_0_5 = new_Variable_named(L"rem", 0);
    Array PArray21204 = new_Array_with(3, (Optr)VAR_tick_0_3, (Optr)VAR_quo_0_4, (Optr)VAR_rem_0_5);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21207 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)VAR_i_0_0);
    Assign PAssign21206 = new_Assign((Optr)VAR_tick_0_3, (Optr)PSend21207);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend21209 = new_Send((Optr)VAR_tick_0_3, SMB_quo_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21208 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21209);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend21211 = new_Send((Optr)VAR_tick_0_3, SMB_rem_, 1, (Optr)VAR_base_0_2);
    Assign PAssign21210 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21211);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend21212 = new_Send((Optr)VAR_rem_0_5, SMB_negative, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
<<<<<<< HEAD
    Send PSend21251 = new_Send((Optr)VAR_quo_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign21250 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21251);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend21253 = new_Send((Optr)VAR_base_0_2, SMB__plus_, 1, (Optr)VAR_rem_0_5);
    Assign PAssign21252 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21253);
    Array PThreadedCode21249 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign21250, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21251, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21252, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send1, (Optr)PSend21253, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21248 = new_Block_with(empty_Array, empty_Array, PThreadedCode21249, 2, PAssign21250, PAssign21252);
    // ifTrue:. 
    Send PSend21247 = new_Send((Optr)PSend21246, SMB_ifTrue_, 1, (Optr)PBlock21248);
    // -. 
    Send PSend21254 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // -. 
    Send PSend21255 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend21256 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)PSend21255);
    // +. 
    Send PSend21257 = new_Send((Optr)PSend21256, SMB__plus_, 1, (Optr)VAR_quo_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend21258 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)PSend21254, (Optr)PSend21257);
    // at:put:. 
    Send PSend21259 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)VAR_i_0_0, (Optr)VAR_rem_0_5);
    Array PThreadedCode21239 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push1, (Optr)PAssign21240, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_send1, (Optr)PSend21241, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21242, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21243, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21244, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21245, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send0, (Optr)PSend21246, (Optr)&t_send_ifTrue_, (Optr)PSend21247, (Optr)PBlock21248, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21254, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21255, (Optr)&t_send1, (Optr)PSend21256, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_send1, (Optr)PSend21257, (Optr)&t_send2, (Optr)PSend21258, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send2, (Optr)PSend21259, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21236 = new_Method_with(PArray21237, PArray21238, empty_Array, PThreadedCode21239, 7, PAssign21240, PAssign21242, PAssign21244, PSend21247, PSend21258, PSend21259, self);
    
    MethodClosure MC_SMB_normalize_ticks_base_ = new_MethodClosure((Method)PMethod21236, Chronology_DateAndTime_Class);
=======
    Send PSend21217 = new_Send((Optr)VAR_quo_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign21216 = new_Assign((Optr)VAR_quo_0_4, (Optr)PSend21217);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend21219 = new_Send((Optr)VAR_base_0_2, SMB__plus_, 1, (Optr)VAR_rem_0_5);
    Assign PAssign21218 = new_Assign((Optr)VAR_rem_0_5, (Optr)PSend21219);
    Array PThreadedCode21215 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign21216, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21217, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21218, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send1, (Optr)PSend21219, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21214 = new_Block_with(empty_Array, empty_Array, PThreadedCode21215, 2, PAssign21216, PAssign21218);
    // ifTrue:. 
    Send PSend21213 = new_Send((Optr)PSend21212, SMB_ifTrue_, 1, (Optr)PBlock21214);
    // -. 
    Send PSend21220 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // -. 
    Send PSend21221 = new_Send((Optr)VAR_i_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend21222 = new_Send((Optr)VAR_ticks_0_1, SMB_at_, 1, (Optr)PSend21221);
    // +. 
    Send PSend21223 = new_Send((Optr)PSend21222, SMB__plus_, 1, (Optr)VAR_quo_0_4);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend21224 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)PSend21220, (Optr)PSend21223);
    // at:put:. 
    Send PSend21225 = new_Send((Optr)VAR_ticks_0_1, SMB_at_put_, 2, (Optr)VAR_i_0_0, (Optr)VAR_rem_0_5);
    Array PThreadedCode21205 = instantiate_Array_with(ThreadedCode_Class, 0, 71, (Optr)&t_push1, (Optr)PAssign21206, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_send1, (Optr)PSend21207, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21208, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21209, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21210, (Optr)&t_push_variable, (Optr)VAR_tick_0_3, (Optr)&t_push_variable, (Optr)VAR_base_0_2, (Optr)&t_send1, (Optr)PSend21211, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send0, (Optr)PSend21212, (Optr)&t_send_ifTrue_, (Optr)PSend21213, (Optr)PBlock21214, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21220, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21221, (Optr)&t_send1, (Optr)PSend21222, (Optr)&t_push_variable, (Optr)VAR_quo_0_4, (Optr)&t_send1, (Optr)PSend21223, (Optr)&t_send2, (Optr)PSend21224, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ticks_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_0, (Optr)&t_push_variable, (Optr)VAR_rem_0_5, (Optr)&t_send2, (Optr)PSend21225, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21202 = new_Method_with(PArray21203, PArray21204, empty_Array, PThreadedCode21205, 7, PAssign21206, PAssign21208, PAssign21210, PSend21213, PSend21224, PSend21225, self);
    
    MethodClosure MC_SMB_normalize_ticks_base_ = new_MethodClosure((Method)PMethod21202, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_normalize_ticks_base_, MC_SMB_normalize_ticks_base_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_anOffset_0_0 = new_Variable_named(L"anOffset", 0);
<<<<<<< HEAD
    Array PArray21261 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21264 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21266 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend21267 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21268 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21266, (Optr)PSend21267);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21269 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21265 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21266, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21267, (Optr)&t_send2, (Optr)PSend21268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21269, (Optr)&t_method_return);
    Block PBlock21263 = new_Block_with(PArray21264, empty_Array, PThreadedCode21265, 2, PSend21268, PSend21269);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend21270 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21271 = new_Send((Optr)PSend21270, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21272 = new_Send((Optr)PBlock21263, SMB_value_, 1, (Optr)PSend21271);
    Array PThreadedCode21262 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock21263, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21270, (Optr)&t_send0, (Optr)PSend21271, (Optr)&t_send1, (Optr)PSend21272, (Optr)&t_method_return);
    Method PMethod21260 = new_Method_with(PArray21261, empty_Array, empty_Array, PThreadedCode21262, 1, PSend21272);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21260, Chronology_DateAndTime_Class);
=======
    Array PArray21227 = new_Array_with(1, (Optr)VAR_anOffset_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21230 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21232 = new_Send((Optr)self, SMB_ticks, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend21233 = new_Send((Optr)VAR_anOffset_0_0, SMB_asDuration, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21234 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21232, (Optr)PSend21233);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21235 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21231 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21232, (Optr)&t_push_variable, (Optr)VAR_anOffset_0_0, (Optr)&t_send0, (Optr)PSend21233, (Optr)&t_send2, (Optr)PSend21234, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21235, (Optr)&t_method_return);
    Block PBlock21229 = new_Block_with(PArray21230, empty_Array, PThreadedCode21231, 2, PSend21234, PSend21235);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend21236 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21237 = new_Send((Optr)PSend21236, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21238 = new_Send((Optr)PBlock21229, SMB_value_, 1, (Optr)PSend21237);
    Array PThreadedCode21228 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock21229, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21236, (Optr)&t_send0, (Optr)PSend21237, (Optr)&t_send1, (Optr)PSend21238, (Optr)&t_method_return);
    Method PMethod21226 = new_Method_with(PArray21227, empty_Array, empty_Array, PThreadedCode21228, 1, PSend21238);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21226, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
<<<<<<< HEAD
    Array PThreadedCode21274 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21273 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21274, 1, self);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod21273, Chronology_DateAndTime_Class);
=======
    Array PThreadedCode21240 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21239 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21240, 1, self);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod21239, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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
<<<<<<< HEAD
    Send PSend21277 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21278 = new_Send((Optr)PSend21277, SMB_basicNew, 0);
    // class. 
    Send PSend21279 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21280 = new_Send((Optr)PSend21279, SMB_localOffset, 0);
=======
    Send PSend21243 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21244 = new_Send((Optr)PSend21243, SMB_basicNew, 0);
    // class. 
    Send PSend21245 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21246 = new_Send((Optr)PSend21245, SMB_localOffset, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_setJdn_seconds_offset_ = new_Symbol(L"setJdn:seconds:offset:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // setJdn:seconds:offset:. 
<<<<<<< HEAD
    Send PSend21281 = new_Send((Optr)PSend21278, SMB_setJdn_seconds_offset_, 3, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)int_0_Const, (Optr)PSend21280);
    Array PThreadedCode21276 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21277, (Optr)&t_send0, (Optr)PSend21278, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21279, (Optr)&t_send0, (Optr)PSend21280, (Optr)&t_send3, (Optr)PSend21281, (Optr)&t_method_return);
    Method PMethod21275 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21276, 1, PSend21281);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21275, Chronology_DateAndTime_Class);
=======
    Send PSend21247 = new_Send((Optr)PSend21244, SMB_setJdn_seconds_offset_, 3, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)int_0_Const, (Optr)PSend21246);
    Array PThreadedCode21242 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21243, (Optr)&t_send0, (Optr)PSend21244, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21245, (Optr)&t_send0, (Optr)PSend21246, (Optr)&t_send3, (Optr)PSend21247, (Optr)&t_method_return);
    Method PMethod21241 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21242, 1, PSend21247);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21241, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_midnight, MC_SMB_midnight);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray21283 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
=======
    Array PArray21249 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Variable VAR_l_0_1 = new_Variable_named(L"l", 0);
    Variable VAR_n_0_2 = new_Variable_named(L"n", 0);
    Variable VAR_i_0_3 = new_Variable_named(L"i", 0);
    Variable VAR_j_0_4 = new_Variable_named(L"j", 0);
    Variable VAR_dd_0_5 = new_Variable_named(L"dd", 0);
    Variable VAR_mm_0_6 = new_Variable_named(L"mm", 0);
    Variable VAR_yyyy_0_7 = new_Variable_named(L"yyyy", 0);
<<<<<<< HEAD
    Array PArray21284 = new_Array_with(7, (Optr)VAR_l_0_1, (Optr)VAR_n_0_2, (Optr)VAR_i_0_3, (Optr)VAR_j_0_4, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
=======
    Array PArray21250 = new_Array_with(7, (Optr)VAR_l_0_1, (Optr)VAR_n_0_2, (Optr)VAR_i_0_3, (Optr)VAR_j_0_4, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_68569 = new_SmallInt(68569);
    Constant int_68569_Const = new_Constant((Optr)int_68569);
    // +. 
<<<<<<< HEAD
    Send PSend21287 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_68569_Const);
    Assign PAssign21286 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21287);
=======
    Send PSend21253 = new_Send((Optr)slot_Chronology_DateAndTime_jdn, SMB__plus_, 1, (Optr)int_68569_Const);
    Assign PAssign21252 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21253);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // *. 
<<<<<<< HEAD
    Send PSend21290 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_4_Const);
=======
    Send PSend21256 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_4_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_146097 = new_SmallInt(146097);
    Constant int_146097_Const = new_Constant((Optr)int_146097);
    // //. 
<<<<<<< HEAD
    Send PSend21289 = new_Send((Optr)PSend21290, SMB__quotient_, 1, (Optr)int_146097_Const);
    Assign PAssign21288 = new_Assign((Optr)VAR_n_0_2, (Optr)PSend21289);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // *. 
    Send PSend21295 = new_Send((Optr)VAR_n_0_2, SMB__times_, 1, (Optr)int_146097_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // +. 
    Send PSend21294 = new_Send((Optr)PSend21295, SMB__plus_, 1, (Optr)int_3_Const);
    // //. 
    Send PSend21293 = new_Send((Optr)PSend21294, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21292 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21293);
    Assign PAssign21291 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21292);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21299 = new_Send((Optr)VAR_l_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_4000 = new_SmallInt(4000);
    Constant int_4000_Const = new_Constant((Optr)int_4000);
    // *. 
    Send PSend21298 = new_Send((Optr)PSend21299, SMB__times_, 1, (Optr)int_4000_Const);
    SmallInt int_1461001 = new_SmallInt(1461001);
    Constant int_1461001_Const = new_Constant((Optr)int_1461001);
    // //. 
    Send PSend21297 = new_Send((Optr)PSend21298, SMB__quotient_, 1, (Optr)int_1461001_Const);
    Assign PAssign21296 = new_Assign((Optr)VAR_i_0_3, (Optr)PSend21297);
    SmallInt int_1461 = new_SmallInt(1461);
    Constant int_1461_Const = new_Constant((Optr)int_1461);
    // *. 
    Send PSend21304 = new_Send((Optr)VAR_i_0_3, SMB__times_, 1, (Optr)int_1461_Const);
    // //. 
    Send PSend21303 = new_Send((Optr)PSend21304, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21302 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21303);
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // +. 
    Send PSend21301 = new_Send((Optr)PSend21302, SMB__plus_, 1, (Optr)int_31_Const);
    Assign PAssign21300 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21301);
    SmallInt int_80 = new_SmallInt(80);
    Constant int_80_Const = new_Constant((Optr)int_80);
    // *. 
    Send PSend21307 = new_Send((Optr)int_80_Const, SMB__times_, 1, (Optr)VAR_l_0_1);
    SmallInt int_2447 = new_SmallInt(2447);
    Constant int_2447_Const = new_Constant((Optr)int_2447);
    // //. 
    Send PSend21306 = new_Send((Optr)PSend21307, SMB__quotient_, 1, (Optr)int_2447_Const);
    Assign PAssign21305 = new_Assign((Optr)VAR_j_0_4, (Optr)PSend21306);
    // *. 
    Send PSend21311 = new_Send((Optr)VAR_j_0_4, SMB__times_, 1, (Optr)int_2447_Const);
    // //. 
    Send PSend21310 = new_Send((Optr)PSend21311, SMB__quotient_, 1, (Optr)int_80_Const);
    // -. 
    Send PSend21309 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21310);
    Assign PAssign21308 = new_Assign((Optr)VAR_dd_0_5, (Optr)PSend21309);
    SmallInt int_11 = new_SmallInt(11);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // //. 
    Send PSend21313 = new_Send((Optr)VAR_j_0_4, SMB__quotient_, 1, (Optr)int_11_Const);
    Assign PAssign21312 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21313);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend21316 = new_Send((Optr)VAR_j_0_4, SMB__plus_, 1, (Optr)int_2_Const);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // *. 
    Send PSend21317 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_12_Const);
    // -. 
    Send PSend21315 = new_Send((Optr)PSend21316, SMB__minus_, 1, (Optr)PSend21317);
    Assign PAssign21314 = new_Assign((Optr)VAR_mm_0_6, (Optr)PSend21315);
    SmallInt int_49 = new_SmallInt(49);
    Constant int_49_Const = new_Constant((Optr)int_49);
    // -. 
    Send PSend21322 = new_Send((Optr)VAR_n_0_2, SMB__minus_, 1, (Optr)int_49_Const);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // *. 
    Send PSend21321 = new_Send((Optr)PSend21322, SMB__times_, 1, (Optr)int_100_Const);
    // +. 
    Send PSend21320 = new_Send((Optr)PSend21321, SMB__plus_, 1, (Optr)VAR_i_0_3);
    // +. 
    Send PSend21319 = new_Send((Optr)PSend21320, SMB__plus_, 1, (Optr)VAR_l_0_1);
    Assign PAssign21318 = new_Assign((Optr)VAR_yyyy_0_7, (Optr)PSend21319);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend21323 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_value_, 3, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Array PThreadedCode21285 = instantiate_Array_with(ThreadedCode_Class, 0, 177, (Optr)&t_push1, (Optr)PAssign21286, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push1, (Optr)int_68569, (Optr)&t_send1, (Optr)PSend21287, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21288, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21290, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21289, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21291, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21295, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend21294, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21293, (Optr)&t_send1, (Optr)PSend21292, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21296, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21299, (Optr)&t_push1, (Optr)int_4000, (Optr)&t_send1, (Optr)PSend21298, (Optr)&t_push1, (Optr)int_1461001, (Optr)&t_send1, (Optr)PSend21297, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21300, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_push1, (Optr)int_1461, (Optr)&t_send1, (Optr)PSend21304, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21303, (Optr)&t_send1, (Optr)PSend21302, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend21301, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21305, (Optr)&t_push1, (Optr)int_80, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21307, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21306, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21308, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21311, (Optr)&t_push1, (Optr)int_80, (Optr)&t_send1, (Optr)PSend21310, (Optr)&t_send1, (Optr)PSend21309, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21312, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_11, (Optr)&t_send1, (Optr)PSend21313, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21314, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend21316, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21317, (Optr)&t_send1, (Optr)PSend21315, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21318, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_49, (Optr)&t_send1, (Optr)PSend21322, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend21321, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_send1, (Optr)PSend21320, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21319, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_dd_0_5, (Optr)&t_push_variable, (Optr)VAR_mm_0_6, (Optr)&t_push_variable, (Optr)VAR_yyyy_0_7, (Optr)&t_send3, (Optr)PSend21323, (Optr)&t_method_return);
    Method PMethod21282 = new_Method_with(PArray21283, PArray21284, empty_Array, PThreadedCode21285, 11, PAssign21286, PAssign21288, PAssign21291, PAssign21296, PAssign21300, PAssign21305, PAssign21308, PAssign21312, PAssign21314, PAssign21318, PSend21323);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod21282, Chronology_DateAndTime_Class);
=======
    Send PSend21255 = new_Send((Optr)PSend21256, SMB__quotient_, 1, (Optr)int_146097_Const);
    Assign PAssign21254 = new_Assign((Optr)VAR_n_0_2, (Optr)PSend21255);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // *. 
    Send PSend21261 = new_Send((Optr)VAR_n_0_2, SMB__times_, 1, (Optr)int_146097_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // +. 
    Send PSend21260 = new_Send((Optr)PSend21261, SMB__plus_, 1, (Optr)int_3_Const);
    // //. 
    Send PSend21259 = new_Send((Optr)PSend21260, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21258 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21259);
    Assign PAssign21257 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21258);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21265 = new_Send((Optr)VAR_l_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_4000 = new_SmallInt(4000);
    Constant int_4000_Const = new_Constant((Optr)int_4000);
    // *. 
    Send PSend21264 = new_Send((Optr)PSend21265, SMB__times_, 1, (Optr)int_4000_Const);
    SmallInt int_1461001 = new_SmallInt(1461001);
    Constant int_1461001_Const = new_Constant((Optr)int_1461001);
    // //. 
    Send PSend21263 = new_Send((Optr)PSend21264, SMB__quotient_, 1, (Optr)int_1461001_Const);
    Assign PAssign21262 = new_Assign((Optr)VAR_i_0_3, (Optr)PSend21263);
    SmallInt int_1461 = new_SmallInt(1461);
    Constant int_1461_Const = new_Constant((Optr)int_1461);
    // *. 
    Send PSend21270 = new_Send((Optr)VAR_i_0_3, SMB__times_, 1, (Optr)int_1461_Const);
    // //. 
    Send PSend21269 = new_Send((Optr)PSend21270, SMB__quotient_, 1, (Optr)int_4_Const);
    // -. 
    Send PSend21268 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21269);
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // +. 
    Send PSend21267 = new_Send((Optr)PSend21268, SMB__plus_, 1, (Optr)int_31_Const);
    Assign PAssign21266 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21267);
    SmallInt int_80 = new_SmallInt(80);
    Constant int_80_Const = new_Constant((Optr)int_80);
    // *. 
    Send PSend21273 = new_Send((Optr)int_80_Const, SMB__times_, 1, (Optr)VAR_l_0_1);
    SmallInt int_2447 = new_SmallInt(2447);
    Constant int_2447_Const = new_Constant((Optr)int_2447);
    // //. 
    Send PSend21272 = new_Send((Optr)PSend21273, SMB__quotient_, 1, (Optr)int_2447_Const);
    Assign PAssign21271 = new_Assign((Optr)VAR_j_0_4, (Optr)PSend21272);
    // *. 
    Send PSend21277 = new_Send((Optr)VAR_j_0_4, SMB__times_, 1, (Optr)int_2447_Const);
    // //. 
    Send PSend21276 = new_Send((Optr)PSend21277, SMB__quotient_, 1, (Optr)int_80_Const);
    // -. 
    Send PSend21275 = new_Send((Optr)VAR_l_0_1, SMB__minus_, 1, (Optr)PSend21276);
    Assign PAssign21274 = new_Assign((Optr)VAR_dd_0_5, (Optr)PSend21275);
    SmallInt int_11 = new_SmallInt(11);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // //. 
    Send PSend21279 = new_Send((Optr)VAR_j_0_4, SMB__quotient_, 1, (Optr)int_11_Const);
    Assign PAssign21278 = new_Assign((Optr)VAR_l_0_1, (Optr)PSend21279);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend21282 = new_Send((Optr)VAR_j_0_4, SMB__plus_, 1, (Optr)int_2_Const);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // *. 
    Send PSend21283 = new_Send((Optr)VAR_l_0_1, SMB__times_, 1, (Optr)int_12_Const);
    // -. 
    Send PSend21281 = new_Send((Optr)PSend21282, SMB__minus_, 1, (Optr)PSend21283);
    Assign PAssign21280 = new_Assign((Optr)VAR_mm_0_6, (Optr)PSend21281);
    SmallInt int_49 = new_SmallInt(49);
    Constant int_49_Const = new_Constant((Optr)int_49);
    // -. 
    Send PSend21288 = new_Send((Optr)VAR_n_0_2, SMB__minus_, 1, (Optr)int_49_Const);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // *. 
    Send PSend21287 = new_Send((Optr)PSend21288, SMB__times_, 1, (Optr)int_100_Const);
    // +. 
    Send PSend21286 = new_Send((Optr)PSend21287, SMB__plus_, 1, (Optr)VAR_i_0_3);
    // +. 
    Send PSend21285 = new_Send((Optr)PSend21286, SMB__plus_, 1, (Optr)VAR_l_0_1);
    Assign PAssign21284 = new_Assign((Optr)VAR_yyyy_0_7, (Optr)PSend21285);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend21289 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_value_, 3, (Optr)VAR_dd_0_5, (Optr)VAR_mm_0_6, (Optr)VAR_yyyy_0_7);
    Array PThreadedCode21251 = instantiate_Array_with(ThreadedCode_Class, 0, 177, (Optr)&t_push1, (Optr)PAssign21252, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push1, (Optr)int_68569, (Optr)&t_send1, (Optr)PSend21253, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21254, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21256, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21257, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_146097, (Optr)&t_send1, (Optr)PSend21261, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend21260, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21259, (Optr)&t_send1, (Optr)PSend21258, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21262, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21265, (Optr)&t_push1, (Optr)int_4000, (Optr)&t_send1, (Optr)PSend21264, (Optr)&t_push1, (Optr)int_1461001, (Optr)&t_send1, (Optr)PSend21263, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21266, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_push1, (Optr)int_1461, (Optr)&t_send1, (Optr)PSend21270, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend21269, (Optr)&t_send1, (Optr)PSend21268, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend21267, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21271, (Optr)&t_push1, (Optr)int_80, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21273, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21272, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21274, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_2447, (Optr)&t_send1, (Optr)PSend21277, (Optr)&t_push1, (Optr)int_80, (Optr)&t_send1, (Optr)PSend21276, (Optr)&t_send1, (Optr)PSend21275, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21278, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push1, (Optr)int_11, (Optr)&t_send1, (Optr)PSend21279, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21280, (Optr)&t_push_variable, (Optr)VAR_j_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend21282, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21283, (Optr)&t_send1, (Optr)PSend21281, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21284, (Optr)&t_push_variable, (Optr)VAR_n_0_2, (Optr)&t_push1, (Optr)int_49, (Optr)&t_send1, (Optr)PSend21288, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend21287, (Optr)&t_push_variable, (Optr)VAR_i_0_3, (Optr)&t_send1, (Optr)PSend21286, (Optr)&t_push_variable, (Optr)VAR_l_0_1, (Optr)&t_send1, (Optr)PSend21285, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_dd_0_5, (Optr)&t_push_variable, (Optr)VAR_mm_0_6, (Optr)&t_push_variable, (Optr)VAR_yyyy_0_7, (Optr)&t_send3, (Optr)PSend21289, (Optr)&t_method_return);
    Method PMethod21248 = new_Method_with(PArray21249, PArray21250, empty_Array, PThreadedCode21251, 11, PAssign21252, PAssign21254, PAssign21257, PAssign21262, PAssign21266, PAssign21271, PAssign21274, PAssign21278, PAssign21280, PAssign21284, PSend21289);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod21248, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printYMDOn_() {
    Symbol SMB_printYMDOn_ = new_Symbol(L"printYMDOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray21325 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend21327 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode21326 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend21327, (Optr)&t_method_return);
    Method PMethod21324 = new_Method_with(PArray21325, empty_Array, empty_Array, PThreadedCode21326, 1, PSend21327);
    
    MethodClosure MC_SMB_printYMDOn_ = new_MethodClosure((Method)PMethod21324, Chronology_DateAndTime_Class);
=======
    Array PArray21291 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printYMDOn_withLeadingSpace_ = new_Symbol(L"printYMDOn:withLeadingSpace:");
    // printYMDOn:withLeadingSpace:. 
    Send PSend21293 = new_Send((Optr)self, SMB_printYMDOn_withLeadingSpace_, 2, (Optr)VAR_aStream_0_0, (Optr)false_Const);
    Array PThreadedCode21292 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend21293, (Optr)&t_method_return);
    Method PMethod21290 = new_Method_with(PArray21291, empty_Array, empty_Array, PThreadedCode21292, 1, PSend21293);
    
    MethodClosure MC_SMB_printYMDOn_ = new_MethodClosure((Method)PMethod21290, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_printYMDOn_, MC_SMB_printYMDOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
<<<<<<< HEAD
    Send PSend21330 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode21329 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send2, (Optr)PSend21330, (Optr)&t_method_return);
    Method PMethod21328 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21329, 1, PSend21330);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod21328, Chronology_DateAndTime_Class);
=======
    Send PSend21296 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)slot_Chronology_DateAndTime_seconds);
    Array PThreadedCode21295 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_jdn, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_seconds, (Optr)&t_send2, (Optr)PSend21296, (Optr)&t_method_return);
    Method PMethod21294 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21295, 1, PSend21296);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod21294, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_year() {
    Symbol SMB_year = new_Symbol(L"year");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
<<<<<<< HEAD
    Array PArray21334 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode21335 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_method_return);
    Block PBlock21333 = new_Block_with(PArray21334, empty_Array, PThreadedCode21335, 1, VAR_y_1_2);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21336 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21333);
    Array PThreadedCode21332 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21333, (Optr)&t_send1, (Optr)PSend21336, (Optr)&t_method_return);
    Method PMethod21331 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21332, 1, PSend21336);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod21331, Chronology_DateAndTime_Class);
=======
    Array PArray21300 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode21301 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_method_return);
    Block PBlock21299 = new_Block_with(PArray21300, empty_Array, PThreadedCode21301, 1, VAR_y_1_2);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    // dayMonthYearDo:. 
    Send PSend21302 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock21299);
    Array PThreadedCode21298 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21299, (Optr)&t_send1, (Optr)PSend21302, (Optr)&t_method_return);
    Method PMethod21297 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21298, 1, PSend21302);
    
    MethodClosure MC_SMB_year = new_MethodClosure((Method)PMethod21297, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_year, MC_SMB_year);
}


static void init_SMB_printHMSOn_() {
    Symbol SMB_printHMSOn_ = new_Symbol(L"printHMSOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray21338 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_h_0_1 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_2 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_3 = new_Variable_named(L"s", 0);
    Array PArray21339 = new_Array_with(3, (Optr)VAR_h_0_1, (Optr)VAR_m_0_2, (Optr)VAR_s_0_3);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21343 = new_Send((Optr)self, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend21342 = new_Send((Optr)PSend21343, SMB_abs, 0);
    Assign PAssign21341 = new_Assign((Optr)VAR_h_0_1, (Optr)PSend21342);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21346 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend21345 = new_Send((Optr)PSend21346, SMB_abs, 0);
    Assign PAssign21344 = new_Assign((Optr)VAR_m_0_2, (Optr)PSend21345);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21349 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend21348 = new_Send((Optr)PSend21349, SMB_abs, 0);
    Assign PAssign21347 = new_Assign((Optr)VAR_s_0_3, (Optr)PSend21348);
=======
    Array PArray21304 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_h_0_1 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_2 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_3 = new_Variable_named(L"s", 0);
    Array PArray21305 = new_Array_with(3, (Optr)VAR_h_0_1, (Optr)VAR_m_0_2, (Optr)VAR_s_0_3);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21309 = new_Send((Optr)self, SMB_hours, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend21308 = new_Send((Optr)PSend21309, SMB_abs, 0);
    Assign PAssign21307 = new_Assign((Optr)VAR_h_0_1, (Optr)PSend21308);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend21312 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend21311 = new_Send((Optr)PSend21312, SMB_abs, 0);
    Assign PAssign21310 = new_Assign((Optr)VAR_m_0_2, (Optr)PSend21311);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend21315 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend21314 = new_Send((Optr)PSend21315, SMB_abs, 0);
    Assign PAssign21313 = new_Assign((Optr)VAR_s_0_3, (Optr)PSend21314);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
<<<<<<< HEAD
    Send PSend21350 = new_Send((Optr)VAR_h_0_1, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9429 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9429_Const = new_Constant((Optr)char_9429);
    // <<. 
    Send PSend21354 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode21353 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend21354, (Optr)&t_block_return);
    Block PBlock21352 = new_Block_with(empty_Array, empty_Array, PThreadedCode21353, 1, PSend21354);
    // ifTrue:. 
    Send PSend21351 = new_Send((Optr)PSend21350, SMB_ifTrue_, 1, (Optr)PBlock21352);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21355 = new_Send((Optr)VAR_h_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend21356 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend21357 = new_Send((Optr)VAR_m_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21361 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode21360 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend21361, (Optr)&t_block_return);
    Block PBlock21359 = new_Block_with(empty_Array, empty_Array, PThreadedCode21360, 1, PSend21361);
    // ifTrue:. 
    Send PSend21358 = new_Send((Optr)PSend21357, SMB_ifTrue_, 1, (Optr)PBlock21359);
    // printOn:. 
    Send PSend21362 = new_Send((Optr)VAR_m_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21363 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend21364 = new_Send((Optr)VAR_s_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21368 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode21367 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend21368, (Optr)&t_block_return);
    Block PBlock21366 = new_Block_with(empty_Array, empty_Array, PThreadedCode21367, 1, PSend21368);
    // ifTrue:. 
    Send PSend21365 = new_Send((Optr)PSend21364, SMB_ifTrue_, 1, (Optr)PBlock21366);
    // printOn:. 
    Send PSend21369 = new_Send((Optr)VAR_s_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21340 = instantiate_Array_with(ThreadedCode_Class, 0, 93, (Optr)&t_push1, (Optr)PAssign21341, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21343, (Optr)&t_send0, (Optr)PSend21342, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21344, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21346, (Optr)&t_send0, (Optr)PSend21345, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21347, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21349, (Optr)&t_send0, (Optr)PSend21348, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21350, (Optr)&t_send_ifTrue_, (Optr)PSend21351, (Optr)PBlock21352, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21355, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21356, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21357, (Optr)&t_send_ifTrue_, (Optr)PSend21358, (Optr)PBlock21359, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21362, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21363, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21364, (Optr)&t_send_ifTrue_, (Optr)PSend21365, (Optr)PBlock21366, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21369, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21337 = new_Method_with(PArray21338, PArray21339, empty_Array, PThreadedCode21340, 12, PAssign21341, PAssign21344, PAssign21347, PSend21351, PSend21355, PSend21356, PSend21358, PSend21362, PSend21363, PSend21365, PSend21369, self);
    
    MethodClosure MC_SMB_printHMSOn_ = new_MethodClosure((Method)PMethod21337, Chronology_DateAndTime_Class);
=======
    Send PSend21316 = new_Send((Optr)VAR_h_0_1, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9395 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9395_Const = new_Constant((Optr)char_9395);
    // <<. 
    Send PSend21320 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode21319 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend21320, (Optr)&t_block_return);
    Block PBlock21318 = new_Block_with(empty_Array, empty_Array, PThreadedCode21319, 1, PSend21320);
    // ifTrue:. 
    Send PSend21317 = new_Send((Optr)PSend21316, SMB_ifTrue_, 1, (Optr)PBlock21318);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21321 = new_Send((Optr)VAR_h_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend21322 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend21323 = new_Send((Optr)VAR_m_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21327 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode21326 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend21327, (Optr)&t_block_return);
    Block PBlock21325 = new_Block_with(empty_Array, empty_Array, PThreadedCode21326, 1, PSend21327);
    // ifTrue:. 
    Send PSend21324 = new_Send((Optr)PSend21323, SMB_ifTrue_, 1, (Optr)PBlock21325);
    // printOn:. 
    Send PSend21328 = new_Send((Optr)VAR_m_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend21329 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend21330 = new_Send((Optr)VAR_s_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend21334 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode21333 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend21334, (Optr)&t_block_return);
    Block PBlock21332 = new_Block_with(empty_Array, empty_Array, PThreadedCode21333, 1, PSend21334);
    // ifTrue:. 
    Send PSend21331 = new_Send((Optr)PSend21330, SMB_ifTrue_, 1, (Optr)PBlock21332);
    // printOn:. 
    Send PSend21335 = new_Send((Optr)VAR_s_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21306 = instantiate_Array_with(ThreadedCode_Class, 0, 93, (Optr)&t_push1, (Optr)PAssign21307, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21309, (Optr)&t_send0, (Optr)PSend21308, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21310, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21312, (Optr)&t_send0, (Optr)PSend21311, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21313, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21315, (Optr)&t_send0, (Optr)PSend21314, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21316, (Optr)&t_send_ifTrue_, (Optr)PSend21317, (Optr)PBlock21318, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21322, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21323, (Optr)&t_send_ifTrue_, (Optr)PSend21324, (Optr)PBlock21325, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21328, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend21329, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend21330, (Optr)&t_send_ifTrue_, (Optr)PSend21331, (Optr)PBlock21332, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21335, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21303 = new_Method_with(PArray21304, PArray21305, empty_Array, PThreadedCode21306, 12, PAssign21307, PAssign21310, PAssign21313, PSend21317, PSend21321, PSend21322, PSend21324, PSend21328, PSend21329, PSend21331, PSend21335, self);
    
    MethodClosure MC_SMB_printHMSOn_ = new_MethodClosure((Method)PMethod21303, Chronology_DateAndTime_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_DateAndTime_Class, SMB_printHMSOn_, MC_SMB_printHMSOn_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
<<<<<<< HEAD
    Array PArray21371 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21374 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend21376 = new_Send((Optr)VAR_aJulianDayNumber_0_0, SMB_days, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21377 = new_Send((Optr)PSend21376, SMB_ticks, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21378 = new_Send((Optr)self, SMB_localOffset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21379 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21377, (Optr)PSend21378);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21380 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21375 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send0, (Optr)PSend21376, (Optr)&t_send0, (Optr)PSend21377, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21378, (Optr)&t_send2, (Optr)PSend21379, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21380, (Optr)&t_method_return);
    Block PBlock21373 = new_Block_with(PArray21374, empty_Array, PThreadedCode21375, 2, PSend21379, PSend21380);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21381 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21382 = new_Send((Optr)PBlock21373, SMB_value_, 1, (Optr)PSend21381);
    Array PThreadedCode21372 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21373, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21381, (Optr)&t_send1, (Optr)PSend21382, (Optr)&t_method_return);
    Method PMethod21370 = new_Method_with(PArray21371, empty_Array, empty_Array, PThreadedCode21372, 1, PSend21382);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod21370, HEADER(Chronology_DateAndTime_Class));
=======
    Array PArray21337 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21340 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend21342 = new_Send((Optr)VAR_aJulianDayNumber_0_0, SMB_days, 0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend21343 = new_Send((Optr)PSend21342, SMB_ticks, 0);
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    // localOffset. 
    Send PSend21344 = new_Send((Optr)self, SMB_localOffset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21345 = new_Send((Optr)VAR__receiver__1_0, SMB_ticks_offset_, 2, (Optr)PSend21343, (Optr)PSend21344);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21346 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21341 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send0, (Optr)PSend21342, (Optr)&t_send0, (Optr)PSend21343, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21344, (Optr)&t_send2, (Optr)PSend21345, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21346, (Optr)&t_method_return);
    Block PBlock21339 = new_Block_with(PArray21340, empty_Array, PThreadedCode21341, 2, PSend21345, PSend21346);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend21347 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21348 = new_Send((Optr)PBlock21339, SMB_value_, 1, (Optr)PSend21347);
    Array PThreadedCode21338 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21339, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21347, (Optr)&t_send1, (Optr)PSend21348, (Optr)&t_method_return);
    Method PMethod21336 = new_Method_with(PArray21337, empty_Array, empty_Array, PThreadedCode21338, 1, PSend21348);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod21336, HEADER(Chronology_DateAndTime_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_localTimeZone() {
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    Symbol SMB_default = new_Symbol(L"default");
    // default. 
<<<<<<< HEAD
    Send PSend21388 = new_Send((Optr)PTimeZone_classReference, SMB_default, 0);
    Assign PAssign21387 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)PSend21388);
    Array PThreadedCode21386 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign21387, (Optr)&t_push_class_reference, (Optr)PTimeZone_classReference, (Optr)&t_send0, (Optr)PSend21388, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21385 = new_Block_with(empty_Array, empty_Array, PThreadedCode21386, 1, PAssign21387);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21389 = new_Send((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, SMB_ifNil_, 1, (Optr)PBlock21385);
    Array PThreadedCode21384 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)&t_push_closure, (Optr)PBlock21385, (Optr)&t_send1, (Optr)PSend21389, (Optr)&t_method_return);
    Method PMethod21383 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21384, 1, PSend21389);
    
    MethodClosure MC_SMB_localTimeZone = new_MethodClosure((Method)PMethod21383, HEADER(Chronology_DateAndTime_Class));
=======
    Send PSend21354 = new_Send((Optr)PTimeZone_classReference, SMB_default, 0);
    Assign PAssign21353 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)PSend21354);
    Array PThreadedCode21352 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign21353, (Optr)&t_push_class_reference, (Optr)PTimeZone_classReference, (Optr)&t_send0, (Optr)PSend21354, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21351 = new_Block_with(empty_Array, empty_Array, PThreadedCode21352, 1, PAssign21353);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21355 = new_Send((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, SMB_ifNil_, 1, (Optr)PBlock21351);
    Array PThreadedCode21350 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)&t_push_closure, (Optr)PBlock21351, (Optr)&t_send1, (Optr)PSend21355, (Optr)&t_method_return);
    Method PMethod21349 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21350, 1, PSend21355);
    
    MethodClosure MC_SMB_localTimeZone = new_MethodClosure((Method)PMethod21349, HEADER(Chronology_DateAndTime_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone, MC_SMB_localTimeZone);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
<<<<<<< HEAD
    Send PSend21392 = new_Send((Optr)self, SMB_midnight, 0);
    Array PThreadedCode21391 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21392, (Optr)&t_method_return);
    Method PMethod21390 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21391, 1, PSend21392);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod21390, HEADER(Chronology_DateAndTime_Class));
=======
    Send PSend21358 = new_Send((Optr)self, SMB_midnight, 0);
    Array PThreadedCode21357 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21358, (Optr)&t_method_return);
    Method PMethod21356 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21357, 1, PSend21358);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod21356, HEADER(Chronology_DateAndTime_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_epoch() {
    Symbol SMB_epoch = new_Symbol(L"epoch");
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
<<<<<<< HEAD
    Send PSend21395 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend21396 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend21395);
    Array PThreadedCode21394 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21395, (Optr)&t_send1, (Optr)PSend21396, (Optr)&t_method_return);
    Method PMethod21393 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21394, 1, PSend21396);
    
    MethodClosure MC_SMB_epoch = new_MethodClosure((Method)PMethod21393, HEADER(Chronology_DateAndTime_Class));
=======
    Send PSend21361 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend21362 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend21361);
    Array PThreadedCode21360 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21361, (Optr)&t_send1, (Optr)PSend21362, (Optr)&t_method_return);
    Method PMethod21359 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21360, 1, PSend21362);
    
    MethodClosure MC_SMB_epoch = new_MethodClosure((Method)PMethod21359, HEADER(Chronology_DateAndTime_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_epoch, MC_SMB_epoch);
}


static void init_class_SMB_localTimeZone_() {
    Symbol SMB_localTimeZone_ = new_Symbol(L"localTimeZone:");
    Variable VAR_aTimeZone_0_0 = new_Variable_named(L"aTimeZone", 0);
<<<<<<< HEAD
    Array PArray21398 = new_Array_with(1, (Optr)VAR_aTimeZone_0_0);
    Assign PAssign21400 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)VAR_aTimeZone_0_0);
    Array PThreadedCode21399 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21400, (Optr)&t_push_variable, (Optr)VAR_aTimeZone_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21397 = new_Method_with(PArray21398, empty_Array, empty_Array, PThreadedCode21399, 2, PAssign21400, self);
    
    MethodClosure MC_SMB_localTimeZone_ = new_MethodClosure((Method)PMethod21397, HEADER(Chronology_DateAndTime_Class));
=======
    Array PArray21364 = new_Array_with(1, (Optr)VAR_aTimeZone_0_0);
    Assign PAssign21366 = new_Assign((Optr)slot_Chronology_DateAndTime_Class_class_localTimeZone, (Optr)VAR_aTimeZone_0_0);
    Array PThreadedCode21365 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21366, (Optr)&t_push_variable, (Optr)VAR_aTimeZone_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21363 = new_Method_with(PArray21364, empty_Array, empty_Array, PThreadedCode21365, 2, PAssign21366, self);
    
    MethodClosure MC_SMB_localTimeZone_ = new_MethodClosure((Method)PMethod21363, HEADER(Chronology_DateAndTime_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localTimeZone_, MC_SMB_localTimeZone_);
}


static void init_class_SMB_localOffset() {
    Symbol SMB_localOffset = new_Symbol(L"localOffset");
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
<<<<<<< HEAD
    Send PSend21403 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21404 = new_Send((Optr)PSend21403, SMB_offset, 0);
    Array PThreadedCode21402 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21403, (Optr)&t_send0, (Optr)PSend21404, (Optr)&t_method_return);
    Method PMethod21401 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21402, 1, PSend21404);
    
    MethodClosure MC_SMB_localOffset = new_MethodClosure((Method)PMethod21401, HEADER(Chronology_DateAndTime_Class));
=======
    Send PSend21369 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21370 = new_Send((Optr)PSend21369, SMB_offset, 0);
    Array PThreadedCode21368 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21369, (Optr)&t_send0, (Optr)PSend21370, (Optr)&t_method_return);
    Method PMethod21367 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21368, 1, PSend21370);
    
    MethodClosure MC_SMB_localOffset = new_MethodClosure((Method)PMethod21367, HEADER(Chronology_DateAndTime_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_localOffset, MC_SMB_localOffset);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
<<<<<<< HEAD
    Send PSend21407 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21408 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21409 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21410 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend21408, (Optr)PSend21409);
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21411 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21412 = new_Send((Optr)PSend21411, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21413 = new_Send((Optr)PSend21407, SMB_ticks_offset_, 2, (Optr)PSend21410, (Optr)PSend21412);
    Array PThreadedCode21406 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21407, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21408, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21409, (Optr)&t_send2, (Optr)PSend21410, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21411, (Optr)&t_send0, (Optr)PSend21412, (Optr)&t_send2, (Optr)PSend21413, (Optr)&t_method_return);
    Method PMethod21405 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21406, 1, PSend21413);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod21405, HEADER(Chronology_DateAndTime_Class));
=======
    Send PSend21373 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21374 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend21375 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21376 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend21374, (Optr)PSend21375);
    Symbol SMB_localTimeZone = new_Symbol(L"localTimeZone");
    // localTimeZone. 
    Send PSend21377 = new_Send((Optr)self, SMB_localTimeZone, 0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21378 = new_Send((Optr)PSend21377, SMB_offset, 0);
    Symbol SMB_ticks_offset_ = new_Symbol(L"ticks:offset:");
    // ticks:offset:. 
    Send PSend21379 = new_Send((Optr)PSend21373, SMB_ticks_offset_, 2, (Optr)PSend21376, (Optr)PSend21378);
    Array PThreadedCode21372 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21373, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21374, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21375, (Optr)&t_send2, (Optr)PSend21376, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21377, (Optr)&t_send0, (Optr)PSend21378, (Optr)&t_send2, (Optr)PSend21379, (Optr)&t_method_return);
    Method PMethod21371 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21372, 1, PSend21379);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod21371, HEADER(Chronology_DateAndTime_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_midnight() {
    Symbol SMB_midnight = new_Symbol(L"midnight");
    Symbol SMB_now = new_Symbol(L"now");
    // now. 
<<<<<<< HEAD
    Send PSend21416 = new_Send((Optr)self, SMB_now, 0);
    // midnight. 
    Send PSend21417 = new_Send((Optr)PSend21416, SMB_midnight, 0);
    Array PThreadedCode21415 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21416, (Optr)&t_send0, (Optr)PSend21417, (Optr)&t_method_return);
    Method PMethod21414 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21415, 1, PSend21417);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21414, HEADER(Chronology_DateAndTime_Class));
=======
    Send PSend21382 = new_Send((Optr)self, SMB_now, 0);
    // midnight. 
    Send PSend21383 = new_Send((Optr)PSend21382, SMB_midnight, 0);
    Array PThreadedCode21381 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21382, (Optr)&t_send0, (Optr)PSend21383, (Optr)&t_method_return);
    Method PMethod21380 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21381, 1, PSend21383);
    
    MethodClosure MC_SMB_midnight = new_MethodClosure((Method)PMethod21380, HEADER(Chronology_DateAndTime_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Chronology_DateAndTime_Class), SMB_midnight, MC_SMB_midnight);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
<<<<<<< HEAD
    Send PSend21420 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Array PThreadedCode21419 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21420, (Optr)&t_method_return);
    Method PMethod21418 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21419, 1, PSend21420);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod21418, HEADER(Chronology_DateAndTime_Class));
=======
    Send PSend21386 = new_Send((Optr)Time_classReference, SMB_totalSeconds, 0);
    Array PThreadedCode21385 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21386, (Optr)&t_method_return);
    Method PMethod21384 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21385, 1, PSend21386);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod21384, HEADER(Chronology_DateAndTime_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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