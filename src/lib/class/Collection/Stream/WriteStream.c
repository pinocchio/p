#include <lib/class/Collection/Stream/WriteStream.h>


Optr layout_Collection_Stream_WriteStream_Class_class;
Optr slot_Collection_Stream_WriteStream_writeLimit;
Optr layout_Collection_Stream_WriteStream;


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend6261 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6262 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend6261);
    Array PThreadedCode6260 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend6261, (Optr)&t_send1, (Optr)PSend6262, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6259 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6260, 2, PSend6262, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod6259, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6266 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6265 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6266);
    Array PThreadedCode6264 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign6265, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6266, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod6263 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6264, 1, PAssign6265);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod6263, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6268 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend6270 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt__equals_, 1, (Optr)slot_Collection_Stream_WriteStream_writeLimit);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // +. 
    Send PSend6274 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_10_Const);
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    // growTo:. 
    Send PSend6275 = new_Send((Optr)self, SMB_growTo_, 1, (Optr)PSend6274);
    Array PThreadedCode6273 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend6274, (Optr)&t_send1, (Optr)PSend6275, (Optr)&t_block_return);
    Block PBlock6272 = new_Block_with(empty_Array, empty_Array, PThreadedCode6273, 1, PSend6275);
    // ifTrue:. 
    Send PSend6271 = new_Send((Optr)PSend6270, SMB_ifTrue_, 1, (Optr)PBlock6272);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6277 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign6276 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6277);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6278 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_put_, 2, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anObject_0_0);
    Array PThreadedCode6269 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)&t_send1, (Optr)PSend6270, (Optr)&t_send_ifTrue_, (Optr)PSend6271, (Optr)PBlock6272, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6276, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6277, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send2, (Optr)PSend6278, (Optr)&t_method_return);
    Method PMethod6267 = new_Method_with(PArray6268, empty_Array, empty_Array, PThreadedCode6269, 3, PSend6271, PAssign6276, PSend6278);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod6267, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_shouldNotImplement = new_Symbol(L"shouldNotImplement");
    // shouldNotImplement. 
    Send PSend6281 = new_Send((Optr)self, SMB_shouldNotImplement, 0);
    Array PThreadedCode6280 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6281, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6279 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6280, 2, PSend6281, self);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6279, Collection_Stream_WriteStream_Class);
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
    Array PArray6283 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Super PSuper6285 = new_Super(SMB_on_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6289 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Assign PAssign6288 = new_Assign((Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)PSend6289);
    Assign PAssign6287 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PAssign6288);
    Assign PAssign6286 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PAssign6287);
    Array PThreadedCode6284 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_super1, (Optr)PSuper6285, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6286, (Optr)&t_push1, (Optr)PAssign6287, (Optr)&t_push1, (Optr)PAssign6288, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6289, (Optr)&t_assign, (Optr)&t_assign, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6282 = new_Method_with(PArray6283, empty_Array, empty_Array, PThreadedCode6284, 3, PSuper6285, PAssign6286, self);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod6282, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_with_, MC_SMB_with_);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6293 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6292 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6293);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6294 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Array PThreadedCode6291 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign6292, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6293, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6294, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6290 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6291, 3, PAssign6292, PAssign6294, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod6290, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_writeAll_() {
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6296 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newEnd_0_1 = new_Variable_named(L"newEnd", 0);
    Array PArray6297 = new_Array_with(1, (Optr)VAR_newEnd_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6301 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend6300 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend6301);
    Assign PAssign6299 = new_Assign((Optr)VAR_newEnd_0_1, (Optr)PSend6300);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend6302 = new_Send((Optr)VAR_newEnd_0_1, SMB__gt_, 1, (Optr)slot_Collection_Stream_WriteStream_writeLimit);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    // growTo:. 
    Send PSend6306 = new_Send((Optr)self, SMB_growTo_, 1, (Optr)VAR_newEnd_0_1);
    Array PThreadedCode6305 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_send1, (Optr)PSend6306, (Optr)&t_block_return);
    Block PBlock6304 = new_Block_with(empty_Array, empty_Array, PThreadedCode6305, 1, PSend6306);
    // ifTrue:. 
    Send PSend6303 = new_Send((Optr)PSend6302, SMB_ifTrue_, 1, (Optr)PBlock6304);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6307 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend6308 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)PSend6307, (Optr)VAR_newEnd_0_1, (Optr)VAR_aCollection_0_0, (Optr)int_1_Const);
    Assign PAssign6309 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_newEnd_0_1);
    Array PThreadedCode6298 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign6299, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6301, (Optr)&t_send1, (Optr)PSend6300, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_slot, (Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)&t_send1, (Optr)PSend6302, (Optr)&t_send_ifTrue_, (Optr)PSend6303, (Optr)PBlock6304, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6307, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend6308, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6309, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_method_return);
    Method PMethod6295 = new_Method_with(PArray6296, PArray6297, empty_Array, PThreadedCode6298, 5, PAssign6299, PSend6303, PSend6308, PAssign6309, VAR_aCollection_0_0);
    
    MethodClosure MC_SMB_writeAll_ = new_MethodClosure((Method)PMethod6295, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_writeAll_, MC_SMB_writeAll_);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend6312 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6313 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend6312);
    Array PThreadedCode6311 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend6312, (Optr)&t_send1, (Optr)PSend6313, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6310 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6311, 2, PSend6313, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod6310, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6315 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6318 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6317 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6318);
    Super PSuper6319 = new_Super(SMB_position_, 1, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode6316 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign6317, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6318, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_super1, (Optr)PSuper6319, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6314 = new_Method_with(PArray6315, empty_Array, empty_Array, PThreadedCode6316, 3, PAssign6317, PSuper6319, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod6314, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_resetToStart() {
    Symbol SMB_resetToStart = new_Symbol(L"resetToStart");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6323 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Assign PAssign6322 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PAssign6323);
    Array PThreadedCode6321 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign6322, (Optr)&t_push1, (Optr)PAssign6323, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6320 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6321, 2, PAssign6322, self);
    
    MethodClosure MC_SMB_resetToStart = new_MethodClosure((Method)PMethod6320, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_resetToStart, MC_SMB_resetToStart);
}


