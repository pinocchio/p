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
    Array PArray23879 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23882 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    Character char_23887 = new_Character(L'?');
    Constant char_23887_Const = new_Constant((Optr)char_23887);
    // copyAfter:. 
    Send PSend23886 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyAfter_, 1, (Optr)char_23887_Const);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23890 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23891 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23890);
    Array PThreadedCode23889 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23890, (Optr)&t_send1, (Optr)PSend23891, (Optr)&t_block_return);
    Block PBlock23888 = new_Block_with(empty_Array, empty_Array, PThreadedCode23889, 1, PSend23891);
    // ifEmpty:. 
    Send PSend23885 = new_Send((Optr)PSend23886, SMB_ifEmpty_, 1, (Optr)PBlock23888);
    Assign PAssign23884 = new_Assign((Optr)VAR_args_0_0, (Optr)PSend23885);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23892 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)VAR_args_0_0, (Optr)false_Const);
    Array PThreadedCode23883 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23884, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_23887, (Optr)&t_send1, (Optr)PSend23886, (Optr)&t_push_closure, (Optr)PBlock23888, (Optr)&t_send1, (Optr)PSend23885, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend23892, (Optr)&t_method_return);
    Block PBlock23881 = new_Block_with(PArray23882, empty_Array, PThreadedCode23883, 2, PAssign23884, PSend23892);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23893 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23881);
    Array PThreadedCode23880 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23881, (Optr)&t_send1, (Optr)PSend23893, (Optr)&t_method_return);
    Method PMethod23878 = new_Method_with(empty_Array, PArray23879, empty_Array, PThreadedCode23880, 1, PSend23893);
    
    MethodClosure MC_SMB_getFields = new_MethodClosure((Method)PMethod23878, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_getFields, MC_SMB_getFields);
}


static void init_SMB_isHeadRequest() {
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23896 = new_Send((Optr)self, SMB_method, 0);
    String string_23897 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23897_Const = new_Constant((Optr)string_23897);
    // =. 
    Send PSend23898 = new_Send((Optr)PSend23896, SMB__equals_, 1, (Optr)string_23897_Const);
    Array PThreadedCode23895 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23896, (Optr)&t_push1, (Optr)string_23897, (Optr)&t_send1, (Optr)PSend23898, (Optr)&t_method_return);
    Method PMethod23894 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23895, 1, PSend23898);
    
    MethodClosure MC_SMB_isHeadRequest = new_MethodClosure((Method)PMethod23894, WebClient_Core_WebRequest_Class);
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
    Array PArray23900 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray23901 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23904 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign23906 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend23907 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend23911 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ascii, 0);
    Array PThreadedCode23910 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23911, (Optr)&t_block_return);
    Block PBlock23909 = new_Block_with(empty_Array, empty_Array, PThreadedCode23910, 1, PSend23911);
    // ifTrue:. 
    Send PSend23908 = new_Send((Optr)PSend23907, SMB_ifTrue_, 1, (Optr)PBlock23909);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23914 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend23913 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend23914);
    Assign PAssign23912 = new_Assign((Optr)slot_WebClient_Core_WebRequest_request, (Optr)PSend23913);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_23917 = new_String(L" ");
    Constant string_23917_Const = new_Constant((Optr)string_23917);
    // findTokens:. 
    Send PSend23916 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_findTokens_, 1, (Optr)string_23917_Const);
    Assign PAssign23915 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend23916);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23918 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend23919 = new_Send((Optr)PSend23918, SMB__lt_, 1, (Optr)int_2_Const);
    String string_23923 = new_String(L"Invalid HTTP request: ");
    Constant string_23923_Const = new_Constant((Optr)string_23923);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23924 = new_Send((Optr)string_23923_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebRequest_request);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23925 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23924);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23926 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23925);
    Array PThreadedCode23922 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23923, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_send1, (Optr)PSend23924, (Optr)&t_send1, (Optr)PSend23925, (Optr)&t_send1, (Optr)PSend23926, (Optr)&t_block_return);
    Block PBlock23921 = new_Block_with(empty_Array, empty_Array, PThreadedCode23922, 1, PSend23926);
    // ifTrue:. 
    Send PSend23920 = new_Send((Optr)PSend23919, SMB_ifTrue_, 1, (Optr)PBlock23921);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23928 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign23927 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)PSend23928);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend23930 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Assign PAssign23929 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)PSend23930);
    // size. 
    Send PSend23931 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23932 = new_Send((Optr)PSend23931, SMB__gt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_third = new_Symbol(L"third");
    // third. 
    Send PSend23937 = new_Send((Optr)VAR_tokens_0_1, SMB_third, 0);
    Assign PAssign23936 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend23937);
    Array PThreadedCode23935 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23936, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23937, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23934 = new_Block_with(empty_Array, empty_Array, PThreadedCode23935, 1, PAssign23936);
    String string_23941 = new_String(L"HTTP/1.0");
    Constant string_23941_Const = new_Constant((Optr)string_23941);
    Assign PAssign23940 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23941_Const);
    Array PThreadedCode23939 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign23940, (Optr)&t_push1, (Optr)string_23941, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23938 = new_Block_with(empty_Array, empty_Array, PThreadedCode23939, 1, PAssign23940);
    // ifTrue:ifFalse:. 
    Send PSend23933 = new_Send((Optr)PSend23932, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23934, (Optr)PBlock23938);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend23943 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign23942 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23943);
    Array PThreadedCode23905 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push1, (Optr)PAssign23906, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23907, (Optr)&t_send_ifTrue_, (Optr)PSend23908, (Optr)PBlock23909, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23912, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23914, (Optr)&t_send1, (Optr)PSend23913, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23915, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push1, (Optr)string_23917, (Optr)&t_send1, (Optr)PSend23916, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23918, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23919, (Optr)&t_send_ifTrue_, (Optr)PSend23920, (Optr)PBlock23921, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23927, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23928, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23929, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23930, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23931, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23932, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23933, (Optr)PBlock23934, (Optr)PBlock23938, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23942, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23943, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23903 = new_Block_with(PArray23904, empty_Array, PThreadedCode23905, 10, PAssign23906, PSend23908, PAssign23912, PAssign23915, PSend23920, PAssign23927, PAssign23929, PSend23933, PAssign23942, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23944 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23903);
    Array PThreadedCode23902 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23903, (Optr)&t_send1, (Optr)PSend23944, (Optr)&t_method_return);
    Method PMethod23899 = new_Method_with(PArray23900, PArray23901, empty_Array, PThreadedCode23902, 1, PSend23944);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod23899, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_send405Response_content_() {
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray23946 = new_Array_with(2, (Optr)VAR_allowed_0_0, (Optr)VAR_body_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray23947 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23951 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23952 = new_String(L"HTTP/1.1");
    Constant string_23952_Const = new_Constant((Optr)string_23952);
    SmallInt int_405 = new_SmallInt(405);
    Constant int_405_Const = new_Constant((Optr)int_405);
    // protocol:code:. 
    Send PSend23950 = new_Send((Optr)PSend23951, SMB_protocol_code_, 2, (Optr)string_23952_Const, (Optr)int_405_Const);
    Assign PAssign23949 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend23950);
    String string_23953 = new_String(L"Content-Type");
    String string_23954 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23953_Const = new_Constant((Optr)string_23953);
    Constant string_23954_Const = new_Constant((Optr)string_23954);
    // headerAt:put:. 
    Send PSend23955 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23953_Const, (Optr)string_23954_Const);
    String string_23956 = new_String(L"allow");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23958 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_m_2_0 = new_Variable_named(L"m", 2);
    Array PArray23961 = new_Array_with(1, (Optr)VAR_m_2_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23963 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)VAR_m_2_0);
    Array PThreadedCode23962 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_m_2_0, (Optr)&t_send1, (Optr)PSend23963, (Optr)&t_method_return);
    Block PBlock23960 = new_Block_with(PArray23961, empty_Array, PThreadedCode23962, 1, PSend23963);
    Character char_23966 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23966_Const = new_Constant((Optr)char_23966);
    // nextPut:. 
    Send PSend23967 = new_Send((Optr)VAR_s_1_0, SMB_nextPut_, 1, (Optr)char_23966_Const);
    Array PThreadedCode23965 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)char_23966, (Optr)&t_send1, (Optr)PSend23967, (Optr)&t_block_return);
    Block PBlock23964 = new_Block_with(empty_Array, empty_Array, PThreadedCode23965, 1, PSend23967);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend23968 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock23960, (Optr)PBlock23964);
    Array PThreadedCode23959 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock23960, (Optr)&t_push_closure, (Optr)PBlock23964, (Optr)&t_send2, (Optr)PSend23968, (Optr)&t_method_return);
    Block PBlock23957 = new_Block_with(PArray23958, empty_Array, PThreadedCode23959, 1, PSend23968);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23969 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23957);
    Constant string_23956_Const = new_Constant((Optr)string_23956);
    // headerAt:put:. 
    Send PSend23970 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23956_Const, (Optr)PSend23969);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23971 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_1);
    Array PThreadedCode23948 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign23949, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23951, (Optr)&t_push1, (Optr)string_23952, (Optr)&t_push1, (Optr)int_405, (Optr)&t_send2, (Optr)PSend23950, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23953, (Optr)&t_push1, (Optr)string_23954, (Optr)&t_send2, (Optr)PSend23955, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23956, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23957, (Optr)&t_send1, (Optr)PSend23969, (Optr)&t_send2, (Optr)PSend23970, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend23971, (Optr)&t_method_return);
    Method PMethod23945 = new_Method_with(PArray23946, PArray23947, empty_Array, PThreadedCode23948, 4, PAssign23949, PSend23955, PSend23970, PSend23971);
    
    MethodClosure MC_SMB_send405Response_content_ = new_MethodClosure((Method)PMethod23945, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_content_, MC_SMB_send405Response_content_);
}


