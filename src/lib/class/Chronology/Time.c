#include <lib/class/Chronology/Time.h>


Optr layout_Chronology_Time_Class_class;
Optr slot_Chronology_Time_seconds;
Optr layout_Chronology_Time;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20309 = new_Send((Optr)self, SMB_minute, 0);
    Array PThreadedCode20308 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20309, (Optr)&t_method_return);
    Method PMethod20307 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20308, 1, PSend20309);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20307, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20312 = new_Send((Optr)self, SMB_second, 0);
    Array PThreadedCode20311 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20312, (Optr)&t_method_return);
    Method PMethod20310 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20311, 1, PSend20312);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20310, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_ticks_() {
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray20314 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend20317 = new_Send((Optr)VAR_anArray_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign20316 = new_Assign((Optr)slot_Chronology_Time_seconds, (Optr)PSend20317);
    Array PThreadedCode20315 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign20316, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20317, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20313 = new_Method_with(PArray20314, empty_Array, empty_Array, PThreadedCode20315, 2, PAssign20316, self);
    
    MethodClosure MC_SMB_ticks_ = new_MethodClosure((Method)PMethod20313, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks_, MC_SMB_ticks_);
}


static void init_SMB_hour() {
    Symbol SMB_hour = new_Symbol(L"hour");
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    // hour24. 
    Send PSend20320 = new_Send((Optr)self, SMB_hour24, 0);
    Array PThreadedCode20319 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20320, (Optr)&t_method_return);
    Method PMethod20318 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20319, 1, PSend20320);
    
    MethodClosure MC_SMB_hour = new_MethodClosure((Method)PMethod20318, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour, MC_SMB_hour);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20323 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20322 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send1, (Optr)PSend20323, (Optr)&t_method_return);
    Method PMethod20321 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20322, 1, PSend20323);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20321, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_print24_showSeconds_on_() {
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_showSeconds_0_1 = new_Variable_named(L"showSeconds", 0);
    Variable VAR_aStream_0_2 = new_Variable_named(L"aStream", 0);
    Array PArray20325 = new_Array_with(3, (Optr)VAR_hr24_0_0, (Optr)VAR_showSeconds_0_1, (Optr)VAR_aStream_0_2);
    Variable VAR_h_0_3 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_4 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_5 = new_Variable_named(L"s", 0);
    Array PArray20326 = new_Array_with(3, (Optr)VAR_h_0_3, (Optr)VAR_m_0_4, (Optr)VAR_s_0_5);
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20329 = new_Send((Optr)self, SMB_hour, 0);
    Assign PAssign20328 = new_Assign((Optr)VAR_h_0_3, (Optr)PSend20329);
    Symbol SMB_minute = new_Symbol(L"minute");
    // minute. 
    Send PSend20331 = new_Send((Optr)self, SMB_minute, 0);
    Assign PAssign20330 = new_Assign((Optr)VAR_m_0_4, (Optr)PSend20331);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20333 = new_Send((Optr)self, SMB_second, 0);
    Assign PAssign20332 = new_Assign((Optr)VAR_s_0_5, (Optr)PSend20333);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20337 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_9197 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    // <<. 
    Send PSend20341 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20340 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20341, (Optr)&t_block_return);
    Block PBlock20339 = new_Block_with(empty_Array, empty_Array, PThreadedCode20340, 1, PSend20341);
    // ifTrue:. 
    Send PSend20338 = new_Send((Optr)PSend20337, SMB_ifTrue_, 1, (Optr)PBlock20339);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20342 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20336 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20337, (Optr)&t_send_ifTrue_, (Optr)PSend20338, (Optr)PBlock20339, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20342, (Optr)&t_block_return);
    Block PBlock20335 = new_Block_with(empty_Array, empty_Array, PThreadedCode20336, 2, PSend20338, PSend20342);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB__gt_ = new_Symbol(L">");
    Constant int_12_Const = new_Constant((Optr)int_12);
    // >. 
    Send PSend20345 = new_Send((Optr)VAR_h_0_3, SMB__gt_, 1, (Optr)int_12_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20349 = new_Send((Optr)VAR_h_0_3, SMB__minus_, 1, (Optr)int_12_Const);
    // printOn:. 
    Send PSend20350 = new_Send((Optr)PSend20349, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20348 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20349, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20350, (Optr)&t_block_return);
    Block PBlock20347 = new_Block_with(empty_Array, empty_Array, PThreadedCode20348, 1, PSend20350);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend20353 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_1_Const);
    // printOn:. 
    Send PSend20357 = new_Send((Optr)int_12_Const, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20356 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20357, (Optr)&t_block_return);
    Block PBlock20355 = new_Block_with(empty_Array, empty_Array, PThreadedCode20356, 1, PSend20357);
    // printOn:. 
    Send PSend20360 = new_Send((Optr)VAR_h_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20359 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20360, (Optr)&t_block_return);
    Block PBlock20358 = new_Block_with(empty_Array, empty_Array, PThreadedCode20359, 1, PSend20360);
    // ifTrue:ifFalse:. 
    Send PSend20354 = new_Send((Optr)PSend20353, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20355, (Optr)PBlock20358);
    Array PThreadedCode20352 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20353, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20354, (Optr)PBlock20355, (Optr)PBlock20358, (Optr)&t_block_return);
    Block PBlock20351 = new_Block_with(empty_Array, empty_Array, PThreadedCode20352, 1, PSend20354);
    // ifTrue:ifFalse:. 
    Send PSend20346 = new_Send((Optr)PSend20345, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20347, (Optr)PBlock20351);
    Array PThreadedCode20344 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20345, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20346, (Optr)PBlock20347, (Optr)PBlock20351, (Optr)&t_block_return);
    Block PBlock20343 = new_Block_with(empty_Array, empty_Array, PThreadedCode20344, 1, PSend20346);
    // ifTrue:ifFalse:. 
    Send PSend20334 = new_Send((Optr)VAR_hr24_0_0, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20335, (Optr)PBlock20343);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20361 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20362 = new_Send((Optr)VAR_m_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20366 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20365 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20366, (Optr)&t_block_return);
    Block PBlock20364 = new_Block_with(empty_Array, empty_Array, PThreadedCode20365, 1, PSend20366);
    // ifTrue:. 
    Send PSend20363 = new_Send((Optr)PSend20362, SMB_ifTrue_, 1, (Optr)PBlock20364);
    // printOn:. 
    Send PSend20367 = new_Send((Optr)VAR_m_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    // <<. 
    Send PSend20371 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20372 = new_Send((Optr)VAR_s_0_5, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20376 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20375 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20376, (Optr)&t_block_return);
    Block PBlock20374 = new_Block_with(empty_Array, empty_Array, PThreadedCode20375, 1, PSend20376);
    // ifTrue:. 
    Send PSend20373 = new_Send((Optr)PSend20372, SMB_ifTrue_, 1, (Optr)PBlock20374);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20377 = new_Send((Optr)VAR_s_0_5, SMB_asInteger, 0);
    // printOn:. 
    Send PSend20378 = new_Send((Optr)PSend20377, SMB_printOn_, 1, (Optr)VAR_aStream_0_2);
    Array PThreadedCode20370 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20371, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20372, (Optr)&t_send_ifTrue_, (Optr)PSend20373, (Optr)PBlock20374, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_5, (Optr)&t_send0, (Optr)PSend20377, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20378, (Optr)&t_block_return);
    Block PBlock20369 = new_Block_with(empty_Array, empty_Array, PThreadedCode20370, 3, PSend20371, PSend20373, PSend20378);
    // ifTrue:. 
    Send PSend20368 = new_Send((Optr)VAR_showSeconds_0_1, SMB_ifTrue_, 1, (Optr)PBlock20369);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // <. 
    Send PSend20382 = new_Send((Optr)VAR_h_0_3, SMB__lt_, 1, (Optr)int_12_Const);
    String string_20386 = new_String(L" am");
    Constant string_20386_Const = new_Constant((Optr)string_20386);
    // <<. 
    Send PSend20387 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20386_Const);
    Array PThreadedCode20385 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20386, (Optr)&t_send1, (Optr)PSend20387, (Optr)&t_block_return);
    Block PBlock20384 = new_Block_with(empty_Array, empty_Array, PThreadedCode20385, 1, PSend20387);
    String string_20390 = new_String(L" pm");
    Constant string_20390_Const = new_Constant((Optr)string_20390);
    // <<. 
    Send PSend20391 = new_Send((Optr)VAR_aStream_0_2, SMB__shiftLeft_, 1, (Optr)string_20390_Const);
    Array PThreadedCode20389 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)string_20390, (Optr)&t_send1, (Optr)PSend20391, (Optr)&t_block_return);
    Block PBlock20388 = new_Block_with(empty_Array, empty_Array, PThreadedCode20389, 1, PSend20391);
    // ifTrue:ifFalse:. 
    Send PSend20383 = new_Send((Optr)PSend20382, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20384, (Optr)PBlock20388);
    Array PThreadedCode20381 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_h_0_3, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend20382, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20383, (Optr)PBlock20384, (Optr)PBlock20388, (Optr)&t_block_return);
    Block PBlock20380 = new_Block_with(empty_Array, empty_Array, PThreadedCode20381, 1, PSend20383);
    // ifFalse:. 
    Send PSend20379 = new_Send((Optr)VAR_hr24_0_0, SMB_ifFalse_, 1, (Optr)PBlock20380);
    Array PThreadedCode20327 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign20328, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20329, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20330, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20331, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20332, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20333, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20334, (Optr)PBlock20335, (Optr)PBlock20343, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20361, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20362, (Optr)&t_send_ifTrue_, (Optr)PSend20363, (Optr)PBlock20364, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_2, (Optr)&t_send1, (Optr)PSend20367, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_showSeconds_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend20368, (Optr)PBlock20369, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_send_ifFalse_, (Optr)PSend20379, (Optr)PBlock20380, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20324 = new_Method_with(PArray20325, PArray20326, empty_Array, PThreadedCode20327, 10, PAssign20328, PAssign20330, PAssign20332, PSend20334, PSend20361, PSend20363, PSend20367, PSend20368, PSend20379, self);
    
    MethodClosure MC_SMB_print24_showSeconds_on_ = new_MethodClosure((Method)PMethod20324, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_showSeconds_on_, MC_SMB_print24_showSeconds_on_);
}


