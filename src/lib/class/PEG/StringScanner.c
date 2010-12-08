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
    Send PSend19321 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19325 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19326 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19325);
    Array PThreadedCode19324 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19325, (Optr)&t_send1, (Optr)PSend19326, (Optr)&t_block_return);
    Block PBlock19323 = new_Block_with(empty_Array, empty_Array, PThreadedCode19324, 1, PSend19326);
    // ifFalse:. 
    Send PSend19322 = new_Send((Optr)PSend19321, SMB_ifFalse_, 1, (Optr)PBlock19323);
    Array PThreadedCode19320 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19321, (Optr)&t_send_ifFalse_, (Optr)PSend19322, (Optr)PBlock19323, (Optr)&t_method_return);
    Method PMethod19319 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19320, 1, PSend19322);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod19319, PEG_StringScanner_Class);
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
    Array PArray19328 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend19330 = new_Send((Optr)VAR_aString_0_0, SMB_asString, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Super PSuper19331 = new_Super(SMB_on_, 1, (Optr)PSend19330);
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    // withoutOmit. 
    Send PSend19333 = new_Send((Optr)VAR_aSeparator_0_1, SMB_withoutOmit, 0);
    Assign PAssign19332 = new_Assign((Optr)slot_PEG_StringScanner_separator, (Optr)PSend19333);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19337 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19336 = new_Send((Optr)PSend19337, SMB__plus_, 1, (Optr)int_1_Const);
    // new:. 
    Send PSend19335 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend19336);
    Assign PAssign19334 = new_Assign((Optr)slot_PEG_StringScanner_cache, (Optr)PSend19335);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign19338 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19340 = new_Send((Optr)PEGStack_classReference, SMB_new, 0);
    Assign PAssign19339 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)PSend19340);
    Array PThreadedCode19329 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend19330, (Optr)&t_super1, (Optr)PSuper19331, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19332, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send0, (Optr)PSend19333, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19334, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend19337, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19336, (Optr)&t_send1, (Optr)PSend19335, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19338, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19339, (Optr)&t_push_class_reference, (Optr)PEGStack_classReference, (Optr)&t_send0, (Optr)PSend19340, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19327 = new_Method_with(PArray19328, empty_Array, empty_Array, PThreadedCode19329, 6, PSuper19331, PAssign19332, PAssign19334, PAssign19338, PAssign19339, self);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod19327, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_on_separator_, MC_SMB_on_separator_);
}


