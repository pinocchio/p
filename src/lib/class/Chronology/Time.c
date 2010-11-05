#include <lib/class/Chronology/Time.h>


Optr layout_Chronology_Time_Class_class;
Optr slot_Chronology_Time_seconds;
Optr layout_Chronology_Time;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20273 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20272 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20273, (Optr)&t_method_return);
    Method PMethod20271 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20272, 1, PSend20273);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20271, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20276 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20275 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20276, (Optr)&t_method_return);
    Method PMethod20274 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20275, 1, PSend20276);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20274, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_ticks_() {
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray20278 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend20281 = new_Send((Optr)VAR_anArray_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20280 = new_Assign((Optr)slot_Chronology_Time_seconds, (Optr)PSend20281);
    Array PThreadedCode20279 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign20280, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20281, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20277 = new_Method_with(PArray20278, empty_Array, empty_Array, PThreadedCode20279, 2, PAssign20280, self);
    
    MethodClosure MC_SMB_ticks_ = new_MethodClosure((Method)PMethod20277, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks_, MC_SMB_ticks_);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20284 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20283 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20284, (Optr)&t_method_return);
    Method PMethod20282 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20283, 1, PSend20284);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20282, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20287 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20286 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send1, (Optr)PSend20287, (Optr)&t_method_return);
    Method PMethod20285 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20286, 1, PSend20287);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20285, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_print24_showSeconds_on_() {
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_showSeconds_0_1 = new_Variable_named(L"showSeconds", 0);
    Variable VAR_aStream_0_2 = new_Variable_named(L"aStream", 0);
    Array PArray20289 = new_Array_with(3, (Optr)VAR_hr24_0_0, (Optr)VAR_showSeconds_0_1, (Optr)VAR_aStream_0_2);
    Variable VAR_h_0_3 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_4 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_5 = new_Variable_named(L"s", 0);
    Array PArray20290 = new_Array_with(3, (Optr)VAR_h_0_3, (Optr)VAR_m_0_4, (Optr)VAR_s_0_5);
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20293 = new_Send((Optr)self, SMB_hour, 0);
    Assign PAssign20292 = new_Assign((Optr)VAR_h_0_3, (Optr)PSend20293);
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20295 = new_Send((Optr)self, SMB_minute, 0);
    Assign PAssign20294 = new_Assign((Optr)VAR_m_0_4, (Optr)PSend20295);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20297 = new_Send((Optr)self, SMB_second, 0);
    Assign PAssign20296 = new_Assign((Optr)VAR_s_0_5, (Optr)PSend20297);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20301 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9197 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    // <<. 
    Send PSend20305 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20304 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20305, (Optr)&t_block_return);
    Block PBlock20303 = new_Block_with(empty_Array, empty_Array, PThreadedCode20304, 1, PSend20305);
    // ifTrue:. 
    Send PSend20302 = new_Send((Optr)PSend20301, SMB_ifTrue_, 1, (Optr)PBlock20303);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20306 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20300 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20301, (Optr)&t_send_ifTrue_, (Optr)PSend20302, (Optr)PBlock20303, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20306, (Optr)&t_block_return);
    Block PBlock20299 = new_Block_with(empty_Array, empty_Array, PThreadedCode20300, 2, PSend20302, PSend20306);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_12_Const = new_Constant((Optr)int_12);
    // >. 
    Send PSend20309 = new_Send((Optr)VAR_h_0_3, SMB__gt_, 1, (Optr)int_12_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20313 = new_Send((Optr)VAR_h_0_3, SMB__minus_, 1, (Optr)int_12_Const);
    // printOn:. 
    Send PSend20314 = new_Send((Optr)PSend20313, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20312 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20313, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20314, (Optr)&t_block_return);
    Block PBlock20311 = new_Block_with(empty_Array, empty_Array, PThreadedCode20312, 1, PSend20314);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend20317 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_1_Const);
    // printOn:. 
    Send PSend20321 = new_Send((Optr)int_12_Const, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20320 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20321, (Optr)&t_block_return);
    Block PBlock20319 = new_Block_with(empty_Array, empty_Array, PThreadedCode20320, 1, PSend20321);
    // printOn:. 
    Send PSend20324 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20323 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20324, (Optr)&t_block_return);
    Block PBlock20322 = new_Block_with(empty_Array, empty_Array, PThreadedCode20323, 1, PSend20324);
    // ifTrue:ifFalse:. 
    Send PSend20318 = new_Send((Optr)PSend20317, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20319, (Optr)PBlock20322);
    Array PThreadedCode20316 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20317, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20318, (Optr)PBlock20319, (Optr)PBlock20322, (Optr)&t_block_return);
    Block PBlock20315 = new_Block_with(empty_Array, empty_Array, PThreadedCode20316, 1, PSend20318);
    // ifTrue:ifFalse:. 
    Send PSend20310 = new_Send((Optr)PSend20309, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20311, (Optr)PBlock20315);
    Array PThreadedCode20308 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20309, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20310, (Optr)PBlock20311, (Optr)PBlock20315, (Optr)&t_block_return);
    Block PBlock20307 = new_Block_with(empty_Array, empty_Array, PThreadedCode20308, 1, PSend20310);
    // ifTrue:ifFalse:. 
    Send PSend20298 = new_Send((Optr)VAR_hr24_0_0, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20299, (Optr)PBlock20307);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20325 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20326 = new_Send((Optr)VAR_m_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20330 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20329 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20330, (Optr)&t_block_return);
    Block PBlock20328 = new_Block_with(empty_Array, empty_Array, PThreadedCode20329, 1, PSend20330);
    // ifTrue:. 
    Send PSend20327 = new_Send((Optr)PSend20326, SMB_ifTrue_, 1, (Optr)PBlock20328);
    // printOn:. 
    Send PSend20331 = new_Send((Optr)VAR_m_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    // <<. 
    Send PSend20335 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20336 = new_Send((Optr)VAR_s_0_5, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20340 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20339 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20340, (Optr)&t_block_return);
    Block PBlock20338 = new_Block_with(empty_Array, empty_Array, PThreadedCode20339, 1, PSend20340);
    // ifTrue:. 
    Send PSend20337 = new_Send((Optr)PSend20336, SMB_ifTrue_, 1, (Optr)PBlock20338);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20341 = new_Send((Optr)VAR_s_0_5, SMB_asInteger, 0);
    // printOn:. 
    Send PSend20342 = new_Send((Optr)PSend20341, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20334 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20335, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20336, (Optr)&t_send_ifTrue_, (Optr)PSend20337, (Optr)PBlock20338, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_send0, (Optr)PSend20341, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20342, (Optr)&t_block_return);
    Block PBlock20333 = new_Block_with(empty_Array, empty_Array, PThreadedCode20334, 3, PSend20335, PSend20337, PSend20342);
    // ifTrue:. 
    Send PSend20332 = new_Send((Optr)VAR_showSeconds_0_1, SMB_ifTrue_, 1, (Optr)PBlock20333);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // <. 
    Send PSend20346 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_12_Const);
    String string_20350 = new_String(L" am");
    Constant string_20350_Const = new_Constant((Optr)string_20350);
    // <<. 
    Send PSend20351 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20350_Const);
    Array PThreadedCode20349 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20350, (Optr)&t_send1, (Optr)PSend20351, (Optr)&t_block_return);
    Block PBlock20348 = new_Block_with(empty_Array, empty_Array, PThreadedCode20349, 1, PSend20351);
    String string_20354 = new_String(L" pm");
    Constant string_20354_Const = new_Constant((Optr)string_20354);
    // <<. 
    Send PSend20355 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20354_Const);
    Array PThreadedCode20353 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20354, (Optr)&t_send1, (Optr)PSend20355, (Optr)&t_block_return);
    Block PBlock20352 = new_Block_with(empty_Array, empty_Array, PThreadedCode20353, 1, PSend20355);
    // ifTrue:ifFalse:. 
    Send PSend20347 = new_Send((Optr)PSend20346, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20348, (Optr)PBlock20352);
    Array PThreadedCode20345 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20346, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20347, (Optr)PBlock20348, (Optr)PBlock20352, (Optr)&t_block_return);
    Block PBlock20344 = new_Block_with(empty_Array, empty_Array, PThreadedCode20345, 1, PSend20347);
    // ifFalse:. 
    Send PSend20343 = new_Send((Optr)VAR_hr24_0_0, SMB_ifFalse_, 1, (Optr)PBlock20344);
    Array PThreadedCode20291 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign20292, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20293, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20294, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20295, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20296, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20297, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20298, (Optr)PBlock20299, (Optr)PBlock20307, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20325, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20326, (Optr)&t_send_ifTrue_, (Optr)PSend20327, (Optr)PBlock20328, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20331, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_showSeconds_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20332, (Optr)PBlock20333, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifFalse_, (Optr)PSend20343, (Optr)PBlock20344, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20288 = new_Method_with(PArray20289, PArray20290, empty_Array, PThreadedCode20291, 10, PAssign20292, PAssign20294, PAssign20296, PSend20298, PSend20325, PSend20327, PSend20331, PSend20332, PSend20343, self);
    
    MethodClosure MC_SMB_print24_showSeconds_on_ = new_MethodClosure((Method)PMethod20288, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_showSeconds_on_, MC_SMB_print24_showSeconds_on_);
}


