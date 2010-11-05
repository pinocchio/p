#include <lib/class/WebClient/Core/WebSocket.h>


Optr layout_WebClient_Core_WebSocket_Class_class;
Optr slot_WebClient_Core_WebSocket_name;
Optr slot_WebClient_Core_WebSocket_process;
Optr slot_WebClient_Core_WebSocket_stream;
Optr slot_WebClient_Core_WebSocket_frameType;
Optr slot_WebClient_Core_WebSocket_frameData;
Optr slot_WebClient_Core_WebSocket_messageBlock;
Optr slot_WebClient_Core_WebSocket_errorBlock;
Optr slot_WebClient_Core_WebSocket_closeBlock;
Optr layout_WebClient_Core_WebSocket;


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend21968 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend21972 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend21973 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend21972);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // value:. 
    Send PSend21974 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_0_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend21975 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend21974);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend21976 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode21971 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend21972, (Optr)&t_send1, (Optr)PSend21973, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend21974, (Optr)&t_send1, (Optr)PSend21975, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21976, (Optr)&t_block_return);
    Block PBlock21970 = new_Block_with(empty_Array, empty_Array, PThreadedCode21971, 3, PSend21973, PSend21975, PSend21976);
    // ifTrue:. 
    Send PSend21969 = new_Send((Optr)PSend21968, SMB_ifTrue_, 1, (Optr)PBlock21970);
    Array PThreadedCode21967 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21968, (Optr)&t_send_ifTrue_, (Optr)PSend21969, (Optr)PBlock21970, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21966 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21967, 2, PSend21969, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod21966, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_handleError_() {
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    Variable VAR_exception_0_0 = new_Variable_named(L"exception", 0);
    Array PArray21978 = new_Array_with(1, (Optr)VAR_exception_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21982 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_exception_0_0, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend21983 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend21982);
    Array PThreadedCode21981 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_exception_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend21982, (Optr)&t_send1, (Optr)PSend21983, (Optr)&t_block_return);
    Block PBlock21980 = new_Block_with(empty_Array, empty_Array, PThreadedCode21981, 1, PSend21983);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21984 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_ifNotNil_, 1, (Optr)PBlock21980);
    Array PThreadedCode21979 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_closure, (Optr)PBlock21980, (Optr)&t_send1, (Optr)PSend21984, (Optr)&t_method_return);
    Method PMethod21977 = new_Method_with(PArray21978, empty_Array, empty_Array, PThreadedCode21979, 1, PSend21984);
    
    MethodClosure MC_SMB_handleError_ = new_MethodClosure((Method)PMethod21977, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleError_, MC_SMB_handleError_);
}


