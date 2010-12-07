#include <lib/class/Chronology/Time.h>


Optr layout_Chronology_Time_Class_class;
Optr slot_Chronology_Time_seconds;
Optr layout_Chronology_Time;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20471 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20470 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20471, (Optr)&t_method_return);
    Method PMethod20469 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20470, 1, PSend20471);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20469, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20474 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20473 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20474, (Optr)&t_method_return);
    Method PMethod20472 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20473, 1, PSend20474);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20472, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_ticks_() {
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray20476 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend20479 = new_Send((Optr)VAR_anArray_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20478 = new_Assign((Optr)slot_Chronology_Time_seconds, (Optr)PSend20479);
    Array PThreadedCode20477 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign20478, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20479, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20475 = new_Method_with(PArray20476, empty_Array, empty_Array, PThreadedCode20477, 2, PAssign20478, self);
    
    MethodClosure MC_SMB_ticks_ = new_MethodClosure((Method)PMethod20475, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks_, MC_SMB_ticks_);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20482 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20481 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20482, (Optr)&t_method_return);
    Method PMethod20480 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20481, 1, PSend20482);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20480, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20485 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20484 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send1, (Optr)PSend20485, (Optr)&t_method_return);
    Method PMethod20483 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20484, 1, PSend20485);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20483, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_print24_showSeconds_on_() {
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_showSeconds_0_1 = new_Variable_named(L"showSeconds", 0);
    Variable VAR_aStream_0_2 = new_Variable_named(L"aStream", 0);
    Array PArray20487 = new_Array_with(3, (Optr)VAR_hr24_0_0, (Optr)VAR_showSeconds_0_1, (Optr)VAR_aStream_0_2);
    Variable VAR_h_0_3 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_4 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_5 = new_Variable_named(L"s", 0);
    Array PArray20488 = new_Array_with(3, (Optr)VAR_h_0_3, (Optr)VAR_m_0_4, (Optr)VAR_s_0_5);
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20491 = new_Send((Optr)self, SMB_hour, 0);
    Assign PAssign20490 = new_Assign((Optr)VAR_h_0_3, (Optr)PSend20491);
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20493 = new_Send((Optr)self, SMB_minute, 0);
    Assign PAssign20492 = new_Assign((Optr)VAR_m_0_4, (Optr)PSend20493);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20495 = new_Send((Optr)self, SMB_second, 0);
    Assign PAssign20494 = new_Assign((Optr)VAR_s_0_5, (Optr)PSend20495);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20499 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9395 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9395_Const = new_Constant((Optr)char_9395);
    // <<. 
    Send PSend20503 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode20502 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend20503, (Optr)&t_block_return);
    Block PBlock20501 = new_Block_with(empty_Array, empty_Array, PThreadedCode20502, 1, PSend20503);
    // ifTrue:. 
    Send PSend20500 = new_Send((Optr)PSend20499, SMB_ifTrue_, 1, (Optr)PBlock20501);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20504 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20498 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20499, (Optr)&t_send_ifTrue_, (Optr)PSend20500, (Optr)PBlock20501, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20504, (Optr)&t_block_return);
    Block PBlock20497 = new_Block_with(empty_Array, empty_Array, PThreadedCode20498, 2, PSend20500, PSend20504);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_12_Const = new_Constant((Optr)int_12);
    // >. 
    Send PSend20507 = new_Send((Optr)VAR_h_0_3, SMB__gt_, 1, (Optr)int_12_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20511 = new_Send((Optr)VAR_h_0_3, SMB__minus_, 1, (Optr)int_12_Const);
    // printOn:. 
    Send PSend20512 = new_Send((Optr)PSend20511, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20510 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20511, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20512, (Optr)&t_block_return);
    Block PBlock20509 = new_Block_with(empty_Array, empty_Array, PThreadedCode20510, 1, PSend20512);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend20515 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_1_Const);
    // printOn:. 
    Send PSend20519 = new_Send((Optr)int_12_Const, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20518 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20519, (Optr)&t_block_return);
    Block PBlock20517 = new_Block_with(empty_Array, empty_Array, PThreadedCode20518, 1, PSend20519);
    // printOn:. 
    Send PSend20522 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20521 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20522, (Optr)&t_block_return);
    Block PBlock20520 = new_Block_with(empty_Array, empty_Array, PThreadedCode20521, 1, PSend20522);
    // ifTrue:ifFalse:. 
    Send PSend20516 = new_Send((Optr)PSend20515, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20517, (Optr)PBlock20520);
    Array PThreadedCode20514 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20515, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20516, (Optr)PBlock20517, (Optr)PBlock20520, (Optr)&t_block_return);
    Block PBlock20513 = new_Block_with(empty_Array, empty_Array, PThreadedCode20514, 1, PSend20516);
    // ifTrue:ifFalse:. 
    Send PSend20508 = new_Send((Optr)PSend20507, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20509, (Optr)PBlock20513);
    Array PThreadedCode20506 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20507, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20508, (Optr)PBlock20509, (Optr)PBlock20513, (Optr)&t_block_return);
    Block PBlock20505 = new_Block_with(empty_Array, empty_Array, PThreadedCode20506, 1, PSend20508);
    // ifTrue:ifFalse:. 
    Send PSend20496 = new_Send((Optr)VAR_hr24_0_0, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20497, (Optr)PBlock20505);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20523 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20524 = new_Send((Optr)VAR_m_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20528 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode20527 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend20528, (Optr)&t_block_return);
    Block PBlock20526 = new_Block_with(empty_Array, empty_Array, PThreadedCode20527, 1, PSend20528);
    // ifTrue:. 
    Send PSend20525 = new_Send((Optr)PSend20524, SMB_ifTrue_, 1, (Optr)PBlock20526);
    // printOn:. 
    Send PSend20529 = new_Send((Optr)VAR_m_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    // <<. 
    Send PSend20533 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20534 = new_Send((Optr)VAR_s_0_5, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20538 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode20537 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend20538, (Optr)&t_block_return);
    Block PBlock20536 = new_Block_with(empty_Array, empty_Array, PThreadedCode20537, 1, PSend20538);
    // ifTrue:. 
    Send PSend20535 = new_Send((Optr)PSend20534, SMB_ifTrue_, 1, (Optr)PBlock20536);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20539 = new_Send((Optr)VAR_s_0_5, SMB_asInteger, 0);
    // printOn:. 
    Send PSend20540 = new_Send((Optr)PSend20539, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20532 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20533, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20534, (Optr)&t_send_ifTrue_, (Optr)PSend20535, (Optr)PBlock20536, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_send0, (Optr)PSend20539, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20540, (Optr)&t_block_return);
    Block PBlock20531 = new_Block_with(empty_Array, empty_Array, PThreadedCode20532, 3, PSend20533, PSend20535, PSend20540);
    // ifTrue:. 
    Send PSend20530 = new_Send((Optr)VAR_showSeconds_0_1, SMB_ifTrue_, 1, (Optr)PBlock20531);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // <. 
    Send PSend20544 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_12_Const);
    String string_20548 = new_String(L" am");
    Constant string_20548_Const = new_Constant((Optr)string_20548);
    // <<. 
    Send PSend20549 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20548_Const);
    Array PThreadedCode20547 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20548, (Optr)&t_send1, (Optr)PSend20549, (Optr)&t_block_return);
    Block PBlock20546 = new_Block_with(empty_Array, empty_Array, PThreadedCode20547, 1, PSend20549);
    String string_20552 = new_String(L" pm");
    Constant string_20552_Const = new_Constant((Optr)string_20552);
    // <<. 
    Send PSend20553 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20552_Const);
    Array PThreadedCode20551 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20552, (Optr)&t_send1, (Optr)PSend20553, (Optr)&t_block_return);
    Block PBlock20550 = new_Block_with(empty_Array, empty_Array, PThreadedCode20551, 1, PSend20553);
    // ifTrue:ifFalse:. 
    Send PSend20545 = new_Send((Optr)PSend20544, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20546, (Optr)PBlock20550);
    Array PThreadedCode20543 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20544, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20545, (Optr)PBlock20546, (Optr)PBlock20550, (Optr)&t_block_return);
    Block PBlock20542 = new_Block_with(empty_Array, empty_Array, PThreadedCode20543, 1, PSend20545);
    // ifFalse:. 
    Send PSend20541 = new_Send((Optr)VAR_hr24_0_0, SMB_ifFalse_, 1, (Optr)PBlock20542);
    Array PThreadedCode20489 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign20490, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20491, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20492, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20493, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20494, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20495, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20496, (Optr)PBlock20497, (Optr)PBlock20505, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20523, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20524, (Optr)&t_send_ifTrue_, (Optr)PSend20525, (Optr)PBlock20526, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20529, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_showSeconds_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20530, (Optr)PBlock20531, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifFalse_, (Optr)PSend20541, (Optr)PBlock20542, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20486 = new_Method_with(PArray20487, PArray20488, empty_Array, PThreadedCode20489, 10, PAssign20490, PAssign20492, PAssign20494, PSend20496, PSend20523, PSend20525, PSend20529, PSend20530, PSend20541, self);
    
    MethodClosure MC_SMB_print24_showSeconds_on_ = new_MethodClosure((Method)PMethod20486, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_showSeconds_on_, MC_SMB_print24_showSeconds_on_);
}


