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
    Array PArray23981 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23984 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    Character char_23989 = new_Character(L'?');
    Constant char_23989_Const = new_Constant((Optr)char_23989);
    // copyAfter:. 
    Send PSend23988 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyAfter_, 1, (Optr)char_23989_Const);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23992 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23993 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23992);
    Array PThreadedCode23991 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23992, (Optr)&t_send1, (Optr)PSend23993, (Optr)&t_block_return);
    Block PBlock23990 = new_Block_with(empty_Array, empty_Array, PThreadedCode23991, 1, PSend23993);
    // ifEmpty:. 
    Send PSend23987 = new_Send((Optr)PSend23988, SMB_ifEmpty_, 1, (Optr)PBlock23990);
    Assign PAssign23986 = new_Assign((Optr)VAR_args_0_0, (Optr)PSend23987);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23994 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)VAR_args_0_0, (Optr)false_Const);
    Array PThreadedCode23985 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23986, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_23989, (Optr)&t_send1, (Optr)PSend23988, (Optr)&t_push_closure, (Optr)PBlock23990, (Optr)&t_send1, (Optr)PSend23987, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend23994, (Optr)&t_method_return);
    Block PBlock23983 = new_Block_with(PArray23984, empty_Array, PThreadedCode23985, 2, PAssign23986, PSend23994);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23995 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23983);
    Array PThreadedCode23982 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23983, (Optr)&t_send1, (Optr)PSend23995, (Optr)&t_method_return);
    Method PMethod23980 = new_Method_with(empty_Array, PArray23981, empty_Array, PThreadedCode23982, 1, PSend23995);
    
    MethodClosure MC_SMB_getFields = new_MethodClosure((Method)PMethod23980, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_getFields, MC_SMB_getFields);
}


static void init_SMB_isHeadRequest() {
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23998 = new_Send((Optr)self, SMB_method, 0);
    String string_23999 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23999_Const = new_Constant((Optr)string_23999);
    // =. 
    Send PSend24000 = new_Send((Optr)PSend23998, SMB__equals_, 1, (Optr)string_23999_Const);
    Array PThreadedCode23997 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23998, (Optr)&t_push1, (Optr)string_23999, (Optr)&t_send1, (Optr)PSend24000, (Optr)&t_method_return);
    Method PMethod23996 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23997, 1, PSend24000);
    
    MethodClosure MC_SMB_isHeadRequest = new_MethodClosure((Method)PMethod23996, WebClient_Core_WebRequest_Class);
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
    Array PArray24002 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray24003 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24006 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign24008 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend24009 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend24013 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ascii, 0);
    Array PThreadedCode24012 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend24013, (Optr)&t_block_return);
    Block PBlock24011 = new_Block_with(empty_Array, empty_Array, PThreadedCode24012, 1, PSend24013);
    // ifTrue:. 
    Send PSend24010 = new_Send((Optr)PSend24009, SMB_ifTrue_, 1, (Optr)PBlock24011);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24016 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24015 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend24016);
    Assign PAssign24014 = new_Assign((Optr)slot_WebClient_Core_WebRequest_request, (Optr)PSend24015);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_24019 = new_String(L" ");
    Constant string_24019_Const = new_Constant((Optr)string_24019);
    // findTokens:. 
    Send PSend24018 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_findTokens_, 1, (Optr)string_24019_Const);
    Assign PAssign24017 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend24018);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24020 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend24021 = new_Send((Optr)PSend24020, SMB__lt_, 1, (Optr)int_2_Const);
    String string_24025 = new_String(L"Invalid HTTP request: ");
    Constant string_24025_Const = new_Constant((Optr)string_24025);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24026 = new_Send((Optr)string_24025_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebRequest_request);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend24027 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend24026);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24028 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24027);
    Array PThreadedCode24024 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24025, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_send1, (Optr)PSend24026, (Optr)&t_send1, (Optr)PSend24027, (Optr)&t_send1, (Optr)PSend24028, (Optr)&t_block_return);
    Block PBlock24023 = new_Block_with(empty_Array, empty_Array, PThreadedCode24024, 1, PSend24028);
    // ifTrue:. 
    Send PSend24022 = new_Send((Optr)PSend24021, SMB_ifTrue_, 1, (Optr)PBlock24023);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24030 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign24029 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)PSend24030);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend24032 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Assign PAssign24031 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)PSend24032);
    // size. 
    Send PSend24033 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend24034 = new_Send((Optr)PSend24033, SMB__gt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_third = new_Symbol(L"third");
    // third. 
    Send PSend24039 = new_Send((Optr)VAR_tokens_0_1, SMB_third, 0);
    Assign PAssign24038 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend24039);
    Array PThreadedCode24037 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign24038, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24039, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24036 = new_Block_with(empty_Array, empty_Array, PThreadedCode24037, 1, PAssign24038);
    String string_24043 = new_String(L"HTTP/1.0");
    Constant string_24043_Const = new_Constant((Optr)string_24043);
    Assign PAssign24042 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_24043_Const);
    Array PThreadedCode24041 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign24042, (Optr)&t_push1, (Optr)string_24043, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24040 = new_Block_with(empty_Array, empty_Array, PThreadedCode24041, 1, PAssign24042);
    // ifTrue:ifFalse:. 
    Send PSend24035 = new_Send((Optr)PSend24034, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24036, (Optr)PBlock24040);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24045 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign24044 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24045);
    Array PThreadedCode24007 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push1, (Optr)PAssign24008, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend24009, (Optr)&t_send_ifTrue_, (Optr)PSend24010, (Optr)PBlock24011, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24014, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24016, (Optr)&t_send1, (Optr)PSend24015, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24017, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push1, (Optr)string_24019, (Optr)&t_send1, (Optr)PSend24018, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24020, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24021, (Optr)&t_send_ifTrue_, (Optr)PSend24022, (Optr)PBlock24023, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24029, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24030, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24031, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24032, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24033, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24034, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24035, (Optr)PBlock24036, (Optr)PBlock24040, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24044, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24045, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock24005 = new_Block_with(PArray24006, empty_Array, PThreadedCode24007, 10, PAssign24008, PSend24010, PAssign24014, PAssign24017, PSend24022, PAssign24029, PAssign24031, PSend24035, PAssign24044, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24046 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24005);
    Array PThreadedCode24004 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24005, (Optr)&t_send1, (Optr)PSend24046, (Optr)&t_method_return);
    Method PMethod24001 = new_Method_with(PArray24002, PArray24003, empty_Array, PThreadedCode24004, 1, PSend24046);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24001, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_send405Response_content_() {
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray24048 = new_Array_with(2, (Optr)VAR_allowed_0_0, (Optr)VAR_body_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray24049 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24053 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24054 = new_String(L"HTTP/1.1");
    Constant string_24054_Const = new_Constant((Optr)string_24054);
    SmallInt int_405 = new_SmallInt(405);
    Constant int_405_Const = new_Constant((Optr)int_405);
    // protocol:code:. 
    Send PSend24052 = new_Send((Optr)PSend24053, SMB_protocol_code_, 2, (Optr)string_24054_Const, (Optr)int_405_Const);
    Assign PAssign24051 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend24052);
    String string_24055 = new_String(L"Content-Type");
    String string_24056 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24055_Const = new_Constant((Optr)string_24055);
    Constant string_24056_Const = new_Constant((Optr)string_24056);
    // headerAt:put:. 
    Send PSend24057 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24055_Const, (Optr)string_24056_Const);
    String string_24058 = new_String(L"allow");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray24060 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_m_2_0 = new_Variable_named(L"m", 2);
    Array PArray24063 = new_Array_with(1, (Optr)VAR_m_2_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24065 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)VAR_m_2_0);
    Array PThreadedCode24064 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_m_2_0, (Optr)&t_send1, (Optr)PSend24065, (Optr)&t_method_return);
    Block PBlock24062 = new_Block_with(PArray24063, empty_Array, PThreadedCode24064, 1, PSend24065);
    Character char_24068 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_24068_Const = new_Constant((Optr)char_24068);
    // nextPut:. 
    Send PSend24069 = new_Send((Optr)VAR_s_1_0, SMB_nextPut_, 1, (Optr)char_24068_Const);
    Array PThreadedCode24067 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)char_24068, (Optr)&t_send1, (Optr)PSend24069, (Optr)&t_block_return);
    Block PBlock24066 = new_Block_with(empty_Array, empty_Array, PThreadedCode24067, 1, PSend24069);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend24070 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock24062, (Optr)PBlock24066);
    Array PThreadedCode24061 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock24062, (Optr)&t_push_closure, (Optr)PBlock24066, (Optr)&t_send2, (Optr)PSend24070, (Optr)&t_method_return);
    Block PBlock24059 = new_Block_with(PArray24060, empty_Array, PThreadedCode24061, 1, PSend24070);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend24071 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock24059);
    Constant string_24058_Const = new_Constant((Optr)string_24058);
    // headerAt:put:. 
    Send PSend24072 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24058_Const, (Optr)PSend24071);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24073 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_1);
    Array PThreadedCode24050 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign24051, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24053, (Optr)&t_push1, (Optr)string_24054, (Optr)&t_push1, (Optr)int_405, (Optr)&t_send2, (Optr)PSend24052, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24055, (Optr)&t_push1, (Optr)string_24056, (Optr)&t_send2, (Optr)PSend24057, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24058, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock24059, (Optr)&t_send1, (Optr)PSend24071, (Optr)&t_send2, (Optr)PSend24072, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend24073, (Optr)&t_method_return);
    Method PMethod24047 = new_Method_with(PArray24048, PArray24049, empty_Array, PThreadedCode24050, 4, PAssign24051, PSend24057, PSend24072, PSend24073);
    
    MethodClosure MC_SMB_send405Response_content_ = new_MethodClosure((Method)PMethod24047, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_content_, MC_SMB_send405Response_content_);
}


