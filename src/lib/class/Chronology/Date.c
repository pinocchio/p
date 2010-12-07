#include <lib/class/Chronology/Date.h>


Optr layout_Chronology_Date_Class_class;
Optr layout_Chronology_Date;


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Array PThreadedCode20710 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20709 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20710, 1, self);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20709, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20712 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_format_0_1 = new_Variable_named(L"format", 0);
    Array PArray20713 = new_Array_with(1, (Optr)VAR_format_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20718 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend20720 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend20721 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend20722 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend20723 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend20724 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    // add:. 
    Send PSend20725 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20726 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20719 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20720, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20721, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20722, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend20723, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20724, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20725, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20726, (Optr)&t_method_return);
    Block PBlock20717 = new_Block_with(PArray20718, empty_Array, PThreadedCode20719, 7, PSend20720, PSend20721, PSend20722, PSend20723, PSend20724, PSend20725, PSend20726);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20727 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // value:. 
    Send PSend20716 = new_Send((Optr)PBlock20717, SMB_value_, 1, (Optr)PSend20727);
    Assign PAssign20715 = new_Assign((Optr)VAR_format_0_1, (Optr)PSend20716);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20728 = new_Send((Optr)VAR_format_0_1, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend20729 = new_Send((Optr)self, SMB_printOn_format_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend20728);
    Array PThreadedCode20714 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20715, (Optr)&t_push_closure, (Optr)PBlock20717, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20727, (Optr)&t_send1, (Optr)PSend20716, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_format_0_1, (Optr)&t_send0, (Optr)PSend20728, (Optr)&t_send2, (Optr)PSend20729, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20711 = new_Method_with(PArray20712, PArray20713, empty_Array, PThreadedCode20714, 3, PAssign20715, PSend20729, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20711, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20731 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // dayMonthYearDo:. 
    Send PSend20733 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_dayMonthYearDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode20732 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend20733, (Optr)&t_method_return);
    Method PMethod20730 = new_Method_with(PArray20731, empty_Array, empty_Array, PThreadedCode20732, 1, PSend20733);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod20730, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printOn_format_() {
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_formatArray_0_1 = new_Variable_named(L"formatArray", 0);
    Array PArray20735 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_formatArray_0_1);
    Variable VAR_gregorian_0_2 = new_Variable_named(L"gregorian", 0);
    Variable VAR_twoDigits_0_3 = new_Variable_named(L"twoDigits", 0);
    Variable VAR_element_0_4 = new_Variable_named(L"element", 0);
    Variable VAR_monthFormat_0_5 = new_Variable_named(L"monthFormat", 0);
    Array PArray20736 = new_Array_with(4, (Optr)VAR_gregorian_0_2, (Optr)VAR_twoDigits_0_3, (Optr)VAR_element_0_4, (Optr)VAR_monthFormat_0_5);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20741 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend20743 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20742 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_send3, (Optr)PSend20743, (Optr)&t_method_return);
    Block PBlock20740 = new_Block_with(PArray20741, empty_Array, PThreadedCode20742, 1, PSend20743);
    // dayMonthYearDo:. 
    Send PSend20739 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20740);
    Assign PAssign20738 = new_Assign((Optr)VAR_gregorian_0_2, (Optr)PSend20739);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20747 = new_Send((Optr)VAR_formatArray_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_6 = new_SmallInt(6);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // >. 
    Send PSend20746 = new_Send((Optr)PSend20747, SMB__gt_, 1, (Optr)int_6_Const);
    Symbol SMB_and_ = new_Symbol(L"and:");
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:. 
    Send PSend20750 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_7_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend20751 = new_Send((Optr)PSend20750, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode20749 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20750, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20751, (Optr)&t_block_return);
    Block PBlock20748 = new_Block_with(empty_Array, empty_Array, PThreadedCode20749, 1, PSend20751);
    // and:. 
    Send PSend20745 = new_Send((Optr)PSend20746, SMB_and_, 1, (Optr)PBlock20748);
    Assign PAssign20744 = new_Assign((Optr)VAR_twoDigits_0_3, (Optr)PSend20745);
    SmallInt int_3 = new_SmallInt(3);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20753 = new_Array_with(1, (Optr)VAR_i_1_0);
    // at:. 
    Send PSend20756 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)VAR_i_1_0);
    Assign PAssign20755 = new_Assign((Optr)VAR_element_0_4, (Optr)PSend20756);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20757 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20764 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20765 = new_Send((Optr)PSend20764, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9395 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9395_Const = new_Constant((Optr)char_9395);
    // <<. 
    Send PSend20769 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode20768 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend20769, (Optr)&t_block_return);
    Block PBlock20767 = new_Block_with(empty_Array, empty_Array, PThreadedCode20768, 1, PSend20769);
    // ifTrue:. 
    Send PSend20766 = new_Send((Optr)PSend20765, SMB_ifTrue_, 1, (Optr)PBlock20767);
    // first. 
    Send PSend20770 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20771 = new_Send((Optr)PSend20770, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20763 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20764, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20765, (Optr)&t_send_ifTrue_, (Optr)PSend20766, (Optr)PBlock20767, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20770, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20771, (Optr)&t_block_return);
    Block PBlock20762 = new_Block_with(empty_Array, empty_Array, PThreadedCode20763, 2, PSend20766, PSend20771);
    // first. 
    Send PSend20774 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    // printOn:. 
    Send PSend20775 = new_Send((Optr)PSend20774, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20773 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20774, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20775, (Optr)&t_block_return);
    Block PBlock20772 = new_Block_with(empty_Array, empty_Array, PThreadedCode20773, 1, PSend20775);
    // ifTrue:ifFalse:. 
    Send PSend20761 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20762, (Optr)PBlock20772);
    Array PThreadedCode20760 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20761, (Optr)PBlock20762, (Optr)PBlock20772, (Optr)&t_block_return);
    Block PBlock20759 = new_Block_with(empty_Array, empty_Array, PThreadedCode20760, 1, PSend20761);
    // ifTrue:. 
    Send PSend20758 = new_Send((Optr)PSend20757, SMB_ifTrue_, 1, (Optr)PBlock20759);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend20776 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_2_Const);
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:. 
    Send PSend20781 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_5_Const);
    Assign PAssign20780 = new_Assign((Optr)VAR_monthFormat_0_5, (Optr)PSend20781);
    // =. 
    Send PSend20782 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_middle = new_Symbol(L"middle");
    // middle. 
    Send PSend20789 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // <. 
    Send PSend20790 = new_Send((Optr)PSend20789, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20794 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode20793 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend20794, (Optr)&t_block_return);
    Block PBlock20792 = new_Block_with(empty_Array, empty_Array, PThreadedCode20793, 1, PSend20794);
    // ifTrue:. 
    Send PSend20791 = new_Send((Optr)PSend20790, SMB_ifTrue_, 1, (Optr)PBlock20792);
    // middle. 
    Send PSend20795 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20796 = new_Send((Optr)PSend20795, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20788 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20789, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20790, (Optr)&t_send_ifTrue_, (Optr)PSend20791, (Optr)PBlock20792, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20795, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20796, (Optr)&t_block_return);
    Block PBlock20787 = new_Block_with(empty_Array, empty_Array, PThreadedCode20788, 2, PSend20791, PSend20796);
    // middle. 
    Send PSend20799 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20800 = new_Send((Optr)PSend20799, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20798 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20799, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20800, (Optr)&t_block_return);
    Block PBlock20797 = new_Block_with(empty_Array, empty_Array, PThreadedCode20798, 1, PSend20800);
    // ifTrue:ifFalse:. 
    Send PSend20786 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20787, (Optr)PBlock20797);
    Array PThreadedCode20785 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20786, (Optr)PBlock20787, (Optr)PBlock20797, (Optr)&t_block_return);
    Block PBlock20784 = new_Block_with(empty_Array, empty_Array, PThreadedCode20785, 1, PSend20786);
    // ifTrue:. 
    Send PSend20783 = new_Send((Optr)PSend20782, SMB_ifTrue_, 1, (Optr)PBlock20784);
    // =. 
    Send PSend20801 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_2_Const);
    // middle. 
    Send PSend20805 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20806 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20805);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20807 = new_Send((Optr)PSend20806, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    // printOn:. 
    Send PSend20808 = new_Send((Optr)PSend20807, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20804 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20805, (Optr)&t_send1, (Optr)PSend20806, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20807, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20808, (Optr)&t_block_return);
    Block PBlock20803 = new_Block_with(empty_Array, empty_Array, PThreadedCode20804, 1, PSend20808);
    // ifTrue:. 
    Send PSend20802 = new_Send((Optr)PSend20801, SMB_ifTrue_, 1, (Optr)PBlock20803);
    // =. 
    Send PSend20809 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_3_Const);
    // middle. 
    Send PSend20813 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // nameOfMonth:. 
    Send PSend20814 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20813);
    // printOn:. 
    Send PSend20815 = new_Send((Optr)PSend20814, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20812 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20813, (Optr)&t_send1, (Optr)PSend20814, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20815, (Optr)&t_block_return);
    Block PBlock20811 = new_Block_with(empty_Array, empty_Array, PThreadedCode20812, 1, PSend20815);
    // ifTrue:. 
    Send PSend20810 = new_Send((Optr)PSend20809, SMB_ifTrue_, 1, (Optr)PBlock20811);
    Array PThreadedCode20779 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign20780, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend20781, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20782, (Optr)&t_send_ifTrue_, (Optr)PSend20783, (Optr)PBlock20784, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20801, (Optr)&t_send_ifTrue_, (Optr)PSend20802, (Optr)PBlock20803, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20809, (Optr)&t_send_ifTrue_, (Optr)PSend20810, (Optr)PBlock20811, (Optr)&t_block_return);
    Block PBlock20778 = new_Block_with(empty_Array, empty_Array, PThreadedCode20779, 4, PAssign20780, PSend20783, PSend20802, PSend20810);
    // ifTrue:. 
    Send PSend20777 = new_Send((Optr)PSend20776, SMB_ifTrue_, 1, (Optr)PBlock20778);
    // =. 
    Send PSend20816 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_3_Const);
    // at:. 
    Send PSend20820 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_6_Const);
    // =. 
    Send PSend20821 = new_Send((Optr)PSend20820, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend20825 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // printOn:. 
    Send PSend20826 = new_Send((Optr)PSend20825, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20824 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20825, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20826, (Optr)&t_block_return);
    Block PBlock20823 = new_Block_with(empty_Array, empty_Array, PThreadedCode20824, 1, PSend20826);
    // last. 
    Send PSend20829 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // <. 
    Send PSend20830 = new_Send((Optr)PSend20829, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20834 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9395_Const);
    Array PThreadedCode20833 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send1, (Optr)PSend20834, (Optr)&t_block_return);
    Block PBlock20832 = new_Block_with(empty_Array, empty_Array, PThreadedCode20833, 1, PSend20834);
    // ifTrue:. 
    Send PSend20831 = new_Send((Optr)PSend20830, SMB_ifTrue_, 1, (Optr)PBlock20832);
    // last. 
    Send PSend20835 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // \\. 
    Send PSend20836 = new_Send((Optr)PSend20835, SMB__modulo_, 1, (Optr)int_100_Const);
    // printOn:. 
    Send PSend20837 = new_Send((Optr)PSend20836, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20828 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20829, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20830, (Optr)&t_send_ifTrue_, (Optr)PSend20831, (Optr)PBlock20832, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20835, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20836, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20837, (Optr)&t_block_return);
    Block PBlock20827 = new_Block_with(empty_Array, empty_Array, PThreadedCode20828, 2, PSend20831, PSend20837);
    // ifTrue:ifFalse:. 
    Send PSend20822 = new_Send((Optr)PSend20821, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20823, (Optr)PBlock20827);
    Array PThreadedCode20819 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20820, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20821, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20822, (Optr)PBlock20823, (Optr)PBlock20827, (Optr)&t_block_return);
    Block PBlock20818 = new_Block_with(empty_Array, empty_Array, PThreadedCode20819, 1, PSend20822);
    // ifTrue:. 
    Send PSend20817 = new_Send((Optr)PSend20816, SMB_ifTrue_, 1, (Optr)PBlock20818);
    // <. 
    Send PSend20838 = new_Send((Optr)VAR_i_1_0, SMB__lt_, 1, (Optr)int_3_Const);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend20842 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20843 = new_Send((Optr)PSend20842, SMB__notEquals_, 1, (Optr)int_0_Const);
    // at:. 
    Send PSend20847 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend20848 = new_Send((Optr)PSend20847, SMB_asCharacter, 0);
    // <<. 
    Send PSend20849 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20848);
    Array PThreadedCode20846 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20847, (Optr)&t_send0, (Optr)PSend20848, (Optr)&t_send1, (Optr)PSend20849, (Optr)&t_block_return);
    Block PBlock20845 = new_Block_with(empty_Array, empty_Array, PThreadedCode20846, 1, PSend20849);
    // ifTrue:. 
    Send PSend20844 = new_Send((Optr)PSend20843, SMB_ifTrue_, 1, (Optr)PBlock20845);
    Array PThreadedCode20841 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20842, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20843, (Optr)&t_send_ifTrue_, (Optr)PSend20844, (Optr)PBlock20845, (Optr)&t_block_return);
    Block PBlock20840 = new_Block_with(empty_Array, empty_Array, PThreadedCode20841, 1, PSend20844);
    // ifTrue:. 
    Send PSend20839 = new_Send((Optr)PSend20838, SMB_ifTrue_, 1, (Optr)PBlock20840);
    Array PThreadedCode20754 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign20755, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20756, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20757, (Optr)&t_send_ifTrue_, (Optr)PSend20758, (Optr)PBlock20759, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20776, (Optr)&t_send_ifTrue_, (Optr)PSend20777, (Optr)PBlock20778, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20816, (Optr)&t_send_ifTrue_, (Optr)PSend20817, (Optr)PBlock20818, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20838, (Optr)&t_send_ifTrue_, (Optr)PSend20839, (Optr)PBlock20840, (Optr)&t_method_return);
    Block PBlock20752 = new_Block_with(PArray20753, empty_Array, PThreadedCode20754, 5, PAssign20755, PSend20758, PSend20777, PSend20817, PSend20839);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20850 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_3_Const, (Optr)PBlock20752);
    Array PThreadedCode20737 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign20738, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20740, (Optr)&t_send1, (Optr)PSend20739, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20744, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_send0, (Optr)PSend20747, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20746, (Optr)&t_push_closure, (Optr)PBlock20748, (Optr)&t_send1, (Optr)PSend20745, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock20752, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20850, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20734 = new_Method_with(PArray20735, PArray20736, empty_Array, PThreadedCode20737, 4, PAssign20738, PAssign20744, PSend20850, self);
    
    MethodClosure MC_SMB_printOn_format_ = new_MethodClosure((Method)PMethod20734, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_format_, MC_SMB_printOn_format_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray20852 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    // julianDayNumber:. 
    Send PSend20854 = new_Send((Optr)DateAndTime_classReference, SMB_julianDayNumber_, 1, (Optr)VAR_aJulianDayNumber_0_0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20855 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20854);
    Array PThreadedCode20853 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send1, (Optr)PSend20854, (Optr)&t_send1, (Optr)PSend20855, (Optr)&t_method_return);
    Method PMethod20851 = new_Method_with(PArray20852, empty_Array, empty_Array, PThreadedCode20853, 1, PSend20855);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod20851, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend20858 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode20857 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20858, (Optr)&t_method_return);
    Method PMethod20856 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20857, 1, PSend20858);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod20856, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20860 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend20862 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_midnight, 0);
    Symbol SMB_days_ = new_Symbol(L"days:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // days:. 
    Send PSend20863 = new_Send((Optr)Duration_classReference, SMB_days_, 1, (Optr)int_1_Const);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Super PSuper20864 = new_Super(SMB_starting_duration_, 2, (Optr)PSend20862, (Optr)PSend20863);
    Array PThreadedCode20861 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20862, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20863, (Optr)&t_super2, (Optr)PSuper20864, (Optr)&t_method_return);
    Method PMethod20859 = new_Method_with(PArray20860, empty_Array, empty_Array, PThreadedCode20861, 1, PSuper20864);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20859, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20866 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20868 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20869 = new_Send((Optr)PSend20868, SMB_days, 0);
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    // fromDays:. 
    Send PSend20870 = new_Send((Optr)self, SMB_fromDays_, 1, (Optr)PSend20869);
    Array PThreadedCode20867 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20868, (Optr)&t_send0, (Optr)PSend20869, (Optr)&t_send1, (Optr)PSend20870, (Optr)&t_method_return);
    Method PMethod20865 = new_Method_with(PArray20866, empty_Array, empty_Array, PThreadedCode20867, 1, PSend20870);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20865, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_fromDays_() {
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    Variable VAR_dayCount_0_0 = new_Variable_named(L"dayCount", 0);
    Array PArray20872 = new_Array_with(1, (Optr)VAR_dayCount_0_0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend20874 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20875 = new_Send((Optr)VAR_dayCount_0_0, SMB__plus_, 1, (Optr)PSend20874);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend20876 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend20875);
    Array PThreadedCode20873 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dayCount_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20874, (Optr)&t_send1, (Optr)PSend20875, (Optr)&t_send1, (Optr)PSend20876, (Optr)&t_method_return);
    Method PMethod20871 = new_Method_with(PArray20872, empty_Array, empty_Array, PThreadedCode20873, 1, PSend20876);
    
    MethodClosure MC_SMB_fromDays_ = new_MethodClosure((Method)PMethod20871, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromDays_, MC_SMB_fromDays_);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    // dateAndTimeNow. 
    Send PSend20879 = new_Send((Optr)Time_classReference, SMB_dateAndTimeNow, 0);
    Array PThreadedCode20878 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend20879, (Optr)&t_method_return);
    Method PMethod20877 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20878, 1, PSend20879);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20877, HEADER(Chronology_Date_Class));
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