static void init_SMB_memoizeMatch_() {
    Symbol SMB_memoizeMatch_ = new_Symbol(L"memoizeMatch:");
    Variable VAR_parser_0_0 = new_Variable_named(L"parser", 0);
    Array PArray19342 = new_Array_with(1, (Optr)VAR_parser_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray19343 = new_Array_with(2, (Optr)VAR_result_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19346 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_bucket = new_Symbol(L"bucket");
    // bucket. 
    Send PSend19349 = new_Send((Optr)self, SMB_bucket, 0);
    Assign PAssign19348 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend19349);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend19354 = new_Send((Optr)VAR_parser_0_0, SMB_parseOn_, 1, (Optr)self);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend19359 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign19358 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend19359);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19360 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_peek, 0);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend19361 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__at_, 1, (Optr)PSend19360);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19362 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)PSend19361);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19363 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19357 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign19358, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19359, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_send0, (Optr)PSend19360, (Optr)&t_send1, (Optr)PSend19361, (Optr)&t_send2, (Optr)PSend19362, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19363, (Optr)&t_block_return);
    Block PBlock19356 = new_Block_with(empty_Array, empty_Array, PThreadedCode19357, 3, PAssign19358, PSend19362, PSend19363);
    // max:. 
    Send PSend19367 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign19366 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend19367);
    // at:put:. 
    Send PSend19368 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)nil_Const);
    // escape:. 
    Send PSend19369 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19365 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign19366, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19367, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend19368, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19369, (Optr)&t_block_return);
    Block PBlock19364 = new_Block_with(empty_Array, empty_Array, PThreadedCode19365, 3, PAssign19366, PSend19368, PSend19369);
    // ifTrue:ifFalse:. 
    Send PSend19355 = new_Send((Optr)PSend19354, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19356, (Optr)PBlock19364);
    Array PThreadedCode19353 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19354, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19355, (Optr)PBlock19356, (Optr)PBlock19364, (Optr)&t_block_return);
    Block PBlock19352 = new_Block_with(empty_Array, empty_Array, PThreadedCode19353, 1, PSend19355);
    // at:ifAbsent:. 
    Send PSend19351 = new_Send((Optr)VAR_bucket_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_parser_0_0, (Optr)PBlock19352);
    Assign PAssign19350 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend19351);
    // escape:. 
    Send PSend19372 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19371 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19372, (Optr)&t_block_return);
    Block PBlock19370 = new_Block_with(empty_Array, empty_Array, PThreadedCode19371, 1, PSend19372);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19373 = new_Send((Optr)VAR_result_0_1, SMB_ifNil_, 1, (Optr)PBlock19370);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend19375 = new_Send((Optr)VAR_result_0_1, SMB_x, 0);
    Assign PAssign19374 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19375);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend19376 = new_Send((Optr)VAR_result_0_1, SMB_y, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19377 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend19376);
    Array PThreadedCode19347 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign19348, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19350, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_closure, (Optr)PBlock19352, (Optr)&t_send2, (Optr)PSend19351, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_closure, (Optr)PBlock19370, (Optr)&t_send1, (Optr)PSend19373, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19374, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend19375, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend19376, (Optr)&t_send1, (Optr)PSend19377, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19345 = new_Block_with(PArray19346, empty_Array, PThreadedCode19347, 6, PAssign19348, PAssign19350, PSend19373, PAssign19374, PSend19377, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19378 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19345);
    Array PThreadedCode19344 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19345, (Optr)&t_send1, (Optr)PSend19378, (Optr)&t_method_return);
    Method PMethod19341 = new_Method_with(PArray19342, PArray19343, empty_Array, PThreadedCode19344, 1, PSend19378);
    
    MethodClosure MC_SMB_memoizeMatch_ = new_MethodClosure((Method)PMethod19341, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_memoizeMatch_, MC_SMB_memoizeMatch_);
}


static void init_SMB_scanAllIn_() {
    Symbol SMB_scanAllIn_ = new_Symbol(L"scanAllIn:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19380 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19383 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19385 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19386 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19388 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19390 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend19391 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend19390);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend19392 = new_Send((Optr)PSend19391, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19397 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19396 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19397);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19398 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19395 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign19396, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19397, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19398, (Optr)&t_block_return);
    Block PBlock19394 = new_Block_with(empty_Array, empty_Array, PThreadedCode19395, 2, PAssign19396, PSend19398);
    // ifTrue:. 
    Send PSend19393 = new_Send((Optr)PSend19392, SMB_ifTrue_, 1, (Optr)PBlock19394);
    Array PThreadedCode19389 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19390, (Optr)&t_send1, (Optr)PSend19391, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19392, (Optr)&t_send_ifTrue_, (Optr)PSend19393, (Optr)PBlock19394, (Optr)&t_method_return);
    Block PBlock19387 = new_Block_with(PArray19388, empty_Array, PThreadedCode19389, 1, PSend19393);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19399 = new_Send((Optr)PSend19385, SMB_to_do_, 2, (Optr)PSend19386, (Optr)PBlock19387);
    // size. 
    Send PSend19401 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign19400 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19401);
    Array PThreadedCode19384 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19385, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19386, (Optr)&t_push_closure, (Optr)PBlock19387, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19399, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19400, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19401, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19382 = new_Block_with(PArray19383, empty_Array, PThreadedCode19384, 3, PSend19399, PAssign19400, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19402 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19382);
    Array PThreadedCode19381 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19382, (Optr)&t_send1, (Optr)PSend19402, (Optr)&t_method_return);
    Method PMethod19379 = new_Method_with(PArray19380, empty_Array, empty_Array, PThreadedCode19381, 1, PSend19402);
    
    MethodClosure MC_SMB_scanAllIn_ = new_MethodClosure((Method)PMethod19379, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanAllIn_, MC_SMB_scanAllIn_);
}