static void init_SMB_print24_on_() {
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    Variable VAR_hr24_0_0 = new_Variable_named(L"hr24", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray20393 = new_Array_with(2, (Optr)VAR_hr24_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20395 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)VAR_hr24_0_0, (Optr)true_Const, (Optr)VAR_aStream_0_1);
    Array PThreadedCode20394 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_hr24_0_0, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send3, (Optr)PSend20395, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20392 = new_Method_with(PArray20393, empty_Array, empty_Array, PThreadedCode20394, 2, PSend20395, self);
    
    MethodClosure MC_SMB_print24_on_ = new_MethodClosure((Method)PMethod20392, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24_on_, MC_SMB_print24_on_);
}


static void init_SMB_print24() {
    Symbol SMB_print24 = new_Symbol(L"print24");
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray20399 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_print24_on_ = new_Symbol(L"print24:on:");
    // print24:on:. 
    Send PSend20401 = new_Send((Optr)self, SMB_print24_on_, 2, (Optr)true_Const, (Optr)VAR_aStream_1_0);
    Array PThreadedCode20400 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send2, (Optr)PSend20401, (Optr)&t_method_return);
    Block PBlock20398 = new_Block_with(PArray20399, empty_Array, PThreadedCode20400, 1, PSend20401);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend20402 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock20398);
    Array PThreadedCode20397 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock20398, (Optr)&t_send1, (Optr)PSend20402, (Optr)&t_method_return);
    Method PMethod20396 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20397, 1, PSend20402);
    
    MethodClosure MC_SMB_print24 = new_MethodClosure((Method)PMethod20396, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_print24, MC_SMB_print24);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20404 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend20406 = new_Send((Optr)self, SMB_second, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20407 = new_Send((Optr)PSend20406, SMB__notEquals_, 1, (Optr)int_0_Const);
    Symbol SMB_print24_showSeconds_on_ = new_Symbol(L"print24:showSeconds:on:");
    // print24:showSeconds:on:. 
    Send PSend20408 = new_Send((Optr)self, SMB_print24_showSeconds_on_, 3, (Optr)false_Const, (Optr)PSend20407, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20405 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20406, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20407, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send3, (Optr)PSend20408, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20403 = new_Method_with(PArray20404, empty_Array, empty_Array, PThreadedCode20405, 2, PSend20408, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20403, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asDateAndTime() {
    Symbol SMB_asDateAndTime = new_Symbol(L"asDateAndTime");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20411 = new_Send((Optr)DateAndTime_classReference, SMB_today, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20412 = new_Send((Optr)PSend20411, SMB__plus_, 1, (Optr)self);
    Array PThreadedCode20410 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_send0, (Optr)PSend20411, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend20412, (Optr)&t_method_return);
    Method PMethod20409 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20410, 1, PSend20412);
    
    MethodClosure MC_SMB_asDateAndTime = new_MethodClosure((Method)PMethod20409, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_asDateAndTime, MC_SMB_asDateAndTime);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20415 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20416 = new_Send((Optr)PSend20415, SMB_seconds, 0);
    Array PThreadedCode20414 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20415, (Optr)&t_send0, (Optr)PSend20416, (Optr)&t_method_return);
    Method PMethod20413 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20414, 1, PSend20416);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod20413, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // with:with:. 
    Send PSend20419 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)int_0_Const, (Optr)slot_Chronology_Time_seconds);
    Array PThreadedCode20418 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Time_seconds, (Optr)&t_send2, (Optr)PSend20419, (Optr)&t_method_return);
    Method PMethod20417 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20418, 1, PSend20419);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20417, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hour24() {
    Symbol SMB_hour24 = new_Symbol(L"hour24");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20422 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20423 = new_Send((Optr)PSend20422, SMB_hours, 0);
    Array PThreadedCode20421 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20422, (Optr)&t_send0, (Optr)PSend20423, (Optr)&t_method_return);
    Method PMethod20420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20421, 1, PSend20423);
    
    MethodClosure MC_SMB_hour24 = new_MethodClosure((Method)PMethod20420, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hour24, MC_SMB_hour24);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hour = new_Symbol(L"hour");
    // hour. 
    Send PSend20426 = new_Send((Optr)self, SMB_hour, 0);
    Array PThreadedCode20425 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20426, (Optr)&t_method_return);
    Method PMethod20424 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20425, 1, PSend20426);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20424, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_minute() {
    Symbol SMB_minute = new_Symbol(L"minute");
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20429 = new_Send((Optr)self, SMB_asDuration, 0);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20430 = new_Send((Optr)PSend20429, SMB_minutes, 0);
    Array PThreadedCode20428 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20429, (Optr)&t_send0, (Optr)PSend20430, (Optr)&t_method_return);
    Method PMethod20427 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20428, 1, PSend20430);
    
    MethodClosure MC_SMB_minute = new_MethodClosure((Method)PMethod20427, Chronology_Time_Class);
    store_method(Chronology_Time_Class, SMB_minute, MC_SMB_minute);
}


