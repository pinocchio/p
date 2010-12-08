#include <lib/class/Collection/Stream/ReadStream.h>


Optr layout_Collection_Stream_ReadStream_Class_class;
Optr layout_Collection_Stream_ReadStream;


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Array PThreadedCode6174 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_method_return);
    Method PMethod6173 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6174, 1, slot_Collections_Streams_PositionableStream_readLimit);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod6173, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6178 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend6180 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt__equals_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6184 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode6183 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend6184, (Optr)&t_block_return);
    Block PBlock6182 = new_Block_with(empty_Array, empty_Array, PThreadedCode6183, 1, PSend6184);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6188 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6187 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6188);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6189 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PAssign6187);
    // escape:. 
    Send PSend6190 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6189);
    Array PThreadedCode6186 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push1, (Optr)PAssign6187, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6188, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend6189, (Optr)&t_send1, (Optr)PSend6190, (Optr)&t_block_return);
    Block PBlock6185 = new_Block_with(empty_Array, empty_Array, PThreadedCode6186, 1, PSend6190);
    // ifTrue:ifFalse:. 
    Send PSend6181 = new_Send((Optr)PSend6180, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6182, (Optr)PBlock6185);
    Array PThreadedCode6179 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6180, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6181, (Optr)PBlock6182, (Optr)PBlock6185, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6177 = new_Block_with(PArray6178, empty_Array, PThreadedCode6179, 2, PSend6181, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6191 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6177);
    Array PThreadedCode6176 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6177, (Optr)&t_send1, (Optr)PSend6191, (Optr)&t_method_return);
    Method PMethod6175 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6176, 1, PSend6191);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6175, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_next_() {
    Symbol SMB_next_ = new_Symbol(L"next:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6193 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_ans_0_1 = new_Variable_named(L"ans", 0);
    Variable VAR_endPosition_0_2 = new_Variable_named(L"endPosition", 0);
    Array PArray6194 = new_Array_with(2, (Optr)VAR_ans_0_1, (Optr)VAR_endPosition_0_2);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6198 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend6197 = new_Send((Optr)PSend6198, SMB_min_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Assign PAssign6196 = new_Assign((Optr)VAR_endPosition_0_2, (Optr)PSend6197);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6201 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend6200 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)PSend6201, (Optr)VAR_endPosition_0_2);
    Assign PAssign6199 = new_Assign((Optr)VAR_ans_0_1, (Optr)PSend6200);
    Assign PAssign6202 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_endPosition_0_2);
    Array PThreadedCode6195 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign6196, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend6198, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6197, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6199, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6201, (Optr)&t_push_variable, (Optr)VAR_endPosition_0_2, (Optr)&t_send2, (Optr)PSend6200, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6202, (Optr)&t_push_variable, (Optr)VAR_endPosition_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ans_0_1, (Optr)&t_method_return);
    Method PMethod6192 = new_Method_with(PArray6193, PArray6194, empty_Array, PThreadedCode6195, 4, PAssign6196, PAssign6199, PAssign6202, VAR_ans_0_1);
    
    MethodClosure MC_SMB_next_ = new_MethodClosure((Method)PMethod6192, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_next_, MC_SMB_next_);
}


static void init_SMB_upTo_() {
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6204 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_end_0_2 = new_Variable_named(L"end", 0);
    Array PArray6205 = new_Array_with(2, (Optr)VAR_start_0_1, (Optr)VAR_end_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6208 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6211 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6210 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend6211);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Array PThreadedCode6215 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock6214 = new_Block_with(empty_Array, empty_Array, PThreadedCode6215, 1, int_0_Const);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend6213 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_start_0_1, (Optr)PBlock6214);
    Assign PAssign6212 = new_Assign((Optr)VAR_end_0_2, (Optr)PSend6213);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6216 = new_Send((Optr)VAR_end_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    // upToEnd. 
    Send PSend6220 = new_Send((Optr)self, SMB_upToEnd, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6221 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6220);
    Array PThreadedCode6219 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6220, (Optr)&t_send1, (Optr)PSend6221, (Optr)&t_block_return);
    Block PBlock6218 = new_Block_with(empty_Array, empty_Array, PThreadedCode6219, 1, PSend6221);
    // ifTrue:. 
    Send PSend6217 = new_Send((Optr)PSend6216, SMB_ifTrue_, 1, (Optr)PBlock6218);
    Assign PAssign6222 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_end_0_2);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6223 = new_Send((Optr)VAR_end_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend6224 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)PSend6223);
    Array PThreadedCode6209 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push1, (Optr)PAssign6210, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6211, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6212, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_closure, (Optr)PBlock6214, (Optr)&t_send3, (Optr)PSend6213, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6216, (Optr)&t_send_ifTrue_, (Optr)PSend6217, (Optr)PBlock6218, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6222, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6223, (Optr)&t_send2, (Optr)PSend6224, (Optr)&t_method_return);
    Block PBlock6207 = new_Block_with(PArray6208, empty_Array, PThreadedCode6209, 5, PAssign6210, PAssign6212, PSend6217, PAssign6222, PSend6224);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6225 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6207);
    Array PThreadedCode6206 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6207, (Optr)&t_send1, (Optr)PSend6225, (Optr)&t_method_return);
    Method PMethod6203 = new_Method_with(PArray6204, PArray6205, empty_Array, PThreadedCode6206, 1, PSend6225);
    
    MethodClosure MC_SMB_upTo_ = new_MethodClosure((Method)PMethod6203, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_upTo_, MC_SMB_upTo_);
}


