#include <lib/class/Chronology/Time.h>


Optr layout_Chronology_Time_Class_class;
Optr slot_Chronology_Time_seconds;
Optr layout_Chronology_Time;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20200 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20199 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20200, (Optr)&t_method_return);
    Method PMethod20198 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20199, 1, PSend20200);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20198, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20203 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20202 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20203, (Optr)&t_method_return);
    Method PMethod20201 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20202, 1, PSend20203);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20201, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_ticks_() {
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray20205 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend20208 = new_Send((Optr)VAR_anArray_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20207 = new_Assign((Optr)slot_Chronology_Time_seconds, (Optr)PSend20208);
    Array PThreadedCode20206 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign20207, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20208, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20204 = new_Method_with(PArray20205, empty_Array, empty_Array, PThreadedCode20206, 2, PAssign20207, self);
    
    MethodClosure MC_SMB_ticks_ = new_MethodClosure((Method)PMethod20204, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks_, MC_SMB_ticks_);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20211 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20210 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20211, (Optr)&t_method_return);
    Method PMethod20209 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20210, 1, PSend20211);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20209, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20214 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20213 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send1, (Optr)PSend20214, (Optr)&t_method_return);
    Method PMethod20212 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20213, 1, PSend20214);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20212, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_print24_showSeconds_on_() {
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_showSeconds_0_1 = new_Variable_named(L"showSeconds", 0);
    Variable VAR_aStream_0_2 = new_Variable_named(L"aStream", 0);
    Array PArray20216 = new_Array_with(3, (Optr)VAR_hr24_0_0, (Optr)VAR_showSeconds_0_1, (Optr)VAR_aStream_0_2);
    Variable VAR_h_0_3 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_4 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_5 = new_Variable_named(L"s", 0);
    Array PArray20217 = new_Array_with(3, (Optr)VAR_h_0_3, (Optr)VAR_m_0_4, (Optr)VAR_s_0_5);
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20220 = new_Send((Optr)self, SMB_hour, 0);
    Assign PAssign20219 = new_Assign((Optr)VAR_h_0_3, (Optr)PSend20220);
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20222 = new_Send((Optr)self, SMB_minute, 0);
    Assign PAssign20221 = new_Assign((Optr)VAR_m_0_4, (Optr)PSend20222);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20224 = new_Send((Optr)self, SMB_second, 0);
    Assign PAssign20223 = new_Assign((Optr)VAR_s_0_5, (Optr)PSend20224);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20228 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9124 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9124_Const = new_Constant((Optr)char_9124);
    // <<. 
    Send PSend20232 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20231 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20232, (Optr)&t_block_return);
    Block PBlock20230 = new_Block_with(empty_Array, empty_Array, PThreadedCode20231, 1, PSend20232);
    // ifTrue:. 
    Send PSend20229 = new_Send((Optr)PSend20228, SMB_ifTrue_, 1, (Optr)PBlock20230);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20233 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20227 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20228, (Optr)&t_send_ifTrue_, (Optr)PSend20229, (Optr)PBlock20230, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20233, (Optr)&t_block_return);
    Block PBlock20226 = new_Block_with(empty_Array, empty_Array, PThreadedCode20227, 2, PSend20229, PSend20233);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_12_Const = new_Constant((Optr)int_12);
    // >. 
    Send PSend20236 = new_Send((Optr)VAR_h_0_3, SMB__gt_, 1, (Optr)int_12_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20240 = new_Send((Optr)VAR_h_0_3, SMB__minus_, 1, (Optr)int_12_Const);
    // printOn:. 
    Send PSend20241 = new_Send((Optr)PSend20240, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20239 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20240, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20241, (Optr)&t_block_return);
    Block PBlock20238 = new_Block_with(empty_Array, empty_Array, PThreadedCode20239, 1, PSend20241);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend20244 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_1_Const);
    // printOn:. 
    Send PSend20248 = new_Send((Optr)int_12_Const, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20247 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20248, (Optr)&t_block_return);
    Block PBlock20246 = new_Block_with(empty_Array, empty_Array, PThreadedCode20247, 1, PSend20248);
    // printOn:. 
    Send PSend20251 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20250 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20251, (Optr)&t_block_return);
    Block PBlock20249 = new_Block_with(empty_Array, empty_Array, PThreadedCode20250, 1, PSend20251);
    // ifTrue:ifFalse:. 
    Send PSend20245 = new_Send((Optr)PSend20244, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20246, (Optr)PBlock20249);
    Array PThreadedCode20243 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20244, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20245, (Optr)PBlock20246, (Optr)PBlock20249, (Optr)&t_block_return);
    Block PBlock20242 = new_Block_with(empty_Array, empty_Array, PThreadedCode20243, 1, PSend20245);
    // ifTrue:ifFalse:. 
    Send PSend20237 = new_Send((Optr)PSend20236, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20238, (Optr)PBlock20242);
    Array PThreadedCode20235 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20236, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20237, (Optr)PBlock20238, (Optr)PBlock20242, (Optr)&t_block_return);
    Block PBlock20234 = new_Block_with(empty_Array, empty_Array, PThreadedCode20235, 1, PSend20237);
    // ifTrue:ifFalse:. 
    Send PSend20225 = new_Send((Optr)VAR_hr24_0_0, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20226, (Optr)PBlock20234);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20252 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20253 = new_Send((Optr)VAR_m_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20257 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20256 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20257, (Optr)&t_block_return);
    Block PBlock20255 = new_Block_with(empty_Array, empty_Array, PThreadedCode20256, 1, PSend20257);
    // ifTrue:. 
    Send PSend20254 = new_Send((Optr)PSend20253, SMB_ifTrue_, 1, (Optr)PBlock20255);
    // printOn:. 
    Send PSend20258 = new_Send((Optr)VAR_m_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    // <<. 
    Send PSend20262 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20263 = new_Send((Optr)VAR_s_0_5, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20267 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20266 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20267, (Optr)&t_block_return);
    Block PBlock20265 = new_Block_with(empty_Array, empty_Array, PThreadedCode20266, 1, PSend20267);
    // ifTrue:. 
    Send PSend20264 = new_Send((Optr)PSend20263, SMB_ifTrue_, 1, (Optr)PBlock20265);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20268 = new_Send((Optr)VAR_s_0_5, SMB_asInteger, 0);
    // printOn:. 
    Send PSend20269 = new_Send((Optr)PSend20268, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20261 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20262, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20263, (Optr)&t_send_ifTrue_, (Optr)PSend20264, (Optr)PBlock20265, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_send0, (Optr)PSend20268, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20269, (Optr)&t_block_return);
    Block PBlock20260 = new_Block_with(empty_Array, empty_Array, PThreadedCode20261, 3, PSend20262, PSend20264, PSend20269);
    // ifTrue:. 
    Send PSend20259 = new_Send((Optr)VAR_showSeconds_0_1, SMB_ifTrue_, 1, (Optr)PBlock20260);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // <. 
    Send PSend20273 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_12_Const);
    String string_20277 = new_String(L" am");
    Constant string_20277_Const = new_Constant((Optr)string_20277);
    // <<. 
    Send PSend20278 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20277_Const);
    Array PThreadedCode20276 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20277, (Optr)&t_send1, (Optr)PSend20278, (Optr)&t_block_return);
    Block PBlock20275 = new_Block_with(empty_Array, empty_Array, PThreadedCode20276, 1, PSend20278);
    String string_20281 = new_String(L" pm");
    Constant string_20281_Const = new_Constant((Optr)string_20281);
    // <<. 
    Send PSend20282 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20281_Const);
    Array PThreadedCode20280 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20281, (Optr)&t_send1, (Optr)PSend20282, (Optr)&t_block_return);
    Block PBlock20279 = new_Block_with(empty_Array, empty_Array, PThreadedCode20280, 1, PSend20282);
    // ifTrue:ifFalse:. 
    Send PSend20274 = new_Send((Optr)PSend20273, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20275, (Optr)PBlock20279);
    Array PThreadedCode20272 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20273, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20274, (Optr)PBlock20275, (Optr)PBlock20279, (Optr)&t_block_return);
    Block PBlock20271 = new_Block_with(empty_Array, empty_Array, PThreadedCode20272, 1, PSend20274);
    // ifFalse:. 
    Send PSend20270 = new_Send((Optr)VAR_hr24_0_0, SMB_ifFalse_, 1, (Optr)PBlock20271);
    Array PThreadedCode20218 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign20219, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20220, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20221, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20222, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20223, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20224, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20225, (Optr)PBlock20226, (Optr)PBlock20234, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20252, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20253, (Optr)&t_send_ifTrue_, (Optr)PSend20254, (Optr)PBlock20255, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20258, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_showSeconds_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20259, (Optr)PBlock20260, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifFalse_, (Optr)PSend20270, (Optr)PBlock20271, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20215 = new_Method_with(PArray20216, PArray20217, empty_Array, PThreadedCode20218, 10, PAssign20219, PAssign20221, PAssign20223, PSend20225, PSend20252, PSend20254, PSend20258, PSend20259, PSend20270, self);
    
    MethodClosure MC_SMB_print24_showSeconds_on_ = new_MethodClosure((Method)PMethod20215, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_showSeconds_on_, MC_SMB_print24_showSeconds_on_);
}