static void init_SMB_send301Response_() {
    Symbol SMB_send301Response_ = new_Symbol(L"send301Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23973 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23976 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23977 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23975 = new_Block_with(PArray23976, empty_Array, PThreadedCode23977, 0);
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    // send301Response:do:. 
    Send PSend23978 = new_Send((Optr)self, SMB_send301Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23975);
    Array PThreadedCode23974 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23975, (Optr)&t_send2, (Optr)PSend23978, (Optr)&t_method_return);
    Method PMethod23972 = new_Method_with(PArray23973, empty_Array, empty_Array, PThreadedCode23974, 1, PSend23978);
    
    MethodClosure MC_SMB_send301Response_ = new_MethodClosure((Method)PMethod23972, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_, MC_SMB_send301Response_);
}


static void init_SMB_stream200Response_size_type_do_() {
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23980 = new_Array_with(4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23981 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23985 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23986 = new_String(L"HTTP/1.1");
    Constant string_23986_Const = new_Constant((Optr)string_23986);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23984 = new_Send((Optr)PSend23985, SMB_protocol_code_, 2, (Optr)string_23986_Const, (Optr)int_200_Const);
    Assign PAssign23983 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23984);
    String string_23987 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23987_Const = new_Constant((Optr)string_23987);
    // headerAt:put:. 
    Send PSend23988 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23987_Const, (Optr)VAR_contentType_0_2);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23989 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend23990 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    Array PThreadedCode23982 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23983, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23985, (Optr)&t_push1, (Optr)string_23986, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23984, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23987, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23988, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23989, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_send3, (Optr)PSend23990, (Optr)&t_method_return);
    Method PMethod23979 = new_Method_with(PArray23980, PArray23981, empty_Array, PThreadedCode23982, 4, PAssign23983, PSend23988, PSend23989, PSend23990);
    
    MethodClosure MC_SMB_stream200Response_size_type_do_ = new_MethodClosure((Method)PMethod23979, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_do_, MC_SMB_stream200Response_size_type_do_);
}


static void init_SMB_sendXmlResponse_() {
    Symbol SMB_sendXmlResponse_ = new_Symbol(L"sendXmlResponse:");
    Variable VAR_xmlString_0_0 = new_Variable_named(L"xmlString", 0);
    Array PArray23992 = new_Array_with(1, (Optr)VAR_xmlString_0_0);
    String string_23994 = new_String(L"application/xml");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23994_Const = new_Constant((Optr)string_23994);
    // send200Response:contentType:. 
    Send PSend23995 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_xmlString_0_0, (Optr)string_23994_Const);
    Array PThreadedCode23993 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_xmlString_0_0, (Optr)&t_push1, (Optr)string_23994, (Optr)&t_send2, (Optr)PSend23995, (Optr)&t_method_return);
    Method PMethod23991 = new_Method_with(PArray23992, empty_Array, empty_Array, PThreadedCode23993, 1, PSend23995);
    
    MethodClosure MC_SMB_sendXmlResponse_ = new_MethodClosure((Method)PMethod23991, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendXmlResponse_, MC_SMB_sendXmlResponse_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper23998 = new_Super(SMB_initialize, 0);
    String string_24000 = new_String(L"GET");
    Constant string_24000_Const = new_Constant((Optr)string_24000);
    Assign PAssign23999 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)string_24000_Const);
    String string_24002 = new_String(L"HTTP/1.1");
    Constant string_24002_Const = new_Constant((Optr)string_24002);
    Assign PAssign24001 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_24002_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24004 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24003 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24004);
    Array PThreadedCode23997 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper23998, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23999, (Optr)&t_push1, (Optr)string_24000, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24001, (Optr)&t_push1, (Optr)string_24002, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24003, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24004, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23996 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23997, 5, PSuper23998, PAssign23999, PAssign24001, PAssign24003, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23996, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_isGetRequest() {
    Symbol SMB_isGetRequest = new_Symbol(L"isGetRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24007 = new_Send((Optr)self, SMB_method, 0);
    String string_24008 = new_String(L"GET");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24008_Const = new_Constant((Optr)string_24008);
    // =. 
    Send PSend24009 = new_Send((Optr)PSend24007, SMB__equals_, 1, (Optr)string_24008_Const);
    Array PThreadedCode24006 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24007, (Optr)&t_push1, (Optr)string_24008, (Optr)&t_send1, (Optr)PSend24009, (Optr)&t_method_return);
    Method PMethod24005 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24006, 1, PSend24009);
    
    MethodClosure MC_SMB_isGetRequest = new_MethodClosure((Method)PMethod24005, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isGetRequest, MC_SMB_isGetRequest);
}


static void init_SMB_newWebSocketOn_() {
    Symbol SMB_newWebSocketOn_ = new_Symbol(L"newWebSocketOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24011 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24013 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24012 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24013, (Optr)&t_method_return);
    Method PMethod24010 = new_Method_with(PArray24011, empty_Array, empty_Array, PThreadedCode24012, 1, PSend24013);
    
    MethodClosure MC_SMB_newWebSocketOn_ = new_MethodClosure((Method)PMethod24010, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newWebSocketOn_, MC_SMB_newWebSocketOn_);
}


static void init_SMB_send400Response() {
    Symbol SMB_send400Response = new_Symbol(L"send400Response");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray24015 = new_Array_with(1, (Optr)VAR_message_0_0);
    String string_24019 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_24019_Const = new_Constant((Optr)string_24019);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24020 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_24020_Const = new_Constant((Optr)string_24020);
    // ,. 
    Send PSend24018 = new_Send((Optr)string_24019_Const, SMB__append_, 1, (Optr)string_24020_Const);
    Assign PAssign24017 = new_Assign((Optr)VAR_message_0_0, (Optr)PSend24018);
    SmallInt int_400 = new_SmallInt(400);
    String string_24021 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_24021_Const = new_Constant((Optr)string_24021);
    // sendResponseCode:content:type:close:. 
    Send PSend24022 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_400_Const, (Optr)VAR_message_0_0, (Optr)string_24021_Const, (Optr)true_Const);
    Array PThreadedCode24016 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign24017, (Optr)&t_push1, (Optr)string_24019, (Optr)&t_push1, (Optr)string_24020, (Optr)&t_send1, (Optr)PSend24018, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push1, (Optr)string_24021, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend24022, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24014 = new_Method_with(empty_Array, PArray24015, empty_Array, PThreadedCode24016, 3, PAssign24017, PSend24022, self);
    
    MethodClosure MC_SMB_send400Response = new_MethodClosure((Method)PMethod24014, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send400Response, MC_SMB_send400Response);
}


static void init_SMB_newResponse() {
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24026 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_request_ = new_Symbol(L"request:");
    // request:. 
    Send PSend24028 = new_Send((Optr)VAR__receiver__1_0, SMB_request_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend24029 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode24027 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend24028, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24029, (Optr)&t_method_return);
    Block PBlock24025 = new_Block_with(PArray24026, empty_Array, PThreadedCode24027, 2, PSend24028, PSend24029);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24030 = new_Send((Optr)PWebResponse_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24031 = new_Send((Optr)PBlock24025, SMB_value_, 1, (Optr)PSend24030);
    Array PThreadedCode24024 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock24025, (Optr)&t_push_class_reference, (Optr)PWebResponse_classReference, (Optr)&t_send0, (Optr)PSend24030, (Optr)&t_send1, (Optr)PSend24031, (Optr)&t_method_return);
    Method PMethod24023 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24024, 1, PSend24031);
    
    MethodClosure MC_SMB_newResponse = new_MethodClosure((Method)PMethod24023, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newResponse, MC_SMB_newResponse);
}


static void init_SMB_isOptionsRequest() {
    Symbol SMB_isOptionsRequest = new_Symbol(L"isOptionsRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24034 = new_Send((Optr)self, SMB_method, 0);
    String string_24035 = new_String(L"OPTIONS");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24035_Const = new_Constant((Optr)string_24035);
    // =. 
    Send PSend24036 = new_Send((Optr)PSend24034, SMB__equals_, 1, (Optr)string_24035_Const);
    Array PThreadedCode24033 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24034, (Optr)&t_push1, (Optr)string_24035, (Optr)&t_send1, (Optr)PSend24036, (Optr)&t_method_return);
    Method PMethod24032 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24033, 1, PSend24036);
    
    MethodClosure MC_SMB_isOptionsRequest = new_MethodClosure((Method)PMethod24032, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isOptionsRequest, MC_SMB_isOptionsRequest);
}


static void init_SMB_send404Response_() {
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Array PArray24038 = new_Array_with(1, (Optr)VAR_body_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24041 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24043 = new_String(L"Content-Type");
    String string_24044 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24043_Const = new_Constant((Optr)string_24043);
    Constant string_24044_Const = new_Constant((Optr)string_24044);
    // headerAt:put:. 
    Send PSend24045 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24043_Const, (Optr)string_24044_Const);
    Array PThreadedCode24042 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24043, (Optr)&t_push1, (Optr)string_24044, (Optr)&t_send2, (Optr)PSend24045, (Optr)&t_method_return);
    Block PBlock24040 = new_Block_with(PArray24041, empty_Array, PThreadedCode24042, 1, PSend24045);
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    // send404Response:do:. 
    Send PSend24046 = new_Send((Optr)self, SMB_send404Response_do_, 2, (Optr)VAR_body_0_0, (Optr)PBlock24040);
    Array PThreadedCode24039 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_push_closure, (Optr)PBlock24040, (Optr)&t_send2, (Optr)PSend24046, (Optr)&t_method_return);
    Method PMethod24037 = new_Method_with(PArray24038, empty_Array, empty_Array, PThreadedCode24039, 1, PSend24046);
    
    MethodClosure MC_SMB_send404Response_ = new_MethodClosure((Method)PMethod24037, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_, MC_SMB_send404Response_);
}


