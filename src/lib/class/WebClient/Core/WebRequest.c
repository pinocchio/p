#include <lib/class/WebClient/Core/WebRequest.h>


Optr layout_WebClient_Core_WebRequest_Class_class;
Optr slot_WebClient_Core_WebRequest_method;
Optr slot_WebClient_Core_WebRequest_request;
Optr slot_WebClient_Core_WebRequest_rawUrl;
Optr slot_WebClient_Core_WebRequest_server;
Optr layout_WebClient_Core_WebRequest;


static void init_SMB_getFields() {
    Symbol SMB_getFields = new_Symbol(L"getFields");
    Variable VAR_args_0_0 = new_Variable_named(L"args", 0);
    Array PArray23884 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23887 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    Character char_23892 = new_Character(L'?');
    Constant char_23892_Const = new_Constant((Optr)char_23892);
    // copyAfter:. 
    Send PSend23891 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyAfter_, 1, (Optr)char_23892_Const);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23895 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23896 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23895);
    Array PThreadedCode23894 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23895, (Optr)&t_send1, (Optr)PSend23896, (Optr)&t_block_return);
    Block PBlock23893 = new_Block_with(empty_Array, empty_Array, PThreadedCode23894, 1, PSend23896);
    // ifEmpty:. 
    Send PSend23890 = new_Send((Optr)PSend23891, SMB_ifEmpty_, 1, (Optr)PBlock23893);
    Assign PAssign23889 = new_Assign((Optr)VAR_args_0_0, (Optr)PSend23890);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23897 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)VAR_args_0_0, (Optr)false_Const);
    Array PThreadedCode23888 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23889, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_23892, (Optr)&t_send1, (Optr)PSend23891, (Optr)&t_push_closure, (Optr)PBlock23893, (Optr)&t_send1, (Optr)PSend23890, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend23897, (Optr)&t_method_return);
    Block PBlock23886 = new_Block_with(PArray23887, empty_Array, PThreadedCode23888, 2, PAssign23889, PSend23897);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23898 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23886);
    Array PThreadedCode23885 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23886, (Optr)&t_send1, (Optr)PSend23898, (Optr)&t_method_return);
    Method PMethod23883 = new_Method_with(empty_Array, PArray23884, empty_Array, PThreadedCode23885, 1, PSend23898);
    
    MethodClosure MC_SMB_getFields = new_MethodClosure((Method)PMethod23883, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_getFields, MC_SMB_getFields);
}


static void init_SMB_isHeadRequest() {
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23901 = new_Send((Optr)self, SMB_method, 0);
    String string_23902 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23902_Const = new_Constant((Optr)string_23902);
    // =. 
    Send PSend23903 = new_Send((Optr)PSend23901, SMB__equals_, 1, (Optr)string_23902_Const);
    Array PThreadedCode23900 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23901, (Optr)&t_push1, (Optr)string_23902, (Optr)&t_send1, (Optr)PSend23903, (Optr)&t_method_return);
    Method PMethod23899 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23900, 1, PSend23903);
    
    MethodClosure MC_SMB_isHeadRequest = new_MethodClosure((Method)PMethod23899, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isHeadRequest, MC_SMB_isHeadRequest);
}


static void init_SMB_readFrom_() {
    /*
    readFrom: aStream
// 	"Create a WebRequest from a given stream"
// 
// 	^self new readFrom: aStream
    */
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23905 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray23906 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23909 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign23911 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend23912 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend23916 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ascii, 0);
    Array PThreadedCode23915 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23916, (Optr)&t_block_return);
    Block PBlock23914 = new_Block_with(empty_Array, empty_Array, PThreadedCode23915, 1, PSend23916);
    // ifTrue:. 
    Send PSend23913 = new_Send((Optr)PSend23912, SMB_ifTrue_, 1, (Optr)PBlock23914);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23919 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend23918 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend23919);
    Assign PAssign23917 = new_Assign((Optr)slot_WebClient_Core_WebRequest_request, (Optr)PSend23918);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_23922 = new_String(L" ");
    Constant string_23922_Const = new_Constant((Optr)string_23922);
    // findTokens:. 
    Send PSend23921 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_findTokens_, 1, (Optr)string_23922_Const);
    Assign PAssign23920 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend23921);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23923 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend23924 = new_Send((Optr)PSend23923, SMB__lt_, 1, (Optr)int_2_Const);
    String string_23928 = new_String(L"Invalid HTTP request: ");
    Constant string_23928_Const = new_Constant((Optr)string_23928);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23929 = new_Send((Optr)string_23928_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebRequest_request);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23930 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23929);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23931 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23930);
    Array PThreadedCode23927 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23928, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_send1, (Optr)PSend23929, (Optr)&t_send1, (Optr)PSend23930, (Optr)&t_send1, (Optr)PSend23931, (Optr)&t_block_return);
    Block PBlock23926 = new_Block_with(empty_Array, empty_Array, PThreadedCode23927, 1, PSend23931);
    // ifTrue:. 
    Send PSend23925 = new_Send((Optr)PSend23924, SMB_ifTrue_, 1, (Optr)PBlock23926);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23933 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign23932 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)PSend23933);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend23935 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Assign PAssign23934 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)PSend23935);
    // size. 
    Send PSend23936 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23937 = new_Send((Optr)PSend23936, SMB__gt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_third = new_Symbol(L"third");
    // third. 
    Send PSend23942 = new_Send((Optr)VAR_tokens_0_1, SMB_third, 0);
    Assign PAssign23941 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend23942);
    Array PThreadedCode23940 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23941, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23942, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23939 = new_Block_with(empty_Array, empty_Array, PThreadedCode23940, 1, PAssign23941);
    String string_23946 = new_String(L"HTTP/1.0");
    Constant string_23946_Const = new_Constant((Optr)string_23946);
    Assign PAssign23945 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23946_Const);
    Array PThreadedCode23944 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign23945, (Optr)&t_push1, (Optr)string_23946, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23943 = new_Block_with(empty_Array, empty_Array, PThreadedCode23944, 1, PAssign23945);
    // ifTrue:ifFalse:. 
    Send PSend23938 = new_Send((Optr)PSend23937, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23939, (Optr)PBlock23943);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend23948 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign23947 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23948);
    Array PThreadedCode23910 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push1, (Optr)PAssign23911, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23912, (Optr)&t_send_ifTrue_, (Optr)PSend23913, (Optr)PBlock23914, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23917, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23919, (Optr)&t_send1, (Optr)PSend23918, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23920, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push1, (Optr)string_23922, (Optr)&t_send1, (Optr)PSend23921, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23923, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23924, (Optr)&t_send_ifTrue_, (Optr)PSend23925, (Optr)PBlock23926, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23932, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23933, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23934, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23935, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23936, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23937, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23938, (Optr)PBlock23939, (Optr)PBlock23943, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23947, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23948, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23908 = new_Block_with(PArray23909, empty_Array, PThreadedCode23910, 10, PAssign23911, PSend23913, PAssign23917, PAssign23920, PSend23925, PAssign23932, PAssign23934, PSend23938, PAssign23947, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23949 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23908);
    Array PThreadedCode23907 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23908, (Optr)&t_send1, (Optr)PSend23949, (Optr)&t_method_return);
    Method PMethod23904 = new_Method_with(PArray23905, PArray23906, empty_Array, PThreadedCode23907, 1, PSend23949);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod23904, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_send405Response_content_() {
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray23951 = new_Array_with(2, (Optr)VAR_allowed_0_0, (Optr)VAR_body_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray23952 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23956 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23957 = new_String(L"HTTP/1.1");
    Constant string_23957_Const = new_Constant((Optr)string_23957);
    SmallInt int_405 = new_SmallInt(405);
    Constant int_405_Const = new_Constant((Optr)int_405);
    // protocol:code:. 
    Send PSend23955 = new_Send((Optr)PSend23956, SMB_protocol_code_, 2, (Optr)string_23957_Const, (Optr)int_405_Const);
    Assign PAssign23954 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend23955);
    String string_23958 = new_String(L"Content-Type");
    String string_23959 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23958_Const = new_Constant((Optr)string_23958);
    Constant string_23959_Const = new_Constant((Optr)string_23959);
    // headerAt:put:. 
    Send PSend23960 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23958_Const, (Optr)string_23959_Const);
    String string_23961 = new_String(L"allow");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23963 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_m_2_0 = new_Variable_named(L"m", 2);
    Array PArray23966 = new_Array_with(1, (Optr)VAR_m_2_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23968 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)VAR_m_2_0);
    Array PThreadedCode23967 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_m_2_0, (Optr)&t_send1, (Optr)PSend23968, (Optr)&t_method_return);
    Block PBlock23965 = new_Block_with(PArray23966, empty_Array, PThreadedCode23967, 1, PSend23968);
    Character char_23971 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23971_Const = new_Constant((Optr)char_23971);
    // nextPut:. 
    Send PSend23972 = new_Send((Optr)VAR_s_1_0, SMB_nextPut_, 1, (Optr)char_23971_Const);
    Array PThreadedCode23970 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)char_23971, (Optr)&t_send1, (Optr)PSend23972, (Optr)&t_block_return);
    Block PBlock23969 = new_Block_with(empty_Array, empty_Array, PThreadedCode23970, 1, PSend23972);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend23973 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock23965, (Optr)PBlock23969);
    Array PThreadedCode23964 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock23965, (Optr)&t_push_closure, (Optr)PBlock23969, (Optr)&t_send2, (Optr)PSend23973, (Optr)&t_method_return);
    Block PBlock23962 = new_Block_with(PArray23963, empty_Array, PThreadedCode23964, 1, PSend23973);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23974 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23962);
    Constant string_23961_Const = new_Constant((Optr)string_23961);
    // headerAt:put:. 
    Send PSend23975 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23961_Const, (Optr)PSend23974);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23976 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_1);
    Array PThreadedCode23953 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign23954, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23956, (Optr)&t_push1, (Optr)string_23957, (Optr)&t_push1, (Optr)int_405, (Optr)&t_send2, (Optr)PSend23955, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23958, (Optr)&t_push1, (Optr)string_23959, (Optr)&t_send2, (Optr)PSend23960, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23961, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23962, (Optr)&t_send1, (Optr)PSend23974, (Optr)&t_send2, (Optr)PSend23975, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend23976, (Optr)&t_method_return);
    Method PMethod23950 = new_Method_with(PArray23951, PArray23952, empty_Array, PThreadedCode23953, 4, PAssign23954, PSend23960, PSend23975, PSend23976);
    
    MethodClosure MC_SMB_send405Response_content_ = new_MethodClosure((Method)PMethod23950, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_content_, MC_SMB_send405Response_content_);
}


