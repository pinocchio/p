#include <lib/class/PEG/StringScanner.h>


Optr layout_PEG_StringScanner_Class_class;
Optr slot_PEG_StringScanner_separator;
Optr slot_PEG_StringScanner_cache;
Optr slot_PEG_StringScanner_stack;
Optr slot_PEG_StringScanner_longestMatch;
Optr layout_PEG_StringScanner;


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18832 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18836 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend18837 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend18836);
    Array PThreadedCode18835 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18836, (Optr)&t_send1, (Optr)PSend18837, (Optr)&t_block_return);
    Block PBlock18834 = new_Block_with(empty_Array, empty_Array, PThreadedCode18835, 1, PSend18837);
    // ifFalse:. 
    Send PSend18833 = new_Send((Optr)PSend18832, SMB_ifFalse_, 1, (Optr)PBlock18834);
    Array PThreadedCode18831 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18832, (Optr)&t_send_ifFalse_, (Optr)PSend18833, (Optr)PBlock18834, (Optr)&t_method_return);
    Method PMethod18830 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18831, 1, PSend18833);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod18830, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_on_separator_() {
    /*
    on: aString separator: aSeparator
// 	^ self basicNew on: aString separator: aSeparator
    */
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aSeparator_0_1 = new_Variable_named(L"aSeparator", 0);
    Array PArray18839 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend18841 = new_Send((Optr)VAR_aString_0_0, SMB_asString, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Super PSuper18842 = new_Super(SMB_on_, 1, (Optr)PSend18841);
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    // withoutOmit. 
    Send PSend18844 = new_Send((Optr)VAR_aSeparator_0_1, SMB_withoutOmit, 0);
    Assign PAssign18843 = new_Assign((Optr)slot_PEG_StringScanner_separator, (Optr)PSend18844);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend18848 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18847 = new_Send((Optr)PSend18848, SMB__plus_, 1, (Optr)int_1_Const);
    // new:. 
    Send PSend18846 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend18847);
    Assign PAssign18845 = new_Assign((Optr)slot_PEG_StringScanner_cache, (Optr)PSend18846);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign18849 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18851 = new_Send((Optr)PEGStack_classReference, SMB_new, 0);
    Assign PAssign18850 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)PSend18851);
    Array PThreadedCode18840 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend18841, (Optr)&t_super1, (Optr)PSuper18842, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18843, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send0, (Optr)PSend18844, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18845, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend18848, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18847, (Optr)&t_send1, (Optr)PSend18846, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18849, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18850, (Optr)&t_push_class_reference, (Optr)PEGStack_classReference, (Optr)&t_send0, (Optr)PSend18851, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18838 = new_Method_with(PArray18839, empty_Array, empty_Array, PThreadedCode18840, 6, PSuper18842, PAssign18843, PAssign18845, PAssign18849, PAssign18850, self);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod18838, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_on_separator_, MC_SMB_on_separator_);
}


