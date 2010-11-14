#include <lib/class/Chronology/Time.h>


Optr layout_Chronology_Time_Class_class;
Optr slot_Chronology_Time_seconds;
Optr layout_Chronology_Time;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20473 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20472 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20473, (Optr)&t_method_return);
    Method PMethod20471 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20472, 1, PSend20473);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20471, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20476 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20475 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20476, (Optr)&t_method_return);
    Method PMethod20474 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20475, 1, PSend20476);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20474, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_ticks_() {
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray20478 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend20481 = new_Send((Optr)VAR_anArray_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20480 = new_Assign((Optr)slot_Chronology_Time_seconds, (Optr)PSend20481);
    Array PThreadedCode20479 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign20480, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20481, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20477 = new_Method_with(PArray20478, empty_Array, empty_Array, PThreadedCode20479, 2, PAssign20480, self);
    
    MethodClosure MC_SMB_ticks_ = new_MethodClosure((Method)PMethod20477, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks_, MC_SMB_ticks_);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20484 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20483 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20484, (Optr)&t_method_return);
    Method PMethod20482 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20483, 1, PSend20484);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20482, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20487 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20486 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send1, (Optr)PSend20487, (Optr)&t_method_return);
    Method PMethod20485 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20486, 1, PSend20487);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20485, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_print24_showSeconds_on_() {
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_showSeconds_0_1 = new_Variable_named(L"showSeconds", 0);
    Variable VAR_aStream_0_2 = new_Variable_named(L"aStream", 0);
    Array PArray20489 = new_Array_with(3, (Optr)VAR_hr24_0_0, (Optr)VAR_showSeconds_0_1, (Optr)VAR_aStream_0_2);
    Variable VAR_h_0_3 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_4 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_5 = new_Variable_named(L"s", 0);
    Array PArray20490 = new_Array_with(3, (Optr)VAR_h_0_3, (Optr)VAR_m_0_4, (Optr)VAR_s_0_5);
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20493 = new_Send((Optr)self, SMB_hour, 0);
    Assign PAssign20492 = new_Assign((Optr)VAR_h_0_3, (Optr)PSend20493);
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20495 = new_Send((Optr)self, SMB_minute, 0);
    Assign PAssign20494 = new_Assign((Optr)VAR_m_0_4, (Optr)PSend20495);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20497 = new_Send((Optr)self, SMB_second, 0);
    Assign PAssign20496 = new_Assign((Optr)VAR_s_0_5, (Optr)PSend20497);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20501 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9397 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9397_Const = new_Constant((Optr)char_9397);
    // <<. 
    Send PSend20505 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode20504 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend20505, (Optr)&t_block_return);
    Block PBlock20503 = new_Block_with(empty_Array, empty_Array, PThreadedCode20504, 1, PSend20505);
    // ifTrue:. 
    Send PSend20502 = new_Send((Optr)PSend20501, SMB_ifTrue_, 1, (Optr)PBlock20503);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20506 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20500 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20501, (Optr)&t_send_ifTrue_, (Optr)PSend20502, (Optr)PBlock20503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20506, (Optr)&t_block_return);
    Block PBlock20499 = new_Block_with(empty_Array, empty_Array, PThreadedCode20500, 2, PSend20502, PSend20506);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_12_Const = new_Constant((Optr)int_12);
    // >. 
    Send PSend20509 = new_Send((Optr)VAR_h_0_3, SMB__gt_, 1, (Optr)int_12_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20513 = new_Send((Optr)VAR_h_0_3, SMB__minus_, 1, (Optr)int_12_Const);
    // printOn:. 
    Send PSend20514 = new_Send((Optr)PSend20513, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20512 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20513, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20514, (Optr)&t_block_return);
    Block PBlock20511 = new_Block_with(empty_Array, empty_Array, PThreadedCode20512, 1, PSend20514);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend20517 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_1_Const);
    // printOn:. 
    Send PSend20521 = new_Send((Optr)int_12_Const, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20520 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20521, (Optr)&t_block_return);
    Block PBlock20519 = new_Block_with(empty_Array, empty_Array, PThreadedCode20520, 1, PSend20521);
    // printOn:. 
    Send PSend20524 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20523 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20524, (Optr)&t_block_return);
    Block PBlock20522 = new_Block_with(empty_Array, empty_Array, PThreadedCode20523, 1, PSend20524);
    // ifTrue:ifFalse:. 
    Send PSend20518 = new_Send((Optr)PSend20517, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20519, (Optr)PBlock20522);
    Array PThreadedCode20516 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20517, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20518, (Optr)PBlock20519, (Optr)PBlock20522, (Optr)&t_block_return);
    Block PBlock20515 = new_Block_with(empty_Array, empty_Array, PThreadedCode20516, 1, PSend20518);
    // ifTrue:ifFalse:. 
    Send PSend20510 = new_Send((Optr)PSend20509, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20511, (Optr)PBlock20515);
    Array PThreadedCode20508 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20509, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20510, (Optr)PBlock20511, (Optr)PBlock20515, (Optr)&t_block_return);
    Block PBlock20507 = new_Block_with(empty_Array, empty_Array, PThreadedCode20508, 1, PSend20510);
    // ifTrue:ifFalse:. 
    Send PSend20498 = new_Send((Optr)VAR_hr24_0_0, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20499, (Optr)PBlock20507);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20525 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20526 = new_Send((Optr)VAR_m_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20530 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode20529 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend20530, (Optr)&t_block_return);
    Block PBlock20528 = new_Block_with(empty_Array, empty_Array, PThreadedCode20529, 1, PSend20530);
    // ifTrue:. 
    Send PSend20527 = new_Send((Optr)PSend20526, SMB_ifTrue_, 1, (Optr)PBlock20528);
    // printOn:. 
    Send PSend20531 = new_Send((Optr)VAR_m_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    // <<. 
    Send PSend20535 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20536 = new_Send((Optr)VAR_s_0_5, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20540 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode20539 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend20540, (Optr)&t_block_return);
    Block PBlock20538 = new_Block_with(empty_Array, empty_Array, PThreadedCode20539, 1, PSend20540);
    // ifTrue:. 
    Send PSend20537 = new_Send((Optr)PSend20536, SMB_ifTrue_, 1, (Optr)PBlock20538);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20541 = new_Send((Optr)VAR_s_0_5, SMB_asInteger, 0);
    // printOn:. 
    Send PSend20542 = new_Send((Optr)PSend20541, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20534 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20535, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20536, (Optr)&t_send_ifTrue_, (Optr)PSend20537, (Optr)PBlock20538, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_send0, (Optr)PSend20541, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20542, (Optr)&t_block_return);
    Block PBlock20533 = new_Block_with(empty_Array, empty_Array, PThreadedCode20534, 3, PSend20535, PSend20537, PSend20542);
    // ifTrue:. 
    Send PSend20532 = new_Send((Optr)VAR_showSeconds_0_1, SMB_ifTrue_, 1, (Optr)PBlock20533);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // <. 
    Send PSend20546 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_12_Const);
    String string_20550 = new_String(L" am");
    Constant string_20550_Const = new_Constant((Optr)string_20550);
    // <<. 
    Send PSend20551 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20550_Const);
    Array PThreadedCode20549 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20550, (Optr)&t_send1, (Optr)PSend20551, (Optr)&t_block_return);
    Block PBlock20548 = new_Block_with(empty_Array, empty_Array, PThreadedCode20549, 1, PSend20551);
    String string_20554 = new_String(L" pm");
    Constant string_20554_Const = new_Constant((Optr)string_20554);
    // <<. 
    Send PSend20555 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20554_Const);
    Array PThreadedCode20553 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20554, (Optr)&t_send1, (Optr)PSend20555, (Optr)&t_block_return);
    Block PBlock20552 = new_Block_with(empty_Array, empty_Array, PThreadedCode20553, 1, PSend20555);
    // ifTrue:ifFalse:. 
    Send PSend20547 = new_Send((Optr)PSend20546, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20548, (Optr)PBlock20552);
    Array PThreadedCode20545 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20546, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20547, (Optr)PBlock20548, (Optr)PBlock20552, (Optr)&t_block_return);
    Block PBlock20544 = new_Block_with(empty_Array, empty_Array, PThreadedCode20545, 1, PSend20547);
    // ifFalse:. 
    Send PSend20543 = new_Send((Optr)VAR_hr24_0_0, SMB_ifFalse_, 1, (Optr)PBlock20544);
    Array PThreadedCode20491 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign20492, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20493, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20494, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20495, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20496, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20497, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20498, (Optr)PBlock20499, (Optr)PBlock20507, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20525, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20526, (Optr)&t_send_ifTrue_, (Optr)PSend20527, (Optr)PBlock20528, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20531, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_showSeconds_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20532, (Optr)PBlock20533, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifFalse_, (Optr)PSend20543, (Optr)PBlock20544, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20488 = new_Method_with(PArray20489, PArray20490, empty_Array, PThreadedCode20491, 10, PAssign20492, PAssign20494, PAssign20496, PSend20498, PSend20525, PSend20527, PSend20531, PSend20532, PSend20543, self);
    
    MethodClosure MC_SMB_print24_showSeconds_on_ = new_MethodClosure((Method)PMethod20488, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_showSeconds_on_, MC_SMB_print24_showSeconds_on_);
}


