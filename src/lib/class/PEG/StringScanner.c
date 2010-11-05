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
    Send PSend18862 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18866 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend18867 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend18866);
    Array PThreadedCode18865 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18866, (Optr)&t_send1, (Optr)PSend18867, (Optr)&t_block_return);
    Block PBlock18864 = new_Block_with(empty_Array, empty_Array, PThreadedCode18865, 1, PSend18867);
    // ifFalse:. 
    Send PSend18863 = new_Send((Optr)PSend18862, SMB_ifFalse_, 1, (Optr)PBlock18864);
    Array PThreadedCode18861 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18862, (Optr)&t_send_ifFalse_, (Optr)PSend18863, (Optr)PBlock18864, (Optr)&t_method_return);
    Method PMethod18860 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18861, 1, PSend18863);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod18860, PEG_StringScanner_Class);
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
    Array PArray18869 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend18871 = new_Send((Optr)VAR_aString_0_0, SMB_asString, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Super PSuper18872 = new_Super(SMB_on_, 1, (Optr)PSend18871);
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    // withoutOmit. 
    Send PSend18874 = new_Send((Optr)VAR_aSeparator_0_1, SMB_withoutOmit, 0);
    Assign PAssign18873 = new_Assign((Optr)slot_PEG_StringScanner_separator, (Optr)PSend18874);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend18878 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18877 = new_Send((Optr)PSend18878, SMB__plus_, 1, (Optr)int_1_Const);
    // new:. 
    Send PSend18876 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend18877);
    Assign PAssign18875 = new_Assign((Optr)slot_PEG_StringScanner_cache, (Optr)PSend18876);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign18879 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18881 = new_Send((Optr)PEGStack_classReference, SMB_new, 0);
    Assign PAssign18880 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)PSend18881);
    Array PThreadedCode18870 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend18871, (Optr)&t_super1, (Optr)PSuper18872, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18873, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send0, (Optr)PSend18874, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18875, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend18878, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18877, (Optr)&t_send1, (Optr)PSend18876, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18879, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18880, (Optr)&t_push_class_reference, (Optr)PEGStack_classReference, (Optr)&t_send0, (Optr)PSend18881, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18868 = new_Method_with(PArray18869, empty_Array, empty_Array, PThreadedCode18870, 6, PSuper18872, PAssign18873, PAssign18875, PAssign18879, PAssign18880, self);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod18868, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_on_separator_, MC_SMB_on_separator_);
}


