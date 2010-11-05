#include <lib/class/Collection/Stream/WriteStream.h>


Optr layout_Collection_Stream_WriteStream_Class_class;
Optr slot_Collection_Stream_WriteStream_writeLimit;
Optr layout_Collection_Stream_WriteStream;


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend6262 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6263 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend6262);
    Array PThreadedCode6261 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend6262, (Optr)&t_send1, (Optr)PSend6263, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6260 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6261, 2, PSend6263, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod6260, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6267 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6266 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6267);
    Array PThreadedCode6265 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign6266, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6267, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod6264 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6265, 1, PAssign6266);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod6264, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6269 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend6271 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt__equals_, 1, (Optr)slot_Collection_Stream_WriteStream_writeLimit);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // +. 
    Send PSend6275 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_10_Const);
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    // growTo:. 
    Send PSend6276 = new_Send((Optr)self, SMB_growTo_, 1, (Optr)PSend6275);
    Array PThreadedCode6274 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend6275, (Optr)&t_send1, (Optr)PSend6276, (Optr)&t_block_return);
    Block PBlock6273 = new_Block_with(empty_Array, empty_Array, PThreadedCode6274, 1, PSend6276);
    // ifTrue:. 
    Send PSend6272 = new_Send((Optr)PSend6271, SMB_ifTrue_, 1, (Optr)PBlock6273);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6278 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6277 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6278);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6279 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_put_, 2, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anObject_0_0);
    Array PThreadedCode6270 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)&t_send1, (Optr)PSend6271, (Optr)&t_send_ifTrue_, (Optr)PSend6272, (Optr)PBlock6273, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6277, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6278, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send2, (Optr)PSend6279, (Optr)&t_method_return);
    Method PMethod6268 = new_Method_with(PArray6269, empty_Array, empty_Array, PThreadedCode6270, 3, PSend6272, PAssign6277, PSend6279);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod6268, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_nextPut_() {
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6281 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6283 = new_Send((Optr)self, SMB_write_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode6282 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend6283, (Optr)&t_method_return);
    Method PMethod6280 = new_Method_with(PArray6281, empty_Array, empty_Array, PThreadedCode6282, 1, PSend6283);
    
    MethodClosure MC_SMB_nextPut_ = new_MethodClosure((Method)PMethod6280, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_nextPut_, MC_SMB_nextPut_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_shouldNotImplement = new_Symbol(L"shouldNotImplement");
    // shouldNotImplement. 
    Send PSend6286 = new_Send((Optr)self, SMB_shouldNotImplement, 0);
    Array PThreadedCode6285 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6286, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6284 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6285, 2, PSend6286, self);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6284, Collection_Stream_WriteStream_Class);
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
    Array PArray6288 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Super PSuper6290 = new_Super(SMB_on_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6294 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Assign PAssign6293 = new_Assign((Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)PSend6294);
    Assign PAssign6292 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PAssign6293);
    Assign PAssign6291 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PAssign6292);
    Array PThreadedCode6289 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_super1, (Optr)PSuper6290, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6291, (Optr)&t_push1, (Optr)PAssign6292, (Optr)&t_push1, (Optr)PAssign6293, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6294, (Optr)&t_assign, (Optr)&t_assign, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6287 = new_Method_with(PArray6288, empty_Array, empty_Array, PThreadedCode6289, 3, PSuper6290, PAssign6291, self);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod6287, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_with_, MC_SMB_with_);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6298 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6297 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6298);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6299 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Array PThreadedCode6296 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign6297, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6298, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6299, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6295 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6296, 3, PAssign6297, PAssign6299, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod6295, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_writeAll_() {
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6301 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newEnd_0_1 = new_Variable_named(L"newEnd", 0);
    Array PArray6302 = new_Array_with(1, (Optr)VAR_newEnd_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6306 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend6305 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend6306);
    Assign PAssign6304 = new_Assign((Optr)VAR_newEnd_0_1, (Optr)PSend6305);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend6307 = new_Send((Optr)VAR_newEnd_0_1, SMB__gt_, 1, (Optr)slot_Collection_Stream_WriteStream_writeLimit);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    // growTo:. 
    Send PSend6311 = new_Send((Optr)self, SMB_growTo_, 1, (Optr)VAR_newEnd_0_1);
    Array PThreadedCode6310 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_send1, (Optr)PSend6311, (Optr)&t_block_return);
    Block PBlock6309 = new_Block_with(empty_Array, empty_Array, PThreadedCode6310, 1, PSend6311);
    // ifTrue:. 
    Send PSend6308 = new_Send((Optr)PSend6307, SMB_ifTrue_, 1, (Optr)PBlock6309);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6312 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend6313 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)PSend6312, (Optr)VAR_newEnd_0_1, (Optr)VAR_aCollection_0_0, (Optr)int_1_Const);
    Assign PAssign6314 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_newEnd_0_1);
    Array PThreadedCode6303 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign6304, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6306, (Optr)&t_send1, (Optr)PSend6305, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_slot, (Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)&t_send1, (Optr)PSend6307, (Optr)&t_send_ifTrue_, (Optr)PSend6308, (Optr)PBlock6309, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6312, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend6313, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6314, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_method_return);
    Method PMethod6300 = new_Method_with(PArray6301, PArray6302, empty_Array, PThreadedCode6303, 5, PAssign6304, PSend6308, PSend6313, PAssign6314, VAR_aCollection_0_0);
    
    MethodClosure MC_SMB_writeAll_ = new_MethodClosure((Method)PMethod6300, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_writeAll_, MC_SMB_writeAll_);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend6317 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6318 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend6317);
    Array PThreadedCode6316 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend6317, (Optr)&t_send1, (Optr)PSend6318, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6315 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6316, 2, PSend6318, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod6315, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6320 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6323 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6322 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6323);
    Super PSuper6324 = new_Super(SMB_position_, 1, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode6321 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign6322, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6323, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_super1, (Optr)PSuper6324, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6319 = new_Method_with(PArray6320, empty_Array, empty_Array, PThreadedCode6321, 3, PAssign6322, PSuper6324, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod6319, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_resetToStart() {
    Symbol SMB_resetToStart = new_Symbol(L"resetToStart");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6328 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Assign PAssign6327 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PAssign6328);
    Array PThreadedCode6326 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6327, (Optr)&t_push1, (Optr)PAssign6328, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6325 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6326, 2, PAssign6327, self);
    
    MethodClosure MC_SMB_resetToStart = new_MethodClosure((Method)PMethod6325, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_resetToStart, MC_SMB_resetToStart);
}


