#include <lib/class/WebClient/Core/WebMessage.h>


Optr slot_WebClient_Core_WebMessage_Class_class_statusCodes;
Optr layout_WebClient_Core_WebMessage_Class_class;
Optr slot_WebClient_Core_WebMessage_stream;
Optr slot_WebClient_Core_WebMessage_protocol;
Optr slot_WebClient_Core_WebMessage_headers;
Optr slot_WebClient_Core_WebMessage_content;
Optr layout_WebClient_Core_WebMessage;


static void init_SMB_contentType() {
    Symbol SMB_contentType = new_Symbol(L"contentType");
    String string_22923 = new_String(L"Content-Type");
    String string_22926 = new_String(L"application/octet-stream");
    Array PThreadedCode22925 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22926, (Optr)&t_block_return);
    Constant string_22926_Const = new_Constant((Optr)string_22926);
    Block PBlock22924 = new_Block_with(empty_Array, empty_Array, PThreadedCode22925, 1, string_22926_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_22923_Const = new_Constant((Optr)string_22923);
    // headerAt:ifAbsent:. 
    Send PSend22927 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_22923_Const, (Optr)PBlock22924);
    Array PThreadedCode22922 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22923, (Optr)&t_push_closure, (Optr)PBlock22924, (Optr)&t_send2, (Optr)PSend22927, (Optr)&t_method_return);
    Method PMethod22921 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22922, 1, PSend22927);
    
    MethodClosure MC_SMB_contentType = new_MethodClosure((Method)PMethod22921, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType, MC_SMB_contentType);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22932 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_close, 0);
    Array PThreadedCode22931 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22932, (Optr)&t_block_return);
    Block PBlock22930 = new_Block_with(empty_Array, empty_Array, PThreadedCode22931, 1, PSend22932);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22933 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock22930);
    Array PThreadedCode22929 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock22930, (Optr)&t_send1, (Optr)PSend22933, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22928 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22929, 2, PSend22933, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22928, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_contentStream() {
    Symbol SMB_contentStream = new_Symbol(L"contentStream");
    Array PThreadedCode22935 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod22934 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22935, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_contentStream = new_MethodClosure((Method)PMethod22934, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentStream, MC_SMB_contentStream);
}


static void init_SMB_remoteHost() {
    Symbol SMB_remoteHost = new_Symbol(L"remoteHost");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22939 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend22941 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isKindOf_, 1, (Optr)PSocketStream_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22945 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22944 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22945, (Optr)&t_block_return);
    Block PBlock22943 = new_Block_with(empty_Array, empty_Array, PThreadedCode22944, 1, PSend22945);
    // ifFalse:. 
    Send PSend22942 = new_Send((Optr)PSend22941, SMB_ifFalse_, 1, (Optr)PBlock22943);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22946 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22947 = new_Send((Optr)PSend22946, SMB_remoteAddress, 0);
    Array PThreadedCode22940 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_send1, (Optr)PSend22941, (Optr)&t_send_ifFalse_, (Optr)PSend22942, (Optr)PBlock22943, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22946, (Optr)&t_send0, (Optr)PSend22947, (Optr)&t_method_return);
    Block PBlock22938 = new_Block_with(PArray22939, empty_Array, PThreadedCode22940, 2, PSend22942, PSend22947);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22948 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22938);
    Array PThreadedCode22937 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22938, (Optr)&t_send1, (Optr)PSend22948, (Optr)&t_method_return);
    Method PMethod22936 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22937, 1, PSend22948);
    
    MethodClosure MC_SMB_remoteHost = new_MethodClosure((Method)PMethod22936, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_remoteHost, MC_SMB_remoteHost);
}


static void init_SMB_stream_() {
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22950 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22952 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22951 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22952, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22949 = new_Method_with(PArray22950, empty_Array, empty_Array, PThreadedCode22951, 2, PAssign22952, self);
    
    MethodClosure MC_SMB_stream_ = new_MethodClosure((Method)PMethod22949, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream_, MC_SMB_stream_);
}


static void init_SMB_headersAt_ifAbsent_() {
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray22954 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_hdrs_0_2 = new_Variable_named(L"hdrs", 0);
    Array PArray22955 = new_Array_with(1, (Optr)VAR_hdrs_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22958 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign22957 = new_Assign((Optr)VAR_hdrs_0_2, (Optr)PSend22958);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray22960 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22962 = new_Send((Optr)VAR_hdrs_0_2, SMB_add_, 1, (Optr)VAR_value_1_0);
    Array PThreadedCode22961 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send1, (Optr)PSend22962, (Optr)&t_method_return);
    Block PBlock22959 = new_Block_with(PArray22960, empty_Array, PThreadedCode22961, 1, PSend22962);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend22963 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22959);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22964 = new_Send((Optr)VAR_hdrs_0_2, SMB_asArray, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend22967 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode22966 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend22967, (Optr)&t_block_return);
    Block PBlock22965 = new_Block_with(empty_Array, empty_Array, PThreadedCode22966, 1, PSend22967);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    // ifEmpty:. 
    Send PSend22968 = new_Send((Optr)PSend22964, SMB_ifEmpty_, 1, (Optr)PBlock22965);
    Array PThreadedCode22956 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign22957, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22958, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22959, (Optr)&t_send2, (Optr)PSend22963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_send0, (Optr)PSend22964, (Optr)&t_push_closure, (Optr)PBlock22965, (Optr)&t_send1, (Optr)PSend22968, (Optr)&t_method_return);
    Method PMethod22953 = new_Method_with(PArray22954, PArray22955, empty_Array, PThreadedCode22956, 3, PAssign22957, PSend22963, PSend22968);
    
    MethodClosure MC_SMB_headersAt_ifAbsent_ = new_MethodClosure((Method)PMethod22953, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_ifAbsent_, MC_SMB_headersAt_ifAbsent_);
}


static void init_SMB_headerAt_() {
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22970 = new_Array_with(1, (Optr)VAR_key_0_0);
    String string_22974 = new_String(L"");
    Array PThreadedCode22973 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22974, (Optr)&t_block_return);
    Constant string_22974_Const = new_Constant((Optr)string_22974);
    Block PBlock22972 = new_Block_with(empty_Array, empty_Array, PThreadedCode22973, 1, string_22974_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    // headerAt:ifAbsent:. 
    Send PSend22975 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22972);
    Array PThreadedCode22971 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22972, (Optr)&t_send2, (Optr)PSend22975, (Optr)&t_method_return);
    Method PMethod22969 = new_Method_with(PArray22970, empty_Array, empty_Array, PThreadedCode22971, 1, PSend22975);
    
    MethodClosure MC_SMB_headerAt_ = new_MethodClosure((Method)PMethod22969, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_, MC_SMB_headerAt_);
}


static void init_SMB_chunkFrom_to_progress_() {
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_progressBlock_0_2 = new_Variable_named(L"progressBlock", 0);
    Array PArray22977 = new_Array_with(3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_2);
    Variable VAR_chunkSize_0_3 = new_Variable_named(L"chunkSize", 0);
    Variable VAR_firstLine_0_4 = new_Variable_named(L"firstLine", 0);
    Variable VAR_buffer_0_5 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_6 = new_Variable_named(L"totalRead", 0);
    Array PArray22978 = new_Array_with(4, (Optr)VAR_chunkSize_0_3, (Optr)VAR_firstLine_0_4, (Optr)VAR_buffer_0_5, (Optr)VAR_totalRead_0_6);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign22980 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22982 = new_Send((Optr)String_classReference, SMB_new, 0);
    Assign PAssign22981 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend22982);
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    // nextLine. 
    Send PSend22986 = new_Send((Optr)VAR_srcStream_0_0, SMB_nextLine, 0);
    Assign PAssign22985 = new_Assign((Optr)VAR_firstLine_0_4, (Optr)PSend22986);
    String string_22990 = new_String(L"16r");
    Constant string_22990_Const = new_Constant((Optr)string_22990);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend22991 = new_Send((Optr)VAR_firstLine_0_4, SMB_asUppercase, 0);
    // ,. 
    Send PSend22989 = new_Send((Optr)string_22990_Const, SMB__append_, 1, (Optr)PSend22991);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend22988 = new_Send((Optr)PSend22989, SMB_asNumber, 0);
    Assign PAssign22987 = new_Assign((Optr)VAR_chunkSize_0_3, (Optr)PSend22988);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22992 = new_Send((Optr)VAR_chunkSize_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode22984 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign22985, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_send0, (Optr)PSend22986, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22987, (Optr)&t_push1, (Optr)string_22990, (Optr)&t_push_variable, (Optr)VAR_firstLine_0_4, (Optr)&t_send0, (Optr)PSend22991, (Optr)&t_send1, (Optr)PSend22989, (Optr)&t_send0, (Optr)PSend22988, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22992, (Optr)&t_block_return);
    Block PBlock22983 = new_Block_with(empty_Array, empty_Array, PThreadedCode22984, 3, PAssign22985, PAssign22987, PSend22992);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend22997 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode22996 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend22997, (Optr)&t_block_return);
    Block PBlock22995 = new_Block_with(empty_Array, empty_Array, PThreadedCode22996, 1, PSend22997);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22998 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock22995);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22999 = new_Send((Optr)VAR_buffer_0_5, SMB_size, 0);
    // =. 
    Send PSend23000 = new_Send((Optr)PSend22999, SMB__equals_, 1, (Optr)VAR_chunkSize_0_3);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23006 = new_Send((Optr)VAR_buffer_0_5, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23005 = new_Send((Optr)PSend23006, SMB_new_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23004 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23005);
    Array PThreadedCode23003 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign23004, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23006, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23005, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23002 = new_Block_with(empty_Array, empty_Array, PThreadedCode23003, 1, PAssign23004);
    // ifFalse:. 
    Send PSend23001 = new_Send((Optr)PSend23000, SMB_ifFalse_, 1, (Optr)PBlock23002);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23008 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_chunkSize_0_3, (Optr)VAR_buffer_0_5, (Optr)int_1_Const);
    Assign PAssign23007 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23008);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23009 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)VAR_buffer_0_5);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skip:. 
    Send PSend23010 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend23012 = new_Send((Optr)VAR_totalRead_0_6, SMB__plus_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23011 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)PSend23012);
    Array PThreadedCode22994 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock22995, (Optr)&t_send1, (Optr)PSend22998, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend22999, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23000, (Optr)&t_send_ifFalse_, (Optr)PSend23001, (Optr)PBlock23002, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23007, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23008, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send1, (Optr)PSend23009, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23010, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23011, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23012, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22993 = new_Block_with(empty_Array, empty_Array, PThreadedCode22994, 6, PSend22998, PSend23001, PAssign23007, PSend23009, PSend23010, PAssign23011);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend23013 = new_Send((Optr)PBlock22983, SMB_whileFalse_, 1, (Optr)PBlock22993);
    // skip:. 
    Send PSend23014 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23015 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23018 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23017 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23018, (Optr)&t_block_return);
    Block PBlock23016 = new_Block_with(empty_Array, empty_Array, PThreadedCode23017, 1, PSend23018);
    // ifNotNil:. 
    Send PSend23019 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23016);
    Array PThreadedCode22979 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign22980, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22981, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22982, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22983, (Optr)&t_push_closure, (Optr)PBlock22993, (Optr)&t_send1, (Optr)PSend23013, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23014, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23015, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23016, (Optr)&t_send1, (Optr)PSend23019, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22976 = new_Method_with(PArray22977, PArray22978, empty_Array, PThreadedCode22979, 7, PAssign22980, PAssign22981, PSend23013, PSend23014, PSend23015, PSend23019, self);
    
    MethodClosure MC_SMB_chunkFrom_to_progress_ = new_MethodClosure((Method)PMethod22976, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_chunkFrom_to_progress_, MC_SMB_chunkFrom_to_progress_);
}


