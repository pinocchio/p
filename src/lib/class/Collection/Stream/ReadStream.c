#include <lib/class/Collection/Stream/ReadStream.h>


Optr layout_Collection_Stream_ReadStream_Class_class;
Optr layout_Collection_Stream_ReadStream;


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Array PThreadedCode6172 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_method_return);
    Method PMethod6171 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6172, 1, slot_Collections_Streams_PositionableStream_readLimit);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod6171, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6176 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend6178 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt__equals_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6182 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode6181 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend6182, (Optr)&t_block_return);
    Block PBlock6180 = new_Block_with(empty_Array, empty_Array, PThreadedCode6181, 1, PSend6182);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6186 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6185 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6186);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6187 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)PAssign6185);
    // escape:. 
    Send PSend6188 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6187);
    Array PThreadedCode6184 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push1, (Optr)PAssign6185, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6186, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend6187, (Optr)&t_send1, (Optr)PSend6188, (Optr)&t_block_return);
    Block PBlock6183 = new_Block_with(empty_Array, empty_Array, PThreadedCode6184, 1, PSend6188);
    // ifTrue:ifFalse:. 
    Send PSend6179 = new_Send((Optr)PSend6178, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6180, (Optr)PBlock6183);
    Array PThreadedCode6177 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6178, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6179, (Optr)PBlock6180, (Optr)PBlock6183, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6175 = new_Block_with(PArray6176, empty_Array, PThreadedCode6177, 2, PSend6179, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6189 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6175);
    Array PThreadedCode6174 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6175, (Optr)&t_send1, (Optr)PSend6189, (Optr)&t_method_return);
    Method PMethod6173 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6174, 1, PSend6189);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6173, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_next_() {
    Symbol SMB_next_ = new_Symbol(L"next:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6191 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_ans_0_1 = new_Variable_named(L"ans", 0);
    Variable VAR_endPosition_0_2 = new_Variable_named(L"endPosition", 0);
    Array PArray6192 = new_Array_with(2, (Optr)VAR_ans_0_1, (Optr)VAR_endPosition_0_2);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6196 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend6195 = new_Send((Optr)PSend6196, SMB_min_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Assign PAssign6194 = new_Assign((Optr)VAR_endPosition_0_2, (Optr)PSend6195);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6199 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend6198 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)PSend6199, (Optr)VAR_endPosition_0_2);
    Assign PAssign6197 = new_Assign((Optr)VAR_ans_0_1, (Optr)PSend6198);
    Assign PAssign6200 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_endPosition_0_2);
    Array PThreadedCode6193 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign6194, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend6196, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6195, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6197, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6199, (Optr)&t_push_variable, (Optr)VAR_endPosition_0_2, (Optr)&t_send2, (Optr)PSend6198, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6200, (Optr)&t_push_variable, (Optr)VAR_endPosition_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ans_0_1, (Optr)&t_method_return);
    Method PMethod6190 = new_Method_with(PArray6191, PArray6192, empty_Array, PThreadedCode6193, 4, PAssign6194, PAssign6197, PAssign6200, VAR_ans_0_1);
    
    MethodClosure MC_SMB_next_ = new_MethodClosure((Method)PMethod6190, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_next_, MC_SMB_next_);
}


static void init_SMB_upTo_() {
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6202 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_end_0_2 = new_Variable_named(L"end", 0);
    Array PArray6203 = new_Array_with(2, (Optr)VAR_start_0_1, (Optr)VAR_end_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6206 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6209 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6208 = new_Assign((Optr)VAR_start_0_1, (Optr)PSend6209);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Array PThreadedCode6213 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock6212 = new_Block_with(empty_Array, empty_Array, PThreadedCode6213, 1, int_0_Const);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend6211 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_start_0_1, (Optr)PBlock6212);
    Assign PAssign6210 = new_Assign((Optr)VAR_end_0_2, (Optr)PSend6211);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6214 = new_Send((Optr)VAR_end_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    // upToEnd. 
    Send PSend6218 = new_Send((Optr)self, SMB_upToEnd, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6219 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6218);
    Array PThreadedCode6217 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6218, (Optr)&t_send1, (Optr)PSend6219, (Optr)&t_block_return);
    Block PBlock6216 = new_Block_with(empty_Array, empty_Array, PThreadedCode6217, 1, PSend6219);
    // ifTrue:. 
    Send PSend6215 = new_Send((Optr)PSend6214, SMB_ifTrue_, 1, (Optr)PBlock6216);
    Assign PAssign6220 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_end_0_2);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6221 = new_Send((Optr)VAR_end_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend6222 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_1, (Optr)PSend6221);
    Array PThreadedCode6207 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push1, (Optr)PAssign6208, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6209, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6210, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_closure, (Optr)PBlock6212, (Optr)&t_send3, (Optr)PSend6211, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6214, (Optr)&t_send_ifTrue_, (Optr)PSend6215, (Optr)PBlock6216, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6220, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_variable, (Optr)VAR_end_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6221, (Optr)&t_send2, (Optr)PSend6222, (Optr)&t_method_return);
    Block PBlock6205 = new_Block_with(PArray6206, empty_Array, PThreadedCode6207, 5, PAssign6208, PAssign6210, PSend6215, PAssign6220, PSend6222);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6223 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6205);
    Array PThreadedCode6204 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6205, (Optr)&t_send1, (Optr)PSend6223, (Optr)&t_method_return);
    Method PMethod6201 = new_Method_with(PArray6202, PArray6203, empty_Array, PThreadedCode6204, 1, PSend6223);
    
    MethodClosure MC_SMB_upTo_ = new_MethodClosure((Method)PMethod6201, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_upTo_, MC_SMB_upTo_);
}