static void init_SMB_send301Response_() {
    Symbol SMB_send301Response_ = new_Symbol(L"send301Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23978 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23981 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23982 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23980 = new_Block_with(PArray23981, empty_Array, PThreadedCode23982, 0);
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    // send301Response:do:. 
    Send PSend23983 = new_Send((Optr)self, SMB_send301Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23980);
    Array PThreadedCode23979 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23980, (Optr)&t_send2, (Optr)PSend23983, (Optr)&t_method_return);
    Method PMethod23977 = new_Method_with(PArray23978, empty_Array, empty_Array, PThreadedCode23979, 1, PSend23983);
    
    MethodClosure MC_SMB_send301Response_ = new_MethodClosure((Method)PMethod23977, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_, MC_SMB_send301Response_);
}


static void init_SMB_stream200Response_size_type_do_() {
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23985 = new_Array_with(4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23986 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23990 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23991 = new_String(L"HTTP/1.1");
    Constant string_23991_Const = new_Constant((Optr)string_23991);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23989 = new_Send((Optr)PSend23990, SMB_protocol_code_, 2, (Optr)string_23991_Const, (Optr)int_200_Const);
    Assign PAssign23988 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23989);
    String string_23992 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23992_Const = new_Constant((Optr)string_23992);
    // headerAt:put:. 
    Send PSend23993 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23992_Const, (Optr)VAR_contentType_0_2);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23994 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend23995 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    Array PThreadedCode23987 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23988, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23990, (Optr)&t_push1, (Optr)string_23991, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23989, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23992, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23993, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23994, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_send3, (Optr)PSend23995, (Optr)&t_method_return);
    Method PMethod23984 = new_Method_with(PArray23985, PArray23986, empty_Array, PThreadedCode23987, 4, PAssign23988, PSend23993, PSend23994, PSend23995);
    
    MethodClosure MC_SMB_stream200Response_size_type_do_ = new_MethodClosure((Method)PMethod23984, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_do_, MC_SMB_stream200Response_size_type_do_);
}


static void init_SMB_sendXmlResponse_() {
    Symbol SMB_sendXmlResponse_ = new_Symbol(L"sendXmlResponse:");
    Variable VAR_xmlString_0_0 = new_Variable_named(L"xmlString", 0);
    Array PArray23997 = new_Array_with(1, (Optr)VAR_xmlString_0_0);
    String string_23999 = new_String(L"application/xml");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23999_Const = new_Constant((Optr)string_23999);
    // send200Response:contentType:. 
    Send PSend24000 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_xmlString_0_0, (Optr)string_23999_Const);
    Array PThreadedCode23998 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_xmlString_0_0, (Optr)&t_push1, (Optr)string_23999, (Optr)&t_send2, (Optr)PSend24000, (Optr)&t_method_return);
    Method PMethod23996 = new_Method_with(PArray23997, empty_Array, empty_Array, PThreadedCode23998, 1, PSend24000);
    
    MethodClosure MC_SMB_sendXmlResponse_ = new_MethodClosure((Method)PMethod23996, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendXmlResponse_, MC_SMB_sendXmlResponse_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper24003 = new_Super(SMB_initialize, 0);
    String string_24005 = new_String(L"GET");
    Constant string_24005_Const = new_Constant((Optr)string_24005);
    Assign PAssign24004 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)string_24005_Const);
    String string_24007 = new_String(L"HTTP/1.1");
    Constant string_24007_Const = new_Constant((Optr)string_24007);
    Assign PAssign24006 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_24007_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24009 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24008 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24009);
    Array PThreadedCode24002 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24003, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24004, (Optr)&t_push1, (Optr)string_24005, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24006, (Optr)&t_push1, (Optr)string_24007, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24008, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24009, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24001 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24002, 5, PSuper24003, PAssign24004, PAssign24006, PAssign24008, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24001, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_isGetRequest() {
    Symbol SMB_isGetRequest = new_Symbol(L"isGetRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24012 = new_Send((Optr)self, SMB_method, 0);
    String string_24013 = new_String(L"GET");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24013_Const = new_Constant((Optr)string_24013);
    // =. 
    Send PSend24014 = new_Send((Optr)PSend24012, SMB__equals_, 1, (Optr)string_24013_Const);
    Array PThreadedCode24011 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24012, (Optr)&t_push1, (Optr)string_24013, (Optr)&t_send1, (Optr)PSend24014, (Optr)&t_method_return);
    Method PMethod24010 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24011, 1, PSend24014);
    
    MethodClosure MC_SMB_isGetRequest = new_MethodClosure((Method)PMethod24010, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isGetRequest, MC_SMB_isGetRequest);
}


static void init_SMB_newWebSocketOn_() {
    Symbol SMB_newWebSocketOn_ = new_Symbol(L"newWebSocketOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24016 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24018 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24017 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24018, (Optr)&t_method_return);
    Method PMethod24015 = new_Method_with(PArray24016, empty_Array, empty_Array, PThreadedCode24017, 1, PSend24018);
    
    MethodClosure MC_SMB_newWebSocketOn_ = new_MethodClosure((Method)PMethod24015, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newWebSocketOn_, MC_SMB_newWebSocketOn_);
}


static void init_SMB_send400Response() {
    Symbol SMB_send400Response = new_Symbol(L"send400Response");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray24020 = new_Array_with(1, (Optr)VAR_message_0_0);
    String string_24024 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_24024_Const = new_Constant((Optr)string_24024);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24025 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_24025_Const = new_Constant((Optr)string_24025);
    // ,. 
    Send PSend24023 = new_Send((Optr)string_24024_Const, SMB__append_, 1, (Optr)string_24025_Const);
    Assign PAssign24022 = new_Assign((Optr)VAR_message_0_0, (Optr)PSend24023);
    SmallInt int_400 = new_SmallInt(400);
    String string_24026 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_24026_Const = new_Constant((Optr)string_24026);
    // sendResponseCode:content:type:close:. 
    Send PSend24027 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_400_Const, (Optr)VAR_message_0_0, (Optr)string_24026_Const, (Optr)true_Const);
    Array PThreadedCode24021 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign24022, (Optr)&t_push1, (Optr)string_24024, (Optr)&t_push1, (Optr)string_24025, (Optr)&t_send1, (Optr)PSend24023, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push1, (Optr)string_24026, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend24027, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24019 = new_Method_with(empty_Array, PArray24020, empty_Array, PThreadedCode24021, 3, PAssign24022, PSend24027, self);
    
    MethodClosure MC_SMB_send400Response = new_MethodClosure((Method)PMethod24019, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send400Response, MC_SMB_send400Response);
}


static void init_SMB_newResponse() {
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24031 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_request_ = new_Symbol(L"request:");
    // request:. 
    Send PSend24033 = new_Send((Optr)VAR__receiver__1_0, SMB_request_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend24034 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode24032 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend24033, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24034, (Optr)&t_method_return);
    Block PBlock24030 = new_Block_with(PArray24031, empty_Array, PThreadedCode24032, 2, PSend24033, PSend24034);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24035 = new_Send((Optr)PWebResponse_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24036 = new_Send((Optr)PBlock24030, SMB_value_, 1, (Optr)PSend24035);
    Array PThreadedCode24029 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock24030, (Optr)&t_push_class_reference, (Optr)PWebResponse_classReference, (Optr)&t_send0, (Optr)PSend24035, (Optr)&t_send1, (Optr)PSend24036, (Optr)&t_method_return);
    Method PMethod24028 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24029, 1, PSend24036);
    
    MethodClosure MC_SMB_newResponse = new_MethodClosure((Method)PMethod24028, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newResponse, MC_SMB_newResponse);
}


static void init_SMB_isOptionsRequest() {
    Symbol SMB_isOptionsRequest = new_Symbol(L"isOptionsRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24039 = new_Send((Optr)self, SMB_method, 0);
    String string_24040 = new_String(L"OPTIONS");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24040_Const = new_Constant((Optr)string_24040);
    // =. 
    Send PSend24041 = new_Send((Optr)PSend24039, SMB__equals_, 1, (Optr)string_24040_Const);
    Array PThreadedCode24038 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24039, (Optr)&t_push1, (Optr)string_24040, (Optr)&t_send1, (Optr)PSend24041, (Optr)&t_method_return);
    Method PMethod24037 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24038, 1, PSend24041);
    
    MethodClosure MC_SMB_isOptionsRequest = new_MethodClosure((Method)PMethod24037, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isOptionsRequest, MC_SMB_isOptionsRequest);
}


static void init_SMB_send404Response_() {
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Array PArray24043 = new_Array_with(1, (Optr)VAR_body_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24046 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24048 = new_String(L"Content-Type");
    String string_24049 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24048_Const = new_Constant((Optr)string_24048);
    Constant string_24049_Const = new_Constant((Optr)string_24049);
    // headerAt:put:. 
    Send PSend24050 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24048_Const, (Optr)string_24049_Const);
    Array PThreadedCode24047 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24048, (Optr)&t_push1, (Optr)string_24049, (Optr)&t_send2, (Optr)PSend24050, (Optr)&t_method_return);
    Block PBlock24045 = new_Block_with(PArray24046, empty_Array, PThreadedCode24047, 1, PSend24050);
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    // send404Response:do:. 
    Send PSend24051 = new_Send((Optr)self, SMB_send404Response_do_, 2, (Optr)VAR_body_0_0, (Optr)PBlock24045);
    Array PThreadedCode24044 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_push_closure, (Optr)PBlock24045, (Optr)&t_send2, (Optr)PSend24051, (Optr)&t_method_return);
    Method PMethod24042 = new_Method_with(PArray24043, empty_Array, empty_Array, PThreadedCode24044, 1, PSend24051);
    
    MethodClosure MC_SMB_send404Response_ = new_MethodClosure((Method)PMethod24042, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_, MC_SMB_send404Response_);
}