static void init_SMB_headersAt_do_() {
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23021 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23024 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23026 = new_Send((Optr)VAR_aKey_0_0, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23027 = new_Send((Optr)VAR_key_1_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23028 = new_Send((Optr)PSend23026, SMB__equals_, 1, (Optr)PSend23027);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23032 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_value_1_1);
    Array PThreadedCode23031 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend23032, (Optr)&t_block_return);
    Block PBlock23030 = new_Block_with(empty_Array, empty_Array, PThreadedCode23031, 1, PSend23032);
    // ifTrue:. 
    Send PSend23029 = new_Send((Optr)PSend23028, SMB_ifTrue_, 1, (Optr)PBlock23030);
    Array PThreadedCode23025 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send0, (Optr)PSend23026, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send0, (Optr)PSend23027, (Optr)&t_send1, (Optr)PSend23028, (Optr)&t_send_ifTrue_, (Optr)PSend23029, (Optr)PBlock23030, (Optr)&t_method_return);
    Block PBlock23023 = new_Block_with(PArray23024, empty_Array, PThreadedCode23025, 1, PSend23029);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23033 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23023);
    Array PThreadedCode23022 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23023, (Optr)&t_send1, (Optr)PSend23033, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23020 = new_Method_with(PArray23021, empty_Array, empty_Array, PThreadedCode23022, 2, PSend23033, self);
    
    MethodClosure MC_SMB_headersAt_do_ = new_MethodClosure((Method)PMethod23020, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_do_, MC_SMB_headersAt_do_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23035 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23037 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend23038 = new_Send((Optr)PSend23037, SMB_name, 0);
    // printOn:. 
    Send PSend23039 = new_Send((Optr)PSend23038, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend23040 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23041 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend23042 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode23036 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23037, (Optr)&t_send0, (Optr)PSend23038, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23039, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend23040, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23041, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend23042, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23034 = new_Method_with(PArray23035, empty_Array, empty_Array, PThreadedCode23036, 5, PSend23039, PSend23040, PSend23041, PSend23042, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod23034, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_contentLength() {
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23046 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23048 = new_String(L"Content-Length");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23051 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23050 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23051, (Optr)&t_block_return);
    Block PBlock23049 = new_Block_with(empty_Array, empty_Array, PThreadedCode23050, 1, PSend23051);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23048_Const = new_Constant((Optr)string_23048);
    // headerAt:ifAbsent:. 
    Send PSend23052 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23048_Const, (Optr)PBlock23049);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend23053 = new_Send((Optr)PSend23052, SMB_asInteger, 0);
    Array PThreadedCode23047 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23048, (Optr)&t_push_closure, (Optr)PBlock23049, (Optr)&t_send2, (Optr)PSend23052, (Optr)&t_send0, (Optr)PSend23053, (Optr)&t_method_return);
    Block PBlock23045 = new_Block_with(PArray23046, empty_Array, PThreadedCode23047, 1, PSend23053);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23054 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23045);
    Array PThreadedCode23044 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23045, (Optr)&t_send1, (Optr)PSend23054, (Optr)&t_method_return);
    Method PMethod23043 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23044, 1, PSend23054);
    
    MethodClosure MC_SMB_contentLength = new_MethodClosure((Method)PMethod23043, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength, MC_SMB_contentLength);
}


static void init_SMB_headersAt_() {
    Symbol SMB_headersAt_ = new_Symbol(L"headersAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23056 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23060 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23061 = new_Send((Optr)PSend23060, SMB_asArray, 0);
    Array PThreadedCode23059 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23060, (Optr)&t_send0, (Optr)PSend23061, (Optr)&t_block_return);
    Block PBlock23058 = new_Block_with(empty_Array, empty_Array, PThreadedCode23059, 1, PSend23061);
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    // headersAt:ifAbsent:. 
    Send PSend23062 = new_Send((Optr)self, SMB_headersAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23058);
    Array PThreadedCode23057 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23058, (Optr)&t_send2, (Optr)PSend23062, (Optr)&t_method_return);
    Method PMethod23055 = new_Method_with(PArray23056, empty_Array, empty_Array, PThreadedCode23057, 1, PSend23062);
    
    MethodClosure MC_SMB_headersAt_ = new_MethodClosure((Method)PMethod23055, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_, MC_SMB_headersAt_);
}


static void init_SMB_protocol_() {
    Symbol SMB_protocol_ = new_Symbol(L"protocol:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23064 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23066 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_aString_0_0);
    Array PThreadedCode23065 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23066, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23063 = new_Method_with(PArray23064, empty_Array, empty_Array, PThreadedCode23065, 2, PAssign23066, self);
    
    MethodClosure MC_SMB_protocol_ = new_MethodClosure((Method)PMethod23063, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol_, MC_SMB_protocol_);
}


static void init_SMB_contentLength_() {
    Symbol SMB_contentLength_ = new_Symbol(L"contentLength:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray23068 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    String string_23070 = new_String(L"Content-Length");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23070_Const = new_Constant((Optr)string_23070);
    // headerAt:put:. 
    Send PSend23071 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23070_Const, (Optr)VAR_aNumber_0_0);
    Array PThreadedCode23069 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23070, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send2, (Optr)PSend23071, (Optr)&t_method_return);
    Method PMethod23067 = new_Method_with(PArray23068, empty_Array, empty_Array, PThreadedCode23069, 1, PSend23071);
    
    MethodClosure MC_SMB_contentLength_ = new_MethodClosure((Method)PMethod23067, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength_, MC_SMB_contentLength_);
}