static void init_SMB_nextPutAll_() {
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6330 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newEnd_0_1 = new_Variable_named(L"newEnd", 0);
    Array PArray6331 = new_Array_with(1, (Optr)VAR_newEnd_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6334 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend6336 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_class, 0);
    // class. 
    Send PSend6337 = new_Send((Optr)VAR_aCollection_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6338 = new_Send((Optr)PSend6336, SMB__pequals_, 1, (Optr)PSend6337);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper6342 = new_Super(SMB_nextPutAll_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6343 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper6342);
    Array PThreadedCode6341 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_super1, (Optr)PSuper6342, (Optr)&t_send1, (Optr)PSend6343, (Optr)&t_block_return);
    Block PBlock6340 = new_Block_with(empty_Array, empty_Array, PThreadedCode6341, 1, PSend6343);
    // ifFalse:. 
    Send PSend6339 = new_Send((Optr)PSend6338, SMB_ifFalse_, 1, (Optr)PBlock6340);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6346 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend6345 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend6346);
    Assign PAssign6344 = new_Assign((Optr)VAR_newEnd_0_1, (Optr)PSend6345);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend6347 = new_Send((Optr)VAR_newEnd_0_1, SMB__gt_, 1, (Optr)slot_Collection_Stream_WriteStream_writeLimit);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // +. 
    Send PSend6351 = new_Send((Optr)VAR_newEnd_0_1, SMB__plus_, 1, (Optr)int_10_Const);
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    // growTo:. 
    Send PSend6352 = new_Send((Optr)self, SMB_growTo_, 1, (Optr)PSend6351);
    Array PThreadedCode6350 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend6351, (Optr)&t_send1, (Optr)PSend6352, (Optr)&t_block_return);
    Block PBlock6349 = new_Block_with(empty_Array, empty_Array, PThreadedCode6350, 1, PSend6352);
    // ifTrue:. 
    Send PSend6348 = new_Send((Optr)PSend6347, SMB_ifTrue_, 1, (Optr)PBlock6349);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6353 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend6354 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)PSend6353, (Optr)VAR_newEnd_0_1, (Optr)VAR_aCollection_0_0, (Optr)int_1_Const);
    Assign PAssign6355 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_newEnd_0_1);
    Array PThreadedCode6335 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6336, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6337, (Optr)&t_send1, (Optr)PSend6338, (Optr)&t_send_ifFalse_, (Optr)PSend6339, (Optr)PBlock6340, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6344, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6346, (Optr)&t_send1, (Optr)PSend6345, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_slot, (Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)&t_send1, (Optr)PSend6347, (Optr)&t_send_ifTrue_, (Optr)PSend6348, (Optr)PBlock6349, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6353, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend6354, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6355, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6333 = new_Block_with(PArray6334, empty_Array, PThreadedCode6335, 6, PSend6339, PAssign6344, PSend6348, PSend6354, PAssign6355, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6356 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6333);
    Array PThreadedCode6332 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6333, (Optr)&t_send1, (Optr)PSend6356, (Optr)&t_method_return);
    Method PMethod6329 = new_Method_with(PArray6330, PArray6331, empty_Array, PThreadedCode6332, 1, PSend6356);
    
    MethodClosure MC_SMB_nextPutAll_ = new_MethodClosure((Method)PMethod6329, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_nextPutAll_, MC_SMB_nextPutAll_);
}