static void init_SMB_send301Response_() {
    Symbol SMB_send301Response_ = new_Symbol(L"send301Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray24075 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24078 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24079 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24077 = new_Block_with(PArray24078, empty_Array, PThreadedCode24079, 0);
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    // send301Response:do:. 
    Send PSend24080 = new_Send((Optr)self, SMB_send301Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock24077);
    Array PThreadedCode24076 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock24077, (Optr)&t_send2, (Optr)PSend24080, (Optr)&t_method_return);
    Method PMethod24074 = new_Method_with(PArray24075, empty_Array, empty_Array, PThreadedCode24076, 1, PSend24080);
    
    MethodClosure MC_SMB_send301Response_ = new_MethodClosure((Method)PMethod24074, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_, MC_SMB_send301Response_);
}


static void init_SMB_stream200Response_size_type_do_() {
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray24082 = new_Array_with(4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray24083 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24087 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24088 = new_String(L"HTTP/1.1");
    Constant string_24088_Const = new_Constant((Optr)string_24088);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend24086 = new_Send((Optr)PSend24087, SMB_protocol_code_, 2, (Optr)string_24088_Const, (Optr)int_200_Const);
    Assign PAssign24085 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend24086);
    String string_24089 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24089_Const = new_Constant((Optr)string_24089);
    // headerAt:put:. 
    Send PSend24090 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_24089_Const, (Optr)VAR_contentType_0_2);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24091 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend24092 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    Array PThreadedCode24084 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign24085, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24087, (Optr)&t_push1, (Optr)string_24088, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend24086, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_24089, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend24090, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend24091, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_send3, (Optr)PSend24092, (Optr)&t_method_return);
    Method PMethod24081 = new_Method_with(PArray24082, PArray24083, empty_Array, PThreadedCode24084, 4, PAssign24085, PSend24090, PSend24091, PSend24092);
    
    MethodClosure MC_SMB_stream200Response_size_type_do_ = new_MethodClosure((Method)PMethod24081, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_do_, MC_SMB_stream200Response_size_type_do_);
}


static void init_SMB_sendXmlResponse_() {
    Symbol SMB_sendXmlResponse_ = new_Symbol(L"sendXmlResponse:");
    Variable VAR_xmlString_0_0 = new_Variable_named(L"xmlString", 0);
    Array PArray24094 = new_Array_with(1, (Optr)VAR_xmlString_0_0);
    String string_24096 = new_String(L"application/xml");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_24096_Const = new_Constant((Optr)string_24096);
    // send200Response:contentType:. 
    Send PSend24097 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_xmlString_0_0, (Optr)string_24096_Const);
    Array PThreadedCode24095 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_xmlString_0_0, (Optr)&t_push1, (Optr)string_24096, (Optr)&t_send2, (Optr)PSend24097, (Optr)&t_method_return);
    Method PMethod24093 = new_Method_with(PArray24094, empty_Array, empty_Array, PThreadedCode24095, 1, PSend24097);
    
    MethodClosure MC_SMB_sendXmlResponse_ = new_MethodClosure((Method)PMethod24093, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendXmlResponse_, MC_SMB_sendXmlResponse_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper24100 = new_Super(SMB_initialize, 0);
    String string_24102 = new_String(L"GET");
    Constant string_24102_Const = new_Constant((Optr)string_24102);
    Assign PAssign24101 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)string_24102_Const);
    String string_24104 = new_String(L"HTTP/1.1");
    Constant string_24104_Const = new_Constant((Optr)string_24104);
    Assign PAssign24103 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_24104_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24106 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24105 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24106);
    Array PThreadedCode24099 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24100, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24101, (Optr)&t_push1, (Optr)string_24102, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24103, (Optr)&t_push1, (Optr)string_24104, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24105, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24106, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24098 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24099, 5, PSuper24100, PAssign24101, PAssign24103, PAssign24105, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24098, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_isGetRequest() {
    Symbol SMB_isGetRequest = new_Symbol(L"isGetRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24109 = new_Send((Optr)self, SMB_method, 0);
    String string_24110 = new_String(L"GET");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24110_Const = new_Constant((Optr)string_24110);
    // =. 
    Send PSend24111 = new_Send((Optr)PSend24109, SMB__equals_, 1, (Optr)string_24110_Const);
    Array PThreadedCode24108 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24109, (Optr)&t_push1, (Optr)string_24110, (Optr)&t_send1, (Optr)PSend24111, (Optr)&t_method_return);
    Method PMethod24107 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24108, 1, PSend24111);
    
    MethodClosure MC_SMB_isGetRequest = new_MethodClosure((Method)PMethod24107, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isGetRequest, MC_SMB_isGetRequest);
}


static void init_SMB_newWebSocketOn_() {
    Symbol SMB_newWebSocketOn_ = new_Symbol(L"newWebSocketOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24113 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24115 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24114 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24115, (Optr)&t_method_return);
    Method PMethod24112 = new_Method_with(PArray24113, empty_Array, empty_Array, PThreadedCode24114, 1, PSend24115);
    
    MethodClosure MC_SMB_newWebSocketOn_ = new_MethodClosure((Method)PMethod24112, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newWebSocketOn_, MC_SMB_newWebSocketOn_);
}


static void init_SMB_send400Response() {
    Symbol SMB_send400Response = new_Symbol(L"send400Response");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray24117 = new_Array_with(1, (Optr)VAR_message_0_0);
    String string_24121 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_24121_Const = new_Constant((Optr)string_24121);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24122 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_24122_Const = new_Constant((Optr)string_24122);
    // ,. 
    Send PSend24120 = new_Send((Optr)string_24121_Const, SMB__append_, 1, (Optr)string_24122_Const);
    Assign PAssign24119 = new_Assign((Optr)VAR_message_0_0, (Optr)PSend24120);
    SmallInt int_400 = new_SmallInt(400);
    String string_24123 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_24123_Const = new_Constant((Optr)string_24123);
    // sendResponseCode:content:type:close:. 
    Send PSend24124 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_400_Const, (Optr)VAR_message_0_0, (Optr)string_24123_Const, (Optr)true_Const);
    Array PThreadedCode24118 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign24119, (Optr)&t_push1, (Optr)string_24121, (Optr)&t_push1, (Optr)string_24122, (Optr)&t_send1, (Optr)PSend24120, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push1, (Optr)string_24123, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend24124, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24116 = new_Method_with(empty_Array, PArray24117, empty_Array, PThreadedCode24118, 3, PAssign24119, PSend24124, self);
    
    MethodClosure MC_SMB_send400Response = new_MethodClosure((Method)PMethod24116, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send400Response, MC_SMB_send400Response);
}


static void init_SMB_newResponse() {
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24128 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_request_ = new_Symbol(L"request:");
    // request:. 
    Send PSend24130 = new_Send((Optr)VAR__receiver__1_0, SMB_request_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend24131 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode24129 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend24130, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24131, (Optr)&t_method_return);
    Block PBlock24127 = new_Block_with(PArray24128, empty_Array, PThreadedCode24129, 2, PSend24130, PSend24131);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24132 = new_Send((Optr)PWebResponse_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24133 = new_Send((Optr)PBlock24127, SMB_value_, 1, (Optr)PSend24132);
    Array PThreadedCode24126 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock24127, (Optr)&t_push_class_reference, (Optr)PWebResponse_classReference, (Optr)&t_send0, (Optr)PSend24132, (Optr)&t_send1, (Optr)PSend24133, (Optr)&t_method_return);
    Method PMethod24125 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24126, 1, PSend24133);
    
    MethodClosure MC_SMB_newResponse = new_MethodClosure((Method)PMethod24125, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newResponse, MC_SMB_newResponse);
}


static void init_SMB_isOptionsRequest() {
    Symbol SMB_isOptionsRequest = new_Symbol(L"isOptionsRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24136 = new_Send((Optr)self, SMB_method, 0);
    String string_24137 = new_String(L"OPTIONS");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24137_Const = new_Constant((Optr)string_24137);
    // =. 
    Send PSend24138 = new_Send((Optr)PSend24136, SMB__equals_, 1, (Optr)string_24137_Const);
    Array PThreadedCode24135 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24136, (Optr)&t_push1, (Optr)string_24137, (Optr)&t_send1, (Optr)PSend24138, (Optr)&t_method_return);
    Method PMethod24134 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24135, 1, PSend24138);
    
    MethodClosure MC_SMB_isOptionsRequest = new_MethodClosure((Method)PMethod24134, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isOptionsRequest, MC_SMB_isOptionsRequest);
}


static void init_SMB_send404Response_() {
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Array PArray24140 = new_Array_with(1, (Optr)VAR_body_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24143 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24145 = new_String(L"Content-Type");
    String string_24146 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24145_Const = new_Constant((Optr)string_24145);
    Constant string_24146_Const = new_Constant((Optr)string_24146);
    // headerAt:put:. 
    Send PSend24147 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24145_Const, (Optr)string_24146_Const);
    Array PThreadedCode24144 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24145, (Optr)&t_push1, (Optr)string_24146, (Optr)&t_send2, (Optr)PSend24147, (Optr)&t_method_return);
    Block PBlock24142 = new_Block_with(PArray24143, empty_Array, PThreadedCode24144, 1, PSend24147);
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    // send404Response:do:. 
    Send PSend24148 = new_Send((Optr)self, SMB_send404Response_do_, 2, (Optr)VAR_body_0_0, (Optr)PBlock24142);
    Array PThreadedCode24141 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_push_closure, (Optr)PBlock24142, (Optr)&t_send2, (Optr)PSend24148, (Optr)&t_method_return);
    Method PMethod24139 = new_Method_with(PArray24140, empty_Array, empty_Array, PThreadedCode24141, 1, PSend24148);
    
    MethodClosure MC_SMB_send404Response_ = new_MethodClosure((Method)PMethod24139, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_, MC_SMB_send404Response_);
}


