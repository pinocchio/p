#include <lib/class/Chronology/Date.h>


Optr layout_Chronology_Date_Class_class;
Optr layout_Chronology_Date;


static void init_SMB_asDate() {
    Symbol SMB_asDate = new_Symbol(L"asDate");
    Array PThreadedCode20841 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20840 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20841, 1, self);
    
    MethodClosure MC_SMB_asDate = new_MethodClosure((Method)PMethod20840, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_asDate, MC_SMB_asDate);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20843 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_format_0_1 = new_Variable_named(L"format", 0);
    Array PArray20844 = new_Array_with(1, (Optr)VAR_format_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray20849 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // add:. 
    Send PSend20851 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // add:. 
    Send PSend20852 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // add:. 
    Send PSend20853 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    Character char_4728 = new_Character(L' ');
    Constant char_4728_Const = new_Constant((Optr)char_4728);
    // add:. 
    Send PSend20854 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)char_4728_Const);
    // add:. 
    Send PSend20855 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_3_Const);
    // add:. 
    Send PSend20856 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)int_1_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend20857 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode20850 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20851, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20852, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20853, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4728, (Optr)&t_send1, (Optr)PSend20854, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20855, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20856, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend20857, (Optr)&t_method_return);
    Block PBlock20848 = new_Block_with(PArray20849, empty_Array, PThreadedCode20850, 7, PSend20851, PSend20852, PSend20853, PSend20854, PSend20855, PSend20856, PSend20857);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend20858 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // value:. 
    Send PSend20847 = new_Send((Optr)PBlock20848, SMB_value_, 1, (Optr)PSend20858);
    Assign PAssign20846 = new_Assign((Optr)VAR_format_0_1, (Optr)PSend20847);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend20859 = new_Send((Optr)VAR_format_0_1, SMB_asArray, 0);
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    // printOn:format:. 
    Send PSend20860 = new_Send((Optr)self, SMB_printOn_format_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend20859);
    Array PThreadedCode20845 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign20846, (Optr)&t_push_closure, (Optr)PBlock20848, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend20858, (Optr)&t_send1, (Optr)PSend20847, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_format_0_1, (Optr)&t_send0, (Optr)PSend20859, (Optr)&t_send2, (Optr)PSend20860, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20842 = new_Method_with(PArray20843, PArray20844, empty_Array, PThreadedCode20845, 3, PAssign20846, PSend20860, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20842, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_dayMonthYearDo_() {
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20862 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // dayMonthYearDo:. 
    Send PSend20864 = new_Send((Optr)slot_Chronology_Timespan_start, SMB_dayMonthYearDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode20863 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Chronology_Timespan_start, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend20864, (Optr)&t_method_return);
    Method PMethod20861 = new_Method_with(PArray20862, empty_Array, empty_Array, PThreadedCode20863, 1, PSend20864);
    
    MethodClosure MC_SMB_dayMonthYearDo_ = new_MethodClosure((Method)PMethod20861, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_dayMonthYearDo_, MC_SMB_dayMonthYearDo_);
}


static void init_SMB_printOn_format_() {
    Symbol SMB_printOn_format_ = new_Symbol(L"printOn:format:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_formatArray_0_1 = new_Variable_named(L"formatArray", 0);
    Array PArray20866 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_formatArray_0_1);
    Variable VAR_gregorian_0_2 = new_Variable_named(L"gregorian", 0);
    Variable VAR_twoDigits_0_3 = new_Variable_named(L"twoDigits", 0);
    Variable VAR_element_0_4 = new_Variable_named(L"element", 0);
    Variable VAR_monthFormat_0_5 = new_Variable_named(L"monthFormat", 0);
    Array PArray20867 = new_Array_with(4, (Optr)VAR_gregorian_0_2, (Optr)VAR_twoDigits_0_3, (Optr)VAR_element_0_4, (Optr)VAR_monthFormat_0_5);
    Symbol SMB_dayMonthYearDo_ = new_Symbol(L"dayMonthYearDo:");
    Variable VAR_d_1_0 = new_Variable_named(L"d", 1);
    Variable VAR_m_1_1 = new_Variable_named(L"m", 1);
    Variable VAR_y_1_2 = new_Variable_named(L"y", 1);
    Array PArray20872 = new_Array_with(3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend20874 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_d_1_0, (Optr)VAR_m_1_1, (Optr)VAR_y_1_2);
    Array PThreadedCode20873 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_d_1_0, (Optr)&t_push_variable, (Optr)VAR_m_1_1, (Optr)&t_push_variable, (Optr)VAR_y_1_2, (Optr)&t_send3, (Optr)PSend20874, (Optr)&t_method_return);
    Block PBlock20871 = new_Block_with(PArray20872, empty_Array, PThreadedCode20873, 1, PSend20874);
    // dayMonthYearDo:. 
    Send PSend20870 = new_Send((Optr)self, SMB_dayMonthYearDo_, 1, (Optr)PBlock20871);
    Assign PAssign20869 = new_Assign((Optr)VAR_gregorian_0_2, (Optr)PSend20870);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend20878 = new_Send((Optr)VAR_formatArray_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_6 = new_SmallInt(6);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // >. 
    Send PSend20877 = new_Send((Optr)PSend20878, SMB__gt_, 1, (Optr)int_6_Const);
    Symbol SMB_and_ = new_Symbol(L"and:");
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:. 
    Send PSend20881 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_7_Const);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend20882 = new_Send((Optr)PSend20881, SMB__gt_, 1, (Optr)int_1_Const);
    Array PThreadedCode20880 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend20881, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20882, (Optr)&t_block_return);
    Block PBlock20879 = new_Block_with(empty_Array, empty_Array, PThreadedCode20880, 1, PSend20882);
    // and:. 
    Send PSend20876 = new_Send((Optr)PSend20877, SMB_and_, 1, (Optr)PBlock20879);
    Assign PAssign20875 = new_Assign((Optr)VAR_twoDigits_0_3, (Optr)PSend20876);
    SmallInt int_3 = new_SmallInt(3);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray20884 = new_Array_with(1, (Optr)VAR_i_1_0);
    // at:. 
    Send PSend20887 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)VAR_i_1_0);
    Assign PAssign20886 = new_Assign((Optr)VAR_element_0_4, (Optr)PSend20887);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20888 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend20895 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20896 = new_Send((Optr)PSend20895, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9456 = new_Character(L'0');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_9456_Const = new_Constant((Optr)char_9456);
    // <<. 
    Send PSend20900 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode20899 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend20900, (Optr)&t_block_return);
    Block PBlock20898 = new_Block_with(empty_Array, empty_Array, PThreadedCode20899, 1, PSend20900);
    // ifTrue:. 
    Send PSend20897 = new_Send((Optr)PSend20896, SMB_ifTrue_, 1, (Optr)PBlock20898);
    // first. 
    Send PSend20901 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend20902 = new_Send((Optr)PSend20901, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20894 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20895, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20896, (Optr)&t_send_ifTrue_, (Optr)PSend20897, (Optr)PBlock20898, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20901, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20902, (Optr)&t_block_return);
    Block PBlock20893 = new_Block_with(empty_Array, empty_Array, PThreadedCode20894, 2, PSend20897, PSend20902);
    // first. 
    Send PSend20905 = new_Send((Optr)VAR_gregorian_0_2, SMB_first, 0);
    // printOn:. 
    Send PSend20906 = new_Send((Optr)PSend20905, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20904 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20905, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20906, (Optr)&t_block_return);
    Block PBlock20903 = new_Block_with(empty_Array, empty_Array, PThreadedCode20904, 1, PSend20906);
    // ifTrue:ifFalse:. 
    Send PSend20892 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20893, (Optr)PBlock20903);
    Array PThreadedCode20891 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20892, (Optr)PBlock20893, (Optr)PBlock20903, (Optr)&t_block_return);
    Block PBlock20890 = new_Block_with(empty_Array, empty_Array, PThreadedCode20891, 1, PSend20892);
    // ifTrue:. 
    Send PSend20889 = new_Send((Optr)PSend20888, SMB_ifTrue_, 1, (Optr)PBlock20890);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // =. 
    Send PSend20907 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_2_Const);
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:. 
    Send PSend20912 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_5_Const);
    Assign PAssign20911 = new_Assign((Optr)VAR_monthFormat_0_5, (Optr)PSend20912);
    // =. 
    Send PSend20913 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_middle = new_Symbol(L"middle");
    // middle. 
    Send PSend20920 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // <. 
    Send PSend20921 = new_Send((Optr)PSend20920, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20925 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode20924 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend20925, (Optr)&t_block_return);
    Block PBlock20923 = new_Block_with(empty_Array, empty_Array, PThreadedCode20924, 1, PSend20925);
    // ifTrue:. 
    Send PSend20922 = new_Send((Optr)PSend20921, SMB_ifTrue_, 1, (Optr)PBlock20923);
    // middle. 
    Send PSend20926 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20927 = new_Send((Optr)PSend20926, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20919 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20920, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20921, (Optr)&t_send_ifTrue_, (Optr)PSend20922, (Optr)PBlock20923, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20926, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20927, (Optr)&t_block_return);
    Block PBlock20918 = new_Block_with(empty_Array, empty_Array, PThreadedCode20919, 2, PSend20922, PSend20927);
    // middle. 
    Send PSend20930 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // printOn:. 
    Send PSend20931 = new_Send((Optr)PSend20930, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20929 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20930, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20931, (Optr)&t_block_return);
    Block PBlock20928 = new_Block_with(empty_Array, empty_Array, PThreadedCode20929, 1, PSend20931);
    // ifTrue:ifFalse:. 
    Send PSend20917 = new_Send((Optr)VAR_twoDigits_0_3, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20918, (Optr)PBlock20928);
    Array PThreadedCode20916 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_twoDigits_0_3, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20917, (Optr)PBlock20918, (Optr)PBlock20928, (Optr)&t_block_return);
    Block PBlock20915 = new_Block_with(empty_Array, empty_Array, PThreadedCode20916, 1, PSend20917);
    // ifTrue:. 
    Send PSend20914 = new_Send((Optr)PSend20913, SMB_ifTrue_, 1, (Optr)PBlock20915);
    // =. 
    Send PSend20932 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_2_Const);
    // middle. 
    Send PSend20936 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    // nameOfMonth:. 
    Send PSend20937 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20936);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // copyFrom:to:. 
    Send PSend20938 = new_Send((Optr)PSend20937, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)int_3_Const);
    // printOn:. 
    Send PSend20939 = new_Send((Optr)PSend20938, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20935 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20936, (Optr)&t_send1, (Optr)PSend20937, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send2, (Optr)PSend20938, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20939, (Optr)&t_block_return);
    Block PBlock20934 = new_Block_with(empty_Array, empty_Array, PThreadedCode20935, 1, PSend20939);
    // ifTrue:. 
    Send PSend20933 = new_Send((Optr)PSend20932, SMB_ifTrue_, 1, (Optr)PBlock20934);
    // =. 
    Send PSend20940 = new_Send((Optr)VAR_monthFormat_0_5, SMB__equals_, 1, (Optr)int_3_Const);
    // middle. 
    Send PSend20944 = new_Send((Optr)VAR_gregorian_0_2, SMB_middle, 0);
    // nameOfMonth:. 
    Send PSend20945 = new_Send((Optr)Month_classReference, SMB_nameOfMonth_, 1, (Optr)PSend20944);
    // printOn:. 
    Send PSend20946 = new_Send((Optr)PSend20945, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20943 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Month_classReference, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20944, (Optr)&t_send1, (Optr)PSend20945, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20946, (Optr)&t_block_return);
    Block PBlock20942 = new_Block_with(empty_Array, empty_Array, PThreadedCode20943, 1, PSend20946);
    // ifTrue:. 
    Send PSend20941 = new_Send((Optr)PSend20940, SMB_ifTrue_, 1, (Optr)PBlock20942);
    Array PThreadedCode20910 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign20911, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend20912, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20913, (Optr)&t_send_ifTrue_, (Optr)PSend20914, (Optr)PBlock20915, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20932, (Optr)&t_send_ifTrue_, (Optr)PSend20933, (Optr)PBlock20934, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_monthFormat_0_5, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20940, (Optr)&t_send_ifTrue_, (Optr)PSend20941, (Optr)PBlock20942, (Optr)&t_block_return);
    Block PBlock20909 = new_Block_with(empty_Array, empty_Array, PThreadedCode20910, 4, PAssign20911, PSend20914, PSend20933, PSend20941);
    // ifTrue:. 
    Send PSend20908 = new_Send((Optr)PSend20907, SMB_ifTrue_, 1, (Optr)PBlock20909);
    // =. 
    Send PSend20947 = new_Send((Optr)VAR_element_0_4, SMB__equals_, 1, (Optr)int_3_Const);
    // at:. 
    Send PSend20951 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_6_Const);
    // =. 
    Send PSend20952 = new_Send((Optr)PSend20951, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend20956 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // printOn:. 
    Send PSend20957 = new_Send((Optr)PSend20956, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20955 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20956, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20957, (Optr)&t_block_return);
    Block PBlock20954 = new_Block_with(empty_Array, empty_Array, PThreadedCode20955, 1, PSend20957);
    // last. 
    Send PSend20960 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    // <. 
    Send PSend20961 = new_Send((Optr)PSend20960, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20965 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9456_Const);
    Array PThreadedCode20964 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send1, (Optr)PSend20965, (Optr)&t_block_return);
    Block PBlock20963 = new_Block_with(empty_Array, empty_Array, PThreadedCode20964, 1, PSend20965);
    // ifTrue:. 
    Send PSend20962 = new_Send((Optr)PSend20961, SMB_ifTrue_, 1, (Optr)PBlock20963);
    // last. 
    Send PSend20966 = new_Send((Optr)VAR_gregorian_0_2, SMB_last, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // \\. 
    Send PSend20967 = new_Send((Optr)PSend20966, SMB__modulo_, 1, (Optr)int_100_Const);
    // printOn:. 
    Send PSend20968 = new_Send((Optr)PSend20967, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20959 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20960, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20961, (Optr)&t_send_ifTrue_, (Optr)PSend20962, (Optr)PBlock20963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_gregorian_0_2, (Optr)&t_send0, (Optr)PSend20966, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend20967, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20968, (Optr)&t_block_return);
    Block PBlock20958 = new_Block_with(empty_Array, empty_Array, PThreadedCode20959, 2, PSend20962, PSend20968);
    // ifTrue:ifFalse:. 
    Send PSend20953 = new_Send((Optr)PSend20952, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20954, (Optr)PBlock20958);
    Array PThreadedCode20950 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20951, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20952, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20953, (Optr)PBlock20954, (Optr)PBlock20958, (Optr)&t_block_return);
    Block PBlock20949 = new_Block_with(empty_Array, empty_Array, PThreadedCode20950, 1, PSend20953);
    // ifTrue:. 
    Send PSend20948 = new_Send((Optr)PSend20947, SMB_ifTrue_, 1, (Optr)PBlock20949);
    // <. 
    Send PSend20969 = new_Send((Optr)VAR_i_1_0, SMB__lt_, 1, (Optr)int_3_Const);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend20973 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend20974 = new_Send((Optr)PSend20973, SMB__notEquals_, 1, (Optr)int_0_Const);
    // at:. 
    Send PSend20978 = new_Send((Optr)VAR_formatArray_0_1, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend20979 = new_Send((Optr)PSend20978, SMB_asCharacter, 0);
    // <<. 
    Send PSend20980 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend20979);
    Array PThreadedCode20977 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20978, (Optr)&t_send0, (Optr)PSend20979, (Optr)&t_send1, (Optr)PSend20980, (Optr)&t_block_return);
    Block PBlock20976 = new_Block_with(empty_Array, empty_Array, PThreadedCode20977, 1, PSend20980);
    // ifTrue:. 
    Send PSend20975 = new_Send((Optr)PSend20974, SMB_ifTrue_, 1, (Optr)PBlock20976);
    Array PThreadedCode20972 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend20973, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20974, (Optr)&t_send_ifTrue_, (Optr)PSend20975, (Optr)PBlock20976, (Optr)&t_block_return);
    Block PBlock20971 = new_Block_with(empty_Array, empty_Array, PThreadedCode20972, 1, PSend20975);
    // ifTrue:. 
    Send PSend20970 = new_Send((Optr)PSend20969, SMB_ifTrue_, 1, (Optr)PBlock20971);
    Array PThreadedCode20885 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign20886, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend20887, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20888, (Optr)&t_send_ifTrue_, (Optr)PSend20889, (Optr)PBlock20890, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend20907, (Optr)&t_send_ifTrue_, (Optr)PSend20908, (Optr)PBlock20909, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_element_0_4, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20947, (Optr)&t_send_ifTrue_, (Optr)PSend20948, (Optr)PBlock20949, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend20969, (Optr)&t_send_ifTrue_, (Optr)PSend20970, (Optr)PBlock20971, (Optr)&t_method_return);
    Block PBlock20883 = new_Block_with(PArray20884, empty_Array, PThreadedCode20885, 5, PAssign20886, PSend20889, PSend20908, PSend20948, PSend20970);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend20981 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)int_3_Const, (Optr)PBlock20883);
    Array PThreadedCode20868 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign20869, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock20871, (Optr)&t_send1, (Optr)PSend20870, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20875, (Optr)&t_push_variable, (Optr)VAR_formatArray_0_1, (Optr)&t_send0, (Optr)PSend20878, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend20877, (Optr)&t_push_closure, (Optr)PBlock20879, (Optr)&t_send1, (Optr)PSend20876, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock20883, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend20981, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20865 = new_Method_with(PArray20866, PArray20867, empty_Array, PThreadedCode20868, 4, PAssign20869, PAssign20875, PSend20981, self);
    
    MethodClosure MC_SMB_printOn_format_ = new_MethodClosure((Method)PMethod20865, Chronology_Date_Class);
    store_method(Chronology_Date_Class, SMB_printOn_format_, MC_SMB_printOn_format_);
}


