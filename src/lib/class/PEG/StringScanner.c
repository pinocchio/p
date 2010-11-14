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
    Send PSend19192 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19196 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19197 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19196);
    Array PThreadedCode19195 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19196, (Optr)&t_send1, (Optr)PSend19197, (Optr)&t_block_return);
    Block PBlock19194 = new_Block_with(empty_Array, empty_Array, PThreadedCode19195, 1, PSend19197);
    // ifFalse:. 
    Send PSend19193 = new_Send((Optr)PSend19192, SMB_ifFalse_, 1, (Optr)PBlock19194);
    Array PThreadedCode19191 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19192, (Optr)&t_send_ifFalse_, (Optr)PSend19193, (Optr)PBlock19194, (Optr)&t_method_return);
    Method PMethod19190 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19191, 1, PSend19193);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod19190, PEG_StringScanner_Class);
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
    Array PArray19199 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend19201 = new_Send((Optr)VAR_aString_0_0, SMB_asString, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Super PSuper19202 = new_Super(SMB_on_, 1, (Optr)PSend19201);
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    // withoutOmit. 
    Send PSend19204 = new_Send((Optr)VAR_aSeparator_0_1, SMB_withoutOmit, 0);
    Assign PAssign19203 = new_Assign((Optr)slot_PEG_StringScanner_separator, (Optr)PSend19204);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19208 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19207 = new_Send((Optr)PSend19208, SMB__plus_, 1, (Optr)int_1_Const);
    // new:. 
    Send PSend19206 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend19207);
    Assign PAssign19205 = new_Assign((Optr)slot_PEG_StringScanner_cache, (Optr)PSend19206);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign19209 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19211 = new_Send((Optr)PEGStack_classReference, SMB_new, 0);
    Assign PAssign19210 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)PSend19211);
    Array PThreadedCode19200 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend19201, (Optr)&t_super1, (Optr)PSuper19202, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19203, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send0, (Optr)PSend19204, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19205, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend19208, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19207, (Optr)&t_send1, (Optr)PSend19206, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19209, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19210, (Optr)&t_push_class_reference, (Optr)PEGStack_classReference, (Optr)&t_send0, (Optr)PSend19211, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19198 = new_Method_with(PArray19199, empty_Array, empty_Array, PThreadedCode19200, 6, PSuper19202, PAssign19203, PAssign19205, PAssign19209, PAssign19210, self);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod19198, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_on_separator_, MC_SMB_on_separator_);
}


