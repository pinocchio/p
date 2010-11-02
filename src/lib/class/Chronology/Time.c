#include <lib/class/Chronology/Time.h>


Optr layout_Chronology_Time_Class_class;
Optr slot_Chronology_Time_seconds;
Optr layout_Chronology_Time;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20113 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20112 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20113, (Optr)&t_method_return);
    Method PMethod20111 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20112, 1, PSend20113);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20111, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20116 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20115 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20116, (Optr)&t_method_return);
    Method PMethod20114 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20115, 1, PSend20116);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20114, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_ticks_() {
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray20118 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend20121 = new_Send((Optr)VAR_anArray_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20120 = new_Assign((Optr)slot_Chronology_Time_seconds, (Optr)PSend20121);
    Array PThreadedCode20119 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign20120, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20121, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20117 = new_Method_with(PArray20118, empty_Array, empty_Array, PThreadedCode20119, 2, PAssign20120, self);
    
    MethodClosure MC_SMB_ticks_ = new_MethodClosure((Method)PMethod20117, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks_, MC_SMB_ticks_);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20124 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20123 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20124, (Optr)&t_method_return);
    Method PMethod20122 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20123, 1, PSend20124);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20122, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20127 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20126 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send1, (Optr)PSend20127, (Optr)&t_method_return);
    Method PMethod20125 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20126, 1, PSend20127);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20125, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_print24_showSeconds_on_() {
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_showSeconds_0_1 = new_Variable_named(L"showSeconds", 0);
    Variable VAR_aStream_0_2 = new_Variable_named(L"aStream", 0);
    Array PArray20129 = new_Array_with(3, (Optr)VAR_hr24_0_0, (Optr)VAR_showSeconds_0_1, (Optr)VAR_aStream_0_2);
    Variable VAR_h_0_3 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_4 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_5 = new_Variable_named(L"s", 0);
    Array PArray20130 = new_Array_with(3, (Optr)VAR_h_0_3, (Optr)VAR_m_0_4, (Optr)VAR_s_0_5);
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20133 = new_Send((Optr)self, SMB_hour, 0);
    Assign PAssign20132 = new_Assign((Optr)VAR_h_0_3, (Optr)PSend20133);
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20135 = new_Send((Optr)self, SMB_minute, 0);
    Assign PAssign20134 = new_Assign((Optr)VAR_m_0_4, (Optr)PSend20135);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20137 = new_Send((Optr)self, SMB_second, 0);
    Assign PAssign20136 = new_Assign((Optr)VAR_s_0_5, (Optr)PSend20137);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20141 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9135 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9135_Const = new_Constant((Optr)char_9135);
    // <<. 
    Send PSend20145 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20144 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20145, (Optr)&t_block_return);
    Block PBlock20143 = new_Block_with(empty_Array, empty_Array, PThreadedCode20144, 1, PSend20145);
    // ifTrue:. 
    Send PSend20142 = new_Send((Optr)PSend20141, SMB_ifTrue_, 1, (Optr)PBlock20143);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20146 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20140 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20141, (Optr)&t_send_ifTrue_, (Optr)PSend20142, (Optr)PBlock20143, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20146, (Optr)&t_block_return);
    Block PBlock20139 = new_Block_with(empty_Array, empty_Array, PThreadedCode20140, 2, PSend20142, PSend20146);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_12_Const = new_Constant((Optr)int_12);
    // >. 
    Send PSend20149 = new_Send((Optr)VAR_h_0_3, SMB__gt_, 1, (Optr)int_12_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20153 = new_Send((Optr)VAR_h_0_3, SMB__minus_, 1, (Optr)int_12_Const);
    // printOn:. 
    Send PSend20154 = new_Send((Optr)PSend20153, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20152 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20153, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20154, (Optr)&t_block_return);
    Block PBlock20151 = new_Block_with(empty_Array, empty_Array, PThreadedCode20152, 1, PSend20154);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend20157 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_1_Const);
    // printOn:. 
    Send PSend20161 = new_Send((Optr)int_12_Const, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20160 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20161, (Optr)&t_block_return);
    Block PBlock20159 = new_Block_with(empty_Array, empty_Array, PThreadedCode20160, 1, PSend20161);
    // printOn:. 
    Send PSend20164 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20163 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20164, (Optr)&t_block_return);
    Block PBlock20162 = new_Block_with(empty_Array, empty_Array, PThreadedCode20163, 1, PSend20164);
    // ifTrue:ifFalse:. 
    Send PSend20158 = new_Send((Optr)PSend20157, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20159, (Optr)PBlock20162);
    Array PThreadedCode20156 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20157, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20158, (Optr)PBlock20159, (Optr)PBlock20162, (Optr)&t_block_return);
    Block PBlock20155 = new_Block_with(empty_Array, empty_Array, PThreadedCode20156, 1, PSend20158);
    // ifTrue:ifFalse:. 
    Send PSend20150 = new_Send((Optr)PSend20149, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20151, (Optr)PBlock20155);
    Array PThreadedCode20148 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20149, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20150, (Optr)PBlock20151, (Optr)PBlock20155, (Optr)&t_block_return);
    Block PBlock20147 = new_Block_with(empty_Array, empty_Array, PThreadedCode20148, 1, PSend20150);
    // ifTrue:ifFalse:. 
    Send PSend20138 = new_Send((Optr)VAR_hr24_0_0, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20139, (Optr)PBlock20147);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20165 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20166 = new_Send((Optr)VAR_m_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20170 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20169 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20170, (Optr)&t_block_return);
    Block PBlock20168 = new_Block_with(empty_Array, empty_Array, PThreadedCode20169, 1, PSend20170);
    // ifTrue:. 
    Send PSend20167 = new_Send((Optr)PSend20166, SMB_ifTrue_, 1, (Optr)PBlock20168);
    // printOn:. 
    Send PSend20171 = new_Send((Optr)VAR_m_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    // <<. 
    Send PSend20175 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20176 = new_Send((Optr)VAR_s_0_5, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20180 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20179 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20180, (Optr)&t_block_return);
    Block PBlock20178 = new_Block_with(empty_Array, empty_Array, PThreadedCode20179, 1, PSend20180);
    // ifTrue:. 
    Send PSend20177 = new_Send((Optr)PSend20176, SMB_ifTrue_, 1, (Optr)PBlock20178);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20181 = new_Send((Optr)VAR_s_0_5, SMB_asInteger, 0);
    // printOn:. 
    Send PSend20182 = new_Send((Optr)PSend20181, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20174 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20175, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20176, (Optr)&t_send_ifTrue_, (Optr)PSend20177, (Optr)PBlock20178, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_send0, (Optr)PSend20181, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20182, (Optr)&t_block_return);
    Block PBlock20173 = new_Block_with(empty_Array, empty_Array, PThreadedCode20174, 3, PSend20175, PSend20177, PSend20182);
    // ifTrue:. 
    Send PSend20172 = new_Send((Optr)VAR_showSeconds_0_1, SMB_ifTrue_, 1, (Optr)PBlock20173);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // <. 
    Send PSend20186 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_12_Const);
    String string_20190 = new_String(L" am");
    Constant string_20190_Const = new_Constant((Optr)string_20190);
    // <<. 
    Send PSend20191 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20190_Const);
    Array PThreadedCode20189 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20190, (Optr)&t_send1, (Optr)PSend20191, (Optr)&t_block_return);
    Block PBlock20188 = new_Block_with(empty_Array, empty_Array, PThreadedCode20189, 1, PSend20191);
    String string_20194 = new_String(L" pm");
    Constant string_20194_Const = new_Constant((Optr)string_20194);
    // <<. 
    Send PSend20195 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20194_Const);
    Array PThreadedCode20193 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20194, (Optr)&t_send1, (Optr)PSend20195, (Optr)&t_block_return);
    Block PBlock20192 = new_Block_with(empty_Array, empty_Array, PThreadedCode20193, 1, PSend20195);
    // ifTrue:ifFalse:. 
    Send PSend20187 = new_Send((Optr)PSend20186, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20188, (Optr)PBlock20192);
    Array PThreadedCode20185 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20186, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20187, (Optr)PBlock20188, (Optr)PBlock20192, (Optr)&t_block_return);
    Block PBlock20184 = new_Block_with(empty_Array, empty_Array, PThreadedCode20185, 1, PSend20187);
    // ifFalse:. 
    Send PSend20183 = new_Send((Optr)VAR_hr24_0_0, SMB_ifFalse_, 1, (Optr)PBlock20184);
    Array PThreadedCode20131 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign20132, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20133, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20134, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20135, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20136, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20137, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20138, (Optr)PBlock20139, (Optr)PBlock20147, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20165, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20166, (Optr)&t_send_ifTrue_, (Optr)PSend20167, (Optr)PBlock20168, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20171, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_showSeconds_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20172, (Optr)PBlock20173, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifFalse_, (Optr)PSend20183, (Optr)PBlock20184, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20128 = new_Method_with(PArray20129, PArray20130, empty_Array, PThreadedCode20131, 10, PAssign20132, PAssign20134, PAssign20136, PSend20138, PSend20165, PSend20167, PSend20171, PSend20172, PSend20183, self);
    
    MethodClosure MC_SMB_print24_showSeconds_on_ = new_MethodClosure((Method)PMethod20128, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_showSeconds_on_, MC_SMB_print24_showSeconds_on_);
}


