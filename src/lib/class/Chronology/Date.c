#include <lib/class/Chronology/Date.h>


Optr layout_Chronology_Date_Class_class;
Optr layout_Chronology_Date;


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Array PThreadedCode20744 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20743 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20744, 1, self);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20743, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20746 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_format_0_1 = new_Variable_named(L"format", 0);
    Array PArray20747 = new_Array_with(1, (Optr)VAR_format_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20752 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend20754 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend20755 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend20756 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4726 = new_Character(L' ');
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // add:. 
    Send PSend20757 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)char_4726_Const);
    // add:. 
    Send PSend20758 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    // add:. 
    Send PSend20759 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20760 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20753 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20754, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20755, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20756, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend20757, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20758, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20759, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20760, (Optr)&t_method_return);
    Block PBlock20751 = new_Block_with(PArray20752, empty_Array, PThreadedCode20753, 7, PSend20754, PSend20755, PSend20756, PSend20757, PSend20758, PSend20759, PSend20760);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20761 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // value:. 
    Send PSend20750 = new_Send((Optr)PBlock20751, SMB_value_, 1, (Optr)PSend20761);
    Assign PAssign20749 = new_Assign((Optr)VAR_format_0_1, (Optr)PSend20750);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20762 = new_Send((Optr)VAR_format_0_1, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend20763 = new_Send((Optr)self, SMB_printOn_format_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend20762);
    Array PThreadedCode20748 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20749, (Optr)&t_push_closure, (Optr)PBlock20751, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20761, (Optr)&t_send1, (Optr)PSend20750, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_format_0_1, (Optr)&t_send0, (Optr)PSend20762, (Optr)&t_send2, (Optr)PSend20763, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20745 = new_Method_with(PArray20746, PArray20747, empty_Array, PThreadedCode20748, 3, PAssign20749, PSend20763, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20745, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20765 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // dayMonthYearDo:. 
    Send PSend20767 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_dayMonthYearDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode20766 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend20767, (Optr)&t_method_return);
    Method PMethod20764 = new_Method_with(PArray20765, empty_Array, empty_Array, PThreadedCode20766, 1, PSend20767);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod20764, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printOn_format_() {
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_formatArray_0_1 = new_Variable_named(L"formatArray", 0);
    Array PArray20769 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_formatArray_0_1);
    Variable VAR_gregorian_0_2 = new_Variable_named(L"gregorian", 0);
    Variable VAR_twoDigits_0_3 = new_Variable_named(L"twoDigits", 0);
    Variable VAR_element_0_4 = new_Variable_named(L"element", 0);
    Variable VAR_monthFormat_0_5 = new_Variable_named(L"monthFormat", 0);
    Array PArray20770 = new_Array_with(4, (Optr)VAR_gregorian_0_2, (Optr)VAR_twoDigits_0_3, (Optr)VAR_element_0_4, (Optr)VAR_monthFormat_0_5);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20775 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend20777 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20776 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_send3, (Optr)PSend20777, (Optr)&t_method_return);
    Block PBlock20774 = new_Block_with(PArray20775, empty_Array, PThreadedCode20776, 1, PSend20777);
    // dayMonthYearDo:. 
    Send PSend20773 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20774);
    Assign PAssign20772 = new_Assign((Optr)VAR_gregorian_0_2, (Optr)PSend20773);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20781 = new_Send((Optr)VAR_formatArray_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_6 = new_SmallInt(6);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // >. 
    Send PSend20780 = new_Send((Optr)PSend20781, SMB__gt_, 1, (Optr)int_6_Const);
    Symbol SMB_and_ = new_Symbol(L"and:");
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:. 
    Send PSend20784 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_7_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend20785 = new_Send((Optr)PSend20784, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode20783 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20784, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20785, (Optr)&t_block_return);
    Block PBlock20782 = new_Block_with(empty_Array, empty_Array, PThreadedCode20783, 1, PSend20785);
    // and:. 
    Send PSend20779 = new_Send((Optr)PSend20780, SMB_and_, 1, (Optr)PBlock20782);
    Assign PAssign20778 = new_Assign((Optr)VAR_twoDigits_0_3, (Optr)PSend20779);
    SmallInt int_3 = new_SmallInt(3);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20787 = new_Array_with(1, (Optr)VAR_i_1_0);
    // at:. 
    Send PSend20790 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)VAR_i_1_0);
    Assign PAssign20789 = new_Assign((Optr)VAR_element_0_4, (Optr)PSend20790);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20791 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20798 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20799 = new_Send((Optr)PSend20798, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9429 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9429_Const = new_Constant((Optr)char_9429);
    // <<. 
    Send PSend20803 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode20802 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend20803, (Optr)&t_block_return);
    Block PBlock20801 = new_Block_with(empty_Array, empty_Array, PThreadedCode20802, 1, PSend20803);
    // ifTrue:. 
    Send PSend20800 = new_Send((Optr)PSend20799, SMB_ifTrue_, 1, (Optr)PBlock20801);
    // first. 
    Send PSend20804 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20805 = new_Send((Optr)PSend20804, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20797 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20798, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20799, (Optr)&t_send_ifTrue_, (Optr)PSend20800, (Optr)PBlock20801, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20804, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20805, (Optr)&t_block_return);
    Block PBlock20796 = new_Block_with(empty_Array, empty_Array, PThreadedCode20797, 2, PSend20800, PSend20805);
    // first. 
    Send PSend20808 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    // printOn:. 
    Send PSend20809 = new_Send((Optr)PSend20808, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20807 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20808, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20809, (Optr)&t_block_return);
    Block PBlock20806 = new_Block_with(empty_Array, empty_Array, PThreadedCode20807, 1, PSend20809);
    // ifTrue:ifFalse:. 
    Send PSend20795 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20796, (Optr)PBlock20806);
    Array PThreadedCode20794 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20795, (Optr)PBlock20796, (Optr)PBlock20806, (Optr)&t_block_return);
    Block PBlock20793 = new_Block_with(empty_Array, empty_Array, PThreadedCode20794, 1, PSend20795);
    // ifTrue:. 
    Send PSend20792 = new_Send((Optr)PSend20791, SMB_ifTrue_, 1, (Optr)PBlock20793);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend20810 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_2_Const);
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:. 
    Send PSend20815 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_5_Const);
    Assign PAssign20814 = new_Assign((Optr)VAR_monthFormat_0_5, (Optr)PSend20815);
    // =. 
    Send PSend20816 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_middle = new_Symbol(L"middle");
    // middle. 
    Send PSend20823 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // <. 
    Send PSend20824 = new_Send((Optr)PSend20823, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20828 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode20827 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend20828, (Optr)&t_block_return);
    Block PBlock20826 = new_Block_with(empty_Array, empty_Array, PThreadedCode20827, 1, PSend20828);
    // ifTrue:. 
    Send PSend20825 = new_Send((Optr)PSend20824, SMB_ifTrue_, 1, (Optr)PBlock20826);
    // middle. 
    Send PSend20829 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20830 = new_Send((Optr)PSend20829, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20822 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20823, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20824, (Optr)&t_send_ifTrue_, (Optr)PSend20825, (Optr)PBlock20826, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20829, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20830, (Optr)&t_block_return);
    Block PBlock20821 = new_Block_with(empty_Array, empty_Array, PThreadedCode20822, 2, PSend20825, PSend20830);
    // middle. 
    Send PSend20833 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20834 = new_Send((Optr)PSend20833, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20832 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20833, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20834, (Optr)&t_block_return);
    Block PBlock20831 = new_Block_with(empty_Array, empty_Array, PThreadedCode20832, 1, PSend20834);
    // ifTrue:ifFalse:. 
    Send PSend20820 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20821, (Optr)PBlock20831);
    Array PThreadedCode20819 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20820, (Optr)PBlock20821, (Optr)PBlock20831, (Optr)&t_block_return);
    Block PBlock20818 = new_Block_with(empty_Array, empty_Array, PThreadedCode20819, 1, PSend20820);
    // ifTrue:. 
    Send PSend20817 = new_Send((Optr)PSend20816, SMB_ifTrue_, 1, (Optr)PBlock20818);
    // =. 
    Send PSend20835 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_2_Const);
    // middle. 
    Send PSend20839 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20840 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20839);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20841 = new_Send((Optr)PSend20840, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    // printOn:. 
    Send PSend20842 = new_Send((Optr)PSend20841, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20838 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20839, (Optr)&t_send1, (Optr)PSend20840, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20841, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20842, (Optr)&t_block_return);
    Block PBlock20837 = new_Block_with(empty_Array, empty_Array, PThreadedCode20838, 1, PSend20842);
    // ifTrue:. 
    Send PSend20836 = new_Send((Optr)PSend20835, SMB_ifTrue_, 1, (Optr)PBlock20837);
    // =. 
    Send PSend20843 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_3_Const);
    // middle. 
    Send PSend20847 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // nameOfMonth:. 
    Send PSend20848 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20847);
    // printOn:. 
    Send PSend20849 = new_Send((Optr)PSend20848, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20846 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20847, (Optr)&t_send1, (Optr)PSend20848, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20849, (Optr)&t_block_return);
    Block PBlock20845 = new_Block_with(empty_Array, empty_Array, PThreadedCode20846, 1, PSend20849);
    // ifTrue:. 
    Send PSend20844 = new_Send((Optr)PSend20843, SMB_ifTrue_, 1, (Optr)PBlock20845);
    Array PThreadedCode20813 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign20814, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend20815, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20816, (Optr)&t_send_ifTrue_, (Optr)PSend20817, (Optr)PBlock20818, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20835, (Optr)&t_send_ifTrue_, (Optr)PSend20836, (Optr)PBlock20837, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20843, (Optr)&t_send_ifTrue_, (Optr)PSend20844, (Optr)PBlock20845, (Optr)&t_block_return);
    Block PBlock20812 = new_Block_with(empty_Array, empty_Array, PThreadedCode20813, 4, PAssign20814, PSend20817, PSend20836, PSend20844);
    // ifTrue:. 
    Send PSend20811 = new_Send((Optr)PSend20810, SMB_ifTrue_, 1, (Optr)PBlock20812);
    // =. 
    Send PSend20850 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_3_Const);
    // at:. 
    Send PSend20854 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_6_Const);
    // =. 
    Send PSend20855 = new_Send((Optr)PSend20854, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend20859 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // printOn:. 
    Send PSend20860 = new_Send((Optr)PSend20859, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20858 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20859, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20860, (Optr)&t_block_return);
    Block PBlock20857 = new_Block_with(empty_Array, empty_Array, PThreadedCode20858, 1, PSend20860);
    // last. 
    Send PSend20863 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // <. 
    Send PSend20864 = new_Send((Optr)PSend20863, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20868 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9429_Const);
    Array PThreadedCode20867 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9429, (Optr)&t_send1, (Optr)PSend20868, (Optr)&t_block_return);
    Block PBlock20866 = new_Block_with(empty_Array, empty_Array, PThreadedCode20867, 1, PSend20868);
    // ifTrue:. 
    Send PSend20865 = new_Send((Optr)PSend20864, SMB_ifTrue_, 1, (Optr)PBlock20866);
    // last. 
    Send PSend20869 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // \\. 
    Send PSend20870 = new_Send((Optr)PSend20869, SMB__modulo_, 1, (Optr)int_100_Const);
    // printOn:. 
    Send PSend20871 = new_Send((Optr)PSend20870, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20862 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20863, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20864, (Optr)&t_send_ifTrue_, (Optr)PSend20865, (Optr)PBlock20866, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20869, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20870, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20871, (Optr)&t_block_return);
    Block PBlock20861 = new_Block_with(empty_Array, empty_Array, PThreadedCode20862, 2, PSend20865, PSend20871);
    // ifTrue:ifFalse:. 
    Send PSend20856 = new_Send((Optr)PSend20855, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20857, (Optr)PBlock20861);
    Array PThreadedCode20853 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20854, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20855, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20856, (Optr)PBlock20857, (Optr)PBlock20861, (Optr)&t_block_return);
    Block PBlock20852 = new_Block_with(empty_Array, empty_Array, PThreadedCode20853, 1, PSend20856);
    // ifTrue:. 
    Send PSend20851 = new_Send((Optr)PSend20850, SMB_ifTrue_, 1, (Optr)PBlock20852);
    // <. 
    Send PSend20872 = new_Send((Optr)VAR_i_1_0, SMB__lt_, 1, (Optr)int_3_Const);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend20876 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20877 = new_Send((Optr)PSend20876, SMB__notEquals_, 1, (Optr)int_0_Const);
    // at:. 
    Send PSend20881 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend20882 = new_Send((Optr)PSend20881, SMB_asCharacter, 0);
    // <<. 
    Send PSend20883 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20882);
    Array PThreadedCode20880 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20881, (Optr)&t_send0, (Optr)PSend20882, (Optr)&t_send1, (Optr)PSend20883, (Optr)&t_block_return);
    Block PBlock20879 = new_Block_with(empty_Array, empty_Array, PThreadedCode20880, 1, PSend20883);
    // ifTrue:. 
    Send PSend20878 = new_Send((Optr)PSend20877, SMB_ifTrue_, 1, (Optr)PBlock20879);
    Array PThreadedCode20875 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20876, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20877, (Optr)&t_send_ifTrue_, (Optr)PSend20878, (Optr)PBlock20879, (Optr)&t_block_return);
    Block PBlock20874 = new_Block_with(empty_Array, empty_Array, PThreadedCode20875, 1, PSend20878);
    // ifTrue:. 
    Send PSend20873 = new_Send((Optr)PSend20872, SMB_ifTrue_, 1, (Optr)PBlock20874);
    Array PThreadedCode20788 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign20789, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20790, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20791, (Optr)&t_send_ifTrue_, (Optr)PSend20792, (Optr)PBlock20793, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20810, (Optr)&t_send_ifTrue_, (Optr)PSend20811, (Optr)PBlock20812, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20850, (Optr)&t_send_ifTrue_, (Optr)PSend20851, (Optr)PBlock20852, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20872, (Optr)&t_send_ifTrue_, (Optr)PSend20873, (Optr)PBlock20874, (Optr)&t_method_return);
    Block PBlock20786 = new_Block_with(PArray20787, empty_Array, PThreadedCode20788, 5, PAssign20789, PSend20792, PSend20811, PSend20851, PSend20873);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20884 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_3_Const, (Optr)PBlock20786);
    Array PThreadedCode20771 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign20772, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20774, (Optr)&t_send1, (Optr)PSend20773, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20778, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_send0, (Optr)PSend20781, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20780, (Optr)&t_push_closure, (Optr)PBlock20782, (Optr)&t_send1, (Optr)PSend20779, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock20786, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20884, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20768 = new_Method_with(PArray20769, PArray20770, empty_Array, PThreadedCode20771, 4, PAssign20772, PAssign20778, PSend20884, self);
    
    MethodClosure MC_SMB_printOn_format_ = new_MethodClosure((Method)PMethod20768, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_format_, MC_SMB_printOn_format_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray20886 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    // julianDayNumber:. 
    Send PSend20888 = new_Send((Optr)DateAndTime_classReference, SMB_julianDayNumber_, 1, (Optr)VAR_aJulianDayNumber_0_0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20889 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20888);
    Array PThreadedCode20887 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send1, (Optr)PSend20888, (Optr)&t_send1, (Optr)PSend20889, (Optr)&t_method_return);
    Method PMethod20885 = new_Method_with(PArray20886, empty_Array, empty_Array, PThreadedCode20887, 1, PSend20889);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod20885, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend20892 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode20891 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20892, (Optr)&t_method_return);
    Method PMethod20890 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20891, 1, PSend20892);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod20890, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20894 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend20896 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_midnight, 0);
    Symbol SMB_days_ = new_Symbol(L"days:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // days:. 
    Send PSend20897 = new_Send((Optr)Duration_classReference, SMB_days_, 1, (Optr)int_1_Const);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Super PSuper20898 = new_Super(SMB_starting_duration_, 2, (Optr)PSend20896, (Optr)PSend20897);
    Array PThreadedCode20895 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20896, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20897, (Optr)&t_super2, (Optr)PSuper20898, (Optr)&t_method_return);
    Method PMethod20893 = new_Method_with(PArray20894, empty_Array, empty_Array, PThreadedCode20895, 1, PSuper20898);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20893, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20900 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20902 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20903 = new_Send((Optr)PSend20902, SMB_days, 0);
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    // fromDays:. 
    Send PSend20904 = new_Send((Optr)self, SMB_fromDays_, 1, (Optr)PSend20903);
    Array PThreadedCode20901 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20902, (Optr)&t_send0, (Optr)PSend20903, (Optr)&t_send1, (Optr)PSend20904, (Optr)&t_method_return);
    Method PMethod20899 = new_Method_with(PArray20900, empty_Array, empty_Array, PThreadedCode20901, 1, PSend20904);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20899, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_fromDays_() {
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    Variable VAR_dayCount_0_0 = new_Variable_named(L"dayCount", 0);
    Array PArray20906 = new_Array_with(1, (Optr)VAR_dayCount_0_0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend20908 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20909 = new_Send((Optr)VAR_dayCount_0_0, SMB__plus_, 1, (Optr)PSend20908);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend20910 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend20909);
    Array PThreadedCode20907 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dayCount_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20908, (Optr)&t_send1, (Optr)PSend20909, (Optr)&t_send1, (Optr)PSend20910, (Optr)&t_method_return);
    Method PMethod20905 = new_Method_with(PArray20906, empty_Array, empty_Array, PThreadedCode20907, 1, PSend20910);
    
    MethodClosure MC_SMB_fromDays_ = new_MethodClosure((Method)PMethod20905, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromDays_, MC_SMB_fromDays_);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    // dateAndTimeNow. 
    Send PSend20913 = new_Send((Optr)Time_classReference, SMB_dateAndTimeNow, 0);
    Array PThreadedCode20912 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend20913, (Optr)&t_method_return);
    Method PMethod20911 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20912, 1, PSend20913);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod20911, HEADER(Chronology_Date_Class));
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