static void init_SMB_print24_on_() {
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray20557 = new_Array_with(2, (Optr)VAR_hr24_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20559 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)VAR_hr24_0_0, (Optr)true_Const, (Optr)VAR_aStream_0_1);
    Array PThreadedCode20558 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send3, (Optr)PSend20559, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20556 = new_Method_with(PArray20557, empty_Array, empty_Array, PThreadedCode20558, 2, PSend20559, self);
    
    MethodClosure MC_SMB_print24_on_ = new_MethodClosure((Method)PMethod20556, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_on_, MC_SMB_print24_on_);
}


static void init_SMB_print24() {
    Symbol SMB_print24 = new_Symbol(L"print24");
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray20563 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    // print24:on:. 
    Send PSend20565 = new_Send((Optr)self, SMB_print24_on_, 2, (Optr)true_Const, (Optr)VAR_aStream_1_0);
    Array PThreadedCode20564 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send2, (Optr)PSend20565, (Optr)&t_method_return);
    Block PBlock20562 = new_Block_with(PArray20563, empty_Array, PThreadedCode20564, 1, PSend20565);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend20566 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock20562);
    Array PThreadedCode20561 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock20562, (Optr)&t_send1, (Optr)PSend20566, (Optr)&t_method_return);
    Method PMethod20560 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20561, 1, PSend20566);
    
    MethodClosure MC_SMB_print24 = new_MethodClosure((Method)PMethod20560, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24, MC_SMB_print24);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20568 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20570 = new_Send((Optr)self, SMB_second, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20571 = new_Send((Optr)PSend20570, SMB__notEquals_, 1, (Optr)int_0_Const);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20572 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)false_Const, (Optr)PSend20571, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20569 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20570, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20571, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send3, (Optr)PSend20572, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20567 = new_Method_with(PArray20568, empty_Array, empty_Array, PThreadedCode20569, 2, PSend20572, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20567, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20575 = new_Send((Optr)DateAndTime_classReference, SMB_today, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20576 = new_Send((Optr)PSend20575, SMB__plus_, 1, (Optr)self);
    Array PThreadedCode20574 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20575, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20576, (Optr)&t_method_return);
    Method PMethod20573 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20574, 1, PSend20576);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20573, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20579 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20580 = new_Send((Optr)PSend20579, SMB_seconds, 0);
    Array PThreadedCode20578 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20579, (Optr)&t_send0, (Optr)PSend20580, (Optr)&t_method_return);
    Method PMethod20577 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20578, 1, PSend20580);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20577, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // with:with:. 
    Send PSend20583 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)int_0_Const, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20582 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send2, (Optr)PSend20583, (Optr)&t_method_return);
    Method PMethod20581 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20582, 1, PSend20583);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20581, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20586 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20587 = new_Send((Optr)PSend20586, SMB_hours, 0);
    Array PThreadedCode20585 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20586, (Optr)&t_send0, (Optr)PSend20587, (Optr)&t_method_return);
    Method PMethod20584 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20585, 1, PSend20587);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20584, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20590 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20589 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20590, (Optr)&t_method_return);
    Method PMethod20588 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20589, 1, PSend20590);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20588, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20593 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20594 = new_Send((Optr)PSend20593, SMB_minutes, 0);
    Array PThreadedCode20592 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20593, (Optr)&t_send0, (Optr)PSend20594, (Optr)&t_method_return);
    Method PMethod20591 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20592, 1, PSend20594);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20591, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minute, MC_SMB_minute);
}


