#include <lib/class/WebClient/Core/WebRequest.h>


Optr layout_WebClient_Core_WebRequest_Class_class;
Optr slot_WebClient_Core_WebRequest_method;
Optr slot_WebClient_Core_WebRequest_request;
Optr slot_WebClient_Core_WebRequest_rawUrl;
Optr slot_WebClient_Core_WebRequest_server;
Optr layout_WebClient_Core_WebRequest;


static void init_SMB_stream200Response_size_type_() {
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Array PArray23660 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23663 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23664 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23662 = new_Block_with(PArray23663, empty_Array, PThreadedCode23664, 0);
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    // stream200Response:size:type:do:. 
    Send PSend23665 = new_Send((Optr)self, SMB_stream200Response_size_type_do_, 4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock23662);
    Array PThreadedCode23661 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock23662, (Optr)&t_send4, (Optr)PSend23665, (Optr)&t_method_return);
    Method PMethod23659 = new_Method_with(PArray23660, empty_Array, empty_Array, PThreadedCode23661, 1, PSend23665);
    
    MethodClosure MC_SMB_stream200Response_size_type_ = new_MethodClosure((Method)PMethod23659, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_, MC_SMB_stream200Response_size_type_);
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
    Array PArray23667 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray23668 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23671 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign23673 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend23674 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend23678 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ascii, 0);
    Array PThreadedCode23677 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23678, (Optr)&t_block_return);
    Block PBlock23676 = new_Block_with(empty_Array, empty_Array, PThreadedCode23677, 1, PSend23678);
    // ifTrue:. 
    Send PSend23675 = new_Send((Optr)PSend23674, SMB_ifTrue_, 1, (Optr)PBlock23676);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23681 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend23680 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend23681);
    Assign PAssign23679 = new_Assign((Optr)slot_WebClient_Core_WebRequest_request, (Optr)PSend23680);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_23684 = new_String(L" ");
    Constant string_23684_Const = new_Constant((Optr)string_23684);
    // findTokens:. 
    Send PSend23683 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_findTokens_, 1, (Optr)string_23684_Const);
    Assign PAssign23682 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend23683);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23685 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend23686 = new_Send((Optr)PSend23685, SMB__lt_, 1, (Optr)int_2_Const);
    String string_23690 = new_String(L"Invalid HTTP request: ");
    Constant string_23690_Const = new_Constant((Optr)string_23690);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23691 = new_Send((Optr)string_23690_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebRequest_request);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23692 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23691);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23693 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23692);
    Array PThreadedCode23689 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23690, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_send1, (Optr)PSend23691, (Optr)&t_send1, (Optr)PSend23692, (Optr)&t_send1, (Optr)PSend23693, (Optr)&t_block_return);
    Block PBlock23688 = new_Block_with(empty_Array, empty_Array, PThreadedCode23689, 1, PSend23693);
    // ifTrue:. 
    Send PSend23687 = new_Send((Optr)PSend23686, SMB_ifTrue_, 1, (Optr)PBlock23688);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23695 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign23694 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)PSend23695);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend23697 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Assign PAssign23696 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)PSend23697);
    // size. 
    Send PSend23698 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23699 = new_Send((Optr)PSend23698, SMB__gt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_third = new_Symbol(L"third");
    // third. 
    Send PSend23704 = new_Send((Optr)VAR_tokens_0_1, SMB_third, 0);
    Assign PAssign23703 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend23704);
    Array PThreadedCode23702 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23703, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23704, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23701 = new_Block_with(empty_Array, empty_Array, PThreadedCode23702, 1, PAssign23703);
    String string_23708 = new_String(L"HTTP/1.0");
    Constant string_23708_Const = new_Constant((Optr)string_23708);
    Assign PAssign23707 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23708_Const);
    Array PThreadedCode23706 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign23707, (Optr)&t_push1, (Optr)string_23708, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23705 = new_Block_with(empty_Array, empty_Array, PThreadedCode23706, 1, PAssign23707);
    // ifTrue:ifFalse:. 
    Send PSend23700 = new_Send((Optr)PSend23699, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23701, (Optr)PBlock23705);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend23710 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign23709 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23710);
    Array PThreadedCode23672 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push1, (Optr)PAssign23673, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23674, (Optr)&t_send_ifTrue_, (Optr)PSend23675, (Optr)PBlock23676, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23679, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23681, (Optr)&t_send1, (Optr)PSend23680, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23682, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push1, (Optr)string_23684, (Optr)&t_send1, (Optr)PSend23683, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23685, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23686, (Optr)&t_send_ifTrue_, (Optr)PSend23687, (Optr)PBlock23688, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23694, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23695, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23696, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23697, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23698, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23699, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23700, (Optr)PBlock23701, (Optr)PBlock23705, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23709, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23710, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23670 = new_Block_with(PArray23671, empty_Array, PThreadedCode23672, 10, PAssign23673, PSend23675, PAssign23679, PAssign23682, PSend23687, PAssign23694, PAssign23696, PSend23700, PAssign23709, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23711 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23670);
    Array PThreadedCode23669 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23670, (Optr)&t_send1, (Optr)PSend23711, (Optr)&t_method_return);
    Method PMethod23666 = new_Method_with(PArray23667, PArray23668, empty_Array, PThreadedCode23669, 1, PSend23711);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod23666, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_send302Response_() {
    Symbol SMB_send302Response_ = new_Symbol(L"send302Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23713 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23716 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23717 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23715 = new_Block_with(PArray23716, empty_Array, PThreadedCode23717, 0);
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    // send302Response:do:. 
    Send PSend23718 = new_Send((Optr)self, SMB_send302Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23715);
    Array PThreadedCode23714 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23715, (Optr)&t_send2, (Optr)PSend23718, (Optr)&t_method_return);
    Method PMethod23712 = new_Method_with(PArray23713, empty_Array, empty_Array, PThreadedCode23714, 1, PSend23718);
    
    MethodClosure MC_SMB_send302Response_ = new_MethodClosure((Method)PMethod23712, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_, MC_SMB_send302Response_);
}


static void init_SMB_postFields() {
    Symbol SMB_postFields = new_Symbol(L"postFields");
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23721 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23724 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23725 = new_String(L"application/x-www-form-urlencoded");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23725_Const = new_Constant((Optr)string_23725);
    // =. 
    Send PSend23726 = new_Send((Optr)PSend23724, SMB__equals_, 1, (Optr)string_23725_Const);
    Array PThreadedCode23723 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23724, (Optr)&t_push1, (Optr)string_23725, (Optr)&t_send1, (Optr)PSend23726, (Optr)&t_block_return);
    Block PBlock23722 = new_Block_with(empty_Array, empty_Array, PThreadedCode23723, 1, PSend23726);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23727 = new_Send((Optr)PSend23721, SMB_and_, 1, (Optr)PBlock23722);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23731 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23732 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)PSend23731, (Optr)true_Const);
    Array PThreadedCode23730 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23731, (Optr)&t_push_true, (Optr)&t_send2, (Optr)PSend23732, (Optr)&t_block_return);
    Block PBlock23729 = new_Block_with(empty_Array, empty_Array, PThreadedCode23730, 1, PSend23732);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23735 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23734 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23735, (Optr)&t_block_return);
    Block PBlock23733 = new_Block_with(empty_Array, empty_Array, PThreadedCode23734, 1, PSend23735);
    // ifTrue:ifFalse:. 
    Send PSend23728 = new_Send((Optr)PSend23727, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23729, (Optr)PBlock23733);
    Array PThreadedCode23720 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23721, (Optr)&t_push_closure, (Optr)PBlock23722, (Optr)&t_send1, (Optr)PSend23727, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23728, (Optr)PBlock23729, (Optr)PBlock23733, (Optr)&t_method_return);
    Method PMethod23719 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23720, 1, PSend23728);
    
    MethodClosure MC_SMB_postFields = new_MethodClosure((Method)PMethod23719, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_postFields, MC_SMB_postFields);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper23738 = new_Super(SMB_initialize, 0);
    String string_23740 = new_String(L"GET");
    Constant string_23740_Const = new_Constant((Optr)string_23740);
    Assign PAssign23739 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)string_23740_Const);
    String string_23742 = new_String(L"HTTP/1.1");
    Constant string_23742_Const = new_Constant((Optr)string_23742);
    Assign PAssign23741 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23742_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23744 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23743 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23744);
    Array PThreadedCode23737 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper23738, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23739, (Optr)&t_push1, (Optr)string_23740, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23741, (Optr)&t_push1, (Optr)string_23742, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23743, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23744, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23736 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23737, 5, PSuper23738, PAssign23739, PAssign23741, PAssign23743, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23736, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_send400Response() {
    Symbol SMB_send400Response = new_Symbol(L"send400Response");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray23746 = new_Array_with(1, (Optr)VAR_message_0_0);
    String string_23750 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_23750_Const = new_Constant((Optr)string_23750);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23751 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_23751_Const = new_Constant((Optr)string_23751);
    // ,. 
    Send PSend23749 = new_Send((Optr)string_23750_Const, SMB__append_, 1, (Optr)string_23751_Const);
    Assign PAssign23748 = new_Assign((Optr)VAR_message_0_0, (Optr)PSend23749);
    SmallInt int_400 = new_SmallInt(400);
    String string_23752 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23752_Const = new_Constant((Optr)string_23752);
    // sendResponseCode:content:type:close:. 
    Send PSend23753 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_400_Const, (Optr)VAR_message_0_0, (Optr)string_23752_Const, (Optr)true_Const);
    Array PThreadedCode23747 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23748, (Optr)&t_push1, (Optr)string_23750, (Optr)&t_push1, (Optr)string_23751, (Optr)&t_send1, (Optr)PSend23749, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push1, (Optr)string_23752, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23753, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23745 = new_Method_with(empty_Array, PArray23746, empty_Array, PThreadedCode23747, 3, PAssign23748, PSend23753, self);
    
    MethodClosure MC_SMB_send400Response = new_MethodClosure((Method)PMethod23745, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send400Response, MC_SMB_send400Response);
}