static void init_SMB_memoizeMatch_() {
    Symbol SMB_memoizeMatch_ = new_Symbol(L"memoizeMatch:");
    Variable VAR_parser_0_0 = new_Variable_named(L"parser", 0);
    Array PArray18883 = new_Array_with(1, (Optr)VAR_parser_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray18884 = new_Array_with(2, (Optr)VAR_result_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18887 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_bucket = new_Symbol(L"bucket");
    // bucket. 
    Send PSend18890 = new_Send((Optr)self, SMB_bucket, 0);
    Assign PAssign18889 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend18890);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend18895 = new_Send((Optr)VAR_parser_0_0, SMB_parseOn_, 1, (Optr)self);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend18900 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign18899 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend18900);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18901 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_peek, 0);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend18902 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__at_, 1, (Optr)PSend18901);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18903 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)PSend18902);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18904 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18898 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign18899, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend18900, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_send0, (Optr)PSend18901, (Optr)&t_send1, (Optr)PSend18902, (Optr)&t_send2, (Optr)PSend18903, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18904, (Optr)&t_block_return);
    Block PBlock18897 = new_Block_with(empty_Array, empty_Array, PThreadedCode18898, 3, PAssign18899, PSend18903, PSend18904);
    // max:. 
    Send PSend18908 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign18907 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend18908);
    // at:put:. 
    Send PSend18909 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)nil_Const);
    // escape:. 
    Send PSend18910 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18906 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18907, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend18908, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend18909, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18910, (Optr)&t_block_return);
    Block PBlock18905 = new_Block_with(empty_Array, empty_Array, PThreadedCode18906, 3, PAssign18907, PSend18909, PSend18910);
    // ifTrue:ifFalse:. 
    Send PSend18896 = new_Send((Optr)PSend18895, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock18897, (Optr)PBlock18905);
    Array PThreadedCode18894 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18895, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend18896, (Optr)PBlock18897, (Optr)PBlock18905, (Optr)&t_block_return);
    Block PBlock18893 = new_Block_with(empty_Array, empty_Array, PThreadedCode18894, 1, PSend18896);
    // at:ifAbsent:. 
    Send PSend18892 = new_Send((Optr)VAR_bucket_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_parser_0_0, (Optr)PBlock18893);
    Assign PAssign18891 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend18892);
    // escape:. 
    Send PSend18913 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18912 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18913, (Optr)&t_block_return);
    Block PBlock18911 = new_Block_with(empty_Array, empty_Array, PThreadedCode18912, 1, PSend18913);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18914 = new_Send((Optr)VAR_result_0_1, SMB_ifNil_, 1, (Optr)PBlock18911);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend18916 = new_Send((Optr)VAR_result_0_1, SMB_x, 0);
    Assign PAssign18915 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18916);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend18917 = new_Send((Optr)VAR_result_0_1, SMB_y, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18918 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend18917);
    Array PThreadedCode18888 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign18889, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18890, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18891, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_closure, (Optr)PBlock18893, (Optr)&t_send2, (Optr)PSend18892, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_closure, (Optr)PBlock18911, (Optr)&t_send1, (Optr)PSend18914, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18915, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend18916, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend18917, (Optr)&t_send1, (Optr)PSend18918, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18886 = new_Block_with(PArray18887, empty_Array, PThreadedCode18888, 6, PAssign18889, PAssign18891, PSend18914, PAssign18915, PSend18918, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18919 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18886);
    Array PThreadedCode18885 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18886, (Optr)&t_send1, (Optr)PSend18919, (Optr)&t_method_return);
    Method PMethod18882 = new_Method_with(PArray18883, PArray18884, empty_Array, PThreadedCode18885, 1, PSend18919);
    
    MethodClosure MC_SMB_memoizeMatch_ = new_MethodClosure((Method)PMethod18882, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_memoizeMatch_, MC_SMB_memoizeMatch_);
}


static void init_SMB_scanAllIn_() {
    Symbol SMB_scanAllIn_ = new_Symbol(L"scanAllIn:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray18921 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18924 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18926 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend18927 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray18929 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend18931 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend18932 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend18931);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18933 = new_Send((Optr)PSend18932, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18938 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18937 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18938);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18939 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18936 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign18937, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18938, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18939, (Optr)&t_block_return);
    Block PBlock18935 = new_Block_with(empty_Array, empty_Array, PThreadedCode18936, 2, PAssign18937, PSend18939);
    // ifTrue:. 
    Send PSend18934 = new_Send((Optr)PSend18933, SMB_ifTrue_, 1, (Optr)PBlock18935);
    Array PThreadedCode18930 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend18931, (Optr)&t_send1, (Optr)PSend18932, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18933, (Optr)&t_send_ifTrue_, (Optr)PSend18934, (Optr)PBlock18935, (Optr)&t_method_return);
    Block PBlock18928 = new_Block_with(PArray18929, empty_Array, PThreadedCode18930, 1, PSend18934);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend18940 = new_Send((Optr)PSend18926, SMB_to_do_, 2, (Optr)PSend18927, (Optr)PBlock18928);
    // size. 
    Send PSend18942 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign18941 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18942);
    Array PThreadedCode18925 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18926, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend18927, (Optr)&t_push_closure, (Optr)PBlock18928, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend18940, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18941, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend18942, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18923 = new_Block_with(PArray18924, empty_Array, PThreadedCode18925, 3, PSend18940, PAssign18941, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18943 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18923);
    Array PThreadedCode18922 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18923, (Optr)&t_send1, (Optr)PSend18943, (Optr)&t_method_return);
    Method PMethod18920 = new_Method_with(PArray18921, empty_Array, empty_Array, PThreadedCode18922, 1, PSend18943);
    
    MethodClosure MC_SMB_scanAllIn_ = new_MethodClosure((Method)PMethod18920, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanAllIn_, MC_SMB_scanAllIn_);
}