static void init_class_SMB_julianDayNumber_() {
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    Variable VAR_aJulianDayNumber_0_0 = new_Variable_named(L"aJulianDayNumber", 0);
    Array PArray20983 = new_Array_with(1, (Optr)VAR_aJulianDayNumber_0_0);
    // julianDayNumber:. 
    Send PSend20985 = new_Send((Optr)DateAndTime_classReference, SMB_julianDayNumber_, 1, (Optr)VAR_aJulianDayNumber_0_0);
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    // starting:. 
    Send PSend20986 = new_Send((Optr)self, SMB_starting_, 1, (Optr)PSend20985);
    Array PThreadedCode20984 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DateAndTime_classReference, (Optr)&t_push_variable, (Optr)VAR_aJulianDayNumber_0_0, (Optr)&t_send1, (Optr)PSend20985, (Optr)&t_send1, (Optr)PSend20986, (Optr)&t_method_return);
    Method PMethod20982 = new_Method_with(PArray20983, empty_Array, empty_Array, PThreadedCode20984, 1, PSend20986);
    
    MethodClosure MC_SMB_julianDayNumber_ = new_MethodClosure((Method)PMethod20982, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_julianDayNumber_, MC_SMB_julianDayNumber_);
}


static void init_class_SMB_today() {
    Symbol SMB_today = new_Symbol(L"today");
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend20989 = new_Send((Optr)self, SMB_current, 0);
    Array PThreadedCode20988 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20989, (Optr)&t_method_return);
    Method PMethod20987 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20988, 1, PSend20989);
    
    MethodClosure MC_SMB_today = new_MethodClosure((Method)PMethod20987, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_today, MC_SMB_today);
}


