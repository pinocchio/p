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
    String string_22887 = new_String(L"Content-Type");
    String string_22890 = new_String(L"application/octet-stream");
    Array PThreadedCode22889 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22890, (Optr)&t_block_return);
    Constant string_22890_Const = new_Constant((Optr)string_22890);
    Block PBlock22888 = new_Block_with(empty_Array, empty_Array, PThreadedCode22889, 1, string_22890_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_22887_Const = new_Constant((Optr)string_22887);
    // headerAt:ifAbsent:. 
    Send PSend22891 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_22887_Const, (Optr)PBlock22888);
    Array PThreadedCode22886 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22887, (Optr)&t_push_closure, (Optr)PBlock22888, (Optr)&t_send2, (Optr)PSend22891, (Optr)&t_method_return);
    Method PMethod22885 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22886, 1, PSend22891);
    
    MethodClosure MC_SMB_contentType = new_MethodClosure((Method)PMethod22885, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType, MC_SMB_contentType);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22896 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_close, 0);
    Array PThreadedCode22895 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22896, (Optr)&t_block_return);
    Block PBlock22894 = new_Block_with(empty_Array, empty_Array, PThreadedCode22895, 1, PSend22896);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22897 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock22894);
    Array PThreadedCode22893 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock22894, (Optr)&t_send1, (Optr)PSend22897, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22892 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22893, 2, PSend22897, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22892, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_contentStream() {
    Symbol SMB_contentStream = new_Symbol(L"contentStream");
    Array PThreadedCode22899 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod22898 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22899, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_contentStream = new_MethodClosure((Method)PMethod22898, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentStream, MC_SMB_contentStream);
}


static void init_SMB_remoteHost() {
    Symbol SMB_remoteHost = new_Symbol(L"remoteHost");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22903 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend22905 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isKindOf_, 1, (Optr)PSocketStream_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22909 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22908 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22909, (Optr)&t_block_return);
    Block PBlock22907 = new_Block_with(empty_Array, empty_Array, PThreadedCode22908, 1, PSend22909);
    // ifFalse:. 
    Send PSend22906 = new_Send((Optr)PSend22905, SMB_ifFalse_, 1, (Optr)PBlock22907);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22910 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22911 = new_Send((Optr)PSend22910, SMB_remoteAddress, 0);
    Array PThreadedCode22904 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_send1, (Optr)PSend22905, (Optr)&t_send_ifFalse_, (Optr)PSend22906, (Optr)PBlock22907, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22910, (Optr)&t_send0, (Optr)PSend22911, (Optr)&t_method_return);
    Block PBlock22902 = new_Block_with(PArray22903, empty_Array, PThreadedCode22904, 2, PSend22906, PSend22911);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22912 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22902);
    Array PThreadedCode22901 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22902, (Optr)&t_send1, (Optr)PSend22912, (Optr)&t_method_return);
    Method PMethod22900 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22901, 1, PSend22912);
    
    MethodClosure MC_SMB_remoteHost = new_MethodClosure((Method)PMethod22900, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_remoteHost, MC_SMB_remoteHost);
}


static void init_SMB_stream_() {
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22914 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22916 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22915 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22916, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22913 = new_Method_with(PArray22914, empty_Array, empty_Array, PThreadedCode22915, 2, PAssign22916, self);
    
    MethodClosure MC_SMB_stream_ = new_MethodClosure((Method)PMethod22913, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream_, MC_SMB_stream_);
}


static void init_SMB_headersAt_ifAbsent_() {
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray22918 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_hdrs_0_2 = new_Variable_named(L"hdrs", 0);
    Array PArray22919 = new_Array_with(1, (Optr)VAR_hdrs_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22922 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign22921 = new_Assign((Optr)VAR_hdrs_0_2, (Optr)PSend22922);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray22924 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22926 = new_Send((Optr)VAR_hdrs_0_2, SMB_add_, 1, (Optr)VAR_value_1_0);
    Array PThreadedCode22925 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send1, (Optr)PSend22926, (Optr)&t_method_return);
    Block PBlock22923 = new_Block_with(PArray22924, empty_Array, PThreadedCode22925, 1, PSend22926);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend22927 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22923);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22928 = new_Send((Optr)VAR_hdrs_0_2, SMB_asArray, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend22931 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode22930 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend22931, (Optr)&t_block_return);
    Block PBlock22929 = new_Block_with(empty_Array, empty_Array, PThreadedCode22930, 1, PSend22931);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    // ifEmpty:. 
    Send PSend22932 = new_Send((Optr)PSend22928, SMB_ifEmpty_, 1, (Optr)PBlock22929);
    Array PThreadedCode22920 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign22921, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22922, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22923, (Optr)&t_send2, (Optr)PSend22927, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_send0, (Optr)PSend22928, (Optr)&t_push_closure, (Optr)PBlock22929, (Optr)&t_send1, (Optr)PSend22932, (Optr)&t_method_return);
    Method PMethod22917 = new_Method_with(PArray22918, PArray22919, empty_Array, PThreadedCode22920, 3, PAssign22921, PSend22927, PSend22932);
    
    MethodClosure MC_SMB_headersAt_ifAbsent_ = new_MethodClosure((Method)PMethod22917, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_ifAbsent_, MC_SMB_headersAt_ifAbsent_);
}


static void init_SMB_headerAt_() {
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22934 = new_Array_with(1, (Optr)VAR_key_0_0);
    String string_22938 = new_String(L"");
    Array PThreadedCode22937 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22938, (Optr)&t_block_return);
    Constant string_22938_Const = new_Constant((Optr)string_22938);
    Block PBlock22936 = new_Block_with(empty_Array, empty_Array, PThreadedCode22937, 1, string_22938_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    // headerAt:ifAbsent:. 
    Send PSend22939 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22936);
    Array PThreadedCode22935 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22936, (Optr)&t_send2, (Optr)PSend22939, (Optr)&t_method_return);
    Method PMethod22933 = new_Method_with(PArray22934, empty_Array, empty_Array, PThreadedCode22935, 1, PSend22939);
    
    MethodClosure MC_SMB_headerAt_ = new_MethodClosure((Method)PMethod22933, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_, MC_SMB_headerAt_);
}


static void init_SMB_chunkFrom_to_progress_() {
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_progressBlock_0_2 = new_Variable_named(L"progressBlock", 0);
    Array PArray22941 = new_Array_with(3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_2);
    Variable VAR_chunkSize_0_3 = new_Variable_named(L"chunkSize", 0);
    Variable VAR_firstLine_0_4 = new_Variable_named(L"firstLine", 0);
    Variable VAR_buffer_0_5 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_6 = new_Variable_named(L"totalRead", 0);
    Array PArray22942 = new_Array_with(4, (Optr)VAR_chunkSize_0_3, (Optr)VAR_firstLine_0_4, (Optr)VAR_buffer_0_5, (Optr)VAR_totalRead_0_6);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign22944 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22946 = new_Send((Optr)String_classReference, SMB_new, 0);
    Assign PAssign22945 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend22946);
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    // nextLine. 
    Send PSend22950 = new_Send((Optr)VAR_srcStream_0_0, SMB_nextLine, 0);
    Assign PAssign22949 = new_Assign((Optr)VAR_firstLine_0_4, (Optr)PSend22950);
    String string_22954 = new_String(L"16r");
    Constant string_22954_Const = new_Constant((Optr)string_22954);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend22955 = new_Send((Optr)VAR_firstLine_0_4, SMB_asUppercase, 0);
    // ,. 
    Send PSend22953 = new_Send((Optr)string_22954_Const, SMB__append_, 1, (Optr)PSend22955);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend22952 = new_Send((Optr)PSend22953, SMB_asNumber, 0);
    Assign PAssign22951 = new_Assign((Optr)VAR_chunkSize_0_3, (Optr)PSend22952);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22956 = new_Send((Optr)VAR_chunkSize_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode22948 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign22949, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_send0, (Optr)PSend22950, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22951, (Optr)&t_push1, (Optr)string_22954, (Optr)&t_push_variable, (Optr)VAR_firstLine_0_4, (Optr)&t_send0, (Optr)PSend22955, (Optr)&t_send1, (Optr)PSend22953, (Optr)&t_send0, (Optr)PSend22952, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22956, (Optr)&t_block_return);
    Block PBlock22947 = new_Block_with(empty_Array, empty_Array, PThreadedCode22948, 3, PAssign22949, PAssign22951, PSend22956);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend22961 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode22960 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend22961, (Optr)&t_block_return);
    Block PBlock22959 = new_Block_with(empty_Array, empty_Array, PThreadedCode22960, 1, PSend22961);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22962 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock22959);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22963 = new_Send((Optr)VAR_buffer_0_5, SMB_size, 0);
    // =. 
    Send PSend22964 = new_Send((Optr)PSend22963, SMB__equals_, 1, (Optr)VAR_chunkSize_0_3);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22970 = new_Send((Optr)VAR_buffer_0_5, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend22969 = new_Send((Optr)PSend22970, SMB_new_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign22968 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend22969);
    Array PThreadedCode22967 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22968, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend22970, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend22969, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22966 = new_Block_with(empty_Array, empty_Array, PThreadedCode22967, 1, PAssign22968);
    // ifFalse:. 
    Send PSend22965 = new_Send((Optr)PSend22964, SMB_ifFalse_, 1, (Optr)PBlock22966);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend22972 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_chunkSize_0_3, (Optr)VAR_buffer_0_5, (Optr)int_1_Const);
    Assign PAssign22971 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend22972);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22973 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)VAR_buffer_0_5);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skip:. 
    Send PSend22974 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend22976 = new_Send((Optr)VAR_totalRead_0_6, SMB__plus_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign22975 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)PSend22976);
    Array PThreadedCode22958 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock22959, (Optr)&t_send1, (Optr)PSend22962, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend22963, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend22964, (Optr)&t_send_ifFalse_, (Optr)PSend22965, (Optr)PBlock22966, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22971, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend22972, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send1, (Optr)PSend22973, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22974, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22975, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend22976, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22957 = new_Block_with(empty_Array, empty_Array, PThreadedCode22958, 6, PSend22962, PSend22965, PAssign22971, PSend22973, PSend22974, PAssign22975);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend22977 = new_Send((Optr)PBlock22947, SMB_whileFalse_, 1, (Optr)PBlock22957);
    // skip:. 
    Send PSend22978 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22979 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend22982 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode22981 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend22982, (Optr)&t_block_return);
    Block PBlock22980 = new_Block_with(empty_Array, empty_Array, PThreadedCode22981, 1, PSend22982);
    // ifNotNil:. 
    Send PSend22983 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock22980);
    Array PThreadedCode22943 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign22944, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22945, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22946, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22947, (Optr)&t_push_closure, (Optr)PBlock22957, (Optr)&t_send1, (Optr)PSend22977, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22978, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend22979, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock22980, (Optr)&t_send1, (Optr)PSend22983, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22940 = new_Method_with(PArray22941, PArray22942, empty_Array, PThreadedCode22943, 7, PAssign22944, PAssign22945, PSend22977, PSend22978, PSend22979, PSend22983, self);
    
    MethodClosure MC_SMB_chunkFrom_to_progress_ = new_MethodClosure((Method)PMethod22940, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_chunkFrom_to_progress_, MC_SMB_chunkFrom_to_progress_);
}


