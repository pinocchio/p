#include <lib/class/Collection/Stream/WriteStream.h>


Optr layout_Collection_Stream_WriteStream_Class_class;
Optr slot_Collection_Stream_WriteStream_writeLimit;
Optr layout_Collection_Stream_WriteStream;


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend6269 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6270 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend6269);
    Array PThreadedCode6268 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend6269, (Optr)&t_send1, (Optr)PSend6270, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6267 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6268, 2, PSend6270, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod6267, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6274 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6273 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6274);
    Array PThreadedCode6272 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign6273, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6274, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod6271 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6272, 1, PAssign6273);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod6271, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6276 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend6278 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt__equals_, 1, (Optr)slot_Collection_Stream_WriteStream_writeLimit);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // +. 
    Send PSend6282 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_10_Const);
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    // growTo:. 
    Send PSend6283 = new_Send((Optr)self, SMB_growTo_, 1, (Optr)PSend6282);
    Array PThreadedCode6281 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend6282, (Optr)&t_send1, (Optr)PSend6283, (Optr)&t_block_return);
    Block PBlock6280 = new_Block_with(empty_Array, empty_Array, PThreadedCode6281, 1, PSend6283);
    // ifTrue:. 
    Send PSend6279 = new_Send((Optr)PSend6278, SMB_ifTrue_, 1, (Optr)PBlock6280);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6285 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6284 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6285);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6286 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_put_, 2, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anObject_0_0);
    Array PThreadedCode6277 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)&t_send1, (Optr)PSend6278, (Optr)&t_send_ifTrue_, (Optr)PSend6279, (Optr)PBlock6280, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6284, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6285, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send2, (Optr)PSend6286, (Optr)&t_method_return);
    Method PMethod6275 = new_Method_with(PArray6276, empty_Array, empty_Array, PThreadedCode6277, 3, PSend6279, PAssign6284, PSend6286);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod6275, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_shouldNotImplement = new_Symbol(L"shouldNotImplement");
    // shouldNotImplement. 
    Send PSend6289 = new_Send((Optr)self, SMB_shouldNotImplement, 0);
    Array PThreadedCode6288 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6289, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6287 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6288, 2, PSend6289, self);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6287, Collection_Stream_WriteStream_Class);
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
    Array PArray6291 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Super PSuper6293 = new_Super(SMB_on_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6297 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Assign PAssign6296 = new_Assign((Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)PSend6297);
    Assign PAssign6295 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PAssign6296);
    Assign PAssign6294 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PAssign6295);
    Array PThreadedCode6292 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_super1, (Optr)PSuper6293, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6294, (Optr)&t_push1, (Optr)PAssign6295, (Optr)&t_push1, (Optr)PAssign6296, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6297, (Optr)&t_assign, (Optr)&t_assign, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6290 = new_Method_with(PArray6291, empty_Array, empty_Array, PThreadedCode6292, 3, PSuper6293, PAssign6294, self);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod6290, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_with_, MC_SMB_with_);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6301 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6300 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6301);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6302 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Array PThreadedCode6299 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign6300, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6301, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6302, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6298 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6299, 3, PAssign6300, PAssign6302, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod6298, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_writeAll_() {
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6304 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newEnd_0_1 = new_Variable_named(L"newEnd", 0);
    Array PArray6305 = new_Array_with(1, (Optr)VAR_newEnd_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6309 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend6308 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend6309);
    Assign PAssign6307 = new_Assign((Optr)VAR_newEnd_0_1, (Optr)PSend6308);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend6310 = new_Send((Optr)VAR_newEnd_0_1, SMB__gt_, 1, (Optr)slot_Collection_Stream_WriteStream_writeLimit);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    // growTo:. 
    Send PSend6314 = new_Send((Optr)self, SMB_growTo_, 1, (Optr)VAR_newEnd_0_1);
    Array PThreadedCode6313 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_send1, (Optr)PSend6314, (Optr)&t_block_return);
    Block PBlock6312 = new_Block_with(empty_Array, empty_Array, PThreadedCode6313, 1, PSend6314);
    // ifTrue:. 
    Send PSend6311 = new_Send((Optr)PSend6310, SMB_ifTrue_, 1, (Optr)PBlock6312);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6315 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend6316 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)PSend6315, (Optr)VAR_newEnd_0_1, (Optr)VAR_aCollection_0_0, (Optr)int_1_Const);
    Assign PAssign6317 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_newEnd_0_1);
    Array PThreadedCode6306 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign6307, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6309, (Optr)&t_send1, (Optr)PSend6308, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_slot, (Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)&t_send1, (Optr)PSend6310, (Optr)&t_send_ifTrue_, (Optr)PSend6311, (Optr)PBlock6312, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6315, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend6316, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6317, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_method_return);
    Method PMethod6303 = new_Method_with(PArray6304, PArray6305, empty_Array, PThreadedCode6306, 5, PAssign6307, PSend6311, PSend6316, PAssign6317, VAR_aCollection_0_0);
    
    MethodClosure MC_SMB_writeAll_ = new_MethodClosure((Method)PMethod6303, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_writeAll_, MC_SMB_writeAll_);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend6320 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6321 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend6320);
    Array PThreadedCode6319 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend6320, (Optr)&t_send1, (Optr)PSend6321, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6318 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6319, 2, PSend6321, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod6318, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6323 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6326 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6325 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6326);
    Super PSuper6327 = new_Super(SMB_position_, 1, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode6324 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign6325, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6326, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_super1, (Optr)PSuper6327, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6322 = new_Method_with(PArray6323, empty_Array, empty_Array, PThreadedCode6324, 3, PAssign6325, PSuper6327, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod6322, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_resetToStart() {
    Symbol SMB_resetToStart = new_Symbol(L"resetToStart");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6331 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Assign PAssign6330 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PAssign6331);
    Array PThreadedCode6329 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6330, (Optr)&t_push1, (Optr)PAssign6331, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6328 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6329, 2, PAssign6330, self);
    
    MethodClosure MC_SMB_resetToStart = new_MethodClosure((Method)PMethod6328, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_resetToStart, MC_SMB_resetToStart);
}