static void init_SMB_fields() {
    Symbol SMB_fields = new_Symbol(L"fields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray24048 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24051 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24050 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend24051);
    Symbol SMB_getFields = new_Symbol(L"getFields");
    // getFields. 
    Send PSend24052 = new_Send((Optr)self, SMB_getFields, 0);
    Variable VAR_a_1_0 = new_Variable_named(L"a", 1);
    Array PArray24054 = new_Array_with(1, (Optr)VAR_a_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24056 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode24055 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend24056, (Optr)&t_method_return);
    Block PBlock24053 = new_Block_with(PArray24054, empty_Array, PThreadedCode24055, 1, PSend24056);
    Symbol SMB_associationsDo_ = new_Symbol(L"associationsDo:");
    // associationsDo:. 
    Send PSend24057 = new_Send((Optr)PSend24052, SMB_associationsDo_, 1, (Optr)PBlock24053);
    Symbol SMB_postFields = new_Symbol(L"postFields");
    // postFields. 
    Send PSend24058 = new_Send((Optr)self, SMB_postFields, 0);
    Array PArray24060 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend24062 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode24061 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend24062, (Optr)&t_method_return);
    Block PBlock24059 = new_Block_with(PArray24060, empty_Array, PThreadedCode24061, 1, PSend24062);
    // associationsDo:. 
    Send PSend24063 = new_Send((Optr)PSend24058, SMB_associationsDo_, 1, (Optr)PBlock24059);
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    // multipartFields. 
    Send PSend24064 = new_Send((Optr)self, SMB_multipartFields, 0);
    Array PArray24066 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend24068 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode24067 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend24068, (Optr)&t_method_return);
    Block PBlock24065 = new_Block_with(PArray24066, empty_Array, PThreadedCode24067, 1, PSend24068);
    // associationsDo:. 
    Send PSend24069 = new_Send((Optr)PSend24064, SMB_associationsDo_, 1, (Optr)PBlock24065);
    Array PThreadedCode24049 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign24050, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24051, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24052, (Optr)&t_push_closure, (Optr)PBlock24053, (Optr)&t_send1, (Optr)PSend24057, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24058, (Optr)&t_push_closure, (Optr)PBlock24059, (Optr)&t_send1, (Optr)PSend24063, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24064, (Optr)&t_push_closure, (Optr)PBlock24065, (Optr)&t_send1, (Optr)PSend24069, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod24047 = new_Method_with(empty_Array, PArray24048, empty_Array, PThreadedCode24049, 5, PAssign24050, PSend24057, PSend24063, PSend24069, VAR_fields_0_0);
    
    MethodClosure MC_SMB_fields = new_MethodClosure((Method)PMethod24047, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_fields, MC_SMB_fields);
}


static void init_SMB_send404Response() {
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    String string_24072 = new_String(L"<html><head><title>404 Not Found</title></head><body><h1>404 Not Found</h1><p>The requested URL ");
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24073 = new_Send((Optr)self, SMB_rawUrl, 0);
    Constant string_24072_Const = new_Constant((Optr)string_24072);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24074 = new_Send((Optr)string_24072_Const, SMB__append_, 1, (Optr)PSend24073);
    String string_24075 = new_String(L" was not found on this server.</p></body></html>");
    Constant string_24075_Const = new_Constant((Optr)string_24075);
    // ,. 
    Send PSend24076 = new_Send((Optr)PSend24074, SMB__append_, 1, (Optr)string_24075_Const);
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    // send404Response:. 
    Send PSend24077 = new_Send((Optr)self, SMB_send404Response_, 1, (Optr)PSend24076);
    Array PThreadedCode24071 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24072, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24073, (Optr)&t_send1, (Optr)PSend24074, (Optr)&t_push1, (Optr)string_24075, (Optr)&t_send1, (Optr)PSend24076, (Optr)&t_send1, (Optr)PSend24077, (Optr)&t_method_return);
    Method PMethod24070 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24071, 1, PSend24077);
    
    MethodClosure MC_SMB_send404Response = new_MethodClosure((Method)PMethod24070, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response, MC_SMB_send404Response);
}


static void init_SMB_isDeleteRequest() {
    Symbol SMB_isDeleteRequest = new_Symbol(L"isDeleteRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24080 = new_Send((Optr)self, SMB_method, 0);
    String string_24081 = new_String(L"DELETE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24081_Const = new_Constant((Optr)string_24081);
    // =. 
    Send PSend24082 = new_Send((Optr)PSend24080, SMB__equals_, 1, (Optr)string_24081_Const);
    Array PThreadedCode24079 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24080, (Optr)&t_push1, (Optr)string_24081, (Optr)&t_send1, (Optr)PSend24082, (Optr)&t_method_return);
    Method PMethod24078 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24079, 1, PSend24082);
    
    MethodClosure MC_SMB_isDeleteRequest = new_MethodClosure((Method)PMethod24078, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isDeleteRequest, MC_SMB_isDeleteRequest);
}


static void init_SMB_send301Response_do_() {
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24084 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_301 = new_SmallInt(301);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_301_Const = new_Constant((Optr)int_301);
    // send3xxResponse:code:do:. 
    Send PSend24086 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_301_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode24085 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend24086, (Optr)&t_method_return);
    Method PMethod24083 = new_Method_with(PArray24084, empty_Array, empty_Array, PThreadedCode24085, 1, PSend24086);
    
    MethodClosure MC_SMB_send301Response_do_ = new_MethodClosure((Method)PMethod24083, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_do_, MC_SMB_send301Response_do_);
}


static void init_SMB_send200Response_contentType_() {
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Array PArray24088 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24091 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24092 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24090 = new_Block_with(PArray24091, empty_Array, PThreadedCode24092, 0);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    // send200Response:contentType:do:. 
    Send PSend24093 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)PBlock24090);
    Array PThreadedCode24089 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_push_closure, (Optr)PBlock24090, (Optr)&t_send3, (Optr)PSend24093, (Optr)&t_method_return);
    Method PMethod24087 = new_Method_with(PArray24088, empty_Array, empty_Array, PThreadedCode24089, 1, PSend24093);
    
    MethodClosure MC_SMB_send200Response_contentType_ = new_MethodClosure((Method)PMethod24087, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_, MC_SMB_send200Response_contentType_);
}


static void init_SMB_multipartFields() {
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray24095 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24098 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24097 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend24098);
    Variable VAR_hdrs_1_0 = new_Variable_named(L"hdrs", 1);
    Variable VAR_params_1_1 = new_Variable_named(L"params", 1);
    Variable VAR_cntnt_1_2 = new_Variable_named(L"cntnt", 1);
    Array PArray24100 = new_Array_with(3, (Optr)VAR_hdrs_1_0, (Optr)VAR_params_1_1, (Optr)VAR_cntnt_1_2);
    String string_24102 = new_String(L"name");
    Variable VAR_fieldName_2_0 = new_Variable_named(L"fieldName", 2);
    Array PArray24104 = new_Array_with(1, (Optr)VAR_fieldName_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24106 = new_Send((Optr)VAR_fields_0_0, SMB_at_put_, 2, (Optr)VAR_fieldName_2_0, (Optr)VAR_cntnt_1_2);
    Array PThreadedCode24105 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_fieldName_2_0, (Optr)&t_push_variable, (Optr)VAR_cntnt_1_2, (Optr)&t_send2, (Optr)PSend24106, (Optr)&t_method_return);
    Block PBlock24103 = new_Block_with(PArray24104, empty_Array, PThreadedCode24105, 1, PSend24106);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Constant string_24102_Const = new_Constant((Optr)string_24102);
    // at:ifPresent:. 
    Send PSend24107 = new_Send((Optr)VAR_params_1_1, SMB_at_ifPresent_, 2, (Optr)string_24102_Const, (Optr)PBlock24103);
    Array PThreadedCode24101 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_params_1_1, (Optr)&t_push1, (Optr)string_24102, (Optr)&t_push_closure, (Optr)PBlock24103, (Optr)&t_send2, (Optr)PSend24107, (Optr)&t_method_return);
    Block PBlock24099 = new_Block_with(PArray24100, empty_Array, PThreadedCode24101, 1, PSend24107);
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    // multipartFieldsDo:. 
    Send PSend24108 = new_Send((Optr)self, SMB_multipartFieldsDo_, 1, (Optr)PBlock24099);
    Array PThreadedCode24096 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24097, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24098, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock24099, (Optr)&t_send1, (Optr)PSend24108, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod24094 = new_Method_with(empty_Array, PArray24095, empty_Array, PThreadedCode24096, 3, PAssign24097, PSend24108, VAR_fields_0_0);
    
    MethodClosure MC_SMB_multipartFields = new_MethodClosure((Method)PMethod24094, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFields, MC_SMB_multipartFields);
}


static void init_SMB_sendResponse_chunked_do_() {
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Variable VAR_hdrBlock_0_2 = new_Variable_named(L"hdrBlock", 0);
    Array PArray24110 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)VAR_hdrBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray24111 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24115 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24116 = new_String(L"HTTP/1.1");
    Constant string_24116_Const = new_Constant((Optr)string_24116);
    // protocol:code:. 
    Send PSend24114 = new_Send((Optr)PSend24115, SMB_protocol_code_, 2, (Optr)string_24116_Const, (Optr)VAR_code_0_0);
    Assign PAssign24113 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24114);
    String string_24117 = new_String(L"Transfer-Encoding");
    String string_24118 = new_String(L"chunked");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24117_Const = new_Constant((Optr)string_24117);
    Constant string_24118_Const = new_Constant((Optr)string_24118);
    // headerAt:put:. 
    Send PSend24119 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24117_Const, (Optr)string_24118_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24120 = new_Send((Optr)VAR_hdrBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray24122 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    // stream:. 
    Send PSend24124 = new_Send((Optr)VAR_resp_0_3, SMB_stream_, 1, (Optr)VAR_aStream_1_0);
    // value:. 
    Send PSend24125 = new_Send((Optr)VAR_chunkBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray24127 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_24129 = new_String(L"0");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_24129_Const = new_Constant((Optr)string_24129);
    // nextPutAll:. 
    Send PSend24130 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)string_24129_Const);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24131 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    // crlf. 
    Send PSend24132 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24133 = new_Send((Optr)VAR__receiver__2_0, SMB_flush, 0);
    Array PThreadedCode24128 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_24129, (Optr)&t_send1, (Optr)PSend24130, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend24131, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend24132, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend24133, (Optr)&t_method_return);
    Block PBlock24126 = new_Block_with(PArray24127, empty_Array, PThreadedCode24128, 4, PSend24130, PSend24131, PSend24132, PSend24133);
    // value:. 
    Send PSend24134 = new_Send((Optr)PBlock24126, SMB_value_, 1, (Optr)VAR_aStream_1_0);
    Array PThreadedCode24123 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend24124, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24125, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24126, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend24134, (Optr)&t_method_return);
    Block PBlock24121 = new_Block_with(PArray24122, empty_Array, PThreadedCode24123, 3, PSend24124, PSend24125, PSend24134);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend24135 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_3, (Optr)PBlock24121);
    Array PThreadedCode24112 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24113, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24115, (Optr)&t_push1, (Optr)string_24116, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend24114, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24117, (Optr)&t_push1, (Optr)string_24118, (Optr)&t_send2, (Optr)PSend24119, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24120, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_closure, (Optr)PBlock24121, (Optr)&t_send2, (Optr)PSend24135, (Optr)&t_method_return);
    Method PMethod24109 = new_Method_with(PArray24110, PArray24111, empty_Array, PThreadedCode24112, 4, PAssign24113, PSend24119, PSend24120, PSend24135);
    
    MethodClosure MC_SMB_sendResponse_chunked_do_ = new_MethodClosure((Method)PMethod24109, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_do_, MC_SMB_sendResponse_chunked_do_);
}