static void init_SMB_fields() {
    Symbol SMB_fields = new_Symbol(L"fields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray24053 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24056 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24055 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend24056);
    Symbol SMB_getFields = new_Symbol(L"getFields");
    // getFields. 
    Send PSend24057 = new_Send((Optr)self, SMB_getFields, 0);
    Variable VAR_a_1_0 = new_Variable_named(L"a", 1);
    Array PArray24059 = new_Array_with(1, (Optr)VAR_a_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24061 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode24060 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend24061, (Optr)&t_method_return);
    Block PBlock24058 = new_Block_with(PArray24059, empty_Array, PThreadedCode24060, 1, PSend24061);
    Symbol SMB_associationsDo_ = new_Symbol(L"associationsDo:");
    // associationsDo:. 
    Send PSend24062 = new_Send((Optr)PSend24057, SMB_associationsDo_, 1, (Optr)PBlock24058);
    Symbol SMB_postFields = new_Symbol(L"postFields");
    // postFields. 
    Send PSend24063 = new_Send((Optr)self, SMB_postFields, 0);
    Array PArray24065 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend24067 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode24066 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend24067, (Optr)&t_method_return);
    Block PBlock24064 = new_Block_with(PArray24065, empty_Array, PThreadedCode24066, 1, PSend24067);
    // associationsDo:. 
    Send PSend24068 = new_Send((Optr)PSend24063, SMB_associationsDo_, 1, (Optr)PBlock24064);
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    // multipartFields. 
    Send PSend24069 = new_Send((Optr)self, SMB_multipartFields, 0);
    Array PArray24071 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend24073 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode24072 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend24073, (Optr)&t_method_return);
    Block PBlock24070 = new_Block_with(PArray24071, empty_Array, PThreadedCode24072, 1, PSend24073);
    // associationsDo:. 
    Send PSend24074 = new_Send((Optr)PSend24069, SMB_associationsDo_, 1, (Optr)PBlock24070);
    Array PThreadedCode24054 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign24055, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24056, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24057, (Optr)&t_push_closure, (Optr)PBlock24058, (Optr)&t_send1, (Optr)PSend24062, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24063, (Optr)&t_push_closure, (Optr)PBlock24064, (Optr)&t_send1, (Optr)PSend24068, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24069, (Optr)&t_push_closure, (Optr)PBlock24070, (Optr)&t_send1, (Optr)PSend24074, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod24052 = new_Method_with(empty_Array, PArray24053, empty_Array, PThreadedCode24054, 5, PAssign24055, PSend24062, PSend24068, PSend24074, VAR_fields_0_0);
    
    MethodClosure MC_SMB_fields = new_MethodClosure((Method)PMethod24052, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_fields, MC_SMB_fields);
}


static void init_SMB_send404Response() {
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    String string_24077 = new_String(L"<html><head><title>404 Not Found</title></head><body><h1>404 Not Found</h1><p>The requested URL ");
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24078 = new_Send((Optr)self, SMB_rawUrl, 0);
    Constant string_24077_Const = new_Constant((Optr)string_24077);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24079 = new_Send((Optr)string_24077_Const, SMB__append_, 1, (Optr)PSend24078);
    String string_24080 = new_String(L" was not found on this server.</p></body></html>");
    Constant string_24080_Const = new_Constant((Optr)string_24080);
    // ,. 
    Send PSend24081 = new_Send((Optr)PSend24079, SMB__append_, 1, (Optr)string_24080_Const);
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    // send404Response:. 
    Send PSend24082 = new_Send((Optr)self, SMB_send404Response_, 1, (Optr)PSend24081);
    Array PThreadedCode24076 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24077, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24078, (Optr)&t_send1, (Optr)PSend24079, (Optr)&t_push1, (Optr)string_24080, (Optr)&t_send1, (Optr)PSend24081, (Optr)&t_send1, (Optr)PSend24082, (Optr)&t_method_return);
    Method PMethod24075 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24076, 1, PSend24082);
    
    MethodClosure MC_SMB_send404Response = new_MethodClosure((Method)PMethod24075, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response, MC_SMB_send404Response);
}


static void init_SMB_isDeleteRequest() {
    Symbol SMB_isDeleteRequest = new_Symbol(L"isDeleteRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24085 = new_Send((Optr)self, SMB_method, 0);
    String string_24086 = new_String(L"DELETE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24086_Const = new_Constant((Optr)string_24086);
    // =. 
    Send PSend24087 = new_Send((Optr)PSend24085, SMB__equals_, 1, (Optr)string_24086_Const);
    Array PThreadedCode24084 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24085, (Optr)&t_push1, (Optr)string_24086, (Optr)&t_send1, (Optr)PSend24087, (Optr)&t_method_return);
    Method PMethod24083 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24084, 1, PSend24087);
    
    MethodClosure MC_SMB_isDeleteRequest = new_MethodClosure((Method)PMethod24083, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isDeleteRequest, MC_SMB_isDeleteRequest);
}


static void init_SMB_send301Response_do_() {
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24089 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_301 = new_SmallInt(301);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_301_Const = new_Constant((Optr)int_301);
    // send3xxResponse:code:do:. 
    Send PSend24091 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_301_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode24090 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend24091, (Optr)&t_method_return);
    Method PMethod24088 = new_Method_with(PArray24089, empty_Array, empty_Array, PThreadedCode24090, 1, PSend24091);
    
    MethodClosure MC_SMB_send301Response_do_ = new_MethodClosure((Method)PMethod24088, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_do_, MC_SMB_send301Response_do_);
}


static void init_SMB_send200Response_contentType_() {
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Array PArray24093 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24096 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24097 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24095 = new_Block_with(PArray24096, empty_Array, PThreadedCode24097, 0);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    // send200Response:contentType:do:. 
    Send PSend24098 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)PBlock24095);
    Array PThreadedCode24094 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_push_closure, (Optr)PBlock24095, (Optr)&t_send3, (Optr)PSend24098, (Optr)&t_method_return);
    Method PMethod24092 = new_Method_with(PArray24093, empty_Array, empty_Array, PThreadedCode24094, 1, PSend24098);
    
    MethodClosure MC_SMB_send200Response_contentType_ = new_MethodClosure((Method)PMethod24092, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_, MC_SMB_send200Response_contentType_);
}


static void init_SMB_multipartFields() {
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray24100 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24103 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24102 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend24103);
    Variable VAR_hdrs_1_0 = new_Variable_named(L"hdrs", 1);
    Variable VAR_params_1_1 = new_Variable_named(L"params", 1);
    Variable VAR_cntnt_1_2 = new_Variable_named(L"cntnt", 1);
    Array PArray24105 = new_Array_with(3, (Optr)VAR_hdrs_1_0, (Optr)VAR_params_1_1, (Optr)VAR_cntnt_1_2);
    String string_24107 = new_String(L"name");
    Variable VAR_fieldName_2_0 = new_Variable_named(L"fieldName", 2);
    Array PArray24109 = new_Array_with(1, (Optr)VAR_fieldName_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24111 = new_Send((Optr)VAR_fields_0_0, SMB_at_put_, 2, (Optr)VAR_fieldName_2_0, (Optr)VAR_cntnt_1_2);
    Array PThreadedCode24110 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_fieldName_2_0, (Optr)&t_push_variable, (Optr)VAR_cntnt_1_2, (Optr)&t_send2, (Optr)PSend24111, (Optr)&t_method_return);
    Block PBlock24108 = new_Block_with(PArray24109, empty_Array, PThreadedCode24110, 1, PSend24111);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Constant string_24107_Const = new_Constant((Optr)string_24107);
    // at:ifPresent:. 
    Send PSend24112 = new_Send((Optr)VAR_params_1_1, SMB_at_ifPresent_, 2, (Optr)string_24107_Const, (Optr)PBlock24108);
    Array PThreadedCode24106 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_params_1_1, (Optr)&t_push1, (Optr)string_24107, (Optr)&t_push_closure, (Optr)PBlock24108, (Optr)&t_send2, (Optr)PSend24112, (Optr)&t_method_return);
    Block PBlock24104 = new_Block_with(PArray24105, empty_Array, PThreadedCode24106, 1, PSend24112);
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    // multipartFieldsDo:. 
    Send PSend24113 = new_Send((Optr)self, SMB_multipartFieldsDo_, 1, (Optr)PBlock24104);
    Array PThreadedCode24101 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24102, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24103, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock24104, (Optr)&t_send1, (Optr)PSend24113, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod24099 = new_Method_with(empty_Array, PArray24100, empty_Array, PThreadedCode24101, 3, PAssign24102, PSend24113, VAR_fields_0_0);
    
    MethodClosure MC_SMB_multipartFields = new_MethodClosure((Method)PMethod24099, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFields, MC_SMB_multipartFields);
}


static void init_SMB_sendResponse_chunked_do_() {
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Variable VAR_hdrBlock_0_2 = new_Variable_named(L"hdrBlock", 0);
    Array PArray24115 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)VAR_hdrBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray24116 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24120 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24121 = new_String(L"HTTP/1.1");
    Constant string_24121_Const = new_Constant((Optr)string_24121);
    // protocol:code:. 
    Send PSend24119 = new_Send((Optr)PSend24120, SMB_protocol_code_, 2, (Optr)string_24121_Const, (Optr)VAR_code_0_0);
    Assign PAssign24118 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24119);
    String string_24122 = new_String(L"Transfer-Encoding");
    String string_24123 = new_String(L"chunked");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24122_Const = new_Constant((Optr)string_24122);
    Constant string_24123_Const = new_Constant((Optr)string_24123);
    // headerAt:put:. 
    Send PSend24124 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24122_Const, (Optr)string_24123_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24125 = new_Send((Optr)VAR_hdrBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray24127 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    // stream:. 
    Send PSend24129 = new_Send((Optr)VAR_resp_0_3, SMB_stream_, 1, (Optr)VAR_aStream_1_0);
    // value:. 
    Send PSend24130 = new_Send((Optr)VAR_chunkBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray24132 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_24134 = new_String(L"0");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_24134_Const = new_Constant((Optr)string_24134);
    // nextPutAll:. 
    Send PSend24135 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)string_24134_Const);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24136 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    // crlf. 
    Send PSend24137 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24138 = new_Send((Optr)VAR__receiver__2_0, SMB_flush, 0);
    Array PThreadedCode24133 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_24134, (Optr)&t_send1, (Optr)PSend24135, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend24136, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend24137, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend24138, (Optr)&t_method_return);
    Block PBlock24131 = new_Block_with(PArray24132, empty_Array, PThreadedCode24133, 4, PSend24135, PSend24136, PSend24137, PSend24138);
    // value:. 
    Send PSend24139 = new_Send((Optr)PBlock24131, SMB_value_, 1, (Optr)VAR_aStream_1_0);
    Array PThreadedCode24128 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend24129, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24130, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24131, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend24139, (Optr)&t_method_return);
    Block PBlock24126 = new_Block_with(PArray24127, empty_Array, PThreadedCode24128, 3, PSend24129, PSend24130, PSend24139);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend24140 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_3, (Optr)PBlock24126);
    Array PThreadedCode24117 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24118, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24120, (Optr)&t_push1, (Optr)string_24121, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend24119, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24122, (Optr)&t_push1, (Optr)string_24123, (Optr)&t_send2, (Optr)PSend24124, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24125, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_closure, (Optr)PBlock24126, (Optr)&t_send2, (Optr)PSend24140, (Optr)&t_method_return);
    Method PMethod24114 = new_Method_with(PArray24115, PArray24116, empty_Array, PThreadedCode24117, 4, PAssign24118, PSend24124, PSend24125, PSend24140);
    
    MethodClosure MC_SMB_sendResponse_chunked_do_ = new_MethodClosure((Method)PMethod24114, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_do_, MC_SMB_sendResponse_chunked_do_);
}