static void init_SMB_scan_() {
    Symbol SMB_scan_ = new_Symbol(L"scan:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19404 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19407 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend19409 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19413 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19412 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19413, (Optr)&t_block_return);
    Block PBlock19411 = new_Block_with(empty_Array, empty_Array, PThreadedCode19412, 1, PSend19413);
    // ifFalse:. 
    Send PSend19410 = new_Send((Optr)PSend19409, SMB_ifFalse_, 1, (Optr)PBlock19411);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19416 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend19415 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend19416);
    Assign PAssign19414 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19415);
    Array PThreadedCode19408 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend19409, (Optr)&t_send_ifFalse_, (Optr)PSend19410, (Optr)PBlock19411, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19414, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend19416, (Optr)&t_send1, (Optr)PSend19415, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19406 = new_Block_with(PArray19407, empty_Array, PThreadedCode19408, 3, PSend19410, PAssign19414, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19417 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19406);
    Array PThreadedCode19405 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19406, (Optr)&t_send1, (Optr)PSend19417, (Optr)&t_method_return);
    Method PMethod19403 = new_Method_with(PArray19404, empty_Array, empty_Array, PThreadedCode19405, 1, PSend19417);
    
    MethodClosure MC_SMB_scan_ = new_MethodClosure((Method)PMethod19403, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scan_, MC_SMB_scan_);
}


static void init_SMB_scanCharacter_() {
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray19419 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19422 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19424 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19428 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19427 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19428, (Optr)&t_block_return);
    Block PBlock19426 = new_Block_with(empty_Array, empty_Array, PThreadedCode19427, 1, PSend19428);
    // ifTrue:. 
    Send PSend19425 = new_Send((Optr)PSend19424, SMB_ifTrue_, 1, (Optr)PBlock19426);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19429 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19430 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19429);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19431 = new_Send((Optr)PSend19430, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19432 = new_Send((Optr)PSend19431, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend19436 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19435 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19436, (Optr)&t_block_return);
    Block PBlock19434 = new_Block_with(empty_Array, empty_Array, PThreadedCode19435, 1, PSend19436);
    // ifFalse:. 
    Send PSend19433 = new_Send((Optr)PSend19432, SMB_ifFalse_, 1, (Optr)PBlock19434);
    // +. 
    Send PSend19438 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19437 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19438);
    Array PThreadedCode19423 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19424, (Optr)&t_send_ifTrue_, (Optr)PSend19425, (Optr)PBlock19426, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19429, (Optr)&t_send1, (Optr)PSend19430, (Optr)&t_send0, (Optr)PSend19431, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend19432, (Optr)&t_send_ifFalse_, (Optr)PSend19433, (Optr)PBlock19434, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19437, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19438, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19421 = new_Block_with(PArray19422, empty_Array, PThreadedCode19423, 4, PSend19425, PSend19433, PAssign19437, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19439 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19421);
    Array PThreadedCode19420 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19421, (Optr)&t_send1, (Optr)PSend19439, (Optr)&t_method_return);
    Method PMethod19418 = new_Method_with(PArray19419, empty_Array, empty_Array, PThreadedCode19420, 1, PSend19439);
    
    MethodClosure MC_SMB_scanCharacter_ = new_MethodClosure((Method)PMethod19418, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanCharacter_, MC_SMB_scanCharacter_);
}


static void init_SMB_omitSkipWhitespace() {
    Symbol SMB_omitSkipWhitespace = new_Symbol(L"omitSkipWhitespace");
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
    Send PSend19442 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode19441 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19442, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19440 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19441, 2, PSend19442, self);
    
    MethodClosure MC_SMB_omitSkipWhitespace = new_MethodClosure((Method)PMethod19440, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_omitSkipWhitespace, MC_SMB_omitSkipWhitespace);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray19444 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Assign PAssign19446 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode19445 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19446, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19443 = new_Method_with(PArray19444, empty_Array, empty_Array, PThreadedCode19445, 2, PAssign19446, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod19443, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_backward() {
    Symbol SMB_backward = new_Symbol(L"backward");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19450 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19449 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19450);
    Array PThreadedCode19448 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19449, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19450, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19447 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19448, 2, PAssign19449, self);
    
    MethodClosure MC_SMB_backward = new_MethodClosure((Method)PMethod19447, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_backward, MC_SMB_backward);
}