static void init_SMB_newResponse() {
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23757 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_request_ = new_Symbol(L"request:");
    // request:. 
    Send PSend23759 = new_Send((Optr)VAR__receiver__1_0, SMB_request_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23760 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23758 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23759, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23760, (Optr)&t_method_return);
    Block PBlock23756 = new_Block_with(PArray23757, empty_Array, PThreadedCode23758, 2, PSend23759, PSend23760);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23761 = new_Send((Optr)PWebResponse_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23762 = new_Send((Optr)PBlock23756, SMB_value_, 1, (Optr)PSend23761);
    Array PThreadedCode23755 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock23756, (Optr)&t_push_class_reference, (Optr)PWebResponse_classReference, (Optr)&t_send0, (Optr)PSend23761, (Optr)&t_send1, (Optr)PSend23762, (Optr)&t_method_return);
    Method PMethod23754 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23755, 1, PSend23762);
    
    MethodClosure MC_SMB_newResponse = new_MethodClosure((Method)PMethod23754, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newResponse, MC_SMB_newResponse);
}


static void init_SMB_send3xxResponse_code_() {
    Symbol SMB_send3xxResponse_code_ = new_Symbol(L"send3xxResponse:code:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Array PArray23764 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23767 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23768 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23766 = new_Block_with(PArray23767, empty_Array, PThreadedCode23768, 0);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    // send3xxResponse:code:do:. 
    Send PSend23769 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)PBlock23766);
    Array PThreadedCode23765 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_push_closure, (Optr)PBlock23766, (Optr)&t_send3, (Optr)PSend23769, (Optr)&t_method_return);
    Method PMethod23763 = new_Method_with(PArray23764, empty_Array, empty_Array, PThreadedCode23765, 1, PSend23769);
    
    MethodClosure MC_SMB_send3xxResponse_code_ = new_MethodClosure((Method)PMethod23763, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_, MC_SMB_send3xxResponse_code_);
}


static void init_SMB_sendResponse_chunked_do_() {
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Variable VAR_hdrBlock_0_2 = new_Variable_named(L"hdrBlock", 0);
    Array PArray23771 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)VAR_hdrBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray23772 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23776 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23777 = new_String(L"HTTP/1.1");
    Constant string_23777_Const = new_Constant((Optr)string_23777);
    // protocol:code:. 
    Send PSend23775 = new_Send((Optr)PSend23776, SMB_protocol_code_, 2, (Optr)string_23777_Const, (Optr)VAR_code_0_0);
    Assign PAssign23774 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23775);
    String string_23778 = new_String(L"Transfer-Encoding");
    String string_23779 = new_String(L"chunked");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23778_Const = new_Constant((Optr)string_23778);
    Constant string_23779_Const = new_Constant((Optr)string_23779);
    // headerAt:put:. 
    Send PSend23780 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23778_Const, (Optr)string_23779_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23781 = new_Send((Optr)VAR_hdrBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray23783 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    // stream:. 
    Send PSend23785 = new_Send((Optr)VAR_resp_0_3, SMB_stream_, 1, (Optr)VAR_aStream_1_0);
    // value:. 
    Send PSend23786 = new_Send((Optr)VAR_chunkBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23788 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23790 = new_String(L"0");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_23790_Const = new_Constant((Optr)string_23790);
    // nextPutAll:. 
    Send PSend23791 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)string_23790_Const);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23792 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    // crlf. 
    Send PSend23793 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23794 = new_Send((Optr)VAR__receiver__2_0, SMB_flush, 0);
    Array PThreadedCode23789 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_23790, (Optr)&t_send1, (Optr)PSend23791, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23792, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23793, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23794, (Optr)&t_method_return);
    Block PBlock23787 = new_Block_with(PArray23788, empty_Array, PThreadedCode23789, 4, PSend23791, PSend23792, PSend23793, PSend23794);
    // value:. 
    Send PSend23795 = new_Send((Optr)PBlock23787, SMB_value_, 1, (Optr)VAR_aStream_1_0);
    Array PThreadedCode23784 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23785, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23786, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23787, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23795, (Optr)&t_method_return);
    Block PBlock23782 = new_Block_with(PArray23783, empty_Array, PThreadedCode23784, 3, PSend23785, PSend23786, PSend23795);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23796 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_3, (Optr)PBlock23782);
    Array PThreadedCode23773 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23774, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23776, (Optr)&t_push1, (Optr)string_23777, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23775, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23778, (Optr)&t_push1, (Optr)string_23779, (Optr)&t_send2, (Optr)PSend23780, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23781, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_closure, (Optr)PBlock23782, (Optr)&t_send2, (Optr)PSend23796, (Optr)&t_method_return);
    Method PMethod23770 = new_Method_with(PArray23771, PArray23772, empty_Array, PThreadedCode23773, 4, PAssign23774, PSend23780, PSend23781, PSend23796);
    
    MethodClosure MC_SMB_sendResponse_chunked_do_ = new_MethodClosure((Method)PMethod23770, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_do_, MC_SMB_sendResponse_chunked_do_);
}


static void init_SMB_isOptionsRequest() {
    Symbol SMB_isOptionsRequest = new_Symbol(L"isOptionsRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23799 = new_Send((Optr)self, SMB_method, 0);
    String string_23800 = new_String(L"OPTIONS");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23800_Const = new_Constant((Optr)string_23800);
    // =. 
    Send PSend23801 = new_Send((Optr)PSend23799, SMB__equals_, 1, (Optr)string_23800_Const);
    Array PThreadedCode23798 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23799, (Optr)&t_push1, (Optr)string_23800, (Optr)&t_send1, (Optr)PSend23801, (Optr)&t_method_return);
    Method PMethod23797 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23798, 1, PSend23801);
    
    MethodClosure MC_SMB_isOptionsRequest = new_MethodClosure((Method)PMethod23797, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isOptionsRequest, MC_SMB_isOptionsRequest);
}


static void init_SMB_isTraceRequest() {
    Symbol SMB_isTraceRequest = new_Symbol(L"isTraceRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23804 = new_Send((Optr)self, SMB_method, 0);
    String string_23805 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23805_Const = new_Constant((Optr)string_23805);
    // =. 
    Send PSend23806 = new_Send((Optr)PSend23804, SMB__equals_, 1, (Optr)string_23805_Const);
    Array PThreadedCode23803 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23804, (Optr)&t_push1, (Optr)string_23805, (Optr)&t_send1, (Optr)PSend23806, (Optr)&t_method_return);
    Method PMethod23802 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23803, 1, PSend23806);
    
    MethodClosure MC_SMB_isTraceRequest = new_MethodClosure((Method)PMethod23802, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isTraceRequest, MC_SMB_isTraceRequest);
}


static void init_SMB_fields() {
    Symbol SMB_fields = new_Symbol(L"fields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray23808 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23811 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23810 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23811);
    Symbol SMB_getFields = new_Symbol(L"getFields");
    // getFields. 
    Send PSend23812 = new_Send((Optr)self, SMB_getFields, 0);
    Variable VAR_a_1_0 = new_Variable_named(L"a", 1);
    Array PArray23814 = new_Array_with(1, (Optr)VAR_a_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23816 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23815 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23816, (Optr)&t_method_return);
    Block PBlock23813 = new_Block_with(PArray23814, empty_Array, PThreadedCode23815, 1, PSend23816);
    Symbol SMB_associationsDo_ = new_Symbol(L"associationsDo:");
    // associationsDo:. 
    Send PSend23817 = new_Send((Optr)PSend23812, SMB_associationsDo_, 1, (Optr)PBlock23813);
    Symbol SMB_postFields = new_Symbol(L"postFields");
    // postFields. 
    Send PSend23818 = new_Send((Optr)self, SMB_postFields, 0);
    Array PArray23820 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23822 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23821 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23822, (Optr)&t_method_return);
    Block PBlock23819 = new_Block_with(PArray23820, empty_Array, PThreadedCode23821, 1, PSend23822);
    // associationsDo:. 
    Send PSend23823 = new_Send((Optr)PSend23818, SMB_associationsDo_, 1, (Optr)PBlock23819);
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    // multipartFields. 
    Send PSend23824 = new_Send((Optr)self, SMB_multipartFields, 0);
    Array PArray23826 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23828 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23827 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23828, (Optr)&t_method_return);
    Block PBlock23825 = new_Block_with(PArray23826, empty_Array, PThreadedCode23827, 1, PSend23828);
    // associationsDo:. 
    Send PSend23829 = new_Send((Optr)PSend23824, SMB_associationsDo_, 1, (Optr)PBlock23825);
    Array PThreadedCode23809 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23810, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23811, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23812, (Optr)&t_push_closure, (Optr)PBlock23813, (Optr)&t_send1, (Optr)PSend23817, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23818, (Optr)&t_push_closure, (Optr)PBlock23819, (Optr)&t_send1, (Optr)PSend23823, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23824, (Optr)&t_push_closure, (Optr)PBlock23825, (Optr)&t_send1, (Optr)PSend23829, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23807 = new_Method_with(empty_Array, PArray23808, empty_Array, PThreadedCode23809, 5, PAssign23810, PSend23817, PSend23823, PSend23829, VAR_fields_0_0);
    
    MethodClosure MC_SMB_fields = new_MethodClosure((Method)PMethod23807, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_fields, MC_SMB_fields);
}


static void init_SMB_send404Response() {
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
    String string_23832 = new_String(L"<html><head><title>404 Not Found</title></head><body><h1>404 Not Found</h1><p>The requested URL ");
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23833 = new_Send((Optr)self, SMB_rawUrl, 0);
    Constant string_23832_Const = new_Constant((Optr)string_23832);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23834 = new_Send((Optr)string_23832_Const, SMB__append_, 1, (Optr)PSend23833);
    String string_23835 = new_String(L" was not found on this server.</p></body></html>");
    Constant string_23835_Const = new_Constant((Optr)string_23835);
    // ,. 
    Send PSend23836 = new_Send((Optr)PSend23834, SMB__append_, 1, (Optr)string_23835_Const);
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    // send404Response:. 
    Send PSend23837 = new_Send((Optr)self, SMB_send404Response_, 1, (Optr)PSend23836);
    Array PThreadedCode23831 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23832, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23833, (Optr)&t_send1, (Optr)PSend23834, (Optr)&t_push1, (Optr)string_23835, (Optr)&t_send1, (Optr)PSend23836, (Optr)&t_send1, (Optr)PSend23837, (Optr)&t_method_return);
    Method PMethod23830 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23831, 1, PSend23837);
    
    MethodClosure MC_SMB_send404Response = new_MethodClosure((Method)PMethod23830, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response, MC_SMB_send404Response);
}


