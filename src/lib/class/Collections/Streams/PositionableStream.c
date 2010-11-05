#include <lib/class/Collections/Streams/PositionableStream.h>


Optr layout_Collections_Streams_PositionableStream_Class_class;
Optr slot_Collections_Streams_PositionableStream_collection;
Optr slot_Collections_Streams_PositionableStream_position;
Optr slot_Collections_Streams_PositionableStream_readLimit;
Optr layout_Collections_Streams_PositionableStream;


static void init_SMB_on_() {
    /*
    on: aCollection 
// 	"Answer an instance of me, streaming over the elements of aCollection."
// 
// 	^self basicNew on: aCollection
    */
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6097 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign6099 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)VAR_aCollection_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6101 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Assign PAssign6100 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6101);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6102 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend6103 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode6098 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign6099, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6100, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6101, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6102, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6103, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6096 = new_Method_with(PArray6097, empty_Array, empty_Array, PThreadedCode6098, 5, PAssign6099, PAssign6100, PAssign6102, PSend6103, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod6096, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6105 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >=. 
    Send PSend6107 = new_Send((Optr)VAR_anInteger_0_0, SMB__gt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend6110 = new_Send((Optr)VAR_anInteger_0_0, SMB__lt__equals_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6109 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6110, (Optr)&t_block_return);
    Block PBlock6108 = new_Block_with(empty_Array, empty_Array, PThreadedCode6109, 1, PSend6110);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend6111 = new_Send((Optr)PSend6107, SMB_and_, 1, (Optr)PBlock6108);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign6115 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode6114 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6115, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6113 = new_Block_with(empty_Array, empty_Array, PThreadedCode6114, 1, PAssign6115);
    Symbol SMB_positionError = new_Symbol(L"positionError");
    // positionError. 
    Send PSend6118 = new_Send((Optr)self, SMB_positionError, 0);
    Array PThreadedCode6117 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6118, (Optr)&t_block_return);
    Block PBlock6116 = new_Block_with(empty_Array, empty_Array, PThreadedCode6117, 1, PSend6118);
    // ifTrue:ifFalse:. 
    Send PSend6112 = new_Send((Optr)PSend6111, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6113, (Optr)PBlock6116);
    Array PThreadedCode6106 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6107, (Optr)&t_push_closure, (Optr)PBlock6108, (Optr)&t_send1, (Optr)PSend6111, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6112, (Optr)PBlock6113, (Optr)PBlock6116, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6104 = new_Method_with(PArray6105, empty_Array, empty_Array, PThreadedCode6106, 2, PSend6112, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod6104, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode6120 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_method_return);
    Method PMethod6119 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6120, 1, slot_Collections_Streams_PositionableStream_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod6119, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_positionError() {
    Symbol SMB_positionError = new_Symbol(L"positionError");
    String string_6123 = new_String(L"Attempt to set the position of a PositionableStream out of bounds");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_6123_Const = new_Constant((Optr)string_6123);
    // error:. 
    Send PSend6124 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_6123_Const);
    Array PThreadedCode6122 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_6123, (Optr)&t_send1, (Optr)PSend6124, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6121 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6122, 2, PSend6124, self);
    
    MethodClosure MC_SMB_positionError = new_MethodClosure((Method)PMethod6121, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_positionError, MC_SMB_positionError);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend6127 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt__equals_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6126 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6127, (Optr)&t_method_return);
    Method PMethod6125 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6126, 1, PSend6127);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod6125, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_back() {
    Symbol SMB_back = new_Symbol(L"back");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray6129 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend6131 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend6134 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6133 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6134, (Optr)&t_block_return);
    Block PBlock6132 = new_Block_with(empty_Array, empty_Array, PThreadedCode6133, 1, PSend6134);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend6135 = new_Send((Optr)PSend6131, SMB_or_, 1, (Optr)PBlock6132);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_positionError = new_Symbol(L"positionError");
    // positionError. 
    Send PSend6139 = new_Send((Optr)self, SMB_positionError, 0);
    Array PThreadedCode6138 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6139, (Optr)&t_block_return);
    Block PBlock6137 = new_Block_with(empty_Array, empty_Array, PThreadedCode6138, 1, PSend6139);
    // ifTrue:. 
    Send PSend6136 = new_Send((Optr)PSend6135, SMB_ifTrue_, 1, (Optr)PBlock6137);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6141 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6140 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend6141);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6143 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign6142 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6143);
    Array PThreadedCode6130 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6131, (Optr)&t_push_closure, (Optr)PBlock6132, (Optr)&t_send1, (Optr)PSend6135, (Optr)&t_send_ifTrue_, (Optr)PSend6136, (Optr)PBlock6137, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6140, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6141, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6142, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6143, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod6128 = new_Method_with(empty_Array, PArray6129, empty_Array, PThreadedCode6130, 4, PSend6136, PAssign6140, PAssign6142, VAR_result_0_0);
    
    MethodClosure MC_SMB_back = new_MethodClosure((Method)PMethod6128, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_back, MC_SMB_back);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Variable VAR_nextObject_0_0 = new_Variable_named(L"nextObject", 0);
    Array PArray6145 = new_Array_with(1, (Optr)VAR_nextObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6148 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend6150 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6154 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode6153 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend6154, (Optr)&t_block_return);
    Block PBlock6152 = new_Block_with(empty_Array, empty_Array, PThreadedCode6153, 1, PSend6154);
    // ifTrue:. 
    Send PSend6151 = new_Send((Optr)PSend6150, SMB_ifTrue_, 1, (Optr)PBlock6152);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend6156 = new_Send((Optr)self, SMB_next, 0);
    Assign PAssign6155 = new_Assign((Optr)VAR_nextObject_0_0, (Optr)PSend6156);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6158 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign6157 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6158);
    Array PThreadedCode6149 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6150, (Optr)&t_send_ifTrue_, (Optr)PSend6151, (Optr)PBlock6152, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6155, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6156, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6157, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6158, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextObject_0_0, (Optr)&t_method_return);
    Block PBlock6147 = new_Block_with(PArray6148, empty_Array, PThreadedCode6149, 4, PSend6151, PAssign6155, PAssign6157, VAR_nextObject_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6159 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6147);
    Array PThreadedCode6146 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6147, (Optr)&t_send1, (Optr)PSend6159, (Optr)&t_method_return);
    Method PMethod6144 = new_Method_with(empty_Array, PArray6145, empty_Array, PThreadedCode6146, 1, PSend6159);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod6144, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend6162 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6161 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send2, (Optr)PSend6162, (Optr)&t_method_return);
    Method PMethod6160 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6161, 1, PSend6162);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod6160, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6165 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Array PThreadedCode6164 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6165, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6163 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6164, 2, PAssign6165, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod6163, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6167 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend6169 = new_Send((Optr)self, SMB_basicNew, 0);
    // on:. 
    Send PSend6170 = new_Send((Optr)PSend6169, SMB_on_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode6168 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6169, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend6170, (Optr)&t_method_return);
    Method PMethod6166 = new_Method_with(PArray6167, empty_Array, empty_Array, PThreadedCode6168, 1, PSend6170);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod6166, HEADER(Collections_Streams_PositionableStream_Class));
    store_method(HEADER(Collections_Streams_PositionableStream_Class), SMB_on_, MC_SMB_on_);
}