static void init_SMB_print24_on_() {
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray20284 = new_Array_with(2, (Optr)VAR_hr24_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20286 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)VAR_hr24_0_0, (Optr)true_Const, (Optr)VAR_aStream_0_1);
    Array PThreadedCode20285 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send3, (Optr)PSend20286, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20283 = new_Method_with(PArray20284, empty_Array, empty_Array, PThreadedCode20285, 2, PSend20286, self);
    
    MethodClosure MC_SMB_print24_on_ = new_MethodClosure((Method)PMethod20283, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_on_, MC_SMB_print24_on_);
}


static void init_SMB_print24() {
    Symbol SMB_print24 = new_Symbol(L"print24");
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray20290 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    // print24:on:. 
    Send PSend20292 = new_Send((Optr)self, SMB_print24_on_, 2, (Optr)true_Const, (Optr)VAR_aStream_1_0);
    Array PThreadedCode20291 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send2, (Optr)PSend20292, (Optr)&t_method_return);
    Block PBlock20289 = new_Block_with(PArray20290, empty_Array, PThreadedCode20291, 1, PSend20292);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend20293 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock20289);
    Array PThreadedCode20288 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock20289, (Optr)&t_send1, (Optr)PSend20293, (Optr)&t_method_return);
    Method PMethod20287 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20288, 1, PSend20293);
    
    MethodClosure MC_SMB_print24 = new_MethodClosure((Method)PMethod20287, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24, MC_SMB_print24);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20295 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20297 = new_Send((Optr)self, SMB_second, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20298 = new_Send((Optr)PSend20297, SMB__notEquals_, 1, (Optr)int_0_Const);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20299 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)false_Const, (Optr)PSend20298, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20296 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20297, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20298, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send3, (Optr)PSend20299, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20294 = new_Method_with(PArray20295, empty_Array, empty_Array, PThreadedCode20296, 2, PSend20299, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20294, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20302 = new_Send((Optr)DateAndTime_classReference, SMB_today, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20303 = new_Send((Optr)PSend20302, SMB__plus_, 1, (Optr)self);
    Array PThreadedCode20301 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20302, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20303, (Optr)&t_method_return);
    Method PMethod20300 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20301, 1, PSend20303);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20300, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20306 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20307 = new_Send((Optr)PSend20306, SMB_seconds, 0);
    Array PThreadedCode20305 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20306, (Optr)&t_send0, (Optr)PSend20307, (Optr)&t_method_return);
    Method PMethod20304 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20305, 1, PSend20307);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20304, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // with:with:. 
    Send PSend20310 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)int_0_Const, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20309 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send2, (Optr)PSend20310, (Optr)&t_method_return);
    Method PMethod20308 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20309, 1, PSend20310);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20308, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20313 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20314 = new_Send((Optr)PSend20313, SMB_hours, 0);
    Array PThreadedCode20312 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20313, (Optr)&t_send0, (Optr)PSend20314, (Optr)&t_method_return);
    Method PMethod20311 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20312, 1, PSend20314);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20311, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20317 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20316 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20317, (Optr)&t_method_return);
    Method PMethod20315 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20316, 1, PSend20317);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20315, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20320 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20321 = new_Send((Optr)PSend20320, SMB_minutes, 0);
    Array PThreadedCode20319 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20320, (Optr)&t_send0, (Optr)PSend20321, (Optr)&t_method_return);
    Method PMethod20318 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20319, 1, PSend20321);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20318, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minute, MC_SMB_minute);
}