static void init_SMB_streamFrom_to_size_progress_() {
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_sizeOrNil_0_2 = new_Variable_named(L"sizeOrNil", 0);
    Variable VAR_progressBlock_0_3 = new_Variable_named(L"progressBlock", 0);
    Array PArray23073 = new_Array_with(4, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_progressBlock_0_3);
    Variable VAR_buffer_0_4 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_5 = new_Variable_named(L"totalRead", 0);
    Variable VAR_remaining_0_6 = new_Variable_named(L"remaining", 0);
    Variable VAR_size_0_7 = new_Variable_named(L"size", 0);
    Array PArray23074 = new_Array_with(4, (Optr)VAR_buffer_0_4, (Optr)VAR_totalRead_0_5, (Optr)VAR_remaining_0_6, (Optr)VAR_size_0_7);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23077 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23079 = new_String(L"transfer-encoding");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23079_Const = new_Constant((Optr)string_23079);
    // headerAt:. 
    Send PSend23080 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23079_Const);
    Variable VAR_encoding_2_0 = new_Variable_named(L"encoding", 2);
    Array PArray23082 = new_Array_with(1, (Optr)VAR_encoding_2_0);
    String string_23084 = new_String(L"chunked");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23084_Const = new_Constant((Optr)string_23084);
    // =. 
    Send PSend23085 = new_Send((Optr)VAR_encoding_2_0, SMB__equals_, 1, (Optr)string_23084_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    // chunkFrom:to:progress:. 
    Send PSend23089 = new_Send((Optr)self, SMB_chunkFrom_to_progress_, 3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_3);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23090 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23089);
    Array PThreadedCode23088 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_send3, (Optr)PSend23089, (Optr)&t_send1, (Optr)PSend23090, (Optr)&t_block_return);
    Block PBlock23087 = new_Block_with(empty_Array, empty_Array, PThreadedCode23088, 1, PSend23090);
    String string_23093 = new_String(L"Unknown transfer-encoding: ");
    Constant string_23093_Const = new_Constant((Optr)string_23093);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23094 = new_Send((Optr)string_23093_Const, SMB__append_, 1, (Optr)VAR_encoding_2_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23095 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23094);
    Array PThreadedCode23092 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23093, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_send1, (Optr)PSend23094, (Optr)&t_send1, (Optr)PSend23095, (Optr)&t_block_return);
    Block PBlock23091 = new_Block_with(empty_Array, empty_Array, PThreadedCode23092, 1, PSend23095);
    // ifTrue:ifFalse:. 
    Send PSend23086 = new_Send((Optr)PSend23085, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23087, (Optr)PBlock23091);
    Array PThreadedCode23083 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_push1, (Optr)string_23084, (Optr)&t_send1, (Optr)PSend23085, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23086, (Optr)PBlock23087, (Optr)PBlock23091, (Optr)&t_method_return);
    Block PBlock23081 = new_Block_with(PArray23082, empty_Array, PThreadedCode23083, 1, PSend23086);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23096 = new_Send((Optr)PSend23080, SMB_ifNotEmpty_, 1, (Optr)PBlock23081);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend23097 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend23101 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23100 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23101, (Optr)&t_block_return);
    Block PBlock23099 = new_Block_with(empty_Array, empty_Array, PThreadedCode23100, 1, PSend23101);
    // ifTrue:. 
    Send PSend23098 = new_Send((Optr)PSend23097, SMB_ifTrue_, 1, (Optr)PBlock23099);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    // new:. 
    Send PSend23103 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4096_Const);
    Assign PAssign23102 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23103);
    Assign PAssign23104 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)int_0_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Array PThreadedCode23108 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    Block PBlock23107 = new_Block_with(empty_Array, empty_Array, PThreadedCode23108, 1, int_0_Const);
    // ifNil:. 
    Send PSend23106 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_, 1, (Optr)PBlock23107);
    Assign PAssign23105 = new_Assign((Optr)VAR_size_0_7, (Optr)PSend23106);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend23111 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend23114 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23115 = new_Send((Optr)PSend23114, SMB_not, 0);
    Array PThreadedCode23113 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23114, (Optr)&t_send0, (Optr)PSend23115, (Optr)&t_block_return);
    Block PBlock23112 = new_Block_with(empty_Array, empty_Array, PThreadedCode23113, 1, PSend23115);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23116 = new_Send((Optr)PSend23111, SMB_and_, 1, (Optr)PBlock23112);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend23119 = new_Send((Optr)VAR_totalRead_0_5, SMB__lt_, 1, (Optr)VAR_size_0_7);
    Array PThreadedCode23118 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_size_0_7, (Optr)&t_send1, (Optr)PSend23119, (Optr)&t_block_return);
    Block PBlock23117 = new_Block_with(empty_Array, empty_Array, PThreadedCode23118, 1, PSend23119);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23120 = new_Send((Optr)PSend23116, SMB_or_, 1, (Optr)PBlock23117);
    Array PThreadedCode23110 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23111, (Optr)&t_push_closure, (Optr)PBlock23112, (Optr)&t_send1, (Optr)PSend23116, (Optr)&t_push_closure, (Optr)PBlock23117, (Optr)&t_send1, (Optr)PSend23120, (Optr)&t_block_return);
    Block PBlock23109 = new_Block_with(empty_Array, empty_Array, PThreadedCode23110, 1, PSend23120);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23125 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23124 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23125, (Optr)&t_block_return);
    Block PBlock23123 = new_Block_with(empty_Array, empty_Array, PThreadedCode23124, 1, PSend23125);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23126 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23123);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    SmallInt int_99999 = new_SmallInt(99999);
    Array PThreadedCode23130 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_99999, (Optr)&t_block_return);
    Constant int_99999_Const = new_Constant((Optr)int_99999);
    Block PBlock23129 = new_Block_with(empty_Array, empty_Array, PThreadedCode23130, 1, int_99999_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend23133 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__minus_, 1, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23132 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send1, (Optr)PSend23133, (Optr)&t_block_return);
    Block PBlock23131 = new_Block_with(empty_Array, empty_Array, PThreadedCode23132, 1, PSend23133);
    // ifNil:ifNotNil:. 
    Send PSend23128 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23129, (Optr)PBlock23131);
    Assign PAssign23127 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23128);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23134 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23135 = new_Send((Optr)VAR_remaining_0_6, SMB__gt_, 1, (Optr)PSend23134);
    // size. 
    Send PSend23140 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Assign PAssign23139 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23140);
    Array PThreadedCode23138 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23139, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23140, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23137 = new_Block_with(empty_Array, empty_Array, PThreadedCode23138, 1, PAssign23139);
    // ifTrue:. 
    Send PSend23136 = new_Send((Optr)PSend23135, SMB_ifTrue_, 1, (Optr)PBlock23137);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23142 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_remaining_0_6, (Optr)VAR_buffer_0_4, (Optr)int_1_Const);
    Assign PAssign23141 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23142);
    // size. 
    Send PSend23143 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // <. 
    Send PSend23144 = new_Send((Optr)VAR_remaining_0_6, SMB__lt_, 1, (Optr)PSend23143);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23148 = new_Send((Optr)VAR_buffer_0_4, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_remaining_0_6);
    Array PThreadedCode23147 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_send2, (Optr)PSend23148, (Optr)&t_block_return);
    Block PBlock23146 = new_Block_with(empty_Array, empty_Array, PThreadedCode23147, 1, PSend23148);
    Array PThreadedCode23150 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_block_return);
    Block PBlock23149 = new_Block_with(empty_Array, empty_Array, PThreadedCode23150, 1, VAR_buffer_0_4);
    // ifTrue:ifFalse:. 
    Send PSend23145 = new_Send((Optr)PSend23144, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23146, (Optr)PBlock23149);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23151 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)PSend23145);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // size. 
    Send PSend23154 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // +. 
    Send PSend23153 = new_Send((Optr)VAR_totalRead_0_5, SMB__plus_, 1, (Optr)PSend23154);
    Assign PAssign23152 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)PSend23153);
    Array PThreadedCode23122 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23123, (Optr)&t_send1, (Optr)PSend23126, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23127, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23129, (Optr)&t_push_closure, (Optr)PBlock23131, (Optr)&t_send2, (Optr)PSend23128, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23134, (Optr)&t_send1, (Optr)PSend23135, (Optr)&t_send_ifTrue_, (Optr)PSend23136, (Optr)PBlock23137, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23141, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23142, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23143, (Optr)&t_send1, (Optr)PSend23144, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23145, (Optr)PBlock23146, (Optr)PBlock23149, (Optr)&t_send1, (Optr)PSend23151, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23152, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23154, (Optr)&t_send1, (Optr)PSend23153, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23121 = new_Block_with(empty_Array, empty_Array, PThreadedCode23122, 6, PSend23126, PAssign23127, PSend23136, PAssign23141, PSend23151, PAssign23152);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23155 = new_Send((Optr)PBlock23109, SMB_whileTrue_, 1, (Optr)PBlock23121);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23156 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23159 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23158 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23159, (Optr)&t_block_return);
    Block PBlock23157 = new_Block_with(empty_Array, empty_Array, PThreadedCode23158, 1, PSend23159);
    // ifNotNil:. 
    Send PSend23160 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23157);
    Array PThreadedCode23078 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23079, (Optr)&t_send1, (Optr)PSend23080, (Optr)&t_push_closure, (Optr)PBlock23081, (Optr)&t_send1, (Optr)PSend23096, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23097, (Optr)&t_send_ifTrue_, (Optr)PSend23098, (Optr)PBlock23099, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23102, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_send1, (Optr)PSend23103, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23104, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23105, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23107, (Optr)&t_send1, (Optr)PSend23106, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23109, (Optr)&t_push_closure, (Optr)PBlock23121, (Optr)&t_send1, (Optr)PSend23155, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23156, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23157, (Optr)&t_send1, (Optr)PSend23160, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23076 = new_Block_with(PArray23077, empty_Array, PThreadedCode23078, 9, PSend23096, PSend23098, PAssign23102, PAssign23104, PAssign23105, PSend23155, PSend23156, PSend23160, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23161 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23076);
    Array PThreadedCode23075 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23076, (Optr)&t_send1, (Optr)PSend23161, (Optr)&t_method_return);
    Method PMethod23072 = new_Method_with(PArray23073, PArray23074, empty_Array, PThreadedCode23075, 1, PSend23161);
    
    MethodClosure MC_SMB_streamFrom_to_size_progress_ = new_MethodClosure((Method)PMethod23072, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_streamFrom_to_size_progress_, MC_SMB_streamFrom_to_size_progress_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23165 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23167 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode23166 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23167, (Optr)&t_method_return);
    Block PBlock23164 = new_Block_with(PArray23165, empty_Array, PThreadedCode23166, 1, PSend23167);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23168 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23164);
    Array PThreadedCode23163 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23164, (Optr)&t_send1, (Optr)PSend23168, (Optr)&t_method_return);
    Method PMethod23162 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23163, 1, PSend23168);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod23162, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_contentWithProgress_() {
    Symbol SMB_contentWithProgress_ = new_Symbol(L"contentWithProgress:");
    Variable VAR_progressBlock_0_0 = new_Variable_named(L"progressBlock", 0);
    Array PArray23170 = new_Array_with(1, (Optr)VAR_progressBlock_0_0);
    Variable VAR_length_1_0 = new_Variable_named(L"length", 1);
    Array PArray23173 = new_Array_with(1, (Optr)VAR_length_1_0);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23176 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23175 = new_Assign((Optr)VAR_length_1_0, (Optr)PSend23176);
    Symbol SMB_new_streamContents_ = new_Symbol(L"new:streamContents:");
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23181 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23180 = new_Block_with(empty_Array, empty_Array, PThreadedCode23181, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23179 = new_Send((Optr)VAR_length_1_0, SMB_ifNil_, 1, (Optr)PBlock23180);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23183 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23185 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_s_2_0, (Optr)VAR_length_1_0, (Optr)VAR_progressBlock_0_0);
    Array PThreadedCode23184 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_0, (Optr)&t_send4, (Optr)PSend23185, (Optr)&t_method_return);
    Block PBlock23182 = new_Block_with(PArray23183, empty_Array, PThreadedCode23184, 1, PSend23185);
    // new:streamContents:. 
    Send PSend23178 = new_Send((Optr)String_classReference, SMB_new_streamContents_, 2, (Optr)PSend23179, (Optr)PBlock23182);
    Assign PAssign23177 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23178);
    Array PThreadedCode23174 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign23175, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23176, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23177, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_closure, (Optr)PBlock23180, (Optr)&t_send1, (Optr)PSend23179, (Optr)&t_push_closure, (Optr)PBlock23182, (Optr)&t_send2, (Optr)PSend23178, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23172 = new_Block_with(empty_Array, PArray23173, PThreadedCode23174, 2, PAssign23175, PAssign23177);
    // ifNil:. 
    Send PSend23186 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23172);
    Array PThreadedCode23171 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23172, (Optr)&t_send1, (Optr)PSend23186, (Optr)&t_method_return);
    Method PMethod23169 = new_Method_with(PArray23170, empty_Array, empty_Array, PThreadedCode23171, 1, PSend23186);
    
    MethodClosure MC_SMB_contentWithProgress_ = new_MethodClosure((Method)PMethod23169, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentWithProgress_, MC_SMB_contentWithProgress_);
}


