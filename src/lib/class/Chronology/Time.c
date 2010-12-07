#include <lib/class/Chronology/Time.h>


Optr layout_Chronology_Time_Class_class;
Optr slot_Chronology_Time_seconds;
Optr layout_Chronology_Time;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20505 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20504 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20505, (Optr)&t_method_return);
    Method PMethod20503 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20504, 1, PSend20505);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20503, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20508 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20507 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20508, (Optr)&t_method_return);
    Method PMethod20506 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20507, 1, PSend20508);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20506, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_ticks_() {
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray20510 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend20513 = new_Send((Optr)VAR_anArray_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20512 = new_Assign((Optr)slot_Chronology_Time_seconds, (Optr)PSend20513);
    Array PThreadedCode20511 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign20512, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20513, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20509 = new_Method_with(PArray20510, empty_Array, empty_Array, PThreadedCode20511, 2, PAssign20512, self);
    
    MethodClosure MC_SMB_ticks_ = new_MethodClosure((Method)PMethod20509, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks_, MC_SMB_ticks_);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20516 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20515 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20516, (Optr)&t_method_return);
    Method PMethod20514 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20515, 1, PSend20516);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20514, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20519 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20518 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send1, (Optr)PSend20519, (Optr)&t_method_return);
    Method PMethod20517 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20518, 1, PSend20519);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20517, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_print24_showSeconds_on_() {
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_showSeconds_0_1 = new_Variable_named(L"showSeconds", 0);
    Variable VAR_aStream_0_2 = new_Variable_named(L"aStream", 0);
    Array PArray20521 = new_Array_with(3, (Optr)VAR_hr24_0_0, (Optr)VAR_showSeconds_0_1, (Optr)VAR_aStream_0_2);
    Variable VAR_h_0_3 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_4 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_5 = new_Variable_named(L"s", 0);
    Array PArray20522 = new_Array_with(3, (Optr)VAR_h_0_3, (Optr)VAR_m_0_4, (Optr)VAR_s_0_5);
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20525 = new_Send((Optr)self, SMB_hour, 0);
    Assign PAssign20524 = new_Assign((Optr)VAR_h_0_3, (Optr)PSend20525);
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20527 = new_Send((Optr)self, SMB_minute, 0);
    Assign PAssign20526 = new_Assign((Optr)VAR_m_0_4, (Optr)PSend20527);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20529 = new_Send((Optr)self, SMB_second, 0);
    Assign PAssign20528 = new_Assign((Optr)VAR_s_0_5, (Optr)PSend20529);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20533 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9429 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9429_Const = new_Constant((Optr)char_9429);
    // <<. 
    Send PSend20537 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode20536 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend20537, (Optr)&t_block_return);
    Block PBlock20535 = new_Block_with(empty_Array, empty_Array, PThreadedCode20536, 1, PSend20537);
    // ifTrue:. 
    Send PSend20534 = new_Send((Optr)PSend20533, SMB_ifTrue_, 1, (Optr)PBlock20535);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20538 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20532 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20533, (Optr)&t_send_ifTrue_, (Optr)PSend20534, (Optr)PBlock20535, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20538, (Optr)&t_block_return);
    Block PBlock20531 = new_Block_with(empty_Array, empty_Array, PThreadedCode20532, 2, PSend20534, PSend20538);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_12_Const = new_Constant((Optr)int_12);
    // >. 
    Send PSend20541 = new_Send((Optr)VAR_h_0_3, SMB__gt_, 1, (Optr)int_12_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20545 = new_Send((Optr)VAR_h_0_3, SMB__minus_, 1, (Optr)int_12_Const);
    // printOn:. 
    Send PSend20546 = new_Send((Optr)PSend20545, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20544 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20545, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20546, (Optr)&t_block_return);
    Block PBlock20543 = new_Block_with(empty_Array, empty_Array, PThreadedCode20544, 1, PSend20546);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend20549 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_1_Const);
    // printOn:. 
    Send PSend20553 = new_Send((Optr)int_12_Const, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20552 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20553, (Optr)&t_block_return);
    Block PBlock20551 = new_Block_with(empty_Array, empty_Array, PThreadedCode20552, 1, PSend20553);
    // printOn:. 
    Send PSend20556 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20555 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20556, (Optr)&t_block_return);
    Block PBlock20554 = new_Block_with(empty_Array, empty_Array, PThreadedCode20555, 1, PSend20556);
    // ifTrue:ifFalse:. 
    Send PSend20550 = new_Send((Optr)PSend20549, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20551, (Optr)PBlock20554);
    Array PThreadedCode20548 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20549, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20550, (Optr)PBlock20551, (Optr)PBlock20554, (Optr)&t_block_return);
    Block PBlock20547 = new_Block_with(empty_Array, empty_Array, PThreadedCode20548, 1, PSend20550);
    // ifTrue:ifFalse:. 
    Send PSend20542 = new_Send((Optr)PSend20541, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20543, (Optr)PBlock20547);
    Array PThreadedCode20540 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20541, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20542, (Optr)PBlock20543, (Optr)PBlock20547, (Optr)&t_block_return);
    Block PBlock20539 = new_Block_with(empty_Array, empty_Array, PThreadedCode20540, 1, PSend20542);
    // ifTrue:ifFalse:. 
    Send PSend20530 = new_Send((Optr)VAR_hr24_0_0, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20531, (Optr)PBlock20539);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20557 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20558 = new_Send((Optr)VAR_m_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20562 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode20561 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend20562, (Optr)&t_block_return);
    Block PBlock20560 = new_Block_with(empty_Array, empty_Array, PThreadedCode20561, 1, PSend20562);
    // ifTrue:. 
    Send PSend20559 = new_Send((Optr)PSend20558, SMB_ifTrue_, 1, (Optr)PBlock20560);
    // printOn:. 
    Send PSend20563 = new_Send((Optr)VAR_m_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    // <<. 
    Send PSend20567 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20568 = new_Send((Optr)VAR_s_0_5, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20572 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode20571 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend20572, (Optr)&t_block_return);
    Block PBlock20570 = new_Block_with(empty_Array, empty_Array, PThreadedCode20571, 1, PSend20572);
    // ifTrue:. 
    Send PSend20569 = new_Send((Optr)PSend20568, SMB_ifTrue_, 1, (Optr)PBlock20570);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20573 = new_Send((Optr)VAR_s_0_5, SMB_asInteger, 0);
    // printOn:. 
    Send PSend20574 = new_Send((Optr)PSend20573, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20566 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20567, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20568, (Optr)&t_send_ifTrue_, (Optr)PSend20569, (Optr)PBlock20570, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_send0, (Optr)PSend20573, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20574, (Optr)&t_block_return);
    Block PBlock20565 = new_Block_with(empty_Array, empty_Array, PThreadedCode20566, 3, PSend20567, PSend20569, PSend20574);
    // ifTrue:. 
    Send PSend20564 = new_Send((Optr)VAR_showSeconds_0_1, SMB_ifTrue_, 1, (Optr)PBlock20565);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // <. 
    Send PSend20578 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_12_Const);
    String string_20582 = new_String(L" am");
    Constant string_20582_Const = new_Constant((Optr)string_20582);
    // <<. 
    Send PSend20583 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20582_Const);
    Array PThreadedCode20581 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20582, (Optr)&t_send1, (Optr)PSend20583, (Optr)&t_block_return);
    Block PBlock20580 = new_Block_with(empty_Array, empty_Array, PThreadedCode20581, 1, PSend20583);
    String string_20586 = new_String(L" pm");
    Constant string_20586_Const = new_Constant((Optr)string_20586);
    // <<. 
    Send PSend20587 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20586_Const);
    Array PThreadedCode20585 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20586, (Optr)&t_send1, (Optr)PSend20587, (Optr)&t_block_return);
    Block PBlock20584 = new_Block_with(empty_Array, empty_Array, PThreadedCode20585, 1, PSend20587);
    // ifTrue:ifFalse:. 
    Send PSend20579 = new_Send((Optr)PSend20578, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20580, (Optr)PBlock20584);
    Array PThreadedCode20577 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20578, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20579, (Optr)PBlock20580, (Optr)PBlock20584, (Optr)&t_block_return);
    Block PBlock20576 = new_Block_with(empty_Array, empty_Array, PThreadedCode20577, 1, PSend20579);
    // ifFalse:. 
    Send PSend20575 = new_Send((Optr)VAR_hr24_0_0, SMB_ifFalse_, 1, (Optr)PBlock20576);
    Array PThreadedCode20523 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign20524, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20525, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20526, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20527, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20528, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20529, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20530, (Optr)PBlock20531, (Optr)PBlock20539, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20557, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20558, (Optr)&t_send_ifTrue_, (Optr)PSend20559, (Optr)PBlock20560, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20563, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_showSeconds_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20564, (Optr)PBlock20565, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifFalse_, (Optr)PSend20575, (Optr)PBlock20576, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20520 = new_Method_with(PArray20521, PArray20522, empty_Array, PThreadedCode20523, 10, PAssign20524, PAssign20526, PAssign20528, PSend20530, PSend20557, PSend20559, PSend20563, PSend20564, PSend20575, self);
    
    MethodClosure MC_SMB_print24_showSeconds_on_ = new_MethodClosure((Method)PMethod20520, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_showSeconds_on_, MC_SMB_print24_showSeconds_on_);
}


