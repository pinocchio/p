#include <lib/class/WebClient/Core/WebRequest.h>


Optr layout_WebClient_Core_WebRequest_Class_class;
Optr slot_WebClient_Core_WebRequest_method;
Optr slot_WebClient_Core_WebRequest_request;
Optr slot_WebClient_Core_WebRequest_rawUrl;
Optr slot_WebClient_Core_WebRequest_server;
Optr layout_WebClient_Core_WebRequest;


<<<<<<< HEAD
static void init_SMB_getFields() {
    Symbol SMB_getFields = new_Symbol(L"getFields");
    Variable VAR_args_0_0 = new_Variable_named(L"args", 0);
    Array PArray23841 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23844 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    Character char_23849 = new_Character(L'?');
    Constant char_23849_Const = new_Constant((Optr)char_23849);
    // copyAfter:. 
    Send PSend23848 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyAfter_, 1, (Optr)char_23849_Const);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23852 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23853 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23852);
    Array PThreadedCode23851 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23852, (Optr)&t_send1, (Optr)PSend23853, (Optr)&t_block_return);
    Block PBlock23850 = new_Block_with(empty_Array, empty_Array, PThreadedCode23851, 1, PSend23853);
    // ifEmpty:. 
    Send PSend23847 = new_Send((Optr)PSend23848, SMB_ifEmpty_, 1, (Optr)PBlock23850);
    Assign PAssign23846 = new_Assign((Optr)VAR_args_0_0, (Optr)PSend23847);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23854 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)VAR_args_0_0, (Optr)false_Const);
    Array PThreadedCode23845 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23846, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_23849, (Optr)&t_send1, (Optr)PSend23848, (Optr)&t_push_closure, (Optr)PBlock23850, (Optr)&t_send1, (Optr)PSend23847, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend23854, (Optr)&t_method_return);
    Block PBlock23843 = new_Block_with(PArray23844, empty_Array, PThreadedCode23845, 2, PAssign23846, PSend23854);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23855 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23843);
    Array PThreadedCode23842 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23843, (Optr)&t_send1, (Optr)PSend23855, (Optr)&t_method_return);
    Method PMethod23840 = new_Method_with(empty_Array, PArray23841, empty_Array, PThreadedCode23842, 1, PSend23855);
    
    MethodClosure MC_SMB_getFields = new_MethodClosure((Method)PMethod23840, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_getFields, MC_SMB_getFields);
}


static void init_SMB_isHeadRequest() {
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23858 = new_Send((Optr)self, SMB_method, 0);
    String string_23859 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23859_Const = new_Constant((Optr)string_23859);
    // =. 
    Send PSend23860 = new_Send((Optr)PSend23858, SMB__equals_, 1, (Optr)string_23859_Const);
    Array PThreadedCode23857 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23858, (Optr)&t_push1, (Optr)string_23859, (Optr)&t_send1, (Optr)PSend23860, (Optr)&t_method_return);
    Method PMethod23856 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23857, 1, PSend23860);
    
    MethodClosure MC_SMB_isHeadRequest = new_MethodClosure((Method)PMethod23856, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isHeadRequest, MC_SMB_isHeadRequest);
=======
static void init_SMB_stream200Response_size_type_() {
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Array PArray23658 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23661 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23662 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23660 = new_Block_with(PArray23661, empty_Array, PThreadedCode23662, 0);
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    // stream200Response:size:type:do:. 
    Send PSend23663 = new_Send((Optr)self, SMB_stream200Response_size_type_do_, 4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock23660);
    Array PThreadedCode23659 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock23660, (Optr)&t_send4, (Optr)PSend23663, (Optr)&t_method_return);
    Method PMethod23657 = new_Method_with(PArray23658, empty_Array, empty_Array, PThreadedCode23659, 1, PSend23663);
    
    MethodClosure MC_SMB_stream200Response_size_type_ = new_MethodClosure((Method)PMethod23657, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_, MC_SMB_stream200Response_size_type_);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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
<<<<<<< HEAD
    Array PArray23862 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray23863 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23866 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign23868 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend23869 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend23873 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ascii, 0);
    Array PThreadedCode23872 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23873, (Optr)&t_block_return);
    Block PBlock23871 = new_Block_with(empty_Array, empty_Array, PThreadedCode23872, 1, PSend23873);
    // ifTrue:. 
    Send PSend23870 = new_Send((Optr)PSend23869, SMB_ifTrue_, 1, (Optr)PBlock23871);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23876 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend23875 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend23876);
    Assign PAssign23874 = new_Assign((Optr)slot_WebClient_Core_WebRequest_request, (Optr)PSend23875);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_23879 = new_String(L" ");
    Constant string_23879_Const = new_Constant((Optr)string_23879);
    // findTokens:. 
    Send PSend23878 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_findTokens_, 1, (Optr)string_23879_Const);
    Assign PAssign23877 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend23878);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23880 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
=======
    Array PArray23665 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray23666 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23669 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign23671 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_isBinary = new_Symbol(L"isBinary");
    // isBinary. 
    Send PSend23672 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isBinary, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ascii = new_Symbol(L"ascii");
    // ascii. 
    Send PSend23676 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ascii, 0);
    Array PThreadedCode23675 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23676, (Optr)&t_block_return);
    Block PBlock23674 = new_Block_with(empty_Array, empty_Array, PThreadedCode23675, 1, PSend23676);
    // ifTrue:. 
    Send PSend23673 = new_Send((Optr)PSend23672, SMB_ifTrue_, 1, (Optr)PBlock23674);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23679 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend23678 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend23679);
    Assign PAssign23677 = new_Assign((Optr)slot_WebClient_Core_WebRequest_request, (Optr)PSend23678);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_23682 = new_String(L" ");
    Constant string_23682_Const = new_Constant((Optr)string_23682);
    // findTokens:. 
    Send PSend23681 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_findTokens_, 1, (Optr)string_23682_Const);
    Assign PAssign23680 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend23681);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23683 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
<<<<<<< HEAD
    Send PSend23881 = new_Send((Optr)PSend23880, SMB__lt_, 1, (Optr)int_2_Const);
    String string_23885 = new_String(L"Invalid HTTP request: ");
    Constant string_23885_Const = new_Constant((Optr)string_23885);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23886 = new_Send((Optr)string_23885_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebRequest_request);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23887 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23886);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23888 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23887);
    Array PThreadedCode23884 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23885, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_send1, (Optr)PSend23886, (Optr)&t_send1, (Optr)PSend23887, (Optr)&t_send1, (Optr)PSend23888, (Optr)&t_block_return);
    Block PBlock23883 = new_Block_with(empty_Array, empty_Array, PThreadedCode23884, 1, PSend23888);
    // ifTrue:. 
    Send PSend23882 = new_Send((Optr)PSend23881, SMB_ifTrue_, 1, (Optr)PBlock23883);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23890 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign23889 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)PSend23890);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend23892 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Assign PAssign23891 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)PSend23892);
    // size. 
    Send PSend23893 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23894 = new_Send((Optr)PSend23893, SMB__gt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_third = new_Symbol(L"third");
    // third. 
    Send PSend23899 = new_Send((Optr)VAR_tokens_0_1, SMB_third, 0);
    Assign PAssign23898 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend23899);
    Array PThreadedCode23897 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23898, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23899, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23896 = new_Block_with(empty_Array, empty_Array, PThreadedCode23897, 1, PAssign23898);
    String string_23903 = new_String(L"HTTP/1.0");
    Constant string_23903_Const = new_Constant((Optr)string_23903);
    Assign PAssign23902 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23903_Const);
    Array PThreadedCode23901 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign23902, (Optr)&t_push1, (Optr)string_23903, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23900 = new_Block_with(empty_Array, empty_Array, PThreadedCode23901, 1, PAssign23902);
    // ifTrue:ifFalse:. 
    Send PSend23895 = new_Send((Optr)PSend23894, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23896, (Optr)PBlock23900);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend23905 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign23904 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23905);
    Array PThreadedCode23867 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push1, (Optr)PAssign23868, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23869, (Optr)&t_send_ifTrue_, (Optr)PSend23870, (Optr)PBlock23871, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23874, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23876, (Optr)&t_send1, (Optr)PSend23875, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23877, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push1, (Optr)string_23879, (Optr)&t_send1, (Optr)PSend23878, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23880, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23881, (Optr)&t_send_ifTrue_, (Optr)PSend23882, (Optr)PBlock23883, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23889, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23890, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23891, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23892, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23893, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23894, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23895, (Optr)PBlock23896, (Optr)PBlock23900, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23904, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23905, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23865 = new_Block_with(PArray23866, empty_Array, PThreadedCode23867, 10, PAssign23868, PSend23870, PAssign23874, PAssign23877, PSend23882, PAssign23889, PAssign23891, PSend23895, PAssign23904, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23906 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23865);
    Array PThreadedCode23864 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23865, (Optr)&t_send1, (Optr)PSend23906, (Optr)&t_method_return);
    Method PMethod23861 = new_Method_with(PArray23862, PArray23863, empty_Array, PThreadedCode23864, 1, PSend23906);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod23861, WebClient_Core_WebRequest_Class);
=======
    Send PSend23684 = new_Send((Optr)PSend23683, SMB__lt_, 1, (Optr)int_2_Const);
    String string_23688 = new_String(L"Invalid HTTP request: ");
    Constant string_23688_Const = new_Constant((Optr)string_23688);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23689 = new_Send((Optr)string_23688_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebRequest_request);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend23690 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend23689);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23691 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23690);
    Array PThreadedCode23687 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23688, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_send1, (Optr)PSend23689, (Optr)&t_send1, (Optr)PSend23690, (Optr)&t_send1, (Optr)PSend23691, (Optr)&t_block_return);
    Block PBlock23686 = new_Block_with(empty_Array, empty_Array, PThreadedCode23687, 1, PSend23691);
    // ifTrue:. 
    Send PSend23685 = new_Send((Optr)PSend23684, SMB_ifTrue_, 1, (Optr)PBlock23686);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23693 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign23692 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)PSend23693);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend23695 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Assign PAssign23694 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)PSend23695);
    // size. 
    Send PSend23696 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23697 = new_Send((Optr)PSend23696, SMB__gt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_third = new_Symbol(L"third");
    // third. 
    Send PSend23702 = new_Send((Optr)VAR_tokens_0_1, SMB_third, 0);
    Assign PAssign23701 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend23702);
    Array PThreadedCode23700 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23701, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23702, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23699 = new_Block_with(empty_Array, empty_Array, PThreadedCode23700, 1, PAssign23701);
    String string_23706 = new_String(L"HTTP/1.0");
    Constant string_23706_Const = new_Constant((Optr)string_23706);
    Assign PAssign23705 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23706_Const);
    Array PThreadedCode23704 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign23705, (Optr)&t_push1, (Optr)string_23706, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23703 = new_Block_with(empty_Array, empty_Array, PThreadedCode23704, 1, PAssign23705);
    // ifTrue:ifFalse:. 
    Send PSend23698 = new_Send((Optr)PSend23697, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23699, (Optr)PBlock23703);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend23708 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign23707 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23708);
    Array PThreadedCode23670 = instantiate_Array_with(ThreadedCode_Class, 0, 86, (Optr)&t_push1, (Optr)PAssign23671, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23672, (Optr)&t_send_ifTrue_, (Optr)PSend23673, (Optr)PBlock23674, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23677, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23679, (Optr)&t_send1, (Optr)PSend23678, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23680, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push1, (Optr)string_23682, (Optr)&t_send1, (Optr)PSend23681, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23683, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23684, (Optr)&t_send_ifTrue_, (Optr)PSend23685, (Optr)PBlock23686, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23692, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23693, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23694, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23695, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend23696, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23697, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23698, (Optr)PBlock23699, (Optr)PBlock23703, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23707, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend23708, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23668 = new_Block_with(PArray23669, empty_Array, PThreadedCode23670, 10, PAssign23671, PSend23673, PAssign23677, PAssign23680, PSend23685, PAssign23692, PAssign23694, PSend23698, PAssign23707, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23709 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23668);
    Array PThreadedCode23667 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23668, (Optr)&t_send1, (Optr)PSend23709, (Optr)&t_method_return);
    Method PMethod23664 = new_Method_with(PArray23665, PArray23666, empty_Array, PThreadedCode23667, 1, PSend23709);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod23664, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


<<<<<<< HEAD
static void init_SMB_send405Response_content_() {
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray23908 = new_Array_with(2, (Optr)VAR_allowed_0_0, (Optr)VAR_body_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray23909 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23913 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23914 = new_String(L"HTTP/1.1");
    Constant string_23914_Const = new_Constant((Optr)string_23914);
    SmallInt int_405 = new_SmallInt(405);
    Constant int_405_Const = new_Constant((Optr)int_405);
    // protocol:code:. 
    Send PSend23912 = new_Send((Optr)PSend23913, SMB_protocol_code_, 2, (Optr)string_23914_Const, (Optr)int_405_Const);
    Assign PAssign23911 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend23912);
    String string_23915 = new_String(L"Content-Type");
    String string_23916 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23915_Const = new_Constant((Optr)string_23915);
    Constant string_23916_Const = new_Constant((Optr)string_23916);
    // headerAt:put:. 
    Send PSend23917 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23915_Const, (Optr)string_23916_Const);
    String string_23918 = new_String(L"allow");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23920 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_m_2_0 = new_Variable_named(L"m", 2);
    Array PArray23923 = new_Array_with(1, (Optr)VAR_m_2_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23925 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)VAR_m_2_0);
    Array PThreadedCode23924 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_m_2_0, (Optr)&t_send1, (Optr)PSend23925, (Optr)&t_method_return);
    Block PBlock23922 = new_Block_with(PArray23923, empty_Array, PThreadedCode23924, 1, PSend23925);
    Character char_23928 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23928_Const = new_Constant((Optr)char_23928);
    // nextPut:. 
    Send PSend23929 = new_Send((Optr)VAR_s_1_0, SMB_nextPut_, 1, (Optr)char_23928_Const);
    Array PThreadedCode23927 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)char_23928, (Optr)&t_send1, (Optr)PSend23929, (Optr)&t_block_return);
    Block PBlock23926 = new_Block_with(empty_Array, empty_Array, PThreadedCode23927, 1, PSend23929);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend23930 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock23922, (Optr)PBlock23926);
    Array PThreadedCode23921 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock23922, (Optr)&t_push_closure, (Optr)PBlock23926, (Optr)&t_send2, (Optr)PSend23930, (Optr)&t_method_return);
    Block PBlock23919 = new_Block_with(PArray23920, empty_Array, PThreadedCode23921, 1, PSend23930);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23931 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23919);
    Constant string_23918_Const = new_Constant((Optr)string_23918);
    // headerAt:put:. 
    Send PSend23932 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_23918_Const, (Optr)PSend23931);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23933 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_1);
    Array PThreadedCode23910 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign23911, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23913, (Optr)&t_push1, (Optr)string_23914, (Optr)&t_push1, (Optr)int_405, (Optr)&t_send2, (Optr)PSend23912, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23915, (Optr)&t_push1, (Optr)string_23916, (Optr)&t_send2, (Optr)PSend23917, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_23918, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23919, (Optr)&t_send1, (Optr)PSend23931, (Optr)&t_send2, (Optr)PSend23932, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend23933, (Optr)&t_method_return);
    Method PMethod23907 = new_Method_with(PArray23908, PArray23909, empty_Array, PThreadedCode23910, 4, PAssign23911, PSend23917, PSend23932, PSend23933);
    
    MethodClosure MC_SMB_send405Response_content_ = new_MethodClosure((Method)PMethod23907, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_content_, MC_SMB_send405Response_content_);
}


static void init_SMB_send301Response_() {
    Symbol SMB_send301Response_ = new_Symbol(L"send301Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23935 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23938 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23939 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23937 = new_Block_with(PArray23938, empty_Array, PThreadedCode23939, 0);
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    // send301Response:do:. 
    Send PSend23940 = new_Send((Optr)self, SMB_send301Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23937);
    Array PThreadedCode23936 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23937, (Optr)&t_send2, (Optr)PSend23940, (Optr)&t_method_return);
    Method PMethod23934 = new_Method_with(PArray23935, empty_Array, empty_Array, PThreadedCode23936, 1, PSend23940);
    
    MethodClosure MC_SMB_send301Response_ = new_MethodClosure((Method)PMethod23934, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_, MC_SMB_send301Response_);
}


static void init_SMB_stream200Response_size_type_do_() {
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray23942 = new_Array_with(4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray23943 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23947 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23948 = new_String(L"HTTP/1.1");
    Constant string_23948_Const = new_Constant((Optr)string_23948);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23946 = new_Send((Optr)PSend23947, SMB_protocol_code_, 2, (Optr)string_23948_Const, (Optr)int_200_Const);
    Assign PAssign23945 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend23946);
    String string_23949 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23949_Const = new_Constant((Optr)string_23949);
    // headerAt:put:. 
    Send PSend23950 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_23949_Const, (Optr)VAR_contentType_0_2);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23951 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend23952 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    Array PThreadedCode23944 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23945, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23947, (Optr)&t_push1, (Optr)string_23948, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23946, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_23949, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend23950, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend23951, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_send3, (Optr)PSend23952, (Optr)&t_method_return);
    Method PMethod23941 = new_Method_with(PArray23942, PArray23943, empty_Array, PThreadedCode23944, 4, PAssign23945, PSend23950, PSend23951, PSend23952);
    
    MethodClosure MC_SMB_stream200Response_size_type_do_ = new_MethodClosure((Method)PMethod23941, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_do_, MC_SMB_stream200Response_size_type_do_);
}


static void init_SMB_sendXmlResponse_() {
    Symbol SMB_sendXmlResponse_ = new_Symbol(L"sendXmlResponse:");
    Variable VAR_xmlString_0_0 = new_Variable_named(L"xmlString", 0);
    Array PArray23954 = new_Array_with(1, (Optr)VAR_xmlString_0_0);
    String string_23956 = new_String(L"application/xml");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_23956_Const = new_Constant((Optr)string_23956);
    // send200Response:contentType:. 
    Send PSend23957 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_xmlString_0_0, (Optr)string_23956_Const);
    Array PThreadedCode23955 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_xmlString_0_0, (Optr)&t_push1, (Optr)string_23956, (Optr)&t_send2, (Optr)PSend23957, (Optr)&t_method_return);
    Method PMethod23953 = new_Method_with(PArray23954, empty_Array, empty_Array, PThreadedCode23955, 1, PSend23957);
    
    MethodClosure MC_SMB_sendXmlResponse_ = new_MethodClosure((Method)PMethod23953, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendXmlResponse_, MC_SMB_sendXmlResponse_);
=======
static void init_SMB_send302Response_() {
    Symbol SMB_send302Response_ = new_Symbol(L"send302Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23711 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23714 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23715 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23713 = new_Block_with(PArray23714, empty_Array, PThreadedCode23715, 0);
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    // send302Response:do:. 
    Send PSend23716 = new_Send((Optr)self, SMB_send302Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23713);
    Array PThreadedCode23712 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23713, (Optr)&t_send2, (Optr)PSend23716, (Optr)&t_method_return);
    Method PMethod23710 = new_Method_with(PArray23711, empty_Array, empty_Array, PThreadedCode23712, 1, PSend23716);
    
    MethodClosure MC_SMB_send302Response_ = new_MethodClosure((Method)PMethod23710, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_, MC_SMB_send302Response_);
}


static void init_SMB_postFields() {
    Symbol SMB_postFields = new_Symbol(L"postFields");
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23719 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23722 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23723 = new_String(L"application/x-www-form-urlencoded");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23723_Const = new_Constant((Optr)string_23723);
    // =. 
    Send PSend23724 = new_Send((Optr)PSend23722, SMB__equals_, 1, (Optr)string_23723_Const);
    Array PThreadedCode23721 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23722, (Optr)&t_push1, (Optr)string_23723, (Optr)&t_send1, (Optr)PSend23724, (Optr)&t_block_return);
    Block PBlock23720 = new_Block_with(empty_Array, empty_Array, PThreadedCode23721, 1, PSend23724);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23725 = new_Send((Optr)PSend23719, SMB_and_, 1, (Optr)PBlock23720);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23729 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23730 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)PSend23729, (Optr)true_Const);
    Array PThreadedCode23728 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23729, (Optr)&t_push_true, (Optr)&t_send2, (Optr)PSend23730, (Optr)&t_block_return);
    Block PBlock23727 = new_Block_with(empty_Array, empty_Array, PThreadedCode23728, 1, PSend23730);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23733 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23732 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23733, (Optr)&t_block_return);
    Block PBlock23731 = new_Block_with(empty_Array, empty_Array, PThreadedCode23732, 1, PSend23733);
    // ifTrue:ifFalse:. 
    Send PSend23726 = new_Send((Optr)PSend23725, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23727, (Optr)PBlock23731);
    Array PThreadedCode23718 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23719, (Optr)&t_push_closure, (Optr)PBlock23720, (Optr)&t_send1, (Optr)PSend23725, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23726, (Optr)PBlock23727, (Optr)PBlock23731, (Optr)&t_method_return);
    Method PMethod23717 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23718, 1, PSend23726);
    
    MethodClosure MC_SMB_postFields = new_MethodClosure((Method)PMethod23717, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_postFields, MC_SMB_postFields);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
