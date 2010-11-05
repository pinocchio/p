#include <lib/class/Chronology/Date.h>


Optr layout_Chronology_Date_Class_class;
Optr layout_Chronology_Date;


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Array PThreadedCode20382 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20381 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20382, 1, self);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20381, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20384 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_format_0_1 = new_Variable_named(L"format", 0);
    Array PArray20385 = new_Array_with(1, (Optr)VAR_format_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20390 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend20392 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend20393 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend20394 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4725 = new_Character(L' ');
    Constant char_4725_Const = new_Constant((Optr)char_4725);
    // add:. 
    Send PSend20395 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)char_4725_Const);
    // add:. 
    Send PSend20396 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    // add:. 
    Send PSend20397 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20398 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20391 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20392, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20393, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20394, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4725, (Optr)&t_send1, (Optr)PSend20395, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20396, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20397, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20398, (Optr)&t_method_return);
    Block PBlock20389 = new_Block_with(PArray20390, empty_Array, PThreadedCode20391, 7, PSend20392, PSend20393, PSend20394, PSend20395, PSend20396, PSend20397, PSend20398);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20399 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // value:. 
    Send PSend20388 = new_Send((Optr)PBlock20389, SMB_value_, 1, (Optr)PSend20399);
    Assign PAssign20387 = new_Assign((Optr)VAR_format_0_1, (Optr)PSend20388);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20400 = new_Send((Optr)VAR_format_0_1, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend20401 = new_Send((Optr)self, SMB_printOn_format_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend20400);
    Array PThreadedCode20386 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20387, (Optr)&t_push_closure, (Optr)PBlock20389, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20399, (Optr)&t_send1, (Optr)PSend20388, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_format_0_1, (Optr)&t_send0, (Optr)PSend20400, (Optr)&t_send2, (Optr)PSend20401, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20383 = new_Method_with(PArray20384, PArray20385, empty_Array, PThreadedCode20386, 3, PAssign20387, PSend20401, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20383, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20403 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // dayMonthYearDo:. 
    Send PSend20405 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_dayMonthYearDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode20404 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend20405, (Optr)&t_method_return);
    Method PMethod20402 = new_Method_with(PArray20403, empty_Array, empty_Array, PThreadedCode20404, 1, PSend20405);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod20402, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printOn_format_() {
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_formatArray_0_1 = new_Variable_named(L"formatArray", 0);
    Array PArray20407 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_formatArray_0_1);
    Variable VAR_gregorian_0_2 = new_Variable_named(L"gregorian", 0);
    Variable VAR_twoDigits_0_3 = new_Variable_named(L"twoDigits", 0);
    Variable VAR_element_0_4 = new_Variable_named(L"element", 0);
    Variable VAR_monthFormat_0_5 = new_Variable_named(L"monthFormat", 0);
    Array PArray20408 = new_Array_with(4, (Optr)VAR_gregorian_0_2, (Optr)VAR_twoDigits_0_3, (Optr)VAR_element_0_4, (Optr)VAR_monthFormat_0_5);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20413 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend20415 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20414 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_send3, (Optr)PSend20415, (Optr)&t_method_return);
    Block PBlock20412 = new_Block_with(PArray20413, empty_Array, PThreadedCode20414, 1, PSend20415);
    // dayMonthYearDo:. 
    Send PSend20411 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20412);
    Assign PAssign20410 = new_Assign((Optr)VAR_gregorian_0_2, (Optr)PSend20411);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20419 = new_Send((Optr)VAR_formatArray_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_6 = new_SmallInt(6);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // >. 
    Send PSend20418 = new_Send((Optr)PSend20419, SMB__gt_, 1, (Optr)int_6_Const);
    Symbol SMB_and_ = new_Symbol(L"and:");
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:. 
    Send PSend20422 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_7_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend20423 = new_Send((Optr)PSend20422, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode20421 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20422, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20423, (Optr)&t_block_return);
    Block PBlock20420 = new_Block_with(empty_Array, empty_Array, PThreadedCode20421, 1, PSend20423);
    // and:. 
    Send PSend20417 = new_Send((Optr)PSend20418, SMB_and_, 1, (Optr)PBlock20420);
    Assign PAssign20416 = new_Assign((Optr)VAR_twoDigits_0_3, (Optr)PSend20417);
    SmallInt int_3 = new_SmallInt(3);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20425 = new_Array_with(1, (Optr)VAR_i_1_0);
    // at:. 
    Send PSend20428 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)VAR_i_1_0);
    Assign PAssign20427 = new_Assign((Optr)VAR_element_0_4, (Optr)PSend20428);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20429 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20436 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20437 = new_Send((Optr)PSend20436, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9159 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9159_Const = new_Constant((Optr)char_9159);
    // <<. 
    Send PSend20441 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20440 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20441, (Optr)&t_block_return);
    Block PBlock20439 = new_Block_with(empty_Array, empty_Array, PThreadedCode20440, 1, PSend20441);
    // ifTrue:. 
    Send PSend20438 = new_Send((Optr)PSend20437, SMB_ifTrue_, 1, (Optr)PBlock20439);
    // first. 
    Send PSend20442 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20443 = new_Send((Optr)PSend20442, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20435 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20436, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20437, (Optr)&t_send_ifTrue_, (Optr)PSend20438, (Optr)PBlock20439, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20442, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20443, (Optr)&t_block_return);
    Block PBlock20434 = new_Block_with(empty_Array, empty_Array, PThreadedCode20435, 2, PSend20438, PSend20443);
    // first. 
    Send PSend20446 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    // printOn:. 
    Send PSend20447 = new_Send((Optr)PSend20446, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20445 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20446, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20447, (Optr)&t_block_return);
    Block PBlock20444 = new_Block_with(empty_Array, empty_Array, PThreadedCode20445, 1, PSend20447);
    // ifTrue:ifFalse:. 
    Send PSend20433 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20434, (Optr)PBlock20444);
    Array PThreadedCode20432 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20433, (Optr)PBlock20434, (Optr)PBlock20444, (Optr)&t_block_return);
    Block PBlock20431 = new_Block_with(empty_Array, empty_Array, PThreadedCode20432, 1, PSend20433);
    // ifTrue:. 
    Send PSend20430 = new_Send((Optr)PSend20429, SMB_ifTrue_, 1, (Optr)PBlock20431);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend20448 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_2_Const);
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:. 
    Send PSend20453 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_5_Const);
    Assign PAssign20452 = new_Assign((Optr)VAR_monthFormat_0_5, (Optr)PSend20453);
    // =. 
    Send PSend20454 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_middle = new_Symbol(L"middle");
    // middle. 
    Send PSend20461 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // <. 
    Send PSend20462 = new_Send((Optr)PSend20461, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20466 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20465 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20466, (Optr)&t_block_return);
    Block PBlock20464 = new_Block_with(empty_Array, empty_Array, PThreadedCode20465, 1, PSend20466);
    // ifTrue:. 
    Send PSend20463 = new_Send((Optr)PSend20462, SMB_ifTrue_, 1, (Optr)PBlock20464);
    // middle. 
    Send PSend20467 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20468 = new_Send((Optr)PSend20467, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20460 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20461, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20462, (Optr)&t_send_ifTrue_, (Optr)PSend20463, (Optr)PBlock20464, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20467, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20468, (Optr)&t_block_return);
    Block PBlock20459 = new_Block_with(empty_Array, empty_Array, PThreadedCode20460, 2, PSend20463, PSend20468);
    // middle. 
    Send PSend20471 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20472 = new_Send((Optr)PSend20471, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20470 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20471, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20472, (Optr)&t_block_return);
    Block PBlock20469 = new_Block_with(empty_Array, empty_Array, PThreadedCode20470, 1, PSend20472);
    // ifTrue:ifFalse:. 
    Send PSend20458 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20459, (Optr)PBlock20469);
    Array PThreadedCode20457 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20458, (Optr)PBlock20459, (Optr)PBlock20469, (Optr)&t_block_return);
    Block PBlock20456 = new_Block_with(empty_Array, empty_Array, PThreadedCode20457, 1, PSend20458);
    // ifTrue:. 
    Send PSend20455 = new_Send((Optr)PSend20454, SMB_ifTrue_, 1, (Optr)PBlock20456);
    // =. 
    Send PSend20473 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_2_Const);
    // middle. 
    Send PSend20477 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20478 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20477);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20479 = new_Send((Optr)PSend20478, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    // printOn:. 
    Send PSend20480 = new_Send((Optr)PSend20479, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20476 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20477, (Optr)&t_send1, (Optr)PSend20478, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20479, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20480, (Optr)&t_block_return);
    Block PBlock20475 = new_Block_with(empty_Array, empty_Array, PThreadedCode20476, 1, PSend20480);
    // ifTrue:. 
    Send PSend20474 = new_Send((Optr)PSend20473, SMB_ifTrue_, 1, (Optr)PBlock20475);
    // =. 
    Send PSend20481 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_3_Const);
    // middle. 
    Send PSend20485 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // nameOfMonth:. 
    Send PSend20486 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20485);
    // printOn:. 
    Send PSend20487 = new_Send((Optr)PSend20486, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20484 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20485, (Optr)&t_send1, (Optr)PSend20486, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20487, (Optr)&t_block_return);
    Block PBlock20483 = new_Block_with(empty_Array, empty_Array, PThreadedCode20484, 1, PSend20487);
    // ifTrue:. 
    Send PSend20482 = new_Send((Optr)PSend20481, SMB_ifTrue_, 1, (Optr)PBlock20483);
    Array PThreadedCode20451 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign20452, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend20453, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20454, (Optr)&t_send_ifTrue_, (Optr)PSend20455, (Optr)PBlock20456, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20473, (Optr)&t_send_ifTrue_, (Optr)PSend20474, (Optr)PBlock20475, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20481, (Optr)&t_send_ifTrue_, (Optr)PSend20482, (Optr)PBlock20483, (Optr)&t_block_return);
    Block PBlock20450 = new_Block_with(empty_Array, empty_Array, PThreadedCode20451, 4, PAssign20452, PSend20455, PSend20474, PSend20482);
    // ifTrue:. 
    Send PSend20449 = new_Send((Optr)PSend20448, SMB_ifTrue_, 1, (Optr)PBlock20450);
    // =. 
    Send PSend20488 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_3_Const);
    // at:. 
    Send PSend20492 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_6_Const);
    // =. 
    Send PSend20493 = new_Send((Optr)PSend20492, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend20497 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // printOn:. 
    Send PSend20498 = new_Send((Optr)PSend20497, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20496 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20497, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20498, (Optr)&t_block_return);
    Block PBlock20495 = new_Block_with(empty_Array, empty_Array, PThreadedCode20496, 1, PSend20498);
    // last. 
    Send PSend20501 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // <. 
    Send PSend20502 = new_Send((Optr)PSend20501, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20506 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9159_Const);
    Array PThreadedCode20505 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send1, (Optr)PSend20506, (Optr)&t_block_return);
    Block PBlock20504 = new_Block_with(empty_Array, empty_Array, PThreadedCode20505, 1, PSend20506);
    // ifTrue:. 
    Send PSend20503 = new_Send((Optr)PSend20502, SMB_ifTrue_, 1, (Optr)PBlock20504);
    // last. 
    Send PSend20507 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // \\. 
    Send PSend20508 = new_Send((Optr)PSend20507, SMB__modulo_, 1, (Optr)int_100_Const);
    // printOn:. 
    Send PSend20509 = new_Send((Optr)PSend20508, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20500 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20501, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20502, (Optr)&t_send_ifTrue_, (Optr)PSend20503, (Optr)PBlock20504, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20507, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20508, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20509, (Optr)&t_block_return);
    Block PBlock20499 = new_Block_with(empty_Array, empty_Array, PThreadedCode20500, 2, PSend20503, PSend20509);
    // ifTrue:ifFalse:. 
    Send PSend20494 = new_Send((Optr)PSend20493, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20495, (Optr)PBlock20499);
    Array PThreadedCode20491 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20492, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20493, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20494, (Optr)PBlock20495, (Optr)PBlock20499, (Optr)&t_block_return);
    Block PBlock20490 = new_Block_with(empty_Array, empty_Array, PThreadedCode20491, 1, PSend20494);
    // ifTrue:. 
    Send PSend20489 = new_Send((Optr)PSend20488, SMB_ifTrue_, 1, (Optr)PBlock20490);
    // <. 
    Send PSend20510 = new_Send((Optr)VAR_i_1_0, SMB__lt_, 1, (Optr)int_3_Const);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend20514 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20515 = new_Send((Optr)PSend20514, SMB__notEquals_, 1, (Optr)int_0_Const);
    // at:. 
    Send PSend20519 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend20520 = new_Send((Optr)PSend20519, SMB_asCharacter, 0);
    // <<. 
    Send PSend20521 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20520);
    Array PThreadedCode20518 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20519, (Optr)&t_send0, (Optr)PSend20520, (Optr)&t_send1, (Optr)PSend20521, (Optr)&t_block_return);
    Block PBlock20517 = new_Block_with(empty_Array, empty_Array, PThreadedCode20518, 1, PSend20521);
    // ifTrue:. 
    Send PSend20516 = new_Send((Optr)PSend20515, SMB_ifTrue_, 1, (Optr)PBlock20517);
    Array PThreadedCode20513 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20514, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20515, (Optr)&t_send_ifTrue_, (Optr)PSend20516, (Optr)PBlock20517, (Optr)&t_block_return);
    Block PBlock20512 = new_Block_with(empty_Array, empty_Array, PThreadedCode20513, 1, PSend20516);
    // ifTrue:. 
    Send PSend20511 = new_Send((Optr)PSend20510, SMB_ifTrue_, 1, (Optr)PBlock20512);
    Array PThreadedCode20426 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign20427, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20428, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20429, (Optr)&t_send_ifTrue_, (Optr)PSend20430, (Optr)PBlock20431, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20448, (Optr)&t_send_ifTrue_, (Optr)PSend20449, (Optr)PBlock20450, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20488, (Optr)&t_send_ifTrue_, (Optr)PSend20489, (Optr)PBlock20490, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20510, (Optr)&t_send_ifTrue_, (Optr)PSend20511, (Optr)PBlock20512, (Optr)&t_method_return);
    Block PBlock20424 = new_Block_with(PArray20425, empty_Array, PThreadedCode20426, 5, PAssign20427, PSend20430, PSend20449, PSend20489, PSend20511);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20522 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_3_Const, (Optr)PBlock20424);
    Array PThreadedCode20409 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign20410, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20412, (Optr)&t_send1, (Optr)PSend20411, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20416, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_send0, (Optr)PSend20419, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20418, (Optr)&t_push_closure, (Optr)PBlock20420, (Optr)&t_send1, (Optr)PSend20417, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock20424, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20522, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20406 = new_Method_with(PArray20407, PArray20408, empty_Array, PThreadedCode20409, 4, PAssign20410, PAssign20416, PSend20522, self);
    
    MethodClosure MC_SMB_printOn_format_ = new_MethodClosure((Method)PMethod20406, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_format_, MC_SMB_printOn_format_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray20524 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    // julianDayNumber:. 
    Send PSend20526 = new_Send((Optr)DateAndTime_classReference, SMB_julianDayNumber_, 1, (Optr)VAR_aJulianDayNumber_0_0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20527 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20526);
    Array PThreadedCode20525 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send1, (Optr)PSend20526, (Optr)&t_send1, (Optr)PSend20527, (Optr)&t_method_return);
    Method PMethod20523 = new_Method_with(PArray20524, empty_Array, empty_Array, PThreadedCode20525, 1, PSend20527);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod20523, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend20530 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode20529 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20530, (Optr)&t_method_return);
    Method PMethod20528 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20529, 1, PSend20530);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod20528, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20532 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend20534 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_midnight, 0);
    Symbol SMB_days_ = new_Symbol(L"days:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // days:. 
    Send PSend20535 = new_Send((Optr)Duration_classReference, SMB_days_, 1, (Optr)int_1_Const);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Super PSuper20536 = new_Super(SMB_starting_duration_, 2, (Optr)PSend20534, (Optr)PSend20535);
    Array PThreadedCode20533 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20534, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20535, (Optr)&t_super2, (Optr)PSuper20536, (Optr)&t_method_return);
    Method PMethod20531 = new_Method_with(PArray20532, empty_Array, empty_Array, PThreadedCode20533, 1, PSuper20536);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20531, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20538 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20540 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20541 = new_Send((Optr)PSend20540, SMB_days, 0);
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    // fromDays:. 
    Send PSend20542 = new_Send((Optr)self, SMB_fromDays_, 1, (Optr)PSend20541);
    Array PThreadedCode20539 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20540, (Optr)&t_send0, (Optr)PSend20541, (Optr)&t_send1, (Optr)PSend20542, (Optr)&t_method_return);
    Method PMethod20537 = new_Method_with(PArray20538, empty_Array, empty_Array, PThreadedCode20539, 1, PSend20542);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20537, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_fromDays_() {
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    Variable VAR_dayCount_0_0 = new_Variable_named(L"dayCount", 0);
    Array PArray20544 = new_Array_with(1, (Optr)VAR_dayCount_0_0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend20546 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20547 = new_Send((Optr)VAR_dayCount_0_0, SMB__plus_, 1, (Optr)PSend20546);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend20548 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend20547);
    Array PThreadedCode20545 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dayCount_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20546, (Optr)&t_send1, (Optr)PSend20547, (Optr)&t_send1, (Optr)PSend20548, (Optr)&t_method_return);
    Method PMethod20543 = new_Method_with(PArray20544, empty_Array, empty_Array, PThreadedCode20545, 1, PSend20548);
    
    MethodClosure MC_SMB_fromDays_ = new_MethodClosure((Method)PMethod20543, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromDays_, MC_SMB_fromDays_);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    // dateAndTimeNow. 
    Send PSend20551 = new_Send((Optr)Time_classReference, SMB_dateAndTimeNow, 0);
    Array PThreadedCode20550 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend20551, (Optr)&t_method_return);
    Method PMethod20549 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20550, 1, PSend20551);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20549, HEADER(Chronology_Date_Class));
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