static void init_SMB_fields() {
    Symbol SMB_fields = new_Symbol(L"fields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray24150 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24153 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24152 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend24153);
    Symbol SMB_getFields = new_Symbol(L"getFields");
    // getFields. 
    Send PSend24154 = new_Send((Optr)self, SMB_getFields, 0);
    Variable VAR_a_1_0 = new_Variable_named(L"a", 1);
    Array PArray24156 = new_Array_with(1, (Optr)VAR_a_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24158 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode24157 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend24158, (Optr)&t_method_return);
    Block PBlock24155 = new_Block_with(PArray24156, empty_Array, PThreadedCode24157, 1, PSend24158);
    Symbol SMB_associationsDo_ = new_Symbol(L"associationsDo:");
    // associationsDo:. 
    Send PSend24159 = new_Send((Optr)PSend24154, SMB_associationsDo_, 1, (Optr)PBlock24155);
    Symbol SMB_postFields = new_Symbol(L"postFields");
    // postFields. 
    Send PSend24160 = new_Send((Optr)self, SMB_postFields, 0);
    Array PArray24162 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend24164 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode24163 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend24164, (Optr)&t_method_return);
    Block PBlock24161 = new_Block_with(PArray24162, empty_Array, PThreadedCode24163, 1, PSend24164);
    // associationsDo:. 
    Send PSend24165 = new_Send((Optr)PSend24160, SMB_associationsDo_, 1, (Optr)PBlock24161);
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    // multipartFields. 
    Send PSend24166 = new_Send((Optr)self, SMB_multipartFields, 0);
    Array PArray24168 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend24170 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode24169 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend24170, (Optr)&t_method_return);
    Block PBlock24167 = new_Block_with(PArray24168, empty_Array, PThreadedCode24169, 1, PSend24170);
    // associationsDo:. 
    Send PSend24171 = new_Send((Optr)PSend24166, SMB_associationsDo_, 1, (Optr)PBlock24167);
    Array PThreadedCode24151 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign24152, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24153, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24154, (Optr)&t_push_closure, (Optr)PBlock24155, (Optr)&t_send1, (Optr)PSend24159, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24160, (Optr)&t_push_closure, (Optr)PBlock24161, (Optr)&t_send1, (Optr)PSend24165, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24166, (Optr)&t_push_closure, (Optr)PBlock24167, (Optr)&t_send1, (Optr)PSend24171, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod24149 = new_Method_with(empty_Array, PArray24150, empty_Array, PThreadedCode24151, 5, PAssign24152, PSend24159, PSend24165, PSend24171, VAR_fields_0_0);
    
    MethodClosure MC_SMB_fields = new_MethodClosure((Method)PMethod24149, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_fields, MC_SMB_fields);
}


static void init_SMB_send404Response() {
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    String string_24174 = new_String(L"<html><head><title>404 Not Found</title></head><body><h1>404 Not Found</h1><p>The requested URL ");
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24175 = new_Send((Optr)self, SMB_rawUrl, 0);
    Constant string_24174_Const = new_Constant((Optr)string_24174);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24176 = new_Send((Optr)string_24174_Const, SMB__append_, 1, (Optr)PSend24175);
    String string_24177 = new_String(L" was not found on this server.</p></body></html>");
    Constant string_24177_Const = new_Constant((Optr)string_24177);
    // ,. 
    Send PSend24178 = new_Send((Optr)PSend24176, SMB__append_, 1, (Optr)string_24177_Const);
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    // send404Response:. 
    Send PSend24179 = new_Send((Optr)self, SMB_send404Response_, 1, (Optr)PSend24178);
    Array PThreadedCode24173 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24174, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24175, (Optr)&t_send1, (Optr)PSend24176, (Optr)&t_push1, (Optr)string_24177, (Optr)&t_send1, (Optr)PSend24178, (Optr)&t_send1, (Optr)PSend24179, (Optr)&t_method_return);
    Method PMethod24172 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24173, 1, PSend24179);
    
    MethodClosure MC_SMB_send404Response = new_MethodClosure((Method)PMethod24172, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response, MC_SMB_send404Response);
}


static void init_SMB_isDeleteRequest() {
    Symbol SMB_isDeleteRequest = new_Symbol(L"isDeleteRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24182 = new_Send((Optr)self, SMB_method, 0);
    String string_24183 = new_String(L"DELETE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24183_Const = new_Constant((Optr)string_24183);
    // =. 
    Send PSend24184 = new_Send((Optr)PSend24182, SMB__equals_, 1, (Optr)string_24183_Const);
    Array PThreadedCode24181 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24182, (Optr)&t_push1, (Optr)string_24183, (Optr)&t_send1, (Optr)PSend24184, (Optr)&t_method_return);
    Method PMethod24180 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24181, 1, PSend24184);
    
    MethodClosure MC_SMB_isDeleteRequest = new_MethodClosure((Method)PMethod24180, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isDeleteRequest, MC_SMB_isDeleteRequest);
}


static void init_SMB_send301Response_do_() {
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24186 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_301 = new_SmallInt(301);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_301_Const = new_Constant((Optr)int_301);
    // send3xxResponse:code:do:. 
    Send PSend24188 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_301_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode24187 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend24188, (Optr)&t_method_return);
    Method PMethod24185 = new_Method_with(PArray24186, empty_Array, empty_Array, PThreadedCode24187, 1, PSend24188);
    
    MethodClosure MC_SMB_send301Response_do_ = new_MethodClosure((Method)PMethod24185, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_do_, MC_SMB_send301Response_do_);
}


static void init_SMB_send200Response_contentType_() {
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Array PArray24190 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24193 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24194 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24192 = new_Block_with(PArray24193, empty_Array, PThreadedCode24194, 0);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    // send200Response:contentType:do:. 
    Send PSend24195 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)PBlock24192);
    Array PThreadedCode24191 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_push_closure, (Optr)PBlock24192, (Optr)&t_send3, (Optr)PSend24195, (Optr)&t_method_return);
    Method PMethod24189 = new_Method_with(PArray24190, empty_Array, empty_Array, PThreadedCode24191, 1, PSend24195);
    
    MethodClosure MC_SMB_send200Response_contentType_ = new_MethodClosure((Method)PMethod24189, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_, MC_SMB_send200Response_contentType_);
}


static void init_SMB_multipartFields() {
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray24197 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24200 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24199 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend24200);
    Variable VAR_hdrs_1_0 = new_Variable_named(L"hdrs", 1);
    Variable VAR_params_1_1 = new_Variable_named(L"params", 1);
    Variable VAR_cntnt_1_2 = new_Variable_named(L"cntnt", 1);
    Array PArray24202 = new_Array_with(3, (Optr)VAR_hdrs_1_0, (Optr)VAR_params_1_1, (Optr)VAR_cntnt_1_2);
    String string_24204 = new_String(L"name");
    Variable VAR_fieldName_2_0 = new_Variable_named(L"fieldName", 2);
    Array PArray24206 = new_Array_with(1, (Optr)VAR_fieldName_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24208 = new_Send((Optr)VAR_fields_0_0, SMB_at_put_, 2, (Optr)VAR_fieldName_2_0, (Optr)VAR_cntnt_1_2);
    Array PThreadedCode24207 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_fieldName_2_0, (Optr)&t_push_variable, (Optr)VAR_cntnt_1_2, (Optr)&t_send2, (Optr)PSend24208, (Optr)&t_method_return);
    Block PBlock24205 = new_Block_with(PArray24206, empty_Array, PThreadedCode24207, 1, PSend24208);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Constant string_24204_Const = new_Constant((Optr)string_24204);
    // at:ifPresent:. 
    Send PSend24209 = new_Send((Optr)VAR_params_1_1, SMB_at_ifPresent_, 2, (Optr)string_24204_Const, (Optr)PBlock24205);
    Array PThreadedCode24203 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_params_1_1, (Optr)&t_push1, (Optr)string_24204, (Optr)&t_push_closure, (Optr)PBlock24205, (Optr)&t_send2, (Optr)PSend24209, (Optr)&t_method_return);
    Block PBlock24201 = new_Block_with(PArray24202, empty_Array, PThreadedCode24203, 1, PSend24209);
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    // multipartFieldsDo:. 
    Send PSend24210 = new_Send((Optr)self, SMB_multipartFieldsDo_, 1, (Optr)PBlock24201);
    Array PThreadedCode24198 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24199, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24200, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock24201, (Optr)&t_send1, (Optr)PSend24210, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod24196 = new_Method_with(empty_Array, PArray24197, empty_Array, PThreadedCode24198, 3, PAssign24199, PSend24210, VAR_fields_0_0);
    
    MethodClosure MC_SMB_multipartFields = new_MethodClosure((Method)PMethod24196, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFields, MC_SMB_multipartFields);
}