static void init_SMB_readMessage() {
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    Variable VAR_byte_0_0 = new_Variable_named(L"byte", 0);
    Variable VAR_length_0_1 = new_Variable_named(L"length", 0);
    Array PArray21986 = new_Array_with(2, (Optr)VAR_byte_0_0, (Optr)VAR_length_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21989 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend21993 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_next, 0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    Assign PAssign21996 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)int_255_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21997 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode21995 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign21996, (Optr)&t_push1, (Optr)int_255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend21997, (Optr)&t_block_return);
    Block PBlock21994 = new_Block_with(empty_Array, empty_Array, PThreadedCode21995, 2, PAssign21996, PSend21997);
    // ifNil:. 
    Send PSend21992 = new_Send((Optr)PSend21993, SMB_ifNil_, 1, (Optr)PBlock21994);
    Assign PAssign21991 = new_Assign((Optr)VAR_byte_0_0, (Optr)PSend21992);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend21999 = new_Send((Optr)VAR_byte_0_0, SMB_asInteger, 0);
    Assign PAssign21998 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)PSend21999);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22000 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend22006 = new_Send((Optr)int_255_Const, SMB_asCharacter, 0);
    // upTo:. 
    Send PSend22005 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_upTo_, 1, (Optr)PSend22006);
    Assign PAssign22004 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)PSend22005);
    Array PThreadedCode22003 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22004, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send0, (Optr)PSend22006, (Optr)&t_send1, (Optr)PSend22005, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22002 = new_Block_with(empty_Array, empty_Array, PThreadedCode22003, 1, PAssign22004);
    String string_22009 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22009_Const = new_Constant((Optr)string_22009);
    // error:. 
    Send PSend22010 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22009_Const);
    Array PThreadedCode22008 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22009, (Optr)&t_send1, (Optr)PSend22010, (Optr)&t_block_return);
    Block PBlock22007 = new_Block_with(empty_Array, empty_Array, PThreadedCode22008, 1, PSend22010);
    // ifTrue:ifFalse:. 
    Send PSend22001 = new_Send((Optr)PSend22000, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22002, (Optr)PBlock22007);
    Array PThreadedCode21990 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign21991, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21993, (Optr)&t_push_closure, (Optr)PBlock21994, (Optr)&t_send1, (Optr)PSend21992, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21998, (Optr)&t_push_variable, (Optr)VAR_byte_0_0, (Optr)&t_send0, (Optr)PSend21999, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22000, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22001, (Optr)PBlock22002, (Optr)PBlock22007, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21988 = new_Block_with(PArray21989, empty_Array, PThreadedCode21990, 4, PAssign21991, PAssign21998, PSend22001, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22011 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21988);
    Array PThreadedCode21987 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21988, (Optr)&t_send1, (Optr)PSend22011, (Optr)&t_method_return);
    Method PMethod21985 = new_Method_with(empty_Array, PArray21986, empty_Array, PThreadedCode21987, 1, PSend22011);
    
    MethodClosure MC_SMB_readMessage = new_MethodClosure((Method)PMethod21985, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_readMessage, MC_SMB_readMessage);
}


