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
    String string_22898 = new_String(L"Content-Type");
    String string_22901 = new_String(L"application/octet-stream");
    Array PThreadedCode22900 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22901, (Optr)&t_block_return);
    Constant string_22901_Const = new_Constant((Optr)string_22901);
    Block PBlock22899 = new_Block_with(empty_Array, empty_Array, PThreadedCode22900, 1, string_22901_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_22898_Const = new_Constant((Optr)string_22898);
    // headerAt:ifAbsent:. 
    Send PSend22902 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_22898_Const, (Optr)PBlock22899);
    Array PThreadedCode22897 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22898, (Optr)&t_push_closure, (Optr)PBlock22899, (Optr)&t_send2, (Optr)PSend22902, (Optr)&t_method_return);
    Method PMethod22896 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22897, 1, PSend22902);
    
    MethodClosure MC_SMB_contentType = new_MethodClosure((Method)PMethod22896, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType, MC_SMB_contentType);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22907 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_close, 0);
    Array PThreadedCode22906 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22907, (Optr)&t_block_return);
    Block PBlock22905 = new_Block_with(empty_Array, empty_Array, PThreadedCode22906, 1, PSend22907);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22908 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock22905);
    Array PThreadedCode22904 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock22905, (Optr)&t_send1, (Optr)PSend22908, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22903 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22904, 2, PSend22908, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22903, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_contentStream() {
    Symbol SMB_contentStream = new_Symbol(L"contentStream");
    Array PThreadedCode22910 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod22909 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22910, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_contentStream = new_MethodClosure((Method)PMethod22909, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentStream, MC_SMB_contentStream);
}


static void init_SMB_remoteHost() {
    Symbol SMB_remoteHost = new_Symbol(L"remoteHost");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22914 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend22916 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isKindOf_, 1, (Optr)PSocketStream_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22920 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22919 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22920, (Optr)&t_block_return);
    Block PBlock22918 = new_Block_with(empty_Array, empty_Array, PThreadedCode22919, 1, PSend22920);
    // ifFalse:. 
    Send PSend22917 = new_Send((Optr)PSend22916, SMB_ifFalse_, 1, (Optr)PBlock22918);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22921 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22922 = new_Send((Optr)PSend22921, SMB_remoteAddress, 0);
    Array PThreadedCode22915 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_send1, (Optr)PSend22916, (Optr)&t_send_ifFalse_, (Optr)PSend22917, (Optr)PBlock22918, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22921, (Optr)&t_send0, (Optr)PSend22922, (Optr)&t_method_return);
    Block PBlock22913 = new_Block_with(PArray22914, empty_Array, PThreadedCode22915, 2, PSend22917, PSend22922);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22923 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22913);
    Array PThreadedCode22912 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22913, (Optr)&t_send1, (Optr)PSend22923, (Optr)&t_method_return);
    Method PMethod22911 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22912, 1, PSend22923);
    
    MethodClosure MC_SMB_remoteHost = new_MethodClosure((Method)PMethod22911, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_remoteHost, MC_SMB_remoteHost);
}


static void init_SMB_stream_() {
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22925 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22927 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22926 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22927, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22924 = new_Method_with(PArray22925, empty_Array, empty_Array, PThreadedCode22926, 2, PAssign22927, self);
    
    MethodClosure MC_SMB_stream_ = new_MethodClosure((Method)PMethod22924, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream_, MC_SMB_stream_);
}


static void init_SMB_headersAt_ifAbsent_() {
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray22929 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_hdrs_0_2 = new_Variable_named(L"hdrs", 0);
    Array PArray22930 = new_Array_with(1, (Optr)VAR_hdrs_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22933 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign22932 = new_Assign((Optr)VAR_hdrs_0_2, (Optr)PSend22933);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray22935 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22937 = new_Send((Optr)VAR_hdrs_0_2, SMB_add_, 1, (Optr)VAR_value_1_0);
    Array PThreadedCode22936 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send1, (Optr)PSend22937, (Optr)&t_method_return);
    Block PBlock22934 = new_Block_with(PArray22935, empty_Array, PThreadedCode22936, 1, PSend22937);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend22938 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22934);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22939 = new_Send((Optr)VAR_hdrs_0_2, SMB_asArray, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend22942 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode22941 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend22942, (Optr)&t_block_return);
    Block PBlock22940 = new_Block_with(empty_Array, empty_Array, PThreadedCode22941, 1, PSend22942);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    // ifEmpty:. 
    Send PSend22943 = new_Send((Optr)PSend22939, SMB_ifEmpty_, 1, (Optr)PBlock22940);
    Array PThreadedCode22931 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign22932, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22933, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22934, (Optr)&t_send2, (Optr)PSend22938, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_send0, (Optr)PSend22939, (Optr)&t_push_closure, (Optr)PBlock22940, (Optr)&t_send1, (Optr)PSend22943, (Optr)&t_method_return);
    Method PMethod22928 = new_Method_with(PArray22929, PArray22930, empty_Array, PThreadedCode22931, 3, PAssign22932, PSend22938, PSend22943);
    
    MethodClosure MC_SMB_headersAt_ifAbsent_ = new_MethodClosure((Method)PMethod22928, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_ifAbsent_, MC_SMB_headersAt_ifAbsent_);
}


static void init_SMB_headerAt_() {
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22945 = new_Array_with(1, (Optr)VAR_key_0_0);
    String string_22949 = new_String(L"");
    Array PThreadedCode22948 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22949, (Optr)&t_block_return);
    Constant string_22949_Const = new_Constant((Optr)string_22949);
    Block PBlock22947 = new_Block_with(empty_Array, empty_Array, PThreadedCode22948, 1, string_22949_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    // headerAt:ifAbsent:. 
    Send PSend22950 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22947);
    Array PThreadedCode22946 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22947, (Optr)&t_send2, (Optr)PSend22950, (Optr)&t_method_return);
    Method PMethod22944 = new_Method_with(PArray22945, empty_Array, empty_Array, PThreadedCode22946, 1, PSend22950);
    
    MethodClosure MC_SMB_headerAt_ = new_MethodClosure((Method)PMethod22944, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_, MC_SMB_headerAt_);
}


static void init_SMB_chunkFrom_to_progress_() {
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_progressBlock_0_2 = new_Variable_named(L"progressBlock", 0);
    Array PArray22952 = new_Array_with(3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_2);
    Variable VAR_chunkSize_0_3 = new_Variable_named(L"chunkSize", 0);
    Variable VAR_firstLine_0_4 = new_Variable_named(L"firstLine", 0);
    Variable VAR_buffer_0_5 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_6 = new_Variable_named(L"totalRead", 0);
    Array PArray22953 = new_Array_with(4, (Optr)VAR_chunkSize_0_3, (Optr)VAR_firstLine_0_4, (Optr)VAR_buffer_0_5, (Optr)VAR_totalRead_0_6);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign22955 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22957 = new_Send((Optr)String_classReference, SMB_new, 0);
    Assign PAssign22956 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend22957);
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    // nextLine. 
    Send PSend22961 = new_Send((Optr)VAR_srcStream_0_0, SMB_nextLine, 0);
    Assign PAssign22960 = new_Assign((Optr)VAR_firstLine_0_4, (Optr)PSend22961);
    String string_22965 = new_String(L"16r");
    Constant string_22965_Const = new_Constant((Optr)string_22965);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend22966 = new_Send((Optr)VAR_firstLine_0_4, SMB_asUppercase, 0);
    // ,. 
    Send PSend22964 = new_Send((Optr)string_22965_Const, SMB__append_, 1, (Optr)PSend22966);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend22963 = new_Send((Optr)PSend22964, SMB_asNumber, 0);
    Assign PAssign22962 = new_Assign((Optr)VAR_chunkSize_0_3, (Optr)PSend22963);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22967 = new_Send((Optr)VAR_chunkSize_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode22959 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign22960, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_send0, (Optr)PSend22961, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22962, (Optr)&t_push1, (Optr)string_22965, (Optr)&t_push_variable, (Optr)VAR_firstLine_0_4, (Optr)&t_send0, (Optr)PSend22966, (Optr)&t_send1, (Optr)PSend22964, (Optr)&t_send0, (Optr)PSend22963, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22967, (Optr)&t_block_return);
    Block PBlock22958 = new_Block_with(empty_Array, empty_Array, PThreadedCode22959, 3, PAssign22960, PAssign22962, PSend22967);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend22972 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode22971 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend22972, (Optr)&t_block_return);
    Block PBlock22970 = new_Block_with(empty_Array, empty_Array, PThreadedCode22971, 1, PSend22972);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22973 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock22970);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22974 = new_Send((Optr)VAR_buffer_0_5, SMB_size, 0);
    // =. 
    Send PSend22975 = new_Send((Optr)PSend22974, SMB__equals_, 1, (Optr)VAR_chunkSize_0_3);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22981 = new_Send((Optr)VAR_buffer_0_5, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend22980 = new_Send((Optr)PSend22981, SMB_new_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign22979 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend22980);
    Array PThreadedCode22978 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22979, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend22981, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend22980, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22977 = new_Block_with(empty_Array, empty_Array, PThreadedCode22978, 1, PAssign22979);
    // ifFalse:. 
    Send PSend22976 = new_Send((Optr)PSend22975, SMB_ifFalse_, 1, (Optr)PBlock22977);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend22983 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_chunkSize_0_3, (Optr)VAR_buffer_0_5, (Optr)int_1_Const);
    Assign PAssign22982 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend22983);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22984 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)VAR_buffer_0_5);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skip:. 
    Send PSend22985 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend22987 = new_Send((Optr)VAR_totalRead_0_6, SMB__plus_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign22986 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)PSend22987);
    Array PThreadedCode22969 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock22970, (Optr)&t_send1, (Optr)PSend22973, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend22974, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend22975, (Optr)&t_send_ifFalse_, (Optr)PSend22976, (Optr)PBlock22977, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22982, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend22983, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send1, (Optr)PSend22984, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22985, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22986, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend22987, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22968 = new_Block_with(empty_Array, empty_Array, PThreadedCode22969, 6, PSend22973, PSend22976, PAssign22982, PSend22984, PSend22985, PAssign22986);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend22988 = new_Send((Optr)PBlock22958, SMB_whileFalse_, 1, (Optr)PBlock22968);
    // skip:. 
    Send PSend22989 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22990 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend22993 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode22992 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend22993, (Optr)&t_block_return);
    Block PBlock22991 = new_Block_with(empty_Array, empty_Array, PThreadedCode22992, 1, PSend22993);
    // ifNotNil:. 
    Send PSend22994 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock22991);
    Array PThreadedCode22954 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign22955, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22956, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22957, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22958, (Optr)&t_push_closure, (Optr)PBlock22968, (Optr)&t_send1, (Optr)PSend22988, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22989, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend22990, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock22991, (Optr)&t_send1, (Optr)PSend22994, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22951 = new_Method_with(PArray22952, PArray22953, empty_Array, PThreadedCode22954, 7, PAssign22955, PAssign22956, PSend22988, PSend22989, PSend22990, PSend22994, self);
    
    MethodClosure MC_SMB_chunkFrom_to_progress_ = new_MethodClosure((Method)PMethod22951, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_chunkFrom_to_progress_, MC_SMB_chunkFrom_to_progress_);
}


