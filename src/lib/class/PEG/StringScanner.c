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
<<<<<<< HEAD
    Send PSend19224 = new_Send((Optr)self, SMB_atEnd, 0);
=======
    Send PSend19190 = new_Send((Optr)self, SMB_atEnd, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend19228 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19229 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19228);
    Array PThreadedCode19227 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19228, (Optr)&t_send1, (Optr)PSend19229, (Optr)&t_block_return);
    Block PBlock19226 = new_Block_with(empty_Array, empty_Array, PThreadedCode19227, 1, PSend19229);
    // ifFalse:. 
    Send PSend19225 = new_Send((Optr)PSend19224, SMB_ifFalse_, 1, (Optr)PBlock19226);
    Array PThreadedCode19223 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19224, (Optr)&t_send_ifFalse_, (Optr)PSend19225, (Optr)PBlock19226, (Optr)&t_method_return);
    Method PMethod19222 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19223, 1, PSend19225);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod19222, PEG_StringScanner_Class);
=======
    Send PSend19194 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19195 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19194);
    Array PThreadedCode19193 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19194, (Optr)&t_send1, (Optr)PSend19195, (Optr)&t_block_return);
    Block PBlock19192 = new_Block_with(empty_Array, empty_Array, PThreadedCode19193, 1, PSend19195);
    // ifFalse:. 
    Send PSend19191 = new_Send((Optr)PSend19190, SMB_ifFalse_, 1, (Optr)PBlock19192);
    Array PThreadedCode19189 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19190, (Optr)&t_send_ifFalse_, (Optr)PSend19191, (Optr)PBlock19192, (Optr)&t_method_return);
    Method PMethod19188 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19189, 1, PSend19191);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod19188, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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
<<<<<<< HEAD
    Array PArray19231 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend19233 = new_Send((Optr)VAR_aString_0_0, SMB_asString, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Super PSuper19234 = new_Super(SMB_on_, 1, (Optr)PSend19233);
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    // withoutOmit. 
    Send PSend19236 = new_Send((Optr)VAR_aSeparator_0_1, SMB_withoutOmit, 0);
    Assign PAssign19235 = new_Assign((Optr)slot_PEG_StringScanner_separator, (Optr)PSend19236);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19240 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
=======
    Array PArray19197 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend19199 = new_Send((Optr)VAR_aString_0_0, SMB_asString, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Super PSuper19200 = new_Super(SMB_on_, 1, (Optr)PSend19199);
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    // withoutOmit. 
    Send PSend19202 = new_Send((Optr)VAR_aSeparator_0_1, SMB_withoutOmit, 0);
    Assign PAssign19201 = new_Assign((Optr)slot_PEG_StringScanner_separator, (Optr)PSend19202);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19206 = new_Send((Optr)VAR_aString_0_0, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend19239 = new_Send((Optr)PSend19240, SMB__plus_, 1, (Optr)int_1_Const);
    // new:. 
    Send PSend19238 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend19239);
    Assign PAssign19237 = new_Assign((Optr)slot_PEG_StringScanner_cache, (Optr)PSend19238);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign19241 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19243 = new_Send((Optr)PEGStack_classReference, SMB_new, 0);
    Assign PAssign19242 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)PSend19243);
    Array PThreadedCode19232 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend19233, (Optr)&t_super1, (Optr)PSuper19234, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19235, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send0, (Optr)PSend19236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19237, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend19240, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19239, (Optr)&t_send1, (Optr)PSend19238, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19241, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19242, (Optr)&t_push_class_reference, (Optr)PEGStack_classReference, (Optr)&t_send0, (Optr)PSend19243, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19230 = new_Method_with(PArray19231, empty_Array, empty_Array, PThreadedCode19232, 6, PSuper19234, PAssign19235, PAssign19237, PAssign19241, PAssign19242, self);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod19230, PEG_StringScanner_Class);
=======
    Send PSend19205 = new_Send((Optr)PSend19206, SMB__plus_, 1, (Optr)int_1_Const);
    // new:. 
    Send PSend19204 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend19205);
    Assign PAssign19203 = new_Assign((Optr)slot_PEG_StringScanner_cache, (Optr)PSend19204);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign19207 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19209 = new_Send((Optr)PEGStack_classReference, SMB_new, 0);
    Assign PAssign19208 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)PSend19209);
    Array PThreadedCode19198 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend19199, (Optr)&t_super1, (Optr)PSuper19200, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19201, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send0, (Optr)PSend19202, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19203, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend19206, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19205, (Optr)&t_send1, (Optr)PSend19204, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19207, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19208, (Optr)&t_push_class_reference, (Optr)PEGStack_classReference, (Optr)&t_send0, (Optr)PSend19209, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19196 = new_Method_with(PArray19197, empty_Array, empty_Array, PThreadedCode19198, 6, PSuper19200, PAssign19201, PAssign19203, PAssign19207, PAssign19208, self);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod19196, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_on_separator_, MC_SMB_on_separator_);
}


static void init_SMB_memoizeMatch_() {
    Symbol SMB_memoizeMatch_ = new_Symbol(L"memoizeMatch:");
    Variable VAR_parser_0_0 = new_Variable_named(L"parser", 0);
<<<<<<< HEAD
    Array PArray19245 = new_Array_with(1, (Optr)VAR_parser_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray19246 = new_Array_with(2, (Optr)VAR_result_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19249 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_bucket = new_Symbol(L"bucket");
    // bucket. 
    Send PSend19252 = new_Send((Optr)self, SMB_bucket, 0);
    Assign PAssign19251 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend19252);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend19257 = new_Send((Optr)VAR_parser_0_0, SMB_parseOn_, 1, (Optr)self);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend19262 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign19261 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend19262);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19263 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_peek, 0);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend19264 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__at_, 1, (Optr)PSend19263);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19265 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)PSend19264);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19266 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19260 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign19261, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19262, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_send0, (Optr)PSend19263, (Optr)&t_send1, (Optr)PSend19264, (Optr)&t_send2, (Optr)PSend19265, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19266, (Optr)&t_block_return);
    Block PBlock19259 = new_Block_with(empty_Array, empty_Array, PThreadedCode19260, 3, PAssign19261, PSend19265, PSend19266);
    // max:. 
    Send PSend19270 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign19269 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend19270);
    // at:put:. 
    Send PSend19271 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)nil_Const);
    // escape:. 
    Send PSend19272 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19268 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign19269, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19270, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend19271, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19272, (Optr)&t_block_return);
    Block PBlock19267 = new_Block_with(empty_Array, empty_Array, PThreadedCode19268, 3, PAssign19269, PSend19271, PSend19272);
    // ifTrue:ifFalse:. 
    Send PSend19258 = new_Send((Optr)PSend19257, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19259, (Optr)PBlock19267);
    Array PThreadedCode19256 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19257, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19258, (Optr)PBlock19259, (Optr)PBlock19267, (Optr)&t_block_return);
    Block PBlock19255 = new_Block_with(empty_Array, empty_Array, PThreadedCode19256, 1, PSend19258);
    // at:ifAbsent:. 
    Send PSend19254 = new_Send((Optr)VAR_bucket_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_parser_0_0, (Optr)PBlock19255);
    Assign PAssign19253 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend19254);
    // escape:. 
    Send PSend19275 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19274 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19275, (Optr)&t_block_return);
    Block PBlock19273 = new_Block_with(empty_Array, empty_Array, PThreadedCode19274, 1, PSend19275);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19276 = new_Send((Optr)VAR_result_0_1, SMB_ifNil_, 1, (Optr)PBlock19273);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend19278 = new_Send((Optr)VAR_result_0_1, SMB_x, 0);
    Assign PAssign19277 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19278);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend19279 = new_Send((Optr)VAR_result_0_1, SMB_y, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19280 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend19279);
    Array PThreadedCode19250 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign19251, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19252, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19253, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_closure, (Optr)PBlock19255, (Optr)&t_send2, (Optr)PSend19254, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_closure, (Optr)PBlock19273, (Optr)&t_send1, (Optr)PSend19276, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19277, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend19278, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend19279, (Optr)&t_send1, (Optr)PSend19280, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19248 = new_Block_with(PArray19249, empty_Array, PThreadedCode19250, 6, PAssign19251, PAssign19253, PSend19276, PAssign19277, PSend19280, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19281 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19248);
    Array PThreadedCode19247 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19248, (Optr)&t_send1, (Optr)PSend19281, (Optr)&t_method_return);
    Method PMethod19244 = new_Method_with(PArray19245, PArray19246, empty_Array, PThreadedCode19247, 1, PSend19281);
    
    MethodClosure MC_SMB_memoizeMatch_ = new_MethodClosure((Method)PMethod19244, PEG_StringScanner_Class);
