#include <lib/class/Chronology/Date.h>


Optr layout_Chronology_Date_Class_class;
Optr layout_Chronology_Date;


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Array PThreadedCode20352 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20351 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20352, 1, self);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20351, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20354 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_format_0_1 = new_Variable_named(L"format", 0);
    Array PArray20355 = new_Array_with(1, (Optr)VAR_format_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20360 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend20362 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend20363 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend20364 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend20365 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend20366 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    // add:. 
    Send PSend20367 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20368 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20361 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20362, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20363, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20364, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend20365, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20366, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20367, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20368, (Optr)&t_method_return);
    Block PBlock20359 = new_Block_with(PArray20360, empty_Array, PThreadedCode20361, 7, PSend20362, PSend20363, PSend20364, PSend20365, PSend20366, PSend20367, PSend20368);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20369 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // value:. 
    Send PSend20358 = new_Send((Optr)PBlock20359, SMB_value_, 1, (Optr)PSend20369);
    Assign PAssign20357 = new_Assign((Optr)VAR_format_0_1, (Optr)PSend20358);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20370 = new_Send((Optr)VAR_format_0_1, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend20371 = new_Send((Optr)self, SMB_printOn_format_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend20370);
    Array PThreadedCode20356 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20357, (Optr)&t_push_closure, (Optr)PBlock20359, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20369, (Optr)&t_send1, (Optr)PSend20358, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_format_0_1, (Optr)&t_send0, (Optr)PSend20370, (Optr)&t_send2, (Optr)PSend20371, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20353 = new_Method_with(PArray20354, PArray20355, empty_Array, PThreadedCode20356, 3, PAssign20357, PSend20371, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20353, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20373 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // dayMonthYearDo:. 
    Send PSend20375 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_dayMonthYearDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode20374 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend20375, (Optr)&t_method_return);
    Method PMethod20372 = new_Method_with(PArray20373, empty_Array, empty_Array, PThreadedCode20374, 1, PSend20375);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod20372, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printOn_format_() {
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_formatArray_0_1 = new_Variable_named(L"formatArray", 0);
    Array PArray20377 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_formatArray_0_1);
    Variable VAR_gregorian_0_2 = new_Variable_named(L"gregorian", 0);
    Variable VAR_twoDigits_0_3 = new_Variable_named(L"twoDigits", 0);
    Variable VAR_element_0_4 = new_Variable_named(L"element", 0);
    Variable VAR_monthFormat_0_5 = new_Variable_named(L"monthFormat", 0);
    Array PArray20378 = new_Array_with(4, (Optr)VAR_gregorian_0_2, (Optr)VAR_twoDigits_0_3, (Optr)VAR_element_0_4, (Optr)VAR_monthFormat_0_5);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20383 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend20385 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20384 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_send3, (Optr)PSend20385, (Optr)&t_method_return);
    Block PBlock20382 = new_Block_with(PArray20383, empty_Array, PThreadedCode20384, 1, PSend20385);
    // dayMonthYearDo:. 
    Send PSend20381 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20382);
    Assign PAssign20380 = new_Assign((Optr)VAR_gregorian_0_2, (Optr)PSend20381);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20389 = new_Send((Optr)VAR_formatArray_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_6 = new_SmallInt(6);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // >. 
    Send PSend20388 = new_Send((Optr)PSend20389, SMB__gt_, 1, (Optr)int_6_Const);
    Symbol SMB_and_ = new_Symbol(L"and:");
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:. 
    Send PSend20392 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_7_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend20393 = new_Send((Optr)PSend20392, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode20391 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20392, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20393, (Optr)&t_block_return);
    Block PBlock20390 = new_Block_with(empty_Array, empty_Array, PThreadedCode20391, 1, PSend20393);
    // and:. 
    Send PSend20387 = new_Send((Optr)PSend20388, SMB_and_, 1, (Optr)PBlock20390);
    Assign PAssign20386 = new_Assign((Optr)VAR_twoDigits_0_3, (Optr)PSend20387);
    SmallInt int_3 = new_SmallInt(3);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20395 = new_Array_with(1, (Optr)VAR_i_1_0);
    // at:. 
    Send PSend20398 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)VAR_i_1_0);
    Assign PAssign20397 = new_Assign((Optr)VAR_element_0_4, (Optr)PSend20398);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20399 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20406 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20407 = new_Send((Optr)PSend20406, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9135 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9135_Const = new_Constant((Optr)char_9135);
    // <<. 
    Send PSend20411 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20410 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20411, (Optr)&t_block_return);
    Block PBlock20409 = new_Block_with(empty_Array, empty_Array, PThreadedCode20410, 1, PSend20411);
    // ifTrue:. 
    Send PSend20408 = new_Send((Optr)PSend20407, SMB_ifTrue_, 1, (Optr)PBlock20409);
    // first. 
    Send PSend20412 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20413 = new_Send((Optr)PSend20412, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20405 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20406, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20407, (Optr)&t_send_ifTrue_, (Optr)PSend20408, (Optr)PBlock20409, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20412, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20413, (Optr)&t_block_return);
    Block PBlock20404 = new_Block_with(empty_Array, empty_Array, PThreadedCode20405, 2, PSend20408, PSend20413);
    // first. 
    Send PSend20416 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    // printOn:. 
    Send PSend20417 = new_Send((Optr)PSend20416, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20415 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20416, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20417, (Optr)&t_block_return);
    Block PBlock20414 = new_Block_with(empty_Array, empty_Array, PThreadedCode20415, 1, PSend20417);
    // ifTrue:ifFalse:. 
    Send PSend20403 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20404, (Optr)PBlock20414);
    Array PThreadedCode20402 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20403, (Optr)PBlock20404, (Optr)PBlock20414, (Optr)&t_block_return);
    Block PBlock20401 = new_Block_with(empty_Array, empty_Array, PThreadedCode20402, 1, PSend20403);
    // ifTrue:. 
    Send PSend20400 = new_Send((Optr)PSend20399, SMB_ifTrue_, 1, (Optr)PBlock20401);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend20418 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_2_Const);
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:. 
    Send PSend20423 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_5_Const);
    Assign PAssign20422 = new_Assign((Optr)VAR_monthFormat_0_5, (Optr)PSend20423);
    // =. 
    Send PSend20424 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_middle = new_Symbol(L"middle");
    // middle. 
    Send PSend20431 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // <. 
    Send PSend20432 = new_Send((Optr)PSend20431, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20436 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20435 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20436, (Optr)&t_block_return);
    Block PBlock20434 = new_Block_with(empty_Array, empty_Array, PThreadedCode20435, 1, PSend20436);
    // ifTrue:. 
    Send PSend20433 = new_Send((Optr)PSend20432, SMB_ifTrue_, 1, (Optr)PBlock20434);
    // middle. 
    Send PSend20437 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20438 = new_Send((Optr)PSend20437, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20430 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20431, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20432, (Optr)&t_send_ifTrue_, (Optr)PSend20433, (Optr)PBlock20434, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20437, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20438, (Optr)&t_block_return);
    Block PBlock20429 = new_Block_with(empty_Array, empty_Array, PThreadedCode20430, 2, PSend20433, PSend20438);
    // middle. 
    Send PSend20441 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20442 = new_Send((Optr)PSend20441, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20440 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20441, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20442, (Optr)&t_block_return);
    Block PBlock20439 = new_Block_with(empty_Array, empty_Array, PThreadedCode20440, 1, PSend20442);
    // ifTrue:ifFalse:. 
    Send PSend20428 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20429, (Optr)PBlock20439);
    Array PThreadedCode20427 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20428, (Optr)PBlock20429, (Optr)PBlock20439, (Optr)&t_block_return);
    Block PBlock20426 = new_Block_with(empty_Array, empty_Array, PThreadedCode20427, 1, PSend20428);
    // ifTrue:. 
    Send PSend20425 = new_Send((Optr)PSend20424, SMB_ifTrue_, 1, (Optr)PBlock20426);
    // =. 
    Send PSend20443 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_2_Const);
    // middle. 
    Send PSend20447 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20448 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20447);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20449 = new_Send((Optr)PSend20448, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    // printOn:. 
    Send PSend20450 = new_Send((Optr)PSend20449, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20446 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20447, (Optr)&t_send1, (Optr)PSend20448, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20449, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20450, (Optr)&t_block_return);
    Block PBlock20445 = new_Block_with(empty_Array, empty_Array, PThreadedCode20446, 1, PSend20450);
    // ifTrue:. 
    Send PSend20444 = new_Send((Optr)PSend20443, SMB_ifTrue_, 1, (Optr)PBlock20445);
    // =. 
    Send PSend20451 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_3_Const);
    // middle. 
    Send PSend20455 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // nameOfMonth:. 
    Send PSend20456 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20455);
    // printOn:. 
    Send PSend20457 = new_Send((Optr)PSend20456, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20454 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20455, (Optr)&t_send1, (Optr)PSend20456, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20457, (Optr)&t_block_return);
    Block PBlock20453 = new_Block_with(empty_Array, empty_Array, PThreadedCode20454, 1, PSend20457);
    // ifTrue:. 
    Send PSend20452 = new_Send((Optr)PSend20451, SMB_ifTrue_, 1, (Optr)PBlock20453);
    Array PThreadedCode20421 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign20422, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend20423, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20424, (Optr)&t_send_ifTrue_, (Optr)PSend20425, (Optr)PBlock20426, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20443, (Optr)&t_send_ifTrue_, (Optr)PSend20444, (Optr)PBlock20445, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20451, (Optr)&t_send_ifTrue_, (Optr)PSend20452, (Optr)PBlock20453, (Optr)&t_block_return);
    Block PBlock20420 = new_Block_with(empty_Array, empty_Array, PThreadedCode20421, 4, PAssign20422, PSend20425, PSend20444, PSend20452);
    // ifTrue:. 
    Send PSend20419 = new_Send((Optr)PSend20418, SMB_ifTrue_, 1, (Optr)PBlock20420);
    // =. 
    Send PSend20458 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_3_Const);
    // at:. 
    Send PSend20462 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_6_Const);
    // =. 
    Send PSend20463 = new_Send((Optr)PSend20462, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend20467 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // printOn:. 
    Send PSend20468 = new_Send((Optr)PSend20467, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20466 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20467, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20468, (Optr)&t_block_return);
    Block PBlock20465 = new_Block_with(empty_Array, empty_Array, PThreadedCode20466, 1, PSend20468);
    // last. 
    Send PSend20471 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // <. 
    Send PSend20472 = new_Send((Optr)PSend20471, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20476 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9135_Const);
    Array PThreadedCode20475 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send1, (Optr)PSend20476, (Optr)&t_block_return);
    Block PBlock20474 = new_Block_with(empty_Array, empty_Array, PThreadedCode20475, 1, PSend20476);
    // ifTrue:. 
    Send PSend20473 = new_Send((Optr)PSend20472, SMB_ifTrue_, 1, (Optr)PBlock20474);
    // last. 
    Send PSend20477 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // \\. 
    Send PSend20478 = new_Send((Optr)PSend20477, SMB__modulo_, 1, (Optr)int_100_Const);
    // printOn:. 
    Send PSend20479 = new_Send((Optr)PSend20478, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20470 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20471, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20472, (Optr)&t_send_ifTrue_, (Optr)PSend20473, (Optr)PBlock20474, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20477, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20478, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20479, (Optr)&t_block_return);
    Block PBlock20469 = new_Block_with(empty_Array, empty_Array, PThreadedCode20470, 2, PSend20473, PSend20479);
    // ifTrue:ifFalse:. 
    Send PSend20464 = new_Send((Optr)PSend20463, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20465, (Optr)PBlock20469);
    Array PThreadedCode20461 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20462, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20463, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20464, (Optr)PBlock20465, (Optr)PBlock20469, (Optr)&t_block_return);
    Block PBlock20460 = new_Block_with(empty_Array, empty_Array, PThreadedCode20461, 1, PSend20464);
    // ifTrue:. 
    Send PSend20459 = new_Send((Optr)PSend20458, SMB_ifTrue_, 1, (Optr)PBlock20460);
    // <. 
    Send PSend20480 = new_Send((Optr)VAR_i_1_0, SMB__lt_, 1, (Optr)int_3_Const);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend20484 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20485 = new_Send((Optr)PSend20484, SMB__notEquals_, 1, (Optr)int_0_Const);
    // at:. 
    Send PSend20489 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend20490 = new_Send((Optr)PSend20489, SMB_asCharacter, 0);
    // <<. 
    Send PSend20491 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20490);
    Array PThreadedCode20488 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20489, (Optr)&t_send0, (Optr)PSend20490, (Optr)&t_send1, (Optr)PSend20491, (Optr)&t_block_return);
    Block PBlock20487 = new_Block_with(empty_Array, empty_Array, PThreadedCode20488, 1, PSend20491);
    // ifTrue:. 
    Send PSend20486 = new_Send((Optr)PSend20485, SMB_ifTrue_, 1, (Optr)PBlock20487);
    Array PThreadedCode20483 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20484, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20485, (Optr)&t_send_ifTrue_, (Optr)PSend20486, (Optr)PBlock20487, (Optr)&t_block_return);
    Block PBlock20482 = new_Block_with(empty_Array, empty_Array, PThreadedCode20483, 1, PSend20486);
    // ifTrue:. 
    Send PSend20481 = new_Send((Optr)PSend20480, SMB_ifTrue_, 1, (Optr)PBlock20482);
    Array PThreadedCode20396 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign20397, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20398, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20399, (Optr)&t_send_ifTrue_, (Optr)PSend20400, (Optr)PBlock20401, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20418, (Optr)&t_send_ifTrue_, (Optr)PSend20419, (Optr)PBlock20420, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20458, (Optr)&t_send_ifTrue_, (Optr)PSend20459, (Optr)PBlock20460, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20480, (Optr)&t_send_ifTrue_, (Optr)PSend20481, (Optr)PBlock20482, (Optr)&t_method_return);
    Block PBlock20394 = new_Block_with(PArray20395, empty_Array, PThreadedCode20396, 5, PAssign20397, PSend20400, PSend20419, PSend20459, PSend20481);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20492 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_3_Const, (Optr)PBlock20394);
    Array PThreadedCode20379 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign20380, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20382, (Optr)&t_send1, (Optr)PSend20381, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20386, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_send0, (Optr)PSend20389, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20388, (Optr)&t_push_closure, (Optr)PBlock20390, (Optr)&t_send1, (Optr)PSend20387, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock20394, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20492, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20376 = new_Method_with(PArray20377, PArray20378, empty_Array, PThreadedCode20379, 4, PAssign20380, PAssign20386, PSend20492, self);
    
    MethodClosure MC_SMB_printOn_format_ = new_MethodClosure((Method)PMethod20376, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_format_, MC_SMB_printOn_format_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray20494 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    // julianDayNumber:. 
    Send PSend20496 = new_Send((Optr)DateAndTime_classReference, SMB_julianDayNumber_, 1, (Optr)VAR_aJulianDayNumber_0_0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20497 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20496);
    Array PThreadedCode20495 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send1, (Optr)PSend20496, (Optr)&t_send1, (Optr)PSend20497, (Optr)&t_method_return);
    Method PMethod20493 = new_Method_with(PArray20494, empty_Array, empty_Array, PThreadedCode20495, 1, PSend20497);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod20493, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend20500 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode20499 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20500, (Optr)&t_method_return);
    Method PMethod20498 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20499, 1, PSend20500);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod20498, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20502 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend20504 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_midnight, 0);
    Symbol SMB_days_ = new_Symbol(L"days:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // days:. 
    Send PSend20505 = new_Send((Optr)Duration_classReference, SMB_days_, 1, (Optr)int_1_Const);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Super PSuper20506 = new_Super(SMB_starting_duration_, 2, (Optr)PSend20504, (Optr)PSend20505);
    Array PThreadedCode20503 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20504, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20505, (Optr)&t_super2, (Optr)PSuper20506, (Optr)&t_method_return);
    Method PMethod20501 = new_Method_with(PArray20502, empty_Array, empty_Array, PThreadedCode20503, 1, PSuper20506);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20501, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20508 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20510 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20511 = new_Send((Optr)PSend20510, SMB_days, 0);
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    // fromDays:. 
    Send PSend20512 = new_Send((Optr)self, SMB_fromDays_, 1, (Optr)PSend20511);
    Array PThreadedCode20509 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20510, (Optr)&t_send0, (Optr)PSend20511, (Optr)&t_send1, (Optr)PSend20512, (Optr)&t_method_return);
    Method PMethod20507 = new_Method_with(PArray20508, empty_Array, empty_Array, PThreadedCode20509, 1, PSend20512);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20507, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_fromDays_() {
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    Variable VAR_dayCount_0_0 = new_Variable_named(L"dayCount", 0);
    Array PArray20514 = new_Array_with(1, (Optr)VAR_dayCount_0_0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend20516 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20517 = new_Send((Optr)VAR_dayCount_0_0, SMB__plus_, 1, (Optr)PSend20516);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend20518 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend20517);
    Array PThreadedCode20515 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dayCount_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20516, (Optr)&t_send1, (Optr)PSend20517, (Optr)&t_send1, (Optr)PSend20518, (Optr)&t_method_return);
    Method PMethod20513 = new_Method_with(PArray20514, empty_Array, empty_Array, PThreadedCode20515, 1, PSend20518);
    
    MethodClosure MC_SMB_fromDays_ = new_MethodClosure((Method)PMethod20513, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromDays_, MC_SMB_fromDays_);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    // dateAndTimeNow. 
    Send PSend20521 = new_Send((Optr)Time_classReference, SMB_dateAndTimeNow, 0);
    Array PThreadedCode20520 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend20521, (Optr)&t_method_return);
    Method PMethod20519 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20520, 1, PSend20521);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20519, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_dateAndTimeNow, MC_SMB_dateAndTimeNow);
}