static void init_SMB_headersAt_do_() {
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray22996 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray22999 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23001 = new_Send((Optr)VAR_aKey_0_0, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23002 = new_Send((Optr)VAR_key_1_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23003 = new_Send((Optr)PSend23001, SMB__equals_, 1, (Optr)PSend23002);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23007 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_value_1_1);
    Array PThreadedCode23006 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend23007, (Optr)&t_block_return);
    Block PBlock23005 = new_Block_with(empty_Array, empty_Array, PThreadedCode23006, 1, PSend23007);
    // ifTrue:. 
    Send PSend23004 = new_Send((Optr)PSend23003, SMB_ifTrue_, 1, (Optr)PBlock23005);
    Array PThreadedCode23000 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send0, (Optr)PSend23001, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send0, (Optr)PSend23002, (Optr)&t_send1, (Optr)PSend23003, (Optr)&t_send_ifTrue_, (Optr)PSend23004, (Optr)PBlock23005, (Optr)&t_method_return);
    Block PBlock22998 = new_Block_with(PArray22999, empty_Array, PThreadedCode23000, 1, PSend23004);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23008 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock22998);
    Array PThreadedCode22997 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22998, (Optr)&t_send1, (Optr)PSend23008, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22995 = new_Method_with(PArray22996, empty_Array, empty_Array, PThreadedCode22997, 2, PSend23008, self);
    
    MethodClosure MC_SMB_headersAt_do_ = new_MethodClosure((Method)PMethod22995, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_do_, MC_SMB_headersAt_do_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23010 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23012 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend23013 = new_Send((Optr)PSend23012, SMB_name, 0);
    // printOn:. 
    Send PSend23014 = new_Send((Optr)PSend23013, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5737 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5737_Const = new_Constant((Optr)char_5737);
    // <<. 
    Send PSend23015 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5737_Const);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23016 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend23017 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode23011 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23012, (Optr)&t_send0, (Optr)PSend23013, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23014, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5737, (Optr)&t_send1, (Optr)PSend23015, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23016, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend23017, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23009 = new_Method_with(PArray23010, empty_Array, empty_Array, PThreadedCode23011, 5, PSend23014, PSend23015, PSend23016, PSend23017, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod23009, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_contentLength() {
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23021 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23023 = new_String(L"Content-Length");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23026 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23025 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23026, (Optr)&t_block_return);
    Block PBlock23024 = new_Block_with(empty_Array, empty_Array, PThreadedCode23025, 1, PSend23026);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23023_Const = new_Constant((Optr)string_23023);
    // headerAt:ifAbsent:. 
    Send PSend23027 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23023_Const, (Optr)PBlock23024);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend23028 = new_Send((Optr)PSend23027, SMB_asInteger, 0);
    Array PThreadedCode23022 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23023, (Optr)&t_push_closure, (Optr)PBlock23024, (Optr)&t_send2, (Optr)PSend23027, (Optr)&t_send0, (Optr)PSend23028, (Optr)&t_method_return);
    Block PBlock23020 = new_Block_with(PArray23021, empty_Array, PThreadedCode23022, 1, PSend23028);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23029 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23020);
    Array PThreadedCode23019 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23020, (Optr)&t_send1, (Optr)PSend23029, (Optr)&t_method_return);
    Method PMethod23018 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23019, 1, PSend23029);
    
    MethodClosure MC_SMB_contentLength = new_MethodClosure((Method)PMethod23018, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength, MC_SMB_contentLength);
}


static void init_SMB_headersAt_() {
    Symbol SMB_headersAt_ = new_Symbol(L"headersAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23031 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23035 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23036 = new_Send((Optr)PSend23035, SMB_asArray, 0);
    Array PThreadedCode23034 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23035, (Optr)&t_send0, (Optr)PSend23036, (Optr)&t_block_return);
    Block PBlock23033 = new_Block_with(empty_Array, empty_Array, PThreadedCode23034, 1, PSend23036);
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    // headersAt:ifAbsent:. 
    Send PSend23037 = new_Send((Optr)self, SMB_headersAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23033);
    Array PThreadedCode23032 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23033, (Optr)&t_send2, (Optr)PSend23037, (Optr)&t_method_return);
    Method PMethod23030 = new_Method_with(PArray23031, empty_Array, empty_Array, PThreadedCode23032, 1, PSend23037);
    
    MethodClosure MC_SMB_headersAt_ = new_MethodClosure((Method)PMethod23030, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_, MC_SMB_headersAt_);
}


static void init_SMB_protocol_() {
    Symbol SMB_protocol_ = new_Symbol(L"protocol:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23039 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23041 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_aString_0_0);
    Array PThreadedCode23040 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23041, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23038 = new_Method_with(PArray23039, empty_Array, empty_Array, PThreadedCode23040, 2, PAssign23041, self);
    
    MethodClosure MC_SMB_protocol_ = new_MethodClosure((Method)PMethod23038, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol_, MC_SMB_protocol_);
}


static void init_SMB_contentLength_() {
    Symbol SMB_contentLength_ = new_Symbol(L"contentLength:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray23043 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    String string_23045 = new_String(L"Content-Length");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23045_Const = new_Constant((Optr)string_23045);
    // headerAt:put:. 
    Send PSend23046 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23045_Const, (Optr)VAR_aNumber_0_0);
    Array PThreadedCode23044 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23045, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send2, (Optr)PSend23046, (Optr)&t_method_return);
    Method PMethod23042 = new_Method_with(PArray23043, empty_Array, empty_Array, PThreadedCode23044, 1, PSend23046);
    
    MethodClosure MC_SMB_contentLength_ = new_MethodClosure((Method)PMethod23042, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength_, MC_SMB_contentLength_);
}