static void init_SMB_memoizeMatch_() {
    Symbol SMB_memoizeMatch_ = new_Symbol(L"memoizeMatch:");
    Variable VAR_parser_0_0 = new_Variable_named(L"parser", 0);
    Array PArray18853 = new_Array_with(1, (Optr)VAR_parser_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray18854 = new_Array_with(2, (Optr)VAR_result_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18857 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_bucket = new_Symbol(L"bucket");
    // bucket. 
    Send PSend18860 = new_Send((Optr)self, SMB_bucket, 0);
    Assign PAssign18859 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend18860);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend18865 = new_Send((Optr)VAR_parser_0_0, SMB_parseOn_, 1, (Optr)self);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend18870 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign18869 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend18870);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18871 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_peek, 0);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend18872 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__at_, 1, (Optr)PSend18871);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18873 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)PSend18872);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18874 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18868 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign18869, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend18870, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_send0, (Optr)PSend18871, (Optr)&t_send1, (Optr)PSend18872, (Optr)&t_send2, (Optr)PSend18873, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18874, (Optr)&t_block_return);
    Block PBlock18867 = new_Block_with(empty_Array, empty_Array, PThreadedCode18868, 3, PAssign18869, PSend18873, PSend18874);
    // max:. 
    Send PSend18878 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign18877 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend18878);
    // at:put:. 
    Send PSend18879 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)nil_Const);
    // escape:. 
    Send PSend18880 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18876 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18877, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend18878, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend18879, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18880, (Optr)&t_block_return);
    Block PBlock18875 = new_Block_with(empty_Array, empty_Array, PThreadedCode18876, 3, PAssign18877, PSend18879, PSend18880);
    // ifTrue:ifFalse:. 
    Send PSend18866 = new_Send((Optr)PSend18865, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock18867, (Optr)PBlock18875);
    Array PThreadedCode18864 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18865, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend18866, (Optr)PBlock18867, (Optr)PBlock18875, (Optr)&t_block_return);
    Block PBlock18863 = new_Block_with(empty_Array, empty_Array, PThreadedCode18864, 1, PSend18866);
    // at:ifAbsent:. 
    Send PSend18862 = new_Send((Optr)VAR_bucket_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_parser_0_0, (Optr)PBlock18863);
    Assign PAssign18861 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend18862);
    // escape:. 
    Send PSend18883 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18882 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18883, (Optr)&t_block_return);
    Block PBlock18881 = new_Block_with(empty_Array, empty_Array, PThreadedCode18882, 1, PSend18883);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18884 = new_Send((Optr)VAR_result_0_1, SMB_ifNil_, 1, (Optr)PBlock18881);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend18886 = new_Send((Optr)VAR_result_0_1, SMB_x, 0);
    Assign PAssign18885 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18886);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend18887 = new_Send((Optr)VAR_result_0_1, SMB_y, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18888 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend18887);
    Array PThreadedCode18858 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign18859, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18860, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18861, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_closure, (Optr)PBlock18863, (Optr)&t_send2, (Optr)PSend18862, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_closure, (Optr)PBlock18881, (Optr)&t_send1, (Optr)PSend18884, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18885, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend18886, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend18887, (Optr)&t_send1, (Optr)PSend18888, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18856 = new_Block_with(PArray18857, empty_Array, PThreadedCode18858, 6, PAssign18859, PAssign18861, PSend18884, PAssign18885, PSend18888, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18889 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18856);
    Array PThreadedCode18855 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18856, (Optr)&t_send1, (Optr)PSend18889, (Optr)&t_method_return);
    Method PMethod18852 = new_Method_with(PArray18853, PArray18854, empty_Array, PThreadedCode18855, 1, PSend18889);
    
    MethodClosure MC_SMB_memoizeMatch_ = new_MethodClosure((Method)PMethod18852, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_memoizeMatch_, MC_SMB_memoizeMatch_);
}


static void init_SMB_scanAllIn_() {
    Symbol SMB_scanAllIn_ = new_Symbol(L"scanAllIn:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray18891 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18894 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18896 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend18897 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray18899 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend18901 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend18902 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend18901);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18903 = new_Send((Optr)PSend18902, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18908 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18907 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18908);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18909 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18906 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign18907, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18908, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18909, (Optr)&t_block_return);
    Block PBlock18905 = new_Block_with(empty_Array, empty_Array, PThreadedCode18906, 2, PAssign18907, PSend18909);
    // ifTrue:. 
    Send PSend18904 = new_Send((Optr)PSend18903, SMB_ifTrue_, 1, (Optr)PBlock18905);
    Array PThreadedCode18900 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend18901, (Optr)&t_send1, (Optr)PSend18902, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18903, (Optr)&t_send_ifTrue_, (Optr)PSend18904, (Optr)PBlock18905, (Optr)&t_method_return);
    Block PBlock18898 = new_Block_with(PArray18899, empty_Array, PThreadedCode18900, 1, PSend18904);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend18910 = new_Send((Optr)PSend18896, SMB_to_do_, 2, (Optr)PSend18897, (Optr)PBlock18898);
    // size. 
    Send PSend18912 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign18911 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18912);
    Array PThreadedCode18895 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18896, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend18897, (Optr)&t_push_closure, (Optr)PBlock18898, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend18910, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18911, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend18912, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18893 = new_Block_with(PArray18894, empty_Array, PThreadedCode18895, 3, PSend18910, PAssign18911, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18913 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18893);
    Array PThreadedCode18892 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18893, (Optr)&t_send1, (Optr)PSend18913, (Optr)&t_method_return);
    Method PMethod18890 = new_Method_with(PArray18891, empty_Array, empty_Array, PThreadedCode18892, 1, PSend18913);
    
    MethodClosure MC_SMB_scanAllIn_ = new_MethodClosure((Method)PMethod18890, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanAllIn_, MC_SMB_scanAllIn_);
}


