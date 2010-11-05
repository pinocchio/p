#include <lib/class/Chronology/Duration.h>


Optr layout_Chronology_Duration_Class_class;
Optr slot_Chronology_Duration_seconds;
Optr layout_Chronology_Duration;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend19963 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend19964 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend19963);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend19965 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend19966 = new_Send((Optr)PSend19964, SMB_quo_, 1, (Optr)PSend19965);
    Array PThreadedCode19962 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend19963, (Optr)&t_send1, (Optr)PSend19964, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend19965, (Optr)&t_send1, (Optr)PSend19966, (Optr)&t_method_return);
    Method PMethod19961 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19962, 1, PSend19966);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod19961, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Array PThreadedCode19968 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_method_return);
    Method PMethod19967 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19968, 1, slot_Chronology_Duration_seconds);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod19967, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend19971 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend19972 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend19971);
    Array PThreadedCode19970 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend19971, (Optr)&t_send1, (Optr)PSend19972, (Optr)&t_method_return);
    Method PMethod19969 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19970, 1, PSend19972);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod19969, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Array PThreadedCode19974 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod19973 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19974, 1, self);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod19973, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_negated() {
    Symbol SMB_negated = new_Symbol(L"negated");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19977 = new_Send((Optr)self, SMB_class, 0);
    // negated. 
    Send PSend19978 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_negated, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend19979 = new_Send((Optr)PSend19977, SMB_seconds_, 1, (Optr)PSend19978);
    Array PThreadedCode19976 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19977, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend19978, (Optr)&t_send1, (Optr)PSend19979, (Optr)&t_method_return);
    Method PMethod19975 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19976, 1, PSend19979);
    
    MethodClosure MC_SMB_negated = new_MethodClosure((Method)PMethod19975, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negated, MC_SMB_negated);
}


static void init_SMB_negative() {
    Symbol SMB_negative = new_Symbol(L"negative");
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend19982 = new_Send((Optr)self, SMB_positive, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend19983 = new_Send((Optr)PSend19982, SMB_not, 0);
    Array PThreadedCode19981 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19982, (Optr)&t_send0, (Optr)PSend19983, (Optr)&t_method_return);
    Method PMethod19980 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19981, 1, PSend19983);
    
    MethodClosure MC_SMB_negative = new_MethodClosure((Method)PMethod19980, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negative, MC_SMB_negative);
}