static void init_SMB_headersAt_do_() {
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray22985 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray22988 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22990 = new_Send((Optr)VAR_aKey_0_0, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend22991 = new_Send((Optr)VAR_key_1_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22992 = new_Send((Optr)PSend22990, SMB__equals_, 1, (Optr)PSend22991);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22996 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_value_1_1);
    Array PThreadedCode22995 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend22996, (Optr)&t_block_return);
    Block PBlock22994 = new_Block_with(empty_Array, empty_Array, PThreadedCode22995, 1, PSend22996);
    // ifTrue:. 
    Send PSend22993 = new_Send((Optr)PSend22992, SMB_ifTrue_, 1, (Optr)PBlock22994);
    Array PThreadedCode22989 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send0, (Optr)PSend22990, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send0, (Optr)PSend22991, (Optr)&t_send1, (Optr)PSend22992, (Optr)&t_send_ifTrue_, (Optr)PSend22993, (Optr)PBlock22994, (Optr)&t_method_return);
    Block PBlock22987 = new_Block_with(PArray22988, empty_Array, PThreadedCode22989, 1, PSend22993);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend22997 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock22987);
    Array PThreadedCode22986 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22987, (Optr)&t_send1, (Optr)PSend22997, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22984 = new_Method_with(PArray22985, empty_Array, empty_Array, PThreadedCode22986, 2, PSend22997, self);
    
    MethodClosure MC_SMB_headersAt_do_ = new_MethodClosure((Method)PMethod22984, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_do_, MC_SMB_headersAt_do_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22999 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23001 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend23002 = new_Send((Optr)PSend23001, SMB_name, 0);
    // printOn:. 
    Send PSend23003 = new_Send((Optr)PSend23002, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend23004 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23005 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend23006 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode23000 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23001, (Optr)&t_send0, (Optr)PSend23002, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23003, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend23004, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23005, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend23006, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22998 = new_Method_with(PArray22999, empty_Array, empty_Array, PThreadedCode23000, 5, PSend23003, PSend23004, PSend23005, PSend23006, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22998, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_contentLength() {
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23010 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23012 = new_String(L"Content-Length");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23015 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23014 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23015, (Optr)&t_block_return);
    Block PBlock23013 = new_Block_with(empty_Array, empty_Array, PThreadedCode23014, 1, PSend23015);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23012_Const = new_Constant((Optr)string_23012);
    // headerAt:ifAbsent:. 
    Send PSend23016 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23012_Const, (Optr)PBlock23013);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend23017 = new_Send((Optr)PSend23016, SMB_asInteger, 0);
    Array PThreadedCode23011 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23012, (Optr)&t_push_closure, (Optr)PBlock23013, (Optr)&t_send2, (Optr)PSend23016, (Optr)&t_send0, (Optr)PSend23017, (Optr)&t_method_return);
    Block PBlock23009 = new_Block_with(PArray23010, empty_Array, PThreadedCode23011, 1, PSend23017);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23018 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23009);
    Array PThreadedCode23008 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23009, (Optr)&t_send1, (Optr)PSend23018, (Optr)&t_method_return);
    Method PMethod23007 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23008, 1, PSend23018);
    
    MethodClosure MC_SMB_contentLength = new_MethodClosure((Method)PMethod23007, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength, MC_SMB_contentLength);
}


static void init_SMB_headersAt_() {
    Symbol SMB_headersAt_ = new_Symbol(L"headersAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23020 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23024 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23025 = new_Send((Optr)PSend23024, SMB_asArray, 0);
    Array PThreadedCode23023 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23024, (Optr)&t_send0, (Optr)PSend23025, (Optr)&t_block_return);
    Block PBlock23022 = new_Block_with(empty_Array, empty_Array, PThreadedCode23023, 1, PSend23025);
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    // headersAt:ifAbsent:. 
    Send PSend23026 = new_Send((Optr)self, SMB_headersAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23022);
    Array PThreadedCode23021 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23022, (Optr)&t_send2, (Optr)PSend23026, (Optr)&t_method_return);
    Method PMethod23019 = new_Method_with(PArray23020, empty_Array, empty_Array, PThreadedCode23021, 1, PSend23026);
    
    MethodClosure MC_SMB_headersAt_ = new_MethodClosure((Method)PMethod23019, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_, MC_SMB_headersAt_);
}


static void init_SMB_protocol_() {
    Symbol SMB_protocol_ = new_Symbol(L"protocol:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23028 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23030 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_aString_0_0);
    Array PThreadedCode23029 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23030, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23027 = new_Method_with(PArray23028, empty_Array, empty_Array, PThreadedCode23029, 2, PAssign23030, self);
    
    MethodClosure MC_SMB_protocol_ = new_MethodClosure((Method)PMethod23027, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol_, MC_SMB_protocol_);
}


static void init_SMB_contentLength_() {
    Symbol SMB_contentLength_ = new_Symbol(L"contentLength:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray23032 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    String string_23034 = new_String(L"Content-Length");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23034_Const = new_Constant((Optr)string_23034);
    // headerAt:put:. 
    Send PSend23035 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23034_Const, (Optr)VAR_aNumber_0_0);
    Array PThreadedCode23033 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23034, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send2, (Optr)PSend23035, (Optr)&t_method_return);
    Method PMethod23031 = new_Method_with(PArray23032, empty_Array, empty_Array, PThreadedCode23033, 1, PSend23035);
    
    MethodClosure MC_SMB_contentLength_ = new_MethodClosure((Method)PMethod23031, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength_, MC_SMB_contentLength_);
}