static void init_class_SMB_dateAndTimeFromSeconds_() {
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20432 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20434 = new_Send((Optr)Date_classReference, SMB_fromSeconds_, 1, (Optr)VAR_secondCount_0_0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20435 = new_Send((Optr)VAR_secondCount_0_0, SMB__modulo_, 1, (Optr)int_86400_Const);
    // fromSeconds:. 
    Send PSend20436 = new_Send((Optr)Time_classReference, SMB_fromSeconds_, 1, (Optr)PSend20435);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20437 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend20434, (Optr)PSend20436);
    Array PThreadedCode20433 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_send1, (Optr)PSend20434, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20435, (Optr)&t_send1, (Optr)PSend20436, (Optr)&t_send2, (Optr)PSend20437, (Optr)&t_method_return);
    Method PMethod20431 = new_Method_with(PArray20432, empty_Array, empty_Array, PThreadedCode20433, 1, PSend20437);
    
    MethodClosure MC_SMB_dateAndTimeFromSeconds_ = new_MethodClosure((Method)PMethod20431, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_dateAndTimeFromSeconds_, MC_SMB_dateAndTimeFromSeconds_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20440 = new_String(L"plugin/chronology/Time.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Chronology_minus_Time_Const = new_Constant((Optr)SMB_Chronology_minus_Time);
    Constant string_20440_Const = new_Constant((Optr)string_20440);
    // require:at:. 
    Send PSend20441 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Chronology_minus_Time_Const, (Optr)string_20440_Const);
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    // primInitialize. 
    Send PSend20442 = new_Send((Optr)self, SMB_primInitialize, 0);
    Array PThreadedCode20439 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Chronology_minus_Time, (Optr)&t_push1, (Optr)string_20440, (Optr)&t_send2, (Optr)PSend20441, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20442, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20438 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20439, 3, PSend20441, PSend20442, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod20438, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_primMicrosecondClock() {
    Symbol SMB_primMicrosecondClock = new_Symbol(L"primMicrosecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_microsecondClock = new_Symbol(L"microsecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20446 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 * 1000 + micro_seconds);\n\t");
    Annotation PAnnotation20445 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_microsecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20446);
    Array PArray20444 = new_Array_with(1, (Optr)PAnnotation20445);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20448 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20447 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20448, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20443 = new_NativeMethod_with(empty_Array, empty_Array, PArray20444, PThreadedCode20447, 2, PSend20448, self);
    
    MethodClosure MC_SMB_primMicrosecondClock = new_MethodClosure((Method)PNativeMethod20443, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMicrosecondClock, MC_SMB_primMicrosecondClock);
}