static void init_SMB_sendResponse_contentStream_size_() {
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_2 = new_Variable_named(L"streamSize", 0);
    Array PArray24137 = new_Array_with(3, (Optr)VAR_resp_0_0, (Optr)VAR_aStream_0_1, (Optr)VAR_streamSize_0_2);
    String string_24141 = new_String(L"Connection");
    String string_24142 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24141_Const = new_Constant((Optr)string_24141);
    Constant string_24142_Const = new_Constant((Optr)string_24142);
    // headerAt:put:. 
    Send PSend24143 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_24141_Const, (Optr)string_24142_Const);
    Array PThreadedCode24140 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24141, (Optr)&t_push1, (Optr)string_24142, (Optr)&t_send2, (Optr)PSend24143, (Optr)&t_block_return);
    Block PBlock24139 = new_Block_with(empty_Array, empty_Array, PThreadedCode24140, 1, PSend24143);
    String string_24146 = new_String(L"Content-Length");
    Constant string_24146_Const = new_Constant((Optr)string_24146);
    // headerAt:put:. 
    Send PSend24147 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24146_Const, (Optr)VAR_streamSize_0_2);
    Array PThreadedCode24145 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24146, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_send2, (Optr)PSend24147, (Optr)&t_block_return);
    Block PBlock24144 = new_Block_with(empty_Array, empty_Array, PThreadedCode24145, 1, PSend24147);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend24148 = new_Send((Optr)VAR_streamSize_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock24139, (Optr)PBlock24144);
    Variable VAR_sockStream_1_0 = new_Variable_named(L"sockStream", 1);
    Array PArray24150 = new_Array_with(1, (Optr)VAR_sockStream_1_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend24152 = new_Send((Optr)VAR_resp_0_0, SMB_streamFrom_to_size_progress_, 4, (Optr)VAR_aStream_0_1, (Optr)VAR_sockStream_1_0, (Optr)VAR_streamSize_0_2, (Optr)nil_Const);
    Array PThreadedCode24151 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_variable, (Optr)VAR_sockStream_1_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend24152, (Optr)&t_method_return);
    Block PBlock24149 = new_Block_with(PArray24150, empty_Array, PThreadedCode24151, 1, PSend24152);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend24153 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock24149);
    Array PThreadedCode24138 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_closure, (Optr)PBlock24139, (Optr)&t_push_closure, (Optr)PBlock24144, (Optr)&t_send2, (Optr)PSend24148, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock24149, (Optr)&t_send2, (Optr)PSend24153, (Optr)&t_method_return);
    Method PMethod24136 = new_Method_with(PArray24137, empty_Array, empty_Array, PThreadedCode24138, 2, PSend24148, PSend24153);
    
    MethodClosure MC_SMB_sendResponse_contentStream_size_ = new_MethodClosure((Method)PMethod24136, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentStream_size_, MC_SMB_sendResponse_contentStream_size_);
}


static void init_SMB_server_() {
    Symbol SMB_server_ = new_Symbol(L"server:");
    Variable VAR_aWebServer_0_0 = new_Variable_named(L"aWebServer", 0);
    Array PArray24155 = new_Array_with(1, (Optr)VAR_aWebServer_0_0);
    Assign PAssign24157 = new_Assign((Optr)slot_WebClient_Core_WebRequest_server, (Optr)VAR_aWebServer_0_0);
    Array PThreadedCode24156 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24157, (Optr)&t_push_variable, (Optr)VAR_aWebServer_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24154 = new_Method_with(PArray24155, empty_Array, empty_Array, PThreadedCode24156, 2, PAssign24157, self);
    
    MethodClosure MC_SMB_server_ = new_MethodClosure((Method)PMethod24154, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server_, MC_SMB_server_);
}


static void init_SMB_sendResponseCode_content_type_do_() {
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray24159 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray24160 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24164 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24165 = new_String(L"HTTP/1.1");
    Constant string_24165_Const = new_Constant((Optr)string_24165);
    // protocol:code:. 
    Send PSend24163 = new_Send((Optr)PSend24164, SMB_protocol_code_, 2, (Optr)string_24165_Const, (Optr)VAR_code_0_0);
    Assign PAssign24162 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend24163);
    String string_24168 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24168_Const = new_Constant((Optr)string_24168);
    // headerAt:put:. 
    Send PSend24169 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_24168_Const, (Optr)VAR_contentType_0_2);
    Array PThreadedCode24167 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_24168, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend24169, (Optr)&t_block_return);
    Block PBlock24166 = new_Block_with(empty_Array, empty_Array, PThreadedCode24167, 1, PSend24169);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24170 = new_Send((Optr)VAR_contentType_0_2, SMB_ifNotNil_, 1, (Optr)PBlock24166);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24171 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24172 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_4, (Optr)VAR_aString_0_1);
    Array PThreadedCode24161 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign24162, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24164, (Optr)&t_push1, (Optr)string_24165, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend24163, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24166, (Optr)&t_send1, (Optr)PSend24170, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend24171, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send2, (Optr)PSend24172, (Optr)&t_method_return);
    Method PMethod24158 = new_Method_with(PArray24159, PArray24160, empty_Array, PThreadedCode24161, 4, PAssign24162, PSend24170, PSend24171, PSend24172);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_do_ = new_MethodClosure((Method)PMethod24158, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_do_, MC_SMB_sendResponseCode_content_type_do_);
}


static void init_SMB_send302Response_do_() {
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24174 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_302 = new_SmallInt(302);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_302_Const = new_Constant((Optr)int_302);
    // send3xxResponse:code:do:. 
    Send PSend24176 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_302_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode24175 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend24176, (Optr)&t_method_return);
    Method PMethod24173 = new_Method_with(PArray24174, empty_Array, empty_Array, PThreadedCode24175, 1, PSend24176);
    
    MethodClosure MC_SMB_send302Response_do_ = new_MethodClosure((Method)PMethod24173, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_do_, MC_SMB_send302Response_do_);
}


static void init_SMB_closeIfTransient_after_() {
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24178 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_close_0_2 = new_Variable_named(L"close", 0);
    Array PArray24179 = new_Array_with(1, (Optr)VAR_close_0_2);
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend24183 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend24182 = new_Send((Optr)PSend24183, SMB_not, 0);
    Assign PAssign24181 = new_Assign((Optr)VAR_close_0_2, (Optr)PSend24182);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24187 = new_String(L"Connection");
    String string_24188 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24187_Const = new_Constant((Optr)string_24187);
    Constant string_24188_Const = new_Constant((Optr)string_24188);
    // headerAt:put:. 
    Send PSend24189 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24187_Const, (Optr)string_24188_Const);
    Array PThreadedCode24186 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24187, (Optr)&t_push1, (Optr)string_24188, (Optr)&t_send2, (Optr)PSend24189, (Optr)&t_block_return);
    Block PBlock24185 = new_Block_with(empty_Array, empty_Array, PThreadedCode24186, 1, PSend24189);
    // ifTrue:. 
    Send PSend24184 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock24185);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24190 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24191 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend24195 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode24194 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24195, (Optr)&t_block_return);
    Block PBlock24193 = new_Block_with(empty_Array, empty_Array, PThreadedCode24194, 1, PSend24195);
    // ifTrue:. 
    Send PSend24192 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock24193);
    Array PThreadedCode24180 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign24181, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24183, (Optr)&t_send0, (Optr)PSend24182, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend24184, (Optr)PBlock24185, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend24190, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend24191, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend24192, (Optr)PBlock24193, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24177 = new_Method_with(PArray24178, PArray24179, empty_Array, PThreadedCode24180, 6, PAssign24181, PSend24184, PSend24190, PSend24191, PSend24192, self);
    
    MethodClosure MC_SMB_closeIfTransient_after_ = new_MethodClosure((Method)PMethod24177, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_closeIfTransient_after_, MC_SMB_closeIfTransient_after_);
}


static void init_SMB_send200Response_() {
    Symbol SMB_send200Response_ = new_Symbol(L"send200Response:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24197 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_24199 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_24199_Const = new_Constant((Optr)string_24199);
    // send200Response:contentType:. 
    Send PSend24200 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_aString_0_0, (Optr)string_24199_Const);
    Array PThreadedCode24198 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push1, (Optr)string_24199, (Optr)&t_send2, (Optr)PSend24200, (Optr)&t_method_return);
    Method PMethod24196 = new_Method_with(PArray24197, empty_Array, empty_Array, PThreadedCode24198, 1, PSend24200);
    
    MethodClosure MC_SMB_send200Response_ = new_MethodClosure((Method)PMethod24196, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_, MC_SMB_send200Response_);
}


