#include <lib/class/Chronology/Time.h>


Optr layout_Chronology_Time_Class_class;
Optr slot_Chronology_Time_seconds;
Optr layout_Chronology_Time;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20143 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20142 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20143, (Optr)&t_method_return);
    Method PMethod20141 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20142, 1, PSend20143);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20141, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20146 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20145 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20146, (Optr)&t_method_return);
    Method PMethod20144 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20145, 1, PSend20146);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20144, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_ticks_() {
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray20148 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend20151 = new_Send((Optr)VAR_anArray_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20150 = new_Assign((Optr)slot_Chronology_Time_seconds, (Optr)PSend20151);
    Array PThreadedCode20149 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign20150, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20151, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20147 = new_Method_with(PArray20148, empty_Array, empty_Array, PThreadedCode20149, 2, PAssign20150, self);
    
    MethodClosure MC_SMB_ticks_ = new_MethodClosure((Method)PMethod20147, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks_, MC_SMB_ticks_);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20154 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20153 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20154, (Optr)&t_method_return);
    Method PMethod20152 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20153, 1, PSend20154);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20152, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20157 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20156 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send1, (Optr)PSend20157, (Optr)&t_method_return);
    Method PMethod20155 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20156, 1, PSend20157);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20155, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_print24_showSeconds_on_() {
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_showSeconds_0_1 = new_Variable_named(L"showSeconds", 0);
    Variable VAR_aStream_0_2 = new_Variable_named(L"aStream", 0);
    Array PArray20159 = new_Array_with(3, (Optr)VAR_hr24_0_0, (Optr)VAR_showSeconds_0_1, (Optr)VAR_aStream_0_2);
    Variable VAR_h_0_3 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_4 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_5 = new_Variable_named(L"s", 0);
    Array PArray20160 = new_Array_with(3, (Optr)VAR_h_0_3, (Optr)VAR_m_0_4, (Optr)VAR_s_0_5);
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20163 = new_Send((Optr)self, SMB_hour, 0);
    Assign PAssign20162 = new_Assign((Optr)VAR_h_0_3, (Optr)PSend20163);
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20165 = new_Send((Optr)self, SMB_minute, 0);
    Assign PAssign20164 = new_Assign((Optr)VAR_m_0_4, (Optr)PSend20165);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20167 = new_Send((Optr)self, SMB_second, 0);
    Assign PAssign20166 = new_Assign((Optr)VAR_s_0_5, (Optr)PSend20167);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20171 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9159 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9159_Const = new_Constant((Optr)char_9159);
    // <<. 
    Send PSend20175 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20174 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20175, (Optr)&t_block_return);
    Block PBlock20173 = new_Block_with(empty_Array, empty_Array, PThreadedCode20174, 1, PSend20175);
    // ifTrue:. 
    Send PSend20172 = new_Send((Optr)PSend20171, SMB_ifTrue_, 1, (Optr)PBlock20173);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20176 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20170 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20171, (Optr)&t_send_ifTrue_, (Optr)PSend20172, (Optr)PBlock20173, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20176, (Optr)&t_block_return);
    Block PBlock20169 = new_Block_with(empty_Array, empty_Array, PThreadedCode20170, 2, PSend20172, PSend20176);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_12_Const = new_Constant((Optr)int_12);
    // >. 
    Send PSend20179 = new_Send((Optr)VAR_h_0_3, SMB__gt_, 1, (Optr)int_12_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20183 = new_Send((Optr)VAR_h_0_3, SMB__minus_, 1, (Optr)int_12_Const);
    // printOn:. 
    Send PSend20184 = new_Send((Optr)PSend20183, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20182 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20183, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20184, (Optr)&t_block_return);
    Block PBlock20181 = new_Block_with(empty_Array, empty_Array, PThreadedCode20182, 1, PSend20184);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend20187 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_1_Const);
    // printOn:. 
    Send PSend20191 = new_Send((Optr)int_12_Const, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20190 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20191, (Optr)&t_block_return);
    Block PBlock20189 = new_Block_with(empty_Array, empty_Array, PThreadedCode20190, 1, PSend20191);
    // printOn:. 
    Send PSend20194 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20193 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20194, (Optr)&t_block_return);
    Block PBlock20192 = new_Block_with(empty_Array, empty_Array, PThreadedCode20193, 1, PSend20194);
    // ifTrue:ifFalse:. 
    Send PSend20188 = new_Send((Optr)PSend20187, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20189, (Optr)PBlock20192);
    Array PThreadedCode20186 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20187, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20188, (Optr)PBlock20189, (Optr)PBlock20192, (Optr)&t_block_return);
    Block PBlock20185 = new_Block_with(empty_Array, empty_Array, PThreadedCode20186, 1, PSend20188);
    // ifTrue:ifFalse:. 
    Send PSend20180 = new_Send((Optr)PSend20179, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20181, (Optr)PBlock20185);
    Array PThreadedCode20178 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20179, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20180, (Optr)PBlock20181, (Optr)PBlock20185, (Optr)&t_block_return);
    Block PBlock20177 = new_Block_with(empty_Array, empty_Array, PThreadedCode20178, 1, PSend20180);
    // ifTrue:ifFalse:. 
    Send PSend20168 = new_Send((Optr)VAR_hr24_0_0, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20169, (Optr)PBlock20177);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20195 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20196 = new_Send((Optr)VAR_m_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20200 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20199 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20200, (Optr)&t_block_return);
    Block PBlock20198 = new_Block_with(empty_Array, empty_Array, PThreadedCode20199, 1, PSend20200);
    // ifTrue:. 
    Send PSend20197 = new_Send((Optr)PSend20196, SMB_ifTrue_, 1, (Optr)PBlock20198);
    // printOn:. 
    Send PSend20201 = new_Send((Optr)VAR_m_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    // <<. 
    Send PSend20205 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20206 = new_Send((Optr)VAR_s_0_5, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20210 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20209 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20210, (Optr)&t_block_return);
    Block PBlock20208 = new_Block_with(empty_Array, empty_Array, PThreadedCode20209, 1, PSend20210);
    // ifTrue:. 
    Send PSend20207 = new_Send((Optr)PSend20206, SMB_ifTrue_, 1, (Optr)PBlock20208);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20211 = new_Send((Optr)VAR_s_0_5, SMB_asInteger, 0);
    // printOn:. 
    Send PSend20212 = new_Send((Optr)PSend20211, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20204 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20205, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20206, (Optr)&t_send_ifTrue_, (Optr)PSend20207, (Optr)PBlock20208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_send0, (Optr)PSend20211, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20212, (Optr)&t_block_return);
    Block PBlock20203 = new_Block_with(empty_Array, empty_Array, PThreadedCode20204, 3, PSend20205, PSend20207, PSend20212);
    // ifTrue:. 
    Send PSend20202 = new_Send((Optr)VAR_showSeconds_0_1, SMB_ifTrue_, 1, (Optr)PBlock20203);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // <. 
    Send PSend20216 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_12_Const);
    String string_20220 = new_String(L" am");
    Constant string_20220_Const = new_Constant((Optr)string_20220);
    // <<. 
    Send PSend20221 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20220_Const);
    Array PThreadedCode20219 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20220, (Optr)&t_send1, (Optr)PSend20221, (Optr)&t_block_return);
    Block PBlock20218 = new_Block_with(empty_Array, empty_Array, PThreadedCode20219, 1, PSend20221);
    String string_20224 = new_String(L" pm");
    Constant string_20224_Const = new_Constant((Optr)string_20224);
    // <<. 
    Send PSend20225 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20224_Const);
    Array PThreadedCode20223 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20224, (Optr)&t_send1, (Optr)PSend20225, (Optr)&t_block_return);
    Block PBlock20222 = new_Block_with(empty_Array, empty_Array, PThreadedCode20223, 1, PSend20225);
    // ifTrue:ifFalse:. 
    Send PSend20217 = new_Send((Optr)PSend20216, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20218, (Optr)PBlock20222);
    Array PThreadedCode20215 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20216, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20217, (Optr)PBlock20218, (Optr)PBlock20222, (Optr)&t_block_return);
    Block PBlock20214 = new_Block_with(empty_Array, empty_Array, PThreadedCode20215, 1, PSend20217);
    // ifFalse:. 
    Send PSend20213 = new_Send((Optr)VAR_hr24_0_0, SMB_ifFalse_, 1, (Optr)PBlock20214);
    Array PThreadedCode20161 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign20162, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20163, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20164, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20165, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20166, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20167, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20168, (Optr)PBlock20169, (Optr)PBlock20177, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20195, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20196, (Optr)&t_send_ifTrue_, (Optr)PSend20197, (Optr)PBlock20198, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20201, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_showSeconds_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20202, (Optr)PBlock20203, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifFalse_, (Optr)PSend20213, (Optr)PBlock20214, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20158 = new_Method_with(PArray20159, PArray20160, empty_Array, PThreadedCode20161, 10, PAssign20162, PAssign20164, PAssign20166, PSend20168, PSend20195, PSend20197, PSend20201, PSend20202, PSend20213, self);
    
    MethodClosure MC_SMB_print24_showSeconds_on_ = new_MethodClosure((Method)PMethod20158, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_showSeconds_on_, MC_SMB_print24_showSeconds_on_);
}