static void init_SMB_scan_() {
    Symbol SMB_scan_ = new_Symbol(L"scan:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray18915 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18918 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend18920 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18924 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18923 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18924, (Optr)&t_block_return);
    Block PBlock18922 = new_Block_with(empty_Array, empty_Array, PThreadedCode18923, 1, PSend18924);
    // ifFalse:. 
    Send PSend18921 = new_Send((Optr)PSend18920, SMB_ifFalse_, 1, (Optr)PBlock18922);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend18927 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend18926 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend18927);
    Assign PAssign18925 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18926);
    Array PThreadedCode18919 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend18920, (Optr)&t_send_ifFalse_, (Optr)PSend18921, (Optr)PBlock18922, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18925, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend18927, (Optr)&t_send1, (Optr)PSend18926, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18917 = new_Block_with(PArray18918, empty_Array, PThreadedCode18919, 3, PSend18921, PAssign18925, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18928 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18917);
    Array PThreadedCode18916 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18917, (Optr)&t_send1, (Optr)PSend18928, (Optr)&t_method_return);
    Method PMethod18914 = new_Method_with(PArray18915, empty_Array, empty_Array, PThreadedCode18916, 1, PSend18928);
    
    MethodClosure MC_SMB_scan_ = new_MethodClosure((Method)PMethod18914, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scan_, MC_SMB_scan_);
}


static void init_SMB_scanCharacter_() {
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray18930 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18933 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18935 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18939 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18938 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18939, (Optr)&t_block_return);
    Block PBlock18937 = new_Block_with(empty_Array, empty_Array, PThreadedCode18938, 1, PSend18939);
    // ifTrue:. 
    Send PSend18936 = new_Send((Optr)PSend18935, SMB_ifTrue_, 1, (Optr)PBlock18937);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18940 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend18941 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend18940);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18942 = new_Send((Optr)PSend18941, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18943 = new_Send((Optr)PSend18942, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend18947 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18946 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18947, (Optr)&t_block_return);
    Block PBlock18945 = new_Block_with(empty_Array, empty_Array, PThreadedCode18946, 1, PSend18947);
    // ifFalse:. 
    Send PSend18944 = new_Send((Optr)PSend18943, SMB_ifFalse_, 1, (Optr)PBlock18945);
    // +. 
    Send PSend18949 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18948 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18949);
    Array PThreadedCode18934 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18935, (Optr)&t_send_ifTrue_, (Optr)PSend18936, (Optr)PBlock18937, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18940, (Optr)&t_send1, (Optr)PSend18941, (Optr)&t_send0, (Optr)PSend18942, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend18943, (Optr)&t_send_ifFalse_, (Optr)PSend18944, (Optr)PBlock18945, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18948, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18949, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18932 = new_Block_with(PArray18933, empty_Array, PThreadedCode18934, 4, PSend18936, PSend18944, PAssign18948, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18950 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18932);
    Array PThreadedCode18931 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18932, (Optr)&t_send1, (Optr)PSend18950, (Optr)&t_method_return);
    Method PMethod18929 = new_Method_with(PArray18930, empty_Array, empty_Array, PThreadedCode18931, 1, PSend18950);
    
    MethodClosure MC_SMB_scanCharacter_ = new_MethodClosure((Method)PMethod18929, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanCharacter_, MC_SMB_scanCharacter_);
}