static void init_SMB_isPutRequest() {
    Symbol SMB_isPutRequest = new_Symbol(L"isPutRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24203 = new_Send((Optr)self, SMB_method, 0);
    String string_24204 = new_String(L"PUT");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24204_Const = new_Constant((Optr)string_24204);
    // =. 
    Send PSend24205 = new_Send((Optr)PSend24203, SMB__equals_, 1, (Optr)string_24204_Const);
    Array PThreadedCode24202 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24203, (Optr)&t_push1, (Optr)string_24204, (Optr)&t_send1, (Optr)PSend24205, (Optr)&t_method_return);
    Method PMethod24201 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24202, 1, PSend24205);
    
    MethodClosure MC_SMB_isPutRequest = new_MethodClosure((Method)PMethod24201, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPutRequest, MC_SMB_isPutRequest);
}


static void init_SMB_send3xxResponse_code_() {
    Symbol SMB_send3xxResponse_code_ = new_Symbol(L"send3xxResponse:code:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Array PArray24207 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24210 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24211 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24209 = new_Block_with(PArray24210, empty_Array, PThreadedCode24211, 0);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    // send3xxResponse:code:do:. 
    Send PSend24212 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)PBlock24209);
    Array PThreadedCode24208 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_push_closure, (Optr)PBlock24209, (Optr)&t_send3, (Optr)PSend24212, (Optr)&t_method_return);
    Method PMethod24206 = new_Method_with(PArray24207, empty_Array, empty_Array, PThreadedCode24208, 1, PSend24212);
    
    MethodClosure MC_SMB_send3xxResponse_code_ = new_MethodClosure((Method)PMethod24206, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_, MC_SMB_send3xxResponse_code_);
}


static void init_SMB_sendResponse_contentBlock_() {
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_contentBlock_0_1 = new_Variable_named(L"contentBlock", 0);
    Array PArray24214 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_contentBlock_0_1);
    String string_24216 = new_String(L"Date");
    Array PThreadedCode24218 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock24217 = new_Block_with(empty_Array, empty_Array, PThreadedCode24218, 1, PWebServer_classReference);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24219 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock24217);
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    // serverDate. 
    Send PSend24220 = new_Send((Optr)PSend24219, SMB_serverDate, 0);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24216_Const = new_Constant((Optr)string_24216);
    // headerAt:put:. 
    Send PSend24221 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24216_Const, (Optr)PSend24220);
    String string_24222 = new_String(L"Server");
    Array PThreadedCode24224 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock24223 = new_Block_with(empty_Array, empty_Array, PThreadedCode24224, 1, PWebServer_classReference);
    // ifNil:. 
    Send PSend24225 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock24223);
    Symbol SMB_serverString = new_Symbol(L"serverString");
    // serverString. 
    Send PSend24226 = new_Send((Optr)PSend24225, SMB_serverString, 0);
    Constant string_24222_Const = new_Constant((Optr)string_24222);
    // headerAt:put:. 
    Send PSend24227 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24222_Const, (Optr)PSend24226);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend24232 = new_Send((Optr)VAR_resp_0_0, SMB_writeOn_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24233 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    // isHeadRequest. 
    Send PSend24234 = new_Send((Optr)self, SMB_isHeadRequest, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24238 = new_Send((Optr)VAR_contentBlock_0_1, SMB_value_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Array PThreadedCode24237 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_contentBlock_0_1, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24238, (Optr)&t_block_return);
    Block PBlock24236 = new_Block_with(empty_Array, empty_Array, PThreadedCode24237, 1, PSend24238);
    // ifFalse:. 
    Send PSend24235 = new_Send((Optr)PSend24234, SMB_ifFalse_, 1, (Optr)PBlock24236);
    Array PThreadedCode24231 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24232, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend24233, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24234, (Optr)&t_send_ifFalse_, (Optr)PSend24235, (Optr)PBlock24236, (Optr)&t_block_return);
    Block PBlock24230 = new_Block_with(empty_Array, empty_Array, PThreadedCode24231, 3, PSend24232, PSend24233, PSend24235);
    Variable VAR_ignore_1_0 = new_Variable_named(L"ignore", 1);
    Array PArray24240 = new_Array_with(1, (Optr)VAR_ignore_1_0);
    Array PThreadedCode24241 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24239 = new_Block_with(PArray24240, empty_Array, PThreadedCode24241, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend24242 = new_Send((Optr)PBlock24230, SMB_on_do_, 2, (Optr)NetworkError_classReference, (Optr)PBlock24239);
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    // logRequest:response:. 
    Send PSend24245 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_logRequest_response_, 2, (Optr)self, (Optr)VAR_resp_0_0);
    Array PThreadedCode24244 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_send2, (Optr)PSend24245, (Optr)&t_block_return);
    Block PBlock24243 = new_Block_with(empty_Array, empty_Array, PThreadedCode24244, 1, PSend24245);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24246 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNotNil_, 1, (Optr)PBlock24243);
    Array PThreadedCode24229 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock24230, (Optr)&t_push_class_reference, (Optr)NetworkError_classReference, (Optr)&t_push_closure, (Optr)PBlock24239, (Optr)&t_send2, (Optr)PSend24242, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24243, (Optr)&t_send1, (Optr)PSend24246, (Optr)&t_block_return);
    Block PBlock24228 = new_Block_with(empty_Array, empty_Array, PThreadedCode24229, 2, PSend24242, PSend24246);
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    // closeIfTransient:after:. 
    Send PSend24247 = new_Send((Optr)self, SMB_closeIfTransient_after_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock24228);
    Array PThreadedCode24215 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24216, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24217, (Optr)&t_send1, (Optr)PSend24219, (Optr)&t_send0, (Optr)PSend24220, (Optr)&t_send2, (Optr)PSend24221, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24222, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24223, (Optr)&t_send1, (Optr)PSend24225, (Optr)&t_send0, (Optr)PSend24226, (Optr)&t_send2, (Optr)PSend24227, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock24228, (Optr)&t_send2, (Optr)PSend24247, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24213 = new_Method_with(PArray24214, empty_Array, empty_Array, PThreadedCode24215, 4, PSend24221, PSend24227, PSend24247, self);
    
    MethodClosure MC_SMB_sendResponse_contentBlock_ = new_MethodClosure((Method)PMethod24213, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentBlock_, MC_SMB_sendResponse_contentBlock_);
}


static void init_SMB_server() {
    Symbol SMB_server = new_Symbol(L"server");
    Array PThreadedCode24249 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_method_return);
    Method PMethod24248 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24249, 1, slot_WebClient_Core_WebRequest_server);
    
    MethodClosure MC_SMB_server = new_MethodClosure((Method)PMethod24248, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server, MC_SMB_server);
}


static void init_SMB_stream200Response_size_() {
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Array PArray24251 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    String string_24253 = new_String(L"application/octet-stream");
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Constant string_24253_Const = new_Constant((Optr)string_24253);
    // stream200Response:size:type:. 
    Send PSend24254 = new_Send((Optr)self, SMB_stream200Response_size_type_, 3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)string_24253_Const);
    Array PThreadedCode24252 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push1, (Optr)string_24253, (Optr)&t_send3, (Optr)PSend24254, (Optr)&t_method_return);
    Method PMethod24250 = new_Method_with(PArray24251, empty_Array, empty_Array, PThreadedCode24252, 1, PSend24254);
    
    MethodClosure MC_SMB_stream200Response_size_ = new_MethodClosure((Method)PMethod24250, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_, MC_SMB_stream200Response_size_);
}


static void init_SMB_send302Response_() {
    Symbol SMB_send302Response_ = new_Symbol(L"send302Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray24256 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24259 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24260 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24258 = new_Block_with(PArray24259, empty_Array, PThreadedCode24260, 0);
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    // send302Response:do:. 
    Send PSend24261 = new_Send((Optr)self, SMB_send302Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock24258);
    Array PThreadedCode24257 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock24258, (Optr)&t_send2, (Optr)PSend24261, (Optr)&t_method_return);
    Method PMethod24255 = new_Method_with(PArray24256, empty_Array, empty_Array, PThreadedCode24257, 1, PSend24261);
    
    MethodClosure MC_SMB_send302Response_ = new_MethodClosure((Method)PMethod24255, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_, MC_SMB_send302Response_);
}