=======
    Array PArray19211 = new_Array_with(1, (Optr)VAR_parser_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray19212 = new_Array_with(2, (Optr)VAR_result_0_1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19215 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_bucket = new_Symbol(L"bucket");
    // bucket. 
    Send PSend19218 = new_Send((Optr)self, SMB_bucket, 0);
    Assign PAssign19217 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend19218);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend19223 = new_Send((Optr)VAR_parser_0_0, SMB_parseOn_, 1, (Optr)self);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend19228 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign19227 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend19228);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19229 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_peek, 0);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend19230 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__at_, 1, (Optr)PSend19229);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19231 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)PSend19230);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19232 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19226 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign19227, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19228, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_send0, (Optr)PSend19229, (Optr)&t_send1, (Optr)PSend19230, (Optr)&t_send2, (Optr)PSend19231, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19232, (Optr)&t_block_return);
    Block PBlock19225 = new_Block_with(empty_Array, empty_Array, PThreadedCode19226, 3, PAssign19227, PSend19231, PSend19232);
    // max:. 
    Send PSend19236 = new_Send((Optr)slot_PEG_StringScanner_longestMatch, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign19235 = new_Assign((Optr)slot_PEG_StringScanner_longestMatch, (Optr)PSend19236);
    // at:put:. 
    Send PSend19237 = new_Send((Optr)VAR_bucket_0_2, SMB_at_put_, 2, (Optr)VAR_parser_0_0, (Optr)nil_Const);
    // escape:. 
    Send PSend19238 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19234 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign19235, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend19237, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19238, (Optr)&t_block_return);
    Block PBlock19233 = new_Block_with(empty_Array, empty_Array, PThreadedCode19234, 3, PAssign19235, PSend19237, PSend19238);
    // ifTrue:ifFalse:. 
    Send PSend19224 = new_Send((Optr)PSend19223, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19225, (Optr)PBlock19233);
    Array PThreadedCode19222 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19223, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19224, (Optr)PBlock19225, (Optr)PBlock19233, (Optr)&t_block_return);
    Block PBlock19221 = new_Block_with(empty_Array, empty_Array, PThreadedCode19222, 1, PSend19224);
    // at:ifAbsent:. 
    Send PSend19220 = new_Send((Optr)VAR_bucket_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_parser_0_0, (Optr)PBlock19221);
    Assign PAssign19219 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend19220);
    // escape:. 
    Send PSend19241 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19240 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19241, (Optr)&t_block_return);
    Block PBlock19239 = new_Block_with(empty_Array, empty_Array, PThreadedCode19240, 1, PSend19241);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19242 = new_Send((Optr)VAR_result_0_1, SMB_ifNil_, 1, (Optr)PBlock19239);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend19244 = new_Send((Optr)VAR_result_0_1, SMB_x, 0);
    Assign PAssign19243 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19244);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend19245 = new_Send((Optr)VAR_result_0_1, SMB_y, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19246 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend19245);
    Array PThreadedCode19216 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign19217, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19218, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19219, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_push_closure, (Optr)PBlock19221, (Optr)&t_send2, (Optr)PSend19220, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_closure, (Optr)PBlock19239, (Optr)&t_send1, (Optr)PSend19242, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19243, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend19244, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send0, (Optr)PSend19245, (Optr)&t_send1, (Optr)PSend19246, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19214 = new_Block_with(PArray19215, empty_Array, PThreadedCode19216, 6, PAssign19217, PAssign19219, PSend19242, PAssign19243, PSend19246, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19247 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19214);
    Array PThreadedCode19213 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19214, (Optr)&t_send1, (Optr)PSend19247, (Optr)&t_method_return);
    Method PMethod19210 = new_Method_with(PArray19211, PArray19212, empty_Array, PThreadedCode19213, 1, PSend19247);
    
    MethodClosure MC_SMB_memoizeMatch_ = new_MethodClosure((Method)PMethod19210, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_memoizeMatch_, MC_SMB_memoizeMatch_);
}


static void init_SMB_scanAllIn_() {
    Symbol SMB_scanAllIn_ = new_Symbol(L"scanAllIn:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
<<<<<<< HEAD
    Array PArray19283 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19286 = new_Array_with(1, (Optr)VAR__return__1_0);
=======
    Array PArray19249 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19252 = new_Array_with(1, (Optr)VAR__return__1_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend19288 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19289 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19291 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19293 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend19294 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend19293);
=======
    Send PSend19254 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19255 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19257 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19259 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend19260 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend19259);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
<<<<<<< HEAD
    Send PSend19295 = new_Send((Optr)PSend19294, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19300 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19299 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19300);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19301 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19298 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign19299, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19300, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19301, (Optr)&t_block_return);
    Block PBlock19297 = new_Block_with(empty_Array, empty_Array, PThreadedCode19298, 2, PAssign19299, PSend19301);
    // ifTrue:. 
    Send PSend19296 = new_Send((Optr)PSend19295, SMB_ifTrue_, 1, (Optr)PBlock19297);
    Array PThreadedCode19292 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19293, (Optr)&t_send1, (Optr)PSend19294, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19295, (Optr)&t_send_ifTrue_, (Optr)PSend19296, (Optr)PBlock19297, (Optr)&t_method_return);
    Block PBlock19290 = new_Block_with(PArray19291, empty_Array, PThreadedCode19292, 1, PSend19296);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19302 = new_Send((Optr)PSend19288, SMB_to_do_, 2, (Optr)PSend19289, (Optr)PBlock19290);
    // size. 
    Send PSend19304 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign19303 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19304);
    Array PThreadedCode19287 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19288, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19289, (Optr)&t_push_closure, (Optr)PBlock19290, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19302, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19303, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19304, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19285 = new_Block_with(PArray19286, empty_Array, PThreadedCode19287, 3, PSend19302, PAssign19303, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19305 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19285);
    Array PThreadedCode19284 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19285, (Optr)&t_send1, (Optr)PSend19305, (Optr)&t_method_return);
    Method PMethod19282 = new_Method_with(PArray19283, empty_Array, empty_Array, PThreadedCode19284, 1, PSend19305);
    
    MethodClosure MC_SMB_scanAllIn_ = new_MethodClosure((Method)PMethod19282, PEG_StringScanner_Class);