void init_Collections_Streams_PositionableStream_layout() {
    layout_Collections_Streams_PositionableStream_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collections_Streams_PositionableStream_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collections_Streams_PositionableStream_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collections_Streams_PositionableStream_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collections_Streams_PositionableStream_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collections_Streams_PositionableStream_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_PositionableStream = new_Symbol(L"PositionableStream");
    slot_Collections_Streams_PositionableStream_collection = (Optr)new_Slot(0, L"collection");
    slot_Collections_Streams_PositionableStream_position = (Optr)new_Slot(1, L"position");
    slot_Collections_Streams_PositionableStream_readLimit = (Optr)new_Slot(2, L"readLimit");
    layout_Collections_Streams_PositionableStream = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Collections_Streams_PositionableStream)->values[0] = slot_Collections_Streams_PositionableStream_collection; // collection 
    ((Array)layout_Collections_Streams_PositionableStream)->values[1] = slot_Collections_Streams_PositionableStream_position; // position 
    ((Array)layout_Collections_Streams_PositionableStream)->values[2] = slot_Collections_Streams_PositionableStream_readLimit; // readLimit 
    Collections_Streams_PositionableStream_Class = (Class)new_Class(Collections_Streams_Stream_Class, layout_Collections_Streams_PositionableStream_Class_class);
    Collections_Streams_PositionableStream_Class->layout = layout_Collections_Streams_PositionableStream;
    Collections_Streams_PositionableStream_Class->name = SMB_PositionableStream;
    
}

void init_Collections_Streams_PositionableStream_methods() {
    init_SMB_on_();
    init_SMB_position_();
    init_SMB_position();
    init_SMB_positionError();
    init_SMB_atEnd();
    init_SMB_back();
    init_SMB_peek();
    init_SMB_contents();
    init_SMB_reset();
    init_class_SMB_on_();
    
}