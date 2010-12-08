#include <lib/class/WebClient/Core/WebResponse.h>


Optr layout_WebClient_Core_WebResponse_Class_class;
Optr slot_WebClient_Core_WebResponse_request;
Optr slot_WebClient_Core_WebResponse_status;
Optr slot_WebClient_Core_WebResponse_code;
Optr slot_WebClient_Core_WebResponse_url;
Optr layout_WebClient_Core_WebResponse;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode24778 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_method_return);
    Method PMethod24777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24778, 1, slot_WebClient_Core_WebResponse_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod24777, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_isSuccess() {
    Symbol SMB_isSuccess = new_Symbol(L"isSuccess");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24781 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_200 = new_SmallInt(200);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_200_Const = new_Constant((Optr)int_200);
    // >=. 
    Send PSend24782 = new_Send((Optr)PSend24781, SMB__gt__equals_, 1, (Optr)int_200_Const);
    // code. 
    Send PSend24785 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_299 = new_SmallInt(299);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_299_Const = new_Constant((Optr)int_299);
    // <=. 
    Send PSend24786 = new_Send((Optr)PSend24785, SMB__lt__equals_, 1, (Optr)int_299_Const);
    Array PThreadedCode24784 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24785, (Optr)&t_push1, (Optr)int_299, (Optr)&t_send1, (Optr)PSend24786, (Optr)&t_block_return);
    Block PBlock24783 = new_Block_with(empty_Array, empty_Array, PThreadedCode24784, 1, PSend24786);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24787 = new_Send((Optr)PSend24782, SMB_and_, 1, (Optr)PBlock24783);
    Array PThreadedCode24780 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24781, (Optr)&t_push1, (Optr)int_200, (Optr)&t_send1, (Optr)PSend24782, (Optr)&t_push_closure, (Optr)PBlock24783, (Optr)&t_send1, (Optr)PSend24787, (Optr)&t_method_return);
    Method PMethod24779 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24780, 1, PSend24787);
    
    MethodClosure MC_SMB_isSuccess = new_MethodClosure((Method)PMethod24779, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isSuccess, MC_SMB_isSuccess);
}