static void init_SMB_scan_() {
    Symbol SMB_scan_ = new_Symbol(L"scan:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray18945 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18948 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend18950 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18954 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18953 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18954, (Optr)&t_block_return);
    Block PBlock18952 = new_Block_with(empty_Array, empty_Array, PThreadedCode18953, 1, PSend18954);
    // ifFalse:. 
    Send PSend18951 = new_Send((Optr)PSend18950, SMB_ifFalse_, 1, (Optr)PBlock18952);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend18957 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend18956 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend18957);
    Assign PAssign18955 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18956);
    Array PThreadedCode18949 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend18950, (Optr)&t_send_ifFalse_, (Optr)PSend18951, (Optr)PBlock18952, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18955, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend18957, (Optr)&t_send1, (Optr)PSend18956, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18947 = new_Block_with(PArray18948, empty_Array, PThreadedCode18949, 3, PSend18951, PAssign18955, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18958 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18947);
    Array PThreadedCode18946 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18947, (Optr)&t_send1, (Optr)PSend18958, (Optr)&t_method_return);
    Method PMethod18944 = new_Method_with(PArray18945, empty_Array, empty_Array, PThreadedCode18946, 1, PSend18958);
    
    MethodClosure MC_SMB_scan_ = new_MethodClosure((Method)PMethod18944, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scan_, MC_SMB_scan_);
}


static void init_SMB_scanCharacter_() {
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray18960 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18963 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18965 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18969 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18968 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18969, (Optr)&t_block_return);
    Block PBlock18967 = new_Block_with(empty_Array, empty_Array, PThreadedCode18968, 1, PSend18969);
    // ifTrue:. 
    Send PSend18966 = new_Send((Optr)PSend18965, SMB_ifTrue_, 1, (Optr)PBlock18967);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18970 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend18971 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend18970);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18972 = new_Send((Optr)PSend18971, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18973 = new_Send((Optr)PSend18972, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend18977 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18976 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18977, (Optr)&t_block_return);
    Block PBlock18975 = new_Block_with(empty_Array, empty_Array, PThreadedCode18976, 1, PSend18977);
    // ifFalse:. 
    Send PSend18974 = new_Send((Optr)PSend18973, SMB_ifFalse_, 1, (Optr)PBlock18975);
    // +. 
    Send PSend18979 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18978 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18979);
    Array PThreadedCode18964 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18965, (Optr)&t_send_ifTrue_, (Optr)PSend18966, (Optr)PBlock18967, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18970, (Optr)&t_send1, (Optr)PSend18971, (Optr)&t_send0, (Optr)PSend18972, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend18973, (Optr)&t_send_ifFalse_, (Optr)PSend18974, (Optr)PBlock18975, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18978, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18979, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18962 = new_Block_with(PArray18963, empty_Array, PThreadedCode18964, 4, PSend18966, PSend18974, PAssign18978, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18980 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18962);
    Array PThreadedCode18961 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18962, (Optr)&t_send1, (Optr)PSend18980, (Optr)&t_method_return);
    Method PMethod18959 = new_Method_with(PArray18960, empty_Array, empty_Array, PThreadedCode18961, 1, PSend18980);
    
    MethodClosure MC_SMB_scanCharacter_ = new_MethodClosure((Method)PMethod18959, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanCharacter_, MC_SMB_scanCharacter_);
}


static void init_SMB_omitSkipWhitespace() {
    Symbol SMB_omitSkipWhitespace = new_Symbol(L"omitSkipWhitespace");
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
    Send PSend18983 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode18982 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18983, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18981 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18982, 2, PSend18983, self);
    
    MethodClosure MC_SMB_omitSkipWhitespace = new_MethodClosure((Method)PMethod18981, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_omitSkipWhitespace, MC_SMB_omitSkipWhitespace);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray18985 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Assign PAssign18987 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode18986 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18987, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18984 = new_Method_with(PArray18985, empty_Array, empty_Array, PThreadedCode18986, 2, PAssign18987, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod18984, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_backward() {
    Symbol SMB_backward = new_Symbol(L"backward");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18991 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18990 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend18991);
    Array PThreadedCode18989 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign18990, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18991, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18988 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18989, 2, PAssign18990, self);
    
    MethodClosure MC_SMB_backward = new_MethodClosure((Method)PMethod18988, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_backward, MC_SMB_backward);
}