static void init_SMB_print24_on_() {
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray20227 = new_Array_with(2, (Optr)VAR_hr24_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20229 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)VAR_hr24_0_0, (Optr)true_Const, (Optr)VAR_aStream_0_1);
    Array PThreadedCode20228 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send3, (Optr)PSend20229, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20226 = new_Method_with(PArray20227, empty_Array, empty_Array, PThreadedCode20228, 2, PSend20229, self);
    
    MethodClosure MC_SMB_print24_on_ = new_MethodClosure((Method)PMethod20226, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_on_, MC_SMB_print24_on_);
}


static void init_SMB_print24() {
    Symbol SMB_print24 = new_Symbol(L"print24");
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray20233 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    // print24:on:. 
    Send PSend20235 = new_Send((Optr)self, SMB_print24_on_, 2, (Optr)true_Const, (Optr)VAR_aStream_1_0);
    Array PThreadedCode20234 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send2, (Optr)PSend20235, (Optr)&t_method_return);
    Block PBlock20232 = new_Block_with(PArray20233, empty_Array, PThreadedCode20234, 1, PSend20235);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend20236 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock20232);
    Array PThreadedCode20231 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock20232, (Optr)&t_send1, (Optr)PSend20236, (Optr)&t_method_return);
    Method PMethod20230 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20231, 1, PSend20236);
    
    MethodClosure MC_SMB_print24 = new_MethodClosure((Method)PMethod20230, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24, MC_SMB_print24);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20238 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20240 = new_Send((Optr)self, SMB_second, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20241 = new_Send((Optr)PSend20240, SMB__notEquals_, 1, (Optr)int_0_Const);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20242 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)false_Const, (Optr)PSend20241, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20239 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20240, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20241, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send3, (Optr)PSend20242, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20237 = new_Method_with(PArray20238, empty_Array, empty_Array, PThreadedCode20239, 2, PSend20242, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20237, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20245 = new_Send((Optr)DateAndTime_classReference, SMB_today, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20246 = new_Send((Optr)PSend20245, SMB__plus_, 1, (Optr)self);
    Array PThreadedCode20244 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20245, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20246, (Optr)&t_method_return);
    Method PMethod20243 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20244, 1, PSend20246);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20243, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20249 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20250 = new_Send((Optr)PSend20249, SMB_seconds, 0);
    Array PThreadedCode20248 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20249, (Optr)&t_send0, (Optr)PSend20250, (Optr)&t_method_return);
    Method PMethod20247 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20248, 1, PSend20250);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20247, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // with:with:. 
    Send PSend20253 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)int_0_Const, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20252 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send2, (Optr)PSend20253, (Optr)&t_method_return);
    Method PMethod20251 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20252, 1, PSend20253);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20251, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20256 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20257 = new_Send((Optr)PSend20256, SMB_hours, 0);
    Array PThreadedCode20255 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20256, (Optr)&t_send0, (Optr)PSend20257, (Optr)&t_method_return);
    Method PMethod20254 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20255, 1, PSend20257);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20254, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20260 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20259 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20260, (Optr)&t_method_return);
    Method PMethod20258 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20259, 1, PSend20260);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20258, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20263 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20264 = new_Send((Optr)PSend20263, SMB_minutes, 0);
    Array PThreadedCode20262 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20263, (Optr)&t_send0, (Optr)PSend20264, (Optr)&t_method_return);
    Method PMethod20261 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20262, 1, PSend20264);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20261, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minute, MC_SMB_minute);
}


