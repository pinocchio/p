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
    Array PArray6098 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign6100 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)VAR_aCollection_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6102 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Assign PAssign6101 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6102);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6103 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend6104 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode6099 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign6100, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6101, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6102, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6103, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6104, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6097 = new_Method_with(PArray6098, empty_Array, empty_Array, PThreadedCode6099, 5, PAssign6100, PAssign6101, PAssign6103, PSend6104, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod6097, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6106 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >=. 
    Send PSend6108 = new_Send((Optr)VAR_anInteger_0_0, SMB__gt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend6111 = new_Send((Optr)VAR_anInteger_0_0, SMB__lt__equals_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6110 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6111, (Optr)&t_block_return);
    Block PBlock6109 = new_Block_with(empty_Array, empty_Array, PThreadedCode6110, 1, PSend6111);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend6112 = new_Send((Optr)PSend6108, SMB_and_, 1, (Optr)PBlock6109);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign6116 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode6115 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6116, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6114 = new_Block_with(empty_Array, empty_Array, PThreadedCode6115, 1, PAssign6116);
    Symbol SMB_positionError = new_Symbol(L"positionError");
    // positionError. 
    Send PSend6119 = new_Send((Optr)self, SMB_positionError, 0);
    Array PThreadedCode6118 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6119, (Optr)&t_block_return);
    Block PBlock6117 = new_Block_with(empty_Array, empty_Array, PThreadedCode6118, 1, PSend6119);
    // ifTrue:ifFalse:. 
    Send PSend6113 = new_Send((Optr)PSend6112, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6114, (Optr)PBlock6117);
    Array PThreadedCode6107 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6108, (Optr)&t_push_closure, (Optr)PBlock6109, (Optr)&t_send1, (Optr)PSend6112, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6113, (Optr)PBlock6114, (Optr)PBlock6117, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6105 = new_Method_with(PArray6106, empty_Array, empty_Array, PThreadedCode6107, 2, PSend6113, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod6105, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode6121 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_method_return);
    Method PMethod6120 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6121, 1, slot_Collections_Streams_PositionableStream_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod6120, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_positionError() {
    Symbol SMB_positionError = new_Symbol(L"positionError");
    String string_6124 = new_String(L"Attempt to set the position of a PositionableStream out of bounds");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_6124_Const = new_Constant((Optr)string_6124);
    // error:. 
    Send PSend6125 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_6124_Const);
    Array PThreadedCode6123 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_6124, (Optr)&t_send1, (Optr)PSend6125, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6122 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6123, 2, PSend6125, self);
    
    MethodClosure MC_SMB_positionError = new_MethodClosure((Method)PMethod6122, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_positionError, MC_SMB_positionError);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend6128 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt__equals_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6127 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6128, (Optr)&t_method_return);
    Method PMethod6126 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6127, 1, PSend6128);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod6126, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_back() {
    Symbol SMB_back = new_Symbol(L"back");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray6130 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend6132 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend6135 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6134 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6135, (Optr)&t_block_return);
    Block PBlock6133 = new_Block_with(empty_Array, empty_Array, PThreadedCode6134, 1, PSend6135);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend6136 = new_Send((Optr)PSend6132, SMB_or_, 1, (Optr)PBlock6133);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_positionError = new_Symbol(L"positionError");
    // positionError. 
    Send PSend6140 = new_Send((Optr)self, SMB_positionError, 0);
    Array PThreadedCode6139 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6140, (Optr)&t_block_return);
    Block PBlock6138 = new_Block_with(empty_Array, empty_Array, PThreadedCode6139, 1, PSend6140);
    // ifTrue:. 
    Send PSend6137 = new_Send((Optr)PSend6136, SMB_ifTrue_, 1, (Optr)PBlock6138);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6142 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6141 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend6142);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6144 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign6143 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6144);
    Array PThreadedCode6131 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6132, (Optr)&t_push_closure, (Optr)PBlock6133, (Optr)&t_send1, (Optr)PSend6136, (Optr)&t_send_ifTrue_, (Optr)PSend6137, (Optr)PBlock6138, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6141, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6142, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6143, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6144, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod6129 = new_Method_with(empty_Array, PArray6130, empty_Array, PThreadedCode6131, 4, PSend6137, PAssign6141, PAssign6143, VAR_result_0_0);
    
    MethodClosure MC_SMB_back = new_MethodClosure((Method)PMethod6129, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_back, MC_SMB_back);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Variable VAR_nextObject_0_0 = new_Variable_named(L"nextObject", 0);
    Array PArray6146 = new_Array_with(1, (Optr)VAR_nextObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6149 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend6151 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6155 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode6154 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend6155, (Optr)&t_block_return);
    Block PBlock6153 = new_Block_with(empty_Array, empty_Array, PThreadedCode6154, 1, PSend6155);
    // ifTrue:. 
    Send PSend6152 = new_Send((Optr)PSend6151, SMB_ifTrue_, 1, (Optr)PBlock6153);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend6157 = new_Send((Optr)self, SMB_next, 0);
    Assign PAssign6156 = new_Assign((Optr)VAR_nextObject_0_0, (Optr)PSend6157);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6159 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign6158 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6159);
    Array PThreadedCode6150 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6151, (Optr)&t_send_ifTrue_, (Optr)PSend6152, (Optr)PBlock6153, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6156, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6157, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6158, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6159, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextObject_0_0, (Optr)&t_method_return);
    Block PBlock6148 = new_Block_with(PArray6149, empty_Array, PThreadedCode6150, 4, PSend6152, PAssign6156, PAssign6158, VAR_nextObject_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6160 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6148);
    Array PThreadedCode6147 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6148, (Optr)&t_send1, (Optr)PSend6160, (Optr)&t_method_return);
    Method PMethod6145 = new_Method_with(empty_Array, PArray6146, empty_Array, PThreadedCode6147, 1, PSend6160);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod6145, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend6163 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6162 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send2, (Optr)PSend6163, (Optr)&t_method_return);
    Method PMethod6161 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6162, 1, PSend6163);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod6161, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6166 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Array PThreadedCode6165 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6166, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6164 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6165, 2, PAssign6166, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod6164, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6168 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend6170 = new_Send((Optr)self, SMB_basicNew, 0);
    // on:. 
    Send PSend6171 = new_Send((Optr)PSend6170, SMB_on_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode6169 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6170, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend6171, (Optr)&t_method_return);
    Method PMethod6167 = new_Method_with(PArray6168, empty_Array, empty_Array, PThreadedCode6169, 1, PSend6171);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod6167, HEADER(Collections_Streams_PositionableStream_Class));
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