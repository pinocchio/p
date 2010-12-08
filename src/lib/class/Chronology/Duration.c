#include <lib/class/Chronology/Duration.h>


Optr layout_Chronology_Duration_Class_class;
Optr slot_Chronology_Duration_seconds;
Optr layout_Chronology_Duration;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20422 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20423 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20422);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20424 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20425 = new_Send((Optr)PSend20423, SMB_quo_, 1, (Optr)PSend20424);
    Array PThreadedCode20421 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20422, (Optr)&t_send1, (Optr)PSend20423, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20424, (Optr)&t_send1, (Optr)PSend20425, (Optr)&t_method_return);
    Method PMethod20420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20421, 1, PSend20425);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20420, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Array PThreadedCode20427 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_method_return);
    Method PMethod20426 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20427, 1, slot_Chronology_Duration_seconds);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20426, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20430 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20431 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20430);
    Array PThreadedCode20429 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20430, (Optr)&t_send1, (Optr)PSend20431, (Optr)&t_method_return);
    Method PMethod20428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20429, 1, PSend20431);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20428, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Array PThreadedCode20433 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20433, 1, self);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20432, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_negated() {
    Symbol SMB_negated = new_Symbol(L"negated");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20436 = new_Send((Optr)self, SMB_class, 0);
    // negated. 
    Send PSend20437 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_negated, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20438 = new_Send((Optr)PSend20436, SMB_seconds_, 1, (Optr)PSend20437);
    Array PThreadedCode20435 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20436, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20437, (Optr)&t_send1, (Optr)PSend20438, (Optr)&t_method_return);
    Method PMethod20434 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20435, 1, PSend20438);
    
    MethodClosure MC_SMB_negated = new_MethodClosure((Method)PMethod20434, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negated, MC_SMB_negated);
}


static void init_SMB_negative() {
    Symbol SMB_negative = new_Symbol(L"negative");
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20441 = new_Send((Optr)self, SMB_positive, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend20442 = new_Send((Optr)PSend20441, SMB_not, 0);
    Array PThreadedCode20440 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20441, (Optr)&t_send0, (Optr)PSend20442, (Optr)&t_method_return);
    Method PMethod20439 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20440, 1, PSend20442);
    
    MethodClosure MC_SMB_negative = new_MethodClosure((Method)PMethod20439, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negative, MC_SMB_negative);
}