static void init_SMB_print24_on_() {
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray20589 = new_Array_with(2, (Optr)VAR_hr24_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20591 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)VAR_hr24_0_0, (Optr)true_Const, (Optr)VAR_aStream_0_1);
    Array PThreadedCode20590 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send3, (Optr)PSend20591, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20588 = new_Method_with(PArray20589, empty_Array, empty_Array, PThreadedCode20590, 2, PSend20591, self);
    
    MethodClosure MC_SMB_print24_on_ = new_MethodClosure((Method)PMethod20588, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_on_, MC_SMB_print24_on_);
}


static void init_SMB_print24() {
    Symbol SMB_print24 = new_Symbol(L"print24");
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray20595 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    // print24:on:. 
    Send PSend20597 = new_Send((Optr)self, SMB_print24_on_, 2, (Optr)true_Const, (Optr)VAR_aStream_1_0);
    Array PThreadedCode20596 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send2, (Optr)PSend20597, (Optr)&t_method_return);
    Block PBlock20594 = new_Block_with(PArray20595, empty_Array, PThreadedCode20596, 1, PSend20597);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend20598 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock20594);
    Array PThreadedCode20593 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock20594, (Optr)&t_send1, (Optr)PSend20598, (Optr)&t_method_return);
    Method PMethod20592 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20593, 1, PSend20598);
    
    MethodClosure MC_SMB_print24 = new_MethodClosure((Method)PMethod20592, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24, MC_SMB_print24);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20600 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20602 = new_Send((Optr)self, SMB_second, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20603 = new_Send((Optr)PSend20602, SMB__notEquals_, 1, (Optr)int_0_Const);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20604 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)false_Const, (Optr)PSend20603, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20601 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20602, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20603, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send3, (Optr)PSend20604, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20599 = new_Method_with(PArray20600, empty_Array, empty_Array, PThreadedCode20601, 2, PSend20604, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20599, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20607 = new_Send((Optr)DateAndTime_classReference, SMB_today, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20608 = new_Send((Optr)PSend20607, SMB__plus_, 1, (Optr)self);
    Array PThreadedCode20606 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20607, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20608, (Optr)&t_method_return);
    Method PMethod20605 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20606, 1, PSend20608);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20605, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20611 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20612 = new_Send((Optr)PSend20611, SMB_seconds, 0);
    Array PThreadedCode20610 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20611, (Optr)&t_send0, (Optr)PSend20612, (Optr)&t_method_return);
    Method PMethod20609 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20610, 1, PSend20612);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20609, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // with:with:. 
    Send PSend20615 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)int_0_Const, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20614 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send2, (Optr)PSend20615, (Optr)&t_method_return);
    Method PMethod20613 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20614, 1, PSend20615);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20613, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20618 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20619 = new_Send((Optr)PSend20618, SMB_hours, 0);
    Array PThreadedCode20617 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20618, (Optr)&t_send0, (Optr)PSend20619, (Optr)&t_method_return);
    Method PMethod20616 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20617, 1, PSend20619);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20616, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20622 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20621 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20622, (Optr)&t_method_return);
    Method PMethod20620 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20621, 1, PSend20622);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20620, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20625 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20626 = new_Send((Optr)PSend20625, SMB_minutes, 0);
    Array PThreadedCode20624 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20625, (Optr)&t_send0, (Optr)PSend20626, (Optr)&t_method_return);
    Method PMethod20623 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20624, 1, PSend20626);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20623, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minute, MC_SMB_minute);
}


