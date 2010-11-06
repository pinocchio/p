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
    Send PSend19003 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19007 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19008 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19007);
    Array PThreadedCode19006 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19007, (Optr)&t_send1, (Optr)PSend19008, (Optr)&t_block_return);
    Block PBlock19005 = new_Block_with(empty_Array, empty_Array, PThreadedCode19006, 1, PSend19008);
    // ifFalse:. 
    Send PSend19004 = new_Send((Optr)PSend19003, SMB_ifFalse_, 1, (Optr)PBlock19005);
    Array PThreadedCode19002 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19003, (Optr)&t_send_ifFalse_, (Optr)PSend19004, (Optr)PBlock19005, (Optr)&t_method_return);
    Method PMethod19001 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19002, 1, PSend19004);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod19001, PEG_StringScanner_Class);
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
    Array PArray19010 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend19012 = new_Send((Optr)VAR_aString_0_0, SMB_asString, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Super PSuper19013 = new_Super(SMB_on_, 1, (Optr)PSend19012);
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    // withoutOmit. 
    Send PSend19015 = new_Send((Optr)VAR_aSeparator_0_1, SMB_withoutOmit, 0);
    Assign PAssign19014 = new_Assign((Optr)slot_PEG_StringScanner_separator, (Optr)PSend19015);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19019 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19018 = new_Send((Optr)PSend19019, SMB__plus_, 1, (Optr)int_1_Const);
    // new:. 
    Send PSend19017 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend19018);
    Assign PAssign19016 = new_Assign((Optr)slot_PEG_StringScanner_cache, (Optr)PSend19017);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign19020 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19022 = new_Send((Optr)PEGStack_classReference, SMB_new, 0);
    Assign PAssign19021 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)PSend19022);
    Array PThreadedCode19011 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend19012, (Optr)&t_super1, (Optr)PSuper19013, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19014, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send0, (Optr)PSend19015, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19016, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend19019, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19018, (Optr)&t_send1, (Optr)PSend19017, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19020, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19021, (Optr)&t_push_class_reference, (Optr)PEGStack_classReference, (Optr)&t_send0, (Optr)PSend19022, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19009 = new_Method_with(PArray19010, empty_Array, empty_Array, PThreadedCode19011, 6, PSuper19013, PAssign19014, PAssign19016, PAssign19020, PAssign19021, self);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod19009, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_on_separator_, MC_SMB_on_separator_);
}