=======
    Send PSend19261 = new_Send((Optr)PSend19260, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19266 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19265 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19266);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19267 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19264 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign19265, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19266, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19267, (Optr)&t_block_return);
    Block PBlock19263 = new_Block_with(empty_Array, empty_Array, PThreadedCode19264, 2, PAssign19265, PSend19267);
    // ifTrue:. 
    Send PSend19262 = new_Send((Optr)PSend19261, SMB_ifTrue_, 1, (Optr)PBlock19263);
    Array PThreadedCode19258 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19259, (Optr)&t_send1, (Optr)PSend19260, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19261, (Optr)&t_send_ifTrue_, (Optr)PSend19262, (Optr)PBlock19263, (Optr)&t_method_return);
    Block PBlock19256 = new_Block_with(PArray19257, empty_Array, PThreadedCode19258, 1, PSend19262);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19268 = new_Send((Optr)PSend19254, SMB_to_do_, 2, (Optr)PSend19255, (Optr)PBlock19256);
    // size. 
    Send PSend19270 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign19269 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19270);
    Array PThreadedCode19253 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19254, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19255, (Optr)&t_push_closure, (Optr)PBlock19256, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19268, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19269, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19270, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19251 = new_Block_with(PArray19252, empty_Array, PThreadedCode19253, 3, PSend19268, PAssign19269, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19271 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19251);
    Array PThreadedCode19250 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19251, (Optr)&t_send1, (Optr)PSend19271, (Optr)&t_method_return);
    Method PMethod19248 = new_Method_with(PArray19249, empty_Array, empty_Array, PThreadedCode19250, 1, PSend19271);
    
    MethodClosure MC_SMB_scanAllIn_ = new_MethodClosure((Method)PMethod19248, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_scanAllIn_, MC_SMB_scanAllIn_);
}


static void init_SMB_scan_() {
    Symbol SMB_scan_ = new_Symbol(L"scan:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
<<<<<<< HEAD
    Array PArray19307 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19310 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend19312 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19316 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19315 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19316, (Optr)&t_block_return);
    Block PBlock19314 = new_Block_with(empty_Array, empty_Array, PThreadedCode19315, 1, PSend19316);
    // ifFalse:. 
    Send PSend19313 = new_Send((Optr)PSend19312, SMB_ifFalse_, 1, (Optr)PBlock19314);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19319 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend19318 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend19319);
    Assign PAssign19317 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19318);
    Array PThreadedCode19311 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend19312, (Optr)&t_send_ifFalse_, (Optr)PSend19313, (Optr)PBlock19314, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19317, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend19319, (Optr)&t_send1, (Optr)PSend19318, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19309 = new_Block_with(PArray19310, empty_Array, PThreadedCode19311, 3, PSend19313, PAssign19317, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19320 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19309);
    Array PThreadedCode19308 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19309, (Optr)&t_send1, (Optr)PSend19320, (Optr)&t_method_return);
    Method PMethod19306 = new_Method_with(PArray19307, empty_Array, empty_Array, PThreadedCode19308, 1, PSend19320);
    
    MethodClosure MC_SMB_scan_ = new_MethodClosure((Method)PMethod19306, PEG_StringScanner_Class);
=======
    Array PArray19273 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19276 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend19278 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19282 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19281 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19282, (Optr)&t_block_return);
    Block PBlock19280 = new_Block_with(empty_Array, empty_Array, PThreadedCode19281, 1, PSend19282);
    // ifFalse:. 
    Send PSend19279 = new_Send((Optr)PSend19278, SMB_ifFalse_, 1, (Optr)PBlock19280);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19285 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend19284 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend19285);
    Assign PAssign19283 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19284);
    Array PThreadedCode19277 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend19278, (Optr)&t_send_ifFalse_, (Optr)PSend19279, (Optr)PBlock19280, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19283, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend19285, (Optr)&t_send1, (Optr)PSend19284, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19275 = new_Block_with(PArray19276, empty_Array, PThreadedCode19277, 3, PSend19279, PAssign19283, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19286 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19275);
    Array PThreadedCode19274 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19275, (Optr)&t_send1, (Optr)PSend19286, (Optr)&t_method_return);
    Method PMethod19272 = new_Method_with(PArray19273, empty_Array, empty_Array, PThreadedCode19274, 1, PSend19286);
    
    MethodClosure MC_SMB_scan_ = new_MethodClosure((Method)PMethod19272, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_scan_, MC_SMB_scan_);
}


static void init_SMB_scanCharacter_() {
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
<<<<<<< HEAD
    Array PArray19322 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19325 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19327 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19331 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19330 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19331, (Optr)&t_block_return);
    Block PBlock19329 = new_Block_with(empty_Array, empty_Array, PThreadedCode19330, 1, PSend19331);
    // ifTrue:. 
    Send PSend19328 = new_Send((Optr)PSend19327, SMB_ifTrue_, 1, (Optr)PBlock19329);
=======
    Array PArray19288 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19291 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19293 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19297 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19296 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19297, (Optr)&t_block_return);
    Block PBlock19295 = new_Block_with(empty_Array, empty_Array, PThreadedCode19296, 1, PSend19297);
    // ifTrue:. 
    Send PSend19294 = new_Send((Optr)PSend19293, SMB_ifTrue_, 1, (Optr)PBlock19295);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend19332 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19333 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19332);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19334 = new_Send((Optr)PSend19333, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19335 = new_Send((Optr)PSend19334, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend19339 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19338 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19339, (Optr)&t_block_return);
    Block PBlock19337 = new_Block_with(empty_Array, empty_Array, PThreadedCode19338, 1, PSend19339);
    // ifFalse:. 
    Send PSend19336 = new_Send((Optr)PSend19335, SMB_ifFalse_, 1, (Optr)PBlock19337);
    // +. 
    Send PSend19341 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19340 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19341);
    Array PThreadedCode19326 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19327, (Optr)&t_send_ifTrue_, (Optr)PSend19328, (Optr)PBlock19329, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19332, (Optr)&t_send1, (Optr)PSend19333, (Optr)&t_send0, (Optr)PSend19334, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend19335, (Optr)&t_send_ifFalse_, (Optr)PSend19336, (Optr)PBlock19337, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19340, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19341, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19324 = new_Block_with(PArray19325, empty_Array, PThreadedCode19326, 4, PSend19328, PSend19336, PAssign19340, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19342 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19324);
    Array PThreadedCode19323 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19324, (Optr)&t_send1, (Optr)PSend19342, (Optr)&t_method_return);
    Method PMethod19321 = new_Method_with(PArray19322, empty_Array, empty_Array, PThreadedCode19323, 1, PSend19342);
    
    MethodClosure MC_SMB_scanCharacter_ = new_MethodClosure((Method)PMethod19321, PEG_StringScanner_Class);
