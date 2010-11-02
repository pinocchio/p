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
    Array PArray6107 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign6109 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)VAR_aCollection_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6111 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Assign PAssign6110 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)PSend6111);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6112 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend6113 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode6108 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign6109, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6110, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend6111, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6112, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6113, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6106 = new_Method_with(PArray6107, empty_Array, empty_Array, PThreadedCode6108, 5, PAssign6109, PAssign6110, PAssign6112, PSend6113, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod6106, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray6115 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >=. 
    Send PSend6117 = new_Send((Optr)VAR_anInteger_0_0, SMB__gt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend6120 = new_Send((Optr)VAR_anInteger_0_0, SMB__lt__equals_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6119 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6120, (Optr)&t_block_return);
    Block PBlock6118 = new_Block_with(empty_Array, empty_Array, PThreadedCode6119, 1, PSend6120);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend6121 = new_Send((Optr)PSend6117, SMB_and_, 1, (Optr)PBlock6118);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign6125 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode6124 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6125, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock6123 = new_Block_with(empty_Array, empty_Array, PThreadedCode6124, 1, PAssign6125);
    Symbol SMB_positionError = new_Symbol(L"positionError");
    // positionError. 
    Send PSend6128 = new_Send((Optr)self, SMB_positionError, 0);
    Array PThreadedCode6127 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6128, (Optr)&t_block_return);
    Block PBlock6126 = new_Block_with(empty_Array, empty_Array, PThreadedCode6127, 1, PSend6128);
    // ifTrue:ifFalse:. 
    Send PSend6122 = new_Send((Optr)PSend6121, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock6123, (Optr)PBlock6126);
    Array PThreadedCode6116 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6117, (Optr)&t_push_closure, (Optr)PBlock6118, (Optr)&t_send1, (Optr)PSend6121, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend6122, (Optr)PBlock6123, (Optr)PBlock6126, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6114 = new_Method_with(PArray6115, empty_Array, empty_Array, PThreadedCode6116, 2, PSend6122, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod6114, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode6130 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_method_return);
    Method PMethod6129 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6130, 1, slot_Collections_Streams_PositionableStream_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod6129, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_positionError() {
    Symbol SMB_positionError = new_Symbol(L"positionError");
    String string_6133 = new_String(L"Attempt to set the position of a PositionableStream out of bounds");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_6133_Const = new_Constant((Optr)string_6133);
    // error:. 
    Send PSend6134 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_6133_Const);
    Array PThreadedCode6132 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_6133, (Optr)&t_send1, (Optr)PSend6134, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6131 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6132, 2, PSend6134, self);
    
    MethodClosure MC_SMB_positionError = new_MethodClosure((Method)PMethod6131, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_positionError, MC_SMB_positionError);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend6137 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt__equals_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6136 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6137, (Optr)&t_method_return);
    Method PMethod6135 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6136, 1, PSend6137);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod6135, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_back() {
    Symbol SMB_back = new_Symbol(L"back");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray6139 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend6141 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend6144 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__gt_, 1, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6143 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send1, (Optr)PSend6144, (Optr)&t_block_return);
    Block PBlock6142 = new_Block_with(empty_Array, empty_Array, PThreadedCode6143, 1, PSend6144);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend6145 = new_Send((Optr)PSend6141, SMB_or_, 1, (Optr)PBlock6142);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_positionError = new_Symbol(L"positionError");
    // positionError. 
    Send PSend6149 = new_Send((Optr)self, SMB_positionError, 0);
    Array PThreadedCode6148 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6149, (Optr)&t_block_return);
    Block PBlock6147 = new_Block_with(empty_Array, empty_Array, PThreadedCode6148, 1, PSend6149);
    // ifTrue:. 
    Send PSend6146 = new_Send((Optr)PSend6145, SMB_ifTrue_, 1, (Optr)PBlock6147);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6151 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_at_, 1, (Optr)slot_Collections_Streams_PositionableStream_position);
    Assign PAssign6150 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend6151);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6153 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign6152 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6153);
    Array PThreadedCode6140 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6141, (Optr)&t_push_closure, (Optr)PBlock6142, (Optr)&t_send1, (Optr)PSend6145, (Optr)&t_send_ifTrue_, (Optr)PSend6146, (Optr)PBlock6147, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6150, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_send1, (Optr)PSend6151, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6152, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6153, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod6138 = new_Method_with(empty_Array, PArray6139, empty_Array, PThreadedCode6140, 4, PSend6146, PAssign6150, PAssign6152, VAR_result_0_0);
    
    MethodClosure MC_SMB_back = new_MethodClosure((Method)PMethod6138, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_back, MC_SMB_back);
}


static void init_SMB_peek() {
    Symbol SMB_peek = new_Symbol(L"peek");
    Variable VAR_nextObject_0_0 = new_Variable_named(L"nextObject", 0);
    Array PArray6155 = new_Array_with(1, (Optr)VAR_nextObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6158 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend6160 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6164 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode6163 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend6164, (Optr)&t_block_return);
    Block PBlock6162 = new_Block_with(empty_Array, empty_Array, PThreadedCode6163, 1, PSend6164);
    // ifTrue:. 
    Send PSend6161 = new_Send((Optr)PSend6160, SMB_ifTrue_, 1, (Optr)PBlock6162);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend6166 = new_Send((Optr)self, SMB_next, 0);
    Assign PAssign6165 = new_Assign((Optr)VAR_nextObject_0_0, (Optr)PSend6166);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend6168 = new_Send((Optr)slot_Collections_Streams_PositionableStream_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign6167 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)PSend6168);
    Array PThreadedCode6159 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6160, (Optr)&t_send_ifTrue_, (Optr)PSend6161, (Optr)PBlock6162, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6165, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6166, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6167, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend6168, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextObject_0_0, (Optr)&t_method_return);
    Block PBlock6157 = new_Block_with(PArray6158, empty_Array, PThreadedCode6159, 4, PSend6161, PAssign6165, PAssign6167, VAR_nextObject_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6169 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6157);
    Array PThreadedCode6156 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6157, (Optr)&t_send1, (Optr)PSend6169, (Optr)&t_method_return);
    Method PMethod6154 = new_Method_with(empty_Array, PArray6155, empty_Array, PThreadedCode6156, 1, PSend6169);
    
    MethodClosure MC_SMB_peek = new_MethodClosure((Method)PMethod6154, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_peek, MC_SMB_peek);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend6172 = new_Send((Optr)slot_Collections_Streams_PositionableStream_collection, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)slot_Collections_Streams_PositionableStream_readLimit);
    Array PThreadedCode6171 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_collection, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Streams_PositionableStream_readLimit, (Optr)&t_send2, (Optr)PSend6172, (Optr)&t_method_return);
    Method PMethod6170 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6171, 1, PSend6172);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod6170, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6175 = new_Assign((Optr)slot_Collections_Streams_PositionableStream_position, (Optr)int_0_Const);
    Array PThreadedCode6174 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6175, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6173 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6174, 2, PAssign6175, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod6173, Collections_Streams_PositionableStream_Class);
    store_method(Collections_Streams_PositionableStream_Class, SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray6177 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend6179 = new_Send((Optr)self, SMB_basicNew, 0);
    // on:. 
    Send PSend6180 = new_Send((Optr)PSend6179, SMB_on_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode6178 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6179, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend6180, (Optr)&t_method_return);
    Method PMethod6176 = new_Method_with(PArray6177, empty_Array, empty_Array, PThreadedCode6178, 1, PSend6180);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod6176, HEADER(Collections_Streams_PositionableStream_Class));
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