static void init_SMB_streamFrom_to_size_progress_() {
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_sizeOrNil_0_2 = new_Variable_named(L"sizeOrNil", 0);
    Variable VAR_progressBlock_0_3 = new_Variable_named(L"progressBlock", 0);
    Array PArray23037 = new_Array_with(4, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_progressBlock_0_3);
    Variable VAR_buffer_0_4 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_5 = new_Variable_named(L"totalRead", 0);
    Variable VAR_remaining_0_6 = new_Variable_named(L"remaining", 0);
    Variable VAR_size_0_7 = new_Variable_named(L"size", 0);
    Array PArray23038 = new_Array_with(4, (Optr)VAR_buffer_0_4, (Optr)VAR_totalRead_0_5, (Optr)VAR_remaining_0_6, (Optr)VAR_size_0_7);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23041 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23043 = new_String(L"transfer-encoding");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23043_Const = new_Constant((Optr)string_23043);
    // headerAt:. 
    Send PSend23044 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23043_Const);
    Variable VAR_encoding_2_0 = new_Variable_named(L"encoding", 2);
    Array PArray23046 = new_Array_with(1, (Optr)VAR_encoding_2_0);
    String string_23048 = new_String(L"chunked");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23048_Const = new_Constant((Optr)string_23048);
    // =. 
    Send PSend23049 = new_Send((Optr)VAR_encoding_2_0, SMB__equals_, 1, (Optr)string_23048_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    // chunkFrom:to:progress:. 
    Send PSend23053 = new_Send((Optr)self, SMB_chunkFrom_to_progress_, 3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_3);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23054 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23053);
    Array PThreadedCode23052 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_send3, (Optr)PSend23053, (Optr)&t_send1, (Optr)PSend23054, (Optr)&t_block_return);
    Block PBlock23051 = new_Block_with(empty_Array, empty_Array, PThreadedCode23052, 1, PSend23054);
    String string_23057 = new_String(L"Unknown transfer-encoding: ");
    Constant string_23057_Const = new_Constant((Optr)string_23057);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23058 = new_Send((Optr)string_23057_Const, SMB__append_, 1, (Optr)VAR_encoding_2_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23059 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23058);
    Array PThreadedCode23056 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23057, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_send1, (Optr)PSend23058, (Optr)&t_send1, (Optr)PSend23059, (Optr)&t_block_return);
    Block PBlock23055 = new_Block_with(empty_Array, empty_Array, PThreadedCode23056, 1, PSend23059);
    // ifTrue:ifFalse:. 
    Send PSend23050 = new_Send((Optr)PSend23049, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23051, (Optr)PBlock23055);
    Array PThreadedCode23047 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_push1, (Optr)string_23048, (Optr)&t_send1, (Optr)PSend23049, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23050, (Optr)PBlock23051, (Optr)PBlock23055, (Optr)&t_method_return);
    Block PBlock23045 = new_Block_with(PArray23046, empty_Array, PThreadedCode23047, 1, PSend23050);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23060 = new_Send((Optr)PSend23044, SMB_ifNotEmpty_, 1, (Optr)PBlock23045);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend23061 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend23065 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23064 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23065, (Optr)&t_block_return);
    Block PBlock23063 = new_Block_with(empty_Array, empty_Array, PThreadedCode23064, 1, PSend23065);
    // ifTrue:. 
    Send PSend23062 = new_Send((Optr)PSend23061, SMB_ifTrue_, 1, (Optr)PBlock23063);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    // new:. 
    Send PSend23067 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4096_Const);
    Assign PAssign23066 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23067);
    Assign PAssign23068 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)int_0_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Array PThreadedCode23072 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    Block PBlock23071 = new_Block_with(empty_Array, empty_Array, PThreadedCode23072, 1, int_0_Const);
    // ifNil:. 
    Send PSend23070 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_, 1, (Optr)PBlock23071);
    Assign PAssign23069 = new_Assign((Optr)VAR_size_0_7, (Optr)PSend23070);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend23075 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend23078 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23079 = new_Send((Optr)PSend23078, SMB_not, 0);
    Array PThreadedCode23077 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23078, (Optr)&t_send0, (Optr)PSend23079, (Optr)&t_block_return);
    Block PBlock23076 = new_Block_with(empty_Array, empty_Array, PThreadedCode23077, 1, PSend23079);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23080 = new_Send((Optr)PSend23075, SMB_and_, 1, (Optr)PBlock23076);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend23083 = new_Send((Optr)VAR_totalRead_0_5, SMB__lt_, 1, (Optr)VAR_size_0_7);
    Array PThreadedCode23082 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_size_0_7, (Optr)&t_send1, (Optr)PSend23083, (Optr)&t_block_return);
    Block PBlock23081 = new_Block_with(empty_Array, empty_Array, PThreadedCode23082, 1, PSend23083);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23084 = new_Send((Optr)PSend23080, SMB_or_, 1, (Optr)PBlock23081);
    Array PThreadedCode23074 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23075, (Optr)&t_push_closure, (Optr)PBlock23076, (Optr)&t_send1, (Optr)PSend23080, (Optr)&t_push_closure, (Optr)PBlock23081, (Optr)&t_send1, (Optr)PSend23084, (Optr)&t_block_return);
    Block PBlock23073 = new_Block_with(empty_Array, empty_Array, PThreadedCode23074, 1, PSend23084);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23089 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23088 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23089, (Optr)&t_block_return);
    Block PBlock23087 = new_Block_with(empty_Array, empty_Array, PThreadedCode23088, 1, PSend23089);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23090 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23087);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    SmallInt int_99999 = new_SmallInt(99999);
    Array PThreadedCode23094 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_99999, (Optr)&t_block_return);
    Constant int_99999_Const = new_Constant((Optr)int_99999);
    Block PBlock23093 = new_Block_with(empty_Array, empty_Array, PThreadedCode23094, 1, int_99999_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend23097 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__minus_, 1, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23096 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send1, (Optr)PSend23097, (Optr)&t_block_return);
    Block PBlock23095 = new_Block_with(empty_Array, empty_Array, PThreadedCode23096, 1, PSend23097);
    // ifNil:ifNotNil:. 
    Send PSend23092 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23093, (Optr)PBlock23095);
    Assign PAssign23091 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23092);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23098 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23099 = new_Send((Optr)VAR_remaining_0_6, SMB__gt_, 1, (Optr)PSend23098);
    // size. 
    Send PSend23104 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Assign PAssign23103 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23104);
    Array PThreadedCode23102 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23103, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23104, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23101 = new_Block_with(empty_Array, empty_Array, PThreadedCode23102, 1, PAssign23103);
    // ifTrue:. 
    Send PSend23100 = new_Send((Optr)PSend23099, SMB_ifTrue_, 1, (Optr)PBlock23101);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23106 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_remaining_0_6, (Optr)VAR_buffer_0_4, (Optr)int_1_Const);
    Assign PAssign23105 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23106);
    // size. 
    Send PSend23107 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // <. 
    Send PSend23108 = new_Send((Optr)VAR_remaining_0_6, SMB__lt_, 1, (Optr)PSend23107);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23112 = new_Send((Optr)VAR_buffer_0_4, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_remaining_0_6);
    Array PThreadedCode23111 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_send2, (Optr)PSend23112, (Optr)&t_block_return);
    Block PBlock23110 = new_Block_with(empty_Array, empty_Array, PThreadedCode23111, 1, PSend23112);
    Array PThreadedCode23114 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_block_return);
    Block PBlock23113 = new_Block_with(empty_Array, empty_Array, PThreadedCode23114, 1, VAR_buffer_0_4);
    // ifTrue:ifFalse:. 
    Send PSend23109 = new_Send((Optr)PSend23108, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23110, (Optr)PBlock23113);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23115 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)PSend23109);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // size. 
    Send PSend23118 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // +. 
    Send PSend23117 = new_Send((Optr)VAR_totalRead_0_5, SMB__plus_, 1, (Optr)PSend23118);
    Assign PAssign23116 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)PSend23117);
    Array PThreadedCode23086 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23087, (Optr)&t_send1, (Optr)PSend23090, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23091, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23093, (Optr)&t_push_closure, (Optr)PBlock23095, (Optr)&t_send2, (Optr)PSend23092, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23098, (Optr)&t_send1, (Optr)PSend23099, (Optr)&t_send_ifTrue_, (Optr)PSend23100, (Optr)PBlock23101, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23105, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23106, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23107, (Optr)&t_send1, (Optr)PSend23108, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23109, (Optr)PBlock23110, (Optr)PBlock23113, (Optr)&t_send1, (Optr)PSend23115, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23116, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23118, (Optr)&t_send1, (Optr)PSend23117, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23085 = new_Block_with(empty_Array, empty_Array, PThreadedCode23086, 6, PSend23090, PAssign23091, PSend23100, PAssign23105, PSend23115, PAssign23116);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23119 = new_Send((Optr)PBlock23073, SMB_whileTrue_, 1, (Optr)PBlock23085);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23120 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23123 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23122 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23123, (Optr)&t_block_return);
    Block PBlock23121 = new_Block_with(empty_Array, empty_Array, PThreadedCode23122, 1, PSend23123);
    // ifNotNil:. 
    Send PSend23124 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23121);
    Array PThreadedCode23042 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23043, (Optr)&t_send1, (Optr)PSend23044, (Optr)&t_push_closure, (Optr)PBlock23045, (Optr)&t_send1, (Optr)PSend23060, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23061, (Optr)&t_send_ifTrue_, (Optr)PSend23062, (Optr)PBlock23063, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23066, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_send1, (Optr)PSend23067, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23068, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23069, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23071, (Optr)&t_send1, (Optr)PSend23070, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23073, (Optr)&t_push_closure, (Optr)PBlock23085, (Optr)&t_send1, (Optr)PSend23119, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23120, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23121, (Optr)&t_send1, (Optr)PSend23124, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23040 = new_Block_with(PArray23041, empty_Array, PThreadedCode23042, 9, PSend23060, PSend23062, PAssign23066, PAssign23068, PAssign23069, PSend23119, PSend23120, PSend23124, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23125 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23040);
    Array PThreadedCode23039 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23040, (Optr)&t_send1, (Optr)PSend23125, (Optr)&t_method_return);
    Method PMethod23036 = new_Method_with(PArray23037, PArray23038, empty_Array, PThreadedCode23039, 1, PSend23125);
    
    MethodClosure MC_SMB_streamFrom_to_size_progress_ = new_MethodClosure((Method)PMethod23036, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_streamFrom_to_size_progress_, MC_SMB_streamFrom_to_size_progress_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23129 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23131 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode23130 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23131, (Optr)&t_method_return);
    Block PBlock23128 = new_Block_with(PArray23129, empty_Array, PThreadedCode23130, 1, PSend23131);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23132 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23128);
    Array PThreadedCode23127 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23128, (Optr)&t_send1, (Optr)PSend23132, (Optr)&t_method_return);
    Method PMethod23126 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23127, 1, PSend23132);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod23126, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_contentWithProgress_() {
    Symbol SMB_contentWithProgress_ = new_Symbol(L"contentWithProgress:");
    Variable VAR_progressBlock_0_0 = new_Variable_named(L"progressBlock", 0);
    Array PArray23134 = new_Array_with(1, (Optr)VAR_progressBlock_0_0);
    Variable VAR_length_1_0 = new_Variable_named(L"length", 1);
    Array PArray23137 = new_Array_with(1, (Optr)VAR_length_1_0);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23140 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23139 = new_Assign((Optr)VAR_length_1_0, (Optr)PSend23140);
    Symbol SMB_new_streamContents_ = new_Symbol(L"new:streamContents:");
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23145 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23144 = new_Block_with(empty_Array, empty_Array, PThreadedCode23145, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23143 = new_Send((Optr)VAR_length_1_0, SMB_ifNil_, 1, (Optr)PBlock23144);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23147 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23149 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_s_2_0, (Optr)VAR_length_1_0, (Optr)VAR_progressBlock_0_0);
    Array PThreadedCode23148 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_0, (Optr)&t_send4, (Optr)PSend23149, (Optr)&t_method_return);
    Block PBlock23146 = new_Block_with(PArray23147, empty_Array, PThreadedCode23148, 1, PSend23149);
    // new:streamContents:. 
    Send PSend23142 = new_Send((Optr)String_classReference, SMB_new_streamContents_, 2, (Optr)PSend23143, (Optr)PBlock23146);
    Assign PAssign23141 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23142);
    Array PThreadedCode23138 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign23139, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23140, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23141, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_closure, (Optr)PBlock23144, (Optr)&t_send1, (Optr)PSend23143, (Optr)&t_push_closure, (Optr)PBlock23146, (Optr)&t_send2, (Optr)PSend23142, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23136 = new_Block_with(empty_Array, PArray23137, PThreadedCode23138, 2, PAssign23139, PAssign23141);
    // ifNil:. 
    Send PSend23150 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23136);
    Array PThreadedCode23135 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23136, (Optr)&t_send1, (Optr)PSend23150, (Optr)&t_method_return);
    Method PMethod23133 = new_Method_with(PArray23134, empty_Array, empty_Array, PThreadedCode23135, 1, PSend23150);
    
    MethodClosure MC_SMB_contentWithProgress_ = new_MethodClosure((Method)PMethod23133, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentWithProgress_, MC_SMB_contentWithProgress_);
}


