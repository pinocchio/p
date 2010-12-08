#include <lib/class/Chronology/Time.h>


Optr layout_Chronology_Time_Class_class;
Optr slot_Chronology_Time_seconds;
Optr layout_Chronology_Time;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20602 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20601 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20602, (Optr)&t_method_return);
    Method PMethod20600 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20601, 1, PSend20602);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20600, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20605 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20604 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20605, (Optr)&t_method_return);
    Method PMethod20603 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20604, 1, PSend20605);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20603, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_ticks_() {
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray20607 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend20610 = new_Send((Optr)VAR_anArray_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20609 = new_Assign((Optr)slot_Chronology_Time_seconds, (Optr)PSend20610);
    Array PThreadedCode20608 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign20609, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20610, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20606 = new_Method_with(PArray20607, empty_Array, empty_Array, PThreadedCode20608, 2, PAssign20609, self);
    
    MethodClosure MC_SMB_ticks_ = new_MethodClosure((Method)PMethod20606, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks_, MC_SMB_ticks_);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20613 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20612 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20613, (Optr)&t_method_return);
    Method PMethod20611 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20612, 1, PSend20613);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20611, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20616 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20615 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send1, (Optr)PSend20616, (Optr)&t_method_return);
    Method PMethod20614 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20615, 1, PSend20616);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20614, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_print24_showSeconds_on_() {
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_showSeconds_0_1 = new_Variable_named(L"showSeconds", 0);
    Variable VAR_aStream_0_2 = new_Variable_named(L"aStream", 0);
    Array PArray20618 = new_Array_with(3, (Optr)VAR_hr24_0_0, (Optr)VAR_showSeconds_0_1, (Optr)VAR_aStream_0_2);
    Variable VAR_h_0_3 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_4 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_5 = new_Variable_named(L"s", 0);
    Array PArray20619 = new_Array_with(3, (Optr)VAR_h_0_3, (Optr)VAR_m_0_4, (Optr)VAR_s_0_5);
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20622 = new_Send((Optr)self, SMB_hour, 0);
    Assign PAssign20621 = new_Assign((Optr)VAR_h_0_3, (Optr)PSend20622);
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20624 = new_Send((Optr)self, SMB_minute, 0);
    Assign PAssign20623 = new_Assign((Optr)VAR_m_0_4, (Optr)PSend20624);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20626 = new_Send((Optr)self, SMB_second, 0);
    Assign PAssign20625 = new_Assign((Optr)VAR_s_0_5, (Optr)PSend20626);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20630 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9456 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9456_Const = new_Constant((Optr)char_9456);
    // <<. 
    Send PSend20634 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode20633 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend20634, (Optr)&t_block_return);
    Block PBlock20632 = new_Block_with(empty_Array, empty_Array, PThreadedCode20633, 1, PSend20634);
    // ifTrue:. 
    Send PSend20631 = new_Send((Optr)PSend20630, SMB_ifTrue_, 1, (Optr)PBlock20632);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20635 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20629 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20630, (Optr)&t_send_ifTrue_, (Optr)PSend20631, (Optr)PBlock20632, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20635, (Optr)&t_block_return);
    Block PBlock20628 = new_Block_with(empty_Array, empty_Array, PThreadedCode20629, 2, PSend20631, PSend20635);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_12_Const = new_Constant((Optr)int_12);
    // >. 
    Send PSend20638 = new_Send((Optr)VAR_h_0_3, SMB__gt_, 1, (Optr)int_12_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20642 = new_Send((Optr)VAR_h_0_3, SMB__minus_, 1, (Optr)int_12_Const);
    // printOn:. 
    Send PSend20643 = new_Send((Optr)PSend20642, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20641 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20642, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20643, (Optr)&t_block_return);
    Block PBlock20640 = new_Block_with(empty_Array, empty_Array, PThreadedCode20641, 1, PSend20643);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend20646 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_1_Const);
    // printOn:. 
    Send PSend20650 = new_Send((Optr)int_12_Const, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20649 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20650, (Optr)&t_block_return);
    Block PBlock20648 = new_Block_with(empty_Array, empty_Array, PThreadedCode20649, 1, PSend20650);
    // printOn:. 
    Send PSend20653 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20652 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20653, (Optr)&t_block_return);
    Block PBlock20651 = new_Block_with(empty_Array, empty_Array, PThreadedCode20652, 1, PSend20653);
    // ifTrue:ifFalse:. 
    Send PSend20647 = new_Send((Optr)PSend20646, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20648, (Optr)PBlock20651);
    Array PThreadedCode20645 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20646, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20647, (Optr)PBlock20648, (Optr)PBlock20651, (Optr)&t_block_return);
    Block PBlock20644 = new_Block_with(empty_Array, empty_Array, PThreadedCode20645, 1, PSend20647);
    // ifTrue:ifFalse:. 
    Send PSend20639 = new_Send((Optr)PSend20638, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20640, (Optr)PBlock20644);
    Array PThreadedCode20637 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20638, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20639, (Optr)PBlock20640, (Optr)PBlock20644, (Optr)&t_block_return);
    Block PBlock20636 = new_Block_with(empty_Array, empty_Array, PThreadedCode20637, 1, PSend20639);
    // ifTrue:ifFalse:. 
    Send PSend20627 = new_Send((Optr)VAR_hr24_0_0, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20628, (Optr)PBlock20636);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20654 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20655 = new_Send((Optr)VAR_m_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20659 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode20658 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend20659, (Optr)&t_block_return);
    Block PBlock20657 = new_Block_with(empty_Array, empty_Array, PThreadedCode20658, 1, PSend20659);
    // ifTrue:. 
    Send PSend20656 = new_Send((Optr)PSend20655, SMB_ifTrue_, 1, (Optr)PBlock20657);
    // printOn:. 
    Send PSend20660 = new_Send((Optr)VAR_m_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    // <<. 
    Send PSend20664 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20665 = new_Send((Optr)VAR_s_0_5, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20669 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode20668 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend20669, (Optr)&t_block_return);
    Block PBlock20667 = new_Block_with(empty_Array, empty_Array, PThreadedCode20668, 1, PSend20669);
    // ifTrue:. 
    Send PSend20666 = new_Send((Optr)PSend20665, SMB_ifTrue_, 1, (Optr)PBlock20667);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20670 = new_Send((Optr)VAR_s_0_5, SMB_asInteger, 0);
    // printOn:. 
    Send PSend20671 = new_Send((Optr)PSend20670, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20663 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20664, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20665, (Optr)&t_send_ifTrue_, (Optr)PSend20666, (Optr)PBlock20667, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_send0, (Optr)PSend20670, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20671, (Optr)&t_block_return);
    Block PBlock20662 = new_Block_with(empty_Array, empty_Array, PThreadedCode20663, 3, PSend20664, PSend20666, PSend20671);
    // ifTrue:. 
    Send PSend20661 = new_Send((Optr)VAR_showSeconds_0_1, SMB_ifTrue_, 1, (Optr)PBlock20662);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // <. 
    Send PSend20675 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_12_Const);
    String string_20679 = new_String(L" am");
    Constant string_20679_Const = new_Constant((Optr)string_20679);
    // <<. 
    Send PSend20680 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20679_Const);
    Array PThreadedCode20678 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20679, (Optr)&t_send1, (Optr)PSend20680, (Optr)&t_block_return);
    Block PBlock20677 = new_Block_with(empty_Array, empty_Array, PThreadedCode20678, 1, PSend20680);
    String string_20683 = new_String(L" pm");
    Constant string_20683_Const = new_Constant((Optr)string_20683);
    // <<. 
    Send PSend20684 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20683_Const);
    Array PThreadedCode20682 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20683, (Optr)&t_send1, (Optr)PSend20684, (Optr)&t_block_return);
    Block PBlock20681 = new_Block_with(empty_Array, empty_Array, PThreadedCode20682, 1, PSend20684);
    // ifTrue:ifFalse:. 
    Send PSend20676 = new_Send((Optr)PSend20675, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20677, (Optr)PBlock20681);
    Array PThreadedCode20674 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20675, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20676, (Optr)PBlock20677, (Optr)PBlock20681, (Optr)&t_block_return);
    Block PBlock20673 = new_Block_with(empty_Array, empty_Array, PThreadedCode20674, 1, PSend20676);
    // ifFalse:. 
    Send PSend20672 = new_Send((Optr)VAR_hr24_0_0, SMB_ifFalse_, 1, (Optr)PBlock20673);
    Array PThreadedCode20620 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign20621, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20622, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20623, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20624, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20625, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20626, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20627, (Optr)PBlock20628, (Optr)PBlock20636, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20654, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20655, (Optr)&t_send_ifTrue_, (Optr)PSend20656, (Optr)PBlock20657, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20660, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_showSeconds_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20661, (Optr)PBlock20662, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifFalse_, (Optr)PSend20672, (Optr)PBlock20673, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20617 = new_Method_with(PArray20618, PArray20619, empty_Array, PThreadedCode20620, 10, PAssign20621, PAssign20623, PAssign20625, PSend20627, PSend20654, PSend20656, PSend20660, PSend20661, PSend20672, self);
    
    MethodClosure MC_SMB_print24_showSeconds_on_ = new_MethodClosure((Method)PMethod20617, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_showSeconds_on_, MC_SMB_print24_showSeconds_on_);
}


