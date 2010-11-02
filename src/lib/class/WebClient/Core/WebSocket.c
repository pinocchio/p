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
    Send PSend21881 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend21885 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend21886 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend21885);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // value:. 
    Send PSend21887 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_0_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend21888 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend21887);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend21889 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode21884 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend21885, (Optr)&t_send1, (Optr)PSend21886, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend21887, (Optr)&t_send1, (Optr)PSend21888, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21889, (Optr)&t_block_return);
    Block PBlock21883 = new_Block_with(empty_Array, empty_Array, PThreadedCode21884, 3, PSend21886, PSend21888, PSend21889);
    // ifTrue:. 
    Send PSend21882 = new_Send((Optr)PSend21881, SMB_ifTrue_, 1, (Optr)PBlock21883);
    Array PThreadedCode21880 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21881, (Optr)&t_send_ifTrue_, (Optr)PSend21882, (Optr)PBlock21883, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21879 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21880, 2, PSend21882, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod21879, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_handleError_() {
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    Variable VAR_exception_0_0 = new_Variable_named(L"exception", 0);
    Array PArray21891 = new_Array_with(1, (Optr)VAR_exception_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend21895 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_exception_0_0, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend21896 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend21895);
    Array PThreadedCode21894 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_exception_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend21895, (Optr)&t_send1, (Optr)PSend21896, (Optr)&t_block_return);
    Block PBlock21893 = new_Block_with(empty_Array, empty_Array, PThreadedCode21894, 1, PSend21896);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21897 = new_Send((Optr)slot_WebClient_Core_WebSocket_errorBlock, SMB_ifNotNil_, 1, (Optr)PBlock21893);
    Array PThreadedCode21892 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)&t_push_closure, (Optr)PBlock21893, (Optr)&t_send1, (Optr)PSend21897, (Optr)&t_method_return);
    Method PMethod21890 = new_Method_with(PArray21891, empty_Array, empty_Array, PThreadedCode21892, 1, PSend21897);
    
    MethodClosure MC_SMB_handleError_ = new_MethodClosure((Method)PMethod21890, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleError_, MC_SMB_handleError_);
}


static void init_SMB_readMessage() {
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    Variable VAR_byte_0_0 = new_Variable_named(L"byte", 0);
    Variable VAR_length_0_1 = new_Variable_named(L"length", 0);
    Array PArray21899 = new_Array_with(2, (Optr)VAR_byte_0_0, (Optr)VAR_length_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21902 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend21906 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_next, 0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    Assign PAssign21909 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)int_255_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21910 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode21908 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign21909, (Optr)&t_push1, (Optr)int_255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend21910, (Optr)&t_block_return);
    Block PBlock21907 = new_Block_with(empty_Array, empty_Array, PThreadedCode21908, 2, PAssign21909, PSend21910);
    // ifNil:. 
    Send PSend21905 = new_Send((Optr)PSend21906, SMB_ifNil_, 1, (Optr)PBlock21907);
    Assign PAssign21904 = new_Assign((Optr)VAR_byte_0_0, (Optr)PSend21905);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend21912 = new_Send((Optr)VAR_byte_0_0, SMB_asInteger, 0);
    Assign PAssign21911 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)PSend21912);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend21913 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend21919 = new_Send((Optr)int_255_Const, SMB_asCharacter, 0);
    // upTo:. 
    Send PSend21918 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_upTo_, 1, (Optr)PSend21919);
    Assign PAssign21917 = new_Assign((Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)PSend21918);
    Array PThreadedCode21916 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign21917, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send0, (Optr)PSend21919, (Optr)&t_send1, (Optr)PSend21918, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21915 = new_Block_with(empty_Array, empty_Array, PThreadedCode21916, 1, PAssign21917);
    String string_21922 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_21922_Const = new_Constant((Optr)string_21922);
    // error:. 
    Send PSend21923 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_21922_Const);
    Array PThreadedCode21921 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_21922, (Optr)&t_send1, (Optr)PSend21923, (Optr)&t_block_return);
    Block PBlock21920 = new_Block_with(empty_Array, empty_Array, PThreadedCode21921, 1, PSend21923);
    // ifTrue:ifFalse:. 
    Send PSend21914 = new_Send((Optr)PSend21913, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21915, (Optr)PBlock21920);
    Array PThreadedCode21903 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign21904, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21906, (Optr)&t_push_closure, (Optr)PBlock21907, (Optr)&t_send1, (Optr)PSend21905, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21911, (Optr)&t_push_variable, (Optr)VAR_byte_0_0, (Optr)&t_send0, (Optr)PSend21912, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend21913, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend21914, (Optr)PBlock21915, (Optr)PBlock21920, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21901 = new_Block_with(PArray21902, empty_Array, PThreadedCode21903, 4, PAssign21904, PAssign21911, PSend21914, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21924 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21901);
    Array PThreadedCode21900 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21901, (Optr)&t_send1, (Optr)PSend21924, (Optr)&t_method_return);
    Method PMethod21898 = new_Method_with(empty_Array, PArray21899, empty_Array, PThreadedCode21900, 1, PSend21924);
    
    MethodClosure MC_SMB_readMessage = new_MethodClosure((Method)PMethod21898, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_readMessage, MC_SMB_readMessage);
}