<<<<<<< HEAD
    Super PSuper23960 = new_Super(SMB_initialize, 0);
    String string_23962 = new_String(L"GET");
    Constant string_23962_Const = new_Constant((Optr)string_23962);
    Assign PAssign23961 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)string_23962_Const);
    String string_23964 = new_String(L"HTTP/1.1");
    Constant string_23964_Const = new_Constant((Optr)string_23964);
    Assign PAssign23963 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23964_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23966 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23965 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23966);
    Array PThreadedCode23959 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper23960, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23961, (Optr)&t_push1, (Optr)string_23962, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23963, (Optr)&t_push1, (Optr)string_23964, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23965, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23966, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23958 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23959, 5, PSuper23960, PAssign23961, PAssign23963, PAssign23965, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23958, WebClient_Core_WebRequest_Class);
=======
    Super PSuper23736 = new_Super(SMB_initialize, 0);
    String string_23738 = new_String(L"GET");
    Constant string_23738_Const = new_Constant((Optr)string_23738);
    Assign PAssign23737 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)string_23738_Const);
    String string_23740 = new_String(L"HTTP/1.1");
    Constant string_23740_Const = new_Constant((Optr)string_23740);
    Assign PAssign23739 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)string_23740_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23742 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23741 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23742);
    Array PThreadedCode23735 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper23736, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23737, (Optr)&t_push1, (Optr)string_23738, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23739, (Optr)&t_push1, (Optr)string_23740, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23741, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23742, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23734 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23735, 5, PSuper23736, PAssign23737, PAssign23739, PAssign23741, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23734, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_initialize, MC_SMB_initialize);
}


<<<<<<< HEAD
static void init_SMB_isGetRequest() {
    Symbol SMB_isGetRequest = new_Symbol(L"isGetRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23969 = new_Send((Optr)self, SMB_method, 0);
    String string_23970 = new_String(L"GET");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23970_Const = new_Constant((Optr)string_23970);
    // =. 
    Send PSend23971 = new_Send((Optr)PSend23969, SMB__equals_, 1, (Optr)string_23970_Const);
    Array PThreadedCode23968 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23969, (Optr)&t_push1, (Optr)string_23970, (Optr)&t_send1, (Optr)PSend23971, (Optr)&t_method_return);
    Method PMethod23967 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23968, 1, PSend23971);
    
    MethodClosure MC_SMB_isGetRequest = new_MethodClosure((Method)PMethod23967, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isGetRequest, MC_SMB_isGetRequest);
}


static void init_SMB_newWebSocketOn_() {
    Symbol SMB_newWebSocketOn_ = new_Symbol(L"newWebSocketOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23973 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23975 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23974 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23975, (Optr)&t_method_return);
    Method PMethod23972 = new_Method_with(PArray23973, empty_Array, empty_Array, PThreadedCode23974, 1, PSend23975);
    
    MethodClosure MC_SMB_newWebSocketOn_ = new_MethodClosure((Method)PMethod23972, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newWebSocketOn_, MC_SMB_newWebSocketOn_);
}


static void init_SMB_send400Response() {
    Symbol SMB_send400Response = new_Symbol(L"send400Response");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray23977 = new_Array_with(1, (Optr)VAR_message_0_0);
    String string_23981 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_23981_Const = new_Constant((Optr)string_23981);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23982 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_23982_Const = new_Constant((Optr)string_23982);
    // ,. 
    Send PSend23980 = new_Send((Optr)string_23981_Const, SMB__append_, 1, (Optr)string_23982_Const);
    Assign PAssign23979 = new_Assign((Optr)VAR_message_0_0, (Optr)PSend23980);
    SmallInt int_400 = new_SmallInt(400);
    String string_23983 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23983_Const = new_Constant((Optr)string_23983);
    // sendResponseCode:content:type:close:. 
    Send PSend23984 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_400_Const, (Optr)VAR_message_0_0, (Optr)string_23983_Const, (Optr)true_Const);
    Array PThreadedCode23978 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23979, (Optr)&t_push1, (Optr)string_23981, (Optr)&t_push1, (Optr)string_23982, (Optr)&t_send1, (Optr)PSend23980, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push1, (Optr)string_23983, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23984, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23976 = new_Method_with(empty_Array, PArray23977, empty_Array, PThreadedCode23978, 3, PAssign23979, PSend23984, self);
    
    MethodClosure MC_SMB_send400Response = new_MethodClosure((Method)PMethod23976, WebClient_Core_WebRequest_Class);
=======
static void init_SMB_send400Response() {
    Symbol SMB_send400Response = new_Symbol(L"send400Response");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray23744 = new_Array_with(1, (Optr)VAR_message_0_0);
    String string_23748 = new_String(L"<html><head><title>400 Bad Request</title></head><body>");
    Constant string_23748_Const = new_Constant((Optr)string_23748);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23749 = new_String(L"<h1>Bad Request</h1>\n\t\t<p>The server encountered a request it did not understand.\n\t\t</body></html>");
    Constant string_23749_Const = new_Constant((Optr)string_23749);
    // ,. 
    Send PSend23747 = new_Send((Optr)string_23748_Const, SMB__append_, 1, (Optr)string_23749_Const);
    Assign PAssign23746 = new_Assign((Optr)VAR_message_0_0, (Optr)PSend23747);
    SmallInt int_400 = new_SmallInt(400);
    String string_23750 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23750_Const = new_Constant((Optr)string_23750);
    // sendResponseCode:content:type:close:. 
    Send PSend23751 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_400_Const, (Optr)VAR_message_0_0, (Optr)string_23750_Const, (Optr)true_Const);
    Array PThreadedCode23745 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23746, (Optr)&t_push1, (Optr)string_23748, (Optr)&t_push1, (Optr)string_23749, (Optr)&t_send1, (Optr)PSend23747, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push1, (Optr)string_23750, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend23751, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23743 = new_Method_with(empty_Array, PArray23744, empty_Array, PThreadedCode23745, 3, PAssign23746, PSend23751, self);
    
    MethodClosure MC_SMB_send400Response = new_MethodClosure((Method)PMethod23743, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_send400Response, MC_SMB_send400Response);
}


static void init_SMB_newResponse() {
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
<<<<<<< HEAD
    Array PArray23988 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_request_ = new_Symbol(L"request:");
    // request:. 
    Send PSend23990 = new_Send((Optr)VAR__receiver__1_0, SMB_request_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23991 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23989 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23990, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23991, (Optr)&t_method_return);
    Block PBlock23987 = new_Block_with(PArray23988, empty_Array, PThreadedCode23989, 2, PSend23990, PSend23991);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23992 = new_Send((Optr)PWebResponse_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23993 = new_Send((Optr)PBlock23987, SMB_value_, 1, (Optr)PSend23992);
    Array PThreadedCode23986 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock23987, (Optr)&t_push_class_reference, (Optr)PWebResponse_classReference, (Optr)&t_send0, (Optr)PSend23992, (Optr)&t_send1, (Optr)PSend23993, (Optr)&t_method_return);
    Method PMethod23985 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23986, 1, PSend23993);
    
    MethodClosure MC_SMB_newResponse = new_MethodClosure((Method)PMethod23985, WebClient_Core_WebRequest_Class);
=======
    Array PArray23755 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_request_ = new_Symbol(L"request:");
    // request:. 
    Send PSend23757 = new_Send((Optr)VAR__receiver__1_0, SMB_request_, 1, (Optr)self);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23758 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23756 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23757, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23758, (Optr)&t_method_return);
    Block PBlock23754 = new_Block_with(PArray23755, empty_Array, PThreadedCode23756, 2, PSend23757, PSend23758);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23759 = new_Send((Optr)PWebResponse_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23760 = new_Send((Optr)PBlock23754, SMB_value_, 1, (Optr)PSend23759);
    Array PThreadedCode23753 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock23754, (Optr)&t_push_class_reference, (Optr)PWebResponse_classReference, (Optr)&t_send0, (Optr)PSend23759, (Optr)&t_send1, (Optr)PSend23760, (Optr)&t_method_return);
    Method PMethod23752 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23753, 1, PSend23760);
    
    MethodClosure MC_SMB_newResponse = new_MethodClosure((Method)PMethod23752, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_newResponse, MC_SMB_newResponse);
}


static void init_SMB_send3xxResponse_code_() {
    Symbol SMB_send3xxResponse_code_ = new_Symbol(L"send3xxResponse:code:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Array PArray23762 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23765 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23766 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23764 = new_Block_with(PArray23765, empty_Array, PThreadedCode23766, 0);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    // send3xxResponse:code:do:. 
    Send PSend23767 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)PBlock23764);
    Array PThreadedCode23763 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_push_closure, (Optr)PBlock23764, (Optr)&t_send3, (Optr)PSend23767, (Optr)&t_method_return);
    Method PMethod23761 = new_Method_with(PArray23762, empty_Array, empty_Array, PThreadedCode23763, 1, PSend23767);
    
    MethodClosure MC_SMB_send3xxResponse_code_ = new_MethodClosure((Method)PMethod23761, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_, MC_SMB_send3xxResponse_code_);
}


static void init_SMB_sendResponse_chunked_do_() {
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Variable VAR_hdrBlock_0_2 = new_Variable_named(L"hdrBlock", 0);
    Array PArray23769 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)VAR_hdrBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray23770 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23774 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23775 = new_String(L"HTTP/1.1");
    Constant string_23775_Const = new_Constant((Optr)string_23775);
    // protocol:code:. 
    Send PSend23773 = new_Send((Optr)PSend23774, SMB_protocol_code_, 2, (Optr)string_23775_Const, (Optr)VAR_code_0_0);
    Assign PAssign23772 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23773);
    String string_23776 = new_String(L"Transfer-Encoding");
    String string_23777 = new_String(L"chunked");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23776_Const = new_Constant((Optr)string_23776);
    Constant string_23777_Const = new_Constant((Optr)string_23777);
    // headerAt:put:. 
    Send PSend23778 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23776_Const, (Optr)string_23777_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23779 = new_Send((Optr)VAR_hdrBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray23781 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    // stream:. 
    Send PSend23783 = new_Send((Optr)VAR_resp_0_3, SMB_stream_, 1, (Optr)VAR_aStream_1_0);
    // value:. 
    Send PSend23784 = new_Send((Optr)VAR_chunkBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23786 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23788 = new_String(L"0");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_23788_Const = new_Constant((Optr)string_23788);
    // nextPutAll:. 
    Send PSend23789 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)string_23788_Const);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23790 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    // crlf. 
    Send PSend23791 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23792 = new_Send((Optr)VAR__receiver__2_0, SMB_flush, 0);
    Array PThreadedCode23787 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_23788, (Optr)&t_send1, (Optr)PSend23789, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23790, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23791, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23792, (Optr)&t_method_return);
    Block PBlock23785 = new_Block_with(PArray23786, empty_Array, PThreadedCode23787, 4, PSend23789, PSend23790, PSend23791, PSend23792);
    // value:. 
    Send PSend23793 = new_Send((Optr)PBlock23785, SMB_value_, 1, (Optr)VAR_aStream_1_0);
    Array PThreadedCode23782 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23783, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23784, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23785, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend23793, (Optr)&t_method_return);
    Block PBlock23780 = new_Block_with(PArray23781, empty_Array, PThreadedCode23782, 3, PSend23783, PSend23784, PSend23793);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23794 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_3, (Optr)PBlock23780);
    Array PThreadedCode23771 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23772, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23774, (Optr)&t_push1, (Optr)string_23775, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend23773, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23776, (Optr)&t_push1, (Optr)string_23777, (Optr)&t_send2, (Optr)PSend23778, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23779, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_closure, (Optr)PBlock23780, (Optr)&t_send2, (Optr)PSend23794, (Optr)&t_method_return);
    Method PMethod23768 = new_Method_with(PArray23769, PArray23770, empty_Array, PThreadedCode23771, 4, PAssign23772, PSend23778, PSend23779, PSend23794);
    
    MethodClosure MC_SMB_sendResponse_chunked_do_ = new_MethodClosure((Method)PMethod23768, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_do_, MC_SMB_sendResponse_chunked_do_);
}


static void init_SMB_isOptionsRequest() {
    Symbol SMB_isOptionsRequest = new_Symbol(L"isOptionsRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
<<<<<<< HEAD
    Send PSend23996 = new_Send((Optr)self, SMB_method, 0);
    String string_23997 = new_String(L"OPTIONS");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23997_Const = new_Constant((Optr)string_23997);
    // =. 
    Send PSend23998 = new_Send((Optr)PSend23996, SMB__equals_, 1, (Optr)string_23997_Const);
    Array PThreadedCode23995 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23996, (Optr)&t_push1, (Optr)string_23997, (Optr)&t_send1, (Optr)PSend23998, (Optr)&t_method_return);
    Method PMethod23994 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23995, 1, PSend23998);
    
    MethodClosure MC_SMB_isOptionsRequest = new_MethodClosure((Method)PMethod23994, WebClient_Core_WebRequest_Class);
=======
    Send PSend23797 = new_Send((Optr)self, SMB_method, 0);
    String string_23798 = new_String(L"OPTIONS");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23798_Const = new_Constant((Optr)string_23798);
    // =. 
    Send PSend23799 = new_Send((Optr)PSend23797, SMB__equals_, 1, (Optr)string_23798_Const);
    Array PThreadedCode23796 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23797, (Optr)&t_push1, (Optr)string_23798, (Optr)&t_send1, (Optr)PSend23799, (Optr)&t_method_return);
    Method PMethod23795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23796, 1, PSend23799);
    
    MethodClosure MC_SMB_isOptionsRequest = new_MethodClosure((Method)PMethod23795, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_isOptionsRequest, MC_SMB_isOptionsRequest);
}


<<<<<<< HEAD
static void init_SMB_send404Response_() {
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Array PArray24000 = new_Array_with(1, (Optr)VAR_body_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24003 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24005 = new_String(L"Content-Type");
    String string_24006 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24005_Const = new_Constant((Optr)string_24005);
    Constant string_24006_Const = new_Constant((Optr)string_24006);
    // headerAt:put:. 
    Send PSend24007 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24005_Const, (Optr)string_24006_Const);
    Array PThreadedCode24004 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24005, (Optr)&t_push1, (Optr)string_24006, (Optr)&t_send2, (Optr)PSend24007, (Optr)&t_method_return);
    Block PBlock24002 = new_Block_with(PArray24003, empty_Array, PThreadedCode24004, 1, PSend24007);
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    // send404Response:do:. 
    Send PSend24008 = new_Send((Optr)self, SMB_send404Response_do_, 2, (Optr)VAR_body_0_0, (Optr)PBlock24002);
    Array PThreadedCode24001 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_push_closure, (Optr)PBlock24002, (Optr)&t_send2, (Optr)PSend24008, (Optr)&t_method_return);
    Method PMethod23999 = new_Method_with(PArray24000, empty_Array, empty_Array, PThreadedCode24001, 1, PSend24008);
    
    MethodClosure MC_SMB_send404Response_ = new_MethodClosure((Method)PMethod23999, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_, MC_SMB_send404Response_);
=======
static void init_SMB_isTraceRequest() {
    Symbol SMB_isTraceRequest = new_Symbol(L"isTraceRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23802 = new_Send((Optr)self, SMB_method, 0);
    String string_23803 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23803_Const = new_Constant((Optr)string_23803);
    // =. 
    Send PSend23804 = new_Send((Optr)PSend23802, SMB__equals_, 1, (Optr)string_23803_Const);
    Array PThreadedCode23801 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23802, (Optr)&t_push1, (Optr)string_23803, (Optr)&t_send1, (Optr)PSend23804, (Optr)&t_method_return);
    Method PMethod23800 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23801, 1, PSend23804);
    
    MethodClosure MC_SMB_isTraceRequest = new_MethodClosure((Method)PMethod23800, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isTraceRequest, MC_SMB_isTraceRequest);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_fields() {
    Symbol SMB_fields = new_Symbol(L"fields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
<<<<<<< HEAD
    Array PArray24010 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24013 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24012 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend24013);
    Symbol SMB_getFields = new_Symbol(L"getFields");
    // getFields. 
    Send PSend24014 = new_Send((Optr)self, SMB_getFields, 0);
    Variable VAR_a_1_0 = new_Variable_named(L"a", 1);
    Array PArray24016 = new_Array_with(1, (Optr)VAR_a_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24018 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode24017 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend24018, (Optr)&t_method_return);
    Block PBlock24015 = new_Block_with(PArray24016, empty_Array, PThreadedCode24017, 1, PSend24018);
    Symbol SMB_associationsDo_ = new_Symbol(L"associationsDo:");
    // associationsDo:. 
    Send PSend24019 = new_Send((Optr)PSend24014, SMB_associationsDo_, 1, (Optr)PBlock24015);
    Symbol SMB_postFields = new_Symbol(L"postFields");
    // postFields. 
    Send PSend24020 = new_Send((Optr)self, SMB_postFields, 0);
    Array PArray24022 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend24024 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode24023 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend24024, (Optr)&t_method_return);
    Block PBlock24021 = new_Block_with(PArray24022, empty_Array, PThreadedCode24023, 1, PSend24024);
    // associationsDo:. 
    Send PSend24025 = new_Send((Optr)PSend24020, SMB_associationsDo_, 1, (Optr)PBlock24021);
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    // multipartFields. 
    Send PSend24026 = new_Send((Optr)self, SMB_multipartFields, 0);
    Array PArray24028 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend24030 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode24029 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend24030, (Optr)&t_method_return);
    Block PBlock24027 = new_Block_with(PArray24028, empty_Array, PThreadedCode24029, 1, PSend24030);
    // associationsDo:. 
    Send PSend24031 = new_Send((Optr)PSend24026, SMB_associationsDo_, 1, (Optr)PBlock24027);
    Array PThreadedCode24011 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign24012, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24013, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24014, (Optr)&t_push_closure, (Optr)PBlock24015, (Optr)&t_send1, (Optr)PSend24019, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24020, (Optr)&t_push_closure, (Optr)PBlock24021, (Optr)&t_send1, (Optr)PSend24025, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24026, (Optr)&t_push_closure, (Optr)PBlock24027, (Optr)&t_send1, (Optr)PSend24031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod24009 = new_Method_with(empty_Array, PArray24010, empty_Array, PThreadedCode24011, 5, PAssign24012, PSend24019, PSend24025, PSend24031, VAR_fields_0_0);
    
    MethodClosure MC_SMB_fields = new_MethodClosure((Method)PMethod24009, WebClient_Core_WebRequest_Class);
=======
    Array PArray23806 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23809 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23808 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend23809);
    Symbol SMB_getFields = new_Symbol(L"getFields");
    // getFields. 
    Send PSend23810 = new_Send((Optr)self, SMB_getFields, 0);
    Variable VAR_a_1_0 = new_Variable_named(L"a", 1);
    Array PArray23812 = new_Array_with(1, (Optr)VAR_a_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23814 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23813 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23814, (Optr)&t_method_return);
    Block PBlock23811 = new_Block_with(PArray23812, empty_Array, PThreadedCode23813, 1, PSend23814);
    Symbol SMB_associationsDo_ = new_Symbol(L"associationsDo:");
    // associationsDo:. 
    Send PSend23815 = new_Send((Optr)PSend23810, SMB_associationsDo_, 1, (Optr)PBlock23811);
    Symbol SMB_postFields = new_Symbol(L"postFields");
    // postFields. 
    Send PSend23816 = new_Send((Optr)self, SMB_postFields, 0);
    Array PArray23818 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23820 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23819 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23820, (Optr)&t_method_return);
    Block PBlock23817 = new_Block_with(PArray23818, empty_Array, PThreadedCode23819, 1, PSend23820);
    // associationsDo:. 
    Send PSend23821 = new_Send((Optr)PSend23816, SMB_associationsDo_, 1, (Optr)PBlock23817);
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    // multipartFields. 
    Send PSend23822 = new_Send((Optr)self, SMB_multipartFields, 0);
    Array PArray23824 = new_Array_with(1, (Optr)VAR_a_1_0);
    // add:. 
    Send PSend23826 = new_Send((Optr)VAR_fields_0_0, SMB_add_, 1, (Optr)VAR_a_1_0);
    Array PThreadedCode23825 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_a_1_0, (Optr)&t_send1, (Optr)PSend23826, (Optr)&t_method_return);
    Block PBlock23823 = new_Block_with(PArray23824, empty_Array, PThreadedCode23825, 1, PSend23826);
    // associationsDo:. 
    Send PSend23827 = new_Send((Optr)PSend23822, SMB_associationsDo_, 1, (Optr)PBlock23823);
    Array PThreadedCode23807 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign23808, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23809, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23810, (Optr)&t_push_closure, (Optr)PBlock23811, (Optr)&t_send1, (Optr)PSend23815, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23816, (Optr)&t_push_closure, (Optr)PBlock23817, (Optr)&t_send1, (Optr)PSend23821, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23822, (Optr)&t_push_closure, (Optr)PBlock23823, (Optr)&t_send1, (Optr)PSend23827, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod23805 = new_Method_with(empty_Array, PArray23806, empty_Array, PThreadedCode23807, 5, PAssign23808, PSend23815, PSend23821, PSend23827, VAR_fields_0_0);
    
    MethodClosure MC_SMB_fields = new_MethodClosure((Method)PMethod23805, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_fields, MC_SMB_fields);
}