static void init_SMB_print24_on_() {
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray20357 = new_Array_with(2, (Optr)VAR_hr24_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20359 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)VAR_hr24_0_0, (Optr)true_Const, (Optr)VAR_aStream_0_1);
    Array PThreadedCode20358 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send3, (Optr)PSend20359, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20356 = new_Method_with(PArray20357, empty_Array, empty_Array, PThreadedCode20358, 2, PSend20359, self);
    
    MethodClosure MC_SMB_print24_on_ = new_MethodClosure((Method)PMethod20356, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_on_, MC_SMB_print24_on_);
}


static void init_SMB_print24() {
    Symbol SMB_print24 = new_Symbol(L"print24");
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray20363 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    // print24:on:. 
    Send PSend20365 = new_Send((Optr)self, SMB_print24_on_, 2, (Optr)true_Const, (Optr)VAR_aStream_1_0);
    Array PThreadedCode20364 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send2, (Optr)PSend20365, (Optr)&t_method_return);
    Block PBlock20362 = new_Block_with(PArray20363, empty_Array, PThreadedCode20364, 1, PSend20365);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend20366 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock20362);
    Array PThreadedCode20361 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock20362, (Optr)&t_send1, (Optr)PSend20366, (Optr)&t_method_return);
    Method PMethod20360 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20361, 1, PSend20366);
    
    MethodClosure MC_SMB_print24 = new_MethodClosure((Method)PMethod20360, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24, MC_SMB_print24);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20368 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20370 = new_Send((Optr)self, SMB_second, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20371 = new_Send((Optr)PSend20370, SMB__notEquals_, 1, (Optr)int_0_Const);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20372 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)false_Const, (Optr)PSend20371, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20369 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20370, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20371, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send3, (Optr)PSend20372, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20367 = new_Method_with(PArray20368, empty_Array, empty_Array, PThreadedCode20369, 2, PSend20372, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20367, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20375 = new_Send((Optr)DateAndTime_classReference, SMB_today, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20376 = new_Send((Optr)PSend20375, SMB__plus_, 1, (Optr)self);
    Array PThreadedCode20374 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20375, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20376, (Optr)&t_method_return);
    Method PMethod20373 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20374, 1, PSend20376);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20373, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20379 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20380 = new_Send((Optr)PSend20379, SMB_seconds, 0);
    Array PThreadedCode20378 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20379, (Optr)&t_send0, (Optr)PSend20380, (Optr)&t_method_return);
    Method PMethod20377 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20378, 1, PSend20380);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20377, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // with:with:. 
    Send PSend20383 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)int_0_Const, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20382 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send2, (Optr)PSend20383, (Optr)&t_method_return);
    Method PMethod20381 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20382, 1, PSend20383);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20381, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20386 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20387 = new_Send((Optr)PSend20386, SMB_hours, 0);
    Array PThreadedCode20385 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20386, (Optr)&t_send0, (Optr)PSend20387, (Optr)&t_method_return);
    Method PMethod20384 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20385, 1, PSend20387);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20384, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20390 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20389 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20390, (Optr)&t_method_return);
    Method PMethod20388 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20389, 1, PSend20390);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20388, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20393 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20394 = new_Send((Optr)PSend20393, SMB_minutes, 0);
    Array PThreadedCode20392 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20393, (Optr)&t_send0, (Optr)PSend20394, (Optr)&t_method_return);
    Method PMethod20391 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20392, 1, PSend20394);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20391, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minute, MC_SMB_minute);
}