static void init_SMB_stream() {
    Symbol SMB_stream = new_Symbol(L"stream");
    Array PThreadedCode23152 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23151 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23152, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_stream = new_MethodClosure((Method)PMethod23151, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream, MC_SMB_stream);
}


static void init_SMB_protocol() {
    Symbol SMB_protocol = new_Symbol(L"protocol");
    Array PThreadedCode23154 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_method_return);
    Method PMethod23153 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23154, 1, slot_WebClient_Core_WebMessage_protocol);
    
    MethodClosure MC_SMB_protocol = new_MethodClosure((Method)PMethod23153, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol, MC_SMB_protocol);
}


static void init_SMB_writeHeadersOn_() {
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23156 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23159 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23162 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23164 = new_String(L": ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23164_Const = new_Constant((Optr)string_23164);
    // ,. 
    Send PSend23165 = new_Send((Optr)VAR_key_1_0, SMB__append_, 1, (Optr)string_23164_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23166 = new_Send((Optr)VAR_value_1_1, SMB_asString, 0);
    // ,. 
    Send PSend23167 = new_Send((Optr)PSend23165, SMB__append_, 1, (Optr)PSend23166);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23168 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23167);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23169 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Array PThreadedCode23163 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push1, (Optr)string_23164, (Optr)&t_send1, (Optr)PSend23165, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send0, (Optr)PSend23166, (Optr)&t_send1, (Optr)PSend23167, (Optr)&t_send1, (Optr)PSend23168, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23169, (Optr)&t_method_return);
    Block PBlock23161 = new_Block_with(PArray23162, empty_Array, PThreadedCode23163, 2, PSend23168, PSend23169);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23170 = new_Send((Optr)PBlock23161, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23160 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock23161, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23170, (Optr)&t_method_return);
    Block PBlock23158 = new_Block_with(PArray23159, empty_Array, PThreadedCode23160, 1, PSend23170);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23171 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23158);
    Array PThreadedCode23157 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23158, (Optr)&t_send1, (Optr)PSend23171, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23155 = new_Method_with(PArray23156, empty_Array, empty_Array, PThreadedCode23157, 2, PSend23171, self);
    
    MethodClosure MC_SMB_writeHeadersOn_ = new_MethodClosure((Method)PMethod23155, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeHeadersOn_, MC_SMB_writeHeadersOn_);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23176 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_destroy, 0);
    Array PThreadedCode23175 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23176, (Optr)&t_block_return);
    Block PBlock23174 = new_Block_with(empty_Array, empty_Array, PThreadedCode23175, 1, PSend23176);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23177 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23174);
    Array PThreadedCode23173 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23174, (Optr)&t_send1, (Optr)PSend23177, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23172 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23173, 2, PSend23177, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod23172, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23179 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    // writeHeadersOn:. 
    Send PSend23181 = new_Send((Optr)self, SMB_writeHeadersOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23182 = new_Send((Optr)VAR_aStream_0_0, SMB_crlf, 0);
    Array PThreadedCode23180 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23181, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23182, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23178 = new_Method_with(PArray23179, empty_Array, empty_Array, PThreadedCode23180, 3, PSend23181, PSend23182, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23178, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_headersDo_() {
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23184 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23187 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23189 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23190 = new_Send((Optr)VAR_assoc_1_0, SMB_value, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23191 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend23189, (Optr)PSend23190);
    Array PThreadedCode23188 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23189, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23190, (Optr)&t_send2, (Optr)PSend23191, (Optr)&t_method_return);
    Block PBlock23186 = new_Block_with(PArray23187, empty_Array, PThreadedCode23188, 1, PSend23191);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23192 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23186);
    Array PThreadedCode23185 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23186, (Optr)&t_send1, (Optr)PSend23192, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23183 = new_Method_with(PArray23184, empty_Array, empty_Array, PThreadedCode23185, 2, PSend23192, self);
    
    MethodClosure MC_SMB_headersDo_ = new_MethodClosure((Method)PMethod23183, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersDo_, MC_SMB_headersDo_);
}


static void init_SMB_multipartBoundary() {
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    Variable VAR_header_0_0 = new_Variable_named(L"header", 0);
    Array PArray23194 = new_Array_with(1, (Optr)VAR_header_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23197 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    String string_23201 = new_String(L"Content-Type");
    Constant string_23201_Const = new_Constant((Optr)string_23201);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23204 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23203 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23204, (Optr)&t_block_return);
    Block PBlock23202 = new_Block_with(empty_Array, empty_Array, PThreadedCode23203, 1, PSend23204);
    // headerAt:ifAbsent:. 
    Send PSend23200 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23201_Const, (Optr)PBlock23202);
    Assign PAssign23199 = new_Assign((Optr)VAR_header_0_0, (Optr)PSend23200);
    String string_23205 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23205_Const = new_Constant((Optr)string_23205);
    // beginsWith:. 
    Send PSend23206 = new_Send((Optr)VAR_header_0_0, SMB_beginsWith_, 1, (Optr)string_23205_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend23210 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23209 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23210, (Optr)&t_block_return);
    Block PBlock23208 = new_Block_with(empty_Array, empty_Array, PThreadedCode23209, 1, PSend23210);
    // ifFalse:. 
    Send PSend23207 = new_Send((Optr)PSend23206, SMB_ifFalse_, 1, (Optr)PBlock23208);
    String string_23211 = new_String(L"boundary=");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23211_Const = new_Constant((Optr)string_23211);
    // findString:. 
    Send PSend23212 = new_Send((Optr)VAR_header_0_0, SMB_findString_, 1, (Optr)string_23211_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_9_Const = new_Constant((Optr)int_9);
    // +. 
    Send PSend23213 = new_Send((Optr)PSend23212, SMB__plus_, 1, (Optr)int_9_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23214 = new_Send((Optr)VAR_header_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23215 = new_Send((Optr)VAR_header_0_0, SMB_copyFrom_to_, 2, (Optr)PSend23213, (Optr)PSend23214);
    Array PThreadedCode23198 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23199, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23201, (Optr)&t_push_closure, (Optr)PBlock23202, (Optr)&t_send2, (Optr)PSend23200, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23205, (Optr)&t_send1, (Optr)PSend23206, (Optr)&t_send_ifFalse_, (Optr)PSend23207, (Optr)PBlock23208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23211, (Optr)&t_send1, (Optr)PSend23212, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend23213, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_send0, (Optr)PSend23214, (Optr)&t_send2, (Optr)PSend23215, (Optr)&t_method_return);
    Block PBlock23196 = new_Block_with(PArray23197, empty_Array, PThreadedCode23198, 3, PAssign23199, PSend23207, PSend23215);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23216 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23196);
    Array PThreadedCode23195 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23196, (Optr)&t_send1, (Optr)PSend23216, (Optr)&t_method_return);
    Method PMethod23193 = new_Method_with(empty_Array, PArray23194, empty_Array, PThreadedCode23195, 1, PSend23216);
    
    MethodClosure MC_SMB_multipartBoundary = new_MethodClosure((Method)PMethod23193, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_multipartBoundary, MC_SMB_multipartBoundary);
}


