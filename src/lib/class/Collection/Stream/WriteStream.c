#include <lib/class/Collection/Stream/WriteStream.h>


Optr layout_Collection_Stream_WriteStream_Class_class;
Optr slot_Collection_Stream_WriteStream_writeLimit;
Optr layout_Collection_Stream_WriteStream;


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend6263 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6264 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend6263);
    Array PThreadedCode6262 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend6263, (Optr)&t_send1, (Optr)PSend6264, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6261 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6262, 2, PSend6264, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod6261, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6268 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6267 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6268);
    Array PThreadedCode6266 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign6267, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6268, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod6265 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6266, 1, PAssign6267);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod6265, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6270 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend6272 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt__equals_, 1, (Optr)slot_Collection_Stream_WriteStream_writeLimit);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // +. 
    Send PSend6276 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_10_Const);
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    // growTo:. 
    Send PSend6277 = new_Send((Optr)self, SMB_growTo_, 1, (Optr)PSend6276);
    Array PThreadedCode6275 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend6276, (Optr)&t_send1, (Optr)PSend6277, (Optr)&t_block_return);
    Block PBlock6274 = new_Block_with(empty_Array, empty_Array, PThreadedCode6275, 1, PSend6277);
    // ifTrue:. 
    Send PSend6273 = new_Send((Optr)PSend6272, SMB_ifTrue_, 1, (Optr)PBlock6274);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6279 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6278 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6279);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6280 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_put_, 2, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anObject_0_0);
    Array PThreadedCode6271 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)&t_send1, (Optr)PSend6272, (Optr)&t_send_ifTrue_, (Optr)PSend6273, (Optr)PBlock6274, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6278, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6279, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send2, (Optr)PSend6280, (Optr)&t_method_return);
    Method PMethod6269 = new_Method_with(PArray6270, empty_Array, empty_Array, PThreadedCode6271, 3, PSend6273, PAssign6278, PSend6280);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod6269, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_nextPut_() {
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6282 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6284 = new_Send((Optr)self, SMB_write_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode6283 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend6284, (Optr)&t_method_return);
    Method PMethod6281 = new_Method_with(PArray6282, empty_Array, empty_Array, PThreadedCode6283, 1, PSend6284);
    
    MethodClosure MC_SMB_nextPut_ = new_MethodClosure((Method)PMethod6281, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_nextPut_, MC_SMB_nextPut_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_shouldNotImplement = new_Symbol(L"shouldNotImplement");
    // shouldNotImplement. 
    Send PSend6287 = new_Send((Optr)self, SMB_shouldNotImplement, 0);
    Array PThreadedCode6286 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6287, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6285 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6286, 2, PSend6287, self);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6285, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_with_() {
    /*
    with: aCollection 
// 	"Answer an instance of me on the argument, aCollection, positioned to 
// 	store objects at the end of aCollection."
// 
// 	^self basicNew with: aCollection
    */
    Symbol SMB_with_ = new_Symbol(L"with:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6289 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Super PSuper6291 = new_Super(SMB_on_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6295 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Assign PAssign6294 = new_Assign((Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)PSend6295);
    Assign PAssign6293 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PAssign6294);
    Assign PAssign6292 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PAssign6293);
    Array PThreadedCode6290 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_super1, (Optr)PSuper6291, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6292, (Optr)&t_push1, (Optr)PAssign6293, (Optr)&t_push1, (Optr)PAssign6294, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6295, (Optr)&t_assign, (Optr)&t_assign, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6288 = new_Method_with(PArray6289, empty_Array, empty_Array, PThreadedCode6290, 3, PSuper6291, PAssign6292, self);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod6288, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_with_, MC_SMB_with_);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6299 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6298 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6299);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6300 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Array PThreadedCode6297 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign6298, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6299, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6300, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6296 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6297, 3, PAssign6298, PAssign6300, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod6296, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_writeAll_() {
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6302 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newEnd_0_1 = new_Variable_named(L"newEnd", 0);
    Array PArray6303 = new_Array_with(1, (Optr)VAR_newEnd_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6307 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend6306 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend6307);
    Assign PAssign6305 = new_Assign((Optr)VAR_newEnd_0_1, (Optr)PSend6306);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend6308 = new_Send((Optr)VAR_newEnd_0_1, SMB__gt_, 1, (Optr)slot_Collection_Stream_WriteStream_writeLimit);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    // growTo:. 
    Send PSend6312 = new_Send((Optr)self, SMB_growTo_, 1, (Optr)VAR_newEnd_0_1);
    Array PThreadedCode6311 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_send1, (Optr)PSend6312, (Optr)&t_block_return);
    Block PBlock6310 = new_Block_with(empty_Array, empty_Array, PThreadedCode6311, 1, PSend6312);
    // ifTrue:. 
    Send PSend6309 = new_Send((Optr)PSend6308, SMB_ifTrue_, 1, (Optr)PBlock6310);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6313 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend6314 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)PSend6313, (Optr)VAR_newEnd_0_1, (Optr)VAR_aCollection_0_0, (Optr)int_1_Const);
    Assign PAssign6315 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_newEnd_0_1);
    Array PThreadedCode6304 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign6305, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6307, (Optr)&t_send1, (Optr)PSend6306, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_slot, (Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)&t_send1, (Optr)PSend6308, (Optr)&t_send_ifTrue_, (Optr)PSend6309, (Optr)PBlock6310, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6313, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend6314, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6315, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_method_return);
    Method PMethod6301 = new_Method_with(PArray6302, PArray6303, empty_Array, PThreadedCode6304, 5, PAssign6305, PSend6309, PSend6314, PAssign6315, VAR_aCollection_0_0);
    
    MethodClosure MC_SMB_writeAll_ = new_MethodClosure((Method)PMethod6301, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_writeAll_, MC_SMB_writeAll_);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend6318 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6319 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend6318);
    Array PThreadedCode6317 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend6318, (Optr)&t_send1, (Optr)PSend6319, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6316 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6317, 2, PSend6319, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod6316, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6321 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6324 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6323 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6324);
    Super PSuper6325 = new_Super(SMB_position_, 1, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode6322 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign6323, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6324, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_super1, (Optr)PSuper6325, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6320 = new_Method_with(PArray6321, empty_Array, empty_Array, PThreadedCode6322, 3, PAssign6323, PSuper6325, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod6320, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_resetToStart() {
    Symbol SMB_resetToStart = new_Symbol(L"resetToStart");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6329 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Assign PAssign6328 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PAssign6329);
    Array PThreadedCode6327 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6328, (Optr)&t_push1, (Optr)PAssign6329, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6326 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6327, 2, PAssign6328, self);
    
    MethodClosure MC_SMB_resetToStart = new_MethodClosure((Method)PMethod6326, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_resetToStart, MC_SMB_resetToStart);
}