static void init_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6358 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Super PSuper6360 = new_Super(SMB_on_, 1, (Optr)VAR_aCollection_0_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6361 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)int_0_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6363 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Assign PAssign6362 = new_Assign((Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)PSend6363);
    Array PThreadedCode6359 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_super1, (Optr)PSuper6360, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6361, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6362, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6363, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6357 = new_Method_with(PArray6358, empty_Array, empty_Array, PThreadedCode6359, 4, PSuper6360, PAssign6361, PAssign6362, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod6357, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_growTo_() {
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6365 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_oldSize_0_1 = new_Variable_named(L"oldSize", 0);
    Variable VAR_grownCollection_0_2 = new_Variable_named(L"grownCollection", 0);
    Variable VAR_newSize_0_3 = new_Variable_named(L"newSize", 0);
    Array PArray6366 = new_Array_with(3, (Optr)VAR_oldSize_0_1, (Optr)VAR_grownCollection_0_2, (Optr)VAR_newSize_0_3);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6369 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign6368 = new_Assign((Optr)VAR_oldSize_0_1, (Optr)PSend6369);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // //. 
    Send PSend6373 = new_Send((Optr)VAR_oldSize_0_1, SMB__quotient_, 1, (Optr)int_4_Const);
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // max:. 
    Send PSend6372 = new_Send((Optr)PSend6373, SMB_max_, 1, (Optr)int_20_Const);
    // +. 
    Send PSend6371 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)PSend6372);
    Assign PAssign6370 = new_Assign((Optr)VAR_newSize_0_3, (Optr)PSend6371);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend6376 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend6375 = new_Send((Optr)PSend6376, SMB_new_, 1, (Optr)VAR_newSize_0_3);
    Assign PAssign6374 = new_Assign((Optr)VAR_grownCollection_0_2, (Optr)PSend6375);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend6378 = new_Send((Optr)VAR_grownCollection_0_2, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_oldSize_0_1, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)int_1_Const);
    Assign PAssign6377 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)PSend6378);
    // size. 
    Send PSend6380 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign6379 = new_Assign((Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)PSend6380);
    Array PThreadedCode6367 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push1, (Optr)PAssign6368, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6369, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6370, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_variable, (Optr)VAR_oldSize_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend6373, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend6372, (Optr)&t_send1, (Optr)PSend6371, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6374, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6376, (Optr)&t_push_variable, (Optr)VAR_newSize_0_3, (Optr)&t_send1, (Optr)PSend6375, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6377, (Optr)&t_push_variable, (Optr)VAR_grownCollection_0_2, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_oldSize_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend6378, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6379, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6380, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6364 = new_Method_with(PArray6365, PArray6366, empty_Array, PThreadedCode6367, 6, PAssign6368, PAssign6370, PAssign6374, PAssign6377, PAssign6379, self);
    
    MethodClosure MC_SMB_growTo_ = new_MethodClosure((Method)PMethod6364, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_growTo_, MC_SMB_growTo_);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6384 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6383 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6384);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend6385 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)slot_Collections_Streams_PositionableStream_position);
    Array PThreadedCode6382 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign6383, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6384, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend6385, (Optr)&t_method_return);
    Method PMethod6381 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6382, 2, PAssign6383, PSend6385);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod6381, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend6388 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6389 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend6388);
    Array PThreadedCode6387 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend6388, (Optr)&t_send1, (Optr)PSend6389, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6386 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6387, 2, PSend6389, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod6386, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_tab, MC_SMB_tab);
}


static void init_class_SMB_with_() {
    Symbol SMB_with_ = new_Symbol(L"with:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6391 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend6393 = new_Send((Optr)self, SMB_basicNew, 0);
    // with:. 
    Send PSend6394 = new_Send((Optr)PSend6393, SMB_with_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode6392 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6393, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend6394, (Optr)&t_method_return);
    Method PMethod6390 = new_Method_with(PArray6391, empty_Array, empty_Array, PThreadedCode6392, 1, PSend6394);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod6390, HEADER(Collection_Stream_WriteStream_Class));
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