static void init_SMB_sendResponse_contentStream_size_() {
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_2 = new_Variable_named(L"streamSize", 0);
    Array PArray24142 = new_Array_with(3, (Optr)VAR_resp_0_0, (Optr)VAR_aStream_0_1, (Optr)VAR_streamSize_0_2);
    String string_24146 = new_String(L"Connection");
    String string_24147 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24146_Const = new_Constant((Optr)string_24146);
    Constant string_24147_Const = new_Constant((Optr)string_24147);
    // headerAt:put:. 
    Send PSend24148 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_24146_Const, (Optr)string_24147_Const);
    Array PThreadedCode24145 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24146, (Optr)&t_push1, (Optr)string_24147, (Optr)&t_send2, (Optr)PSend24148, (Optr)&t_block_return);
    Block PBlock24144 = new_Block_with(empty_Array, empty_Array, PThreadedCode24145, 1, PSend24148);
    String string_24151 = new_String(L"Content-Length");
    Constant string_24151_Const = new_Constant((Optr)string_24151);
    // headerAt:put:. 
    Send PSend24152 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24151_Const, (Optr)VAR_streamSize_0_2);
    Array PThreadedCode24150 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24151, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_send2, (Optr)PSend24152, (Optr)&t_block_return);
    Block PBlock24149 = new_Block_with(empty_Array, empty_Array, PThreadedCode24150, 1, PSend24152);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend24153 = new_Send((Optr)VAR_streamSize_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock24144, (Optr)PBlock24149);
    Variable VAR_sockStream_1_0 = new_Variable_named(L"sockStream", 1);
    Array PArray24155 = new_Array_with(1, (Optr)VAR_sockStream_1_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend24157 = new_Send((Optr)VAR_resp_0_0, SMB_streamFrom_to_size_progress_, 4, (Optr)VAR_aStream_0_1, (Optr)VAR_sockStream_1_0, (Optr)VAR_streamSize_0_2, (Optr)nil_Const);
    Array PThreadedCode24156 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_variable, (Optr)VAR_sockStream_1_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend24157, (Optr)&t_method_return);
    Block PBlock24154 = new_Block_with(PArray24155, empty_Array, PThreadedCode24156, 1, PSend24157);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend24158 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock24154);
    Array PThreadedCode24143 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_closure, (Optr)PBlock24144, (Optr)&t_push_closure, (Optr)PBlock24149, (Optr)&t_send2, (Optr)PSend24153, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock24154, (Optr)&t_send2, (Optr)PSend24158, (Optr)&t_method_return);
    Method PMethod24141 = new_Method_with(PArray24142, empty_Array, empty_Array, PThreadedCode24143, 2, PSend24153, PSend24158);
    
    MethodClosure MC_SMB_sendResponse_contentStream_size_ = new_MethodClosure((Method)PMethod24141, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentStream_size_, MC_SMB_sendResponse_contentStream_size_);
}


static void init_SMB_server_() {
    Symbol SMB_server_ = new_Symbol(L"server:");
    Variable VAR_aWebServer_0_0 = new_Variable_named(L"aWebServer", 0);
    Array PArray24160 = new_Array_with(1, (Optr)VAR_aWebServer_0_0);
    Assign PAssign24162 = new_Assign((Optr)slot_WebClient_Core_WebRequest_server, (Optr)VAR_aWebServer_0_0);
    Array PThreadedCode24161 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24162, (Optr)&t_push_variable, (Optr)VAR_aWebServer_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24159 = new_Method_with(PArray24160, empty_Array, empty_Array, PThreadedCode24161, 2, PAssign24162, self);
    
    MethodClosure MC_SMB_server_ = new_MethodClosure((Method)PMethod24159, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server_, MC_SMB_server_);
}


static void init_SMB_sendResponseCode_content_type_do_() {
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray24164 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray24165 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24169 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24170 = new_String(L"HTTP/1.1");
    Constant string_24170_Const = new_Constant((Optr)string_24170);
    // protocol:code:. 
    Send PSend24168 = new_Send((Optr)PSend24169, SMB_protocol_code_, 2, (Optr)string_24170_Const, (Optr)VAR_code_0_0);
    Assign PAssign24167 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend24168);
    String string_24173 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24173_Const = new_Constant((Optr)string_24173);
    // headerAt:put:. 
    Send PSend24174 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_24173_Const, (Optr)VAR_contentType_0_2);
    Array PThreadedCode24172 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_24173, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend24174, (Optr)&t_block_return);
    Block PBlock24171 = new_Block_with(empty_Array, empty_Array, PThreadedCode24172, 1, PSend24174);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24175 = new_Send((Optr)VAR_contentType_0_2, SMB_ifNotNil_, 1, (Optr)PBlock24171);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24176 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24177 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_4, (Optr)VAR_aString_0_1);
    Array PThreadedCode24166 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign24167, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24169, (Optr)&t_push1, (Optr)string_24170, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend24168, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24171, (Optr)&t_send1, (Optr)PSend24175, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend24176, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send2, (Optr)PSend24177, (Optr)&t_method_return);
    Method PMethod24163 = new_Method_with(PArray24164, PArray24165, empty_Array, PThreadedCode24166, 4, PAssign24167, PSend24175, PSend24176, PSend24177);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_do_ = new_MethodClosure((Method)PMethod24163, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_do_, MC_SMB_sendResponseCode_content_type_do_);
}


static void init_SMB_send302Response_do_() {
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24179 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_302 = new_SmallInt(302);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_302_Const = new_Constant((Optr)int_302);
    // send3xxResponse:code:do:. 
    Send PSend24181 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_302_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode24180 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend24181, (Optr)&t_method_return);
    Method PMethod24178 = new_Method_with(PArray24179, empty_Array, empty_Array, PThreadedCode24180, 1, PSend24181);
    
    MethodClosure MC_SMB_send302Response_do_ = new_MethodClosure((Method)PMethod24178, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_do_, MC_SMB_send302Response_do_);
}


static void init_SMB_closeIfTransient_after_() {
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24183 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_close_0_2 = new_Variable_named(L"close", 0);
    Array PArray24184 = new_Array_with(1, (Optr)VAR_close_0_2);
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend24188 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend24187 = new_Send((Optr)PSend24188, SMB_not, 0);
    Assign PAssign24186 = new_Assign((Optr)VAR_close_0_2, (Optr)PSend24187);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24192 = new_String(L"Connection");
    String string_24193 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24192_Const = new_Constant((Optr)string_24192);
    Constant string_24193_Const = new_Constant((Optr)string_24193);
    // headerAt:put:. 
    Send PSend24194 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24192_Const, (Optr)string_24193_Const);
    Array PThreadedCode24191 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24192, (Optr)&t_push1, (Optr)string_24193, (Optr)&t_send2, (Optr)PSend24194, (Optr)&t_block_return);
    Block PBlock24190 = new_Block_with(empty_Array, empty_Array, PThreadedCode24191, 1, PSend24194);
    // ifTrue:. 
    Send PSend24189 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock24190);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24195 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24196 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend24200 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode24199 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24200, (Optr)&t_block_return);
    Block PBlock24198 = new_Block_with(empty_Array, empty_Array, PThreadedCode24199, 1, PSend24200);
    // ifTrue:. 
    Send PSend24197 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock24198);
    Array PThreadedCode24185 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign24186, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24188, (Optr)&t_send0, (Optr)PSend24187, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend24189, (Optr)PBlock24190, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend24195, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend24196, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend24197, (Optr)PBlock24198, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24182 = new_Method_with(PArray24183, PArray24184, empty_Array, PThreadedCode24185, 6, PAssign24186, PSend24189, PSend24195, PSend24196, PSend24197, self);
    
    MethodClosure MC_SMB_closeIfTransient_after_ = new_MethodClosure((Method)PMethod24182, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_closeIfTransient_after_, MC_SMB_closeIfTransient_after_);
}


static void init_SMB_send200Response_() {
    Symbol SMB_send200Response_ = new_Symbol(L"send200Response:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24202 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_24204 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_24204_Const = new_Constant((Optr)string_24204);
    // send200Response:contentType:. 
    Send PSend24205 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_aString_0_0, (Optr)string_24204_Const);
    Array PThreadedCode24203 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push1, (Optr)string_24204, (Optr)&t_send2, (Optr)PSend24205, (Optr)&t_method_return);
    Method PMethod24201 = new_Method_with(PArray24202, empty_Array, empty_Array, PThreadedCode24203, 1, PSend24205);
    
    MethodClosure MC_SMB_send200Response_ = new_MethodClosure((Method)PMethod24201, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_, MC_SMB_send200Response_);
}


static void init_SMB_isPutRequest() {
    Symbol SMB_isPutRequest = new_Symbol(L"isPutRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24208 = new_Send((Optr)self, SMB_method, 0);
    String string_24209 = new_String(L"PUT");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24209_Const = new_Constant((Optr)string_24209);
    // =. 
    Send PSend24210 = new_Send((Optr)PSend24208, SMB__equals_, 1, (Optr)string_24209_Const);
    Array PThreadedCode24207 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24208, (Optr)&t_push1, (Optr)string_24209, (Optr)&t_send1, (Optr)PSend24210, (Optr)&t_method_return);
    Method PMethod24206 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24207, 1, PSend24210);
    
    MethodClosure MC_SMB_isPutRequest = new_MethodClosure((Method)PMethod24206, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPutRequest, MC_SMB_isPutRequest);
}


static void init_SMB_send3xxResponse_code_() {
    Symbol SMB_send3xxResponse_code_ = new_Symbol(L"send3xxResponse:code:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Array PArray24212 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24215 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24216 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24214 = new_Block_with(PArray24215, empty_Array, PThreadedCode24216, 0);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    // send3xxResponse:code:do:. 
    Send PSend24217 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)PBlock24214);
    Array PThreadedCode24213 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_push_closure, (Optr)PBlock24214, (Optr)&t_send3, (Optr)PSend24217, (Optr)&t_method_return);
    Method PMethod24211 = new_Method_with(PArray24212, empty_Array, empty_Array, PThreadedCode24213, 1, PSend24217);
    
    MethodClosure MC_SMB_send3xxResponse_code_ = new_MethodClosure((Method)PMethod24211, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_, MC_SMB_send3xxResponse_code_);
}