=======
    Send PSend19298 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19299 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19298);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19300 = new_Send((Optr)PSend19299, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19301 = new_Send((Optr)PSend19300, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend19305 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19304 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19305, (Optr)&t_block_return);
    Block PBlock19303 = new_Block_with(empty_Array, empty_Array, PThreadedCode19304, 1, PSend19305);
    // ifFalse:. 
    Send PSend19302 = new_Send((Optr)PSend19301, SMB_ifFalse_, 1, (Optr)PBlock19303);
    // +. 
    Send PSend19307 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19306 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19307);
    Array PThreadedCode19292 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19293, (Optr)&t_send_ifTrue_, (Optr)PSend19294, (Optr)PBlock19295, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19298, (Optr)&t_send1, (Optr)PSend19299, (Optr)&t_send0, (Optr)PSend19300, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend19301, (Optr)&t_send_ifFalse_, (Optr)PSend19302, (Optr)PBlock19303, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19306, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19307, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19290 = new_Block_with(PArray19291, empty_Array, PThreadedCode19292, 4, PSend19294, PSend19302, PAssign19306, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19308 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19290);
    Array PThreadedCode19289 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19290, (Optr)&t_send1, (Optr)PSend19308, (Optr)&t_method_return);
    Method PMethod19287 = new_Method_with(PArray19288, empty_Array, empty_Array, PThreadedCode19289, 1, PSend19308);
    
    MethodClosure MC_SMB_scanCharacter_ = new_MethodClosure((Method)PMethod19287, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_scanCharacter_, MC_SMB_scanCharacter_);
}


static void init_SMB_omitSkipWhitespace() {
    Symbol SMB_omitSkipWhitespace = new_Symbol(L"omitSkipWhitespace");
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
<<<<<<< HEAD
    Send PSend19345 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode19344 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19345, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19343 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19344, 2, PSend19345, self);
    
    MethodClosure MC_SMB_omitSkipWhitespace = new_MethodClosure((Method)PMethod19343, PEG_StringScanner_Class);
=======
    Send PSend19311 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode19310 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19311, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19309 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19310, 2, PSend19311, self);
    
    MethodClosure MC_SMB_omitSkipWhitespace = new_MethodClosure((Method)PMethod19309, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_omitSkipWhitespace, MC_SMB_omitSkipWhitespace);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
<<<<<<< HEAD
    Array PArray19347 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Assign PAssign19349 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode19348 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19349, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19346 = new_Method_with(PArray19347, empty_Array, empty_Array, PThreadedCode19348, 2, PAssign19349, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod19346, PEG_StringScanner_Class);
=======
    Array PArray19313 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Assign PAssign19315 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode19314 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19315, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19312 = new_Method_with(PArray19313, empty_Array, empty_Array, PThreadedCode19314, 2, PAssign19315, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod19312, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_backward() {
    Symbol SMB_backward = new_Symbol(L"backward");
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
<<<<<<< HEAD
    Send PSend19353 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19352 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19353);
    Array PThreadedCode19351 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19352, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19353, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19350 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19351, 2, PAssign19352, self);
    
    MethodClosure MC_SMB_backward = new_MethodClosure((Method)PMethod19350, PEG_StringScanner_Class);
=======
    Send PSend19319 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19318 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19319);
    Array PThreadedCode19317 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19318, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19319, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19316 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19317, 2, PAssign19318, self);
    
    MethodClosure MC_SMB_backward = new_MethodClosure((Method)PMethod19316, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_backward, MC_SMB_backward);
}


static void init_SMB_skipWhitespace() {
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
<<<<<<< HEAD
    Send PSend19356 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode19355 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19356, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19354 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19355, 2, PSend19356, self);
    
    MethodClosure MC_SMB_skipWhitespace = new_MethodClosure((Method)PMethod19354, PEG_StringScanner_Class);
=======
    Send PSend19322 = new_Send((Optr)slot_PEG_StringScanner_separator, SMB_omitMatch_, 1, (Optr)self);
    Array PThreadedCode19321 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_separator, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19322, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19320 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19321, 2, PSend19322, self);
    
    MethodClosure MC_SMB_skipWhitespace = new_MethodClosure((Method)PMethod19320, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_skipWhitespace, MC_SMB_skipWhitespace);
}


static void init_SMB_pushUntil_() {
    Symbol SMB_pushUntil_ = new_Symbol(L"pushUntil:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
<<<<<<< HEAD
    Array PArray19358 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19359 = new_Array_with(1, (Optr)VAR_s_0_1);
=======
    Array PArray19324 = new_Array_with(1, (Optr)VAR_char_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19325 = new_Array_with(1, (Optr)VAR_s_0_1);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend19363 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19366 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend19367 = new_Send((Optr)PSend19366, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode19365 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19366, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19367, (Optr)&t_block_return);
    Block PBlock19364 = new_Block_with(empty_Array, empty_Array, PThreadedCode19365, 1, PSend19367);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend19362 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend19363, (Optr)PBlock19364);
    Assign PAssign19361 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19362);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19369 = new_Send((Optr)VAR_s_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19368 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19369);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19370 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Assign PAssign19371 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Array PThreadedCode19360 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign19361, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19363, (Optr)&t_push_closure, (Optr)PBlock19364, (Optr)&t_send3, (Optr)PSend19362, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19368, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19369, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send3, (Optr)PSend19370, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19371, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19357 = new_Method_with(PArray19358, PArray19359, empty_Array, PThreadedCode19360, 5, PAssign19361, PAssign19368, PSend19370, PAssign19371, self);
    
    MethodClosure MC_SMB_pushUntil_ = new_MethodClosure((Method)PMethod19357, PEG_StringScanner_Class);
=======
    Send PSend19329 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19332 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend19333 = new_Send((Optr)PSend19332, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode19331 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19332, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19333, (Optr)&t_block_return);
    Block PBlock19330 = new_Block_with(empty_Array, empty_Array, PThreadedCode19331, 1, PSend19333);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend19328 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend19329, (Optr)PBlock19330);
    Assign PAssign19327 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19328);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19335 = new_Send((Optr)VAR_s_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19334 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19335);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19336 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Assign PAssign19337 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_s_0_1);
    Array PThreadedCode19326 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign19327, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19329, (Optr)&t_push_closure, (Optr)PBlock19330, (Optr)&t_send3, (Optr)PSend19328, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19334, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19335, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send3, (Optr)PSend19336, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19337, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19323 = new_Method_with(PArray19324, PArray19325, empty_Array, PThreadedCode19326, 5, PAssign19327, PAssign19334, PSend19336, PAssign19337, self);
    
    MethodClosure MC_SMB_pushUntil_ = new_MethodClosure((Method)PMethod19323, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_pushUntil_, MC_SMB_pushUntil_);
}


static void init_SMB_scanUntil_() {
    Symbol SMB_scanUntil_ = new_Symbol(L"scanUntil:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
<<<<<<< HEAD
    Array PArray19373 = new_Array_with(1, (Optr)VAR_char_0_0);
=======
    Array PArray19339 = new_Array_with(1, (Optr)VAR_char_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend19377 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19380 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend19381 = new_Send((Optr)PSend19380, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode19379 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19380, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19381, (Optr)&t_block_return);
    Block PBlock19378 = new_Block_with(empty_Array, empty_Array, PThreadedCode19379, 1, PSend19381);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend19376 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend19377, (Optr)PBlock19378);
    Assign PAssign19375 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19376);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19383 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19382 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19383);
    Array PThreadedCode19374 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign19375, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19377, (Optr)&t_push_closure, (Optr)PBlock19378, (Optr)&t_send3, (Optr)PSend19376, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19382, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19383, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19372 = new_Method_with(PArray19373, empty_Array, empty_Array, PThreadedCode19374, 3, PAssign19375, PAssign19382, self);
    
    MethodClosure MC_SMB_scanUntil_ = new_MethodClosure((Method)PMethod19372, PEG_StringScanner_Class);
