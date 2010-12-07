#include <lib/class/WebClient/Core/WebResponse.h>


Optr layout_WebClient_Core_WebResponse_Class_class;
Optr slot_WebClient_Core_WebResponse_request;
Optr slot_WebClient_Core_WebResponse_status;
Optr slot_WebClient_Core_WebResponse_code;
Optr slot_WebClient_Core_WebResponse_url;
Optr layout_WebClient_Core_WebResponse;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode24681 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_method_return);
    Method PMethod24680 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24681, 1, slot_WebClient_Core_WebResponse_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod24680, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_isSuccess() {
    Symbol SMB_isSuccess = new_Symbol(L"isSuccess");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24684 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_200 = new_SmallInt(200);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_200_Const = new_Constant((Optr)int_200);
    // >=. 
    Send PSend24685 = new_Send((Optr)PSend24684, SMB__gt__equals_, 1, (Optr)int_200_Const);
    // code. 
    Send PSend24688 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_299 = new_SmallInt(299);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_299_Const = new_Constant((Optr)int_299);
    // <=. 
    Send PSend24689 = new_Send((Optr)PSend24688, SMB__lt__equals_, 1, (Optr)int_299_Const);
    Array PThreadedCode24687 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24688, (Optr)&t_push1, (Optr)int_299, (Optr)&t_send1, (Optr)PSend24689, (Optr)&t_block_return);
    Block PBlock24686 = new_Block_with(empty_Array, empty_Array, PThreadedCode24687, 1, PSend24689);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24690 = new_Send((Optr)PSend24685, SMB_and_, 1, (Optr)PBlock24686);
    Array PThreadedCode24683 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24684, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend24685, (Optr)&t_push_closure, (Optr)PBlock24686, (Optr)&t_send1, (Optr)PSend24690, (Optr)&t_method_return);
    Method PMethod24682 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24683, 1, PSend24690);
    
    MethodClosure MC_SMB_isSuccess = new_MethodClosure((Method)PMethod24682, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isSuccess, MC_SMB_isSuccess);
}


