#include <lib/class/WebClient/Core/WebResponse.h>


Optr layout_WebClient_Core_WebResponse_Class_class;
Optr slot_WebClient_Core_WebResponse_request;
Optr slot_WebClient_Core_WebResponse_status;
Optr slot_WebClient_Core_WebResponse_code;
Optr slot_WebClient_Core_WebResponse_url;
Optr layout_WebClient_Core_WebResponse;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode24676 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_method_return);
    Method PMethod24675 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24676, 1, slot_WebClient_Core_WebResponse_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod24675, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_isSuccess() {
    Symbol SMB_isSuccess = new_Symbol(L"isSuccess");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24679 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_200 = new_SmallInt(200);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_200_Const = new_Constant((Optr)int_200);
    // >=. 
    Send PSend24680 = new_Send((Optr)PSend24679, SMB__gt__equals_, 1, (Optr)int_200_Const);
    // code. 
    Send PSend24683 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_299 = new_SmallInt(299);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_299_Const = new_Constant((Optr)int_299);
    // <=. 
    Send PSend24684 = new_Send((Optr)PSend24683, SMB__lt__equals_, 1, (Optr)int_299_Const);
    Array PThreadedCode24682 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24683, (Optr)&t_push1, (Optr)int_299, (Optr)&t_send1, (Optr)PSend24684, (Optr)&t_block_return);
    Block PBlock24681 = new_Block_with(empty_Array, empty_Array, PThreadedCode24682, 1, PSend24684);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24685 = new_Send((Optr)PSend24680, SMB_and_, 1, (Optr)PBlock24681);
    Array PThreadedCode24678 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24679, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend24680, (Optr)&t_push_closure, (Optr)PBlock24681, (Optr)&t_send1, (Optr)PSend24685, (Optr)&t_method_return);
    Method PMethod24677 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24678, 1, PSend24685);
    
    MethodClosure MC_SMB_isSuccess = new_MethodClosure((Method)PMethod24677, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isSuccess, MC_SMB_isSuccess);
}