=======
    Send PSend19343 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19346 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // +. 
    Send PSend19347 = new_Send((Optr)PSend19346, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode19345 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19346, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19347, (Optr)&t_block_return);
    Block PBlock19344 = new_Block_with(empty_Array, empty_Array, PThreadedCode19345, 1, PSend19347);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend19342 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_char_0_0, (Optr)PSend19343, (Optr)PBlock19344);
    Assign PAssign19341 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19342);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19349 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19348 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19349);
    Array PThreadedCode19340 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign19341, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19343, (Optr)&t_push_closure, (Optr)PBlock19344, (Optr)&t_send3, (Optr)PSend19342, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19348, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19338 = new_Method_with(PArray19339, empty_Array, empty_Array, PThreadedCode19340, 3, PAssign19341, PAssign19348, self);
    
    MethodClosure MC_SMB_scanUntil_ = new_MethodClosure((Method)PMethod19338, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_scanUntil_, MC_SMB_scanUntil_);
}


static void init_SMB_stack_() {
    Symbol SMB_stack_ = new_Symbol(L"stack:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray19385 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign19387 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)VAR_anObject_0_0);
    Array PThreadedCode19386 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19387, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19384 = new_Method_with(PArray19385, empty_Array, empty_Array, PThreadedCode19386, 2, PAssign19387, self);
    
    MethodClosure MC_SMB_stack_ = new_MethodClosure((Method)PMethod19384, PEG_StringScanner_Class);
=======
    Array PArray19351 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign19353 = new_Assign((Optr)slot_PEG_StringScanner_stack, (Optr)VAR_anObject_0_0);
    Array PThreadedCode19352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19353, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19350 = new_Method_with(PArray19351, empty_Array, empty_Array, PThreadedCode19352, 2, PAssign19353, self);
    
    MethodClosure MC_SMB_stack_ = new_MethodClosure((Method)PMethod19350, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_stack_, MC_SMB_stack_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray19389 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_19391 = new_String(L"PEGStringScanner(");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_19391_Const = new_Constant((Optr)string_19391);
    // <<. 
    Send PSend19392 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_19391_Const);
    // printOn:. 
    Send PSend19393 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend19394 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode19390 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_19391, (Optr)&t_send1, (Optr)PSend19392, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend19393, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend19394, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19388 = new_Method_with(PArray19389, empty_Array, empty_Array, PThreadedCode19390, 4, PSend19392, PSend19393, PSend19394, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod19388, PEG_StringScanner_Class);
=======
    Array PArray19355 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_19357 = new_String(L"PEGStringScanner(");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_19357_Const = new_Constant((Optr)string_19357);
    // <<. 
    Send PSend19358 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_19357_Const);
    // printOn:. 
    Send PSend19359 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend19360 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode19356 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_19357, (Optr)&t_send1, (Optr)PSend19358, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend19359, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend19360, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19354 = new_Method_with(PArray19355, empty_Array, empty_Array, PThreadedCode19356, 4, PSend19358, PSend19359, PSend19360, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod19354, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_scanPushCharacter_() {
    Symbol SMB_scanPushCharacter_ = new_Symbol(L"scanPushCharacter:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
<<<<<<< HEAD
    Array PArray19396 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19399 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19401 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19405 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19404 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19405, (Optr)&t_block_return);
    Block PBlock19403 = new_Block_with(empty_Array, empty_Array, PThreadedCode19404, 1, PSend19405);
    // ifTrue:. 
    Send PSend19402 = new_Send((Optr)PSend19401, SMB_ifTrue_, 1, (Optr)PBlock19403);
=======
    Array PArray19362 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19365 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19367 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19371 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19370 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19371, (Optr)&t_block_return);
    Block PBlock19369 = new_Block_with(empty_Array, empty_Array, PThreadedCode19370, 1, PSend19371);
    // ifTrue:. 
    Send PSend19368 = new_Send((Optr)PSend19367, SMB_ifTrue_, 1, (Optr)PBlock19369);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend19406 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19407 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19406);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19408 = new_Send((Optr)PSend19407, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19409 = new_Send((Optr)PSend19408, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend19413 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19412 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19413, (Optr)&t_block_return);
    Block PBlock19411 = new_Block_with(empty_Array, empty_Array, PThreadedCode19412, 1, PSend19413);
    // ifFalse:. 
    Send PSend19410 = new_Send((Optr)PSend19409, SMB_ifFalse_, 1, (Optr)PBlock19411);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend19414 = new_Send((Optr)VAR_character_0_0, SMB_asCharacter, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19415 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend19414);
    // +. 
    Send PSend19417 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19416 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19417);
    Array PThreadedCode19400 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19401, (Optr)&t_send_ifTrue_, (Optr)PSend19402, (Optr)PBlock19403, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19406, (Optr)&t_send1, (Optr)PSend19407, (Optr)&t_send0, (Optr)PSend19408, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend19409, (Optr)&t_send_ifFalse_, (Optr)PSend19410, (Optr)PBlock19411, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend19414, (Optr)&t_send1, (Optr)PSend19415, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19416, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19417, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19398 = new_Block_with(PArray19399, empty_Array, PThreadedCode19400, 5, PSend19402, PSend19410, PSend19415, PAssign19416, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19418 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19398);
    Array PThreadedCode19397 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19398, (Optr)&t_send1, (Optr)PSend19418, (Optr)&t_method_return);
    Method PMethod19395 = new_Method_with(PArray19396, empty_Array, empty_Array, PThreadedCode19397, 1, PSend19418);
    
    MethodClosure MC_SMB_scanPushCharacter_ = new_MethodClosure((Method)PMethod19395, PEG_StringScanner_Class);
=======
    Send PSend19372 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19373 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19372);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19374 = new_Send((Optr)PSend19373, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19375 = new_Send((Optr)PSend19374, SMB__equals_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend19379 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19378 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19379, (Optr)&t_block_return);
    Block PBlock19377 = new_Block_with(empty_Array, empty_Array, PThreadedCode19378, 1, PSend19379);
    // ifFalse:. 
    Send PSend19376 = new_Send((Optr)PSend19375, SMB_ifFalse_, 1, (Optr)PBlock19377);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend19380 = new_Send((Optr)VAR_character_0_0, SMB_asCharacter, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19381 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_, 1, (Optr)PSend19380);
    // +. 
    Send PSend19383 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19382 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19383);
    Array PThreadedCode19366 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19367, (Optr)&t_send_ifTrue_, (Optr)PSend19368, (Optr)PBlock19369, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19372, (Optr)&t_send1, (Optr)PSend19373, (Optr)&t_send0, (Optr)PSend19374, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend19375, (Optr)&t_send_ifFalse_, (Optr)PSend19376, (Optr)PBlock19377, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend19380, (Optr)&t_send1, (Optr)PSend19381, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19382, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19383, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19364 = new_Block_with(PArray19365, empty_Array, PThreadedCode19366, 5, PSend19368, PSend19376, PSend19381, PAssign19382, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19384 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19364);
    Array PThreadedCode19363 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19364, (Optr)&t_send1, (Optr)PSend19384, (Optr)&t_method_return);
    Method PMethod19361 = new_Method_with(PArray19362, empty_Array, empty_Array, PThreadedCode19363, 1, PSend19384);
    
    MethodClosure MC_SMB_scanPushCharacter_ = new_MethodClosure((Method)PMethod19361, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_scanPushCharacter_, MC_SMB_scanPushCharacter_);
}


