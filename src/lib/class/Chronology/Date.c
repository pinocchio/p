#include <lib/class/Chronology/Date.h>


Optr layout_Chronology_Date_Class_class;
Optr layout_Chronology_Date;


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Array PThreadedCode20439 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20438 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20439, 1, self);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20438, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20441 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_format_0_1 = new_Variable_named(L"format", 0);
    Array PArray20442 = new_Array_with(1, (Optr)VAR_format_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20447 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend20449 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend20450 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend20451 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend20452 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend20453 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    // add:. 
    Send PSend20454 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20455 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20448 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20449, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20450, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20451, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend20452, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20453, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20454, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20455, (Optr)&t_method_return);
    Block PBlock20446 = new_Block_with(PArray20447, empty_Array, PThreadedCode20448, 7, PSend20449, PSend20450, PSend20451, PSend20452, PSend20453, PSend20454, PSend20455);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20456 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // value:. 
    Send PSend20445 = new_Send((Optr)PBlock20446, SMB_value_, 1, (Optr)PSend20456);
    Assign PAssign20444 = new_Assign((Optr)VAR_format_0_1, (Optr)PSend20445);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20457 = new_Send((Optr)VAR_format_0_1, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend20458 = new_Send((Optr)self, SMB_printOn_format_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend20457);
    Array PThreadedCode20443 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20444, (Optr)&t_push_closure, (Optr)PBlock20446, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20456, (Optr)&t_send1, (Optr)PSend20445, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_format_0_1, (Optr)&t_send0, (Optr)PSend20457, (Optr)&t_send2, (Optr)PSend20458, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20440 = new_Method_with(PArray20441, PArray20442, empty_Array, PThreadedCode20443, 3, PAssign20444, PSend20458, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20440, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20460 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // dayMonthYearDo:. 
    Send PSend20462 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_dayMonthYearDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode20461 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend20462, (Optr)&t_method_return);
    Method PMethod20459 = new_Method_with(PArray20460, empty_Array, empty_Array, PThreadedCode20461, 1, PSend20462);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod20459, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printOn_format_() {
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_formatArray_0_1 = new_Variable_named(L"formatArray", 0);
    Array PArray20464 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_formatArray_0_1);
    Variable VAR_gregorian_0_2 = new_Variable_named(L"gregorian", 0);
    Variable VAR_twoDigits_0_3 = new_Variable_named(L"twoDigits", 0);
    Variable VAR_element_0_4 = new_Variable_named(L"element", 0);
    Variable VAR_monthFormat_0_5 = new_Variable_named(L"monthFormat", 0);
    Array PArray20465 = new_Array_with(4, (Optr)VAR_gregorian_0_2, (Optr)VAR_twoDigits_0_3, (Optr)VAR_element_0_4, (Optr)VAR_monthFormat_0_5);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20470 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend20472 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20471 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_send3, (Optr)PSend20472, (Optr)&t_method_return);
    Block PBlock20469 = new_Block_with(PArray20470, empty_Array, PThreadedCode20471, 1, PSend20472);
    // dayMonthYearDo:. 
    Send PSend20468 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20469);
    Assign PAssign20467 = new_Assign((Optr)VAR_gregorian_0_2, (Optr)PSend20468);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20476 = new_Send((Optr)VAR_formatArray_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_6 = new_SmallInt(6);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // >. 
    Send PSend20475 = new_Send((Optr)PSend20476, SMB__gt_, 1, (Optr)int_6_Const);
    Symbol SMB_and_ = new_Symbol(L"and:");
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:. 
    Send PSend20479 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_7_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend20480 = new_Send((Optr)PSend20479, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode20478 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20479, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20480, (Optr)&t_block_return);
    Block PBlock20477 = new_Block_with(empty_Array, empty_Array, PThreadedCode20478, 1, PSend20480);
    // and:. 
    Send PSend20474 = new_Send((Optr)PSend20475, SMB_and_, 1, (Optr)PBlock20477);
    Assign PAssign20473 = new_Assign((Optr)VAR_twoDigits_0_3, (Optr)PSend20474);
    SmallInt int_3 = new_SmallInt(3);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20482 = new_Array_with(1, (Optr)VAR_i_1_0);
    // at:. 
    Send PSend20485 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)VAR_i_1_0);
    Assign PAssign20484 = new_Assign((Optr)VAR_element_0_4, (Optr)PSend20485);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20486 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20493 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20494 = new_Send((Optr)PSend20493, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9124 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9124_Const = new_Constant((Optr)char_9124);
    // <<. 
    Send PSend20498 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20497 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20498, (Optr)&t_block_return);
    Block PBlock20496 = new_Block_with(empty_Array, empty_Array, PThreadedCode20497, 1, PSend20498);
    // ifTrue:. 
    Send PSend20495 = new_Send((Optr)PSend20494, SMB_ifTrue_, 1, (Optr)PBlock20496);
    // first. 
    Send PSend20499 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20500 = new_Send((Optr)PSend20499, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20492 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20493, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20494, (Optr)&t_send_ifTrue_, (Optr)PSend20495, (Optr)PBlock20496, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20499, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20500, (Optr)&t_block_return);
    Block PBlock20491 = new_Block_with(empty_Array, empty_Array, PThreadedCode20492, 2, PSend20495, PSend20500);
    // first. 
    Send PSend20503 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    // printOn:. 
    Send PSend20504 = new_Send((Optr)PSend20503, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20502 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20503, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20504, (Optr)&t_block_return);
    Block PBlock20501 = new_Block_with(empty_Array, empty_Array, PThreadedCode20502, 1, PSend20504);
    // ifTrue:ifFalse:. 
    Send PSend20490 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20491, (Optr)PBlock20501);
    Array PThreadedCode20489 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20490, (Optr)PBlock20491, (Optr)PBlock20501, (Optr)&t_block_return);
    Block PBlock20488 = new_Block_with(empty_Array, empty_Array, PThreadedCode20489, 1, PSend20490);
    // ifTrue:. 
    Send PSend20487 = new_Send((Optr)PSend20486, SMB_ifTrue_, 1, (Optr)PBlock20488);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend20505 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_2_Const);
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:. 
    Send PSend20510 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_5_Const);
    Assign PAssign20509 = new_Assign((Optr)VAR_monthFormat_0_5, (Optr)PSend20510);
    // =. 
    Send PSend20511 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_middle = new_Symbol(L"middle");
    // middle. 
    Send PSend20518 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // <. 
    Send PSend20519 = new_Send((Optr)PSend20518, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20523 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20522 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20523, (Optr)&t_block_return);
    Block PBlock20521 = new_Block_with(empty_Array, empty_Array, PThreadedCode20522, 1, PSend20523);
    // ifTrue:. 
    Send PSend20520 = new_Send((Optr)PSend20519, SMB_ifTrue_, 1, (Optr)PBlock20521);
    // middle. 
    Send PSend20524 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20525 = new_Send((Optr)PSend20524, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20517 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20518, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20519, (Optr)&t_send_ifTrue_, (Optr)PSend20520, (Optr)PBlock20521, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20524, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20525, (Optr)&t_block_return);
    Block PBlock20516 = new_Block_with(empty_Array, empty_Array, PThreadedCode20517, 2, PSend20520, PSend20525);
    // middle. 
    Send PSend20528 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20529 = new_Send((Optr)PSend20528, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20527 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20528, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20529, (Optr)&t_block_return);
    Block PBlock20526 = new_Block_with(empty_Array, empty_Array, PThreadedCode20527, 1, PSend20529);
    // ifTrue:ifFalse:. 
    Send PSend20515 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20516, (Optr)PBlock20526);
    Array PThreadedCode20514 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20515, (Optr)PBlock20516, (Optr)PBlock20526, (Optr)&t_block_return);
    Block PBlock20513 = new_Block_with(empty_Array, empty_Array, PThreadedCode20514, 1, PSend20515);
    // ifTrue:. 
    Send PSend20512 = new_Send((Optr)PSend20511, SMB_ifTrue_, 1, (Optr)PBlock20513);
    // =. 
    Send PSend20530 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_2_Const);
    // middle. 
    Send PSend20534 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20535 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20534);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20536 = new_Send((Optr)PSend20535, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    // printOn:. 
    Send PSend20537 = new_Send((Optr)PSend20536, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20533 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20534, (Optr)&t_send1, (Optr)PSend20535, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20536, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20537, (Optr)&t_block_return);
    Block PBlock20532 = new_Block_with(empty_Array, empty_Array, PThreadedCode20533, 1, PSend20537);
    // ifTrue:. 
    Send PSend20531 = new_Send((Optr)PSend20530, SMB_ifTrue_, 1, (Optr)PBlock20532);
    // =. 
    Send PSend20538 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_3_Const);
    // middle. 
    Send PSend20542 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // nameOfMonth:. 
    Send PSend20543 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20542);
    // printOn:. 
    Send PSend20544 = new_Send((Optr)PSend20543, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20541 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20542, (Optr)&t_send1, (Optr)PSend20543, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20544, (Optr)&t_block_return);
    Block PBlock20540 = new_Block_with(empty_Array, empty_Array, PThreadedCode20541, 1, PSend20544);
    // ifTrue:. 
    Send PSend20539 = new_Send((Optr)PSend20538, SMB_ifTrue_, 1, (Optr)PBlock20540);
    Array PThreadedCode20508 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign20509, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend20510, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20511, (Optr)&t_send_ifTrue_, (Optr)PSend20512, (Optr)PBlock20513, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20530, (Optr)&t_send_ifTrue_, (Optr)PSend20531, (Optr)PBlock20532, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20538, (Optr)&t_send_ifTrue_, (Optr)PSend20539, (Optr)PBlock20540, (Optr)&t_block_return);
    Block PBlock20507 = new_Block_with(empty_Array, empty_Array, PThreadedCode20508, 4, PAssign20509, PSend20512, PSend20531, PSend20539);
    // ifTrue:. 
    Send PSend20506 = new_Send((Optr)PSend20505, SMB_ifTrue_, 1, (Optr)PBlock20507);
    // =. 
    Send PSend20545 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_3_Const);
    // at:. 
    Send PSend20549 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_6_Const);
    // =. 
    Send PSend20550 = new_Send((Optr)PSend20549, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend20554 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // printOn:. 
    Send PSend20555 = new_Send((Optr)PSend20554, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20553 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20554, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20555, (Optr)&t_block_return);
    Block PBlock20552 = new_Block_with(empty_Array, empty_Array, PThreadedCode20553, 1, PSend20555);
    // last. 
    Send PSend20558 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // <. 
    Send PSend20559 = new_Send((Optr)PSend20558, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20563 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9124_Const);
    Array PThreadedCode20562 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send1, (Optr)PSend20563, (Optr)&t_block_return);
    Block PBlock20561 = new_Block_with(empty_Array, empty_Array, PThreadedCode20562, 1, PSend20563);
    // ifTrue:. 
    Send PSend20560 = new_Send((Optr)PSend20559, SMB_ifTrue_, 1, (Optr)PBlock20561);
    // last. 
    Send PSend20564 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // \\. 
    Send PSend20565 = new_Send((Optr)PSend20564, SMB__modulo_, 1, (Optr)int_100_Const);
    // printOn:. 
    Send PSend20566 = new_Send((Optr)PSend20565, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20557 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20558, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20559, (Optr)&t_send_ifTrue_, (Optr)PSend20560, (Optr)PBlock20561, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20564, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20565, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20566, (Optr)&t_block_return);
    Block PBlock20556 = new_Block_with(empty_Array, empty_Array, PThreadedCode20557, 2, PSend20560, PSend20566);
    // ifTrue:ifFalse:. 
    Send PSend20551 = new_Send((Optr)PSend20550, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20552, (Optr)PBlock20556);
    Array PThreadedCode20548 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20549, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20550, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20551, (Optr)PBlock20552, (Optr)PBlock20556, (Optr)&t_block_return);
    Block PBlock20547 = new_Block_with(empty_Array, empty_Array, PThreadedCode20548, 1, PSend20551);
    // ifTrue:. 
    Send PSend20546 = new_Send((Optr)PSend20545, SMB_ifTrue_, 1, (Optr)PBlock20547);
    // <. 
    Send PSend20567 = new_Send((Optr)VAR_i_1_0, SMB__lt_, 1, (Optr)int_3_Const);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend20571 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20572 = new_Send((Optr)PSend20571, SMB__notEquals_, 1, (Optr)int_0_Const);
    // at:. 
    Send PSend20576 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend20577 = new_Send((Optr)PSend20576, SMB_asCharacter, 0);
    // <<. 
    Send PSend20578 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20577);
    Array PThreadedCode20575 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20576, (Optr)&t_send0, (Optr)PSend20577, (Optr)&t_send1, (Optr)PSend20578, (Optr)&t_block_return);
    Block PBlock20574 = new_Block_with(empty_Array, empty_Array, PThreadedCode20575, 1, PSend20578);
    // ifTrue:. 
    Send PSend20573 = new_Send((Optr)PSend20572, SMB_ifTrue_, 1, (Optr)PBlock20574);
    Array PThreadedCode20570 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20571, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20572, (Optr)&t_send_ifTrue_, (Optr)PSend20573, (Optr)PBlock20574, (Optr)&t_block_return);
    Block PBlock20569 = new_Block_with(empty_Array, empty_Array, PThreadedCode20570, 1, PSend20573);
    // ifTrue:. 
    Send PSend20568 = new_Send((Optr)PSend20567, SMB_ifTrue_, 1, (Optr)PBlock20569);
    Array PThreadedCode20483 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign20484, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20485, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20486, (Optr)&t_send_ifTrue_, (Optr)PSend20487, (Optr)PBlock20488, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20505, (Optr)&t_send_ifTrue_, (Optr)PSend20506, (Optr)PBlock20507, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20545, (Optr)&t_send_ifTrue_, (Optr)PSend20546, (Optr)PBlock20547, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20567, (Optr)&t_send_ifTrue_, (Optr)PSend20568, (Optr)PBlock20569, (Optr)&t_method_return);
    Block PBlock20481 = new_Block_with(PArray20482, empty_Array, PThreadedCode20483, 5, PAssign20484, PSend20487, PSend20506, PSend20546, PSend20568);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20579 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_3_Const, (Optr)PBlock20481);
    Array PThreadedCode20466 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign20467, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20469, (Optr)&t_send1, (Optr)PSend20468, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20473, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_send0, (Optr)PSend20476, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20475, (Optr)&t_push_closure, (Optr)PBlock20477, (Optr)&t_send1, (Optr)PSend20474, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock20481, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20579, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20463 = new_Method_with(PArray20464, PArray20465, empty_Array, PThreadedCode20466, 4, PAssign20467, PAssign20473, PSend20579, self);
    
    MethodClosure MC_SMB_printOn_format_ = new_MethodClosure((Method)PMethod20463, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_format_, MC_SMB_printOn_format_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray20581 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    // julianDayNumber:. 
    Send PSend20583 = new_Send((Optr)DateAndTime_classReference, SMB_julianDayNumber_, 1, (Optr)VAR_aJulianDayNumber_0_0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20584 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20583);
    Array PThreadedCode20582 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send1, (Optr)PSend20583, (Optr)&t_send1, (Optr)PSend20584, (Optr)&t_method_return);
    Method PMethod20580 = new_Method_with(PArray20581, empty_Array, empty_Array, PThreadedCode20582, 1, PSend20584);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod20580, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend20587 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode20586 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20587, (Optr)&t_method_return);
    Method PMethod20585 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20586, 1, PSend20587);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod20585, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20589 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend20591 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_midnight, 0);
    Symbol SMB_days_ = new_Symbol(L"days:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // days:. 
    Send PSend20592 = new_Send((Optr)Duration_classReference, SMB_days_, 1, (Optr)int_1_Const);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Super PSuper20593 = new_Super(SMB_starting_duration_, 2, (Optr)PSend20591, (Optr)PSend20592);
    Array PThreadedCode20590 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20591, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20592, (Optr)&t_super2, (Optr)PSuper20593, (Optr)&t_method_return);
    Method PMethod20588 = new_Method_with(PArray20589, empty_Array, empty_Array, PThreadedCode20590, 1, PSuper20593);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20588, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20595 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20597 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20598 = new_Send((Optr)PSend20597, SMB_days, 0);
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    // fromDays:. 
    Send PSend20599 = new_Send((Optr)self, SMB_fromDays_, 1, (Optr)PSend20598);
    Array PThreadedCode20596 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20597, (Optr)&t_send0, (Optr)PSend20598, (Optr)&t_send1, (Optr)PSend20599, (Optr)&t_method_return);
    Method PMethod20594 = new_Method_with(PArray20595, empty_Array, empty_Array, PThreadedCode20596, 1, PSend20599);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20594, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_fromDays_() {
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    Variable VAR_dayCount_0_0 = new_Variable_named(L"dayCount", 0);
    Array PArray20601 = new_Array_with(1, (Optr)VAR_dayCount_0_0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend20603 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20604 = new_Send((Optr)VAR_dayCount_0_0, SMB__plus_, 1, (Optr)PSend20603);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend20605 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend20604);
    Array PThreadedCode20602 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dayCount_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20603, (Optr)&t_send1, (Optr)PSend20604, (Optr)&t_send1, (Optr)PSend20605, (Optr)&t_method_return);
    Method PMethod20600 = new_Method_with(PArray20601, empty_Array, empty_Array, PThreadedCode20602, 1, PSend20605);
    
    MethodClosure MC_SMB_fromDays_ = new_MethodClosure((Method)PMethod20600, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromDays_, MC_SMB_fromDays_);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    // dateAndTimeNow. 
    Send PSend20608 = new_Send((Optr)Time_classReference, SMB_dateAndTimeNow, 0);
    Array PThreadedCode20607 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend20608, (Optr)&t_method_return);
    Method PMethod20606 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20607, 1, PSend20608);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20606, HEADER(Chronology_Date_Class));
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