static void init_SMB_memoizeMatch_() {
    Symbol SMB_memoizeMatch_ = new_Symbol(L"memoizeMatch:");
    Variable VAR_parser_0_0 = new_Variable_named(L"parser", 0);
    Array PArray19024 = new_Array_with(1, (Optr)VAR_parser_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray19025 = new_Array_with(2, (Optr)VAR_result_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19028 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_bucket = new_Symbol(L"bucket");
    // bucket. 
    Send PSend19031 = new_Send((Optr)self, SMB_bucket, 0);
    Assign PAssign19030 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend19031);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend19036 = new_Send((Optr)VAR_parser_0_0, SMB_parseOn_, 1, (Optr)self);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend19041 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign19040 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend19041);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19042 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_peek, 0);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend19043 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__at_, 1, (Optr)PSend19042);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19044 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)PSend19043);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19045 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19039 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign19040, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19041, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_send0, (Optr)PSend19042, (Optr)&t_send1, (Optr)PSend19043, (Optr)&t_send2, (Optr)PSend19044, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19045, (Optr)&t_block_return);
    Block PBlock19038 = new_Block_with(empty_Array, empty_Array, PThreadedCode19039, 3, PAssign19040, PSend19044, PSend19045);
    // max:. 
    Send PSend19049 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign19048 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend19049);
    // at:put:. 
    Send PSend19050 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)nil_Const);
    // escape:. 
    Send PSend19051 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19047 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign19048, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19049, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend19050, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19051, (Optr)&t_block_return);
    Block PBlock19046 = new_Block_with(empty_Array, empty_Array, PThreadedCode19047, 3, PAssign19048, PSend19050, PSend19051);
    // ifTrue:ifFalse:. 
    Send PSend19037 = new_Send((Optr)PSend19036, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19038, (Optr)PBlock19046);
    Array PThreadedCode19035 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19036, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19037, (Optr)PBlock19038, (Optr)PBlock19046, (Optr)&t_block_return);
    Block PBlock19034 = new_Block_with(empty_Array, empty_Array, PThreadedCode19035, 1, PSend19037);
    // at:ifAbsent:. 
    Send PSend19033 = new_Send((Optr)VAR_bucket_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_parser_0_0, (Optr)PBlock19034);
    Assign PAssign19032 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend19033);
    // escape:. 
    Send PSend19054 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19053 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19054, (Optr)&t_block_return);
    Block PBlock19052 = new_Block_with(empty_Array, empty_Array, PThreadedCode19053, 1, PSend19054);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19055 = new_Send((Optr)VAR_result_0_1, SMB_ifNil_, 1, (Optr)PBlock19052);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend19057 = new_Send((Optr)VAR_result_0_1, SMB_x, 0);
    Assign PAssign19056 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19057);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend19058 = new_Send((Optr)VAR_result_0_1, SMB_y, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19059 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend19058);
    Array PThreadedCode19029 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign19030, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19031, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19032, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_closure, (Optr)PBlock19034, (Optr)&t_send2, (Optr)PSend19033, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_closure, (Optr)PBlock19052, (Optr)&t_send1, (Optr)PSend19055, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19056, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend19057, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend19058, (Optr)&t_send1, (Optr)PSend19059, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19027 = new_Block_with(PArray19028, empty_Array, PThreadedCode19029, 6, PAssign19030, PAssign19032, PSend19055, PAssign19056, PSend19059, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19060 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19027);
    Array PThreadedCode19026 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19027, (Optr)&t_send1, (Optr)PSend19060, (Optr)&t_method_return);
    Method PMethod19023 = new_Method_with(PArray19024, PArray19025, empty_Array, PThreadedCode19026, 1, PSend19060);
    
    MethodClosure MC_SMB_memoizeMatch_ = new_MethodClosure((Method)PMethod19023, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_memoizeMatch_, MC_SMB_memoizeMatch_);
}


static void init_SMB_scanAllIn_() {
    Symbol SMB_scanAllIn_ = new_Symbol(L"scanAllIn:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19062 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19065 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19067 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19068 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19070 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19072 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend19073 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend19072);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend19074 = new_Send((Optr)PSend19073, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19079 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19078 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19079);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19080 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19077 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign19078, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19079, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19080, (Optr)&t_block_return);
    Block PBlock19076 = new_Block_with(empty_Array, empty_Array, PThreadedCode19077, 2, PAssign19078, PSend19080);
    // ifTrue:. 
    Send PSend19075 = new_Send((Optr)PSend19074, SMB_ifTrue_, 1, (Optr)PBlock19076);
    Array PThreadedCode19071 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19072, (Optr)&t_send1, (Optr)PSend19073, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19074, (Optr)&t_send_ifTrue_, (Optr)PSend19075, (Optr)PBlock19076, (Optr)&t_method_return);
    Block PBlock19069 = new_Block_with(PArray19070, empty_Array, PThreadedCode19071, 1, PSend19075);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19081 = new_Send((Optr)PSend19067, SMB_to_do_, 2, (Optr)PSend19068, (Optr)PBlock19069);
    // size. 
    Send PSend19083 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign19082 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19083);
    Array PThreadedCode19066 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19067, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19068, (Optr)&t_push_closure, (Optr)PBlock19069, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19081, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19082, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19083, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19064 = new_Block_with(PArray19065, empty_Array, PThreadedCode19066, 3, PSend19081, PAssign19082, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19084 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19064);
    Array PThreadedCode19063 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19064, (Optr)&t_send1, (Optr)PSend19084, (Optr)&t_method_return);
    Method PMethod19061 = new_Method_with(PArray19062, empty_Array, empty_Array, PThreadedCode19063, 1, PSend19084);
    
    MethodClosure MC_SMB_scanAllIn_ = new_MethodClosure((Method)PMethod19061, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanAllIn_, MC_SMB_scanAllIn_);
}


