#include <lib/class/Chronology/Date.h>


Optr layout_Chronology_Date_Class_class;
Optr layout_Chronology_Date;


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Array PThreadedCode20712 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20711 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20712, 1, self);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20711, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20714 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_format_0_1 = new_Variable_named(L"format", 0);
    Array PArray20715 = new_Array_with(1, (Optr)VAR_format_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20720 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend20722 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend20723 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend20724 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend20725 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend20726 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    // add:. 
    Send PSend20727 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20728 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20721 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20722, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20723, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20724, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend20725, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20726, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20727, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20728, (Optr)&t_method_return);
    Block PBlock20719 = new_Block_with(PArray20720, empty_Array, PThreadedCode20721, 7, PSend20722, PSend20723, PSend20724, PSend20725, PSend20726, PSend20727, PSend20728);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20729 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // value:. 
    Send PSend20718 = new_Send((Optr)PBlock20719, SMB_value_, 1, (Optr)PSend20729);
    Assign PAssign20717 = new_Assign((Optr)VAR_format_0_1, (Optr)PSend20718);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20730 = new_Send((Optr)VAR_format_0_1, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend20731 = new_Send((Optr)self, SMB_printOn_format_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend20730);
    Array PThreadedCode20716 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20717, (Optr)&t_push_closure, (Optr)PBlock20719, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20729, (Optr)&t_send1, (Optr)PSend20718, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_format_0_1, (Optr)&t_send0, (Optr)PSend20730, (Optr)&t_send2, (Optr)PSend20731, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20713 = new_Method_with(PArray20714, PArray20715, empty_Array, PThreadedCode20716, 3, PAssign20717, PSend20731, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20713, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20733 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // dayMonthYearDo:. 
    Send PSend20735 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_dayMonthYearDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode20734 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend20735, (Optr)&t_method_return);
    Method PMethod20732 = new_Method_with(PArray20733, empty_Array, empty_Array, PThreadedCode20734, 1, PSend20735);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod20732, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printOn_format_() {
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_formatArray_0_1 = new_Variable_named(L"formatArray", 0);
    Array PArray20737 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_formatArray_0_1);
    Variable VAR_gregorian_0_2 = new_Variable_named(L"gregorian", 0);
    Variable VAR_twoDigits_0_3 = new_Variable_named(L"twoDigits", 0);
    Variable VAR_element_0_4 = new_Variable_named(L"element", 0);
    Variable VAR_monthFormat_0_5 = new_Variable_named(L"monthFormat", 0);
    Array PArray20738 = new_Array_with(4, (Optr)VAR_gregorian_0_2, (Optr)VAR_twoDigits_0_3, (Optr)VAR_element_0_4, (Optr)VAR_monthFormat_0_5);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20743 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend20745 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20744 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_send3, (Optr)PSend20745, (Optr)&t_method_return);
    Block PBlock20742 = new_Block_with(PArray20743, empty_Array, PThreadedCode20744, 1, PSend20745);
    // dayMonthYearDo:. 
    Send PSend20741 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20742);
    Assign PAssign20740 = new_Assign((Optr)VAR_gregorian_0_2, (Optr)PSend20741);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20749 = new_Send((Optr)VAR_formatArray_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_6 = new_SmallInt(6);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // >. 
    Send PSend20748 = new_Send((Optr)PSend20749, SMB__gt_, 1, (Optr)int_6_Const);
    Symbol SMB_and_ = new_Symbol(L"and:");
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:. 
    Send PSend20752 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_7_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend20753 = new_Send((Optr)PSend20752, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode20751 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20752, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20753, (Optr)&t_block_return);
    Block PBlock20750 = new_Block_with(empty_Array, empty_Array, PThreadedCode20751, 1, PSend20753);
    // and:. 
    Send PSend20747 = new_Send((Optr)PSend20748, SMB_and_, 1, (Optr)PBlock20750);
    Assign PAssign20746 = new_Assign((Optr)VAR_twoDigits_0_3, (Optr)PSend20747);
    SmallInt int_3 = new_SmallInt(3);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20755 = new_Array_with(1, (Optr)VAR_i_1_0);
    // at:. 
    Send PSend20758 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)VAR_i_1_0);
    Assign PAssign20757 = new_Assign((Optr)VAR_element_0_4, (Optr)PSend20758);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20759 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20766 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20767 = new_Send((Optr)PSend20766, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9397 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9397_Const = new_Constant((Optr)char_9397);
    // <<. 
    Send PSend20771 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode20770 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend20771, (Optr)&t_block_return);
    Block PBlock20769 = new_Block_with(empty_Array, empty_Array, PThreadedCode20770, 1, PSend20771);
    // ifTrue:. 
    Send PSend20768 = new_Send((Optr)PSend20767, SMB_ifTrue_, 1, (Optr)PBlock20769);
    // first. 
    Send PSend20772 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20773 = new_Send((Optr)PSend20772, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20765 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20766, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20767, (Optr)&t_send_ifTrue_, (Optr)PSend20768, (Optr)PBlock20769, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20772, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20773, (Optr)&t_block_return);
    Block PBlock20764 = new_Block_with(empty_Array, empty_Array, PThreadedCode20765, 2, PSend20768, PSend20773);
    // first. 
    Send PSend20776 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    // printOn:. 
    Send PSend20777 = new_Send((Optr)PSend20776, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20775 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20776, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20777, (Optr)&t_block_return);
    Block PBlock20774 = new_Block_with(empty_Array, empty_Array, PThreadedCode20775, 1, PSend20777);
    // ifTrue:ifFalse:. 
    Send PSend20763 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20764, (Optr)PBlock20774);
    Array PThreadedCode20762 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20763, (Optr)PBlock20764, (Optr)PBlock20774, (Optr)&t_block_return);
    Block PBlock20761 = new_Block_with(empty_Array, empty_Array, PThreadedCode20762, 1, PSend20763);
    // ifTrue:. 
    Send PSend20760 = new_Send((Optr)PSend20759, SMB_ifTrue_, 1, (Optr)PBlock20761);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend20778 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_2_Const);
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:. 
    Send PSend20783 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_5_Const);
    Assign PAssign20782 = new_Assign((Optr)VAR_monthFormat_0_5, (Optr)PSend20783);
    // =. 
    Send PSend20784 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_middle = new_Symbol(L"middle");
    // middle. 
    Send PSend20791 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // <. 
    Send PSend20792 = new_Send((Optr)PSend20791, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20796 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode20795 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend20796, (Optr)&t_block_return);
    Block PBlock20794 = new_Block_with(empty_Array, empty_Array, PThreadedCode20795, 1, PSend20796);
    // ifTrue:. 
    Send PSend20793 = new_Send((Optr)PSend20792, SMB_ifTrue_, 1, (Optr)PBlock20794);
    // middle. 
    Send PSend20797 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20798 = new_Send((Optr)PSend20797, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20790 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20791, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20792, (Optr)&t_send_ifTrue_, (Optr)PSend20793, (Optr)PBlock20794, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20797, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20798, (Optr)&t_block_return);
    Block PBlock20789 = new_Block_with(empty_Array, empty_Array, PThreadedCode20790, 2, PSend20793, PSend20798);
    // middle. 
    Send PSend20801 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20802 = new_Send((Optr)PSend20801, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20800 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20801, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20802, (Optr)&t_block_return);
    Block PBlock20799 = new_Block_with(empty_Array, empty_Array, PThreadedCode20800, 1, PSend20802);
    // ifTrue:ifFalse:. 
    Send PSend20788 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20789, (Optr)PBlock20799);
    Array PThreadedCode20787 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20788, (Optr)PBlock20789, (Optr)PBlock20799, (Optr)&t_block_return);
    Block PBlock20786 = new_Block_with(empty_Array, empty_Array, PThreadedCode20787, 1, PSend20788);
    // ifTrue:. 
    Send PSend20785 = new_Send((Optr)PSend20784, SMB_ifTrue_, 1, (Optr)PBlock20786);
    // =. 
    Send PSend20803 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_2_Const);
    // middle. 
    Send PSend20807 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20808 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20807);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20809 = new_Send((Optr)PSend20808, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    // printOn:. 
    Send PSend20810 = new_Send((Optr)PSend20809, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20806 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20807, (Optr)&t_send1, (Optr)PSend20808, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20809, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20810, (Optr)&t_block_return);
    Block PBlock20805 = new_Block_with(empty_Array, empty_Array, PThreadedCode20806, 1, PSend20810);
    // ifTrue:. 
    Send PSend20804 = new_Send((Optr)PSend20803, SMB_ifTrue_, 1, (Optr)PBlock20805);
    // =. 
    Send PSend20811 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_3_Const);
    // middle. 
    Send PSend20815 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // nameOfMonth:. 
    Send PSend20816 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20815);
    // printOn:. 
    Send PSend20817 = new_Send((Optr)PSend20816, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20814 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20815, (Optr)&t_send1, (Optr)PSend20816, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20817, (Optr)&t_block_return);
    Block PBlock20813 = new_Block_with(empty_Array, empty_Array, PThreadedCode20814, 1, PSend20817);
    // ifTrue:. 
    Send PSend20812 = new_Send((Optr)PSend20811, SMB_ifTrue_, 1, (Optr)PBlock20813);
    Array PThreadedCode20781 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign20782, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend20783, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20784, (Optr)&t_send_ifTrue_, (Optr)PSend20785, (Optr)PBlock20786, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20803, (Optr)&t_send_ifTrue_, (Optr)PSend20804, (Optr)PBlock20805, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20811, (Optr)&t_send_ifTrue_, (Optr)PSend20812, (Optr)PBlock20813, (Optr)&t_block_return);
    Block PBlock20780 = new_Block_with(empty_Array, empty_Array, PThreadedCode20781, 4, PAssign20782, PSend20785, PSend20804, PSend20812);
    // ifTrue:. 
    Send PSend20779 = new_Send((Optr)PSend20778, SMB_ifTrue_, 1, (Optr)PBlock20780);
    // =. 
    Send PSend20818 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_3_Const);
    // at:. 
    Send PSend20822 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_6_Const);
    // =. 
    Send PSend20823 = new_Send((Optr)PSend20822, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend20827 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // printOn:. 
    Send PSend20828 = new_Send((Optr)PSend20827, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20826 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20827, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20828, (Optr)&t_block_return);
    Block PBlock20825 = new_Block_with(empty_Array, empty_Array, PThreadedCode20826, 1, PSend20828);
    // last. 
    Send PSend20831 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // <. 
    Send PSend20832 = new_Send((Optr)PSend20831, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20836 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9397_Const);
    Array PThreadedCode20835 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send1, (Optr)PSend20836, (Optr)&t_block_return);
    Block PBlock20834 = new_Block_with(empty_Array, empty_Array, PThreadedCode20835, 1, PSend20836);
    // ifTrue:. 
    Send PSend20833 = new_Send((Optr)PSend20832, SMB_ifTrue_, 1, (Optr)PBlock20834);
    // last. 
    Send PSend20837 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // \\. 
    Send PSend20838 = new_Send((Optr)PSend20837, SMB__modulo_, 1, (Optr)int_100_Const);
    // printOn:. 
    Send PSend20839 = new_Send((Optr)PSend20838, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20830 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20831, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20832, (Optr)&t_send_ifTrue_, (Optr)PSend20833, (Optr)PBlock20834, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20837, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20838, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20839, (Optr)&t_block_return);
    Block PBlock20829 = new_Block_with(empty_Array, empty_Array, PThreadedCode20830, 2, PSend20833, PSend20839);
    // ifTrue:ifFalse:. 
    Send PSend20824 = new_Send((Optr)PSend20823, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20825, (Optr)PBlock20829);
    Array PThreadedCode20821 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20822, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20823, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20824, (Optr)PBlock20825, (Optr)PBlock20829, (Optr)&t_block_return);
    Block PBlock20820 = new_Block_with(empty_Array, empty_Array, PThreadedCode20821, 1, PSend20824);
    // ifTrue:. 
    Send PSend20819 = new_Send((Optr)PSend20818, SMB_ifTrue_, 1, (Optr)PBlock20820);
    // <. 
    Send PSend20840 = new_Send((Optr)VAR_i_1_0, SMB__lt_, 1, (Optr)int_3_Const);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend20844 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20845 = new_Send((Optr)PSend20844, SMB__notEquals_, 1, (Optr)int_0_Const);
    // at:. 
    Send PSend20849 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend20850 = new_Send((Optr)PSend20849, SMB_asCharacter, 0);
    // <<. 
    Send PSend20851 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20850);
    Array PThreadedCode20848 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20849, (Optr)&t_send0, (Optr)PSend20850, (Optr)&t_send1, (Optr)PSend20851, (Optr)&t_block_return);
    Block PBlock20847 = new_Block_with(empty_Array, empty_Array, PThreadedCode20848, 1, PSend20851);
    // ifTrue:. 
    Send PSend20846 = new_Send((Optr)PSend20845, SMB_ifTrue_, 1, (Optr)PBlock20847);
    Array PThreadedCode20843 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20844, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20845, (Optr)&t_send_ifTrue_, (Optr)PSend20846, (Optr)PBlock20847, (Optr)&t_block_return);
    Block PBlock20842 = new_Block_with(empty_Array, empty_Array, PThreadedCode20843, 1, PSend20846);
    // ifTrue:. 
    Send PSend20841 = new_Send((Optr)PSend20840, SMB_ifTrue_, 1, (Optr)PBlock20842);
    Array PThreadedCode20756 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign20757, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20758, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20759, (Optr)&t_send_ifTrue_, (Optr)PSend20760, (Optr)PBlock20761, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20778, (Optr)&t_send_ifTrue_, (Optr)PSend20779, (Optr)PBlock20780, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20818, (Optr)&t_send_ifTrue_, (Optr)PSend20819, (Optr)PBlock20820, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20840, (Optr)&t_send_ifTrue_, (Optr)PSend20841, (Optr)PBlock20842, (Optr)&t_method_return);
    Block PBlock20754 = new_Block_with(PArray20755, empty_Array, PThreadedCode20756, 5, PAssign20757, PSend20760, PSend20779, PSend20819, PSend20841);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20852 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_3_Const, (Optr)PBlock20754);
    Array PThreadedCode20739 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign20740, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20742, (Optr)&t_send1, (Optr)PSend20741, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20746, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_send0, (Optr)PSend20749, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20748, (Optr)&t_push_closure, (Optr)PBlock20750, (Optr)&t_send1, (Optr)PSend20747, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock20754, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20852, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20736 = new_Method_with(PArray20737, PArray20738, empty_Array, PThreadedCode20739, 4, PAssign20740, PAssign20746, PSend20852, self);
    
    MethodClosure MC_SMB_printOn_format_ = new_MethodClosure((Method)PMethod20736, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_format_, MC_SMB_printOn_format_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray20854 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    // julianDayNumber:. 
    Send PSend20856 = new_Send((Optr)DateAndTime_classReference, SMB_julianDayNumber_, 1, (Optr)VAR_aJulianDayNumber_0_0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20857 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20856);
    Array PThreadedCode20855 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send1, (Optr)PSend20856, (Optr)&t_send1, (Optr)PSend20857, (Optr)&t_method_return);
    Method PMethod20853 = new_Method_with(PArray20854, empty_Array, empty_Array, PThreadedCode20855, 1, PSend20857);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod20853, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend20860 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode20859 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20860, (Optr)&t_method_return);
    Method PMethod20858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20859, 1, PSend20860);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod20858, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20862 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend20864 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_midnight, 0);
    Symbol SMB_days_ = new_Symbol(L"days:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // days:. 
    Send PSend20865 = new_Send((Optr)Duration_classReference, SMB_days_, 1, (Optr)int_1_Const);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Super PSuper20866 = new_Super(SMB_starting_duration_, 2, (Optr)PSend20864, (Optr)PSend20865);
    Array PThreadedCode20863 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20864, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20865, (Optr)&t_super2, (Optr)PSuper20866, (Optr)&t_method_return);
    Method PMethod20861 = new_Method_with(PArray20862, empty_Array, empty_Array, PThreadedCode20863, 1, PSuper20866);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20861, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20868 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20870 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20871 = new_Send((Optr)PSend20870, SMB_days, 0);
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    // fromDays:. 
    Send PSend20872 = new_Send((Optr)self, SMB_fromDays_, 1, (Optr)PSend20871);
    Array PThreadedCode20869 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20870, (Optr)&t_send0, (Optr)PSend20871, (Optr)&t_send1, (Optr)PSend20872, (Optr)&t_method_return);
    Method PMethod20867 = new_Method_with(PArray20868, empty_Array, empty_Array, PThreadedCode20869, 1, PSend20872);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20867, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_fromDays_() {
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    Variable VAR_dayCount_0_0 = new_Variable_named(L"dayCount", 0);
    Array PArray20874 = new_Array_with(1, (Optr)VAR_dayCount_0_0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend20876 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20877 = new_Send((Optr)VAR_dayCount_0_0, SMB__plus_, 1, (Optr)PSend20876);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend20878 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend20877);
    Array PThreadedCode20875 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dayCount_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20876, (Optr)&t_send1, (Optr)PSend20877, (Optr)&t_send1, (Optr)PSend20878, (Optr)&t_method_return);
    Method PMethod20873 = new_Method_with(PArray20874, empty_Array, empty_Array, PThreadedCode20875, 1, PSend20878);
    
    MethodClosure MC_SMB_fromDays_ = new_MethodClosure((Method)PMethod20873, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromDays_, MC_SMB_fromDays_);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    // dateAndTimeNow. 
    Send PSend20881 = new_Send((Optr)Time_classReference, SMB_dateAndTimeNow, 0);
    Array PThreadedCode20880 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend20881, (Optr)&t_method_return);
    Method PMethod20879 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20880, 1, PSend20881);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20879, HEADER(Chronology_Date_Class));
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