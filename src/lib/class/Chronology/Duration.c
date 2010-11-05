#include <lib/class/Chronology/Duration.h>


Optr layout_Chronology_Duration_Class_class;
Optr slot_Chronology_Duration_seconds;
Optr layout_Chronology_Duration;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20020 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20021 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20020);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20022 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20023 = new_Send((Optr)PSend20021, SMB_quo_, 1, (Optr)PSend20022);
    Array PThreadedCode20019 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20020, (Optr)&t_send1, (Optr)PSend20021, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20022, (Optr)&t_send1, (Optr)PSend20023, (Optr)&t_method_return);
    Method PMethod20018 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20019, 1, PSend20023);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20018, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Array PThreadedCode20025 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_method_return);
    Method PMethod20024 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20025, 1, slot_Chronology_Duration_seconds);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20024, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20028 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20029 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20028);
    Array PThreadedCode20027 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20028, (Optr)&t_send1, (Optr)PSend20029, (Optr)&t_method_return);
    Method PMethod20026 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20027, 1, PSend20029);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20026, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Array PThreadedCode20031 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20030 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20031, 1, self);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20030, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_negated() {
    Symbol SMB_negated = new_Symbol(L"negated");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20034 = new_Send((Optr)self, SMB_class, 0);
    // negated. 
    Send PSend20035 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_negated, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20036 = new_Send((Optr)PSend20034, SMB_seconds_, 1, (Optr)PSend20035);
    Array PThreadedCode20033 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20034, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20035, (Optr)&t_send1, (Optr)PSend20036, (Optr)&t_method_return);
    Method PMethod20032 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20033, 1, PSend20036);
    
    MethodClosure MC_SMB_negated = new_MethodClosure((Method)PMethod20032, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negated, MC_SMB_negated);
}


static void init_SMB_negative() {
    Symbol SMB_negative = new_Symbol(L"negative");
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20039 = new_Send((Optr)self, SMB_positive, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend20040 = new_Send((Optr)PSend20039, SMB_not, 0);
    Array PThreadedCode20038 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20039, (Optr)&t_send0, (Optr)PSend20040, (Optr)&t_method_return);
    Method PMethod20037 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20038, 1, PSend20040);
    
    MethodClosure MC_SMB_negative = new_MethodClosure((Method)PMethod20037, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negative, MC_SMB_negative);
}