static void init_class_SMB_primMillisecondClock() {
    Symbol SMB_primMillisecondClock = new_Symbol(L"primMillisecondClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_millisecondClock = new_Symbol(L"millisecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20452 = new_String(L"\n\tstruct timeval tv;\n\tgettimeofday(&tv, NULL);\n\tlong seconds       = tv.tv_sec - start_timeval.tv_sec;\n\tlong micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);\n\t^wrap_int(seconds * 1000 + micro_seconds / 1000);\n\t");
    Annotation PAnnotation20451 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_millisecondClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20452);
    Array PArray20450 = new_Array_with(1, (Optr)PAnnotation20451);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20454 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20453 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20454, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20449 = new_NativeMethod_with(empty_Array, empty_Array, PArray20450, PThreadedCode20453, 2, PSend20454, self);
    
    MethodClosure MC_SMB_primMillisecondClock = new_MethodClosure((Method)PNativeMethod20449, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primMillisecondClock, MC_SMB_primMillisecondClock);
}


static void init_class_SMB_primSecondsClock() {
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_secondsClock = new_Symbol(L"secondsClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20458 = new_String(L"\n    long seconds;\n    seconds = (long)time(NULL);\n    seconds += 2177452800;\n\t^wrap_int(seconds);\n\t");
    Annotation PAnnotation20457 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_secondsClock, (Optr)SMB_Chronology_minus_Time, (Optr)string_20458);
    Array PArray20456 = new_Array_with(1, (Optr)PAnnotation20457);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20460 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20459 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20460, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20455 = new_NativeMethod_with(empty_Array, empty_Array, PArray20456, PThreadedCode20459, 2, PSend20460, self);
    
    MethodClosure MC_SMB_primSecondsClock = new_MethodClosure((Method)PNativeMethod20455, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primSecondsClock, MC_SMB_primSecondsClock);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20462 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20464 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20465 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_ticks = new_Symbol(L"ticks");
    // ticks. 
    Send PSend20466 = new_Send((Optr)PSend20465, SMB_ticks, 0);
    Symbol SMB_ticks_ = new_Symbol(L"ticks:");
    // ticks:. 
    Send PSend20467 = new_Send((Optr)PSend20464, SMB_ticks_, 1, (Optr)PSend20466);
    Array PThreadedCode20463 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20464, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20465, (Optr)&t_send0, (Optr)PSend20466, (Optr)&t_send1, (Optr)PSend20467, (Optr)&t_method_return);
    Method PMethod20461 = new_Method_with(PArray20462, empty_Array, empty_Array, PThreadedCode20463, 1, PSend20467);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20461, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_now() {
    Symbol SMB_now = new_Symbol(L"now");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20470 = new_Send((Optr)self, SMB_totalSeconds, 0);
    SmallInt int_86400 = new_SmallInt(86400);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    // \\. 
    Send PSend20471 = new_Send((Optr)PSend20470, SMB__modulo_, 1, (Optr)int_86400_Const);
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    // fromSeconds:. 
    Send PSend20472 = new_Send((Optr)self, SMB_fromSeconds_, 1, (Optr)PSend20471);
    Array PThreadedCode20469 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20470, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_send1, (Optr)PSend20471, (Optr)&t_send1, (Optr)PSend20472, (Optr)&t_method_return);
    Method PMethod20468 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20469, 1, PSend20472);
    
    MethodClosure MC_SMB_now = new_MethodClosure((Method)PMethod20468, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_now, MC_SMB_now);
}