static void init_SMB_send_type_() {
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Variable VAR_type_0_1 = new_Variable_named(L"type", 0);
    Array PArray22013 = new_Array_with(2, (Optr)VAR_data_0_0, (Optr)VAR_type_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22015 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)VAR_type_0_1);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend22016 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend22015);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend22017 = new_Send((Optr)VAR_type_0_1, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22020 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)VAR_data_0_0);
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend22021 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    // nextPutAll:. 
    Send PSend22022 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend22021);
    Array PThreadedCode22019 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send1, (Optr)PSend22020, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22021, (Optr)&t_send1, (Optr)PSend22022, (Optr)&t_block_return);
    Block PBlock22018 = new_Block_with(empty_Array, empty_Array, PThreadedCode22019, 2, PSend22020, PSend22022);
    Variable VAR_prefix_1_0 = new_Variable_named(L"prefix", 1);
    Variable VAR_length_1_1 = new_Variable_named(L"length", 1);
    Array PArray22024 = new_Array_with(2, (Optr)VAR_prefix_1_0, (Optr)VAR_length_1_1);
    String string_22026 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_22026_Const = new_Constant((Optr)string_22026);
    // error:. 
    Send PSend22027 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_22026_Const);
    Array PThreadedCode22025 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22026, (Optr)&t_send1, (Optr)PSend22027, (Optr)&t_method_return);
    Block PBlock22023 = new_Block_with(empty_Array, PArray22024, PThreadedCode22025, 1, PSend22027);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend22028 = new_Send((Optr)PSend22017, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22018, (Optr)PBlock22023);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22029 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode22014 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_send1, (Optr)PSend22015, (Optr)&t_send1, (Optr)PSend22016, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend22017, (Optr)&t_push_closure, (Optr)PBlock22018, (Optr)&t_push_closure, (Optr)PBlock22023, (Optr)&t_send2, (Optr)PSend22028, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22029, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22012 = new_Method_with(PArray22013, empty_Array, empty_Array, PThreadedCode22014, 4, PSend22016, PSend22028, PSend22029, self);
    
    MethodClosure MC_SMB_send_type_ = new_MethodClosure((Method)PMethod22012, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_type_, MC_SMB_send_type_);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend22032 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout, 0);
    Array PThreadedCode22031 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22032, (Optr)&t_method_return);
    Method PMethod22030 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22031, 1, PSend22032);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod22030, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22036 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend22044 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Array PThreadedCode22043 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22044, (Optr)&t_block_return);
    Block PBlock22042 = new_Block_with(empty_Array, empty_Array, PThreadedCode22043, 1, PSend22044);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend22047 = new_Send((Optr)self, SMB_readMessage, 0);
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // =. 
    Send PSend22048 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__equals_, 1, (Optr)int_255_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22052 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_close, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22053 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22051 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22052, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22053, (Optr)&t_block_return);
    Block PBlock22050 = new_Block_with(empty_Array, empty_Array, PThreadedCode22051, 2, PSend22052, PSend22053);
    // ifTrue:. 
    Send PSend22049 = new_Send((Optr)PSend22048, SMB_ifTrue_, 1, (Optr)PBlock22050);
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    // handleMessage:type:. 
    Send PSend22054 = new_Send((Optr)self, SMB_handleMessage_type_, 2, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)slot_WebClient_Core_WebSocket_frameType);
    Array PThreadedCode22046 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22047, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend22048, (Optr)&t_send_ifTrue_, (Optr)PSend22049, (Optr)PBlock22050, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_send2, (Optr)PSend22054, (Optr)&t_block_return);
    Block PBlock22045 = new_Block_with(empty_Array, empty_Array, PThreadedCode22046, 3, PSend22047, PSend22049, PSend22054);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22055 = new_Send((Optr)PBlock22042, SMB_whileTrue_, 1, (Optr)PBlock22045);
    Array PThreadedCode22041 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock22042, (Optr)&t_push_closure, (Optr)PBlock22045, (Optr)&t_send1, (Optr)PSend22055, (Optr)&t_block_return);
    Block PBlock22040 = new_Block_with(empty_Array, empty_Array, PThreadedCode22041, 1, PSend22055);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22057 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    // handleError:. 
    Send PSend22059 = new_Send((Optr)self, SMB_handleError_, 1, (Optr)VAR_ex_2_0);
    Array PThreadedCode22058 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend22059, (Optr)&t_method_return);
    Block PBlock22056 = new_Block_with(PArray22057, empty_Array, PThreadedCode22058, 1, PSend22059);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22060 = new_Send((Optr)PBlock22040, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22056);
    Array PThreadedCode22039 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22040, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22056, (Optr)&t_send2, (Optr)PSend22060, (Optr)&t_block_return);
    Block PBlock22038 = new_Block_with(empty_Array, empty_Array, PThreadedCode22039, 1, PSend22060);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22065 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22066 = new_Send((Optr)PSend22065, SMB_destroy, 0);
    Array PThreadedCode22064 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22065, (Optr)&t_send0, (Optr)PSend22066, (Optr)&t_block_return);
    Block PBlock22063 = new_Block_with(empty_Array, empty_Array, PThreadedCode22064, 1, PSend22066);
    Array PArray22068 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22070 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22069 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22070, (Optr)&t_method_return);
    Block PBlock22067 = new_Block_with(PArray22068, empty_Array, PThreadedCode22069, 1, PSend22070);
    // on:do:. 
    Send PSend22071 = new_Send((Optr)PBlock22063, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22067);
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    // handleClose. 
    Send PSend22072 = new_Send((Optr)self, SMB_handleClose, 0);
    Array PThreadedCode22062 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock22063, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22067, (Optr)&t_send2, (Optr)PSend22071, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22072, (Optr)&t_block_return);
    Block PBlock22061 = new_Block_with(empty_Array, empty_Array, PThreadedCode22062, 2, PSend22071, PSend22072);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22073 = new_Send((Optr)PBlock22038, SMB_ensure_, 1, (Optr)PBlock22061);
    Array PThreadedCode22037 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock22038, (Optr)&t_push_closure, (Optr)PBlock22061, (Optr)&t_send1, (Optr)PSend22073, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22035 = new_Block_with(PArray22036, empty_Array, PThreadedCode22037, 2, PSend22073, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22074 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22035);
    Array PThreadedCode22034 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22035, (Optr)&t_send1, (Optr)PSend22074, (Optr)&t_method_return);
    Method PMethod22033 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22034, 1, PSend22074);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod22033, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_onMessage_() {
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22076 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22078 = new_Assign((Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22077 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22078, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22075 = new_Method_with(PArray22076, empty_Array, empty_Array, PThreadedCode22077, 2, PAssign22078, self);
    
    MethodClosure MC_SMB_onMessage_ = new_MethodClosure((Method)PMethod22075, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onMessage_, MC_SMB_onMessage_);
}


static void init_SMB_onError_() {
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22080 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22082 = new_Assign((Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22081 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22082, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22079 = new_Method_with(PArray22080, empty_Array, empty_Array, PThreadedCode22081, 2, PAssign22082, self);
    
    MethodClosure MC_SMB_onError_ = new_MethodClosure((Method)PMethod22079, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onError_, MC_SMB_onError_);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend22089 = new_Send((Optr)self, SMB_run, 0);
    Array PThreadedCode22088 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22089, (Optr)&t_block_return);
    Block PBlock22087 = new_Block_with(empty_Array, empty_Array, PThreadedCode22088, 1, PSend22089);
    // fork. 
    Send PSend22086 = new_Send((Optr)PBlock22087, SMB_fork, 0);
    Assign PAssign22085 = new_Assign((Optr)slot_WebClient_Core_WebSocket_process, (Optr)PSend22086);
    Array PThreadedCode22084 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22085, (Optr)&t_push_closure, (Optr)PBlock22087, (Optr)&t_send0, (Optr)PSend22086, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22083 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22084, 2, PAssign22085, self);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod22083, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_handleClose() {
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22094 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22095 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22094);
    Array PThreadedCode22093 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22094, (Optr)&t_send1, (Optr)PSend22095, (Optr)&t_block_return);
    Block PBlock22092 = new_Block_with(empty_Array, empty_Array, PThreadedCode22093, 1, PSend22095);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22096 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_ifNotNil_, 1, (Optr)PBlock22092);
    Array PThreadedCode22091 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_closure, (Optr)PBlock22092, (Optr)&t_send1, (Optr)PSend22096, (Optr)&t_method_return);
    Method PMethod22090 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22091, 1, PSend22096);
    
    MethodClosure MC_SMB_handleClose = new_MethodClosure((Method)PMethod22090, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleClose, MC_SMB_handleClose);
}