static void init_SMB_stream() {
    Symbol SMB_stream = new_Symbol(L"stream");
    Array PThreadedCode23188 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23187 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23188, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_stream = new_MethodClosure((Method)PMethod23187, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream, MC_SMB_stream);
}


static void init_SMB_protocol() {
    Symbol SMB_protocol = new_Symbol(L"protocol");
    Array PThreadedCode23190 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_method_return);
    Method PMethod23189 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23190, 1, slot_WebClient_Core_WebMessage_protocol);
    
    MethodClosure MC_SMB_protocol = new_MethodClosure((Method)PMethod23189, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol, MC_SMB_protocol);
}


static void init_SMB_writeHeadersOn_() {
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23192 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23195 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23198 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23200 = new_String(L": ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23200_Const = new_Constant((Optr)string_23200);
    // ,. 
    Send PSend23201 = new_Send((Optr)VAR_key_1_0, SMB__append_, 1, (Optr)string_23200_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23202 = new_Send((Optr)VAR_value_1_1, SMB_asString, 0);
    // ,. 
    Send PSend23203 = new_Send((Optr)PSend23201, SMB__append_, 1, (Optr)PSend23202);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23204 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23203);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23205 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Array PThreadedCode23199 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push1, (Optr)string_23200, (Optr)&t_send1, (Optr)PSend23201, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send0, (Optr)PSend23202, (Optr)&t_send1, (Optr)PSend23203, (Optr)&t_send1, (Optr)PSend23204, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23205, (Optr)&t_method_return);
    Block PBlock23197 = new_Block_with(PArray23198, empty_Array, PThreadedCode23199, 2, PSend23204, PSend23205);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23206 = new_Send((Optr)PBlock23197, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23196 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock23197, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23206, (Optr)&t_method_return);
    Block PBlock23194 = new_Block_with(PArray23195, empty_Array, PThreadedCode23196, 1, PSend23206);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23207 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23194);
    Array PThreadedCode23193 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23194, (Optr)&t_send1, (Optr)PSend23207, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23191 = new_Method_with(PArray23192, empty_Array, empty_Array, PThreadedCode23193, 2, PSend23207, self);
    
    MethodClosure MC_SMB_writeHeadersOn_ = new_MethodClosure((Method)PMethod23191, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeHeadersOn_, MC_SMB_writeHeadersOn_);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23212 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_destroy, 0);
    Array PThreadedCode23211 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23212, (Optr)&t_block_return);
    Block PBlock23210 = new_Block_with(empty_Array, empty_Array, PThreadedCode23211, 1, PSend23212);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23213 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23210);
    Array PThreadedCode23209 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23210, (Optr)&t_send1, (Optr)PSend23213, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23208 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23209, 2, PSend23213, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod23208, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23215 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    // writeHeadersOn:. 
    Send PSend23217 = new_Send((Optr)self, SMB_writeHeadersOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23218 = new_Send((Optr)VAR_aStream_0_0, SMB_crlf, 0);
    Array PThreadedCode23216 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23217, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23218, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23214 = new_Method_with(PArray23215, empty_Array, empty_Array, PThreadedCode23216, 3, PSend23217, PSend23218, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23214, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_headersDo_() {
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23220 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23223 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23225 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23226 = new_Send((Optr)VAR_assoc_1_0, SMB_value, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23227 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend23225, (Optr)PSend23226);
    Array PThreadedCode23224 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23225, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23226, (Optr)&t_send2, (Optr)PSend23227, (Optr)&t_method_return);
    Block PBlock23222 = new_Block_with(PArray23223, empty_Array, PThreadedCode23224, 1, PSend23227);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23228 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23222);
    Array PThreadedCode23221 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23222, (Optr)&t_send1, (Optr)PSend23228, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23219 = new_Method_with(PArray23220, empty_Array, empty_Array, PThreadedCode23221, 2, PSend23228, self);
    
    MethodClosure MC_SMB_headersDo_ = new_MethodClosure((Method)PMethod23219, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersDo_, MC_SMB_headersDo_);
}


static void init_SMB_multipartBoundary() {
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    Variable VAR_header_0_0 = new_Variable_named(L"header", 0);
    Array PArray23230 = new_Array_with(1, (Optr)VAR_header_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23233 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    String string_23237 = new_String(L"Content-Type");
    Constant string_23237_Const = new_Constant((Optr)string_23237);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23240 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23239 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23240, (Optr)&t_block_return);
    Block PBlock23238 = new_Block_with(empty_Array, empty_Array, PThreadedCode23239, 1, PSend23240);
    // headerAt:ifAbsent:. 
    Send PSend23236 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23237_Const, (Optr)PBlock23238);
    Assign PAssign23235 = new_Assign((Optr)VAR_header_0_0, (Optr)PSend23236);
    String string_23241 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23241_Const = new_Constant((Optr)string_23241);
    // beginsWith:. 
    Send PSend23242 = new_Send((Optr)VAR_header_0_0, SMB_beginsWith_, 1, (Optr)string_23241_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend23246 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23245 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23246, (Optr)&t_block_return);
    Block PBlock23244 = new_Block_with(empty_Array, empty_Array, PThreadedCode23245, 1, PSend23246);
    // ifFalse:. 
    Send PSend23243 = new_Send((Optr)PSend23242, SMB_ifFalse_, 1, (Optr)PBlock23244);
    String string_23247 = new_String(L"boundary=");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23247_Const = new_Constant((Optr)string_23247);
    // findString:. 
    Send PSend23248 = new_Send((Optr)VAR_header_0_0, SMB_findString_, 1, (Optr)string_23247_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_9_Const = new_Constant((Optr)int_9);
    // +. 
    Send PSend23249 = new_Send((Optr)PSend23248, SMB__plus_, 1, (Optr)int_9_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23250 = new_Send((Optr)VAR_header_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23251 = new_Send((Optr)VAR_header_0_0, SMB_copyFrom_to_, 2, (Optr)PSend23249, (Optr)PSend23250);
    Array PThreadedCode23234 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23235, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23237, (Optr)&t_push_closure, (Optr)PBlock23238, (Optr)&t_send2, (Optr)PSend23236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23241, (Optr)&t_send1, (Optr)PSend23242, (Optr)&t_send_ifFalse_, (Optr)PSend23243, (Optr)PBlock23244, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23247, (Optr)&t_send1, (Optr)PSend23248, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend23249, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_send0, (Optr)PSend23250, (Optr)&t_send2, (Optr)PSend23251, (Optr)&t_method_return);
    Block PBlock23232 = new_Block_with(PArray23233, empty_Array, PThreadedCode23234, 3, PAssign23235, PSend23243, PSend23251);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23252 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23232);
    Array PThreadedCode23231 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23232, (Optr)&t_send1, (Optr)PSend23252, (Optr)&t_method_return);
    Method PMethod23229 = new_Method_with(empty_Array, PArray23230, empty_Array, PThreadedCode23231, 1, PSend23252);
    
    MethodClosure MC_SMB_multipartBoundary = new_MethodClosure((Method)PMethod23229, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_multipartBoundary, MC_SMB_multipartBoundary);
}


static void init_SMB_closeIfTransient() {
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23255 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23259 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23258 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23259, (Optr)&t_block_return);
    Block PBlock23257 = new_Block_with(empty_Array, empty_Array, PThreadedCode23258, 1, PSend23259);
    // ifFalse:. 
    Send PSend23256 = new_Send((Optr)PSend23255, SMB_ifFalse_, 1, (Optr)PBlock23257);
    Array PThreadedCode23254 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23255, (Optr)&t_send_ifFalse_, (Optr)PSend23256, (Optr)PBlock23257, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23253 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23254, 2, PSend23256, self);
    
    MethodClosure MC_SMB_closeIfTransient = new_MethodClosure((Method)PMethod23253, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_closeIfTransient, MC_SMB_closeIfTransient);
}


static void init_SMB_contentType_() {
    Symbol SMB_contentType_ = new_Symbol(L"contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23261 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23263 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23263_Const = new_Constant((Optr)string_23263);
    // headerAt:put:. 
    Send PSend23264 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23263_Const, (Optr)VAR_aString_0_0);
    Array PThreadedCode23262 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23263, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23264, (Optr)&t_method_return);
    Method PMethod23260 = new_Method_with(PArray23261, empty_Array, empty_Array, PThreadedCode23262, 1, PSend23264);
    
    MethodClosure MC_SMB_contentType_ = new_MethodClosure((Method)PMethod23260, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType_, MC_SMB_contentType_);
}