static void init_class_SMB_starting_() {
    Symbol SMB_starting_ = new_Symbol(L"starting:");
    Variable VAR_aDateAndTime_0_0 = new_Variable_named(L"aDateAndTime", 0);
    Array PArray20991 = new_Array_with(1, (Optr)VAR_aDateAndTime_0_0);
    Symbol SMB_midnight = new_Symbol(L"midnight");
    // midnight. 
    Send PSend20993 = new_Send((Optr)VAR_aDateAndTime_0_0, SMB_midnight, 0);
    Symbol SMB_days_ = new_Symbol(L"days:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // days:. 
    Send PSend20994 = new_Send((Optr)Duration_classReference, SMB_days_, 1, (Optr)int_1_Const);
    Symbol SMB_starting_duration_ = new_Symbol(L"starting:duration:");
    Super PSuper20995 = new_Super(SMB_starting_duration_, 2, (Optr)PSend20993, (Optr)PSend20994);
    Array PThreadedCode20992 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aDateAndTime_0_0, (Optr)&t_send0, (Optr)PSend20993, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend20994, (Optr)&t_super2, (Optr)PSuper20995, (Optr)&t_method_return);
    Method PMethod20990 = new_Method_with(PArray20991, empty_Array, empty_Array, PThreadedCode20992, 1, PSuper20995);
    
    MethodClosure MC_SMB_starting_ = new_MethodClosure((Method)PMethod20990, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_starting_, MC_SMB_starting_);
}