static void init_SMB_streamFrom_to_size_progress_() {
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_sizeOrNil_0_2 = new_Variable_named(L"sizeOrNil", 0);
    Variable VAR_progressBlock_0_3 = new_Variable_named(L"progressBlock", 0);
    Array PArray23048 = new_Array_with(4, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_progressBlock_0_3);
    Variable VAR_buffer_0_4 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_5 = new_Variable_named(L"totalRead", 0);
    Variable VAR_remaining_0_6 = new_Variable_named(L"remaining", 0);
    Variable VAR_size_0_7 = new_Variable_named(L"size", 0);
    Array PArray23049 = new_Array_with(4, (Optr)VAR_buffer_0_4, (Optr)VAR_totalRead_0_5, (Optr)VAR_remaining_0_6, (Optr)VAR_size_0_7);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23052 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23054 = new_String(L"transfer-encoding");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23054_Const = new_Constant((Optr)string_23054);
    // headerAt:. 
    Send PSend23055 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23054_Const);
    Variable VAR_encoding_2_0 = new_Variable_named(L"encoding", 2);
    Array PArray23057 = new_Array_with(1, (Optr)VAR_encoding_2_0);
    String string_23059 = new_String(L"chunked");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23059_Const = new_Constant((Optr)string_23059);
    // =. 
    Send PSend23060 = new_Send((Optr)VAR_encoding_2_0, SMB__equals_, 1, (Optr)string_23059_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    // chunkFrom:to:progress:. 
    Send PSend23064 = new_Send((Optr)self, SMB_chunkFrom_to_progress_, 3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_3);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23065 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23064);
    Array PThreadedCode23063 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_send3, (Optr)PSend23064, (Optr)&t_send1, (Optr)PSend23065, (Optr)&t_block_return);
    Block PBlock23062 = new_Block_with(empty_Array, empty_Array, PThreadedCode23063, 1, PSend23065);
    String string_23068 = new_String(L"Unknown transfer-encoding: ");
    Constant string_23068_Const = new_Constant((Optr)string_23068);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23069 = new_Send((Optr)string_23068_Const, SMB__append_, 1, (Optr)VAR_encoding_2_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23070 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23069);
    Array PThreadedCode23067 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23068, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_send1, (Optr)PSend23069, (Optr)&t_send1, (Optr)PSend23070, (Optr)&t_block_return);
    Block PBlock23066 = new_Block_with(empty_Array, empty_Array, PThreadedCode23067, 1, PSend23070);
    // ifTrue:ifFalse:. 
    Send PSend23061 = new_Send((Optr)PSend23060, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23062, (Optr)PBlock23066);
    Array PThreadedCode23058 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_push1, (Optr)string_23059, (Optr)&t_send1, (Optr)PSend23060, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23061, (Optr)PBlock23062, (Optr)PBlock23066, (Optr)&t_method_return);
    Block PBlock23056 = new_Block_with(PArray23057, empty_Array, PThreadedCode23058, 1, PSend23061);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23071 = new_Send((Optr)PSend23055, SMB_ifNotEmpty_, 1, (Optr)PBlock23056);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend23072 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend23076 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23075 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23076, (Optr)&t_block_return);
    Block PBlock23074 = new_Block_with(empty_Array, empty_Array, PThreadedCode23075, 1, PSend23076);
    // ifTrue:. 
    Send PSend23073 = new_Send((Optr)PSend23072, SMB_ifTrue_, 1, (Optr)PBlock23074);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    // new:. 
    Send PSend23078 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4096_Const);
    Assign PAssign23077 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23078);
    Assign PAssign23079 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)int_0_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Array PThreadedCode23083 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    Block PBlock23082 = new_Block_with(empty_Array, empty_Array, PThreadedCode23083, 1, int_0_Const);
    // ifNil:. 
    Send PSend23081 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_, 1, (Optr)PBlock23082);
    Assign PAssign23080 = new_Assign((Optr)VAR_size_0_7, (Optr)PSend23081);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend23086 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend23089 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23090 = new_Send((Optr)PSend23089, SMB_not, 0);
    Array PThreadedCode23088 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23089, (Optr)&t_send0, (Optr)PSend23090, (Optr)&t_block_return);
    Block PBlock23087 = new_Block_with(empty_Array, empty_Array, PThreadedCode23088, 1, PSend23090);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23091 = new_Send((Optr)PSend23086, SMB_and_, 1, (Optr)PBlock23087);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend23094 = new_Send((Optr)VAR_totalRead_0_5, SMB__lt_, 1, (Optr)VAR_size_0_7);
    Array PThreadedCode23093 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_size_0_7, (Optr)&t_send1, (Optr)PSend23094, (Optr)&t_block_return);
    Block PBlock23092 = new_Block_with(empty_Array, empty_Array, PThreadedCode23093, 1, PSend23094);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23095 = new_Send((Optr)PSend23091, SMB_or_, 1, (Optr)PBlock23092);
    Array PThreadedCode23085 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23086, (Optr)&t_push_closure, (Optr)PBlock23087, (Optr)&t_send1, (Optr)PSend23091, (Optr)&t_push_closure, (Optr)PBlock23092, (Optr)&t_send1, (Optr)PSend23095, (Optr)&t_block_return);
    Block PBlock23084 = new_Block_with(empty_Array, empty_Array, PThreadedCode23085, 1, PSend23095);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23100 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23099 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23100, (Optr)&t_block_return);
    Block PBlock23098 = new_Block_with(empty_Array, empty_Array, PThreadedCode23099, 1, PSend23100);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23101 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23098);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    SmallInt int_99999 = new_SmallInt(99999);
    Array PThreadedCode23105 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_99999, (Optr)&t_block_return);
    Constant int_99999_Const = new_Constant((Optr)int_99999);
    Block PBlock23104 = new_Block_with(empty_Array, empty_Array, PThreadedCode23105, 1, int_99999_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend23108 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__minus_, 1, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23107 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send1, (Optr)PSend23108, (Optr)&t_block_return);
    Block PBlock23106 = new_Block_with(empty_Array, empty_Array, PThreadedCode23107, 1, PSend23108);
    // ifNil:ifNotNil:. 
    Send PSend23103 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23104, (Optr)PBlock23106);
    Assign PAssign23102 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23103);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23109 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23110 = new_Send((Optr)VAR_remaining_0_6, SMB__gt_, 1, (Optr)PSend23109);
    // size. 
    Send PSend23115 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Assign PAssign23114 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23115);
    Array PThreadedCode23113 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23114, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23115, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23112 = new_Block_with(empty_Array, empty_Array, PThreadedCode23113, 1, PAssign23114);
    // ifTrue:. 
    Send PSend23111 = new_Send((Optr)PSend23110, SMB_ifTrue_, 1, (Optr)PBlock23112);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23117 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_remaining_0_6, (Optr)VAR_buffer_0_4, (Optr)int_1_Const);
    Assign PAssign23116 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23117);
    // size. 
    Send PSend23118 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // <. 
    Send PSend23119 = new_Send((Optr)VAR_remaining_0_6, SMB__lt_, 1, (Optr)PSend23118);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23123 = new_Send((Optr)VAR_buffer_0_4, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_remaining_0_6);
    Array PThreadedCode23122 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_send2, (Optr)PSend23123, (Optr)&t_block_return);
    Block PBlock23121 = new_Block_with(empty_Array, empty_Array, PThreadedCode23122, 1, PSend23123);
    Array PThreadedCode23125 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_block_return);
    Block PBlock23124 = new_Block_with(empty_Array, empty_Array, PThreadedCode23125, 1, VAR_buffer_0_4);
    // ifTrue:ifFalse:. 
    Send PSend23120 = new_Send((Optr)PSend23119, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23121, (Optr)PBlock23124);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23126 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)PSend23120);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // size. 
    Send PSend23129 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // +. 
    Send PSend23128 = new_Send((Optr)VAR_totalRead_0_5, SMB__plus_, 1, (Optr)PSend23129);
    Assign PAssign23127 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)PSend23128);
    Array PThreadedCode23097 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23098, (Optr)&t_send1, (Optr)PSend23101, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23102, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23104, (Optr)&t_push_closure, (Optr)PBlock23106, (Optr)&t_send2, (Optr)PSend23103, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23109, (Optr)&t_send1, (Optr)PSend23110, (Optr)&t_send_ifTrue_, (Optr)PSend23111, (Optr)PBlock23112, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23116, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23117, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23118, (Optr)&t_send1, (Optr)PSend23119, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23120, (Optr)PBlock23121, (Optr)PBlock23124, (Optr)&t_send1, (Optr)PSend23126, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23127, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23129, (Optr)&t_send1, (Optr)PSend23128, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23096 = new_Block_with(empty_Array, empty_Array, PThreadedCode23097, 6, PSend23101, PAssign23102, PSend23111, PAssign23116, PSend23126, PAssign23127);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23130 = new_Send((Optr)PBlock23084, SMB_whileTrue_, 1, (Optr)PBlock23096);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23131 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23134 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23133 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23134, (Optr)&t_block_return);
    Block PBlock23132 = new_Block_with(empty_Array, empty_Array, PThreadedCode23133, 1, PSend23134);
    // ifNotNil:. 
    Send PSend23135 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23132);
    Array PThreadedCode23053 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23054, (Optr)&t_send1, (Optr)PSend23055, (Optr)&t_push_closure, (Optr)PBlock23056, (Optr)&t_send1, (Optr)PSend23071, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23072, (Optr)&t_send_ifTrue_, (Optr)PSend23073, (Optr)PBlock23074, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23077, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_send1, (Optr)PSend23078, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23079, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23080, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23082, (Optr)&t_send1, (Optr)PSend23081, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23084, (Optr)&t_push_closure, (Optr)PBlock23096, (Optr)&t_send1, (Optr)PSend23130, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23131, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23132, (Optr)&t_send1, (Optr)PSend23135, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23051 = new_Block_with(PArray23052, empty_Array, PThreadedCode23053, 9, PSend23071, PSend23073, PAssign23077, PAssign23079, PAssign23080, PSend23130, PSend23131, PSend23135, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23136 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23051);
    Array PThreadedCode23050 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23051, (Optr)&t_send1, (Optr)PSend23136, (Optr)&t_method_return);
    Method PMethod23047 = new_Method_with(PArray23048, PArray23049, empty_Array, PThreadedCode23050, 1, PSend23136);
    
    MethodClosure MC_SMB_streamFrom_to_size_progress_ = new_MethodClosure((Method)PMethod23047, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_streamFrom_to_size_progress_, MC_SMB_streamFrom_to_size_progress_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23140 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23142 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode23141 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23142, (Optr)&t_method_return);
    Block PBlock23139 = new_Block_with(PArray23140, empty_Array, PThreadedCode23141, 1, PSend23142);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23143 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23139);
    Array PThreadedCode23138 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23139, (Optr)&t_send1, (Optr)PSend23143, (Optr)&t_method_return);
    Method PMethod23137 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23138, 1, PSend23143);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod23137, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_contentWithProgress_() {
    Symbol SMB_contentWithProgress_ = new_Symbol(L"contentWithProgress:");
    Variable VAR_progressBlock_0_0 = new_Variable_named(L"progressBlock", 0);
    Array PArray23145 = new_Array_with(1, (Optr)VAR_progressBlock_0_0);
    Variable VAR_length_1_0 = new_Variable_named(L"length", 1);
    Array PArray23148 = new_Array_with(1, (Optr)VAR_length_1_0);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23151 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23150 = new_Assign((Optr)VAR_length_1_0, (Optr)PSend23151);
    Symbol SMB_new_streamContents_ = new_Symbol(L"new:streamContents:");
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23156 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23155 = new_Block_with(empty_Array, empty_Array, PThreadedCode23156, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23154 = new_Send((Optr)VAR_length_1_0, SMB_ifNil_, 1, (Optr)PBlock23155);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23158 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23160 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_s_2_0, (Optr)VAR_length_1_0, (Optr)VAR_progressBlock_0_0);
    Array PThreadedCode23159 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_0, (Optr)&t_send4, (Optr)PSend23160, (Optr)&t_method_return);
    Block PBlock23157 = new_Block_with(PArray23158, empty_Array, PThreadedCode23159, 1, PSend23160);
    // new:streamContents:. 
    Send PSend23153 = new_Send((Optr)String_classReference, SMB_new_streamContents_, 2, (Optr)PSend23154, (Optr)PBlock23157);
    Assign PAssign23152 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23153);
    Array PThreadedCode23149 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign23150, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23151, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23152, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_closure, (Optr)PBlock23155, (Optr)&t_send1, (Optr)PSend23154, (Optr)&t_push_closure, (Optr)PBlock23157, (Optr)&t_send2, (Optr)PSend23153, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23147 = new_Block_with(empty_Array, PArray23148, PThreadedCode23149, 2, PAssign23150, PAssign23152);
    // ifNil:. 
    Send PSend23161 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23147);
    Array PThreadedCode23146 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23147, (Optr)&t_send1, (Optr)PSend23161, (Optr)&t_method_return);
    Method PMethod23144 = new_Method_with(PArray23145, empty_Array, empty_Array, PThreadedCode23146, 1, PSend23161);
    
    MethodClosure MC_SMB_contentWithProgress_ = new_MethodClosure((Method)PMethod23144, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentWithProgress_, MC_SMB_contentWithProgress_);
}