static void init_SMB_nextPutAll_() {
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6331 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newEnd_0_1 = new_Variable_named(L"newEnd", 0);
    Array PArray6332 = new_Array_with(1, (Optr)VAR_newEnd_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6335 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend6337 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_class, 0);
    // class. 
    Send PSend6338 = new_Send((Optr)VAR_aCollection_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6339 = new_Send((Optr)PSend6337, SMB__pequals_, 1, (Optr)PSend6338);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper6343 = new_Super(SMB_nextPutAll_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6344 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper6343);
    Array PThreadedCode6342 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_super1, (Optr)PSuper6343, (Optr)&t_send1, (Optr)PSend6344, (Optr)&t_block_return);
    Block PBlock6341 = new_Block_with(empty_Array, empty_Array, PThreadedCode6342, 1, PSend6344);
    // ifFalse:. 
    Send PSend6340 = new_Send((Optr)PSend6339, SMB_ifFalse_, 1, (Optr)PBlock6341);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6347 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend6346 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend6347);
    Assign PAssign6345 = new_Assign((Optr)VAR_newEnd_0_1, (Optr)PSend6346);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend6348 = new_Send((Optr)VAR_newEnd_0_1, SMB__gt_, 1, (Optr)slot_Collection_Stream_WriteStream_writeLimit);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // +. 
    Send PSend6352 = new_Send((Optr)VAR_newEnd_0_1, SMB__plus_, 1, (Optr)int_10_Const);
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    // growTo:. 
    Send PSend6353 = new_Send((Optr)self, SMB_growTo_, 1, (Optr)PSend6352);
    Array PThreadedCode6351 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend6352, (Optr)&t_send1, (Optr)PSend6353, (Optr)&t_block_return);
    Block PBlock6350 = new_Block_with(empty_Array, empty_Array, PThreadedCode6351, 1, PSend6353);
    // ifTrue:. 
    Send PSend6349 = new_Send((Optr)PSend6348, SMB_ifTrue_, 1, (Optr)PBlock6350);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6354 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend6355 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)PSend6354, (Optr)VAR_newEnd_0_1, (Optr)VAR_aCollection_0_0, (Optr)int_1_Const);
    Assign PAssign6356 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_newEnd_0_1);
    Array PThreadedCode6336 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6337, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6338, (Optr)&t_send1, (Optr)PSend6339, (Optr)&t_send_ifFalse_, (Optr)PSend6340, (Optr)PBlock6341, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6345, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6347, (Optr)&t_send1, (Optr)PSend6346, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_slot, (Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)&t_send1, (Optr)PSend6348, (Optr)&t_send_ifTrue_, (Optr)PSend6349, (Optr)PBlock6350, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6354, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend6355, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6356, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6334 = new_Block_with(PArray6335, empty_Array, PThreadedCode6336, 6, PSend6340, PAssign6345, PSend6349, PSend6355, PAssign6356, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6357 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6334);
    Array PThreadedCode6333 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6334, (Optr)&t_send1, (Optr)PSend6357, (Optr)&t_method_return);
    Method PMethod6330 = new_Method_with(PArray6331, PArray6332, empty_Array, PThreadedCode6333, 1, PSend6357);
    
    MethodClosure MC_SMB_nextPutAll_ = new_MethodClosure((Method)PMethod6330, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_nextPutAll_, MC_SMB_nextPutAll_);
}