static void init_SMB_isRedirect() {
    Symbol SMB_isRedirect = new_Symbol(L"isRedirect");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24688 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_300 = new_SmallInt(300);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_300_Const = new_Constant((Optr)int_300);
    // >=. 
    Send PSend24689 = new_Send((Optr)PSend24688, SMB__gt__equals_, 1, (Optr)int_300_Const);
    // code. 
    Send PSend24692 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_399 = new_SmallInt(399);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_399_Const = new_Constant((Optr)int_399);
    // <=. 
    Send PSend24693 = new_Send((Optr)PSend24692, SMB__lt__equals_, 1, (Optr)int_399_Const);
    Array PThreadedCode24691 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24692, (Optr)&t_push1, (Optr)int_399, (Optr)&t_send1, (Optr)PSend24693, (Optr)&t_block_return);
    Block PBlock24690 = new_Block_with(empty_Array, empty_Array, PThreadedCode24691, 1, PSend24693);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24694 = new_Send((Optr)PSend24689, SMB_and_, 1, (Optr)PBlock24690);
    Array PThreadedCode24687 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24688, (Optr)&t_push1, (Optr)int_300, (Optr)&t_send1, (Optr)PSend24689, (Optr)&t_push_closure, (Optr)PBlock24690, (Optr)&t_send1, (Optr)PSend24694, (Optr)&t_method_return);
    Method PMethod24686 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24687, 1, PSend24694);
    
    MethodClosure MC_SMB_isRedirect = new_MethodClosure((Method)PMethod24686, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isRedirect, MC_SMB_isRedirect);
}


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24696 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray24697 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24700 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign24702 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24705 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24704 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend24705);
    Assign PAssign24703 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24704);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_24708 = new_String(L" ");
    Constant string_24708_Const = new_Constant((Optr)string_24708);
    // findTokens:. 
    Send PSend24707 = new_Send((Optr)slot_WebClient_Core_WebResponse_status, SMB_findTokens_, 1, (Optr)string_24708_Const);
    Assign PAssign24706 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend24707);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24709 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend24710 = new_Send((Optr)PSend24709, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24714 = new_String(L"Invalid response: ");
    Constant string_24714_Const = new_Constant((Optr)string_24714);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24715 = new_Send((Optr)string_24714_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend24716 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend24715);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24717 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24716);
    Array PThreadedCode24713 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24714, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24715, (Optr)&t_send1, (Optr)PSend24716, (Optr)&t_send1, (Optr)PSend24717, (Optr)&t_block_return);
    Block PBlock24712 = new_Block_with(empty_Array, empty_Array, PThreadedCode24713, 1, PSend24717);
    // ifTrue:. 
    Send PSend24711 = new_Send((Optr)PSend24710, SMB_ifTrue_, 1, (Optr)PBlock24712);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24719 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign24718 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend24719);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend24722 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend24721 = new_Send((Optr)PSend24722, SMB_asInteger, 0);
    Assign PAssign24720 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)PSend24721);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24724 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign24723 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24724);
    Array PThreadedCode24701 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign24702, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24703, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24705, (Optr)&t_send1, (Optr)PSend24704, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24706, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_push1, (Optr)string_24708, (Optr)&t_send1, (Optr)PSend24707, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24709, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24710, (Optr)&t_send_ifTrue_, (Optr)PSend24711, (Optr)PBlock24712, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24718, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24719, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24720, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24722, (Optr)&t_send0, (Optr)PSend24721, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24723, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24724, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock24699 = new_Block_with(PArray24700, empty_Array, PThreadedCode24701, 8, PAssign24702, PAssign24703, PAssign24706, PSend24711, PAssign24718, PAssign24720, PAssign24723, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24725 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24699);
    Array PThreadedCode24698 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24699, (Optr)&t_send1, (Optr)PSend24725, (Optr)&t_method_return);
    Method PMethod24695 = new_Method_with(PArray24696, PArray24697, empty_Array, PThreadedCode24698, 1, PSend24725);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24695, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_request_() {
    Symbol SMB_request_ = new_Symbol(L"request:");
    Variable VAR_aRequest_0_0 = new_Variable_named(L"aRequest", 0);
    Array PArray24727 = new_Array_with(1, (Optr)VAR_aRequest_0_0);
    Assign PAssign24729 = new_Assign((Optr)slot_WebClient_Core_WebResponse_request, (Optr)VAR_aRequest_0_0);
    Array PThreadedCode24728 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24729, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24726 = new_Method_with(PArray24727, empty_Array, empty_Array, PThreadedCode24728, 2, PAssign24729, self);
    
    MethodClosure MC_SMB_request_ = new_MethodClosure((Method)PMethod24726, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_request_, MC_SMB_request_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24731 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    // writeStatusOn:. 
    Send PSend24733 = new_Send((Optr)self, SMB_writeStatusOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24734 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24732 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24733, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24734, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24730 = new_Method_with(PArray24731, empty_Array, empty_Array, PThreadedCode24732, 3, PSend24733, PSuper24734, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24730, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_writeStatusOn_() {
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24736 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24739 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24741 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24742 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24740 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24741, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24742, (Optr)&t_method_return);
    Block PBlock24738 = new_Block_with(PArray24739, empty_Array, PThreadedCode24740, 2, PSend24741, PSend24742);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24743 = new_Send((Optr)PBlock24738, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24737 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24738, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24743, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24735 = new_Method_with(PArray24736, empty_Array, empty_Array, PThreadedCode24737, 2, PSend24743, self);
    
    MethodClosure MC_SMB_writeStatusOn_ = new_MethodClosure((Method)PMethod24735, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeStatusOn_, MC_SMB_writeStatusOn_);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Array PThreadedCode24745 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_url, (Optr)&t_method_return);
    Method PMethod24744 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24745, 1, slot_WebClient_Core_WebResponse_url);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24744, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_status_() {
    Symbol SMB_status_ = new_Symbol(L"status:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24747 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24749 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)VAR_aString_0_0);
    Array PThreadedCode24748 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24749, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24746 = new_Method_with(PArray24747, empty_Array, empty_Array, PThreadedCode24748, 2, PAssign24749, self);
    
    MethodClosure MC_SMB_status_ = new_MethodClosure((Method)PMethod24746, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status_, MC_SMB_status_);
}


static void init_SMB_isInformational() {
    Symbol SMB_isInformational = new_Symbol(L"isInformational");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24752 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // >=. 
    Send PSend24753 = new_Send((Optr)PSend24752, SMB__gt__equals_, 1, (Optr)int_100_Const);
    // code. 
    Send PSend24756 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_199 = new_SmallInt(199);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_199_Const = new_Constant((Optr)int_199);
    // <=. 
    Send PSend24757 = new_Send((Optr)PSend24756, SMB__lt__equals_, 1, (Optr)int_199_Const);
    Array PThreadedCode24755 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24756, (Optr)&t_push1, (Optr)int_199, (Optr)&t_send1, (Optr)PSend24757, (Optr)&t_block_return);
    Block PBlock24754 = new_Block_with(empty_Array, empty_Array, PThreadedCode24755, 1, PSend24757);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24758 = new_Send((Optr)PSend24753, SMB_and_, 1, (Optr)PBlock24754);
    Array PThreadedCode24751 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24752, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend24753, (Optr)&t_push_closure, (Optr)PBlock24754, (Optr)&t_send1, (Optr)PSend24758, (Optr)&t_method_return);
    Method PMethod24750 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24751, 1, PSend24758);
    
    MethodClosure MC_SMB_isInformational = new_MethodClosure((Method)PMethod24750, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isInformational, MC_SMB_isInformational);
}


static void init_SMB_url_() {
    Symbol SMB_url_ = new_Symbol(L"url:");
    Variable VAR_urlString_0_0 = new_Variable_named(L"urlString", 0);
    Array PArray24760 = new_Array_with(1, (Optr)VAR_urlString_0_0);
    Assign PAssign24762 = new_Assign((Optr)slot_WebClient_Core_WebResponse_url, (Optr)VAR_urlString_0_0);
    Array PThreadedCode24761 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24762, (Optr)&t_push_variable, (Optr)VAR_urlString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24759 = new_Method_with(PArray24760, empty_Array, empty_Array, PThreadedCode24761, 2, PAssign24762, self);
    
    MethodClosure MC_SMB_url_ = new_MethodClosure((Method)PMethod24759, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url_, MC_SMB_url_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend24768 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign24767 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend24768);
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    // closeIfTransient. 
    Send PSend24769 = new_Send((Optr)self, SMB_closeIfTransient, 0);
    Array PThreadedCode24766 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign24767, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24768, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24769, (Optr)&t_block_return);
    Block PBlock24765 = new_Block_with(empty_Array, empty_Array, PThreadedCode24766, 2, PAssign24767, PSend24769);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24770 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock24765);
    Array PThreadedCode24764 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock24765, (Optr)&t_send1, (Optr)PSend24770, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_method_return);
    Method PMethod24763 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24764, 2, PSend24770, slot_WebClient_Core_WebMessage_content);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod24763, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24774 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24776 = new_Send((Optr)slot_WebClient_Core_WebResponse_request, SMB_method, 0);
    String string_24777 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24777_Const = new_Constant((Optr)string_24777);
    // =. 
    Send PSend24778 = new_Send((Optr)PSend24776, SMB__equals_, 1, (Optr)string_24777_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24782 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_24782_Const = new_Constant((Optr)string_24782);
    // escape:. 
    Send PSend24783 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_24782_Const);
    Array PThreadedCode24781 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_24782, (Optr)&t_send1, (Optr)PSend24783, (Optr)&t_block_return);
    Block PBlock24780 = new_Block_with(empty_Array, empty_Array, PThreadedCode24781, 1, PSend24783);
    // ifTrue:. 
    Send PSend24779 = new_Send((Optr)PSend24778, SMB_ifTrue_, 1, (Optr)PBlock24780);
    Super PSuper24784 = new_Super(SMB_getContent, 0);
    Array PThreadedCode24775 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_send0, (Optr)PSend24776, (Optr)&t_push1, (Optr)string_24777, (Optr)&t_send1, (Optr)PSend24778, (Optr)&t_send_ifTrue_, (Optr)PSend24779, (Optr)PBlock24780, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24784, (Optr)&t_method_return);
    Block PBlock24773 = new_Block_with(PArray24774, empty_Array, PThreadedCode24775, 2, PSend24779, PSuper24784);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24785 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24773);
    Array PThreadedCode24772 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24773, (Optr)&t_send1, (Optr)PSend24785, (Optr)&t_method_return);
    Method PMethod24771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24772, 1, PSend24785);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod24771, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_status() {
    Symbol SMB_status = new_Symbol(L"status");
    Array PThreadedCode24787 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_method_return);
    Method PMethod24786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24787, 1, slot_WebClient_Core_WebResponse_status);
    
    MethodClosure MC_SMB_status = new_MethodClosure((Method)PMethod24786, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status, MC_SMB_status);
}


