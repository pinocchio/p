#include <lib/class/Chronology/Duration.h>


Optr layout_Chronology_Duration_Class_class;
Optr slot_Chronology_Duration_seconds;
Optr layout_Chronology_Duration;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend19933 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend19934 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend19933);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend19935 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend19936 = new_Send((Optr)PSend19934, SMB_quo_, 1, (Optr)PSend19935);
    Array PThreadedCode19932 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend19933, (Optr)&t_send1, (Optr)PSend19934, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend19935, (Optr)&t_send1, (Optr)PSend19936, (Optr)&t_method_return);
    Method PMethod19931 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19932, 1, PSend19936);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod19931, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Array PThreadedCode19938 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_method_return);
    Method PMethod19937 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19938, 1, slot_Chronology_Duration_seconds);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod19937, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend19941 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend19942 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend19941);
    Array PThreadedCode19940 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend19941, (Optr)&t_send1, (Optr)PSend19942, (Optr)&t_method_return);
    Method PMethod19939 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19940, 1, PSend19942);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod19939, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Array PThreadedCode19944 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod19943 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19944, 1, self);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod19943, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_negated() {
    Symbol SMB_negated = new_Symbol(L"negated");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19947 = new_Send((Optr)self, SMB_class, 0);
    // negated. 
    Send PSend19948 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_negated, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend19949 = new_Send((Optr)PSend19947, SMB_seconds_, 1, (Optr)PSend19948);
    Array PThreadedCode19946 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19947, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend19948, (Optr)&t_send1, (Optr)PSend19949, (Optr)&t_method_return);
    Method PMethod19945 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19946, 1, PSend19949);
    
    MethodClosure MC_SMB_negated = new_MethodClosure((Method)PMethod19945, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negated, MC_SMB_negated);
}


static void init_SMB_negative() {
    Symbol SMB_negative = new_Symbol(L"negative");
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend19952 = new_Send((Optr)self, SMB_positive, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend19953 = new_Send((Optr)PSend19952, SMB_not, 0);
    Array PThreadedCode19951 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19952, (Optr)&t_send0, (Optr)PSend19953, (Optr)&t_method_return);
    Method PMethod19950 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19951, 1, PSend19953);
    
    MethodClosure MC_SMB_negative = new_MethodClosure((Method)PMethod19950, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negative, MC_SMB_negative);
}