static void init_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6359 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Super PSuper6361 = new_Super(SMB_on_, 1, (Optr)VAR_aCollection_0_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6362 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)int_0_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6364 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Assign PAssign6363 = new_Assign((Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)PSend6364);
    Array PThreadedCode6360 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_super1, (Optr)PSuper6361, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6362, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6363, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6364, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6358 = new_Method_with(PArray6359, empty_Array, empty_Array, PThreadedCode6360, 4, PSuper6361, PAssign6362, PAssign6363, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod6358, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_growTo_() {
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6366 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_oldSize_0_1 = new_Variable_named(L"oldSize", 0);
    Variable VAR_grownCollection_0_2 = new_Variable_named(L"grownCollection", 0);
    Variable VAR_newSize_0_3 = new_Variable_named(L"newSize", 0);
    Array PArray6367 = new_Array_with(3, (Optr)VAR_oldSize_0_1, (Optr)VAR_grownCollection_0_2, (Optr)VAR_newSize_0_3);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6370 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign6369 = new_Assign((Optr)VAR_oldSize_0_1, (Optr)PSend6370);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // //. 
    Send PSend6374 = new_Send((Optr)VAR_oldSize_0_1, SMB__quotient_, 1, (Optr)int_4_Const);
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // max:. 
    Send PSend6373 = new_Send((Optr)PSend6374, SMB_max_, 1, (Optr)int_20_Const);
    // +. 
    Send PSend6372 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)PSend6373);
    Assign PAssign6371 = new_Assign((Optr)VAR_newSize_0_3, (Optr)PSend6372);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend6377 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend6376 = new_Send((Optr)PSend6377, SMB_new_, 1, (Optr)VAR_newSize_0_3);
    Assign PAssign6375 = new_Assign((Optr)VAR_grownCollection_0_2, (Optr)PSend6376);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend6379 = new_Send((Optr)VAR_grownCollection_0_2, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_oldSize_0_1, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)int_1_Const);
    Assign PAssign6378 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)PSend6379);
    // size. 
    Send PSend6381 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign6380 = new_Assign((Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)PSend6381);
    Array PThreadedCode6368 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push1, (Optr)PAssign6369, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6370, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6371, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_variable, (Optr)VAR_oldSize_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend6374, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend6373, (Optr)&t_send1, (Optr)PSend6372, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6375, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6377, (Optr)&t_push_variable, (Optr)VAR_newSize_0_3, (Optr)&t_send1, (Optr)PSend6376, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6378, (Optr)&t_push_variable, (Optr)VAR_grownCollection_0_2, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_oldSize_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend6379, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6380, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6381, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6365 = new_Method_with(PArray6366, PArray6367, empty_Array, PThreadedCode6368, 6, PAssign6369, PAssign6371, PAssign6375, PAssign6378, PAssign6380, self);
    
    MethodClosure MC_SMB_growTo_ = new_MethodClosure((Method)PMethod6365, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_growTo_, MC_SMB_growTo_);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6385 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6384 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6385);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend6386 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)slot_Collections_Streams_PositionableStream_position);
    Array PThreadedCode6383 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign6384, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6385, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend6386, (Optr)&t_method_return);
    Method PMethod6382 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6383, 2, PAssign6384, PSend6386);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod6382, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend6389 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6390 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend6389);
    Array PThreadedCode6388 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend6389, (Optr)&t_send1, (Optr)PSend6390, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6387 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6388, 2, PSend6390, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod6387, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_tab, MC_SMB_tab);
}


