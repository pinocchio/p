#include <lib/class/Collection/Stream/ReadStream.h>


Optr layout_Collection_Stream_ReadStream_Class_class;
Optr layout_Collection_Stream_ReadStream;


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Array PThreadedCode6173 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_method_return);
    Method PMethod6172 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6173, 1, slot_Collections_Streams_PositionableStream_readLimit);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod6172, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6177 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend6179 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt__equals_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6183 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode6182 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend6183, (Optr)&t_block_return);
    Block PBlock6181 = new_Block_with(empty_Array, empty_Array, PThreadedCode6182, 1, PSend6183);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6187 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6186 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6187);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6188 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PAssign6186);
    // escape:. 
    Send PSend6189 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6188);
    Array PThreadedCode6185 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push1, (Optr)PAssign6186, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6187, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend6188, (Optr)&t_send1, (Optr)PSend6189, (Optr)&t_block_return);
    Block PBlock6184 = new_Block_with(empty_Array, empty_Array, PThreadedCode6185, 1, PSend6189);
    // ifTrue:ifFalse:. 
    Send PSend6180 = new_Send((Optr)PSend6179, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6181, (Optr)PBlock6184);
    Array PThreadedCode6178 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6179, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6180, (Optr)PBlock6181, (Optr)PBlock6184, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6176 = new_Block_with(PArray6177, empty_Array, PThreadedCode6178, 2, PSend6180, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6190 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6176);
    Array PThreadedCode6175 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6176, (Optr)&t_send1, (Optr)PSend6190, (Optr)&t_method_return);
    Method PMethod6174 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6175, 1, PSend6190);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6174, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_next_() {
    Symbol SMB_next_ = new_Symbol(L"next:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6192 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_ans_0_1 = new_Variable_named(L"ans", 0);
    Variable VAR_endPosition_0_2 = new_Variable_named(L"endPosition", 0);
    Array PArray6193 = new_Array_with(2, (Optr)VAR_ans_0_1, (Optr)VAR_endPosition_0_2);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6197 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend6196 = new_Send((Optr)PSend6197, SMB_min_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Assign PAssign6195 = new_Assign((Optr)VAR_endPosition_0_2, (Optr)PSend6196);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6200 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend6199 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)PSend6200, (Optr)VAR_endPosition_0_2);
    Assign PAssign6198 = new_Assign((Optr)VAR_ans_0_1, (Optr)PSend6199);
    Assign PAssign6201 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_endPosition_0_2);
    Array PThreadedCode6194 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign6195, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend6197, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6196, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6198, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6200, (Optr)&t_push_variable, (Optr)VAR_endPosition_0_2, (Optr)&t_send2, (Optr)PSend6199, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6201, (Optr)&t_push_variable, (Optr)VAR_endPosition_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ans_0_1, (Optr)&t_method_return);
    Method PMethod6191 = new_Method_with(PArray6192, PArray6193, empty_Array, PThreadedCode6194, 4, PAssign6195, PAssign6198, PAssign6201, VAR_ans_0_1);
    
    MethodClosure MC_SMB_next_ = new_MethodClosure((Method)PMethod6191, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_next_, MC_SMB_next_);
}


static void init_SMB_upTo_() {
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6203 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_end_0_2 = new_Variable_named(L"end", 0);
    Array PArray6204 = new_Array_with(2, (Optr)VAR_start_0_1, (Optr)VAR_end_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6207 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6210 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6209 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend6210);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Array PThreadedCode6214 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock6213 = new_Block_with(empty_Array, empty_Array, PThreadedCode6214, 1, int_0_Const);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend6212 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_start_0_1, (Optr)PBlock6213);
    Assign PAssign6211 = new_Assign((Optr)VAR_end_0_2, (Optr)PSend6212);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6215 = new_Send((Optr)VAR_end_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    // upToEnd. 
    Send PSend6219 = new_Send((Optr)self, SMB_upToEnd, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6220 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6219);
    Array PThreadedCode6218 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6219, (Optr)&t_send1, (Optr)PSend6220, (Optr)&t_block_return);
    Block PBlock6217 = new_Block_with(empty_Array, empty_Array, PThreadedCode6218, 1, PSend6220);
    // ifTrue:. 
    Send PSend6216 = new_Send((Optr)PSend6215, SMB_ifTrue_, 1, (Optr)PBlock6217);
    Assign PAssign6221 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_end_0_2);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6222 = new_Send((Optr)VAR_end_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend6223 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)PSend6222);
    Array PThreadedCode6208 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push1, (Optr)PAssign6209, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6210, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6211, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_closure, (Optr)PBlock6213, (Optr)&t_send3, (Optr)PSend6212, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6215, (Optr)&t_send_ifTrue_, (Optr)PSend6216, (Optr)PBlock6217, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6221, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6222, (Optr)&t_send2, (Optr)PSend6223, (Optr)&t_method_return);
    Block PBlock6206 = new_Block_with(PArray6207, empty_Array, PThreadedCode6208, 5, PAssign6209, PAssign6211, PSend6216, PAssign6221, PSend6223);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6224 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6206);
    Array PThreadedCode6205 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6206, (Optr)&t_send1, (Optr)PSend6224, (Optr)&t_method_return);
    Method PMethod6202 = new_Method_with(PArray6203, PArray6204, empty_Array, PThreadedCode6205, 1, PSend6224);
    
    MethodClosure MC_SMB_upTo_ = new_MethodClosure((Method)PMethod6202, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_upTo_, MC_SMB_upTo_);
}