static void init_SMB_onClose_() {
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22098 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22100 = new_Assign((Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22099 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22100, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22097 = new_Method_with(PArray22098, empty_Array, empty_Array, PThreadedCode22099, 2, PAssign22100, self);
    
    MethodClosure MC_SMB_onClose_ = new_MethodClosure((Method)PMethod22097, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onClose_, MC_SMB_onClose_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22102 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22104 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22105 = new_Send((Optr)PSend22104, SMB_name, 0);
    // printOn:. 
    Send PSend22106 = new_Send((Optr)PSend22105, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22108 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5737 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5737_Const = new_Constant((Optr)char_5737);
    // <<. 
    Send PSend22110 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5737_Const);
    // <<. 
    Send PSend22111 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)slot_WebClient_Core_WebSocket_name);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22112 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22109 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5737, (Optr)&t_send1, (Optr)PSend22110, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_name, (Optr)&t_send1, (Optr)PSend22111, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22112, (Optr)&t_method_return);
    Block PBlock22107 = new_Block_with(PArray22108, empty_Array, PThreadedCode22109, 3, PSend22110, PSend22111, PSend22112);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22113 = new_Send((Optr)PBlock22107, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22103 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22104, (Optr)&t_send0, (Optr)PSend22105, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22106, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22107, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22113, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22101 = new_Method_with(PArray22102, empty_Array, empty_Array, PThreadedCode22103, 3, PSend22106, PSend22113, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22101, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_handleMessage_type_() {
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    Variable VAR_msgData_0_0 = new_Variable_named(L"msgData", 0);
    Variable VAR_msgType_0_1 = new_Variable_named(L"msgType", 0);
    Array PArray22115 = new_Array_with(2, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend22119 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22120 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22119);
    Array PThreadedCode22118 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_msgData_0_0, (Optr)&t_push_variable, (Optr)VAR_msgType_0_1, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend22119, (Optr)&t_send1, (Optr)PSend22120, (Optr)&t_block_return);
    Block PBlock22117 = new_Block_with(empty_Array, empty_Array, PThreadedCode22118, 1, PSend22120);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22121 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_ifNotNil_, 1, (Optr)PBlock22117);
    Array PThreadedCode22116 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_closure, (Optr)PBlock22117, (Optr)&t_send1, (Optr)PSend22121, (Optr)&t_method_return);
    Method PMethod22114 = new_Method_with(PArray22115, empty_Array, empty_Array, PThreadedCode22116, 1, PSend22121);
    
    MethodClosure MC_SMB_handleMessage_type_ = new_MethodClosure((Method)PMethod22114, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleMessage_type_, MC_SMB_handleMessage_type_);
}