static void init_SMB_print24_on_() {
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray20555 = new_Array_with(2, (Optr)VAR_hr24_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20557 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)VAR_hr24_0_0, (Optr)true_Const, (Optr)VAR_aStream_0_1);
    Array PThreadedCode20556 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send3, (Optr)PSend20557, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20554 = new_Method_with(PArray20555, empty_Array, empty_Array, PThreadedCode20556, 2, PSend20557, self);
    
    MethodClosure MC_SMB_print24_on_ = new_MethodClosure((Method)PMethod20554, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_on_, MC_SMB_print24_on_);
}


static void init_SMB_print24() {
    Symbol SMB_print24 = new_Symbol(L"print24");
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray20561 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    // print24:on:. 
    Send PSend20563 = new_Send((Optr)self, SMB_print24_on_, 2, (Optr)true_Const, (Optr)VAR_aStream_1_0);
    Array PThreadedCode20562 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send2, (Optr)PSend20563, (Optr)&t_method_return);
    Block PBlock20560 = new_Block_with(PArray20561, empty_Array, PThreadedCode20562, 1, PSend20563);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend20564 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock20560);
    Array PThreadedCode20559 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock20560, (Optr)&t_send1, (Optr)PSend20564, (Optr)&t_method_return);
    Method PMethod20558 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20559, 1, PSend20564);
    
    MethodClosure MC_SMB_print24 = new_MethodClosure((Method)PMethod20558, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24, MC_SMB_print24);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20566 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20568 = new_Send((Optr)self, SMB_second, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20569 = new_Send((Optr)PSend20568, SMB__notEquals_, 1, (Optr)int_0_Const);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20570 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)false_Const, (Optr)PSend20569, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20567 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20568, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20569, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send3, (Optr)PSend20570, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20565 = new_Method_with(PArray20566, empty_Array, empty_Array, PThreadedCode20567, 2, PSend20570, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20565, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20573 = new_Send((Optr)DateAndTime_classReference, SMB_today, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20574 = new_Send((Optr)PSend20573, SMB__plus_, 1, (Optr)self);
    Array PThreadedCode20572 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20573, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20574, (Optr)&t_method_return);
    Method PMethod20571 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20572, 1, PSend20574);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20571, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20577 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20578 = new_Send((Optr)PSend20577, SMB_seconds, 0);
    Array PThreadedCode20576 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20577, (Optr)&t_send0, (Optr)PSend20578, (Optr)&t_method_return);
    Method PMethod20575 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20576, 1, PSend20578);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20575, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // with:with:. 
    Send PSend20581 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)int_0_Const, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20580 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send2, (Optr)PSend20581, (Optr)&t_method_return);
    Method PMethod20579 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20580, 1, PSend20581);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20579, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20584 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20585 = new_Send((Optr)PSend20584, SMB_hours, 0);
    Array PThreadedCode20583 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20584, (Optr)&t_send0, (Optr)PSend20585, (Optr)&t_method_return);
    Method PMethod20582 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20583, 1, PSend20585);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20582, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20588 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20587 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20588, (Optr)&t_method_return);
    Method PMethod20586 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20587, 1, PSend20588);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20586, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20591 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20592 = new_Send((Optr)PSend20591, SMB_minutes, 0);
    Array PThreadedCode20590 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20591, (Optr)&t_send0, (Optr)PSend20592, (Optr)&t_method_return);
    Method PMethod20589 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20590, 1, PSend20592);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20589, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minute, MC_SMB_minute);
}