static void init_class_SMB_dateAndTimeFromSeconds_() {
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20596 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20598 = new_Send((Optr)Date_classReference, SMB_fromSeconds_, 1, (Optr)VAR_secondCount_0_0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20599 = new_Send((Optr)VAR_secondCount_0_0, SMB__modulo_, 1, (Optr)int_86400_Const);
    // fromSeconds:. 
    Send PSend20600 = new_Send((Optr)Time_classReference, SMB_fromSeconds_, 1, (Optr)PSend20599);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20601 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend20598, (Optr)PSend20600);
    Array PThreadedCode20597 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_send1, (Optr)PSend20598, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20599, (Optr)&t_send1, (Optr)PSend20600, (Optr)&t_send2, (Optr)PSend20601, (Optr)&t_method_return);
    Method PMethod20595 = new_Method_with(PArray20596, empty_Array, empty_Array, PThreadedCode20597, 1, PSend20601);
    
    MethodClosure MC_SMB_dateAndTimeFromSeconds_ = new_MethodClosure((Method)PMethod20595, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeFromSeconds_, MC_SMB_dateAndTimeFromSeconds_);
}


static void init_class_SMB_primInitialize() {
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20605 = new_String(L"\n\tgettimeofday(&start_timeval, NULL);\n\t");
    Annotation PAnnotation20604 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_initialize, (Optr)SMB_Chronology_minus_Time, (Optr)string_20605);
    Array PArray20603 = new_Array_with(1, (Optr)PAnnotation20604);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20607 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20606 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20607, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20602 = new_NativeMethod_with(empty_Array, empty_Array, PArray20603, PThreadedCode20606, 2, PSend20607, self);
    
    MethodClosure MC_SMB_primInitialize = new_MethodClosure((Method)PNativeMethod20602, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primInitialize, MC_SMB_primInitialize);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20610 = new_String(L"plugin/chronology/Time.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Chronology_minus_Time_Const = new_Constant((Optr)SMB_Chronology_minus_Time);
    Constant string_20610_Const = new_Constant((Optr)string_20610);
    // require:at:. 
    Send PSend20611 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Chronology_minus_Time_Const, (Optr)string_20610_Const);
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    // primInitialize. 
    Send PSend20612 = new_Send((Optr)self, SMB_primInitialize, 0);
    Array PThreadedCode20609 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Chronology_minus_Time, (Optr)&t_push1, (Optr)string_20610, (Optr)&t_send2, (Optr)PSend20611, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20612, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20608 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20609, 3, PSend20611, PSend20612, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod20608, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_primMillisecondClock() {
    Symbol SMB_primMillisecondClock = new_Symbol(L"primMillisecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_millisecondClock = new_Symbol(L"millisecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20616 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 + micro_seconds / 1000);\n\t");
    Annotation PAnnotation20615 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_millisecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20616);
    Array PArray20614 = new_Array_with(1, (Optr)PAnnotation20615);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20618 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20617 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20618, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20613 = new_NativeMethod_with(empty_Array, empty_Array, PArray20614, PThreadedCode20617, 2, PSend20618, self);
    
    MethodClosure MC_SMB_primMillisecondClock = new_MethodClosure((Method)PNativeMethod20613, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMillisecondClock, MC_SMB_primMillisecondClock);
}