static void init_class_SMB_dateAndTimeFromSeconds_() {
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20396 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20398 = new_Send((Optr)Date_classReference, SMB_fromSeconds_, 1, (Optr)VAR_secondCount_0_0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20399 = new_Send((Optr)VAR_secondCount_0_0, SMB__modulo_, 1, (Optr)int_86400_Const);
    // fromSeconds:. 
    Send PSend20400 = new_Send((Optr)Time_classReference, SMB_fromSeconds_, 1, (Optr)PSend20399);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20401 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend20398, (Optr)PSend20400);
    Array PThreadedCode20397 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_send1, (Optr)PSend20398, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20399, (Optr)&t_send1, (Optr)PSend20400, (Optr)&t_send2, (Optr)PSend20401, (Optr)&t_method_return);
    Method PMethod20395 = new_Method_with(PArray20396, empty_Array, empty_Array, PThreadedCode20397, 1, PSend20401);
    
    MethodClosure MC_SMB_dateAndTimeFromSeconds_ = new_MethodClosure((Method)PMethod20395, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeFromSeconds_, MC_SMB_dateAndTimeFromSeconds_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20404 = new_String(L"plugin/chronology/Time.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Chronology_minus_Time_Const = new_Constant((Optr)SMB_Chronology_minus_Time);
    Constant string_20404_Const = new_Constant((Optr)string_20404);
    // require:at:. 
    Send PSend20405 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Chronology_minus_Time_Const, (Optr)string_20404_Const);
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    // primInitialize. 
    Send PSend20406 = new_Send((Optr)self, SMB_primInitialize, 0);
    Array PThreadedCode20403 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Chronology_minus_Time, (Optr)&t_push1, (Optr)string_20404, (Optr)&t_send2, (Optr)PSend20405, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20406, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20402 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20403, 3, PSend20405, PSend20406, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod20402, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_primMicrosecondClock() {
    Symbol SMB_primMicrosecondClock = new_Symbol(L"primMicrosecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_microsecondClock = new_Symbol(L"microsecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20410 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 * 1000 + micro_seconds);\n\t");
    Annotation PAnnotation20409 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_microsecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20410);
    Array PArray20408 = new_Array_with(1, (Optr)PAnnotation20409);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20412 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20411 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20412, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20407 = new_NativeMethod_with(empty_Array, empty_Array, PArray20408, PThreadedCode20411, 2, PSend20412, self);
    
    MethodClosure MC_SMB_primMicrosecondClock = new_MethodClosure((Method)PNativeMethod20407, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMicrosecondClock, MC_SMB_primMicrosecondClock);
}