static void init_class_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Symbol SMB_today = new_Symbol(L"today");
    // today. 
    Send PSend20475 = new_Send((Optr)Date_classReference, SMB_today, 0);
    Array PThreadedCode20474 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Date_classReference, (Optr)&t_send0, (Optr)PSend20475, (Optr)&t_method_return);
    Method PMethod20473 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20474, 1, PSend20475);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20473, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_asDate, MC_SMB_asDate);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20477 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20479 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20478 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20479, (Optr)&t_method_return);
    Method PMethod20476 = new_Method_with(PArray20477, empty_Array, empty_Array, PThreadedCode20478, 1, PSend20479);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20476, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_totalSeconds() {
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    Symbol SMB_primSecondsClock = new_Symbol(L"primSecondsClock");
    // primSecondsClock. 
    Send PSend20482 = new_Send((Optr)self, SMB_primSecondsClock, 0);
    Array PThreadedCode20481 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20482, (Optr)&t_method_return);
    Method PMethod20480 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20481, 1, PSend20482);
    
    MethodClosure MC_SMB_totalSeconds = new_MethodClosure((Method)PMethod20480, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_totalSeconds, MC_SMB_totalSeconds);
}


static void init_class_SMB_primInitialize() {
    Symbol SMB_primInitialize = new_Symbol(L"primInitialize");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    String string_20486 = new_String(L"\n\tgettimeofday(&start_timeval, NULL);\n\t");
    Annotation PAnnotation20485 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_initialize, (Optr)SMB_Chronology_minus_Time, (Optr)string_20486);
    Array PArray20484 = new_Array_with(1, (Optr)PAnnotation20485);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend20488 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode20487 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20488, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod20483 = new_NativeMethod_with(empty_Array, empty_Array, PArray20484, PThreadedCode20487, 2, PSend20488, self);
    
    MethodClosure MC_SMB_primInitialize = new_MethodClosure((Method)PNativeMethod20483, HEADER(Chronology_Time_Class));
    store_method(HEADER(Chronology_Time_Class), SMB_primInitialize, MC_SMB_primInitialize);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    Symbol SMB_totalSeconds = new_Symbol(L"totalSeconds");
    // totalSeconds. 
    Send PSend20491 = new_Send((Optr)self, SMB_totalSeconds, 0);
    Symbol SMB_dateAndTimeFromSeconds_ = new_Symbol(L"dateAndTimeFromSeconds:");
    // dateAndTimeFromSeconds:. 
    Send PSend20492 = new_Send((Optr)self, SMB_dateAndTimeFromSeconds_, 1, (Optr)PSend20491);
    Array PThreadedCode20490 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20491, (Optr)&t_send1, (Optr)PSend20492, (Optr)&t_method_return);
    Method PMethod20489 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20490, 1, PSend20492);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20489, HEADER(Chronology_Time_Class));
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