static void init_SMB_rawUrl() {
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    Array PThreadedCode23839 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_method_return);
    Method PMethod23838 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23839, 1, slot_WebClient_Core_WebRequest_rawUrl);
    
    MethodClosure MC_SMB_rawUrl = new_MethodClosure((Method)PMethod23838, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl, MC_SMB_rawUrl);
}


static void init_SMB_send200Response_contentType_() {
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Array PArray23841 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23844 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23845 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23843 = new_Block_with(PArray23844, empty_Array, PThreadedCode23845, 0);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    // send200Response:contentType:do:. 
    Send PSend23846 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)PBlock23843);
    Array PThreadedCode23842 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_push_closure, (Optr)PBlock23843, (Optr)&t_send3, (Optr)PSend23846, (Optr)&t_method_return);
    Method PMethod23840 = new_Method_with(PArray23841, empty_Array, empty_Array, PThreadedCode23842, 1, PSend23846);
    
    MethodClosure MC_SMB_send200Response_contentType_ = new_MethodClosure((Method)PMethod23840, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_, MC_SMB_send200Response_contentType_);
}


static void init_SMB_stream200Response_() {
    Symbol SMB_stream200Response_ = new_Symbol(L"stream200Response:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23848 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23850 = new_Send((Optr)VAR_aStream_0_0, SMB_size, 0);
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    // stream200Response:size:. 
    Send PSend23851 = new_Send((Optr)self, SMB_stream200Response_size_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend23850);
    Array PThreadedCode23849 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23850, (Optr)&t_send2, (Optr)PSend23851, (Optr)&t_method_return);
    Method PMethod23847 = new_Method_with(PArray23848, empty_Array, empty_Array, PThreadedCode23849, 1, PSend23851);
    
    MethodClosure MC_SMB_stream200Response_ = new_MethodClosure((Method)PMethod23847, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_, MC_SMB_stream200Response_);
}


static void init_SMB_sendResponse_contentStream_size_() {
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_2 = new_Variable_named(L"streamSize", 0);
    Array PArray23853 = new_Array_with(3, (Optr)VAR_resp_0_0, (Optr)VAR_aStream_0_1, (Optr)VAR_streamSize_0_2);
    String string_23857 = new_String(L"Connection");
    String string_23858 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23857_Const = new_Constant((Optr)string_23857);
    Constant string_23858_Const = new_Constant((Optr)string_23858);
    // headerAt:put:. 
    Send PSend23859 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23857_Const, (Optr)string_23858_Const);
    Array PThreadedCode23856 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23857, (Optr)&t_push1, (Optr)string_23858, (Optr)&t_send2, (Optr)PSend23859, (Optr)&t_block_return);
    Block PBlock23855 = new_Block_with(empty_Array, empty_Array, PThreadedCode23856, 1, PSend23859);
    String string_23862 = new_String(L"Content-Length");
    Constant string_23862_Const = new_Constant((Optr)string_23862);
    // headerAt:put:. 
    Send PSend23863 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23862_Const, (Optr)VAR_streamSize_0_2);
    Array PThreadedCode23861 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23862, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_send2, (Optr)PSend23863, (Optr)&t_block_return);
    Block PBlock23860 = new_Block_with(empty_Array, empty_Array, PThreadedCode23861, 1, PSend23863);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend23864 = new_Send((Optr)VAR_streamSize_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23855, (Optr)PBlock23860);
    Variable VAR_sockStream_1_0 = new_Variable_named(L"sockStream", 1);
    Array PArray23866 = new_Array_with(1, (Optr)VAR_sockStream_1_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23868 = new_Send((Optr)VAR_resp_0_0, SMB_streamFrom_to_size_progress_, 4, (Optr)VAR_aStream_0_1, (Optr)VAR_sockStream_1_0, (Optr)VAR_streamSize_0_2, (Optr)nil_Const);
    Array PThreadedCode23867 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_variable, (Optr)VAR_sockStream_1_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23868, (Optr)&t_method_return);
    Block PBlock23865 = new_Block_with(PArray23866, empty_Array, PThreadedCode23867, 1, PSend23868);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23869 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23865);
    Array PThreadedCode23854 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_closure, (Optr)PBlock23855, (Optr)&t_push_closure, (Optr)PBlock23860, (Optr)&t_send2, (Optr)PSend23864, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23865, (Optr)&t_send2, (Optr)PSend23869, (Optr)&t_method_return);
    Method PMethod23852 = new_Method_with(PArray23853, empty_Array, empty_Array, PThreadedCode23854, 2, PSend23864, PSend23869);
    
    MethodClosure MC_SMB_sendResponse_contentStream_size_ = new_MethodClosure((Method)PMethod23852, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentStream_size_, MC_SMB_sendResponse_contentStream_size_);
}


static void init_SMB_server_() {
    Symbol SMB_server_ = new_Symbol(L"server:");
    Variable VAR_aWebServer_0_0 = new_Variable_named(L"aWebServer", 0);
    Array PArray23871 = new_Array_with(1, (Optr)VAR_aWebServer_0_0);
    Assign PAssign23873 = new_Assign((Optr)slot_WebClient_Core_WebRequest_server, (Optr)VAR_aWebServer_0_0);
    Array PThreadedCode23872 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23873, (Optr)&t_push_variable, (Optr)VAR_aWebServer_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23870 = new_Method_with(PArray23871, empty_Array, empty_Array, PThreadedCode23872, 2, PAssign23873, self);
    
    MethodClosure MC_SMB_server_ = new_MethodClosure((Method)PMethod23870, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server_, MC_SMB_server_);
}


static void init_SMB_send301Response_() {
    Symbol SMB_send301Response_ = new_Symbol(L"send301Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23875 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23878 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23879 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23877 = new_Block_with(PArray23878, empty_Array, PThreadedCode23879, 0);
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    // send301Response:do:. 
    Send PSend23880 = new_Send((Optr)self, SMB_send301Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23877);
    Array PThreadedCode23876 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23877, (Optr)&t_send2, (Optr)PSend23880, (Optr)&t_method_return);
    Method PMethod23874 = new_Method_with(PArray23875, empty_Array, empty_Array, PThreadedCode23876, 1, PSend23880);
    
    MethodClosure MC_SMB_send301Response_ = new_MethodClosure((Method)PMethod23874, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_, MC_SMB_send301Response_);
}


static void init_SMB_server() {
    Symbol SMB_server = new_Symbol(L"server");
    Array PThreadedCode23882 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_method_return);
    Method PMethod23881 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23882, 1, slot_WebClient_Core_WebRequest_server);
    
    MethodClosure MC_SMB_server = new_MethodClosure((Method)PMethod23881, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server, MC_SMB_server);
}


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


static void init_SMB_multipartFieldsDo_() {
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23900 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23902 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23905 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23906 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23906_Const = new_Constant((Optr)string_23906);
    // beginsWith:. 
    Send PSend23907 = new_Send((Optr)PSend23905, SMB_beginsWith_, 1, (Optr)string_23906_Const);
    Array PThreadedCode23904 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23905, (Optr)&t_push1, (Optr)string_23906, (Optr)&t_send1, (Optr)PSend23907, (Optr)&t_block_return);
    Block PBlock23903 = new_Block_with(empty_Array, empty_Array, PThreadedCode23904, 1, PSend23907);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23908 = new_Send((Optr)PSend23902, SMB_and_, 1, (Optr)PBlock23903);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23912 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend23913 = new_Send((Optr)PSend23912, SMB_readStream, 0);
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    // multipartBoundary. 
    Send PSend23914 = new_Send((Optr)self, SMB_multipartBoundary, 0);
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    // decodeMultipartForm:boundary:do:. 
    Send PSend23915 = new_Send((Optr)PWebUtils_classReference, SMB_decodeMultipartForm_boundary_do_, 3, (Optr)PSend23913, (Optr)PSend23914, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode23911 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23912, (Optr)&t_send0, (Optr)PSend23913, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23914, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send3, (Optr)PSend23915, (Optr)&t_block_return);
    Block PBlock23910 = new_Block_with(empty_Array, empty_Array, PThreadedCode23911, 1, PSend23915);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23918 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23917 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23918, (Optr)&t_block_return);
    Block PBlock23916 = new_Block_with(empty_Array, empty_Array, PThreadedCode23917, 1, PSend23918);
    // ifTrue:ifFalse:. 
    Send PSend23909 = new_Send((Optr)PSend23908, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23910, (Optr)PBlock23916);
    Array PThreadedCode23901 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23902, (Optr)&t_push_closure, (Optr)PBlock23903, (Optr)&t_send1, (Optr)PSend23908, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23909, (Optr)PBlock23910, (Optr)PBlock23916, (Optr)&t_method_return);
    Method PMethod23899 = new_Method_with(PArray23900, empty_Array, empty_Array, PThreadedCode23901, 1, PSend23909);
    
    MethodClosure MC_SMB_multipartFieldsDo_ = new_MethodClosure((Method)PMethod23899, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFieldsDo_, MC_SMB_multipartFieldsDo_);
}


static void init_SMB_isPutRequest() {
    Symbol SMB_isPutRequest = new_Symbol(L"isPutRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23921 = new_Send((Optr)self, SMB_method, 0);
    String string_23922 = new_String(L"PUT");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23922_Const = new_Constant((Optr)string_23922);
    // =. 
    Send PSend23923 = new_Send((Optr)PSend23921, SMB__equals_, 1, (Optr)string_23922_Const);
    Array PThreadedCode23920 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23921, (Optr)&t_push1, (Optr)string_23922, (Optr)&t_send1, (Optr)PSend23923, (Optr)&t_method_return);
    Method PMethod23919 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23920, 1, PSend23923);
    
    MethodClosure MC_SMB_isPutRequest = new_MethodClosure((Method)PMethod23919, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPutRequest, MC_SMB_isPutRequest);
}