static void init_SMB_isRedirect() {
    Symbol SMB_isRedirect = new_Symbol(L"isRedirect");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24790 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_300 = new_SmallInt(300);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_300_Const = new_Constant((Optr)int_300);
    // >=. 
    Send PSend24791 = new_Send((Optr)PSend24790, SMB__gt__equals_, 1, (Optr)int_300_Const);
    // code. 
    Send PSend24794 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_399 = new_SmallInt(399);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_399_Const = new_Constant((Optr)int_399);
    // <=. 
    Send PSend24795 = new_Send((Optr)PSend24794, SMB__lt__equals_, 1, (Optr)int_399_Const);
    Array PThreadedCode24793 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24794, (Optr)&t_push1, (Optr)int_399, (Optr)&t_send1, (Optr)PSend24795, (Optr)&t_block_return);
    Block PBlock24792 = new_Block_with(empty_Array, empty_Array, PThreadedCode24793, 1, PSend24795);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24796 = new_Send((Optr)PSend24791, SMB_and_, 1, (Optr)PBlock24792);
    Array PThreadedCode24789 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24790, (Optr)&t_push1, (Optr)int_300, (Optr)&t_send1, (Optr)PSend24791, (Optr)&t_push_closure, (Optr)PBlock24792, (Optr)&t_send1, (Optr)PSend24796, (Optr)&t_method_return);
    Method PMethod24788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24789, 1, PSend24796);
    
    MethodClosure MC_SMB_isRedirect = new_MethodClosure((Method)PMethod24788, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isRedirect, MC_SMB_isRedirect);
}


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24798 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Array PArray24799 = new_Array_with(1, (Optr)VAR_tokens_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24802 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign24804 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24807 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24806 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_upToAll_, 1, (Optr)PSend24807);
    Assign PAssign24805 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24806);
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    String string_24810 = new_String(L" ");
    Constant string_24810_Const = new_Constant((Optr)string_24810);
    // findTokens:. 
    Send PSend24809 = new_Send((Optr)slot_WebClient_Core_WebResponse_status, SMB_findTokens_, 1, (Optr)string_24810_Const);
    Assign PAssign24808 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend24809);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24811 = new_Send((Optr)VAR_tokens_0_1, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend24812 = new_Send((Optr)PSend24811, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24816 = new_String(L"Invalid response: ");
    Constant string_24816_Const = new_Constant((Optr)string_24816);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24817 = new_Send((Optr)string_24816_Const, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend24818 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend24817);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend24819 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend24818);
    Array PThreadedCode24815 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24816, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24817, (Optr)&t_send1, (Optr)PSend24818, (Optr)&t_send1, (Optr)PSend24819, (Optr)&t_block_return);
    Block PBlock24814 = new_Block_with(empty_Array, empty_Array, PThreadedCode24815, 1, PSend24819);
    // ifTrue:. 
    Send PSend24813 = new_Send((Optr)PSend24812, SMB_ifTrue_, 1, (Optr)PBlock24814);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24821 = new_Send((Optr)VAR_tokens_0_1, SMB_first, 0);
    Assign PAssign24820 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)PSend24821);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend24824 = new_Send((Optr)VAR_tokens_0_1, SMB_second, 0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend24823 = new_Send((Optr)PSend24824, SMB_asInteger, 0);
    Assign PAssign24822 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)PSend24823);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24826 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)slot_WebClient_Core_WebMessage_stream);
    Assign PAssign24825 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24826);
    Array PThreadedCode24803 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign24804, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24805, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24807, (Optr)&t_send1, (Optr)PSend24806, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24808, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_push1, (Optr)string_24810, (Optr)&t_send1, (Optr)PSend24809, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24811, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24812, (Optr)&t_send_ifTrue_, (Optr)PSend24813, (Optr)PBlock24814, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24820, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24821, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24822, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_send0, (Optr)PSend24824, (Optr)&t_send0, (Optr)PSend24823, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24825, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send1, (Optr)PSend24826, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock24801 = new_Block_with(PArray24802, empty_Array, PThreadedCode24803, 8, PAssign24804, PAssign24805, PAssign24808, PSend24813, PAssign24820, PAssign24822, PAssign24825, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24827 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24801);
    Array PThreadedCode24800 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24801, (Optr)&t_send1, (Optr)PSend24827, (Optr)&t_method_return);
    Method PMethod24797 = new_Method_with(PArray24798, PArray24799, empty_Array, PThreadedCode24800, 1, PSend24827);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod24797, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_request_() {
    Symbol SMB_request_ = new_Symbol(L"request:");
    Variable VAR_aRequest_0_0 = new_Variable_named(L"aRequest", 0);
    Array PArray24829 = new_Array_with(1, (Optr)VAR_aRequest_0_0);
    Assign PAssign24831 = new_Assign((Optr)slot_WebClient_Core_WebResponse_request, (Optr)VAR_aRequest_0_0);
    Array PThreadedCode24830 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24831, (Optr)&t_push_variable, (Optr)VAR_aRequest_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24828 = new_Method_with(PArray24829, empty_Array, empty_Array, PThreadedCode24830, 2, PAssign24831, self);
    
    MethodClosure MC_SMB_request_ = new_MethodClosure((Method)PMethod24828, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_request_, MC_SMB_request_);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24833 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    // writeStatusOn:. 
    Send PSend24835 = new_Send((Optr)self, SMB_writeStatusOn_, 1, (Optr)VAR_aStream_0_0);
    Super PSuper24836 = new_Super(SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24834 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24835, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper24836, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24832 = new_Method_with(PArray24833, empty_Array, empty_Array, PThreadedCode24834, 3, PSend24835, PSuper24836, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod24832, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_writeStatusOn_() {
    Symbol SMB_writeStatusOn_ = new_Symbol(L"writeStatusOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24838 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray24841 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend24843 = new_Send((Optr)VAR__receiver__1_0, SMB_nextPutAll_, 1, (Optr)slot_WebClient_Core_WebResponse_status);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24844 = new_Send((Optr)VAR__receiver__1_0, SMB_crlf, 0);
    Array PThreadedCode24842 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_send1, (Optr)PSend24843, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend24844, (Optr)&t_method_return);
    Block PBlock24840 = new_Block_with(PArray24841, empty_Array, PThreadedCode24842, 2, PSend24843, PSend24844);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24845 = new_Send((Optr)PBlock24840, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode24839 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock24840, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24845, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24837 = new_Method_with(PArray24838, empty_Array, empty_Array, PThreadedCode24839, 2, PSend24845, self);
    
    MethodClosure MC_SMB_writeStatusOn_ = new_MethodClosure((Method)PMethod24837, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_writeStatusOn_, MC_SMB_writeStatusOn_);
}


static void init_SMB_url() {
    Symbol SMB_url = new_Symbol(L"url");
    Array PThreadedCode24847 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_url, (Optr)&t_method_return);
    Method PMethod24846 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24847, 1, slot_WebClient_Core_WebResponse_url);
    
    MethodClosure MC_SMB_url = new_MethodClosure((Method)PMethod24846, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url, MC_SMB_url);
}


static void init_SMB_status_() {
    Symbol SMB_status_ = new_Symbol(L"status:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray24849 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign24851 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)VAR_aString_0_0);
    Array PThreadedCode24850 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24851, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24848 = new_Method_with(PArray24849, empty_Array, empty_Array, PThreadedCode24850, 2, PAssign24851, self);
    
    MethodClosure MC_SMB_status_ = new_MethodClosure((Method)PMethod24848, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status_, MC_SMB_status_);
}


static void init_SMB_isInformational() {
    Symbol SMB_isInformational = new_Symbol(L"isInformational");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend24854 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_100 = new_SmallInt(100);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_100_Const = new_Constant((Optr)int_100);
    // >=. 
    Send PSend24855 = new_Send((Optr)PSend24854, SMB__gt__equals_, 1, (Optr)int_100_Const);
    // code. 
    Send PSend24858 = new_Send((Optr)self, SMB_code, 0);
    SmallInt int_199 = new_SmallInt(199);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Constant int_199_Const = new_Constant((Optr)int_199);
    // <=. 
    Send PSend24859 = new_Send((Optr)PSend24858, SMB__lt__equals_, 1, (Optr)int_199_Const);
    Array PThreadedCode24857 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24858, (Optr)&t_push1, (Optr)int_199, (Optr)&t_send1, (Optr)PSend24859, (Optr)&t_block_return);
    Block PBlock24856 = new_Block_with(empty_Array, empty_Array, PThreadedCode24857, 1, PSend24859);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend24860 = new_Send((Optr)PSend24855, SMB_and_, 1, (Optr)PBlock24856);
    Array PThreadedCode24853 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24854, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend24855, (Optr)&t_push_closure, (Optr)PBlock24856, (Optr)&t_send1, (Optr)PSend24860, (Optr)&t_method_return);
    Method PMethod24852 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24853, 1, PSend24860);
    
    MethodClosure MC_SMB_isInformational = new_MethodClosure((Method)PMethod24852, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_isInformational, MC_SMB_isInformational);
}