static void init_SMB_scan_() {
    Symbol SMB_scan_ = new_Symbol(L"scan:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19086 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19089 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend19091 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19095 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19094 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19095, (Optr)&t_block_return);
    Block PBlock19093 = new_Block_with(empty_Array, empty_Array, PThreadedCode19094, 1, PSend19095);
    // ifFalse:. 
    Send PSend19092 = new_Send((Optr)PSend19091, SMB_ifFalse_, 1, (Optr)PBlock19093);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19098 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend19097 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend19098);
    Assign PAssign19096 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19097);
    Array PThreadedCode19090 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend19091, (Optr)&t_send_ifFalse_, (Optr)PSend19092, (Optr)PBlock19093, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19096, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend19098, (Optr)&t_send1, (Optr)PSend19097, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19088 = new_Block_with(PArray19089, empty_Array, PThreadedCode19090, 3, PSend19092, PAssign19096, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19099 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19088);
    Array PThreadedCode19087 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19088, (Optr)&t_send1, (Optr)PSend19099, (Optr)&t_method_return);
    Method PMethod19085 = new_Method_with(PArray19086, empty_Array, empty_Array, PThreadedCode19087, 1, PSend19099);
    
    MethodClosure MC_SMB_scan_ = new_MethodClosure((Method)PMethod19085, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scan_, MC_SMB_scan_);
}


static void init_SMB_scanCharacter_() {
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray19101 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19104 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19106 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19110 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19109 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19110, (Optr)&t_block_return);
    Block PBlock19108 = new_Block_with(empty_Array, empty_Array, PThreadedCode19109, 1, PSend19110);
    // ifTrue:. 
    Send PSend19107 = new_Send((Optr)PSend19106, SMB_ifTrue_, 1, (Optr)PBlock19108);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19111 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19112 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19111);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19113 = new_Send((Optr)PSend19112, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19114 = new_Send((Optr)PSend19113, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend19118 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19117 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19118, (Optr)&t_block_return);
    Block PBlock19116 = new_Block_with(empty_Array, empty_Array, PThreadedCode19117, 1, PSend19118);
    // ifFalse:. 
    Send PSend19115 = new_Send((Optr)PSend19114, SMB_ifFalse_, 1, (Optr)PBlock19116);
    // +. 
    Send PSend19120 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19119 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19120);
    Array PThreadedCode19105 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19106, (Optr)&t_send_ifTrue_, (Optr)PSend19107, (Optr)PBlock19108, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19111, (Optr)&t_send1, (Optr)PSend19112, (Optr)&t_send0, (Optr)PSend19113, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend19114, (Optr)&t_send_ifFalse_, (Optr)PSend19115, (Optr)PBlock19116, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19119, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19120, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19103 = new_Block_with(PArray19104, empty_Array, PThreadedCode19105, 4, PSend19107, PSend19115, PAssign19119, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19121 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19103);
    Array PThreadedCode19102 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19103, (Optr)&t_send1, (Optr)PSend19121, (Optr)&t_method_return);
    Method PMethod19100 = new_Method_with(PArray19101, empty_Array, empty_Array, PThreadedCode19102, 1, PSend19121);
    
    MethodClosure MC_SMB_scanCharacter_ = new_MethodClosure((Method)PMethod19100, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanCharacter_, MC_SMB_scanCharacter_);
}


static void init_SMB_omitSkipWhitespace() {
    Symbol SMB_omitSkipWhitespace = new_Symbol(L"omitSkipWhitespace");
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
    Send PSend19124 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode19123 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19124, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19122 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19123, 2, PSend19124, self);
    
    MethodClosure MC_SMB_omitSkipWhitespace = new_MethodClosure((Method)PMethod19122, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_omitSkipWhitespace, MC_SMB_omitSkipWhitespace);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray19126 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Assign PAssign19128 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode19127 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19128, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19125 = new_Method_with(PArray19126, empty_Array, empty_Array, PThreadedCode19127, 2, PAssign19128, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod19125, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_backward() {
    Symbol SMB_backward = new_Symbol(L"backward");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19132 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19131 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19132);
    Array PThreadedCode19130 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19131, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19132, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19129 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19130, 2, PAssign19131, self);
    
    MethodClosure MC_SMB_backward = new_MethodClosure((Method)PMethod19129, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_backward, MC_SMB_backward);
}