static void init_SMB_stream() {
    Symbol SMB_stream = new_Symbol(L"stream");
    Array PThreadedCode23163 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23162 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23163, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_stream = new_MethodClosure((Method)PMethod23162, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream, MC_SMB_stream);
}


static void init_SMB_protocol() {
    Symbol SMB_protocol = new_Symbol(L"protocol");
    Array PThreadedCode23165 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_method_return);
    Method PMethod23164 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23165, 1, slot_WebClient_Core_WebMessage_protocol);
    
    MethodClosure MC_SMB_protocol = new_MethodClosure((Method)PMethod23164, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol, MC_SMB_protocol);
}


static void init_SMB_writeHeadersOn_() {
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23167 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23170 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23173 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23175 = new_String(L": ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23175_Const = new_Constant((Optr)string_23175);
    // ,. 
    Send PSend23176 = new_Send((Optr)VAR_key_1_0, SMB__append_, 1, (Optr)string_23175_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23177 = new_Send((Optr)VAR_value_1_1, SMB_asString, 0);
    // ,. 
    Send PSend23178 = new_Send((Optr)PSend23176, SMB__append_, 1, (Optr)PSend23177);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23179 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23178);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23180 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Array PThreadedCode23174 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push1, (Optr)string_23175, (Optr)&t_send1, (Optr)PSend23176, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send0, (Optr)PSend23177, (Optr)&t_send1, (Optr)PSend23178, (Optr)&t_send1, (Optr)PSend23179, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23180, (Optr)&t_method_return);
    Block PBlock23172 = new_Block_with(PArray23173, empty_Array, PThreadedCode23174, 2, PSend23179, PSend23180);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23181 = new_Send((Optr)PBlock23172, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23171 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock23172, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23181, (Optr)&t_method_return);
    Block PBlock23169 = new_Block_with(PArray23170, empty_Array, PThreadedCode23171, 1, PSend23181);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23182 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23169);
    Array PThreadedCode23168 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23169, (Optr)&t_send1, (Optr)PSend23182, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23166 = new_Method_with(PArray23167, empty_Array, empty_Array, PThreadedCode23168, 2, PSend23182, self);
    
    MethodClosure MC_SMB_writeHeadersOn_ = new_MethodClosure((Method)PMethod23166, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeHeadersOn_, MC_SMB_writeHeadersOn_);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23187 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_destroy, 0);
    Array PThreadedCode23186 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23187, (Optr)&t_block_return);
    Block PBlock23185 = new_Block_with(empty_Array, empty_Array, PThreadedCode23186, 1, PSend23187);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23188 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23185);
    Array PThreadedCode23184 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23185, (Optr)&t_send1, (Optr)PSend23188, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23183 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23184, 2, PSend23188, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod23183, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23190 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    // writeHeadersOn:. 
    Send PSend23192 = new_Send((Optr)self, SMB_writeHeadersOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23193 = new_Send((Optr)VAR_aStream_0_0, SMB_crlf, 0);
    Array PThreadedCode23191 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23192, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23193, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23189 = new_Method_with(PArray23190, empty_Array, empty_Array, PThreadedCode23191, 3, PSend23192, PSend23193, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23189, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_headersDo_() {
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23195 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23198 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23200 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23201 = new_Send((Optr)VAR_assoc_1_0, SMB_value, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23202 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend23200, (Optr)PSend23201);
    Array PThreadedCode23199 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23200, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23201, (Optr)&t_send2, (Optr)PSend23202, (Optr)&t_method_return);
    Block PBlock23197 = new_Block_with(PArray23198, empty_Array, PThreadedCode23199, 1, PSend23202);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23203 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23197);
    Array PThreadedCode23196 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23197, (Optr)&t_send1, (Optr)PSend23203, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23194 = new_Method_with(PArray23195, empty_Array, empty_Array, PThreadedCode23196, 2, PSend23203, self);
    
    MethodClosure MC_SMB_headersDo_ = new_MethodClosure((Method)PMethod23194, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersDo_, MC_SMB_headersDo_);
}


static void init_SMB_multipartBoundary() {
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    Variable VAR_header_0_0 = new_Variable_named(L"header", 0);
    Array PArray23205 = new_Array_with(1, (Optr)VAR_header_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23208 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    String string_23212 = new_String(L"Content-Type");
    Constant string_23212_Const = new_Constant((Optr)string_23212);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23215 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23214 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23215, (Optr)&t_block_return);
    Block PBlock23213 = new_Block_with(empty_Array, empty_Array, PThreadedCode23214, 1, PSend23215);
    // headerAt:ifAbsent:. 
    Send PSend23211 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23212_Const, (Optr)PBlock23213);
    Assign PAssign23210 = new_Assign((Optr)VAR_header_0_0, (Optr)PSend23211);
    String string_23216 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23216_Const = new_Constant((Optr)string_23216);
    // beginsWith:. 
    Send PSend23217 = new_Send((Optr)VAR_header_0_0, SMB_beginsWith_, 1, (Optr)string_23216_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend23221 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23220 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23221, (Optr)&t_block_return);
    Block PBlock23219 = new_Block_with(empty_Array, empty_Array, PThreadedCode23220, 1, PSend23221);
    // ifFalse:. 
    Send PSend23218 = new_Send((Optr)PSend23217, SMB_ifFalse_, 1, (Optr)PBlock23219);
    String string_23222 = new_String(L"boundary=");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23222_Const = new_Constant((Optr)string_23222);
    // findString:. 
    Send PSend23223 = new_Send((Optr)VAR_header_0_0, SMB_findString_, 1, (Optr)string_23222_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_9_Const = new_Constant((Optr)int_9);
    // +. 
    Send PSend23224 = new_Send((Optr)PSend23223, SMB__plus_, 1, (Optr)int_9_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23225 = new_Send((Optr)VAR_header_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23226 = new_Send((Optr)VAR_header_0_0, SMB_copyFrom_to_, 2, (Optr)PSend23224, (Optr)PSend23225);
    Array PThreadedCode23209 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23210, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23212, (Optr)&t_push_closure, (Optr)PBlock23213, (Optr)&t_send2, (Optr)PSend23211, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23216, (Optr)&t_send1, (Optr)PSend23217, (Optr)&t_send_ifFalse_, (Optr)PSend23218, (Optr)PBlock23219, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23222, (Optr)&t_send1, (Optr)PSend23223, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend23224, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_send0, (Optr)PSend23225, (Optr)&t_send2, (Optr)PSend23226, (Optr)&t_method_return);
    Block PBlock23207 = new_Block_with(PArray23208, empty_Array, PThreadedCode23209, 3, PAssign23210, PSend23218, PSend23226);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23227 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23207);
    Array PThreadedCode23206 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23207, (Optr)&t_send1, (Optr)PSend23227, (Optr)&t_method_return);
    Method PMethod23204 = new_Method_with(empty_Array, PArray23205, empty_Array, PThreadedCode23206, 1, PSend23227);
    
    MethodClosure MC_SMB_multipartBoundary = new_MethodClosure((Method)PMethod23204, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_multipartBoundary, MC_SMB_multipartBoundary);
}