static void init_SMB_skipWhitespace() {
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
    Send PSend18994 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode18993 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18994, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18992 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18993, 2, PSend18994, self);
    
    MethodClosure MC_SMB_skipWhitespace = new_MethodClosure((Method)PMethod18992, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_skipWhitespace, MC_SMB_skipWhitespace);
}


static void init_SMB_pushUntil_() {
    Symbol SMB_pushUntil_ = new_Symbol(L"pushUntil:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray18996 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray18997 = new_Array_with(1, (Optr)VAR_s_0_1);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19001 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19004 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend19005 = new_Send((Optr)PSend19004, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode19003 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19004, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19005, (Optr)&t_block_return);
    Block PBlock19002 = new_Block_with(empty_Array, empty_Array, PThreadedCode19003, 1, PSend19005);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend19000 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend19001, (Optr)PBlock19002);
    Assign PAssign18999 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19000);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19007 = new_Send((Optr)VAR_s_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19006 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19007);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19008 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Assign PAssign19009 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Array PThreadedCode18998 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign18999, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19001, (Optr)&t_push_closure, (Optr)PBlock19002, (Optr)&t_send3, (Optr)PSend19000, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19006, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19007, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send3, (Optr)PSend19008, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19009, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18995 = new_Method_with(PArray18996, PArray18997, empty_Array, PThreadedCode18998, 5, PAssign18999, PAssign19006, PSend19008, PAssign19009, self);
    
    MethodClosure MC_SMB_pushUntil_ = new_MethodClosure((Method)PMethod18995, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_pushUntil_, MC_SMB_pushUntil_);
}


static void init_SMB_scanUntil_() {
    Symbol SMB_scanUntil_ = new_Symbol(L"scanUntil:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray19011 = new_Array_with(1, (Optr)VAR_char_0_0);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19015 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19018 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend19019 = new_Send((Optr)PSend19018, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode19017 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19018, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19019, (Optr)&t_block_return);
    Block PBlock19016 = new_Block_with(empty_Array, empty_Array, PThreadedCode19017, 1, PSend19019);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend19014 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend19015, (Optr)PBlock19016);
    Assign PAssign19013 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19014);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19021 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19020 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19021);
    Array PThreadedCode19012 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign19013, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19015, (Optr)&t_push_closure, (Optr)PBlock19016, (Optr)&t_send3, (Optr)PSend19014, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19020, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19021, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19010 = new_Method_with(PArray19011, empty_Array, empty_Array, PThreadedCode19012, 3, PAssign19013, PAssign19020, self);
    
    MethodClosure MC_SMB_scanUntil_ = new_MethodClosure((Method)PMethod19010, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanUntil_, MC_SMB_scanUntil_);
}


