#include <lib/class/Chronology/Date.h>


Optr layout_Chronology_Date_Class_class;
Optr layout_Chronology_Date;


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Array PThreadedCode20512 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20511 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20512, 1, self);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20511, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20514 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_format_0_1 = new_Variable_named(L"format", 0);
    Array PArray20515 = new_Array_with(1, (Optr)VAR_format_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20520 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend20522 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend20523 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend20524 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4725 = new_Character(L' ');
    Constant char_4725_Const = new_Constant((Optr)char_4725);
    // add:. 
    Send PSend20525 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)char_4725_Const);
    // add:. 
    Send PSend20526 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    // add:. 
    Send PSend20527 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20528 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20521 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20522, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20523, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20524, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4725, (Optr)&t_send1, (Optr)PSend20525, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20526, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20527, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20528, (Optr)&t_method_return);
    Block PBlock20519 = new_Block_with(PArray20520, empty_Array, PThreadedCode20521, 7, PSend20522, PSend20523, PSend20524, PSend20525, PSend20526, PSend20527, PSend20528);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20529 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // value:. 
    Send PSend20518 = new_Send((Optr)PBlock20519, SMB_value_, 1, (Optr)PSend20529);
    Assign PAssign20517 = new_Assign((Optr)VAR_format_0_1, (Optr)PSend20518);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20530 = new_Send((Optr)VAR_format_0_1, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend20531 = new_Send((Optr)self, SMB_printOn_format_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend20530);
    Array PThreadedCode20516 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20517, (Optr)&t_push_closure, (Optr)PBlock20519, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20529, (Optr)&t_send1, (Optr)PSend20518, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_format_0_1, (Optr)&t_send0, (Optr)PSend20530, (Optr)&t_send2, (Optr)PSend20531, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20513 = new_Method_with(PArray20514, PArray20515, empty_Array, PThreadedCode20516, 3, PAssign20517, PSend20531, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20513, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20533 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // dayMonthYearDo:. 
    Send PSend20535 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_dayMonthYearDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode20534 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend20535, (Optr)&t_method_return);
    Method PMethod20532 = new_Method_with(PArray20533, empty_Array, empty_Array, PThreadedCode20534, 1, PSend20535);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod20532, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printOn_format_() {
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_formatArray_0_1 = new_Variable_named(L"formatArray", 0);
    Array PArray20537 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_formatArray_0_1);
    Variable VAR_gregorian_0_2 = new_Variable_named(L"gregorian", 0);
    Variable VAR_twoDigits_0_3 = new_Variable_named(L"twoDigits", 0);
    Variable VAR_element_0_4 = new_Variable_named(L"element", 0);
    Variable VAR_monthFormat_0_5 = new_Variable_named(L"monthFormat", 0);
    Array PArray20538 = new_Array_with(4, (Optr)VAR_gregorian_0_2, (Optr)VAR_twoDigits_0_3, (Optr)VAR_element_0_4, (Optr)VAR_monthFormat_0_5);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20543 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend20545 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20544 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_send3, (Optr)PSend20545, (Optr)&t_method_return);
    Block PBlock20542 = new_Block_with(PArray20543, empty_Array, PThreadedCode20544, 1, PSend20545);
    // dayMonthYearDo:. 
    Send PSend20541 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20542);
    Assign PAssign20540 = new_Assign((Optr)VAR_gregorian_0_2, (Optr)PSend20541);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20549 = new_Send((Optr)VAR_formatArray_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_6 = new_SmallInt(6);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // >. 
    Send PSend20548 = new_Send((Optr)PSend20549, SMB__gt_, 1, (Optr)int_6_Const);
    Symbol SMB_and_ = new_Symbol(L"and:");
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:. 
    Send PSend20552 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_7_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend20553 = new_Send((Optr)PSend20552, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode20551 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20552, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20553, (Optr)&t_block_return);
    Block PBlock20550 = new_Block_with(empty_Array, empty_Array, PThreadedCode20551, 1, PSend20553);
    // and:. 
    Send PSend20547 = new_Send((Optr)PSend20548, SMB_and_, 1, (Optr)PBlock20550);
    Assign PAssign20546 = new_Assign((Optr)VAR_twoDigits_0_3, (Optr)PSend20547);
    SmallInt int_3 = new_SmallInt(3);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20555 = new_Array_with(1, (Optr)VAR_i_1_0);
    // at:. 
    Send PSend20558 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)VAR_i_1_0);
    Assign PAssign20557 = new_Assign((Optr)VAR_element_0_4, (Optr)PSend20558);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20559 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20566 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20567 = new_Send((Optr)PSend20566, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9197 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    // <<. 
    Send PSend20571 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20570 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20571, (Optr)&t_block_return);
    Block PBlock20569 = new_Block_with(empty_Array, empty_Array, PThreadedCode20570, 1, PSend20571);
    // ifTrue:. 
    Send PSend20568 = new_Send((Optr)PSend20567, SMB_ifTrue_, 1, (Optr)PBlock20569);
    // first. 
    Send PSend20572 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20573 = new_Send((Optr)PSend20572, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20565 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20566, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20567, (Optr)&t_send_ifTrue_, (Optr)PSend20568, (Optr)PBlock20569, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20572, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20573, (Optr)&t_block_return);
    Block PBlock20564 = new_Block_with(empty_Array, empty_Array, PThreadedCode20565, 2, PSend20568, PSend20573);
    // first. 
    Send PSend20576 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    // printOn:. 
    Send PSend20577 = new_Send((Optr)PSend20576, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20575 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20576, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20577, (Optr)&t_block_return);
    Block PBlock20574 = new_Block_with(empty_Array, empty_Array, PThreadedCode20575, 1, PSend20577);
    // ifTrue:ifFalse:. 
    Send PSend20563 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20564, (Optr)PBlock20574);
    Array PThreadedCode20562 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20563, (Optr)PBlock20564, (Optr)PBlock20574, (Optr)&t_block_return);
    Block PBlock20561 = new_Block_with(empty_Array, empty_Array, PThreadedCode20562, 1, PSend20563);
    // ifTrue:. 
    Send PSend20560 = new_Send((Optr)PSend20559, SMB_ifTrue_, 1, (Optr)PBlock20561);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend20578 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_2_Const);
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:. 
    Send PSend20583 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_5_Const);
    Assign PAssign20582 = new_Assign((Optr)VAR_monthFormat_0_5, (Optr)PSend20583);
    // =. 
    Send PSend20584 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_middle = new_Symbol(L"middle");
    // middle. 
    Send PSend20591 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // <. 
    Send PSend20592 = new_Send((Optr)PSend20591, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20596 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20595 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20596, (Optr)&t_block_return);
    Block PBlock20594 = new_Block_with(empty_Array, empty_Array, PThreadedCode20595, 1, PSend20596);
    // ifTrue:. 
    Send PSend20593 = new_Send((Optr)PSend20592, SMB_ifTrue_, 1, (Optr)PBlock20594);
    // middle. 
    Send PSend20597 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20598 = new_Send((Optr)PSend20597, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20590 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20591, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20592, (Optr)&t_send_ifTrue_, (Optr)PSend20593, (Optr)PBlock20594, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20597, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20598, (Optr)&t_block_return);
    Block PBlock20589 = new_Block_with(empty_Array, empty_Array, PThreadedCode20590, 2, PSend20593, PSend20598);
    // middle. 
    Send PSend20601 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20602 = new_Send((Optr)PSend20601, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20600 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20601, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20602, (Optr)&t_block_return);
    Block PBlock20599 = new_Block_with(empty_Array, empty_Array, PThreadedCode20600, 1, PSend20602);
    // ifTrue:ifFalse:. 
    Send PSend20588 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20589, (Optr)PBlock20599);
    Array PThreadedCode20587 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20588, (Optr)PBlock20589, (Optr)PBlock20599, (Optr)&t_block_return);
    Block PBlock20586 = new_Block_with(empty_Array, empty_Array, PThreadedCode20587, 1, PSend20588);
    // ifTrue:. 
    Send PSend20585 = new_Send((Optr)PSend20584, SMB_ifTrue_, 1, (Optr)PBlock20586);
    // =. 
    Send PSend20603 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_2_Const);
    // middle. 
    Send PSend20607 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20608 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20607);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20609 = new_Send((Optr)PSend20608, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    // printOn:. 
    Send PSend20610 = new_Send((Optr)PSend20609, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20606 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20607, (Optr)&t_send1, (Optr)PSend20608, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20609, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20610, (Optr)&t_block_return);
    Block PBlock20605 = new_Block_with(empty_Array, empty_Array, PThreadedCode20606, 1, PSend20610);
    // ifTrue:. 
    Send PSend20604 = new_Send((Optr)PSend20603, SMB_ifTrue_, 1, (Optr)PBlock20605);
    // =. 
    Send PSend20611 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_3_Const);
    // middle. 
    Send PSend20615 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // nameOfMonth:. 
    Send PSend20616 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20615);
    // printOn:. 
    Send PSend20617 = new_Send((Optr)PSend20616, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20614 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20615, (Optr)&t_send1, (Optr)PSend20616, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20617, (Optr)&t_block_return);
    Block PBlock20613 = new_Block_with(empty_Array, empty_Array, PThreadedCode20614, 1, PSend20617);
    // ifTrue:. 
    Send PSend20612 = new_Send((Optr)PSend20611, SMB_ifTrue_, 1, (Optr)PBlock20613);
    Array PThreadedCode20581 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign20582, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend20583, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20584, (Optr)&t_send_ifTrue_, (Optr)PSend20585, (Optr)PBlock20586, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20603, (Optr)&t_send_ifTrue_, (Optr)PSend20604, (Optr)PBlock20605, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20611, (Optr)&t_send_ifTrue_, (Optr)PSend20612, (Optr)PBlock20613, (Optr)&t_block_return);
    Block PBlock20580 = new_Block_with(empty_Array, empty_Array, PThreadedCode20581, 4, PAssign20582, PSend20585, PSend20604, PSend20612);
    // ifTrue:. 
    Send PSend20579 = new_Send((Optr)PSend20578, SMB_ifTrue_, 1, (Optr)PBlock20580);
    // =. 
    Send PSend20618 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_3_Const);
    // at:. 
    Send PSend20622 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_6_Const);
    // =. 
    Send PSend20623 = new_Send((Optr)PSend20622, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend20627 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // printOn:. 
    Send PSend20628 = new_Send((Optr)PSend20627, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20626 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20627, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20628, (Optr)&t_block_return);
    Block PBlock20625 = new_Block_with(empty_Array, empty_Array, PThreadedCode20626, 1, PSend20628);
    // last. 
    Send PSend20631 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // <. 
    Send PSend20632 = new_Send((Optr)PSend20631, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20636 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20635 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20636, (Optr)&t_block_return);
    Block PBlock20634 = new_Block_with(empty_Array, empty_Array, PThreadedCode20635, 1, PSend20636);
    // ifTrue:. 
    Send PSend20633 = new_Send((Optr)PSend20632, SMB_ifTrue_, 1, (Optr)PBlock20634);
    // last. 
    Send PSend20637 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // \\. 
    Send PSend20638 = new_Send((Optr)PSend20637, SMB__modulo_, 1, (Optr)int_100_Const);
    // printOn:. 
    Send PSend20639 = new_Send((Optr)PSend20638, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20630 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20631, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20632, (Optr)&t_send_ifTrue_, (Optr)PSend20633, (Optr)PBlock20634, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20637, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20638, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20639, (Optr)&t_block_return);
    Block PBlock20629 = new_Block_with(empty_Array, empty_Array, PThreadedCode20630, 2, PSend20633, PSend20639);
    // ifTrue:ifFalse:. 
    Send PSend20624 = new_Send((Optr)PSend20623, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20625, (Optr)PBlock20629);
    Array PThreadedCode20621 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20622, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20623, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20624, (Optr)PBlock20625, (Optr)PBlock20629, (Optr)&t_block_return);
    Block PBlock20620 = new_Block_with(empty_Array, empty_Array, PThreadedCode20621, 1, PSend20624);
    // ifTrue:. 
    Send PSend20619 = new_Send((Optr)PSend20618, SMB_ifTrue_, 1, (Optr)PBlock20620);
    // <. 
    Send PSend20640 = new_Send((Optr)VAR_i_1_0, SMB__lt_, 1, (Optr)int_3_Const);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend20644 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20645 = new_Send((Optr)PSend20644, SMB__notEquals_, 1, (Optr)int_0_Const);
    // at:. 
    Send PSend20649 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend20650 = new_Send((Optr)PSend20649, SMB_asCharacter, 0);
    // <<. 
    Send PSend20651 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20650);
    Array PThreadedCode20648 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20649, (Optr)&t_send0, (Optr)PSend20650, (Optr)&t_send1, (Optr)PSend20651, (Optr)&t_block_return);
    Block PBlock20647 = new_Block_with(empty_Array, empty_Array, PThreadedCode20648, 1, PSend20651);
    // ifTrue:. 
    Send PSend20646 = new_Send((Optr)PSend20645, SMB_ifTrue_, 1, (Optr)PBlock20647);
    Array PThreadedCode20643 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20644, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20645, (Optr)&t_send_ifTrue_, (Optr)PSend20646, (Optr)PBlock20647, (Optr)&t_block_return);
    Block PBlock20642 = new_Block_with(empty_Array, empty_Array, PThreadedCode20643, 1, PSend20646);
    // ifTrue:. 
    Send PSend20641 = new_Send((Optr)PSend20640, SMB_ifTrue_, 1, (Optr)PBlock20642);
    Array PThreadedCode20556 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign20557, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20558, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20559, (Optr)&t_send_ifTrue_, (Optr)PSend20560, (Optr)PBlock20561, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20578, (Optr)&t_send_ifTrue_, (Optr)PSend20579, (Optr)PBlock20580, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20618, (Optr)&t_send_ifTrue_, (Optr)PSend20619, (Optr)PBlock20620, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20640, (Optr)&t_send_ifTrue_, (Optr)PSend20641, (Optr)PBlock20642, (Optr)&t_method_return);
    Block PBlock20554 = new_Block_with(PArray20555, empty_Array, PThreadedCode20556, 5, PAssign20557, PSend20560, PSend20579, PSend20619, PSend20641);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20652 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_3_Const, (Optr)PBlock20554);
    Array PThreadedCode20539 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign20540, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20542, (Optr)&t_send1, (Optr)PSend20541, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20546, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_send0, (Optr)PSend20549, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20548, (Optr)&t_push_closure, (Optr)PBlock20550, (Optr)&t_send1, (Optr)PSend20547, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock20554, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20652, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20536 = new_Method_with(PArray20537, PArray20538, empty_Array, PThreadedCode20539, 4, PAssign20540, PAssign20546, PSend20652, self);
    
    MethodClosure MC_SMB_printOn_format_ = new_MethodClosure((Method)PMethod20536, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_format_, MC_SMB_printOn_format_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray20654 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    // julianDayNumber:. 
    Send PSend20656 = new_Send((Optr)DateAndTime_classReference, SMB_julianDayNumber_, 1, (Optr)VAR_aJulianDayNumber_0_0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20657 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20656);
    Array PThreadedCode20655 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send1, (Optr)PSend20656, (Optr)&t_send1, (Optr)PSend20657, (Optr)&t_method_return);
    Method PMethod20653 = new_Method_with(PArray20654, empty_Array, empty_Array, PThreadedCode20655, 1, PSend20657);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod20653, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend20660 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode20659 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20660, (Optr)&t_method_return);
    Method PMethod20658 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20659, 1, PSend20660);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod20658, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20662 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend20664 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_midnight, 0);
    Symbol SMB_days_ = new_Symbol(L"days:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // days:. 
    Send PSend20665 = new_Send((Optr)Duration_classReference, SMB_days_, 1, (Optr)int_1_Const);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Super PSuper20666 = new_Super(SMB_starting_duration_, 2, (Optr)PSend20664, (Optr)PSend20665);
    Array PThreadedCode20663 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20664, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20665, (Optr)&t_super2, (Optr)PSuper20666, (Optr)&t_method_return);
    Method PMethod20661 = new_Method_with(PArray20662, empty_Array, empty_Array, PThreadedCode20663, 1, PSuper20666);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20661, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20668 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20670 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20671 = new_Send((Optr)PSend20670, SMB_days, 0);
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    // fromDays:. 
    Send PSend20672 = new_Send((Optr)self, SMB_fromDays_, 1, (Optr)PSend20671);
    Array PThreadedCode20669 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20670, (Optr)&t_send0, (Optr)PSend20671, (Optr)&t_send1, (Optr)PSend20672, (Optr)&t_method_return);
    Method PMethod20667 = new_Method_with(PArray20668, empty_Array, empty_Array, PThreadedCode20669, 1, PSend20672);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20667, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_fromDays_() {
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    Variable VAR_dayCount_0_0 = new_Variable_named(L"dayCount", 0);
    Array PArray20674 = new_Array_with(1, (Optr)VAR_dayCount_0_0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend20676 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20677 = new_Send((Optr)VAR_dayCount_0_0, SMB__plus_, 1, (Optr)PSend20676);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend20678 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend20677);
    Array PThreadedCode20675 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dayCount_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20676, (Optr)&t_send1, (Optr)PSend20677, (Optr)&t_send1, (Optr)PSend20678, (Optr)&t_method_return);
    Method PMethod20673 = new_Method_with(PArray20674, empty_Array, empty_Array, PThreadedCode20675, 1, PSend20678);
    
    MethodClosure MC_SMB_fromDays_ = new_MethodClosure((Method)PMethod20673, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromDays_, MC_SMB_fromDays_);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    // dateAndTimeNow. 
    Send PSend20681 = new_Send((Optr)Time_classReference, SMB_dateAndTimeNow, 0);
    Array PThreadedCode20680 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend20681, (Optr)&t_method_return);
    Method PMethod20679 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20680, 1, PSend20681);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20679, HEADER(Chronology_Date_Class));
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