static void init_class_SMB_with_() {
    Symbol SMB_with_ = new_Symbol(L"with:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6392 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend6394 = new_Send((Optr)self, SMB_basicNew, 0);
    // with:. 
    Send PSend6395 = new_Send((Optr)PSend6394, SMB_with_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode6393 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6394, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend6395, (Optr)&t_method_return);
    Method PMethod6391 = new_Method_with(PArray6392, empty_Array, empty_Array, PThreadedCode6393, 1, PSend6395);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod6391, HEADER(Collection_Stream_WriteStream_Class));
    store_method(HEADER(Collection_Stream_WriteStream_Class), SMB_with_, MC_SMB_with_);
}

void init_Collection_Stream_WriteStream_layout() {
    layout_Collection_Stream_WriteStream_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Stream_WriteStream_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_Stream_WriteStream_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_Stream_WriteStream_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_Stream_WriteStream_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_Stream_WriteStream_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_WriteStream = new_Symbol(L"WriteStream");
    slot_Collection_Stream_WriteStream_writeLimit = (Optr)new_Slot(3, L"writeLimit");
    layout_Collection_Stream_WriteStream = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Collection_Stream_WriteStream)->values[0] = slot_Collections_Streams_PositionableStream_collection; // collection 
    ((Array)layout_Collection_Stream_WriteStream)->values[1] = slot_Collections_Streams_PositionableStream_position; // position 
    ((Array)layout_Collection_Stream_WriteStream)->values[2] = slot_Collections_Streams_PositionableStream_readLimit; // readLimit 
    ((Array)layout_Collection_Stream_WriteStream)->values[3] = slot_Collection_Stream_WriteStream_writeLimit; // writeLimit 
    Collection_Stream_WriteStream_Class = (Class)new_Class(Collections_Streams_PositionableStream_Class, layout_Collection_Stream_WriteStream_Class_class);
    Class_set_superclass(Collection_Stream_WriteStream_Class, Collections_Streams_PositionableStream_Class);
    Collection_Stream_WriteStream_Class->layout = layout_Collection_Stream_WriteStream;
    HEADER(Collection_Stream_WriteStream_Class)->layout = layout_Collection_Stream_WriteStream_Class_class;
    Collection_Stream_WriteStream_Class->name = SMB_WriteStream;
    
}

void init_Collection_Stream_WriteStream_methods() {
    init_SMB_lf();
    init_SMB_size();
    init_SMB_write_();
    init_SMB_nextPut_();
    init_SMB_next();
    init_SMB_with_();
    init_SMB_reset();
    init_SMB_writeAll_();
    init_SMB_space();
    init_SMB_position_();
    init_SMB_resetToStart();
    init_SMB_nextPutAll_();
    init_SMB_on_();
    init_SMB_growTo_();
    init_SMB_contents();
    init_SMB_tab();
    init_class_SMB_with_();
    
}