#include <lib/class/Collection/Stream/ReadStream.h>


Optr layout_Collection_Stream_ReadStream_Class_class;
Optr layout_Collection_Stream_ReadStream;


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6184 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend6186 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt__equals_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6190 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode6189 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend6190, (Optr)&t_block_return);
    Block PBlock6188 = new_Block_with(empty_Array, empty_Array, PThreadedCode6189, 1, PSend6190);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6194 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6193 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6194);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6195 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PAssign6193);
    // escape:. 
    Send PSend6196 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6195);
    Array PThreadedCode6192 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push1, (Optr)PAssign6193, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6194, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend6195, (Optr)&t_send1, (Optr)PSend6196, (Optr)&t_block_return);
    Block PBlock6191 = new_Block_with(empty_Array, empty_Array, PThreadedCode6192, 1, PSend6196);
    // ifTrue:ifFalse:. 
    Send PSend6187 = new_Send((Optr)PSend6186, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6188, (Optr)PBlock6191);
    Array PThreadedCode6185 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6186, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6187, (Optr)PBlock6188, (Optr)PBlock6191, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6183 = new_Block_with(PArray6184, empty_Array, PThreadedCode6185, 2, PSend6187, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6197 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6183);
    Array PThreadedCode6182 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6183, (Optr)&t_send1, (Optr)PSend6197, (Optr)&t_method_return);
    Method PMethod6181 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6182, 1, PSend6197);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6181, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_next_() {
    Symbol SMB_next_ = new_Symbol(L"next:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6199 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_ans_0_1 = new_Variable_named(L"ans", 0);
    Variable VAR_endPosition_0_2 = new_Variable_named(L"endPosition", 0);
    Array PArray6200 = new_Array_with(2, (Optr)VAR_ans_0_1, (Optr)VAR_endPosition_0_2);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6204 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend6203 = new_Send((Optr)PSend6204, SMB_min_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Assign PAssign6202 = new_Assign((Optr)VAR_endPosition_0_2, (Optr)PSend6203);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6207 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend6206 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)PSend6207, (Optr)VAR_endPosition_0_2);
    Assign PAssign6205 = new_Assign((Optr)VAR_ans_0_1, (Optr)PSend6206);
    Assign PAssign6208 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_endPosition_0_2);
    Array PThreadedCode6201 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign6202, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend6204, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6203, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6205, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6207, (Optr)&t_push_variable, (Optr)VAR_endPosition_0_2, (Optr)&t_send2, (Optr)PSend6206, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6208, (Optr)&t_push_variable, (Optr)VAR_endPosition_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ans_0_1, (Optr)&t_method_return);
    Method PMethod6198 = new_Method_with(PArray6199, PArray6200, empty_Array, PThreadedCode6201, 4, PAssign6202, PAssign6205, PAssign6208, VAR_ans_0_1);
    
    MethodClosure MC_SMB_next_ = new_MethodClosure((Method)PMethod6198, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_next_, MC_SMB_next_);
}


static void init_SMB_upTo_() {
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6210 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_end_0_2 = new_Variable_named(L"end", 0);
    Array PArray6211 = new_Array_with(2, (Optr)VAR_start_0_1, (Optr)VAR_end_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6214 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6217 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6216 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend6217);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Array PThreadedCode6221 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock6220 = new_Block_with(empty_Array, empty_Array, PThreadedCode6221, 1, int_0_Const);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend6219 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_start_0_1, (Optr)PBlock6220);
    Assign PAssign6218 = new_Assign((Optr)VAR_end_0_2, (Optr)PSend6219);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6222 = new_Send((Optr)VAR_end_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    // upToEnd. 
    Send PSend6226 = new_Send((Optr)self, SMB_upToEnd, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6227 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6226);
    Array PThreadedCode6225 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6226, (Optr)&t_send1, (Optr)PSend6227, (Optr)&t_block_return);
    Block PBlock6224 = new_Block_with(empty_Array, empty_Array, PThreadedCode6225, 1, PSend6227);
    // ifTrue:. 
    Send PSend6223 = new_Send((Optr)PSend6222, SMB_ifTrue_, 1, (Optr)PBlock6224);
    Assign PAssign6228 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_end_0_2);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6229 = new_Send((Optr)VAR_end_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend6230 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)PSend6229);
    Array PThreadedCode6215 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push1, (Optr)PAssign6216, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6217, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6218, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_closure, (Optr)PBlock6220, (Optr)&t_send3, (Optr)PSend6219, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6222, (Optr)&t_send_ifTrue_, (Optr)PSend6223, (Optr)PBlock6224, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6228, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6229, (Optr)&t_send2, (Optr)PSend6230, (Optr)&t_method_return);
    Block PBlock6213 = new_Block_with(PArray6214, empty_Array, PThreadedCode6215, 5, PAssign6216, PAssign6218, PSend6223, PAssign6228, PSend6230);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6231 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6213);
    Array PThreadedCode6212 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6213, (Optr)&t_send1, (Optr)PSend6231, (Optr)&t_method_return);
    Method PMethod6209 = new_Method_with(PArray6210, PArray6211, empty_Array, PThreadedCode6212, 1, PSend6231);
    
    MethodClosure MC_SMB_upTo_ = new_MethodClosure((Method)PMethod6209, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_upTo_, MC_SMB_upTo_);
}


