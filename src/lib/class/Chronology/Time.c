#include <lib/class/Chronology/Time.h>


Optr layout_Chronology_Time_Class_class;
Optr slot_Chronology_Time_seconds;
Optr layout_Chronology_Time;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20284 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20283 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20284, (Optr)&t_method_return);
    Method PMethod20282 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20283, 1, PSend20284);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20282, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20287 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20286 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20287, (Optr)&t_method_return);
    Method PMethod20285 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20286, 1, PSend20287);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20285, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_ticks_() {
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray20289 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend20292 = new_Send((Optr)VAR_anArray_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20291 = new_Assign((Optr)slot_Chronology_Time_seconds, (Optr)PSend20292);
    Array PThreadedCode20290 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign20291, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20292, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20288 = new_Method_with(PArray20289, empty_Array, empty_Array, PThreadedCode20290, 2, PAssign20291, self);
    
    MethodClosure MC_SMB_ticks_ = new_MethodClosure((Method)PMethod20288, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks_, MC_SMB_ticks_);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20295 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20294 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20295, (Optr)&t_method_return);
    Method PMethod20293 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20294, 1, PSend20295);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20293, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20298 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20297 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send1, (Optr)PSend20298, (Optr)&t_method_return);
    Method PMethod20296 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20297, 1, PSend20298);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20296, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_print24_showSeconds_on_() {
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_showSeconds_0_1 = new_Variable_named(L"showSeconds", 0);
    Variable VAR_aStream_0_2 = new_Variable_named(L"aStream", 0);
    Array PArray20300 = new_Array_with(3, (Optr)VAR_hr24_0_0, (Optr)VAR_showSeconds_0_1, (Optr)VAR_aStream_0_2);
    Variable VAR_h_0_3 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_4 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_5 = new_Variable_named(L"s", 0);
    Array PArray20301 = new_Array_with(3, (Optr)VAR_h_0_3, (Optr)VAR_m_0_4, (Optr)VAR_s_0_5);
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20304 = new_Send((Optr)self, SMB_hour, 0);
    Assign PAssign20303 = new_Assign((Optr)VAR_h_0_3, (Optr)PSend20304);
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20306 = new_Send((Optr)self, SMB_minute, 0);
    Assign PAssign20305 = new_Assign((Optr)VAR_m_0_4, (Optr)PSend20306);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20308 = new_Send((Optr)self, SMB_second, 0);
    Assign PAssign20307 = new_Assign((Optr)VAR_s_0_5, (Optr)PSend20308);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20312 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9208 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9208_Const = new_Constant((Optr)char_9208);
    // <<. 
    Send PSend20316 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20315 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20316, (Optr)&t_block_return);
    Block PBlock20314 = new_Block_with(empty_Array, empty_Array, PThreadedCode20315, 1, PSend20316);
    // ifTrue:. 
    Send PSend20313 = new_Send((Optr)PSend20312, SMB_ifTrue_, 1, (Optr)PBlock20314);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20317 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20311 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20312, (Optr)&t_send_ifTrue_, (Optr)PSend20313, (Optr)PBlock20314, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20317, (Optr)&t_block_return);
    Block PBlock20310 = new_Block_with(empty_Array, empty_Array, PThreadedCode20311, 2, PSend20313, PSend20317);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_12_Const = new_Constant((Optr)int_12);
    // >. 
    Send PSend20320 = new_Send((Optr)VAR_h_0_3, SMB__gt_, 1, (Optr)int_12_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20324 = new_Send((Optr)VAR_h_0_3, SMB__minus_, 1, (Optr)int_12_Const);
    // printOn:. 
    Send PSend20325 = new_Send((Optr)PSend20324, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20323 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20324, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20325, (Optr)&t_block_return);
    Block PBlock20322 = new_Block_with(empty_Array, empty_Array, PThreadedCode20323, 1, PSend20325);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend20328 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_1_Const);
    // printOn:. 
    Send PSend20332 = new_Send((Optr)int_12_Const, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20331 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20332, (Optr)&t_block_return);
    Block PBlock20330 = new_Block_with(empty_Array, empty_Array, PThreadedCode20331, 1, PSend20332);
    // printOn:. 
    Send PSend20335 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20334 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20335, (Optr)&t_block_return);
    Block PBlock20333 = new_Block_with(empty_Array, empty_Array, PThreadedCode20334, 1, PSend20335);
    // ifTrue:ifFalse:. 
    Send PSend20329 = new_Send((Optr)PSend20328, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20330, (Optr)PBlock20333);
    Array PThreadedCode20327 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20328, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20329, (Optr)PBlock20330, (Optr)PBlock20333, (Optr)&t_block_return);
    Block PBlock20326 = new_Block_with(empty_Array, empty_Array, PThreadedCode20327, 1, PSend20329);
    // ifTrue:ifFalse:. 
    Send PSend20321 = new_Send((Optr)PSend20320, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20322, (Optr)PBlock20326);
    Array PThreadedCode20319 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20320, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20321, (Optr)PBlock20322, (Optr)PBlock20326, (Optr)&t_block_return);
    Block PBlock20318 = new_Block_with(empty_Array, empty_Array, PThreadedCode20319, 1, PSend20321);
    // ifTrue:ifFalse:. 
    Send PSend20309 = new_Send((Optr)VAR_hr24_0_0, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20310, (Optr)PBlock20318);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20336 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20337 = new_Send((Optr)VAR_m_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20341 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20340 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20341, (Optr)&t_block_return);
    Block PBlock20339 = new_Block_with(empty_Array, empty_Array, PThreadedCode20340, 1, PSend20341);
    // ifTrue:. 
    Send PSend20338 = new_Send((Optr)PSend20337, SMB_ifTrue_, 1, (Optr)PBlock20339);
    // printOn:. 
    Send PSend20342 = new_Send((Optr)VAR_m_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    // <<. 
    Send PSend20346 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20347 = new_Send((Optr)VAR_s_0_5, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20351 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20350 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20351, (Optr)&t_block_return);
    Block PBlock20349 = new_Block_with(empty_Array, empty_Array, PThreadedCode20350, 1, PSend20351);
    // ifTrue:. 
    Send PSend20348 = new_Send((Optr)PSend20347, SMB_ifTrue_, 1, (Optr)PBlock20349);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20352 = new_Send((Optr)VAR_s_0_5, SMB_asInteger, 0);
    // printOn:. 
    Send PSend20353 = new_Send((Optr)PSend20352, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20345 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20346, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20347, (Optr)&t_send_ifTrue_, (Optr)PSend20348, (Optr)PBlock20349, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_send0, (Optr)PSend20352, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20353, (Optr)&t_block_return);
    Block PBlock20344 = new_Block_with(empty_Array, empty_Array, PThreadedCode20345, 3, PSend20346, PSend20348, PSend20353);
    // ifTrue:. 
    Send PSend20343 = new_Send((Optr)VAR_showSeconds_0_1, SMB_ifTrue_, 1, (Optr)PBlock20344);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // <. 
    Send PSend20357 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_12_Const);
    String string_20361 = new_String(L" am");
    Constant string_20361_Const = new_Constant((Optr)string_20361);
    // <<. 
    Send PSend20362 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20361_Const);
    Array PThreadedCode20360 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20361, (Optr)&t_send1, (Optr)PSend20362, (Optr)&t_block_return);
    Block PBlock20359 = new_Block_with(empty_Array, empty_Array, PThreadedCode20360, 1, PSend20362);
    String string_20365 = new_String(L" pm");
    Constant string_20365_Const = new_Constant((Optr)string_20365);
    // <<. 
    Send PSend20366 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20365_Const);
    Array PThreadedCode20364 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20365, (Optr)&t_send1, (Optr)PSend20366, (Optr)&t_block_return);
    Block PBlock20363 = new_Block_with(empty_Array, empty_Array, PThreadedCode20364, 1, PSend20366);
    // ifTrue:ifFalse:. 
    Send PSend20358 = new_Send((Optr)PSend20357, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20359, (Optr)PBlock20363);
    Array PThreadedCode20356 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20357, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20358, (Optr)PBlock20359, (Optr)PBlock20363, (Optr)&t_block_return);
    Block PBlock20355 = new_Block_with(empty_Array, empty_Array, PThreadedCode20356, 1, PSend20358);
    // ifFalse:. 
    Send PSend20354 = new_Send((Optr)VAR_hr24_0_0, SMB_ifFalse_, 1, (Optr)PBlock20355);
    Array PThreadedCode20302 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign20303, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20304, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20305, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20306, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20307, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20308, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20309, (Optr)PBlock20310, (Optr)PBlock20318, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20336, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20337, (Optr)&t_send_ifTrue_, (Optr)PSend20338, (Optr)PBlock20339, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20342, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_showSeconds_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20343, (Optr)PBlock20344, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifFalse_, (Optr)PSend20354, (Optr)PBlock20355, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20299 = new_Method_with(PArray20300, PArray20301, empty_Array, PThreadedCode20302, 10, PAssign20303, PAssign20305, PAssign20307, PSend20309, PSend20336, PSend20338, PSend20342, PSend20343, PSend20354, self);
    
    MethodClosure MC_SMB_print24_showSeconds_on_ = new_MethodClosure((Method)PMethod20299, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_showSeconds_on_, MC_SMB_print24_showSeconds_on_);
}