static void init_SMB_positive() {
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20445 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_positive, 0);
    Array PThreadedCode20444 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20445, (Optr)&t_method_return);
    Method PMethod20443 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20444, 1, PSend20445);
    
    MethodClosure MC_SMB_positive = new_MethodClosure((Method)PMethod20443, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_positive, MC_SMB_positive);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20447 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20449 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20450 = new_Send((Optr)VAR_operand_0_0, SMB_asSeconds, 0);
    // +. 
    Send PSend20451 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__plus_, 1, (Optr)PSend20450);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20452 = new_Send((Optr)PSend20449, SMB_seconds_, 1, (Optr)PSend20451);
    Array PThreadedCode20448 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20449, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20450, (Optr)&t_send1, (Optr)PSend20451, (Optr)&t_send1, (Optr)PSend20452, (Optr)&t_method_return);
    Method PMethod20446 = new_Method_with(PArray20447, empty_Array, empty_Array, PThreadedCode20448, 1, PSend20452);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20446, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20454 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20456 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20457 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20456);
    Array PThreadedCode20455 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20456, (Optr)&t_send1, (Optr)PSend20457, (Optr)&t_method_return);
    Method PMethod20453 = new_Method_with(PArray20454, empty_Array, empty_Array, PThreadedCode20455, 1, PSend20457);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20453, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_seconds_() {
    /*
    seconds: seconds
// 	^ self basicNew seconds: seconds
    */
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20459 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Assign PAssign20461 = new_Assign((Optr)slot_Chronology_Duration_seconds, (Optr)VAR_secondCount_0_0);
    Array PThreadedCode20460 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20461, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20458 = new_Method_with(PArray20459, empty_Array, empty_Array, PThreadedCode20460, 2, PAssign20461, self);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20458, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds_, MC_SMB_seconds_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray20463 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20465 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20468 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_true);
    Block PBlock20467 = new_Block_with(empty_Array, empty_Array, PThreadedCode20468, 1, true_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20471 = new_Send((Optr)self, SMB_class, 0);
    // class. 
    Send PSend20472 = new_Send((Optr)VAR_comparand_0_0, SMB_class, 0);
    // =. 
    Send PSend20473 = new_Send((Optr)PSend20471, SMB__equals_, 1, (Optr)PSend20472);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20477 = new_Send((Optr)self, SMB_asSeconds, 0);
    // asSeconds. 
    Send PSend20478 = new_Send((Optr)VAR_comparand_0_0, SMB_asSeconds, 0);
    // =. 
    Send PSend20479 = new_Send((Optr)PSend20477, SMB__equals_, 1, (Optr)PSend20478);
    Array PThreadedCode20476 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20477, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20478, (Optr)&t_send1, (Optr)PSend20479, (Optr)&t_block_return);
    Block PBlock20475 = new_Block_with(empty_Array, empty_Array, PThreadedCode20476, 1, PSend20479);
    Array PThreadedCode20481 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock20480 = new_Block_with(empty_Array, empty_Array, PThreadedCode20481, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend20474 = new_Send((Optr)PSend20473, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20475, (Optr)PBlock20480);
    Array PThreadedCode20470 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20471, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20472, (Optr)&t_send1, (Optr)PSend20473, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20474, (Optr)PBlock20475, (Optr)PBlock20480, (Optr)&t_block_return);
    Block PBlock20469 = new_Block_with(empty_Array, empty_Array, PThreadedCode20470, 1, PSend20474);
    // ifTrue:ifFalse:. 
    Send PSend20466 = new_Send((Optr)PSend20465, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20467, (Optr)PBlock20469);
    Array PThreadedCode20464 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20465, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20466, (Optr)PBlock20467, (Optr)PBlock20469, (Optr)&t_method_return);
    Method PMethod20462 = new_Method_with(PArray20463, empty_Array, empty_Array, PThreadedCode20464, 1, PSend20466);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20462, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20483 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_d_0_1 = new_Variable_named(L"d", 0);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray20484 = new_Array_with(4, (Optr)VAR_d_0_1, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20488 = new_Send((Optr)self, SMB_days, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20487 = new_Send((Optr)PSend20488, SMB_abs, 0);
    Assign PAssign20486 = new_Assign((Optr)VAR_d_0_1, (Optr)PSend20487);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20491 = new_Send((Optr)self, SMB_hours, 0);
    // abs. 
    Send PSend20490 = new_Send((Optr)PSend20491, SMB_abs, 0);
    Assign PAssign20489 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20490);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20494 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend20493 = new_Send((Optr)PSend20494, SMB_abs, 0);
    Assign PAssign20492 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20493);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20497 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend20496 = new_Send((Optr)PSend20497, SMB_abs, 0);
    Assign PAssign20495 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20496);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20498 = new_Send((Optr)self, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_2182 = new_Character(L'-');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    // <<. 
    Send PSend20502 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    Array PThreadedCode20501 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend20502, (Optr)&t_block_return);
    Block PBlock20500 = new_Block_with(empty_Array, empty_Array, PThreadedCode20501, 1, PSend20502);
    // ifTrue:. 
    Send PSend20499 = new_Send((Optr)PSend20498, SMB_ifTrue_, 1, (Optr)PBlock20500);
    // printOn:. 
    Send PSend20503 = new_Send((Optr)VAR_d_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20504 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20505 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9456 = new_Character(L'0');
    Constant char_9456_Const = new_Constant((Optr)char_9456);
    // <<. 
    Send PSend20509 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode20508 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend20509, (Optr)&t_block_return);
    Block PBlock20507 = new_Block_with(empty_Array, empty_Array, PThreadedCode20508, 1, PSend20509);
    // ifTrue:. 
    Send PSend20506 = new_Send((Optr)PSend20505, SMB_ifTrue_, 1, (Optr)PBlock20507);
    // printOn:. 
    Send PSend20510 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20511 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20512 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20516 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode20515 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend20516, (Optr)&t_block_return);
    Block PBlock20514 = new_Block_with(empty_Array, empty_Array, PThreadedCode20515, 1, PSend20516);
    // ifTrue:. 
    Send PSend20513 = new_Send((Optr)PSend20512, SMB_ifTrue_, 1, (Optr)PBlock20514);
    // printOn:. 
    Send PSend20517 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20518 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20519 = new_Send((Optr)VAR_s_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20523 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode20522 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend20523, (Optr)&t_block_return);
    Block PBlock20521 = new_Block_with(empty_Array, empty_Array, PThreadedCode20522, 1, PSend20523);
    // ifTrue:. 
    Send PSend20520 = new_Send((Optr)PSend20519, SMB_ifTrue_, 1, (Optr)PBlock20521);
    // printOn:. 
    Send PSend20524 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20485 = instantiate_Array_with(ThreadedCode_Class, 0, 123, (Optr)&t_push1, (Optr)PAssign20486, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20488, (Optr)&t_send0, (Optr)PSend20487, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20489, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20491, (Optr)&t_send0, (Optr)PSend20490, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20492, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20494, (Optr)&t_send0, (Optr)PSend20493, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20495, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20497, (Optr)&t_send0, (Optr)PSend20496, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20498, (Optr)&t_send_ifTrue_, (Optr)PSend20499, (Optr)PBlock20500, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_d_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20504, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20505, (Optr)&t_send_ifTrue_, (Optr)PSend20506, (Optr)PBlock20507, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20510, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20511, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20512, (Optr)&t_send_ifTrue_, (Optr)PSend20513, (Optr)PBlock20514, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20517, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20518, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20519, (Optr)&t_send_ifTrue_, (Optr)PSend20520, (Optr)PBlock20521, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20524, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20482 = new_Method_with(PArray20483, PArray20484, empty_Array, PThreadedCode20485, 16, PAssign20486, PAssign20489, PAssign20492, PAssign20495, PSend20499, PSend20503, PSend20504, PSend20506, PSend20510, PSend20511, PSend20513, PSend20517, PSend20518, PSend20520, PSend20524, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20482, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Variable VAR_days_0_0 = new_Variable_named(L"days", 0);
    Array PArray20526 = new_Array_with(1, (Optr)VAR_days_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20529 = new_Send((Optr)self, SMB_days, 0);
    Assign PAssign20528 = new_Assign((Optr)VAR_days_0_0, (Optr)PSend20529);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20530 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20531 = new_Send((Optr)VAR_days_0_0, SMB__times_, 1, (Optr)PSend20530);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20532 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__minus_, 1, (Optr)PSend20531);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20533 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_days_0_0, (Optr)PSend20532);
    Array PThreadedCode20527 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20528, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20529, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20530, (Optr)&t_send1, (Optr)PSend20531, (Optr)&t_send1, (Optr)PSend20532, (Optr)&t_send2, (Optr)PSend20533, (Optr)&t_method_return);
    Method PMethod20525 = new_Method_with(empty_Array, PArray20526, empty_Array, PThreadedCode20527, 2, PAssign20528, PSend20533);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20525, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20536 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20537 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20536);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20538 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20539 = new_Send((Optr)PSend20537, SMB_quo_, 1, (Optr)PSend20538);
    Array PThreadedCode20535 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20536, (Optr)&t_send1, (Optr)PSend20537, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20538, (Optr)&t_send1, (Optr)PSend20539, (Optr)&t_method_return);
    Method PMethod20534 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20535, 1, PSend20539);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20534, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_days() {
    Symbol SMB_days = new_Symbol(L"days");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20542 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20543 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_quo_, 1, (Optr)PSend20542);
    Array PThreadedCode20541 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20542, (Optr)&t_send1, (Optr)PSend20543, (Optr)&t_method_return);
    Method PMethod20540 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20541, 1, PSend20543);
    
    MethodClosure MC_SMB_days = new_MethodClosure((Method)PMethod20540, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_days, MC_SMB_days);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20545 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20547 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20548 = new_Send((Optr)self, SMB_asSeconds, 0);
    // *. 
    Send PSend20549 = new_Send((Optr)PSend20548, SMB__times_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20550 = new_Send((Optr)PSend20549, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20551 = new_Send((Optr)PSend20547, SMB_seconds_, 1, (Optr)PSend20550);
    Array PThreadedCode20546 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20547, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20548, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20549, (Optr)&t_send0, (Optr)PSend20550, (Optr)&t_send1, (Optr)PSend20551, (Optr)&t_method_return);
    Method PMethod20544 = new_Method_with(PArray20545, empty_Array, empty_Array, PThreadedCode20546, 1, PSend20551);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PMethod20544, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20553 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_isNumber = new_Symbol(L"isNumber");
    // isNumber. 
    Send PSend20555 = new_Send((Optr)VAR_operand_0_0, SMB_isNumber, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20559 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20560 = new_Send((Optr)self, SMB_asSeconds, 0);
    // /. 
    Send PSend20561 = new_Send((Optr)PSend20560, SMB__divide_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20562 = new_Send((Optr)PSend20561, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20563 = new_Send((Optr)PSend20559, SMB_seconds_, 1, (Optr)PSend20562);
    Array PThreadedCode20558 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20559, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20560, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20561, (Optr)&t_send0, (Optr)PSend20562, (Optr)&t_send1, (Optr)PSend20563, (Optr)&t_block_return);
    Block PBlock20557 = new_Block_with(empty_Array, empty_Array, PThreadedCode20558, 1, PSend20563);
    // asSeconds. 
    Send PSend20566 = new_Send((Optr)self, SMB_asSeconds, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20567 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // asSeconds. 
    Send PSend20568 = new_Send((Optr)PSend20567, SMB_asSeconds, 0);
    // /. 
    Send PSend20569 = new_Send((Optr)PSend20566, SMB__divide_, 1, (Optr)PSend20568);
    Array PThreadedCode20565 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20566, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20567, (Optr)&t_send0, (Optr)PSend20568, (Optr)&t_send1, (Optr)PSend20569, (Optr)&t_block_return);
    Block PBlock20564 = new_Block_with(empty_Array, empty_Array, PThreadedCode20565, 1, PSend20569);
    // ifTrue:ifFalse:. 
    Send PSend20556 = new_Send((Optr)PSend20555, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20557, (Optr)PBlock20564);
    Array PThreadedCode20554 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20555, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20556, (Optr)PBlock20557, (Optr)PBlock20564, (Optr)&t_method_return);
    Method PMethod20552 = new_Method_with(PArray20553, empty_Array, empty_Array, PThreadedCode20554, 1, PSend20556);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PMethod20552, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB_isZero() {
    Symbol SMB_isZero = new_Symbol(L"isZero");
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20572 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode20571 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20572, (Optr)&t_method_return);
    Method PMethod20570 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20571, 1, PSend20572);
    
    MethodClosure MC_SMB_isZero = new_MethodClosure((Method)PMethod20570, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_isZero, MC_SMB_isZero);
}