static void init_SMB_closeIfTransient() {
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23230 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23234 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23233 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23234, (Optr)&t_block_return);
    Block PBlock23232 = new_Block_with(empty_Array, empty_Array, PThreadedCode23233, 1, PSend23234);
    // ifFalse:. 
    Send PSend23231 = new_Send((Optr)PSend23230, SMB_ifFalse_, 1, (Optr)PBlock23232);
    Array PThreadedCode23229 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23230, (Optr)&t_send_ifFalse_, (Optr)PSend23231, (Optr)PBlock23232, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23228 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23229, 2, PSend23231, self);
    
    MethodClosure MC_SMB_closeIfTransient = new_MethodClosure((Method)PMethod23228, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_closeIfTransient, MC_SMB_closeIfTransient);
}


static void init_SMB_contentType_() {
    Symbol SMB_contentType_ = new_Symbol(L"contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23236 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23238 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23238_Const = new_Constant((Optr)string_23238);
    // headerAt:put:. 
    Send PSend23239 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23238_Const, (Optr)VAR_aString_0_0);
    Array PThreadedCode23237 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23238, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23239, (Optr)&t_method_return);
    Method PMethod23235 = new_Method_with(PArray23236, empty_Array, empty_Array, PThreadedCode23237, 1, PSend23239);
    
    MethodClosure MC_SMB_contentType_ = new_MethodClosure((Method)PMethod23235, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType_, MC_SMB_contentType_);
}


static void init_SMB_headerAt_put_() {
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23241 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23244 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_assoc_2_0 = new_Variable_named(L"assoc", 2);
    Array PArray23247 = new_Array_with(1, (Optr)VAR_assoc_2_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23249 = new_Send((Optr)VAR_assoc_2_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23250 = new_Send((Optr)PSend23249, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23251 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23252 = new_Send((Optr)PSend23250, SMB__equals_, 1, (Optr)PSend23251);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23256 = new_Send((Optr)VAR_assoc_2_0, SMB_value_, 1, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23257 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23255 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend23256, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23257, (Optr)&t_block_return);
    Block PBlock23254 = new_Block_with(empty_Array, empty_Array, PThreadedCode23255, 2, PSend23256, PSend23257);
    // ifTrue:. 
    Send PSend23253 = new_Send((Optr)PSend23252, SMB_ifTrue_, 1, (Optr)PBlock23254);
    Array PThreadedCode23248 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_send0, (Optr)PSend23249, (Optr)&t_send0, (Optr)PSend23250, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23251, (Optr)&t_send1, (Optr)PSend23252, (Optr)&t_send_ifTrue_, (Optr)PSend23253, (Optr)PBlock23254, (Optr)&t_method_return);
    Block PBlock23246 = new_Block_with(PArray23247, empty_Array, PThreadedCode23248, 1, PSend23253);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23258 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23246);
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    // addHeader:value:. 
    Send PSend23259 = new_Send((Optr)self, SMB_addHeader_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Array PThreadedCode23245 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23246, (Optr)&t_send1, (Optr)PSend23258, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23259, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23243 = new_Block_with(PArray23244, empty_Array, PThreadedCode23245, 3, PSend23258, PSend23259, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23260 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23243);
    Array PThreadedCode23242 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23243, (Optr)&t_send1, (Optr)PSend23260, (Optr)&t_method_return);
    Method PMethod23240 = new_Method_with(PArray23241, empty_Array, empty_Array, PThreadedCode23242, 1, PSend23260);
    
    MethodClosure MC_SMB_headerAt_put_ = new_MethodClosure((Method)PMethod23240, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_put_, MC_SMB_headerAt_put_);
}


static void init_SMB_headerAt_ifAbsent_() {
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23262 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23265 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray23268 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23270 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode23269 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend23270, (Optr)&t_method_return);
    Block PBlock23267 = new_Block_with(PArray23268, empty_Array, PThreadedCode23269, 1, PSend23270);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23271 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23267);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23272 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23266 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23267, (Optr)&t_send2, (Optr)PSend23271, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23272, (Optr)&t_method_return);
    Block PBlock23264 = new_Block_with(PArray23265, empty_Array, PThreadedCode23266, 2, PSend23271, PSend23272);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23273 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23264);
    Array PThreadedCode23263 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23264, (Optr)&t_send1, (Optr)PSend23273, (Optr)&t_method_return);
    Method PMethod23261 = new_Method_with(PArray23262, empty_Array, empty_Array, PThreadedCode23263, 1, PSend23273);
    
    MethodClosure MC_SMB_headerAt_ifAbsent_ = new_MethodClosure((Method)PMethod23261, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_ifAbsent_, MC_SMB_headerAt_ifAbsent_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend23279 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign23278 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23279);
    Array PThreadedCode23277 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23278, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23279, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23276 = new_Block_with(empty_Array, empty_Array, PThreadedCode23277, 1, PAssign23278);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23280 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23276);
    Array PThreadedCode23275 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23276, (Optr)&t_send1, (Optr)PSend23280, (Optr)&t_method_return);
    Method PMethod23274 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23275, 1, PSend23280);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod23274, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR_length_0_0 = new_Variable_named(L"length", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_buffer_0_2 = new_Variable_named(L"buffer", 0);
    Array PArray23282 = new_Array_with(3, (Optr)VAR_length_0_0, (Optr)VAR_size_0_1, (Optr)VAR_buffer_0_2);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23285 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23284 = new_Assign((Optr)VAR_length_0_0, (Optr)PSend23285);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23289 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23288 = new_Block_with(empty_Array, empty_Array, PThreadedCode23289, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23287 = new_Send((Optr)VAR_length_0_0, SMB_ifNil_, 1, (Optr)PBlock23288);
    Assign PAssign23286 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend23287);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23292 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend23291 = new_Send((Optr)PSend23292, SMB_writeStream, 0);
    Assign PAssign23290 = new_Assign((Optr)VAR_buffer_0_2, (Optr)PSend23291);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23293 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_buffer_0_2, (Optr)VAR_length_0_0, (Optr)nil_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend23294 = new_Send((Optr)VAR_buffer_0_2, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23295 = new_Send((Optr)PSend23294, SMB__equals_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_originalContents = new_Symbol(L"originalContents");
    // originalContents. 
    Send PSend23299 = new_Send((Optr)VAR_buffer_0_2, SMB_originalContents, 0);
    Array PThreadedCode23298 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23299, (Optr)&t_block_return);
    Block PBlock23297 = new_Block_with(empty_Array, empty_Array, PThreadedCode23298, 1, PSend23299);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend23302 = new_Send((Optr)VAR_buffer_0_2, SMB_contents, 0);
    Array PThreadedCode23301 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23302, (Optr)&t_block_return);
    Block PBlock23300 = new_Block_with(empty_Array, empty_Array, PThreadedCode23301, 1, PSend23302);
    // ifTrue:ifFalse:. 
    Send PSend23296 = new_Send((Optr)PSend23295, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23297, (Optr)PBlock23300);
    Array PThreadedCode23283 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign23284, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23285, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23286, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_closure, (Optr)PBlock23288, (Optr)&t_send1, (Optr)PSend23287, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23290, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23292, (Optr)&t_send0, (Optr)PSend23291, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23293, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23294, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23295, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23296, (Optr)PBlock23297, (Optr)PBlock23300, (Optr)&t_method_return);
    Method PMethod23281 = new_Method_with(empty_Array, PArray23282, empty_Array, PThreadedCode23283, 5, PAssign23284, PAssign23286, PAssign23290, PSend23293, PSend23296);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod23281, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_isPersistent() {
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23306 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23308 = new_String(L"Connection");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23308_Const = new_Constant((Optr)string_23308);
    // headerAt:. 
    Send PSend23309 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23308_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23310 = new_Send((Optr)PSend23309, SMB_asLowercase, 0);
    String string_23311 = new_String(L"close");
    Constant string_23311_Const = new_Constant((Optr)string_23311);
    // asLowercase. 
    Send PSend23312 = new_Send((Optr)string_23311_Const, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23313 = new_Send((Optr)PSend23310, SMB__equals_, 1, (Optr)PSend23312);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23317 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23316 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23317, (Optr)&t_block_return);
    Block PBlock23315 = new_Block_with(empty_Array, empty_Array, PThreadedCode23316, 1, PSend23317);
    // ifTrue:. 
    Send PSend23314 = new_Send((Optr)PSend23313, SMB_ifTrue_, 1, (Optr)PBlock23315);
    String string_23318 = new_String(L"Connection");
    Constant string_23318_Const = new_Constant((Optr)string_23318);
    // headerAt:. 
    Send PSend23319 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23318_Const);
    // asLowercase. 
    Send PSend23320 = new_Send((Optr)PSend23319, SMB_asLowercase, 0);
    String string_23321 = new_String(L"keep-alive");
    Constant string_23321_Const = new_Constant((Optr)string_23321);
    // asLowercase. 
    Send PSend23322 = new_Send((Optr)string_23321_Const, SMB_asLowercase, 0);
    // =. 
    Send PSend23323 = new_Send((Optr)PSend23320, SMB__equals_, 1, (Optr)PSend23322);
    // escape:. 
    Send PSend23327 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23326 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23327, (Optr)&t_block_return);
    Block PBlock23325 = new_Block_with(empty_Array, empty_Array, PThreadedCode23326, 1, PSend23327);
    // ifTrue:. 
    Send PSend23324 = new_Send((Optr)PSend23323, SMB_ifTrue_, 1, (Optr)PBlock23325);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23328 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23329 = new_String(L"HTTP/1.0");
    Constant string_23329_Const = new_Constant((Optr)string_23329);
    // =. 
    Send PSend23330 = new_Send((Optr)PSend23328, SMB__equals_, 1, (Optr)string_23329_Const);
    // escape:. 
    Send PSend23334 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23333 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23334, (Optr)&t_block_return);
    Block PBlock23332 = new_Block_with(empty_Array, empty_Array, PThreadedCode23333, 1, PSend23334);
    // ifTrue:. 
    Send PSend23331 = new_Send((Optr)PSend23330, SMB_ifTrue_, 1, (Optr)PBlock23332);
    // protocol. 
    Send PSend23335 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23336 = new_String(L"HTTP/1.1");
    Constant string_23336_Const = new_Constant((Optr)string_23336);
    // =. 
    Send PSend23337 = new_Send((Optr)PSend23335, SMB__equals_, 1, (Optr)string_23336_Const);
    // escape:. 
    Send PSend23341 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23340 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23341, (Optr)&t_block_return);
    Block PBlock23339 = new_Block_with(empty_Array, empty_Array, PThreadedCode23340, 1, PSend23341);
    // ifTrue:. 
    Send PSend23338 = new_Send((Optr)PSend23337, SMB_ifTrue_, 1, (Optr)PBlock23339);
    Array PThreadedCode23307 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23308, (Optr)&t_send1, (Optr)PSend23309, (Optr)&t_send0, (Optr)PSend23310, (Optr)&t_push1, (Optr)string_23311, (Optr)&t_send0, (Optr)PSend23312, (Optr)&t_send1, (Optr)PSend23313, (Optr)&t_send_ifTrue_, (Optr)PSend23314, (Optr)PBlock23315, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23318, (Optr)&t_send1, (Optr)PSend23319, (Optr)&t_send0, (Optr)PSend23320, (Optr)&t_push1, (Optr)string_23321, (Optr)&t_send0, (Optr)PSend23322, (Optr)&t_send1, (Optr)PSend23323, (Optr)&t_send_ifTrue_, (Optr)PSend23324, (Optr)PBlock23325, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23328, (Optr)&t_push1, (Optr)string_23329, (Optr)&t_send1, (Optr)PSend23330, (Optr)&t_send_ifTrue_, (Optr)PSend23331, (Optr)PBlock23332, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23335, (Optr)&t_push1, (Optr)string_23336, (Optr)&t_send1, (Optr)PSend23337, (Optr)&t_send_ifTrue_, (Optr)PSend23338, (Optr)PBlock23339, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock23305 = new_Block_with(PArray23306, empty_Array, PThreadedCode23307, 5, PSend23314, PSend23324, PSend23331, PSend23338, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23342 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23305);
    Array PThreadedCode23304 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23305, (Optr)&t_send1, (Optr)PSend23342, (Optr)&t_method_return);
    Method PMethod23303 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23304, 1, PSend23342);
    
    MethodClosure MC_SMB_isPersistent = new_MethodClosure((Method)PMethod23303, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_isPersistent, MC_SMB_isPersistent);
}