static void init_class_SMB_dateAndTimeFromSeconds_() {
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20266 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20268 = new_Send((Optr)Date_classReference, SMB_fromSeconds_, 1, (Optr)VAR_secondCount_0_0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20269 = new_Send((Optr)VAR_secondCount_0_0, SMB__modulo_, 1, (Optr)int_86400_Const);
    // fromSeconds:. 
    Send PSend20270 = new_Send((Optr)Time_classReference, SMB_fromSeconds_, 1, (Optr)PSend20269);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20271 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend20268, (Optr)PSend20270);
    Array PThreadedCode20267 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_send1, (Optr)PSend20268, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20269, (Optr)&t_send1, (Optr)PSend20270, (Optr)&t_send2, (Optr)PSend20271, (Optr)&t_method_return);
    Method PMethod20265 = new_Method_with(PArray20266, empty_Array, empty_Array, PThreadedCode20267, 1, PSend20271);
    
    MethodClosure MC_SMB_dateAndTimeFromSeconds_ = new_MethodClosure((Method)PMethod20265, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeFromSeconds_, MC_SMB_dateAndTimeFromSeconds_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20274 = new_String(L"plugin/chronology/Time.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Chronology_minus_Time_Const = new_Constant((Optr)SMB_Chronology_minus_Time);
    Constant string_20274_Const = new_Constant((Optr)string_20274);
    // require:at:. 
    Send PSend20275 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Chronology_minus_Time_Const, (Optr)string_20274_Const);
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    // primInitialize. 
    Send PSend20276 = new_Send((Optr)self, SMB_primInitialize, 0);
    Array PThreadedCode20273 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Chronology_minus_Time, (Optr)&t_push1, (Optr)string_20274, (Optr)&t_send2, (Optr)PSend20275, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20276, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20272 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20273, 3, PSend20275, PSend20276, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod20272, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_primMicrosecondClock() {
    Symbol SMB_primMicrosecondClock = new_Symbol(L"primMicrosecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_microsecondClock = new_Symbol(L"microsecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20280 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 * 1000 + micro_seconds);\n\t");
    Annotation PAnnotation20279 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_microsecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20280);
    Array PArray20278 = new_Array_with(1, (Optr)PAnnotation20279);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20282 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20281 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20282, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20277 = new_NativeMethod_with(empty_Array, empty_Array, PArray20278, PThreadedCode20281, 2, PSend20282, self);
    
    MethodClosure MC_SMB_primMicrosecondClock = new_MethodClosure((Method)PNativeMethod20277, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMicrosecondClock, MC_SMB_primMicrosecondClock);
}