static void init_SMB_omitSkipWhitespace() {
    Symbol SMB_omitSkipWhitespace = new_Symbol(L"omitSkipWhitespace");
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
    Send PSend18953 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode18952 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18953, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18951 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18952, 2, PSend18953, self);
    
    MethodClosure MC_SMB_omitSkipWhitespace = new_MethodClosure((Method)PMethod18951, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_omitSkipWhitespace, MC_SMB_omitSkipWhitespace);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray18955 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Assign PAssign18957 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode18956 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18957, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18954 = new_Method_with(PArray18955, empty_Array, empty_Array, PThreadedCode18956, 2, PAssign18957, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod18954, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_backward() {
    Symbol SMB_backward = new_Symbol(L"backward");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18961 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18960 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18961);
    Array PThreadedCode18959 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign18960, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18961, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18958 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18959, 2, PAssign18960, self);
    
    MethodClosure MC_SMB_backward = new_MethodClosure((Method)PMethod18958, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_backward, MC_SMB_backward);
}


static void init_SMB_skipWhitespace() {
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
    Send PSend18964 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode18963 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18964, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18962 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18963, 2, PSend18964, self);
    
    MethodClosure MC_SMB_skipWhitespace = new_MethodClosure((Method)PMethod18962, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_skipWhitespace, MC_SMB_skipWhitespace);
}


static void init_SMB_pushUntil_() {
    Symbol SMB_pushUntil_ = new_Symbol(L"pushUntil:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray18966 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray18967 = new_Array_with(1, (Optr)VAR_s_0_1);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18971 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend18974 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend18975 = new_Send((Optr)PSend18974, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode18973 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend18974, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18975, (Optr)&t_block_return);
    Block PBlock18972 = new_Block_with(empty_Array, empty_Array, PThreadedCode18973, 1, PSend18975);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend18970 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend18971, (Optr)PBlock18972);
    Assign PAssign18969 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend18970);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18977 = new_Send((Optr)VAR_s_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18976 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend18977);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend18978 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Assign PAssign18979 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Array PThreadedCode18968 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign18969, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18971, (Optr)&t_push_closure, (Optr)PBlock18972, (Optr)&t_send3, (Optr)PSend18970, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18976, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18977, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send3, (Optr)PSend18978, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18979, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18965 = new_Method_with(PArray18966, PArray18967, empty_Array, PThreadedCode18968, 5, PAssign18969, PAssign18976, PSend18978, PAssign18979, self);
    
    MethodClosure MC_SMB_pushUntil_ = new_MethodClosure((Method)PMethod18965, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_pushUntil_, MC_SMB_pushUntil_);
}


static void init_SMB_scanUntil_() {
    Symbol SMB_scanUntil_ = new_Symbol(L"scanUntil:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray18981 = new_Array_with(1, (Optr)VAR_char_0_0);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18985 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend18988 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend18989 = new_Send((Optr)PSend18988, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode18987 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend18988, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18989, (Optr)&t_block_return);
    Block PBlock18986 = new_Block_with(empty_Array, empty_Array, PThreadedCode18987, 1, PSend18989);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend18984 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend18985, (Optr)PBlock18986);
    Assign PAssign18983 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18984);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18991 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18990 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18991);
    Array PThreadedCode18982 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign18983, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18985, (Optr)&t_push_closure, (Optr)PBlock18986, (Optr)&t_send3, (Optr)PSend18984, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18990, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18991, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18980 = new_Method_with(PArray18981, empty_Array, empty_Array, PThreadedCode18982, 3, PAssign18983, PAssign18990, self);
    
    MethodClosure MC_SMB_scanUntil_ = new_MethodClosure((Method)PMethod18980, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanUntil_, MC_SMB_scanUntil_);
}