static void init_class_SMB_primMillisecondClock() {
    Symbol SMB_primMillisecondClock = new_Symbol(L"primMillisecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_millisecondClock = new_Symbol(L"millisecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20416 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 + micro_seconds / 1000);\n\t");
    Annotation PAnnotation20415 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_millisecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20416);
    Array PArray20414 = new_Array_with(1, (Optr)PAnnotation20415);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20418 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20417 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20418, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20413 = new_NativeMethod_with(empty_Array, empty_Array, PArray20414, PThreadedCode20417, 2, PSend20418, self);
    
    MethodClosure MC_SMB_primMillisecondClock = new_MethodClosure((Method)PNativeMethod20413, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMillisecondClock, MC_SMB_primMillisecondClock);
}


static void init_class_SMB_primSecondsClock() {
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_secondsClock = new_Symbol(L"secondsClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20422 = new_String(L"\n    long seconds;\n    seconds = (long)time(NULL);\n    seconds += 2177452800;\n\t^wrap_int(seconds);\n\t");
    Annotation PAnnotation20421 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_secondsClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20422);
    Array PArray20420 = new_Array_with(1, (Optr)PAnnotation20421);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20424 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20423 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20424, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20419 = new_NativeMethod_with(empty_Array, empty_Array, PArray20420, PThreadedCode20423, 2, PSend20424, self);
    
    MethodClosure MC_SMB_primSecondsClock = new_MethodClosure((Method)PNativeMethod20419, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primSecondsClock, MC_SMB_primSecondsClock);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20426 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20428 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20429 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20430 = new_Send((Optr)PSend20429, SMB_ticks, 0);
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    // ticks:. 
    Send PSend20431 = new_Send((Optr)PSend20428, SMB_ticks_, 1, (Optr)PSend20430);
    Array PThreadedCode20427 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20428, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20429, (Optr)&t_send0, (Optr)PSend20430, (Optr)&t_send1, (Optr)PSend20431, (Optr)&t_method_return);
    Method PMethod20425 = new_Method_with(PArray20426, empty_Array, empty_Array, PThreadedCode20427, 1, PSend20431);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20425, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20434 = new_Send((Optr)self, SMB_totalSeconds, 0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20435 = new_Send((Optr)PSend20434, SMB__modulo_, 1, (Optr)int_86400_Const);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20436 = new_Send((Optr)self, SMB_fromSeconds_, 1, (Optr)PSend20435);
    Array PThreadedCode20433 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20434, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20435, (Optr)&t_send1, (Optr)PSend20436, (Optr)&t_method_return);
    Method PMethod20432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20433, 1, PSend20436);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod20432, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20439 = new_Send((Optr)Date_classReference, SMB_today, 0);
    Array PThreadedCode20438 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_send0, (Optr)PSend20439, (Optr)&t_method_return);
    Method PMethod20437 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20438, 1, PSend20439);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20437, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_asDate, MC_SMB_asDate);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20441 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20443 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20442 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20443, (Optr)&t_method_return);
    Method PMethod20440 = new_Method_with(PArray20441, empty_Array, empty_Array, PThreadedCode20442, 1, PSend20443);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20440, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    // primSecondsClock. 
    Send PSend20446 = new_Send((Optr)self, SMB_primSecondsClock, 0);
    Array PThreadedCode20445 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20446, (Optr)&t_method_return);
    Method PMethod20444 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20445, 1, PSend20446);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod20444, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_totalSeconds, MC_SMB_totalSeconds);
}


static void init_class_SMB_primInitialize() {
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20450 = new_String(L"\n\tgettimeofday(&start_timeval, NULL);\n\t");
    Annotation PAnnotation20449 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_initialize, (Optr)SMB_Chronology_minus_Time, (Optr)string_20450);
    Array PArray20448 = new_Array_with(1, (Optr)PAnnotation20449);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20452 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20451 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20452, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20447 = new_NativeMethod_with(empty_Array, empty_Array, PArray20448, PThreadedCode20451, 2, PSend20452, self);
    
    MethodClosure MC_SMB_primInitialize = new_MethodClosure((Method)PNativeMethod20447, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primInitialize, MC_SMB_primInitialize);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20455 = new_Send((Optr)self, SMB_totalSeconds, 0);
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    // dateAndTimeFromSeconds:. 
    Send PSend20456 = new_Send((Optr)self, SMB_dateAndTimeFromSeconds_, 1, (Optr)PSend20455);
    Array PThreadedCode20454 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20455, (Optr)&t_send1, (Optr)PSend20456, (Optr)&t_method_return);
    Method PMethod20453 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20454, 1, PSend20456);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20453, HEADER(Chronology_Time_Class));
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