static void init_SMB_memoizeMatch_() {
    Symbol SMB_memoizeMatch_ = new_Symbol(L"memoizeMatch:");
    Variable VAR_parser_0_0 = new_Variable_named(L"parser", 0);
    Array PArray19213 = new_Array_with(1, (Optr)VAR_parser_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray19214 = new_Array_with(2, (Optr)VAR_result_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19217 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_bucket = new_Symbol(L"bucket");
    // bucket. 
    Send PSend19220 = new_Send((Optr)self, SMB_bucket, 0);
    Assign PAssign19219 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend19220);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend19225 = new_Send((Optr)VAR_parser_0_0, SMB_parseOn_, 1, (Optr)self);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend19230 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign19229 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend19230);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19231 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_peek, 0);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend19232 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__at_, 1, (Optr)PSend19231);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19233 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)PSend19232);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19234 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19228 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign19229, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19230, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_send0, (Optr)PSend19231, (Optr)&t_send1, (Optr)PSend19232, (Optr)&t_send2, (Optr)PSend19233, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19234, (Optr)&t_block_return);
    Block PBlock19227 = new_Block_with(empty_Array, empty_Array, PThreadedCode19228, 3, PAssign19229, PSend19233, PSend19234);
    // max:. 
    Send PSend19238 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign19237 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend19238);
    // at:put:. 
    Send PSend19239 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)nil_Const);
    // escape:. 
    Send PSend19240 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19236 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign19237, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19238, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend19239, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19240, (Optr)&t_block_return);
    Block PBlock19235 = new_Block_with(empty_Array, empty_Array, PThreadedCode19236, 3, PAssign19237, PSend19239, PSend19240);
    // ifTrue:ifFalse:. 
    Send PSend19226 = new_Send((Optr)PSend19225, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19227, (Optr)PBlock19235);
    Array PThreadedCode19224 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19225, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19226, (Optr)PBlock19227, (Optr)PBlock19235, (Optr)&t_block_return);
    Block PBlock19223 = new_Block_with(empty_Array, empty_Array, PThreadedCode19224, 1, PSend19226);
    // at:ifAbsent:. 
    Send PSend19222 = new_Send((Optr)VAR_bucket_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_parser_0_0, (Optr)PBlock19223);
    Assign PAssign19221 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend19222);
    // escape:. 
    Send PSend19243 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19242 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19243, (Optr)&t_block_return);
    Block PBlock19241 = new_Block_with(empty_Array, empty_Array, PThreadedCode19242, 1, PSend19243);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19244 = new_Send((Optr)VAR_result_0_1, SMB_ifNil_, 1, (Optr)PBlock19241);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend19246 = new_Send((Optr)VAR_result_0_1, SMB_x, 0);
    Assign PAssign19245 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19246);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend19247 = new_Send((Optr)VAR_result_0_1, SMB_y, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19248 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend19247);
    Array PThreadedCode19218 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign19219, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19220, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19221, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_closure, (Optr)PBlock19223, (Optr)&t_send2, (Optr)PSend19222, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_closure, (Optr)PBlock19241, (Optr)&t_send1, (Optr)PSend19244, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19245, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend19246, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend19247, (Optr)&t_send1, (Optr)PSend19248, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19216 = new_Block_with(PArray19217, empty_Array, PThreadedCode19218, 6, PAssign19219, PAssign19221, PSend19244, PAssign19245, PSend19248, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19249 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19216);
    Array PThreadedCode19215 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19216, (Optr)&t_send1, (Optr)PSend19249, (Optr)&t_method_return);
    Method PMethod19212 = new_Method_with(PArray19213, PArray19214, empty_Array, PThreadedCode19215, 1, PSend19249);
    
    MethodClosure MC_SMB_memoizeMatch_ = new_MethodClosure((Method)PMethod19212, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_memoizeMatch_, MC_SMB_memoizeMatch_);
}


static void init_SMB_scanAllIn_() {
    Symbol SMB_scanAllIn_ = new_Symbol(L"scanAllIn:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19251 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19254 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19256 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19257 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19259 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19261 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend19262 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend19261);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend19263 = new_Send((Optr)PSend19262, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19268 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19267 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19268);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19269 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19266 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign19267, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19268, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19269, (Optr)&t_block_return);
    Block PBlock19265 = new_Block_with(empty_Array, empty_Array, PThreadedCode19266, 2, PAssign19267, PSend19269);
    // ifTrue:. 
    Send PSend19264 = new_Send((Optr)PSend19263, SMB_ifTrue_, 1, (Optr)PBlock19265);
    Array PThreadedCode19260 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19261, (Optr)&t_send1, (Optr)PSend19262, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19263, (Optr)&t_send_ifTrue_, (Optr)PSend19264, (Optr)PBlock19265, (Optr)&t_method_return);
    Block PBlock19258 = new_Block_with(PArray19259, empty_Array, PThreadedCode19260, 1, PSend19264);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19270 = new_Send((Optr)PSend19256, SMB_to_do_, 2, (Optr)PSend19257, (Optr)PBlock19258);
    // size. 
    Send PSend19272 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign19271 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19272);
    Array PThreadedCode19255 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19256, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19257, (Optr)&t_push_closure, (Optr)PBlock19258, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19270, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19271, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19272, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19253 = new_Block_with(PArray19254, empty_Array, PThreadedCode19255, 3, PSend19270, PAssign19271, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19273 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19253);
    Array PThreadedCode19252 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19253, (Optr)&t_send1, (Optr)PSend19273, (Optr)&t_method_return);
    Method PMethod19250 = new_Method_with(PArray19251, empty_Array, empty_Array, PThreadedCode19252, 1, PSend19273);
    
    MethodClosure MC_SMB_scanAllIn_ = new_MethodClosure((Method)PMethod19250, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanAllIn_, MC_SMB_scanAllIn_);
}