static void init_SMB_stack_() {
    Symbol SMB_stack_ = new_Symbol(L"stack:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray18993 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign18995 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)VAR_anObject_0_0);
    Array PThreadedCode18994 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18995, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18992 = new_Method_with(PArray18993, empty_Array, empty_Array, PThreadedCode18994, 2, PAssign18995, self);
    
    MethodClosure MC_SMB_stack_ = new_MethodClosure((Method)PMethod18992, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_stack_, MC_SMB_stack_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray18997 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_18999 = new_String(L"PEGStringScanner(");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18999_Const = new_Constant((Optr)string_18999);
    // <<. 
    Send PSend19000 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_18999_Const);
    // printOn:. 
    Send PSend19001 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend19002 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode18998 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_18999, (Optr)&t_send1, (Optr)PSend19000, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend19001, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend19002, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18996 = new_Method_with(PArray18997, empty_Array, empty_Array, PThreadedCode18998, 4, PSend19000, PSend19001, PSend19002, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod18996, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scanPushCharacter_() {
    Symbol SMB_scanPushCharacter_ = new_Symbol(L"scanPushCharacter:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray19004 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19007 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19009 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19013 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19012 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19013, (Optr)&t_block_return);
    Block PBlock19011 = new_Block_with(empty_Array, empty_Array, PThreadedCode19012, 1, PSend19013);
    // ifTrue:. 
    Send PSend19010 = new_Send((Optr)PSend19009, SMB_ifTrue_, 1, (Optr)PBlock19011);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19014 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19015 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19014);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19016 = new_Send((Optr)PSend19015, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19017 = new_Send((Optr)PSend19016, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend19021 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19020 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19021, (Optr)&t_block_return);
    Block PBlock19019 = new_Block_with(empty_Array, empty_Array, PThreadedCode19020, 1, PSend19021);
    // ifFalse:. 
    Send PSend19018 = new_Send((Optr)PSend19017, SMB_ifFalse_, 1, (Optr)PBlock19019);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend19022 = new_Send((Optr)VAR_character_0_0, SMB_asCharacter, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19023 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend19022);
    // +. 
    Send PSend19025 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19024 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19025);
    Array PThreadedCode19008 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19009, (Optr)&t_send_ifTrue_, (Optr)PSend19010, (Optr)PBlock19011, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19014, (Optr)&t_send1, (Optr)PSend19015, (Optr)&t_send0, (Optr)PSend19016, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend19017, (Optr)&t_send_ifFalse_, (Optr)PSend19018, (Optr)PBlock19019, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend19022, (Optr)&t_send1, (Optr)PSend19023, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19024, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19025, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19006 = new_Block_with(PArray19007, empty_Array, PThreadedCode19008, 5, PSend19010, PSend19018, PSend19023, PAssign19024, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19026 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19006);
    Array PThreadedCode19005 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19006, (Optr)&t_send1, (Optr)PSend19026, (Optr)&t_method_return);
    Method PMethod19003 = new_Method_with(PArray19004, empty_Array, empty_Array, PThreadedCode19005, 1, PSend19026);
    
    MethodClosure MC_SMB_scanPushCharacter_ = new_MethodClosure((Method)PMethod19003, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanPushCharacter_, MC_SMB_scanPushCharacter_);
}


static void init_SMB_forward() {
    Symbol SMB_forward = new_Symbol(L"forward");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19030 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19029 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19030);
    Array PThreadedCode19028 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19029, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19030, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19027 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19028, 2, PAssign19029, self);
    
    MethodClosure MC_SMB_forward = new_MethodClosure((Method)PMethod19027, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_forward, MC_SMB_forward);
}


static void init_SMB_parsingFailed() {
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    Assign PAssign19033 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)slot_PEG_StringScanner_longestMatch);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray19035 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend19037 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)self);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend19038 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode19036 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19037, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend19038, (Optr)&t_method_return);
    Block PBlock19034 = new_Block_with(PArray19035, empty_Array, PThreadedCode19036, 2, PSend19037, PSend19038);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19039 = new_Send((Optr)PEGParsingFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19040 = new_Send((Optr)PBlock19034, SMB_value_, 1, (Optr)PSend19039);
    Array PThreadedCode19032 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign19033, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19034, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_send0, (Optr)PSend19039, (Optr)&t_send1, (Optr)PSend19040, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19031 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19032, 3, PAssign19033, PSend19040, self);
    
    MethodClosure MC_SMB_parsingFailed = new_MethodClosure((Method)PMethod19031, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_parsingFailed, MC_SMB_parsingFailed);
}