static void init_SMB_removeHeader_() {
    Symbol SMB_removeHeader_ = new_Symbol(L"removeHeader:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23344 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23349 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23351 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23352 = new_Send((Optr)PSend23351, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23353 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23354 = new_Send((Optr)PSend23352, SMB__equals_, 1, (Optr)PSend23353);
    Array PThreadedCode23350 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23351, (Optr)&t_send0, (Optr)PSend23352, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23353, (Optr)&t_send1, (Optr)PSend23354, (Optr)&t_method_return);
    Block PBlock23348 = new_Block_with(PArray23349, empty_Array, PThreadedCode23350, 1, PSend23354);
    // reject:. 
    Send PSend23347 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_reject_, 1, (Optr)PBlock23348);
    Assign PAssign23346 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23347);
    Array PThreadedCode23345 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign23346, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23348, (Optr)&t_send1, (Optr)PSend23347, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23343 = new_Method_with(PArray23344, empty_Array, empty_Array, PThreadedCode23345, 2, PAssign23346, self);
    
    MethodClosure MC_SMB_removeHeader_ = new_MethodClosure((Method)PMethod23343, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_removeHeader_, MC_SMB_removeHeader_);
}


static void init_SMB_addHeader_value_() {
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23356 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23358 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23359 = new_Send((Optr)PSend23358, SMB_key_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23360 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_add_, 1, (Optr)PSend23359);
    Array PThreadedCode23357 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23358, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23359, (Optr)&t_send1, (Optr)PSend23360, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23355 = new_Method_with(PArray23356, empty_Array, empty_Array, PThreadedCode23357, 2, PSend23360, self);
    
    MethodClosure MC_SMB_addHeader_value_ = new_MethodClosure((Method)PMethod23355, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_addHeader_value_, MC_SMB_addHeader_value_);
}