static void init_class_SMB_dateAndTimeFromSeconds_() {
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20323 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20325 = new_Send((Optr)Date_classReference, SMB_fromSeconds_, 1, (Optr)VAR_secondCount_0_0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20326 = new_Send((Optr)VAR_secondCount_0_0, SMB__modulo_, 1, (Optr)int_86400_Const);
    // fromSeconds:. 
    Send PSend20327 = new_Send((Optr)Time_classReference, SMB_fromSeconds_, 1, (Optr)PSend20326);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20328 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend20325, (Optr)PSend20327);
    Array PThreadedCode20324 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_send1, (Optr)PSend20325, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20326, (Optr)&t_send1, (Optr)PSend20327, (Optr)&t_send2, (Optr)PSend20328, (Optr)&t_method_return);
    Method PMethod20322 = new_Method_with(PArray20323, empty_Array, empty_Array, PThreadedCode20324, 1, PSend20328);
    
    MethodClosure MC_SMB_dateAndTimeFromSeconds_ = new_MethodClosure((Method)PMethod20322, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeFromSeconds_, MC_SMB_dateAndTimeFromSeconds_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20331 = new_String(L"plugin/chronology/Time.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Chronology_minus_Time_Const = new_Constant((Optr)SMB_Chronology_minus_Time);
    Constant string_20331_Const = new_Constant((Optr)string_20331);
    // require:at:. 
    Send PSend20332 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Chronology_minus_Time_Const, (Optr)string_20331_Const);
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    // primInitialize. 
    Send PSend20333 = new_Send((Optr)self, SMB_primInitialize, 0);
    Array PThreadedCode20330 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Chronology_minus_Time, (Optr)&t_push1, (Optr)string_20331, (Optr)&t_send2, (Optr)PSend20332, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20333, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20329 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20330, 3, PSend20332, PSend20333, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod20329, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_primMicrosecondClock() {
    Symbol SMB_primMicrosecondClock = new_Symbol(L"primMicrosecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_microsecondClock = new_Symbol(L"microsecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20337 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 * 1000 + micro_seconds);\n\t");
    Annotation PAnnotation20336 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_microsecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20337);
    Array PArray20335 = new_Array_with(1, (Optr)PAnnotation20336);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20339 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20338 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20339, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20334 = new_NativeMethod_with(empty_Array, empty_Array, PArray20335, PThreadedCode20338, 2, PSend20339, self);
    
    MethodClosure MC_SMB_primMicrosecondClock = new_MethodClosure((Method)PNativeMethod20334, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMicrosecondClock, MC_SMB_primMicrosecondClock);
}