static void init_SMB_bucket() {
    Symbol SMB_bucket = new_Symbol(L"bucket");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19044 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19046 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19047 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_, 1, (Optr)PSend19046);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray19049 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19051 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_bucket_2_0);
    Array PThreadedCode19050 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_send1, (Optr)PSend19051, (Optr)&t_method_return);
    Block PBlock19048 = new_Block_with(PArray19049, empty_Array, PThreadedCode19050, 1, PSend19051);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend19052 = new_Send((Optr)PSend19047, SMB_ifNotNil_, 1, (Optr)PBlock19048);
    // +. 
    Send PSend19053 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19054 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19055 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_put_, 2, (Optr)PSend19053, (Optr)PSend19054);
    Array PThreadedCode19045 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19046, (Optr)&t_send1, (Optr)PSend19047, (Optr)&t_push_closure, (Optr)PBlock19048, (Optr)&t_send1, (Optr)PSend19052, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19053, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend19054, (Optr)&t_send2, (Optr)PSend19055, (Optr)&t_method_return);
    Block PBlock19043 = new_Block_with(PArray19044, empty_Array, PThreadedCode19045, 2, PSend19052, PSend19055);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19056 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19043);
    Array PThreadedCode19042 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19043, (Optr)&t_send1, (Optr)PSend19056, (Optr)&t_method_return);
    Method PMethod19041 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19042, 1, PSend19056);
    
    MethodClosure MC_SMB_bucket = new_MethodClosure((Method)PMethod19041, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_bucket, MC_SMB_bucket);
}


static void init_SMB_pushAllIn_() {
    Symbol SMB_pushAllIn_ = new_Symbol(L"pushAllIn:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19058 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19061 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19063 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19064 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19066 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19068 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend19069 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend19068);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend19070 = new_Send((Optr)PSend19069, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19074 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19075 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19074);
    // -. 
    Send PSend19077 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19076 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19077);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19078 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19073 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19074, (Optr)&t_send3, (Optr)PSend19075, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19076, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19077, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19078, (Optr)&t_block_return);
    Block PBlock19072 = new_Block_with(empty_Array, empty_Array, PThreadedCode19073, 3, PSend19075, PAssign19076, PSend19078);
    // ifTrue:. 
    Send PSend19071 = new_Send((Optr)PSend19070, SMB_ifTrue_, 1, (Optr)PBlock19072);
    Array PThreadedCode19067 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19068, (Optr)&t_send1, (Optr)PSend19069, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19070, (Optr)&t_send_ifTrue_, (Optr)PSend19071, (Optr)PBlock19072, (Optr)&t_method_return);
    Block PBlock19065 = new_Block_with(PArray19066, empty_Array, PThreadedCode19067, 1, PSend19071);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19079 = new_Send((Optr)PSend19063, SMB_to_do_, 2, (Optr)PSend19064, (Optr)PBlock19065);
    // size. 
    Send PSend19080 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // push:from:to:. 
    Send PSend19081 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19080);
    // size. 
    Send PSend19083 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign19082 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19083);
    Array PThreadedCode19062 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19063, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19064, (Optr)&t_push_closure, (Optr)PBlock19065, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19079, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19080, (Optr)&t_send3, (Optr)PSend19081, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19082, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19083, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19060 = new_Block_with(PArray19061, empty_Array, PThreadedCode19062, 4, PSend19079, PSend19081, PAssign19082, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19084 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19060);
    Array PThreadedCode19059 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19060, (Optr)&t_send1, (Optr)PSend19084, (Optr)&t_method_return);
    Method PMethod19057 = new_Method_with(PArray19058, empty_Array, empty_Array, PThreadedCode19059, 1, PSend19084);
    
    MethodClosure MC_SMB_pushAllIn_ = new_MethodClosure((Method)PMethod19057, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_pushAllIn_, MC_SMB_pushAllIn_);
}