static void init_SMB_positive() {
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend19956 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_positive, 0);
    Array PThreadedCode19955 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend19956, (Optr)&t_method_return);
    Method PMethod19954 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19955, 1, PSend19956);
    
    MethodClosure MC_SMB_positive = new_MethodClosure((Method)PMethod19954, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_positive, MC_SMB_positive);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray19958 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19960 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend19961 = new_Send((Optr)VAR_operand_0_0, SMB_asSeconds, 0);
    // +. 
    Send PSend19962 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__plus_, 1, (Optr)PSend19961);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend19963 = new_Send((Optr)PSend19960, SMB_seconds_, 1, (Optr)PSend19962);
    Array PThreadedCode19959 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19960, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend19961, (Optr)&t_send1, (Optr)PSend19962, (Optr)&t_send1, (Optr)PSend19963, (Optr)&t_method_return);
    Method PMethod19957 = new_Method_with(PArray19958, empty_Array, empty_Array, PThreadedCode19959, 1, PSend19963);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod19957, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray19965 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend19967 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19968 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend19967);
    Array PThreadedCode19966 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend19967, (Optr)&t_send1, (Optr)PSend19968, (Optr)&t_method_return);
    Method PMethod19964 = new_Method_with(PArray19965, empty_Array, empty_Array, PThreadedCode19966, 1, PSend19968);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod19964, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_seconds_() {
    /*
    seconds: seconds
// 	^ self basicNew seconds: seconds
    */
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray19970 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Assign PAssign19972 = new_Assign((Optr)slot_Chronology_Duration_seconds, (Optr)VAR_secondCount_0_0);
    Array PThreadedCode19971 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19972, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19969 = new_Method_with(PArray19970, empty_Array, empty_Array, PThreadedCode19971, 2, PAssign19972, self);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod19969, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds_, MC_SMB_seconds_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray19974 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend19976 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode19979 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_true);
    Block PBlock19978 = new_Block_with(empty_Array, empty_Array, PThreadedCode19979, 1, true_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19982 = new_Send((Optr)self, SMB_class, 0);
    // class. 
    Send PSend19983 = new_Send((Optr)VAR_comparand_0_0, SMB_class, 0);
    // =. 
    Send PSend19984 = new_Send((Optr)PSend19982, SMB__equals_, 1, (Optr)PSend19983);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend19988 = new_Send((Optr)self, SMB_asSeconds, 0);
    // asSeconds. 
    Send PSend19989 = new_Send((Optr)VAR_comparand_0_0, SMB_asSeconds, 0);
    // =. 
    Send PSend19990 = new_Send((Optr)PSend19988, SMB__equals_, 1, (Optr)PSend19989);
    Array PThreadedCode19987 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19988, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend19989, (Optr)&t_send1, (Optr)PSend19990, (Optr)&t_block_return);
    Block PBlock19986 = new_Block_with(empty_Array, empty_Array, PThreadedCode19987, 1, PSend19990);
    Array PThreadedCode19992 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock19991 = new_Block_with(empty_Array, empty_Array, PThreadedCode19992, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend19985 = new_Send((Optr)PSend19984, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19986, (Optr)PBlock19991);
    Array PThreadedCode19981 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19982, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend19983, (Optr)&t_send1, (Optr)PSend19984, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19985, (Optr)PBlock19986, (Optr)PBlock19991, (Optr)&t_block_return);
    Block PBlock19980 = new_Block_with(empty_Array, empty_Array, PThreadedCode19981, 1, PSend19985);
    // ifTrue:ifFalse:. 
    Send PSend19977 = new_Send((Optr)PSend19976, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19978, (Optr)PBlock19980);
    Array PThreadedCode19975 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend19976, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19977, (Optr)PBlock19978, (Optr)PBlock19980, (Optr)&t_method_return);
    Method PMethod19973 = new_Method_with(PArray19974, empty_Array, empty_Array, PThreadedCode19975, 1, PSend19977);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod19973, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray19994 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_d_0_1 = new_Variable_named(L"d", 0);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray19995 = new_Array_with(4, (Optr)VAR_d_0_1, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend19999 = new_Send((Optr)self, SMB_days, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend19998 = new_Send((Optr)PSend19999, SMB_abs, 0);
    Assign PAssign19997 = new_Assign((Optr)VAR_d_0_1, (Optr)PSend19998);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20002 = new_Send((Optr)self, SMB_hours, 0);
    // abs. 
    Send PSend20001 = new_Send((Optr)PSend20002, SMB_abs, 0);
    Assign PAssign20000 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20001);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20005 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend20004 = new_Send((Optr)PSend20005, SMB_abs, 0);
    Assign PAssign20003 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20004);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20008 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend20007 = new_Send((Optr)PSend20008, SMB_abs, 0);
    Assign PAssign20006 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20007);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20009 = new_Send((Optr)self, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_2170 = new_Character(L'-');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2170_Const = new_Constant((Optr)char_2170);
    // <<. 
    Send PSend20013 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2170_Const);
    Array PThreadedCode20012 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2170, (Optr)&t_send1, (Optr)PSend20013, (Optr)&t_block_return);
    Block PBlock20011 = new_Block_with(empty_Array, empty_Array, PThreadedCode20012, 1, PSend20013);
    // ifTrue:. 
    Send PSend20010 = new_Send((Optr)PSend20009, SMB_ifTrue_, 1, (Optr)PBlock20011);
    // printOn:. 
    Send PSend20014 = new_Send((Optr)VAR_d_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20015 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20016 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9135 = new_Character(L'0');
    Constant char_9135_Const = new_Constant((Optr)char_9135);
    // <<. 
    Send PSend20020 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20019 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20020, (Optr)&t_block_return);
    Block PBlock20018 = new_Block_with(empty_Array, empty_Array, PThreadedCode20019, 1, PSend20020);
    // ifTrue:. 
    Send PSend20017 = new_Send((Optr)PSend20016, SMB_ifTrue_, 1, (Optr)PBlock20018);
    // printOn:. 
    Send PSend20021 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20022 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20023 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20027 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20026 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20027, (Optr)&t_block_return);
    Block PBlock20025 = new_Block_with(empty_Array, empty_Array, PThreadedCode20026, 1, PSend20027);
    // ifTrue:. 
    Send PSend20024 = new_Send((Optr)PSend20023, SMB_ifTrue_, 1, (Optr)PBlock20025);
    // printOn:. 
    Send PSend20028 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20029 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20030 = new_Send((Optr)VAR_s_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20034 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20033 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20034, (Optr)&t_block_return);
    Block PBlock20032 = new_Block_with(empty_Array, empty_Array, PThreadedCode20033, 1, PSend20034);
    // ifTrue:. 
    Send PSend20031 = new_Send((Optr)PSend20030, SMB_ifTrue_, 1, (Optr)PBlock20032);
    // printOn:. 
    Send PSend20035 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode19996 = instantiate_Array_with(ThreadedCode_Class, 0, 123, (Optr)&t_push1, (Optr)PAssign19997, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19999, (Optr)&t_send0, (Optr)PSend19998, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20000, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20002, (Optr)&t_send0, (Optr)PSend20001, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20003, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20005, (Optr)&t_send0, (Optr)PSend20004, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20006, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20008, (Optr)&t_send0, (Optr)PSend20007, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20009, (Optr)&t_send_ifTrue_, (Optr)PSend20010, (Optr)PBlock20011, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_d_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20014, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20015, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20016, (Optr)&t_send_ifTrue_, (Optr)PSend20017, (Optr)PBlock20018, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20021, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20022, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20023, (Optr)&t_send_ifTrue_, (Optr)PSend20024, (Optr)PBlock20025, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20028, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20029, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20030, (Optr)&t_send_ifTrue_, (Optr)PSend20031, (Optr)PBlock20032, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20035, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19993 = new_Method_with(PArray19994, PArray19995, empty_Array, PThreadedCode19996, 16, PAssign19997, PAssign20000, PAssign20003, PAssign20006, PSend20010, PSend20014, PSend20015, PSend20017, PSend20021, PSend20022, PSend20024, PSend20028, PSend20029, PSend20031, PSend20035, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod19993, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Variable VAR_days_0_0 = new_Variable_named(L"days", 0);
    Array PArray20037 = new_Array_with(1, (Optr)VAR_days_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20040 = new_Send((Optr)self, SMB_days, 0);
    Assign PAssign20039 = new_Assign((Optr)VAR_days_0_0, (Optr)PSend20040);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20041 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20042 = new_Send((Optr)VAR_days_0_0, SMB__times_, 1, (Optr)PSend20041);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20043 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__minus_, 1, (Optr)PSend20042);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20044 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_days_0_0, (Optr)PSend20043);
    Array PThreadedCode20038 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20039, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20040, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20041, (Optr)&t_send1, (Optr)PSend20042, (Optr)&t_send1, (Optr)PSend20043, (Optr)&t_send2, (Optr)PSend20044, (Optr)&t_method_return);
    Method PMethod20036 = new_Method_with(empty_Array, PArray20037, empty_Array, PThreadedCode20038, 2, PAssign20039, PSend20044);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20036, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20047 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20048 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20047);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20049 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20050 = new_Send((Optr)PSend20048, SMB_quo_, 1, (Optr)PSend20049);
    Array PThreadedCode20046 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20047, (Optr)&t_send1, (Optr)PSend20048, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20049, (Optr)&t_send1, (Optr)PSend20050, (Optr)&t_method_return);
    Method PMethod20045 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20046, 1, PSend20050);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20045, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_days() {
    Symbol SMB_days = new_Symbol(L"days");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20053 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20054 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_quo_, 1, (Optr)PSend20053);
    Array PThreadedCode20052 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20053, (Optr)&t_send1, (Optr)PSend20054, (Optr)&t_method_return);
    Method PMethod20051 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20052, 1, PSend20054);
    
    MethodClosure MC_SMB_days = new_MethodClosure((Method)PMethod20051, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_days, MC_SMB_days);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20056 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20058 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20059 = new_Send((Optr)self, SMB_asSeconds, 0);
    // *. 
    Send PSend20060 = new_Send((Optr)PSend20059, SMB__times_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20061 = new_Send((Optr)PSend20060, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20062 = new_Send((Optr)PSend20058, SMB_seconds_, 1, (Optr)PSend20061);
    Array PThreadedCode20057 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20058, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20059, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20060, (Optr)&t_send0, (Optr)PSend20061, (Optr)&t_send1, (Optr)PSend20062, (Optr)&t_method_return);
    Method PMethod20055 = new_Method_with(PArray20056, empty_Array, empty_Array, PThreadedCode20057, 1, PSend20062);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PMethod20055, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20064 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_isNumber = new_Symbol(L"isNumber");
    // isNumber. 
    Send PSend20066 = new_Send((Optr)VAR_operand_0_0, SMB_isNumber, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20070 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20071 = new_Send((Optr)self, SMB_asSeconds, 0);
    // /. 
    Send PSend20072 = new_Send((Optr)PSend20071, SMB__divide_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20073 = new_Send((Optr)PSend20072, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20074 = new_Send((Optr)PSend20070, SMB_seconds_, 1, (Optr)PSend20073);
    Array PThreadedCode20069 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20070, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20071, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20072, (Optr)&t_send0, (Optr)PSend20073, (Optr)&t_send1, (Optr)PSend20074, (Optr)&t_block_return);
    Block PBlock20068 = new_Block_with(empty_Array, empty_Array, PThreadedCode20069, 1, PSend20074);
    // asSeconds. 
    Send PSend20077 = new_Send((Optr)self, SMB_asSeconds, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20078 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // asSeconds. 
    Send PSend20079 = new_Send((Optr)PSend20078, SMB_asSeconds, 0);
    // /. 
    Send PSend20080 = new_Send((Optr)PSend20077, SMB__divide_, 1, (Optr)PSend20079);
    Array PThreadedCode20076 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20077, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20078, (Optr)&t_send0, (Optr)PSend20079, (Optr)&t_send1, (Optr)PSend20080, (Optr)&t_block_return);
    Block PBlock20075 = new_Block_with(empty_Array, empty_Array, PThreadedCode20076, 1, PSend20080);
    // ifTrue:ifFalse:. 
    Send PSend20067 = new_Send((Optr)PSend20066, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20068, (Optr)PBlock20075);
    Array PThreadedCode20065 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20066, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20067, (Optr)PBlock20068, (Optr)PBlock20075, (Optr)&t_method_return);
    Method PMethod20063 = new_Method_with(PArray20064, empty_Array, empty_Array, PThreadedCode20065, 1, PSend20067);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PMethod20063, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB_isZero() {
    Symbol SMB_isZero = new_Symbol(L"isZero");
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20083 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode20082 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20083, (Optr)&t_method_return);
    Method PMethod20081 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20082, 1, PSend20083);
    
    MethodClosure MC_SMB_isZero = new_MethodClosure((Method)PMethod20081, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_isZero, MC_SMB_isZero);
}