static void init_SMB_content_() {
    Symbol SMB_content_ = new_Symbol(L"content:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23362 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23364 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)VAR_aString_0_0);
    Array PThreadedCode23363 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23364, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23361 = new_Method_with(PArray23362, empty_Array, empty_Array, PThreadedCode23363, 2, PAssign23364, self);
    
    MethodClosure MC_SMB_content_ = new_MethodClosure((Method)PMethod23361, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content_, MC_SMB_content_);
}


static void init_class_SMB_statusCodeAt_() {
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray23366 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend23368 = new_Send((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, SMB_at_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode23367 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend23368, (Optr)&t_method_return);
    Method PMethod23365 = new_Method_with(PArray23366, empty_Array, empty_Array, PThreadedCode23367, 1, PSend23368);
    
    MethodClosure MC_SMB_statusCodeAt_ = new_MethodClosure((Method)PMethod23365, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_statusCodeAt_, MC_SMB_statusCodeAt_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23374 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_100 = new_SmallInt(100);
    String string_23376 = new_String(L"Continue");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant int_100_Const = new_Constant((Optr)int_100);
    Constant string_23376_Const = new_Constant((Optr)string_23376);
    // at:put:. 
    Send PSend23377 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_100_Const, (Optr)string_23376_Const);
    SmallInt int_101 = new_SmallInt(101);
    String string_23378 = new_String(L"Switching Protocols");
    Constant int_101_Const = new_Constant((Optr)int_101);
    Constant string_23378_Const = new_Constant((Optr)string_23378);
    // at:put:. 
    Send PSend23379 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_101_Const, (Optr)string_23378_Const);
    SmallInt int_102 = new_SmallInt(102);
    String string_23380 = new_String(L"Processing");
    Constant int_102_Const = new_Constant((Optr)int_102);
    Constant string_23380_Const = new_Constant((Optr)string_23380);
    // at:put:. 
    Send PSend23381 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_102_Const, (Optr)string_23380_Const);
    SmallInt int_200 = new_SmallInt(200);
    String string_23382 = new_String(L"OK");
    Constant int_200_Const = new_Constant((Optr)int_200);
    Constant string_23382_Const = new_Constant((Optr)string_23382);
    // at:put:. 
    Send PSend23383 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_200_Const, (Optr)string_23382_Const);
    SmallInt int_201 = new_SmallInt(201);
    String string_23384 = new_String(L"Created");
    Constant int_201_Const = new_Constant((Optr)int_201);
    Constant string_23384_Const = new_Constant((Optr)string_23384);
    // at:put:. 
    Send PSend23385 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_201_Const, (Optr)string_23384_Const);
    SmallInt int_202 = new_SmallInt(202);
    String string_23386 = new_String(L"Accepted");
    Constant int_202_Const = new_Constant((Optr)int_202);
    Constant string_23386_Const = new_Constant((Optr)string_23386);
    // at:put:. 
    Send PSend23387 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_202_Const, (Optr)string_23386_Const);
    SmallInt int_203 = new_SmallInt(203);
    String string_23388 = new_String(L"Non-Authoritative Information");
    Constant int_203_Const = new_Constant((Optr)int_203);
    Constant string_23388_Const = new_Constant((Optr)string_23388);
    // at:put:. 
    Send PSend23389 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_203_Const, (Optr)string_23388_Const);
    SmallInt int_204 = new_SmallInt(204);
    String string_23390 = new_String(L"No Content");
    Constant int_204_Const = new_Constant((Optr)int_204);
    Constant string_23390_Const = new_Constant((Optr)string_23390);
    // at:put:. 
    Send PSend23391 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_204_Const, (Optr)string_23390_Const);
    SmallInt int_205 = new_SmallInt(205);
    String string_23392 = new_String(L"Reset Content");
    Constant int_205_Const = new_Constant((Optr)int_205);
    Constant string_23392_Const = new_Constant((Optr)string_23392);
    // at:put:. 
    Send PSend23393 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_205_Const, (Optr)string_23392_Const);
    SmallInt int_206 = new_SmallInt(206);
    String string_23394 = new_String(L"Partial Content");
    Constant int_206_Const = new_Constant((Optr)int_206);
    Constant string_23394_Const = new_Constant((Optr)string_23394);
    // at:put:. 
    Send PSend23395 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_206_Const, (Optr)string_23394_Const);
    SmallInt int_207 = new_SmallInt(207);
    String string_23396 = new_String(L"Multi-Status");
    Constant int_207_Const = new_Constant((Optr)int_207);
    Constant string_23396_Const = new_Constant((Optr)string_23396);
    // at:put:. 
    Send PSend23397 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_207_Const, (Optr)string_23396_Const);
    SmallInt int_300 = new_SmallInt(300);
    String string_23398 = new_String(L"Multiple Choices");
    Constant int_300_Const = new_Constant((Optr)int_300);
    Constant string_23398_Const = new_Constant((Optr)string_23398);
    // at:put:. 
    Send PSend23399 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_300_Const, (Optr)string_23398_Const);
    SmallInt int_301 = new_SmallInt(301);
    String string_23400 = new_String(L"Moved Permanently");
    Constant int_301_Const = new_Constant((Optr)int_301);
    Constant string_23400_Const = new_Constant((Optr)string_23400);
    // at:put:. 
    Send PSend23401 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_301_Const, (Optr)string_23400_Const);
    SmallInt int_302 = new_SmallInt(302);
    String string_23402 = new_String(L"Moved Temporarily");
    Constant int_302_Const = new_Constant((Optr)int_302);
    Constant string_23402_Const = new_Constant((Optr)string_23402);
    // at:put:. 
    Send PSend23403 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_302_Const, (Optr)string_23402_Const);
    SmallInt int_303 = new_SmallInt(303);
    String string_23404 = new_String(L"See Other");
    Constant int_303_Const = new_Constant((Optr)int_303);
    Constant string_23404_Const = new_Constant((Optr)string_23404);
    // at:put:. 
    Send PSend23405 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_303_Const, (Optr)string_23404_Const);
    SmallInt int_304 = new_SmallInt(304);
    String string_23406 = new_String(L"Not Modified");
    Constant int_304_Const = new_Constant((Optr)int_304);
    Constant string_23406_Const = new_Constant((Optr)string_23406);
    // at:put:. 
    Send PSend23407 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_304_Const, (Optr)string_23406_Const);
    SmallInt int_305 = new_SmallInt(305);
    String string_23408 = new_String(L"Use Proxy");
    Constant int_305_Const = new_Constant((Optr)int_305);
    Constant string_23408_Const = new_Constant((Optr)string_23408);
    // at:put:. 
    Send PSend23409 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_305_Const, (Optr)string_23408_Const);
    SmallInt int_307 = new_SmallInt(307);
    String string_23410 = new_String(L"Temporary Redirect");
    Constant int_307_Const = new_Constant((Optr)int_307);
    Constant string_23410_Const = new_Constant((Optr)string_23410);
    // at:put:. 
    Send PSend23411 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_307_Const, (Optr)string_23410_Const);
    SmallInt int_400 = new_SmallInt(400);
    String string_23412 = new_String(L"Bad Request");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23412_Const = new_Constant((Optr)string_23412);
    // at:put:. 
    Send PSend23413 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_400_Const, (Optr)string_23412_Const);
    SmallInt int_401 = new_SmallInt(401);
    String string_23414 = new_String(L"Unauthorized");
    Constant int_401_Const = new_Constant((Optr)int_401);
    Constant string_23414_Const = new_Constant((Optr)string_23414);
    // at:put:. 
    Send PSend23415 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_401_Const, (Optr)string_23414_Const);
    SmallInt int_402 = new_SmallInt(402);
    String string_23416 = new_String(L"Payment Required");
    Constant int_402_Const = new_Constant((Optr)int_402);
    Constant string_23416_Const = new_Constant((Optr)string_23416);
    // at:put:. 
    Send PSend23417 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_402_Const, (Optr)string_23416_Const);
    SmallInt int_403 = new_SmallInt(403);
    String string_23418 = new_String(L"Forbidden");
    Constant int_403_Const = new_Constant((Optr)int_403);
    Constant string_23418_Const = new_Constant((Optr)string_23418);
    // at:put:. 
    Send PSend23419 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_403_Const, (Optr)string_23418_Const);
    SmallInt int_404 = new_SmallInt(404);
    String string_23420 = new_String(L"Not Found");
    Constant int_404_Const = new_Constant((Optr)int_404);
    Constant string_23420_Const = new_Constant((Optr)string_23420);
    // at:put:. 
    Send PSend23421 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_404_Const, (Optr)string_23420_Const);
    SmallInt int_405 = new_SmallInt(405);
    String string_23422 = new_String(L"Method Not Allowed");
    Constant int_405_Const = new_Constant((Optr)int_405);
    Constant string_23422_Const = new_Constant((Optr)string_23422);
    // at:put:. 
    Send PSend23423 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_405_Const, (Optr)string_23422_Const);
    SmallInt int_406 = new_SmallInt(406);
    String string_23424 = new_String(L"Not Acceptable");
    Constant int_406_Const = new_Constant((Optr)int_406);
    Constant string_23424_Const = new_Constant((Optr)string_23424);
    // at:put:. 
    Send PSend23425 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_406_Const, (Optr)string_23424_Const);
    SmallInt int_407 = new_SmallInt(407);
    String string_23426 = new_String(L"Proxy Authentication Required");
    Constant int_407_Const = new_Constant((Optr)int_407);
    Constant string_23426_Const = new_Constant((Optr)string_23426);
    // at:put:. 
    Send PSend23427 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_407_Const, (Optr)string_23426_Const);
    SmallInt int_408 = new_SmallInt(408);
    String string_23428 = new_String(L"Request Timeout");
    Constant int_408_Const = new_Constant((Optr)int_408);
    Constant string_23428_Const = new_Constant((Optr)string_23428);
    // at:put:. 
    Send PSend23429 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_408_Const, (Optr)string_23428_Const);
    SmallInt int_409 = new_SmallInt(409);
    String string_23430 = new_String(L"Conflict");
    Constant int_409_Const = new_Constant((Optr)int_409);
    Constant string_23430_Const = new_Constant((Optr)string_23430);
    // at:put:. 
    Send PSend23431 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_409_Const, (Optr)string_23430_Const);
    SmallInt int_410 = new_SmallInt(410);
    String string_23432 = new_String(L"Gone");
    Constant int_410_Const = new_Constant((Optr)int_410);
    Constant string_23432_Const = new_Constant((Optr)string_23432);
    // at:put:. 
    Send PSend23433 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_410_Const, (Optr)string_23432_Const);
    SmallInt int_411 = new_SmallInt(411);
    String string_23434 = new_String(L"Lenght Required");
    Constant int_411_Const = new_Constant((Optr)int_411);
    Constant string_23434_Const = new_Constant((Optr)string_23434);
    // at:put:. 
    Send PSend23435 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_411_Const, (Optr)string_23434_Const);
    SmallInt int_412 = new_SmallInt(412);
    String string_23436 = new_String(L"Precondition Failed");
    Constant int_412_Const = new_Constant((Optr)int_412);
    Constant string_23436_Const = new_Constant((Optr)string_23436);
    // at:put:. 
    Send PSend23437 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_412_Const, (Optr)string_23436_Const);
    SmallInt int_413 = new_SmallInt(413);
    String string_23438 = new_String(L"Request Entity Too Large");
    Constant int_413_Const = new_Constant((Optr)int_413);
    Constant string_23438_Const = new_Constant((Optr)string_23438);
    // at:put:. 
    Send PSend23439 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_413_Const, (Optr)string_23438_Const);
    SmallInt int_414 = new_SmallInt(414);
    String string_23440 = new_String(L"Request-URI Too Long");
    Constant int_414_Const = new_Constant((Optr)int_414);
    Constant string_23440_Const = new_Constant((Optr)string_23440);
    // at:put:. 
    Send PSend23441 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_414_Const, (Optr)string_23440_Const);
    SmallInt int_415 = new_SmallInt(415);
    String string_23442 = new_String(L"Unsupported Media Type");
    Constant int_415_Const = new_Constant((Optr)int_415);
    Constant string_23442_Const = new_Constant((Optr)string_23442);
    // at:put:. 
    Send PSend23443 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_415_Const, (Optr)string_23442_Const);
    SmallInt int_416 = new_SmallInt(416);
    String string_23444 = new_String(L"Requested Range Not Satisfiable");
    Constant int_416_Const = new_Constant((Optr)int_416);
    Constant string_23444_Const = new_Constant((Optr)string_23444);
    // at:put:. 
    Send PSend23445 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_416_Const, (Optr)string_23444_Const);
    SmallInt int_417 = new_SmallInt(417);
    String string_23446 = new_String(L"Expectation Failed");
    Constant int_417_Const = new_Constant((Optr)int_417);
    Constant string_23446_Const = new_Constant((Optr)string_23446);
    // at:put:. 
    Send PSend23447 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_417_Const, (Optr)string_23446_Const);
    SmallInt int_422 = new_SmallInt(422);
    String string_23448 = new_String(L"Unprocessable Entity");
    Constant int_422_Const = new_Constant((Optr)int_422);
    Constant string_23448_Const = new_Constant((Optr)string_23448);
    // at:put:. 
    Send PSend23449 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_422_Const, (Optr)string_23448_Const);
    SmallInt int_423 = new_SmallInt(423);
    String string_23450 = new_String(L"Locked");
    Constant int_423_Const = new_Constant((Optr)int_423);
    Constant string_23450_Const = new_Constant((Optr)string_23450);
    // at:put:. 
    Send PSend23451 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_423_Const, (Optr)string_23450_Const);
    SmallInt int_424 = new_SmallInt(424);
    String string_23452 = new_String(L"Failed Dependency");
    Constant int_424_Const = new_Constant((Optr)int_424);
    Constant string_23452_Const = new_Constant((Optr)string_23452);
    // at:put:. 
    Send PSend23453 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_424_Const, (Optr)string_23452_Const);
    SmallInt int_500 = new_SmallInt(500);
    String string_23454 = new_String(L"Internal Server Error");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23454_Const = new_Constant((Optr)string_23454);
    // at:put:. 
    Send PSend23455 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_500_Const, (Optr)string_23454_Const);
    SmallInt int_501 = new_SmallInt(501);
    String string_23456 = new_String(L"Not Implemented");
    Constant int_501_Const = new_Constant((Optr)int_501);
    Constant string_23456_Const = new_Constant((Optr)string_23456);
    // at:put:. 
    Send PSend23457 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_501_Const, (Optr)string_23456_Const);
    SmallInt int_502 = new_SmallInt(502);
    String string_23458 = new_String(L"Bad Gateway");
    Constant int_502_Const = new_Constant((Optr)int_502);
    Constant string_23458_Const = new_Constant((Optr)string_23458);
    // at:put:. 
    Send PSend23459 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_502_Const, (Optr)string_23458_Const);
    SmallInt int_503 = new_SmallInt(503);
    String string_23460 = new_String(L"Service Unavailable");
    Constant int_503_Const = new_Constant((Optr)int_503);
    Constant string_23460_Const = new_Constant((Optr)string_23460);
    // at:put:. 
    Send PSend23461 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_503_Const, (Optr)string_23460_Const);
    SmallInt int_504 = new_SmallInt(504);
    String string_23462 = new_String(L"Gateway Timeout");
    Constant int_504_Const = new_Constant((Optr)int_504);
    Constant string_23462_Const = new_Constant((Optr)string_23462);
    // at:put:. 
    Send PSend23463 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_504_Const, (Optr)string_23462_Const);
    SmallInt int_505 = new_SmallInt(505);
    String string_23464 = new_String(L"HTTP Version Not Supported");
    Constant int_505_Const = new_Constant((Optr)int_505);
    Constant string_23464_Const = new_Constant((Optr)string_23464);
    // at:put:. 
    Send PSend23465 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_505_Const, (Optr)string_23464_Const);
    SmallInt int_507 = new_SmallInt(507);
    String string_23466 = new_String(L"Insufficient Storage");
    Constant int_507_Const = new_Constant((Optr)int_507);
    Constant string_23466_Const = new_Constant((Optr)string_23466);
    // at:put:. 
    Send PSend23467 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_507_Const, (Optr)string_23466_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23468 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23375 = instantiate_Array_with(ThreadedCode_Class, 0, 419, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_push1, (Optr)string_23376, (Optr)&t_send2, (Optr)PSend23377, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_101, (Optr)&t_push1, (Optr)string_23378, (Optr)&t_send2, (Optr)PSend23379, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_102, (Optr)&t_push1, (Optr)string_23380, (Optr)&t_send2, (Optr)PSend23381, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push1, (Optr)string_23382, (Optr)&t_send2, (Optr)PSend23383, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_201, (Optr)&t_push1, (Optr)string_23384, (Optr)&t_send2, (Optr)PSend23385, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_202, (Optr)&t_push1, (Optr)string_23386, (Optr)&t_send2, (Optr)PSend23387, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_203, (Optr)&t_push1, (Optr)string_23388, (Optr)&t_send2, (Optr)PSend23389, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_204, (Optr)&t_push1, (Optr)string_23390, (Optr)&t_send2, (Optr)PSend23391, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_205, (Optr)&t_push1, (Optr)string_23392, (Optr)&t_send2, (Optr)PSend23393, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_206, (Optr)&t_push1, (Optr)string_23394, (Optr)&t_send2, (Optr)PSend23395, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_207, (Optr)&t_push1, (Optr)string_23396, (Optr)&t_send2, (Optr)PSend23397, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_300, (Optr)&t_push1, (Optr)string_23398, (Optr)&t_send2, (Optr)PSend23399, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push1, (Optr)string_23400, (Optr)&t_send2, (Optr)PSend23401, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push1, (Optr)string_23402, (Optr)&t_send2, (Optr)PSend23403, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_303, (Optr)&t_push1, (Optr)string_23404, (Optr)&t_send2, (Optr)PSend23405, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_304, (Optr)&t_push1, (Optr)string_23406, (Optr)&t_send2, (Optr)PSend23407, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_305, (Optr)&t_push1, (Optr)string_23408, (Optr)&t_send2, (Optr)PSend23409, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_307, (Optr)&t_push1, (Optr)string_23410, (Optr)&t_send2, (Optr)PSend23411, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push1, (Optr)string_23412, (Optr)&t_send2, (Optr)PSend23413, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_401, (Optr)&t_push1, (Optr)string_23414, (Optr)&t_send2, (Optr)PSend23415, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_402, (Optr)&t_push1, (Optr)string_23416, (Optr)&t_send2, (Optr)PSend23417, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_403, (Optr)&t_push1, (Optr)string_23418, (Optr)&t_send2, (Optr)PSend23419, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_404, (Optr)&t_push1, (Optr)string_23420, (Optr)&t_send2, (Optr)PSend23421, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_405, (Optr)&t_push1, (Optr)string_23422, (Optr)&t_send2, (Optr)PSend23423, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_406, (Optr)&t_push1, (Optr)string_23424, (Optr)&t_send2, (Optr)PSend23425, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_407, (Optr)&t_push1, (Optr)string_23426, (Optr)&t_send2, (Optr)PSend23427, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_408, (Optr)&t_push1, (Optr)string_23428, (Optr)&t_send2, (Optr)PSend23429, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_409, (Optr)&t_push1, (Optr)string_23430, (Optr)&t_send2, (Optr)PSend23431, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_410, (Optr)&t_push1, (Optr)string_23432, (Optr)&t_send2, (Optr)PSend23433, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_411, (Optr)&t_push1, (Optr)string_23434, (Optr)&t_send2, (Optr)PSend23435, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_412, (Optr)&t_push1, (Optr)string_23436, (Optr)&t_send2, (Optr)PSend23437, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_413, (Optr)&t_push1, (Optr)string_23438, (Optr)&t_send2, (Optr)PSend23439, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_414, (Optr)&t_push1, (Optr)string_23440, (Optr)&t_send2, (Optr)PSend23441, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_415, (Optr)&t_push1, (Optr)string_23442, (Optr)&t_send2, (Optr)PSend23443, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_416, (Optr)&t_push1, (Optr)string_23444, (Optr)&t_send2, (Optr)PSend23445, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_417, (Optr)&t_push1, (Optr)string_23446, (Optr)&t_send2, (Optr)PSend23447, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_422, (Optr)&t_push1, (Optr)string_23448, (Optr)&t_send2, (Optr)PSend23449, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_423, (Optr)&t_push1, (Optr)string_23450, (Optr)&t_send2, (Optr)PSend23451, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_424, (Optr)&t_push1, (Optr)string_23452, (Optr)&t_send2, (Optr)PSend23453, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push1, (Optr)string_23454, (Optr)&t_send2, (Optr)PSend23455, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_501, (Optr)&t_push1, (Optr)string_23456, (Optr)&t_send2, (Optr)PSend23457, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_502, (Optr)&t_push1, (Optr)string_23458, (Optr)&t_send2, (Optr)PSend23459, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_503, (Optr)&t_push1, (Optr)string_23460, (Optr)&t_send2, (Optr)PSend23461, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_504, (Optr)&t_push1, (Optr)string_23462, (Optr)&t_send2, (Optr)PSend23463, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_505, (Optr)&t_push1, (Optr)string_23464, (Optr)&t_send2, (Optr)PSend23465, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_507, (Optr)&t_push1, (Optr)string_23466, (Optr)&t_send2, (Optr)PSend23467, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23468, (Optr)&t_method_return);
    Block PBlock23373 = new_Block_with(PArray23374, empty_Array, PThreadedCode23375, 47, PSend23377, PSend23379, PSend23381, PSend23383, PSend23385, PSend23387, PSend23389, PSend23391, PSend23393, PSend23395, PSend23397, PSend23399, PSend23401, PSend23403, PSend23405, PSend23407, PSend23409, PSend23411, PSend23413, PSend23415, PSend23417, PSend23419, PSend23421, PSend23423, PSend23425, PSend23427, PSend23429, PSend23431, PSend23433, PSend23435, PSend23437, PSend23439, PSend23441, PSend23443, PSend23445, PSend23447, PSend23449, PSend23451, PSend23453, PSend23455, PSend23457, PSend23459, PSend23461, PSend23463, PSend23465, PSend23467, PSend23468);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23469 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // value:. 
    Send PSend23372 = new_Send((Optr)PBlock23373, SMB_value_, 1, (Optr)PSend23469);
    Assign PAssign23371 = new_Assign((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)PSend23372);
    Array PThreadedCode23370 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign23371, (Optr)&t_push_closure, (Optr)PBlock23373, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23469, (Optr)&t_send1, (Optr)PSend23372, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23369 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23370, 2, PAssign23371, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23369, HEADER(WebClient_Core_WebMessage_Class));
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