static void init_SMB_stack_() {
    Symbol SMB_stack_ = new_Symbol(L"stack:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray19023 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign19025 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)VAR_anObject_0_0);
    Array PThreadedCode19024 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19025, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19022 = new_Method_with(PArray19023, empty_Array, empty_Array, PThreadedCode19024, 2, PAssign19025, self);
    
    MethodClosure MC_SMB_stack_ = new_MethodClosure((Method)PMethod19022, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_stack_, MC_SMB_stack_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray19027 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_19029 = new_String(L"PEGStringScanner(");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_19029_Const = new_Constant((Optr)string_19029);
    // <<. 
    Send PSend19030 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_19029_Const);
    // printOn:. 
    Send PSend19031 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend19032 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode19028 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_19029, (Optr)&t_send1, (Optr)PSend19030, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend19031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend19032, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19026 = new_Method_with(PArray19027, empty_Array, empty_Array, PThreadedCode19028, 4, PSend19030, PSend19031, PSend19032, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod19026, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scanPushCharacter_() {
    Symbol SMB_scanPushCharacter_ = new_Symbol(L"scanPushCharacter:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray19034 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19037 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19039 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19043 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19042 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19043, (Optr)&t_block_return);
    Block PBlock19041 = new_Block_with(empty_Array, empty_Array, PThreadedCode19042, 1, PSend19043);
    // ifTrue:. 
    Send PSend19040 = new_Send((Optr)PSend19039, SMB_ifTrue_, 1, (Optr)PBlock19041);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19044 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19045 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19044);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19046 = new_Send((Optr)PSend19045, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19047 = new_Send((Optr)PSend19046, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend19051 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19050 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19051, (Optr)&t_block_return);
    Block PBlock19049 = new_Block_with(empty_Array, empty_Array, PThreadedCode19050, 1, PSend19051);
    // ifFalse:. 
    Send PSend19048 = new_Send((Optr)PSend19047, SMB_ifFalse_, 1, (Optr)PBlock19049);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend19052 = new_Send((Optr)VAR_character_0_0, SMB_asCharacter, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19053 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend19052);
    // +. 
    Send PSend19055 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19054 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19055);
    Array PThreadedCode19038 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19039, (Optr)&t_send_ifTrue_, (Optr)PSend19040, (Optr)PBlock19041, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19044, (Optr)&t_send1, (Optr)PSend19045, (Optr)&t_send0, (Optr)PSend19046, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend19047, (Optr)&t_send_ifFalse_, (Optr)PSend19048, (Optr)PBlock19049, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend19052, (Optr)&t_send1, (Optr)PSend19053, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19054, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19055, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19036 = new_Block_with(PArray19037, empty_Array, PThreadedCode19038, 5, PSend19040, PSend19048, PSend19053, PAssign19054, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19056 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19036);
    Array PThreadedCode19035 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19036, (Optr)&t_send1, (Optr)PSend19056, (Optr)&t_method_return);
    Method PMethod19033 = new_Method_with(PArray19034, empty_Array, empty_Array, PThreadedCode19035, 1, PSend19056);
    
    MethodClosure MC_SMB_scanPushCharacter_ = new_MethodClosure((Method)PMethod19033, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanPushCharacter_, MC_SMB_scanPushCharacter_);
}


static void init_SMB_forward() {
    Symbol SMB_forward = new_Symbol(L"forward");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19060 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19059 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19060);
    Array PThreadedCode19058 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19059, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19060, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19057 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19058, 2, PAssign19059, self);
    
    MethodClosure MC_SMB_forward = new_MethodClosure((Method)PMethod19057, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_forward, MC_SMB_forward);
}


static void init_SMB_parsingFailed() {
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    Assign PAssign19063 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)slot_PEG_StringScanner_longestMatch);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray19065 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend19067 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)self);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend19068 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode19066 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19067, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend19068, (Optr)&t_method_return);
    Block PBlock19064 = new_Block_with(PArray19065, empty_Array, PThreadedCode19066, 2, PSend19067, PSend19068);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19069 = new_Send((Optr)PEGParsingFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19070 = new_Send((Optr)PBlock19064, SMB_value_, 1, (Optr)PSend19069);
    Array PThreadedCode19062 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign19063, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19064, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_send0, (Optr)PSend19069, (Optr)&t_send1, (Optr)PSend19070, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19061 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19062, 3, PAssign19063, PSend19070, self);
    
    MethodClosure MC_SMB_parsingFailed = new_MethodClosure((Method)PMethod19061, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_parsingFailed, MC_SMB_parsingFailed);
}


static void init_SMB_bucket() {
    Symbol SMB_bucket = new_Symbol(L"bucket");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19074 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19076 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19077 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_, 1, (Optr)PSend19076);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray19079 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19081 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_bucket_2_0);
    Array PThreadedCode19080 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_send1, (Optr)PSend19081, (Optr)&t_method_return);
    Block PBlock19078 = new_Block_with(PArray19079, empty_Array, PThreadedCode19080, 1, PSend19081);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend19082 = new_Send((Optr)PSend19077, SMB_ifNotNil_, 1, (Optr)PBlock19078);
    // +. 
    Send PSend19083 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19084 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19085 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_put_, 2, (Optr)PSend19083, (Optr)PSend19084);
    Array PThreadedCode19075 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19076, (Optr)&t_send1, (Optr)PSend19077, (Optr)&t_push_closure, (Optr)PBlock19078, (Optr)&t_send1, (Optr)PSend19082, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19083, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend19084, (Optr)&t_send2, (Optr)PSend19085, (Optr)&t_method_return);
    Block PBlock19073 = new_Block_with(PArray19074, empty_Array, PThreadedCode19075, 2, PSend19082, PSend19085);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19086 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19073);
    Array PThreadedCode19072 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19073, (Optr)&t_send1, (Optr)PSend19086, (Optr)&t_method_return);
    Method PMethod19071 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19072, 1, PSend19086);
    
    MethodClosure MC_SMB_bucket = new_MethodClosure((Method)PMethod19071, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_bucket, MC_SMB_bucket);
}