static void init_SMB_skipWhitespace() {
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
    Send PSend19453 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode19452 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19453, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19451 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19452, 2, PSend19453, self);
    
    MethodClosure MC_SMB_skipWhitespace = new_MethodClosure((Method)PMethod19451, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_skipWhitespace, MC_SMB_skipWhitespace);
}


static void init_SMB_pushUntil_() {
    Symbol SMB_pushUntil_ = new_Symbol(L"pushUntil:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray19455 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19456 = new_Array_with(1, (Optr)VAR_s_0_1);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19460 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19463 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend19464 = new_Send((Optr)PSend19463, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode19462 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19463, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19464, (Optr)&t_block_return);
    Block PBlock19461 = new_Block_with(empty_Array, empty_Array, PThreadedCode19462, 1, PSend19464);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend19459 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend19460, (Optr)PBlock19461);
    Assign PAssign19458 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19459);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19466 = new_Send((Optr)VAR_s_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19465 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19466);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19467 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Assign PAssign19468 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Array PThreadedCode19457 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign19458, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19460, (Optr)&t_push_closure, (Optr)PBlock19461, (Optr)&t_send3, (Optr)PSend19459, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19465, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19466, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send3, (Optr)PSend19467, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19468, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19454 = new_Method_with(PArray19455, PArray19456, empty_Array, PThreadedCode19457, 5, PAssign19458, PAssign19465, PSend19467, PAssign19468, self);
    
    MethodClosure MC_SMB_pushUntil_ = new_MethodClosure((Method)PMethod19454, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_pushUntil_, MC_SMB_pushUntil_);
}


static void init_SMB_scanUntil_() {
    Symbol SMB_scanUntil_ = new_Symbol(L"scanUntil:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray19470 = new_Array_with(1, (Optr)VAR_char_0_0);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19474 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19477 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend19478 = new_Send((Optr)PSend19477, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode19476 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19477, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19478, (Optr)&t_block_return);
    Block PBlock19475 = new_Block_with(empty_Array, empty_Array, PThreadedCode19476, 1, PSend19478);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend19473 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend19474, (Optr)PBlock19475);
    Assign PAssign19472 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19473);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19480 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19479 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19480);
    Array PThreadedCode19471 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign19472, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19474, (Optr)&t_push_closure, (Optr)PBlock19475, (Optr)&t_send3, (Optr)PSend19473, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19479, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19480, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19469 = new_Method_with(PArray19470, empty_Array, empty_Array, PThreadedCode19471, 3, PAssign19472, PAssign19479, self);
    
    MethodClosure MC_SMB_scanUntil_ = new_MethodClosure((Method)PMethod19469, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanUntil_, MC_SMB_scanUntil_);
}


