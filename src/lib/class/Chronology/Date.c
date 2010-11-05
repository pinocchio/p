#include <lib/class/Chronology/Date.h>


Optr layout_Chronology_Date_Class_class;
Optr layout_Chronology_Date;


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Array PThreadedCode20548 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20547 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20548, 1, self);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20547, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20550 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_format_0_1 = new_Variable_named(L"format", 0);
    Array PArray20551 = new_Array_with(1, (Optr)VAR_format_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20556 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend20558 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend20559 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend20560 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4725 = new_Character(L' ');
    Constant char_4725_Const = new_Constant((Optr)char_4725);
    // add:. 
    Send PSend20561 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)char_4725_Const);
    // add:. 
    Send PSend20562 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    // add:. 
    Send PSend20563 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20564 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20557 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20558, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20559, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20560, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4725, (Optr)&t_send1, (Optr)PSend20561, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20562, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20563, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20564, (Optr)&t_method_return);
    Block PBlock20555 = new_Block_with(PArray20556, empty_Array, PThreadedCode20557, 7, PSend20558, PSend20559, PSend20560, PSend20561, PSend20562, PSend20563, PSend20564);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20565 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // value:. 
    Send PSend20554 = new_Send((Optr)PBlock20555, SMB_value_, 1, (Optr)PSend20565);
    Assign PAssign20553 = new_Assign((Optr)VAR_format_0_1, (Optr)PSend20554);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20566 = new_Send((Optr)VAR_format_0_1, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend20567 = new_Send((Optr)self, SMB_printOn_format_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend20566);
    Array PThreadedCode20552 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20553, (Optr)&t_push_closure, (Optr)PBlock20555, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20565, (Optr)&t_send1, (Optr)PSend20554, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_format_0_1, (Optr)&t_send0, (Optr)PSend20566, (Optr)&t_send2, (Optr)PSend20567, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20549 = new_Method_with(PArray20550, PArray20551, empty_Array, PThreadedCode20552, 3, PAssign20553, PSend20567, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20549, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20569 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // dayMonthYearDo:. 
    Send PSend20571 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_dayMonthYearDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode20570 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend20571, (Optr)&t_method_return);
    Method PMethod20568 = new_Method_with(PArray20569, empty_Array, empty_Array, PThreadedCode20570, 1, PSend20571);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod20568, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printOn_format_() {
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_formatArray_0_1 = new_Variable_named(L"formatArray", 0);
    Array PArray20573 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_formatArray_0_1);
    Variable VAR_gregorian_0_2 = new_Variable_named(L"gregorian", 0);
    Variable VAR_twoDigits_0_3 = new_Variable_named(L"twoDigits", 0);
    Variable VAR_element_0_4 = new_Variable_named(L"element", 0);
    Variable VAR_monthFormat_0_5 = new_Variable_named(L"monthFormat", 0);
    Array PArray20574 = new_Array_with(4, (Optr)VAR_gregorian_0_2, (Optr)VAR_twoDigits_0_3, (Optr)VAR_element_0_4, (Optr)VAR_monthFormat_0_5);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20579 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend20581 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20580 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_send3, (Optr)PSend20581, (Optr)&t_method_return);
    Block PBlock20578 = new_Block_with(PArray20579, empty_Array, PThreadedCode20580, 1, PSend20581);
    // dayMonthYearDo:. 
    Send PSend20577 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20578);
    Assign PAssign20576 = new_Assign((Optr)VAR_gregorian_0_2, (Optr)PSend20577);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20585 = new_Send((Optr)VAR_formatArray_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_6 = new_SmallInt(6);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // >. 
    Send PSend20584 = new_Send((Optr)PSend20585, SMB__gt_, 1, (Optr)int_6_Const);
    Symbol SMB_and_ = new_Symbol(L"and:");
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:. 
    Send PSend20588 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_7_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend20589 = new_Send((Optr)PSend20588, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode20587 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20588, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20589, (Optr)&t_block_return);
    Block PBlock20586 = new_Block_with(empty_Array, empty_Array, PThreadedCode20587, 1, PSend20589);
    // and:. 
    Send PSend20583 = new_Send((Optr)PSend20584, SMB_and_, 1, (Optr)PBlock20586);
    Assign PAssign20582 = new_Assign((Optr)VAR_twoDigits_0_3, (Optr)PSend20583);
    SmallInt int_3 = new_SmallInt(3);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20591 = new_Array_with(1, (Optr)VAR_i_1_0);
    // at:. 
    Send PSend20594 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)VAR_i_1_0);
    Assign PAssign20593 = new_Assign((Optr)VAR_element_0_4, (Optr)PSend20594);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20595 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20602 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20603 = new_Send((Optr)PSend20602, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9197 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    // <<. 
    Send PSend20607 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20606 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20607, (Optr)&t_block_return);
    Block PBlock20605 = new_Block_with(empty_Array, empty_Array, PThreadedCode20606, 1, PSend20607);
    // ifTrue:. 
    Send PSend20604 = new_Send((Optr)PSend20603, SMB_ifTrue_, 1, (Optr)PBlock20605);
    // first. 
    Send PSend20608 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20609 = new_Send((Optr)PSend20608, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20601 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20602, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20603, (Optr)&t_send_ifTrue_, (Optr)PSend20604, (Optr)PBlock20605, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20608, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20609, (Optr)&t_block_return);
    Block PBlock20600 = new_Block_with(empty_Array, empty_Array, PThreadedCode20601, 2, PSend20604, PSend20609);
    // first. 
    Send PSend20612 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
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
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend20614 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_2_Const);
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:. 
    Send PSend20619 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_5_Const);
    Assign PAssign20618 = new_Assign((Optr)VAR_monthFormat_0_5, (Optr)PSend20619);
    // =. 
    Send PSend20620 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_middle = new_Symbol(L"middle");
    // middle. 
    Send PSend20627 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // <. 
    Send PSend20628 = new_Send((Optr)PSend20627, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20632 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20631 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20632, (Optr)&t_block_return);
    Block PBlock20630 = new_Block_with(empty_Array, empty_Array, PThreadedCode20631, 1, PSend20632);
    // ifTrue:. 
    Send PSend20629 = new_Send((Optr)PSend20628, SMB_ifTrue_, 1, (Optr)PBlock20630);
    // middle. 
    Send PSend20633 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20634 = new_Send((Optr)PSend20633, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20626 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20627, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20628, (Optr)&t_send_ifTrue_, (Optr)PSend20629, (Optr)PBlock20630, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20633, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20634, (Optr)&t_block_return);
    Block PBlock20625 = new_Block_with(empty_Array, empty_Array, PThreadedCode20626, 2, PSend20629, PSend20634);
    // middle. 
    Send PSend20637 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20638 = new_Send((Optr)PSend20637, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20636 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20637, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20638, (Optr)&t_block_return);
    Block PBlock20635 = new_Block_with(empty_Array, empty_Array, PThreadedCode20636, 1, PSend20638);
    // ifTrue:ifFalse:. 
    Send PSend20624 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20625, (Optr)PBlock20635);
    Array PThreadedCode20623 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20624, (Optr)PBlock20625, (Optr)PBlock20635, (Optr)&t_block_return);
    Block PBlock20622 = new_Block_with(empty_Array, empty_Array, PThreadedCode20623, 1, PSend20624);
    // ifTrue:. 
    Send PSend20621 = new_Send((Optr)PSend20620, SMB_ifTrue_, 1, (Optr)PBlock20622);
    // =. 
    Send PSend20639 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_2_Const);
    // middle. 
    Send PSend20643 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20644 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20643);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20645 = new_Send((Optr)PSend20644, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    // printOn:. 
    Send PSend20646 = new_Send((Optr)PSend20645, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20642 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20643, (Optr)&t_send1, (Optr)PSend20644, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20645, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20646, (Optr)&t_block_return);
    Block PBlock20641 = new_Block_with(empty_Array, empty_Array, PThreadedCode20642, 1, PSend20646);
    // ifTrue:. 
    Send PSend20640 = new_Send((Optr)PSend20639, SMB_ifTrue_, 1, (Optr)PBlock20641);
    // =. 
    Send PSend20647 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_3_Const);
    // middle. 
    Send PSend20651 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // nameOfMonth:. 
    Send PSend20652 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20651);
    // printOn:. 
    Send PSend20653 = new_Send((Optr)PSend20652, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20650 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20651, (Optr)&t_send1, (Optr)PSend20652, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20653, (Optr)&t_block_return);
    Block PBlock20649 = new_Block_with(empty_Array, empty_Array, PThreadedCode20650, 1, PSend20653);
    // ifTrue:. 
    Send PSend20648 = new_Send((Optr)PSend20647, SMB_ifTrue_, 1, (Optr)PBlock20649);
    Array PThreadedCode20617 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign20618, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend20619, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20620, (Optr)&t_send_ifTrue_, (Optr)PSend20621, (Optr)PBlock20622, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20639, (Optr)&t_send_ifTrue_, (Optr)PSend20640, (Optr)PBlock20641, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20647, (Optr)&t_send_ifTrue_, (Optr)PSend20648, (Optr)PBlock20649, (Optr)&t_block_return);
    Block PBlock20616 = new_Block_with(empty_Array, empty_Array, PThreadedCode20617, 4, PAssign20618, PSend20621, PSend20640, PSend20648);
    // ifTrue:. 
    Send PSend20615 = new_Send((Optr)PSend20614, SMB_ifTrue_, 1, (Optr)PBlock20616);
    // =. 
    Send PSend20654 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_3_Const);
    // at:. 
    Send PSend20658 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_6_Const);
    // =. 
    Send PSend20659 = new_Send((Optr)PSend20658, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend20663 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // printOn:. 
    Send PSend20664 = new_Send((Optr)PSend20663, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20662 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20663, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20664, (Optr)&t_block_return);
    Block PBlock20661 = new_Block_with(empty_Array, empty_Array, PThreadedCode20662, 1, PSend20664);
    // last. 
    Send PSend20667 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // <. 
    Send PSend20668 = new_Send((Optr)PSend20667, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20672 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20671 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20672, (Optr)&t_block_return);
    Block PBlock20670 = new_Block_with(empty_Array, empty_Array, PThreadedCode20671, 1, PSend20672);
    // ifTrue:. 
    Send PSend20669 = new_Send((Optr)PSend20668, SMB_ifTrue_, 1, (Optr)PBlock20670);
    // last. 
    Send PSend20673 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // \\. 
    Send PSend20674 = new_Send((Optr)PSend20673, SMB__modulo_, 1, (Optr)int_100_Const);
    // printOn:. 
    Send PSend20675 = new_Send((Optr)PSend20674, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20666 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20667, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20668, (Optr)&t_send_ifTrue_, (Optr)PSend20669, (Optr)PBlock20670, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20673, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20674, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20675, (Optr)&t_block_return);
    Block PBlock20665 = new_Block_with(empty_Array, empty_Array, PThreadedCode20666, 2, PSend20669, PSend20675);
    // ifTrue:ifFalse:. 
    Send PSend20660 = new_Send((Optr)PSend20659, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20661, (Optr)PBlock20665);
    Array PThreadedCode20657 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20658, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20659, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20660, (Optr)PBlock20661, (Optr)PBlock20665, (Optr)&t_block_return);
    Block PBlock20656 = new_Block_with(empty_Array, empty_Array, PThreadedCode20657, 1, PSend20660);
    // ifTrue:. 
    Send PSend20655 = new_Send((Optr)PSend20654, SMB_ifTrue_, 1, (Optr)PBlock20656);
    // <. 
    Send PSend20676 = new_Send((Optr)VAR_i_1_0, SMB__lt_, 1, (Optr)int_3_Const);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend20680 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20681 = new_Send((Optr)PSend20680, SMB__notEquals_, 1, (Optr)int_0_Const);
    // at:. 
    Send PSend20685 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend20686 = new_Send((Optr)PSend20685, SMB_asCharacter, 0);
    // <<. 
    Send PSend20687 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20686);
    Array PThreadedCode20684 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20685, (Optr)&t_send0, (Optr)PSend20686, (Optr)&t_send1, (Optr)PSend20687, (Optr)&t_block_return);
    Block PBlock20683 = new_Block_with(empty_Array, empty_Array, PThreadedCode20684, 1, PSend20687);
    // ifTrue:. 
    Send PSend20682 = new_Send((Optr)PSend20681, SMB_ifTrue_, 1, (Optr)PBlock20683);
    Array PThreadedCode20679 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20680, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20681, (Optr)&t_send_ifTrue_, (Optr)PSend20682, (Optr)PBlock20683, (Optr)&t_block_return);
    Block PBlock20678 = new_Block_with(empty_Array, empty_Array, PThreadedCode20679, 1, PSend20682);
    // ifTrue:. 
    Send PSend20677 = new_Send((Optr)PSend20676, SMB_ifTrue_, 1, (Optr)PBlock20678);
    Array PThreadedCode20592 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign20593, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20594, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20595, (Optr)&t_send_ifTrue_, (Optr)PSend20596, (Optr)PBlock20597, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20614, (Optr)&t_send_ifTrue_, (Optr)PSend20615, (Optr)PBlock20616, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20654, (Optr)&t_send_ifTrue_, (Optr)PSend20655, (Optr)PBlock20656, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20676, (Optr)&t_send_ifTrue_, (Optr)PSend20677, (Optr)PBlock20678, (Optr)&t_method_return);
    Block PBlock20590 = new_Block_with(PArray20591, empty_Array, PThreadedCode20592, 5, PAssign20593, PSend20596, PSend20615, PSend20655, PSend20677);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20688 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_3_Const, (Optr)PBlock20590);
    Array PThreadedCode20575 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign20576, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20578, (Optr)&t_send1, (Optr)PSend20577, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20582, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_send0, (Optr)PSend20585, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20584, (Optr)&t_push_closure, (Optr)PBlock20586, (Optr)&t_send1, (Optr)PSend20583, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock20590, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20688, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20572 = new_Method_with(PArray20573, PArray20574, empty_Array, PThreadedCode20575, 4, PAssign20576, PAssign20582, PSend20688, self);
    
    MethodClosure MC_SMB_printOn_format_ = new_MethodClosure((Method)PMethod20572, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_format_, MC_SMB_printOn_format_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray20690 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    // julianDayNumber:. 
    Send PSend20692 = new_Send((Optr)DateAndTime_classReference, SMB_julianDayNumber_, 1, (Optr)VAR_aJulianDayNumber_0_0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20693 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20692);
    Array PThreadedCode20691 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send1, (Optr)PSend20692, (Optr)&t_send1, (Optr)PSend20693, (Optr)&t_method_return);
    Method PMethod20689 = new_Method_with(PArray20690, empty_Array, empty_Array, PThreadedCode20691, 1, PSend20693);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod20689, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend20696 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode20695 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20696, (Optr)&t_method_return);
    Method PMethod20694 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20695, 1, PSend20696);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod20694, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20698 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend20700 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_midnight, 0);
    Symbol SMB_days_ = new_Symbol(L"days:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // days:. 
    Send PSend20701 = new_Send((Optr)Duration_classReference, SMB_days_, 1, (Optr)int_1_Const);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Super PSuper20702 = new_Super(SMB_starting_duration_, 2, (Optr)PSend20700, (Optr)PSend20701);
    Array PThreadedCode20699 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20700, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20701, (Optr)&t_super2, (Optr)PSuper20702, (Optr)&t_method_return);
    Method PMethod20697 = new_Method_with(PArray20698, empty_Array, empty_Array, PThreadedCode20699, 1, PSuper20702);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20697, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20704 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20706 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20707 = new_Send((Optr)PSend20706, SMB_days, 0);
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    // fromDays:. 
    Send PSend20708 = new_Send((Optr)self, SMB_fromDays_, 1, (Optr)PSend20707);
    Array PThreadedCode20705 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20706, (Optr)&t_send0, (Optr)PSend20707, (Optr)&t_send1, (Optr)PSend20708, (Optr)&t_method_return);
    Method PMethod20703 = new_Method_with(PArray20704, empty_Array, empty_Array, PThreadedCode20705, 1, PSend20708);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20703, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_fromDays_() {
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    Variable VAR_dayCount_0_0 = new_Variable_named(L"dayCount", 0);
    Array PArray20710 = new_Array_with(1, (Optr)VAR_dayCount_0_0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend20712 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20713 = new_Send((Optr)VAR_dayCount_0_0, SMB__plus_, 1, (Optr)PSend20712);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend20714 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend20713);
    Array PThreadedCode20711 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dayCount_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20712, (Optr)&t_send1, (Optr)PSend20713, (Optr)&t_send1, (Optr)PSend20714, (Optr)&t_method_return);
    Method PMethod20709 = new_Method_with(PArray20710, empty_Array, empty_Array, PThreadedCode20711, 1, PSend20714);
    
    MethodClosure MC_SMB_fromDays_ = new_MethodClosure((Method)PMethod20709, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromDays_, MC_SMB_fromDays_);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    // dateAndTimeNow. 
    Send PSend20717 = new_Send((Optr)Time_classReference, SMB_dateAndTimeNow, 0);
    Array PThreadedCode20716 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend20717, (Optr)&t_method_return);
    Method PMethod20715 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20716, 1, PSend20717);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20715, HEADER(Chronology_Date_Class));
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