static void init_SMB_send_type_() {
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    Variable VAR_data_0_0 = new_Variable_named(L"data", 0);
    Variable VAR_type_0_1 = new_Variable_named(L"type", 0);
    Array PArray21926 = new_Array_with(2, (Optr)VAR_data_0_0, (Optr)VAR_type_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21928 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)VAR_type_0_1);
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    // nextPut:. 
    Send PSend21929 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPut_, 1, (Optr)PSend21928);
    SmallInt int_128 = new_SmallInt(128);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_128_Const = new_Constant((Optr)int_128);
    // <. 
    Send PSend21930 = new_Send((Optr)VAR_type_0_1, SMB__lt_, 1, (Optr)int_128_Const);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend21933 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)VAR_data_0_0);
    SmallInt int_255 = new_SmallInt(255);
    Constant int_255_Const = new_Constant((Optr)int_255);
    // value:. 
    Send PSend21934 = new_Send((Optr)Character_classReference, SMB_value_, 1, (Optr)int_255_Const);
    // nextPutAll:. 
    Send PSend21935 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_nextPutAll_, 1, (Optr)PSend21934);
    Array PThreadedCode21932 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_data_0_0, (Optr)&t_send1, (Optr)PSend21933, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend21934, (Optr)&t_send1, (Optr)PSend21935, (Optr)&t_block_return);
    Block PBlock21931 = new_Block_with(empty_Array, empty_Array, PThreadedCode21932, 2, PSend21933, PSend21935);
    Variable VAR_prefix_1_0 = new_Variable_named(L"prefix", 1);
    Variable VAR_length_1_1 = new_Variable_named(L"length", 1);
    Array PArray21937 = new_Array_with(2, (Optr)VAR_prefix_1_0, (Optr)VAR_length_1_1);
    String string_21939 = new_String(L"Binary data not supported");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_21939_Const = new_Constant((Optr)string_21939);
    // error:. 
    Send PSend21940 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_21939_Const);
    Array PThreadedCode21938 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_21939, (Optr)&t_send1, (Optr)PSend21940, (Optr)&t_method_return);
    Block PBlock21936 = new_Block_with(empty_Array, PArray21937, PThreadedCode21938, 1, PSend21940);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    // ifTrue:ifFalse:. 
    Send PSend21941 = new_Send((Optr)PSend21930, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock21931, (Optr)PBlock21936);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend21942 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_flush, 0);
    Array PThreadedCode21927 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_send1, (Optr)PSend21928, (Optr)&t_send1, (Optr)PSend21929, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_type_0_1, (Optr)&t_push1, (Optr)int_128, (Optr)&t_send1, (Optr)PSend21930, (Optr)&t_push_closure, (Optr)PBlock21931, (Optr)&t_push_closure, (Optr)PBlock21936, (Optr)&t_send2, (Optr)PSend21941, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21942, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21925 = new_Method_with(PArray21926, empty_Array, empty_Array, PThreadedCode21927, 4, PSend21929, PSend21941, PSend21942, self);
    
    MethodClosure MC_SMB_send_type_ = new_MethodClosure((Method)PMethod21925, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_type_, MC_SMB_send_type_);
}