static void init_SMB_nextPutAll_() {
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6325 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newEnd_0_1 = new_Variable_named(L"newEnd", 0);
    Array PArray6326 = new_Array_with(1, (Optr)VAR_newEnd_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6329 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend6331 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_class, 0);
    // class. 
    Send PSend6332 = new_Send((Optr)VAR_aCollection_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend6333 = new_Send((Optr)PSend6331, SMB__pequals_, 1, (Optr)PSend6332);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper6337 = new_Super(SMB_nextPutAll_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6338 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper6337);
    Array PThreadedCode6336 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_super1, (Optr)PSuper6337, (Optr)&t_send1, (Optr)PSend6338, (Optr)&t_block_return);
    Block PBlock6335 = new_Block_with(empty_Array, empty_Array, PThreadedCode6336, 1, PSend6338);
    // ifFalse:. 
    Send PSend6334 = new_Send((Optr)PSend6333, SMB_ifFalse_, 1, (Optr)PBlock6335);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6341 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // +. 
    Send PSend6340 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)PSend6341);
    Assign PAssign6339 = new_Assign((Optr)VAR_newEnd_0_1, (Optr)PSend6340);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend6342 = new_Send((Optr)VAR_newEnd_0_1, SMB__gt_, 1, (Optr)slot_Collection_Stream_WriteStream_writeLimit);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // +. 
    Send PSend6346 = new_Send((Optr)VAR_newEnd_0_1, SMB__plus_, 1, (Optr)int_10_Const);
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    // growTo:. 
    Send PSend6347 = new_Send((Optr)self, SMB_growTo_, 1, (Optr)PSend6346);
    Array PThreadedCode6345 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend6346, (Optr)&t_send1, (Optr)PSend6347, (Optr)&t_block_return);
    Block PBlock6344 = new_Block_with(empty_Array, empty_Array, PThreadedCode6345, 1, PSend6347);
    // ifTrue:. 
    Send PSend6343 = new_Send((Optr)PSend6342, SMB_ifTrue_, 1, (Optr)PBlock6344);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend6348 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend6349 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)PSend6348, (Optr)VAR_newEnd_0_1, (Optr)VAR_aCollection_0_0, (Optr)int_1_Const);
    Assign PAssign6350 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_newEnd_0_1);
    Array PThreadedCode6330 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6331, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6332, (Optr)&t_send1, (Optr)PSend6333, (Optr)&t_send_ifFalse_, (Optr)PSend6334, (Optr)PBlock6335, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6339, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6341, (Optr)&t_send1, (Optr)PSend6340, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_slot, (Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)&t_send1, (Optr)PSend6342, (Optr)&t_send_ifTrue_, (Optr)PSend6343, (Optr)PBlock6344, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6348, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend6349, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6350, (Optr)&t_push_variable, (Optr)VAR_newEnd_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock6328 = new_Block_with(PArray6329, empty_Array, PThreadedCode6330, 6, PSend6334, PAssign6339, PSend6343, PSend6349, PAssign6350, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6351 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6328);
    Array PThreadedCode6327 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6328, (Optr)&t_send1, (Optr)PSend6351, (Optr)&t_method_return);
    Method PMethod6324 = new_Method_with(PArray6325, PArray6326, empty_Array, PThreadedCode6327, 1, PSend6351);
    
    MethodClosure MC_SMB_nextPutAll_ = new_MethodClosure((Method)PMethod6324, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_nextPutAll_, MC_SMB_nextPutAll_);
}