static void init_SMB_scan_() {
    Symbol SMB_scan_ = new_Symbol(L"scan:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19275 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19278 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend19280 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19284 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19283 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19284, (Optr)&t_block_return);
    Block PBlock19282 = new_Block_with(empty_Array, empty_Array, PThreadedCode19283, 1, PSend19284);
    // ifFalse:. 
    Send PSend19281 = new_Send((Optr)PSend19280, SMB_ifFalse_, 1, (Optr)PBlock19282);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19287 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend19286 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend19287);
    Assign PAssign19285 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19286);
    Array PThreadedCode19279 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend19280, (Optr)&t_send_ifFalse_, (Optr)PSend19281, (Optr)PBlock19282, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19285, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend19287, (Optr)&t_send1, (Optr)PSend19286, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19277 = new_Block_with(PArray19278, empty_Array, PThreadedCode19279, 3, PSend19281, PAssign19285, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19288 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19277);
    Array PThreadedCode19276 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19277, (Optr)&t_send1, (Optr)PSend19288, (Optr)&t_method_return);
    Method PMethod19274 = new_Method_with(PArray19275, empty_Array, empty_Array, PThreadedCode19276, 1, PSend19288);
    
    MethodClosure MC_SMB_scan_ = new_MethodClosure((Method)PMethod19274, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scan_, MC_SMB_scan_);
}


static void init_SMB_scanCharacter_() {
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray19290 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19293 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19295 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19299 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19298 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19299, (Optr)&t_block_return);
    Block PBlock19297 = new_Block_with(empty_Array, empty_Array, PThreadedCode19298, 1, PSend19299);
    // ifTrue:. 
    Send PSend19296 = new_Send((Optr)PSend19295, SMB_ifTrue_, 1, (Optr)PBlock19297);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19300 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19301 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19300);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19302 = new_Send((Optr)PSend19301, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19303 = new_Send((Optr)PSend19302, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend19307 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19306 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19307, (Optr)&t_block_return);
    Block PBlock19305 = new_Block_with(empty_Array, empty_Array, PThreadedCode19306, 1, PSend19307);
    // ifFalse:. 
    Send PSend19304 = new_Send((Optr)PSend19303, SMB_ifFalse_, 1, (Optr)PBlock19305);
    // +. 
    Send PSend19309 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19308 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19309);
    Array PThreadedCode19294 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19295, (Optr)&t_send_ifTrue_, (Optr)PSend19296, (Optr)PBlock19297, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19300, (Optr)&t_send1, (Optr)PSend19301, (Optr)&t_send0, (Optr)PSend19302, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend19303, (Optr)&t_send_ifFalse_, (Optr)PSend19304, (Optr)PBlock19305, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19308, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19309, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19292 = new_Block_with(PArray19293, empty_Array, PThreadedCode19294, 4, PSend19296, PSend19304, PAssign19308, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19310 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19292);
    Array PThreadedCode19291 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19292, (Optr)&t_send1, (Optr)PSend19310, (Optr)&t_method_return);
    Method PMethod19289 = new_Method_with(PArray19290, empty_Array, empty_Array, PThreadedCode19291, 1, PSend19310);
    
    MethodClosure MC_SMB_scanCharacter_ = new_MethodClosure((Method)PMethod19289, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanCharacter_, MC_SMB_scanCharacter_);
}


static void init_SMB_omitSkipWhitespace() {
    Symbol SMB_omitSkipWhitespace = new_Symbol(L"omitSkipWhitespace");
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
    Send PSend19313 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode19312 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19313, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19311 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19312, 2, PSend19313, self);
    
    MethodClosure MC_SMB_omitSkipWhitespace = new_MethodClosure((Method)PMethod19311, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_omitSkipWhitespace, MC_SMB_omitSkipWhitespace);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray19315 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Assign PAssign19317 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode19316 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19317, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19314 = new_Method_with(PArray19315, empty_Array, empty_Array, PThreadedCode19316, 2, PAssign19317, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod19314, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_backward() {
    Symbol SMB_backward = new_Symbol(L"backward");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19321 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19320 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19321);
    Array PThreadedCode19319 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19320, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19321, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19318 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19319, 2, PAssign19320, self);
    
    MethodClosure MC_SMB_backward = new_MethodClosure((Method)PMethod19318, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_backward, MC_SMB_backward);
}