static void init_SMB_send404Response() {
    Symbol SMB_send404Response = new_Symbol(L"send404Response");
<<<<<<< HEAD
    String string_24034 = new_String(L"<html><head><title>404 Not Found</title></head><body><h1>404 Not Found</h1><p>The requested URL ");
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24035 = new_Send((Optr)self, SMB_rawUrl, 0);
    Constant string_24034_Const = new_Constant((Optr)string_24034);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24036 = new_Send((Optr)string_24034_Const, SMB__append_, 1, (Optr)PSend24035);
    String string_24037 = new_String(L" was not found on this server.</p></body></html>");
    Constant string_24037_Const = new_Constant((Optr)string_24037);
    // ,. 
    Send PSend24038 = new_Send((Optr)PSend24036, SMB__append_, 1, (Optr)string_24037_Const);
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    // send404Response:. 
    Send PSend24039 = new_Send((Optr)self, SMB_send404Response_, 1, (Optr)PSend24038);
    Array PThreadedCode24033 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24034, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24035, (Optr)&t_send1, (Optr)PSend24036, (Optr)&t_push1, (Optr)string_24037, (Optr)&t_send1, (Optr)PSend24038, (Optr)&t_send1, (Optr)PSend24039, (Optr)&t_method_return);
    Method PMethod24032 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24033, 1, PSend24039);
    
    MethodClosure MC_SMB_send404Response = new_MethodClosure((Method)PMethod24032, WebClient_Core_WebRequest_Class);
=======
    String string_23830 = new_String(L"<html><head><title>404 Not Found</title></head><body><h1>404 Not Found</h1><p>The requested URL ");
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23831 = new_Send((Optr)self, SMB_rawUrl, 0);
    Constant string_23830_Const = new_Constant((Optr)string_23830);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23832 = new_Send((Optr)string_23830_Const, SMB__append_, 1, (Optr)PSend23831);
    String string_23833 = new_String(L" was not found on this server.</p></body></html>");
    Constant string_23833_Const = new_Constant((Optr)string_23833);
    // ,. 
    Send PSend23834 = new_Send((Optr)PSend23832, SMB__append_, 1, (Optr)string_23833_Const);
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    // send404Response:. 
    Send PSend23835 = new_Send((Optr)self, SMB_send404Response_, 1, (Optr)PSend23834);
    Array PThreadedCode23829 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23830, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23831, (Optr)&t_send1, (Optr)PSend23832, (Optr)&t_push1, (Optr)string_23833, (Optr)&t_send1, (Optr)PSend23834, (Optr)&t_send1, (Optr)PSend23835, (Optr)&t_method_return);
    Method PMethod23828 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23829, 1, PSend23835);
    
    MethodClosure MC_SMB_send404Response = new_MethodClosure((Method)PMethod23828, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response, MC_SMB_send404Response);
}


<<<<<<< HEAD
static void init_SMB_isDeleteRequest() {
    Symbol SMB_isDeleteRequest = new_Symbol(L"isDeleteRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24042 = new_Send((Optr)self, SMB_method, 0);
    String string_24043 = new_String(L"DELETE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24043_Const = new_Constant((Optr)string_24043);
    // =. 
    Send PSend24044 = new_Send((Optr)PSend24042, SMB__equals_, 1, (Optr)string_24043_Const);
    Array PThreadedCode24041 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24042, (Optr)&t_push1, (Optr)string_24043, (Optr)&t_send1, (Optr)PSend24044, (Optr)&t_method_return);
    Method PMethod24040 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24041, 1, PSend24044);
    
    MethodClosure MC_SMB_isDeleteRequest = new_MethodClosure((Method)PMethod24040, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isDeleteRequest, MC_SMB_isDeleteRequest);
}


static void init_SMB_send301Response_do_() {
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24046 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_301 = new_SmallInt(301);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_301_Const = new_Constant((Optr)int_301);
    // send3xxResponse:code:do:. 
    Send PSend24048 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_301_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode24047 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend24048, (Optr)&t_method_return);
    Method PMethod24045 = new_Method_with(PArray24046, empty_Array, empty_Array, PThreadedCode24047, 1, PSend24048);
    
    MethodClosure MC_SMB_send301Response_do_ = new_MethodClosure((Method)PMethod24045, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_do_, MC_SMB_send301Response_do_);
=======
static void init_SMB_rawUrl() {
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    Array PThreadedCode23837 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_method_return);
    Method PMethod23836 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23837, 1, slot_WebClient_Core_WebRequest_rawUrl);
    
    MethodClosure MC_SMB_rawUrl = new_MethodClosure((Method)PMethod23836, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl, MC_SMB_rawUrl);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_send200Response_contentType_() {
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
<<<<<<< HEAD
    Array PArray24050 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24053 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24054 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24052 = new_Block_with(PArray24053, empty_Array, PThreadedCode24054, 0);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    // send200Response:contentType:do:. 
    Send PSend24055 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)PBlock24052);
    Array PThreadedCode24051 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_push_closure, (Optr)PBlock24052, (Optr)&t_send3, (Optr)PSend24055, (Optr)&t_method_return);
    Method PMethod24049 = new_Method_with(PArray24050, empty_Array, empty_Array, PThreadedCode24051, 1, PSend24055);
    
    MethodClosure MC_SMB_send200Response_contentType_ = new_MethodClosure((Method)PMethod24049, WebClient_Core_WebRequest_Class);
=======
    Array PArray23839 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23842 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23843 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23841 = new_Block_with(PArray23842, empty_Array, PThreadedCode23843, 0);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    // send200Response:contentType:do:. 
    Send PSend23844 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)PBlock23841);
    Array PThreadedCode23840 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_push_closure, (Optr)PBlock23841, (Optr)&t_send3, (Optr)PSend23844, (Optr)&t_method_return);
    Method PMethod23838 = new_Method_with(PArray23839, empty_Array, empty_Array, PThreadedCode23840, 1, PSend23844);
    
    MethodClosure MC_SMB_send200Response_contentType_ = new_MethodClosure((Method)PMethod23838, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_, MC_SMB_send200Response_contentType_);
}


<<<<<<< HEAD
static void init_SMB_multipartFields() {
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray24057 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24060 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24059 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend24060);
    Variable VAR_hdrs_1_0 = new_Variable_named(L"hdrs", 1);
    Variable VAR_params_1_1 = new_Variable_named(L"params", 1);
    Variable VAR_cntnt_1_2 = new_Variable_named(L"cntnt", 1);
    Array PArray24062 = new_Array_with(3, (Optr)VAR_hdrs_1_0, (Optr)VAR_params_1_1, (Optr)VAR_cntnt_1_2);
    String string_24064 = new_String(L"name");
    Variable VAR_fieldName_2_0 = new_Variable_named(L"fieldName", 2);
    Array PArray24066 = new_Array_with(1, (Optr)VAR_fieldName_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24068 = new_Send((Optr)VAR_fields_0_0, SMB_at_put_, 2, (Optr)VAR_fieldName_2_0, (Optr)VAR_cntnt_1_2);
    Array PThreadedCode24067 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_fieldName_2_0, (Optr)&t_push_variable, (Optr)VAR_cntnt_1_2, (Optr)&t_send2, (Optr)PSend24068, (Optr)&t_method_return);
    Block PBlock24065 = new_Block_with(PArray24066, empty_Array, PThreadedCode24067, 1, PSend24068);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Constant string_24064_Const = new_Constant((Optr)string_24064);
    // at:ifPresent:. 
    Send PSend24069 = new_Send((Optr)VAR_params_1_1, SMB_at_ifPresent_, 2, (Optr)string_24064_Const, (Optr)PBlock24065);
    Array PThreadedCode24063 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_params_1_1, (Optr)&t_push1, (Optr)string_24064, (Optr)&t_push_closure, (Optr)PBlock24065, (Optr)&t_send2, (Optr)PSend24069, (Optr)&t_method_return);
    Block PBlock24061 = new_Block_with(PArray24062, empty_Array, PThreadedCode24063, 1, PSend24069);
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    // multipartFieldsDo:. 
    Send PSend24070 = new_Send((Optr)self, SMB_multipartFieldsDo_, 1, (Optr)PBlock24061);
    Array PThreadedCode24058 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24059, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24060, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock24061, (Optr)&t_send1, (Optr)PSend24070, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod24056 = new_Method_with(empty_Array, PArray24057, empty_Array, PThreadedCode24058, 3, PAssign24059, PSend24070, VAR_fields_0_0);
    
    MethodClosure MC_SMB_multipartFields = new_MethodClosure((Method)PMethod24056, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFields, MC_SMB_multipartFields);
}


static void init_SMB_sendResponse_chunked_do_() {
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Variable VAR_hdrBlock_0_2 = new_Variable_named(L"hdrBlock", 0);
    Array PArray24072 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)VAR_hdrBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray24073 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24077 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24078 = new_String(L"HTTP/1.1");
    Constant string_24078_Const = new_Constant((Optr)string_24078);
    // protocol:code:. 
    Send PSend24076 = new_Send((Optr)PSend24077, SMB_protocol_code_, 2, (Optr)string_24078_Const, (Optr)VAR_code_0_0);
    Assign PAssign24075 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24076);
    String string_24079 = new_String(L"Transfer-Encoding");
    String string_24080 = new_String(L"chunked");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24079_Const = new_Constant((Optr)string_24079);
    Constant string_24080_Const = new_Constant((Optr)string_24080);
    // headerAt:put:. 
    Send PSend24081 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24079_Const, (Optr)string_24080_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24082 = new_Send((Optr)VAR_hdrBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR_aStream_1_0 = new_Variable_named(L"aStream", 1);
    Array PArray24084 = new_Array_with(1, (Optr)VAR_aStream_1_0);
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    // stream:. 
    Send PSend24086 = new_Send((Optr)VAR_resp_0_3, SMB_stream_, 1, (Optr)VAR_aStream_1_0);
    // value:. 
    Send PSend24087 = new_Send((Optr)VAR_chunkBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray24089 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_24091 = new_String(L"0");
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    Constant string_24091_Const = new_Constant((Optr)string_24091);
    // nextPutAll:. 
    Send PSend24092 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)string_24091_Const);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24093 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    // crlf. 
    Send PSend24094 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24095 = new_Send((Optr)VAR__receiver__2_0, SMB_flush, 0);
    Array PThreadedCode24090 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_24091, (Optr)&t_send1, (Optr)PSend24092, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend24093, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend24094, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend24095, (Optr)&t_method_return);
    Block PBlock24088 = new_Block_with(PArray24089, empty_Array, PThreadedCode24090, 4, PSend24092, PSend24093, PSend24094, PSend24095);
    // value:. 
    Send PSend24096 = new_Send((Optr)PBlock24088, SMB_value_, 1, (Optr)VAR_aStream_1_0);
    Array PThreadedCode24085 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend24086, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24087, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24088, (Optr)&t_push_variable, (Optr)VAR_aStream_1_0, (Optr)&t_send1, (Optr)PSend24096, (Optr)&t_method_return);
    Block PBlock24083 = new_Block_with(PArray24084, empty_Array, PThreadedCode24085, 3, PSend24086, PSend24087, PSend24096);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend24097 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_3, (Optr)PBlock24083);
    Array PThreadedCode24074 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24075, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24077, (Optr)&t_push1, (Optr)string_24078, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend24076, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24079, (Optr)&t_push1, (Optr)string_24080, (Optr)&t_send2, (Optr)PSend24081, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24082, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_closure, (Optr)PBlock24083, (Optr)&t_send2, (Optr)PSend24097, (Optr)&t_method_return);
    Method PMethod24071 = new_Method_with(PArray24072, PArray24073, empty_Array, PThreadedCode24074, 4, PAssign24075, PSend24081, PSend24082, PSend24097);
    
    MethodClosure MC_SMB_sendResponse_chunked_do_ = new_MethodClosure((Method)PMethod24071, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_do_, MC_SMB_sendResponse_chunked_do_);
=======
static void init_SMB_stream200Response_() {
    Symbol SMB_stream200Response_ = new_Symbol(L"stream200Response:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23846 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23848 = new_Send((Optr)VAR_aStream_0_0, SMB_size, 0);
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    // stream200Response:size:. 
    Send PSend23849 = new_Send((Optr)self, SMB_stream200Response_size_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend23848);
    Array PThreadedCode23847 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23848, (Optr)&t_send2, (Optr)PSend23849, (Optr)&t_method_return);
    Method PMethod23845 = new_Method_with(PArray23846, empty_Array, empty_Array, PThreadedCode23847, 1, PSend23849);
    
    MethodClosure MC_SMB_stream200Response_ = new_MethodClosure((Method)PMethod23845, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_, MC_SMB_stream200Response_);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_sendResponse_contentStream_size_() {
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_2 = new_Variable_named(L"streamSize", 0);
<<<<<<< HEAD
    Array PArray24099 = new_Array_with(3, (Optr)VAR_resp_0_0, (Optr)VAR_aStream_0_1, (Optr)VAR_streamSize_0_2);
    String string_24103 = new_String(L"Connection");
    String string_24104 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24103_Const = new_Constant((Optr)string_24103);
    Constant string_24104_Const = new_Constant((Optr)string_24104);
    // headerAt:put:. 
    Send PSend24105 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_24103_Const, (Optr)string_24104_Const);
    Array PThreadedCode24102 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24103, (Optr)&t_push1, (Optr)string_24104, (Optr)&t_send2, (Optr)PSend24105, (Optr)&t_block_return);
    Block PBlock24101 = new_Block_with(empty_Array, empty_Array, PThreadedCode24102, 1, PSend24105);
    String string_24108 = new_String(L"Content-Length");
    Constant string_24108_Const = new_Constant((Optr)string_24108);
    // headerAt:put:. 
    Send PSend24109 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24108_Const, (Optr)VAR_streamSize_0_2);
    Array PThreadedCode24107 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24108, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_send2, (Optr)PSend24109, (Optr)&t_block_return);
    Block PBlock24106 = new_Block_with(empty_Array, empty_Array, PThreadedCode24107, 1, PSend24109);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend24110 = new_Send((Optr)VAR_streamSize_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock24101, (Optr)PBlock24106);
    Variable VAR_sockStream_1_0 = new_Variable_named(L"sockStream", 1);
    Array PArray24112 = new_Array_with(1, (Optr)VAR_sockStream_1_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend24114 = new_Send((Optr)VAR_resp_0_0, SMB_streamFrom_to_size_progress_, 4, (Optr)VAR_aStream_0_1, (Optr)VAR_sockStream_1_0, (Optr)VAR_streamSize_0_2, (Optr)nil_Const);
    Array PThreadedCode24113 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_variable, (Optr)VAR_sockStream_1_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend24114, (Optr)&t_method_return);
    Block PBlock24111 = new_Block_with(PArray24112, empty_Array, PThreadedCode24113, 1, PSend24114);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend24115 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock24111);
    Array PThreadedCode24100 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_closure, (Optr)PBlock24101, (Optr)&t_push_closure, (Optr)PBlock24106, (Optr)&t_send2, (Optr)PSend24110, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock24111, (Optr)&t_send2, (Optr)PSend24115, (Optr)&t_method_return);
    Method PMethod24098 = new_Method_with(PArray24099, empty_Array, empty_Array, PThreadedCode24100, 2, PSend24110, PSend24115);
    
    MethodClosure MC_SMB_sendResponse_contentStream_size_ = new_MethodClosure((Method)PMethod24098, WebClient_Core_WebRequest_Class);
=======
    Array PArray23851 = new_Array_with(3, (Optr)VAR_resp_0_0, (Optr)VAR_aStream_0_1, (Optr)VAR_streamSize_0_2);
    String string_23855 = new_String(L"Connection");
    String string_23856 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23855_Const = new_Constant((Optr)string_23855);
    Constant string_23856_Const = new_Constant((Optr)string_23856);
    // headerAt:put:. 
    Send PSend23857 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23855_Const, (Optr)string_23856_Const);
    Array PThreadedCode23854 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23855, (Optr)&t_push1, (Optr)string_23856, (Optr)&t_send2, (Optr)PSend23857, (Optr)&t_block_return);
    Block PBlock23853 = new_Block_with(empty_Array, empty_Array, PThreadedCode23854, 1, PSend23857);
    String string_23860 = new_String(L"Content-Length");
    Constant string_23860_Const = new_Constant((Optr)string_23860);
    // headerAt:put:. 
    Send PSend23861 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_23860_Const, (Optr)VAR_streamSize_0_2);
    Array PThreadedCode23859 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_23860, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_send2, (Optr)PSend23861, (Optr)&t_block_return);
    Block PBlock23858 = new_Block_with(empty_Array, empty_Array, PThreadedCode23859, 1, PSend23861);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend23862 = new_Send((Optr)VAR_streamSize_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23853, (Optr)PBlock23858);
    Variable VAR_sockStream_1_0 = new_Variable_named(L"sockStream", 1);
    Array PArray23864 = new_Array_with(1, (Optr)VAR_sockStream_1_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23866 = new_Send((Optr)VAR_resp_0_0, SMB_streamFrom_to_size_progress_, 4, (Optr)VAR_aStream_0_1, (Optr)VAR_sockStream_1_0, (Optr)VAR_streamSize_0_2, (Optr)nil_Const);
    Array PThreadedCode23865 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_variable, (Optr)VAR_sockStream_1_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23866, (Optr)&t_method_return);
    Block PBlock23863 = new_Block_with(PArray23864, empty_Array, PThreadedCode23865, 1, PSend23866);
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    // sendResponse:contentBlock:. 
    Send PSend23867 = new_Send((Optr)self, SMB_sendResponse_contentBlock_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock23863);
    Array PThreadedCode23852 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_2, (Optr)&t_push_closure, (Optr)PBlock23853, (Optr)&t_push_closure, (Optr)PBlock23858, (Optr)&t_send2, (Optr)PSend23862, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock23863, (Optr)&t_send2, (Optr)PSend23867, (Optr)&t_method_return);
    Method PMethod23850 = new_Method_with(PArray23851, empty_Array, empty_Array, PThreadedCode23852, 2, PSend23862, PSend23867);
    
    MethodClosure MC_SMB_sendResponse_contentStream_size_ = new_MethodClosure((Method)PMethod23850, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentStream_size_, MC_SMB_sendResponse_contentStream_size_);
}


static void init_SMB_server_() {
    Symbol SMB_server_ = new_Symbol(L"server:");
    Variable VAR_aWebServer_0_0 = new_Variable_named(L"aWebServer", 0);
<<<<<<< HEAD
    Array PArray24117 = new_Array_with(1, (Optr)VAR_aWebServer_0_0);
    Assign PAssign24119 = new_Assign((Optr)slot_WebClient_Core_WebRequest_server, (Optr)VAR_aWebServer_0_0);
    Array PThreadedCode24118 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24119, (Optr)&t_push_variable, (Optr)VAR_aWebServer_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24116 = new_Method_with(PArray24117, empty_Array, empty_Array, PThreadedCode24118, 2, PAssign24119, self);
    
    MethodClosure MC_SMB_server_ = new_MethodClosure((Method)PMethod24116, WebClient_Core_WebRequest_Class);
=======
    Array PArray23869 = new_Array_with(1, (Optr)VAR_aWebServer_0_0);
    Assign PAssign23871 = new_Assign((Optr)slot_WebClient_Core_WebRequest_server, (Optr)VAR_aWebServer_0_0);
    Array PThreadedCode23870 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23871, (Optr)&t_push_variable, (Optr)VAR_aWebServer_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23868 = new_Method_with(PArray23869, empty_Array, empty_Array, PThreadedCode23870, 2, PAssign23871, self);
    
    MethodClosure MC_SMB_server_ = new_MethodClosure((Method)PMethod23868, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_server_, MC_SMB_server_);
}