static void init_SMB_stack_() {
    Symbol SMB_stack_ = new_Symbol(L"stack:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray19482 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign19484 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)VAR_anObject_0_0);
    Array PThreadedCode19483 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19484, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19481 = new_Method_with(PArray19482, empty_Array, empty_Array, PThreadedCode19483, 2, PAssign19484, self);
    
    MethodClosure MC_SMB_stack_ = new_MethodClosure((Method)PMethod19481, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_stack_, MC_SMB_stack_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray19486 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_19488 = new_String(L"PEGStringScanner(");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_19488_Const = new_Constant((Optr)string_19488);
    // <<. 
    Send PSend19489 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_19488_Const);
    // printOn:. 
    Send PSend19490 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4149 = new_Character(L')');
    Constant char_4149_Const = new_Constant((Optr)char_4149);
    // <<. 
    Send PSend19491 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4149_Const);
    Array PThreadedCode19487 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_19488, (Optr)&t_send1, (Optr)PSend19489, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend19490, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4149, (Optr)&t_send1, (Optr)PSend19491, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19485 = new_Method_with(PArray19486, empty_Array, empty_Array, PThreadedCode19487, 4, PSend19489, PSend19490, PSend19491, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod19485, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scanPushCharacter_() {
    Symbol SMB_scanPushCharacter_ = new_Symbol(L"scanPushCharacter:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray19493 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19496 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19498 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19502 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19501 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19502, (Optr)&t_block_return);
    Block PBlock19500 = new_Block_with(empty_Array, empty_Array, PThreadedCode19501, 1, PSend19502);
    // ifTrue:. 
    Send PSend19499 = new_Send((Optr)PSend19498, SMB_ifTrue_, 1, (Optr)PBlock19500);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19503 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19504 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19503);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19505 = new_Send((Optr)PSend19504, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19506 = new_Send((Optr)PSend19505, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend19510 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19509 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19510, (Optr)&t_block_return);
    Block PBlock19508 = new_Block_with(empty_Array, empty_Array, PThreadedCode19509, 1, PSend19510);
    // ifFalse:. 
    Send PSend19507 = new_Send((Optr)PSend19506, SMB_ifFalse_, 1, (Optr)PBlock19508);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend19511 = new_Send((Optr)VAR_character_0_0, SMB_asCharacter, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19512 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend19511);
    // +. 
    Send PSend19514 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19513 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19514);
    Array PThreadedCode19497 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19498, (Optr)&t_send_ifTrue_, (Optr)PSend19499, (Optr)PBlock19500, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19503, (Optr)&t_send1, (Optr)PSend19504, (Optr)&t_send0, (Optr)PSend19505, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend19506, (Optr)&t_send_ifFalse_, (Optr)PSend19507, (Optr)PBlock19508, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend19511, (Optr)&t_send1, (Optr)PSend19512, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19513, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19514, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19495 = new_Block_with(PArray19496, empty_Array, PThreadedCode19497, 5, PSend19499, PSend19507, PSend19512, PAssign19513, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19515 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19495);
    Array PThreadedCode19494 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19495, (Optr)&t_send1, (Optr)PSend19515, (Optr)&t_method_return);
    Method PMethod19492 = new_Method_with(PArray19493, empty_Array, empty_Array, PThreadedCode19494, 1, PSend19515);
    
    MethodClosure MC_SMB_scanPushCharacter_ = new_MethodClosure((Method)PMethod19492, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanPushCharacter_, MC_SMB_scanPushCharacter_);
}


static void init_SMB_forward() {
    Symbol SMB_forward = new_Symbol(L"forward");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19519 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19518 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19519);
    Array PThreadedCode19517 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19518, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19519, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19516 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19517, 2, PAssign19518, self);
    
    MethodClosure MC_SMB_forward = new_MethodClosure((Method)PMethod19516, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_forward, MC_SMB_forward);
}


static void init_SMB_parsingFailed() {
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    Assign PAssign19522 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)slot_PEG_StringScanner_longestMatch);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray19524 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend19526 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)self);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend19527 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode19525 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19526, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend19527, (Optr)&t_method_return);
    Block PBlock19523 = new_Block_with(PArray19524, empty_Array, PThreadedCode19525, 2, PSend19526, PSend19527);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19528 = new_Send((Optr)PEGParsingFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19529 = new_Send((Optr)PBlock19523, SMB_value_, 1, (Optr)PSend19528);
    Array PThreadedCode19521 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign19522, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19523, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_send0, (Optr)PSend19528, (Optr)&t_send1, (Optr)PSend19529, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19520 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19521, 3, PAssign19522, PSend19529, self);
    
    MethodClosure MC_SMB_parsingFailed = new_MethodClosure((Method)PMethod19520, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_parsingFailed, MC_SMB_parsingFailed);
}


static void init_SMB_bucket() {
    Symbol SMB_bucket = new_Symbol(L"bucket");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19533 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19535 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19536 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_, 1, (Optr)PSend19535);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray19538 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19540 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_bucket_2_0);
    Array PThreadedCode19539 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_send1, (Optr)PSend19540, (Optr)&t_method_return);
    Block PBlock19537 = new_Block_with(PArray19538, empty_Array, PThreadedCode19539, 1, PSend19540);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend19541 = new_Send((Optr)PSend19536, SMB_ifNotNil_, 1, (Optr)PBlock19537);
    // +. 
    Send PSend19542 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19543 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19544 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_put_, 2, (Optr)PSend19542, (Optr)PSend19543);
    Array PThreadedCode19534 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19535, (Optr)&t_send1, (Optr)PSend19536, (Optr)&t_push_closure, (Optr)PBlock19537, (Optr)&t_send1, (Optr)PSend19541, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19542, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend19543, (Optr)&t_send2, (Optr)PSend19544, (Optr)&t_method_return);
    Block PBlock19532 = new_Block_with(PArray19533, empty_Array, PThreadedCode19534, 2, PSend19541, PSend19544);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19545 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19532);
    Array PThreadedCode19531 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19532, (Optr)&t_send1, (Optr)PSend19545, (Optr)&t_method_return);
    Method PMethod19530 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19531, 1, PSend19545);
    
    MethodClosure MC_SMB_bucket = new_MethodClosure((Method)PMethod19530, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_bucket, MC_SMB_bucket);
}