static void init_class_SMB_minutes_() {
    Symbol SMB_minutes_ = new_Symbol(L"minutes:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20085 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20087 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20088 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20087);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20089 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20088);
    Array PThreadedCode20086 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20087, (Optr)&t_send1, (Optr)PSend20088, (Optr)&t_send1, (Optr)PSend20089, (Optr)&t_method_return);
    Method PMethod20084 = new_Method_with(PArray20085, empty_Array, empty_Array, PThreadedCode20086, 1, PSend20089);
    
    MethodClosure MC_SMB_minutes_ = new_MethodClosure((Method)PMethod20084, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_minutes_, MC_SMB_minutes_);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20091 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20093 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20094 = new_Send((Optr)PSend20093, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20092 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20093, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20094, (Optr)&t_method_return);
    Method PMethod20090 = new_Method_with(PArray20091, empty_Array, empty_Array, PThreadedCode20092, 1, PSend20094);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20090, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_zero() {
    Symbol SMB_zero = new_Symbol(L"zero");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20097 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // seconds:. 
    Send PSend20098 = new_Send((Optr)PSend20097, SMB_seconds_, 1, (Optr)int_0_Const);
    Array PThreadedCode20096 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20097, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20098, (Optr)&t_method_return);
    Method PMethod20095 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20096, 1, PSend20098);
    
    MethodClosure MC_SMB_zero = new_MethodClosure((Method)PMethod20095, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_zero, MC_SMB_zero);
}