<<<<<<< HEAD
static void init_SMB_sendResponseCode_content_type_do_() {
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray24121 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray24122 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24126 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24127 = new_String(L"HTTP/1.1");
    Constant string_24127_Const = new_Constant((Optr)string_24127);
    // protocol:code:. 
    Send PSend24125 = new_Send((Optr)PSend24126, SMB_protocol_code_, 2, (Optr)string_24127_Const, (Optr)VAR_code_0_0);
    Assign PAssign24124 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend24125);
    String string_24130 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24130_Const = new_Constant((Optr)string_24130);
    // headerAt:put:. 
    Send PSend24131 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_24130_Const, (Optr)VAR_contentType_0_2);
    Array PThreadedCode24129 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_24130, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend24131, (Optr)&t_block_return);
    Block PBlock24128 = new_Block_with(empty_Array, empty_Array, PThreadedCode24129, 1, PSend24131);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24132 = new_Send((Optr)VAR_contentType_0_2, SMB_ifNotNil_, 1, (Optr)PBlock24128);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24133 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24134 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_4, (Optr)VAR_aString_0_1);
    Array PThreadedCode24123 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign24124, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24126, (Optr)&t_push1, (Optr)string_24127, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend24125, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24128, (Optr)&t_send1, (Optr)PSend24132, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend24133, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send2, (Optr)PSend24134, (Optr)&t_method_return);
    Method PMethod24120 = new_Method_with(PArray24121, PArray24122, empty_Array, PThreadedCode24123, 4, PAssign24124, PSend24132, PSend24133, PSend24134);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_do_ = new_MethodClosure((Method)PMethod24120, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_do_, MC_SMB_sendResponseCode_content_type_do_);
}


static void init_SMB_send302Response_do_() {
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24136 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_302 = new_SmallInt(302);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_302_Const = new_Constant((Optr)int_302);
    // send3xxResponse:code:do:. 
    Send PSend24138 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_302_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode24137 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend24138, (Optr)&t_method_return);
    Method PMethod24135 = new_Method_with(PArray24136, empty_Array, empty_Array, PThreadedCode24137, 1, PSend24138);
    
    MethodClosure MC_SMB_send302Response_do_ = new_MethodClosure((Method)PMethod24135, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_do_, MC_SMB_send302Response_do_);
}


static void init_SMB_closeIfTransient_after_() {
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24140 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_close_0_2 = new_Variable_named(L"close", 0);
    Array PArray24141 = new_Array_with(1, (Optr)VAR_close_0_2);
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend24145 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend24144 = new_Send((Optr)PSend24145, SMB_not, 0);
    Assign PAssign24143 = new_Assign((Optr)VAR_close_0_2, (Optr)PSend24144);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24149 = new_String(L"Connection");
    String string_24150 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24149_Const = new_Constant((Optr)string_24149);
    Constant string_24150_Const = new_Constant((Optr)string_24150);
    // headerAt:put:. 
    Send PSend24151 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24149_Const, (Optr)string_24150_Const);
    Array PThreadedCode24148 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24149, (Optr)&t_push1, (Optr)string_24150, (Optr)&t_send2, (Optr)PSend24151, (Optr)&t_block_return);
    Block PBlock24147 = new_Block_with(empty_Array, empty_Array, PThreadedCode24148, 1, PSend24151);
    // ifTrue:. 
    Send PSend24146 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock24147);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24152 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24153 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend24157 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode24156 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24157, (Optr)&t_block_return);
    Block PBlock24155 = new_Block_with(empty_Array, empty_Array, PThreadedCode24156, 1, PSend24157);
    // ifTrue:. 
    Send PSend24154 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock24155);
    Array PThreadedCode24142 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign24143, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24145, (Optr)&t_send0, (Optr)PSend24144, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend24146, (Optr)PBlock24147, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend24152, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend24153, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend24154, (Optr)PBlock24155, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24139 = new_Method_with(PArray24140, PArray24141, empty_Array, PThreadedCode24142, 6, PAssign24143, PSend24146, PSend24152, PSend24153, PSend24154, self);
    
    MethodClosure MC_SMB_closeIfTransient_after_ = new_MethodClosure((Method)PMethod24139, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_closeIfTransient_after_, MC_SMB_closeIfTransient_after_);
}


static void init_SMB_send200Response_() {
    Symbol SMB_send200Response_ = new_Symbol(L"send200Response:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24159 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_24161 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_24161_Const = new_Constant((Optr)string_24161);
    // send200Response:contentType:. 
    Send PSend24162 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_aString_0_0, (Optr)string_24161_Const);
    Array PThreadedCode24160 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push1, (Optr)string_24161, (Optr)&t_send2, (Optr)PSend24162, (Optr)&t_method_return);
    Method PMethod24158 = new_Method_with(PArray24159, empty_Array, empty_Array, PThreadedCode24160, 1, PSend24162);
    
    MethodClosure MC_SMB_send200Response_ = new_MethodClosure((Method)PMethod24158, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_, MC_SMB_send200Response_);
=======
static void init_SMB_send301Response_() {
    Symbol SMB_send301Response_ = new_Symbol(L"send301Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray23873 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray23876 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode23877 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock23875 = new_Block_with(PArray23876, empty_Array, PThreadedCode23877, 0);
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    // send301Response:do:. 
    Send PSend23878 = new_Send((Optr)self, SMB_send301Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock23875);
    Array PThreadedCode23874 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock23875, (Optr)&t_send2, (Optr)PSend23878, (Optr)&t_method_return);
    Method PMethod23872 = new_Method_with(PArray23873, empty_Array, empty_Array, PThreadedCode23874, 1, PSend23878);
    
    MethodClosure MC_SMB_send301Response_ = new_MethodClosure((Method)PMethod23872, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_, MC_SMB_send301Response_);
}


static void init_SMB_server() {
    Symbol SMB_server = new_Symbol(L"server");
    Array PThreadedCode23880 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_method_return);
    Method PMethod23879 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23880, 1, slot_WebClient_Core_WebRequest_server);
    
    MethodClosure MC_SMB_server = new_MethodClosure((Method)PMethod23879, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server, MC_SMB_server);
}


static void init_SMB_getFields() {
    Symbol SMB_getFields = new_Symbol(L"getFields");
    Variable VAR_args_0_0 = new_Variable_named(L"args", 0);
    Array PArray23882 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23885 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    Character char_23890 = new_Character(L'?');
    Constant char_23890_Const = new_Constant((Optr)char_23890);
    // copyAfter:. 
    Send PSend23889 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyAfter_, 1, (Optr)char_23890_Const);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23893 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23894 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend23893);
    Array PThreadedCode23892 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23893, (Optr)&t_send1, (Optr)PSend23894, (Optr)&t_block_return);
    Block PBlock23891 = new_Block_with(empty_Array, empty_Array, PThreadedCode23892, 1, PSend23894);
    // ifEmpty:. 
    Send PSend23888 = new_Send((Optr)PSend23889, SMB_ifEmpty_, 1, (Optr)PBlock23891);
    Assign PAssign23887 = new_Assign((Optr)VAR_args_0_0, (Optr)PSend23888);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend23895 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)VAR_args_0_0, (Optr)false_Const);
    Array PThreadedCode23886 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign23887, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_23890, (Optr)&t_send1, (Optr)PSend23889, (Optr)&t_push_closure, (Optr)PBlock23891, (Optr)&t_send1, (Optr)PSend23888, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_push_false, (Optr)&t_send2, (Optr)PSend23895, (Optr)&t_method_return);
    Block PBlock23884 = new_Block_with(PArray23885, empty_Array, PThreadedCode23886, 2, PAssign23887, PSend23895);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23896 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23884);
    Array PThreadedCode23883 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23884, (Optr)&t_send1, (Optr)PSend23896, (Optr)&t_method_return);
    Method PMethod23881 = new_Method_with(empty_Array, PArray23882, empty_Array, PThreadedCode23883, 1, PSend23896);
    
    MethodClosure MC_SMB_getFields = new_MethodClosure((Method)PMethod23881, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_getFields, MC_SMB_getFields);
}


static void init_SMB_multipartFieldsDo_() {
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23898 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend23900 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend23903 = new_Send((Optr)self, SMB_contentType, 0);
    String string_23904 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23904_Const = new_Constant((Optr)string_23904);
    // beginsWith:. 
    Send PSend23905 = new_Send((Optr)PSend23903, SMB_beginsWith_, 1, (Optr)string_23904_Const);
    Array PThreadedCode23902 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23903, (Optr)&t_push1, (Optr)string_23904, (Optr)&t_send1, (Optr)PSend23905, (Optr)&t_block_return);
    Block PBlock23901 = new_Block_with(empty_Array, empty_Array, PThreadedCode23902, 1, PSend23905);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23906 = new_Send((Optr)PSend23900, SMB_and_, 1, (Optr)PBlock23901);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend23910 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend23911 = new_Send((Optr)PSend23910, SMB_readStream, 0);
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    // multipartBoundary. 
    Send PSend23912 = new_Send((Optr)self, SMB_multipartBoundary, 0);
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    // decodeMultipartForm:boundary:do:. 
    Send PSend23913 = new_Send((Optr)PWebUtils_classReference, SMB_decodeMultipartForm_boundary_do_, 3, (Optr)PSend23911, (Optr)PSend23912, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode23909 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23910, (Optr)&t_send0, (Optr)PSend23911, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23912, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send3, (Optr)PSend23913, (Optr)&t_block_return);
    Block PBlock23908 = new_Block_with(empty_Array, empty_Array, PThreadedCode23909, 1, PSend23913);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23916 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode23915 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23916, (Optr)&t_block_return);
    Block PBlock23914 = new_Block_with(empty_Array, empty_Array, PThreadedCode23915, 1, PSend23916);
    // ifTrue:ifFalse:. 
    Send PSend23907 = new_Send((Optr)PSend23906, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23908, (Optr)PBlock23914);
    Array PThreadedCode23899 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23900, (Optr)&t_push_closure, (Optr)PBlock23901, (Optr)&t_send1, (Optr)PSend23906, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23907, (Optr)PBlock23908, (Optr)PBlock23914, (Optr)&t_method_return);
    Method PMethod23897 = new_Method_with(PArray23898, empty_Array, empty_Array, PThreadedCode23899, 1, PSend23907);
    
    MethodClosure MC_SMB_multipartFieldsDo_ = new_MethodClosure((Method)PMethod23897, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFieldsDo_, MC_SMB_multipartFieldsDo_);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_isPutRequest() {
    Symbol SMB_isPutRequest = new_Symbol(L"isPutRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
<<<<<<< HEAD
    Send PSend24165 = new_Send((Optr)self, SMB_method, 0);
    String string_24166 = new_String(L"PUT");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24166_Const = new_Constant((Optr)string_24166);
    // =. 
    Send PSend24167 = new_Send((Optr)PSend24165, SMB__equals_, 1, (Optr)string_24166_Const);
    Array PThreadedCode24164 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24165, (Optr)&t_push1, (Optr)string_24166, (Optr)&t_send1, (Optr)PSend24167, (Optr)&t_method_return);
    Method PMethod24163 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24164, 1, PSend24167);
    
    MethodClosure MC_SMB_isPutRequest = new_MethodClosure((Method)PMethod24163, WebClient_Core_WebRequest_Class);
=======
    Send PSend23919 = new_Send((Optr)self, SMB_method, 0);
    String string_23920 = new_String(L"PUT");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23920_Const = new_Constant((Optr)string_23920);
    // =. 
    Send PSend23921 = new_Send((Optr)PSend23919, SMB__equals_, 1, (Optr)string_23920_Const);
    Array PThreadedCode23918 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23919, (Optr)&t_push1, (Optr)string_23920, (Optr)&t_send1, (Optr)PSend23921, (Optr)&t_method_return);
    Method PMethod23917 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23918, 1, PSend23921);
    
    MethodClosure MC_SMB_isPutRequest = new_MethodClosure((Method)PMethod23917, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_isPutRequest, MC_SMB_isPutRequest);
}


<<<<<<< HEAD
static void init_SMB_send3xxResponse_code_() {
    Symbol SMB_send3xxResponse_code_ = new_Symbol(L"send3xxResponse:code:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Array PArray24169 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24172 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24173 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24171 = new_Block_with(PArray24172, empty_Array, PThreadedCode24173, 0);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    // send3xxResponse:code:do:. 
    Send PSend24174 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)PBlock24171);
    Array PThreadedCode24170 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_push_closure, (Optr)PBlock24171, (Optr)&t_send3, (Optr)PSend24174, (Optr)&t_method_return);
    Method PMethod24168 = new_Method_with(PArray24169, empty_Array, empty_Array, PThreadedCode24170, 1, PSend24174);
    
    MethodClosure MC_SMB_send3xxResponse_code_ = new_MethodClosure((Method)PMethod24168, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_, MC_SMB_send3xxResponse_code_);
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


static void init_SMB_server() {
    Symbol SMB_server = new_Symbol(L"server");
    Array PThreadedCode24211 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_method_return);
    Method PMethod24210 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24211, 1, slot_WebClient_Core_WebRequest_server);
    
    MethodClosure MC_SMB_server = new_MethodClosure((Method)PMethod24210, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_server, MC_SMB_server);
}


static void init_SMB_stream200Response_size_() {
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Array PArray24213 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    String string_24215 = new_String(L"application/octet-stream");
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Constant string_24215_Const = new_Constant((Optr)string_24215);
    // stream200Response:size:type:. 
    Send PSend24216 = new_Send((Optr)self, SMB_stream200Response_size_type_, 3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)string_24215_Const);
    Array PThreadedCode24214 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push1, (Optr)string_24215, (Optr)&t_send3, (Optr)PSend24216, (Optr)&t_method_return);
    Method PMethod24212 = new_Method_with(PArray24213, empty_Array, empty_Array, PThreadedCode24214, 1, PSend24216);
    
    MethodClosure MC_SMB_stream200Response_size_ = new_MethodClosure((Method)PMethod24212, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_, MC_SMB_stream200Response_size_);
}


static void init_SMB_send302Response_() {
    Symbol SMB_send302Response_ = new_Symbol(L"send302Response:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Array PArray24218 = new_Array_with(1, (Optr)VAR_location_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24221 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24222 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24220 = new_Block_with(PArray24221, empty_Array, PThreadedCode24222, 0);
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    // send302Response:do:. 
    Send PSend24223 = new_Send((Optr)self, SMB_send302Response_do_, 2, (Optr)VAR_location_0_0, (Optr)PBlock24220);
    Array PThreadedCode24219 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push_closure, (Optr)PBlock24220, (Optr)&t_send2, (Optr)PSend24223, (Optr)&t_method_return);
    Method PMethod24217 = new_Method_with(PArray24218, empty_Array, empty_Array, PThreadedCode24219, 1, PSend24223);
    
    MethodClosure MC_SMB_send302Response_ = new_MethodClosure((Method)PMethod24217, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_, MC_SMB_send302Response_);
}


=======
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_SMB_send3xxResponse_code_do_() {
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_statusCode_0_1 = new_Variable_named(L"statusCode", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray24225 = new_Array_with(3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Variable VAR_url_0_4 = new_Variable_named(L"url", 0);
    Array PArray24226 = new_Array_with(2, (Optr)VAR_resp_0_3, (Optr)VAR_url_0_4);
    Assign PAssign24228 = new_Assign((Optr)VAR_url_0_4, (Optr)VAR_location_0_0);
    String string_24229 = new_String(L"://");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_24229_Const = new_Constant((Optr)string_24229);
    // findString:. 
    Send PSend24230 = new_Send((Optr)VAR_location_0_0, SMB_findString_, 1, (Optr)string_24229_Const);
=======
    Array PArray23923 = new_Array_with(3, (Optr)VAR_location_0_0, (Optr)VAR_statusCode_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Variable VAR_url_0_4 = new_Variable_named(L"url", 0);
    Array PArray23924 = new_Array_with(2, (Optr)VAR_resp_0_3, (Optr)VAR_url_0_4);
    Assign PAssign23926 = new_Assign((Optr)VAR_url_0_4, (Optr)VAR_location_0_0);
    String string_23927 = new_String(L"://");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23927_Const = new_Constant((Optr)string_23927);
    // findString:. 
    Send PSend23928 = new_Send((Optr)VAR_location_0_0, SMB_findString_, 1, (Optr)string_23927_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
<<<<<<< HEAD
    Send PSend24231 = new_Send((Optr)PSend24230, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24235 = new_String(L"host");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_24235_Const = new_Constant((Optr)string_24235);
    // headerAt:. 
    Send PSend24236 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_24235_Const);
    Variable VAR_host_1_0 = new_Variable_named(L"host", 1);
    Array PArray24238 = new_Array_with(1, (Optr)VAR_host_1_0);
    String string_24243 = new_String(L"http://");
    Constant string_24243_Const = new_Constant((Optr)string_24243);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24242 = new_Send((Optr)string_24243_Const, SMB__append_, 1, (Optr)VAR_host_1_0);
    // ,. 
    Send PSend24241 = new_Send((Optr)PSend24242, SMB__append_, 1, (Optr)VAR_location_0_0);
    Assign PAssign24240 = new_Assign((Optr)VAR_url_0_4, (Optr)PSend24241);
    Array PThreadedCode24239 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign24240, (Optr)&t_push1, (Optr)string_24243, (Optr)&t_push_variable, (Optr)VAR_host_1_0, (Optr)&t_send1, (Optr)PSend24242, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_send1, (Optr)PSend24241, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock24237 = new_Block_with(PArray24238, empty_Array, PThreadedCode24239, 1, PAssign24240);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend24244 = new_Send((Optr)PSend24236, SMB_ifNotEmpty_, 1, (Optr)PBlock24237);
    Array PThreadedCode24234 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24235, (Optr)&t_send1, (Optr)PSend24236, (Optr)&t_push_closure, (Optr)PBlock24237, (Optr)&t_send1, (Optr)PSend24244, (Optr)&t_block_return);
    Block PBlock24233 = new_Block_with(empty_Array, empty_Array, PThreadedCode24234, 1, PSend24244);
    // ifFalse:. 
    Send PSend24232 = new_Send((Optr)PSend24231, SMB_ifFalse_, 1, (Optr)PBlock24233);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24247 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24248 = new_String(L"HTTP/1.1");
    Constant string_24248_Const = new_Constant((Optr)string_24248);
    // protocol:code:. 
    Send PSend24246 = new_Send((Optr)PSend24247, SMB_protocol_code_, 2, (Optr)string_24248_Const, (Optr)VAR_statusCode_0_1);
    Assign PAssign24245 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24246);
    String string_24249 = new_String(L"Location");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24249_Const = new_Constant((Optr)string_24249);
    // headerAt:put:. 
    Send PSend24250 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24249_Const, (Optr)VAR_url_0_4);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24251 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    String string_24252 = new_String(L"");
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Constant string_24252_Const = new_Constant((Optr)string_24252);
    // sendResponse:content:. 
    Send PSend24253 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)string_24252_Const);
    Array PThreadedCode24227 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign24228, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)string_24229, (Optr)&t_send1, (Optr)PSend24230, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24231, (Optr)&t_send_ifFalse_, (Optr)PSend24232, (Optr)PBlock24233, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24245, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24247, (Optr)&t_push1, (Optr)string_24248, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_send2, (Optr)PSend24246, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24249, (Optr)&t_push_variable, (Optr)VAR_url_0_4, (Optr)&t_send2, (Optr)PSend24250, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24251, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24252, (Optr)&t_send2, (Optr)PSend24253, (Optr)&t_method_return);
    Method PMethod24224 = new_Method_with(PArray24225, PArray24226, empty_Array, PThreadedCode24227, 6, PAssign24228, PSend24232, PAssign24245, PSend24250, PSend24251, PSend24253);
    
    MethodClosure MC_SMB_send3xxResponse_code_do_ = new_MethodClosure((Method)PMethod24224, WebClient_Core_WebRequest_Class);