static void init_SMB_skipWhitespace() {
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
    Send PSend19135 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode19134 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19135, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19133 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19134, 2, PSend19135, self);
    
    MethodClosure MC_SMB_skipWhitespace = new_MethodClosure((Method)PMethod19133, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_skipWhitespace, MC_SMB_skipWhitespace);
}


static void init_SMB_pushUntil_() {
    Symbol SMB_pushUntil_ = new_Symbol(L"pushUntil:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray19137 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19138 = new_Array_with(1, (Optr)VAR_s_0_1);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19142 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19145 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend19146 = new_Send((Optr)PSend19145, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode19144 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19145, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19146, (Optr)&t_block_return);
    Block PBlock19143 = new_Block_with(empty_Array, empty_Array, PThreadedCode19144, 1, PSend19146);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend19141 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend19142, (Optr)PBlock19143);
    Assign PAssign19140 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19141);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19148 = new_Send((Optr)VAR_s_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19147 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19148);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19149 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Assign PAssign19150 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Array PThreadedCode19139 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign19140, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19142, (Optr)&t_push_closure, (Optr)PBlock19143, (Optr)&t_send3, (Optr)PSend19141, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19147, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19148, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send3, (Optr)PSend19149, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19150, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19136 = new_Method_with(PArray19137, PArray19138, empty_Array, PThreadedCode19139, 5, PAssign19140, PAssign19147, PSend19149, PAssign19150, self);
    
    MethodClosure MC_SMB_pushUntil_ = new_MethodClosure((Method)PMethod19136, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_pushUntil_, MC_SMB_pushUntil_);
}


static void init_SMB_scanUntil_() {
    Symbol SMB_scanUntil_ = new_Symbol(L"scanUntil:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray19152 = new_Array_with(1, (Optr)VAR_char_0_0);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19156 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19159 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend19160 = new_Send((Optr)PSend19159, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode19158 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19159, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19160, (Optr)&t_block_return);
    Block PBlock19157 = new_Block_with(empty_Array, empty_Array, PThreadedCode19158, 1, PSend19160);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend19155 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend19156, (Optr)PBlock19157);
    Assign PAssign19154 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19155);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19162 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19161 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19162);
    Array PThreadedCode19153 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign19154, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19156, (Optr)&t_push_closure, (Optr)PBlock19157, (Optr)&t_send3, (Optr)PSend19155, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19161, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19162, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19151 = new_Method_with(PArray19152, empty_Array, empty_Array, PThreadedCode19153, 3, PAssign19154, PAssign19161, self);
    
    MethodClosure MC_SMB_scanUntil_ = new_MethodClosure((Method)PMethod19151, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanUntil_, MC_SMB_scanUntil_);
}