static void init_SMB_positive() {
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20043 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_positive, 0);
    Array PThreadedCode20042 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20043, (Optr)&t_method_return);
    Method PMethod20041 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20042, 1, PSend20043);
    
    MethodClosure MC_SMB_positive = new_MethodClosure((Method)PMethod20041, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_positive, MC_SMB_positive);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20045 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20047 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20048 = new_Send((Optr)VAR_operand_0_0, SMB_asSeconds, 0);
    // +. 
    Send PSend20049 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__plus_, 1, (Optr)PSend20048);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20050 = new_Send((Optr)PSend20047, SMB_seconds_, 1, (Optr)PSend20049);
    Array PThreadedCode20046 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20047, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20048, (Optr)&t_send1, (Optr)PSend20049, (Optr)&t_send1, (Optr)PSend20050, (Optr)&t_method_return);
    Method PMethod20044 = new_Method_with(PArray20045, empty_Array, empty_Array, PThreadedCode20046, 1, PSend20050);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20044, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20052 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20054 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20055 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20054);
    Array PThreadedCode20053 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20054, (Optr)&t_send1, (Optr)PSend20055, (Optr)&t_method_return);
    Method PMethod20051 = new_Method_with(PArray20052, empty_Array, empty_Array, PThreadedCode20053, 1, PSend20055);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20051, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_seconds_() {
    /*
    seconds: seconds
// 	^ self basicNew seconds: seconds
    */
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20057 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Assign PAssign20059 = new_Assign((Optr)slot_Chronology_Duration_seconds, (Optr)VAR_secondCount_0_0);
    Array PThreadedCode20058 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20059, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20056 = new_Method_with(PArray20057, empty_Array, empty_Array, PThreadedCode20058, 2, PAssign20059, self);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20056, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds_, MC_SMB_seconds_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray20061 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20063 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20066 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_true);
    Block PBlock20065 = new_Block_with(empty_Array, empty_Array, PThreadedCode20066, 1, true_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20069 = new_Send((Optr)self, SMB_class, 0);
    // class. 
    Send PSend20070 = new_Send((Optr)VAR_comparand_0_0, SMB_class, 0);
    // =. 
    Send PSend20071 = new_Send((Optr)PSend20069, SMB__equals_, 1, (Optr)PSend20070);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20075 = new_Send((Optr)self, SMB_asSeconds, 0);
    // asSeconds. 
    Send PSend20076 = new_Send((Optr)VAR_comparand_0_0, SMB_asSeconds, 0);
    // =. 
    Send PSend20077 = new_Send((Optr)PSend20075, SMB__equals_, 1, (Optr)PSend20076);
    Array PThreadedCode20074 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20075, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20076, (Optr)&t_send1, (Optr)PSend20077, (Optr)&t_block_return);
    Block PBlock20073 = new_Block_with(empty_Array, empty_Array, PThreadedCode20074, 1, PSend20077);
    Array PThreadedCode20079 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock20078 = new_Block_with(empty_Array, empty_Array, PThreadedCode20079, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend20072 = new_Send((Optr)PSend20071, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20073, (Optr)PBlock20078);
    Array PThreadedCode20068 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20069, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20070, (Optr)&t_send1, (Optr)PSend20071, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20072, (Optr)PBlock20073, (Optr)PBlock20078, (Optr)&t_block_return);
    Block PBlock20067 = new_Block_with(empty_Array, empty_Array, PThreadedCode20068, 1, PSend20072);
    // ifTrue:ifFalse:. 
    Send PSend20064 = new_Send((Optr)PSend20063, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20065, (Optr)PBlock20067);
    Array PThreadedCode20062 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20063, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20064, (Optr)PBlock20065, (Optr)PBlock20067, (Optr)&t_method_return);
    Method PMethod20060 = new_Method_with(PArray20061, empty_Array, empty_Array, PThreadedCode20062, 1, PSend20064);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20060, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20081 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_d_0_1 = new_Variable_named(L"d", 0);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray20082 = new_Array_with(4, (Optr)VAR_d_0_1, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20086 = new_Send((Optr)self, SMB_days, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20085 = new_Send((Optr)PSend20086, SMB_abs, 0);
    Assign PAssign20084 = new_Assign((Optr)VAR_d_0_1, (Optr)PSend20085);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20089 = new_Send((Optr)self, SMB_hours, 0);
    // abs. 
    Send PSend20088 = new_Send((Optr)PSend20089, SMB_abs, 0);
    Assign PAssign20087 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20088);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20092 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend20091 = new_Send((Optr)PSend20092, SMB_abs, 0);
    Assign PAssign20090 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20091);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20095 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend20094 = new_Send((Optr)PSend20095, SMB_abs, 0);
    Assign PAssign20093 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20094);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20096 = new_Send((Optr)self, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_2182 = new_Character(L'-');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    // <<. 
    Send PSend20100 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    Array PThreadedCode20099 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend20100, (Optr)&t_block_return);
    Block PBlock20098 = new_Block_with(empty_Array, empty_Array, PThreadedCode20099, 1, PSend20100);
    // ifTrue:. 
    Send PSend20097 = new_Send((Optr)PSend20096, SMB_ifTrue_, 1, (Optr)PBlock20098);
    // printOn:. 
    Send PSend20101 = new_Send((Optr)VAR_d_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20102 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20103 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9124 = new_Character(L'0');
    Constant char_9124_Const = new_Constant((Optr)char_9124);
    // <<. 
    Send PSend20107 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20106 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20107, (Optr)&t_block_return);
    Block PBlock20105 = new_Block_with(empty_Array, empty_Array, PThreadedCode20106, 1, PSend20107);
    // ifTrue:. 
    Send PSend20104 = new_Send((Optr)PSend20103, SMB_ifTrue_, 1, (Optr)PBlock20105);
    // printOn:. 
    Send PSend20108 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20109 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20110 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20114 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20113 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20114, (Optr)&t_block_return);
    Block PBlock20112 = new_Block_with(empty_Array, empty_Array, PThreadedCode20113, 1, PSend20114);
    // ifTrue:. 
    Send PSend20111 = new_Send((Optr)PSend20110, SMB_ifTrue_, 1, (Optr)PBlock20112);
    // printOn:. 
    Send PSend20115 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20116 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20117 = new_Send((Optr)VAR_s_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20121 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20120 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20121, (Optr)&t_block_return);
    Block PBlock20119 = new_Block_with(empty_Array, empty_Array, PThreadedCode20120, 1, PSend20121);
    // ifTrue:. 
    Send PSend20118 = new_Send((Optr)PSend20117, SMB_ifTrue_, 1, (Optr)PBlock20119);
    // printOn:. 
    Send PSend20122 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20083 = instantiate_Array_with(ThreadedCode_Class, 0, 123, (Optr)&t_push1, (Optr)PAssign20084, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20086, (Optr)&t_send0, (Optr)PSend20085, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20087, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20089, (Optr)&t_send0, (Optr)PSend20088, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20090, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20092, (Optr)&t_send0, (Optr)PSend20091, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20093, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20095, (Optr)&t_send0, (Optr)PSend20094, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20096, (Optr)&t_send_ifTrue_, (Optr)PSend20097, (Optr)PBlock20098, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_d_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20101, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20102, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20103, (Optr)&t_send_ifTrue_, (Optr)PSend20104, (Optr)PBlock20105, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20108, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20109, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20110, (Optr)&t_send_ifTrue_, (Optr)PSend20111, (Optr)PBlock20112, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20115, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20116, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20117, (Optr)&t_send_ifTrue_, (Optr)PSend20118, (Optr)PBlock20119, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20122, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20080 = new_Method_with(PArray20081, PArray20082, empty_Array, PThreadedCode20083, 16, PAssign20084, PAssign20087, PAssign20090, PAssign20093, PSend20097, PSend20101, PSend20102, PSend20104, PSend20108, PSend20109, PSend20111, PSend20115, PSend20116, PSend20118, PSend20122, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20080, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Variable VAR_days_0_0 = new_Variable_named(L"days", 0);
    Array PArray20124 = new_Array_with(1, (Optr)VAR_days_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20127 = new_Send((Optr)self, SMB_days, 0);
    Assign PAssign20126 = new_Assign((Optr)VAR_days_0_0, (Optr)PSend20127);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20128 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20129 = new_Send((Optr)VAR_days_0_0, SMB__times_, 1, (Optr)PSend20128);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20130 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__minus_, 1, (Optr)PSend20129);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20131 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_days_0_0, (Optr)PSend20130);
    Array PThreadedCode20125 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20126, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20127, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20128, (Optr)&t_send1, (Optr)PSend20129, (Optr)&t_send1, (Optr)PSend20130, (Optr)&t_send2, (Optr)PSend20131, (Optr)&t_method_return);
    Method PMethod20123 = new_Method_with(empty_Array, PArray20124, empty_Array, PThreadedCode20125, 2, PAssign20126, PSend20131);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20123, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20134 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20135 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20134);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20136 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20137 = new_Send((Optr)PSend20135, SMB_quo_, 1, (Optr)PSend20136);
    Array PThreadedCode20133 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20134, (Optr)&t_send1, (Optr)PSend20135, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20136, (Optr)&t_send1, (Optr)PSend20137, (Optr)&t_method_return);
    Method PMethod20132 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20133, 1, PSend20137);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20132, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_days() {
    Symbol SMB_days = new_Symbol(L"days");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20140 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20141 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_quo_, 1, (Optr)PSend20140);
    Array PThreadedCode20139 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20140, (Optr)&t_send1, (Optr)PSend20141, (Optr)&t_method_return);
    Method PMethod20138 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20139, 1, PSend20141);
    
    MethodClosure MC_SMB_days = new_MethodClosure((Method)PMethod20138, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_days, MC_SMB_days);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20143 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20145 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20146 = new_Send((Optr)self, SMB_asSeconds, 0);
    // *. 
    Send PSend20147 = new_Send((Optr)PSend20146, SMB__times_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20148 = new_Send((Optr)PSend20147, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20149 = new_Send((Optr)PSend20145, SMB_seconds_, 1, (Optr)PSend20148);
    Array PThreadedCode20144 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20145, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20146, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20147, (Optr)&t_send0, (Optr)PSend20148, (Optr)&t_send1, (Optr)PSend20149, (Optr)&t_method_return);
    Method PMethod20142 = new_Method_with(PArray20143, empty_Array, empty_Array, PThreadedCode20144, 1, PSend20149);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PMethod20142, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20151 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_isNumber = new_Symbol(L"isNumber");
    // isNumber. 
    Send PSend20153 = new_Send((Optr)VAR_operand_0_0, SMB_isNumber, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20157 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20158 = new_Send((Optr)self, SMB_asSeconds, 0);
    // /. 
    Send PSend20159 = new_Send((Optr)PSend20158, SMB__divide_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20160 = new_Send((Optr)PSend20159, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20161 = new_Send((Optr)PSend20157, SMB_seconds_, 1, (Optr)PSend20160);
    Array PThreadedCode20156 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20157, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20158, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20159, (Optr)&t_send0, (Optr)PSend20160, (Optr)&t_send1, (Optr)PSend20161, (Optr)&t_block_return);
    Block PBlock20155 = new_Block_with(empty_Array, empty_Array, PThreadedCode20156, 1, PSend20161);
    // asSeconds. 
    Send PSend20164 = new_Send((Optr)self, SMB_asSeconds, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20165 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // asSeconds. 
    Send PSend20166 = new_Send((Optr)PSend20165, SMB_asSeconds, 0);
    // /. 
    Send PSend20167 = new_Send((Optr)PSend20164, SMB__divide_, 1, (Optr)PSend20166);
    Array PThreadedCode20163 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20164, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20165, (Optr)&t_send0, (Optr)PSend20166, (Optr)&t_send1, (Optr)PSend20167, (Optr)&t_block_return);
    Block PBlock20162 = new_Block_with(empty_Array, empty_Array, PThreadedCode20163, 1, PSend20167);
    // ifTrue:ifFalse:. 
    Send PSend20154 = new_Send((Optr)PSend20153, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20155, (Optr)PBlock20162);
    Array PThreadedCode20152 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20153, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20154, (Optr)PBlock20155, (Optr)PBlock20162, (Optr)&t_method_return);
    Method PMethod20150 = new_Method_with(PArray20151, empty_Array, empty_Array, PThreadedCode20152, 1, PSend20154);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PMethod20150, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB_isZero() {
    Symbol SMB_isZero = new_Symbol(L"isZero");
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20170 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode20169 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20170, (Optr)&t_method_return);
    Method PMethod20168 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20169, 1, PSend20170);
    
    MethodClosure MC_SMB_isZero = new_MethodClosure((Method)PMethod20168, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_isZero, MC_SMB_isZero);
}