=======
    Send PSend23929 = new_Send((Optr)PSend23928, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_23933 = new_String(L"host");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23933_Const = new_Constant((Optr)string_23933);
    // headerAt:. 
    Send PSend23934 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23933_Const);
    Variable VAR_host_1_0 = new_Variable_named(L"host", 1);
    Array PArray23936 = new_Array_with(1, (Optr)VAR_host_1_0);
    String string_23941 = new_String(L"http://");
    Constant string_23941_Const = new_Constant((Optr)string_23941);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23940 = new_Send((Optr)string_23941_Const, SMB__append_, 1, (Optr)VAR_host_1_0);
    // ,. 
    Send PSend23939 = new_Send((Optr)PSend23940, SMB__append_, 1, (Optr)VAR_location_0_0);
    Assign PAssign23938 = new_Assign((Optr)VAR_url_0_4, (Optr)PSend23939);
    Array PThreadedCode23937 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign23938, (Optr)&t_push1, (Optr)string_23941, (Optr)&t_push_variable, (Optr)VAR_host_1_0, (Optr)&t_send1, (Optr)PSend23940, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_send1, (Optr)PSend23939, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23935 = new_Block_with(PArray23936, empty_Array, PThreadedCode23937, 1, PAssign23938);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend23942 = new_Send((Optr)PSend23934, SMB_ifNotEmpty_, 1, (Optr)PBlock23935);
    Array PThreadedCode23932 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23933, (Optr)&t_send1, (Optr)PSend23934, (Optr)&t_push_closure, (Optr)PBlock23935, (Optr)&t_send1, (Optr)PSend23942, (Optr)&t_block_return);
    Block PBlock23931 = new_Block_with(empty_Array, empty_Array, PThreadedCode23932, 1, PSend23942);
    // ifFalse:. 
    Send PSend23930 = new_Send((Optr)PSend23929, SMB_ifFalse_, 1, (Optr)PBlock23931);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23945 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23946 = new_String(L"HTTP/1.1");
    Constant string_23946_Const = new_Constant((Optr)string_23946);
    // protocol:code:. 
    Send PSend23944 = new_Send((Optr)PSend23945, SMB_protocol_code_, 2, (Optr)string_23946_Const, (Optr)VAR_statusCode_0_1);
    Assign PAssign23943 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23944);
    String string_23947 = new_String(L"Location");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23947_Const = new_Constant((Optr)string_23947);
    // headerAt:put:. 
    Send PSend23948 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23947_Const, (Optr)VAR_url_0_4);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23949 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    String string_23950 = new_String(L"");
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Constant string_23950_Const = new_Constant((Optr)string_23950);
    // sendResponse:content:. 
    Send PSend23951 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)string_23950_Const);
    Array PThreadedCode23925 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push1, (Optr)PAssign23926, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)string_23927, (Optr)&t_send1, (Optr)PSend23928, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23929, (Optr)&t_send_ifFalse_, (Optr)PSend23930, (Optr)PBlock23931, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23943, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23945, (Optr)&t_push1, (Optr)string_23946, (Optr)&t_push_variable, (Optr)VAR_statusCode_0_1, (Optr)&t_send2, (Optr)PSend23944, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23947, (Optr)&t_push_variable, (Optr)VAR_url_0_4, (Optr)&t_send2, (Optr)PSend23948, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23949, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23950, (Optr)&t_send2, (Optr)PSend23951, (Optr)&t_method_return);
    Method PMethod23922 = new_Method_with(PArray23923, PArray23924, empty_Array, PThreadedCode23925, 6, PAssign23926, PSend23930, PAssign23943, PSend23948, PSend23949, PSend23951);
    
    MethodClosure MC_SMB_send3xxResponse_code_do_ = new_MethodClosure((Method)PMethod23922, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_send3xxResponse_code_do_, MC_SMB_send3xxResponse_code_do_);
}


static void init_SMB_send200Response_contentType_do_() {
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray23953 = new_Array_with(3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray23954 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend23958 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_23959 = new_String(L"HTTP/1.1");
    Constant string_23959_Const = new_Constant((Optr)string_23959);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend23957 = new_Send((Optr)PSend23958, SMB_protocol_code_, 2, (Optr)string_23959_Const, (Optr)int_200_Const);
    Assign PAssign23956 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend23957);
    String string_23960 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23960_Const = new_Constant((Optr)string_23960);
    // headerAt:put:. 
    Send PSend23961 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_23960_Const, (Optr)VAR_contentType_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23962 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend23963 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)VAR_aString_0_0);
    Array PThreadedCode23955 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign23956, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23958, (Optr)&t_push1, (Optr)string_23959, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend23957, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_23960, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_send2, (Optr)PSend23961, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend23962, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23963, (Optr)&t_method_return);
    Method PMethod23952 = new_Method_with(PArray23953, PArray23954, empty_Array, PThreadedCode23955, 4, PAssign23956, PSend23961, PSend23962, PSend23963);
    
    MethodClosure MC_SMB_send200Response_contentType_do_ = new_MethodClosure((Method)PMethod23952, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_do_, MC_SMB_send200Response_contentType_do_);
}


static void init_SMB_isPostRequest() {
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
<<<<<<< HEAD
    Send PSend24256 = new_Send((Optr)self, SMB_method, 0);
    String string_24257 = new_String(L"POST");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24257_Const = new_Constant((Optr)string_24257);
    // =. 
    Send PSend24258 = new_Send((Optr)PSend24256, SMB__equals_, 1, (Optr)string_24257_Const);
    Array PThreadedCode24255 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24256, (Optr)&t_push1, (Optr)string_24257, (Optr)&t_send1, (Optr)PSend24258, (Optr)&t_method_return);
    Method PMethod24254 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24255, 1, PSend24258);
    
    MethodClosure MC_SMB_isPostRequest = new_MethodClosure((Method)PMethod24254, WebClient_Core_WebRequest_Class);
=======
    Send PSend23966 = new_Send((Optr)self, SMB_method, 0);
    String string_23967 = new_String(L"POST");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_23967_Const = new_Constant((Optr)string_23967);
    // =. 
    Send PSend23968 = new_Send((Optr)PSend23966, SMB__equals_, 1, (Optr)string_23967_Const);
    Array PThreadedCode23965 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23966, (Optr)&t_push1, (Optr)string_23967, (Optr)&t_send1, (Optr)PSend23968, (Optr)&t_method_return);
    Method PMethod23964 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23965, 1, PSend23968);
    
    MethodClosure MC_SMB_isPostRequest = new_MethodClosure((Method)PMethod23964, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_isPostRequest, MC_SMB_isPostRequest);
}


<<<<<<< HEAD
static void init_SMB_writeRequestOn_() {
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24260 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24263 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24265 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_method);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24266 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend24267 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_rawUrl);
    // space. 
    Send PSend24268 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend24269 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebMessage_protocol);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24270 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24264 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_send1, (Optr)PSend24265, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24266, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_send1, (Optr)PSend24267, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_send1, (Optr)PSend24269, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24270, (Optr)&t_method_return);
    Block PBlock24262 = new_Block_with(PArray24263, empty_Array, PThreadedCode24264, 6, PSend24265, PSend24266, PSend24267, PSend24268, PSend24269, PSend24270);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24271 = new_Send((Optr)PBlock24262, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24261 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24262, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24271, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24259 = new_Method_with(PArray24260, empty_Array, empty_Array, PThreadedCode24261, 2, PSend24271, self);
    
    MethodClosure MC_SMB_writeRequestOn_ = new_MethodClosure((Method)PMethod24259, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeRequestOn_, MC_SMB_writeRequestOn_);
=======
static void init_SMB_rawUrl_() {
    Symbol SMB_rawUrl_ = new_Symbol(L"rawUrl:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23970 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23972 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)VAR_aString_0_0);
    Array PThreadedCode23971 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23972, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23969 = new_Method_with(PArray23970, empty_Array, empty_Array, PThreadedCode23971, 2, PAssign23972, self);
    
    MethodClosure MC_SMB_rawUrl_ = new_MethodClosure((Method)PMethod23969, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl_, MC_SMB_rawUrl_);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_send405Response_() {
    Symbol SMB_send405Response_ = new_Symbol(L"send405Response:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
<<<<<<< HEAD
    Array PArray24273 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_24275 = new_String(L"<html><head><title>405 Method Not Allowed</title></head><body><h1>405 Method Not Allowed</h1><p>The requested method ");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24276 = new_Send((Optr)self, SMB_method, 0);
    Constant string_24275_Const = new_Constant((Optr)string_24275);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24277 = new_Send((Optr)string_24275_Const, SMB__append_, 1, (Optr)PSend24276);
    String string_24278 = new_String(L" is not allowed for the URL");
    Constant string_24278_Const = new_Constant((Optr)string_24278);
    // ,. 
    Send PSend24279 = new_Send((Optr)PSend24277, SMB__append_, 1, (Optr)string_24278_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24280 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend24281 = new_Send((Optr)PSend24279, SMB__append_, 1, (Optr)PSend24280);
    String string_24282 = new_String(L"</p></body></html>");
    Constant string_24282_Const = new_Constant((Optr)string_24282);
    // ,. 
    Send PSend24283 = new_Send((Optr)PSend24281, SMB__append_, 1, (Optr)string_24282_Const);
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    // send405Response:content:. 
    Send PSend24284 = new_Send((Optr)self, SMB_send405Response_content_, 2, (Optr)VAR_allowed_0_0, (Optr)PSend24283);
    Array PThreadedCode24274 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push1, (Optr)string_24275, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24276, (Optr)&t_send1, (Optr)PSend24277, (Optr)&t_push1, (Optr)string_24278, (Optr)&t_send1, (Optr)PSend24279, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24280, (Optr)&t_send1, (Optr)PSend24281, (Optr)&t_push1, (Optr)string_24282, (Optr)&t_send1, (Optr)PSend24283, (Optr)&t_send2, (Optr)PSend24284, (Optr)&t_method_return);
    Method PMethod24272 = new_Method_with(PArray24273, empty_Array, empty_Array, PThreadedCode24274, 1, PSend24284);
    
    MethodClosure MC_SMB_send405Response_ = new_MethodClosure((Method)PMethod24272, WebClient_Core_WebRequest_Class);
=======
    Array PArray23974 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_23976 = new_String(L"<html><head><title>405 Method Not Allowed</title></head><body><h1>405 Method Not Allowed</h1><p>The requested method ");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend23977 = new_Send((Optr)self, SMB_method, 0);
    Constant string_23976_Const = new_Constant((Optr)string_23976);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23978 = new_Send((Optr)string_23976_Const, SMB__append_, 1, (Optr)PSend23977);
    String string_23979 = new_String(L" is not allowed for the URL");
    Constant string_23979_Const = new_Constant((Optr)string_23979);
    // ,. 
    Send PSend23980 = new_Send((Optr)PSend23978, SMB__append_, 1, (Optr)string_23979_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend23981 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend23982 = new_Send((Optr)PSend23980, SMB__append_, 1, (Optr)PSend23981);
    String string_23983 = new_String(L"</p></body></html>");
    Constant string_23983_Const = new_Constant((Optr)string_23983);
    // ,. 
    Send PSend23984 = new_Send((Optr)PSend23982, SMB__append_, 1, (Optr)string_23983_Const);
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    // send405Response:content:. 
    Send PSend23985 = new_Send((Optr)self, SMB_send405Response_content_, 2, (Optr)VAR_allowed_0_0, (Optr)PSend23984);
    Array PThreadedCode23975 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push1, (Optr)string_23976, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23977, (Optr)&t_send1, (Optr)PSend23978, (Optr)&t_push1, (Optr)string_23979, (Optr)&t_send1, (Optr)PSend23980, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23981, (Optr)&t_send1, (Optr)PSend23982, (Optr)&t_push1, (Optr)string_23983, (Optr)&t_send1, (Optr)PSend23984, (Optr)&t_send2, (Optr)PSend23985, (Optr)&t_method_return);
    Method PMethod23973 = new_Method_with(PArray23974, empty_Array, empty_Array, PThreadedCode23975, 1, PSend23985);
    
    MethodClosure MC_SMB_send405Response_ = new_MethodClosure((Method)PMethod23973, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_, MC_SMB_send405Response_);
}


static void init_SMB_send500Response_() {
    Symbol SMB_send500Response_ = new_Symbol(L"send500Response:");
    Variable VAR_errReport_0_0 = new_Variable_named(L"errReport", 0);
<<<<<<< HEAD
    Array PArray24286 = new_Array_with(1, (Optr)VAR_errReport_0_0);
    Variable VAR_errLog_0_1 = new_Variable_named(L"errLog", 0);
    Array PArray24287 = new_Array_with(1, (Optr)VAR_errLog_0_1);
    String string_24293 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_24293_Const = new_Constant((Optr)string_24293);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24294 = new_String(L"<h1>Internal Server Error</h1><pre>");
    Constant string_24294_Const = new_Constant((Optr)string_24294);
    // ,. 
    Send PSend24292 = new_Send((Optr)string_24293_Const, SMB__append_, 1, (Optr)string_24294_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend24296 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24297 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend24295 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend24296, (Optr)PSend24297);
    // ,. 
    Send PSend24291 = new_Send((Optr)PSend24292, SMB__append_, 1, (Optr)PSend24295);
    String string_24298 = new_String(L"</pre></body></html>");
    Constant string_24298_Const = new_Constant((Optr)string_24298);
    // ,. 
    Send PSend24290 = new_Send((Optr)PSend24291, SMB__append_, 1, (Optr)string_24298_Const);
    Assign PAssign24289 = new_Assign((Optr)VAR_errLog_0_1, (Optr)PSend24290);
    SmallInt int_500 = new_SmallInt(500);
    String string_24299 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_24299_Const = new_Constant((Optr)string_24299);
    // sendResponseCode:content:type:close:. 
    Send PSend24300 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_1, (Optr)string_24299_Const, (Optr)true_Const);
    Array PThreadedCode24288 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign24289, (Optr)&t_push1, (Optr)string_24293, (Optr)&t_push1, (Optr)string_24294, (Optr)&t_send1, (Optr)PSend24292, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24296, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24297, (Optr)&t_send2, (Optr)PSend24295, (Optr)&t_send1, (Optr)PSend24291, (Optr)&t_push1, (Optr)string_24298, (Optr)&t_send1, (Optr)PSend24290, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_1, (Optr)&t_push1, (Optr)string_24299, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend24300, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24285 = new_Method_with(PArray24286, PArray24287, empty_Array, PThreadedCode24288, 3, PAssign24289, PSend24300, self);
    
    MethodClosure MC_SMB_send500Response_ = new_MethodClosure((Method)PMethod24285, WebClient_Core_WebRequest_Class);
=======
    Array PArray23987 = new_Array_with(1, (Optr)VAR_errReport_0_0);
    Variable VAR_errLog_0_1 = new_Variable_named(L"errLog", 0);
    Array PArray23988 = new_Array_with(1, (Optr)VAR_errLog_0_1);
    String string_23994 = new_String(L"<html><head><title>500 Internal Server Error</title></head><body>");
    Constant string_23994_Const = new_Constant((Optr)string_23994);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_23995 = new_String(L"<h1>Internal Server Error</h1><pre>");
    Constant string_23995_Const = new_Constant((Optr)string_23995);
    // ,. 
    Send PSend23993 = new_Send((Optr)string_23994_Const, SMB__append_, 1, (Optr)string_23995_Const);
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend23997 = new_Send((Optr)String_classReference, SMB_cr, 0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23998 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // copyReplaceAll:with:. 
    Send PSend23996 = new_Send((Optr)VAR_errReport_0_0, SMB_copyReplaceAll_with_, 2, (Optr)PSend23997, (Optr)PSend23998);
    // ,. 
    Send PSend23992 = new_Send((Optr)PSend23993, SMB__append_, 1, (Optr)PSend23996);
    String string_23999 = new_String(L"</pre></body></html>");
    Constant string_23999_Const = new_Constant((Optr)string_23999);
    // ,. 
    Send PSend23991 = new_Send((Optr)PSend23992, SMB__append_, 1, (Optr)string_23999_Const);
    Assign PAssign23990 = new_Assign((Optr)VAR_errLog_0_1, (Optr)PSend23991);
    SmallInt int_500 = new_SmallInt(500);
    String string_24000 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_24000_Const = new_Constant((Optr)string_24000);
    // sendResponseCode:content:type:close:. 
    Send PSend24001 = new_Send((Optr)self, SMB_sendResponseCode_content_type_close_, 4, (Optr)int_500_Const, (Optr)VAR_errLog_0_1, (Optr)string_24000_Const, (Optr)true_Const);
    Array PThreadedCode23989 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23990, (Optr)&t_push1, (Optr)string_23994, (Optr)&t_push1, (Optr)string_23995, (Optr)&t_send1, (Optr)PSend23993, (Optr)&t_push_variable, (Optr)VAR_errReport_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23997, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23998, (Optr)&t_send2, (Optr)PSend23996, (Optr)&t_send1, (Optr)PSend23992, (Optr)&t_push1, (Optr)string_23999, (Optr)&t_send1, (Optr)PSend23991, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push_variable, (Optr)VAR_errLog_0_1, (Optr)&t_push1, (Optr)string_24000, (Optr)&t_push_true, (Optr)&t_send4, (Optr)PSend24001, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23986 = new_Method_with(PArray23987, PArray23988, empty_Array, PThreadedCode23989, 3, PAssign23990, PSend24001, self);
    
    MethodClosure MC_SMB_send500Response_ = new_MethodClosure((Method)PMethod23986, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_send500Response_, MC_SMB_send500Response_);
}


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray24302 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24304 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)VAR_aString_0_0);
    Array PThreadedCode24303 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24304, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24301 = new_Method_with(PArray24302, empty_Array, empty_Array, PThreadedCode24303, 2, PAssign24304, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod24301, WebClient_Core_WebRequest_Class);
=======
    Array PArray24003 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24005 = new_Assign((Optr)slot_WebClient_Core_WebRequest_method, (Optr)VAR_aString_0_0);
    Array PThreadedCode24004 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24005, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24002 = new_Method_with(PArray24003, empty_Array, empty_Array, PThreadedCode24004, 2, PAssign24005, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod24002, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_method_, MC_SMB_method_);
}


<<<<<<< HEAD
static void init_SMB_requestLine() {
    Symbol SMB_requestLine = new_Symbol(L"requestLine");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24309 = new_Send((Optr)self, SMB_method, 0);
    String string_24310 = new_String(L" ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_24310_Const = new_Constant((Optr)string_24310);
    // ,. 
    Send PSend24311 = new_Send((Optr)PSend24309, SMB__append_, 1, (Optr)string_24310_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24312 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend24313 = new_Send((Optr)PSend24311, SMB__append_, 1, (Optr)PSend24312);
    String string_24314 = new_String(L" ");
    Constant string_24314_Const = new_Constant((Optr)string_24314);
    // ,. 
    Send PSend24315 = new_Send((Optr)PSend24313, SMB__append_, 1, (Optr)string_24314_Const);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend24316 = new_Send((Optr)self, SMB_protocol, 0);
    // ,. 
    Send PSend24317 = new_Send((Optr)PSend24315, SMB__append_, 1, (Optr)PSend24316);
    Array PThreadedCode24308 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24309, (Optr)&t_push1, (Optr)string_24310, (Optr)&t_send1, (Optr)PSend24311, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24312, (Optr)&t_send1, (Optr)PSend24313, (Optr)&t_push1, (Optr)string_24314, (Optr)&t_send1, (Optr)PSend24315, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24316, (Optr)&t_send1, (Optr)PSend24317, (Optr)&t_block_return);
    Block PBlock24307 = new_Block_with(empty_Array, empty_Array, PThreadedCode24308, 1, PSend24317);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24318 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_ifNil_, 1, (Optr)PBlock24307);
    Array PThreadedCode24306 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push_closure, (Optr)PBlock24307, (Optr)&t_send1, (Optr)PSend24318, (Optr)&t_method_return);
    Method PMethod24305 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24306, 1, PSend24318);
    
    MethodClosure MC_SMB_requestLine = new_MethodClosure((Method)PMethod24305, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_requestLine, MC_SMB_requestLine);
}


static void init_SMB_sendResponse_chunked_() {
    Symbol SMB_sendResponse_chunked_ = new_Symbol(L"sendResponse:chunked:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Array PArray24320 = new_Array_with(2, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24323 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24324 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24322 = new_Block_with(PArray24323, empty_Array, PThreadedCode24324, 0);
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    // sendResponse:chunked:do:. 
    Send PSend24325 = new_Send((Optr)self, SMB_sendResponse_chunked_do_, 3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)PBlock24322);
    Array PThreadedCode24321 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_closure, (Optr)PBlock24322, (Optr)&t_send3, (Optr)PSend24325, (Optr)&t_method_return);
    Method PMethod24319 = new_Method_with(PArray24320, empty_Array, empty_Array, PThreadedCode24321, 1, PSend24325);
    
    MethodClosure MC_SMB_sendResponse_chunked_ = new_MethodClosure((Method)PMethod24319, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_, MC_SMB_sendResponse_chunked_);
}


static void init_SMB_multipartFieldsDo_() {
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray24327 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend24329 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend24332 = new_Send((Optr)self, SMB_contentType, 0);
    String string_24333 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_24333_Const = new_Constant((Optr)string_24333);
    // beginsWith:. 
    Send PSend24334 = new_Send((Optr)PSend24332, SMB_beginsWith_, 1, (Optr)string_24333_Const);
    Array PThreadedCode24331 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24332, (Optr)&t_push1, (Optr)string_24333, (Optr)&t_send1, (Optr)PSend24334, (Optr)&t_block_return);
    Block PBlock24330 = new_Block_with(empty_Array, empty_Array, PThreadedCode24331, 1, PSend24334);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24335 = new_Send((Optr)PSend24329, SMB_and_, 1, (Optr)PBlock24330);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend24339 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24340 = new_Send((Optr)PSend24339, SMB_readStream, 0);
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    // multipartBoundary. 
    Send PSend24341 = new_Send((Optr)self, SMB_multipartBoundary, 0);
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    // decodeMultipartForm:boundary:do:. 
    Send PSend24342 = new_Send((Optr)PWebUtils_classReference, SMB_decodeMultipartForm_boundary_do_, 3, (Optr)PSend24340, (Optr)PSend24341, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode24338 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24339, (Optr)&t_send0, (Optr)PSend24340, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24341, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send3, (Optr)PSend24342, (Optr)&t_block_return);
    Block PBlock24337 = new_Block_with(empty_Array, empty_Array, PThreadedCode24338, 1, PSend24342);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24345 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode24344 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24345, (Optr)&t_block_return);
    Block PBlock24343 = new_Block_with(empty_Array, empty_Array, PThreadedCode24344, 1, PSend24345);
    // ifTrue:ifFalse:. 
    Send PSend24336 = new_Send((Optr)PSend24335, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24337, (Optr)PBlock24343);
    Array PThreadedCode24328 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24329, (Optr)&t_push_closure, (Optr)PBlock24330, (Optr)&t_send1, (Optr)PSend24335, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24336, (Optr)PBlock24337, (Optr)PBlock24343, (Optr)&t_method_return);
    Method PMethod24326 = new_Method_with(PArray24327, empty_Array, empty_Array, PThreadedCode24328, 1, PSend24336);
    
    MethodClosure MC_SMB_multipartFieldsDo_ = new_MethodClosure((Method)PMethod24326, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFieldsDo_, MC_SMB_multipartFieldsDo_);
}


