#include <lib/class/Chronology/Date.h>


Optr layout_Chronology_Date_Class_class;
Optr layout_Chronology_Date;


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Array PThreadedCode20523 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20522 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20523, 1, self);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20522, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20525 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_format_0_1 = new_Variable_named(L"format", 0);
    Array PArray20526 = new_Array_with(1, (Optr)VAR_format_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20531 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend20533 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend20534 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend20535 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend20536 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend20537 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    // add:. 
    Send PSend20538 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20539 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20532 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20533, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20534, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20535, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend20536, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20537, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20538, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20539, (Optr)&t_method_return);
    Block PBlock20530 = new_Block_with(PArray20531, empty_Array, PThreadedCode20532, 7, PSend20533, PSend20534, PSend20535, PSend20536, PSend20537, PSend20538, PSend20539);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20540 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // value:. 
    Send PSend20529 = new_Send((Optr)PBlock20530, SMB_value_, 1, (Optr)PSend20540);
    Assign PAssign20528 = new_Assign((Optr)VAR_format_0_1, (Optr)PSend20529);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20541 = new_Send((Optr)VAR_format_0_1, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend20542 = new_Send((Optr)self, SMB_printOn_format_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend20541);
    Array PThreadedCode20527 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20528, (Optr)&t_push_closure, (Optr)PBlock20530, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20540, (Optr)&t_send1, (Optr)PSend20529, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_format_0_1, (Optr)&t_send0, (Optr)PSend20541, (Optr)&t_send2, (Optr)PSend20542, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20524 = new_Method_with(PArray20525, PArray20526, empty_Array, PThreadedCode20527, 3, PAssign20528, PSend20542, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20524, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20544 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // dayMonthYearDo:. 
    Send PSend20546 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_dayMonthYearDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode20545 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend20546, (Optr)&t_method_return);
    Method PMethod20543 = new_Method_with(PArray20544, empty_Array, empty_Array, PThreadedCode20545, 1, PSend20546);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod20543, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printOn_format_() {
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_formatArray_0_1 = new_Variable_named(L"formatArray", 0);
    Array PArray20548 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_formatArray_0_1);
    Variable VAR_gregorian_0_2 = new_Variable_named(L"gregorian", 0);
    Variable VAR_twoDigits_0_3 = new_Variable_named(L"twoDigits", 0);
    Variable VAR_element_0_4 = new_Variable_named(L"element", 0);
    Variable VAR_monthFormat_0_5 = new_Variable_named(L"monthFormat", 0);
    Array PArray20549 = new_Array_with(4, (Optr)VAR_gregorian_0_2, (Optr)VAR_twoDigits_0_3, (Optr)VAR_element_0_4, (Optr)VAR_monthFormat_0_5);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20554 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend20556 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20555 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_send3, (Optr)PSend20556, (Optr)&t_method_return);
    Block PBlock20553 = new_Block_with(PArray20554, empty_Array, PThreadedCode20555, 1, PSend20556);
    // dayMonthYearDo:. 
    Send PSend20552 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20553);
    Assign PAssign20551 = new_Assign((Optr)VAR_gregorian_0_2, (Optr)PSend20552);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20560 = new_Send((Optr)VAR_formatArray_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_6 = new_SmallInt(6);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // >. 
    Send PSend20559 = new_Send((Optr)PSend20560, SMB__gt_, 1, (Optr)int_6_Const);
    Symbol SMB_and_ = new_Symbol(L"and:");
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:. 
    Send PSend20563 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_7_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend20564 = new_Send((Optr)PSend20563, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode20562 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20563, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20564, (Optr)&t_block_return);
    Block PBlock20561 = new_Block_with(empty_Array, empty_Array, PThreadedCode20562, 1, PSend20564);
    // and:. 
    Send PSend20558 = new_Send((Optr)PSend20559, SMB_and_, 1, (Optr)PBlock20561);
    Assign PAssign20557 = new_Assign((Optr)VAR_twoDigits_0_3, (Optr)PSend20558);
    SmallInt int_3 = new_SmallInt(3);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20566 = new_Array_with(1, (Optr)VAR_i_1_0);
    // at:. 
    Send PSend20569 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)VAR_i_1_0);
    Assign PAssign20568 = new_Assign((Optr)VAR_element_0_4, (Optr)PSend20569);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20570 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20577 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20578 = new_Send((Optr)PSend20577, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9208 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9208_Const = new_Constant((Optr)char_9208);
    // <<. 
    Send PSend20582 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20581 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20582, (Optr)&t_block_return);
    Block PBlock20580 = new_Block_with(empty_Array, empty_Array, PThreadedCode20581, 1, PSend20582);
    // ifTrue:. 
    Send PSend20579 = new_Send((Optr)PSend20578, SMB_ifTrue_, 1, (Optr)PBlock20580);
    // first. 
    Send PSend20583 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20584 = new_Send((Optr)PSend20583, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20576 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20577, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20578, (Optr)&t_send_ifTrue_, (Optr)PSend20579, (Optr)PBlock20580, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20583, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20584, (Optr)&t_block_return);
    Block PBlock20575 = new_Block_with(empty_Array, empty_Array, PThreadedCode20576, 2, PSend20579, PSend20584);
    // first. 
    Send PSend20587 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    // printOn:. 
    Send PSend20588 = new_Send((Optr)PSend20587, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20586 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20587, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20588, (Optr)&t_block_return);
    Block PBlock20585 = new_Block_with(empty_Array, empty_Array, PThreadedCode20586, 1, PSend20588);
    // ifTrue:ifFalse:. 
    Send PSend20574 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20575, (Optr)PBlock20585);
    Array PThreadedCode20573 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20574, (Optr)PBlock20575, (Optr)PBlock20585, (Optr)&t_block_return);
    Block PBlock20572 = new_Block_with(empty_Array, empty_Array, PThreadedCode20573, 1, PSend20574);
    // ifTrue:. 
    Send PSend20571 = new_Send((Optr)PSend20570, SMB_ifTrue_, 1, (Optr)PBlock20572);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend20589 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_2_Const);
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:. 
    Send PSend20594 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_5_Const);
    Assign PAssign20593 = new_Assign((Optr)VAR_monthFormat_0_5, (Optr)PSend20594);
    // =. 
    Send PSend20595 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_middle = new_Symbol(L"middle");
    // middle. 
    Send PSend20602 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // <. 
    Send PSend20603 = new_Send((Optr)PSend20602, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20607 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20606 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20607, (Optr)&t_block_return);
    Block PBlock20605 = new_Block_with(empty_Array, empty_Array, PThreadedCode20606, 1, PSend20607);
    // ifTrue:. 
    Send PSend20604 = new_Send((Optr)PSend20603, SMB_ifTrue_, 1, (Optr)PBlock20605);
    // middle. 
    Send PSend20608 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20609 = new_Send((Optr)PSend20608, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20601 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20602, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20603, (Optr)&t_send_ifTrue_, (Optr)PSend20604, (Optr)PBlock20605, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20608, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20609, (Optr)&t_block_return);
    Block PBlock20600 = new_Block_with(empty_Array, empty_Array, PThreadedCode20601, 2, PSend20604, PSend20609);
    // middle. 
    Send PSend20612 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20613 = new_Send((Optr)PSend20612, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20611 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20612, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20613, (Optr)&t_block_return);
    Block PBlock20610 = new_Block_with(empty_Array, empty_Array, PThreadedCode20611, 1, PSend20613);
    // ifTrue:ifFalse:. 
    Send PSend20599 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20600, (Optr)PBlock20610);
    Array PThreadedCode20598 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20599, (Optr)PBlock20600, (Optr)PBlock20610, (Optr)&t_block_return);
    Block PBlock20597 = new_Block_with(empty_Array, empty_Array, PThreadedCode20598, 1, PSend20599);
    // ifTrue:. 
    Send PSend20596 = new_Send((Optr)PSend20595, SMB_ifTrue_, 1, (Optr)PBlock20597);
    // =. 
    Send PSend20614 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_2_Const);
    // middle. 
    Send PSend20618 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20619 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20618);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20620 = new_Send((Optr)PSend20619, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    // printOn:. 
    Send PSend20621 = new_Send((Optr)PSend20620, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20617 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20618, (Optr)&t_send1, (Optr)PSend20619, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20620, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20621, (Optr)&t_block_return);
    Block PBlock20616 = new_Block_with(empty_Array, empty_Array, PThreadedCode20617, 1, PSend20621);
    // ifTrue:. 
    Send PSend20615 = new_Send((Optr)PSend20614, SMB_ifTrue_, 1, (Optr)PBlock20616);
    // =. 
    Send PSend20622 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_3_Const);
    // middle. 
    Send PSend20626 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // nameOfMonth:. 
    Send PSend20627 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20626);
    // printOn:. 
    Send PSend20628 = new_Send((Optr)PSend20627, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20625 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20626, (Optr)&t_send1, (Optr)PSend20627, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20628, (Optr)&t_block_return);
    Block PBlock20624 = new_Block_with(empty_Array, empty_Array, PThreadedCode20625, 1, PSend20628);
    // ifTrue:. 
    Send PSend20623 = new_Send((Optr)PSend20622, SMB_ifTrue_, 1, (Optr)PBlock20624);
    Array PThreadedCode20592 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign20593, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend20594, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20595, (Optr)&t_send_ifTrue_, (Optr)PSend20596, (Optr)PBlock20597, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20614, (Optr)&t_send_ifTrue_, (Optr)PSend20615, (Optr)PBlock20616, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20622, (Optr)&t_send_ifTrue_, (Optr)PSend20623, (Optr)PBlock20624, (Optr)&t_block_return);
    Block PBlock20591 = new_Block_with(empty_Array, empty_Array, PThreadedCode20592, 4, PAssign20593, PSend20596, PSend20615, PSend20623);
    // ifTrue:. 
    Send PSend20590 = new_Send((Optr)PSend20589, SMB_ifTrue_, 1, (Optr)PBlock20591);
    // =. 
    Send PSend20629 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_3_Const);
    // at:. 
    Send PSend20633 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_6_Const);
    // =. 
    Send PSend20634 = new_Send((Optr)PSend20633, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend20638 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // printOn:. 
    Send PSend20639 = new_Send((Optr)PSend20638, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20637 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20638, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20639, (Optr)&t_block_return);
    Block PBlock20636 = new_Block_with(empty_Array, empty_Array, PThreadedCode20637, 1, PSend20639);
    // last. 
    Send PSend20642 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // <. 
    Send PSend20643 = new_Send((Optr)PSend20642, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20647 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20646 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20647, (Optr)&t_block_return);
    Block PBlock20645 = new_Block_with(empty_Array, empty_Array, PThreadedCode20646, 1, PSend20647);
    // ifTrue:. 
    Send PSend20644 = new_Send((Optr)PSend20643, SMB_ifTrue_, 1, (Optr)PBlock20645);
    // last. 
    Send PSend20648 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // \\. 
    Send PSend20649 = new_Send((Optr)PSend20648, SMB__modulo_, 1, (Optr)int_100_Const);
    // printOn:. 
    Send PSend20650 = new_Send((Optr)PSend20649, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20641 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20642, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20643, (Optr)&t_send_ifTrue_, (Optr)PSend20644, (Optr)PBlock20645, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20648, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20649, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20650, (Optr)&t_block_return);
    Block PBlock20640 = new_Block_with(empty_Array, empty_Array, PThreadedCode20641, 2, PSend20644, PSend20650);
    // ifTrue:ifFalse:. 
    Send PSend20635 = new_Send((Optr)PSend20634, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20636, (Optr)PBlock20640);
    Array PThreadedCode20632 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20633, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20634, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20635, (Optr)PBlock20636, (Optr)PBlock20640, (Optr)&t_block_return);
    Block PBlock20631 = new_Block_with(empty_Array, empty_Array, PThreadedCode20632, 1, PSend20635);
    // ifTrue:. 
    Send PSend20630 = new_Send((Optr)PSend20629, SMB_ifTrue_, 1, (Optr)PBlock20631);
    // <. 
    Send PSend20651 = new_Send((Optr)VAR_i_1_0, SMB__lt_, 1, (Optr)int_3_Const);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend20655 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20656 = new_Send((Optr)PSend20655, SMB__notEquals_, 1, (Optr)int_0_Const);
    // at:. 
    Send PSend20660 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend20661 = new_Send((Optr)PSend20660, SMB_asCharacter, 0);
    // <<. 
    Send PSend20662 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20661);
    Array PThreadedCode20659 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20660, (Optr)&t_send0, (Optr)PSend20661, (Optr)&t_send1, (Optr)PSend20662, (Optr)&t_block_return);
    Block PBlock20658 = new_Block_with(empty_Array, empty_Array, PThreadedCode20659, 1, PSend20662);
    // ifTrue:. 
    Send PSend20657 = new_Send((Optr)PSend20656, SMB_ifTrue_, 1, (Optr)PBlock20658);
    Array PThreadedCode20654 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20655, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20656, (Optr)&t_send_ifTrue_, (Optr)PSend20657, (Optr)PBlock20658, (Optr)&t_block_return);
    Block PBlock20653 = new_Block_with(empty_Array, empty_Array, PThreadedCode20654, 1, PSend20657);
    // ifTrue:. 
    Send PSend20652 = new_Send((Optr)PSend20651, SMB_ifTrue_, 1, (Optr)PBlock20653);
    Array PThreadedCode20567 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign20568, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20569, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20570, (Optr)&t_send_ifTrue_, (Optr)PSend20571, (Optr)PBlock20572, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20589, (Optr)&t_send_ifTrue_, (Optr)PSend20590, (Optr)PBlock20591, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20629, (Optr)&t_send_ifTrue_, (Optr)PSend20630, (Optr)PBlock20631, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20651, (Optr)&t_send_ifTrue_, (Optr)PSend20652, (Optr)PBlock20653, (Optr)&t_method_return);
    Block PBlock20565 = new_Block_with(PArray20566, empty_Array, PThreadedCode20567, 5, PAssign20568, PSend20571, PSend20590, PSend20630, PSend20652);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20663 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_3_Const, (Optr)PBlock20565);
    Array PThreadedCode20550 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign20551, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20553, (Optr)&t_send1, (Optr)PSend20552, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20557, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_send0, (Optr)PSend20560, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20559, (Optr)&t_push_closure, (Optr)PBlock20561, (Optr)&t_send1, (Optr)PSend20558, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock20565, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20663, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20547 = new_Method_with(PArray20548, PArray20549, empty_Array, PThreadedCode20550, 4, PAssign20551, PAssign20557, PSend20663, self);
    
    MethodClosure MC_SMB_printOn_format_ = new_MethodClosure((Method)PMethod20547, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_format_, MC_SMB_printOn_format_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray20665 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    // julianDayNumber:. 
    Send PSend20667 = new_Send((Optr)DateAndTime_classReference, SMB_julianDayNumber_, 1, (Optr)VAR_aJulianDayNumber_0_0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20668 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20667);
    Array PThreadedCode20666 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send1, (Optr)PSend20667, (Optr)&t_send1, (Optr)PSend20668, (Optr)&t_method_return);
    Method PMethod20664 = new_Method_with(PArray20665, empty_Array, empty_Array, PThreadedCode20666, 1, PSend20668);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod20664, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend20671 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode20670 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20671, (Optr)&t_method_return);
    Method PMethod20669 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20670, 1, PSend20671);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod20669, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20673 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend20675 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_midnight, 0);
    Symbol SMB_days_ = new_Symbol(L"days:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // days:. 
    Send PSend20676 = new_Send((Optr)Duration_classReference, SMB_days_, 1, (Optr)int_1_Const);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Super PSuper20677 = new_Super(SMB_starting_duration_, 2, (Optr)PSend20675, (Optr)PSend20676);
    Array PThreadedCode20674 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20675, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20676, (Optr)&t_super2, (Optr)PSuper20677, (Optr)&t_method_return);
    Method PMethod20672 = new_Method_with(PArray20673, empty_Array, empty_Array, PThreadedCode20674, 1, PSuper20677);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20672, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20679 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20681 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20682 = new_Send((Optr)PSend20681, SMB_days, 0);
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    // fromDays:. 
    Send PSend20683 = new_Send((Optr)self, SMB_fromDays_, 1, (Optr)PSend20682);
    Array PThreadedCode20680 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20681, (Optr)&t_send0, (Optr)PSend20682, (Optr)&t_send1, (Optr)PSend20683, (Optr)&t_method_return);
    Method PMethod20678 = new_Method_with(PArray20679, empty_Array, empty_Array, PThreadedCode20680, 1, PSend20683);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20678, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_fromDays_() {
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    Variable VAR_dayCount_0_0 = new_Variable_named(L"dayCount", 0);
    Array PArray20685 = new_Array_with(1, (Optr)VAR_dayCount_0_0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend20687 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20688 = new_Send((Optr)VAR_dayCount_0_0, SMB__plus_, 1, (Optr)PSend20687);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend20689 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend20688);
    Array PThreadedCode20686 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dayCount_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20687, (Optr)&t_send1, (Optr)PSend20688, (Optr)&t_send1, (Optr)PSend20689, (Optr)&t_method_return);
    Method PMethod20684 = new_Method_with(PArray20685, empty_Array, empty_Array, PThreadedCode20686, 1, PSend20689);
    
    MethodClosure MC_SMB_fromDays_ = new_MethodClosure((Method)PMethod20684, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromDays_, MC_SMB_fromDays_);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    // dateAndTimeNow. 
    Send PSend20692 = new_Send((Optr)Time_classReference, SMB_dateAndTimeNow, 0);
    Array PThreadedCode20691 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend20692, (Optr)&t_method_return);
    Method PMethod20690 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20691, 1, PSend20692);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20690, HEADER(Chronology_Date_Class));
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