static void init_SMB_timeout() {
    Symbol SMB_timeout = new_Symbol(L"timeout");
    // timeout. 
    Send PSend21945 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout, 0);
    Array PThreadedCode21944 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21945, (Optr)&t_method_return);
    Method PMethod21943 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21944, 1, PSend21945);
    
    MethodClosure MC_SMB_timeout = new_MethodClosure((Method)PMethod21943, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout, MC_SMB_timeout);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21949 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isConnected = new_Symbol(L"isConnected");
    // isConnected. 
    Send PSend21957 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_isConnected, 0);
    Array PThreadedCode21956 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21957, (Optr)&t_block_return);
    Block PBlock21955 = new_Block_with(empty_Array, empty_Array, PThreadedCode21956, 1, PSend21957);
    Symbol SMB_readMessage = new_Symbol(L"readMessage");
    // readMessage. 
    Send PSend21960 = new_Send((Optr)self, SMB_readMessage, 0);
    SmallInt int_255 = new_SmallInt(255);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_255_Const = new_Constant((Optr)int_255);
    // =. 
    Send PSend21961 = new_Send((Optr)slot_WebClient_Core_WebSocket_frameType, SMB__equals_, 1, (Optr)int_255_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend21965 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_close, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21966 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21964 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21965, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21966, (Optr)&t_block_return);
    Block PBlock21963 = new_Block_with(empty_Array, empty_Array, PThreadedCode21964, 2, PSend21965, PSend21966);
    // ifTrue:. 
    Send PSend21962 = new_Send((Optr)PSend21961, SMB_ifTrue_, 1, (Optr)PBlock21963);
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    // handleMessage:type:. 
    Send PSend21967 = new_Send((Optr)self, SMB_handleMessage_type_, 2, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)slot_WebClient_Core_WebSocket_frameType);
    Array PThreadedCode21959 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21960, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_push1, (Optr)int_255, (Optr)&t_send1, (Optr)PSend21961, (Optr)&t_send_ifTrue_, (Optr)PSend21962, (Optr)PBlock21963, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameData, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_frameType, (Optr)&t_send2, (Optr)PSend21967, (Optr)&t_block_return);
    Block PBlock21958 = new_Block_with(empty_Array, empty_Array, PThreadedCode21959, 3, PSend21960, PSend21962, PSend21967);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend21968 = new_Send((Optr)PBlock21955, SMB_whileTrue_, 1, (Optr)PBlock21958);
    Array PThreadedCode21954 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock21955, (Optr)&t_push_closure, (Optr)PBlock21958, (Optr)&t_send1, (Optr)PSend21968, (Optr)&t_block_return);
    Block PBlock21953 = new_Block_with(empty_Array, empty_Array, PThreadedCode21954, 1, PSend21968);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray21970 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_handleError_ = new_Symbol(L"handleError:");
    // handleError:. 
    Send PSend21972 = new_Send((Optr)self, SMB_handleError_, 1, (Optr)VAR_ex_2_0);
    Array PThreadedCode21971 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend21972, (Optr)&t_method_return);
    Block PBlock21969 = new_Block_with(PArray21970, empty_Array, PThreadedCode21971, 1, PSend21972);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend21973 = new_Send((Optr)PBlock21953, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock21969);
    Array PThreadedCode21952 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock21953, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock21969, (Optr)&t_send2, (Optr)PSend21973, (Optr)&t_block_return);
    Block PBlock21951 = new_Block_with(empty_Array, empty_Array, PThreadedCode21952, 1, PSend21973);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend21978 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend21979 = new_Send((Optr)PSend21978, SMB_destroy, 0);
    Array PThreadedCode21977 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend21978, (Optr)&t_send0, (Optr)PSend21979, (Optr)&t_block_return);
    Block PBlock21976 = new_Block_with(empty_Array, empty_Array, PThreadedCode21977, 1, PSend21979);
    Array PArray21981 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21983 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Array PThreadedCode21982 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend21983, (Optr)&t_method_return);
    Block PBlock21980 = new_Block_with(PArray21981, empty_Array, PThreadedCode21982, 1, PSend21983);
    // on:do:. 
    Send PSend21984 = new_Send((Optr)PBlock21976, SMB_on_do_, 2, (Optr)Error_classReference, (Optr)PBlock21980);
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    // handleClose. 
    Send PSend21985 = new_Send((Optr)self, SMB_handleClose, 0);
    Array PThreadedCode21975 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock21976, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_push_closure, (Optr)PBlock21980, (Optr)&t_send2, (Optr)PSend21984, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21985, (Optr)&t_block_return);
    Block PBlock21974 = new_Block_with(empty_Array, empty_Array, PThreadedCode21975, 2, PSend21984, PSend21985);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend21986 = new_Send((Optr)PBlock21951, SMB_ensure_, 1, (Optr)PBlock21974);
    Array PThreadedCode21950 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21951, (Optr)&t_push_closure, (Optr)PBlock21974, (Optr)&t_send1, (Optr)PSend21986, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21948 = new_Block_with(PArray21949, empty_Array, PThreadedCode21950, 2, PSend21986, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21987 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21948);
    Array PThreadedCode21947 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21948, (Optr)&t_send1, (Optr)PSend21987, (Optr)&t_method_return);
    Method PMethod21946 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21947, 1, PSend21987);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod21946, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_onMessage_() {
    Symbol SMB_onMessage_ = new_Symbol(L"onMessage:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21989 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign21991 = new_Assign((Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21990 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21991, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21988 = new_Method_with(PArray21989, empty_Array, empty_Array, PThreadedCode21990, 2, PAssign21991, self);
    
    MethodClosure MC_SMB_onMessage_ = new_MethodClosure((Method)PMethod21988, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onMessage_, MC_SMB_onMessage_);
}


static void init_SMB_onError_() {
    Symbol SMB_onError_ = new_Symbol(L"onError:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21993 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign21995 = new_Assign((Optr)slot_WebClient_Core_WebSocket_errorBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21994 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21995, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21992 = new_Method_with(PArray21993, empty_Array, empty_Array, PThreadedCode21994, 2, PAssign21995, self);
    
    MethodClosure MC_SMB_onError_ = new_MethodClosure((Method)PMethod21992, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onError_, MC_SMB_onError_);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend22002 = new_Send((Optr)self, SMB_run, 0);
    Array PThreadedCode22001 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22002, (Optr)&t_block_return);
    Block PBlock22000 = new_Block_with(empty_Array, empty_Array, PThreadedCode22001, 1, PSend22002);
    // fork. 
    Send PSend21999 = new_Send((Optr)PBlock22000, SMB_fork, 0);
    Assign PAssign21998 = new_Assign((Optr)slot_WebClient_Core_WebSocket_process, (Optr)PSend21999);
    Array PThreadedCode21997 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign21998, (Optr)&t_push_closure, (Optr)PBlock22000, (Optr)&t_send0, (Optr)PSend21999, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21996 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21997, 2, PAssign21998, self);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod21996, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_handleClose() {
    Symbol SMB_handleClose = new_Symbol(L"handleClose");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend22007 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22008 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22007);
    Array PThreadedCode22006 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22007, (Optr)&t_send1, (Optr)PSend22008, (Optr)&t_block_return);
    Block PBlock22005 = new_Block_with(empty_Array, empty_Array, PThreadedCode22006, 1, PSend22008);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22009 = new_Send((Optr)slot_WebClient_Core_WebSocket_closeBlock, SMB_ifNotNil_, 1, (Optr)PBlock22005);
    Array PThreadedCode22004 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)&t_push_closure, (Optr)PBlock22005, (Optr)&t_send1, (Optr)PSend22009, (Optr)&t_method_return);
    Method PMethod22003 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22004, 1, PSend22009);
    
    MethodClosure MC_SMB_handleClose = new_MethodClosure((Method)PMethod22003, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_handleClose, MC_SMB_handleClose);
}