static void init_class_SMB_dateAndTimeFromSeconds_() {
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20594 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20596 = new_Send((Optr)Date_classReference, SMB_fromSeconds_, 1, (Optr)VAR_secondCount_0_0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20597 = new_Send((Optr)VAR_secondCount_0_0, SMB__modulo_, 1, (Optr)int_86400_Const);
    // fromSeconds:. 
    Send PSend20598 = new_Send((Optr)Time_classReference, SMB_fromSeconds_, 1, (Optr)PSend20597);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20599 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend20596, (Optr)PSend20598);
    Array PThreadedCode20595 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_send1, (Optr)PSend20596, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20597, (Optr)&t_send1, (Optr)PSend20598, (Optr)&t_send2, (Optr)PSend20599, (Optr)&t_method_return);
    Method PMethod20593 = new_Method_with(PArray20594, empty_Array, empty_Array, PThreadedCode20595, 1, PSend20599);
    
    MethodClosure MC_SMB_dateAndTimeFromSeconds_ = new_MethodClosure((Method)PMethod20593, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeFromSeconds_, MC_SMB_dateAndTimeFromSeconds_);
}


static void init_class_SMB_primInitialize() {
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20603 = new_String(L"\n\tgettimeofday(&start_timeval, NULL);\n\t");
    Annotation PAnnotation20602 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_initialize, (Optr)SMB_Chronology_minus_Time, (Optr)string_20603);
    Array PArray20601 = new_Array_with(1, (Optr)PAnnotation20602);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20605 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20604 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20605, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20600 = new_NativeMethod_with(empty_Array, empty_Array, PArray20601, PThreadedCode20604, 2, PSend20605, self);
    
    MethodClosure MC_SMB_primInitialize = new_MethodClosure((Method)PNativeMethod20600, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primInitialize, MC_SMB_primInitialize);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20608 = new_String(L"plugin/chronology/Time.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Chronology_minus_Time_Const = new_Constant((Optr)SMB_Chronology_minus_Time);
    Constant string_20608_Const = new_Constant((Optr)string_20608);
    // require:at:. 
    Send PSend20609 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Chronology_minus_Time_Const, (Optr)string_20608_Const);
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    // primInitialize. 
    Send PSend20610 = new_Send((Optr)self, SMB_primInitialize, 0);
    Array PThreadedCode20607 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Chronology_minus_Time, (Optr)&t_push1, (Optr)string_20608, (Optr)&t_send2, (Optr)PSend20609, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20610, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20606 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20607, 3, PSend20609, PSend20610, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod20606, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_primMillisecondClock() {
    Symbol SMB_primMillisecondClock = new_Symbol(L"primMillisecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_millisecondClock = new_Symbol(L"millisecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20614 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 + micro_seconds / 1000);\n\t");
    Annotation PAnnotation20613 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_millisecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20614);
    Array PArray20612 = new_Array_with(1, (Optr)PAnnotation20613);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20616 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20615 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20616, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20611 = new_NativeMethod_with(empty_Array, empty_Array, PArray20612, PThreadedCode20615, 2, PSend20616, self);
    
    MethodClosure MC_SMB_primMillisecondClock = new_MethodClosure((Method)PNativeMethod20611, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMillisecondClock, MC_SMB_primMillisecondClock);
}