static void init_SMB_send3xxResponse_code_do_() {
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24263 = new_Array_with(3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Variable VAR_url_0_4 = new_Variable_named(L"url", 0);
    Array PArray24264 = new_Array_with(2, (Optr)VAR_resp_0_3, (Optr)VAR_url_0_4);
    Assign PAssign24266 = new_Assign((Optr)VAR_url_0_4, (Optr)VAR_location_0_0);
    String string_24267 = new_String(L"://");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_24267_Const = new_Constant((Optr)string_24267);
    // findString:. 
    Send PSend24268 = new_Send((Optr)VAR_location_0_0, SMB_findString_, 1, (Optr)string_24267_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24269 = new_Send((Optr)PSend24268, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24273 = new_String(L"host");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_24273_Const = new_Constant((Optr)string_24273);
    // headerAt:. 
    Send PSend24274 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_24273_Const);
    Variable VAR_host_1_0 = new_Variable_named(L"host", 1);
    Array PArray24276 = new_Array_with(1, (Optr)VAR_host_1_0);
    String string_24281 = new_String(L"http://");
    Constant string_24281_Const = new_Constant((Optr)string_24281);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24280 = new_Send((Optr)string_24281_Const, SMB__append_, 1, (Optr)VAR_host_1_0);
    // ,. 
    Send PSend24279 = new_Send((Optr)PSend24280, SMB__append_, 1, (Optr)VAR_location_0_0);
    Assign PAssign24278 = new_Assign((Optr)VAR_url_0_4, (Optr)PSend24279);
    Array PThreadedCode24277 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign24278, (Optr)&t_push1, (Optr)string_24281, (Optr)&t_push_variable, (Optr)VAR_host_1_0, (Optr)&t_send1, (Optr)PSend24280, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_send1, (Optr)PSend24279, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock24275 = new_Block_with(PArray24276, empty_Array, PThreadedCode24277, 1, PAssign24278);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend24282 = new_Send((Optr)PSend24274, SMB_ifNotEmpty_, 1, (Optr)PBlock24275);
    Array PThreadedCode24272 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24273, (Optr)&t_send1, (Optr)PSend24274, (Optr)&t_push_closure, (Optr)PBlock24275, (Optr)&t_send1, (Optr)PSend24282, (Optr)&t_block_return);
    Block PBlock24271 = new_Block_with(empty_Array, empty_Array, PThreadedCode24272, 1, PSend24282);
    // ifFalse:. 
    Send PSend24270 = new_Send((Optr)PSend24269, SMB_ifFalse_, 1, (Optr)PBlock24271);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24285 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24286 = new_String(L"HTTP/1.1");
    Constant string_24286_Const = new_Constant((Optr)string_24286);
    // protocol:code:. 
    Send PSend24284 = new_Send((Optr)PSend24285, SMB_protocol_code_, 2, (Optr)string_24286_Const, (Optr)VAR_statusCode_0_1);
    Assign PAssign24283 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24284);
    String string_24287 = new_String(L"Location");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24287_Const = new_Constant((Optr)string_24287);
    // headerAt:put:. 
    Send PSend24288 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24287_Const, (Optr)VAR_url_0_4);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24289 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    String string_24290 = new_String(L"");
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Constant string_24290_Const = new_Constant((Optr)string_24290);
    // sendResponse:content:. 
    Send PSend24291 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)string_24290_Const);
    Array PThreadedCode24265 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign24266, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)string_24267, (Optr)&t_send1, (Optr)PSend24268, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24269, (Optr)&t_send_ifFalse_, (Optr)PSend24270, (Optr)PBlock24271, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24283, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24285, (Optr)&t_push1, (Optr)string_24286, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_send2, (Optr)PSend24284, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24287, (Optr)&t_push_variable, (Optr)VAR_url_0_4, (Optr)&t_send2, (Optr)PSend24288, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24289, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24290, (Optr)&t_send2, (Optr)PSend24291, (Optr)&t_method_return);
    Method PMethod24262 = new_Method_with(PArray24263, PArray24264, empty_Array, PThreadedCode24265, 6, PAssign24266, PSend24270, PAssign24283, PSend24288, PSend24289, PSend24291);
    
    MethodClosure MC_SMB_send3xxResponse_code_do_ = new_MethodClosure((Method)PMethod24262, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_do_, MC_SMB_send3xxResponse_code_do_);
}


static void init_SMB_isPostRequest() {
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24294 = new_Send((Optr)self, SMB_method, 0);
    String string_24295 = new_String(L"POST");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24295_Const = new_Constant((Optr)string_24295);
    // =. 
    Send PSend24296 = new_Send((Optr)PSend24294, SMB__equals_, 1, (Optr)string_24295_Const);
    Array PThreadedCode24293 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24294, (Optr)&t_push1, (Optr)string_24295, (Optr)&t_send1, (Optr)PSend24296, (Optr)&t_method_return);
    Method PMethod24292 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24293, 1, PSend24296);
    
    MethodClosure MC_SMB_isPostRequest = new_MethodClosure((Method)PMethod24292, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPostRequest, MC_SMB_isPostRequest);
}


static void init_SMB_writeRequestOn_() {
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24298 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24301 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24303 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_method);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24304 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend24305 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_rawUrl);
    // space. 
    Send PSend24306 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend24307 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebMessage_protocol);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24308 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24302 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_send1, (Optr)PSend24303, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24304, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_send1, (Optr)PSend24305, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24306, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_send1, (Optr)PSend24307, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24308, (Optr)&t_method_return);
    Block PBlock24300 = new_Block_with(PArray24301, empty_Array, PThreadedCode24302, 6, PSend24303, PSend24304, PSend24305, PSend24306, PSend24307, PSend24308);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24309 = new_Send((Optr)PBlock24300, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24299 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24300, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24309, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24297 = new_Method_with(PArray24298, empty_Array, empty_Array, PThreadedCode24299, 2, PSend24309, self);
    
    MethodClosure MC_SMB_writeRequestOn_ = new_MethodClosure((Method)PMethod24297, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeRequestOn_, MC_SMB_writeRequestOn_);
}


static void init_SMB_send405Response_() {
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray24311 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_24313 = new_String(L"<html><head><title>405 Method Not Allowed</title></head><body><h1>405 Method Not Allowed</h1><p>The requested method ");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24314 = new_Send((Optr)self, SMB_method, 0);
    Constant string_24313_Const = new_Constant((Optr)string_24313);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24315 = new_Send((Optr)string_24313_Const, SMB__append_, 1, (Optr)PSend24314);
    String string_24316 = new_String(L" is not allowed for the URL");
    Constant string_24316_Const = new_Constant((Optr)string_24316);
    // ,. 
    Send PSend24317 = new_Send((Optr)PSend24315, SMB__append_, 1, (Optr)string_24316_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24318 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend24319 = new_Send((Optr)PSend24317, SMB__append_, 1, (Optr)PSend24318);
    String string_24320 = new_String(L"</p></body></html>");
    Constant string_24320_Const = new_Constant((Optr)string_24320);
    // ,. 
    Send PSend24321 = new_Send((Optr)PSend24319, SMB__append_, 1, (Optr)string_24320_Const);
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    // send405Response:content:. 
    Send PSend24322 = new_Send((Optr)self, SMB_send405Response_content_, 2, (Optr)VAR_allowed_0_0, (Optr)PSend24321);
    Array PThreadedCode24312 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push1, (Optr)string_24313, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24314, (Optr)&t_send1, (Optr)PSend24315, (Optr)&t_push1, (Optr)string_24316, (Optr)&t_send1, (Optr)PSend24317, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24318, (Optr)&t_send1, (Optr)PSend24319, (Optr)&t_push1, (Optr)string_24320, (Optr)&t_send1, (Optr)PSend24321, (Optr)&t_send2, (Optr)PSend24322, (Optr)&t_method_return);
    Method PMethod24310 = new_Method_with(PArray24311, empty_Array, empty_Array, PThreadedCode24312, 1, PSend24322);
    
    MethodClosure MC_SMB_send405Response_ = new_MethodClosure((Method)PMethod24310, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_, MC_SMB_send405Response_);
}


static void init_SMB_send500Response_() {
    Symbol SMB_send500Response_ = new_Symbol(L"send500Response:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Array PArray24324 = new_Array_with(1, (Optr)VAR_errReport_0_0);
    Variable VAR_errLog_0_1 = new_Variable_named(L"errLog", 0);
    Array PArray24325 = new_Array_with(1, (Optr)VAR_errLog_0_1);
    String string_24331 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_24331_Const = new_Constant((Optr)string_24331);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24332 = new_String(L"<h1>Internal Server Error</h1><pre>");
    Constant string_24332_Const = new_Constant((Optr)string_24332);
    // ,. 
    Send PSend24330 = new_Send((Optr)string_24331_Const, SMB__append_, 1, (Optr)string_24332_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend24334 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24335 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend24333 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend24334, (Optr)PSend24335);
    // ,. 
    Send PSend24329 = new_Send((Optr)PSend24330, SMB__append_, 1, (Optr)PSend24333);
    String string_24336 = new_String(L"</pre></body></html>");
    Constant string_24336_Const = new_Constant((Optr)string_24336);
    // ,. 
    Send PSend24328 = new_Send((Optr)PSend24329, SMB__append_, 1, (Optr)string_24336_Const);
    Assign PAssign24327 = new_Assign((Optr)VAR_errLog_0_1, (Optr)PSend24328);
    SmallInt int_500 = new_SmallInt(500);
    String string_24337 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_24337_Const = new_Constant((Optr)string_24337);
    // sendResponseCode:content:type:close:. 
    Send PSend24338 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_1, (Optr)string_24337_Const, (Optr)true_Const);
    Array PThreadedCode24326 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign24327, (Optr)&t_push1, (Optr)string_24331, (Optr)&t_push1, (Optr)string_24332, (Optr)&t_send1, (Optr)PSend24330, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24334, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24335, (Optr)&t_send2, (Optr)PSend24333, (Optr)&t_send1, (Optr)PSend24329, (Optr)&t_push1, (Optr)string_24336, (Optr)&t_send1, (Optr)PSend24328, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_1, (Optr)&t_push1, (Optr)string_24337, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend24338, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24323 = new_Method_with(PArray24324, PArray24325, empty_Array, PThreadedCode24326, 3, PAssign24327, PSend24338, self);
    
    MethodClosure MC_SMB_send500Response_ = new_MethodClosure((Method)PMethod24323, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send500Response_, MC_SMB_send500Response_);
}


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24340 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24342 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)VAR_aString_0_0);
    Array PThreadedCode24341 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24342, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24339 = new_Method_with(PArray24340, empty_Array, empty_Array, PThreadedCode24341, 2, PAssign24342, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod24339, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_requestLine() {
    Symbol SMB_requestLine = new_Symbol(L"requestLine");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24347 = new_Send((Optr)self, SMB_method, 0);
    String string_24348 = new_String(L" ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_24348_Const = new_Constant((Optr)string_24348);
    // ,. 
    Send PSend24349 = new_Send((Optr)PSend24347, SMB__append_, 1, (Optr)string_24348_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24350 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend24351 = new_Send((Optr)PSend24349, SMB__append_, 1, (Optr)PSend24350);
    String string_24352 = new_String(L" ");
    Constant string_24352_Const = new_Constant((Optr)string_24352);
    // ,. 
    Send PSend24353 = new_Send((Optr)PSend24351, SMB__append_, 1, (Optr)string_24352_Const);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend24354 = new_Send((Optr)self, SMB_protocol, 0);
    // ,. 
    Send PSend24355 = new_Send((Optr)PSend24353, SMB__append_, 1, (Optr)PSend24354);
    Array PThreadedCode24346 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24347, (Optr)&t_push1, (Optr)string_24348, (Optr)&t_send1, (Optr)PSend24349, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24350, (Optr)&t_send1, (Optr)PSend24351, (Optr)&t_push1, (Optr)string_24352, (Optr)&t_send1, (Optr)PSend24353, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24354, (Optr)&t_send1, (Optr)PSend24355, (Optr)&t_block_return);
    Block PBlock24345 = new_Block_with(empty_Array, empty_Array, PThreadedCode24346, 1, PSend24355);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24356 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_ifNil_, 1, (Optr)PBlock24345);
    Array PThreadedCode24344 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push_closure, (Optr)PBlock24345, (Optr)&t_send1, (Optr)PSend24356, (Optr)&t_method_return);
    Method PMethod24343 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24344, 1, PSend24356);
    
    MethodClosure MC_SMB_requestLine = new_MethodClosure((Method)PMethod24343, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_requestLine, MC_SMB_requestLine);
}