static void init_SMB_request() {
    Symbol SMB_request = new_Symbol(L"request");
    Array PThreadedCode24789 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_method_return);
    Method PMethod24788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24789, 1, slot_WebClient_Core_WebResponse_request);
    
    MethodClosure MC_SMB_request = new_MethodClosure((Method)PMethod24788, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_request, MC_SMB_request);
}


static void init_SMB_protocol_code_() {
    /*
    protocol: protocol code: code
// 	"Create a response using the given protocol / code"
// 
// 	^self new protocol: protocol code: code
    */
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_respProtocol_0_0 = new_Variable_named(L"respProtocol", 0);
    Variable VAR_respCode_0_1 = new_Variable_named(L"respCode", 0);
    Array PArray24791 = new_Array_with(2, (Optr)VAR_respProtocol_0_0, (Optr)VAR_respCode_0_1);
    Assign PAssign24793 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)VAR_respCode_0_1);
    Assign PAssign24794 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_respProtocol_0_0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24800 = new_String(L" ");
    Constant string_24800_Const = new_Constant((Optr)string_24800);
    // ,. 
    Send PSend24799 = new_Send((Optr)slot_WebClient_Core_WebMessage_protocol, SMB__append_, 1, (Optr)string_24800_Const);
    // ,. 
    Send PSend24798 = new_Send((Optr)PSend24799, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    String string_24801 = new_String(L" ");
    Constant string_24801_Const = new_Constant((Optr)string_24801);
    // ,. 
    Send PSend24797 = new_Send((Optr)PSend24798, SMB__append_, 1, (Optr)string_24801_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend24803 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    // statusCodeAt:. 
    Send PSend24802 = new_Send((Optr)PSend24803, SMB_statusCodeAt_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    // ,. 
    Send PSend24796 = new_Send((Optr)PSend24797, SMB__append_, 1, (Optr)PSend24802);
    Assign PAssign24795 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24796);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24805 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24804 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24805);
    Array PThreadedCode24792 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign24793, (Optr)&t_push_variable, (Optr)VAR_respCode_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24794, (Optr)&t_push_variable, (Optr)VAR_respProtocol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24795, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_push1, (Optr)string_24800, (Optr)&t_send1, (Optr)PSend24799, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24798, (Optr)&t_push1, (Optr)string_24801, (Optr)&t_send1, (Optr)PSend24797, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24803, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24802, (Optr)&t_send1, (Optr)PSend24796, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24804, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24805, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24790 = new_Method_with(PArray24791, empty_Array, empty_Array, PThreadedCode24792, 5, PAssign24793, PAssign24794, PAssign24795, PAssign24804, self);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24790, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_protocol_code_, MC_SMB_protocol_code_);
}