static void init_SMB_url_() {
    Symbol SMB_url_ = new_Symbol(L"url:");
    Variable VAR_urlString_0_0 = new_Variable_named(L"urlString", 0);
    Array PArray24862 = new_Array_with(1, (Optr)VAR_urlString_0_0);
    Assign PAssign24864 = new_Assign((Optr)slot_WebClient_Core_WebResponse_url, (Optr)VAR_urlString_0_0);
    Array PThreadedCode24863 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24864, (Optr)&t_push_variable, (Optr)VAR_urlString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24861 = new_Method_with(PArray24862, empty_Array, empty_Array, PThreadedCode24863, 2, PAssign24864, self);
    
    MethodClosure MC_SMB_url_ = new_MethodClosure((Method)PMethod24861, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_url_, MC_SMB_url_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend24870 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign24869 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend24870);
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    // closeIfTransient. 
    Send PSend24871 = new_Send((Optr)self, SMB_closeIfTransient, 0);
    Array PThreadedCode24868 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign24869, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24870, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24871, (Optr)&t_block_return);
    Block PBlock24867 = new_Block_with(empty_Array, empty_Array, PThreadedCode24868, 2, PAssign24869, PSend24871);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend24872 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock24867);
    Array PThreadedCode24866 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock24867, (Optr)&t_send1, (Optr)PSend24872, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_method_return);
    Method PMethod24865 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24866, 2, PSend24872, slot_WebClient_Core_WebMessage_content);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod24865, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray24876 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend24878 = new_Send((Optr)slot_WebClient_Core_WebResponse_request, SMB_method, 0);
    String string_24879 = new_String(L"HEAD");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24879_Const = new_Constant((Optr)string_24879);
    // =. 
    Send PSend24880 = new_Send((Optr)PSend24878, SMB__equals_, 1, (Optr)string_24879_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_24884 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_24884_Const = new_Constant((Optr)string_24884);
    // escape:. 
    Send PSend24885 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_24884_Const);
    Array PThreadedCode24883 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_24884, (Optr)&t_send1, (Optr)PSend24885, (Optr)&t_block_return);
    Block PBlock24882 = new_Block_with(empty_Array, empty_Array, PThreadedCode24883, 1, PSend24885);
    // ifTrue:. 
    Send PSend24881 = new_Send((Optr)PSend24880, SMB_ifTrue_, 1, (Optr)PBlock24882);
    Super PSuper24886 = new_Super(SMB_getContent, 0);
    Array PThreadedCode24877 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_send0, (Optr)PSend24878, (Optr)&t_push1, (Optr)string_24879, (Optr)&t_send1, (Optr)PSend24880, (Optr)&t_send_ifTrue_, (Optr)PSend24881, (Optr)PBlock24882, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24886, (Optr)&t_method_return);
    Block PBlock24875 = new_Block_with(PArray24876, empty_Array, PThreadedCode24877, 2, PSend24881, PSuper24886);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend24887 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock24875);
    Array PThreadedCode24874 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock24875, (Optr)&t_send1, (Optr)PSend24887, (Optr)&t_method_return);
    Method PMethod24873 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24874, 1, PSend24887);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod24873, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_status() {
    Symbol SMB_status = new_Symbol(L"status");
    Array PThreadedCode24889 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_status, (Optr)&t_method_return);
    Method PMethod24888 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24889, 1, slot_WebClient_Core_WebResponse_status);
    
    MethodClosure MC_SMB_status = new_MethodClosure((Method)PMethod24888, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_status, MC_SMB_status);
}