static void init_SMB_send3xxResponse_code_do_() {
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray23925 = new_Array_with(3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Variable VAR_url_0_4 = new_Variable_named(L"url", 0);
    Array PArray23926 = new_Array_with(2, (Optr)VAR_resp_0_3, (Optr)VAR_url_0_4);
    Assign PAssign23928 = new_Assign((Optr)VAR_url_0_4, (Optr)VAR_location_0_0);
    String string_23929 = new_String(L"://");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23929_Const = new_Constant((Optr)string_23929);
    // findString:. 
    Send PSend23930 = new_Send((Optr)VAR_location_0_0, SMB_findString_, 1, (Optr)string_23929_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend23931 = new_Send((Optr)PSend23930, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_23935 = new_String(L"host");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23935_Const = new_Constant((Optr)string_23935);
    // headerAt:. 
    Send PSend23936 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23935_Const);
    Variable VAR_host_1_0 = new_Variable_named(L"host", 1);
    Array PArray23938 = new_Array_with(1, (Optr)VAR_host_1_0);
    String string_23943 = new_String(L"http://");
    Constant string_23943_Const = new_Constant((Optr)string_23943);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23942 = new_Send((Optr)string_23943_Const, SMB__append_, 1, (Optr)VAR_host_1_0);
    // ,. 
    Send PSend23941 = new_Send((Optr)PSend23942, SMB__append_, 1, (Optr)VAR_location_0_0);
    Assign PAssign23940 = new_Assign((Optr)VAR_url_0_4, (Optr)PSend23941);
    Array PThreadedCode23939 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign23940, (Optr)&t_push1, (Optr)string_23943, (Optr)&t_push_variable, (Optr)VAR_host_1_0, (Optr)&t_send1, (Optr)PSend23942, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_send1, (Optr)PSend23941, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23937 = new_Block_with(PArray23938, empty_Array, PThreadedCode23939, 1, PAssign23940);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23944 = new_Send((Optr)PSend23936, SMB_ifNotEmpty_, 1, (Optr)PBlock23937);
    Array PThreadedCode23934 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23935, (Optr)&t_send1, (Optr)PSend23936, (Optr)&t_push_closure, (Optr)PBlock23937, (Optr)&t_send1, (Optr)PSend23944, (Optr)&t_block_return);
    Block PBlock23933 = new_Block_with(empty_Array, empty_Array, PThreadedCode23934, 1, PSend23944);
    // ifFalse:. 
    Send PSend23932 = new_Send((Optr)PSend23931, SMB_ifFalse_, 1, (Optr)PBlock23933);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23947 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23948 = new_String(L"HTTP/1.1");
    Constant string_23948_Const = new_Constant((Optr)string_23948);
    // protocol:code:. 
    Send PSend23946 = new_Send((Optr)PSend23947, SMB_protocol_code_, 2, (Optr)string_23948_Const, (Optr)VAR_statusCode_0_1);
    Assign PAssign23945 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23946);
    String string_23949 = new_String(L"Location");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23949_Const = new_Constant((Optr)string_23949);
    // headerAt:put:. 
    Send PSend23950 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23949_Const, (Optr)VAR_url_0_4);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23951 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    String string_23952 = new_String(L"");
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Constant string_23952_Const = new_Constant((Optr)string_23952);
    // sendResponse:content:. 
    Send PSend23953 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)string_23952_Const);
    Array PThreadedCode23927 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23928, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)string_23929, (Optr)&t_send1, (Optr)PSend23930, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23931, (Optr)&t_send_ifFalse_, (Optr)PSend23932, (Optr)PBlock23933, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23945, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23947, (Optr)&t_push1, (Optr)string_23948, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_send2, (Optr)PSend23946, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23949, (Optr)&t_push_variable, (Optr)VAR_url_0_4, (Optr)&t_send2, (Optr)PSend23950, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23951, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23952, (Optr)&t_send2, (Optr)PSend23953, (Optr)&t_method_return);
    Method PMethod23924 = new_Method_with(PArray23925, PArray23926, empty_Array, PThreadedCode23927, 6, PAssign23928, PSend23932, PAssign23945, PSend23950, PSend23951, PSend23953);
    
    MethodClosure MC_SMB_send3xxResponse_code_do_ = new_MethodClosure((Method)PMethod23924, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_do_, MC_SMB_send3xxResponse_code_do_);
}


static void init_SMB_send200Response_contentType_do_() {
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray23955 = new_Array_with(3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray23956 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23960 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23961 = new_String(L"HTTP/1.1");
    Constant string_23961_Const = new_Constant((Optr)string_23961);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23959 = new_Send((Optr)PSend23960, SMB_protocol_code_, 2, (Optr)string_23961_Const, (Optr)int_200_Const);
    Assign PAssign23958 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23959);
    String string_23962 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23962_Const = new_Constant((Optr)string_23962);
    // headerAt:put:. 
    Send PSend23963 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23962_Const, (Optr)VAR_contentType_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23964 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23965 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)VAR_aString_0_0);
    Array PThreadedCode23957 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23958, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23960, (Optr)&t_push1, (Optr)string_23961, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23959, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23962, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_send2, (Optr)PSend23963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23964, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23965, (Optr)&t_method_return);
    Method PMethod23954 = new_Method_with(PArray23955, PArray23956, empty_Array, PThreadedCode23957, 4, PAssign23958, PSend23963, PSend23964, PSend23965);
    
    MethodClosure MC_SMB_send200Response_contentType_do_ = new_MethodClosure((Method)PMethod23954, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_do_, MC_SMB_send200Response_contentType_do_);
}


static void init_SMB_isPostRequest() {
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23968 = new_Send((Optr)self, SMB_method, 0);
    String string_23969 = new_String(L"POST");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23969_Const = new_Constant((Optr)string_23969);
    // =. 
    Send PSend23970 = new_Send((Optr)PSend23968, SMB__equals_, 1, (Optr)string_23969_Const);
    Array PThreadedCode23967 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23968, (Optr)&t_push1, (Optr)string_23969, (Optr)&t_send1, (Optr)PSend23970, (Optr)&t_method_return);
    Method PMethod23966 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23967, 1, PSend23970);
    
    MethodClosure MC_SMB_isPostRequest = new_MethodClosure((Method)PMethod23966, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isPostRequest, MC_SMB_isPostRequest);
}


static void init_SMB_rawUrl_() {
    Symbol SMB_rawUrl_ = new_Symbol(L"rawUrl:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23972 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23974 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)VAR_aString_0_0);
    Array PThreadedCode23973 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23974, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23971 = new_Method_with(PArray23972, empty_Array, empty_Array, PThreadedCode23973, 2, PAssign23974, self);
    
    MethodClosure MC_SMB_rawUrl_ = new_MethodClosure((Method)PMethod23971, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl_, MC_SMB_rawUrl_);
}


static void init_SMB_send405Response_() {
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray23976 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_23978 = new_String(L"<html><head><title>405 Method Not Allowed</title></head><body><h1>405 Method Not Allowed</h1><p>The requested method ");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23979 = new_Send((Optr)self, SMB_method, 0);
    Constant string_23978_Const = new_Constant((Optr)string_23978);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23980 = new_Send((Optr)string_23978_Const, SMB__append_, 1, (Optr)PSend23979);
    String string_23981 = new_String(L" is not allowed for the URL");
    Constant string_23981_Const = new_Constant((Optr)string_23981);
    // ,. 
    Send PSend23982 = new_Send((Optr)PSend23980, SMB__append_, 1, (Optr)string_23981_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23983 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23984 = new_Send((Optr)PSend23982, SMB__append_, 1, (Optr)PSend23983);
    String string_23985 = new_String(L"</p></body></html>");
    Constant string_23985_Const = new_Constant((Optr)string_23985);
    // ,. 
    Send PSend23986 = new_Send((Optr)PSend23984, SMB__append_, 1, (Optr)string_23985_Const);
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    // send405Response:content:. 
    Send PSend23987 = new_Send((Optr)self, SMB_send405Response_content_, 2, (Optr)VAR_allowed_0_0, (Optr)PSend23986);
    Array PThreadedCode23977 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push1, (Optr)string_23978, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23979, (Optr)&t_send1, (Optr)PSend23980, (Optr)&t_push1, (Optr)string_23981, (Optr)&t_send1, (Optr)PSend23982, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23983, (Optr)&t_send1, (Optr)PSend23984, (Optr)&t_push1, (Optr)string_23985, (Optr)&t_send1, (Optr)PSend23986, (Optr)&t_send2, (Optr)PSend23987, (Optr)&t_method_return);
    Method PMethod23975 = new_Method_with(PArray23976, empty_Array, empty_Array, PThreadedCode23977, 1, PSend23987);
    
    MethodClosure MC_SMB_send405Response_ = new_MethodClosure((Method)PMethod23975, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_, MC_SMB_send405Response_);
}


static void init_SMB_send500Response_() {
    Symbol SMB_send500Response_ = new_Symbol(L"send500Response:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
    Array PArray23989 = new_Array_with(1, (Optr)VAR_errReport_0_0);
    Variable VAR_errLog_0_1 = new_Variable_named(L"errLog", 0);
    Array PArray23990 = new_Array_with(1, (Optr)VAR_errLog_0_1);
    String string_23996 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_23996_Const = new_Constant((Optr)string_23996);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23997 = new_String(L"<h1>Internal Server Error</h1><pre>");
    Constant string_23997_Const = new_Constant((Optr)string_23997);
    // ,. 
    Send PSend23995 = new_Send((Optr)string_23996_Const, SMB__append_, 1, (Optr)string_23997_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23999 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24000 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend23998 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend23999, (Optr)PSend24000);
    // ,. 
    Send PSend23994 = new_Send((Optr)PSend23995, SMB__append_, 1, (Optr)PSend23998);
    String string_24001 = new_String(L"</pre></body></html>");
    Constant string_24001_Const = new_Constant((Optr)string_24001);
    // ,. 
    Send PSend23993 = new_Send((Optr)PSend23994, SMB__append_, 1, (Optr)string_24001_Const);
    Assign PAssign23992 = new_Assign((Optr)VAR_errLog_0_1, (Optr)PSend23993);
    SmallInt int_500 = new_SmallInt(500);
    String string_24002 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_24002_Const = new_Constant((Optr)string_24002);
    // sendResponseCode:content:type:close:. 
    Send PSend24003 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_1, (Optr)string_24002_Const, (Optr)true_Const);
    Array PThreadedCode23991 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23992, (Optr)&t_push1, (Optr)string_23996, (Optr)&t_push1, (Optr)string_23997, (Optr)&t_send1, (Optr)PSend23995, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23999, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24000, (Optr)&t_send2, (Optr)PSend23998, (Optr)&t_send1, (Optr)PSend23994, (Optr)&t_push1, (Optr)string_24001, (Optr)&t_send1, (Optr)PSend23993, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_1, (Optr)&t_push1, (Optr)string_24002, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend24003, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23988 = new_Method_with(PArray23989, PArray23990, empty_Array, PThreadedCode23991, 3, PAssign23992, PSend24003, self);
    
    MethodClosure MC_SMB_send500Response_ = new_MethodClosure((Method)PMethod23988, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send500Response_, MC_SMB_send500Response_);
}


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24005 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24007 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)VAR_aString_0_0);
    Array PThreadedCode24006 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24007, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24004 = new_Method_with(PArray24005, empty_Array, empty_Array, PThreadedCode24006, 2, PAssign24007, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod24004, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_send404Response_() {
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Array PArray24009 = new_Array_with(1, (Optr)VAR_body_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24012 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24014 = new_String(L"Content-Type");
    String string_24015 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24014_Const = new_Constant((Optr)string_24014);
    Constant string_24015_Const = new_Constant((Optr)string_24015);
    // headerAt:put:. 
    Send PSend24016 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24014_Const, (Optr)string_24015_Const);
    Array PThreadedCode24013 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24014, (Optr)&t_push1, (Optr)string_24015, (Optr)&t_send2, (Optr)PSend24016, (Optr)&t_method_return);
    Block PBlock24011 = new_Block_with(PArray24012, empty_Array, PThreadedCode24013, 1, PSend24016);
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    // send404Response:do:. 
    Send PSend24017 = new_Send((Optr)self, SMB_send404Response_do_, 2, (Optr)VAR_body_0_0, (Optr)PBlock24011);
    Array PThreadedCode24010 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_push_closure, (Optr)PBlock24011, (Optr)&t_send2, (Optr)PSend24017, (Optr)&t_method_return);
    Method PMethod24008 = new_Method_with(PArray24009, empty_Array, empty_Array, PThreadedCode24010, 1, PSend24017);
    
    MethodClosure MC_SMB_send404Response_ = new_MethodClosure((Method)PMethod24008, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_, MC_SMB_send404Response_);
}