static void init_SMB_postFields() {
    Symbol SMB_postFields = new_Symbol(L"postFields");
    Symbol SMB_isPostRequest = new_Symbol(L"isPostRequest");
    // isPostRequest. 
    Send PSend24348 = new_Send((Optr)self, SMB_isPostRequest, 0);
    Symbol SMB_contentType = new_Symbol(L"contentType");
    // contentType. 
    Send PSend24351 = new_Send((Optr)self, SMB_contentType, 0);
    String string_24352 = new_String(L"application/x-www-form-urlencoded");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24352_Const = new_Constant((Optr)string_24352);
    // =. 
    Send PSend24353 = new_Send((Optr)PSend24351, SMB__equals_, 1, (Optr)string_24352_Const);
    Array PThreadedCode24350 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24351, (Optr)&t_push1, (Optr)string_24352, (Optr)&t_send1, (Optr)PSend24353, (Optr)&t_block_return);
    Block PBlock24349 = new_Block_with(empty_Array, empty_Array, PThreadedCode24350, 1, PSend24353);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24354 = new_Send((Optr)PSend24348, SMB_and_, 1, (Optr)PBlock24349);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_content = new_Symbol(L"content");
    // content. 
    Send PSend24358 = new_Send((Optr)self, SMB_content, 0);
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    // decodeUrlEncodedForm:multipleValues:. 
    Send PSend24359 = new_Send((Optr)PWebUtils_classReference, SMB_decodeUrlEncodedForm_multipleValues_, 2, (Optr)PSend24358, (Optr)true_Const);
    Array PThreadedCode24357 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24358, (Optr)&t_push_true, (Optr)&t_send2, (Optr)PSend24359, (Optr)&t_block_return);
    Block PBlock24356 = new_Block_with(empty_Array, empty_Array, PThreadedCode24357, 1, PSend24359);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24362 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Array PThreadedCode24361 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24362, (Optr)&t_block_return);
    Block PBlock24360 = new_Block_with(empty_Array, empty_Array, PThreadedCode24361, 1, PSend24362);
    // ifTrue:ifFalse:. 
    Send PSend24355 = new_Send((Optr)PSend24354, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24356, (Optr)PBlock24360);
    Array PThreadedCode24347 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24348, (Optr)&t_push_closure, (Optr)PBlock24349, (Optr)&t_send1, (Optr)PSend24354, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24355, (Optr)PBlock24356, (Optr)PBlock24360, (Optr)&t_method_return);
    Method PMethod24346 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24347, 1, PSend24355);
    
    MethodClosure MC_SMB_postFields = new_MethodClosure((Method)PMethod24346, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_postFields, MC_SMB_postFields);
=======
static void init_SMB_send404Response_() {
    Symbol SMB_send404Response_ = new_Symbol(L"send404Response:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Array PArray24007 = new_Array_with(1, (Optr)VAR_body_0_0);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24010 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24012 = new_String(L"Content-Type");
    String string_24013 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24012_Const = new_Constant((Optr)string_24012);
    Constant string_24013_Const = new_Constant((Optr)string_24013);
    // headerAt:put:. 
    Send PSend24014 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24012_Const, (Optr)string_24013_Const);
    Array PThreadedCode24011 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24012, (Optr)&t_push1, (Optr)string_24013, (Optr)&t_send2, (Optr)PSend24014, (Optr)&t_method_return);
    Block PBlock24009 = new_Block_with(PArray24010, empty_Array, PThreadedCode24011, 1, PSend24014);
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    // send404Response:do:. 
    Send PSend24015 = new_Send((Optr)self, SMB_send404Response_do_, 2, (Optr)VAR_body_0_0, (Optr)PBlock24009);
    Array PThreadedCode24008 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_push_closure, (Optr)PBlock24009, (Optr)&t_send2, (Optr)PSend24015, (Optr)&t_method_return);
    Method PMethod24006 = new_Method_with(PArray24007, empty_Array, empty_Array, PThreadedCode24008, 1, PSend24015);
    
    MethodClosure MC_SMB_send404Response_ = new_MethodClosure((Method)PMethod24006, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_, MC_SMB_send404Response_);
}


static void init_SMB_closeIfTransient_after_() {
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24017 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_close_0_2 = new_Variable_named(L"close", 0);
    Array PArray24018 = new_Array_with(1, (Optr)VAR_close_0_2);
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend24022 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend24021 = new_Send((Optr)PSend24022, SMB_not, 0);
    Assign PAssign24020 = new_Assign((Optr)VAR_close_0_2, (Optr)PSend24021);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24026 = new_String(L"Connection");
    String string_24027 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24026_Const = new_Constant((Optr)string_24026);
    Constant string_24027_Const = new_Constant((Optr)string_24027);
    // headerAt:put:. 
    Send PSend24028 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24026_Const, (Optr)string_24027_Const);
    Array PThreadedCode24025 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24026, (Optr)&t_push1, (Optr)string_24027, (Optr)&t_send2, (Optr)PSend24028, (Optr)&t_block_return);
    Block PBlock24024 = new_Block_with(empty_Array, empty_Array, PThreadedCode24025, 1, PSend24028);
    // ifTrue:. 
    Send PSend24023 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock24024);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24029 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24030 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend24034 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode24033 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24034, (Optr)&t_block_return);
    Block PBlock24032 = new_Block_with(empty_Array, empty_Array, PThreadedCode24033, 1, PSend24034);
    // ifTrue:. 
    Send PSend24031 = new_Send((Optr)VAR_close_0_2, SMB_ifTrue_, 1, (Optr)PBlock24032);
    Array PThreadedCode24019 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign24020, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24022, (Optr)&t_send0, (Optr)PSend24021, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend24023, (Optr)PBlock24024, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend24029, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend24030, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_close_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend24031, (Optr)PBlock24032, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24016 = new_Method_with(PArray24017, PArray24018, empty_Array, PThreadedCode24019, 6, PAssign24020, PSend24023, PSend24029, PSend24030, PSend24031, self);
    
    MethodClosure MC_SMB_closeIfTransient_after_ = new_MethodClosure((Method)PMethod24016, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_closeIfTransient_after_, MC_SMB_closeIfTransient_after_);
}


static void init_SMB_send301Response_do_() {
    Symbol SMB_send301Response_do_ = new_Symbol(L"send301Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24036 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_301 = new_SmallInt(301);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_301_Const = new_Constant((Optr)int_301);
    // send3xxResponse:code:do:. 
    Send PSend24038 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_301_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode24037 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend24038, (Optr)&t_method_return);
    Method PMethod24035 = new_Method_with(PArray24036, empty_Array, empty_Array, PThreadedCode24037, 1, PSend24038);
    
    MethodClosure MC_SMB_send301Response_do_ = new_MethodClosure((Method)PMethod24035, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send301Response_do_, MC_SMB_send301Response_do_);
}


static void init_SMB_send405Response_content_() {
    Symbol SMB_send405Response_content_ = new_Symbol(L"send405Response:content:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray24040 = new_Array_with(2, (Optr)VAR_allowed_0_0, (Optr)VAR_body_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray24041 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24045 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24046 = new_String(L"HTTP/1.1");
    Constant string_24046_Const = new_Constant((Optr)string_24046);
    SmallInt int_405 = new_SmallInt(405);
    Constant int_405_Const = new_Constant((Optr)int_405);
    // protocol:code:. 
    Send PSend24044 = new_Send((Optr)PSend24045, SMB_protocol_code_, 2, (Optr)string_24046_Const, (Optr)int_405_Const);
    Assign PAssign24043 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend24044);
    String string_24047 = new_String(L"Content-Type");
    String string_24048 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24047_Const = new_Constant((Optr)string_24047);
    Constant string_24048_Const = new_Constant((Optr)string_24048);
    // headerAt:put:. 
    Send PSend24049 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24047_Const, (Optr)string_24048_Const);
    String string_24050 = new_String(L"allow");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray24052 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_m_2_0 = new_Variable_named(L"m", 2);
    Array PArray24055 = new_Array_with(1, (Optr)VAR_m_2_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24057 = new_Send((Optr)VAR_s_1_0, SMB_nextPutAll_, 1, (Optr)VAR_m_2_0);
    Array PThreadedCode24056 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_variable, (Optr)VAR_m_2_0, (Optr)&t_send1, (Optr)PSend24057, (Optr)&t_method_return);
    Block PBlock24054 = new_Block_with(PArray24055, empty_Array, PThreadedCode24056, 1, PSend24057);
    Character char_24060 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_24060_Const = new_Constant((Optr)char_24060);
    // nextPut:. 
    Send PSend24061 = new_Send((Optr)VAR_s_1_0, SMB_nextPut_, 1, (Optr)char_24060_Const);
    Array PThreadedCode24059 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)char_24060, (Optr)&t_send1, (Optr)PSend24061, (Optr)&t_block_return);
    Block PBlock24058 = new_Block_with(empty_Array, empty_Array, PThreadedCode24059, 1, PSend24061);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend24062 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock24054, (Optr)PBlock24058);
    Array PThreadedCode24053 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock24054, (Optr)&t_push_closure, (Optr)PBlock24058, (Optr)&t_send2, (Optr)PSend24062, (Optr)&t_method_return);
    Block PBlock24051 = new_Block_with(PArray24052, empty_Array, PThreadedCode24053, 1, PSend24062);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend24063 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock24051);
    Constant string_24050_Const = new_Constant((Optr)string_24050);
    // headerAt:put:. 
    Send PSend24064 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24050_Const, (Optr)PSend24063);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24065 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_1);
    Array PThreadedCode24042 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign24043, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24045, (Optr)&t_push1, (Optr)string_24046, (Optr)&t_push1, (Optr)int_405, (Optr)&t_send2, (Optr)PSend24044, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24047, (Optr)&t_push1, (Optr)string_24048, (Optr)&t_send2, (Optr)PSend24049, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24050, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock24051, (Optr)&t_send1, (Optr)PSend24063, (Optr)&t_send2, (Optr)PSend24064, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend24065, (Optr)&t_method_return);
    Method PMethod24039 = new_Method_with(PArray24040, PArray24041, empty_Array, PThreadedCode24042, 4, PAssign24043, PSend24049, PSend24064, PSend24065);
    
    MethodClosure MC_SMB_send405Response_content_ = new_MethodClosure((Method)PMethod24039, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send405Response_content_, MC_SMB_send405Response_content_);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_stream200Response_size_type_do_() {
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray24364 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24366 = new_Send((Optr)VAR_aStream_0_0, SMB_size, 0);
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    // stream200Response:size:. 
    Send PSend24367 = new_Send((Optr)self, SMB_stream200Response_size_, 2, (Optr)VAR_aStream_0_0, (Optr)PSend24366);
    Array PThreadedCode24365 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24366, (Optr)&t_send2, (Optr)PSend24367, (Optr)&t_method_return);
    Method PMethod24363 = new_Method_with(PArray24364, empty_Array, empty_Array, PThreadedCode24365, 1, PSend24367);
    
    MethodClosure MC_SMB_stream200Response_ = new_MethodClosure((Method)PMethod24363, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_, MC_SMB_stream200Response_);
=======
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray24067 = new_Array_with(4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray24068 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24072 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24073 = new_String(L"HTTP/1.1");
    Constant string_24073_Const = new_Constant((Optr)string_24073);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend24071 = new_Send((Optr)PSend24072, SMB_protocol_code_, 2, (Optr)string_24073_Const, (Optr)int_200_Const);
    Assign PAssign24070 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend24071);
    String string_24074 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24074_Const = new_Constant((Optr)string_24074);
    // headerAt:put:. 
    Send PSend24075 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_24074_Const, (Optr)VAR_contentType_0_2);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24076 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend24077 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    Array PThreadedCode24069 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign24070, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24072, (Optr)&t_push1, (Optr)string_24073, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend24071, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_24074, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend24075, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend24076, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_send3, (Optr)PSend24077, (Optr)&t_method_return);
    Method PMethod24066 = new_Method_with(PArray24067, PArray24068, empty_Array, PThreadedCode24069, 4, PAssign24070, PSend24075, PSend24076, PSend24077);
    
    MethodClosure MC_SMB_stream200Response_size_type_do_ = new_MethodClosure((Method)PMethod24066, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_do_, MC_SMB_stream200Response_size_type_do_);
}


static void init_SMB_stream200Response_size_() {
    Symbol SMB_stream200Response_size_ = new_Symbol(L"stream200Response:size:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Array PArray24079 = new_Array_with(2, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1);
    String string_24081 = new_String(L"application/octet-stream");
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Constant string_24081_Const = new_Constant((Optr)string_24081);
    // stream200Response:size:type:. 
    Send PSend24082 = new_Send((Optr)self, SMB_stream200Response_size_type_, 3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)string_24081_Const);
    Array PThreadedCode24080 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push1, (Optr)string_24081, (Optr)&t_send3, (Optr)PSend24082, (Optr)&t_method_return);
    Method PMethod24078 = new_Method_with(PArray24079, empty_Array, empty_Array, PThreadedCode24080, 1, PSend24082);
    
    MethodClosure MC_SMB_stream200Response_size_ = new_MethodClosure((Method)PMethod24078, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_, MC_SMB_stream200Response_size_);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_writeRequestOn_() {
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24084 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24087 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24089 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_method);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24090 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend24091 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebRequest_rawUrl);
    // space. 
    Send PSend24092 = new_Send((Optr)VAR__receiver__1_0, SMB_space, 0);
    // nextPutAll:. 
    Send PSend24093 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebMessage_protocol);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24094 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24088 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_send1, (Optr)PSend24089, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24090, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_send1, (Optr)PSend24091, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24092, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_send1, (Optr)PSend24093, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24094, (Optr)&t_method_return);
    Block PBlock24086 = new_Block_with(PArray24087, empty_Array, PThreadedCode24088, 6, PSend24089, PSend24090, PSend24091, PSend24092, PSend24093, PSend24094);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24095 = new_Send((Optr)PBlock24086, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24085 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24086, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24095, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24083 = new_Method_with(PArray24084, empty_Array, empty_Array, PThreadedCode24085, 2, PSend24095, self);
    
    MethodClosure MC_SMB_writeRequestOn_ = new_MethodClosure((Method)PMethod24083, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_writeRequestOn_, MC_SMB_writeRequestOn_);
}


static void init_SMB_newWebSocketOn_() {
    Symbol SMB_newWebSocketOn_ = new_Symbol(L"newWebSocketOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24097 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24099 = new_Send((Optr)PWebSocket_classReference, SMB_on_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24098 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PWebSocket_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24099, (Optr)&t_method_return);
    Method PMethod24096 = new_Method_with(PArray24097, empty_Array, empty_Array, PThreadedCode24098, 1, PSend24099);
    
    MethodClosure MC_SMB_newWebSocketOn_ = new_MethodClosure((Method)PMethod24096, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_newWebSocketOn_, MC_SMB_newWebSocketOn_);
}


static void init_SMB_send404Response_do_() {
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24101 = new_Array_with(2, (Optr)VAR_body_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray24102 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24106 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24107 = new_String(L"HTTP/1.1");
    Constant string_24107_Const = new_Constant((Optr)string_24107);
    SmallInt int_404 = new_SmallInt(404);
    Constant int_404_Const = new_Constant((Optr)int_404);
    // protocol:code:. 
    Send PSend24105 = new_Send((Optr)PSend24106, SMB_protocol_code_, 2, (Optr)string_24107_Const, (Optr)int_404_Const);
    Assign PAssign24104 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend24105);
    String string_24108 = new_String(L"Content-Type");
    String string_24109 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24108_Const = new_Constant((Optr)string_24108);
    Constant string_24109_Const = new_Constant((Optr)string_24109);
    // headerAt:put:. 
    Send PSend24110 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24108_Const, (Optr)string_24109_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24111 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_2);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24112 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_0);
    Array PThreadedCode24103 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24104, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24106, (Optr)&t_push1, (Optr)string_24107, (Optr)&t_push1, (Optr)int_404, (Optr)&t_send2, (Optr)PSend24105, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24108, (Optr)&t_push1, (Optr)string_24109, (Optr)&t_send2, (Optr)PSend24110, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_send1, (Optr)PSend24111, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_send2, (Optr)PSend24112, (Optr)&t_method_return);
    Method PMethod24100 = new_Method_with(PArray24101, PArray24102, empty_Array, PThreadedCode24103, 4, PAssign24104, PSend24110, PSend24111, PSend24112);
    
    MethodClosure MC_SMB_send404Response_do_ = new_MethodClosure((Method)PMethod24100, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_do_, MC_SMB_send404Response_do_);
}


static void init_SMB_send302Response_do_() {
    Symbol SMB_send302Response_do_ = new_Symbol(L"send302Response:do:");
    Variable VAR_location_0_0 = new_Variable_named(L"location", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24114 = new_Array_with(2, (Optr)VAR_location_0_0, (Optr)VAR_aBlock_0_1);
    SmallInt int_302 = new_SmallInt(302);
    Symbol SMB_send3xxResponse_code_do_ = new_Symbol(L"send3xxResponse:code:do:");
    Constant int_302_Const = new_Constant((Optr)int_302);
    // send3xxResponse:code:do:. 
    Send PSend24116 = new_Send((Optr)self, SMB_send3xxResponse_code_do_, 3, (Optr)VAR_location_0_0, (Optr)int_302_Const, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode24115 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_location_0_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send3, (Optr)PSend24116, (Optr)&t_method_return);
    Method PMethod24113 = new_Method_with(PArray24114, empty_Array, empty_Array, PThreadedCode24115, 1, PSend24116);
    
    MethodClosure MC_SMB_send302Response_do_ = new_MethodClosure((Method)PMethod24113, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send302Response_do_, MC_SMB_send302Response_do_);
}


static void init_SMB_sendXmlResponse_() {
    Symbol SMB_sendXmlResponse_ = new_Symbol(L"sendXmlResponse:");
    Variable VAR_xmlString_0_0 = new_Variable_named(L"xmlString", 0);
    Array PArray24118 = new_Array_with(1, (Optr)VAR_xmlString_0_0);
    String string_24120 = new_String(L"application/xml");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_24120_Const = new_Constant((Optr)string_24120);
    // send200Response:contentType:. 
    Send PSend24121 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_xmlString_0_0, (Optr)string_24120_Const);
    Array PThreadedCode24119 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_xmlString_0_0, (Optr)&t_push1, (Optr)string_24120, (Optr)&t_send2, (Optr)PSend24121, (Optr)&t_method_return);
    Method PMethod24117 = new_Method_with(PArray24118, empty_Array, empty_Array, PThreadedCode24119, 1, PSend24121);
    
    MethodClosure MC_SMB_sendXmlResponse_ = new_MethodClosure((Method)PMethod24117, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendXmlResponse_, MC_SMB_sendXmlResponse_);
}