static void init_SMB_nextPutAll_() {
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6333 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newEnd_0_1 = new_Variable_named(L"newEnd", 0);
    Array PArray6334 = new_Array_with(1, (Optr)VAR_newEnd_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6337 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend6339 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_class, 0);
    // class. 
    Send PSend6340 = new_Send((Optr)VAR_aCollection_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6341 = new_Send((Optr)PSend6339, SMB__pequals_, 1, (Optr)PSend6340);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper6345 = new_Super(SMB_nextPutAll_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6346 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper6345);
    Array PThreadedCode6344 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_super1, (Optr)PSuper6345, (Optr)&t_send1, (Optr)PSend6346, (Optr)&t_block_return);
    Block PBlock6343 = new_Block_with(empty_Array, empty_Array, PThreadedCode6344, 1, PSend6346);
    // ifFalse:. 
    Send PSend6342 = new_Send((Optr)PSend6341, SMB_ifFalse_, 1, (Optr)PBlock6343);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6349 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend6348 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend6349);
    Assign PAssign6347 = new_Assign((Optr)VAR_newEnd_0_1, (Optr)PSend6348);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend6350 = new_Send((Optr)VAR_newEnd_0_1, SMB__gt_, 1, (Optr)slot_Collection_Stream_WriteStream_writeLimit);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // +. 
    Send PSend6354 = new_Send((Optr)VAR_newEnd_0_1, SMB__plus_, 1, (Optr)int_10_Const);
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    // growTo:. 
    Send PSend6355 = new_Send((Optr)self, SMB_growTo_, 1, (Optr)PSend6354);
    Array PThreadedCode6353 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend6354, (Optr)&t_send1, (Optr)PSend6355, (Optr)&t_block_return);
    Block PBlock6352 = new_Block_with(empty_Array, empty_Array, PThreadedCode6353, 1, PSend6355);
    // ifTrue:. 
    Send PSend6351 = new_Send((Optr)PSend6350, SMB_ifTrue_, 1, (Optr)PBlock6352);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6356 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend6357 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)PSend6356, (Optr)VAR_newEnd_0_1, (Optr)VAR_aCollection_0_0, (Optr)int_1_Const);
    Assign PAssign6358 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_newEnd_0_1);
    Array PThreadedCode6338 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6339, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6340, (Optr)&t_send1, (Optr)PSend6341, (Optr)&t_send_ifFalse_, (Optr)PSend6342, (Optr)PBlock6343, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6347, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6349, (Optr)&t_send1, (Optr)PSend6348, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_slot, (Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)&t_send1, (Optr)PSend6350, (Optr)&t_send_ifTrue_, (Optr)PSend6351, (Optr)PBlock6352, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6356, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend6357, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6358, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6336 = new_Block_with(PArray6337, empty_Array, PThreadedCode6338, 6, PSend6342, PAssign6347, PSend6351, PSend6357, PAssign6358, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6359 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6336);
    Array PThreadedCode6335 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6336, (Optr)&t_send1, (Optr)PSend6359, (Optr)&t_method_return);
    Method PMethod6332 = new_Method_with(PArray6333, PArray6334, empty_Array, PThreadedCode6335, 1, PSend6359);
    
    MethodClosure MC_SMB_nextPutAll_ = new_MethodClosure((Method)PMethod6332, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_nextPutAll_, MC_SMB_nextPutAll_);
}