static void init_SMB_skipWhitespace() {
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
    Send PSend19324 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode19323 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19324, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19322 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19323, 2, PSend19324, self);
    
    MethodClosure MC_SMB_skipWhitespace = new_MethodClosure((Method)PMethod19322, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_skipWhitespace, MC_SMB_skipWhitespace);
}


static void init_SMB_pushUntil_() {
    Symbol SMB_pushUntil_ = new_Symbol(L"pushUntil:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray19326 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19327 = new_Array_with(1, (Optr)VAR_s_0_1);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19331 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19334 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend19335 = new_Send((Optr)PSend19334, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode19333 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19334, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19335, (Optr)&t_block_return);
    Block PBlock19332 = new_Block_with(empty_Array, empty_Array, PThreadedCode19333, 1, PSend19335);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend19330 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend19331, (Optr)PBlock19332);
    Assign PAssign19329 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19330);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19337 = new_Send((Optr)VAR_s_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19336 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19337);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19338 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Assign PAssign19339 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Array PThreadedCode19328 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign19329, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19331, (Optr)&t_push_closure, (Optr)PBlock19332, (Optr)&t_send3, (Optr)PSend19330, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19336, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19337, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send3, (Optr)PSend19338, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19339, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19325 = new_Method_with(PArray19326, PArray19327, empty_Array, PThreadedCode19328, 5, PAssign19329, PAssign19336, PSend19338, PAssign19339, self);
    
    MethodClosure MC_SMB_pushUntil_ = new_MethodClosure((Method)PMethod19325, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_pushUntil_, MC_SMB_pushUntil_);
}


static void init_SMB_scanUntil_() {
    Symbol SMB_scanUntil_ = new_Symbol(L"scanUntil:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray19341 = new_Array_with(1, (Optr)VAR_char_0_0);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19345 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19348 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend19349 = new_Send((Optr)PSend19348, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode19347 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19348, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19349, (Optr)&t_block_return);
    Block PBlock19346 = new_Block_with(empty_Array, empty_Array, PThreadedCode19347, 1, PSend19349);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend19344 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend19345, (Optr)PBlock19346);
    Assign PAssign19343 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19344);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19351 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19350 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19351);
    Array PThreadedCode19342 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign19343, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19345, (Optr)&t_push_closure, (Optr)PBlock19346, (Optr)&t_send3, (Optr)PSend19344, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19350, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19351, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19340 = new_Method_with(PArray19341, empty_Array, empty_Array, PThreadedCode19342, 3, PAssign19343, PAssign19350, self);
    
    MethodClosure MC_SMB_scanUntil_ = new_MethodClosure((Method)PMethod19340, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanUntil_, MC_SMB_scanUntil_);
}