static void init_SMB_on_() {
    /*
    on: aStream
// 	"Create a new WebSocket instance using the given SocketStream"
// 
// 	^self new on: aStream
    */
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22123 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22125 = new_Assign((Optr)slot_WebClient_Core_WebSocket_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22131 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22130 = new_Send((Optr)PSend22131, SMB_remoteAddress, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22129 = new_Send((Optr)PSend22130, SMB_asString, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22132 = new_String(L":");
    Constant string_22132_Const = new_Constant((Optr)string_22132);
    // ,. 
    Send PSend22128 = new_Send((Optr)PSend22129, SMB__append_, 1, (Optr)string_22132_Const);
    // socket. 
    Send PSend22134 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend22133 = new_Send((Optr)PSend22134, SMB_remotePort, 0);
    // ,. 
    Send PSend22127 = new_Send((Optr)PSend22128, SMB__append_, 1, (Optr)PSend22133);
    Assign PAssign22126 = new_Assign((Optr)slot_WebClient_Core_WebSocket_name, (Optr)PSend22127);
    Array PThreadedCode22124 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign22125, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22126, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22131, (Optr)&t_send0, (Optr)PSend22130, (Optr)&t_send0, (Optr)PSend22129, (Optr)&t_push1, (Optr)string_22132, (Optr)&t_send1, (Optr)PSend22128, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22134, (Optr)&t_send0, (Optr)PSend22133, (Optr)&t_send1, (Optr)PSend22127, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22122 = new_Method_with(PArray22123, empty_Array, empty_Array, PThreadedCode22124, 3, PAssign22125, PAssign22126, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22122, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray22136 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    // timeout:. 
    Send PSend22138 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode22137 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend22138, (Optr)&t_method_return);
    Method PMethod22135 = new_Method_with(PArray22136, empty_Array, empty_Array, PThreadedCode22137, 1, PSend22138);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod22135, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_send_() {
    Symbol SMB_send_ = new_Symbol(L"send:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22140 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // send:type:. 
    Send PSend22142 = new_Send((Optr)self, SMB_send_type_, 2, (Optr)VAR_aString_0_0, (Optr)int_0_Const);
    Array PThreadedCode22141 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend22142, (Optr)&t_method_return);
    Method PMethod22139 = new_Method_with(PArray22140, empty_Array, empty_Array, PThreadedCode22141, 1, PSend22142);
    
    MethodClosure MC_SMB_send_ = new_MethodClosure((Method)PMethod22139, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_, MC_SMB_send_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22144 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22146 = new_Send((Optr)self, SMB_new, 0);
    // on:. 
    Send PSend22147 = new_Send((Optr)PSend22146, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22145 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22146, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22147, (Optr)&t_method_return);
    Method PMethod22143 = new_Method_with(PArray22144, empty_Array, empty_Array, PThreadedCode22145, 1, PSend22147);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22143, HEADER(WebClient_Core_WebSocket_Class));
    store_method(HEADER(WebClient_Core_WebSocket_Class), SMB_on_, MC_SMB_on_);
}

void init_WebClient_Core_PWebSocket_layout() {
    layout_WebClient_Core_WebSocket_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_WebClient_Core_WebSocket_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_WebClient_Core_WebSocket_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_WebClient_Core_WebSocket_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_WebClient_Core_WebSocket_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_WebClient_Core_WebSocket_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_WebSocket = new_Symbol(L"WebSocket");
    slot_WebClient_Core_WebSocket_name = (Optr)new_Slot(0, L"name");
    slot_WebClient_Core_WebSocket_process = (Optr)new_Slot(1, L"process");
    slot_WebClient_Core_WebSocket_stream = (Optr)new_Slot(2, L"stream");
    slot_WebClient_Core_WebSocket_frameType = (Optr)new_Slot(3, L"frameType");
    slot_WebClient_Core_WebSocket_frameData = (Optr)new_Slot(4, L"frameData");
    slot_WebClient_Core_WebSocket_messageBlock = (Optr)new_Slot(5, L"messageBlock");
    slot_WebClient_Core_WebSocket_errorBlock = (Optr)new_Slot(6, L"errorBlock");
    slot_WebClient_Core_WebSocket_closeBlock = (Optr)new_Slot(7, L"closeBlock");
    layout_WebClient_Core_WebSocket = (Optr)create_layout_with_vars(ObjectLayout_Class, 8);
    ((Array)layout_WebClient_Core_WebSocket)->values[0] = slot_WebClient_Core_WebSocket_name; // name 
    ((Array)layout_WebClient_Core_WebSocket)->values[1] = slot_WebClient_Core_WebSocket_process; // process 
    ((Array)layout_WebClient_Core_WebSocket)->values[2] = slot_WebClient_Core_WebSocket_stream; // stream 
    ((Array)layout_WebClient_Core_WebSocket)->values[3] = slot_WebClient_Core_WebSocket_frameType; // frameType 
    ((Array)layout_WebClient_Core_WebSocket)->values[4] = slot_WebClient_Core_WebSocket_frameData; // frameData 
    ((Array)layout_WebClient_Core_WebSocket)->values[5] = slot_WebClient_Core_WebSocket_messageBlock; // messageBlock 
    ((Array)layout_WebClient_Core_WebSocket)->values[6] = slot_WebClient_Core_WebSocket_errorBlock; // errorBlock 
    ((Array)layout_WebClient_Core_WebSocket)->values[7] = slot_WebClient_Core_WebSocket_closeBlock; // closeBlock 
    WebClient_Core_WebSocket_Class = (Class)new_Class(Object_Class, layout_WebClient_Core_WebSocket_Class_class);
    WebClient_Core_WebSocket_Class->layout = layout_WebClient_Core_WebSocket;
    WebClient_Core_WebSocket_Class->name = SMB_WebSocket;
    
}

void init_WebClient_Core_PWebSocket_methods() {
    init_SMB_close();
    init_SMB_handleError_();
    init_SMB_readMessage();
    init_SMB_send_type_();
    init_SMB_timeout();
    init_SMB_run();
    init_SMB_onMessage_();
    init_SMB_onError_();
    init_SMB_fork();
    init_SMB_handleClose();
    init_SMB_onClose_();
    init_SMB_printOn_();
    init_SMB_handleMessage_type_();
    init_SMB_on_();
    init_SMB_timeout_();
    init_SMB_send_();
    init_class_SMB_on_();
    
}