static void init_SMB_closeIfTransient_after_() {
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24019 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_close_0_2 = new_Variable_named(L"close", 0);
    Array PArray24020 = new_Array_with(1, (Optr)VAR_close_0_2);
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend24024 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend24023 = new_Send((Optr)PSend24024, SMB_not, 0);
    Assign PAssign24022 = new_Assign((Optr)VAR_close_0_2, (Optr)PSend24023);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24028 = new_String(L"Connection");
    String string_24029 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24028_Const = new_Constant((Optr)string_24028);
    Constant string_24029_Const = new_Constant((Optr)string_24029);
    // headerAt:put:. 
    Send PSend24030 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24028_Const, (Optr)string_24029_Const);
    Array PThreadedCode24027 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24028, (Optr)&t_push1, (Optr)string_24029, (Optr)&t_send2, (Optr)PSend24030, (Optr)&t_block_return);
    Block PBlock24026 = new_Block_with(empty_Array, empty_Array, PThreadedCode24027, 1, PSend24030);
    // ifTrue:. 
    Send PSend24025 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock24026);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24031 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24032 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend24036 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode24035 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24036, (Optr)&t_block_return);
    Block PBlock24034 = new_Block_with(empty_Array, empty_Array, PThreadedCode24035, 1, PSend24036);
    // ifTrue:. 
    Send PSend24033 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock24034);
    Array PThreadedCode24021 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign24022, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24024, (Optr)&t_send0, (Optr)PSend24023, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend24025, (Optr)PBlock24026, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend24031, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend24032, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend24033, (Optr)PBlock24034, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24018 = new_Method_with(PArray24019, PArray24020, empty_Array, PThreadedCode24021, 6, PAssign24022, PSend24025, PSend24031, PSend24032, PSend24033, self);
    
    MethodClosure MC_SMB_closeIfTransient_after_ = new_MethodClosure((Method)PMethod24018, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_closeIfTransient_after_, MC_SMB_closeIfTransient_after_);
}


static void init_SMB_send301Response_do_() {
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24038 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_301 = new_SmallInt(301);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_301_Const = new_Constant((Optr)int_301);
    // send3xxResponse:code:do:. 
    Send PSend24040 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_301_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode24039 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend24040, (Optr)&t_method_return);
    Method PMethod24037 = new_Method_with(PArray24038, empty_Array, empty_Array, PThreadedCode24039, 1, PSend24040);
    
    MethodClosure MC_SMB_send301Response_do_ = new_MethodClosure((Method)PMethod24037, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_do_, MC_SMB_send301Response_do_);
}


static void init_SMB_send405Response_content_() {
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray24042 = new_Array_with(2, (Optr)VAR_allowed_0_0, (Optr)VAR_body_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray24043 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24047 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24048 = new_String(L"HTTP/1.1");
    Constant string_24048_Const = new_Constant((Optr)string_24048);
    SmallInt int_405 = new_SmallInt(405);
    Constant int_405_Const = new_Constant((Optr)int_405);
    // protocol:code:. 
    Send PSend24046 = new_Send((Optr)PSend24047, SMB_protocol_code_, 2, (Optr)string_24048_Const, (Optr)int_405_Const);
    Assign PAssign24045 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend24046);
    String string_24049 = new_String(L"Content-Type");
    String string_24050 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24049_Const = new_Constant((Optr)string_24049);
    Constant string_24050_Const = new_Constant((Optr)string_24050);
    // headerAt:put:. 
    Send PSend24051 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24049_Const, (Optr)string_24050_Const);
    String string_24052 = new_String(L"allow");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray24054 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_m_2_0 = new_Variable_named(L"m", 2);
    Array PArray24057 = new_Array_with(1, (Optr)VAR_m_2_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24059 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)VAR_m_2_0);
    Array PThreadedCode24058 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_m_2_0, (Optr)&t_send1, (Optr)PSend24059, (Optr)&t_method_return);
    Block PBlock24056 = new_Block_with(PArray24057, empty_Array, PThreadedCode24058, 1, PSend24059);
    Character char_24062 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_24062_Const = new_Constant((Optr)char_24062);
    // nextPut:. 
    Send PSend24063 = new_Send((Optr)VAR_s_1_0, SMB_nextPut_, 1, (Optr)char_24062_Const);
    Array PThreadedCode24061 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)char_24062, (Optr)&t_send1, (Optr)PSend24063, (Optr)&t_block_return);
    Block PBlock24060 = new_Block_with(empty_Array, empty_Array, PThreadedCode24061, 1, PSend24063);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend24064 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock24056, (Optr)PBlock24060);
    Array PThreadedCode24055 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock24056, (Optr)&t_push_closure, (Optr)PBlock24060, (Optr)&t_send2, (Optr)PSend24064, (Optr)&t_method_return);
    Block PBlock24053 = new_Block_with(PArray24054, empty_Array, PThreadedCode24055, 1, PSend24064);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend24065 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock24053);
    Constant string_24052_Const = new_Constant((Optr)string_24052);
    // headerAt:put:. 
    Send PSend24066 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24052_Const, (Optr)PSend24065);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24067 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_1);
    Array PThreadedCode24044 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign24045, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24047, (Optr)&t_push1, (Optr)string_24048, (Optr)&t_push1, (Optr)int_405, (Optr)&t_send2, (Optr)PSend24046, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24049, (Optr)&t_push1, (Optr)string_24050, (Optr)&t_send2, (Optr)PSend24051, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24052, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock24053, (Optr)&t_send1, (Optr)PSend24065, (Optr)&t_send2, (Optr)PSend24066, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend24067, (Optr)&t_method_return);
    Method PMethod24041 = new_Method_with(PArray24042, PArray24043, empty_Array, PThreadedCode24044, 4, PAssign24045, PSend24051, PSend24066, PSend24067);
    
    MethodClosure MC_SMB_send405Response_content_ = new_MethodClosure((Method)PMethod24041, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_content_, MC_SMB_send405Response_content_);
}


static void init_SMB_stream200Response_size_type_do_() {
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray24069 = new_Array_with(4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray24070 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24074 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24075 = new_String(L"HTTP/1.1");
    Constant string_24075_Const = new_Constant((Optr)string_24075);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend24073 = new_Send((Optr)PSend24074, SMB_protocol_code_, 2, (Optr)string_24075_Const, (Optr)int_200_Const);
    Assign PAssign24072 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend24073);
    String string_24076 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24076_Const = new_Constant((Optr)string_24076);
    // headerAt:put:. 
    Send PSend24077 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_24076_Const, (Optr)VAR_contentType_0_2);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24078 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend24079 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    Array PThreadedCode24071 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign24072, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24074, (Optr)&t_push1, (Optr)string_24075, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend24073, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_24076, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend24077, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend24078, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_send3, (Optr)PSend24079, (Optr)&t_method_return);
    Method PMethod24068 = new_Method_with(PArray24069, PArray24070, empty_Array, PThreadedCode24071, 4, PAssign24072, PSend24077, PSend24078, PSend24079);
    
    MethodClosure MC_SMB_stream200Response_size_type_do_ = new_MethodClosure((Method)PMethod24068, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_do_, MC_SMB_stream200Response_size_type_do_);
}