static void init_SMB_sendResponse_chunked_() {
    Symbol SMB_sendResponse_chunked_ = new_Symbol(L"sendResponse:chunked:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Array PArray24358 = new_Array_with(2, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24361 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24362 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24360 = new_Block_with(PArray24361, empty_Array, PThreadedCode24362, 0);
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    // sendResponse:chunked:do:. 
    Send PSend24363 = new_Send((Optr)self, SMB_sendResponse_chunked_do_, 3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)PBlock24360);
    Array PThreadedCode24359 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_closure, (Optr)PBlock24360, (Optr)&t_send3, (Optr)PSend24363, (Optr)&t_method_return);
    Method PMethod24357 = new_Method_with(PArray24358, empty_Array, empty_Array, PThreadedCode24359, 1, PSend24363);
    
    MethodClosure MC_SMB_sendResponse_chunked_ = new_MethodClosure((Method)PMethod24357, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_, MC_SMB_sendResponse_chunked_);
}


static void init_SMB_multipartFieldsDo_() {
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray24365 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend24367 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend24370 = new_Send((Optr)self, SMB_contentType, 0);
    String string_24371 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_24371_Const = new_Constant((Optr)string_24371);
    // beginsWith:. 
    Send PSend24372 = new_Send((Optr)PSend24370, SMB_beginsWith_, 1, (Optr)string_24371_Const);
    Array PThreadedCode24369 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24370, (Optr)&t_push1, (Optr)string_24371, (Optr)&t_send1, (Optr)PSend24372, (Optr)&t_block_return);
    Block PBlock24368 = new_Block_with(empty_Array, empty_Array, PThreadedCode24369, 1, PSend24372);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24373 = new_Send((Optr)PSend24367, SMB_and_, 1, (Optr)PBlock24368);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend24377 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24378 = new_Send((Optr)PSend24377, SMB_readStream, 0);
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    // multipartBoundary. 
    Send PSend24379 = new_Send((Optr)self, SMB_multipartBoundary, 0);
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    // decodeMultipartForm:boundary:do:. 
    Send PSend24380 = new_Send((Optr)PWebUtils_classReference, SMB_decodeMultipartForm_boundary_do_, 3, (Optr)PSend24378, (Optr)PSend24379, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode24376 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24377, (Optr)&t_send0, (Optr)PSend24378, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24379, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send3, (Optr)PSend24380, (Optr)&t_block_return);
    Block PBlock24375 = new_Block_with(empty_Array, empty_Array, PThreadedCode24376, 1, PSend24380);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24383 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode24382 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24383, (Optr)&t_block_return);
    Block PBlock24381 = new_Block_with(empty_Array, empty_Array, PThreadedCode24382, 1, PSend24383);
    // ifTrue:ifFalse:. 
    Send PSend24374 = new_Send((Optr)PSend24373, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24375, (Optr)PBlock24381);
    Array PThreadedCode24366 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24367, (Optr)&t_push_closure, (Optr)PBlock24368, (Optr)&t_send1, (Optr)PSend24373, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24374, (Optr)PBlock24375, (Optr)PBlock24381, (Optr)&t_method_return);
    Method PMethod24364 = new_Method_with(PArray24365, empty_Array, empty_Array, PThreadedCode24366, 1, PSend24374);
    
    MethodClosure MC_SMB_multipartFieldsDo_ = new_MethodClosure((Method)PMethod24364, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFieldsDo_, MC_SMB_multipartFieldsDo_);
}


static void init_SMB_postFields() {
    Symbol SMB_postFields = new_Symbol(L"postFields");
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend24386 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend24389 = new_Send((Optr)self, SMB_contentType, 0);
    String string_24390 = new_String(L"application/x-www-form-urlencoded");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24390_Const = new_Constant((Optr)string_24390);
    // =. 
    Send PSend24391 = new_Send((Optr)PSend24389, SMB__equals_, 1, (Optr)string_24390_Const);
    Array PThreadedCode24388 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24389, (Optr)&t_push1, (Optr)string_24390, (Optr)&t_send1, (Optr)PSend24391, (Optr)&t_block_return);
    Block PBlock24387 = new_Block_with(empty_Array, empty_Array, PThreadedCode24388, 1, PSend24391);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24392 = new_Send((Optr)PSend24386, SMB_and_, 1, (Optr)PBlock24387);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend24396 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend24397 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)PSend24396, (Optr)true_Const);
    Array PThreadedCode24395 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24396, (Optr)&t_push_true, (Optr)&t_send2, (Optr)PSend24397, (Optr)&t_block_return);
    Block PBlock24394 = new_Block_with(empty_Array, empty_Array, PThreadedCode24395, 1, PSend24397);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24400 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode24399 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24400, (Optr)&t_block_return);
    Block PBlock24398 = new_Block_with(empty_Array, empty_Array, PThreadedCode24399, 1, PSend24400);
    // ifTrue:ifFalse:. 
    Send PSend24393 = new_Send((Optr)PSend24392, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24394, (Optr)PBlock24398);
    Array PThreadedCode24385 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24386, (Optr)&t_push_closure, (Optr)PBlock24387, (Optr)&t_send1, (Optr)PSend24392, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24393, (Optr)PBlock24394, (Optr)PBlock24398, (Optr)&t_method_return);
    Method PMethod24384 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24385, 1, PSend24393);
    
    MethodClosure MC_SMB_postFields = new_MethodClosure((Method)PMethod24384, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_postFields, MC_SMB_postFields);
}


static void init_SMB_stream200Response_() {
    Symbol SMB_stream200Response_ = new_Symbol(L"stream200Response:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24402 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24404 = new_Send((Optr)VAR_aStream_0_0, SMB_size, 0);
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    // stream200Response:size:. 
    Send PSend24405 = new_Send((Optr)self, SMB_stream200Response_size_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend24404);
    Array PThreadedCode24403 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24404, (Optr)&t_send2, (Optr)PSend24405, (Optr)&t_method_return);
    Method PMethod24401 = new_Method_with(PArray24402, empty_Array, empty_Array, PThreadedCode24403, 1, PSend24405);
    
    MethodClosure MC_SMB_stream200Response_ = new_MethodClosure((Method)PMethod24401, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_, MC_SMB_stream200Response_);
}


static void init_SMB_rawUrl_() {
    Symbol SMB_rawUrl_ = new_Symbol(L"rawUrl:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24407 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24409 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)VAR_aString_0_0);
    Array PThreadedCode24408 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24409, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24406 = new_Method_with(PArray24407, empty_Array, empty_Array, PThreadedCode24408, 2, PAssign24409, self);
    
    MethodClosure MC_SMB_rawUrl_ = new_MethodClosure((Method)PMethod24406, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl_, MC_SMB_rawUrl_);
}


static void init_SMB_sendResponse_content_() {
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Array PArray24411 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aString_0_1);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24413 = new_Send((Optr)VAR_aString_0_1, SMB_readStream, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24414 = new_Send((Optr)VAR_aString_0_1, SMB_size, 0);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend24415 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_0, (Optr)PSend24413, (Optr)PSend24414);
    Array PThreadedCode24412 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24413, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24414, (Optr)&t_send3, (Optr)PSend24415, (Optr)&t_method_return);
    Method PMethod24410 = new_Method_with(PArray24411, empty_Array, empty_Array, PThreadedCode24412, 1, PSend24415);
    
    MethodClosure MC_SMB_sendResponse_content_ = new_MethodClosure((Method)PMethod24410, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_content_, MC_SMB_sendResponse_content_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24417 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    // writeRequestOn:. 
    Send PSend24419 = new_Send((Optr)self, SMB_writeRequestOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24420 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24418 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24419, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24420, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24416 = new_Method_with(PArray24417, empty_Array, empty_Array, PThreadedCode24418, 3, PSend24419, PSuper24420, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24416, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_send200Response_contentType_do_() {
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24422 = new_Array_with(3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray24423 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24427 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24428 = new_String(L"HTTP/1.1");
    Constant string_24428_Const = new_Constant((Optr)string_24428);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend24426 = new_Send((Optr)PSend24427, SMB_protocol_code_, 2, (Optr)string_24428_Const, (Optr)int_200_Const);
    Assign PAssign24425 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24426);
    String string_24429 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24429_Const = new_Constant((Optr)string_24429);
    // headerAt:put:. 
    Send PSend24430 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24429_Const, (Optr)VAR_contentType_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24431 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24432 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)VAR_aString_0_0);
    Array PThreadedCode24424 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24425, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24427, (Optr)&t_push1, (Optr)string_24428, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend24426, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24429, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_send2, (Optr)PSend24430, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24431, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend24432, (Optr)&t_method_return);
    Method PMethod24421 = new_Method_with(PArray24422, PArray24423, empty_Array, PThreadedCode24424, 4, PAssign24425, PSend24430, PSend24431, PSend24432);
    
    MethodClosure MC_SMB_send200Response_contentType_do_ = new_MethodClosure((Method)PMethod24421, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_do_, MC_SMB_send200Response_contentType_do_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode24434 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_method_return);
    Method PMethod24433 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24434, 1, slot_WebClient_Core_WebRequest_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod24433, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Character char_2665 = new_Character(L'#');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_2665_Const = new_Constant((Optr)char_2665);
    // copyUpTo:. 
    Send PSend24437 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyUpTo_, 1, (Optr)char_2665_Const);
    Character char_23887 = new_Character(L'?');
    Constant char_23887_Const = new_Constant((Optr)char_23887);
    // copyUpTo:. 
    Send PSend24438 = new_Send((Optr)PSend24437, SMB_copyUpTo_, 1, (Optr)char_23887_Const);
    Array PThreadedCode24436 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend24437, (Optr)&t_push1, (Optr)char_23887, (Optr)&t_send1, (Optr)PSend24438, (Optr)&t_method_return);
    Method PMethod24435 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24436, 1, PSend24438);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24435, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_send404Response_do_() {
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24440 = new_Array_with(2, (Optr)VAR_body_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray24441 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24445 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24446 = new_String(L"HTTP/1.1");
    Constant string_24446_Const = new_Constant((Optr)string_24446);
    SmallInt int_404 = new_SmallInt(404);
    Constant int_404_Const = new_Constant((Optr)int_404);
    // protocol:code:. 
    Send PSend24444 = new_Send((Optr)PSend24445, SMB_protocol_code_, 2, (Optr)string_24446_Const, (Optr)int_404_Const);
    Assign PAssign24443 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend24444);
    String string_24447 = new_String(L"Content-Type");
    String string_24448 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24447_Const = new_Constant((Optr)string_24447);
    Constant string_24448_Const = new_Constant((Optr)string_24448);
    // headerAt:put:. 
    Send PSend24449 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24447_Const, (Optr)string_24448_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24450 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_2);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24451 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_0);
    Array PThreadedCode24442 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24443, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24445, (Optr)&t_push1, (Optr)string_24446, (Optr)&t_push1, (Optr)int_404, (Optr)&t_send2, (Optr)PSend24444, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24447, (Optr)&t_push1, (Optr)string_24448, (Optr)&t_send2, (Optr)PSend24449, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_send1, (Optr)PSend24450, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_send2, (Optr)PSend24451, (Optr)&t_method_return);
    Method PMethod24439 = new_Method_with(PArray24440, PArray24441, empty_Array, PThreadedCode24442, 4, PAssign24443, PSend24449, PSend24450, PSend24451);
    
    MethodClosure MC_SMB_send404Response_do_ = new_MethodClosure((Method)PMethod24439, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_do_, MC_SMB_send404Response_do_);
}