static void init_SMB_pushAllIn_() {
    Symbol SMB_pushAllIn_ = new_Symbol(L"pushAllIn:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19088 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19091 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19093 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19094 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19096 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19098 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend19099 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend19098);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend19100 = new_Send((Optr)PSend19099, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19104 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19105 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19104);
    // -. 
    Send PSend19107 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19106 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19107);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19108 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19103 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19104, (Optr)&t_send3, (Optr)PSend19105, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19106, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19107, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19108, (Optr)&t_block_return);
    Block PBlock19102 = new_Block_with(empty_Array, empty_Array, PThreadedCode19103, 3, PSend19105, PAssign19106, PSend19108);
    // ifTrue:. 
    Send PSend19101 = new_Send((Optr)PSend19100, SMB_ifTrue_, 1, (Optr)PBlock19102);
    Array PThreadedCode19097 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19098, (Optr)&t_send1, (Optr)PSend19099, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19100, (Optr)&t_send_ifTrue_, (Optr)PSend19101, (Optr)PBlock19102, (Optr)&t_method_return);
    Block PBlock19095 = new_Block_with(PArray19096, empty_Array, PThreadedCode19097, 1, PSend19101);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19109 = new_Send((Optr)PSend19093, SMB_to_do_, 2, (Optr)PSend19094, (Optr)PBlock19095);
    // size. 
    Send PSend19110 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // push:from:to:. 
    Send PSend19111 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19110);
    // size. 
    Send PSend19113 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign19112 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19113);
    Array PThreadedCode19092 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19093, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19094, (Optr)&t_push_closure, (Optr)PBlock19095, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19109, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19110, (Optr)&t_send3, (Optr)PSend19111, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19112, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19113, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19090 = new_Block_with(PArray19091, empty_Array, PThreadedCode19092, 4, PSend19109, PSend19111, PAssign19112, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19114 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19090);
    Array PThreadedCode19089 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19090, (Optr)&t_send1, (Optr)PSend19114, (Optr)&t_method_return);
    Method PMethod19087 = new_Method_with(PArray19088, empty_Array, empty_Array, PThreadedCode19089, 1, PSend19114);
    
    MethodClosure MC_SMB_pushAllIn_ = new_MethodClosure((Method)PMethod19087, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_pushAllIn_, MC_SMB_pushAllIn_);
}


static void init_SMB_scanPush_() {
    Symbol SMB_scanPush_ = new_Symbol(L"scanPush:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19116 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19117 = new_Array_with(1, (Optr)VAR_s_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19120 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend19122 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19126 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19125 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19126, (Optr)&t_block_return);
    Block PBlock19124 = new_Block_with(empty_Array, empty_Array, PThreadedCode19125, 1, PSend19126);
    // ifFalse:. 
    Send PSend19123 = new_Send((Optr)PSend19122, SMB_ifFalse_, 1, (Optr)PBlock19124);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19128 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    Assign PAssign19127 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19128);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19129 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19130 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19129);
    // +. 
    Send PSend19132 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Assign PAssign19131 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19132);
    Array PThreadedCode19121 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend19122, (Optr)&t_send_ifFalse_, (Optr)PSend19123, (Optr)PBlock19124, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19127, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend19128, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19129, (Optr)&t_send3, (Optr)PSend19130, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19131, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19132, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19119 = new_Block_with(PArray19120, empty_Array, PThreadedCode19121, 5, PSend19123, PAssign19127, PSend19130, PAssign19131, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19133 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19119);
    Array PThreadedCode19118 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19119, (Optr)&t_send1, (Optr)PSend19133, (Optr)&t_method_return);
    Method PMethod19115 = new_Method_with(PArray19116, PArray19117, empty_Array, PThreadedCode19118, 1, PSend19133);
    
    MethodClosure MC_SMB_scanPush_ = new_MethodClosure((Method)PMethod19115, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanPush_, MC_SMB_scanPush_);
}