static void init_SMB_pushAllIn_() {
    Symbol SMB_pushAllIn_ = new_Symbol(L"pushAllIn:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19547 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19550 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19552 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19553 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19555 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19557 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend19558 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend19557);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend19559 = new_Send((Optr)PSend19558, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19563 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19564 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19563);
    // -. 
    Send PSend19566 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19565 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19566);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19567 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19562 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19563, (Optr)&t_send3, (Optr)PSend19564, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19565, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19566, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19567, (Optr)&t_block_return);
    Block PBlock19561 = new_Block_with(empty_Array, empty_Array, PThreadedCode19562, 3, PSend19564, PAssign19565, PSend19567);
    // ifTrue:. 
    Send PSend19560 = new_Send((Optr)PSend19559, SMB_ifTrue_, 1, (Optr)PBlock19561);
    Array PThreadedCode19556 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19557, (Optr)&t_send1, (Optr)PSend19558, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19559, (Optr)&t_send_ifTrue_, (Optr)PSend19560, (Optr)PBlock19561, (Optr)&t_method_return);
    Block PBlock19554 = new_Block_with(PArray19555, empty_Array, PThreadedCode19556, 1, PSend19560);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19568 = new_Send((Optr)PSend19552, SMB_to_do_, 2, (Optr)PSend19553, (Optr)PBlock19554);
    // size. 
    Send PSend19569 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // push:from:to:. 
    Send PSend19570 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19569);
    // size. 
    Send PSend19572 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign19571 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19572);
    Array PThreadedCode19551 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19552, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19553, (Optr)&t_push_closure, (Optr)PBlock19554, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19568, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19569, (Optr)&t_send3, (Optr)PSend19570, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19571, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19572, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19549 = new_Block_with(PArray19550, empty_Array, PThreadedCode19551, 4, PSend19568, PSend19570, PAssign19571, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19573 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19549);
    Array PThreadedCode19548 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19549, (Optr)&t_send1, (Optr)PSend19573, (Optr)&t_method_return);
    Method PMethod19546 = new_Method_with(PArray19547, empty_Array, empty_Array, PThreadedCode19548, 1, PSend19573);
    
    MethodClosure MC_SMB_pushAllIn_ = new_MethodClosure((Method)PMethod19546, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_pushAllIn_, MC_SMB_pushAllIn_);
}


static void init_SMB_scanPush_() {
    Symbol SMB_scanPush_ = new_Symbol(L"scanPush:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19575 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19576 = new_Array_with(1, (Optr)VAR_s_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19579 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend19581 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19585 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19584 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19585, (Optr)&t_block_return);
    Block PBlock19583 = new_Block_with(empty_Array, empty_Array, PThreadedCode19584, 1, PSend19585);
    // ifFalse:. 
    Send PSend19582 = new_Send((Optr)PSend19581, SMB_ifFalse_, 1, (Optr)PBlock19583);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19587 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    Assign PAssign19586 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19587);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19588 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19589 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19588);
    // +. 
    Send PSend19591 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Assign PAssign19590 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19591);
    Array PThreadedCode19580 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend19581, (Optr)&t_send_ifFalse_, (Optr)PSend19582, (Optr)PBlock19583, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19586, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend19587, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19588, (Optr)&t_send3, (Optr)PSend19589, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19590, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19591, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19578 = new_Block_with(PArray19579, empty_Array, PThreadedCode19580, 5, PSend19582, PAssign19586, PSend19589, PAssign19590, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19592 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19578);
    Array PThreadedCode19577 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19578, (Optr)&t_send1, (Optr)PSend19592, (Optr)&t_method_return);
    Method PMethod19574 = new_Method_with(PArray19575, PArray19576, empty_Array, PThreadedCode19577, 1, PSend19592);
    
    MethodClosure MC_SMB_scanPush_ = new_MethodClosure((Method)PMethod19574, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanPush_, MC_SMB_scanPush_);
}