static void init_SMB_stack_() {
    Symbol SMB_stack_ = new_Symbol(L"stack:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray19353 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign19355 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)VAR_anObject_0_0);
    Array PThreadedCode19354 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19355, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19352 = new_Method_with(PArray19353, empty_Array, empty_Array, PThreadedCode19354, 2, PAssign19355, self);
    
    MethodClosure MC_SMB_stack_ = new_MethodClosure((Method)PMethod19352, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_stack_, MC_SMB_stack_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray19357 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_19359 = new_String(L"PEGStringScanner(");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_19359_Const = new_Constant((Optr)string_19359);
    // <<. 
    Send PSend19360 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_19359_Const);
    // printOn:. 
    Send PSend19361 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend19362 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode19358 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_19359, (Optr)&t_send1, (Optr)PSend19360, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend19361, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend19362, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19356 = new_Method_with(PArray19357, empty_Array, empty_Array, PThreadedCode19358, 4, PSend19360, PSend19361, PSend19362, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod19356, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scanPushCharacter_() {
    Symbol SMB_scanPushCharacter_ = new_Symbol(L"scanPushCharacter:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray19364 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19367 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19369 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19373 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19372 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19373, (Optr)&t_block_return);
    Block PBlock19371 = new_Block_with(empty_Array, empty_Array, PThreadedCode19372, 1, PSend19373);
    // ifTrue:. 
    Send PSend19370 = new_Send((Optr)PSend19369, SMB_ifTrue_, 1, (Optr)PBlock19371);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19374 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19375 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19374);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19376 = new_Send((Optr)PSend19375, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19377 = new_Send((Optr)PSend19376, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend19381 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19380 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19381, (Optr)&t_block_return);
    Block PBlock19379 = new_Block_with(empty_Array, empty_Array, PThreadedCode19380, 1, PSend19381);
    // ifFalse:. 
    Send PSend19378 = new_Send((Optr)PSend19377, SMB_ifFalse_, 1, (Optr)PBlock19379);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend19382 = new_Send((Optr)VAR_character_0_0, SMB_asCharacter, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19383 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend19382);
    // +. 
    Send PSend19385 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19384 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19385);
    Array PThreadedCode19368 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19369, (Optr)&t_send_ifTrue_, (Optr)PSend19370, (Optr)PBlock19371, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19374, (Optr)&t_send1, (Optr)PSend19375, (Optr)&t_send0, (Optr)PSend19376, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend19377, (Optr)&t_send_ifFalse_, (Optr)PSend19378, (Optr)PBlock19379, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend19382, (Optr)&t_send1, (Optr)PSend19383, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19384, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19385, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19366 = new_Block_with(PArray19367, empty_Array, PThreadedCode19368, 5, PSend19370, PSend19378, PSend19383, PAssign19384, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19386 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19366);
    Array PThreadedCode19365 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19366, (Optr)&t_send1, (Optr)PSend19386, (Optr)&t_method_return);
    Method PMethod19363 = new_Method_with(PArray19364, empty_Array, empty_Array, PThreadedCode19365, 1, PSend19386);
    
    MethodClosure MC_SMB_scanPushCharacter_ = new_MethodClosure((Method)PMethod19363, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanPushCharacter_, MC_SMB_scanPushCharacter_);
}


static void init_SMB_forward() {
    Symbol SMB_forward = new_Symbol(L"forward");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19390 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19389 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19390);
    Array PThreadedCode19388 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19389, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19390, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19387 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19388, 2, PAssign19389, self);
    
    MethodClosure MC_SMB_forward = new_MethodClosure((Method)PMethod19387, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_forward, MC_SMB_forward);
}


static void init_SMB_parsingFailed() {
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    Assign PAssign19393 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)slot_PEG_StringScanner_longestMatch);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray19395 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend19397 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)self);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend19398 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode19396 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19397, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend19398, (Optr)&t_method_return);
    Block PBlock19394 = new_Block_with(PArray19395, empty_Array, PThreadedCode19396, 2, PSend19397, PSend19398);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19399 = new_Send((Optr)PEGParsingFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19400 = new_Send((Optr)PBlock19394, SMB_value_, 1, (Optr)PSend19399);
    Array PThreadedCode19392 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign19393, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19394, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_send0, (Optr)PSend19399, (Optr)&t_send1, (Optr)PSend19400, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19391 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19392, 3, PAssign19393, PSend19400, self);
    
    MethodClosure MC_SMB_parsingFailed = new_MethodClosure((Method)PMethod19391, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_parsingFailed, MC_SMB_parsingFailed);
}


static void init_SMB_bucket() {
    Symbol SMB_bucket = new_Symbol(L"bucket");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19404 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19406 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19407 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_, 1, (Optr)PSend19406);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray19409 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19411 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_bucket_2_0);
    Array PThreadedCode19410 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_send1, (Optr)PSend19411, (Optr)&t_method_return);
    Block PBlock19408 = new_Block_with(PArray19409, empty_Array, PThreadedCode19410, 1, PSend19411);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend19412 = new_Send((Optr)PSend19407, SMB_ifNotNil_, 1, (Optr)PBlock19408);
    // +. 
    Send PSend19413 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19414 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19415 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_put_, 2, (Optr)PSend19413, (Optr)PSend19414);
    Array PThreadedCode19405 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19406, (Optr)&t_send1, (Optr)PSend19407, (Optr)&t_push_closure, (Optr)PBlock19408, (Optr)&t_send1, (Optr)PSend19412, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19413, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend19414, (Optr)&t_send2, (Optr)PSend19415, (Optr)&t_method_return);
    Block PBlock19403 = new_Block_with(PArray19404, empty_Array, PThreadedCode19405, 2, PSend19412, PSend19415);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19416 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19403);
    Array PThreadedCode19402 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19403, (Optr)&t_send1, (Optr)PSend19416, (Optr)&t_method_return);
    Method PMethod19401 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19402, 1, PSend19416);
    
    MethodClosure MC_SMB_bucket = new_MethodClosure((Method)PMethod19401, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_bucket, MC_SMB_bucket);
}