static void init_SMB_upToEnd() {
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Array PArray6226 = new_Array_with(1, (Optr)VAR_start_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6229 = new_Send((Optr)int_1_Const, SMB__plus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6228 = new_Assign((Optr)VAR_start_0_0, (Optr)PSend6229);
    Assign PAssign6230 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend6231 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Array PThreadedCode6227 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign6228, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6229, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6230, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend6231, (Optr)&t_method_return);
    Method PMethod6225 = new_Method_with(empty_Array, PArray6226, empty_Array, PThreadedCode6227, 3, PAssign6228, PAssign6230, PSend6231);
    
    MethodClosure MC_SMB_upToEnd = new_MethodClosure((Method)PMethod6225, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_upToEnd, MC_SMB_upToEnd);
}


static void init_SMB_next_into_startingAt_() {
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Variable VAR_aCollection_0_1 = new_Variable_named(L"aCollection", 0);
    Variable VAR_startIndex_0_2 = new_Variable_named(L"startIndex", 0);
    Array PArray6233 = new_Array_with(3, (Optr)VAR_n_0_0, (Optr)VAR_aCollection_0_1, (Optr)VAR_startIndex_0_2);
    Variable VAR_max_0_3 = new_Variable_named(L"max", 0);
    Array PArray6234 = new_Array_with(1, (Optr)VAR_max_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6237 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6241 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend6240 = new_Send((Optr)PSend6241, SMB_min_, 1, (Optr)VAR_n_0_0);
    Assign PAssign6239 = new_Assign((Optr)VAR_max_0_3, (Optr)PSend6240);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6242 = new_Send((Optr)VAR_startIndex_0_2, SMB__plus_, 1, (Optr)VAR_max_0_3);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6243 = new_Send((Optr)PSend6242, SMB__minus_, 1, (Optr)int_1_Const);
    // +. 
    Send PSend6244 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend6245 = new_Send((Optr)VAR_aCollection_0_1, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)VAR_startIndex_0_2, (Optr)PSend6243, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)PSend6244);
    // +. 
    Send PSend6247 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_max_0_3);
    Assign PAssign6246 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6247);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6248 = new_Send((Optr)VAR_max_0_3, SMB__equals_, 1, (Optr)VAR_n_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6252 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_aCollection_0_1);
    Array PThreadedCode6251 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_1, (Optr)&t_send1, (Optr)PSend6252, (Optr)&t_block_return);
    Block PBlock6250 = new_Block_with(empty_Array, empty_Array, PThreadedCode6251, 1, PSend6252);
    // +. 
    Send PSend6255 = new_Send((Optr)VAR_startIndex_0_2, SMB__plus_, 1, (Optr)VAR_max_0_3);
    // -. 
    Send PSend6256 = new_Send((Optr)PSend6255, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend6257 = new_Send((Optr)VAR_aCollection_0_1, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend6256);
    // escape:. 
    Send PSend6258 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6257);
    Array PThreadedCode6254 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_1, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_startIndex_0_2, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_send1, (Optr)PSend6255, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6256, (Optr)&t_send2, (Optr)PSend6257, (Optr)&t_send1, (Optr)PSend6258, (Optr)&t_block_return);
    Block PBlock6253 = new_Block_with(empty_Array, empty_Array, PThreadedCode6254, 1, PSend6258);
    // ifTrue:ifFalse:. 
    Send PSend6249 = new_Send((Optr)PSend6248, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6250, (Optr)PBlock6253);
    Array PThreadedCode6238 = instantiate_Array_with(ThreadedCode_Class, 0, 59, (Optr)&t_push1, (Optr)PAssign6239, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6241, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend6240, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_startIndex_0_2, (Optr)&t_push_variable, (Optr)VAR_startIndex_0_2, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_send1, (Optr)PSend6242, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6243, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6244, (Optr)&t_send4, (Optr)PSend6245, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6246, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_send1, (Optr)PSend6247, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend6248, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6249, (Optr)PBlock6250, (Optr)PBlock6253, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6236 = new_Block_with(PArray6237, empty_Array, PThreadedCode6238, 5, PAssign6239, PSend6245, PAssign6246, PSend6249, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6259 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6236);
    Array PThreadedCode6235 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6236, (Optr)&t_send1, (Optr)PSend6259, (Optr)&t_method_return);
    Method PMethod6232 = new_Method_with(PArray6233, PArray6234, empty_Array, PThreadedCode6235, 1, PSend6259);
    
    MethodClosure MC_SMB_next_into_startingAt_ = new_MethodClosure((Method)PMethod6232, Collection_Stream_ReadStream_Class);
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