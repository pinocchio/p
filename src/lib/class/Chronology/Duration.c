#include <lib/class/Chronology/Duration.h>


Optr layout_Chronology_Duration_Class_class;
Optr slot_Chronology_Duration_seconds;
Optr layout_Chronology_Duration;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20293 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20294 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20293);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20295 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20296 = new_Send((Optr)PSend20294, SMB_quo_, 1, (Optr)PSend20295);
    Array PThreadedCode20292 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20293, (Optr)&t_send1, (Optr)PSend20294, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20295, (Optr)&t_send1, (Optr)PSend20296, (Optr)&t_method_return);
    Method PMethod20291 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20292, 1, PSend20296);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20291, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Array PThreadedCode20298 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_method_return);
    Method PMethod20297 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20298, 1, slot_Chronology_Duration_seconds);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20297, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20301 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20302 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20301);
    Array PThreadedCode20300 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20301, (Optr)&t_send1, (Optr)PSend20302, (Optr)&t_method_return);
    Method PMethod20299 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20300, 1, PSend20302);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20299, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Array PThreadedCode20304 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20303 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20304, 1, self);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20303, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_negated() {
    Symbol SMB_negated = new_Symbol(L"negated");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20307 = new_Send((Optr)self, SMB_class, 0);
    // negated. 
    Send PSend20308 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_negated, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20309 = new_Send((Optr)PSend20307, SMB_seconds_, 1, (Optr)PSend20308);
    Array PThreadedCode20306 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20307, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20308, (Optr)&t_send1, (Optr)PSend20309, (Optr)&t_method_return);
    Method PMethod20305 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20306, 1, PSend20309);
    
    MethodClosure MC_SMB_negated = new_MethodClosure((Method)PMethod20305, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negated, MC_SMB_negated);
}


static void init_SMB_negative() {
    Symbol SMB_negative = new_Symbol(L"negative");
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20312 = new_Send((Optr)self, SMB_positive, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend20313 = new_Send((Optr)PSend20312, SMB_not, 0);
    Array PThreadedCode20311 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20312, (Optr)&t_send0, (Optr)PSend20313, (Optr)&t_method_return);
    Method PMethod20310 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20311, 1, PSend20313);
    
    MethodClosure MC_SMB_negative = new_MethodClosure((Method)PMethod20310, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negative, MC_SMB_negative);
}