static void init_SMB_sendResponse_contentBlock_() {
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_contentBlock_0_1 = new_Variable_named(L"contentBlock", 0);
    Array PArray24219 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_contentBlock_0_1);
    String string_24221 = new_String(L"Date");
    Array PThreadedCode24223 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock24222 = new_Block_with(empty_Array, empty_Array, PThreadedCode24223, 1, PWebServer_classReference);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24224 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock24222);
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    // serverDate. 
    Send PSend24225 = new_Send((Optr)PSend24224, SMB_serverDate, 0);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24221_Const = new_Constant((Optr)string_24221);
    // headerAt:put:. 
    Send PSend24226 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24221_Const, (Optr)PSend24225);
    String string_24227 = new_String(L"Server");
    Array PThreadedCode24229 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock24228 = new_Block_with(empty_Array, empty_Array, PThreadedCode24229, 1, PWebServer_classReference);
    // ifNil:. 
    Send PSend24230 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock24228);
    Symbol SMB_serverString = new_Symbol(L"serverString");
    // serverString. 
    Send PSend24231 = new_Send((Optr)PSend24230, SMB_serverString, 0);
    Constant string_24227_Const = new_Constant((Optr)string_24227);
    // headerAt:put:. 
    Send PSend24232 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24227_Const, (Optr)PSend24231);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend24237 = new_Send((Optr)VAR_resp_0_0, SMB_writeOn_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24238 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    // isHeadRequest. 
    Send PSend24239 = new_Send((Optr)self, SMB_isHeadRequest, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24243 = new_Send((Optr)VAR_contentBlock_0_1, SMB_value_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Array PThreadedCode24242 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_contentBlock_0_1, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24243, (Optr)&t_block_return);
    Block PBlock24241 = new_Block_with(empty_Array, empty_Array, PThreadedCode24242, 1, PSend24243);
    // ifFalse:. 
    Send PSend24240 = new_Send((Optr)PSend24239, SMB_ifFalse_, 1, (Optr)PBlock24241);
    Array PThreadedCode24236 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24237, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend24238, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24239, (Optr)&t_send_ifFalse_, (Optr)PSend24240, (Optr)PBlock24241, (Optr)&t_block_return);
    Block PBlock24235 = new_Block_with(empty_Array, empty_Array, PThreadedCode24236, 3, PSend24237, PSend24238, PSend24240);
    Variable VAR_ignore_1_0 = new_Variable_named(L"ignore", 1);
    Array PArray24245 = new_Array_with(1, (Optr)VAR_ignore_1_0);
    Array PThreadedCode24246 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24244 = new_Block_with(PArray24245, empty_Array, PThreadedCode24246, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend24247 = new_Send((Optr)PBlock24235, SMB_on_do_, 2, (Optr)NetworkError_classReference, (Optr)PBlock24244);
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    // logRequest:response:. 
    Send PSend24250 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_logRequest_response_, 2, (Optr)self, (Optr)VAR_resp_0_0);
    Array PThreadedCode24249 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_send2, (Optr)PSend24250, (Optr)&t_block_return);
    Block PBlock24248 = new_Block_with(empty_Array, empty_Array, PThreadedCode24249, 1, PSend24250);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24251 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNotNil_, 1, (Optr)PBlock24248);
    Array PThreadedCode24234 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock24235, (Optr)&t_push_class_reference, (Optr)NetworkError_classReference, (Optr)&t_push_closure, (Optr)PBlock24244, (Optr)&t_send2, (Optr)PSend24247, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24248, (Optr)&t_send1, (Optr)PSend24251, (Optr)&t_block_return);
    Block PBlock24233 = new_Block_with(empty_Array, empty_Array, PThreadedCode24234, 2, PSend24247, PSend24251);
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    // closeIfTransient:after:. 
    Send PSend24252 = new_Send((Optr)self, SMB_closeIfTransient_after_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock24233);
    Array PThreadedCode24220 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24221, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24222, (Optr)&t_send1, (Optr)PSend24224, (Optr)&t_send0, (Optr)PSend24225, (Optr)&t_send2, (Optr)PSend24226, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24227, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24228, (Optr)&t_send1, (Optr)PSend24230, (Optr)&t_send0, (Optr)PSend24231, (Optr)&t_send2, (Optr)PSend24232, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock24233, (Optr)&t_send2, (Optr)PSend24252, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24218 = new_Method_with(PArray24219, empty_Array, empty_Array, PThreadedCode24220, 4, PSend24226, PSend24232, PSend24252, self);
    
    MethodClosure MC_SMB_sendResponse_contentBlock_ = new_MethodClosure((Method)PMethod24218, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentBlock_, MC_SMB_sendResponse_contentBlock_);
}


static void init_SMB_server() {
    Symbol SMB_server = new_Symbol(L"server");
    Array PThreadedCode24254 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_method_return);
    Method PMethod24253 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24254, 1, slot_WebClient_Core_WebRequest_server);
    
    MethodClosure MC_SMB_server = new_MethodClosure((Method)PMethod24253, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server, MC_SMB_server);
}


static void init_SMB_stream200Response_size_() {
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Array PArray24256 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    String string_24258 = new_String(L"application/octet-stream");
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Constant string_24258_Const = new_Constant((Optr)string_24258);
    // stream200Response:size:type:. 
    Send PSend24259 = new_Send((Optr)self, SMB_stream200Response_size_type_, 3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)string_24258_Const);
    Array PThreadedCode24257 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push1, (Optr)string_24258, (Optr)&t_send3, (Optr)PSend24259, (Optr)&t_method_return);
    Method PMethod24255 = new_Method_with(PArray24256, empty_Array, empty_Array, PThreadedCode24257, 1, PSend24259);
    
    MethodClosure MC_SMB_stream200Response_size_ = new_MethodClosure((Method)PMethod24255, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_, MC_SMB_stream200Response_size_);
}


static void init_SMB_send302Response_() {
    Symbol SMB_send302Response_ = new_Symbol(L"send302Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray24261 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24264 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24265 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24263 = new_Block_with(PArray24264, empty_Array, PThreadedCode24265, 0);
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    // send302Response:do:. 
    Send PSend24266 = new_Send((Optr)self, SMB_send302Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock24263);
    Array PThreadedCode24262 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock24263, (Optr)&t_send2, (Optr)PSend24266, (Optr)&t_method_return);
    Method PMethod24260 = new_Method_with(PArray24261, empty_Array, empty_Array, PThreadedCode24262, 1, PSend24266);
    
    MethodClosure MC_SMB_send302Response_ = new_MethodClosure((Method)PMethod24260, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_, MC_SMB_send302Response_);
}


static void init_SMB_send3xxResponse_code_do_() {
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24268 = new_Array_with(3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Variable VAR_url_0_4 = new_Variable_named(L"url", 0);
    Array PArray24269 = new_Array_with(2, (Optr)VAR_resp_0_3, (Optr)VAR_url_0_4);
    Assign PAssign24271 = new_Assign((Optr)VAR_url_0_4, (Optr)VAR_location_0_0);
    String string_24272 = new_String(L"://");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_24272_Const = new_Constant((Optr)string_24272);
    // findString:. 
    Send PSend24273 = new_Send((Optr)VAR_location_0_0, SMB_findString_, 1, (Optr)string_24272_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24274 = new_Send((Optr)PSend24273, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24278 = new_String(L"host");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_24278_Const = new_Constant((Optr)string_24278);
    // headerAt:. 
    Send PSend24279 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_24278_Const);
    Variable VAR_host_1_0 = new_Variable_named(L"host", 1);
    Array PArray24281 = new_Array_with(1, (Optr)VAR_host_1_0);
    String string_24286 = new_String(L"http://");
    Constant string_24286_Const = new_Constant((Optr)string_24286);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24285 = new_Send((Optr)string_24286_Const, SMB__append_, 1, (Optr)VAR_host_1_0);
    // ,. 
    Send PSend24284 = new_Send((Optr)PSend24285, SMB__append_, 1, (Optr)VAR_location_0_0);
    Assign PAssign24283 = new_Assign((Optr)VAR_url_0_4, (Optr)PSend24284);
    Array PThreadedCode24282 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign24283, (Optr)&t_push1, (Optr)string_24286, (Optr)&t_push_variable, (Optr)VAR_host_1_0, (Optr)&t_send1, (Optr)PSend24285, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_send1, (Optr)PSend24284, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock24280 = new_Block_with(PArray24281, empty_Array, PThreadedCode24282, 1, PAssign24283);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend24287 = new_Send((Optr)PSend24279, SMB_ifNotEmpty_, 1, (Optr)PBlock24280);
    Array PThreadedCode24277 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24278, (Optr)&t_send1, (Optr)PSend24279, (Optr)&t_push_closure, (Optr)PBlock24280, (Optr)&t_send1, (Optr)PSend24287, (Optr)&t_block_return);
    Block PBlock24276 = new_Block_with(empty_Array, empty_Array, PThreadedCode24277, 1, PSend24287);
    // ifFalse:. 
    Send PSend24275 = new_Send((Optr)PSend24274, SMB_ifFalse_, 1, (Optr)PBlock24276);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24290 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24291 = new_String(L"HTTP/1.1");
    Constant string_24291_Const = new_Constant((Optr)string_24291);
    // protocol:code:. 
    Send PSend24289 = new_Send((Optr)PSend24290, SMB_protocol_code_, 2, (Optr)string_24291_Const, (Optr)VAR_statusCode_0_1);
    Assign PAssign24288 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24289);
    String string_24292 = new_String(L"Location");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24292_Const = new_Constant((Optr)string_24292);
    // headerAt:put:. 
    Send PSend24293 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24292_Const, (Optr)VAR_url_0_4);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24294 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    String string_24295 = new_String(L"");
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Constant string_24295_Const = new_Constant((Optr)string_24295);
    // sendResponse:content:. 
    Send PSend24296 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)string_24295_Const);
    Array PThreadedCode24270 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign24271, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)string_24272, (Optr)&t_send1, (Optr)PSend24273, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24274, (Optr)&t_send_ifFalse_, (Optr)PSend24275, (Optr)PBlock24276, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24288, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24290, (Optr)&t_push1, (Optr)string_24291, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_send2, (Optr)PSend24289, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24292, (Optr)&t_push_variable, (Optr)VAR_url_0_4, (Optr)&t_send2, (Optr)PSend24293, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24294, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24295, (Optr)&t_send2, (Optr)PSend24296, (Optr)&t_method_return);
    Method PMethod24267 = new_Method_with(PArray24268, PArray24269, empty_Array, PThreadedCode24270, 6, PAssign24271, PSend24275, PAssign24288, PSend24293, PSend24294, PSend24296);
    
    MethodClosure MC_SMB_send3xxResponse_code_do_ = new_MethodClosure((Method)PMethod24267, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_do_, MC_SMB_send3xxResponse_code_do_);
}