static void init_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6353 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Super PSuper6355 = new_Super(SMB_on_, 1, (Optr)VAR_aCollection_0_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6356 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)int_0_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6358 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Assign PAssign6357 = new_Assign((Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)PSend6358);
    Array PThreadedCode6354 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_super1, (Optr)PSuper6355, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6356, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6357, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6358, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6352 = new_Method_with(PArray6353, empty_Array, empty_Array, PThreadedCode6354, 4, PSuper6355, PAssign6356, PAssign6357, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod6352, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_growTo_() {
    Symbol SMB_growTo_ = new_Symbol(L"growTo:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6360 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR_oldSize_0_1 = new_Variable_named(L"oldSize", 0);
    Variable VAR_grownCollection_0_2 = new_Variable_named(L"grownCollection", 0);
    Variable VAR_newSize_0_3 = new_Variable_named(L"newSize", 0);
    Array PArray6361 = new_Array_with(3, (Optr)VAR_oldSize_0_1, (Optr)VAR_grownCollection_0_2, (Optr)VAR_newSize_0_3);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6364 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign6363 = new_Assign((Optr)VAR_oldSize_0_1, (Optr)PSend6364);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // //. 
    Send PSend6368 = new_Send((Optr)VAR_oldSize_0_1, SMB__quotient_, 1, (Optr)int_4_Const);
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_20 = new_SmallInt(20);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // max:. 
    Send PSend6367 = new_Send((Optr)PSend6368, SMB_max_, 1, (Optr)int_20_Const);
    // +. 
    Send PSend6366 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)PSend6367);
    Assign PAssign6365 = new_Assign((Optr)VAR_newSize_0_3, (Optr)PSend6366);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend6371 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend6370 = new_Send((Optr)PSend6371, SMB_new_, 1, (Optr)VAR_newSize_0_3);
    Assign PAssign6369 = new_Assign((Optr)VAR_grownCollection_0_2, (Optr)PSend6370);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend6373 = new_Send((Optr)VAR_grownCollection_0_2, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_oldSize_0_1, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)int_1_Const);
    Assign PAssign6372 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)PSend6373);
    // size. 
    Send PSend6375 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_size, 0);
    Assign PAssign6374 = new_Assign((Optr)slot_Collection_Stream_WriteStream_writeLimit, (Optr)PSend6375);
    Array PThreadedCode6362 = instantiate_Array_with(ThreadedCode_Class, 0, 61, (Optr)&t_push1, (Optr)PAssign6363, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6364, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6365, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_variable, (Optr)VAR_oldSize_0_1, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend6368, (Optr)&t_push1, (Optr)int_20, (Optr)&t_send1, (Optr)PSend6367, (Optr)&t_send1, (Optr)PSend6366, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6369, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6371, (Optr)&t_push_variable, (Optr)VAR_newSize_0_3, (Optr)&t_send1, (Optr)PSend6370, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6372, (Optr)&t_push_variable, (Optr)VAR_grownCollection_0_2, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_oldSize_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend6373, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6374, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_send0, (Optr)PSend6375, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6359 = new_Method_with(PArray6360, PArray6361, empty_Array, PThreadedCode6362, 6, PAssign6363, PAssign6365, PAssign6369, PAssign6372, PAssign6374, self);
    
    MethodClosure MC_SMB_growTo_ = new_MethodClosure((Method)PMethod6359, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_growTo_, MC_SMB_growTo_);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend6379 = new_Send((Optr)slot_Collections_Streams_PositionableStream_readLimit, SMB_max_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6378 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6379);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend6380 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)slot_Collections_Streams_PositionableStream_position);
    Array PThreadedCode6377 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign6378, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6379, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send2, (Optr)PSend6380, (Optr)&t_method_return);
    Method PMethod6376 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6377, 2, PAssign6378, PSend6380);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod6376, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend6383 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend6384 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend6383);
    Array PThreadedCode6382 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend6383, (Optr)&t_send1, (Optr)PSend6384, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6381 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6382, 2, PSend6384, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod6381, Collection_Stream_WriteStream_Class);
    store_method(Collection_Stream_WriteStream_Class, SMB_tab, MC_SMB_tab);
}


static void init_class_SMB_with_() {
    Symbol SMB_with_ = new_Symbol(L"with:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6386 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend6388 = new_Send((Optr)self, SMB_basicNew, 0);
    // with:. 
    Send PSend6389 = new_Send((Optr)PSend6388, SMB_with_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode6387 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6388, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend6389, (Optr)&t_method_return);
    Method PMethod6385 = new_Method_with(PArray6386, empty_Array, empty_Array, PThreadedCode6387, 1, PSend6389);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod6385, HEADER(Collection_Stream_WriteStream_Class));
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