static void init_SMB_stack_() {
    Symbol SMB_stack_ = new_Symbol(L"stack:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray19164 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign19166 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)VAR_anObject_0_0);
    Array PThreadedCode19165 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19166, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19163 = new_Method_with(PArray19164, empty_Array, empty_Array, PThreadedCode19165, 2, PAssign19166, self);
    
    MethodClosure MC_SMB_stack_ = new_MethodClosure((Method)PMethod19163, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_stack_, MC_SMB_stack_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray19168 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_19170 = new_String(L"PEGStringScanner(");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_19170_Const = new_Constant((Optr)string_19170);
    // <<. 
    Send PSend19171 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_19170_Const);
    // printOn:. 
    Send PSend19172 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend19173 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode19169 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_19170, (Optr)&t_send1, (Optr)PSend19171, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend19172, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend19173, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19167 = new_Method_with(PArray19168, empty_Array, empty_Array, PThreadedCode19169, 4, PSend19171, PSend19172, PSend19173, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod19167, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scanPushCharacter_() {
    Symbol SMB_scanPushCharacter_ = new_Symbol(L"scanPushCharacter:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray19175 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19178 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19180 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19184 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19183 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19184, (Optr)&t_block_return);
    Block PBlock19182 = new_Block_with(empty_Array, empty_Array, PThreadedCode19183, 1, PSend19184);
    // ifTrue:. 
    Send PSend19181 = new_Send((Optr)PSend19180, SMB_ifTrue_, 1, (Optr)PBlock19182);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19185 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19186 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19185);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19187 = new_Send((Optr)PSend19186, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19188 = new_Send((Optr)PSend19187, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend19192 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19191 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19192, (Optr)&t_block_return);
    Block PBlock19190 = new_Block_with(empty_Array, empty_Array, PThreadedCode19191, 1, PSend19192);
    // ifFalse:. 
    Send PSend19189 = new_Send((Optr)PSend19188, SMB_ifFalse_, 1, (Optr)PBlock19190);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend19193 = new_Send((Optr)VAR_character_0_0, SMB_asCharacter, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19194 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend19193);
    // +. 
    Send PSend19196 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19195 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19196);
    Array PThreadedCode19179 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19180, (Optr)&t_send_ifTrue_, (Optr)PSend19181, (Optr)PBlock19182, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19185, (Optr)&t_send1, (Optr)PSend19186, (Optr)&t_send0, (Optr)PSend19187, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend19188, (Optr)&t_send_ifFalse_, (Optr)PSend19189, (Optr)PBlock19190, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend19193, (Optr)&t_send1, (Optr)PSend19194, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19195, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19196, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19177 = new_Block_with(PArray19178, empty_Array, PThreadedCode19179, 5, PSend19181, PSend19189, PSend19194, PAssign19195, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19197 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19177);
    Array PThreadedCode19176 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19177, (Optr)&t_send1, (Optr)PSend19197, (Optr)&t_method_return);
    Method PMethod19174 = new_Method_with(PArray19175, empty_Array, empty_Array, PThreadedCode19176, 1, PSend19197);
    
    MethodClosure MC_SMB_scanPushCharacter_ = new_MethodClosure((Method)PMethod19174, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanPushCharacter_, MC_SMB_scanPushCharacter_);
}


static void init_SMB_forward() {
    Symbol SMB_forward = new_Symbol(L"forward");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19201 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19200 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19201);
    Array PThreadedCode19199 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19200, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19201, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19198 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19199, 2, PAssign19200, self);
    
    MethodClosure MC_SMB_forward = new_MethodClosure((Method)PMethod19198, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_forward, MC_SMB_forward);
}


static void init_SMB_parsingFailed() {
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    Assign PAssign19204 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)slot_PEG_StringScanner_longestMatch);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray19206 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend19208 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)self);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend19209 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode19207 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend19209, (Optr)&t_method_return);
    Block PBlock19205 = new_Block_with(PArray19206, empty_Array, PThreadedCode19207, 2, PSend19208, PSend19209);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19210 = new_Send((Optr)PEGParsingFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19211 = new_Send((Optr)PBlock19205, SMB_value_, 1, (Optr)PSend19210);
    Array PThreadedCode19203 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign19204, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19205, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_send0, (Optr)PSend19210, (Optr)&t_send1, (Optr)PSend19211, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19202 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19203, 3, PAssign19204, PSend19211, self);
    
    MethodClosure MC_SMB_parsingFailed = new_MethodClosure((Method)PMethod19202, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_parsingFailed, MC_SMB_parsingFailed);
}


static void init_SMB_bucket() {
    Symbol SMB_bucket = new_Symbol(L"bucket");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19215 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19217 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19218 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_, 1, (Optr)PSend19217);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray19220 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19222 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_bucket_2_0);
    Array PThreadedCode19221 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_send1, (Optr)PSend19222, (Optr)&t_method_return);
    Block PBlock19219 = new_Block_with(PArray19220, empty_Array, PThreadedCode19221, 1, PSend19222);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend19223 = new_Send((Optr)PSend19218, SMB_ifNotNil_, 1, (Optr)PBlock19219);
    // +. 
    Send PSend19224 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19225 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19226 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_put_, 2, (Optr)PSend19224, (Optr)PSend19225);
    Array PThreadedCode19216 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19217, (Optr)&t_send1, (Optr)PSend19218, (Optr)&t_push_closure, (Optr)PBlock19219, (Optr)&t_send1, (Optr)PSend19223, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19224, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend19225, (Optr)&t_send2, (Optr)PSend19226, (Optr)&t_method_return);
    Block PBlock19214 = new_Block_with(PArray19215, empty_Array, PThreadedCode19216, 2, PSend19223, PSend19226);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19227 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19214);
    Array PThreadedCode19213 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19214, (Optr)&t_send1, (Optr)PSend19227, (Optr)&t_method_return);
    Method PMethod19212 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19213, 1, PSend19227);
    
    MethodClosure MC_SMB_bucket = new_MethodClosure((Method)PMethod19212, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_bucket, MC_SMB_bucket);
}