static void init_SMB_isPostRequest() {
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24299 = new_Send((Optr)self, SMB_method, 0);
    String string_24300 = new_String(L"POST");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24300_Const = new_Constant((Optr)string_24300);
    // =. 
    Send PSend24301 = new_Send((Optr)PSend24299, SMB__equals_, 1, (Optr)string_24300_Const);
    Array PThreadedCode24298 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24299, (Optr)&t_push1, (Optr)string_24300, (Optr)&t_send1, (Optr)PSend24301, (Optr)&t_method_return);
    Method PMethod24297 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24298, 1, PSend24301);
    
    MethodClosure MC_SMB_isPostRequest = new_MethodClosure((Method)PMethod24297, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPostRequest, MC_SMB_isPostRequest);
}


static void init_SMB_writeRequestOn_() {
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24303 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24306 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24308 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_method);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24309 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend24310 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_rawUrl);
    // space. 
    Send PSend24311 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend24312 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebMessage_protocol);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24313 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24307 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_send1, (Optr)PSend24308, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24309, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_send1, (Optr)PSend24310, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24311, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_send1, (Optr)PSend24312, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24313, (Optr)&t_method_return);
    Block PBlock24305 = new_Block_with(PArray24306, empty_Array, PThreadedCode24307, 6, PSend24308, PSend24309, PSend24310, PSend24311, PSend24312, PSend24313);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24314 = new_Send((Optr)PBlock24305, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24304 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24305, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24314, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24302 = new_Method_with(PArray24303, empty_Array, empty_Array, PThreadedCode24304, 2, PSend24314, self);
    
    MethodClosure MC_SMB_writeRequestOn_ = new_MethodClosure((Method)PMethod24302, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeRequestOn_, MC_SMB_writeRequestOn_);
}


static void init_SMB_send405Response_() {
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray24316 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_24318 = new_String(L"<html><head><title>405 Method Not Allowed</title></head><body><h1>405 Method Not Allowed</h1><p>The requested method ");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24319 = new_Send((Optr)self, SMB_method, 0);
    Constant string_24318_Const = new_Constant((Optr)string_24318);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24320 = new_Send((Optr)string_24318_Const, SMB__append_, 1, (Optr)PSend24319);
    String string_24321 = new_String(L" is not allowed for the URL");
    Constant string_24321_Const = new_Constant((Optr)string_24321);
    // ,. 
    Send PSend24322 = new_Send((Optr)PSend24320, SMB__append_, 1, (Optr)string_24321_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24323 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend24324 = new_Send((Optr)PSend24322, SMB__append_, 1, (Optr)PSend24323);
    String string_24325 = new_String(L"</p></body></html>");
    Constant string_24325_Const = new_Constant((Optr)string_24325);
    // ,. 
    Send PSend24326 = new_Send((Optr)PSend24324, SMB__append_, 1, (Optr)string_24325_Const);
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    // send405Response:content:. 
    Send PSend24327 = new_Send((Optr)self, SMB_send405Response_content_, 2, (Optr)VAR_allowed_0_0, (Optr)PSend24326);
    Array PThreadedCode24317 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push1, (Optr)string_24318, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24319, (Optr)&t_send1, (Optr)PSend24320, (Optr)&t_push1, (Optr)string_24321, (Optr)&t_send1, (Optr)PSend24322, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24323, (Optr)&t_send1, (Optr)PSend24324, (Optr)&t_push1, (Optr)string_24325, (Optr)&t_send1, (Optr)PSend24326, (Optr)&t_send2, (Optr)PSend24327, (Optr)&t_method_return);
    Method PMethod24315 = new_Method_with(PArray24316, empty_Array, empty_Array, PThreadedCode24317, 1, PSend24327);
    
    MethodClosure MC_SMB_send405Response_ = new_MethodClosure((Method)PMethod24315, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_, MC_SMB_send405Response_);
}


static void init_SMB_send500Response_() {
    Symbol SMB_send500Response_ = new_Symbol(L"send500Response:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Array PArray24329 = new_Array_with(1, (Optr)VAR_errReport_0_0);
    Variable VAR_errLog_0_1 = new_Variable_named(L"errLog", 0);
    Array PArray24330 = new_Array_with(1, (Optr)VAR_errLog_0_1);
    String string_24336 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_24336_Const = new_Constant((Optr)string_24336);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24337 = new_String(L"<h1>Internal Server Error</h1><pre>");
    Constant string_24337_Const = new_Constant((Optr)string_24337);
    // ,. 
    Send PSend24335 = new_Send((Optr)string_24336_Const, SMB__append_, 1, (Optr)string_24337_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend24339 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24340 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend24338 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend24339, (Optr)PSend24340);
    // ,. 
    Send PSend24334 = new_Send((Optr)PSend24335, SMB__append_, 1, (Optr)PSend24338);
    String string_24341 = new_String(L"</pre></body></html>");
    Constant string_24341_Const = new_Constant((Optr)string_24341);
    // ,. 
    Send PSend24333 = new_Send((Optr)PSend24334, SMB__append_, 1, (Optr)string_24341_Const);
    Assign PAssign24332 = new_Assign((Optr)VAR_errLog_0_1, (Optr)PSend24333);
    SmallInt int_500 = new_SmallInt(500);
    String string_24342 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_24342_Const = new_Constant((Optr)string_24342);
    // sendResponseCode:content:type:close:. 
    Send PSend24343 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_1, (Optr)string_24342_Const, (Optr)true_Const);
    Array PThreadedCode24331 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign24332, (Optr)&t_push1, (Optr)string_24336, (Optr)&t_push1, (Optr)string_24337, (Optr)&t_send1, (Optr)PSend24335, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24339, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24340, (Optr)&t_send2, (Optr)PSend24338, (Optr)&t_send1, (Optr)PSend24334, (Optr)&t_push1, (Optr)string_24341, (Optr)&t_send1, (Optr)PSend24333, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_1, (Optr)&t_push1, (Optr)string_24342, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend24343, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24328 = new_Method_with(PArray24329, PArray24330, empty_Array, PThreadedCode24331, 3, PAssign24332, PSend24343, self);
    
    MethodClosure MC_SMB_send500Response_ = new_MethodClosure((Method)PMethod24328, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send500Response_, MC_SMB_send500Response_);
}


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24345 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24347 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)VAR_aString_0_0);
    Array PThreadedCode24346 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24347, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24344 = new_Method_with(PArray24345, empty_Array, empty_Array, PThreadedCode24346, 2, PAssign24347, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod24344, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_requestLine() {
    Symbol SMB_requestLine = new_Symbol(L"requestLine");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24352 = new_Send((Optr)self, SMB_method, 0);
    String string_24353 = new_String(L" ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_24353_Const = new_Constant((Optr)string_24353);
    // ,. 
    Send PSend24354 = new_Send((Optr)PSend24352, SMB__append_, 1, (Optr)string_24353_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24355 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend24356 = new_Send((Optr)PSend24354, SMB__append_, 1, (Optr)PSend24355);
    String string_24357 = new_String(L" ");
    Constant string_24357_Const = new_Constant((Optr)string_24357);
    // ,. 
    Send PSend24358 = new_Send((Optr)PSend24356, SMB__append_, 1, (Optr)string_24357_Const);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend24359 = new_Send((Optr)self, SMB_protocol, 0);
    // ,. 
    Send PSend24360 = new_Send((Optr)PSend24358, SMB__append_, 1, (Optr)PSend24359);
    Array PThreadedCode24351 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24352, (Optr)&t_push1, (Optr)string_24353, (Optr)&t_send1, (Optr)PSend24354, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24355, (Optr)&t_send1, (Optr)PSend24356, (Optr)&t_push1, (Optr)string_24357, (Optr)&t_send1, (Optr)PSend24358, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24359, (Optr)&t_send1, (Optr)PSend24360, (Optr)&t_block_return);
    Block PBlock24350 = new_Block_with(empty_Array, empty_Array, PThreadedCode24351, 1, PSend24360);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24361 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_ifNil_, 1, (Optr)PBlock24350);
    Array PThreadedCode24349 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push_closure, (Optr)PBlock24350, (Optr)&t_send1, (Optr)PSend24361, (Optr)&t_method_return);
    Method PMethod24348 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24349, 1, PSend24361);
    
    MethodClosure MC_SMB_requestLine = new_MethodClosure((Method)PMethod24348, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_requestLine, MC_SMB_requestLine);
}


static void init_SMB_sendResponse_chunked_() {
    Symbol SMB_sendResponse_chunked_ = new_Symbol(L"sendResponse:chunked:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Array PArray24363 = new_Array_with(2, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24366 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24367 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24365 = new_Block_with(PArray24366, empty_Array, PThreadedCode24367, 0);
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    // sendResponse:chunked:do:. 
    Send PSend24368 = new_Send((Optr)self, SMB_sendResponse_chunked_do_, 3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)PBlock24365);
    Array PThreadedCode24364 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_closure, (Optr)PBlock24365, (Optr)&t_send3, (Optr)PSend24368, (Optr)&t_method_return);
    Method PMethod24362 = new_Method_with(PArray24363, empty_Array, empty_Array, PThreadedCode24364, 1, PSend24368);
    
    MethodClosure MC_SMB_sendResponse_chunked_ = new_MethodClosure((Method)PMethod24362, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_, MC_SMB_sendResponse_chunked_);
}


static void init_SMB_multipartFieldsDo_() {
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray24370 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend24372 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend24375 = new_Send((Optr)self, SMB_contentType, 0);
    String string_24376 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_24376_Const = new_Constant((Optr)string_24376);
    // beginsWith:. 
    Send PSend24377 = new_Send((Optr)PSend24375, SMB_beginsWith_, 1, (Optr)string_24376_Const);
    Array PThreadedCode24374 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24375, (Optr)&t_push1, (Optr)string_24376, (Optr)&t_send1, (Optr)PSend24377, (Optr)&t_block_return);
    Block PBlock24373 = new_Block_with(empty_Array, empty_Array, PThreadedCode24374, 1, PSend24377);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24378 = new_Send((Optr)PSend24372, SMB_and_, 1, (Optr)PBlock24373);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend24382 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24383 = new_Send((Optr)PSend24382, SMB_readStream, 0);
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    // multipartBoundary. 
    Send PSend24384 = new_Send((Optr)self, SMB_multipartBoundary, 0);
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    // decodeMultipartForm:boundary:do:. 
    Send PSend24385 = new_Send((Optr)PWebUtils_classReference, SMB_decodeMultipartForm_boundary_do_, 3, (Optr)PSend24383, (Optr)PSend24384, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode24381 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24382, (Optr)&t_send0, (Optr)PSend24383, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24384, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send3, (Optr)PSend24385, (Optr)&t_block_return);
    Block PBlock24380 = new_Block_with(empty_Array, empty_Array, PThreadedCode24381, 1, PSend24385);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24388 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode24387 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24388, (Optr)&t_block_return);
    Block PBlock24386 = new_Block_with(empty_Array, empty_Array, PThreadedCode24387, 1, PSend24388);
    // ifTrue:ifFalse:. 
    Send PSend24379 = new_Send((Optr)PSend24378, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24380, (Optr)PBlock24386);
    Array PThreadedCode24371 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24372, (Optr)&t_push_closure, (Optr)PBlock24373, (Optr)&t_send1, (Optr)PSend24378, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24379, (Optr)PBlock24380, (Optr)PBlock24386, (Optr)&t_method_return);
    Method PMethod24369 = new_Method_with(PArray24370, empty_Array, empty_Array, PThreadedCode24371, 1, PSend24379);
    
    MethodClosure MC_SMB_multipartFieldsDo_ = new_MethodClosure((Method)PMethod24369, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFieldsDo_, MC_SMB_multipartFieldsDo_);
}