static void init_class_SMB_fromSeconds_() {
    Symbol SMB_fromSeconds_ = new_Symbol(L"fromSeconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20997 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20999 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend21000 = new_Send((Optr)PSend20999, SMB_days, 0);
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    // fromDays:. 
    Send PSend21001 = new_Send((Optr)self, SMB_fromDays_, 1, (Optr)PSend21000);
    Array PThreadedCode20998 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20999, (Optr)&t_send0, (Optr)PSend21000, (Optr)&t_send1, (Optr)PSend21001, (Optr)&t_method_return);
    Method PMethod20996 = new_Method_with(PArray20997, empty_Array, empty_Array, PThreadedCode20998, 1, PSend21001);
    
    MethodClosure MC_SMB_fromSeconds_ = new_MethodClosure((Method)PMethod20996, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromSeconds_, MC_SMB_fromSeconds_);
}


static void init_class_SMB_fromDays_() {
    Symbol SMB_fromDays_ = new_Symbol(L"fromDays:");
    Variable VAR_dayCount_0_0 = new_Variable_named(L"dayCount", 0);
    Array PArray21003 = new_Array_with(1, (Optr)VAR_dayCount_0_0);
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    // squeakEpoch. 
    Send PSend21005 = new_Send((Optr)PChronologyConstants_classReference, SMB_squeakEpoch, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend21006 = new_Send((Optr)VAR_dayCount_0_0, SMB__plus_, 1, (Optr)PSend21005);
    Symbol SMB_julianDayNumber_ = new_Symbol(L"julianDayNumber:");
    // julianDayNumber:. 
    Send PSend21007 = new_Send((Optr)self, SMB_julianDayNumber_, 1, (Optr)PSend21006);
    Array PThreadedCode21004 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dayCount_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21005, (Optr)&t_send1, (Optr)PSend21006, (Optr)&t_send1, (Optr)PSend21007, (Optr)&t_method_return);
    Method PMethod21002 = new_Method_with(PArray21003, empty_Array, empty_Array, PThreadedCode21004, 1, PSend21007);
    
    MethodClosure MC_SMB_fromDays_ = new_MethodClosure((Method)PMethod21002, HEADER(Chronology_Date_Class));
    store_method(HEADER(Chronology_Date_Class), SMB_fromDays_, MC_SMB_fromDays_);
}


static void init_class_SMB_dateAndTimeNow() {
    Symbol SMB_dateAndTimeNow = new_Symbol(L"dateAndTimeNow");
    // dateAndTimeNow. 
    Send PSend21010 = new_Send((Optr)Time_classReference, SMB_dateAndTimeNow, 0);
    Array PThreadedCode21009 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21010, (Optr)&t_method_return);
    Method PMethod21008 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21009, 1, PSend21010);
    
    MethodClosure MC_SMB_dateAndTimeNow = new_MethodClosure((Method)PMethod21008, HEADER(Chronology_Date_Class));
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