static void init_SMB_print24_on_() {
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray20686 = new_Array_with(2, (Optr)VAR_hr24_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20688 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)VAR_hr24_0_0, (Optr)true_Const, (Optr)VAR_aStream_0_1);
    Array PThreadedCode20687 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send3, (Optr)PSend20688, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20685 = new_Method_with(PArray20686, empty_Array, empty_Array, PThreadedCode20687, 2, PSend20688, self);
    
    MethodClosure MC_SMB_print24_on_ = new_MethodClosure((Method)PMethod20685, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_on_, MC_SMB_print24_on_);
}


static void init_SMB_print24() {
    Symbol SMB_print24 = new_Symbol(L"print24");
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray20692 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    // print24:on:. 
    Send PSend20694 = new_Send((Optr)self, SMB_print24_on_, 2, (Optr)true_Const, (Optr)VAR_aStream_1_0);
    Array PThreadedCode20693 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send2, (Optr)PSend20694, (Optr)&t_method_return);
    Block PBlock20691 = new_Block_with(PArray20692, empty_Array, PThreadedCode20693, 1, PSend20694);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend20695 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock20691);
    Array PThreadedCode20690 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock20691, (Optr)&t_send1, (Optr)PSend20695, (Optr)&t_method_return);
    Method PMethod20689 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20690, 1, PSend20695);
    
    MethodClosure MC_SMB_print24 = new_MethodClosure((Method)PMethod20689, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24, MC_SMB_print24);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20697 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20699 = new_Send((Optr)self, SMB_second, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20700 = new_Send((Optr)PSend20699, SMB__notEquals_, 1, (Optr)int_0_Const);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20701 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)false_Const, (Optr)PSend20700, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20698 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20699, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20700, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send3, (Optr)PSend20701, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20696 = new_Method_with(PArray20697, empty_Array, empty_Array, PThreadedCode20698, 2, PSend20701, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20696, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20704 = new_Send((Optr)DateAndTime_classReference, SMB_today, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20705 = new_Send((Optr)PSend20704, SMB__plus_, 1, (Optr)self);
    Array PThreadedCode20703 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20704, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20705, (Optr)&t_method_return);
    Method PMethod20702 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20703, 1, PSend20705);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20702, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20708 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20709 = new_Send((Optr)PSend20708, SMB_seconds, 0);
    Array PThreadedCode20707 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20708, (Optr)&t_send0, (Optr)PSend20709, (Optr)&t_method_return);
    Method PMethod20706 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20707, 1, PSend20709);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20706, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // with:with:. 
    Send PSend20712 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)int_0_Const, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20711 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send2, (Optr)PSend20712, (Optr)&t_method_return);
    Method PMethod20710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20711, 1, PSend20712);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20710, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20715 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20716 = new_Send((Optr)PSend20715, SMB_hours, 0);
    Array PThreadedCode20714 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20715, (Optr)&t_send0, (Optr)PSend20716, (Optr)&t_method_return);
    Method PMethod20713 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20714, 1, PSend20716);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20713, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20719 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20718 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20719, (Optr)&t_method_return);
    Method PMethod20717 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20718, 1, PSend20719);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20717, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20722 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20723 = new_Send((Optr)PSend20722, SMB_minutes, 0);
    Array PThreadedCode20721 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20722, (Optr)&t_send0, (Optr)PSend20723, (Optr)&t_method_return);
    Method PMethod20720 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20721, 1, PSend20723);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20720, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minute, MC_SMB_minute);
}