static void init_SMB_forward() {
    Symbol SMB_forward = new_Symbol(L"forward");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend19422 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19421 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19422);
    Array PThreadedCode19420 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19421, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19422, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19419 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19420, 2, PAssign19421, self);
    
    MethodClosure MC_SMB_forward = new_MethodClosure((Method)PMethod19419, PEG_StringScanner_Class);
=======
    Send PSend19388 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign19387 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19388);
    Array PThreadedCode19386 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign19387, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19388, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19385 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19386, 2, PAssign19387, self);
    
    MethodClosure MC_SMB_forward = new_MethodClosure((Method)PMethod19385, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_forward, MC_SMB_forward);
}


static void init_SMB_parsingFailed() {
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
<<<<<<< HEAD
    Assign PAssign19425 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)slot_PEG_StringScanner_longestMatch);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray19427 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend19429 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)self);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend19430 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode19428 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19429, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend19430, (Optr)&t_method_return);
    Block PBlock19426 = new_Block_with(PArray19427, empty_Array, PThreadedCode19428, 2, PSend19429, PSend19430);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19431 = new_Send((Optr)PEGParsingFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19432 = new_Send((Optr)PBlock19426, SMB_value_, 1, (Optr)PSend19431);
    Array PThreadedCode19424 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign19425, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19426, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_send0, (Optr)PSend19431, (Optr)&t_send1, (Optr)PSend19432, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19423 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19424, 3, PAssign19425, PSend19432, self);
    
    MethodClosure MC_SMB_parsingFailed = new_MethodClosure((Method)PMethod19423, PEG_StringScanner_Class);
=======
    Assign PAssign19391 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)slot_PEG_StringScanner_longestMatch);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray19393 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend19395 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)self);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend19396 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode19394 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19395, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend19396, (Optr)&t_method_return);
    Block PBlock19392 = new_Block_with(PArray19393, empty_Array, PThreadedCode19394, 2, PSend19395, PSend19396);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19397 = new_Send((Optr)PEGParsingFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19398 = new_Send((Optr)PBlock19392, SMB_value_, 1, (Optr)PSend19397);
    Array PThreadedCode19390 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign19391, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_longestMatch, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19392, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_send0, (Optr)PSend19397, (Optr)&t_send1, (Optr)PSend19398, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19389 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19390, 3, PAssign19391, PSend19398, self);
    
    MethodClosure MC_SMB_parsingFailed = new_MethodClosure((Method)PMethod19389, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_parsingFailed, MC_SMB_parsingFailed);
}


static void init_SMB_bucket() {
    Symbol SMB_bucket = new_Symbol(L"bucket");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
<<<<<<< HEAD
    Array PArray19436 = new_Array_with(1, (Optr)VAR__return__1_0);
=======
    Array PArray19402 = new_Array_with(1, (Optr)VAR__return__1_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend19438 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19439 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_, 1, (Optr)PSend19438);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray19441 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19443 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_bucket_2_0);
    Array PThreadedCode19442 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_send1, (Optr)PSend19443, (Optr)&t_method_return);
    Block PBlock19440 = new_Block_with(PArray19441, empty_Array, PThreadedCode19442, 1, PSend19443);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend19444 = new_Send((Optr)PSend19439, SMB_ifNotNil_, 1, (Optr)PBlock19440);
    // +. 
    Send PSend19445 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19446 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19447 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_put_, 2, (Optr)PSend19445, (Optr)PSend19446);
    Array PThreadedCode19437 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19438, (Optr)&t_send1, (Optr)PSend19439, (Optr)&t_push_closure, (Optr)PBlock19440, (Optr)&t_send1, (Optr)PSend19444, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19445, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend19446, (Optr)&t_send2, (Optr)PSend19447, (Optr)&t_method_return);
    Block PBlock19435 = new_Block_with(PArray19436, empty_Array, PThreadedCode19437, 2, PSend19444, PSend19447);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19448 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19435);
    Array PThreadedCode19434 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19435, (Optr)&t_send1, (Optr)PSend19448, (Optr)&t_method_return);
    Method PMethod19433 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19434, 1, PSend19448);
    
    MethodClosure MC_SMB_bucket = new_MethodClosure((Method)PMethod19433, PEG_StringScanner_Class);
=======
    Send PSend19404 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19405 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_, 1, (Optr)PSend19404);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray19407 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19409 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_bucket_2_0);
    Array PThreadedCode19408 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_send1, (Optr)PSend19409, (Optr)&t_method_return);
    Block PBlock19406 = new_Block_with(PArray19407, empty_Array, PThreadedCode19408, 1, PSend19409);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend19410 = new_Send((Optr)PSend19405, SMB_ifNotNil_, 1, (Optr)PBlock19406);
    // +. 
    Send PSend19411 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19412 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19413 = new_Send((Optr)slot_PEG_StringScanner_cache, SMB_at_put_, 2, (Optr)PSend19411, (Optr)PSend19412);
    Array PThreadedCode19403 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19404, (Optr)&t_send1, (Optr)PSend19405, (Optr)&t_push_closure, (Optr)PBlock19406, (Optr)&t_send1, (Optr)PSend19410, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_cache, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19411, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend19412, (Optr)&t_send2, (Optr)PSend19413, (Optr)&t_method_return);
    Block PBlock19401 = new_Block_with(PArray19402, empty_Array, PThreadedCode19403, 2, PSend19410, PSend19413);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19414 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19401);
    Array PThreadedCode19400 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19401, (Optr)&t_send1, (Optr)PSend19414, (Optr)&t_method_return);
    Method PMethod19399 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19400, 1, PSend19414);
    
    MethodClosure MC_SMB_bucket = new_MethodClosure((Method)PMethod19399, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_bucket, MC_SMB_bucket);
}


static void init_SMB_pushAllIn_() {
    Symbol SMB_pushAllIn_ = new_Symbol(L"pushAllIn:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
<<<<<<< HEAD
    Array PArray19450 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19453 = new_Array_with(1, (Optr)VAR__return__1_0);
=======
    Array PArray19416 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19419 = new_Array_with(1, (Optr)VAR__return__1_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend19455 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19456 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19458 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19460 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend19461 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend19460);
=======
    Send PSend19421 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19422 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19424 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19426 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend19427 = new_Send((Optr)VAR_subCollection_0_0, SMB_indexOf_, 1, (Optr)PSend19426);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
<<<<<<< HEAD
    Send PSend19462 = new_Send((Optr)PSend19461, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19466 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19467 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19466);
    // -. 
    Send PSend19469 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19468 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19469);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19470 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19465 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19466, (Optr)&t_send3, (Optr)PSend19467, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19468, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19469, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19470, (Optr)&t_block_return);
    Block PBlock19464 = new_Block_with(empty_Array, empty_Array, PThreadedCode19465, 3, PSend19467, PAssign19468, PSend19470);
    // ifTrue:. 
    Send PSend19463 = new_Send((Optr)PSend19462, SMB_ifTrue_, 1, (Optr)PBlock19464);
    Array PThreadedCode19459 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19460, (Optr)&t_send1, (Optr)PSend19461, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19462, (Optr)&t_send_ifTrue_, (Optr)PSend19463, (Optr)PBlock19464, (Optr)&t_method_return);
    Block PBlock19457 = new_Block_with(PArray19458, empty_Array, PThreadedCode19459, 1, PSend19463);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19471 = new_Send((Optr)PSend19455, SMB_to_do_, 2, (Optr)PSend19456, (Optr)PBlock19457);
    // size. 
    Send PSend19472 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // push:from:to:. 
    Send PSend19473 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19472);
    // size. 
    Send PSend19475 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign19474 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19475);
    Array PThreadedCode19454 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19455, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19456, (Optr)&t_push_closure, (Optr)PBlock19457, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19471, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19472, (Optr)&t_send3, (Optr)PSend19473, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19474, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19475, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19452 = new_Block_with(PArray19453, empty_Array, PThreadedCode19454, 4, PSend19471, PSend19473, PAssign19474, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19476 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19452);
    Array PThreadedCode19451 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19452, (Optr)&t_send1, (Optr)PSend19476, (Optr)&t_method_return);
    Method PMethod19449 = new_Method_with(PArray19450, empty_Array, empty_Array, PThreadedCode19451, 1, PSend19476);
    
    MethodClosure MC_SMB_pushAllIn_ = new_MethodClosure((Method)PMethod19449, PEG_StringScanner_Class);