static void init_SMB_pushAllIn_() {
    Symbol SMB_pushAllIn_ = new_Symbol(L"pushAllIn:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19418 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19421 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19423 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19424 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19426 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19428 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend19429 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend19428);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend19430 = new_Send((Optr)PSend19429, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19434 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19435 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19434);
    // -. 
    Send PSend19437 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19436 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19437);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19438 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19433 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19434, (Optr)&t_send3, (Optr)PSend19435, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19436, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19437, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19438, (Optr)&t_block_return);
    Block PBlock19432 = new_Block_with(empty_Array, empty_Array, PThreadedCode19433, 3, PSend19435, PAssign19436, PSend19438);
    // ifTrue:. 
    Send PSend19431 = new_Send((Optr)PSend19430, SMB_ifTrue_, 1, (Optr)PBlock19432);
    Array PThreadedCode19427 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19428, (Optr)&t_send1, (Optr)PSend19429, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19430, (Optr)&t_send_ifTrue_, (Optr)PSend19431, (Optr)PBlock19432, (Optr)&t_method_return);
    Block PBlock19425 = new_Block_with(PArray19426, empty_Array, PThreadedCode19427, 1, PSend19431);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19439 = new_Send((Optr)PSend19423, SMB_to_do_, 2, (Optr)PSend19424, (Optr)PBlock19425);
    // size. 
    Send PSend19440 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // push:from:to:. 
    Send PSend19441 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19440);
    // size. 
    Send PSend19443 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign19442 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19443);
    Array PThreadedCode19422 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19423, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19424, (Optr)&t_push_closure, (Optr)PBlock19425, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19439, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19440, (Optr)&t_send3, (Optr)PSend19441, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19442, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19443, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19420 = new_Block_with(PArray19421, empty_Array, PThreadedCode19422, 4, PSend19439, PSend19441, PAssign19442, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19444 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19420);
    Array PThreadedCode19419 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19420, (Optr)&t_send1, (Optr)PSend19444, (Optr)&t_method_return);
    Method PMethod19417 = new_Method_with(PArray19418, empty_Array, empty_Array, PThreadedCode19419, 1, PSend19444);
    
    MethodClosure MC_SMB_pushAllIn_ = new_MethodClosure((Method)PMethod19417, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_pushAllIn_, MC_SMB_pushAllIn_);
}


static void init_SMB_scanPush_() {
    Symbol SMB_scanPush_ = new_Symbol(L"scanPush:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
    Array PArray19446 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19447 = new_Array_with(1, (Optr)VAR_s_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19450 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend19452 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19456 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19455 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19456, (Optr)&t_block_return);
    Block PBlock19454 = new_Block_with(empty_Array, empty_Array, PThreadedCode19455, 1, PSend19456);
    // ifFalse:. 
    Send PSend19453 = new_Send((Optr)PSend19452, SMB_ifFalse_, 1, (Optr)PBlock19454);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19458 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    Assign PAssign19457 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19458);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19459 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19460 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19459);
    // +. 
    Send PSend19462 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Assign PAssign19461 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19462);
    Array PThreadedCode19451 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend19452, (Optr)&t_send_ifFalse_, (Optr)PSend19453, (Optr)PBlock19454, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19457, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend19458, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19459, (Optr)&t_send3, (Optr)PSend19460, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19461, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19462, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19449 = new_Block_with(PArray19450, empty_Array, PThreadedCode19451, 5, PSend19453, PAssign19457, PSend19460, PAssign19461, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19463 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19449);
    Array PThreadedCode19448 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19449, (Optr)&t_send1, (Optr)PSend19463, (Optr)&t_method_return);
    Method PMethod19445 = new_Method_with(PArray19446, PArray19447, empty_Array, PThreadedCode19448, 1, PSend19463);
    
    MethodClosure MC_SMB_scanPush_ = new_MethodClosure((Method)PMethod19445, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_scanPush_, MC_SMB_scanPush_);
}