static void init_SMB_stream200Response_size_() {
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Array PArray24081 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    String string_24083 = new_String(L"application/octet-stream");
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Constant string_24083_Const = new_Constant((Optr)string_24083);
    // stream200Response:size:type:. 
    Send PSend24084 = new_Send((Optr)self, SMB_stream200Response_size_type_, 3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)string_24083_Const);
    Array PThreadedCode24082 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push1, (Optr)string_24083, (Optr)&t_send3, (Optr)PSend24084, (Optr)&t_method_return);
    Method PMethod24080 = new_Method_with(PArray24081, empty_Array, empty_Array, PThreadedCode24082, 1, PSend24084);
    
    MethodClosure MC_SMB_stream200Response_size_ = new_MethodClosure((Method)PMethod24080, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_, MC_SMB_stream200Response_size_);
}


static void init_SMB_writeRequestOn_() {
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24086 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24089 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24091 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_method);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24092 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend24093 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_rawUrl);
    // space. 
    Send PSend24094 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend24095 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebMessage_protocol);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24096 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24090 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_send1, (Optr)PSend24091, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24092, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_send1, (Optr)PSend24093, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24094, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_send1, (Optr)PSend24095, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24096, (Optr)&t_method_return);
    Block PBlock24088 = new_Block_with(PArray24089, empty_Array, PThreadedCode24090, 6, PSend24091, PSend24092, PSend24093, PSend24094, PSend24095, PSend24096);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24097 = new_Send((Optr)PBlock24088, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24087 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24088, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24097, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24085 = new_Method_with(PArray24086, empty_Array, empty_Array, PThreadedCode24087, 2, PSend24097, self);
    
    MethodClosure MC_SMB_writeRequestOn_ = new_MethodClosure((Method)PMethod24085, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeRequestOn_, MC_SMB_writeRequestOn_);
}


static void init_SMB_newWebSocketOn_() {
    Symbol SMB_newWebSocketOn_ = new_Symbol(L"newWebSocketOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24099 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24101 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24100 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24101, (Optr)&t_method_return);
    Method PMethod24098 = new_Method_with(PArray24099, empty_Array, empty_Array, PThreadedCode24100, 1, PSend24101);
    
    MethodClosure MC_SMB_newWebSocketOn_ = new_MethodClosure((Method)PMethod24098, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newWebSocketOn_, MC_SMB_newWebSocketOn_);
}


static void init_SMB_send404Response_do_() {
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24103 = new_Array_with(2, (Optr)VAR_body_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray24104 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24108 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24109 = new_String(L"HTTP/1.1");
    Constant string_24109_Const = new_Constant((Optr)string_24109);
    SmallInt int_404 = new_SmallInt(404);
    Constant int_404_Const = new_Constant((Optr)int_404);
    // protocol:code:. 
    Send PSend24107 = new_Send((Optr)PSend24108, SMB_protocol_code_, 2, (Optr)string_24109_Const, (Optr)int_404_Const);
    Assign PAssign24106 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend24107);
    String string_24110 = new_String(L"Content-Type");
    String string_24111 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24110_Const = new_Constant((Optr)string_24110);
    Constant string_24111_Const = new_Constant((Optr)string_24111);
    // headerAt:put:. 
    Send PSend24112 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24110_Const, (Optr)string_24111_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24113 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_2);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24114 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_0);
    Array PThreadedCode24105 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24106, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24108, (Optr)&t_push1, (Optr)string_24109, (Optr)&t_push1, (Optr)int_404, (Optr)&t_send2, (Optr)PSend24107, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24110, (Optr)&t_push1, (Optr)string_24111, (Optr)&t_send2, (Optr)PSend24112, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_send1, (Optr)PSend24113, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_send2, (Optr)PSend24114, (Optr)&t_method_return);
    Method PMethod24102 = new_Method_with(PArray24103, PArray24104, empty_Array, PThreadedCode24105, 4, PAssign24106, PSend24112, PSend24113, PSend24114);
    
    MethodClosure MC_SMB_send404Response_do_ = new_MethodClosure((Method)PMethod24102, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_do_, MC_SMB_send404Response_do_);
}


static void init_SMB_send302Response_do_() {
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24116 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_302 = new_SmallInt(302);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_302_Const = new_Constant((Optr)int_302);
    // send3xxResponse:code:do:. 
    Send PSend24118 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_302_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode24117 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend24118, (Optr)&t_method_return);
    Method PMethod24115 = new_Method_with(PArray24116, empty_Array, empty_Array, PThreadedCode24117, 1, PSend24118);
    
    MethodClosure MC_SMB_send302Response_do_ = new_MethodClosure((Method)PMethod24115, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_do_, MC_SMB_send302Response_do_);
}


static void init_SMB_sendXmlResponse_() {
    Symbol SMB_sendXmlResponse_ = new_Symbol(L"sendXmlResponse:");
    Variable VAR_xmlString_0_0 = new_Variable_named(L"xmlString", 0);
    Array PArray24120 = new_Array_with(1, (Optr)VAR_xmlString_0_0);
    String string_24122 = new_String(L"application/xml");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_24122_Const = new_Constant((Optr)string_24122);
    // send200Response:contentType:. 
    Send PSend24123 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_xmlString_0_0, (Optr)string_24122_Const);
    Array PThreadedCode24121 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_xmlString_0_0, (Optr)&t_push1, (Optr)string_24122, (Optr)&t_send2, (Optr)PSend24123, (Optr)&t_method_return);
    Method PMethod24119 = new_Method_with(PArray24120, empty_Array, empty_Array, PThreadedCode24121, 1, PSend24123);
    
    MethodClosure MC_SMB_sendXmlResponse_ = new_MethodClosure((Method)PMethod24119, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendXmlResponse_, MC_SMB_sendXmlResponse_);
}


static void init_SMB_send200Response_() {
    Symbol SMB_send200Response_ = new_Symbol(L"send200Response:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24125 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_24127 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_24127_Const = new_Constant((Optr)string_24127);
    // send200Response:contentType:. 
    Send PSend24128 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_aString_0_0, (Optr)string_24127_Const);
    Array PThreadedCode24126 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push1, (Optr)string_24127, (Optr)&t_send2, (Optr)PSend24128, (Optr)&t_method_return);
    Method PMethod24124 = new_Method_with(PArray24125, empty_Array, empty_Array, PThreadedCode24126, 1, PSend24128);
    
    MethodClosure MC_SMB_send200Response_ = new_MethodClosure((Method)PMethod24124, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_, MC_SMB_send200Response_);
}


static void init_SMB_sendResponse_content_() {
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Array PArray24130 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aString_0_1);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24132 = new_Send((Optr)VAR_aString_0_1, SMB_readStream, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24133 = new_Send((Optr)VAR_aString_0_1, SMB_size, 0);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend24134 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_0, (Optr)PSend24132, (Optr)PSend24133);
    Array PThreadedCode24131 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24132, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24133, (Optr)&t_send3, (Optr)PSend24134, (Optr)&t_method_return);
    Method PMethod24129 = new_Method_with(PArray24130, empty_Array, empty_Array, PThreadedCode24131, 1, PSend24134);
    
    MethodClosure MC_SMB_sendResponse_content_ = new_MethodClosure((Method)PMethod24129, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_content_, MC_SMB_sendResponse_content_);
}


static void init_SMB_isGetRequest() {
    Symbol SMB_isGetRequest = new_Symbol(L"isGetRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24137 = new_Send((Optr)self, SMB_method, 0);
    String string_24138 = new_String(L"GET");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24138_Const = new_Constant((Optr)string_24138);
    // =. 
    Send PSend24139 = new_Send((Optr)PSend24137, SMB__equals_, 1, (Optr)string_24138_Const);
    Array PThreadedCode24136 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24137, (Optr)&t_push1, (Optr)string_24138, (Optr)&t_send1, (Optr)PSend24139, (Optr)&t_method_return);
    Method PMethod24135 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24136, 1, PSend24139);
    
    MethodClosure MC_SMB_isGetRequest = new_MethodClosure((Method)PMethod24135, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isGetRequest, MC_SMB_isGetRequest);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24141 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    // writeRequestOn:. 
    Send PSend24143 = new_Send((Optr)self, SMB_writeRequestOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24144 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24142 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24143, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24144, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24140 = new_Method_with(PArray24141, empty_Array, empty_Array, PThreadedCode24142, 3, PSend24143, PSuper24144, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24140, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode24146 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_method_return);
    Method PMethod24145 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24146, 1, slot_WebClient_Core_WebRequest_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod24145, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_isDeleteRequest() {
    Symbol SMB_isDeleteRequest = new_Symbol(L"isDeleteRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24149 = new_Send((Optr)self, SMB_method, 0);
    String string_24150 = new_String(L"DELETE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24150_Const = new_Constant((Optr)string_24150);
    // =. 
    Send PSend24151 = new_Send((Optr)PSend24149, SMB__equals_, 1, (Optr)string_24150_Const);
    Array PThreadedCode24148 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24149, (Optr)&t_push1, (Optr)string_24150, (Optr)&t_send1, (Optr)PSend24151, (Optr)&t_method_return);
    Method PMethod24147 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24148, 1, PSend24151);
    
    MethodClosure MC_SMB_isDeleteRequest = new_MethodClosure((Method)PMethod24147, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isDeleteRequest, MC_SMB_isDeleteRequest);
}


static void init_SMB_requestLine() {
    Symbol SMB_requestLine = new_Symbol(L"requestLine");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24156 = new_Send((Optr)self, SMB_method, 0);
    String string_24157 = new_String(L" ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_24157_Const = new_Constant((Optr)string_24157);
    // ,. 
    Send PSend24158 = new_Send((Optr)PSend24156, SMB__append_, 1, (Optr)string_24157_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24159 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend24160 = new_Send((Optr)PSend24158, SMB__append_, 1, (Optr)PSend24159);
    String string_24161 = new_String(L" ");
    Constant string_24161_Const = new_Constant((Optr)string_24161);
    // ,. 
    Send PSend24162 = new_Send((Optr)PSend24160, SMB__append_, 1, (Optr)string_24161_Const);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend24163 = new_Send((Optr)self, SMB_protocol, 0);
    // ,. 
    Send PSend24164 = new_Send((Optr)PSend24162, SMB__append_, 1, (Optr)PSend24163);
    Array PThreadedCode24155 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24156, (Optr)&t_push1, (Optr)string_24157, (Optr)&t_send1, (Optr)PSend24158, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24159, (Optr)&t_send1, (Optr)PSend24160, (Optr)&t_push1, (Optr)string_24161, (Optr)&t_send1, (Optr)PSend24162, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24163, (Optr)&t_send1, (Optr)PSend24164, (Optr)&t_block_return);
    Block PBlock24154 = new_Block_with(empty_Array, empty_Array, PThreadedCode24155, 1, PSend24164);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24165 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_ifNil_, 1, (Optr)PBlock24154);
    Array PThreadedCode24153 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push_closure, (Optr)PBlock24154, (Optr)&t_send1, (Optr)PSend24165, (Optr)&t_method_return);
    Method PMethod24152 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24153, 1, PSend24165);
    
    MethodClosure MC_SMB_requestLine = new_MethodClosure((Method)PMethod24152, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_requestLine, MC_SMB_requestLine);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Character char_2665 = new_Character(L'#');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_2665_Const = new_Constant((Optr)char_2665);
    // copyUpTo:. 
    Send PSend24168 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyUpTo_, 1, (Optr)char_2665_Const);
    Character char_23892 = new_Character(L'?');
    Constant char_23892_Const = new_Constant((Optr)char_23892);
    // copyUpTo:. 
    Send PSend24169 = new_Send((Optr)PSend24168, SMB_copyUpTo_, 1, (Optr)char_23892_Const);
    Array PThreadedCode24167 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend24168, (Optr)&t_push1, (Optr)char_23892, (Optr)&t_send1, (Optr)PSend24169, (Optr)&t_method_return);
    Method PMethod24166 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24167, 1, PSend24169);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24166, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_isHeadRequest() {
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24172 = new_Send((Optr)self, SMB_method, 0);
    String string_24173 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24173_Const = new_Constant((Optr)string_24173);
    // =. 
    Send PSend24174 = new_Send((Optr)PSend24172, SMB__equals_, 1, (Optr)string_24173_Const);
    Array PThreadedCode24171 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24172, (Optr)&t_push1, (Optr)string_24173, (Optr)&t_send1, (Optr)PSend24174, (Optr)&t_method_return);
    Method PMethod24170 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24171, 1, PSend24174);
    
    MethodClosure MC_SMB_isHeadRequest = new_MethodClosure((Method)PMethod24170, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isHeadRequest, MC_SMB_isHeadRequest);
}