static void init_SMB_sendResponse_chunked_do_() {
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Variable VAR_hdrBlock_0_2 = new_Variable_named(L"hdrBlock", 0);
    Array PArray24212 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)VAR_hdrBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray24213 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24217 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24218 = new_String(L"HTTP/1.1");
    Constant string_24218_Const = new_Constant((Optr)string_24218);
    // protocol:code:. 
    Send PSend24216 = new_Send((Optr)PSend24217, SMB_protocol_code_, 2, (Optr)string_24218_Const, (Optr)VAR_code_0_0);
    Assign PAssign24215 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24216);
    String string_24219 = new_String(L"Transfer-Encoding");
    String string_24220 = new_String(L"chunked");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24219_Const = new_Constant((Optr)string_24219);
    Constant string_24220_Const = new_Constant((Optr)string_24220);
    // headerAt:put:. 
    Send PSend24221 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24219_Const, (Optr)string_24220_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24222 = new_Send((Optr)VAR_hdrBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray24224 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    // stream:. 
    Send PSend24226 = new_Send((Optr)VAR_resp_0_3, SMB_stream_, 1, (Optr)VAR_aStream_1_0);
    // value:. 
    Send PSend24227 = new_Send((Optr)VAR_chunkBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray24229 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_24231 = new_String(L"0");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_24231_Const = new_Constant((Optr)string_24231);
    // nextPutAll:. 
    Send PSend24232 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)string_24231_Const);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24233 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    // crlf. 
    Send PSend24234 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24235 = new_Send((Optr)VAR__receiver__2_0, SMB_flush, 0);
    Array PThreadedCode24230 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_24231, (Optr)&t_send1, (Optr)PSend24232, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend24233, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend24234, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend24235, (Optr)&t_method_return);
    Block PBlock24228 = new_Block_with(PArray24229, empty_Array, PThreadedCode24230, 4, PSend24232, PSend24233, PSend24234, PSend24235);
    // value:. 
    Send PSend24236 = new_Send((Optr)PBlock24228, SMB_value_, 1, (Optr)VAR_aStream_1_0);
    Array PThreadedCode24225 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend24226, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24227, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24228, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend24236, (Optr)&t_method_return);
    Block PBlock24223 = new_Block_with(PArray24224, empty_Array, PThreadedCode24225, 3, PSend24226, PSend24227, PSend24236);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend24237 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_3, (Optr)PBlock24223);
    Array PThreadedCode24214 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24215, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24217, (Optr)&t_push1, (Optr)string_24218, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend24216, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24219, (Optr)&t_push1, (Optr)string_24220, (Optr)&t_send2, (Optr)PSend24221, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24222, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_closure, (Optr)PBlock24223, (Optr)&t_send2, (Optr)PSend24237, (Optr)&t_method_return);
    Method PMethod24211 = new_Method_with(PArray24212, PArray24213, empty_Array, PThreadedCode24214, 4, PAssign24215, PSend24221, PSend24222, PSend24237);
    
    MethodClosure MC_SMB_sendResponse_chunked_do_ = new_MethodClosure((Method)PMethod24211, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_do_, MC_SMB_sendResponse_chunked_do_);
}


static void init_SMB_sendResponse_contentStream_size_() {
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_2 = new_Variable_named(L"streamSize", 0);
    Array PArray24239 = new_Array_with(3, (Optr)VAR_resp_0_0, (Optr)VAR_aStream_0_1, (Optr)VAR_streamSize_0_2);
    String string_24243 = new_String(L"Connection");
    String string_24244 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24243_Const = new_Constant((Optr)string_24243);
    Constant string_24244_Const = new_Constant((Optr)string_24244);
    // headerAt:put:. 
    Send PSend24245 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_24243_Const, (Optr)string_24244_Const);
    Array PThreadedCode24242 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24243, (Optr)&t_push1, (Optr)string_24244, (Optr)&t_send2, (Optr)PSend24245, (Optr)&t_block_return);
    Block PBlock24241 = new_Block_with(empty_Array, empty_Array, PThreadedCode24242, 1, PSend24245);
    String string_24248 = new_String(L"Content-Length");
    Constant string_24248_Const = new_Constant((Optr)string_24248);
    // headerAt:put:. 
    Send PSend24249 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24248_Const, (Optr)VAR_streamSize_0_2);
    Array PThreadedCode24247 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24248, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_send2, (Optr)PSend24249, (Optr)&t_block_return);
    Block PBlock24246 = new_Block_with(empty_Array, empty_Array, PThreadedCode24247, 1, PSend24249);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend24250 = new_Send((Optr)VAR_streamSize_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock24241, (Optr)PBlock24246);
    Variable VAR_sockStream_1_0 = new_Variable_named(L"sockStream", 1);
    Array PArray24252 = new_Array_with(1, (Optr)VAR_sockStream_1_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend24254 = new_Send((Optr)VAR_resp_0_0, SMB_streamFrom_to_size_progress_, 4, (Optr)VAR_aStream_0_1, (Optr)VAR_sockStream_1_0, (Optr)VAR_streamSize_0_2, (Optr)nil_Const);
    Array PThreadedCode24253 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_variable, (Optr)VAR_sockStream_1_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend24254, (Optr)&t_method_return);
    Block PBlock24251 = new_Block_with(PArray24252, empty_Array, PThreadedCode24253, 1, PSend24254);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend24255 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock24251);
    Array PThreadedCode24240 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_closure, (Optr)PBlock24241, (Optr)&t_push_closure, (Optr)PBlock24246, (Optr)&t_send2, (Optr)PSend24250, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock24251, (Optr)&t_send2, (Optr)PSend24255, (Optr)&t_method_return);
    Method PMethod24238 = new_Method_with(PArray24239, empty_Array, empty_Array, PThreadedCode24240, 2, PSend24250, PSend24255);
    
    MethodClosure MC_SMB_sendResponse_contentStream_size_ = new_MethodClosure((Method)PMethod24238, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentStream_size_, MC_SMB_sendResponse_contentStream_size_);
}


static void init_SMB_server_() {
    Symbol SMB_server_ = new_Symbol(L"server:");
    Variable VAR_aWebServer_0_0 = new_Variable_named(L"aWebServer", 0);
    Array PArray24257 = new_Array_with(1, (Optr)VAR_aWebServer_0_0);
    Assign PAssign24259 = new_Assign((Optr)slot_WebClient_Core_WebRequest_server, (Optr)VAR_aWebServer_0_0);
    Array PThreadedCode24258 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24259, (Optr)&t_push_variable, (Optr)VAR_aWebServer_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24256 = new_Method_with(PArray24257, empty_Array, empty_Array, PThreadedCode24258, 2, PAssign24259, self);
    
    MethodClosure MC_SMB_server_ = new_MethodClosure((Method)PMethod24256, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server_, MC_SMB_server_);
}


static void init_SMB_sendResponseCode_content_type_do_() {
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray24261 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray24262 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24266 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24267 = new_String(L"HTTP/1.1");
    Constant string_24267_Const = new_Constant((Optr)string_24267);
    // protocol:code:. 
    Send PSend24265 = new_Send((Optr)PSend24266, SMB_protocol_code_, 2, (Optr)string_24267_Const, (Optr)VAR_code_0_0);
    Assign PAssign24264 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend24265);
    String string_24270 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24270_Const = new_Constant((Optr)string_24270);
    // headerAt:put:. 
    Send PSend24271 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_24270_Const, (Optr)VAR_contentType_0_2);
    Array PThreadedCode24269 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_24270, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend24271, (Optr)&t_block_return);
    Block PBlock24268 = new_Block_with(empty_Array, empty_Array, PThreadedCode24269, 1, PSend24271);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24272 = new_Send((Optr)VAR_contentType_0_2, SMB_ifNotNil_, 1, (Optr)PBlock24268);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24273 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24274 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_4, (Optr)VAR_aString_0_1);
    Array PThreadedCode24263 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign24264, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24266, (Optr)&t_push1, (Optr)string_24267, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend24265, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24268, (Optr)&t_send1, (Optr)PSend24272, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend24273, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send2, (Optr)PSend24274, (Optr)&t_method_return);
    Method PMethod24260 = new_Method_with(PArray24261, PArray24262, empty_Array, PThreadedCode24263, 4, PAssign24264, PSend24272, PSend24273, PSend24274);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_do_ = new_MethodClosure((Method)PMethod24260, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_do_, MC_SMB_sendResponseCode_content_type_do_);
}


static void init_SMB_send302Response_do_() {
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24276 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_302 = new_SmallInt(302);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_302_Const = new_Constant((Optr)int_302);
    // send3xxResponse:code:do:. 
    Send PSend24278 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_302_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode24277 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend24278, (Optr)&t_method_return);
    Method PMethod24275 = new_Method_with(PArray24276, empty_Array, empty_Array, PThreadedCode24277, 1, PSend24278);
    
    MethodClosure MC_SMB_send302Response_do_ = new_MethodClosure((Method)PMethod24275, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_do_, MC_SMB_send302Response_do_);
}


static void init_SMB_closeIfTransient_after_() {
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24280 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_close_0_2 = new_Variable_named(L"close", 0);
    Array PArray24281 = new_Array_with(1, (Optr)VAR_close_0_2);
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend24285 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend24284 = new_Send((Optr)PSend24285, SMB_not, 0);
    Assign PAssign24283 = new_Assign((Optr)VAR_close_0_2, (Optr)PSend24284);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24289 = new_String(L"Connection");
    String string_24290 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24289_Const = new_Constant((Optr)string_24289);
    Constant string_24290_Const = new_Constant((Optr)string_24290);
    // headerAt:put:. 
    Send PSend24291 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24289_Const, (Optr)string_24290_Const);
    Array PThreadedCode24288 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24289, (Optr)&t_push1, (Optr)string_24290, (Optr)&t_send2, (Optr)PSend24291, (Optr)&t_block_return);
    Block PBlock24287 = new_Block_with(empty_Array, empty_Array, PThreadedCode24288, 1, PSend24291);
    // ifTrue:. 
    Send PSend24286 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock24287);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24292 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24293 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend24297 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode24296 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24297, (Optr)&t_block_return);
    Block PBlock24295 = new_Block_with(empty_Array, empty_Array, PThreadedCode24296, 1, PSend24297);
    // ifTrue:. 
    Send PSend24294 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock24295);
    Array PThreadedCode24282 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign24283, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24285, (Optr)&t_send0, (Optr)PSend24284, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend24286, (Optr)PBlock24287, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend24292, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend24293, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend24294, (Optr)PBlock24295, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24279 = new_Method_with(PArray24280, PArray24281, empty_Array, PThreadedCode24282, 6, PAssign24283, PSend24286, PSend24292, PSend24293, PSend24294, self);
    
    MethodClosure MC_SMB_closeIfTransient_after_ = new_MethodClosure((Method)PMethod24279, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_closeIfTransient_after_, MC_SMB_closeIfTransient_after_);
}


static void init_SMB_send200Response_() {
    Symbol SMB_send200Response_ = new_Symbol(L"send200Response:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24299 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_24301 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_24301_Const = new_Constant((Optr)string_24301);
    // send200Response:contentType:. 
    Send PSend24302 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_aString_0_0, (Optr)string_24301_Const);
    Array PThreadedCode24300 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push1, (Optr)string_24301, (Optr)&t_send2, (Optr)PSend24302, (Optr)&t_method_return);
    Method PMethod24298 = new_Method_with(PArray24299, empty_Array, empty_Array, PThreadedCode24300, 1, PSend24302);
    
    MethodClosure MC_SMB_send200Response_ = new_MethodClosure((Method)PMethod24298, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_, MC_SMB_send200Response_);
}