static void init_SMB_postFields() {
    Symbol SMB_postFields = new_Symbol(L"postFields");
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend24391 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend24394 = new_Send((Optr)self, SMB_contentType, 0);
    String string_24395 = new_String(L"application/x-www-form-urlencoded");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24395_Const = new_Constant((Optr)string_24395);
    // =. 
    Send PSend24396 = new_Send((Optr)PSend24394, SMB__equals_, 1, (Optr)string_24395_Const);
    Array PThreadedCode24393 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24394, (Optr)&t_push1, (Optr)string_24395, (Optr)&t_send1, (Optr)PSend24396, (Optr)&t_block_return);
    Block PBlock24392 = new_Block_with(empty_Array, empty_Array, PThreadedCode24393, 1, PSend24396);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24397 = new_Send((Optr)PSend24391, SMB_and_, 1, (Optr)PBlock24392);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend24401 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend24402 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)PSend24401, (Optr)true_Const);
    Array PThreadedCode24400 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24401, (Optr)&t_push_true, (Optr)&t_send2, (Optr)PSend24402, (Optr)&t_block_return);
    Block PBlock24399 = new_Block_with(empty_Array, empty_Array, PThreadedCode24400, 1, PSend24402);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24405 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode24404 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24405, (Optr)&t_block_return);
    Block PBlock24403 = new_Block_with(empty_Array, empty_Array, PThreadedCode24404, 1, PSend24405);
    // ifTrue:ifFalse:. 
    Send PSend24398 = new_Send((Optr)PSend24397, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24399, (Optr)PBlock24403);
    Array PThreadedCode24390 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24391, (Optr)&t_push_closure, (Optr)PBlock24392, (Optr)&t_send1, (Optr)PSend24397, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24398, (Optr)PBlock24399, (Optr)PBlock24403, (Optr)&t_method_return);
    Method PMethod24389 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24390, 1, PSend24398);
    
    MethodClosure MC_SMB_postFields = new_MethodClosure((Method)PMethod24389, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_postFields, MC_SMB_postFields);
}


static void init_SMB_stream200Response_() {
    Symbol SMB_stream200Response_ = new_Symbol(L"stream200Response:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24407 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24409 = new_Send((Optr)VAR_aStream_0_0, SMB_size, 0);
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    // stream200Response:size:. 
    Send PSend24410 = new_Send((Optr)self, SMB_stream200Response_size_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend24409);
    Array PThreadedCode24408 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24409, (Optr)&t_send2, (Optr)PSend24410, (Optr)&t_method_return);
    Method PMethod24406 = new_Method_with(PArray24407, empty_Array, empty_Array, PThreadedCode24408, 1, PSend24410);
    
    MethodClosure MC_SMB_stream200Response_ = new_MethodClosure((Method)PMethod24406, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_, MC_SMB_stream200Response_);
}


static void init_SMB_rawUrl_() {
    Symbol SMB_rawUrl_ = new_Symbol(L"rawUrl:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24412 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24414 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)VAR_aString_0_0);
    Array PThreadedCode24413 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24414, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24411 = new_Method_with(PArray24412, empty_Array, empty_Array, PThreadedCode24413, 2, PAssign24414, self);
    
    MethodClosure MC_SMB_rawUrl_ = new_MethodClosure((Method)PMethod24411, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl_, MC_SMB_rawUrl_);
}


static void init_SMB_sendResponse_content_() {
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Array PArray24416 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aString_0_1);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24418 = new_Send((Optr)VAR_aString_0_1, SMB_readStream, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24419 = new_Send((Optr)VAR_aString_0_1, SMB_size, 0);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend24420 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_0, (Optr)PSend24418, (Optr)PSend24419);
    Array PThreadedCode24417 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24418, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24419, (Optr)&t_send3, (Optr)PSend24420, (Optr)&t_method_return);
    Method PMethod24415 = new_Method_with(PArray24416, empty_Array, empty_Array, PThreadedCode24417, 1, PSend24420);
    
    MethodClosure MC_SMB_sendResponse_content_ = new_MethodClosure((Method)PMethod24415, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_content_, MC_SMB_sendResponse_content_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24422 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    // writeRequestOn:. 
    Send PSend24424 = new_Send((Optr)self, SMB_writeRequestOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24425 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24423 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24424, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24425, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24421 = new_Method_with(PArray24422, empty_Array, empty_Array, PThreadedCode24423, 3, PSend24424, PSuper24425, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24421, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_send200Response_contentType_do_() {
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24427 = new_Array_with(3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray24428 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24432 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24433 = new_String(L"HTTP/1.1");
    Constant string_24433_Const = new_Constant((Optr)string_24433);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend24431 = new_Send((Optr)PSend24432, SMB_protocol_code_, 2, (Optr)string_24433_Const, (Optr)int_200_Const);
    Assign PAssign24430 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24431);
    String string_24434 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24434_Const = new_Constant((Optr)string_24434);
    // headerAt:put:. 
    Send PSend24435 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24434_Const, (Optr)VAR_contentType_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24436 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24437 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)VAR_aString_0_0);
    Array PThreadedCode24429 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24430, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24432, (Optr)&t_push1, (Optr)string_24433, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend24431, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24434, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_send2, (Optr)PSend24435, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24436, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend24437, (Optr)&t_method_return);
    Method PMethod24426 = new_Method_with(PArray24427, PArray24428, empty_Array, PThreadedCode24429, 4, PAssign24430, PSend24435, PSend24436, PSend24437);
    
    MethodClosure MC_SMB_send200Response_contentType_do_ = new_MethodClosure((Method)PMethod24426, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_do_, MC_SMB_send200Response_contentType_do_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode24439 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_method_return);
    Method PMethod24438 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24439, 1, slot_WebClient_Core_WebRequest_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod24438, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Character char_2665 = new_Character(L'#');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_2665_Const = new_Constant((Optr)char_2665);
    // copyUpTo:. 
    Send PSend24442 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyUpTo_, 1, (Optr)char_2665_Const);
    Character char_23892 = new_Character(L'?');
    Constant char_23892_Const = new_Constant((Optr)char_23892);
    // copyUpTo:. 
    Send PSend24443 = new_Send((Optr)PSend24442, SMB_copyUpTo_, 1, (Optr)char_23892_Const);
    Array PThreadedCode24441 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend24442, (Optr)&t_push1, (Optr)char_23892, (Optr)&t_send1, (Optr)PSend24443, (Optr)&t_method_return);
    Method PMethod24440 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24441, 1, PSend24443);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24440, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_send404Response_do_() {
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24445 = new_Array_with(2, (Optr)VAR_body_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray24446 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24450 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24451 = new_String(L"HTTP/1.1");
    Constant string_24451_Const = new_Constant((Optr)string_24451);
    SmallInt int_404 = new_SmallInt(404);
    Constant int_404_Const = new_Constant((Optr)int_404);
    // protocol:code:. 
    Send PSend24449 = new_Send((Optr)PSend24450, SMB_protocol_code_, 2, (Optr)string_24451_Const, (Optr)int_404_Const);
    Assign PAssign24448 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend24449);
    String string_24452 = new_String(L"Content-Type");
    String string_24453 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24452_Const = new_Constant((Optr)string_24452);
    Constant string_24453_Const = new_Constant((Optr)string_24453);
    // headerAt:put:. 
    Send PSend24454 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24452_Const, (Optr)string_24453_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24455 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_2);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24456 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_0);
    Array PThreadedCode24447 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24448, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24450, (Optr)&t_push1, (Optr)string_24451, (Optr)&t_push1, (Optr)int_404, (Optr)&t_send2, (Optr)PSend24449, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24452, (Optr)&t_push1, (Optr)string_24453, (Optr)&t_send2, (Optr)PSend24454, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_send1, (Optr)PSend24455, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_send2, (Optr)PSend24456, (Optr)&t_method_return);
    Method PMethod24444 = new_Method_with(PArray24445, PArray24446, empty_Array, PThreadedCode24447, 4, PAssign24448, PSend24454, PSend24455, PSend24456);
    
    MethodClosure MC_SMB_send404Response_do_ = new_MethodClosure((Method)PMethod24444, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_do_, MC_SMB_send404Response_do_);
}


static void init_SMB_stream200Response_size_type_() {
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Array PArray24458 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24461 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24462 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24460 = new_Block_with(PArray24461, empty_Array, PThreadedCode24462, 0);
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    // stream200Response:size:type:do:. 
    Send PSend24463 = new_Send((Optr)self, SMB_stream200Response_size_type_do_, 4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24460);
    Array PThreadedCode24459 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24460, (Optr)&t_send4, (Optr)PSend24463, (Optr)&t_method_return);
    Method PMethod24457 = new_Method_with(PArray24458, empty_Array, empty_Array, PThreadedCode24459, 1, PSend24463);
    
    MethodClosure MC_SMB_stream200Response_size_type_ = new_MethodClosure((Method)PMethod24457, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_, MC_SMB_stream200Response_size_type_);
}


static void init_SMB_isTraceRequest() {
    Symbol SMB_isTraceRequest = new_Symbol(L"isTraceRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24466 = new_Send((Optr)self, SMB_method, 0);
    String string_24467 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24467_Const = new_Constant((Optr)string_24467);
    // =. 
    Send PSend24468 = new_Send((Optr)PSend24466, SMB__equals_, 1, (Optr)string_24467_Const);
    Array PThreadedCode24465 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24466, (Optr)&t_push1, (Optr)string_24467, (Optr)&t_send1, (Optr)PSend24468, (Optr)&t_method_return);
    Method PMethod24464 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24465, 1, PSend24468);
    
    MethodClosure MC_SMB_isTraceRequest = new_MethodClosure((Method)PMethod24464, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isTraceRequest, MC_SMB_isTraceRequest);
}