static void init_class_SMB_primSecondsClock() {
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_secondsClock = new_Symbol(L"secondsClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20622 = new_String(L"\n    long seconds;\n    seconds = (long)time(NULL);\n    seconds += 2177452800;\n\t^wrap_int(seconds);\n\t");
    Annotation PAnnotation20621 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_secondsClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20622);
    Array PArray20620 = new_Array_with(1, (Optr)PAnnotation20621);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20624 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20623 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20624, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20619 = new_NativeMethod_with(empty_Array, empty_Array, PArray20620, PThreadedCode20623, 2, PSend20624, self);
    
    MethodClosure MC_SMB_primSecondsClock = new_MethodClosure((Method)PNativeMethod20619, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primSecondsClock, MC_SMB_primSecondsClock);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20626 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20628 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20629 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20630 = new_Send((Optr)PSend20629, SMB_ticks, 0);
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    // ticks:. 
    Send PSend20631 = new_Send((Optr)PSend20628, SMB_ticks_, 1, (Optr)PSend20630);
    Array PThreadedCode20627 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20628, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20629, (Optr)&t_send0, (Optr)PSend20630, (Optr)&t_send1, (Optr)PSend20631, (Optr)&t_method_return);
    Method PMethod20625 = new_Method_with(PArray20626, empty_Array, empty_Array, PThreadedCode20627, 1, PSend20631);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20625, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20634 = new_Send((Optr)self, SMB_totalSeconds, 0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20635 = new_Send((Optr)PSend20634, SMB__modulo_, 1, (Optr)int_86400_Const);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20636 = new_Send((Optr)self, SMB_fromSeconds_, 1, (Optr)PSend20635);
    Array PThreadedCode20633 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20634, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20635, (Optr)&t_send1, (Optr)PSend20636, (Optr)&t_method_return);
    Method PMethod20632 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20633, 1, PSend20636);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod20632, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20639 = new_Send((Optr)Date_classReference, SMB_today, 0);
    Array PThreadedCode20638 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_send0, (Optr)PSend20639, (Optr)&t_method_return);
    Method PMethod20637 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20638, 1, PSend20639);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20637, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_asDate, MC_SMB_asDate);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20641 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20643 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20642 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20643, (Optr)&t_method_return);
    Method PMethod20640 = new_Method_with(PArray20641, empty_Array, empty_Array, PThreadedCode20642, 1, PSend20643);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20640, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    // primSecondsClock. 
    Send PSend20646 = new_Send((Optr)self, SMB_primSecondsClock, 0);
    Array PThreadedCode20645 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20646, (Optr)&t_method_return);
    Method PMethod20644 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20645, 1, PSend20646);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod20644, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_totalSeconds, MC_SMB_totalSeconds);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20649 = new_Send((Optr)self, SMB_totalSeconds, 0);
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    // dateAndTimeFromSeconds:. 
    Send PSend20650 = new_Send((Optr)self, SMB_dateAndTimeFromSeconds_, 1, (Optr)PSend20649);
    Array PThreadedCode20648 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20649, (Optr)&t_send1, (Optr)PSend20650, (Optr)&t_method_return);
    Method PMethod20647 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20648, 1, PSend20650);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20647, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeNow, MC_SMB_dateAndTimeNow);
}