static void init_class_SMB_dateAndTimeFromSeconds_() {
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20628 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20630 = new_Send((Optr)Date_classReference, SMB_fromSeconds_, 1, (Optr)VAR_secondCount_0_0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20631 = new_Send((Optr)VAR_secondCount_0_0, SMB__modulo_, 1, (Optr)int_86400_Const);
    // fromSeconds:. 
    Send PSend20632 = new_Send((Optr)Time_classReference, SMB_fromSeconds_, 1, (Optr)PSend20631);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20633 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend20630, (Optr)PSend20632);
    Array PThreadedCode20629 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_send1, (Optr)PSend20630, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20631, (Optr)&t_send1, (Optr)PSend20632, (Optr)&t_send2, (Optr)PSend20633, (Optr)&t_method_return);
    Method PMethod20627 = new_Method_with(PArray20628, empty_Array, empty_Array, PThreadedCode20629, 1, PSend20633);
    
    MethodClosure MC_SMB_dateAndTimeFromSeconds_ = new_MethodClosure((Method)PMethod20627, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeFromSeconds_, MC_SMB_dateAndTimeFromSeconds_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20636 = new_String(L"plugin/chronology/Time.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Chronology_minus_Time_Const = new_Constant((Optr)SMB_Chronology_minus_Time);
    Constant string_20636_Const = new_Constant((Optr)string_20636);
    // require:at:. 
    Send PSend20637 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Chronology_minus_Time_Const, (Optr)string_20636_Const);
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    // primInitialize. 
    Send PSend20638 = new_Send((Optr)self, SMB_primInitialize, 0);
    Array PThreadedCode20635 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Chronology_minus_Time, (Optr)&t_push1, (Optr)string_20636, (Optr)&t_send2, (Optr)PSend20637, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20638, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20634 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20635, 3, PSend20637, PSend20638, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod20634, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_primMicrosecondClock() {
    Symbol SMB_primMicrosecondClock = new_Symbol(L"primMicrosecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_microsecondClock = new_Symbol(L"microsecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20642 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 * 1000 + micro_seconds);\n\t");
    Annotation PAnnotation20641 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_microsecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20642);
    Array PArray20640 = new_Array_with(1, (Optr)PAnnotation20641);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20644 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20643 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20644, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20639 = new_NativeMethod_with(empty_Array, empty_Array, PArray20640, PThreadedCode20643, 2, PSend20644, self);
    
    MethodClosure MC_SMB_primMicrosecondClock = new_MethodClosure((Method)PNativeMethod20639, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMicrosecondClock, MC_SMB_primMicrosecondClock);
}