static void init_class_SMB_minutes_() {
    Symbol SMB_minutes_ = new_Symbol(L"minutes:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20172 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20174 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20175 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20174);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20176 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20175);
    Array PThreadedCode20173 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20174, (Optr)&t_send1, (Optr)PSend20175, (Optr)&t_send1, (Optr)PSend20176, (Optr)&t_method_return);
    Method PMethod20171 = new_Method_with(PArray20172, empty_Array, empty_Array, PThreadedCode20173, 1, PSend20176);
    
    MethodClosure MC_SMB_minutes_ = new_MethodClosure((Method)PMethod20171, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_minutes_, MC_SMB_minutes_);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20178 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20180 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20181 = new_Send((Optr)PSend20180, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20179 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20180, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20181, (Optr)&t_method_return);
    Method PMethod20177 = new_Method_with(PArray20178, empty_Array, empty_Array, PThreadedCode20179, 1, PSend20181);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20177, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_zero() {
    Symbol SMB_zero = new_Symbol(L"zero");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20184 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // seconds:. 
    Send PSend20185 = new_Send((Optr)PSend20184, SMB_seconds_, 1, (Optr)int_0_Const);
    Array PThreadedCode20183 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20184, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20185, (Optr)&t_method_return);
    Method PMethod20182 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20183, 1, PSend20185);
    
    MethodClosure MC_SMB_zero = new_MethodClosure((Method)PMethod20182, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_zero, MC_SMB_zero);
}


static void init_class_SMB_hours_() {
    Symbol SMB_hours_ = new_Symbol(L"hours:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20187 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20189 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20190 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20189);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20191 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20190);
    Array PThreadedCode20188 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20189, (Optr)&t_send1, (Optr)PSend20190, (Optr)&t_send1, (Optr)PSend20191, (Optr)&t_method_return);
    Method PMethod20186 = new_Method_with(PArray20187, empty_Array, empty_Array, PThreadedCode20188, 1, PSend20191);
    
    MethodClosure MC_SMB_hours_ = new_MethodClosure((Method)PMethod20186, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_hours_, MC_SMB_hours_);
}


static void init_class_SMB_days_() {
    Symbol SMB_days_ = new_Symbol(L"days:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20193 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20195 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20196 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20195);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20197 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20196);
    Array PThreadedCode20194 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20195, (Optr)&t_send1, (Optr)PSend20196, (Optr)&t_send1, (Optr)PSend20197, (Optr)&t_method_return);
    Method PMethod20192 = new_Method_with(PArray20193, empty_Array, empty_Array, PThreadedCode20194, 1, PSend20197);
    
    MethodClosure MC_SMB_days_ = new_MethodClosure((Method)PMethod20192, HEADER(Chronology_Duration_Class));
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