=======
    Send PSend19428 = new_Send((Optr)PSend19427, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19432 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19433 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19432);
    // -. 
    Send PSend19435 = new_Send((Optr)VAR_index_2_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign19434 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19435);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19436 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19431 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19432, (Optr)&t_send3, (Optr)PSend19433, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19434, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19435, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19436, (Optr)&t_block_return);
    Block PBlock19430 = new_Block_with(empty_Array, empty_Array, PThreadedCode19431, 3, PSend19433, PAssign19434, PSend19436);
    // ifTrue:. 
    Send PSend19429 = new_Send((Optr)PSend19428, SMB_ifTrue_, 1, (Optr)PBlock19430);
    Array PThreadedCode19425 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19426, (Optr)&t_send1, (Optr)PSend19427, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19428, (Optr)&t_send_ifTrue_, (Optr)PSend19429, (Optr)PBlock19430, (Optr)&t_method_return);
    Block PBlock19423 = new_Block_with(PArray19424, empty_Array, PThreadedCode19425, 1, PSend19429);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19437 = new_Send((Optr)PSend19421, SMB_to_do_, 2, (Optr)PSend19422, (Optr)PBlock19423);
    // size. 
    Send PSend19438 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    // push:from:to:. 
    Send PSend19439 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19438);
    // size. 
    Send PSend19441 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign19440 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19441);
    Array PThreadedCode19420 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19421, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19422, (Optr)&t_push_closure, (Optr)PBlock19423, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19437, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19438, (Optr)&t_send3, (Optr)PSend19439, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19440, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19441, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19418 = new_Block_with(PArray19419, empty_Array, PThreadedCode19420, 4, PSend19437, PSend19439, PAssign19440, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19442 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19418);
    Array PThreadedCode19417 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19418, (Optr)&t_send1, (Optr)PSend19442, (Optr)&t_method_return);
    Method PMethod19415 = new_Method_with(PArray19416, empty_Array, empty_Array, PThreadedCode19417, 1, PSend19442);
    
    MethodClosure MC_SMB_pushAllIn_ = new_MethodClosure((Method)PMethod19415, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_pushAllIn_, MC_SMB_pushAllIn_);
}


static void init_SMB_scanPush_() {
    Symbol SMB_scanPush_ = new_Symbol(L"scanPush:");
    Variable VAR_subCollection_0_0 = new_Variable_named(L"subCollection", 0);
<<<<<<< HEAD
    Array PArray19478 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19479 = new_Array_with(1, (Optr)VAR_s_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19482 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend19484 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19488 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19487 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19488, (Optr)&t_block_return);
    Block PBlock19486 = new_Block_with(empty_Array, empty_Array, PThreadedCode19487, 1, PSend19488);
    // ifFalse:. 
    Send PSend19485 = new_Send((Optr)PSend19484, SMB_ifFalse_, 1, (Optr)PBlock19486);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19490 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    Assign PAssign19489 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19490);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19491 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19492 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19491);
    // +. 
    Send PSend19494 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Assign PAssign19493 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19494);
    Array PThreadedCode19483 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend19484, (Optr)&t_send_ifFalse_, (Optr)PSend19485, (Optr)PBlock19486, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19489, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend19490, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19491, (Optr)&t_send3, (Optr)PSend19492, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19493, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19494, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19481 = new_Block_with(PArray19482, empty_Array, PThreadedCode19483, 5, PSend19485, PAssign19489, PSend19492, PAssign19493, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19495 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19481);
    Array PThreadedCode19480 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19481, (Optr)&t_send1, (Optr)PSend19495, (Optr)&t_method_return);
    Method PMethod19477 = new_Method_with(PArray19478, PArray19479, empty_Array, PThreadedCode19480, 1, PSend19495);
    
    MethodClosure MC_SMB_scanPush_ = new_MethodClosure((Method)PMethod19477, PEG_StringScanner_Class);
=======
    Array PArray19444 = new_Array_with(1, (Optr)VAR_subCollection_0_0);
    Variable VAR_s_0_1 = new_Variable_named(L"s", 0);
    Array PArray19445 = new_Array_with(1, (Optr)VAR_s_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19448 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    // contains:at:. 
    Send PSend19450 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_contains_at_, 2, (Optr)VAR_subCollection_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19454 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19453 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19454, (Optr)&t_block_return);
    Block PBlock19452 = new_Block_with(empty_Array, empty_Array, PThreadedCode19453, 1, PSend19454);
    // ifFalse:. 
    Send PSend19451 = new_Send((Optr)PSend19450, SMB_ifFalse_, 1, (Optr)PBlock19452);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19456 = new_Send((Optr)VAR_subCollection_0_0, SMB_size, 0);
    Assign PAssign19455 = new_Assign((Optr)VAR_s_0_1, (Optr)PSend19456);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19457 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Symbol SMB_push_from_to_ = new_Symbol(L"push:from:to:");
    // push:from:to:. 
    Send PSend19458 = new_Send((Optr)slot_PEG_StringScanner_stack, SMB_push_from_to_, 3, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19457);
    // +. 
    Send PSend19460 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_s_0_1);
    Assign PAssign19459 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend19460);
    Array PThreadedCode19449 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend19450, (Optr)&t_send_ifFalse_, (Optr)PSend19451, (Optr)PBlock19452, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19455, (Optr)&t_push_variable, (Optr)VAR_subCollection_0_0, (Optr)&t_send0, (Optr)PSend19456, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19457, (Optr)&t_send3, (Optr)PSend19458, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19459, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_s_0_1, (Optr)&t_send1, (Optr)PSend19460, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19447 = new_Block_with(PArray19448, empty_Array, PThreadedCode19449, 5, PSend19451, PAssign19455, PSend19458, PAssign19459, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19461 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19447);
    Array PThreadedCode19446 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19447, (Optr)&t_send1, (Optr)PSend19461, (Optr)&t_method_return);
    Method PMethod19443 = new_Method_with(PArray19444, PArray19445, empty_Array, PThreadedCode19446, 1, PSend19461);
    
    MethodClosure MC_SMB_scanPush_ = new_MethodClosure((Method)PMethod19443, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_scanPush_, MC_SMB_scanPush_);
}


static void init_SMB_stack() {
    Symbol SMB_stack = new_Symbol(L"stack");
<<<<<<< HEAD
    Array PThreadedCode19497 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_method_return);
    Method PMethod19496 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19497, 1, slot_PEG_StringScanner_stack);
    
    MethodClosure MC_SMB_stack = new_MethodClosure((Method)PMethod19496, PEG_StringScanner_Class);