static void init_SMB_stack() {
    Symbol SMB_stack = new_Symbol(L"stack");
    Array PThreadedCode19465 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_method_return);
    Method PMethod19464 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19465, 1, slot_PEG_StringScanner_stack);
    
    MethodClosure MC_SMB_stack = new_MethodClosure((Method)PMethod19464, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_stack, MC_SMB_stack);
}


static void init_SMB_sample() {
    Symbol SMB_sample = new_Symbol(L"sample");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Variable VAR_sampleSize_0_1 = new_Variable_named(L"sampleSize", 0);
    Array PArray19467 = new_Array_with(2, (Optr)VAR_result_0_0, (Optr)VAR_sampleSize_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19471 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_min_ = new_Symbol(L"min:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
    Send PSend19470 = new_Send((Optr)PSend19471, SMB_min_, 1, (Optr)int_20_Const);
    Assign PAssign19469 = new_Assign((Optr)VAR_sampleSize_0_1, (Optr)PSend19470);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend19474 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19473 = new_Send((Optr)PSend19474, SMB_new_, 1, (Optr)VAR_sampleSize_0_1);
    Assign PAssign19472 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend19473);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19475 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_sampleSize_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19476 = new_Send((Optr)PSend19475, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19478 = new_Array_with(1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend19480 = new_Send((Optr)int_1_Const, SMB__plus_, 1, (Optr)VAR_i_1_0);
    // -. 
    Send PSend19481 = new_Send((Optr)PSend19480, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    // +. 
    Send PSend19482 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19483 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19482);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19484 = new_Send((Optr)VAR_result_0_0, SMB_at_put_, 2, (Optr)PSend19481, (Optr)PSend19483);
    Array PThreadedCode19479 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend19480, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19481, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19482, (Optr)&t_send1, (Optr)PSend19483, (Optr)&t_send2, (Optr)PSend19484, (Optr)&t_method_return);
    Block PBlock19477 = new_Block_with(PArray19478, empty_Array, PThreadedCode19479, 1, PSend19484);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19485 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB_to_do_, 2, (Optr)PSend19476, (Optr)PBlock19477);
    Array PThreadedCode19468 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign19469, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19471, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend19470, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19472, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19474, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19473, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19475, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19476, (Optr)&t_push_closure, (Optr)PBlock19477, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19485, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod19466 = new_Method_with(empty_Array, PArray19467, empty_Array, PThreadedCode19468, 4, PAssign19469, PAssign19472, PSend19485, VAR_result_0_0);
    
    MethodClosure MC_SMB_sample = new_MethodClosure((Method)PMethod19466, PEG_StringScanner_Class);
    store_method(PEG_StringScanner_Class, SMB_sample, MC_SMB_sample);
}


static void init_class_SMB_on_separator_() {
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aSeparator_0_1 = new_Variable_named(L"aSeparator", 0);
    Array PArray19487 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend19489 = new_Send((Optr)self, SMB_basicNew, 0);
    // on:separator:. 
    Send PSend19490 = new_Send((Optr)PSend19489, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Array PThreadedCode19488 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19489, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send2, (Optr)PSend19490, (Optr)&t_method_return);
    Method PMethod19486 = new_Method_with(PArray19487, empty_Array, empty_Array, PThreadedCode19488, 1, PSend19490);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod19486, HEADER(PEG_StringScanner_Class));
    store_method(HEADER(PEG_StringScanner_Class), SMB_on_separator_, MC_SMB_on_separator_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray19492 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend19494 = new_Send((Optr)PEGParser_classReference, SMB_separator, 0);
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    // on:separator:. 
    Send PSend19495 = new_Send((Optr)self, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)PSend19494);
    Array PThreadedCode19493 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend19494, (Optr)&t_send2, (Optr)PSend19495, (Optr)&t_method_return);
    Method PMethod19491 = new_Method_with(PArray19492, empty_Array, empty_Array, PThreadedCode19493, 1, PSend19495);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod19491, HEADER(PEG_StringScanner_Class));
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