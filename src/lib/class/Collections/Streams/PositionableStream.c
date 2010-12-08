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
    Array PArray6099 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign6101 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)VAR_aCollection_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6103 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Assign PAssign6102 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6103);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6104 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend6105 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode6100 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign6101, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6102, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6103, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6104, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6105, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6098 = new_Method_with(PArray6099, empty_Array, empty_Array, PThreadedCode6100, 5, PAssign6101, PAssign6102, PAssign6104, PSend6105, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod6098, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6107 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >=. 
    Send PSend6109 = new_Send((Optr)VAR_anInteger_0_0, SMB__gt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend6112 = new_Send((Optr)VAR_anInteger_0_0, SMB__lt__equals_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6111 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6112, (Optr)&t_block_return);
    Block PBlock6110 = new_Block_with(empty_Array, empty_Array, PThreadedCode6111, 1, PSend6112);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend6113 = new_Send((Optr)PSend6109, SMB_and_, 1, (Optr)PBlock6110);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign6117 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode6116 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6117, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6115 = new_Block_with(empty_Array, empty_Array, PThreadedCode6116, 1, PAssign6117);
    Symbol SMB_positionError = new_Symbol(L"positionError");
    // positionError. 
    Send PSend6120 = new_Send((Optr)self, SMB_positionError, 0);
    Array PThreadedCode6119 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6120, (Optr)&t_block_return);
    Block PBlock6118 = new_Block_with(empty_Array, empty_Array, PThreadedCode6119, 1, PSend6120);
    // ifTrue:ifFalse:. 
    Send PSend6114 = new_Send((Optr)PSend6113, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6115, (Optr)PBlock6118);
    Array PThreadedCode6108 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6109, (Optr)&t_push_closure, (Optr)PBlock6110, (Optr)&t_send1, (Optr)PSend6113, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6114, (Optr)PBlock6115, (Optr)PBlock6118, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6106 = new_Method_with(PArray6107, empty_Array, empty_Array, PThreadedCode6108, 2, PSend6114, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod6106, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode6122 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_method_return);
    Method PMethod6121 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6122, 1, slot_Collections_Streams_PositionableStream_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod6121, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_positionError() {
    Symbol SMB_positionError = new_Symbol(L"positionError");
    String string_6125 = new_String(L"Attempt to set the position of a PositionableStream out of bounds");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_6125_Const = new_Constant((Optr)string_6125);
    // error:. 
    Send PSend6126 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_6125_Const);
    Array PThreadedCode6124 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_6125, (Optr)&t_send1, (Optr)PSend6126, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6123 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6124, 2, PSend6126, self);
    
    MethodClosure MC_SMB_positionError = new_MethodClosure((Method)PMethod6123, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_positionError, MC_SMB_positionError);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend6129 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt__equals_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6128 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6129, (Optr)&t_method_return);
    Method PMethod6127 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6128, 1, PSend6129);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod6127, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_back() {
    Symbol SMB_back = new_Symbol(L"back");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray6131 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend6133 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend6136 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6135 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6136, (Optr)&t_block_return);
    Block PBlock6134 = new_Block_with(empty_Array, empty_Array, PThreadedCode6135, 1, PSend6136);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend6137 = new_Send((Optr)PSend6133, SMB_or_, 1, (Optr)PBlock6134);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_positionError = new_Symbol(L"positionError");
    // positionError. 
    Send PSend6141 = new_Send((Optr)self, SMB_positionError, 0);
    Array PThreadedCode6140 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6141, (Optr)&t_block_return);
    Block PBlock6139 = new_Block_with(empty_Array, empty_Array, PThreadedCode6140, 1, PSend6141);
    // ifTrue:. 
    Send PSend6138 = new_Send((Optr)PSend6137, SMB_ifTrue_, 1, (Optr)PBlock6139);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6143 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6142 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend6143);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6145 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign6144 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6145);
    Array PThreadedCode6132 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6133, (Optr)&t_push_closure, (Optr)PBlock6134, (Optr)&t_send1, (Optr)PSend6137, (Optr)&t_send_ifTrue_, (Optr)PSend6138, (Optr)PBlock6139, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6142, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6143, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6144, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6145, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod6130 = new_Method_with(empty_Array, PArray6131, empty_Array, PThreadedCode6132, 4, PSend6138, PAssign6142, PAssign6144, VAR_result_0_0);
    
    MethodClosure MC_SMB_back = new_MethodClosure((Method)PMethod6130, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_back, MC_SMB_back);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Variable VAR_nextObject_0_0 = new_Variable_named(L"nextObject", 0);
    Array PArray6147 = new_Array_with(1, (Optr)VAR_nextObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6150 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend6152 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6156 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode6155 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend6156, (Optr)&t_block_return);
    Block PBlock6154 = new_Block_with(empty_Array, empty_Array, PThreadedCode6155, 1, PSend6156);
    // ifTrue:. 
    Send PSend6153 = new_Send((Optr)PSend6152, SMB_ifTrue_, 1, (Optr)PBlock6154);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend6158 = new_Send((Optr)self, SMB_next, 0);
    Assign PAssign6157 = new_Assign((Optr)VAR_nextObject_0_0, (Optr)PSend6158);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6160 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign6159 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6160);
    Array PThreadedCode6151 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6152, (Optr)&t_send_ifTrue_, (Optr)PSend6153, (Optr)PBlock6154, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6157, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6158, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6159, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6160, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextObject_0_0, (Optr)&t_method_return);
    Block PBlock6149 = new_Block_with(PArray6150, empty_Array, PThreadedCode6151, 4, PSend6153, PAssign6157, PAssign6159, VAR_nextObject_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6161 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6149);
    Array PThreadedCode6148 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6149, (Optr)&t_send1, (Optr)PSend6161, (Optr)&t_method_return);
    Method PMethod6146 = new_Method_with(empty_Array, PArray6147, empty_Array, PThreadedCode6148, 1, PSend6161);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod6146, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend6164 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6163 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send2, (Optr)PSend6164, (Optr)&t_method_return);
    Method PMethod6162 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6163, 1, PSend6164);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod6162, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6167 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Array PThreadedCode6166 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6167, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6165 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6166, 2, PAssign6167, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod6165, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6169 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend6171 = new_Send((Optr)self, SMB_basicNew, 0);
    // on:. 
    Send PSend6172 = new_Send((Optr)PSend6171, SMB_on_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode6170 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6171, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend6172, (Optr)&t_method_return);
    Method PMethod6168 = new_Method_with(PArray6169, empty_Array, empty_Array, PThreadedCode6170, 1, PSend6172);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod6168, HEADER(Collections_Streams_PositionableStream_Class));
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