static void init_SMB_isPutRequest() {
    Symbol SMB_isPutRequest = new_Symbol(L"isPutRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24305 = new_Send((Optr)self, SMB_method, 0);
    String string_24306 = new_String(L"PUT");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24306_Const = new_Constant((Optr)string_24306);
    // =. 
    Send PSend24307 = new_Send((Optr)PSend24305, SMB__equals_, 1, (Optr)string_24306_Const);
    Array PThreadedCode24304 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24305, (Optr)&t_push1, (Optr)string_24306, (Optr)&t_send1, (Optr)PSend24307, (Optr)&t_method_return);
    Method PMethod24303 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24304, 1, PSend24307);
    
    MethodClosure MC_SMB_isPutRequest = new_MethodClosure((Method)PMethod24303, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPutRequest, MC_SMB_isPutRequest);
}


static void init_SMB_send3xxResponse_code_() {
    Symbol SMB_send3xxResponse_code_ = new_Symbol(L"send3xxResponse:code:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Array PArray24309 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24312 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24313 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24311 = new_Block_with(PArray24312, empty_Array, PThreadedCode24313, 0);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    // send3xxResponse:code:do:. 
    Send PSend24314 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)PBlock24311);
    Array PThreadedCode24310 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_push_closure, (Optr)PBlock24311, (Optr)&t_send3, (Optr)PSend24314, (Optr)&t_method_return);
    Method PMethod24308 = new_Method_with(PArray24309, empty_Array, empty_Array, PThreadedCode24310, 1, PSend24314);
    
    MethodClosure MC_SMB_send3xxResponse_code_ = new_MethodClosure((Method)PMethod24308, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_, MC_SMB_send3xxResponse_code_);
}


static void init_SMB_sendResponse_contentBlock_() {
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_contentBlock_0_1 = new_Variable_named(L"contentBlock", 0);
    Array PArray24316 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_contentBlock_0_1);
    String string_24318 = new_String(L"Date");
    Array PThreadedCode24320 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock24319 = new_Block_with(empty_Array, empty_Array, PThreadedCode24320, 1, PWebServer_classReference);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24321 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock24319);
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    // serverDate. 
    Send PSend24322 = new_Send((Optr)PSend24321, SMB_serverDate, 0);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24318_Const = new_Constant((Optr)string_24318);
    // headerAt:put:. 
    Send PSend24323 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24318_Const, (Optr)PSend24322);
    String string_24324 = new_String(L"Server");
    Array PThreadedCode24326 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock24325 = new_Block_with(empty_Array, empty_Array, PThreadedCode24326, 1, PWebServer_classReference);
    // ifNil:. 
    Send PSend24327 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock24325);
    Symbol SMB_serverString = new_Symbol(L"serverString");
    // serverString. 
    Send PSend24328 = new_Send((Optr)PSend24327, SMB_serverString, 0);
    Constant string_24324_Const = new_Constant((Optr)string_24324);
    // headerAt:put:. 
    Send PSend24329 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24324_Const, (Optr)PSend24328);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend24334 = new_Send((Optr)VAR_resp_0_0, SMB_writeOn_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24335 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    // isHeadRequest. 
    Send PSend24336 = new_Send((Optr)self, SMB_isHeadRequest, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24340 = new_Send((Optr)VAR_contentBlock_0_1, SMB_value_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Array PThreadedCode24339 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_contentBlock_0_1, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24340, (Optr)&t_block_return);
    Block PBlock24338 = new_Block_with(empty_Array, empty_Array, PThreadedCode24339, 1, PSend24340);
    // ifFalse:. 
    Send PSend24337 = new_Send((Optr)PSend24336, SMB_ifFalse_, 1, (Optr)PBlock24338);
    Array PThreadedCode24333 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24334, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend24335, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24336, (Optr)&t_send_ifFalse_, (Optr)PSend24337, (Optr)PBlock24338, (Optr)&t_block_return);
    Block PBlock24332 = new_Block_with(empty_Array, empty_Array, PThreadedCode24333, 3, PSend24334, PSend24335, PSend24337);
    Variable VAR_ignore_1_0 = new_Variable_named(L"ignore", 1);
    Array PArray24342 = new_Array_with(1, (Optr)VAR_ignore_1_0);
    Array PThreadedCode24343 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24341 = new_Block_with(PArray24342, empty_Array, PThreadedCode24343, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend24344 = new_Send((Optr)PBlock24332, SMB_on_do_, 2, (Optr)NetworkError_classReference, (Optr)PBlock24341);
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    // logRequest:response:. 
    Send PSend24347 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_logRequest_response_, 2, (Optr)self, (Optr)VAR_resp_0_0);
    Array PThreadedCode24346 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_send2, (Optr)PSend24347, (Optr)&t_block_return);
    Block PBlock24345 = new_Block_with(empty_Array, empty_Array, PThreadedCode24346, 1, PSend24347);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24348 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNotNil_, 1, (Optr)PBlock24345);
    Array PThreadedCode24331 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock24332, (Optr)&t_push_class_reference, (Optr)NetworkError_classReference, (Optr)&t_push_closure, (Optr)PBlock24341, (Optr)&t_send2, (Optr)PSend24344, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24345, (Optr)&t_send1, (Optr)PSend24348, (Optr)&t_block_return);
    Block PBlock24330 = new_Block_with(empty_Array, empty_Array, PThreadedCode24331, 2, PSend24344, PSend24348);
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    // closeIfTransient:after:. 
    Send PSend24349 = new_Send((Optr)self, SMB_closeIfTransient_after_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock24330);
    Array PThreadedCode24317 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24318, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24319, (Optr)&t_send1, (Optr)PSend24321, (Optr)&t_send0, (Optr)PSend24322, (Optr)&t_send2, (Optr)PSend24323, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24324, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24325, (Optr)&t_send1, (Optr)PSend24327, (Optr)&t_send0, (Optr)PSend24328, (Optr)&t_send2, (Optr)PSend24329, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock24330, (Optr)&t_send2, (Optr)PSend24349, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24315 = new_Method_with(PArray24316, empty_Array, empty_Array, PThreadedCode24317, 4, PSend24323, PSend24329, PSend24349, self);
    
    MethodClosure MC_SMB_sendResponse_contentBlock_ = new_MethodClosure((Method)PMethod24315, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentBlock_, MC_SMB_sendResponse_contentBlock_);
}


static void init_SMB_server() {
    Symbol SMB_server = new_Symbol(L"server");
    Array PThreadedCode24351 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_method_return);
    Method PMethod24350 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24351, 1, slot_WebClient_Core_WebRequest_server);
    
    MethodClosure MC_SMB_server = new_MethodClosure((Method)PMethod24350, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server, MC_SMB_server);
}


static void init_SMB_stream200Response_size_() {
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Array PArray24353 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    String string_24355 = new_String(L"application/octet-stream");
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Constant string_24355_Const = new_Constant((Optr)string_24355);
    // stream200Response:size:type:. 
    Send PSend24356 = new_Send((Optr)self, SMB_stream200Response_size_type_, 3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)string_24355_Const);
    Array PThreadedCode24354 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push1, (Optr)string_24355, (Optr)&t_send3, (Optr)PSend24356, (Optr)&t_method_return);
    Method PMethod24352 = new_Method_with(PArray24353, empty_Array, empty_Array, PThreadedCode24354, 1, PSend24356);
    
    MethodClosure MC_SMB_stream200Response_size_ = new_MethodClosure((Method)PMethod24352, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_, MC_SMB_stream200Response_size_);
}


static void init_SMB_send302Response_() {
    Symbol SMB_send302Response_ = new_Symbol(L"send302Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray24358 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24361 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24362 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24360 = new_Block_with(PArray24361, empty_Array, PThreadedCode24362, 0);
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    // send302Response:do:. 
    Send PSend24363 = new_Send((Optr)self, SMB_send302Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock24360);
    Array PThreadedCode24359 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock24360, (Optr)&t_send2, (Optr)PSend24363, (Optr)&t_method_return);
    Method PMethod24357 = new_Method_with(PArray24358, empty_Array, empty_Array, PThreadedCode24359, 1, PSend24363);
    
    MethodClosure MC_SMB_send302Response_ = new_MethodClosure((Method)PMethod24357, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_, MC_SMB_send302Response_);
}