static void init_SMB_send200Response_() {
    Symbol SMB_send200Response_ = new_Symbol(L"send200Response:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray24369 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24371 = new_Assign((Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)VAR_aString_0_0);
    Array PThreadedCode24370 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24371, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24368 = new_Method_with(PArray24369, empty_Array, empty_Array, PThreadedCode24370, 2, PAssign24371, self);
    
    MethodClosure MC_SMB_rawUrl_ = new_MethodClosure((Method)PMethod24368, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl_, MC_SMB_rawUrl_);
=======
    Array PArray24123 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_24125 = new_String(L"text/plain; charset=utf-8");
    Symbol SMB_send200Response_contentType_ = new_Symbol(L"send200Response:contentType:");
    Constant string_24125_Const = new_Constant((Optr)string_24125);
    // send200Response:contentType:. 
    Send PSend24126 = new_Send((Optr)self, SMB_send200Response_contentType_, 2, (Optr)VAR_aString_0_0, (Optr)string_24125_Const);
    Array PThreadedCode24124 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push1, (Optr)string_24125, (Optr)&t_send2, (Optr)PSend24126, (Optr)&t_method_return);
    Method PMethod24122 = new_Method_with(PArray24123, empty_Array, empty_Array, PThreadedCode24124, 1, PSend24126);
    
    MethodClosure MC_SMB_send200Response_ = new_MethodClosure((Method)PMethod24122, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_, MC_SMB_send200Response_);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_sendResponse_content_() {
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray24373 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aString_0_1);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24375 = new_Send((Optr)VAR_aString_0_1, SMB_readStream, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24376 = new_Send((Optr)VAR_aString_0_1, SMB_size, 0);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend24377 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_0, (Optr)PSend24375, (Optr)PSend24376);
    Array PThreadedCode24374 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24375, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24376, (Optr)&t_send3, (Optr)PSend24377, (Optr)&t_method_return);
    Method PMethod24372 = new_Method_with(PArray24373, empty_Array, empty_Array, PThreadedCode24374, 1, PSend24377);
    
    MethodClosure MC_SMB_sendResponse_content_ = new_MethodClosure((Method)PMethod24372, WebClient_Core_WebRequest_Class);
=======
    Array PArray24128 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_aString_0_1);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24130 = new_Send((Optr)VAR_aString_0_1, SMB_readStream, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24131 = new_Send((Optr)VAR_aString_0_1, SMB_size, 0);
    Symbol SMB_sendResponse_contentStream_size_ = new_Symbol(L"sendResponse:contentStream:size:");
    // sendResponse:contentStream:size:. 
    Send PSend24132 = new_Send((Optr)self, SMB_sendResponse_contentStream_size_, 3, (Optr)VAR_resp_0_0, (Optr)PSend24130, (Optr)PSend24131);
    Array PThreadedCode24129 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24130, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send0, (Optr)PSend24131, (Optr)&t_send3, (Optr)PSend24132, (Optr)&t_method_return);
    Method PMethod24127 = new_Method_with(PArray24128, empty_Array, empty_Array, PThreadedCode24129, 1, PSend24132);
    
    MethodClosure MC_SMB_sendResponse_content_ = new_MethodClosure((Method)PMethod24127, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_content_, MC_SMB_sendResponse_content_);
}


static void init_SMB_isGetRequest() {
    Symbol SMB_isGetRequest = new_Symbol(L"isGetRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24135 = new_Send((Optr)self, SMB_method, 0);
    String string_24136 = new_String(L"GET");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24136_Const = new_Constant((Optr)string_24136);
    // =. 
    Send PSend24137 = new_Send((Optr)PSend24135, SMB__equals_, 1, (Optr)string_24136_Const);
    Array PThreadedCode24134 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24135, (Optr)&t_push1, (Optr)string_24136, (Optr)&t_send1, (Optr)PSend24137, (Optr)&t_method_return);
    Method PMethod24133 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24134, 1, PSend24137);
    
    MethodClosure MC_SMB_isGetRequest = new_MethodClosure((Method)PMethod24133, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isGetRequest, MC_SMB_isGetRequest);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray24379 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    // writeRequestOn:. 
    Send PSend24381 = new_Send((Optr)self, SMB_writeRequestOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24382 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24380 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24381, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24382, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24378 = new_Method_with(PArray24379, empty_Array, empty_Array, PThreadedCode24380, 3, PSend24381, PSuper24382, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24378, WebClient_Core_WebRequest_Class);
=======
    Array PArray24139 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeRequestOn_ = new_Symbol(L"writeRequestOn:");
    // writeRequestOn:. 
    Send PSend24141 = new_Send((Optr)self, SMB_writeRequestOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24142 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24140 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24141, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24142, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24138 = new_Method_with(PArray24139, empty_Array, empty_Array, PThreadedCode24140, 3, PSend24141, PSuper24142, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24138, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


<<<<<<< HEAD
static void init_SMB_send200Response_contentType_do_() {
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_1 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24384 = new_Array_with(3, (Optr)VAR_aString_0_0, (Optr)VAR_contentType_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_resp_0_3 = new_Variable_named(L"resp", 0);
    Array PArray24385 = new_Array_with(1, (Optr)VAR_resp_0_3);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24389 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24390 = new_String(L"HTTP/1.1");
    Constant string_24390_Const = new_Constant((Optr)string_24390);
    SmallInt int_200 = new_SmallInt(200);
    Constant int_200_Const = new_Constant((Optr)int_200);
    // protocol:code:. 
    Send PSend24388 = new_Send((Optr)PSend24389, SMB_protocol_code_, 2, (Optr)string_24390_Const, (Optr)int_200_Const);
    Assign PAssign24387 = new_Assign((Optr)VAR_resp_0_3, (Optr)PSend24388);
    String string_24391 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24391_Const = new_Constant((Optr)string_24391);
    // headerAt:put:. 
    Send PSend24392 = new_Send((Optr)VAR_resp_0_3, SMB_headerAt_put_, 2, (Optr)string_24391_Const, (Optr)VAR_contentType_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24393 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_resp_0_3);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24394 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_3, (Optr)VAR_aString_0_0);
    Array PThreadedCode24386 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24387, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24389, (Optr)&t_push1, (Optr)string_24390, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send2, (Optr)PSend24388, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push1, (Optr)string_24391, (Optr)&t_push_variable, (Optr)VAR_contentType_0_1, (Optr)&t_send2, (Optr)PSend24392, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_send1, (Optr)PSend24393, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_3, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend24394, (Optr)&t_method_return);
    Method PMethod24383 = new_Method_with(PArray24384, PArray24385, empty_Array, PThreadedCode24386, 4, PAssign24387, PSend24392, PSend24393, PSend24394);
    
    MethodClosure MC_SMB_send200Response_contentType_do_ = new_MethodClosure((Method)PMethod24383, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send200Response_contentType_do_, MC_SMB_send200Response_contentType_do_);
=======
static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode24144 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_method_return);
    Method PMethod24143 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24144, 1, slot_WebClient_Core_WebRequest_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod24143, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method, MC_SMB_method);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_isDeleteRequest() {
    Symbol SMB_isDeleteRequest = new_Symbol(L"isDeleteRequest");
    Symbol SMB_method = new_Symbol(L"method");
<<<<<<< HEAD
    Array PThreadedCode24396 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_method, (Optr)&t_method_return);
    Method PMethod24395 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24396, 1, slot_WebClient_Core_WebRequest_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod24395, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_method, MC_SMB_method);
=======
    // method. 
    Send PSend24147 = new_Send((Optr)self, SMB_method, 0);
    String string_24148 = new_String(L"DELETE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24148_Const = new_Constant((Optr)string_24148);
    // =. 
    Send PSend24149 = new_Send((Optr)PSend24147, SMB__equals_, 1, (Optr)string_24148_Const);
    Array PThreadedCode24146 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24147, (Optr)&t_push1, (Optr)string_24148, (Optr)&t_send1, (Optr)PSend24149, (Optr)&t_method_return);
    Method PMethod24145 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24146, 1, PSend24149);
    
    MethodClosure MC_SMB_isDeleteRequest = new_MethodClosure((Method)PMethod24145, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isDeleteRequest, MC_SMB_isDeleteRequest);
}


static void init_SMB_requestLine() {
    Symbol SMB_requestLine = new_Symbol(L"requestLine");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24154 = new_Send((Optr)self, SMB_method, 0);
    String string_24155 = new_String(L" ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_24155_Const = new_Constant((Optr)string_24155);
    // ,. 
    Send PSend24156 = new_Send((Optr)PSend24154, SMB__append_, 1, (Optr)string_24155_Const);
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    // rawUrl. 
    Send PSend24157 = new_Send((Optr)self, SMB_rawUrl, 0);
    // ,. 
    Send PSend24158 = new_Send((Optr)PSend24156, SMB__append_, 1, (Optr)PSend24157);
    String string_24159 = new_String(L" ");
    Constant string_24159_Const = new_Constant((Optr)string_24159);
    // ,. 
    Send PSend24160 = new_Send((Optr)PSend24158, SMB__append_, 1, (Optr)string_24159_Const);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend24161 = new_Send((Optr)self, SMB_protocol, 0);
    // ,. 
    Send PSend24162 = new_Send((Optr)PSend24160, SMB__append_, 1, (Optr)PSend24161);
    Array PThreadedCode24153 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24154, (Optr)&t_push1, (Optr)string_24155, (Optr)&t_send1, (Optr)PSend24156, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24157, (Optr)&t_send1, (Optr)PSend24158, (Optr)&t_push1, (Optr)string_24159, (Optr)&t_send1, (Optr)PSend24160, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24161, (Optr)&t_send1, (Optr)PSend24162, (Optr)&t_block_return);
    Block PBlock24152 = new_Block_with(empty_Array, empty_Array, PThreadedCode24153, 1, PSend24162);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24163 = new_Send((Optr)slot_WebClient_Core_WebRequest_request, SMB_ifNil_, 1, (Optr)PBlock24152);
    Array PThreadedCode24151 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_request, (Optr)&t_push_closure, (Optr)PBlock24152, (Optr)&t_send1, (Optr)PSend24163, (Optr)&t_method_return);
    Method PMethod24150 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24151, 1, PSend24163);
    
    MethodClosure MC_SMB_requestLine = new_MethodClosure((Method)PMethod24150, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_requestLine, MC_SMB_requestLine);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Character char_2665 = new_Character(L'#');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_2665_Const = new_Constant((Optr)char_2665);
    // copyUpTo:. 
<<<<<<< HEAD
    Send PSend24399 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyUpTo_, 1, (Optr)char_2665_Const);
    Character char_23849 = new_Character(L'?');
    Constant char_23849_Const = new_Constant((Optr)char_23849);
    // copyUpTo:. 
    Send PSend24400 = new_Send((Optr)PSend24399, SMB_copyUpTo_, 1, (Optr)char_23849_Const);
    Array PThreadedCode24398 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend24399, (Optr)&t_push1, (Optr)char_23849, (Optr)&t_send1, (Optr)PSend24400, (Optr)&t_method_return);
    Method PMethod24397 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24398, 1, PSend24400);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24397, WebClient_Core_WebRequest_Class);
=======
    Send PSend24166 = new_Send((Optr)slot_WebClient_Core_WebRequest_rawUrl, SMB_copyUpTo_, 1, (Optr)char_2665_Const);
    Character char_23890 = new_Character(L'?');
    Constant char_23890_Const = new_Constant((Optr)char_23890);
    // copyUpTo:. 
    Send PSend24167 = new_Send((Optr)PSend24166, SMB_copyUpTo_, 1, (Optr)char_23890_Const);
    Array PThreadedCode24165 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend24166, (Optr)&t_push1, (Optr)char_23890, (Optr)&t_send1, (Optr)PSend24167, (Optr)&t_method_return);
    Method PMethod24164 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24165, 1, PSend24167);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24164, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_url, MC_SMB_url);
}


<<<<<<< HEAD
static void init_SMB_send404Response_do_() {
    Symbol SMB_send404Response_do_ = new_Symbol(L"send404Response:do:");
    Variable VAR_body_0_0 = new_Variable_named(L"body", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24402 = new_Array_with(2, (Optr)VAR_body_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_resp_0_2 = new_Variable_named(L"resp", 0);
    Array PArray24403 = new_Array_with(1, (Optr)VAR_resp_0_2);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24407 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24408 = new_String(L"HTTP/1.1");
    Constant string_24408_Const = new_Constant((Optr)string_24408);
    SmallInt int_404 = new_SmallInt(404);
    Constant int_404_Const = new_Constant((Optr)int_404);
    // protocol:code:. 
    Send PSend24406 = new_Send((Optr)PSend24407, SMB_protocol_code_, 2, (Optr)string_24408_Const, (Optr)int_404_Const);
    Assign PAssign24405 = new_Assign((Optr)VAR_resp_0_2, (Optr)PSend24406);
    String string_24409 = new_String(L"Content-Type");
    String string_24410 = new_String(L"text/html; charset=utf-8");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24409_Const = new_Constant((Optr)string_24409);
    Constant string_24410_Const = new_Constant((Optr)string_24410);
    // headerAt:put:. 
    Send PSend24411 = new_Send((Optr)VAR_resp_0_2, SMB_headerAt_put_, 2, (Optr)string_24409_Const, (Optr)string_24410_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24412 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_resp_0_2);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24413 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_2, (Optr)VAR_body_0_0);
    Array PThreadedCode24404 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign24405, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24407, (Optr)&t_push1, (Optr)string_24408, (Optr)&t_push1, (Optr)int_404, (Optr)&t_send2, (Optr)PSend24406, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push1, (Optr)string_24409, (Optr)&t_push1, (Optr)string_24410, (Optr)&t_send2, (Optr)PSend24411, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_send1, (Optr)PSend24412, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_2, (Optr)&t_push_variable, (Optr)VAR_body_0_0, (Optr)&t_send2, (Optr)PSend24413, (Optr)&t_method_return);
    Method PMethod24401 = new_Method_with(PArray24402, PArray24403, empty_Array, PThreadedCode24404, 4, PAssign24405, PSend24411, PSend24412, PSend24413);
    
    MethodClosure MC_SMB_send404Response_do_ = new_MethodClosure((Method)PMethod24401, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_send404Response_do_, MC_SMB_send404Response_do_);
}


static void init_SMB_stream200Response_size_type_() {
    Symbol SMB_stream200Response_size_type_ = new_Symbol(L"stream200Response:size:type:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_streamSize_0_1 = new_Variable_named(L"streamSize", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Array PArray24415 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24418 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24419 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24417 = new_Block_with(PArray24418, empty_Array, PThreadedCode24419, 0);
    Symbol SMB_stream200Response_size_type_do_ = new_Symbol(L"stream200Response:size:type:do:");
    // stream200Response:size:type:do:. 
    Send PSend24420 = new_Send((Optr)self, SMB_stream200Response_size_type_do_, 4, (Optr)VAR_aStream_0_0, (Optr)VAR_streamSize_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24417);
    Array PThreadedCode24416 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_streamSize_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24417, (Optr)&t_send4, (Optr)PSend24420, (Optr)&t_method_return);
    Method PMethod24414 = new_Method_with(PArray24415, empty_Array, empty_Array, PThreadedCode24416, 1, PSend24420);
    
    MethodClosure MC_SMB_stream200Response_size_type_ = new_MethodClosure((Method)PMethod24414, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_stream200Response_size_type_, MC_SMB_stream200Response_size_type_);
}


static void init_SMB_isTraceRequest() {
    Symbol SMB_isTraceRequest = new_Symbol(L"isTraceRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24423 = new_Send((Optr)self, SMB_method, 0);
    String string_24424 = new_String(L"TRACE");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24424_Const = new_Constant((Optr)string_24424);
    // =. 
    Send PSend24425 = new_Send((Optr)PSend24423, SMB__equals_, 1, (Optr)string_24424_Const);
    Array PThreadedCode24422 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24423, (Optr)&t_push1, (Optr)string_24424, (Optr)&t_send1, (Optr)PSend24425, (Optr)&t_method_return);
    Method PMethod24421 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24422, 1, PSend24425);
    
    MethodClosure MC_SMB_isTraceRequest = new_MethodClosure((Method)PMethod24421, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isTraceRequest, MC_SMB_isTraceRequest);
=======
static void init_SMB_isHeadRequest() {
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24170 = new_Send((Optr)self, SMB_method, 0);
    String string_24171 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24171_Const = new_Constant((Optr)string_24171);
    // =. 
    Send PSend24172 = new_Send((Optr)PSend24170, SMB__equals_, 1, (Optr)string_24171_Const);
    Array PThreadedCode24169 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24170, (Optr)&t_push1, (Optr)string_24171, (Optr)&t_send1, (Optr)PSend24172, (Optr)&t_method_return);
    Method PMethod24168 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24169, 1, PSend24172);
    
    MethodClosure MC_SMB_isHeadRequest = new_MethodClosure((Method)PMethod24168, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_isHeadRequest, MC_SMB_isHeadRequest);
}


static void init_SMB_sendResponse_contentBlock_() {
    Symbol SMB_sendResponse_contentBlock_ = new_Symbol(L"sendResponse:contentBlock:");
    Variable VAR_resp_0_0 = new_Variable_named(L"resp", 0);
    Variable VAR_contentBlock_0_1 = new_Variable_named(L"contentBlock", 0);
    Array PArray24174 = new_Array_with(2, (Optr)VAR_resp_0_0, (Optr)VAR_contentBlock_0_1);
    String string_24176 = new_String(L"Date");
    Array PThreadedCode24178 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock24177 = new_Block_with(empty_Array, empty_Array, PThreadedCode24178, 1, PWebServer_classReference);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24179 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock24177);
    Symbol SMB_serverDate = new_Symbol(L"serverDate");
    // serverDate. 
    Send PSend24180 = new_Send((Optr)PSend24179, SMB_serverDate, 0);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24176_Const = new_Constant((Optr)string_24176);
    // headerAt:put:. 
    Send PSend24181 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24176_Const, (Optr)PSend24180);
    String string_24182 = new_String(L"Server");
    Array PThreadedCode24184 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)PWebServer_classReference, (Optr)&t_block_return);
    Block PBlock24183 = new_Block_with(empty_Array, empty_Array, PThreadedCode24184, 1, PWebServer_classReference);
    // ifNil:. 
    Send PSend24185 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNil_, 1, (Optr)PBlock24183);
    Symbol SMB_serverString = new_Symbol(L"serverString");
    // serverString. 
    Send PSend24186 = new_Send((Optr)PSend24185, SMB_serverString, 0);
    Constant string_24182_Const = new_Constant((Optr)string_24182);
    // headerAt:put:. 
    Send PSend24187 = new_Send((Optr)VAR_resp_0_0, SMB_headerAt_put_, 2, (Optr)string_24182_Const, (Optr)PSend24186);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend24192 = new_Send((Optr)VAR_resp_0_0, SMB_writeOn_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend24193 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_flush, 0);
    Symbol SMB_isHeadRequest = new_Symbol(L"isHeadRequest");
    // isHeadRequest. 
    Send PSend24194 = new_Send((Optr)self, SMB_isHeadRequest, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24198 = new_Send((Optr)VAR_contentBlock_0_1, SMB_value_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Array PThreadedCode24197 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_contentBlock_0_1, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24198, (Optr)&t_block_return);
    Block PBlock24196 = new_Block_with(empty_Array, empty_Array, PThreadedCode24197, 1, PSend24198);
    // ifFalse:. 
    Send PSend24195 = new_Send((Optr)PSend24194, SMB_ifFalse_, 1, (Optr)PBlock24196);
    Array PThreadedCode24191 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24192, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend24193, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24194, (Optr)&t_send_ifFalse_, (Optr)PSend24195, (Optr)PBlock24196, (Optr)&t_block_return);
    Block PBlock24190 = new_Block_with(empty_Array, empty_Array, PThreadedCode24191, 3, PSend24192, PSend24193, PSend24195);
    Variable VAR_ignore_1_0 = new_Variable_named(L"ignore", 1);
    Array PArray24200 = new_Array_with(1, (Optr)VAR_ignore_1_0);
    Array PThreadedCode24201 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24199 = new_Block_with(PArray24200, empty_Array, PThreadedCode24201, 0);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend24202 = new_Send((Optr)PBlock24190, SMB_on_do_, 2, (Optr)NetworkError_classReference, (Optr)PBlock24199);
    Symbol SMB_logRequest_response_ = new_Symbol(L"logRequest:response:");
    // logRequest:response:. 
    Send PSend24205 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_logRequest_response_, 2, (Optr)self, (Optr)VAR_resp_0_0);
    Array PThreadedCode24204 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_send2, (Optr)PSend24205, (Optr)&t_block_return);
    Block PBlock24203 = new_Block_with(empty_Array, empty_Array, PThreadedCode24204, 1, PSend24205);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24206 = new_Send((Optr)slot_WebClient_Core_WebRequest_server, SMB_ifNotNil_, 1, (Optr)PBlock24203);
    Array PThreadedCode24189 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_closure, (Optr)PBlock24190, (Optr)&t_push_class_reference, (Optr)NetworkError_classReference, (Optr)&t_push_closure, (Optr)PBlock24199, (Optr)&t_send2, (Optr)PSend24202, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24203, (Optr)&t_send1, (Optr)PSend24206, (Optr)&t_block_return);
    Block PBlock24188 = new_Block_with(empty_Array, empty_Array, PThreadedCode24189, 2, PSend24202, PSend24206);
    Symbol SMB_closeIfTransient_after_ = new_Symbol(L"closeIfTransient:after:");
    // closeIfTransient:after:. 
    Send PSend24207 = new_Send((Optr)self, SMB_closeIfTransient_after_, 2, (Optr)VAR_resp_0_0, (Optr)PBlock24188);
    Array PThreadedCode24175 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24176, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24177, (Optr)&t_send1, (Optr)PSend24179, (Optr)&t_send0, (Optr)PSend24180, (Optr)&t_send2, (Optr)PSend24181, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push1, (Optr)string_24182, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_server, (Optr)&t_push_closure, (Optr)PBlock24183, (Optr)&t_send1, (Optr)PSend24185, (Optr)&t_send0, (Optr)PSend24186, (Optr)&t_send2, (Optr)PSend24187, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_0, (Optr)&t_push_closure, (Optr)PBlock24188, (Optr)&t_send2, (Optr)PSend24207, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24173 = new_Method_with(PArray24174, empty_Array, empty_Array, PThreadedCode24175, 4, PSend24181, PSend24187, PSend24207, self);
    
    MethodClosure MC_SMB_sendResponse_contentBlock_ = new_MethodClosure((Method)PMethod24173, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_contentBlock_, MC_SMB_sendResponse_contentBlock_);
}