static void init_SMB_sendResponse_contentBlock_() {
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_contentBlock_0_1 = new_Variable_named(L"contentBlock", 0);
    Array PArray24176 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_contentBlock_0_1);
    String string_24178 = new_String(L"Date");
    Array PThreadedCode24180 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock24179 = new_Block_with(empty_Array, empty_Array, PThreadedCode24180, 1, PWebServer_classReference);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24181 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock24179);
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    // serverDate. 
    Send PSend24182 = new_Send((Optr)PSend24181, SMB_serverDate, 0);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24178_Const = new_Constant((Optr)string_24178);
    // headerAt:put:. 
    Send PSend24183 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24178_Const, (Optr)PSend24182);
    String string_24184 = new_String(L"Server");
    Array PThreadedCode24186 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock24185 = new_Block_with(empty_Array, empty_Array, PThreadedCode24186, 1, PWebServer_classReference);
    // ifNil:. 
    Send PSend24187 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock24185);
    Symbol SMB_serverString = new_Symbol(L"serverString");
    // serverString. 
    Send PSend24188 = new_Send((Optr)PSend24187, SMB_serverString, 0);
    Constant string_24184_Const = new_Constant((Optr)string_24184);
    // headerAt:put:. 
    Send PSend24189 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24184_Const, (Optr)PSend24188);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend24194 = new_Send((Optr)VAR_resp_0_0, SMB_writeOn_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24195 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    // isHeadRequest. 
    Send PSend24196 = new_Send((Optr)self, SMB_isHeadRequest, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24200 = new_Send((Optr)VAR_contentBlock_0_1, SMB_value_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Array PThreadedCode24199 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_contentBlock_0_1, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24200, (Optr)&t_block_return);
    Block PBlock24198 = new_Block_with(empty_Array, empty_Array, PThreadedCode24199, 1, PSend24200);
    // ifFalse:. 
    Send PSend24197 = new_Send((Optr)PSend24196, SMB_ifFalse_, 1, (Optr)PBlock24198);
    Array PThreadedCode24193 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24194, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend24195, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24196, (Optr)&t_send_ifFalse_, (Optr)PSend24197, (Optr)PBlock24198, (Optr)&t_block_return);
    Block PBlock24192 = new_Block_with(empty_Array, empty_Array, PThreadedCode24193, 3, PSend24194, PSend24195, PSend24197);
    Variable VAR_ignore_1_0 = new_Variable_named(L"ignore", 1);
    Array PArray24202 = new_Array_with(1, (Optr)VAR_ignore_1_0);
    Array PThreadedCode24203 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24201 = new_Block_with(PArray24202, empty_Array, PThreadedCode24203, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend24204 = new_Send((Optr)PBlock24192, SMB_on_do_, 2, (Optr)NetworkError_classReference, (Optr)PBlock24201);
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    // logRequest:response:. 
    Send PSend24207 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_logRequest_response_, 2, (Optr)self, (Optr)VAR_resp_0_0);
    Array PThreadedCode24206 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_send2, (Optr)PSend24207, (Optr)&t_block_return);
    Block PBlock24205 = new_Block_with(empty_Array, empty_Array, PThreadedCode24206, 1, PSend24207);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24208 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNotNil_, 1, (Optr)PBlock24205);
    Array PThreadedCode24191 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock24192, (Optr)&t_push_class_reference, (Optr)NetworkError_classReference, (Optr)&t_push_closure, (Optr)PBlock24201, (Optr)&t_send2, (Optr)PSend24204, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24205, (Optr)&t_send1, (Optr)PSend24208, (Optr)&t_block_return);
    Block PBlock24190 = new_Block_with(empty_Array, empty_Array, PThreadedCode24191, 2, PSend24204, PSend24208);
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    // closeIfTransient:after:. 
    Send PSend24209 = new_Send((Optr)self, SMB_closeIfTransient_after_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock24190);
    Array PThreadedCode24177 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24178, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24179, (Optr)&t_send1, (Optr)PSend24181, (Optr)&t_send0, (Optr)PSend24182, (Optr)&t_send2, (Optr)PSend24183, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24184, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24185, (Optr)&t_send1, (Optr)PSend24187, (Optr)&t_send0, (Optr)PSend24188, (Optr)&t_send2, (Optr)PSend24189, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock24190, (Optr)&t_send2, (Optr)PSend24209, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24175 = new_Method_with(PArray24176, empty_Array, empty_Array, PThreadedCode24177, 4, PSend24183, PSend24189, PSend24209, self);
    
    MethodClosure MC_SMB_sendResponse_contentBlock_ = new_MethodClosure((Method)PMethod24175, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentBlock_, MC_SMB_sendResponse_contentBlock_);
}


static void init_SMB_multipartFields() {
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray24211 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24214 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24213 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend24214);
    Variable VAR_hdrs_1_0 = new_Variable_named(L"hdrs", 1);
    Variable VAR_params_1_1 = new_Variable_named(L"params", 1);
    Variable VAR_cntnt_1_2 = new_Variable_named(L"cntnt", 1);
    Array PArray24216 = new_Array_with(3, (Optr)VAR_hdrs_1_0, (Optr)VAR_params_1_1, (Optr)VAR_cntnt_1_2);
    String string_24218 = new_String(L"name");
    Variable VAR_fieldName_2_0 = new_Variable_named(L"fieldName", 2);
    Array PArray24220 = new_Array_with(1, (Optr)VAR_fieldName_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24222 = new_Send((Optr)VAR_fields_0_0, SMB_at_put_, 2, (Optr)VAR_fieldName_2_0, (Optr)VAR_cntnt_1_2);
    Array PThreadedCode24221 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_fieldName_2_0, (Optr)&t_push_variable, (Optr)VAR_cntnt_1_2, (Optr)&t_send2, (Optr)PSend24222, (Optr)&t_method_return);
    Block PBlock24219 = new_Block_with(PArray24220, empty_Array, PThreadedCode24221, 1, PSend24222);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Constant string_24218_Const = new_Constant((Optr)string_24218);
    // at:ifPresent:. 
    Send PSend24223 = new_Send((Optr)VAR_params_1_1, SMB_at_ifPresent_, 2, (Optr)string_24218_Const, (Optr)PBlock24219);
    Array PThreadedCode24217 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_params_1_1, (Optr)&t_push1, (Optr)string_24218, (Optr)&t_push_closure, (Optr)PBlock24219, (Optr)&t_send2, (Optr)PSend24223, (Optr)&t_method_return);
    Block PBlock24215 = new_Block_with(PArray24216, empty_Array, PThreadedCode24217, 1, PSend24223);
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    // multipartFieldsDo:. 
    Send PSend24224 = new_Send((Optr)self, SMB_multipartFieldsDo_, 1, (Optr)PBlock24215);
    Array PThreadedCode24212 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24213, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24214, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock24215, (Optr)&t_send1, (Optr)PSend24224, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod24210 = new_Method_with(empty_Array, PArray24211, empty_Array, PThreadedCode24212, 3, PAssign24213, PSend24224, VAR_fields_0_0);
    
    MethodClosure MC_SMB_multipartFields = new_MethodClosure((Method)PMethod24210, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFields, MC_SMB_multipartFields);
}