static void init_class_SMB_primMillisecondClock() {
    Symbol SMB_primMillisecondClock = new_Symbol(L"primMillisecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_millisecondClock = new_Symbol(L"millisecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20343 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 + micro_seconds / 1000);\n\t");
    Annotation PAnnotation20342 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_millisecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20343);
    Array PArray20341 = new_Array_with(1, (Optr)PAnnotation20342);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20345 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20344 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20345, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20340 = new_NativeMethod_with(empty_Array, empty_Array, PArray20341, PThreadedCode20344, 2, PSend20345, self);
    
    MethodClosure MC_SMB_primMillisecondClock = new_MethodClosure((Method)PNativeMethod20340, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMillisecondClock, MC_SMB_primMillisecondClock);
}


static void init_class_SMB_primSecondsClock() {
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_secondsClock = new_Symbol(L"secondsClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20349 = new_String(L"\n    long seconds;\n    seconds = (long)time(NULL);\n    seconds += 2177452800;\n\t^wrap_int(seconds);\n\t");
    Annotation PAnnotation20348 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_secondsClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20349);
    Array PArray20347 = new_Array_with(1, (Optr)PAnnotation20348);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20351 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20350 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20351, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20346 = new_NativeMethod_with(empty_Array, empty_Array, PArray20347, PThreadedCode20350, 2, PSend20351, self);
    
    MethodClosure MC_SMB_primSecondsClock = new_MethodClosure((Method)PNativeMethod20346, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primSecondsClock, MC_SMB_primSecondsClock);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20353 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20355 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20356 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20357 = new_Send((Optr)PSend20356, SMB_ticks, 0);
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    // ticks:. 
    Send PSend20358 = new_Send((Optr)PSend20355, SMB_ticks_, 1, (Optr)PSend20357);
    Array PThreadedCode20354 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20355, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20356, (Optr)&t_send0, (Optr)PSend20357, (Optr)&t_send1, (Optr)PSend20358, (Optr)&t_method_return);
    Method PMethod20352 = new_Method_with(PArray20353, empty_Array, empty_Array, PThreadedCode20354, 1, PSend20358);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20352, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20361 = new_Send((Optr)self, SMB_totalSeconds, 0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20362 = new_Send((Optr)PSend20361, SMB__modulo_, 1, (Optr)int_86400_Const);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20363 = new_Send((Optr)self, SMB_fromSeconds_, 1, (Optr)PSend20362);
    Array PThreadedCode20360 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20361, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20362, (Optr)&t_send1, (Optr)PSend20363, (Optr)&t_method_return);
    Method PMethod20359 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20360, 1, PSend20363);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod20359, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20366 = new_Send((Optr)Date_classReference, SMB_today, 0);
    Array PThreadedCode20365 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_send0, (Optr)PSend20366, (Optr)&t_method_return);
    Method PMethod20364 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20365, 1, PSend20366);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20364, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_asDate, MC_SMB_asDate);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20368 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20370 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20369 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20370, (Optr)&t_method_return);
    Method PMethod20367 = new_Method_with(PArray20368, empty_Array, empty_Array, PThreadedCode20369, 1, PSend20370);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20367, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    // primSecondsClock. 
    Send PSend20373 = new_Send((Optr)self, SMB_primSecondsClock, 0);
    Array PThreadedCode20372 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20373, (Optr)&t_method_return);
    Method PMethod20371 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20372, 1, PSend20373);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod20371, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_totalSeconds, MC_SMB_totalSeconds);
}


static void init_class_SMB_primInitialize() {
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20377 = new_String(L"\n\tgettimeofday(&start_timeval, NULL);\n\t");
    Annotation PAnnotation20376 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_initialize, (Optr)SMB_Chronology_minus_Time, (Optr)string_20377);
    Array PArray20375 = new_Array_with(1, (Optr)PAnnotation20376);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20379 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20378 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20379, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20374 = new_NativeMethod_with(empty_Array, empty_Array, PArray20375, PThreadedCode20378, 2, PSend20379, self);
    
    MethodClosure MC_SMB_primInitialize = new_MethodClosure((Method)PNativeMethod20374, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primInitialize, MC_SMB_primInitialize);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20382 = new_Send((Optr)self, SMB_totalSeconds, 0);
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    // dateAndTimeFromSeconds:. 
    Send PSend20383 = new_Send((Optr)self, SMB_dateAndTimeFromSeconds_, 1, (Optr)PSend20382);
    Array PThreadedCode20381 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20382, (Optr)&t_send1, (Optr)PSend20383, (Optr)&t_method_return);
    Method PMethod20380 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20381, 1, PSend20383);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20380, HEADER(Chronology_Time_Class));
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