static void init_SMB_multipartFields() {
    Symbol SMB_multipartFields = new_Symbol(L"multipartFields");
    Variable VAR_fields_0_0 = new_Variable_named(L"fields", 0);
    Array PArray24209 = new_Array_with(1, (Optr)VAR_fields_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24212 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24211 = new_Assign((Optr)VAR_fields_0_0, (Optr)PSend24212);
    Variable VAR_hdrs_1_0 = new_Variable_named(L"hdrs", 1);
    Variable VAR_params_1_1 = new_Variable_named(L"params", 1);
    Variable VAR_cntnt_1_2 = new_Variable_named(L"cntnt", 1);
    Array PArray24214 = new_Array_with(3, (Optr)VAR_hdrs_1_0, (Optr)VAR_params_1_1, (Optr)VAR_cntnt_1_2);
    String string_24216 = new_String(L"name");
    Variable VAR_fieldName_2_0 = new_Variable_named(L"fieldName", 2);
    Array PArray24218 = new_Array_with(1, (Optr)VAR_fieldName_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24220 = new_Send((Optr)VAR_fields_0_0, SMB_at_put_, 2, (Optr)VAR_fieldName_2_0, (Optr)VAR_cntnt_1_2);
    Array PThreadedCode24219 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_push_variable, (Optr)VAR_fieldName_2_0, (Optr)&t_push_variable, (Optr)VAR_cntnt_1_2, (Optr)&t_send2, (Optr)PSend24220, (Optr)&t_method_return);
    Block PBlock24217 = new_Block_with(PArray24218, empty_Array, PThreadedCode24219, 1, PSend24220);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Constant string_24216_Const = new_Constant((Optr)string_24216);
    // at:ifPresent:. 
    Send PSend24221 = new_Send((Optr)VAR_params_1_1, SMB_at_ifPresent_, 2, (Optr)string_24216_Const, (Optr)PBlock24217);
    Array PThreadedCode24215 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_params_1_1, (Optr)&t_push1, (Optr)string_24216, (Optr)&t_push_closure, (Optr)PBlock24217, (Optr)&t_send2, (Optr)PSend24221, (Optr)&t_method_return);
    Block PBlock24213 = new_Block_with(PArray24214, empty_Array, PThreadedCode24215, 1, PSend24221);
    Symbol SMB_multipartFieldsDo_ = new_Symbol(L"multipartFieldsDo:");
    // multipartFieldsDo:. 
    Send PSend24222 = new_Send((Optr)self, SMB_multipartFieldsDo_, 1, (Optr)PBlock24213);
    Array PThreadedCode24210 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24211, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24212, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock24213, (Optr)&t_send1, (Optr)PSend24222, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_0, (Optr)&t_method_return);
    Method PMethod24208 = new_Method_with(empty_Array, PArray24209, empty_Array, PThreadedCode24210, 3, PAssign24211, PSend24222, VAR_fields_0_0);
    
    MethodClosure MC_SMB_multipartFields = new_MethodClosure((Method)PMethod24208, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_multipartFields, MC_SMB_multipartFields);
}


static void init_SMB_sendResponse_chunked_() {
    Symbol SMB_sendResponse_chunked_ = new_Symbol(L"sendResponse:chunked:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_chunkBlock_0_1 = new_Variable_named(L"chunkBlock", 0);
    Array PArray24224 = new_Array_with(2, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1);
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24227 = new_Array_with(1, (Optr)VAR_resp_1_0);
    Array PThreadedCode24228 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock24226 = new_Block_with(PArray24227, empty_Array, PThreadedCode24228, 0);
    Symbol SMB_sendResponse_chunked_do_ = new_Symbol(L"sendResponse:chunked:do:");
    // sendResponse:chunked:do:. 
    Send PSend24229 = new_Send((Optr)self, SMB_sendResponse_chunked_do_, 3, (Optr)VAR_code_0_0, (Optr)VAR_chunkBlock_0_1, (Optr)PBlock24226);
    Array PThreadedCode24225 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkBlock_0_1, (Optr)&t_push_closure, (Optr)PBlock24226, (Optr)&t_send3, (Optr)PSend24229, (Optr)&t_method_return);
    Method PMethod24223 = new_Method_with(PArray24224, empty_Array, empty_Array, PThreadedCode24225, 1, PSend24229);
    
    MethodClosure MC_SMB_sendResponse_chunked_ = new_MethodClosure((Method)PMethod24223, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponse_chunked_, MC_SMB_sendResponse_chunked_);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_sendOptionsResponse_() {
    Symbol SMB_sendOptionsResponse_ = new_Symbol(L"sendOptionsResponse:");
    Variable VAR_allowed_0_0 = new_Variable_named(L"allowed", 0);
<<<<<<< HEAD
    Array PArray24427 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_24429 = new_String(L"");
    String string_24430 = new_String(L"application/octet-stream");
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24432 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24434 = new_String(L"allow");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray24436 = new_Array_with(1, (Optr)VAR_s_2_0);
    Variable VAR_m_3_0 = new_Variable_named(L"m", 3);
    Array PArray24439 = new_Array_with(1, (Optr)VAR_m_3_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24441 = new_Send((Optr)VAR_s_2_0, SMB_nextPutAll_, 1, (Optr)VAR_m_3_0);
    Array PThreadedCode24440 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_m_3_0, (Optr)&t_send1, (Optr)PSend24441, (Optr)&t_method_return);
    Block PBlock24438 = new_Block_with(PArray24439, empty_Array, PThreadedCode24440, 1, PSend24441);
    Character char_23928 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_23928_Const = new_Constant((Optr)char_23928);
    // nextPut:. 
    Send PSend24444 = new_Send((Optr)VAR_s_2_0, SMB_nextPut_, 1, (Optr)char_23928_Const);
    Array PThreadedCode24443 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)char_23928, (Optr)&t_send1, (Optr)PSend24444, (Optr)&t_block_return);
    Block PBlock24442 = new_Block_with(empty_Array, empty_Array, PThreadedCode24443, 1, PSend24444);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend24445 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock24438, (Optr)PBlock24442);
    Array PThreadedCode24437 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock24438, (Optr)&t_push_closure, (Optr)PBlock24442, (Optr)&t_send2, (Optr)PSend24445, (Optr)&t_method_return);
    Block PBlock24435 = new_Block_with(PArray24436, empty_Array, PThreadedCode24437, 1, PSend24445);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend24446 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock24435);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24434_Const = new_Constant((Optr)string_24434);
    // headerAt:put:. 
    Send PSend24447 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24434_Const, (Optr)PSend24446);
    Array PThreadedCode24433 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24434, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock24435, (Optr)&t_send1, (Optr)PSend24446, (Optr)&t_send2, (Optr)PSend24447, (Optr)&t_method_return);
    Block PBlock24431 = new_Block_with(PArray24432, empty_Array, PThreadedCode24433, 1, PSend24447);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Constant string_24429_Const = new_Constant((Optr)string_24429);
    Constant string_24430_Const = new_Constant((Optr)string_24430);
    // send200Response:contentType:do:. 
    Send PSend24448 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)string_24429_Const, (Optr)string_24430_Const, (Optr)PBlock24431);
    Array PThreadedCode24428 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24429, (Optr)&t_push1, (Optr)string_24430, (Optr)&t_push_closure, (Optr)PBlock24431, (Optr)&t_send3, (Optr)PSend24448, (Optr)&t_method_return);
    Method PMethod24426 = new_Method_with(PArray24427, empty_Array, empty_Array, PThreadedCode24428, 1, PSend24448);
    
    MethodClosure MC_SMB_sendOptionsResponse_ = new_MethodClosure((Method)PMethod24426, WebClient_Core_WebRequest_Class);
=======
    Array PArray24231 = new_Array_with(1, (Optr)VAR_allowed_0_0);
    String string_24233 = new_String(L"");
    String string_24234 = new_String(L"application/octet-stream");
    Variable VAR_resp_1_0 = new_Variable_named(L"resp", 1);
    Array PArray24236 = new_Array_with(1, (Optr)VAR_resp_1_0);
    String string_24238 = new_String(L"allow");
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray24240 = new_Array_with(1, (Optr)VAR_s_2_0);
    Variable VAR_m_3_0 = new_Variable_named(L"m", 3);
    Array PArray24243 = new_Array_with(1, (Optr)VAR_m_3_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24245 = new_Send((Optr)VAR_s_2_0, SMB_nextPutAll_, 1, (Optr)VAR_m_3_0);
    Array PThreadedCode24244 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_m_3_0, (Optr)&t_send1, (Optr)PSend24245, (Optr)&t_method_return);
    Block PBlock24242 = new_Block_with(PArray24243, empty_Array, PThreadedCode24244, 1, PSend24245);
    Character char_24060 = new_Character(L',');
    Symbol SMB_nextPut_ = new_Symbol(L"nextPut:");
    Constant char_24060_Const = new_Constant((Optr)char_24060);
    // nextPut:. 
    Send PSend24248 = new_Send((Optr)VAR_s_2_0, SMB_nextPut_, 1, (Optr)char_24060_Const);
    Array PThreadedCode24247 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)char_24060, (Optr)&t_send1, (Optr)PSend24248, (Optr)&t_block_return);
    Block PBlock24246 = new_Block_with(empty_Array, empty_Array, PThreadedCode24247, 1, PSend24248);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend24249 = new_Send((Optr)VAR_allowed_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock24242, (Optr)PBlock24246);
    Array PThreadedCode24241 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_allowed_0_0, (Optr)&t_push_closure, (Optr)PBlock24242, (Optr)&t_push_closure, (Optr)PBlock24246, (Optr)&t_send2, (Optr)PSend24249, (Optr)&t_method_return);
    Block PBlock24239 = new_Block_with(PArray24240, empty_Array, PThreadedCode24241, 1, PSend24249);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend24250 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock24239);
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24238_Const = new_Constant((Optr)string_24238);
    // headerAt:put:. 
    Send PSend24251 = new_Send((Optr)VAR_resp_1_0, SMB_headerAt_put_, 2, (Optr)string_24238_Const, (Optr)PSend24250);
    Array PThreadedCode24237 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_resp_1_0, (Optr)&t_push1, (Optr)string_24238, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock24239, (Optr)&t_send1, (Optr)PSend24250, (Optr)&t_send2, (Optr)PSend24251, (Optr)&t_method_return);
    Block PBlock24235 = new_Block_with(PArray24236, empty_Array, PThreadedCode24237, 1, PSend24251);
    Symbol SMB_send200Response_contentType_do_ = new_Symbol(L"send200Response:contentType:do:");
    Constant string_24233_Const = new_Constant((Optr)string_24233);
    Constant string_24234_Const = new_Constant((Optr)string_24234);
    // send200Response:contentType:do:. 
    Send PSend24252 = new_Send((Optr)self, SMB_send200Response_contentType_do_, 3, (Optr)string_24233_Const, (Optr)string_24234_Const, (Optr)PBlock24235);
    Array PThreadedCode24232 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24233, (Optr)&t_push1, (Optr)string_24234, (Optr)&t_push_closure, (Optr)PBlock24235, (Optr)&t_send3, (Optr)PSend24252, (Optr)&t_method_return);
    Method PMethod24230 = new_Method_with(PArray24231, empty_Array, empty_Array, PThreadedCode24232, 1, PSend24252);
    
    MethodClosure MC_SMB_sendOptionsResponse_ = new_MethodClosure((Method)PMethod24230, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_sendOptionsResponse_, MC_SMB_sendOptionsResponse_);
}


<<<<<<< HEAD
static void init_SMB_rawUrl() {
    Symbol SMB_rawUrl = new_Symbol(L"rawUrl");
    Array PThreadedCode24450 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebRequest_rawUrl, (Optr)&t_method_return);
    Method PMethod24449 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24450, 1, slot_WebClient_Core_WebRequest_rawUrl);
    
    MethodClosure MC_SMB_rawUrl = new_MethodClosure((Method)PMethod24449, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_rawUrl, MC_SMB_rawUrl);
}


=======
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_SMB_sendResponseCode_content_type_close_() {
    Symbol SMB_sendResponseCode_content_type_close_ = new_Symbol(L"sendResponseCode:content:type:close:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBool_0_3 = new_Variable_named(L"aBool", 0);
<<<<<<< HEAD
    Array PArray24452 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBool_0_3);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24455 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24460 = new_String(L"Connection");
    String string_24461 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24460_Const = new_Constant((Optr)string_24460);
    Constant string_24461_Const = new_Constant((Optr)string_24461);
    // headerAt:put:. 
    Send PSend24462 = new_Send((Optr)VAR_hdr_1_0, SMB_headerAt_put_, 2, (Optr)string_24460_Const, (Optr)string_24461_Const);
    Array PThreadedCode24459 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_push1, (Optr)string_24460, (Optr)&t_push1, (Optr)string_24461, (Optr)&t_send2, (Optr)PSend24462, (Optr)&t_block_return);
    Block PBlock24458 = new_Block_with(empty_Array, empty_Array, PThreadedCode24459, 1, PSend24462);
    // ifTrue:. 
    Send PSend24457 = new_Send((Optr)VAR_aBool_0_3, SMB_ifTrue_, 1, (Optr)PBlock24458);
    Array PThreadedCode24456 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBool_0_3, (Optr)&t_send_ifTrue_, (Optr)PSend24457, (Optr)PBlock24458, (Optr)&t_method_return);
    Block PBlock24454 = new_Block_with(PArray24455, empty_Array, PThreadedCode24456, 1, PSend24457);
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    // sendResponseCode:content:type:do:. 
    Send PSend24463 = new_Send((Optr)self, SMB_sendResponseCode_content_type_do_, 4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24454);
    Array PThreadedCode24453 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24454, (Optr)&t_send4, (Optr)PSend24463, (Optr)&t_method_return);
    Method PMethod24451 = new_Method_with(PArray24452, empty_Array, empty_Array, PThreadedCode24453, 1, PSend24463);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_close_ = new_MethodClosure((Method)PMethod24451, WebClient_Core_WebRequest_Class);
=======
    Array PArray24254 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBool_0_3);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24257 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24262 = new_String(L"Connection");
    String string_24263 = new_String(L"close");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24262_Const = new_Constant((Optr)string_24262);
    Constant string_24263_Const = new_Constant((Optr)string_24263);
    // headerAt:put:. 
    Send PSend24264 = new_Send((Optr)VAR_hdr_1_0, SMB_headerAt_put_, 2, (Optr)string_24262_Const, (Optr)string_24263_Const);
    Array PThreadedCode24261 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_push1, (Optr)string_24262, (Optr)&t_push1, (Optr)string_24263, (Optr)&t_send2, (Optr)PSend24264, (Optr)&t_block_return);
    Block PBlock24260 = new_Block_with(empty_Array, empty_Array, PThreadedCode24261, 1, PSend24264);
    // ifTrue:. 
    Send PSend24259 = new_Send((Optr)VAR_aBool_0_3, SMB_ifTrue_, 1, (Optr)PBlock24260);
    Array PThreadedCode24258 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBool_0_3, (Optr)&t_send_ifTrue_, (Optr)PSend24259, (Optr)PBlock24260, (Optr)&t_method_return);
    Block PBlock24256 = new_Block_with(PArray24257, empty_Array, PThreadedCode24258, 1, PSend24259);
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    // sendResponseCode:content:type:do:. 
    Send PSend24265 = new_Send((Optr)self, SMB_sendResponseCode_content_type_do_, 4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)PBlock24256);
    Array PThreadedCode24255 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24256, (Optr)&t_send4, (Optr)PSend24265, (Optr)&t_method_return);
    Method PMethod24253 = new_Method_with(PArray24254, empty_Array, empty_Array, PThreadedCode24255, 1, PSend24265);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_close_ = new_MethodClosure((Method)PMethod24253, WebClient_Core_WebRequest_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_close_, MC_SMB_sendResponseCode_content_type_close_);
}


static void init_SMB_sendResponseCode_content_type_do_() {
    Symbol SMB_sendResponseCode_content_type_do_ = new_Symbol(L"sendResponseCode:content:type:do:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_aString_0_1 = new_Variable_named(L"aString", 0);
    Variable VAR_contentType_0_2 = new_Variable_named(L"contentType", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray24267 = new_Array_with(4, (Optr)VAR_code_0_0, (Optr)VAR_aString_0_1, (Optr)VAR_contentType_0_2, (Optr)VAR_aBlock_0_3);
    Variable VAR_resp_0_4 = new_Variable_named(L"resp", 0);
    Array PArray24268 = new_Array_with(1, (Optr)VAR_resp_0_4);
    Symbol SMB_newResponse = new_Symbol(L"newResponse");
    // newResponse. 
    Send PSend24272 = new_Send((Optr)self, SMB_newResponse, 0);
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    String string_24273 = new_String(L"HTTP/1.1");
    Constant string_24273_Const = new_Constant((Optr)string_24273);
    // protocol:code:. 
    Send PSend24271 = new_Send((Optr)PSend24272, SMB_protocol_code_, 2, (Optr)string_24273_Const, (Optr)VAR_code_0_0);
    Assign PAssign24270 = new_Assign((Optr)VAR_resp_0_4, (Optr)PSend24271);
    String string_24276 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_24276_Const = new_Constant((Optr)string_24276);
    // headerAt:put:. 
    Send PSend24277 = new_Send((Optr)VAR_resp_0_4, SMB_headerAt_put_, 2, (Optr)string_24276_Const, (Optr)VAR_contentType_0_2);
    Array PThreadedCode24275 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push1, (Optr)string_24276, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_send2, (Optr)PSend24277, (Optr)&t_block_return);
    Block PBlock24274 = new_Block_with(empty_Array, empty_Array, PThreadedCode24275, 1, PSend24277);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend24278 = new_Send((Optr)VAR_contentType_0_2, SMB_ifNotNil_, 1, (Optr)PBlock24274);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24279 = new_Send((Optr)VAR_aBlock_0_3, SMB_value_, 1, (Optr)VAR_resp_0_4);
    Symbol SMB_sendResponse_content_ = new_Symbol(L"sendResponse:content:");
    // sendResponse:content:. 
    Send PSend24280 = new_Send((Optr)self, SMB_sendResponse_content_, 2, (Optr)VAR_resp_0_4, (Optr)VAR_aString_0_1);
    Array PThreadedCode24269 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign24270, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24272, (Optr)&t_push1, (Optr)string_24273, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send2, (Optr)PSend24271, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contentType_0_2, (Optr)&t_push_closure, (Optr)PBlock24274, (Optr)&t_send1, (Optr)PSend24278, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_send1, (Optr)PSend24279, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_resp_0_4, (Optr)&t_push_variable, (Optr)VAR_aString_0_1, (Optr)&t_send2, (Optr)PSend24280, (Optr)&t_method_return);
    Method PMethod24266 = new_Method_with(PArray24267, PArray24268, empty_Array, PThreadedCode24269, 4, PAssign24270, PSend24278, PSend24279, PSend24280);
    
    MethodClosure MC_SMB_sendResponseCode_content_type_do_ = new_MethodClosure((Method)PMethod24266, WebClient_Core_WebRequest_Class);
    store_method(WebClient_Core_WebRequest_Class, SMB_sendResponseCode_content_type_do_, MC_SMB_sendResponseCode_content_type_do_);
}


static void init_class_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray24465 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24467 = new_Send((Optr)self, SMB_new, 0);
    // readFrom:. 
    Send PSend24468 = new_Send((Optr)PSend24467, SMB_readFrom_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24466 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24467, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24468, (Optr)&t_method_return);
    Method PMethod24464 = new_Method_with(PArray24465, empty_Array, empty_Array, PThreadedCode24466, 1, PSend24468);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24464, HEADER(WebClient_Core_WebRequest_Class));
=======
    Array PArray24282 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24284 = new_Send((Optr)self, SMB_new, 0);
    // readFrom:. 
    Send PSend24285 = new_Send((Optr)PSend24284, SMB_readFrom_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24283 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24284, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24285, (Optr)&t_method_return);
    Method PMethod24281 = new_Method_with(PArray24282, empty_Array, empty_Array, PThreadedCode24283, 1, PSend24285);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24281, HEADER(WebClient_Core_WebRequest_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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