static void init_SMB_request() {
    Symbol SMB_request = new_Symbol(L"request");
    Array PThreadedCode24891 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_request, (Optr)&t_method_return);
    Method PMethod24890 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24891, 1, slot_WebClient_Core_WebResponse_request);
    
    MethodClosure MC_SMB_request = new_MethodClosure((Method)PMethod24890, WebClient_Core_WebResponse_Class);
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
    Array PArray24893 = new_Array_with(2, (Optr)VAR_respProtocol_0_0, (Optr)VAR_respCode_0_1);
    Assign PAssign24895 = new_Assign((Optr)slot_WebClient_Core_WebResponse_code, (Optr)VAR_respCode_0_1);
    Assign PAssign24896 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_respProtocol_0_0);
    Symbol SMB__append_ = new_Symbol(L",");
    String string_24902 = new_String(L" ");
    Constant string_24902_Const = new_Constant((Optr)string_24902);
    // ,. 
    Send PSend24901 = new_Send((Optr)slot_WebClient_Core_WebMessage_protocol, SMB__append_, 1, (Optr)string_24902_Const);
    // ,. 
    Send PSend24900 = new_Send((Optr)PSend24901, SMB__append_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    String string_24903 = new_String(L" ");
    Constant string_24903_Const = new_Constant((Optr)string_24903);
    // ,. 
    Send PSend24899 = new_Send((Optr)PSend24900, SMB__append_, 1, (Optr)string_24903_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend24905 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    // statusCodeAt:. 
    Send PSend24904 = new_Send((Optr)PSend24905, SMB_statusCodeAt_, 1, (Optr)slot_WebClient_Core_WebResponse_code);
    // ,. 
    Send PSend24898 = new_Send((Optr)PSend24899, SMB__append_, 1, (Optr)PSend24904);
    Assign PAssign24897 = new_Assign((Optr)slot_WebClient_Core_WebResponse_status, (Optr)PSend24898);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24907 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24906 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend24907);
    Array PThreadedCode24894 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign24895, (Optr)&t_push_variable, (Optr)VAR_respCode_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24896, (Optr)&t_push_variable, (Optr)VAR_respProtocol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24897, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_push1, (Optr)string_24902, (Optr)&t_send1, (Optr)PSend24901, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24900, (Optr)&t_push1, (Optr)string_24903, (Optr)&t_send1, (Optr)PSend24899, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24905, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebResponse_code, (Optr)&t_send1, (Optr)PSend24904, (Optr)&t_send1, (Optr)PSend24898, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24906, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24907, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24892 = new_Method_with(PArray24893, empty_Array, empty_Array, PThreadedCode24894, 5, PAssign24895, PAssign24896, PAssign24897, PAssign24906, self);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24892, WebClient_Core_WebResponse_Class);
    store_method(WebClient_Core_WebResponse_Class, SMB_protocol_code_, MC_SMB_protocol_code_);
}


static void init_class_SMB_protocol_code_() {
    Symbol SMB_protocol_code_ = new_Symbol(L"protocol:code:");
    Variable VAR_protocol_0_0 = new_Variable_named(L"protocol", 0);
    Variable VAR_code_0_1 = new_Variable_named(L"code", 0);
    Array PArray24909 = new_Array_with(2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24911 = new_Send((Optr)self, SMB_new, 0);
    // protocol:code:. 
    Send PSend24912 = new_Send((Optr)PSend24911, SMB_protocol_code_, 2, (Optr)VAR_protocol_0_0, (Optr)VAR_code_0_1);
    Array PThreadedCode24910 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24911, (Optr)&t_push_variable, (Optr)VAR_protocol_0_0, (Optr)&t_push_variable, (Optr)VAR_code_0_1, (Optr)&t_send2, (Optr)PSend24912, (Optr)&t_method_return);
    Method PMethod24908 = new_Method_with(PArray24909, empty_Array, empty_Array, PThreadedCode24910, 1, PSend24912);
    
    MethodClosure MC_SMB_protocol_code_ = new_MethodClosure((Method)PMethod24908, HEADER(WebClient_Core_WebResponse_Class));
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