static void init_SMB_upToEnd() {
    Symbol SMB_upToEnd = new_Symbol(L"upToEnd");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Array PArray6225 = new_Array_with(1, (Optr)VAR_start_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6228 = new_Send((Optr)int_1_Const, SMB__plus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6227 = new_Assign((Optr)VAR_start_0_0, (Optr)PSend6228);
    Assign PAssign6229 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend6230 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_0, (Optr)slot_Collections_Streams_PositionableStream_position);
    Array PThreadedCode6226 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign6227, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6228, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6229, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend6230, (Optr)&t_method_return);
    Method PMethod6224 = new_Method_with(empty_Array, PArray6225, empty_Array, PThreadedCode6226, 3, PAssign6227, PAssign6229, PSend6230);
    
    MethodClosure MC_SMB_upToEnd = new_MethodClosure((Method)PMethod6224, Collection_Stream_ReadStream_Class);
    store_method(Collection_Stream_ReadStream_Class, SMB_upToEnd, MC_SMB_upToEnd);
}


static void init_SMB_next_into_startingAt_() {
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Variable VAR_aCollection_0_1 = new_Variable_named(L"aCollection", 0);
    Variable VAR_startIndex_0_2 = new_Variable_named(L"startIndex", 0);
    Array PArray6232 = new_Array_with(3, (Optr)VAR_n_0_0, (Optr)VAR_aCollection_0_1, (Optr)VAR_startIndex_0_2);
    Variable VAR_max_0_3 = new_Variable_named(L"max", 0);
    Array PArray6233 = new_Array_with(1, (Optr)VAR_max_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6236 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6240 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB__minus_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend6239 = new_Send((Optr)PSend6240, SMB_min_, 1, (Optr)VAR_n_0_0);
    Assign PAssign6238 = new_Assign((Optr)VAR_max_0_3, (Optr)PSend6239);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend6241 = new_Send((Optr)VAR_startIndex_0_2, SMB__plus_, 1, (Optr)VAR_max_0_3);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6242 = new_Send((Optr)PSend6241, SMB__minus_, 1, (Optr)int_1_Const);
    // +. 
    Send PSend6243 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend6244 = new_Send((Optr)VAR_aCollection_0_1, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)VAR_startIndex_0_2, (Optr)PSend6242, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)PSend6243);
    // +. 
    Send PSend6246 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)VAR_max_0_3);
    Assign PAssign6245 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6246);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6247 = new_Send((Optr)VAR_max_0_3, SMB__equals_, 1, (Optr)VAR_n_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6251 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_aCollection_0_1);
    Array PThreadedCode6250 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_1, (Optr)&t_send1, (Optr)PSend6251, (Optr)&t_block_return);
    Block PBlock6249 = new_Block_with(empty_Array, empty_Array, PThreadedCode6250, 1, PSend6251);
    // +. 
    Send PSend6254 = new_Send((Optr)VAR_startIndex_0_2, SMB__plus_, 1, (Optr)VAR_max_0_3);
    // -. 
    Send PSend6255 = new_Send((Optr)PSend6254, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend6256 = new_Send((Optr)VAR_aCollection_0_1, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend6255);
    // escape:. 
    Send PSend6257 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6256);
    Array PThreadedCode6253 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_1, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_startIndex_0_2, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_send1, (Optr)PSend6254, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6255, (Optr)&t_send2, (Optr)PSend6256, (Optr)&t_send1, (Optr)PSend6257, (Optr)&t_block_return);
    Block PBlock6252 = new_Block_with(empty_Array, empty_Array, PThreadedCode6253, 1, PSend6257);
    // ifTrue:ifFalse:. 
    Send PSend6248 = new_Send((Optr)PSend6247, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6249, (Optr)PBlock6252);
    Array PThreadedCode6237 = instantiate_Array_with(ThreadedCode_Class, 0, 59, (Optr)&t_push1, (Optr)PAssign6238, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6240, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend6239, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_startIndex_0_2, (Optr)&t_push_variable, (Optr)VAR_startIndex_0_2, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_send1, (Optr)PSend6241, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6242, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6243, (Optr)&t_send4, (Optr)PSend6244, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6245, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_send1, (Optr)PSend6246, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_max_0_3, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend6247, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6248, (Optr)PBlock6249, (Optr)PBlock6252, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6235 = new_Block_with(PArray6236, empty_Array, PThreadedCode6237, 5, PAssign6238, PSend6244, PAssign6245, PSend6248, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6258 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6235);
    Array PThreadedCode6234 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6235, (Optr)&t_send1, (Optr)PSend6258, (Optr)&t_method_return);
    Method PMethod6231 = new_Method_with(PArray6232, PArray6233, empty_Array, PThreadedCode6234, 1, PSend6258);
    
    MethodClosure MC_SMB_next_into_startingAt_ = new_MethodClosure((Method)PMethod6231, Collection_Stream_ReadStream_Class);
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