void init_Chronology_Date_layout() {
    layout_Chronology_Date_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Chronology_Date_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Chronology_Date_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Chronology_Date_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Chronology_Date_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Chronology_Date_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Date = new_Symbol(L"Date");
    layout_Chronology_Date = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Chronology_Date)->values[0] = slot_Chronology_Timespan_start; // start 
    ((Array)layout_Chronology_Date)->values[1] = slot_Chronology_Timespan_duration; // duration 
    Chronology_Date_Class = (Class)new_Class(Chronology_Timespan_Class, layout_Chronology_Date_Class_class);
    Class_set_superclass(Chronology_Date_Class, Chronology_Timespan_Class);
    Chronology_Date_Class->layout = layout_Chronology_Date;
    HEADER(Chronology_Date_Class)->layout = layout_Chronology_Date_Class_class;
    Chronology_Date_Class->name = SMB_Date;
    
}

void init_Chronology_Date_methods() {
    init_SMB_asDate();
    init_SMB_printOn_();
    init_SMB_dayMonthYearDo_();
    init_SMB_printOn_format_();
    init_class_SMB_julianDayNumber_();
    init_class_SMB_today();
    init_class_SMB_starting_();
    init_class_SMB_fromSeconds_();
    init_class_SMB_fromDays_();
    init_class_SMB_dateAndTimeNow();
    
}