static void init_SMB_upToEnd() {
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Array PArray6233 = new_Array_with(1, (Optr)VAR_start_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6236 = new_Send((Optr)int_1_Const, SMB__plus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6235 = new_Assign((Optr)VAR_start_0_0, (Optr)PSend6236);
    Assign PAssign6237 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend6238 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Array PThreadedCode6234 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign6235, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6237, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend6238, (Optr)&t_method_return);
    Method PMethod6232 = new_Method_with(empty_Array, PArray6233, empty_Array, PThreadedCode6234, 3, PAssign6235, PAssign6237, PSend6238);
    
    MethodClosure MC_SMB_upToEnd = new_MethodClosure((Method)PMethod6232, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_upToEnd, MC_SMB_upToEnd);
}


static void init_SMB_next_into_startingAt_() {
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Variable VAR_aCollection_0_1 = new_Variable_named(L"aCollection", 0);
    Variable VAR_startIndex_0_2 = new_Variable_named(L"startIndex", 0);
    Array PArray6240 = new_Array_with(3, (Optr)VAR_n_0_0, (Optr)VAR_aCollection_0_1, (Optr)VAR_startIndex_0_2);
    Variable VAR_max_0_3 = new_Variable_named(L"max", 0);
    Array PArray6241 = new_Array_with(1, (Optr)VAR_max_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6244 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6248 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend6247 = new_Send((Optr)PSend6248, SMB_min_, 1, (Optr)VAR_n_0_0);
    Assign PAssign6246 = new_Assign((Optr)VAR_max_0_3, (Optr)PSend6247);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6249 = new_Send((Optr)VAR_startIndex_0_2, SMB__plus_, 1, (Optr)VAR_max_0_3);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6250 = new_Send((Optr)PSend6249, SMB__minus_, 1, (Optr)int_1_Const);
    // +. 
    Send PSend6251 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend6252 = new_Send((Optr)VAR_aCollection_0_1, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)VAR_startIndex_0_2, (Optr)PSend6250, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)PSend6251);
    // +. 
    Send PSend6254 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_max_0_3);
    Assign PAssign6253 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6254);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6255 = new_Send((Optr)VAR_max_0_3, SMB__equals_, 1, (Optr)VAR_n_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6259 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_aCollection_0_1);
    Array PThreadedCode6258 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_1, (Optr)&t_send1, (Optr)PSend6259, (Optr)&t_block_return);
    Block PBlock6257 = new_Block_with(empty_Array, empty_Array, PThreadedCode6258, 1, PSend6259);
    // +. 
    Send PSend6262 = new_Send((Optr)VAR_startIndex_0_2, SMB__plus_, 1, (Optr)VAR_max_0_3);
    // -. 
    Send PSend6263 = new_Send((Optr)PSend6262, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend6264 = new_Send((Optr)VAR_aCollection_0_1, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend6263);
    // escape:. 
    Send PSend6265 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6264);
    Array PThreadedCode6261 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_1, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_startIndex_0_2, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_send1, (Optr)PSend6262, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6263, (Optr)&t_send2, (Optr)PSend6264, (Optr)&t_send1, (Optr)PSend6265, (Optr)&t_block_return);
    Block PBlock6260 = new_Block_with(empty_Array, empty_Array, PThreadedCode6261, 1, PSend6265);
    // ifTrue:ifFalse:. 
    Send PSend6256 = new_Send((Optr)PSend6255, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6257, (Optr)PBlock6260);
    Array PThreadedCode6245 = instantiate_Array_with(ThreadedCode_Class, 0, 59, (Optr)&t_push1, (Optr)PAssign6246, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6248, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend6247, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_startIndex_0_2, (Optr)&t_push_variable, (Optr)VAR_startIndex_0_2, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_send1, (Optr)PSend6249, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6250, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6251, (Optr)&t_send4, (Optr)PSend6252, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6253, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_send1, (Optr)PSend6254, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend6255, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6256, (Optr)PBlock6257, (Optr)PBlock6260, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6243 = new_Block_with(PArray6244, empty_Array, PThreadedCode6245, 5, PAssign6246, PSend6252, PAssign6253, PSend6256, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6266 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6243);
    Array PThreadedCode6242 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6243, (Optr)&t_send1, (Optr)PSend6266, (Optr)&t_method_return);
    Method PMethod6239 = new_Method_with(PArray6240, PArray6241, empty_Array, PThreadedCode6242, 1, PSend6266);
    
    MethodClosure MC_SMB_next_into_startingAt_ = new_MethodClosure((Method)PMethod6239, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_next_into_startingAt_, MC_SMB_next_into_startingAt_);
}

void init_Collection_Stream_ReadStream_layout() {
    layout_Collection_Stream_ReadStream_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Stream_ReadStream_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_Stream_ReadStream_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_Stream_ReadStream_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_Stream_ReadStream_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_Stream_ReadStream_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ReadStream = new_Symbol(L"ReadStream");
    layout_Collection_Stream_ReadStream = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Collection_Stream_ReadStream)->values[0] = slot_Collections_Streams_PositionableStream_collection; // collection 
    ((Array)layout_Collection_Stream_ReadStream)->values[1] = slot_Collections_Streams_PositionableStream_position; // position 
    ((Array)layout_Collection_Stream_ReadStream)->values[2] = slot_Collections_Streams_PositionableStream_readLimit; // readLimit 
    Collection_Stream_ReadStream_Class = (Class)new_Class(Collections_Streams_PositionableStream_Class, layout_Collection_Stream_ReadStream_Class_class);
    Class_set_superclass(Collection_Stream_ReadStream_Class, Collections_Streams_PositionableStream_Class);
    Collection_Stream_ReadStream_Class->layout = layout_Collection_Stream_ReadStream;
    HEADER(Collection_Stream_ReadStream_Class)->layout = layout_Collection_Stream_ReadStream_Class_class;
    Collection_Stream_ReadStream_Class->name = SMB_ReadStream;
    
}

void init_Collection_Stream_ReadStream_methods() {
    init_SMB_next();
    init_SMB_next_();
    init_SMB_upTo_();
    init_SMB_upToEnd();
    init_SMB_next_into_startingAt_();
    
}