static void init_SMB_stack() {
    Symbol SMB_stack = new_Symbol(L"stack");
    Array PThreadedCode19135 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_method_return);
    Method PMethod19134 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19135, 1, slot_PEG_StringScanner_stack);
    
    MethodClosure MC_SMB_stack = new_MethodClosure((Method)PMethod19134, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_stack, MC_SMB_stack);
}


static void init_SMB_sample() {
    Symbol SMB_sample = new_Symbol(L"sample");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Variable VAR_sampleSize_0_1 = new_Variable_named(L"sampleSize", 0);
    Array PArray19137 = new_Array_with(2, (Optr)VAR_result_0_0, (Optr)VAR_sampleSize_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19141 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_min_ = new_Symbol(L"min:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
    Send PSend19140 = new_Send((Optr)PSend19141, SMB_min_, 1, (Optr)int_20_Const);
    Assign PAssign19139 = new_Assign((Optr)VAR_sampleSize_0_1, (Optr)PSend19140);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend19144 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19143 = new_Send((Optr)PSend19144, SMB_new_, 1, (Optr)VAR_sampleSize_0_1);
    Assign PAssign19142 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend19143);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19145 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_sampleSize_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19146 = new_Send((Optr)PSend19145, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19148 = new_Array_with(1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend19150 = new_Send((Optr)int_1_Const, SMB__plus_, 1, (Optr)VAR_i_1_0);
    // -. 
    Send PSend19151 = new_Send((Optr)PSend19150, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    // +. 
    Send PSend19152 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19153 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19152);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19154 = new_Send((Optr)VAR_result_0_0, SMB_at_put_, 2, (Optr)PSend19151, (Optr)PSend19153);
    Array PThreadedCode19149 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend19150, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19151, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19152, (Optr)&t_send1, (Optr)PSend19153, (Optr)&t_send2, (Optr)PSend19154, (Optr)&t_method_return);
    Block PBlock19147 = new_Block_with(PArray19148, empty_Array, PThreadedCode19149, 1, PSend19154);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19155 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB_to_do_, 2, (Optr)PSend19146, (Optr)PBlock19147);
    Array PThreadedCode19138 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign19139, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19141, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend19140, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19142, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19144, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19143, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19145, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19146, (Optr)&t_push_closure, (Optr)PBlock19147, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19155, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod19136 = new_Method_with(empty_Array, PArray19137, empty_Array, PThreadedCode19138, 4, PAssign19139, PAssign19142, PSend19155, VAR_result_0_0);
    
    MethodClosure MC_SMB_sample = new_MethodClosure((Method)PMethod19136, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_sample, MC_SMB_sample);
}


static void init_class_SMB_on_separator_() {
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aSeparator_0_1 = new_Variable_named(L"aSeparator", 0);
    Array PArray19157 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend19159 = new_Send((Optr)self, SMB_basicNew, 0);
    // on:separator:. 
    Send PSend19160 = new_Send((Optr)PSend19159, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Array PThreadedCode19158 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19159, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send2, (Optr)PSend19160, (Optr)&t_method_return);
    Method PMethod19156 = new_Method_with(PArray19157, empty_Array, empty_Array, PThreadedCode19158, 1, PSend19160);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod19156, HEADER(PEG_StringScanner_Class));
    store_method(HEADER(PEG_StringScanner_Class), SMB_on_separator_, MC_SMB_on_separator_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray19162 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend19164 = new_Send((Optr)PEGParser_classReference, SMB_separator, 0);
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    // on:separator:. 
    Send PSend19165 = new_Send((Optr)self, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)PSend19164);
    Array PThreadedCode19163 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend19164, (Optr)&t_send2, (Optr)PSend19165, (Optr)&t_method_return);
    Method PMethod19161 = new_Method_with(PArray19162, empty_Array, empty_Array, PThreadedCode19163, 1, PSend19165);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod19161, HEADER(PEG_StringScanner_Class));
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