static void init_class_SMB_primMillisecondClock() {
    Symbol SMB_primMillisecondClock = new_Symbol(L"primMillisecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_millisecondClock = new_Symbol(L"millisecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20286 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 + micro_seconds / 1000);\n\t");
    Annotation PAnnotation20285 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_millisecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20286);
    Array PArray20284 = new_Array_with(1, (Optr)PAnnotation20285);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20288 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20287 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20288, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20283 = new_NativeMethod_with(empty_Array, empty_Array, PArray20284, PThreadedCode20287, 2, PSend20288, self);
    
    MethodClosure MC_SMB_primMillisecondClock = new_MethodClosure((Method)PNativeMethod20283, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMillisecondClock, MC_SMB_primMillisecondClock);
}


static void init_class_SMB_primSecondsClock() {
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_secondsClock = new_Symbol(L"secondsClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20292 = new_String(L"\n    long seconds;\n    seconds = (long)time(NULL);\n    seconds += 2177452800;\n\t^wrap_int(seconds);\n\t");
    Annotation PAnnotation20291 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_secondsClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20292);
    Array PArray20290 = new_Array_with(1, (Optr)PAnnotation20291);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20294 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20293 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20294, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20289 = new_NativeMethod_with(empty_Array, empty_Array, PArray20290, PThreadedCode20293, 2, PSend20294, self);
    
    MethodClosure MC_SMB_primSecondsClock = new_MethodClosure((Method)PNativeMethod20289, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primSecondsClock, MC_SMB_primSecondsClock);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20296 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20298 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20299 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20300 = new_Send((Optr)PSend20299, SMB_ticks, 0);
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    // ticks:. 
    Send PSend20301 = new_Send((Optr)PSend20298, SMB_ticks_, 1, (Optr)PSend20300);
    Array PThreadedCode20297 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20298, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20299, (Optr)&t_send0, (Optr)PSend20300, (Optr)&t_send1, (Optr)PSend20301, (Optr)&t_method_return);
    Method PMethod20295 = new_Method_with(PArray20296, empty_Array, empty_Array, PThreadedCode20297, 1, PSend20301);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20295, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20304 = new_Send((Optr)self, SMB_totalSeconds, 0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20305 = new_Send((Optr)PSend20304, SMB__modulo_, 1, (Optr)int_86400_Const);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20306 = new_Send((Optr)self, SMB_fromSeconds_, 1, (Optr)PSend20305);
    Array PThreadedCode20303 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20304, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20305, (Optr)&t_send1, (Optr)PSend20306, (Optr)&t_method_return);
    Method PMethod20302 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20303, 1, PSend20306);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod20302, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20309 = new_Send((Optr)Date_classReference, SMB_today, 0);
    Array PThreadedCode20308 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_send0, (Optr)PSend20309, (Optr)&t_method_return);
    Method PMethod20307 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20308, 1, PSend20309);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20307, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_asDate, MC_SMB_asDate);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20311 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20313 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20312 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20313, (Optr)&t_method_return);
    Method PMethod20310 = new_Method_with(PArray20311, empty_Array, empty_Array, PThreadedCode20312, 1, PSend20313);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20310, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    // primSecondsClock. 
    Send PSend20316 = new_Send((Optr)self, SMB_primSecondsClock, 0);
    Array PThreadedCode20315 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20316, (Optr)&t_method_return);
    Method PMethod20314 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20315, 1, PSend20316);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod20314, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_totalSeconds, MC_SMB_totalSeconds);
}


static void init_class_SMB_primInitialize() {
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20320 = new_String(L"\n\tgettimeofday(&start_timeval, NULL);\n\t");
    Annotation PAnnotation20319 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_initialize, (Optr)SMB_Chronology_minus_Time, (Optr)string_20320);
    Array PArray20318 = new_Array_with(1, (Optr)PAnnotation20319);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20322 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20321 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20322, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20317 = new_NativeMethod_with(empty_Array, empty_Array, PArray20318, PThreadedCode20321, 2, PSend20322, self);
    
    MethodClosure MC_SMB_primInitialize = new_MethodClosure((Method)PNativeMethod20317, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primInitialize, MC_SMB_primInitialize);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20325 = new_Send((Optr)self, SMB_totalSeconds, 0);
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    // dateAndTimeFromSeconds:. 
    Send PSend20326 = new_Send((Optr)self, SMB_dateAndTimeFromSeconds_, 1, (Optr)PSend20325);
    Array PThreadedCode20324 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20325, (Optr)&t_send1, (Optr)PSend20326, (Optr)&t_method_return);
    Method PMethod20323 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20324, 1, PSend20326);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20323, HEADER(Chronology_Time_Class));
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