static void init_SMB_send3xxResponse_code_do_() {
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24365 = new_Array_with(3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Variable VAR_url_0_4 = new_Variable_named(L"url", 0);
    Array PArray24366 = new_Array_with(2, (Optr)VAR_resp_0_3, (Optr)VAR_url_0_4);
    Assign PAssign24368 = new_Assign((Optr)VAR_url_0_4, (Optr)VAR_location_0_0);
    String string_24369 = new_String(L"://");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_24369_Const = new_Constant((Optr)string_24369);
    // findString:. 
    Send PSend24370 = new_Send((Optr)VAR_location_0_0, SMB_findString_, 1, (Optr)string_24369_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24371 = new_Send((Optr)PSend24370, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24375 = new_String(L"host");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_24375_Const = new_Constant((Optr)string_24375);
    // headerAt:. 
    Send PSend24376 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_24375_Const);
    Variable VAR_host_1_0 = new_Variable_named(L"host", 1);
    Array PArray24378 = new_Array_with(1, (Optr)VAR_host_1_0);
    String string_24383 = new_String(L"http://");
    Constant string_24383_Const = new_Constant((Optr)string_24383);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24382 = new_Send((Optr)string_24383_Const, SMB__append_, 1, (Optr)VAR_host_1_0);
    // ,. 
    Send PSend24381 = new_Send((Optr)PSend24382, SMB__append_, 1, (Optr)VAR_location_0_0);
    Assign PAssign24380 = new_Assign((Optr)VAR_url_0_4, (Optr)PSend24381);
    Array PThreadedCode24379 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign24380, (Optr)&t_push1, (Optr)string_24383, (Optr)&t_push_variable, (Optr)VAR_host_1_0, (Optr)&t_send1, (Optr)PSend24382, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_send1, (Optr)PSend24381, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock24377 = new_Block_with(PArray24378, empty_Array, PThreadedCode24379, 1, PAssign24380);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend24384 = new_Send((Optr)PSend24376, SMB_ifNotEmpty_, 1, (Optr)PBlock24377);
    Array PThreadedCode24374 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24375, (Optr)&t_send1, (Optr)PSend24376, (Optr)&t_push_closure, (Optr)PBlock24377, (Optr)&t_send1, (Optr)PSend24384, (Optr)&t_block_return);
    Block PBlock24373 = new_Block_with(empty_Array, empty_Array, PThreadedCode24374, 1, PSend24384);
    // ifFalse:. 
    Send PSend24372 = new_Send((Optr)PSend24371, SMB_ifFalse_, 1, (Optr)PBlock24373);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24387 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24388 = new_String(L"HTTP/1.1");
    Constant string_24388_Const = new_Constant((Optr)string_24388);
    // protocol:code:. 
    Send PSend24386 = new_Send((Optr)PSend24387, SMB_protocol_code_, 2, (Optr)string_24388_Const, (Optr)VAR_statusCode_0_1);
    Assign PAssign24385 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24386);
    String string_24389 = new_String(L"Location");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24389_Const = new_Constant((Optr)string_24389);
    // headerAt:put:. 
    Send PSend24390 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24389_Const, (Optr)VAR_url_0_4);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24391 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    String string_24392 = new_String(L"");
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Constant string_24392_Const = new_Constant((Optr)string_24392);
    // sendResponse:content:. 
    Send PSend24393 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)string_24392_Const);
    Array PThreadedCode24367 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign24368, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)string_24369, (Optr)&t_send1, (Optr)PSend24370, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24371, (Optr)&t_send_ifFalse_, (Optr)PSend24372, (Optr)PBlock24373, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24385, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24387, (Optr)&t_push1, (Optr)string_24388, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_send2, (Optr)PSend24386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24389, (Optr)&t_push_variable, (Optr)VAR_url_0_4, (Optr)&t_send2, (Optr)PSend24390, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24391, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24392, (Optr)&t_send2, (Optr)PSend24393, (Optr)&t_method_return);
    Method PMethod24364 = new_Method_with(PArray24365, PArray24366, empty_Array, PThreadedCode24367, 6, PAssign24368, PSend24372, PAssign24385, PSend24390, PSend24391, PSend24393);
    
    MethodClosure MC_SMB_send3xxResponse_code_do_ = new_MethodClosure((Method)PMethod24364, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_do_, MC_SMB_send3xxResponse_code_do_);
}


static void init_SMB_isPostRequest() {
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24396 = new_Send((Optr)self, SMB_method, 0);
    String string_24397 = new_String(L"POST");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24397_Const = new_Constant((Optr)string_24397);
    // =. 
    Send PSend24398 = new_Send((Optr)PSend24396, SMB__equals_, 1, (Optr)string_24397_Const);
    Array PThreadedCode24395 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24396, (Optr)&t_push1, (Optr)string_24397, (Optr)&t_send1, (Optr)PSend24398, (Optr)&t_method_return);
    Method PMethod24394 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24395, 1, PSend24398);
    
    MethodClosure MC_SMB_isPostRequest = new_MethodClosure((Method)PMethod24394, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPostRequest, MC_SMB_isPostRequest);
}


static void init_SMB_writeRequestOn_() {
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24400 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24403 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24405 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_method);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24406 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend24407 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_rawUrl);
    // space. 
    Send PSend24408 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend24409 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebMessage_protocol);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24410 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24404 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_send1, (Optr)PSend24405, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24406, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_send1, (Optr)PSend24407, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24408, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_send1, (Optr)PSend24409, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24410, (Optr)&t_method_return);
    Block PBlock24402 = new_Block_with(PArray24403, empty_Array, PThreadedCode24404, 6, PSend24405, PSend24406, PSend24407, PSend24408, PSend24409, PSend24410);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24411 = new_Send((Optr)PBlock24402, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24401 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24402, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24411, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24399 = new_Method_with(PArray24400, empty_Array, empty_Array, PThreadedCode24401, 2, PSend24411, self);
    
    MethodClosure MC_SMB_writeRequestOn_ = new_MethodClosure((Method)PMethod24399, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeRequestOn_, MC_SMB_writeRequestOn_);
}


static void init_SMB_send405Response_() {
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray24413 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_24415 = new_String(L"<html><head><title>405 Method Not Allowed</title></head><body><h1>405 Method Not Allowed</h1><p>The requested method ");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24416 = new_Send((Optr)self, SMB_method, 0);
    Constant string_24415_Const = new_Constant((Optr)string_24415);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24417 = new_Send((Optr)string_24415_Const, SMB__append_, 1, (Optr)PSend24416);
    String string_24418 = new_String(L" is not allowed for the URL");
    Constant string_24418_Const = new_Constant((Optr)string_24418);
    // ,. 
    Send PSend24419 = new_Send((Optr)PSend24417, SMB__append_, 1, (Optr)string_24418_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24420 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend24421 = new_Send((Optr)PSend24419, SMB__append_, 1, (Optr)PSend24420);
    String string_24422 = new_String(L"</p></body></html>");
    Constant string_24422_Const = new_Constant((Optr)string_24422);
    // ,. 
    Send PSend24423 = new_Send((Optr)PSend24421, SMB__append_, 1, (Optr)string_24422_Const);
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    // send405Response:content:. 
    Send PSend24424 = new_Send((Optr)self, SMB_send405Response_content_, 2, (Optr)VAR_allowed_0_0, (Optr)PSend24423);
    Array PThreadedCode24414 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push1, (Optr)string_24415, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24416, (Optr)&t_send1, (Optr)PSend24417, (Optr)&t_push1, (Optr)string_24418, (Optr)&t_send1, (Optr)PSend24419, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24420, (Optr)&t_send1, (Optr)PSend24421, (Optr)&t_push1, (Optr)string_24422, (Optr)&t_send1, (Optr)PSend24423, (Optr)&t_send2, (Optr)PSend24424, (Optr)&t_method_return);
    Method PMethod24412 = new_Method_with(PArray24413, empty_Array, empty_Array, PThreadedCode24414, 1, PSend24424);
    
    MethodClosure MC_SMB_send405Response_ = new_MethodClosure((Method)PMethod24412, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_, MC_SMB_send405Response_);
}


static void init_SMB_send500Response_() {
    Symbol SMB_send500Response_ = new_Symbol(L"send500Response:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Array PArray24426 = new_Array_with(1, (Optr)VAR_errReport_0_0);
    Variable VAR_errLog_0_1 = new_Variable_named(L"errLog", 0);
    Array PArray24427 = new_Array_with(1, (Optr)VAR_errLog_0_1);
    String string_24433 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_24433_Const = new_Constant((Optr)string_24433);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24434 = new_String(L"<h1>Internal Server Error</h1><pre>");
    Constant string_24434_Const = new_Constant((Optr)string_24434);
    // ,. 
    Send PSend24432 = new_Send((Optr)string_24433_Const, SMB__append_, 1, (Optr)string_24434_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend24436 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24437 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend24435 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend24436, (Optr)PSend24437);
    // ,. 
    Send PSend24431 = new_Send((Optr)PSend24432, SMB__append_, 1, (Optr)PSend24435);
    String string_24438 = new_String(L"</pre></body></html>");
    Constant string_24438_Const = new_Constant((Optr)string_24438);
    // ,. 
    Send PSend24430 = new_Send((Optr)PSend24431, SMB__append_, 1, (Optr)string_24438_Const);
    Assign PAssign24429 = new_Assign((Optr)VAR_errLog_0_1, (Optr)PSend24430);
    SmallInt int_500 = new_SmallInt(500);
    String string_24439 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_24439_Const = new_Constant((Optr)string_24439);
    // sendResponseCode:content:type:close:. 
    Send PSend24440 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_1, (Optr)string_24439_Const, (Optr)true_Const);
    Array PThreadedCode24428 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign24429, (Optr)&t_push1, (Optr)string_24433, (Optr)&t_push1, (Optr)string_24434, (Optr)&t_send1, (Optr)PSend24432, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24436, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24437, (Optr)&t_send2, (Optr)PSend24435, (Optr)&t_send1, (Optr)PSend24431, (Optr)&t_push1, (Optr)string_24438, (Optr)&t_send1, (Optr)PSend24430, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_1, (Optr)&t_push1, (Optr)string_24439, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend24440, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24425 = new_Method_with(PArray24426, PArray24427, empty_Array, PThreadedCode24428, 3, PAssign24429, PSend24440, self);
    
    MethodClosure MC_SMB_send500Response_ = new_MethodClosure((Method)PMethod24425, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send500Response_, MC_SMB_send500Response_);
}


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24442 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24444 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)VAR_aString_0_0);
    Array PThreadedCode24443 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24444, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24441 = new_Method_with(PArray24442, empty_Array, empty_Array, PThreadedCode24443, 2, PAssign24444, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod24441, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_requestLine() {
    Symbol SMB_requestLine = new_Symbol(L"requestLine");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24449 = new_Send((Optr)self, SMB_method, 0);
    String string_24450 = new_String(L" ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_24450_Const = new_Constant((Optr)string_24450);
    // ,. 
    Send PSend24451 = new_Send((Optr)PSend24449, SMB__append_, 1, (Optr)string_24450_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24452 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend24453 = new_Send((Optr)PSend24451, SMB__append_, 1, (Optr)PSend24452);
    String string_24454 = new_String(L" ");
    Constant string_24454_Const = new_Constant((Optr)string_24454);
    // ,. 
    Send PSend24455 = new_Send((Optr)PSend24453, SMB__append_, 1, (Optr)string_24454_Const);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend24456 = new_Send((Optr)self, SMB_protocol, 0);
    // ,. 
    Send PSend24457 = new_Send((Optr)PSend24455, SMB__append_, 1, (Optr)PSend24456);
    Array PThreadedCode24448 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24449, (Optr)&t_push1, (Optr)string_24450, (Optr)&t_send1, (Optr)PSend24451, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24452, (Optr)&t_send1, (Optr)PSend24453, (Optr)&t_push1, (Optr)string_24454, (Optr)&t_send1, (Optr)PSend24455, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24456, (Optr)&t_send1, (Optr)PSend24457, (Optr)&t_block_return);
    Block PBlock24447 = new_Block_with(empty_Array, empty_Array, PThreadedCode24448, 1, PSend24457);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24458 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_ifNil_, 1, (Optr)PBlock24447);
    Array PThreadedCode24446 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push_closure, (Optr)PBlock24447, (Optr)&t_send1, (Optr)PSend24458, (Optr)&t_method_return);
    Method PMethod24445 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24446, 1, PSend24458);
    
    MethodClosure MC_SMB_requestLine = new_MethodClosure((Method)PMethod24445, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_requestLine, MC_SMB_requestLine);
}