static void init_SMB_stack() {
    Symbol SMB_stack = new_Symbol(L"stack");
    Array PThreadedCode19594 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_method_return);
    Method PMethod19593 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19594, 1, slot_PEG_StringScanner_stack);
    
    MethodClosure MC_SMB_stack = new_MethodClosure((Method)PMethod19593, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_stack, MC_SMB_stack);
}


static void init_SMB_sample() {
    Symbol SMB_sample = new_Symbol(L"sample");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Variable VAR_sampleSize_0_1 = new_Variable_named(L"sampleSize", 0);
    Array PArray19596 = new_Array_with(2, (Optr)VAR_result_0_0, (Optr)VAR_sampleSize_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19600 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_min_ = new_Symbol(L"min:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
    Send PSend19599 = new_Send((Optr)PSend19600, SMB_min_, 1, (Optr)int_20_Const);
    Assign PAssign19598 = new_Assign((Optr)VAR_sampleSize_0_1, (Optr)PSend19599);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend19603 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19602 = new_Send((Optr)PSend19603, SMB_new_, 1, (Optr)VAR_sampleSize_0_1);
    Assign PAssign19601 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend19602);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19604 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_sampleSize_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19605 = new_Send((Optr)PSend19604, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19607 = new_Array_with(1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend19609 = new_Send((Optr)int_1_Const, SMB__plus_, 1, (Optr)VAR_i_1_0);
    // -. 
    Send PSend19610 = new_Send((Optr)PSend19609, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    // +. 
    Send PSend19611 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19612 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19611);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19613 = new_Send((Optr)VAR_result_0_0, SMB_at_put_, 2, (Optr)PSend19610, (Optr)PSend19612);
    Array PThreadedCode19608 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend19609, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19610, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19611, (Optr)&t_send1, (Optr)PSend19612, (Optr)&t_send2, (Optr)PSend19613, (Optr)&t_method_return);
    Block PBlock19606 = new_Block_with(PArray19607, empty_Array, PThreadedCode19608, 1, PSend19613);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19614 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB_to_do_, 2, (Optr)PSend19605, (Optr)PBlock19606);
    Array PThreadedCode19597 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign19598, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19600, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend19599, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19601, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19603, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19602, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19604, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19605, (Optr)&t_push_closure, (Optr)PBlock19606, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19614, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod19595 = new_Method_with(empty_Array, PArray19596, empty_Array, PThreadedCode19597, 4, PAssign19598, PAssign19601, PSend19614, VAR_result_0_0);
    
    MethodClosure MC_SMB_sample = new_MethodClosure((Method)PMethod19595, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_sample, MC_SMB_sample);
}


static void init_class_SMB_on_separator_() {
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aSeparator_0_1 = new_Variable_named(L"aSeparator", 0);
    Array PArray19616 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend19618 = new_Send((Optr)self, SMB_basicNew, 0);
    // on:separator:. 
    Send PSend19619 = new_Send((Optr)PSend19618, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Array PThreadedCode19617 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19618, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send2, (Optr)PSend19619, (Optr)&t_method_return);
    Method PMethod19615 = new_Method_with(PArray19616, empty_Array, empty_Array, PThreadedCode19617, 1, PSend19619);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod19615, HEADER(PEG_StringScanner_Class));
    store_method(HEADER(PEG_StringScanner_Class), SMB_on_separator_, MC_SMB_on_separator_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray19621 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend19623 = new_Send((Optr)PEGParser_classReference, SMB_separator, 0);
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    // on:separator:. 
    Send PSend19624 = new_Send((Optr)self, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)PSend19623);
    Array PThreadedCode19622 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend19623, (Optr)&t_send2, (Optr)PSend19624, (Optr)&t_method_return);
    Method PMethod19620 = new_Method_with(PArray19621, empty_Array, empty_Array, PThreadedCode19622, 1, PSend19624);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod19620, HEADER(PEG_StringScanner_Class));
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