static void init_class_SMB_hours_() {
    Symbol SMB_hours_ = new_Symbol(L"hours:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20100 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20102 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20103 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20102);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20104 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20103);
    Array PThreadedCode20101 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20102, (Optr)&t_send1, (Optr)PSend20103, (Optr)&t_send1, (Optr)PSend20104, (Optr)&t_method_return);
    Method PMethod20099 = new_Method_with(PArray20100, empty_Array, empty_Array, PThreadedCode20101, 1, PSend20104);
    
    MethodClosure MC_SMB_hours_ = new_MethodClosure((Method)PMethod20099, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_hours_, MC_SMB_hours_);
}


static void init_class_SMB_days_() {
    Symbol SMB_days_ = new_Symbol(L"days:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20106 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20108 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20109 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20108);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20110 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20109);
    Array PThreadedCode20107 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20108, (Optr)&t_send1, (Optr)PSend20109, (Optr)&t_send1, (Optr)PSend20110, (Optr)&t_method_return);
    Method PMethod20105 = new_Method_with(PArray20106, empty_Array, empty_Array, PThreadedCode20107, 1, PSend20110);
    
    MethodClosure MC_SMB_days_ = new_MethodClosure((Method)PMethod20105, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_days_, MC_SMB_days_);
}

void init_Chronology_Duration_layout() {
    layout_Chronology_Duration_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Chronology_Duration_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Chronology_Duration_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Chronology_Duration_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Chronology_Duration_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Chronology_Duration_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Duration = new_Symbol(L"Duration");
    slot_Chronology_Duration_seconds = (Optr)new_Slot(0, L"seconds");
    layout_Chronology_Duration = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Chronology_Duration)->values[0] = slot_Chronology_Duration_seconds; // seconds 
    Chronology_Duration_Class = (Class)new_Class(Object_Class, layout_Chronology_Duration_Class_class);
    Class_set_superclass(Chronology_Duration_Class, Object_Class);
    Chronology_Duration_Class->layout = layout_Chronology_Duration;
    HEADER(Chronology_Duration_Class)->layout = layout_Chronology_Duration_Class_class;
    Chronology_Duration_Class->name = SMB_Duration;
    
}

void init_Chronology_Duration_methods() {
    init_SMB_minutes();
    init_SMB_asSeconds();
    init_SMB_seconds();
    init_SMB_asDuration();
    init_SMB_negated();
    init_SMB_negative();
    init_SMB_positive();
    init_SMB__plus_();
    init_SMB__minus_();
    init_SMB_seconds_();
    init_SMB__equals_();
    init_SMB_printOn_();
    init_SMB_ticks();
    init_SMB_hours();
    init_SMB_days();
    init_SMB__times_();
    init_SMB__divide_();
    init_SMB_isZero();
    init_class_SMB_minutes_();
    init_class_SMB_seconds_();
    init_class_SMB_zero();
    init_class_SMB_hours_();
    init_class_SMB_days_();
    
}