static void init_class_SMB_dateAndTimeFromSeconds_() {
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20725 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20727 = new_Send((Optr)Date_classReference, SMB_fromSeconds_, 1, (Optr)VAR_secondCount_0_0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20728 = new_Send((Optr)VAR_secondCount_0_0, SMB__modulo_, 1, (Optr)int_86400_Const);
    // fromSeconds:. 
    Send PSend20729 = new_Send((Optr)Time_classReference, SMB_fromSeconds_, 1, (Optr)PSend20728);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20730 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend20727, (Optr)PSend20729);
    Array PThreadedCode20726 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_send1, (Optr)PSend20727, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20728, (Optr)&t_send1, (Optr)PSend20729, (Optr)&t_send2, (Optr)PSend20730, (Optr)&t_method_return);
    Method PMethod20724 = new_Method_with(PArray20725, empty_Array, empty_Array, PThreadedCode20726, 1, PSend20730);
    
    MethodClosure MC_SMB_dateAndTimeFromSeconds_ = new_MethodClosure((Method)PMethod20724, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeFromSeconds_, MC_SMB_dateAndTimeFromSeconds_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20733 = new_String(L"plugin/chronology/Time.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Chronology_minus_Time_Const = new_Constant((Optr)SMB_Chronology_minus_Time);
    Constant string_20733_Const = new_Constant((Optr)string_20733);
    // require:at:. 
    Send PSend20734 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Chronology_minus_Time_Const, (Optr)string_20733_Const);
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    // primInitialize. 
    Send PSend20735 = new_Send((Optr)self, SMB_primInitialize, 0);
    Array PThreadedCode20732 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Chronology_minus_Time, (Optr)&t_push1, (Optr)string_20733, (Optr)&t_send2, (Optr)PSend20734, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20735, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20731 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20732, 3, PSend20734, PSend20735, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod20731, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_primMicrosecondClock() {
    Symbol SMB_primMicrosecondClock = new_Symbol(L"primMicrosecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_microsecondClock = new_Symbol(L"microsecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20739 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 * 1000 + micro_seconds);\n\t");
    Annotation PAnnotation20738 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_microsecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20739);
    Array PArray20737 = new_Array_with(1, (Optr)PAnnotation20738);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20741 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20740 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20741, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20736 = new_NativeMethod_with(empty_Array, empty_Array, PArray20737, PThreadedCode20740, 2, PSend20741, self);
    
    MethodClosure MC_SMB_primMicrosecondClock = new_MethodClosure((Method)PNativeMethod20736, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMicrosecondClock, MC_SMB_primMicrosecondClock);
}