static void init_SMB_print24_on_() {
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray20197 = new_Array_with(2, (Optr)VAR_hr24_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20199 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)VAR_hr24_0_0, (Optr)true_Const, (Optr)VAR_aStream_0_1);
    Array PThreadedCode20198 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send3, (Optr)PSend20199, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20196 = new_Method_with(PArray20197, empty_Array, empty_Array, PThreadedCode20198, 2, PSend20199, self);
    
    MethodClosure MC_SMB_print24_on_ = new_MethodClosure((Method)PMethod20196, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_on_, MC_SMB_print24_on_);
}


static void init_SMB_print24() {
    Symbol SMB_print24 = new_Symbol(L"print24");
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray20203 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    // print24:on:. 
    Send PSend20205 = new_Send((Optr)self, SMB_print24_on_, 2, (Optr)true_Const, (Optr)VAR_aStream_1_0);
    Array PThreadedCode20204 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send2, (Optr)PSend20205, (Optr)&t_method_return);
    Block PBlock20202 = new_Block_with(PArray20203, empty_Array, PThreadedCode20204, 1, PSend20205);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend20206 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock20202);
    Array PThreadedCode20201 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock20202, (Optr)&t_send1, (Optr)PSend20206, (Optr)&t_method_return);
    Method PMethod20200 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20201, 1, PSend20206);
    
    MethodClosure MC_SMB_print24 = new_MethodClosure((Method)PMethod20200, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24, MC_SMB_print24);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20208 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20210 = new_Send((Optr)self, SMB_second, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20211 = new_Send((Optr)PSend20210, SMB__notEquals_, 1, (Optr)int_0_Const);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20212 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)false_Const, (Optr)PSend20211, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20209 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20210, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20211, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send3, (Optr)PSend20212, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20207 = new_Method_with(PArray20208, empty_Array, empty_Array, PThreadedCode20209, 2, PSend20212, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20207, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20215 = new_Send((Optr)DateAndTime_classReference, SMB_today, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20216 = new_Send((Optr)PSend20215, SMB__plus_, 1, (Optr)self);
    Array PThreadedCode20214 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20215, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20216, (Optr)&t_method_return);
    Method PMethod20213 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20214, 1, PSend20216);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20213, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20219 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20220 = new_Send((Optr)PSend20219, SMB_seconds, 0);
    Array PThreadedCode20218 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20219, (Optr)&t_send0, (Optr)PSend20220, (Optr)&t_method_return);
    Method PMethod20217 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20218, 1, PSend20220);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20217, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // with:with:. 
    Send PSend20223 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)int_0_Const, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20222 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send2, (Optr)PSend20223, (Optr)&t_method_return);
    Method PMethod20221 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20222, 1, PSend20223);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20221, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20226 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20227 = new_Send((Optr)PSend20226, SMB_hours, 0);
    Array PThreadedCode20225 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20226, (Optr)&t_send0, (Optr)PSend20227, (Optr)&t_method_return);
    Method PMethod20224 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20225, 1, PSend20227);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20224, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20230 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20229 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20230, (Optr)&t_method_return);
    Method PMethod20228 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20229, 1, PSend20230);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20228, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20233 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20234 = new_Send((Optr)PSend20233, SMB_minutes, 0);
    Array PThreadedCode20232 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20233, (Optr)&t_send0, (Optr)PSend20234, (Optr)&t_method_return);
    Method PMethod20231 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20232, 1, PSend20234);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20231, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minute, MC_SMB_minute);
}