static void init_SMB_positive() {
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20316 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_positive, 0);
    Array PThreadedCode20315 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20316, (Optr)&t_method_return);
    Method PMethod20314 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20315, 1, PSend20316);
    
    MethodClosure MC_SMB_positive = new_MethodClosure((Method)PMethod20314, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_positive, MC_SMB_positive);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20318 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20320 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20321 = new_Send((Optr)VAR_operand_0_0, SMB_asSeconds, 0);
    // +. 
    Send PSend20322 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__plus_, 1, (Optr)PSend20321);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20323 = new_Send((Optr)PSend20320, SMB_seconds_, 1, (Optr)PSend20322);
    Array PThreadedCode20319 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20320, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20321, (Optr)&t_send1, (Optr)PSend20322, (Optr)&t_send1, (Optr)PSend20323, (Optr)&t_method_return);
    Method PMethod20317 = new_Method_with(PArray20318, empty_Array, empty_Array, PThreadedCode20319, 1, PSend20323);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20317, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20325 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20327 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20328 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20327);
    Array PThreadedCode20326 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20327, (Optr)&t_send1, (Optr)PSend20328, (Optr)&t_method_return);
    Method PMethod20324 = new_Method_with(PArray20325, empty_Array, empty_Array, PThreadedCode20326, 1, PSend20328);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20324, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_seconds_() {
    /*
    seconds: seconds
// 	^ self basicNew seconds: seconds
    */
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20330 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Assign PAssign20332 = new_Assign((Optr)slot_Chronology_Duration_seconds, (Optr)VAR_secondCount_0_0);
    Array PThreadedCode20331 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20332, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20329 = new_Method_with(PArray20330, empty_Array, empty_Array, PThreadedCode20331, 2, PAssign20332, self);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20329, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds_, MC_SMB_seconds_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray20334 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20336 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20339 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_true);
    Block PBlock20338 = new_Block_with(empty_Array, empty_Array, PThreadedCode20339, 1, true_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20342 = new_Send((Optr)self, SMB_class, 0);
    // class. 
    Send PSend20343 = new_Send((Optr)VAR_comparand_0_0, SMB_class, 0);
    // =. 
    Send PSend20344 = new_Send((Optr)PSend20342, SMB__equals_, 1, (Optr)PSend20343);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20348 = new_Send((Optr)self, SMB_asSeconds, 0);
    // asSeconds. 
    Send PSend20349 = new_Send((Optr)VAR_comparand_0_0, SMB_asSeconds, 0);
    // =. 
    Send PSend20350 = new_Send((Optr)PSend20348, SMB__equals_, 1, (Optr)PSend20349);
    Array PThreadedCode20347 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20348, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20349, (Optr)&t_send1, (Optr)PSend20350, (Optr)&t_block_return);
    Block PBlock20346 = new_Block_with(empty_Array, empty_Array, PThreadedCode20347, 1, PSend20350);
    Array PThreadedCode20352 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock20351 = new_Block_with(empty_Array, empty_Array, PThreadedCode20352, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend20345 = new_Send((Optr)PSend20344, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20346, (Optr)PBlock20351);
    Array PThreadedCode20341 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20342, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20343, (Optr)&t_send1, (Optr)PSend20344, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20345, (Optr)PBlock20346, (Optr)PBlock20351, (Optr)&t_block_return);
    Block PBlock20340 = new_Block_with(empty_Array, empty_Array, PThreadedCode20341, 1, PSend20345);
    // ifTrue:ifFalse:. 
    Send PSend20337 = new_Send((Optr)PSend20336, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20338, (Optr)PBlock20340);
    Array PThreadedCode20335 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20336, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20337, (Optr)PBlock20338, (Optr)PBlock20340, (Optr)&t_method_return);
    Method PMethod20333 = new_Method_with(PArray20334, empty_Array, empty_Array, PThreadedCode20335, 1, PSend20337);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20333, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20354 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_d_0_1 = new_Variable_named(L"d", 0);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray20355 = new_Array_with(4, (Optr)VAR_d_0_1, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20359 = new_Send((Optr)self, SMB_days, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20358 = new_Send((Optr)PSend20359, SMB_abs, 0);
    Assign PAssign20357 = new_Assign((Optr)VAR_d_0_1, (Optr)PSend20358);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20362 = new_Send((Optr)self, SMB_hours, 0);
    // abs. 
    Send PSend20361 = new_Send((Optr)PSend20362, SMB_abs, 0);
    Assign PAssign20360 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20361);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20365 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend20364 = new_Send((Optr)PSend20365, SMB_abs, 0);
    Assign PAssign20363 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20364);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20368 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend20367 = new_Send((Optr)PSend20368, SMB_abs, 0);
    Assign PAssign20366 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20367);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20369 = new_Send((Optr)self, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_2179 = new_Character(L'-');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2179_Const = new_Constant((Optr)char_2179);
    // <<. 
    Send PSend20373 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2179_Const);
    Array PThreadedCode20372 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2179, (Optr)&t_send1, (Optr)PSend20373, (Optr)&t_block_return);
    Block PBlock20371 = new_Block_with(empty_Array, empty_Array, PThreadedCode20372, 1, PSend20373);
    // ifTrue:. 
    Send PSend20370 = new_Send((Optr)PSend20369, SMB_ifTrue_, 1, (Optr)PBlock20371);
    // printOn:. 
    Send PSend20374 = new_Send((Optr)VAR_d_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20375 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20376 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9397 = new_Character(L'0');
    Constant char_9397_Const = new_Constant((Optr)char_9397);
    // <<. 
    Send PSend20380 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode20379 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend20380, (Optr)&t_block_return);
    Block PBlock20378 = new_Block_with(empty_Array, empty_Array, PThreadedCode20379, 1, PSend20380);
    // ifTrue:. 
    Send PSend20377 = new_Send((Optr)PSend20376, SMB_ifTrue_, 1, (Optr)PBlock20378);
    // printOn:. 
    Send PSend20381 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20382 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20383 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20387 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode20386 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend20387, (Optr)&t_block_return);
    Block PBlock20385 = new_Block_with(empty_Array, empty_Array, PThreadedCode20386, 1, PSend20387);
    // ifTrue:. 
    Send PSend20384 = new_Send((Optr)PSend20383, SMB_ifTrue_, 1, (Optr)PBlock20385);
    // printOn:. 
    Send PSend20388 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20389 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20390 = new_Send((Optr)VAR_s_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20394 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode20393 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend20394, (Optr)&t_block_return);
    Block PBlock20392 = new_Block_with(empty_Array, empty_Array, PThreadedCode20393, 1, PSend20394);
    // ifTrue:. 
    Send PSend20391 = new_Send((Optr)PSend20390, SMB_ifTrue_, 1, (Optr)PBlock20392);
    // printOn:. 
    Send PSend20395 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20356 = instantiate_Array_with(ThreadedCode_Class, 0, 123, (Optr)&t_push1, (Optr)PAssign20357, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20359, (Optr)&t_send0, (Optr)PSend20358, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20360, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20362, (Optr)&t_send0, (Optr)PSend20361, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20363, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20365, (Optr)&t_send0, (Optr)PSend20364, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20366, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20368, (Optr)&t_send0, (Optr)PSend20367, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20369, (Optr)&t_send_ifTrue_, (Optr)PSend20370, (Optr)PBlock20371, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_d_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20374, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20375, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20376, (Optr)&t_send_ifTrue_, (Optr)PSend20377, (Optr)PBlock20378, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20381, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20382, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20383, (Optr)&t_send_ifTrue_, (Optr)PSend20384, (Optr)PBlock20385, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20388, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20389, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20390, (Optr)&t_send_ifTrue_, (Optr)PSend20391, (Optr)PBlock20392, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20395, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20353 = new_Method_with(PArray20354, PArray20355, empty_Array, PThreadedCode20356, 16, PAssign20357, PAssign20360, PAssign20363, PAssign20366, PSend20370, PSend20374, PSend20375, PSend20377, PSend20381, PSend20382, PSend20384, PSend20388, PSend20389, PSend20391, PSend20395, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20353, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Variable VAR_days_0_0 = new_Variable_named(L"days", 0);
    Array PArray20397 = new_Array_with(1, (Optr)VAR_days_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20400 = new_Send((Optr)self, SMB_days, 0);
    Assign PAssign20399 = new_Assign((Optr)VAR_days_0_0, (Optr)PSend20400);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20401 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20402 = new_Send((Optr)VAR_days_0_0, SMB__times_, 1, (Optr)PSend20401);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20403 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__minus_, 1, (Optr)PSend20402);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20404 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_days_0_0, (Optr)PSend20403);
    Array PThreadedCode20398 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20399, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20400, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20401, (Optr)&t_send1, (Optr)PSend20402, (Optr)&t_send1, (Optr)PSend20403, (Optr)&t_send2, (Optr)PSend20404, (Optr)&t_method_return);
    Method PMethod20396 = new_Method_with(empty_Array, PArray20397, empty_Array, PThreadedCode20398, 2, PAssign20399, PSend20404);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20396, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20407 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20408 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20407);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20409 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20410 = new_Send((Optr)PSend20408, SMB_quo_, 1, (Optr)PSend20409);
    Array PThreadedCode20406 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20407, (Optr)&t_send1, (Optr)PSend20408, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20409, (Optr)&t_send1, (Optr)PSend20410, (Optr)&t_method_return);
    Method PMethod20405 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20406, 1, PSend20410);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20405, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_days() {
    Symbol SMB_days = new_Symbol(L"days");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20413 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20414 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_quo_, 1, (Optr)PSend20413);
    Array PThreadedCode20412 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20413, (Optr)&t_send1, (Optr)PSend20414, (Optr)&t_method_return);
    Method PMethod20411 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20412, 1, PSend20414);
    
    MethodClosure MC_SMB_days = new_MethodClosure((Method)PMethod20411, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_days, MC_SMB_days);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20416 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20418 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20419 = new_Send((Optr)self, SMB_asSeconds, 0);
    // *. 
    Send PSend20420 = new_Send((Optr)PSend20419, SMB__times_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20421 = new_Send((Optr)PSend20420, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20422 = new_Send((Optr)PSend20418, SMB_seconds_, 1, (Optr)PSend20421);
    Array PThreadedCode20417 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20418, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20419, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20420, (Optr)&t_send0, (Optr)PSend20421, (Optr)&t_send1, (Optr)PSend20422, (Optr)&t_method_return);
    Method PMethod20415 = new_Method_with(PArray20416, empty_Array, empty_Array, PThreadedCode20417, 1, PSend20422);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PMethod20415, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20424 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_isNumber = new_Symbol(L"isNumber");
    // isNumber. 
    Send PSend20426 = new_Send((Optr)VAR_operand_0_0, SMB_isNumber, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20430 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20431 = new_Send((Optr)self, SMB_asSeconds, 0);
    // /. 
    Send PSend20432 = new_Send((Optr)PSend20431, SMB__divide_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20433 = new_Send((Optr)PSend20432, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20434 = new_Send((Optr)PSend20430, SMB_seconds_, 1, (Optr)PSend20433);
    Array PThreadedCode20429 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20430, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20431, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20432, (Optr)&t_send0, (Optr)PSend20433, (Optr)&t_send1, (Optr)PSend20434, (Optr)&t_block_return);
    Block PBlock20428 = new_Block_with(empty_Array, empty_Array, PThreadedCode20429, 1, PSend20434);
    // asSeconds. 
    Send PSend20437 = new_Send((Optr)self, SMB_asSeconds, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20438 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // asSeconds. 
    Send PSend20439 = new_Send((Optr)PSend20438, SMB_asSeconds, 0);
    // /. 
    Send PSend20440 = new_Send((Optr)PSend20437, SMB__divide_, 1, (Optr)PSend20439);
    Array PThreadedCode20436 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20437, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20438, (Optr)&t_send0, (Optr)PSend20439, (Optr)&t_send1, (Optr)PSend20440, (Optr)&t_block_return);
    Block PBlock20435 = new_Block_with(empty_Array, empty_Array, PThreadedCode20436, 1, PSend20440);
    // ifTrue:ifFalse:. 
    Send PSend20427 = new_Send((Optr)PSend20426, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20428, (Optr)PBlock20435);
    Array PThreadedCode20425 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20426, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20427, (Optr)PBlock20428, (Optr)PBlock20435, (Optr)&t_method_return);
    Method PMethod20423 = new_Method_with(PArray20424, empty_Array, empty_Array, PThreadedCode20425, 1, PSend20427);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PMethod20423, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB_isZero() {
    Symbol SMB_isZero = new_Symbol(L"isZero");
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20443 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode20442 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20443, (Optr)&t_method_return);
    Method PMethod20441 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20442, 1, PSend20443);
    
    MethodClosure MC_SMB_isZero = new_MethodClosure((Method)PMethod20441, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_isZero, MC_SMB_isZero);
}