static void init_class_SMB_primMillisecondClock() {
    Symbol SMB_primMillisecondClock = new_Symbol(L"primMillisecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_millisecondClock = new_Symbol(L"millisecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20745 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 + micro_seconds / 1000);\n\t");
    Annotation PAnnotation20744 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_millisecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20745);
    Array PArray20743 = new_Array_with(1, (Optr)PAnnotation20744);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20747 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20746 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20747, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20742 = new_NativeMethod_with(empty_Array, empty_Array, PArray20743, PThreadedCode20746, 2, PSend20747, self);
    
    MethodClosure MC_SMB_primMillisecondClock = new_MethodClosure((Method)PNativeMethod20742, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMillisecondClock, MC_SMB_primMillisecondClock);
}


static void init_class_SMB_primSecondsClock() {
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_secondsClock = new_Symbol(L"secondsClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20751 = new_String(L"\n    long seconds;\n    seconds = (long)time(NULL);\n    seconds += 2177452800;\n\t^wrap_int(seconds);\n\t");
    Annotation PAnnotation20750 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_secondsClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20751);
    Array PArray20749 = new_Array_with(1, (Optr)PAnnotation20750);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20753 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20752 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20753, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20748 = new_NativeMethod_with(empty_Array, empty_Array, PArray20749, PThreadedCode20752, 2, PSend20753, self);
    
    MethodClosure MC_SMB_primSecondsClock = new_MethodClosure((Method)PNativeMethod20748, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primSecondsClock, MC_SMB_primSecondsClock);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20755 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20757 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20758 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20759 = new_Send((Optr)PSend20758, SMB_ticks, 0);
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    // ticks:. 
    Send PSend20760 = new_Send((Optr)PSend20757, SMB_ticks_, 1, (Optr)PSend20759);
    Array PThreadedCode20756 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20757, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20758, (Optr)&t_send0, (Optr)PSend20759, (Optr)&t_send1, (Optr)PSend20760, (Optr)&t_method_return);
    Method PMethod20754 = new_Method_with(PArray20755, empty_Array, empty_Array, PThreadedCode20756, 1, PSend20760);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20754, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20763 = new_Send((Optr)self, SMB_totalSeconds, 0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20764 = new_Send((Optr)PSend20763, SMB__modulo_, 1, (Optr)int_86400_Const);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20765 = new_Send((Optr)self, SMB_fromSeconds_, 1, (Optr)PSend20764);
    Array PThreadedCode20762 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20763, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20764, (Optr)&t_send1, (Optr)PSend20765, (Optr)&t_method_return);
    Method PMethod20761 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20762, 1, PSend20765);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod20761, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20768 = new_Send((Optr)Date_classReference, SMB_today, 0);
    Array PThreadedCode20767 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_send0, (Optr)PSend20768, (Optr)&t_method_return);
    Method PMethod20766 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20767, 1, PSend20768);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20766, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_asDate, MC_SMB_asDate);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20770 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20772 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20771 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20772, (Optr)&t_method_return);
    Method PMethod20769 = new_Method_with(PArray20770, empty_Array, empty_Array, PThreadedCode20771, 1, PSend20772);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20769, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    // primSecondsClock. 
    Send PSend20775 = new_Send((Optr)self, SMB_primSecondsClock, 0);
    Array PThreadedCode20774 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20775, (Optr)&t_method_return);
    Method PMethod20773 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20774, 1, PSend20775);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod20773, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_totalSeconds, MC_SMB_totalSeconds);
}


static void init_class_SMB_primInitialize() {
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20779 = new_String(L"\n\tgettimeofday(&start_timeval, NULL);\n\t");
    Annotation PAnnotation20778 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_initialize, (Optr)SMB_Chronology_minus_Time, (Optr)string_20779);
    Array PArray20777 = new_Array_with(1, (Optr)PAnnotation20778);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20781 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20780 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20781, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20776 = new_NativeMethod_with(empty_Array, empty_Array, PArray20777, PThreadedCode20780, 2, PSend20781, self);
    
    MethodClosure MC_SMB_primInitialize = new_MethodClosure((Method)PNativeMethod20776, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primInitialize, MC_SMB_primInitialize);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20784 = new_Send((Optr)self, SMB_totalSeconds, 0);
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    // dateAndTimeFromSeconds:. 
    Send PSend20785 = new_Send((Optr)self, SMB_dateAndTimeFromSeconds_, 1, (Optr)PSend20784);
    Array PThreadedCode20783 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20784, (Optr)&t_send1, (Optr)PSend20785, (Optr)&t_method_return);
    Method PMethod20782 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20783, 1, PSend20785);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20782, HEADER(Chronology_Time_Class));
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