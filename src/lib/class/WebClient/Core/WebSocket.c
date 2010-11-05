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
    Send PSend21911 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend21915 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend21916 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend21915);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // value:. 
    Send PSend21917 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_0_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend21918 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend21917);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend21919 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode21914 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend21915, (Optr)&t_send1, (Optr)PSend21916, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend21917, (Optr)&t_send1, (Optr)PSend21918, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21919, (Optr)&t_block_return);
    Block PBlock21913 = new_Block_with(empty_Array, empty_Array, PThreadedCode21914, 3, PSend21916, PSend21918, PSend21919);
    // ifTrue:. 
    Send PSend21912 = new_Send((Optr)PSend21911, SMB_ifTrue_, 1, (Optr)PBlock21913);
    Array PThreadedCode21910 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21911, (Optr)&t_send_ifTrue_, (Optr)PSend21912, (Optr)PBlock21913, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21909 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21910, 2, PSend21912, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod21909, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_handleError_() {
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    Variable VAR_exception_0_0 = new_Variable_named(L"exception", 0);
    Array PArray21921 = new_Array_with(1, (Optr)VAR_exception_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21925 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_exception_0_0, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend21926 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend21925);
    Array PThreadedCode21924 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_exception_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend21925, (Optr)&t_send1, (Optr)PSend21926, (Optr)&t_block_return);
    Block PBlock21923 = new_Block_with(empty_Array, empty_Array, PThreadedCode21924, 1, PSend21926);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21927 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_ifNotNil_, 1, (Optr)PBlock21923);
    Array PThreadedCode21922 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_closure, (Optr)PBlock21923, (Optr)&t_send1, (Optr)PSend21927, (Optr)&t_method_return);
    Method PMethod21920 = new_Method_with(PArray21921, empty_Array, empty_Array, PThreadedCode21922, 1, PSend21927);
    
    MethodClosure MC_SMB_handleError_ = new_MethodClosure((Method)PMethod21920, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleError_, MC_SMB_handleError_);
}


static void init_SMB_readMessage() {
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    Variable VAR_byte_0_0 = new_Variable_named(L"byte", 0);
    Variable VAR_length_0_1 = new_Variable_named(L"length", 0);
    Array PArray21929 = new_Array_with(2, (Optr)VAR_byte_0_0, (Optr)VAR_length_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21932 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend21936 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_next, 0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    Assign PAssign21939 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)int_255_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21940 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode21938 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign21939, (Optr)&t_push1, (Optr)int_255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend21940, (Optr)&t_block_return);
    Block PBlock21937 = new_Block_with(empty_Array, empty_Array, PThreadedCode21938, 2, PAssign21939, PSend21940);
    // ifNil:. 
    Send PSend21935 = new_Send((Optr)PSend21936, SMB_ifNil_, 1, (Optr)PBlock21937);
    Assign PAssign21934 = new_Assign((Optr)VAR_byte_0_0, (Optr)PSend21935);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend21942 = new_Send((Optr)VAR_byte_0_0, SMB_asInteger, 0);
    Assign PAssign21941 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)PSend21942);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend21943 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend21949 = new_Send((Optr)int_255_Const, SMB_asCharacter, 0);
    // upTo:. 
    Send PSend21948 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_upTo_, 1, (Optr)PSend21949);
    Assign PAssign21947 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)PSend21948);
    Array PThreadedCode21946 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign21947, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send0, (Optr)PSend21949, (Optr)&t_send1, (Optr)PSend21948, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21945 = new_Block_with(empty_Array, empty_Array, PThreadedCode21946, 1, PAssign21947);
    String string_21952 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_21952_Const = new_Constant((Optr)string_21952);
    // error:. 
    Send PSend21953 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_21952_Const);
    Array PThreadedCode21951 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_21952, (Optr)&t_send1, (Optr)PSend21953, (Optr)&t_block_return);
    Block PBlock21950 = new_Block_with(empty_Array, empty_Array, PThreadedCode21951, 1, PSend21953);
    // ifTrue:ifFalse:. 
    Send PSend21944 = new_Send((Optr)PSend21943, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21945, (Optr)PBlock21950);
    Array PThreadedCode21933 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign21934, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21936, (Optr)&t_push_closure, (Optr)PBlock21937, (Optr)&t_send1, (Optr)PSend21935, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21941, (Optr)&t_push_variable, (Optr)VAR_byte_0_0, (Optr)&t_send0, (Optr)PSend21942, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend21943, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21944, (Optr)PBlock21945, (Optr)PBlock21950, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21931 = new_Block_with(PArray21932, empty_Array, PThreadedCode21933, 4, PAssign21934, PAssign21941, PSend21944, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21954 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21931);
    Array PThreadedCode21930 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21931, (Optr)&t_send1, (Optr)PSend21954, (Optr)&t_method_return);
    Method PMethod21928 = new_Method_with(empty_Array, PArray21929, empty_Array, PThreadedCode21930, 1, PSend21954);
    
    MethodClosure MC_SMB_readMessage = new_MethodClosure((Method)PMethod21928, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_readMessage, MC_SMB_readMessage);
}