static void init_SMB_print24_on_() {
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray20368 = new_Array_with(2, (Optr)VAR_hr24_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20370 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)VAR_hr24_0_0, (Optr)true_Const, (Optr)VAR_aStream_0_1);
    Array PThreadedCode20369 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send3, (Optr)PSend20370, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20367 = new_Method_with(PArray20368, empty_Array, empty_Array, PThreadedCode20369, 2, PSend20370, self);
    
    MethodClosure MC_SMB_print24_on_ = new_MethodClosure((Method)PMethod20367, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_on_, MC_SMB_print24_on_);
}


static void init_SMB_print24() {
    Symbol SMB_print24 = new_Symbol(L"print24");
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray20374 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    // print24:on:. 
    Send PSend20376 = new_Send((Optr)self, SMB_print24_on_, 2, (Optr)true_Const, (Optr)VAR_aStream_1_0);
    Array PThreadedCode20375 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send2, (Optr)PSend20376, (Optr)&t_method_return);
    Block PBlock20373 = new_Block_with(PArray20374, empty_Array, PThreadedCode20375, 1, PSend20376);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend20377 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock20373);
    Array PThreadedCode20372 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock20373, (Optr)&t_send1, (Optr)PSend20377, (Optr)&t_method_return);
    Method PMethod20371 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20372, 1, PSend20377);
    
    MethodClosure MC_SMB_print24 = new_MethodClosure((Method)PMethod20371, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24, MC_SMB_print24);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20379 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20381 = new_Send((Optr)self, SMB_second, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20382 = new_Send((Optr)PSend20381, SMB__notEquals_, 1, (Optr)int_0_Const);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20383 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)false_Const, (Optr)PSend20382, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20380 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20381, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20382, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send3, (Optr)PSend20383, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20378 = new_Method_with(PArray20379, empty_Array, empty_Array, PThreadedCode20380, 2, PSend20383, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20378, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20386 = new_Send((Optr)DateAndTime_classReference, SMB_today, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20387 = new_Send((Optr)PSend20386, SMB__plus_, 1, (Optr)self);
    Array PThreadedCode20385 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20386, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20387, (Optr)&t_method_return);
    Method PMethod20384 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20385, 1, PSend20387);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20384, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20390 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20391 = new_Send((Optr)PSend20390, SMB_seconds, 0);
    Array PThreadedCode20389 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20390, (Optr)&t_send0, (Optr)PSend20391, (Optr)&t_method_return);
    Method PMethod20388 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20389, 1, PSend20391);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20388, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // with:with:. 
    Send PSend20394 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)int_0_Const, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20393 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send2, (Optr)PSend20394, (Optr)&t_method_return);
    Method PMethod20392 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20393, 1, PSend20394);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20392, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20397 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20398 = new_Send((Optr)PSend20397, SMB_hours, 0);
    Array PThreadedCode20396 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20397, (Optr)&t_send0, (Optr)PSend20398, (Optr)&t_method_return);
    Method PMethod20395 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20396, 1, PSend20398);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20395, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20401 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20400 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20401, (Optr)&t_method_return);
    Method PMethod20399 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20400, 1, PSend20401);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20399, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20404 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20405 = new_Send((Optr)PSend20404, SMB_minutes, 0);
    Array PThreadedCode20403 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20404, (Optr)&t_send0, (Optr)PSend20405, (Optr)&t_method_return);
    Method PMethod20402 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20403, 1, PSend20405);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20402, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minute, MC_SMB_minute);
}