static void init_class_SMB_dateAndTimeFromSeconds_() {
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20236 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20238 = new_Send((Optr)Date_classReference, SMB_fromSeconds_, 1, (Optr)VAR_secondCount_0_0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20239 = new_Send((Optr)VAR_secondCount_0_0, SMB__modulo_, 1, (Optr)int_86400_Const);
    // fromSeconds:. 
    Send PSend20240 = new_Send((Optr)Time_classReference, SMB_fromSeconds_, 1, (Optr)PSend20239);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20241 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend20238, (Optr)PSend20240);
    Array PThreadedCode20237 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_send1, (Optr)PSend20238, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20239, (Optr)&t_send1, (Optr)PSend20240, (Optr)&t_send2, (Optr)PSend20241, (Optr)&t_method_return);
    Method PMethod20235 = new_Method_with(PArray20236, empty_Array, empty_Array, PThreadedCode20237, 1, PSend20241);
    
    MethodClosure MC_SMB_dateAndTimeFromSeconds_ = new_MethodClosure((Method)PMethod20235, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeFromSeconds_, MC_SMB_dateAndTimeFromSeconds_);
}


static void init_class_SMB_primInitialize() {
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20245 = new_String(L"\n\tgettimeofday(&start_timeval, NULL);\n\t");
    Annotation PAnnotation20244 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_initialize, (Optr)SMB_Chronology_minus_Time, (Optr)string_20245);
    Array PArray20243 = new_Array_with(1, (Optr)PAnnotation20244);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20247 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20246 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20247, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20242 = new_NativeMethod_with(empty_Array, empty_Array, PArray20243, PThreadedCode20246, 2, PSend20247, self);
    
    MethodClosure MC_SMB_primInitialize = new_MethodClosure((Method)PNativeMethod20242, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primInitialize, MC_SMB_primInitialize);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20250 = new_String(L"plugin/chronology/Time.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Chronology_minus_Time_Const = new_Constant((Optr)SMB_Chronology_minus_Time);
    Constant string_20250_Const = new_Constant((Optr)string_20250);
    // require:at:. 
    Send PSend20251 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Chronology_minus_Time_Const, (Optr)string_20250_Const);
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    // primInitialize. 
    Send PSend20252 = new_Send((Optr)self, SMB_primInitialize, 0);
    Array PThreadedCode20249 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Chronology_minus_Time, (Optr)&t_push1, (Optr)string_20250, (Optr)&t_send2, (Optr)PSend20251, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20252, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20248 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20249, 3, PSend20251, PSend20252, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod20248, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_primMillisecondClock() {
    Symbol SMB_primMillisecondClock = new_Symbol(L"primMillisecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_millisecondClock = new_Symbol(L"millisecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20256 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 + micro_seconds / 1000);\n\t");
    Annotation PAnnotation20255 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_millisecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20256);
    Array PArray20254 = new_Array_with(1, (Optr)PAnnotation20255);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20258 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20257 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20258, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20253 = new_NativeMethod_with(empty_Array, empty_Array, PArray20254, PThreadedCode20257, 2, PSend20258, self);
    
    MethodClosure MC_SMB_primMillisecondClock = new_MethodClosure((Method)PNativeMethod20253, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMillisecondClock, MC_SMB_primMillisecondClock);
}