static void init_SMB_closeIfTransient() {
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23219 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23223 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23222 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23223, (Optr)&t_block_return);
    Block PBlock23221 = new_Block_with(empty_Array, empty_Array, PThreadedCode23222, 1, PSend23223);
    // ifFalse:. 
    Send PSend23220 = new_Send((Optr)PSend23219, SMB_ifFalse_, 1, (Optr)PBlock23221);
    Array PThreadedCode23218 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23219, (Optr)&t_send_ifFalse_, (Optr)PSend23220, (Optr)PBlock23221, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23217 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23218, 2, PSend23220, self);
    
    MethodClosure MC_SMB_closeIfTransient = new_MethodClosure((Method)PMethod23217, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_closeIfTransient, MC_SMB_closeIfTransient);
}


static void init_SMB_contentType_() {
    Symbol SMB_contentType_ = new_Symbol(L"contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23225 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23227 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23227_Const = new_Constant((Optr)string_23227);
    // headerAt:put:. 
    Send PSend23228 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23227_Const, (Optr)VAR_aString_0_0);
    Array PThreadedCode23226 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23227, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23228, (Optr)&t_method_return);
    Method PMethod23224 = new_Method_with(PArray23225, empty_Array, empty_Array, PThreadedCode23226, 1, PSend23228);
    
    MethodClosure MC_SMB_contentType_ = new_MethodClosure((Method)PMethod23224, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType_, MC_SMB_contentType_);
}


static void init_SMB_headerAt_put_() {
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23230 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23233 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_assoc_2_0 = new_Variable_named(L"assoc", 2);
    Array PArray23236 = new_Array_with(1, (Optr)VAR_assoc_2_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23238 = new_Send((Optr)VAR_assoc_2_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23239 = new_Send((Optr)PSend23238, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23240 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23241 = new_Send((Optr)PSend23239, SMB__equals_, 1, (Optr)PSend23240);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23245 = new_Send((Optr)VAR_assoc_2_0, SMB_value_, 1, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23246 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23244 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend23245, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23246, (Optr)&t_block_return);
    Block PBlock23243 = new_Block_with(empty_Array, empty_Array, PThreadedCode23244, 2, PSend23245, PSend23246);
    // ifTrue:. 
    Send PSend23242 = new_Send((Optr)PSend23241, SMB_ifTrue_, 1, (Optr)PBlock23243);
    Array PThreadedCode23237 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_send0, (Optr)PSend23238, (Optr)&t_send0, (Optr)PSend23239, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23240, (Optr)&t_send1, (Optr)PSend23241, (Optr)&t_send_ifTrue_, (Optr)PSend23242, (Optr)PBlock23243, (Optr)&t_method_return);
    Block PBlock23235 = new_Block_with(PArray23236, empty_Array, PThreadedCode23237, 1, PSend23242);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23247 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23235);
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    // addHeader:value:. 
    Send PSend23248 = new_Send((Optr)self, SMB_addHeader_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Array PThreadedCode23234 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23235, (Optr)&t_send1, (Optr)PSend23247, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23248, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23232 = new_Block_with(PArray23233, empty_Array, PThreadedCode23234, 3, PSend23247, PSend23248, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23249 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23232);
    Array PThreadedCode23231 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23232, (Optr)&t_send1, (Optr)PSend23249, (Optr)&t_method_return);
    Method PMethod23229 = new_Method_with(PArray23230, empty_Array, empty_Array, PThreadedCode23231, 1, PSend23249);
    
    MethodClosure MC_SMB_headerAt_put_ = new_MethodClosure((Method)PMethod23229, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_put_, MC_SMB_headerAt_put_);
}


static void init_SMB_headerAt_ifAbsent_() {
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23251 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23254 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray23257 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23259 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode23258 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend23259, (Optr)&t_method_return);
    Block PBlock23256 = new_Block_with(PArray23257, empty_Array, PThreadedCode23258, 1, PSend23259);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23260 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23256);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23261 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23255 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23256, (Optr)&t_send2, (Optr)PSend23260, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23261, (Optr)&t_method_return);
    Block PBlock23253 = new_Block_with(PArray23254, empty_Array, PThreadedCode23255, 2, PSend23260, PSend23261);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23262 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23253);
    Array PThreadedCode23252 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23253, (Optr)&t_send1, (Optr)PSend23262, (Optr)&t_method_return);
    Method PMethod23250 = new_Method_with(PArray23251, empty_Array, empty_Array, PThreadedCode23252, 1, PSend23262);
    
    MethodClosure MC_SMB_headerAt_ifAbsent_ = new_MethodClosure((Method)PMethod23250, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_ifAbsent_, MC_SMB_headerAt_ifAbsent_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend23268 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign23267 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23268);
    Array PThreadedCode23266 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23267, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23268, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23265 = new_Block_with(empty_Array, empty_Array, PThreadedCode23266, 1, PAssign23267);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23269 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23265);
    Array PThreadedCode23264 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23265, (Optr)&t_send1, (Optr)PSend23269, (Optr)&t_method_return);
    Method PMethod23263 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23264, 1, PSend23269);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod23263, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR_length_0_0 = new_Variable_named(L"length", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_buffer_0_2 = new_Variable_named(L"buffer", 0);
    Array PArray23271 = new_Array_with(3, (Optr)VAR_length_0_0, (Optr)VAR_size_0_1, (Optr)VAR_buffer_0_2);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23274 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23273 = new_Assign((Optr)VAR_length_0_0, (Optr)PSend23274);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23278 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23277 = new_Block_with(empty_Array, empty_Array, PThreadedCode23278, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23276 = new_Send((Optr)VAR_length_0_0, SMB_ifNil_, 1, (Optr)PBlock23277);
    Assign PAssign23275 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend23276);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23281 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend23280 = new_Send((Optr)PSend23281, SMB_writeStream, 0);
    Assign PAssign23279 = new_Assign((Optr)VAR_buffer_0_2, (Optr)PSend23280);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23282 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_buffer_0_2, (Optr)VAR_length_0_0, (Optr)nil_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend23283 = new_Send((Optr)VAR_buffer_0_2, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23284 = new_Send((Optr)PSend23283, SMB__equals_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_originalContents = new_Symbol(L"originalContents");
    // originalContents. 
    Send PSend23288 = new_Send((Optr)VAR_buffer_0_2, SMB_originalContents, 0);
    Array PThreadedCode23287 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23288, (Optr)&t_block_return);
    Block PBlock23286 = new_Block_with(empty_Array, empty_Array, PThreadedCode23287, 1, PSend23288);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend23291 = new_Send((Optr)VAR_buffer_0_2, SMB_contents, 0);
    Array PThreadedCode23290 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23291, (Optr)&t_block_return);
    Block PBlock23289 = new_Block_with(empty_Array, empty_Array, PThreadedCode23290, 1, PSend23291);
    // ifTrue:ifFalse:. 
    Send PSend23285 = new_Send((Optr)PSend23284, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23286, (Optr)PBlock23289);
    Array PThreadedCode23272 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign23273, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23274, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23275, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_closure, (Optr)PBlock23277, (Optr)&t_send1, (Optr)PSend23276, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23279, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23281, (Optr)&t_send0, (Optr)PSend23280, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23282, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23283, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23284, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23285, (Optr)PBlock23286, (Optr)PBlock23289, (Optr)&t_method_return);
    Method PMethod23270 = new_Method_with(empty_Array, PArray23271, empty_Array, PThreadedCode23272, 5, PAssign23273, PAssign23275, PAssign23279, PSend23282, PSend23285);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod23270, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_isPersistent() {
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23295 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23297 = new_String(L"Connection");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23297_Const = new_Constant((Optr)string_23297);
    // headerAt:. 
    Send PSend23298 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23297_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23299 = new_Send((Optr)PSend23298, SMB_asLowercase, 0);
    String string_23300 = new_String(L"close");
    Constant string_23300_Const = new_Constant((Optr)string_23300);
    // asLowercase. 
    Send PSend23301 = new_Send((Optr)string_23300_Const, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23302 = new_Send((Optr)PSend23299, SMB__equals_, 1, (Optr)PSend23301);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23306 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23305 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23306, (Optr)&t_block_return);
    Block PBlock23304 = new_Block_with(empty_Array, empty_Array, PThreadedCode23305, 1, PSend23306);
    // ifTrue:. 
    Send PSend23303 = new_Send((Optr)PSend23302, SMB_ifTrue_, 1, (Optr)PBlock23304);
    String string_23307 = new_String(L"Connection");
    Constant string_23307_Const = new_Constant((Optr)string_23307);
    // headerAt:. 
    Send PSend23308 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23307_Const);
    // asLowercase. 
    Send PSend23309 = new_Send((Optr)PSend23308, SMB_asLowercase, 0);
    String string_23310 = new_String(L"keep-alive");
    Constant string_23310_Const = new_Constant((Optr)string_23310);
    // asLowercase. 
    Send PSend23311 = new_Send((Optr)string_23310_Const, SMB_asLowercase, 0);
    // =. 
    Send PSend23312 = new_Send((Optr)PSend23309, SMB__equals_, 1, (Optr)PSend23311);
    // escape:. 
    Send PSend23316 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23315 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23316, (Optr)&t_block_return);
    Block PBlock23314 = new_Block_with(empty_Array, empty_Array, PThreadedCode23315, 1, PSend23316);
    // ifTrue:. 
    Send PSend23313 = new_Send((Optr)PSend23312, SMB_ifTrue_, 1, (Optr)PBlock23314);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23317 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23318 = new_String(L"HTTP/1.0");
    Constant string_23318_Const = new_Constant((Optr)string_23318);
    // =. 
    Send PSend23319 = new_Send((Optr)PSend23317, SMB__equals_, 1, (Optr)string_23318_Const);
    // escape:. 
    Send PSend23323 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23322 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23323, (Optr)&t_block_return);
    Block PBlock23321 = new_Block_with(empty_Array, empty_Array, PThreadedCode23322, 1, PSend23323);
    // ifTrue:. 
    Send PSend23320 = new_Send((Optr)PSend23319, SMB_ifTrue_, 1, (Optr)PBlock23321);
    // protocol. 
    Send PSend23324 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23325 = new_String(L"HTTP/1.1");
    Constant string_23325_Const = new_Constant((Optr)string_23325);
    // =. 
    Send PSend23326 = new_Send((Optr)PSend23324, SMB__equals_, 1, (Optr)string_23325_Const);
    // escape:. 
    Send PSend23330 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23329 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23330, (Optr)&t_block_return);
    Block PBlock23328 = new_Block_with(empty_Array, empty_Array, PThreadedCode23329, 1, PSend23330);
    // ifTrue:. 
    Send PSend23327 = new_Send((Optr)PSend23326, SMB_ifTrue_, 1, (Optr)PBlock23328);
    Array PThreadedCode23296 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23297, (Optr)&t_send1, (Optr)PSend23298, (Optr)&t_send0, (Optr)PSend23299, (Optr)&t_push1, (Optr)string_23300, (Optr)&t_send0, (Optr)PSend23301, (Optr)&t_send1, (Optr)PSend23302, (Optr)&t_send_ifTrue_, (Optr)PSend23303, (Optr)PBlock23304, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23307, (Optr)&t_send1, (Optr)PSend23308, (Optr)&t_send0, (Optr)PSend23309, (Optr)&t_push1, (Optr)string_23310, (Optr)&t_send0, (Optr)PSend23311, (Optr)&t_send1, (Optr)PSend23312, (Optr)&t_send_ifTrue_, (Optr)PSend23313, (Optr)PBlock23314, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23317, (Optr)&t_push1, (Optr)string_23318, (Optr)&t_send1, (Optr)PSend23319, (Optr)&t_send_ifTrue_, (Optr)PSend23320, (Optr)PBlock23321, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23324, (Optr)&t_push1, (Optr)string_23325, (Optr)&t_send1, (Optr)PSend23326, (Optr)&t_send_ifTrue_, (Optr)PSend23327, (Optr)PBlock23328, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock23294 = new_Block_with(PArray23295, empty_Array, PThreadedCode23296, 5, PSend23303, PSend23313, PSend23320, PSend23327, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23331 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23294);
    Array PThreadedCode23293 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23294, (Optr)&t_send1, (Optr)PSend23331, (Optr)&t_method_return);
    Method PMethod23292 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23293, 1, PSend23331);
    
    MethodClosure MC_SMB_isPersistent = new_MethodClosure((Method)PMethod23292, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_isPersistent, MC_SMB_isPersistent);
}