static void init_SMB_sendOptionsResponse_() {
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray24470 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_24472 = new_String(L"");
    String string_24473 = new_String(L"application/octet-stream");
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24475 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24477 = new_String(L"allow");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray24479 = new_Array_with(1, (Optr)VAR_s_2_0);
    Variable VAR_m_3_0 = new_Variable_named(L"m", 3);
    Array PArray24482 = new_Array_with(1, (Optr)VAR_m_3_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24484 = new_Send((Optr)VAR_s_2_0, SMB_nextPutAll_, 1, (Optr)VAR_m_3_0);
    Array PThreadedCode24483 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_m_3_0, (Optr)&t_send1, (Optr)PSend24484, (Optr)&t_method_return);
    Block PBlock24481 = new_Block_with(PArray24482, empty_Array, PThreadedCode24483, 1, PSend24484);
    Character char_23971 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23971_Const = new_Constant((Optr)char_23971);
    // nextPut:. 
    Send PSend24487 = new_Send((Optr)VAR_s_2_0, SMB_nextPut_, 1, (Optr)char_23971_Const);
    Array PThreadedCode24486 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)char_23971, (Optr)&t_send1, (Optr)PSend24487, (Optr)&t_block_return);
    Block PBlock24485 = new_Block_with(empty_Array, empty_Array, PThreadedCode24486, 1, PSend24487);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend24488 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock24481, (Optr)PBlock24485);
    Array PThreadedCode24480 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock24481, (Optr)&t_push_closure, (Optr)PBlock24485, (Optr)&t_send2, (Optr)PSend24488, (Optr)&t_method_return);
    Block PBlock24478 = new_Block_with(PArray24479, empty_Array, PThreadedCode24480, 1, PSend24488);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend24489 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock24478);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24477_Const = new_Constant((Optr)string_24477);
    // headerAt:put:. 
    Send PSend24490 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24477_Const, (Optr)PSend24489);
    Array PThreadedCode24476 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24477, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock24478, (Optr)&t_send1, (Optr)PSend24489, (Optr)&t_send2, (Optr)PSend24490, (Optr)&t_method_return);
    Block PBlock24474 = new_Block_with(PArray24475, empty_Array, PThreadedCode24476, 1, PSend24490);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Constant string_24472_Const = new_Constant((Optr)string_24472);
    Constant string_24473_Const = new_Constant((Optr)string_24473);
    // send200Response:contentType:do:. 
    Send PSend24491 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)string_24472_Const, (Optr)string_24473_Const, (Optr)PBlock24474);
    Array PThreadedCode24471 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24472, (Optr)&t_push1, (Optr)string_24473, (Optr)&t_push_closure, (Optr)PBlock24474, (Optr)&t_send3, (Optr)PSend24491, (Optr)&t_method_return);
    Method PMethod24469 = new_Method_with(PArray24470, empty_Array, empty_Array, PThreadedCode24471, 1, PSend24491);
    
    MethodClosure MC_SMB_sendOptionsResponse_ = new_MethodClosure((Method)PMethod24469, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendOptionsResponse_, MC_SMB_sendOptionsResponse_);
}


static void init_SMB_rawUrl() {
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    Array PThreadedCode24493 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_method_return);
    Method PMethod24492 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24493, 1, slot_WebClient_Core_WebRequest_rawUrl);
    
    MethodClosure MC_SMB_rawUrl = new_MethodClosure((Method)PMethod24492, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl, MC_SMB_rawUrl);
}


static void init_SMB_sendResponseCode_content_type_close_() {
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBool_0_3 = new_Variable_named(L"aBool", 0);
    Array PArray24495 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBool_0_3);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24498 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24503 = new_String(L"Connection");
    String string_24504 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24503_Const = new_Constant((Optr)string_24503);
    Constant string_24504_Const = new_Constant((Optr)string_24504);
    // headerAt:put:. 
    Send PSend24505 = new_Send((Optr)VAR_hdr_1_0, SMB_headerAt_put_, 2, (Optr)string_24503_Const, (Optr)string_24504_Const);
    Array PThreadedCode24502 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_push1, (Optr)string_24503, (Optr)&t_push1, (Optr)string_24504, (Optr)&t_send2, (Optr)PSend24505, (Optr)&t_block_return);
    Block PBlock24501 = new_Block_with(empty_Array, empty_Array, PThreadedCode24502, 1, PSend24505);
    // ifTrue:. 
    Send PSend24500 = new_Send((Optr)VAR_aBool_0_3, SMB_ifTrue_, 1, (Optr)PBlock24501);
    Array PThreadedCode24499 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBool_0_3, (Optr)&t_send_ifTrue_, (Optr)PSend24500, (Optr)PBlock24501, (Optr)&t_method_return);
    Block PBlock24497 = new_Block_with(PArray24498, empty_Array, PThreadedCode24499, 1, PSend24500);
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    // sendResponseCode:content:type:do:. 
    Send PSend24506 = new_Send((Optr)self, SMB_sendResponseCode_content_type_do_, 4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24497);
    Array PThreadedCode24496 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24497, (Optr)&t_send4, (Optr)PSend24506, (Optr)&t_method_return);
    Method PMethod24494 = new_Method_with(PArray24495, empty_Array, empty_Array, PThreadedCode24496, 1, PSend24506);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_close_ = new_MethodClosure((Method)PMethod24494, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_close_, MC_SMB_sendResponseCode_content_type_close_);
}


static void init_class_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24508 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24510 = new_Send((Optr)self, SMB_new, 0);
    // readFrom:. 
    Send PSend24511 = new_Send((Optr)PSend24510, SMB_readFrom_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24509 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24510, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24511, (Optr)&t_method_return);
    Method PMethod24507 = new_Method_with(PArray24508, empty_Array, empty_Array, PThreadedCode24509, 1, PSend24511);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24507, HEADER(WebClient_Core_WebRequest_Class));
    store_method(HEADER(WebClient_Core_WebRequest_Class), SMB_readFrom_, MC_SMB_readFrom_);
}

void init_WebClient_Core_PWebRequest_layout() {
    layout_WebClient_Core_WebRequest_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_WebClient_Core_WebRequest_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_WebClient_Core_WebRequest_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_WebClient_Core_WebRequest_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_WebClient_Core_WebRequest_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_WebClient_Core_WebRequest_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_WebClient_Core_WebRequest_Class_class)->values[5] = slot_WebClient_Core_WebMessage_Class_class_statusCodes; // statusCodes 
    
    Symbol  SMB_WebRequest = new_Symbol(L"WebRequest");
    slot_WebClient_Core_WebRequest_method = (Optr)new_Slot(4, L"method");
    slot_WebClient_Core_WebRequest_request = (Optr)new_Slot(5, L"request");
    slot_WebClient_Core_WebRequest_rawUrl = (Optr)new_Slot(6, L"rawUrl");
    slot_WebClient_Core_WebRequest_server = (Optr)new_Slot(7, L"server");
    layout_WebClient_Core_WebRequest = (Optr)create_layout_with_vars(ObjectLayout_Class, 8);
    ((Array)layout_WebClient_Core_WebRequest)->values[0] = slot_WebClient_Core_WebMessage_stream; // stream 
    ((Array)layout_WebClient_Core_WebRequest)->values[1] = slot_WebClient_Core_WebMessage_protocol; // protocol 
    ((Array)layout_WebClient_Core_WebRequest)->values[2] = slot_WebClient_Core_WebMessage_headers; // headers 
    ((Array)layout_WebClient_Core_WebRequest)->values[3] = slot_WebClient_Core_WebMessage_content; // content 
    ((Array)layout_WebClient_Core_WebRequest)->values[4] = slot_WebClient_Core_WebRequest_method; // method 
    ((Array)layout_WebClient_Core_WebRequest)->values[5] = slot_WebClient_Core_WebRequest_request; // request 
    ((Array)layout_WebClient_Core_WebRequest)->values[6] = slot_WebClient_Core_WebRequest_rawUrl; // rawUrl 
    ((Array)layout_WebClient_Core_WebRequest)->values[7] = slot_WebClient_Core_WebRequest_server; // server 
    WebClient_Core_WebRequest_Class = (Class)new_Class(WebClient_Core_WebMessage_Class, layout_WebClient_Core_WebRequest_Class_class);
    WebClient_Core_WebRequest_Class->layout = layout_WebClient_Core_WebRequest;
    WebClient_Core_WebRequest_Class->name = SMB_WebRequest;
    
}

void init_WebClient_Core_PWebRequest_methods() {
    init_SMB_getFields();
    init_SMB_isHeadRequest();
    init_SMB_readFrom_();
    init_SMB_send405Response_content_();
    init_SMB_send301Response_();
    init_SMB_stream200Response_size_type_do_();
    init_SMB_sendXmlResponse_();
    init_SMB_initialize();
    init_SMB_isGetRequest();
    init_SMB_newWebSocketOn_();
    init_SMB_send400Response();
    init_SMB_newResponse();
    init_SMB_isOptionsRequest();
    init_SMB_send404Response_();
    init_SMB_fields();
    init_SMB_send404Response();
    init_SMB_isDeleteRequest();
    init_SMB_send301Response_do_();
    init_SMB_send200Response_contentType_();
    init_SMB_multipartFields();
    init_SMB_sendResponse_chunked_do_();
    init_SMB_sendResponse_contentStream_size_();
    init_SMB_server_();
    init_SMB_sendResponseCode_content_type_do_();
    init_SMB_send302Response_do_();
    init_SMB_closeIfTransient_after_();
    init_SMB_send200Response_();
    init_SMB_isPutRequest();
    init_SMB_send3xxResponse_code_();
    init_SMB_sendResponse_contentBlock_();
    init_SMB_server();
    init_SMB_stream200Response_size_();
    init_SMB_send302Response_();
    init_SMB_send3xxResponse_code_do_();
    init_SMB_isPostRequest();
    init_SMB_writeRequestOn_();
    init_SMB_send405Response_();
    init_SMB_send500Response_();
    init_SMB_method_();
    init_SMB_requestLine();
    init_SMB_sendResponse_chunked_();
    init_SMB_multipartFieldsDo_();
    init_SMB_postFields();
    init_SMB_stream200Response_();
    init_SMB_rawUrl_();
    init_SMB_sendResponse_content_();
    init_SMB_writeOn_();
    init_SMB_send200Response_contentType_do_();
    init_SMB_method();
    init_SMB_url();
    init_SMB_send404Response_do_();
    init_SMB_stream200Response_size_type_();
    init_SMB_isTraceRequest();
    init_SMB_sendOptionsResponse_();
    init_SMB_rawUrl();
    init_SMB_sendResponseCode_content_type_close_();
    init_class_SMB_readFrom_();
    
}