static void init_SMB_pushAllIn_() {
    Symbol SMB_pushAllIn_ = new_Symbol(L"pushAllIn:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19229 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19232 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19234 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19235 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19237 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19239 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend19240 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend19239);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend19241 = new_Send((Optr)PSend19240, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19245 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19246 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19245);
    // -. 
    Send PSend19248 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19247 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19248);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19249 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19244 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19245, (Optr)&t_send3, (Optr)PSend19246, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19247, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19248, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19249, (Optr)&t_block_return);
    Block PBlock19243 = new_Block_with(empty_Array, empty_Array, PThreadedCode19244, 3, PSend19246, PAssign19247, PSend19249);
    // ifTrue:. 
    Send PSend19242 = new_Send((Optr)PSend19241, SMB_ifTrue_, 1, (Optr)PBlock19243);
    Array PThreadedCode19238 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19239, (Optr)&t_send1, (Optr)PSend19240, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19241, (Optr)&t_send_ifTrue_, (Optr)PSend19242, (Optr)PBlock19243, (Optr)&t_method_return);
    Block PBlock19236 = new_Block_with(PArray19237, empty_Array, PThreadedCode19238, 1, PSend19242);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19250 = new_Send((Optr)PSend19234, SMB_to_do_, 2, (Optr)PSend19235, (Optr)PBlock19236);
    // size. 
    Send PSend19251 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // push:from:to:. 
    Send PSend19252 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19251);
    // size. 
    Send PSend19254 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign19253 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19254);
    Array PThreadedCode19233 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19234, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19235, (Optr)&t_push_closure, (Optr)PBlock19236, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19250, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19251, (Optr)&t_send3, (Optr)PSend19252, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19253, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19254, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19231 = new_Block_with(PArray19232, empty_Array, PThreadedCode19233, 4, PSend19250, PSend19252, PAssign19253, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19255 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19231);
    Array PThreadedCode19230 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19231, (Optr)&t_send1, (Optr)PSend19255, (Optr)&t_method_return);
    Method PMethod19228 = new_Method_with(PArray19229, empty_Array, empty_Array, PThreadedCode19230, 1, PSend19255);
    
    MethodClosure MC_SMB_pushAllIn_ = new_MethodClosure((Method)PMethod19228, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_pushAllIn_, MC_SMB_pushAllIn_);
}


static void init_SMB_scanPush_() {
    Symbol SMB_scanPush_ = new_Symbol(L"scanPush:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19257 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19258 = new_Array_with(1, (Optr)VAR_s_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19261 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend19263 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19267 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19266 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19267, (Optr)&t_block_return);
    Block PBlock19265 = new_Block_with(empty_Array, empty_Array, PThreadedCode19266, 1, PSend19267);
    // ifFalse:. 
    Send PSend19264 = new_Send((Optr)PSend19263, SMB_ifFalse_, 1, (Optr)PBlock19265);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19269 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    Assign PAssign19268 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19269);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19270 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19271 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19270);
    // +. 
    Send PSend19273 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Assign PAssign19272 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19273);
    Array PThreadedCode19262 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend19263, (Optr)&t_send_ifFalse_, (Optr)PSend19264, (Optr)PBlock19265, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19268, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend19269, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19270, (Optr)&t_send3, (Optr)PSend19271, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19272, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19273, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19260 = new_Block_with(PArray19261, empty_Array, PThreadedCode19262, 5, PSend19264, PAssign19268, PSend19271, PAssign19272, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19274 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19260);
    Array PThreadedCode19259 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19260, (Optr)&t_send1, (Optr)PSend19274, (Optr)&t_method_return);
    Method PMethod19256 = new_Method_with(PArray19257, PArray19258, empty_Array, PThreadedCode19259, 1, PSend19274);
    
    MethodClosure MC_SMB_scanPush_ = new_MethodClosure((Method)PMethod19256, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanPush_, MC_SMB_scanPush_);
}