static void init_class_SMB_primMillisecondClock() {
    Symbol SMB_primMillisecondClock = new_Symbol(L"primMillisecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_millisecondClock = new_Symbol(L"millisecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20648 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 + micro_seconds / 1000);\n\t");
    Annotation PAnnotation20647 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_millisecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20648);
    Array PArray20646 = new_Array_with(1, (Optr)PAnnotation20647);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20650 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20649 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20650, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20645 = new_NativeMethod_with(empty_Array, empty_Array, PArray20646, PThreadedCode20649, 2, PSend20650, self);
    
    MethodClosure MC_SMB_primMillisecondClock = new_MethodClosure((Method)PNativeMethod20645, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMillisecondClock, MC_SMB_primMillisecondClock);
}


static void init_class_SMB_primSecondsClock() {
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_secondsClock = new_Symbol(L"secondsClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20654 = new_String(L"\n    long seconds;\n    seconds = (long)time(NULL);\n    seconds += 2177452800;\n\t^wrap_int(seconds);\n\t");
    Annotation PAnnotation20653 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_secondsClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20654);
    Array PArray20652 = new_Array_with(1, (Optr)PAnnotation20653);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20656 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20655 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20656, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20651 = new_NativeMethod_with(empty_Array, empty_Array, PArray20652, PThreadedCode20655, 2, PSend20656, self);
    
    MethodClosure MC_SMB_primSecondsClock = new_MethodClosure((Method)PNativeMethod20651, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primSecondsClock, MC_SMB_primSecondsClock);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20658 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20660 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20661 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20662 = new_Send((Optr)PSend20661, SMB_ticks, 0);
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    // ticks:. 
    Send PSend20663 = new_Send((Optr)PSend20660, SMB_ticks_, 1, (Optr)PSend20662);
    Array PThreadedCode20659 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20660, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20661, (Optr)&t_send0, (Optr)PSend20662, (Optr)&t_send1, (Optr)PSend20663, (Optr)&t_method_return);
    Method PMethod20657 = new_Method_with(PArray20658, empty_Array, empty_Array, PThreadedCode20659, 1, PSend20663);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20657, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20666 = new_Send((Optr)self, SMB_totalSeconds, 0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20667 = new_Send((Optr)PSend20666, SMB__modulo_, 1, (Optr)int_86400_Const);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20668 = new_Send((Optr)self, SMB_fromSeconds_, 1, (Optr)PSend20667);
    Array PThreadedCode20665 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20666, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20667, (Optr)&t_send1, (Optr)PSend20668, (Optr)&t_method_return);
    Method PMethod20664 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20665, 1, PSend20668);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod20664, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20671 = new_Send((Optr)Date_classReference, SMB_today, 0);
    Array PThreadedCode20670 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_send0, (Optr)PSend20671, (Optr)&t_method_return);
    Method PMethod20669 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20670, 1, PSend20671);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20669, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_asDate, MC_SMB_asDate);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20673 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20675 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20674 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20675, (Optr)&t_method_return);
    Method PMethod20672 = new_Method_with(PArray20673, empty_Array, empty_Array, PThreadedCode20674, 1, PSend20675);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20672, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    // primSecondsClock. 
    Send PSend20678 = new_Send((Optr)self, SMB_primSecondsClock, 0);
    Array PThreadedCode20677 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20678, (Optr)&t_method_return);
    Method PMethod20676 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20677, 1, PSend20678);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod20676, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_totalSeconds, MC_SMB_totalSeconds);
}