static void init_SMB_onClose_() {
    Symbol SMB_onClose_ = new_Symbol(L"onClose:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22011 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign22013 = new_Assign((Optr)slot_WebClient_Core_WebSocket_closeBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22012 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22013, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22010 = new_Method_with(PArray22011, empty_Array, empty_Array, PThreadedCode22012, 2, PAssign22013, self);
    
    MethodClosure MC_SMB_onClose_ = new_MethodClosure((Method)PMethod22010, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_onClose_, MC_SMB_onClose_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22015 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22017 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22018 = new_Send((Optr)PSend22017, SMB_name, 0);
    // printOn:. 
    Send PSend22019 = new_Send((Optr)PSend22018, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22021 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5746 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5746_Const = new_Constant((Optr)char_5746);
    // <<. 
    Send PSend22023 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5746_Const);
    // <<. 
    Send PSend22024 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)slot_WebClient_Core_WebSocket_name);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22025 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22022 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5746, (Optr)&t_send1, (Optr)PSend22023, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_name, (Optr)&t_send1, (Optr)PSend22024, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22025, (Optr)&t_method_return);
    Block PBlock22020 = new_Block_with(PArray22021, empty_Array, PThreadedCode22022, 3, PSend22023, PSend22024, PSend22025);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22026 = new_Send((Optr)PBlock22020, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22016 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22017, (Optr)&t_send0, (Optr)PSend22018, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22019, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22020, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22026, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22014 = new_Method_with(PArray22015, empty_Array, empty_Array, PThreadedCode22016, 3, PSend22019, PSend22026, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22014, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_handleMessage_type_() {
    Symbol SMB_handleMessage_type_ = new_Symbol(L"handleMessage:type:");
    Variable VAR_msgData_0_0 = new_Variable_named(L"msgData", 0);
    Variable VAR_msgType_0_1 = new_Variable_named(L"msgType", 0);
    Array PArray22028 = new_Array_with(2, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend22032 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_msgData_0_0, (Optr)VAR_msgType_0_1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend22033 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_valueWithPossibleArgs_, 1, (Optr)PSend22032);
    Array PThreadedCode22031 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_msgData_0_0, (Optr)&t_push_variable, (Optr)VAR_msgType_0_1, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend22032, (Optr)&t_send1, (Optr)PSend22033, (Optr)&t_block_return);
    Block PBlock22030 = new_Block_with(empty_Array, empty_Array, PThreadedCode22031, 1, PSend22033);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22034 = new_Send((Optr)slot_WebClient_Core_WebSocket_messageBlock, SMB_ifNotNil_, 1, (Optr)PBlock22030);
    Array PThreadedCode22029 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_messageBlock, (Optr)&t_push_closure, (Optr)PBlock22030, (Optr)&t_send1, (Optr)PSend22034, (Optr)&t_method_return);
    Method PMethod22027 = new_Method_with(PArray22028, empty_Array, empty_Array, PThreadedCode22029, 1, PSend22034);
    
    MethodClosure MC_SMB_handleMessage_type_ = new_MethodClosure((Method)PMethod22027, WebClient_Core_WebSocket_Class);
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
    Array PArray22036 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22038 = new_Assign((Optr)slot_WebClient_Core_WebSocket_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22044 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22043 = new_Send((Optr)PSend22044, SMB_remoteAddress, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend22042 = new_Send((Optr)PSend22043, SMB_asString, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_22045 = new_String(L":");
    Constant string_22045_Const = new_Constant((Optr)string_22045);
    // ,. 
    Send PSend22041 = new_Send((Optr)PSend22042, SMB__append_, 1, (Optr)string_22045_Const);
    // socket. 
    Send PSend22047 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_socket, 0);
    Symbol SMB_remotePort = new_Symbol(L"remotePort");
    // remotePort. 
    Send PSend22046 = new_Send((Optr)PSend22047, SMB_remotePort, 0);
    // ,. 
    Send PSend22040 = new_Send((Optr)PSend22041, SMB__append_, 1, (Optr)PSend22046);
    Assign PAssign22039 = new_Assign((Optr)slot_WebClient_Core_WebSocket_name, (Optr)PSend22040);
    Array PThreadedCode22037 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign22038, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22039, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22044, (Optr)&t_send0, (Optr)PSend22043, (Optr)&t_send0, (Optr)PSend22042, (Optr)&t_push1, (Optr)string_22045, (Optr)&t_send1, (Optr)PSend22041, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_send0, (Optr)PSend22047, (Optr)&t_send0, (Optr)PSend22046, (Optr)&t_send1, (Optr)PSend22040, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22035 = new_Method_with(PArray22036, empty_Array, empty_Array, PThreadedCode22037, 3, PAssign22038, PAssign22039, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22035, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_timeout_() {
    Symbol SMB_timeout_ = new_Symbol(L"timeout:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray22049 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    // timeout:. 
    Send PSend22051 = new_Send((Optr)slot_WebClient_Core_WebSocket_stream, SMB_timeout_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode22050 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebSocket_stream, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend22051, (Optr)&t_method_return);
    Method PMethod22048 = new_Method_with(PArray22049, empty_Array, empty_Array, PThreadedCode22050, 1, PSend22051);
    
    MethodClosure MC_SMB_timeout_ = new_MethodClosure((Method)PMethod22048, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_timeout_, MC_SMB_timeout_);
}


static void init_SMB_send_() {
    Symbol SMB_send_ = new_Symbol(L"send:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22053 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_send_type_ = new_Symbol(L"send:type:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // send:type:. 
    Send PSend22055 = new_Send((Optr)self, SMB_send_type_, 2, (Optr)VAR_aString_0_0, (Optr)int_0_Const);
    Array PThreadedCode22054 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend22055, (Optr)&t_method_return);
    Method PMethod22052 = new_Method_with(PArray22053, empty_Array, empty_Array, PThreadedCode22054, 1, PSend22055);
    
    MethodClosure MC_SMB_send_ = new_MethodClosure((Method)PMethod22052, WebClient_Core_WebSocket_Class);
    store_method(WebClient_Core_WebSocket_Class, SMB_send_, MC_SMB_send_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22057 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22059 = new_Send((Optr)self, SMB_new, 0);
    // on:. 
    Send PSend22060 = new_Send((Optr)PSend22059, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22058 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22059, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22060, (Optr)&t_method_return);
    Method PMethod22056 = new_Method_with(PArray22057, empty_Array, empty_Array, PThreadedCode22058, 1, PSend22060);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod22056, HEADER(WebClient_Core_WebSocket_Class));
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