static void init_class_SMB_protocol_code_() {
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_protocol_0_0 = new_Variable_named(L"protocol", 0);
    Variable VAR_code_0_1 = new_Variable_named(L"code", 0);
    Array PArray24807 = new_Array_with(2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24809 = new_Send((Optr)self, SMB_new, 0);
    // protocol:code:. 
    Send PSend24810 = new_Send((Optr)PSend24809, SMB_protocol_code_, 2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Array PThreadedCode24808 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24809, (Optr)&t_push_variable, (Optr)VAR_protocol_0_0, (Optr)&t_push_variable, (Optr)VAR_code_0_1, (Optr)&t_send2, (Optr)PSend24810, (Optr)&t_method_return);
    Method PMethod24806 = new_Method_with(PArray24807, empty_Array, empty_Array, PThreadedCode24808, 1, PSend24810);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24806, HEADER(WebClient_Core_WebResponse_Class));
    store_method(HEADER(WebClient_Core_WebResponse_Class), SMB_protocol_code_, MC_SMB_protocol_code_);
}

void init_WebClient_Core_PWebResponse_layout() {
    layout_WebClient_Core_WebResponse_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_WebClient_Core_WebResponse_Class_class)->values[5] = slot_WebClient_Core_WebMessage_Class_class_statusCodes; // statusCodes 
    
    Symbol  SMB_WebResponse = new_Symbol(L"WebResponse");
    slot_WebClient_Core_WebResponse_request = (Optr)new_Slot(4, L"request");
    slot_WebClient_Core_WebResponse_status = (Optr)new_Slot(5, L"status");
    slot_WebClient_Core_WebResponse_code = (Optr)new_Slot(6, L"code");
    slot_WebClient_Core_WebResponse_url = (Optr)new_Slot(7, L"url");
    layout_WebClient_Core_WebResponse = (Optr)create_layout_with_vars(ObjectLayout_Class, 8);
    ((Array)layout_WebClient_Core_WebResponse)->values[0] = slot_WebClient_Core_WebMessage_stream; // stream 
    ((Array)layout_WebClient_Core_WebResponse)->values[1] = slot_WebClient_Core_WebMessage_protocol; // protocol 
    ((Array)layout_WebClient_Core_WebResponse)->values[2] = slot_WebClient_Core_WebMessage_headers; // headers 
    ((Array)layout_WebClient_Core_WebResponse)->values[3] = slot_WebClient_Core_WebMessage_content; // content 
    ((Array)layout_WebClient_Core_WebResponse)->values[4] = slot_WebClient_Core_WebResponse_request; // request 
    ((Array)layout_WebClient_Core_WebResponse)->values[5] = slot_WebClient_Core_WebResponse_status; // status 
    ((Array)layout_WebClient_Core_WebResponse)->values[6] = slot_WebClient_Core_WebResponse_code; // code 
    ((Array)layout_WebClient_Core_WebResponse)->values[7] = slot_WebClient_Core_WebResponse_url; // url 
    WebClient_Core_WebResponse_Class = (Class)new_Class(WebClient_Core_WebMessage_Class, layout_WebClient_Core_WebResponse_Class_class);
    WebClient_Core_WebResponse_Class->layout = layout_WebClient_Core_WebResponse;
    WebClient_Core_WebResponse_Class->name = SMB_WebResponse;
    
}

void init_WebClient_Core_PWebResponse_methods() {
    init_SMB_code();
    init_SMB_isSuccess();
    init_SMB_isRedirect();
    init_SMB_readFrom_();
    init_SMB_request_();
    init_SMB_writeOn_();
    init_SMB_writeStatusOn_();
    init_SMB_url();
    init_SMB_status_();
    init_SMB_isInformational();
    init_SMB_url_();
    init_SMB_content();
    init_SMB_getContent();
    init_SMB_status();
    init_SMB_request();
    init_SMB_protocol_code_();
    init_class_SMB_protocol_code_();
    
}