static void init_SMB_positive() {
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend19986 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_positive, 0);
    Array PThreadedCode19985 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend19986, (Optr)&t_method_return);
    Method PMethod19984 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19985, 1, PSend19986);
    
    MethodClosure MC_SMB_positive = new_MethodClosure((Method)PMethod19984, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_positive, MC_SMB_positive);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray19988 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19990 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend19991 = new_Send((Optr)VAR_operand_0_0, SMB_asSeconds, 0);
    // +. 
    Send PSend19992 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__plus_, 1, (Optr)PSend19991);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend19993 = new_Send((Optr)PSend19990, SMB_seconds_, 1, (Optr)PSend19992);
    Array PThreadedCode19989 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19990, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend19991, (Optr)&t_send1, (Optr)PSend19992, (Optr)&t_send1, (Optr)PSend19993, (Optr)&t_method_return);
    Method PMethod19987 = new_Method_with(PArray19988, empty_Array, empty_Array, PThreadedCode19989, 1, PSend19993);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod19987, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray19995 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend19997 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19998 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend19997);
    Array PThreadedCode19996 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend19997, (Optr)&t_send1, (Optr)PSend19998, (Optr)&t_method_return);
    Method PMethod19994 = new_Method_with(PArray19995, empty_Array, empty_Array, PThreadedCode19996, 1, PSend19998);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod19994, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_seconds_() {
    /*
    seconds: seconds
// 	^ self basicNew seconds: seconds
    */
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20000 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Assign PAssign20002 = new_Assign((Optr)slot_Chronology_Duration_seconds, (Optr)VAR_secondCount_0_0);
    Array PThreadedCode20001 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20002, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19999 = new_Method_with(PArray20000, empty_Array, empty_Array, PThreadedCode20001, 2, PAssign20002, self);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod19999, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds_, MC_SMB_seconds_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray20004 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20006 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20009 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_true);
    Block PBlock20008 = new_Block_with(empty_Array, empty_Array, PThreadedCode20009, 1, true_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20012 = new_Send((Optr)self, SMB_class, 0);
    // class. 
    Send PSend20013 = new_Send((Optr)VAR_comparand_0_0, SMB_class, 0);
    // =. 
    Send PSend20014 = new_Send((Optr)PSend20012, SMB__equals_, 1, (Optr)PSend20013);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20018 = new_Send((Optr)self, SMB_asSeconds, 0);
    // asSeconds. 
    Send PSend20019 = new_Send((Optr)VAR_comparand_0_0, SMB_asSeconds, 0);
    // =. 
    Send PSend20020 = new_Send((Optr)PSend20018, SMB__equals_, 1, (Optr)PSend20019);
    Array PThreadedCode20017 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20018, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20019, (Optr)&t_send1, (Optr)PSend20020, (Optr)&t_block_return);
    Block PBlock20016 = new_Block_with(empty_Array, empty_Array, PThreadedCode20017, 1, PSend20020);
    Array PThreadedCode20022 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock20021 = new_Block_with(empty_Array, empty_Array, PThreadedCode20022, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend20015 = new_Send((Optr)PSend20014, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20016, (Optr)PBlock20021);
    Array PThreadedCode20011 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20012, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20013, (Optr)&t_send1, (Optr)PSend20014, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20015, (Optr)PBlock20016, (Optr)PBlock20021, (Optr)&t_block_return);
    Block PBlock20010 = new_Block_with(empty_Array, empty_Array, PThreadedCode20011, 1, PSend20015);
    // ifTrue:ifFalse:. 
    Send PSend20007 = new_Send((Optr)PSend20006, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20008, (Optr)PBlock20010);
    Array PThreadedCode20005 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20006, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20007, (Optr)PBlock20008, (Optr)PBlock20010, (Optr)&t_method_return);
    Method PMethod20003 = new_Method_with(PArray20004, empty_Array, empty_Array, PThreadedCode20005, 1, PSend20007);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20003, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20024 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_d_0_1 = new_Variable_named(L"d", 0);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray20025 = new_Array_with(4, (Optr)VAR_d_0_1, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20029 = new_Send((Optr)self, SMB_days, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20028 = new_Send((Optr)PSend20029, SMB_abs, 0);
    Assign PAssign20027 = new_Assign((Optr)VAR_d_0_1, (Optr)PSend20028);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20032 = new_Send((Optr)self, SMB_hours, 0);
    // abs. 
    Send PSend20031 = new_Send((Optr)PSend20032, SMB_abs, 0);
    Assign PAssign20030 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20031);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20035 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend20034 = new_Send((Optr)PSend20035, SMB_abs, 0);
    Assign PAssign20033 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20034);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20038 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend20037 = new_Send((Optr)PSend20038, SMB_abs, 0);
    Assign PAssign20036 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20037);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20039 = new_Send((Optr)self, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_2173 = new_Character(L'-');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2173_Const = new_Constant((Optr)char_2173);
    // <<. 
    Send PSend20043 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2173_Const);
    Array PThreadedCode20042 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend20043, (Optr)&t_block_return);
    Block PBlock20041 = new_Block_with(empty_Array, empty_Array, PThreadedCode20042, 1, PSend20043);
    // ifTrue:. 
    Send PSend20040 = new_Send((Optr)PSend20039, SMB_ifTrue_, 1, (Optr)PBlock20041);
    // printOn:. 
    Send PSend20044 = new_Send((Optr)VAR_d_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20045 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20046 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9159 = new_Character(L'0');
    Constant char_9159_Const = new_Constant((Optr)char_9159);
    // <<. 
    Send PSend20050 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20049 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20050, (Optr)&t_block_return);
    Block PBlock20048 = new_Block_with(empty_Array, empty_Array, PThreadedCode20049, 1, PSend20050);
    // ifTrue:. 
    Send PSend20047 = new_Send((Optr)PSend20046, SMB_ifTrue_, 1, (Optr)PBlock20048);
    // printOn:. 
    Send PSend20051 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20052 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20053 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20057 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20056 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20057, (Optr)&t_block_return);
    Block PBlock20055 = new_Block_with(empty_Array, empty_Array, PThreadedCode20056, 1, PSend20057);
    // ifTrue:. 
    Send PSend20054 = new_Send((Optr)PSend20053, SMB_ifTrue_, 1, (Optr)PBlock20055);
    // printOn:. 
    Send PSend20058 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20059 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20060 = new_Send((Optr)VAR_s_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20064 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20063 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20064, (Optr)&t_block_return);
    Block PBlock20062 = new_Block_with(empty_Array, empty_Array, PThreadedCode20063, 1, PSend20064);
    // ifTrue:. 
    Send PSend20061 = new_Send((Optr)PSend20060, SMB_ifTrue_, 1, (Optr)PBlock20062);
    // printOn:. 
    Send PSend20065 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20026 = instantiate_Array_with(ThreadedCode_Class, 0, 123, (Optr)&t_push1, (Optr)PAssign20027, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20029, (Optr)&t_send0, (Optr)PSend20028, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20030, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20032, (Optr)&t_send0, (Optr)PSend20031, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20033, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20035, (Optr)&t_send0, (Optr)PSend20034, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20036, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20038, (Optr)&t_send0, (Optr)PSend20037, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20039, (Optr)&t_send_ifTrue_, (Optr)PSend20040, (Optr)PBlock20041, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_d_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20044, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20045, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20046, (Optr)&t_send_ifTrue_, (Optr)PSend20047, (Optr)PBlock20048, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20051, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20052, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20053, (Optr)&t_send_ifTrue_, (Optr)PSend20054, (Optr)PBlock20055, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20058, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20059, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20060, (Optr)&t_send_ifTrue_, (Optr)PSend20061, (Optr)PBlock20062, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20065, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20023 = new_Method_with(PArray20024, PArray20025, empty_Array, PThreadedCode20026, 16, PAssign20027, PAssign20030, PAssign20033, PAssign20036, PSend20040, PSend20044, PSend20045, PSend20047, PSend20051, PSend20052, PSend20054, PSend20058, PSend20059, PSend20061, PSend20065, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20023, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Variable VAR_days_0_0 = new_Variable_named(L"days", 0);
    Array PArray20067 = new_Array_with(1, (Optr)VAR_days_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20070 = new_Send((Optr)self, SMB_days, 0);
    Assign PAssign20069 = new_Assign((Optr)VAR_days_0_0, (Optr)PSend20070);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20071 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20072 = new_Send((Optr)VAR_days_0_0, SMB__times_, 1, (Optr)PSend20071);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20073 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__minus_, 1, (Optr)PSend20072);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20074 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_days_0_0, (Optr)PSend20073);
    Array PThreadedCode20068 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20069, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20070, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20071, (Optr)&t_send1, (Optr)PSend20072, (Optr)&t_send1, (Optr)PSend20073, (Optr)&t_send2, (Optr)PSend20074, (Optr)&t_method_return);
    Method PMethod20066 = new_Method_with(empty_Array, PArray20067, empty_Array, PThreadedCode20068, 2, PAssign20069, PSend20074);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20066, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20077 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20078 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20077);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20079 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20080 = new_Send((Optr)PSend20078, SMB_quo_, 1, (Optr)PSend20079);
    Array PThreadedCode20076 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20077, (Optr)&t_send1, (Optr)PSend20078, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20079, (Optr)&t_send1, (Optr)PSend20080, (Optr)&t_method_return);
    Method PMethod20075 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20076, 1, PSend20080);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20075, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_days() {
    Symbol SMB_days = new_Symbol(L"days");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20083 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20084 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_quo_, 1, (Optr)PSend20083);
    Array PThreadedCode20082 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20083, (Optr)&t_send1, (Optr)PSend20084, (Optr)&t_method_return);
    Method PMethod20081 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20082, 1, PSend20084);
    
    MethodClosure MC_SMB_days = new_MethodClosure((Method)PMethod20081, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_days, MC_SMB_days);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20086 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20088 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20089 = new_Send((Optr)self, SMB_asSeconds, 0);
    // *. 
    Send PSend20090 = new_Send((Optr)PSend20089, SMB__times_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20091 = new_Send((Optr)PSend20090, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20092 = new_Send((Optr)PSend20088, SMB_seconds_, 1, (Optr)PSend20091);
    Array PThreadedCode20087 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20088, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20089, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20090, (Optr)&t_send0, (Optr)PSend20091, (Optr)&t_send1, (Optr)PSend20092, (Optr)&t_method_return);
    Method PMethod20085 = new_Method_with(PArray20086, empty_Array, empty_Array, PThreadedCode20087, 1, PSend20092);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PMethod20085, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20094 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_isNumber = new_Symbol(L"isNumber");
    // isNumber. 
    Send PSend20096 = new_Send((Optr)VAR_operand_0_0, SMB_isNumber, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20100 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20101 = new_Send((Optr)self, SMB_asSeconds, 0);
    // /. 
    Send PSend20102 = new_Send((Optr)PSend20101, SMB__divide_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20103 = new_Send((Optr)PSend20102, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20104 = new_Send((Optr)PSend20100, SMB_seconds_, 1, (Optr)PSend20103);
    Array PThreadedCode20099 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20100, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20101, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20102, (Optr)&t_send0, (Optr)PSend20103, (Optr)&t_send1, (Optr)PSend20104, (Optr)&t_block_return);
    Block PBlock20098 = new_Block_with(empty_Array, empty_Array, PThreadedCode20099, 1, PSend20104);
    // asSeconds. 
    Send PSend20107 = new_Send((Optr)self, SMB_asSeconds, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20108 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // asSeconds. 
    Send PSend20109 = new_Send((Optr)PSend20108, SMB_asSeconds, 0);
    // /. 
    Send PSend20110 = new_Send((Optr)PSend20107, SMB__divide_, 1, (Optr)PSend20109);
    Array PThreadedCode20106 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20107, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20108, (Optr)&t_send0, (Optr)PSend20109, (Optr)&t_send1, (Optr)PSend20110, (Optr)&t_block_return);
    Block PBlock20105 = new_Block_with(empty_Array, empty_Array, PThreadedCode20106, 1, PSend20110);
    // ifTrue:ifFalse:. 
    Send PSend20097 = new_Send((Optr)PSend20096, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20098, (Optr)PBlock20105);
    Array PThreadedCode20095 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20096, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20097, (Optr)PBlock20098, (Optr)PBlock20105, (Optr)&t_method_return);
    Method PMethod20093 = new_Method_with(PArray20094, empty_Array, empty_Array, PThreadedCode20095, 1, PSend20097);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PMethod20093, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB_isZero() {
    Symbol SMB_isZero = new_Symbol(L"isZero");
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20113 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode20112 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20113, (Optr)&t_method_return);
    Method PMethod20111 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20112, 1, PSend20113);
    
    MethodClosure MC_SMB_isZero = new_MethodClosure((Method)PMethod20111, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_isZero, MC_SMB_isZero);
}