static void init_SMB_send_type_() {
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Variable VAR_type_0_1 = new_Variable_named(L"type", 0);
    Array PArray21956 = new_Array_with(2, (Optr)VAR_data_0_0, (Optr)VAR_type_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21958 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)VAR_type_0_1);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend21959 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend21958);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend21960 = new_Send((Optr)VAR_type_0_1, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend21963 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)VAR_data_0_0);
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend21964 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    // nextPutAll:. 
    Send PSend21965 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend21964);
    Array PThreadedCode21962 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send1, (Optr)PSend21963, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend21964, (Optr)&t_send1, (Optr)PSend21965, (Optr)&t_block_return);
    Block PBlock21961 = new_Block_with(empty_Array, empty_Array, PThreadedCode21962, 2, PSend21963, PSend21965);
    Variable VAR_prefix_1_0 = new_Variable_named(L"prefix", 1);
    Variable VAR_length_1_1 = new_Variable_named(L"length", 1);
    Array PArray21967 = new_Array_with(2, (Optr)VAR_prefix_1_0, (Optr)VAR_length_1_1);
    String string_21969 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_21969_Const = new_Constant((Optr)string_21969);
    // error:. 
    Send PSend21970 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_21969_Const);
    Array PThreadedCode21968 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_21969, (Optr)&t_send1, (Optr)PSend21970, (Optr)&t_method_return);
    Block PBlock21966 = new_Block_with(empty_Array, PArray21967, PThreadedCode21968, 1, PSend21970);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend21971 = new_Send((Optr)PSend21960, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21961, (Optr)PBlock21966);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend21972 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode21957 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_send1, (Optr)PSend21958, (Optr)&t_send1, (Optr)PSend21959, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend21960, (Optr)&t_push_closure, (Optr)PBlock21961, (Optr)&t_push_closure, (Optr)PBlock21966, (Optr)&t_send2, (Optr)PSend21971, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21972, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21955 = new_Method_with(PArray21956, empty_Array, empty_Array, PThreadedCode21957, 4, PSend21959, PSend21971, PSend21972, self);
    
    MethodClosure MC_SMB_send_type_ = new_MethodClosure((Method)PMethod21955, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_type_, MC_SMB_send_type_);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend21975 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout, 0);
    Array PThreadedCode21974 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21975, (Optr)&t_method_return);
    Method PMethod21973 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21974, 1, PSend21975);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod21973, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21979 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend21987 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Array PThreadedCode21986 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21987, (Optr)&t_block_return);
    Block PBlock21985 = new_Block_with(empty_Array, empty_Array, PThreadedCode21986, 1, PSend21987);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend21990 = new_Send((Optr)self, SMB_readMessage, 0);
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // =. 
    Send PSend21991 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__equals_, 1, (Optr)int_255_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend21995 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_close, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21996 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21994 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21995, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21996, (Optr)&t_block_return);
    Block PBlock21993 = new_Block_with(empty_Array, empty_Array, PThreadedCode21994, 2, PSend21995, PSend21996);
    // ifTrue:. 
    Send PSend21992 = new_Send((Optr)PSend21991, SMB_ifTrue_, 1, (Optr)PBlock21993);
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    // handleMessage:type:. 
    Send PSend21997 = new_Send((Optr)self, SMB_handleMessage_type_, 2, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)slot_WebClient_Core_WebSocket_frameType);
    Array PThreadedCode21989 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21990, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend21991, (Optr)&t_send_ifTrue_, (Optr)PSend21992, (Optr)PBlock21993, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_send2, (Optr)PSend21997, (Optr)&t_block_return);
    Block PBlock21988 = new_Block_with(empty_Array, empty_Array, PThreadedCode21989, 3, PSend21990, PSend21992, PSend21997);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend21998 = new_Send((Optr)PBlock21985, SMB_whileTrue_, 1, (Optr)PBlock21988);
    Array PThreadedCode21984 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock21985, (Optr)&t_push_closure, (Optr)PBlock21988, (Optr)&t_send1, (Optr)PSend21998, (Optr)&t_block_return);
    Block PBlock21983 = new_Block_with(empty_Array, empty_Array, PThreadedCode21984, 1, PSend21998);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray22000 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    // handleError:. 
    Send PSend22002 = new_Send((Optr)self, SMB_handleError_, 1, (Optr)VAR_ex_2_0);
    Array PThreadedCode22001 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend22002, (Optr)&t_method_return);
    Block PBlock21999 = new_Block_with(PArray22000, empty_Array, PThreadedCode22001, 1, PSend22002);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend22003 = new_Send((Optr)PBlock21983, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock21999);
    Array PThreadedCode21982 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock21983, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock21999, (Optr)&t_send2, (Optr)PSend22003, (Optr)&t_block_return);
    Block PBlock21981 = new_Block_with(empty_Array, empty_Array, PThreadedCode21982, 1, PSend22003);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22008 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22009 = new_Send((Optr)PSend22008, SMB_destroy, 0);
    Array PThreadedCode22007 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22008, (Optr)&t_send0, (Optr)PSend22009, (Optr)&t_block_return);
    Block PBlock22006 = new_Block_with(empty_Array, empty_Array, PThreadedCode22007, 1, PSend22009);
    Array PArray22011 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22013 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode22012 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend22013, (Optr)&t_method_return);
    Block PBlock22010 = new_Block_with(PArray22011, empty_Array, PThreadedCode22012, 1, PSend22013);
    // on:do:. 
    Send PSend22014 = new_Send((Optr)PBlock22006, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock22010);
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    // handleClose. 
    Send PSend22015 = new_Send((Optr)self, SMB_handleClose, 0);
    Array PThreadedCode22005 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock22006, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock22010, (Optr)&t_send2, (Optr)PSend22014, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22015, (Optr)&t_block_return);
    Block PBlock22004 = new_Block_with(empty_Array, empty_Array, PThreadedCode22005, 2, PSend22014, PSend22015);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend22016 = new_Send((Optr)PBlock21981, SMB_ensure_, 1, (Optr)PBlock22004);
    Array PThreadedCode21980 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21981, (Optr)&t_push_closure, (Optr)PBlock22004, (Optr)&t_send1, (Optr)PSend22016, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21978 = new_Block_with(PArray21979, empty_Array, PThreadedCode21980, 2, PSend22016, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22017 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21978);
    Array PThreadedCode21977 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21978, (Optr)&t_send1, (Optr)PSend22017, (Optr)&t_method_return);
    Method PMethod21976 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21977, 1, PSend22017);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod21976, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_onMessage_() {
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22019 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22021 = new_Assign((Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22020 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22021, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22018 = new_Method_with(PArray22019, empty_Array, empty_Array, PThreadedCode22020, 2, PAssign22021, self);
    
    MethodClosure MC_SMB_onMessage_ = new_MethodClosure((Method)PMethod22018, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onMessage_, MC_SMB_onMessage_);
}


static void init_SMB_onError_() {
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22023 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22025 = new_Assign((Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22024 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22025, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22022 = new_Method_with(PArray22023, empty_Array, empty_Array, PThreadedCode22024, 2, PAssign22025, self);
    
    MethodClosure MC_SMB_onError_ = new_MethodClosure((Method)PMethod22022, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onError_, MC_SMB_onError_);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend22032 = new_Send((Optr)self, SMB_run, 0);
    Array PThreadedCode22031 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22032, (Optr)&t_block_return);
    Block PBlock22030 = new_Block_with(empty_Array, empty_Array, PThreadedCode22031, 1, PSend22032);
    // fork. 
    Send PSend22029 = new_Send((Optr)PBlock22030, SMB_fork, 0);
    Assign PAssign22028 = new_Assign((Optr)slot_WebClient_Core_WebSocket_process, (Optr)PSend22029);
    Array PThreadedCode22027 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22028, (Optr)&t_push_closure, (Optr)PBlock22030, (Optr)&t_send0, (Optr)PSend22029, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22026 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22027, 2, PAssign22028, self);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod22026, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_handleClose() {
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22037 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22038 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22037);
    Array PThreadedCode22036 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22037, (Optr)&t_send1, (Optr)PSend22038, (Optr)&t_block_return);
    Block PBlock22035 = new_Block_with(empty_Array, empty_Array, PThreadedCode22036, 1, PSend22038);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22039 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_ifNotNil_, 1, (Optr)PBlock22035);
    Array PThreadedCode22034 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_closure, (Optr)PBlock22035, (Optr)&t_send1, (Optr)PSend22039, (Optr)&t_method_return);
    Method PMethod22033 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22034, 1, PSend22039);
    
    MethodClosure MC_SMB_handleClose = new_MethodClosure((Method)PMethod22033, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleClose, MC_SMB_handleClose);
}