static void init_class_SMB_dateAndTimeFromSeconds_() {
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20407 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20409 = new_Send((Optr)Date_classReference, SMB_fromSeconds_, 1, (Optr)VAR_secondCount_0_0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20410 = new_Send((Optr)VAR_secondCount_0_0, SMB__modulo_, 1, (Optr)int_86400_Const);
    // fromSeconds:. 
    Send PSend20411 = new_Send((Optr)Time_classReference, SMB_fromSeconds_, 1, (Optr)PSend20410);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20412 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend20409, (Optr)PSend20411);
    Array PThreadedCode20408 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_send1, (Optr)PSend20409, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20410, (Optr)&t_send1, (Optr)PSend20411, (Optr)&t_send2, (Optr)PSend20412, (Optr)&t_method_return);
    Method PMethod20406 = new_Method_with(PArray20407, empty_Array, empty_Array, PThreadedCode20408, 1, PSend20412);
    
    MethodClosure MC_SMB_dateAndTimeFromSeconds_ = new_MethodClosure((Method)PMethod20406, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeFromSeconds_, MC_SMB_dateAndTimeFromSeconds_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20415 = new_String(L"plugin/chronology/Time.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Chronology_minus_Time_Const = new_Constant((Optr)SMB_Chronology_minus_Time);
    Constant string_20415_Const = new_Constant((Optr)string_20415);
    // require:at:. 
    Send PSend20416 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Chronology_minus_Time_Const, (Optr)string_20415_Const);
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    // primInitialize. 
    Send PSend20417 = new_Send((Optr)self, SMB_primInitialize, 0);
    Array PThreadedCode20414 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Chronology_minus_Time, (Optr)&t_push1, (Optr)string_20415, (Optr)&t_send2, (Optr)PSend20416, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20417, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20413 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20414, 3, PSend20416, PSend20417, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod20413, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_primMicrosecondClock() {
    Symbol SMB_primMicrosecondClock = new_Symbol(L"primMicrosecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_microsecondClock = new_Symbol(L"microsecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20421 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 * 1000 + micro_seconds);\n\t");
    Annotation PAnnotation20420 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_microsecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20421);
    Array PArray20419 = new_Array_with(1, (Optr)PAnnotation20420);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20423 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20422 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20423, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20418 = new_NativeMethod_with(empty_Array, empty_Array, PArray20419, PThreadedCode20422, 2, PSend20423, self);
    
    MethodClosure MC_SMB_primMicrosecondClock = new_MethodClosure((Method)PNativeMethod20418, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMicrosecondClock, MC_SMB_primMicrosecondClock);
}