static void init_class_SMB_primSecondsClock() {
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_secondsClock = new_Symbol(L"secondsClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20262 = new_String(L"\n    long seconds;\n    seconds = (long)time(NULL);\n    seconds += 2177452800;\n\t^wrap_int(seconds);\n\t");
    Annotation PAnnotation20261 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_secondsClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20262);
    Array PArray20260 = new_Array_with(1, (Optr)PAnnotation20261);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20264 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20263 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20264, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20259 = new_NativeMethod_with(empty_Array, empty_Array, PArray20260, PThreadedCode20263, 2, PSend20264, self);
    
    MethodClosure MC_SMB_primSecondsClock = new_MethodClosure((Method)PNativeMethod20259, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primSecondsClock, MC_SMB_primSecondsClock);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20266 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20268 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20269 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20270 = new_Send((Optr)PSend20269, SMB_ticks, 0);
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    // ticks:. 
    Send PSend20271 = new_Send((Optr)PSend20268, SMB_ticks_, 1, (Optr)PSend20270);
    Array PThreadedCode20267 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20268, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20269, (Optr)&t_send0, (Optr)PSend20270, (Optr)&t_send1, (Optr)PSend20271, (Optr)&t_method_return);
    Method PMethod20265 = new_Method_with(PArray20266, empty_Array, empty_Array, PThreadedCode20267, 1, PSend20271);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20265, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20274 = new_Send((Optr)self, SMB_totalSeconds, 0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20275 = new_Send((Optr)PSend20274, SMB__modulo_, 1, (Optr)int_86400_Const);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20276 = new_Send((Optr)self, SMB_fromSeconds_, 1, (Optr)PSend20275);
    Array PThreadedCode20273 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20274, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20275, (Optr)&t_send1, (Optr)PSend20276, (Optr)&t_method_return);
    Method PMethod20272 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20273, 1, PSend20276);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod20272, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20279 = new_Send((Optr)Date_classReference, SMB_today, 0);
    Array PThreadedCode20278 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_send0, (Optr)PSend20279, (Optr)&t_method_return);
    Method PMethod20277 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20278, 1, PSend20279);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20277, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_asDate, MC_SMB_asDate);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20281 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20283 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20282 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20283, (Optr)&t_method_return);
    Method PMethod20280 = new_Method_with(PArray20281, empty_Array, empty_Array, PThreadedCode20282, 1, PSend20283);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20280, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    // primSecondsClock. 
    Send PSend20286 = new_Send((Optr)self, SMB_primSecondsClock, 0);
    Array PThreadedCode20285 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20286, (Optr)&t_method_return);
    Method PMethod20284 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20285, 1, PSend20286);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod20284, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_totalSeconds, MC_SMB_totalSeconds);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20289 = new_Send((Optr)self, SMB_totalSeconds, 0);
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    // dateAndTimeFromSeconds:. 
    Send PSend20290 = new_Send((Optr)self, SMB_dateAndTimeFromSeconds_, 1, (Optr)PSend20289);
    Array PThreadedCode20288 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20289, (Optr)&t_send1, (Optr)PSend20290, (Optr)&t_method_return);
    Method PMethod20287 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20288, 1, PSend20290);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20287, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeNow, MC_SMB_dateAndTimeNow);
}


static void init_class_SMB_primMicrosecondClock() {
    Symbol SMB_primMicrosecondClock = new_Symbol(L"primMicrosecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_microsecondClock = new_Symbol(L"microsecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20294 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 * 1000 + micro_seconds);\n\t");
    Annotation PAnnotation20293 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_microsecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20294);
    Array PArray20292 = new_Array_with(1, (Optr)PAnnotation20293);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20296 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20295 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20296, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20291 = new_NativeMethod_with(empty_Array, empty_Array, PArray20292, PThreadedCode20295, 2, PSend20296, self);
    
    MethodClosure MC_SMB_primMicrosecondClock = new_MethodClosure((Method)PNativeMethod20291, HEADER(Chronology_Time_Class));
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