static void init_class_SMB_primMicrosecondClock() {
    Symbol SMB_primMicrosecondClock = new_Symbol(L"primMicrosecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_microsecondClock = new_Symbol(L"microsecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20654 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 * 1000 + micro_seconds);\n\t");
    Annotation PAnnotation20653 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_microsecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20654);
    Array PArray20652 = new_Array_with(1, (Optr)PAnnotation20653);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20656 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20655 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20656, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20651 = new_NativeMethod_with(empty_Array, empty_Array, PArray20652, PThreadedCode20655, 2, PSend20656, self);
    
    MethodClosure MC_SMB_primMicrosecondClock = new_MethodClosure((Method)PNativeMethod20651, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMicrosecondClock, MC_SMB_primMicrosecondClock);
}

void init_Chronology_Time_layout() {
    layout_Chronology_Time_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Chronology_Time_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Chronology_Time_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Chronology_Time_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Chronology_Time_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Chronology_Time_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Time = new_Symbol(L"Time");
    slot_Chronology_Time_seconds = (Optr)new_Slot(0, L"seconds");
    layout_Chronology_Time = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Chronology_Time)->values[0] = slot_Chronology_Time_seconds; // seconds 
    Chronology_Time_Class = (Class)new_Class(Object_Class, layout_Chronology_Time_Class_class);
    Class_set_superclass(Chronology_Time_Class, Object_Class);
    Chronology_Time_Class->layout = layout_Chronology_Time;
    HEADER(Chronology_Time_Class)->layout = layout_Chronology_Time_Class_class;
    Chronology_Time_Class->name = SMB_Time;
    
}

void init_Chronology_Time_methods() {
    init_SMB_minutes();
    init_SMB_seconds();
    init_SMB_ticks_();
    init_SMB_hour();
    init_SMB_asDuration();
    init_SMB_print24_showSeconds_on_();
    init_SMB_print24_on_();
    init_SMB_print24();
    init_SMB_printOn_();
    init_SMB_asDateAndTime();
    init_SMB_second();
    init_SMB_ticks();
    init_SMB_hour24();
    init_SMB_hours();
    init_SMB_minute();
    init_class_SMB_dateAndTimeFromSeconds_();
    init_class_SMB_primInitialize();
    init_class_SMB_initialize();
    init_class_SMB_primMillisecondClock();
    init_class_SMB_primSecondsClock();
    init_class_SMB_seconds_();
    init_class_SMB_now();
    init_class_SMB_asDate();
    init_class_SMB_fromSeconds_();
    init_class_SMB_totalSeconds();
    init_class_SMB_dateAndTimeNow();
    init_class_SMB_primMicrosecondClock();
    
}