static void init_class_SMB_primMillisecondClock() {
    Symbol SMB_primMillisecondClock = new_Symbol(L"primMillisecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_millisecondClock = new_Symbol(L"millisecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20427 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 + micro_seconds / 1000);\n\t");
    Annotation PAnnotation20426 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_millisecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20427);
    Array PArray20425 = new_Array_with(1, (Optr)PAnnotation20426);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20429 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20428 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20429, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20424 = new_NativeMethod_with(empty_Array, empty_Array, PArray20425, PThreadedCode20428, 2, PSend20429, self);
    
    MethodClosure MC_SMB_primMillisecondClock = new_MethodClosure((Method)PNativeMethod20424, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMillisecondClock, MC_SMB_primMillisecondClock);
}


static void init_class_SMB_primSecondsClock() {
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_secondsClock = new_Symbol(L"secondsClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20433 = new_String(L"\n    long seconds;\n    seconds = (long)time(NULL);\n    seconds += 2177452800;\n\t^wrap_int(seconds);\n\t");
    Annotation PAnnotation20432 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_secondsClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20433);
    Array PArray20431 = new_Array_with(1, (Optr)PAnnotation20432);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20435 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20434 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20435, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20430 = new_NativeMethod_with(empty_Array, empty_Array, PArray20431, PThreadedCode20434, 2, PSend20435, self);
    
    MethodClosure MC_SMB_primSecondsClock = new_MethodClosure((Method)PNativeMethod20430, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primSecondsClock, MC_SMB_primSecondsClock);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20437 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20439 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20440 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20441 = new_Send((Optr)PSend20440, SMB_ticks, 0);
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    // ticks:. 
    Send PSend20442 = new_Send((Optr)PSend20439, SMB_ticks_, 1, (Optr)PSend20441);
    Array PThreadedCode20438 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20439, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20440, (Optr)&t_send0, (Optr)PSend20441, (Optr)&t_send1, (Optr)PSend20442, (Optr)&t_method_return);
    Method PMethod20436 = new_Method_with(PArray20437, empty_Array, empty_Array, PThreadedCode20438, 1, PSend20442);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20436, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20445 = new_Send((Optr)self, SMB_totalSeconds, 0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20446 = new_Send((Optr)PSend20445, SMB__modulo_, 1, (Optr)int_86400_Const);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20447 = new_Send((Optr)self, SMB_fromSeconds_, 1, (Optr)PSend20446);
    Array PThreadedCode20444 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20445, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20446, (Optr)&t_send1, (Optr)PSend20447, (Optr)&t_method_return);
    Method PMethod20443 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20444, 1, PSend20447);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod20443, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20450 = new_Send((Optr)Date_classReference, SMB_today, 0);
    Array PThreadedCode20449 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_send0, (Optr)PSend20450, (Optr)&t_method_return);
    Method PMethod20448 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20449, 1, PSend20450);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20448, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_asDate, MC_SMB_asDate);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20452 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20454 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20453 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20454, (Optr)&t_method_return);
    Method PMethod20451 = new_Method_with(PArray20452, empty_Array, empty_Array, PThreadedCode20453, 1, PSend20454);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20451, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    // primSecondsClock. 
    Send PSend20457 = new_Send((Optr)self, SMB_primSecondsClock, 0);
    Array PThreadedCode20456 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20457, (Optr)&t_method_return);
    Method PMethod20455 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20456, 1, PSend20457);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod20455, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_totalSeconds, MC_SMB_totalSeconds);
}


static void init_class_SMB_primInitialize() {
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20461 = new_String(L"\n\tgettimeofday(&start_timeval, NULL);\n\t");
    Annotation PAnnotation20460 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_initialize, (Optr)SMB_Chronology_minus_Time, (Optr)string_20461);
    Array PArray20459 = new_Array_with(1, (Optr)PAnnotation20460);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20463 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20462 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20463, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20458 = new_NativeMethod_with(empty_Array, empty_Array, PArray20459, PThreadedCode20462, 2, PSend20463, self);
    
    MethodClosure MC_SMB_primInitialize = new_MethodClosure((Method)PNativeMethod20458, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primInitialize, MC_SMB_primInitialize);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20466 = new_Send((Optr)self, SMB_totalSeconds, 0);
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    // dateAndTimeFromSeconds:. 
    Send PSend20467 = new_Send((Optr)self, SMB_dateAndTimeFromSeconds_, 1, (Optr)PSend20466);
    Array PThreadedCode20465 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20466, (Optr)&t_send1, (Optr)PSend20467, (Optr)&t_method_return);
    Method PMethod20464 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20465, 1, PSend20467);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20464, HEADER(Chronology_Time_Class));
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