static void init_class_SMB_primSecondsClock() {
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_secondsClock = new_Symbol(L"secondsClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20620 = new_String(L"\n    long seconds;\n    seconds = (long)time(NULL);\n    seconds += 2177452800;\n\t^wrap_int(seconds);\n\t");
    Annotation PAnnotation20619 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_secondsClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20620);
    Array PArray20618 = new_Array_with(1, (Optr)PAnnotation20619);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20622 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20621 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20622, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20617 = new_NativeMethod_with(empty_Array, empty_Array, PArray20618, PThreadedCode20621, 2, PSend20622, self);
    
    MethodClosure MC_SMB_primSecondsClock = new_MethodClosure((Method)PNativeMethod20617, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primSecondsClock, MC_SMB_primSecondsClock);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20624 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20626 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20627 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20628 = new_Send((Optr)PSend20627, SMB_ticks, 0);
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    // ticks:. 
    Send PSend20629 = new_Send((Optr)PSend20626, SMB_ticks_, 1, (Optr)PSend20628);
    Array PThreadedCode20625 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20626, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20627, (Optr)&t_send0, (Optr)PSend20628, (Optr)&t_send1, (Optr)PSend20629, (Optr)&t_method_return);
    Method PMethod20623 = new_Method_with(PArray20624, empty_Array, empty_Array, PThreadedCode20625, 1, PSend20629);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20623, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20632 = new_Send((Optr)self, SMB_totalSeconds, 0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20633 = new_Send((Optr)PSend20632, SMB__modulo_, 1, (Optr)int_86400_Const);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20634 = new_Send((Optr)self, SMB_fromSeconds_, 1, (Optr)PSend20633);
    Array PThreadedCode20631 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20632, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20633, (Optr)&t_send1, (Optr)PSend20634, (Optr)&t_method_return);
    Method PMethod20630 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20631, 1, PSend20634);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod20630, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20637 = new_Send((Optr)Date_classReference, SMB_today, 0);
    Array PThreadedCode20636 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_send0, (Optr)PSend20637, (Optr)&t_method_return);
    Method PMethod20635 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20636, 1, PSend20637);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20635, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_asDate, MC_SMB_asDate);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20639 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20641 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20640 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20641, (Optr)&t_method_return);
    Method PMethod20638 = new_Method_with(PArray20639, empty_Array, empty_Array, PThreadedCode20640, 1, PSend20641);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20638, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    // primSecondsClock. 
    Send PSend20644 = new_Send((Optr)self, SMB_primSecondsClock, 0);
    Array PThreadedCode20643 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20644, (Optr)&t_method_return);
    Method PMethod20642 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20643, 1, PSend20644);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod20642, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_totalSeconds, MC_SMB_totalSeconds);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20647 = new_Send((Optr)self, SMB_totalSeconds, 0);
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    // dateAndTimeFromSeconds:. 
    Send PSend20648 = new_Send((Optr)self, SMB_dateAndTimeFromSeconds_, 1, (Optr)PSend20647);
    Array PThreadedCode20646 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20647, (Optr)&t_send1, (Optr)PSend20648, (Optr)&t_method_return);
    Method PMethod20645 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20646, 1, PSend20648);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20645, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeNow, MC_SMB_dateAndTimeNow);
}


static void init_class_SMB_primMicrosecondClock() {
    Symbol SMB_primMicrosecondClock = new_Symbol(L"primMicrosecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_microsecondClock = new_Symbol(L"microsecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20652 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 * 1000 + micro_seconds);\n\t");
    Annotation PAnnotation20651 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_microsecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20652);
    Array PArray20650 = new_Array_with(1, (Optr)PAnnotation20651);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20654 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20653 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20654, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20649 = new_NativeMethod_with(empty_Array, empty_Array, PArray20650, PThreadedCode20653, 2, PSend20654, self);
    
    MethodClosure MC_SMB_primMicrosecondClock = new_MethodClosure((Method)PNativeMethod20649, HEADER(Chronology_Time_Class));
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