static void init_SMB_sendResponse_chunked_() {
    Symbol SMB_sendResponse_chunked_ = new_Symbol(L"sendResponse:chunked:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Array PArray24226 = new_Array_with(2, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24229 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24230 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24228 = new_Block_with(PArray24229, empty_Array, PThreadedCode24230, 0);
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    // sendResponse:chunked:do:. 
    Send PSend24231 = new_Send((Optr)self, SMB_sendResponse_chunked_do_, 3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)PBlock24228);
    Array PThreadedCode24227 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_closure, (Optr)PBlock24228, (Optr)&t_send3, (Optr)PSend24231, (Optr)&t_method_return);
    Method PMethod24225 = new_Method_with(PArray24226, empty_Array, empty_Array, PThreadedCode24227, 1, PSend24231);
    
    MethodClosure MC_SMB_sendResponse_chunked_ = new_MethodClosure((Method)PMethod24225, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_, MC_SMB_sendResponse_chunked_);
}


static void init_SMB_sendOptionsResponse_() {
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Array PArray24233 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_24235 = new_String(L"");
    String string_24236 = new_String(L"application/octet-stream");
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24238 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24240 = new_String(L"allow");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray24242 = new_Array_with(1, (Optr)VAR_s_2_0);
    Variable VAR_m_3_0 = new_Variable_named(L"m", 3);
    Array PArray24245 = new_Array_with(1, (Optr)VAR_m_3_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24247 = new_Send((Optr)VAR_s_2_0, SMB_nextPutAll_, 1, (Optr)VAR_m_3_0);
    Array PThreadedCode24246 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_m_3_0, (Optr)&t_send1, (Optr)PSend24247, (Optr)&t_method_return);
    Block PBlock24244 = new_Block_with(PArray24245, empty_Array, PThreadedCode24246, 1, PSend24247);
    Character char_24062 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_24062_Const = new_Constant((Optr)char_24062);
    // nextPut:. 
    Send PSend24250 = new_Send((Optr)VAR_s_2_0, SMB_nextPut_, 1, (Optr)char_24062_Const);
    Array PThreadedCode24249 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)char_24062, (Optr)&t_send1, (Optr)PSend24250, (Optr)&t_block_return);
    Block PBlock24248 = new_Block_with(empty_Array, empty_Array, PThreadedCode24249, 1, PSend24250);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend24251 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock24244, (Optr)PBlock24248);
    Array PThreadedCode24243 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock24244, (Optr)&t_push_closure, (Optr)PBlock24248, (Optr)&t_send2, (Optr)PSend24251, (Optr)&t_method_return);
    Block PBlock24241 = new_Block_with(PArray24242, empty_Array, PThreadedCode24243, 1, PSend24251);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend24252 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock24241);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24240_Const = new_Constant((Optr)string_24240);
    // headerAt:put:. 
    Send PSend24253 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24240_Const, (Optr)PSend24252);
    Array PThreadedCode24239 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24240, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock24241, (Optr)&t_send1, (Optr)PSend24252, (Optr)&t_send2, (Optr)PSend24253, (Optr)&t_method_return);
    Block PBlock24237 = new_Block_with(PArray24238, empty_Array, PThreadedCode24239, 1, PSend24253);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Constant string_24235_Const = new_Constant((Optr)string_24235);
    Constant string_24236_Const = new_Constant((Optr)string_24236);
    // send200Response:contentType:do:. 
    Send PSend24254 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)string_24235_Const, (Optr)string_24236_Const, (Optr)PBlock24237);
    Array PThreadedCode24234 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24235, (Optr)&t_push1, (Optr)string_24236, (Optr)&t_push_closure, (Optr)PBlock24237, (Optr)&t_send3, (Optr)PSend24254, (Optr)&t_method_return);
    Method PMethod24232 = new_Method_with(PArray24233, empty_Array, empty_Array, PThreadedCode24234, 1, PSend24254);
    
    MethodClosure MC_SMB_sendOptionsResponse_ = new_MethodClosure((Method)PMethod24232, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendOptionsResponse_, MC_SMB_sendOptionsResponse_);
}


static void init_SMB_sendResponseCode_content_type_close_() {
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBool_0_3 = new_Variable_named(L"aBool", 0);
    Array PArray24256 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBool_0_3);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24259 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24264 = new_String(L"Connection");
    String string_24265 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24264_Const = new_Constant((Optr)string_24264);
    Constant string_24265_Const = new_Constant((Optr)string_24265);
    // headerAt:put:. 
    Send PSend24266 = new_Send((Optr)VAR_hdr_1_0, SMB_headerAt_put_, 2, (Optr)string_24264_Const, (Optr)string_24265_Const);
    Array PThreadedCode24263 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_push1, (Optr)string_24264, (Optr)&t_push1, (Optr)string_24265, (Optr)&t_send2, (Optr)PSend24266, (Optr)&t_block_return);
    Block PBlock24262 = new_Block_with(empty_Array, empty_Array, PThreadedCode24263, 1, PSend24266);
    // ifTrue:. 
    Send PSend24261 = new_Send((Optr)VAR_aBool_0_3, SMB_ifTrue_, 1, (Optr)PBlock24262);
    Array PThreadedCode24260 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBool_0_3, (Optr)&t_send_ifTrue_, (Optr)PSend24261, (Optr)PBlock24262, (Optr)&t_method_return);
    Block PBlock24258 = new_Block_with(PArray24259, empty_Array, PThreadedCode24260, 1, PSend24261);
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    // sendResponseCode:content:type:do:. 
    Send PSend24267 = new_Send((Optr)self, SMB_sendResponseCode_content_type_do_, 4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24258);
    Array PThreadedCode24257 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24258, (Optr)&t_send4, (Optr)PSend24267, (Optr)&t_method_return);
    Method PMethod24255 = new_Method_with(PArray24256, empty_Array, empty_Array, PThreadedCode24257, 1, PSend24267);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_close_ = new_MethodClosure((Method)PMethod24255, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_close_, MC_SMB_sendResponseCode_content_type_close_);
}


static void init_SMB_sendResponseCode_content_type_do_() {
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray24269 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray24270 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24274 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24275 = new_String(L"HTTP/1.1");
    Constant string_24275_Const = new_Constant((Optr)string_24275);
    // protocol:code:. 
    Send PSend24273 = new_Send((Optr)PSend24274, SMB_protocol_code_, 2, (Optr)string_24275_Const, (Optr)VAR_code_0_0);
    Assign PAssign24272 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend24273);
    String string_24278 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24278_Const = new_Constant((Optr)string_24278);
    // headerAt:put:. 
    Send PSend24279 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_24278_Const, (Optr)VAR_contentType_0_2);
    Array PThreadedCode24277 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_24278, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend24279, (Optr)&t_block_return);
    Block PBlock24276 = new_Block_with(empty_Array, empty_Array, PThreadedCode24277, 1, PSend24279);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24280 = new_Send((Optr)VAR_contentType_0_2, SMB_ifNotNil_, 1, (Optr)PBlock24276);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24281 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24282 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_4, (Optr)VAR_aString_0_1);
    Array PThreadedCode24271 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign24272, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24274, (Optr)&t_push1, (Optr)string_24275, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend24273, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24276, (Optr)&t_send1, (Optr)PSend24280, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend24281, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send2, (Optr)PSend24282, (Optr)&t_method_return);
    Method PMethod24268 = new_Method_with(PArray24269, PArray24270, empty_Array, PThreadedCode24271, 4, PAssign24272, PSend24280, PSend24281, PSend24282);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_do_ = new_MethodClosure((Method)PMethod24268, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_do_, MC_SMB_sendResponseCode_content_type_do_);
}


static void init_class_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24284 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24286 = new_Send((Optr)self, SMB_new, 0);
    // readFrom:. 
    Send PSend24287 = new_Send((Optr)PSend24286, SMB_readFrom_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24285 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24286, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24287, (Optr)&t_method_return);
    Method PMethod24283 = new_Method_with(PArray24284, empty_Array, empty_Array, PThreadedCode24285, 1, PSend24287);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24283, HEADER(WebClient_Core_WebRequest_Class));
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
    init_SMB_stream200Response_size_type_();
    init_SMB_readFrom_();
    init_SMB_send302Response_();
    init_SMB_postFields();
    init_SMB_initialize();
    init_SMB_send400Response();
    init_SMB_newResponse();
    init_SMB_send3xxResponse_code_();
    init_SMB_sendResponse_chunked_do_();
    init_SMB_isOptionsRequest();
    init_SMB_isTraceRequest();
    init_SMB_fields();
    init_SMB_send404Response();
    init_SMB_rawUrl();
    init_SMB_send200Response_contentType_();
    init_SMB_stream200Response_();
    init_SMB_sendResponse_contentStream_size_();
    init_SMB_server_();
    init_SMB_send301Response_();
    init_SMB_server();
    init_SMB_getFields();
    init_SMB_multipartFieldsDo_();
    init_SMB_isPutRequest();
    init_SMB_send3xxResponse_code_do_();
    init_SMB_send200Response_contentType_do_();
    init_SMB_isPostRequest();
    init_SMB_rawUrl_();
    init_SMB_send405Response_();
    init_SMB_send500Response_();
    init_SMB_method_();
    init_SMB_send404Response_();
    init_SMB_closeIfTransient_after_();
    init_SMB_send301Response_do_();
    init_SMB_send405Response_content_();
    init_SMB_stream200Response_size_type_do_();
    init_SMB_stream200Response_size_();
    init_SMB_writeRequestOn_();
    init_SMB_newWebSocketOn_();
    init_SMB_send404Response_do_();
    init_SMB_send302Response_do_();
    init_SMB_sendXmlResponse_();
    init_SMB_send200Response_();
    init_SMB_sendResponse_content_();
    init_SMB_isGetRequest();
    init_SMB_writeOn_();
    init_SMB_method();
    init_SMB_isDeleteRequest();
    init_SMB_requestLine();
    init_SMB_url();
    init_SMB_isHeadRequest();
    init_SMB_sendResponse_contentBlock_();
    init_SMB_multipartFields();
    init_SMB_sendResponse_chunked_();
    init_SMB_sendOptionsResponse_();
    init_SMB_sendResponseCode_content_type_close_();
    init_SMB_sendResponseCode_content_type_do_();
    init_class_SMB_readFrom_();
    
}