static void init_SMB_upToEnd() {
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Array PArray6227 = new_Array_with(1, (Optr)VAR_start_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6230 = new_Send((Optr)int_1_Const, SMB__plus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6229 = new_Assign((Optr)VAR_start_0_0, (Optr)PSend6230);
    Assign PAssign6231 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend6232 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Array PThreadedCode6228 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign6229, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6230, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6231, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend6232, (Optr)&t_method_return);
    Method PMethod6226 = new_Method_with(empty_Array, PArray6227, empty_Array, PThreadedCode6228, 3, PAssign6229, PAssign6231, PSend6232);
    
    MethodClosure MC_SMB_upToEnd = new_MethodClosure((Method)PMethod6226, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_upToEnd, MC_SMB_upToEnd);
}


static void init_SMB_next_into_startingAt_() {
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Variable VAR_aCollection_0_1 = new_Variable_named(L"aCollection", 0);
    Variable VAR_startIndex_0_2 = new_Variable_named(L"startIndex", 0);
    Array PArray6234 = new_Array_with(3, (Optr)VAR_n_0_0, (Optr)VAR_aCollection_0_1, (Optr)VAR_startIndex_0_2);
    Variable VAR_max_0_3 = new_Variable_named(L"max", 0);
    Array PArray6235 = new_Array_with(1, (Optr)VAR_max_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6238 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6242 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend6241 = new_Send((Optr)PSend6242, SMB_min_, 1, (Optr)VAR_n_0_0);
    Assign PAssign6240 = new_Assign((Optr)VAR_max_0_3, (Optr)PSend6241);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6243 = new_Send((Optr)VAR_startIndex_0_2, SMB__plus_, 1, (Optr)VAR_max_0_3);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6244 = new_Send((Optr)PSend6243, SMB__minus_, 1, (Optr)int_1_Const);
    // +. 
    Send PSend6245 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend6246 = new_Send((Optr)VAR_aCollection_0_1, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)VAR_startIndex_0_2, (Optr)PSend6244, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)PSend6245);
    // +. 
    Send PSend6248 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_max_0_3);
    Assign PAssign6247 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6248);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6249 = new_Send((Optr)VAR_max_0_3, SMB__equals_, 1, (Optr)VAR_n_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6253 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_aCollection_0_1);
    Array PThreadedCode6252 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_1, (Optr)&t_send1, (Optr)PSend6253, (Optr)&t_block_return);
    Block PBlock6251 = new_Block_with(empty_Array, empty_Array, PThreadedCode6252, 1, PSend6253);
    // +. 
    Send PSend6256 = new_Send((Optr)VAR_startIndex_0_2, SMB__plus_, 1, (Optr)VAR_max_0_3);
    // -. 
    Send PSend6257 = new_Send((Optr)PSend6256, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend6258 = new_Send((Optr)VAR_aCollection_0_1, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend6257);
    // escape:. 
    Send PSend6259 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6258);
    Array PThreadedCode6255 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_1, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_startIndex_0_2, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_send1, (Optr)PSend6256, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6257, (Optr)&t_send2, (Optr)PSend6258, (Optr)&t_send1, (Optr)PSend6259, (Optr)&t_block_return);
    Block PBlock6254 = new_Block_with(empty_Array, empty_Array, PThreadedCode6255, 1, PSend6259);
    // ifTrue:ifFalse:. 
    Send PSend6250 = new_Send((Optr)PSend6249, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6251, (Optr)PBlock6254);
    Array PThreadedCode6239 = instantiate_Array_with(ThreadedCode_Class, 0, 59, (Optr)&t_push1, (Optr)PAssign6240, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6242, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend6241, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_startIndex_0_2, (Optr)&t_push_variable, (Optr)VAR_startIndex_0_2, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_send1, (Optr)PSend6243, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6244, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6245, (Optr)&t_send4, (Optr)PSend6246, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6247, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_send1, (Optr)PSend6248, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend6249, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6250, (Optr)PBlock6251, (Optr)PBlock6254, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6237 = new_Block_with(PArray6238, empty_Array, PThreadedCode6239, 5, PAssign6240, PSend6246, PAssign6247, PSend6250, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6260 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6237);
    Array PThreadedCode6236 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6237, (Optr)&t_send1, (Optr)PSend6260, (Optr)&t_method_return);
    Method PMethod6233 = new_Method_with(PArray6234, PArray6235, empty_Array, PThreadedCode6236, 1, PSend6260);
    
    MethodClosure MC_SMB_next_into_startingAt_ = new_MethodClosure((Method)PMethod6233, Collection_Stream_ReadStream_Class);
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
    init_SMB_size();
    init_SMB_next();
    init_SMB_next_();
    init_SMB_upTo_();
    init_SMB_upToEnd();
    init_SMB_next_into_startingAt_();
    
}