static void init_SMB_stream200Response_size_type_() {
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Array PArray24453 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24456 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24457 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24455 = new_Block_with(PArray24456, empty_Array, PThreadedCode24457, 0);
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    // stream200Response:size:type:do:. 
    Send PSend24458 = new_Send((Optr)self, SMB_stream200Response_size_type_do_, 4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24455);
    Array PThreadedCode24454 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24455, (Optr)&t_send4, (Optr)PSend24458, (Optr)&t_method_return);
    Method PMethod24452 = new_Method_with(PArray24453, empty_Array, empty_Array, PThreadedCode24454, 1, PSend24458);
    
    MethodClosure MC_SMB_stream200Response_size_type_ = new_MethodClosure((Method)PMethod24452, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_, MC_SMB_stream200Response_size_type_);
}


static void init_SMB_isTraceRequest() {
    Symbol SMB_isTraceRequest = new_Symbol(L"isTraceRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24461 = new_Send((Optr)self, SMB_method, 0);
    String string_24462 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24462_Const = new_Constant((Optr)string_24462);
    // =. 
    Send PSend24463 = new_Send((Optr)PSend24461, SMB__equals_, 1, (Optr)string_24462_Const);
    Array PThreadedCode24460 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24461, (Optr)&t_push1, (Optr)string_24462, (Optr)&t_send1, (Optr)PSend24463, (Optr)&t_method_return);
    Method PMethod24459 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24460, 1, PSend24463);
    
    MethodClosure MC_SMB_isTraceRequest = new_MethodClosure((Method)PMethod24459, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isTraceRequest, MC_SMB_isTraceRequest);
}


static void init_SMB_sendOptionsResponse_() {
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray24465 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_24467 = new_String(L"");
    String string_24468 = new_String(L"application/octet-stream");
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24470 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24472 = new_String(L"allow");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray24474 = new_Array_with(1, (Optr)VAR_s_2_0);
    Variable VAR_m_3_0 = new_Variable_named(L"m", 3);
    Array PArray24477 = new_Array_with(1, (Optr)VAR_m_3_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24479 = new_Send((Optr)VAR_s_2_0, SMB_nextPutAll_, 1, (Optr)VAR_m_3_0);
    Array PThreadedCode24478 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_m_3_0, (Optr)&t_send1, (Optr)PSend24479, (Optr)&t_method_return);
    Block PBlock24476 = new_Block_with(PArray24477, empty_Array, PThreadedCode24478, 1, PSend24479);
    Character char_23966 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23966_Const = new_Constant((Optr)char_23966);
    // nextPut:. 
    Send PSend24482 = new_Send((Optr)VAR_s_2_0, SMB_nextPut_, 1, (Optr)char_23966_Const);
    Array PThreadedCode24481 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)char_23966, (Optr)&t_send1, (Optr)PSend24482, (Optr)&t_block_return);
    Block PBlock24480 = new_Block_with(empty_Array, empty_Array, PThreadedCode24481, 1, PSend24482);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend24483 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock24476, (Optr)PBlock24480);
    Array PThreadedCode24475 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock24476, (Optr)&t_push_closure, (Optr)PBlock24480, (Optr)&t_send2, (Optr)PSend24483, (Optr)&t_method_return);
    Block PBlock24473 = new_Block_with(PArray24474, empty_Array, PThreadedCode24475, 1, PSend24483);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend24484 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock24473);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24472_Const = new_Constant((Optr)string_24472);
    // headerAt:put:. 
    Send PSend24485 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24472_Const, (Optr)PSend24484);
    Array PThreadedCode24471 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24472, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock24473, (Optr)&t_send1, (Optr)PSend24484, (Optr)&t_send2, (Optr)PSend24485, (Optr)&t_method_return);
    Block PBlock24469 = new_Block_with(PArray24470, empty_Array, PThreadedCode24471, 1, PSend24485);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Constant string_24467_Const = new_Constant((Optr)string_24467);
    Constant string_24468_Const = new_Constant((Optr)string_24468);
    // send200Response:contentType:do:. 
    Send PSend24486 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)string_24467_Const, (Optr)string_24468_Const, (Optr)PBlock24469);
    Array PThreadedCode24466 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24467, (Optr)&t_push1, (Optr)string_24468, (Optr)&t_push_closure, (Optr)PBlock24469, (Optr)&t_send3, (Optr)PSend24486, (Optr)&t_method_return);
    Method PMethod24464 = new_Method_with(PArray24465, empty_Array, empty_Array, PThreadedCode24466, 1, PSend24486);
    
    MethodClosure MC_SMB_sendOptionsResponse_ = new_MethodClosure((Method)PMethod24464, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendOptionsResponse_, MC_SMB_sendOptionsResponse_);
}


static void init_SMB_rawUrl() {
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    Array PThreadedCode24488 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_method_return);
    Method PMethod24487 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24488, 1, slot_WebClient_Core_WebRequest_rawUrl);
    
    MethodClosure MC_SMB_rawUrl = new_MethodClosure((Method)PMethod24487, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl, MC_SMB_rawUrl);
}


static void init_SMB_sendResponseCode_content_type_close_() {
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBool_0_3 = new_Variable_named(L"aBool", 0);
    Array PArray24490 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBool_0_3);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24493 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24498 = new_String(L"Connection");
    String string_24499 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24498_Const = new_Constant((Optr)string_24498);
    Constant string_24499_Const = new_Constant((Optr)string_24499);
    // headerAt:put:. 
    Send PSend24500 = new_Send((Optr)VAR_hdr_1_0, SMB_headerAt_put_, 2, (Optr)string_24498_Const, (Optr)string_24499_Const);
    Array PThreadedCode24497 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_push1, (Optr)string_24498, (Optr)&t_push1, (Optr)string_24499, (Optr)&t_send2, (Optr)PSend24500, (Optr)&t_block_return);
    Block PBlock24496 = new_Block_with(empty_Array, empty_Array, PThreadedCode24497, 1, PSend24500);
    // ifTrue:. 
    Send PSend24495 = new_Send((Optr)VAR_aBool_0_3, SMB_ifTrue_, 1, (Optr)PBlock24496);
    Array PThreadedCode24494 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBool_0_3, (Optr)&t_send_ifTrue_, (Optr)PSend24495, (Optr)PBlock24496, (Optr)&t_method_return);
    Block PBlock24492 = new_Block_with(PArray24493, empty_Array, PThreadedCode24494, 1, PSend24495);
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    // sendResponseCode:content:type:do:. 
    Send PSend24501 = new_Send((Optr)self, SMB_sendResponseCode_content_type_do_, 4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24492);
    Array PThreadedCode24491 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24492, (Optr)&t_send4, (Optr)PSend24501, (Optr)&t_method_return);
    Method PMethod24489 = new_Method_with(PArray24490, empty_Array, empty_Array, PThreadedCode24491, 1, PSend24501);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_close_ = new_MethodClosure((Method)PMethod24489, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_close_, MC_SMB_sendResponseCode_content_type_close_);
}


static void init_class_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24503 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24505 = new_Send((Optr)self, SMB_new, 0);
    // readFrom:. 
    Send PSend24506 = new_Send((Optr)PSend24505, SMB_readFrom_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24504 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24505, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24506, (Optr)&t_method_return);
    Method PMethod24502 = new_Method_with(PArray24503, empty_Array, empty_Array, PThreadedCode24504, 1, PSend24506);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24502, HEADER(WebClient_Core_WebRequest_Class));
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