static void init_SMB_scanPush_() {
    Symbol SMB_scanPush_ = new_Symbol(L"scanPush:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19086 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19087 = new_Array_with(1, (Optr)VAR_s_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19090 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend19092 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19096 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19095 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19096, (Optr)&t_block_return);
    Block PBlock19094 = new_Block_with(empty_Array, empty_Array, PThreadedCode19095, 1, PSend19096);
    // ifFalse:. 
    Send PSend19093 = new_Send((Optr)PSend19092, SMB_ifFalse_, 1, (Optr)PBlock19094);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19098 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    Assign PAssign19097 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19098);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19099 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19100 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19099);
    // +. 
    Send PSend19102 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Assign PAssign19101 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19102);
    Array PThreadedCode19091 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend19092, (Optr)&t_send_ifFalse_, (Optr)PSend19093, (Optr)PBlock19094, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19097, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend19098, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19099, (Optr)&t_send3, (Optr)PSend19100, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19101, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19102, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19089 = new_Block_with(PArray19090, empty_Array, PThreadedCode19091, 5, PSend19093, PAssign19097, PSend19100, PAssign19101, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19103 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19089);
    Array PThreadedCode19088 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19089, (Optr)&t_send1, (Optr)PSend19103, (Optr)&t_method_return);
    Method PMethod19085 = new_Method_with(PArray19086, PArray19087, empty_Array, PThreadedCode19088, 1, PSend19103);
    
    MethodClosure MC_SMB_scanPush_ = new_MethodClosure((Method)PMethod19085, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanPush_, MC_SMB_scanPush_);
}


static void init_SMB_stack() {
    Symbol SMB_stack = new_Symbol(L"stack");
    Array PThreadedCode19105 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_method_return);
    Method PMethod19104 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19105, 1, slot_PEG_StringScanner_stack);
    
    MethodClosure MC_SMB_stack = new_MethodClosure((Method)PMethod19104, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_stack, MC_SMB_stack);
}


static void init_SMB_sample() {
    Symbol SMB_sample = new_Symbol(L"sample");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Variable VAR_sampleSize_0_1 = new_Variable_named(L"sampleSize", 0);
    Array PArray19107 = new_Array_with(2, (Optr)VAR_result_0_0, (Optr)VAR_sampleSize_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19111 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_min_ = new_Symbol(L"min:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
    Send PSend19110 = new_Send((Optr)PSend19111, SMB_min_, 1, (Optr)int_20_Const);
    Assign PAssign19109 = new_Assign((Optr)VAR_sampleSize_0_1, (Optr)PSend19110);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend19114 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19113 = new_Send((Optr)PSend19114, SMB_new_, 1, (Optr)VAR_sampleSize_0_1);
    Assign PAssign19112 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend19113);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19115 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_sampleSize_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19116 = new_Send((Optr)PSend19115, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19118 = new_Array_with(1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend19120 = new_Send((Optr)int_1_Const, SMB__plus_, 1, (Optr)VAR_i_1_0);
    // -. 
    Send PSend19121 = new_Send((Optr)PSend19120, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    // +. 
    Send PSend19122 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19123 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19122);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19124 = new_Send((Optr)VAR_result_0_0, SMB_at_put_, 2, (Optr)PSend19121, (Optr)PSend19123);
    Array PThreadedCode19119 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend19120, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19121, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19122, (Optr)&t_send1, (Optr)PSend19123, (Optr)&t_send2, (Optr)PSend19124, (Optr)&t_method_return);
    Block PBlock19117 = new_Block_with(PArray19118, empty_Array, PThreadedCode19119, 1, PSend19124);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19125 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB_to_do_, 2, (Optr)PSend19116, (Optr)PBlock19117);
    Array PThreadedCode19108 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign19109, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19111, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend19110, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19112, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19114, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19113, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19115, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19116, (Optr)&t_push_closure, (Optr)PBlock19117, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod19106 = new_Method_with(empty_Array, PArray19107, empty_Array, PThreadedCode19108, 4, PAssign19109, PAssign19112, PSend19125, VAR_result_0_0);
    
    MethodClosure MC_SMB_sample = new_MethodClosure((Method)PMethod19106, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_sample, MC_SMB_sample);
}


static void init_class_SMB_on_separator_() {
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aSeparator_0_1 = new_Variable_named(L"aSeparator", 0);
    Array PArray19127 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend19129 = new_Send((Optr)self, SMB_basicNew, 0);
    // on:separator:. 
    Send PSend19130 = new_Send((Optr)PSend19129, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Array PThreadedCode19128 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19129, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send2, (Optr)PSend19130, (Optr)&t_method_return);
    Method PMethod19126 = new_Method_with(PArray19127, empty_Array, empty_Array, PThreadedCode19128, 1, PSend19130);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod19126, HEADER(PEG_StringScanner_Class));
    store_method(HEADER(PEG_StringScanner_Class), SMB_on_separator_, MC_SMB_on_separator_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray19132 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend19134 = new_Send((Optr)PEGParser_classReference, SMB_separator, 0);
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    // on:separator:. 
    Send PSend19135 = new_Send((Optr)self, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)PSend19134);
    Array PThreadedCode19133 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend19134, (Optr)&t_send2, (Optr)PSend19135, (Optr)&t_method_return);
    Method PMethod19131 = new_Method_with(PArray19132, empty_Array, empty_Array, PThreadedCode19133, 1, PSend19135);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod19131, HEADER(PEG_StringScanner_Class));
    store_method(HEADER(PEG_StringScanner_Class), SMB_on_, MC_SMB_on_);
}