static void init_SMB_headerAt_put_() {
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23266 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23269 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_assoc_2_0 = new_Variable_named(L"assoc", 2);
    Array PArray23272 = new_Array_with(1, (Optr)VAR_assoc_2_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23274 = new_Send((Optr)VAR_assoc_2_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23275 = new_Send((Optr)PSend23274, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23276 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23277 = new_Send((Optr)PSend23275, SMB__equals_, 1, (Optr)PSend23276);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23281 = new_Send((Optr)VAR_assoc_2_0, SMB_value_, 1, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23282 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23280 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend23281, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23282, (Optr)&t_block_return);
    Block PBlock23279 = new_Block_with(empty_Array, empty_Array, PThreadedCode23280, 2, PSend23281, PSend23282);
    // ifTrue:. 
    Send PSend23278 = new_Send((Optr)PSend23277, SMB_ifTrue_, 1, (Optr)PBlock23279);
    Array PThreadedCode23273 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_send0, (Optr)PSend23274, (Optr)&t_send0, (Optr)PSend23275, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23276, (Optr)&t_send1, (Optr)PSend23277, (Optr)&t_send_ifTrue_, (Optr)PSend23278, (Optr)PBlock23279, (Optr)&t_method_return);
    Block PBlock23271 = new_Block_with(PArray23272, empty_Array, PThreadedCode23273, 1, PSend23278);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23283 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23271);
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    // addHeader:value:. 
    Send PSend23284 = new_Send((Optr)self, SMB_addHeader_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Array PThreadedCode23270 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23271, (Optr)&t_send1, (Optr)PSend23283, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23284, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23268 = new_Block_with(PArray23269, empty_Array, PThreadedCode23270, 3, PSend23283, PSend23284, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23285 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23268);
    Array PThreadedCode23267 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23268, (Optr)&t_send1, (Optr)PSend23285, (Optr)&t_method_return);
    Method PMethod23265 = new_Method_with(PArray23266, empty_Array, empty_Array, PThreadedCode23267, 1, PSend23285);
    
    MethodClosure MC_SMB_headerAt_put_ = new_MethodClosure((Method)PMethod23265, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_put_, MC_SMB_headerAt_put_);
}


static void init_SMB_headerAt_ifAbsent_() {
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23287 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23290 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray23293 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23295 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode23294 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend23295, (Optr)&t_method_return);
    Block PBlock23292 = new_Block_with(PArray23293, empty_Array, PThreadedCode23294, 1, PSend23295);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23296 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23292);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23297 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23291 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23292, (Optr)&t_send2, (Optr)PSend23296, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23297, (Optr)&t_method_return);
    Block PBlock23289 = new_Block_with(PArray23290, empty_Array, PThreadedCode23291, 2, PSend23296, PSend23297);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23298 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23289);
    Array PThreadedCode23288 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23289, (Optr)&t_send1, (Optr)PSend23298, (Optr)&t_method_return);
    Method PMethod23286 = new_Method_with(PArray23287, empty_Array, empty_Array, PThreadedCode23288, 1, PSend23298);
    
    MethodClosure MC_SMB_headerAt_ifAbsent_ = new_MethodClosure((Method)PMethod23286, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_ifAbsent_, MC_SMB_headerAt_ifAbsent_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend23304 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign23303 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23304);
    Array PThreadedCode23302 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23303, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23304, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23301 = new_Block_with(empty_Array, empty_Array, PThreadedCode23302, 1, PAssign23303);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23305 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23301);
    Array PThreadedCode23300 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23301, (Optr)&t_send1, (Optr)PSend23305, (Optr)&t_method_return);
    Method PMethod23299 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23300, 1, PSend23305);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod23299, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR_length_0_0 = new_Variable_named(L"length", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_buffer_0_2 = new_Variable_named(L"buffer", 0);
    Array PArray23307 = new_Array_with(3, (Optr)VAR_length_0_0, (Optr)VAR_size_0_1, (Optr)VAR_buffer_0_2);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23310 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23309 = new_Assign((Optr)VAR_length_0_0, (Optr)PSend23310);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23314 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23313 = new_Block_with(empty_Array, empty_Array, PThreadedCode23314, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23312 = new_Send((Optr)VAR_length_0_0, SMB_ifNil_, 1, (Optr)PBlock23313);
    Assign PAssign23311 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend23312);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23317 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend23316 = new_Send((Optr)PSend23317, SMB_writeStream, 0);
    Assign PAssign23315 = new_Assign((Optr)VAR_buffer_0_2, (Optr)PSend23316);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23318 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_buffer_0_2, (Optr)VAR_length_0_0, (Optr)nil_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend23319 = new_Send((Optr)VAR_buffer_0_2, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23320 = new_Send((Optr)PSend23319, SMB__equals_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_originalContents = new_Symbol(L"originalContents");
    // originalContents. 
    Send PSend23324 = new_Send((Optr)VAR_buffer_0_2, SMB_originalContents, 0);
    Array PThreadedCode23323 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23324, (Optr)&t_block_return);
    Block PBlock23322 = new_Block_with(empty_Array, empty_Array, PThreadedCode23323, 1, PSend23324);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend23327 = new_Send((Optr)VAR_buffer_0_2, SMB_contents, 0);
    Array PThreadedCode23326 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23327, (Optr)&t_block_return);
    Block PBlock23325 = new_Block_with(empty_Array, empty_Array, PThreadedCode23326, 1, PSend23327);
    // ifTrue:ifFalse:. 
    Send PSend23321 = new_Send((Optr)PSend23320, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23322, (Optr)PBlock23325);
    Array PThreadedCode23308 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign23309, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23310, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23311, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_closure, (Optr)PBlock23313, (Optr)&t_send1, (Optr)PSend23312, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23315, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23317, (Optr)&t_send0, (Optr)PSend23316, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23318, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23319, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23320, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23321, (Optr)PBlock23322, (Optr)PBlock23325, (Optr)&t_method_return);
    Method PMethod23306 = new_Method_with(empty_Array, PArray23307, empty_Array, PThreadedCode23308, 5, PAssign23309, PAssign23311, PAssign23315, PSend23318, PSend23321);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod23306, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_isPersistent() {
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23331 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23333 = new_String(L"Connection");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23333_Const = new_Constant((Optr)string_23333);
    // headerAt:. 
    Send PSend23334 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23333_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23335 = new_Send((Optr)PSend23334, SMB_asLowercase, 0);
    String string_23336 = new_String(L"close");
    Constant string_23336_Const = new_Constant((Optr)string_23336);
    // asLowercase. 
    Send PSend23337 = new_Send((Optr)string_23336_Const, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23338 = new_Send((Optr)PSend23335, SMB__equals_, 1, (Optr)PSend23337);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23342 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23341 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23342, (Optr)&t_block_return);
    Block PBlock23340 = new_Block_with(empty_Array, empty_Array, PThreadedCode23341, 1, PSend23342);
    // ifTrue:. 
    Send PSend23339 = new_Send((Optr)PSend23338, SMB_ifTrue_, 1, (Optr)PBlock23340);
    String string_23343 = new_String(L"Connection");
    Constant string_23343_Const = new_Constant((Optr)string_23343);
    // headerAt:. 
    Send PSend23344 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23343_Const);
    // asLowercase. 
    Send PSend23345 = new_Send((Optr)PSend23344, SMB_asLowercase, 0);
    String string_23346 = new_String(L"keep-alive");
    Constant string_23346_Const = new_Constant((Optr)string_23346);
    // asLowercase. 
    Send PSend23347 = new_Send((Optr)string_23346_Const, SMB_asLowercase, 0);
    // =. 
    Send PSend23348 = new_Send((Optr)PSend23345, SMB__equals_, 1, (Optr)PSend23347);
    // escape:. 
    Send PSend23352 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23351 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23352, (Optr)&t_block_return);
    Block PBlock23350 = new_Block_with(empty_Array, empty_Array, PThreadedCode23351, 1, PSend23352);
    // ifTrue:. 
    Send PSend23349 = new_Send((Optr)PSend23348, SMB_ifTrue_, 1, (Optr)PBlock23350);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23353 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23354 = new_String(L"HTTP/1.0");
    Constant string_23354_Const = new_Constant((Optr)string_23354);
    // =. 
    Send PSend23355 = new_Send((Optr)PSend23353, SMB__equals_, 1, (Optr)string_23354_Const);
    // escape:. 
    Send PSend23359 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23358 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23359, (Optr)&t_block_return);
    Block PBlock23357 = new_Block_with(empty_Array, empty_Array, PThreadedCode23358, 1, PSend23359);
    // ifTrue:. 
    Send PSend23356 = new_Send((Optr)PSend23355, SMB_ifTrue_, 1, (Optr)PBlock23357);
    // protocol. 
    Send PSend23360 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23361 = new_String(L"HTTP/1.1");
    Constant string_23361_Const = new_Constant((Optr)string_23361);
    // =. 
    Send PSend23362 = new_Send((Optr)PSend23360, SMB__equals_, 1, (Optr)string_23361_Const);
    // escape:. 
    Send PSend23366 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23365 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23366, (Optr)&t_block_return);
    Block PBlock23364 = new_Block_with(empty_Array, empty_Array, PThreadedCode23365, 1, PSend23366);
    // ifTrue:. 
    Send PSend23363 = new_Send((Optr)PSend23362, SMB_ifTrue_, 1, (Optr)PBlock23364);
    Array PThreadedCode23332 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23333, (Optr)&t_send1, (Optr)PSend23334, (Optr)&t_send0, (Optr)PSend23335, (Optr)&t_push1, (Optr)string_23336, (Optr)&t_send0, (Optr)PSend23337, (Optr)&t_send1, (Optr)PSend23338, (Optr)&t_send_ifTrue_, (Optr)PSend23339, (Optr)PBlock23340, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23343, (Optr)&t_send1, (Optr)PSend23344, (Optr)&t_send0, (Optr)PSend23345, (Optr)&t_push1, (Optr)string_23346, (Optr)&t_send0, (Optr)PSend23347, (Optr)&t_send1, (Optr)PSend23348, (Optr)&t_send_ifTrue_, (Optr)PSend23349, (Optr)PBlock23350, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23353, (Optr)&t_push1, (Optr)string_23354, (Optr)&t_send1, (Optr)PSend23355, (Optr)&t_send_ifTrue_, (Optr)PSend23356, (Optr)PBlock23357, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23360, (Optr)&t_push1, (Optr)string_23361, (Optr)&t_send1, (Optr)PSend23362, (Optr)&t_send_ifTrue_, (Optr)PSend23363, (Optr)PBlock23364, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock23330 = new_Block_with(PArray23331, empty_Array, PThreadedCode23332, 5, PSend23339, PSend23349, PSend23356, PSend23363, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23367 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23330);
    Array PThreadedCode23329 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23330, (Optr)&t_send1, (Optr)PSend23367, (Optr)&t_method_return);
    Method PMethod23328 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23329, 1, PSend23367);
    
    MethodClosure MC_SMB_isPersistent = new_MethodClosure((Method)PMethod23328, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_isPersistent, MC_SMB_isPersistent);
}