static void init_SMB_sendResponse_chunked_() {
    Symbol SMB_sendResponse_chunked_ = new_Symbol(L"sendResponse:chunked:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Array PArray24460 = new_Array_with(2, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24463 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24464 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24462 = new_Block_with(PArray24463, empty_Array, PThreadedCode24464, 0);
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    // sendResponse:chunked:do:. 
    Send PSend24465 = new_Send((Optr)self, SMB_sendResponse_chunked_do_, 3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)PBlock24462);
    Array PThreadedCode24461 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_closure, (Optr)PBlock24462, (Optr)&t_send3, (Optr)PSend24465, (Optr)&t_method_return);
    Method PMethod24459 = new_Method_with(PArray24460, empty_Array, empty_Array, PThreadedCode24461, 1, PSend24465);
    
    MethodClosure MC_SMB_sendResponse_chunked_ = new_MethodClosure((Method)PMethod24459, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_, MC_SMB_sendResponse_chunked_);
}


static void init_SMB_multipartFieldsDo_() {
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray24467 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend24469 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend24472 = new_Send((Optr)self, SMB_contentType, 0);
    String string_24473 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_24473_Const = new_Constant((Optr)string_24473);
    // beginsWith:. 
    Send PSend24474 = new_Send((Optr)PSend24472, SMB_beginsWith_, 1, (Optr)string_24473_Const);
    Array PThreadedCode24471 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24472, (Optr)&t_push1, (Optr)string_24473, (Optr)&t_send1, (Optr)PSend24474, (Optr)&t_block_return);
    Block PBlock24470 = new_Block_with(empty_Array, empty_Array, PThreadedCode24471, 1, PSend24474);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24475 = new_Send((Optr)PSend24469, SMB_and_, 1, (Optr)PBlock24470);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend24479 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24480 = new_Send((Optr)PSend24479, SMB_readStream, 0);
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    // multipartBoundary. 
    Send PSend24481 = new_Send((Optr)self, SMB_multipartBoundary, 0);
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    // decodeMultipartForm:boundary:do:. 
    Send PSend24482 = new_Send((Optr)PWebUtils_classReference, SMB_decodeMultipartForm_boundary_do_, 3, (Optr)PSend24480, (Optr)PSend24481, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode24478 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24479, (Optr)&t_send0, (Optr)PSend24480, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24481, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send3, (Optr)PSend24482, (Optr)&t_block_return);
    Block PBlock24477 = new_Block_with(empty_Array, empty_Array, PThreadedCode24478, 1, PSend24482);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24485 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode24484 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24485, (Optr)&t_block_return);
    Block PBlock24483 = new_Block_with(empty_Array, empty_Array, PThreadedCode24484, 1, PSend24485);
    // ifTrue:ifFalse:. 
    Send PSend24476 = new_Send((Optr)PSend24475, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24477, (Optr)PBlock24483);
    Array PThreadedCode24468 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24469, (Optr)&t_push_closure, (Optr)PBlock24470, (Optr)&t_send1, (Optr)PSend24475, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24476, (Optr)PBlock24477, (Optr)PBlock24483, (Optr)&t_method_return);
    Method PMethod24466 = new_Method_with(PArray24467, empty_Array, empty_Array, PThreadedCode24468, 1, PSend24476);
    
    MethodClosure MC_SMB_multipartFieldsDo_ = new_MethodClosure((Method)PMethod24466, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFieldsDo_, MC_SMB_multipartFieldsDo_);
}


static void init_SMB_postFields() {
    Symbol SMB_postFields = new_Symbol(L"postFields");
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend24488 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend24491 = new_Send((Optr)self, SMB_contentType, 0);
    String string_24492 = new_String(L"application/x-www-form-urlencoded");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24492_Const = new_Constant((Optr)string_24492);
    // =. 
    Send PSend24493 = new_Send((Optr)PSend24491, SMB__equals_, 1, (Optr)string_24492_Const);
    Array PThreadedCode24490 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24491, (Optr)&t_push1, (Optr)string_24492, (Optr)&t_send1, (Optr)PSend24493, (Optr)&t_block_return);
    Block PBlock24489 = new_Block_with(empty_Array, empty_Array, PThreadedCode24490, 1, PSend24493);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24494 = new_Send((Optr)PSend24488, SMB_and_, 1, (Optr)PBlock24489);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend24498 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend24499 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)PSend24498, (Optr)true_Const);
    Array PThreadedCode24497 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24498, (Optr)&t_push_true, (Optr)&t_send2, (Optr)PSend24499, (Optr)&t_block_return);
    Block PBlock24496 = new_Block_with(empty_Array, empty_Array, PThreadedCode24497, 1, PSend24499);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24502 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode24501 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24502, (Optr)&t_block_return);
    Block PBlock24500 = new_Block_with(empty_Array, empty_Array, PThreadedCode24501, 1, PSend24502);
    // ifTrue:ifFalse:. 
    Send PSend24495 = new_Send((Optr)PSend24494, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24496, (Optr)PBlock24500);
    Array PThreadedCode24487 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24488, (Optr)&t_push_closure, (Optr)PBlock24489, (Optr)&t_send1, (Optr)PSend24494, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24495, (Optr)PBlock24496, (Optr)PBlock24500, (Optr)&t_method_return);
    Method PMethod24486 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24487, 1, PSend24495);
    
    MethodClosure MC_SMB_postFields = new_MethodClosure((Method)PMethod24486, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_postFields, MC_SMB_postFields);
}


static void init_SMB_stream200Response_() {
    Symbol SMB_stream200Response_ = new_Symbol(L"stream200Response:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24504 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24506 = new_Send((Optr)VAR_aStream_0_0, SMB_size, 0);
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    // stream200Response:size:. 
    Send PSend24507 = new_Send((Optr)self, SMB_stream200Response_size_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend24506);
    Array PThreadedCode24505 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24506, (Optr)&t_send2, (Optr)PSend24507, (Optr)&t_method_return);
    Method PMethod24503 = new_Method_with(PArray24504, empty_Array, empty_Array, PThreadedCode24505, 1, PSend24507);
    
    MethodClosure MC_SMB_stream200Response_ = new_MethodClosure((Method)PMethod24503, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_, MC_SMB_stream200Response_);
}


static void init_SMB_rawUrl_() {
    Symbol SMB_rawUrl_ = new_Symbol(L"rawUrl:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24509 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24511 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)VAR_aString_0_0);
    Array PThreadedCode24510 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24511, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24508 = new_Method_with(PArray24509, empty_Array, empty_Array, PThreadedCode24510, 2, PAssign24511, self);
    
    MethodClosure MC_SMB_rawUrl_ = new_MethodClosure((Method)PMethod24508, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl_, MC_SMB_rawUrl_);
}


static void init_SMB_sendResponse_content_() {
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Array PArray24513 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aString_0_1);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24515 = new_Send((Optr)VAR_aString_0_1, SMB_readStream, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24516 = new_Send((Optr)VAR_aString_0_1, SMB_size, 0);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend24517 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_0, (Optr)PSend24515, (Optr)PSend24516);
    Array PThreadedCode24514 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24515, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24516, (Optr)&t_send3, (Optr)PSend24517, (Optr)&t_method_return);
    Method PMethod24512 = new_Method_with(PArray24513, empty_Array, empty_Array, PThreadedCode24514, 1, PSend24517);
    
    MethodClosure MC_SMB_sendResponse_content_ = new_MethodClosure((Method)PMethod24512, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_content_, MC_SMB_sendResponse_content_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24519 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    // writeRequestOn:. 
    Send PSend24521 = new_Send((Optr)self, SMB_writeRequestOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24522 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24520 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24521, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24522, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24518 = new_Method_with(PArray24519, empty_Array, empty_Array, PThreadedCode24520, 3, PSend24521, PSuper24522, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24518, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_send200Response_contentType_do_() {
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24524 = new_Array_with(3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray24525 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24529 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24530 = new_String(L"HTTP/1.1");
    Constant string_24530_Const = new_Constant((Optr)string_24530);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend24528 = new_Send((Optr)PSend24529, SMB_protocol_code_, 2, (Optr)string_24530_Const, (Optr)int_200_Const);
    Assign PAssign24527 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24528);
    String string_24531 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24531_Const = new_Constant((Optr)string_24531);
    // headerAt:put:. 
    Send PSend24532 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24531_Const, (Optr)VAR_contentType_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24533 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24534 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)VAR_aString_0_0);
    Array PThreadedCode24526 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24527, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24529, (Optr)&t_push1, (Optr)string_24530, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend24528, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24531, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_send2, (Optr)PSend24532, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24533, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend24534, (Optr)&t_method_return);
    Method PMethod24523 = new_Method_with(PArray24524, PArray24525, empty_Array, PThreadedCode24526, 4, PAssign24527, PSend24532, PSend24533, PSend24534);
    
    MethodClosure MC_SMB_send200Response_contentType_do_ = new_MethodClosure((Method)PMethod24523, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_do_, MC_SMB_send200Response_contentType_do_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode24536 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_method_return);
    Method PMethod24535 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24536, 1, slot_WebClient_Core_WebRequest_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod24535, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Character char_2665 = new_Character(L'#');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_2665_Const = new_Constant((Optr)char_2665);
    // copyUpTo:. 
    Send PSend24539 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyUpTo_, 1, (Optr)char_2665_Const);
    Character char_23989 = new_Character(L'?');
    Constant char_23989_Const = new_Constant((Optr)char_23989);
    // copyUpTo:. 
    Send PSend24540 = new_Send((Optr)PSend24539, SMB_copyUpTo_, 1, (Optr)char_23989_Const);
    Array PThreadedCode24538 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend24539, (Optr)&t_push1, (Optr)char_23989, (Optr)&t_send1, (Optr)PSend24540, (Optr)&t_method_return);
    Method PMethod24537 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24538, 1, PSend24540);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24537, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_send404Response_do_() {
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24542 = new_Array_with(2, (Optr)VAR_body_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray24543 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24547 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24548 = new_String(L"HTTP/1.1");
    Constant string_24548_Const = new_Constant((Optr)string_24548);
    SmallInt int_404 = new_SmallInt(404);
    Constant int_404_Const = new_Constant((Optr)int_404);
    // protocol:code:. 
    Send PSend24546 = new_Send((Optr)PSend24547, SMB_protocol_code_, 2, (Optr)string_24548_Const, (Optr)int_404_Const);
    Assign PAssign24545 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend24546);
    String string_24549 = new_String(L"Content-Type");
    String string_24550 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24549_Const = new_Constant((Optr)string_24549);
    Constant string_24550_Const = new_Constant((Optr)string_24550);
    // headerAt:put:. 
    Send PSend24551 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24549_Const, (Optr)string_24550_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24552 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_2);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24553 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_0);
    Array PThreadedCode24544 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24545, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24547, (Optr)&t_push1, (Optr)string_24548, (Optr)&t_push1, (Optr)int_404, (Optr)&t_send2, (Optr)PSend24546, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24549, (Optr)&t_push1, (Optr)string_24550, (Optr)&t_send2, (Optr)PSend24551, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_send1, (Optr)PSend24552, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_send2, (Optr)PSend24553, (Optr)&t_method_return);
    Method PMethod24541 = new_Method_with(PArray24542, PArray24543, empty_Array, PThreadedCode24544, 4, PAssign24545, PSend24551, PSend24552, PSend24553);
    
    MethodClosure MC_SMB_send404Response_do_ = new_MethodClosure((Method)PMethod24541, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_do_, MC_SMB_send404Response_do_);
}