static void init_SMB_onClose_() {
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22041 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22043 = new_Assign((Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22042 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22043, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22040 = new_Method_with(PArray22041, empty_Array, empty_Array, PThreadedCode22042, 2, PAssign22043, self);
    
    MethodClosure MC_SMB_onClose_ = new_MethodClosure((Method)PMethod22040, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onClose_, MC_SMB_onClose_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22045 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22047 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22048 = new_Send((Optr)PSend22047, SMB_name, 0);
    // printOn:. 
    Send PSend22049 = new_Send((Optr)PSend22048, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22051 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend22053 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    // <<. 
    Send PSend22054 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)slot_WebClient_Core_WebSocket_name);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend22055 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode22052 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend22053, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_name, (Optr)&t_send1, (Optr)PSend22054, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend22055, (Optr)&t_method_return);
    Block PBlock22050 = new_Block_with(PArray22051, empty_Array, PThreadedCode22052, 3, PSend22053, PSend22054, PSend22055);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22056 = new_Send((Optr)PBlock22050, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22046 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22047, (Optr)&t_send0, (Optr)PSend22048, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22049, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22050, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22056, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22044 = new_Method_with(PArray22045, empty_Array, empty_Array, PThreadedCode22046, 3, PSend22049, PSend22056, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22044, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_handleMessage_type_() {
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    Variable VAR_msgData_0_0 = new_Variable_named(L"msgData", 0);
    Variable VAR_msgType_0_1 = new_Variable_named(L"msgType", 0);
    Array PArray22058 = new_Array_with(2, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend22062 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22063 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22062);
    Array PThreadedCode22061 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_msgData_0_0, (Optr)&t_push_variable, (Optr)VAR_msgType_0_1, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend22062, (Optr)&t_send1, (Optr)PSend22063, (Optr)&t_block_return);
    Block PBlock22060 = new_Block_with(empty_Array, empty_Array, PThreadedCode22061, 1, PSend22063);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22064 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_ifNotNil_, 1, (Optr)PBlock22060);
    Array PThreadedCode22059 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_closure, (Optr)PBlock22060, (Optr)&t_send1, (Optr)PSend22064, (Optr)&t_method_return);
    Method PMethod22057 = new_Method_with(PArray22058, empty_Array, empty_Array, PThreadedCode22059, 1, PSend22064);
    
    MethodClosure MC_SMB_handleMessage_type_ = new_MethodClosure((Method)PMethod22057, WebClient_Core_WebSocket_Class);
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
    Array PArray22066 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22068 = new_Assign((Optr)slot_WebClient_Core_WebSocket_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22074 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22073 = new_Send((Optr)PSend22074, SMB_remoteAddress, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22072 = new_Send((Optr)PSend22073, SMB_asString, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22075 = new_String(L":");
    Constant string_22075_Const = new_Constant((Optr)string_22075);
    // ,. 
    Send PSend22071 = new_Send((Optr)PSend22072, SMB__append_, 1, (Optr)string_22075_Const);
    // socket. 
    Send PSend22077 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend22076 = new_Send((Optr)PSend22077, SMB_remotePort, 0);
    // ,. 
    Send PSend22070 = new_Send((Optr)PSend22071, SMB__append_, 1, (Optr)PSend22076);
    Assign PAssign22069 = new_Assign((Optr)slot_WebClient_Core_WebSocket_name, (Optr)PSend22070);
    Array PThreadedCode22067 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign22068, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22069, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22074, (Optr)&t_send0, (Optr)PSend22073, (Optr)&t_send0, (Optr)PSend22072, (Optr)&t_push1, (Optr)string_22075, (Optr)&t_send1, (Optr)PSend22071, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22077, (Optr)&t_send0, (Optr)PSend22076, (Optr)&t_send1, (Optr)PSend22070, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22065 = new_Method_with(PArray22066, empty_Array, empty_Array, PThreadedCode22067, 3, PAssign22068, PAssign22069, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22065, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray22079 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    // timeout:. 
    Send PSend22081 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode22080 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend22081, (Optr)&t_method_return);
    Method PMethod22078 = new_Method_with(PArray22079, empty_Array, empty_Array, PThreadedCode22080, 1, PSend22081);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod22078, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_send_() {
    Symbol SMB_send_ = new_Symbol(L"send:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22083 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // send:type:. 
    Send PSend22085 = new_Send((Optr)self, SMB_send_type_, 2, (Optr)VAR_aString_0_0, (Optr)int_0_Const);
    Array PThreadedCode22084 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend22085, (Optr)&t_method_return);
    Method PMethod22082 = new_Method_with(PArray22083, empty_Array, empty_Array, PThreadedCode22084, 1, PSend22085);
    
    MethodClosure MC_SMB_send_ = new_MethodClosure((Method)PMethod22082, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_, MC_SMB_send_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22087 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22089 = new_Send((Optr)self, SMB_new, 0);
    // on:. 
    Send PSend22090 = new_Send((Optr)PSend22089, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22088 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22089, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22090, (Optr)&t_method_return);
    Method PMethod22086 = new_Method_with(PArray22087, empty_Array, empty_Array, PThreadedCode22088, 1, PSend22090);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22086, HEADER(WebClient_Core_WebSocket_Class));
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