static void init_SMB_removeHeader_() {
    Symbol SMB_removeHeader_ = new_Symbol(L"removeHeader:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23369 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23374 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23376 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23377 = new_Send((Optr)PSend23376, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23378 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23379 = new_Send((Optr)PSend23377, SMB__equals_, 1, (Optr)PSend23378);
    Array PThreadedCode23375 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23376, (Optr)&t_send0, (Optr)PSend23377, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23378, (Optr)&t_send1, (Optr)PSend23379, (Optr)&t_method_return);
    Block PBlock23373 = new_Block_with(PArray23374, empty_Array, PThreadedCode23375, 1, PSend23379);
    // reject:. 
    Send PSend23372 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_reject_, 1, (Optr)PBlock23373);
    Assign PAssign23371 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23372);
    Array PThreadedCode23370 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign23371, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23373, (Optr)&t_send1, (Optr)PSend23372, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23368 = new_Method_with(PArray23369, empty_Array, empty_Array, PThreadedCode23370, 2, PAssign23371, self);
    
    MethodClosure MC_SMB_removeHeader_ = new_MethodClosure((Method)PMethod23368, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_removeHeader_, MC_SMB_removeHeader_);
}


static void init_SMB_addHeader_value_() {
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23381 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23383 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23384 = new_Send((Optr)PSend23383, SMB_key_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23385 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_add_, 1, (Optr)PSend23384);
    Array PThreadedCode23382 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23383, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23384, (Optr)&t_send1, (Optr)PSend23385, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23380 = new_Method_with(PArray23381, empty_Array, empty_Array, PThreadedCode23382, 2, PSend23385, self);
    
    MethodClosure MC_SMB_addHeader_value_ = new_MethodClosure((Method)PMethod23380, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_addHeader_value_, MC_SMB_addHeader_value_);
}