static void init_class_SMB_minutes_() {
    Symbol SMB_minutes_ = new_Symbol(L"minutes:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20445 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20447 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20448 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20447);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20449 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20448);
    Array PThreadedCode20446 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20447, (Optr)&t_send1, (Optr)PSend20448, (Optr)&t_send1, (Optr)PSend20449, (Optr)&t_method_return);
    Method PMethod20444 = new_Method_with(PArray20445, empty_Array, empty_Array, PThreadedCode20446, 1, PSend20449);
    
    MethodClosure MC_SMB_minutes_ = new_MethodClosure((Method)PMethod20444, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_minutes_, MC_SMB_minutes_);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20451 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20453 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20454 = new_Send((Optr)PSend20453, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20452 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20453, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20454, (Optr)&t_method_return);
    Method PMethod20450 = new_Method_with(PArray20451, empty_Array, empty_Array, PThreadedCode20452, 1, PSend20454);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20450, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_zero() {
    Symbol SMB_zero = new_Symbol(L"zero");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20457 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // seconds:. 
    Send PSend20458 = new_Send((Optr)PSend20457, SMB_seconds_, 1, (Optr)int_0_Const);
    Array PThreadedCode20456 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20457, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20458, (Optr)&t_method_return);
    Method PMethod20455 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20456, 1, PSend20458);
    
    MethodClosure MC_SMB_zero = new_MethodClosure((Method)PMethod20455, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_zero, MC_SMB_zero);
}


static void init_class_SMB_hours_() {
    Symbol SMB_hours_ = new_Symbol(L"hours:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20460 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20462 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20463 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20462);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20464 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20463);
    Array PThreadedCode20461 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20462, (Optr)&t_send1, (Optr)PSend20463, (Optr)&t_send1, (Optr)PSend20464, (Optr)&t_method_return);
    Method PMethod20459 = new_Method_with(PArray20460, empty_Array, empty_Array, PThreadedCode20461, 1, PSend20464);
    
    MethodClosure MC_SMB_hours_ = new_MethodClosure((Method)PMethod20459, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_hours_, MC_SMB_hours_);
}


static void init_class_SMB_days_() {
    Symbol SMB_days_ = new_Symbol(L"days:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20466 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20468 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20469 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20468);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20470 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20469);
    Array PThreadedCode20467 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20468, (Optr)&t_send1, (Optr)PSend20469, (Optr)&t_send1, (Optr)PSend20470, (Optr)&t_method_return);
    Method PMethod20465 = new_Method_with(PArray20466, empty_Array, empty_Array, PThreadedCode20467, 1, PSend20470);
    
    MethodClosure MC_SMB_days_ = new_MethodClosure((Method)PMethod20465, HEADER(Chronology_Duration_Class));
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