void init_PEG_PEGStringScanner_layout() {
    layout_PEG_StringScanner_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_StringScanner_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_StringScanner_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_StringScanner_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_StringScanner_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_StringScanner_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_StringScanner = new_Symbol(L"StringScanner");
    slot_PEG_StringScanner_separator = (Optr)new_Slot(3, L"separator");
    slot_PEG_StringScanner_cache = (Optr)new_Slot(4, L"cache");
    slot_PEG_StringScanner_stack = (Optr)new_Slot(5, L"stack");
    slot_PEG_StringScanner_longestMatch = (Optr)new_Slot(6, L"longestMatch");
    layout_PEG_StringScanner = (Optr)create_layout_with_vars(ObjectLayout_Class, 7);
    ((Array)layout_PEG_StringScanner)->values[0] = slot_Collections_Streams_PositionableStream_collection; // collection 
    ((Array)layout_PEG_StringScanner)->values[1] = slot_Collections_Streams_PositionableStream_position; // position 
    ((Array)layout_PEG_StringScanner)->values[2] = slot_Collections_Streams_PositionableStream_readLimit; // readLimit 
    ((Array)layout_PEG_StringScanner)->values[3] = slot_PEG_StringScanner_separator; // separator 
    ((Array)layout_PEG_StringScanner)->values[4] = slot_PEG_StringScanner_cache; // cache 
    ((Array)layout_PEG_StringScanner)->values[5] = slot_PEG_StringScanner_stack; // stack 
    ((Array)layout_PEG_StringScanner)->values[6] = slot_PEG_StringScanner_longestMatch; // longestMatch 
    PEG_StringScanner_Class = (Class)new_Class(Collection_Stream_ReadStream_Class, layout_PEG_StringScanner_Class_class);
    PEG_StringScanner_Class->layout = layout_PEG_StringScanner;
    PEG_StringScanner_Class->name = SMB_StringScanner;
    
}

void init_PEG_PEGStringScanner_methods() {
    init_SMB_peek();
    init_SMB_on_separator_();
    init_SMB_memoizeMatch_();
    init_SMB_scanAllIn_();
    init_SMB_scan_();
    init_SMB_scanCharacter_();
    init_SMB_omitSkipWhitespace();
    init_SMB_position_();
    init_SMB_backward();
    init_SMB_skipWhitespace();
    init_SMB_pushUntil_();
    init_SMB_scanUntil_();
    init_SMB_stack_();
    init_SMB_printOn_();
    init_SMB_scanPushCharacter_();
    init_SMB_forward();
    init_SMB_parsingFailed();
    init_SMB_bucket();
    init_SMB_pushAllIn_();
    init_SMB_scanPush_();
    init_SMB_stack();
    init_SMB_sample();
    init_class_SMB_on_separator_();
    init_class_SMB_on_();
    
}