static void init_SMB_removeHeader_() {
    Symbol SMB_removeHeader_ = new_Symbol(L"removeHeader:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23333 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23338 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23340 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23341 = new_Send((Optr)PSend23340, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23342 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23343 = new_Send((Optr)PSend23341, SMB__equals_, 1, (Optr)PSend23342);
    Array PThreadedCode23339 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23340, (Optr)&t_send0, (Optr)PSend23341, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23342, (Optr)&t_send1, (Optr)PSend23343, (Optr)&t_method_return);
    Block PBlock23337 = new_Block_with(PArray23338, empty_Array, PThreadedCode23339, 1, PSend23343);
    // reject:. 
    Send PSend23336 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_reject_, 1, (Optr)PBlock23337);
    Assign PAssign23335 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23336);
    Array PThreadedCode23334 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign23335, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23337, (Optr)&t_send1, (Optr)PSend23336, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23332 = new_Method_with(PArray23333, empty_Array, empty_Array, PThreadedCode23334, 2, PAssign23335, self);
    
    MethodClosure MC_SMB_removeHeader_ = new_MethodClosure((Method)PMethod23332, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_removeHeader_, MC_SMB_removeHeader_);
}


static void init_SMB_addHeader_value_() {
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23345 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23347 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23348 = new_Send((Optr)PSend23347, SMB_key_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23349 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_add_, 1, (Optr)PSend23348);
    Array PThreadedCode23346 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23347, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23348, (Optr)&t_send1, (Optr)PSend23349, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23344 = new_Method_with(PArray23345, empty_Array, empty_Array, PThreadedCode23346, 2, PSend23349, self);
    
    MethodClosure MC_SMB_addHeader_value_ = new_MethodClosure((Method)PMethod23344, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_addHeader_value_, MC_SMB_addHeader_value_);
}