static void init_SMB_stream200Response_size_type_() {
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Array PArray24555 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24558 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24559 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24557 = new_Block_with(PArray24558, empty_Array, PThreadedCode24559, 0);
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    // stream200Response:size:type:do:. 
    Send PSend24560 = new_Send((Optr)self, SMB_stream200Response_size_type_do_, 4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24557);
    Array PThreadedCode24556 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24557, (Optr)&t_send4, (Optr)PSend24560, (Optr)&t_method_return);
    Method PMethod24554 = new_Method_with(PArray24555, empty_Array, empty_Array, PThreadedCode24556, 1, PSend24560);
    
    MethodClosure MC_SMB_stream200Response_size_type_ = new_MethodClosure((Method)PMethod24554, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_, MC_SMB_stream200Response_size_type_);
}


static void init_SMB_isTraceRequest() {
    Symbol SMB_isTraceRequest = new_Symbol(L"isTraceRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24563 = new_Send((Optr)self, SMB_method, 0);
    String string_24564 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24564_Const = new_Constant((Optr)string_24564);
    // =. 
    Send PSend24565 = new_Send((Optr)PSend24563, SMB__equals_, 1, (Optr)string_24564_Const);
    Array PThreadedCode24562 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24563, (Optr)&t_push1, (Optr)string_24564, (Optr)&t_send1, (Optr)PSend24565, (Optr)&t_method_return);
    Method PMethod24561 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24562, 1, PSend24565);
    
    MethodClosure MC_SMB_isTraceRequest = new_MethodClosure((Method)PMethod24561, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isTraceRequest, MC_SMB_isTraceRequest);
}


static void init_SMB_sendOptionsResponse_() {
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray24567 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_24569 = new_String(L"");
    String string_24570 = new_String(L"application/octet-stream");
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24572 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24574 = new_String(L"allow");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray24576 = new_Array_with(1, (Optr)VAR_s_2_0);
    Variable VAR_m_3_0 = new_Variable_named(L"m", 3);
    Array PArray24579 = new_Array_with(1, (Optr)VAR_m_3_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24581 = new_Send((Optr)VAR_s_2_0, SMB_nextPutAll_, 1, (Optr)VAR_m_3_0);
    Array PThreadedCode24580 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_m_3_0, (Optr)&t_send1, (Optr)PSend24581, (Optr)&t_method_return);
    Block PBlock24578 = new_Block_with(PArray24579, empty_Array, PThreadedCode24580, 1, PSend24581);
    Character char_24068 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_24068_Const = new_Constant((Optr)char_24068);
    // nextPut:. 
    Send PSend24584 = new_Send((Optr)VAR_s_2_0, SMB_nextPut_, 1, (Optr)char_24068_Const);
    Array PThreadedCode24583 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)char_24068, (Optr)&t_send1, (Optr)PSend24584, (Optr)&t_block_return);
    Block PBlock24582 = new_Block_with(empty_Array, empty_Array, PThreadedCode24583, 1, PSend24584);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend24585 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock24578, (Optr)PBlock24582);
    Array PThreadedCode24577 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock24578, (Optr)&t_push_closure, (Optr)PBlock24582, (Optr)&t_send2, (Optr)PSend24585, (Optr)&t_method_return);
    Block PBlock24575 = new_Block_with(PArray24576, empty_Array, PThreadedCode24577, 1, PSend24585);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend24586 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock24575);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24574_Const = new_Constant((Optr)string_24574);
    // headerAt:put:. 
    Send PSend24587 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24574_Const, (Optr)PSend24586);
    Array PThreadedCode24573 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24574, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock24575, (Optr)&t_send1, (Optr)PSend24586, (Optr)&t_send2, (Optr)PSend24587, (Optr)&t_method_return);
    Block PBlock24571 = new_Block_with(PArray24572, empty_Array, PThreadedCode24573, 1, PSend24587);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Constant string_24569_Const = new_Constant((Optr)string_24569);
    Constant string_24570_Const = new_Constant((Optr)string_24570);
    // send200Response:contentType:do:. 
    Send PSend24588 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)string_24569_Const, (Optr)string_24570_Const, (Optr)PBlock24571);
    Array PThreadedCode24568 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24569, (Optr)&t_push1, (Optr)string_24570, (Optr)&t_push_closure, (Optr)PBlock24571, (Optr)&t_send3, (Optr)PSend24588, (Optr)&t_method_return);
    Method PMethod24566 = new_Method_with(PArray24567, empty_Array, empty_Array, PThreadedCode24568, 1, PSend24588);
    
    MethodClosure MC_SMB_sendOptionsResponse_ = new_MethodClosure((Method)PMethod24566, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendOptionsResponse_, MC_SMB_sendOptionsResponse_);
}


static void init_SMB_rawUrl() {
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    Array PThreadedCode24590 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_method_return);
    Method PMethod24589 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24590, 1, slot_WebClient_Core_WebRequest_rawUrl);
    
    MethodClosure MC_SMB_rawUrl = new_MethodClosure((Method)PMethod24589, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl, MC_SMB_rawUrl);
}


static void init_SMB_sendResponseCode_content_type_close_() {
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBool_0_3 = new_Variable_named(L"aBool", 0);
    Array PArray24592 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBool_0_3);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24595 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24600 = new_String(L"Connection");
    String string_24601 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24600_Const = new_Constant((Optr)string_24600);
    Constant string_24601_Const = new_Constant((Optr)string_24601);
    // headerAt:put:. 
    Send PSend24602 = new_Send((Optr)VAR_hdr_1_0, SMB_headerAt_put_, 2, (Optr)string_24600_Const, (Optr)string_24601_Const);
    Array PThreadedCode24599 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_push1, (Optr)string_24600, (Optr)&t_push1, (Optr)string_24601, (Optr)&t_send2, (Optr)PSend24602, (Optr)&t_block_return);
    Block PBlock24598 = new_Block_with(empty_Array, empty_Array, PThreadedCode24599, 1, PSend24602);
    // ifTrue:. 
    Send PSend24597 = new_Send((Optr)VAR_aBool_0_3, SMB_ifTrue_, 1, (Optr)PBlock24598);
    Array PThreadedCode24596 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBool_0_3, (Optr)&t_send_ifTrue_, (Optr)PSend24597, (Optr)PBlock24598, (Optr)&t_method_return);
    Block PBlock24594 = new_Block_with(PArray24595, empty_Array, PThreadedCode24596, 1, PSend24597);
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    // sendResponseCode:content:type:do:. 
    Send PSend24603 = new_Send((Optr)self, SMB_sendResponseCode_content_type_do_, 4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24594);
    Array PThreadedCode24593 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24594, (Optr)&t_send4, (Optr)PSend24603, (Optr)&t_method_return);
    Method PMethod24591 = new_Method_with(PArray24592, empty_Array, empty_Array, PThreadedCode24593, 1, PSend24603);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_close_ = new_MethodClosure((Method)PMethod24591, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_close_, MC_SMB_sendResponseCode_content_type_close_);
}


static void init_class_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24605 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24607 = new_Send((Optr)self, SMB_new, 0);
    // readFrom:. 
    Send PSend24608 = new_Send((Optr)PSend24607, SMB_readFrom_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24606 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24607, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24608, (Optr)&t_method_return);
    Method PMethod24604 = new_Method_with(PArray24605, empty_Array, empty_Array, PThreadedCode24606, 1, PSend24608);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24604, HEADER(WebClient_Core_WebRequest_Class));
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