static void init_SMB_isRedirect() {
    Symbol SMB_isRedirect = new_Symbol(L"isRedirect");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24693 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_300 = new_SmallInt(300);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_300_Const = new_Constant((Optr)int_300);
    // >=. 
    Send PSend24694 = new_Send((Optr)PSend24693, SMB__gt__equals_, 1, (Optr)int_300_Const);
    // code. 
    Send PSend24697 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_399 = new_SmallInt(399);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_399_Const = new_Constant((Optr)int_399);
    // <=. 
    Send PSend24698 = new_Send((Optr)PSend24697, SMB__lt__equals_, 1, (Optr)int_399_Const);
    Array PThreadedCode24696 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24697, (Optr)&t_push1, (Optr)int_399, (Optr)&t_send1, (Optr)PSend24698, (Optr)&t_block_return);
    Block PBlock24695 = new_Block_with(empty_Array, empty_Array, PThreadedCode24696, 1, PSend24698);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24699 = new_Send((Optr)PSend24694, SMB_and_, 1, (Optr)PBlock24695);
    Array PThreadedCode24692 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24693, (Optr)&t_push1, (Optr)int_300, (Optr)&t_send1, (Optr)PSend24694, (Optr)&t_push_closure, (Optr)PBlock24695, (Optr)&t_send1, (Optr)PSend24699, (Optr)&t_method_return);
    Method PMethod24691 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24692, 1, PSend24699);
    
    MethodClosure MC_SMB_isRedirect = new_MethodClosure((Method)PMethod24691, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isRedirect, MC_SMB_isRedirect);
}


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24701 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray24702 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24705 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign24707 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24710 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24709 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend24710);
    Assign PAssign24708 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24709);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_24713 = new_String(L" ");
    Constant string_24713_Const = new_Constant((Optr)string_24713);
    // findTokens:. 
    Send PSend24712 = new_Send((Optr)slot_WebClient_Core_WebResponse_status, SMB_findTokens_, 1, (Optr)string_24713_Const);
    Assign PAssign24711 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend24712);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24714 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend24715 = new_Send((Optr)PSend24714, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24719 = new_String(L"Invalid response: ");
    Constant string_24719_Const = new_Constant((Optr)string_24719);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24720 = new_Send((Optr)string_24719_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend24721 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend24720);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24722 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24721);
    Array PThreadedCode24718 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24719, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24720, (Optr)&t_send1, (Optr)PSend24721, (Optr)&t_send1, (Optr)PSend24722, (Optr)&t_block_return);
    Block PBlock24717 = new_Block_with(empty_Array, empty_Array, PThreadedCode24718, 1, PSend24722);
    // ifTrue:. 
    Send PSend24716 = new_Send((Optr)PSend24715, SMB_ifTrue_, 1, (Optr)PBlock24717);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24724 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign24723 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend24724);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend24727 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend24726 = new_Send((Optr)PSend24727, SMB_asInteger, 0);
    Assign PAssign24725 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)PSend24726);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24729 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign24728 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24729);
    Array PThreadedCode24706 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign24707, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24708, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24710, (Optr)&t_send1, (Optr)PSend24709, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24711, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_push1, (Optr)string_24713, (Optr)&t_send1, (Optr)PSend24712, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24714, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24715, (Optr)&t_send_ifTrue_, (Optr)PSend24716, (Optr)PBlock24717, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24723, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24724, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24725, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24727, (Optr)&t_send0, (Optr)PSend24726, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24728, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24729, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock24704 = new_Block_with(PArray24705, empty_Array, PThreadedCode24706, 8, PAssign24707, PAssign24708, PAssign24711, PSend24716, PAssign24723, PAssign24725, PAssign24728, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24730 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24704);
    Array PThreadedCode24703 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24704, (Optr)&t_send1, (Optr)PSend24730, (Optr)&t_method_return);
    Method PMethod24700 = new_Method_with(PArray24701, PArray24702, empty_Array, PThreadedCode24703, 1, PSend24730);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24700, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_request_() {
    Symbol SMB_request_ = new_Symbol(L"request:");
    Variable VAR_aRequest_0_0 = new_Variable_named(L"aRequest", 0);
    Array PArray24732 = new_Array_with(1, (Optr)VAR_aRequest_0_0);
    Assign PAssign24734 = new_Assign((Optr)slot_WebClient_Core_WebResponse_request, (Optr)VAR_aRequest_0_0);
    Array PThreadedCode24733 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24734, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24731 = new_Method_with(PArray24732, empty_Array, empty_Array, PThreadedCode24733, 2, PAssign24734, self);
    
    MethodClosure MC_SMB_request_ = new_MethodClosure((Method)PMethod24731, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_request_, MC_SMB_request_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24736 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    // writeStatusOn:. 
    Send PSend24738 = new_Send((Optr)self, SMB_writeStatusOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24739 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24737 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24738, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24739, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24735 = new_Method_with(PArray24736, empty_Array, empty_Array, PThreadedCode24737, 3, PSend24738, PSuper24739, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24735, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_writeStatusOn_() {
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24741 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24744 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24746 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24747 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24745 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24746, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24747, (Optr)&t_method_return);
    Block PBlock24743 = new_Block_with(PArray24744, empty_Array, PThreadedCode24745, 2, PSend24746, PSend24747);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24748 = new_Send((Optr)PBlock24743, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24742 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24743, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24748, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24740 = new_Method_with(PArray24741, empty_Array, empty_Array, PThreadedCode24742, 2, PSend24748, self);
    
    MethodClosure MC_SMB_writeStatusOn_ = new_MethodClosure((Method)PMethod24740, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeStatusOn_, MC_SMB_writeStatusOn_);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Array PThreadedCode24750 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_url, (Optr)&t_method_return);
    Method PMethod24749 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24750, 1, slot_WebClient_Core_WebResponse_url);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24749, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_status_() {
    Symbol SMB_status_ = new_Symbol(L"status:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24752 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24754 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)VAR_aString_0_0);
    Array PThreadedCode24753 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24754, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24751 = new_Method_with(PArray24752, empty_Array, empty_Array, PThreadedCode24753, 2, PAssign24754, self);
    
    MethodClosure MC_SMB_status_ = new_MethodClosure((Method)PMethod24751, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status_, MC_SMB_status_);
}


static void init_SMB_isInformational() {
    Symbol SMB_isInformational = new_Symbol(L"isInformational");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24757 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // >=. 
    Send PSend24758 = new_Send((Optr)PSend24757, SMB__gt__equals_, 1, (Optr)int_100_Const);
    // code. 
    Send PSend24761 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_199 = new_SmallInt(199);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_199_Const = new_Constant((Optr)int_199);
    // <=. 
    Send PSend24762 = new_Send((Optr)PSend24761, SMB__lt__equals_, 1, (Optr)int_199_Const);
    Array PThreadedCode24760 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24761, (Optr)&t_push1, (Optr)int_199, (Optr)&t_send1, (Optr)PSend24762, (Optr)&t_block_return);
    Block PBlock24759 = new_Block_with(empty_Array, empty_Array, PThreadedCode24760, 1, PSend24762);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24763 = new_Send((Optr)PSend24758, SMB_and_, 1, (Optr)PBlock24759);
    Array PThreadedCode24756 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24757, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend24758, (Optr)&t_push_closure, (Optr)PBlock24759, (Optr)&t_send1, (Optr)PSend24763, (Optr)&t_method_return);
    Method PMethod24755 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24756, 1, PSend24763);
    
    MethodClosure MC_SMB_isInformational = new_MethodClosure((Method)PMethod24755, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isInformational, MC_SMB_isInformational);
}


static void init_SMB_url_() {
    Symbol SMB_url_ = new_Symbol(L"url:");
    Variable VAR_urlString_0_0 = new_Variable_named(L"urlString", 0);
    Array PArray24765 = new_Array_with(1, (Optr)VAR_urlString_0_0);
    Assign PAssign24767 = new_Assign((Optr)slot_WebClient_Core_WebResponse_url, (Optr)VAR_urlString_0_0);
    Array PThreadedCode24766 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24767, (Optr)&t_push_variable, (Optr)VAR_urlString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24764 = new_Method_with(PArray24765, empty_Array, empty_Array, PThreadedCode24766, 2, PAssign24767, self);
    
    MethodClosure MC_SMB_url_ = new_MethodClosure((Method)PMethod24764, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url_, MC_SMB_url_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend24773 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign24772 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend24773);
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    // closeIfTransient. 
    Send PSend24774 = new_Send((Optr)self, SMB_closeIfTransient, 0);
    Array PThreadedCode24771 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign24772, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24773, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24774, (Optr)&t_block_return);
    Block PBlock24770 = new_Block_with(empty_Array, empty_Array, PThreadedCode24771, 2, PAssign24772, PSend24774);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24775 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock24770);
    Array PThreadedCode24769 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock24770, (Optr)&t_send1, (Optr)PSend24775, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_method_return);
    Method PMethod24768 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24769, 2, PSend24775, slot_WebClient_Core_WebMessage_content);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod24768, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24779 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24781 = new_Send((Optr)slot_WebClient_Core_WebResponse_request, SMB_method, 0);
    String string_24782 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24782_Const = new_Constant((Optr)string_24782);
    // =. 
    Send PSend24783 = new_Send((Optr)PSend24781, SMB__equals_, 1, (Optr)string_24782_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24787 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_24787_Const = new_Constant((Optr)string_24787);
    // escape:. 
    Send PSend24788 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_24787_Const);
    Array PThreadedCode24786 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_24787, (Optr)&t_send1, (Optr)PSend24788, (Optr)&t_block_return);
    Block PBlock24785 = new_Block_with(empty_Array, empty_Array, PThreadedCode24786, 1, PSend24788);
    // ifTrue:. 
    Send PSend24784 = new_Send((Optr)PSend24783, SMB_ifTrue_, 1, (Optr)PBlock24785);
    Super PSuper24789 = new_Super(SMB_getContent, 0);
    Array PThreadedCode24780 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_send0, (Optr)PSend24781, (Optr)&t_push1, (Optr)string_24782, (Optr)&t_send1, (Optr)PSend24783, (Optr)&t_send_ifTrue_, (Optr)PSend24784, (Optr)PBlock24785, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24789, (Optr)&t_method_return);
    Block PBlock24778 = new_Block_with(PArray24779, empty_Array, PThreadedCode24780, 2, PSend24784, PSuper24789);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24790 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24778);
    Array PThreadedCode24777 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24778, (Optr)&t_send1, (Optr)PSend24790, (Optr)&t_method_return);
    Method PMethod24776 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24777, 1, PSend24790);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod24776, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_status() {
    Symbol SMB_status = new_Symbol(L"status");
    Array PThreadedCode24792 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_method_return);
    Method PMethod24791 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24792, 1, slot_WebClient_Core_WebResponse_status);
    
    MethodClosure MC_SMB_status = new_MethodClosure((Method)PMethod24791, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status, MC_SMB_status);
}