static void init_SMB_content_() {
    Symbol SMB_content_ = new_Symbol(L"content:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23387 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23389 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)VAR_aString_0_0);
    Array PThreadedCode23388 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23389, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23386 = new_Method_with(PArray23387, empty_Array, empty_Array, PThreadedCode23388, 2, PAssign23389, self);
    
    MethodClosure MC_SMB_content_ = new_MethodClosure((Method)PMethod23386, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content_, MC_SMB_content_);
}


static void init_class_SMB_statusCodeAt_() {
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray23391 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend23393 = new_Send((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, SMB_at_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode23392 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend23393, (Optr)&t_method_return);
    Method PMethod23390 = new_Method_with(PArray23391, empty_Array, empty_Array, PThreadedCode23392, 1, PSend23393);
    
    MethodClosure MC_SMB_statusCodeAt_ = new_MethodClosure((Method)PMethod23390, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_statusCodeAt_, MC_SMB_statusCodeAt_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23399 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_100 = new_SmallInt(100);
    String string_23401 = new_String(L"Continue");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant int_100_Const = new_Constant((Optr)int_100);
    Constant string_23401_Const = new_Constant((Optr)string_23401);
    // at:put:. 
    Send PSend23402 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_100_Const, (Optr)string_23401_Const);
    SmallInt int_101 = new_SmallInt(101);
    String string_23403 = new_String(L"Switching Protocols");
    Constant int_101_Const = new_Constant((Optr)int_101);
    Constant string_23403_Const = new_Constant((Optr)string_23403);
    // at:put:. 
    Send PSend23404 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_101_Const, (Optr)string_23403_Const);
    SmallInt int_102 = new_SmallInt(102);
    String string_23405 = new_String(L"Processing");
    Constant int_102_Const = new_Constant((Optr)int_102);
    Constant string_23405_Const = new_Constant((Optr)string_23405);
    // at:put:. 
    Send PSend23406 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_102_Const, (Optr)string_23405_Const);
    SmallInt int_200 = new_SmallInt(200);
    String string_23407 = new_String(L"OK");
    Constant int_200_Const = new_Constant((Optr)int_200);
    Constant string_23407_Const = new_Constant((Optr)string_23407);
    // at:put:. 
    Send PSend23408 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_200_Const, (Optr)string_23407_Const);
    SmallInt int_201 = new_SmallInt(201);
    String string_23409 = new_String(L"Created");
    Constant int_201_Const = new_Constant((Optr)int_201);
    Constant string_23409_Const = new_Constant((Optr)string_23409);
    // at:put:. 
    Send PSend23410 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_201_Const, (Optr)string_23409_Const);
    SmallInt int_202 = new_SmallInt(202);
    String string_23411 = new_String(L"Accepted");
    Constant int_202_Const = new_Constant((Optr)int_202);
    Constant string_23411_Const = new_Constant((Optr)string_23411);
    // at:put:. 
    Send PSend23412 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_202_Const, (Optr)string_23411_Const);
    SmallInt int_203 = new_SmallInt(203);
    String string_23413 = new_String(L"Non-Authoritative Information");
    Constant int_203_Const = new_Constant((Optr)int_203);
    Constant string_23413_Const = new_Constant((Optr)string_23413);
    // at:put:. 
    Send PSend23414 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_203_Const, (Optr)string_23413_Const);
    SmallInt int_204 = new_SmallInt(204);
    String string_23415 = new_String(L"No Content");
    Constant int_204_Const = new_Constant((Optr)int_204);
    Constant string_23415_Const = new_Constant((Optr)string_23415);
    // at:put:. 
    Send PSend23416 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_204_Const, (Optr)string_23415_Const);
    SmallInt int_205 = new_SmallInt(205);
    String string_23417 = new_String(L"Reset Content");
    Constant int_205_Const = new_Constant((Optr)int_205);
    Constant string_23417_Const = new_Constant((Optr)string_23417);
    // at:put:. 
    Send PSend23418 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_205_Const, (Optr)string_23417_Const);
    SmallInt int_206 = new_SmallInt(206);
    String string_23419 = new_String(L"Partial Content");
    Constant int_206_Const = new_Constant((Optr)int_206);
    Constant string_23419_Const = new_Constant((Optr)string_23419);
    // at:put:. 
    Send PSend23420 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_206_Const, (Optr)string_23419_Const);
    SmallInt int_207 = new_SmallInt(207);
    String string_23421 = new_String(L"Multi-Status");
    Constant int_207_Const = new_Constant((Optr)int_207);
    Constant string_23421_Const = new_Constant((Optr)string_23421);
    // at:put:. 
    Send PSend23422 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_207_Const, (Optr)string_23421_Const);
    SmallInt int_300 = new_SmallInt(300);
    String string_23423 = new_String(L"Multiple Choices");
    Constant int_300_Const = new_Constant((Optr)int_300);
    Constant string_23423_Const = new_Constant((Optr)string_23423);
    // at:put:. 
    Send PSend23424 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_300_Const, (Optr)string_23423_Const);
    SmallInt int_301 = new_SmallInt(301);
    String string_23425 = new_String(L"Moved Permanently");
    Constant int_301_Const = new_Constant((Optr)int_301);
    Constant string_23425_Const = new_Constant((Optr)string_23425);
    // at:put:. 
    Send PSend23426 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_301_Const, (Optr)string_23425_Const);
    SmallInt int_302 = new_SmallInt(302);
    String string_23427 = new_String(L"Moved Temporarily");
    Constant int_302_Const = new_Constant((Optr)int_302);
    Constant string_23427_Const = new_Constant((Optr)string_23427);
    // at:put:. 
    Send PSend23428 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_302_Const, (Optr)string_23427_Const);
    SmallInt int_303 = new_SmallInt(303);
    String string_23429 = new_String(L"See Other");
    Constant int_303_Const = new_Constant((Optr)int_303);
    Constant string_23429_Const = new_Constant((Optr)string_23429);
    // at:put:. 
    Send PSend23430 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_303_Const, (Optr)string_23429_Const);
    SmallInt int_304 = new_SmallInt(304);
    String string_23431 = new_String(L"Not Modified");
    Constant int_304_Const = new_Constant((Optr)int_304);
    Constant string_23431_Const = new_Constant((Optr)string_23431);
    // at:put:. 
    Send PSend23432 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_304_Const, (Optr)string_23431_Const);
    SmallInt int_305 = new_SmallInt(305);
    String string_23433 = new_String(L"Use Proxy");
    Constant int_305_Const = new_Constant((Optr)int_305);
    Constant string_23433_Const = new_Constant((Optr)string_23433);
    // at:put:. 
    Send PSend23434 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_305_Const, (Optr)string_23433_Const);
    SmallInt int_307 = new_SmallInt(307);
    String string_23435 = new_String(L"Temporary Redirect");
    Constant int_307_Const = new_Constant((Optr)int_307);
    Constant string_23435_Const = new_Constant((Optr)string_23435);
    // at:put:. 
    Send PSend23436 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_307_Const, (Optr)string_23435_Const);
    SmallInt int_400 = new_SmallInt(400);
    String string_23437 = new_String(L"Bad Request");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23437_Const = new_Constant((Optr)string_23437);
    // at:put:. 
    Send PSend23438 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_400_Const, (Optr)string_23437_Const);
    SmallInt int_401 = new_SmallInt(401);
    String string_23439 = new_String(L"Unauthorized");
    Constant int_401_Const = new_Constant((Optr)int_401);
    Constant string_23439_Const = new_Constant((Optr)string_23439);
    // at:put:. 
    Send PSend23440 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_401_Const, (Optr)string_23439_Const);
    SmallInt int_402 = new_SmallInt(402);
    String string_23441 = new_String(L"Payment Required");
    Constant int_402_Const = new_Constant((Optr)int_402);
    Constant string_23441_Const = new_Constant((Optr)string_23441);
    // at:put:. 
    Send PSend23442 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_402_Const, (Optr)string_23441_Const);
    SmallInt int_403 = new_SmallInt(403);
    String string_23443 = new_String(L"Forbidden");
    Constant int_403_Const = new_Constant((Optr)int_403);
    Constant string_23443_Const = new_Constant((Optr)string_23443);
    // at:put:. 
    Send PSend23444 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_403_Const, (Optr)string_23443_Const);
    SmallInt int_404 = new_SmallInt(404);
    String string_23445 = new_String(L"Not Found");
    Constant int_404_Const = new_Constant((Optr)int_404);
    Constant string_23445_Const = new_Constant((Optr)string_23445);
    // at:put:. 
    Send PSend23446 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_404_Const, (Optr)string_23445_Const);
    SmallInt int_405 = new_SmallInt(405);
    String string_23447 = new_String(L"Method Not Allowed");
    Constant int_405_Const = new_Constant((Optr)int_405);
    Constant string_23447_Const = new_Constant((Optr)string_23447);
    // at:put:. 
    Send PSend23448 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_405_Const, (Optr)string_23447_Const);
    SmallInt int_406 = new_SmallInt(406);
    String string_23449 = new_String(L"Not Acceptable");
    Constant int_406_Const = new_Constant((Optr)int_406);
    Constant string_23449_Const = new_Constant((Optr)string_23449);
    // at:put:. 
    Send PSend23450 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_406_Const, (Optr)string_23449_Const);
    SmallInt int_407 = new_SmallInt(407);
    String string_23451 = new_String(L"Proxy Authentication Required");
    Constant int_407_Const = new_Constant((Optr)int_407);
    Constant string_23451_Const = new_Constant((Optr)string_23451);
    // at:put:. 
    Send PSend23452 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_407_Const, (Optr)string_23451_Const);
    SmallInt int_408 = new_SmallInt(408);
    String string_23453 = new_String(L"Request Timeout");
    Constant int_408_Const = new_Constant((Optr)int_408);
    Constant string_23453_Const = new_Constant((Optr)string_23453);
    // at:put:. 
    Send PSend23454 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_408_Const, (Optr)string_23453_Const);
    SmallInt int_409 = new_SmallInt(409);
    String string_23455 = new_String(L"Conflict");
    Constant int_409_Const = new_Constant((Optr)int_409);
    Constant string_23455_Const = new_Constant((Optr)string_23455);
    // at:put:. 
    Send PSend23456 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_409_Const, (Optr)string_23455_Const);
    SmallInt int_410 = new_SmallInt(410);
    String string_23457 = new_String(L"Gone");
    Constant int_410_Const = new_Constant((Optr)int_410);
    Constant string_23457_Const = new_Constant((Optr)string_23457);
    // at:put:. 
    Send PSend23458 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_410_Const, (Optr)string_23457_Const);
    SmallInt int_411 = new_SmallInt(411);
    String string_23459 = new_String(L"Lenght Required");
    Constant int_411_Const = new_Constant((Optr)int_411);
    Constant string_23459_Const = new_Constant((Optr)string_23459);
    // at:put:. 
    Send PSend23460 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_411_Const, (Optr)string_23459_Const);
    SmallInt int_412 = new_SmallInt(412);
    String string_23461 = new_String(L"Precondition Failed");
    Constant int_412_Const = new_Constant((Optr)int_412);
    Constant string_23461_Const = new_Constant((Optr)string_23461);
    // at:put:. 
    Send PSend23462 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_412_Const, (Optr)string_23461_Const);
    SmallInt int_413 = new_SmallInt(413);
    String string_23463 = new_String(L"Request Entity Too Large");
    Constant int_413_Const = new_Constant((Optr)int_413);
    Constant string_23463_Const = new_Constant((Optr)string_23463);
    // at:put:. 
    Send PSend23464 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_413_Const, (Optr)string_23463_Const);
    SmallInt int_414 = new_SmallInt(414);
    String string_23465 = new_String(L"Request-URI Too Long");
    Constant int_414_Const = new_Constant((Optr)int_414);
    Constant string_23465_Const = new_Constant((Optr)string_23465);
    // at:put:. 
    Send PSend23466 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_414_Const, (Optr)string_23465_Const);
    SmallInt int_415 = new_SmallInt(415);
    String string_23467 = new_String(L"Unsupported Media Type");
    Constant int_415_Const = new_Constant((Optr)int_415);
    Constant string_23467_Const = new_Constant((Optr)string_23467);
    // at:put:. 
    Send PSend23468 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_415_Const, (Optr)string_23467_Const);
    SmallInt int_416 = new_SmallInt(416);
    String string_23469 = new_String(L"Requested Range Not Satisfiable");
    Constant int_416_Const = new_Constant((Optr)int_416);
    Constant string_23469_Const = new_Constant((Optr)string_23469);
    // at:put:. 
    Send PSend23470 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_416_Const, (Optr)string_23469_Const);
    SmallInt int_417 = new_SmallInt(417);
    String string_23471 = new_String(L"Expectation Failed");
    Constant int_417_Const = new_Constant((Optr)int_417);
    Constant string_23471_Const = new_Constant((Optr)string_23471);
    // at:put:. 
    Send PSend23472 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_417_Const, (Optr)string_23471_Const);
    SmallInt int_422 = new_SmallInt(422);
    String string_23473 = new_String(L"Unprocessable Entity");
    Constant int_422_Const = new_Constant((Optr)int_422);
    Constant string_23473_Const = new_Constant((Optr)string_23473);
    // at:put:. 
    Send PSend23474 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_422_Const, (Optr)string_23473_Const);
    SmallInt int_423 = new_SmallInt(423);
    String string_23475 = new_String(L"Locked");
    Constant int_423_Const = new_Constant((Optr)int_423);
    Constant string_23475_Const = new_Constant((Optr)string_23475);
    // at:put:. 
    Send PSend23476 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_423_Const, (Optr)string_23475_Const);
    SmallInt int_424 = new_SmallInt(424);
    String string_23477 = new_String(L"Failed Dependency");
    Constant int_424_Const = new_Constant((Optr)int_424);
    Constant string_23477_Const = new_Constant((Optr)string_23477);
    // at:put:. 
    Send PSend23478 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_424_Const, (Optr)string_23477_Const);
    SmallInt int_500 = new_SmallInt(500);
    String string_23479 = new_String(L"Internal Server Error");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23479_Const = new_Constant((Optr)string_23479);
    // at:put:. 
    Send PSend23480 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_500_Const, (Optr)string_23479_Const);
    SmallInt int_501 = new_SmallInt(501);
    String string_23481 = new_String(L"Not Implemented");
    Constant int_501_Const = new_Constant((Optr)int_501);
    Constant string_23481_Const = new_Constant((Optr)string_23481);
    // at:put:. 
    Send PSend23482 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_501_Const, (Optr)string_23481_Const);
    SmallInt int_502 = new_SmallInt(502);
    String string_23483 = new_String(L"Bad Gateway");
    Constant int_502_Const = new_Constant((Optr)int_502);
    Constant string_23483_Const = new_Constant((Optr)string_23483);
    // at:put:. 
    Send PSend23484 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_502_Const, (Optr)string_23483_Const);
    SmallInt int_503 = new_SmallInt(503);
    String string_23485 = new_String(L"Service Unavailable");
    Constant int_503_Const = new_Constant((Optr)int_503);
    Constant string_23485_Const = new_Constant((Optr)string_23485);
    // at:put:. 
    Send PSend23486 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_503_Const, (Optr)string_23485_Const);
    SmallInt int_504 = new_SmallInt(504);
    String string_23487 = new_String(L"Gateway Timeout");
    Constant int_504_Const = new_Constant((Optr)int_504);
    Constant string_23487_Const = new_Constant((Optr)string_23487);
    // at:put:. 
    Send PSend23488 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_504_Const, (Optr)string_23487_Const);
    SmallInt int_505 = new_SmallInt(505);
    String string_23489 = new_String(L"HTTP Version Not Supported");
    Constant int_505_Const = new_Constant((Optr)int_505);
    Constant string_23489_Const = new_Constant((Optr)string_23489);
    // at:put:. 
    Send PSend23490 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_505_Const, (Optr)string_23489_Const);
    SmallInt int_507 = new_SmallInt(507);
    String string_23491 = new_String(L"Insufficient Storage");
    Constant int_507_Const = new_Constant((Optr)int_507);
    Constant string_23491_Const = new_Constant((Optr)string_23491);
    // at:put:. 
    Send PSend23492 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_507_Const, (Optr)string_23491_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23493 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23400 = instantiate_Array_with(ThreadedCode_Class, 0, 419, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_push1, (Optr)string_23401, (Optr)&t_send2, (Optr)PSend23402, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_101, (Optr)&t_push1, (Optr)string_23403, (Optr)&t_send2, (Optr)PSend23404, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_102, (Optr)&t_push1, (Optr)string_23405, (Optr)&t_send2, (Optr)PSend23406, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push1, (Optr)string_23407, (Optr)&t_send2, (Optr)PSend23408, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_201, (Optr)&t_push1, (Optr)string_23409, (Optr)&t_send2, (Optr)PSend23410, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_202, (Optr)&t_push1, (Optr)string_23411, (Optr)&t_send2, (Optr)PSend23412, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_203, (Optr)&t_push1, (Optr)string_23413, (Optr)&t_send2, (Optr)PSend23414, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_204, (Optr)&t_push1, (Optr)string_23415, (Optr)&t_send2, (Optr)PSend23416, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_205, (Optr)&t_push1, (Optr)string_23417, (Optr)&t_send2, (Optr)PSend23418, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_206, (Optr)&t_push1, (Optr)string_23419, (Optr)&t_send2, (Optr)PSend23420, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_207, (Optr)&t_push1, (Optr)string_23421, (Optr)&t_send2, (Optr)PSend23422, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_300, (Optr)&t_push1, (Optr)string_23423, (Optr)&t_send2, (Optr)PSend23424, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push1, (Optr)string_23425, (Optr)&t_send2, (Optr)PSend23426, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push1, (Optr)string_23427, (Optr)&t_send2, (Optr)PSend23428, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_303, (Optr)&t_push1, (Optr)string_23429, (Optr)&t_send2, (Optr)PSend23430, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_304, (Optr)&t_push1, (Optr)string_23431, (Optr)&t_send2, (Optr)PSend23432, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_305, (Optr)&t_push1, (Optr)string_23433, (Optr)&t_send2, (Optr)PSend23434, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_307, (Optr)&t_push1, (Optr)string_23435, (Optr)&t_send2, (Optr)PSend23436, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push1, (Optr)string_23437, (Optr)&t_send2, (Optr)PSend23438, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_401, (Optr)&t_push1, (Optr)string_23439, (Optr)&t_send2, (Optr)PSend23440, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_402, (Optr)&t_push1, (Optr)string_23441, (Optr)&t_send2, (Optr)PSend23442, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_403, (Optr)&t_push1, (Optr)string_23443, (Optr)&t_send2, (Optr)PSend23444, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_404, (Optr)&t_push1, (Optr)string_23445, (Optr)&t_send2, (Optr)PSend23446, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_405, (Optr)&t_push1, (Optr)string_23447, (Optr)&t_send2, (Optr)PSend23448, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_406, (Optr)&t_push1, (Optr)string_23449, (Optr)&t_send2, (Optr)PSend23450, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_407, (Optr)&t_push1, (Optr)string_23451, (Optr)&t_send2, (Optr)PSend23452, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_408, (Optr)&t_push1, (Optr)string_23453, (Optr)&t_send2, (Optr)PSend23454, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_409, (Optr)&t_push1, (Optr)string_23455, (Optr)&t_send2, (Optr)PSend23456, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_410, (Optr)&t_push1, (Optr)string_23457, (Optr)&t_send2, (Optr)PSend23458, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_411, (Optr)&t_push1, (Optr)string_23459, (Optr)&t_send2, (Optr)PSend23460, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_412, (Optr)&t_push1, (Optr)string_23461, (Optr)&t_send2, (Optr)PSend23462, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_413, (Optr)&t_push1, (Optr)string_23463, (Optr)&t_send2, (Optr)PSend23464, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_414, (Optr)&t_push1, (Optr)string_23465, (Optr)&t_send2, (Optr)PSend23466, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_415, (Optr)&t_push1, (Optr)string_23467, (Optr)&t_send2, (Optr)PSend23468, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_416, (Optr)&t_push1, (Optr)string_23469, (Optr)&t_send2, (Optr)PSend23470, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_417, (Optr)&t_push1, (Optr)string_23471, (Optr)&t_send2, (Optr)PSend23472, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_422, (Optr)&t_push1, (Optr)string_23473, (Optr)&t_send2, (Optr)PSend23474, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_423, (Optr)&t_push1, (Optr)string_23475, (Optr)&t_send2, (Optr)PSend23476, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_424, (Optr)&t_push1, (Optr)string_23477, (Optr)&t_send2, (Optr)PSend23478, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push1, (Optr)string_23479, (Optr)&t_send2, (Optr)PSend23480, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_501, (Optr)&t_push1, (Optr)string_23481, (Optr)&t_send2, (Optr)PSend23482, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_502, (Optr)&t_push1, (Optr)string_23483, (Optr)&t_send2, (Optr)PSend23484, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_503, (Optr)&t_push1, (Optr)string_23485, (Optr)&t_send2, (Optr)PSend23486, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_504, (Optr)&t_push1, (Optr)string_23487, (Optr)&t_send2, (Optr)PSend23488, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_505, (Optr)&t_push1, (Optr)string_23489, (Optr)&t_send2, (Optr)PSend23490, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_507, (Optr)&t_push1, (Optr)string_23491, (Optr)&t_send2, (Optr)PSend23492, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23493, (Optr)&t_method_return);
    Block PBlock23398 = new_Block_with(PArray23399, empty_Array, PThreadedCode23400, 47, PSend23402, PSend23404, PSend23406, PSend23408, PSend23410, PSend23412, PSend23414, PSend23416, PSend23418, PSend23420, PSend23422, PSend23424, PSend23426, PSend23428, PSend23430, PSend23432, PSend23434, PSend23436, PSend23438, PSend23440, PSend23442, PSend23444, PSend23446, PSend23448, PSend23450, PSend23452, PSend23454, PSend23456, PSend23458, PSend23460, PSend23462, PSend23464, PSend23466, PSend23468, PSend23470, PSend23472, PSend23474, PSend23476, PSend23478, PSend23480, PSend23482, PSend23484, PSend23486, PSend23488, PSend23490, PSend23492, PSend23493);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23494 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // value:. 
    Send PSend23397 = new_Send((Optr)PBlock23398, SMB_value_, 1, (Optr)PSend23494);
    Assign PAssign23396 = new_Assign((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)PSend23397);
    Array PThreadedCode23395 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign23396, (Optr)&t_push_closure, (Optr)PBlock23398, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23494, (Optr)&t_send1, (Optr)PSend23397, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23394 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23395, 2, PAssign23396, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23394, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_initialize, MC_SMB_initialize);
}