static void init_SMB_content_() {
    Symbol SMB_content_ = new_Symbol(L"content:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23351 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23353 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)VAR_aString_0_0);
    Array PThreadedCode23352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23353, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23350 = new_Method_with(PArray23351, empty_Array, empty_Array, PThreadedCode23352, 2, PAssign23353, self);
    
    MethodClosure MC_SMB_content_ = new_MethodClosure((Method)PMethod23350, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content_, MC_SMB_content_);
}


static void init_class_SMB_statusCodeAt_() {
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray23355 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend23357 = new_Send((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, SMB_at_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode23356 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend23357, (Optr)&t_method_return);
    Method PMethod23354 = new_Method_with(PArray23355, empty_Array, empty_Array, PThreadedCode23356, 1, PSend23357);
    
    MethodClosure MC_SMB_statusCodeAt_ = new_MethodClosure((Method)PMethod23354, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_statusCodeAt_, MC_SMB_statusCodeAt_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23363 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_100 = new_SmallInt(100);
    String string_23365 = new_String(L"Continue");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant int_100_Const = new_Constant((Optr)int_100);
    Constant string_23365_Const = new_Constant((Optr)string_23365);
    // at:put:. 
    Send PSend23366 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_100_Const, (Optr)string_23365_Const);
    SmallInt int_101 = new_SmallInt(101);
    String string_23367 = new_String(L"Switching Protocols");
    Constant int_101_Const = new_Constant((Optr)int_101);
    Constant string_23367_Const = new_Constant((Optr)string_23367);
    // at:put:. 
    Send PSend23368 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_101_Const, (Optr)string_23367_Const);
    SmallInt int_102 = new_SmallInt(102);
    String string_23369 = new_String(L"Processing");
    Constant int_102_Const = new_Constant((Optr)int_102);
    Constant string_23369_Const = new_Constant((Optr)string_23369);
    // at:put:. 
    Send PSend23370 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_102_Const, (Optr)string_23369_Const);
    SmallInt int_200 = new_SmallInt(200);
    String string_23371 = new_String(L"OK");
    Constant int_200_Const = new_Constant((Optr)int_200);
    Constant string_23371_Const = new_Constant((Optr)string_23371);
    // at:put:. 
    Send PSend23372 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_200_Const, (Optr)string_23371_Const);
    SmallInt int_201 = new_SmallInt(201);
    String string_23373 = new_String(L"Created");
    Constant int_201_Const = new_Constant((Optr)int_201);
    Constant string_23373_Const = new_Constant((Optr)string_23373);
    // at:put:. 
    Send PSend23374 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_201_Const, (Optr)string_23373_Const);
    SmallInt int_202 = new_SmallInt(202);
    String string_23375 = new_String(L"Accepted");
    Constant int_202_Const = new_Constant((Optr)int_202);
    Constant string_23375_Const = new_Constant((Optr)string_23375);
    // at:put:. 
    Send PSend23376 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_202_Const, (Optr)string_23375_Const);
    SmallInt int_203 = new_SmallInt(203);
    String string_23377 = new_String(L"Non-Authoritative Information");
    Constant int_203_Const = new_Constant((Optr)int_203);
    Constant string_23377_Const = new_Constant((Optr)string_23377);
    // at:put:. 
    Send PSend23378 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_203_Const, (Optr)string_23377_Const);
    SmallInt int_204 = new_SmallInt(204);
    String string_23379 = new_String(L"No Content");
    Constant int_204_Const = new_Constant((Optr)int_204);
    Constant string_23379_Const = new_Constant((Optr)string_23379);
    // at:put:. 
    Send PSend23380 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_204_Const, (Optr)string_23379_Const);
    SmallInt int_205 = new_SmallInt(205);
    String string_23381 = new_String(L"Reset Content");
    Constant int_205_Const = new_Constant((Optr)int_205);
    Constant string_23381_Const = new_Constant((Optr)string_23381);
    // at:put:. 
    Send PSend23382 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_205_Const, (Optr)string_23381_Const);
    SmallInt int_206 = new_SmallInt(206);
    String string_23383 = new_String(L"Partial Content");
    Constant int_206_Const = new_Constant((Optr)int_206);
    Constant string_23383_Const = new_Constant((Optr)string_23383);
    // at:put:. 
    Send PSend23384 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_206_Const, (Optr)string_23383_Const);
    SmallInt int_207 = new_SmallInt(207);
    String string_23385 = new_String(L"Multi-Status");
    Constant int_207_Const = new_Constant((Optr)int_207);
    Constant string_23385_Const = new_Constant((Optr)string_23385);
    // at:put:. 
    Send PSend23386 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_207_Const, (Optr)string_23385_Const);
    SmallInt int_300 = new_SmallInt(300);
    String string_23387 = new_String(L"Multiple Choices");
    Constant int_300_Const = new_Constant((Optr)int_300);
    Constant string_23387_Const = new_Constant((Optr)string_23387);
    // at:put:. 
    Send PSend23388 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_300_Const, (Optr)string_23387_Const);
    SmallInt int_301 = new_SmallInt(301);
    String string_23389 = new_String(L"Moved Permanently");
    Constant int_301_Const = new_Constant((Optr)int_301);
    Constant string_23389_Const = new_Constant((Optr)string_23389);
    // at:put:. 
    Send PSend23390 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_301_Const, (Optr)string_23389_Const);
    SmallInt int_302 = new_SmallInt(302);
    String string_23391 = new_String(L"Moved Temporarily");
    Constant int_302_Const = new_Constant((Optr)int_302);
    Constant string_23391_Const = new_Constant((Optr)string_23391);
    // at:put:. 
    Send PSend23392 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_302_Const, (Optr)string_23391_Const);
    SmallInt int_303 = new_SmallInt(303);
    String string_23393 = new_String(L"See Other");
    Constant int_303_Const = new_Constant((Optr)int_303);
    Constant string_23393_Const = new_Constant((Optr)string_23393);
    // at:put:. 
    Send PSend23394 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_303_Const, (Optr)string_23393_Const);
    SmallInt int_304 = new_SmallInt(304);
    String string_23395 = new_String(L"Not Modified");
    Constant int_304_Const = new_Constant((Optr)int_304);
    Constant string_23395_Const = new_Constant((Optr)string_23395);
    // at:put:. 
    Send PSend23396 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_304_Const, (Optr)string_23395_Const);
    SmallInt int_305 = new_SmallInt(305);
    String string_23397 = new_String(L"Use Proxy");
    Constant int_305_Const = new_Constant((Optr)int_305);
    Constant string_23397_Const = new_Constant((Optr)string_23397);
    // at:put:. 
    Send PSend23398 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_305_Const, (Optr)string_23397_Const);
    SmallInt int_307 = new_SmallInt(307);
    String string_23399 = new_String(L"Temporary Redirect");
    Constant int_307_Const = new_Constant((Optr)int_307);
    Constant string_23399_Const = new_Constant((Optr)string_23399);
    // at:put:. 
    Send PSend23400 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_307_Const, (Optr)string_23399_Const);
    SmallInt int_400 = new_SmallInt(400);
    String string_23401 = new_String(L"Bad Request");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23401_Const = new_Constant((Optr)string_23401);
    // at:put:. 
    Send PSend23402 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_400_Const, (Optr)string_23401_Const);
    SmallInt int_401 = new_SmallInt(401);
    String string_23403 = new_String(L"Unauthorized");
    Constant int_401_Const = new_Constant((Optr)int_401);
    Constant string_23403_Const = new_Constant((Optr)string_23403);
    // at:put:. 
    Send PSend23404 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_401_Const, (Optr)string_23403_Const);
    SmallInt int_402 = new_SmallInt(402);
    String string_23405 = new_String(L"Payment Required");
    Constant int_402_Const = new_Constant((Optr)int_402);
    Constant string_23405_Const = new_Constant((Optr)string_23405);
    // at:put:. 
    Send PSend23406 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_402_Const, (Optr)string_23405_Const);
    SmallInt int_403 = new_SmallInt(403);
    String string_23407 = new_String(L"Forbidden");
    Constant int_403_Const = new_Constant((Optr)int_403);
    Constant string_23407_Const = new_Constant((Optr)string_23407);
    // at:put:. 
    Send PSend23408 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_403_Const, (Optr)string_23407_Const);
    SmallInt int_404 = new_SmallInt(404);
    String string_23409 = new_String(L"Not Found");
    Constant int_404_Const = new_Constant((Optr)int_404);
    Constant string_23409_Const = new_Constant((Optr)string_23409);
    // at:put:. 
    Send PSend23410 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_404_Const, (Optr)string_23409_Const);
    SmallInt int_405 = new_SmallInt(405);
    String string_23411 = new_String(L"Method Not Allowed");
    Constant int_405_Const = new_Constant((Optr)int_405);
    Constant string_23411_Const = new_Constant((Optr)string_23411);
    // at:put:. 
    Send PSend23412 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_405_Const, (Optr)string_23411_Const);
    SmallInt int_406 = new_SmallInt(406);
    String string_23413 = new_String(L"Not Acceptable");
    Constant int_406_Const = new_Constant((Optr)int_406);
    Constant string_23413_Const = new_Constant((Optr)string_23413);
    // at:put:. 
    Send PSend23414 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_406_Const, (Optr)string_23413_Const);
    SmallInt int_407 = new_SmallInt(407);
    String string_23415 = new_String(L"Proxy Authentication Required");
    Constant int_407_Const = new_Constant((Optr)int_407);
    Constant string_23415_Const = new_Constant((Optr)string_23415);
    // at:put:. 
    Send PSend23416 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_407_Const, (Optr)string_23415_Const);
    SmallInt int_408 = new_SmallInt(408);
    String string_23417 = new_String(L"Request Timeout");
    Constant int_408_Const = new_Constant((Optr)int_408);
    Constant string_23417_Const = new_Constant((Optr)string_23417);
    // at:put:. 
    Send PSend23418 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_408_Const, (Optr)string_23417_Const);
    SmallInt int_409 = new_SmallInt(409);
    String string_23419 = new_String(L"Conflict");
    Constant int_409_Const = new_Constant((Optr)int_409);
    Constant string_23419_Const = new_Constant((Optr)string_23419);
    // at:put:. 
    Send PSend23420 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_409_Const, (Optr)string_23419_Const);
    SmallInt int_410 = new_SmallInt(410);
    String string_23421 = new_String(L"Gone");
    Constant int_410_Const = new_Constant((Optr)int_410);
    Constant string_23421_Const = new_Constant((Optr)string_23421);
    // at:put:. 
    Send PSend23422 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_410_Const, (Optr)string_23421_Const);
    SmallInt int_411 = new_SmallInt(411);
    String string_23423 = new_String(L"Lenght Required");
    Constant int_411_Const = new_Constant((Optr)int_411);
    Constant string_23423_Const = new_Constant((Optr)string_23423);
    // at:put:. 
    Send PSend23424 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_411_Const, (Optr)string_23423_Const);
    SmallInt int_412 = new_SmallInt(412);
    String string_23425 = new_String(L"Precondition Failed");
    Constant int_412_Const = new_Constant((Optr)int_412);
    Constant string_23425_Const = new_Constant((Optr)string_23425);
    // at:put:. 
    Send PSend23426 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_412_Const, (Optr)string_23425_Const);
    SmallInt int_413 = new_SmallInt(413);
    String string_23427 = new_String(L"Request Entity Too Large");
    Constant int_413_Const = new_Constant((Optr)int_413);
    Constant string_23427_Const = new_Constant((Optr)string_23427);
    // at:put:. 
    Send PSend23428 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_413_Const, (Optr)string_23427_Const);
    SmallInt int_414 = new_SmallInt(414);
    String string_23429 = new_String(L"Request-URI Too Long");
    Constant int_414_Const = new_Constant((Optr)int_414);
    Constant string_23429_Const = new_Constant((Optr)string_23429);
    // at:put:. 
    Send PSend23430 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_414_Const, (Optr)string_23429_Const);
    SmallInt int_415 = new_SmallInt(415);
    String string_23431 = new_String(L"Unsupported Media Type");
    Constant int_415_Const = new_Constant((Optr)int_415);
    Constant string_23431_Const = new_Constant((Optr)string_23431);
    // at:put:. 
    Send PSend23432 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_415_Const, (Optr)string_23431_Const);
    SmallInt int_416 = new_SmallInt(416);
    String string_23433 = new_String(L"Requested Range Not Satisfiable");
    Constant int_416_Const = new_Constant((Optr)int_416);
    Constant string_23433_Const = new_Constant((Optr)string_23433);
    // at:put:. 
    Send PSend23434 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_416_Const, (Optr)string_23433_Const);
    SmallInt int_417 = new_SmallInt(417);
    String string_23435 = new_String(L"Expectation Failed");
    Constant int_417_Const = new_Constant((Optr)int_417);
    Constant string_23435_Const = new_Constant((Optr)string_23435);
    // at:put:. 
    Send PSend23436 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_417_Const, (Optr)string_23435_Const);
    SmallInt int_422 = new_SmallInt(422);
    String string_23437 = new_String(L"Unprocessable Entity");
    Constant int_422_Const = new_Constant((Optr)int_422);
    Constant string_23437_Const = new_Constant((Optr)string_23437);
    // at:put:. 
    Send PSend23438 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_422_Const, (Optr)string_23437_Const);
    SmallInt int_423 = new_SmallInt(423);
    String string_23439 = new_String(L"Locked");
    Constant int_423_Const = new_Constant((Optr)int_423);
    Constant string_23439_Const = new_Constant((Optr)string_23439);
    // at:put:. 
    Send PSend23440 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_423_Const, (Optr)string_23439_Const);
    SmallInt int_424 = new_SmallInt(424);
    String string_23441 = new_String(L"Failed Dependency");
    Constant int_424_Const = new_Constant((Optr)int_424);
    Constant string_23441_Const = new_Constant((Optr)string_23441);
    // at:put:. 
    Send PSend23442 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_424_Const, (Optr)string_23441_Const);
    SmallInt int_500 = new_SmallInt(500);
    String string_23443 = new_String(L"Internal Server Error");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23443_Const = new_Constant((Optr)string_23443);
    // at:put:. 
    Send PSend23444 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_500_Const, (Optr)string_23443_Const);
    SmallInt int_501 = new_SmallInt(501);
    String string_23445 = new_String(L"Not Implemented");
    Constant int_501_Const = new_Constant((Optr)int_501);
    Constant string_23445_Const = new_Constant((Optr)string_23445);
    // at:put:. 
    Send PSend23446 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_501_Const, (Optr)string_23445_Const);
    SmallInt int_502 = new_SmallInt(502);
    String string_23447 = new_String(L"Bad Gateway");
    Constant int_502_Const = new_Constant((Optr)int_502);
    Constant string_23447_Const = new_Constant((Optr)string_23447);
    // at:put:. 
    Send PSend23448 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_502_Const, (Optr)string_23447_Const);
    SmallInt int_503 = new_SmallInt(503);
    String string_23449 = new_String(L"Service Unavailable");
    Constant int_503_Const = new_Constant((Optr)int_503);
    Constant string_23449_Const = new_Constant((Optr)string_23449);
    // at:put:. 
    Send PSend23450 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_503_Const, (Optr)string_23449_Const);
    SmallInt int_504 = new_SmallInt(504);
    String string_23451 = new_String(L"Gateway Timeout");
    Constant int_504_Const = new_Constant((Optr)int_504);
    Constant string_23451_Const = new_Constant((Optr)string_23451);
    // at:put:. 
    Send PSend23452 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_504_Const, (Optr)string_23451_Const);
    SmallInt int_505 = new_SmallInt(505);
    String string_23453 = new_String(L"HTTP Version Not Supported");
    Constant int_505_Const = new_Constant((Optr)int_505);
    Constant string_23453_Const = new_Constant((Optr)string_23453);
    // at:put:. 
    Send PSend23454 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_505_Const, (Optr)string_23453_Const);
    SmallInt int_507 = new_SmallInt(507);
    String string_23455 = new_String(L"Insufficient Storage");
    Constant int_507_Const = new_Constant((Optr)int_507);
    Constant string_23455_Const = new_Constant((Optr)string_23455);
    // at:put:. 
    Send PSend23456 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_507_Const, (Optr)string_23455_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23457 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23364 = instantiate_Array_with(ThreadedCode_Class, 0, 419, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_push1, (Optr)string_23365, (Optr)&t_send2, (Optr)PSend23366, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_101, (Optr)&t_push1, (Optr)string_23367, (Optr)&t_send2, (Optr)PSend23368, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_102, (Optr)&t_push1, (Optr)string_23369, (Optr)&t_send2, (Optr)PSend23370, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push1, (Optr)string_23371, (Optr)&t_send2, (Optr)PSend23372, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_201, (Optr)&t_push1, (Optr)string_23373, (Optr)&t_send2, (Optr)PSend23374, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_202, (Optr)&t_push1, (Optr)string_23375, (Optr)&t_send2, (Optr)PSend23376, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_203, (Optr)&t_push1, (Optr)string_23377, (Optr)&t_send2, (Optr)PSend23378, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_204, (Optr)&t_push1, (Optr)string_23379, (Optr)&t_send2, (Optr)PSend23380, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_205, (Optr)&t_push1, (Optr)string_23381, (Optr)&t_send2, (Optr)PSend23382, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_206, (Optr)&t_push1, (Optr)string_23383, (Optr)&t_send2, (Optr)PSend23384, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_207, (Optr)&t_push1, (Optr)string_23385, (Optr)&t_send2, (Optr)PSend23386, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_300, (Optr)&t_push1, (Optr)string_23387, (Optr)&t_send2, (Optr)PSend23388, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push1, (Optr)string_23389, (Optr)&t_send2, (Optr)PSend23390, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push1, (Optr)string_23391, (Optr)&t_send2, (Optr)PSend23392, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_303, (Optr)&t_push1, (Optr)string_23393, (Optr)&t_send2, (Optr)PSend23394, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_304, (Optr)&t_push1, (Optr)string_23395, (Optr)&t_send2, (Optr)PSend23396, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_305, (Optr)&t_push1, (Optr)string_23397, (Optr)&t_send2, (Optr)PSend23398, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_307, (Optr)&t_push1, (Optr)string_23399, (Optr)&t_send2, (Optr)PSend23400, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push1, (Optr)string_23401, (Optr)&t_send2, (Optr)PSend23402, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_401, (Optr)&t_push1, (Optr)string_23403, (Optr)&t_send2, (Optr)PSend23404, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_402, (Optr)&t_push1, (Optr)string_23405, (Optr)&t_send2, (Optr)PSend23406, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_403, (Optr)&t_push1, (Optr)string_23407, (Optr)&t_send2, (Optr)PSend23408, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_404, (Optr)&t_push1, (Optr)string_23409, (Optr)&t_send2, (Optr)PSend23410, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_405, (Optr)&t_push1, (Optr)string_23411, (Optr)&t_send2, (Optr)PSend23412, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_406, (Optr)&t_push1, (Optr)string_23413, (Optr)&t_send2, (Optr)PSend23414, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_407, (Optr)&t_push1, (Optr)string_23415, (Optr)&t_send2, (Optr)PSend23416, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_408, (Optr)&t_push1, (Optr)string_23417, (Optr)&t_send2, (Optr)PSend23418, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_409, (Optr)&t_push1, (Optr)string_23419, (Optr)&t_send2, (Optr)PSend23420, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_410, (Optr)&t_push1, (Optr)string_23421, (Optr)&t_send2, (Optr)PSend23422, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_411, (Optr)&t_push1, (Optr)string_23423, (Optr)&t_send2, (Optr)PSend23424, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_412, (Optr)&t_push1, (Optr)string_23425, (Optr)&t_send2, (Optr)PSend23426, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_413, (Optr)&t_push1, (Optr)string_23427, (Optr)&t_send2, (Optr)PSend23428, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_414, (Optr)&t_push1, (Optr)string_23429, (Optr)&t_send2, (Optr)PSend23430, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_415, (Optr)&t_push1, (Optr)string_23431, (Optr)&t_send2, (Optr)PSend23432, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_416, (Optr)&t_push1, (Optr)string_23433, (Optr)&t_send2, (Optr)PSend23434, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_417, (Optr)&t_push1, (Optr)string_23435, (Optr)&t_send2, (Optr)PSend23436, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_422, (Optr)&t_push1, (Optr)string_23437, (Optr)&t_send2, (Optr)PSend23438, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_423, (Optr)&t_push1, (Optr)string_23439, (Optr)&t_send2, (Optr)PSend23440, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_424, (Optr)&t_push1, (Optr)string_23441, (Optr)&t_send2, (Optr)PSend23442, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push1, (Optr)string_23443, (Optr)&t_send2, (Optr)PSend23444, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_501, (Optr)&t_push1, (Optr)string_23445, (Optr)&t_send2, (Optr)PSend23446, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_502, (Optr)&t_push1, (Optr)string_23447, (Optr)&t_send2, (Optr)PSend23448, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_503, (Optr)&t_push1, (Optr)string_23449, (Optr)&t_send2, (Optr)PSend23450, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_504, (Optr)&t_push1, (Optr)string_23451, (Optr)&t_send2, (Optr)PSend23452, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_505, (Optr)&t_push1, (Optr)string_23453, (Optr)&t_send2, (Optr)PSend23454, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_507, (Optr)&t_push1, (Optr)string_23455, (Optr)&t_send2, (Optr)PSend23456, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23457, (Optr)&t_method_return);
    Block PBlock23362 = new_Block_with(PArray23363, empty_Array, PThreadedCode23364, 47, PSend23366, PSend23368, PSend23370, PSend23372, PSend23374, PSend23376, PSend23378, PSend23380, PSend23382, PSend23384, PSend23386, PSend23388, PSend23390, PSend23392, PSend23394, PSend23396, PSend23398, PSend23400, PSend23402, PSend23404, PSend23406, PSend23408, PSend23410, PSend23412, PSend23414, PSend23416, PSend23418, PSend23420, PSend23422, PSend23424, PSend23426, PSend23428, PSend23430, PSend23432, PSend23434, PSend23436, PSend23438, PSend23440, PSend23442, PSend23444, PSend23446, PSend23448, PSend23450, PSend23452, PSend23454, PSend23456, PSend23457);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23458 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // value:. 
    Send PSend23361 = new_Send((Optr)PBlock23362, SMB_value_, 1, (Optr)PSend23458);
    Assign PAssign23360 = new_Assign((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)PSend23361);
    Array PThreadedCode23359 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign23360, (Optr)&t_push_closure, (Optr)PBlock23362, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23458, (Optr)&t_send1, (Optr)PSend23361, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23358 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23359, 2, PAssign23360, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23358, HEADER(WebClient_Core_WebMessage_Class));
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