static void init_SMB_request() {
    Symbol SMB_request = new_Symbol(L"request");
    Array PThreadedCode24794 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_method_return);
    Method PMethod24793 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24794, 1, slot_WebClient_Core_WebResponse_request);
    
    MethodClosure MC_SMB_request = new_MethodClosure((Method)PMethod24793, WebClient_Core_WebResponse_Class);
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
    Array PArray24796 = new_Array_with(2, (Optr)VAR_respProtocol_0_0, (Optr)VAR_respCode_0_1);
    Assign PAssign24798 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)VAR_respCode_0_1);
    Assign PAssign24799 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_respProtocol_0_0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24805 = new_String(L" ");
    Constant string_24805_Const = new_Constant((Optr)string_24805);
    // ,. 
    Send PSend24804 = new_Send((Optr)slot_WebClient_Core_WebMessage_protocol, SMB__append_, 1, (Optr)string_24805_Const);
    // ,. 
    Send PSend24803 = new_Send((Optr)PSend24804, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    String string_24806 = new_String(L" ");
    Constant string_24806_Const = new_Constant((Optr)string_24806);
    // ,. 
    Send PSend24802 = new_Send((Optr)PSend24803, SMB__append_, 1, (Optr)string_24806_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend24808 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    // statusCodeAt:. 
    Send PSend24807 = new_Send((Optr)PSend24808, SMB_statusCodeAt_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    // ,. 
    Send PSend24801 = new_Send((Optr)PSend24802, SMB__append_, 1, (Optr)PSend24807);
    Assign PAssign24800 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24801);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24810 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24809 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24810);
    Array PThreadedCode24797 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign24798, (Optr)&t_push_variable, (Optr)VAR_respCode_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24799, (Optr)&t_push_variable, (Optr)VAR_respProtocol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24800, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_push1, (Optr)string_24805, (Optr)&t_send1, (Optr)PSend24804, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24803, (Optr)&t_push1, (Optr)string_24806, (Optr)&t_send1, (Optr)PSend24802, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24808, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24807, (Optr)&t_send1, (Optr)PSend24801, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24809, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24810, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24795 = new_Method_with(PArray24796, empty_Array, empty_Array, PThreadedCode24797, 5, PAssign24798, PAssign24799, PAssign24800, PAssign24809, self);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24795, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_protocol_code_, MC_SMB_protocol_code_);
}


static void init_class_SMB_protocol_code_() {
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_protocol_0_0 = new_Variable_named(L"protocol", 0);
    Variable VAR_code_0_1 = new_Variable_named(L"code", 0);
    Array PArray24812 = new_Array_with(2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24814 = new_Send((Optr)self, SMB_new, 0);
    // protocol:code:. 
    Send PSend24815 = new_Send((Optr)PSend24814, SMB_protocol_code_, 2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Array PThreadedCode24813 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24814, (Optr)&t_push_variable, (Optr)VAR_protocol_0_0, (Optr)&t_push_variable, (Optr)VAR_code_0_1, (Optr)&t_send2, (Optr)PSend24815, (Optr)&t_method_return);
    Method PMethod24811 = new_Method_with(PArray24812, empty_Array, empty_Array, PThreadedCode24813, 1, PSend24815);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24811, HEADER(WebClient_Core_WebResponse_Class));
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