void init_WebClient_Core_PWebMessage_layout() {
    slot_WebClient_Core_WebMessage_Class_class_statusCodes = (Optr)new_Slot(5, L"statusCodes");
    layout_WebClient_Core_WebMessage_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_WebClient_Core_WebMessage_Class_class)->values[5] = slot_WebClient_Core_WebMessage_Class_class_statusCodes; // statusCodes 
    
    Symbol  SMB_WebMessage = new_Symbol(L"WebMessage");
    slot_WebClient_Core_WebMessage_stream = (Optr)new_Slot(0, L"stream");
    slot_WebClient_Core_WebMessage_protocol = (Optr)new_Slot(1, L"protocol");
    slot_WebClient_Core_WebMessage_headers = (Optr)new_Slot(2, L"headers");
    slot_WebClient_Core_WebMessage_content = (Optr)new_Slot(3, L"content");
    layout_WebClient_Core_WebMessage = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_WebClient_Core_WebMessage)->values[0] = slot_WebClient_Core_WebMessage_stream; // stream 
    ((Array)layout_WebClient_Core_WebMessage)->values[1] = slot_WebClient_Core_WebMessage_protocol; // protocol 
    ((Array)layout_WebClient_Core_WebMessage)->values[2] = slot_WebClient_Core_WebMessage_headers; // headers 
    ((Array)layout_WebClient_Core_WebMessage)->values[3] = slot_WebClient_Core_WebMessage_content; // content 
    WebClient_Core_WebMessage_Class = (Class)new_Class(Object_Class, layout_WebClient_Core_WebMessage_Class_class);
    WebClient_Core_WebMessage_Class->layout = layout_WebClient_Core_WebMessage;
    WebClient_Core_WebMessage_Class->name = SMB_WebMessage;
    
}

void init_WebClient_Core_PWebMessage_methods() {
    init_SMB_contentType();
    init_SMB_close();
    init_SMB_contentStream();
    init_SMB_remoteHost();
    init_SMB_stream_();
    init_SMB_headersAt_ifAbsent_();
    init_SMB_headerAt_();
    init_SMB_chunkFrom_to_progress_();
    init_SMB_headersAt_do_();
    init_SMB_printOn_();
    init_SMB_contentLength();
    init_SMB_headersAt_();
    init_SMB_protocol_();
    init_SMB_contentLength_();
    init_SMB_streamFrom_to_size_progress_();
    init_SMB_asString();
    init_SMB_contentWithProgress_();
    init_SMB_stream();
    init_SMB_protocol();
    init_SMB_writeHeadersOn_();
    init_SMB_destroy();
    init_SMB_writeOn_();
    init_SMB_headersDo_();
    init_SMB_multipartBoundary();
    init_SMB_closeIfTransient();
    init_SMB_contentType_();
    init_SMB_headerAt_put_();
    init_SMB_headerAt_ifAbsent_();
    init_SMB_content();
    init_SMB_getContent();
    init_SMB_isPersistent();
    init_SMB_removeHeader_();
    init_SMB_addHeader_value_();
    init_SMB_content_();
    init_class_SMB_statusCodeAt_();
    init_class_SMB_initialize();
    
}