static void init_class_SMB_minutes_() {
    Symbol SMB_minutes_ = new_Symbol(L"minutes:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20574 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20576 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20577 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20576);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20578 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20577);
    Array PThreadedCode20575 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20576, (Optr)&t_send1, (Optr)PSend20577, (Optr)&t_send1, (Optr)PSend20578, (Optr)&t_method_return);
    Method PMethod20573 = new_Method_with(PArray20574, empty_Array, empty_Array, PThreadedCode20575, 1, PSend20578);
    
    MethodClosure MC_SMB_minutes_ = new_MethodClosure((Method)PMethod20573, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_minutes_, MC_SMB_minutes_);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20580 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20582 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20583 = new_Send((Optr)PSend20582, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20581 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20582, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20583, (Optr)&t_method_return);
    Method PMethod20579 = new_Method_with(PArray20580, empty_Array, empty_Array, PThreadedCode20581, 1, PSend20583);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20579, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_zero() {
    Symbol SMB_zero = new_Symbol(L"zero");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20586 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // seconds:. 
    Send PSend20587 = new_Send((Optr)PSend20586, SMB_seconds_, 1, (Optr)int_0_Const);
    Array PThreadedCode20585 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20586, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20587, (Optr)&t_method_return);
    Method PMethod20584 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20585, 1, PSend20587);
    
    MethodClosure MC_SMB_zero = new_MethodClosure((Method)PMethod20584, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_zero, MC_SMB_zero);
}


static void init_class_SMB_hours_() {
    Symbol SMB_hours_ = new_Symbol(L"hours:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20589 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20591 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20592 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20591);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20593 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20592);
    Array PThreadedCode20590 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20591, (Optr)&t_send1, (Optr)PSend20592, (Optr)&t_send1, (Optr)PSend20593, (Optr)&t_method_return);
    Method PMethod20588 = new_Method_with(PArray20589, empty_Array, empty_Array, PThreadedCode20590, 1, PSend20593);
    
    MethodClosure MC_SMB_hours_ = new_MethodClosure((Method)PMethod20588, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_hours_, MC_SMB_hours_);
}


static void init_class_SMB_days_() {
    Symbol SMB_days_ = new_Symbol(L"days:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20595 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20597 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20598 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20597);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20599 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20598);
    Array PThreadedCode20596 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20597, (Optr)&t_send1, (Optr)PSend20598, (Optr)&t_send1, (Optr)PSend20599, (Optr)&t_method_return);
    Method PMethod20594 = new_Method_with(PArray20595, empty_Array, empty_Array, PThreadedCode20596, 1, PSend20599);
    
    MethodClosure MC_SMB_days_ = new_MethodClosure((Method)PMethod20594, HEADER(Chronology_Duration_Class));
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