=======
    Array PThreadedCode19463 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_StringScanner_stack, (Optr)&t_method_return);
    Method PMethod19462 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19463, 1, slot_PEG_StringScanner_stack);
    
    MethodClosure MC_SMB_stack = new_MethodClosure((Method)PMethod19462, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_stack, MC_SMB_stack);
}


static void init_SMB_sample() {
    Symbol SMB_sample = new_Symbol(L"sample");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Variable VAR_sampleSize_0_1 = new_Variable_named(L"sampleSize", 0);
<<<<<<< HEAD
    Array PArray19499 = new_Array_with(2, (Optr)VAR_result_0_0, (Optr)VAR_sampleSize_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19503 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
=======
    Array PArray19465 = new_Array_with(2, (Optr)VAR_result_0_0, (Optr)VAR_sampleSize_0_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend19469 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_min_ = new_Symbol(L"min:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // min:. 
<<<<<<< HEAD
    Send PSend19502 = new_Send((Optr)PSend19503, SMB_min_, 1, (Optr)int_20_Const);
    Assign PAssign19501 = new_Assign((Optr)VAR_sampleSize_0_1, (Optr)PSend19502);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend19506 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19505 = new_Send((Optr)PSend19506, SMB_new_, 1, (Optr)VAR_sampleSize_0_1);
    Assign PAssign19504 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend19505);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19507 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_sampleSize_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19508 = new_Send((Optr)PSend19507, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19510 = new_Array_with(1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend19512 = new_Send((Optr)int_1_Const, SMB__plus_, 1, (Optr)VAR_i_1_0);
    // -. 
    Send PSend19513 = new_Send((Optr)PSend19512, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    // +. 
    Send PSend19514 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19515 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19514);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19516 = new_Send((Optr)VAR_result_0_0, SMB_at_put_, 2, (Optr)PSend19513, (Optr)PSend19515);
    Array PThreadedCode19511 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend19512, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19513, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19514, (Optr)&t_send1, (Optr)PSend19515, (Optr)&t_send2, (Optr)PSend19516, (Optr)&t_method_return);
    Block PBlock19509 = new_Block_with(PArray19510, empty_Array, PThreadedCode19511, 1, PSend19516);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19517 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB_to_do_, 2, (Optr)PSend19508, (Optr)PBlock19509);
    Array PThreadedCode19500 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign19501, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19503, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend19502, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19504, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19506, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19505, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19507, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19508, (Optr)&t_push_closure, (Optr)PBlock19509, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19517, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod19498 = new_Method_with(empty_Array, PArray19499, empty_Array, PThreadedCode19500, 4, PAssign19501, PAssign19504, PSend19517, VAR_result_0_0);
    
    MethodClosure MC_SMB_sample = new_MethodClosure((Method)PMethod19498, PEG_StringScanner_Class);
=======
    Send PSend19468 = new_Send((Optr)PSend19469, SMB_min_, 1, (Optr)int_20_Const);
    Assign PAssign19467 = new_Assign((Optr)VAR_sampleSize_0_1, (Optr)PSend19468);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend19472 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19471 = new_Send((Optr)PSend19472, SMB_new_, 1, (Optr)VAR_sampleSize_0_1);
    Assign PAssign19470 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend19471);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend19473 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_sampleSize_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend19474 = new_Send((Optr)PSend19473, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray19476 = new_Array_with(1, (Optr)VAR_i_1_0);
    // +. 
    Send PSend19478 = new_Send((Optr)int_1_Const, SMB__plus_, 1, (Optr)VAR_i_1_0);
    // -. 
    Send PSend19479 = new_Send((Optr)PSend19478, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    // +. 
    Send PSend19480 = new_Send((Optr)VAR_i_1_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19481 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PSend19480);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend19482 = new_Send((Optr)VAR_result_0_0, SMB_at_put_, 2, (Optr)PSend19479, (Optr)PSend19481);
    Array PThreadedCode19477 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend19478, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19479, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19480, (Optr)&t_send1, (Optr)PSend19481, (Optr)&t_send2, (Optr)PSend19482, (Optr)&t_method_return);
    Block PBlock19475 = new_Block_with(PArray19476, empty_Array, PThreadedCode19477, 1, PSend19482);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19483 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB_to_do_, 2, (Optr)PSend19474, (Optr)PBlock19475);
    Array PThreadedCode19466 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign19467, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend19469, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend19468, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19470, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend19472, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19471, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_sampleSize_0_1, (Optr)&t_send1, (Optr)PSend19473, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19474, (Optr)&t_push_closure, (Optr)PBlock19475, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19483, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod19464 = new_Method_with(empty_Array, PArray19465, empty_Array, PThreadedCode19466, 4, PAssign19467, PAssign19470, PSend19483, VAR_result_0_0);
    
    MethodClosure MC_SMB_sample = new_MethodClosure((Method)PMethod19464, PEG_StringScanner_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_StringScanner_Class, SMB_sample, MC_SMB_sample);
}


static void init_class_SMB_on_separator_() {
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aSeparator_0_1 = new_Variable_named(L"aSeparator", 0);
<<<<<<< HEAD
    Array PArray19519 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend19521 = new_Send((Optr)self, SMB_basicNew, 0);
    // on:separator:. 
    Send PSend19522 = new_Send((Optr)PSend19521, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Array PThreadedCode19520 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19521, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send2, (Optr)PSend19522, (Optr)&t_method_return);
    Method PMethod19518 = new_Method_with(PArray19519, empty_Array, empty_Array, PThreadedCode19520, 1, PSend19522);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod19518, HEADER(PEG_StringScanner_Class));
=======
    Array PArray19485 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend19487 = new_Send((Optr)self, SMB_basicNew, 0);
    // on:separator:. 
    Send PSend19488 = new_Send((Optr)PSend19487, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)VAR_aSeparator_0_1);
    Array PThreadedCode19486 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19487, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_1, (Optr)&t_send2, (Optr)PSend19488, (Optr)&t_method_return);
    Method PMethod19484 = new_Method_with(PArray19485, empty_Array, empty_Array, PThreadedCode19486, 1, PSend19488);
    
    MethodClosure MC_SMB_on_separator_ = new_MethodClosure((Method)PMethod19484, HEADER(PEG_StringScanner_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(PEG_StringScanner_Class), SMB_on_separator_, MC_SMB_on_separator_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray19524 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend19526 = new_Send((Optr)PEGParser_classReference, SMB_separator, 0);
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    // on:separator:. 
    Send PSend19527 = new_Send((Optr)self, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)PSend19526);
    Array PThreadedCode19525 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend19526, (Optr)&t_send2, (Optr)PSend19527, (Optr)&t_method_return);
    Method PMethod19523 = new_Method_with(PArray19524, empty_Array, empty_Array, PThreadedCode19525, 1, PSend19527);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod19523, HEADER(PEG_StringScanner_Class));
=======
    Array PArray19490 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend19492 = new_Send((Optr)PEGParser_classReference, SMB_separator, 0);
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    // on:separator:. 
    Send PSend19493 = new_Send((Optr)self, SMB_on_separator_, 2, (Optr)VAR_aString_0_0, (Optr)PSend19492);
    Array PThreadedCode19491 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend19492, (Optr)&t_send2, (Optr)PSend19493, (Optr)&t_method_return);
    Method PMethod19489 = new_Method_with(PArray19490, empty_Array, empty_Array, PThreadedCode19491, 1, PSend19493);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod19489, HEADER(PEG_StringScanner_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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