static void init_class_SMB_minutes_() {
    Symbol SMB_minutes_ = new_Symbol(L"minutes:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20115 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20117 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20118 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20117);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20119 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20118);
    Array PThreadedCode20116 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20117, (Optr)&t_send1, (Optr)PSend20118, (Optr)&t_send1, (Optr)PSend20119, (Optr)&t_method_return);
    Method PMethod20114 = new_Method_with(PArray20115, empty_Array, empty_Array, PThreadedCode20116, 1, PSend20119);
    
    MethodClosure MC_SMB_minutes_ = new_MethodClosure((Method)PMethod20114, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_minutes_, MC_SMB_minutes_);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20121 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20123 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20124 = new_Send((Optr)PSend20123, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20122 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20123, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20124, (Optr)&t_method_return);
    Method PMethod20120 = new_Method_with(PArray20121, empty_Array, empty_Array, PThreadedCode20122, 1, PSend20124);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20120, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_zero() {
    Symbol SMB_zero = new_Symbol(L"zero");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20127 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // seconds:. 
    Send PSend20128 = new_Send((Optr)PSend20127, SMB_seconds_, 1, (Optr)int_0_Const);
    Array PThreadedCode20126 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20127, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20128, (Optr)&t_method_return);
    Method PMethod20125 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20126, 1, PSend20128);
    
    MethodClosure MC_SMB_zero = new_MethodClosure((Method)PMethod20125, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_zero, MC_SMB_zero);
}


static void init_class_SMB_hours_() {
    Symbol SMB_hours_ = new_Symbol(L"hours:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20130 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20132 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20133 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20132);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20134 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20133);
    Array PThreadedCode20131 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20132, (Optr)&t_send1, (Optr)PSend20133, (Optr)&t_send1, (Optr)PSend20134, (Optr)&t_method_return);
    Method PMethod20129 = new_Method_with(PArray20130, empty_Array, empty_Array, PThreadedCode20131, 1, PSend20134);
    
    MethodClosure MC_SMB_hours_ = new_MethodClosure((Method)PMethod20129, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_hours_, MC_SMB_hours_);
}


static void init_class_SMB_days_() {
    Symbol SMB_days_ = new_Symbol(L"days:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20136 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20138 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20139 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20138);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20140 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20139);
    Array PThreadedCode20137 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20138, (Optr)&t_send1, (Optr)PSend20139, (Optr)&t_send1, (Optr)PSend20140, (Optr)&t_method_return);
    Method PMethod20135 = new_Method_with(PArray20136, empty_Array, empty_Array, PThreadedCode20137, 1, PSend20140);
    
    MethodClosure MC_SMB_days_ = new_MethodClosure((Method)PMethod20135, HEADER(Chronology_Duration_Class));
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