static void init_SMB_stack() {
    Symbol SMB_stack = new_Symbol(L"stack");
    Array PThreadedCode19276 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_method_return);
    Method PMethod19275 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19276, 1, slot_PEG_StringScanner_stack);
    
    MethodClosure MC_SMB_stack = new_MethodClosure((Method)PMethod19275, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_stack, MC_SMB_stack);
}


static void init_SMB_sample() {
    Symbol SMB_sample = new_Symbol(L"sample");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Variable VAR_sampleSize_0_1 = new_Variable_named(L"sampleSize", 0);
    Array PArray19278 = new_Array_with(2, (Optr)VAR_result_0_0, (Optr)VAR_sampleSize_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19282 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_min_ = new_Symbol(L"min:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
    Send PSend19281 = new_Send((Optr)PSend19282, SMB_min_, 1, (Optr)int_20_Const);
    Assign PAssign19280 = new_Assign((Optr)VAR_sampleSize_0_1, (Optr)PSend19281);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend19285 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19284 = new_Send((Optr)PSend19285, SMB_new_, 1, (Optr)VAR_sampleSize_0_1);
    Assign PAssign19283 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend19284);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19286 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_sampleSize_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19287 = new_Send((Optr)PSend19286, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19289 = new_Array_with(1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend19291 = new_Send((Optr)int_1_Const, SMB__plus_, 1, (Optr)VAR_i_1_0);
    // -. 
    Send PSend19292 = new_Send((Optr)PSend19291, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    // +. 
    Send PSend19293 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19294 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19293);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19295 = new_Send((Optr)VAR_result_0_0, SMB_at_put_, 2, (Optr)PSend19292, (Optr)PSend19294);
    Array PThreadedCode19290 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend19291, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19292, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19293, (Optr)&t_send1, (Optr)PSend19294, (Optr)&t_send2, (Optr)PSend19295, (Optr)&t_method_return);
    Block PBlock19288 = new_Block_with(PArray19289, empty_Array, PThreadedCode19290, 1, PSend19295);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19296 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB_to_do_, 2, (Optr)PSend19287, (Optr)PBlock19288);
    Array PThreadedCode19279 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign19280, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19282, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend19281, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19283, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19285, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19284, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19286, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19287, (Optr)&t_push_closure, (Optr)PBlock19288, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19296, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod19277 = new_Method_with(empty_Array, PArray19278, empty_Array, PThreadedCode19279, 4, PAssign19280, PAssign19283, PSend19296, VAR_result_0_0);
    
    MethodClosure MC_SMB_sample = new_MethodClosure((Method)PMethod19277, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_sample, MC_SMB_sample);
}


static void init_class_SMB_on_separator_() {
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aSeparator_0_1 = new_Variable_named(L"aSeparator", 0);
    Array PArray19298 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend19300 = new_Send((Optr)self, SMB_basicNew, 0);
    // on:separator:. 
    Send PSend19301 = new_Send((Optr)PSend19300, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Array PThreadedCode19299 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19300, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send2, (Optr)PSend19301, (Optr)&t_method_return);
    Method PMethod19297 = new_Method_with(PArray19298, empty_Array, empty_Array, PThreadedCode19299, 1, PSend19301);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod19297, HEADER(PEG_StringScanner_Class));
    store_method(HEADER(PEG_StringScanner_Class), SMB_on_separator_, MC_SMB_on_separator_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray19303 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend19305 = new_Send((Optr)PEGParser_classReference, SMB_separator, 0);
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    // on:separator:. 
    Send PSend19306 = new_Send((Optr)self, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)PSend19305);
    Array PThreadedCode19304 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend19305, (Optr)&t_send2, (Optr)PSend19306, (Optr)&t_method_return);
    Method PMethod19302 = new_Method_with(PArray19303, empty_Array, empty_Array, PThreadedCode19304, 1, PSend19306);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod19302, HEADER(PEG_StringScanner_Class));
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