static void init_class_SMB_primInitialize() {
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20682 = new_String(L"\n\tgettimeofday(&start_timeval, NULL);\n\t");
    Annotation PAnnotation20681 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_initialize, (Optr)SMB_Chronology_minus_Time, (Optr)string_20682);
    Array PArray20680 = new_Array_with(1, (Optr)PAnnotation20681);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20684 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20683 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20684, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20679 = new_NativeMethod_with(empty_Array, empty_Array, PArray20680, PThreadedCode20683, 2, PSend20684, self);
    
    MethodClosure MC_SMB_primInitialize = new_MethodClosure((Method)PNativeMethod20679, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primInitialize, MC_SMB_primInitialize);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20687 = new_Send((Optr)self, SMB_totalSeconds, 0);
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    // dateAndTimeFromSeconds:. 
    Send PSend20688 = new_Send((Optr)self, SMB_dateAndTimeFromSeconds_, 1, (Optr)PSend20687);
    Array PThreadedCode20686 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20687, (Optr)&t_send1, (Optr)PSend20688, (Optr)&t_method_return);
    Method PMethod20685 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20686, 1, PSend20688);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20685, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeNow, MC_SMB_dateAndTimeNow);
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
    init_class_SMB_initialize();
    init_class_SMB_primMicrosecondClock();
    init_class_SMB_primMillisecondClock();
    init_class_SMB_primSecondsClock();
    init_class_SMB_seconds_();
    init_class_SMB_now();
    init_class_SMB_asDate();
    init_class_SMB_fromSeconds_();
    init_class_SMB_totalSeconds();
    init_class_SMB_primInitialize();
    init_class_SMB_dateAndTimeNow();
    
}