static void init_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6361 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Super PSuper6363 = new_Super(SMB_on_, 1, (Optr)VAR_aCollection_0_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6364 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)int_0_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6366 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Assign PAssign6365 = new_Assign((Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)PSend6366);
    Array PThreadedCode6362 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_super1, (Optr)PSuper6363, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6364, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6365, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6366, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6360 = new_Method_with(PArray6361, empty_Array, empty_Array, PThreadedCode6362, 4, PSuper6363, PAssign6364, PAssign6365, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod6360, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_growTo_() {
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6368 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_oldSize_0_1 = new_Variable_named(L"oldSize", 0);
    Variable VAR_grownCollection_0_2 = new_Variable_named(L"grownCollection", 0);
    Variable VAR_newSize_0_3 = new_Variable_named(L"newSize", 0);
    Array PArray6369 = new_Array_with(3, (Optr)VAR_oldSize_0_1, (Optr)VAR_grownCollection_0_2, (Optr)VAR_newSize_0_3);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6372 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign6371 = new_Assign((Optr)VAR_oldSize_0_1, (Optr)PSend6372);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // //. 
    Send PSend6376 = new_Send((Optr)VAR_oldSize_0_1, SMB__quotient_, 1, (Optr)int_4_Const);
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // max:. 
    Send PSend6375 = new_Send((Optr)PSend6376, SMB_max_, 1, (Optr)int_20_Const);
    // +. 
    Send PSend6374 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)PSend6375);
    Assign PAssign6373 = new_Assign((Optr)VAR_newSize_0_3, (Optr)PSend6374);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend6379 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend6378 = new_Send((Optr)PSend6379, SMB_new_, 1, (Optr)VAR_newSize_0_3);
    Assign PAssign6377 = new_Assign((Optr)VAR_grownCollection_0_2, (Optr)PSend6378);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend6381 = new_Send((Optr)VAR_grownCollection_0_2, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_oldSize_0_1, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)int_1_Const);
    Assign PAssign6380 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)PSend6381);
    // size. 
    Send PSend6383 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign6382 = new_Assign((Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)PSend6383);
    Array PThreadedCode6370 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push1, (Optr)PAssign6371, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6372, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6373, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_variable, (Optr)VAR_oldSize_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend6376, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend6375, (Optr)&t_send1, (Optr)PSend6374, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6377, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6379, (Optr)&t_push_variable, (Optr)VAR_newSize_0_3, (Optr)&t_send1, (Optr)PSend6378, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6380, (Optr)&t_push_variable, (Optr)VAR_grownCollection_0_2, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_oldSize_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend6381, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6382, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6383, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6367 = new_Method_with(PArray6368, PArray6369, empty_Array, PThreadedCode6370, 6, PAssign6371, PAssign6373, PAssign6377, PAssign6380, PAssign6382, self);
    
    MethodClosure MC_SMB_growTo_ = new_MethodClosure((Method)PMethod6367, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_growTo_, MC_SMB_growTo_);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6387 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6386 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6387);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend6388 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)slot_Collections_Streams_PositionableStream_position);
    Array PThreadedCode6385 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign6386, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6387, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend6388, (Optr)&t_method_return);
    Method PMethod6384 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6385, 2, PAssign6386, PSend6388);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod6384, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend6391 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6392 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend6391);
    Array PThreadedCode6390 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend6391, (Optr)&t_send1, (Optr)PSend6392, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6389 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6390, 2, PSend6392, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod6389, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_tab, MC_SMB_tab);
}


static void init_class_SMB_with_() {
    Symbol SMB_with_ = new_Symbol(L"with:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6394 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend6396 = new_Send((Optr)self, SMB_basicNew, 0);
    // with:. 
    Send PSend6397 = new_Send((Optr)PSend6396, SMB_with_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode6395 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6396, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend6397, (Optr)&t_method_return);
    Method PMethod6393 = new_Method_with(PArray6394, empty_Array, empty_Array, PThreadedCode6395, 1, PSend6397);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod6393, HEADER(Collection_Stream_WriteStream_Class));
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