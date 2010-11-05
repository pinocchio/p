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
    String string_22757 = new_String(L"Content-Type");
    String string_22760 = new_String(L"application/octet-stream");
    Array PThreadedCode22759 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22760, (Optr)&t_block_return);
    Constant string_22760_Const = new_Constant((Optr)string_22760);
    Block PBlock22758 = new_Block_with(empty_Array, empty_Array, PThreadedCode22759, 1, string_22760_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_22757_Const = new_Constant((Optr)string_22757);
    // headerAt:ifAbsent:. 
    Send PSend22761 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_22757_Const, (Optr)PBlock22758);
    Array PThreadedCode22756 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22757, (Optr)&t_push_closure, (Optr)PBlock22758, (Optr)&t_send2, (Optr)PSend22761, (Optr)&t_method_return);
    Method PMethod22755 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22756, 1, PSend22761);
    
    MethodClosure MC_SMB_contentType = new_MethodClosure((Method)PMethod22755, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType, MC_SMB_contentType);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22766 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_close, 0);
    Array PThreadedCode22765 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22766, (Optr)&t_block_return);
    Block PBlock22764 = new_Block_with(empty_Array, empty_Array, PThreadedCode22765, 1, PSend22766);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22767 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock22764);
    Array PThreadedCode22763 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock22764, (Optr)&t_send1, (Optr)PSend22767, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22763, 2, PSend22767, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22762, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_contentStream() {
    Symbol SMB_contentStream = new_Symbol(L"contentStream");
    Array PThreadedCode22769 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod22768 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22769, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_contentStream = new_MethodClosure((Method)PMethod22768, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentStream, MC_SMB_contentStream);
}


static void init_SMB_remoteHost() {
    Symbol SMB_remoteHost = new_Symbol(L"remoteHost");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22773 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend22775 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isKindOf_, 1, (Optr)PSocketStream_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22779 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22778 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22779, (Optr)&t_block_return);
    Block PBlock22777 = new_Block_with(empty_Array, empty_Array, PThreadedCode22778, 1, PSend22779);
    // ifFalse:. 
    Send PSend22776 = new_Send((Optr)PSend22775, SMB_ifFalse_, 1, (Optr)PBlock22777);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22780 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22781 = new_Send((Optr)PSend22780, SMB_remoteAddress, 0);
    Array PThreadedCode22774 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_send1, (Optr)PSend22775, (Optr)&t_send_ifFalse_, (Optr)PSend22776, (Optr)PBlock22777, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22780, (Optr)&t_send0, (Optr)PSend22781, (Optr)&t_method_return);
    Block PBlock22772 = new_Block_with(PArray22773, empty_Array, PThreadedCode22774, 2, PSend22776, PSend22781);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22782 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22772);
    Array PThreadedCode22771 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22772, (Optr)&t_send1, (Optr)PSend22782, (Optr)&t_method_return);
    Method PMethod22770 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22771, 1, PSend22782);
    
    MethodClosure MC_SMB_remoteHost = new_MethodClosure((Method)PMethod22770, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_remoteHost, MC_SMB_remoteHost);
}


static void init_SMB_stream_() {
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22784 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22786 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22785 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22786, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22783 = new_Method_with(PArray22784, empty_Array, empty_Array, PThreadedCode22785, 2, PAssign22786, self);
    
    MethodClosure MC_SMB_stream_ = new_MethodClosure((Method)PMethod22783, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream_, MC_SMB_stream_);
}


static void init_SMB_headersAt_ifAbsent_() {
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray22788 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_hdrs_0_2 = new_Variable_named(L"hdrs", 0);
    Array PArray22789 = new_Array_with(1, (Optr)VAR_hdrs_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22792 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign22791 = new_Assign((Optr)VAR_hdrs_0_2, (Optr)PSend22792);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray22794 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22796 = new_Send((Optr)VAR_hdrs_0_2, SMB_add_, 1, (Optr)VAR_value_1_0);
    Array PThreadedCode22795 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send1, (Optr)PSend22796, (Optr)&t_method_return);
    Block PBlock22793 = new_Block_with(PArray22794, empty_Array, PThreadedCode22795, 1, PSend22796);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend22797 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22793);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22798 = new_Send((Optr)VAR_hdrs_0_2, SMB_asArray, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend22801 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode22800 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend22801, (Optr)&t_block_return);
    Block PBlock22799 = new_Block_with(empty_Array, empty_Array, PThreadedCode22800, 1, PSend22801);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    // ifEmpty:. 
    Send PSend22802 = new_Send((Optr)PSend22798, SMB_ifEmpty_, 1, (Optr)PBlock22799);
    Array PThreadedCode22790 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign22791, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22792, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22793, (Optr)&t_send2, (Optr)PSend22797, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_send0, (Optr)PSend22798, (Optr)&t_push_closure, (Optr)PBlock22799, (Optr)&t_send1, (Optr)PSend22802, (Optr)&t_method_return);
    Method PMethod22787 = new_Method_with(PArray22788, PArray22789, empty_Array, PThreadedCode22790, 3, PAssign22791, PSend22797, PSend22802);
    
    MethodClosure MC_SMB_headersAt_ifAbsent_ = new_MethodClosure((Method)PMethod22787, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_ifAbsent_, MC_SMB_headersAt_ifAbsent_);
}


static void init_SMB_headerAt_() {
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22804 = new_Array_with(1, (Optr)VAR_key_0_0);
    String string_22808 = new_String(L"");
    Array PThreadedCode22807 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22808, (Optr)&t_block_return);
    Constant string_22808_Const = new_Constant((Optr)string_22808);
    Block PBlock22806 = new_Block_with(empty_Array, empty_Array, PThreadedCode22807, 1, string_22808_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    // headerAt:ifAbsent:. 
    Send PSend22809 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22806);
    Array PThreadedCode22805 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22806, (Optr)&t_send2, (Optr)PSend22809, (Optr)&t_method_return);
    Method PMethod22803 = new_Method_with(PArray22804, empty_Array, empty_Array, PThreadedCode22805, 1, PSend22809);
    
    MethodClosure MC_SMB_headerAt_ = new_MethodClosure((Method)PMethod22803, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_, MC_SMB_headerAt_);
}


static void init_SMB_chunkFrom_to_progress_() {
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_progressBlock_0_2 = new_Variable_named(L"progressBlock", 0);
    Array PArray22811 = new_Array_with(3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_2);
    Variable VAR_chunkSize_0_3 = new_Variable_named(L"chunkSize", 0);
    Variable VAR_firstLine_0_4 = new_Variable_named(L"firstLine", 0);
    Variable VAR_buffer_0_5 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_6 = new_Variable_named(L"totalRead", 0);
    Array PArray22812 = new_Array_with(4, (Optr)VAR_chunkSize_0_3, (Optr)VAR_firstLine_0_4, (Optr)VAR_buffer_0_5, (Optr)VAR_totalRead_0_6);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign22814 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22816 = new_Send((Optr)String_classReference, SMB_new, 0);
    Assign PAssign22815 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend22816);
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    // nextLine. 
    Send PSend22820 = new_Send((Optr)VAR_srcStream_0_0, SMB_nextLine, 0);
    Assign PAssign22819 = new_Assign((Optr)VAR_firstLine_0_4, (Optr)PSend22820);
    String string_22824 = new_String(L"16r");
    Constant string_22824_Const = new_Constant((Optr)string_22824);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend22825 = new_Send((Optr)VAR_firstLine_0_4, SMB_asUppercase, 0);
    // ,. 
    Send PSend22823 = new_Send((Optr)string_22824_Const, SMB__append_, 1, (Optr)PSend22825);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend22822 = new_Send((Optr)PSend22823, SMB_asNumber, 0);
    Assign PAssign22821 = new_Assign((Optr)VAR_chunkSize_0_3, (Optr)PSend22822);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22826 = new_Send((Optr)VAR_chunkSize_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode22818 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign22819, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_send0, (Optr)PSend22820, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22821, (Optr)&t_push1, (Optr)string_22824, (Optr)&t_push_variable, (Optr)VAR_firstLine_0_4, (Optr)&t_send0, (Optr)PSend22825, (Optr)&t_send1, (Optr)PSend22823, (Optr)&t_send0, (Optr)PSend22822, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22826, (Optr)&t_block_return);
    Block PBlock22817 = new_Block_with(empty_Array, empty_Array, PThreadedCode22818, 3, PAssign22819, PAssign22821, PSend22826);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend22831 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode22830 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend22831, (Optr)&t_block_return);
    Block PBlock22829 = new_Block_with(empty_Array, empty_Array, PThreadedCode22830, 1, PSend22831);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22832 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock22829);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22833 = new_Send((Optr)VAR_buffer_0_5, SMB_size, 0);
    // =. 
    Send PSend22834 = new_Send((Optr)PSend22833, SMB__equals_, 1, (Optr)VAR_chunkSize_0_3);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22840 = new_Send((Optr)VAR_buffer_0_5, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend22839 = new_Send((Optr)PSend22840, SMB_new_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign22838 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend22839);
    Array PThreadedCode22837 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22838, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend22840, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend22839, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22836 = new_Block_with(empty_Array, empty_Array, PThreadedCode22837, 1, PAssign22838);
    // ifFalse:. 
    Send PSend22835 = new_Send((Optr)PSend22834, SMB_ifFalse_, 1, (Optr)PBlock22836);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend22842 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_chunkSize_0_3, (Optr)VAR_buffer_0_5, (Optr)int_1_Const);
    Assign PAssign22841 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend22842);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22843 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)VAR_buffer_0_5);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skip:. 
    Send PSend22844 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend22846 = new_Send((Optr)VAR_totalRead_0_6, SMB__plus_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign22845 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)PSend22846);
    Array PThreadedCode22828 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock22829, (Optr)&t_send1, (Optr)PSend22832, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend22833, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend22834, (Optr)&t_send_ifFalse_, (Optr)PSend22835, (Optr)PBlock22836, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22841, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend22842, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send1, (Optr)PSend22843, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22844, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22845, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend22846, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22827 = new_Block_with(empty_Array, empty_Array, PThreadedCode22828, 6, PSend22832, PSend22835, PAssign22841, PSend22843, PSend22844, PAssign22845);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend22847 = new_Send((Optr)PBlock22817, SMB_whileFalse_, 1, (Optr)PBlock22827);
    // skip:. 
    Send PSend22848 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22849 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend22852 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode22851 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend22852, (Optr)&t_block_return);
    Block PBlock22850 = new_Block_with(empty_Array, empty_Array, PThreadedCode22851, 1, PSend22852);
    // ifNotNil:. 
    Send PSend22853 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock22850);
    Array PThreadedCode22813 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign22814, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22815, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22816, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22817, (Optr)&t_push_closure, (Optr)PBlock22827, (Optr)&t_send1, (Optr)PSend22847, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22848, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend22849, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock22850, (Optr)&t_send1, (Optr)PSend22853, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22810 = new_Method_with(PArray22811, PArray22812, empty_Array, PThreadedCode22813, 7, PAssign22814, PAssign22815, PSend22847, PSend22848, PSend22849, PSend22853, self);
    
    MethodClosure MC_SMB_chunkFrom_to_progress_ = new_MethodClosure((Method)PMethod22810, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_chunkFrom_to_progress_, MC_SMB_chunkFrom_to_progress_);
}


static void init_SMB_headersAt_do_() {
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray22855 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray22858 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22860 = new_Send((Optr)VAR_aKey_0_0, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend22861 = new_Send((Optr)VAR_key_1_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22862 = new_Send((Optr)PSend22860, SMB__equals_, 1, (Optr)PSend22861);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22866 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_value_1_1);
    Array PThreadedCode22865 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend22866, (Optr)&t_block_return);
    Block PBlock22864 = new_Block_with(empty_Array, empty_Array, PThreadedCode22865, 1, PSend22866);
    // ifTrue:. 
    Send PSend22863 = new_Send((Optr)PSend22862, SMB_ifTrue_, 1, (Optr)PBlock22864);
    Array PThreadedCode22859 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send0, (Optr)PSend22860, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send0, (Optr)PSend22861, (Optr)&t_send1, (Optr)PSend22862, (Optr)&t_send_ifTrue_, (Optr)PSend22863, (Optr)PBlock22864, (Optr)&t_method_return);
    Block PBlock22857 = new_Block_with(PArray22858, empty_Array, PThreadedCode22859, 1, PSend22863);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend22867 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock22857);
    Array PThreadedCode22856 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22857, (Optr)&t_send1, (Optr)PSend22867, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22854 = new_Method_with(PArray22855, empty_Array, empty_Array, PThreadedCode22856, 2, PSend22867, self);
    
    MethodClosure MC_SMB_headersAt_do_ = new_MethodClosure((Method)PMethod22854, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_do_, MC_SMB_headersAt_do_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22869 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22871 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22872 = new_Send((Optr)PSend22871, SMB_name, 0);
    // printOn:. 
    Send PSend22873 = new_Send((Optr)PSend22872, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend22874 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend22875 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend22876 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode22870 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22871, (Optr)&t_send0, (Optr)PSend22872, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22873, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend22874, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22875, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend22876, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22868 = new_Method_with(PArray22869, empty_Array, empty_Array, PThreadedCode22870, 5, PSend22873, PSend22874, PSend22875, PSend22876, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22868, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_contentLength() {
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22880 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_22882 = new_String(L"Content-Length");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22885 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22884 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22885, (Optr)&t_block_return);
    Block PBlock22883 = new_Block_with(empty_Array, empty_Array, PThreadedCode22884, 1, PSend22885);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_22882_Const = new_Constant((Optr)string_22882);
    // headerAt:ifAbsent:. 
    Send PSend22886 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_22882_Const, (Optr)PBlock22883);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend22887 = new_Send((Optr)PSend22886, SMB_asInteger, 0);
    Array PThreadedCode22881 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22882, (Optr)&t_push_closure, (Optr)PBlock22883, (Optr)&t_send2, (Optr)PSend22886, (Optr)&t_send0, (Optr)PSend22887, (Optr)&t_method_return);
    Block PBlock22879 = new_Block_with(PArray22880, empty_Array, PThreadedCode22881, 1, PSend22887);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22888 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22879);
    Array PThreadedCode22878 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22879, (Optr)&t_send1, (Optr)PSend22888, (Optr)&t_method_return);
    Method PMethod22877 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22878, 1, PSend22888);
    
    MethodClosure MC_SMB_contentLength = new_MethodClosure((Method)PMethod22877, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength, MC_SMB_contentLength);
}


static void init_SMB_headersAt_() {
    Symbol SMB_headersAt_ = new_Symbol(L"headersAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22890 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22894 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22895 = new_Send((Optr)PSend22894, SMB_asArray, 0);
    Array PThreadedCode22893 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22894, (Optr)&t_send0, (Optr)PSend22895, (Optr)&t_block_return);
    Block PBlock22892 = new_Block_with(empty_Array, empty_Array, PThreadedCode22893, 1, PSend22895);
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    // headersAt:ifAbsent:. 
    Send PSend22896 = new_Send((Optr)self, SMB_headersAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22892);
    Array PThreadedCode22891 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22892, (Optr)&t_send2, (Optr)PSend22896, (Optr)&t_method_return);
    Method PMethod22889 = new_Method_with(PArray22890, empty_Array, empty_Array, PThreadedCode22891, 1, PSend22896);
    
    MethodClosure MC_SMB_headersAt_ = new_MethodClosure((Method)PMethod22889, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_, MC_SMB_headersAt_);
}


static void init_SMB_protocol_() {
    Symbol SMB_protocol_ = new_Symbol(L"protocol:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22898 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22900 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_aString_0_0);
    Array PThreadedCode22899 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22900, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22897 = new_Method_with(PArray22898, empty_Array, empty_Array, PThreadedCode22899, 2, PAssign22900, self);
    
    MethodClosure MC_SMB_protocol_ = new_MethodClosure((Method)PMethod22897, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol_, MC_SMB_protocol_);
}


static void init_SMB_contentLength_() {
    Symbol SMB_contentLength_ = new_Symbol(L"contentLength:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray22902 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    String string_22904 = new_String(L"Content-Length");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_22904_Const = new_Constant((Optr)string_22904);
    // headerAt:put:. 
    Send PSend22905 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_22904_Const, (Optr)VAR_aNumber_0_0);
    Array PThreadedCode22903 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22904, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send2, (Optr)PSend22905, (Optr)&t_method_return);
    Method PMethod22901 = new_Method_with(PArray22902, empty_Array, empty_Array, PThreadedCode22903, 1, PSend22905);
    
    MethodClosure MC_SMB_contentLength_ = new_MethodClosure((Method)PMethod22901, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength_, MC_SMB_contentLength_);
}


static void init_SMB_streamFrom_to_size_progress_() {
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_sizeOrNil_0_2 = new_Variable_named(L"sizeOrNil", 0);
    Variable VAR_progressBlock_0_3 = new_Variable_named(L"progressBlock", 0);
    Array PArray22907 = new_Array_with(4, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_progressBlock_0_3);
    Variable VAR_buffer_0_4 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_5 = new_Variable_named(L"totalRead", 0);
    Variable VAR_remaining_0_6 = new_Variable_named(L"remaining", 0);
    Variable VAR_size_0_7 = new_Variable_named(L"size", 0);
    Array PArray22908 = new_Array_with(4, (Optr)VAR_buffer_0_4, (Optr)VAR_totalRead_0_5, (Optr)VAR_remaining_0_6, (Optr)VAR_size_0_7);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22911 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_22913 = new_String(L"transfer-encoding");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_22913_Const = new_Constant((Optr)string_22913);
    // headerAt:. 
    Send PSend22914 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_22913_Const);
    Variable VAR_encoding_2_0 = new_Variable_named(L"encoding", 2);
    Array PArray22916 = new_Array_with(1, (Optr)VAR_encoding_2_0);
    String string_22918 = new_String(L"chunked");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_22918_Const = new_Constant((Optr)string_22918);
    // =. 
    Send PSend22919 = new_Send((Optr)VAR_encoding_2_0, SMB__equals_, 1, (Optr)string_22918_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    // chunkFrom:to:progress:. 
    Send PSend22923 = new_Send((Optr)self, SMB_chunkFrom_to_progress_, 3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_3);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22924 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22923);
    Array PThreadedCode22922 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_send3, (Optr)PSend22923, (Optr)&t_send1, (Optr)PSend22924, (Optr)&t_block_return);
    Block PBlock22921 = new_Block_with(empty_Array, empty_Array, PThreadedCode22922, 1, PSend22924);
    String string_22927 = new_String(L"Unknown transfer-encoding: ");
    Constant string_22927_Const = new_Constant((Optr)string_22927);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22928 = new_Send((Optr)string_22927_Const, SMB__append_, 1, (Optr)VAR_encoding_2_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend22929 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend22928);
    Array PThreadedCode22926 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22927, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_send1, (Optr)PSend22928, (Optr)&t_send1, (Optr)PSend22929, (Optr)&t_block_return);
    Block PBlock22925 = new_Block_with(empty_Array, empty_Array, PThreadedCode22926, 1, PSend22929);
    // ifTrue:ifFalse:. 
    Send PSend22920 = new_Send((Optr)PSend22919, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22921, (Optr)PBlock22925);
    Array PThreadedCode22917 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_push1, (Optr)string_22918, (Optr)&t_send1, (Optr)PSend22919, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22920, (Optr)PBlock22921, (Optr)PBlock22925, (Optr)&t_method_return);
    Block PBlock22915 = new_Block_with(PArray22916, empty_Array, PThreadedCode22917, 1, PSend22920);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend22930 = new_Send((Optr)PSend22914, SMB_ifNotEmpty_, 1, (Optr)PBlock22915);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend22931 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend22935 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22934 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22935, (Optr)&t_block_return);
    Block PBlock22933 = new_Block_with(empty_Array, empty_Array, PThreadedCode22934, 1, PSend22935);
    // ifTrue:. 
    Send PSend22932 = new_Send((Optr)PSend22931, SMB_ifTrue_, 1, (Optr)PBlock22933);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    // new:. 
    Send PSend22937 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4096_Const);
    Assign PAssign22936 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend22937);
    Assign PAssign22938 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)int_0_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Array PThreadedCode22942 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    Block PBlock22941 = new_Block_with(empty_Array, empty_Array, PThreadedCode22942, 1, int_0_Const);
    // ifNil:. 
    Send PSend22940 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_, 1, (Optr)PBlock22941);
    Assign PAssign22939 = new_Assign((Optr)VAR_size_0_7, (Optr)PSend22940);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22945 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend22948 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22949 = new_Send((Optr)PSend22948, SMB_not, 0);
    Array PThreadedCode22947 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22948, (Optr)&t_send0, (Optr)PSend22949, (Optr)&t_block_return);
    Block PBlock22946 = new_Block_with(empty_Array, empty_Array, PThreadedCode22947, 1, PSend22949);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22950 = new_Send((Optr)PSend22945, SMB_and_, 1, (Optr)PBlock22946);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend22953 = new_Send((Optr)VAR_totalRead_0_5, SMB__lt_, 1, (Optr)VAR_size_0_7);
    Array PThreadedCode22952 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_size_0_7, (Optr)&t_send1, (Optr)PSend22953, (Optr)&t_block_return);
    Block PBlock22951 = new_Block_with(empty_Array, empty_Array, PThreadedCode22952, 1, PSend22953);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend22954 = new_Send((Optr)PSend22950, SMB_or_, 1, (Optr)PBlock22951);
    Array PThreadedCode22944 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22945, (Optr)&t_push_closure, (Optr)PBlock22946, (Optr)&t_send1, (Optr)PSend22950, (Optr)&t_push_closure, (Optr)PBlock22951, (Optr)&t_send1, (Optr)PSend22954, (Optr)&t_block_return);
    Block PBlock22943 = new_Block_with(empty_Array, empty_Array, PThreadedCode22944, 1, PSend22954);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend22959 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode22958 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend22959, (Optr)&t_block_return);
    Block PBlock22957 = new_Block_with(empty_Array, empty_Array, PThreadedCode22958, 1, PSend22959);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22960 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock22957);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    SmallInt int_99999 = new_SmallInt(99999);
    Array PThreadedCode22964 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_99999, (Optr)&t_block_return);
    Constant int_99999_Const = new_Constant((Optr)int_99999);
    Block PBlock22963 = new_Block_with(empty_Array, empty_Array, PThreadedCode22964, 1, int_99999_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend22967 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__minus_, 1, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode22966 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send1, (Optr)PSend22967, (Optr)&t_block_return);
    Block PBlock22965 = new_Block_with(empty_Array, empty_Array, PThreadedCode22966, 1, PSend22967);
    // ifNil:ifNotNil:. 
    Send PSend22962 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22963, (Optr)PBlock22965);
    Assign PAssign22961 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend22962);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22968 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend22969 = new_Send((Optr)VAR_remaining_0_6, SMB__gt_, 1, (Optr)PSend22968);
    // size. 
    Send PSend22974 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Assign PAssign22973 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend22974);
    Array PThreadedCode22972 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign22973, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend22974, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22971 = new_Block_with(empty_Array, empty_Array, PThreadedCode22972, 1, PAssign22973);
    // ifTrue:. 
    Send PSend22970 = new_Send((Optr)PSend22969, SMB_ifTrue_, 1, (Optr)PBlock22971);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend22976 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_remaining_0_6, (Optr)VAR_buffer_0_4, (Optr)int_1_Const);
    Assign PAssign22975 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend22976);
    // size. 
    Send PSend22977 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // <. 
    Send PSend22978 = new_Send((Optr)VAR_remaining_0_6, SMB__lt_, 1, (Optr)PSend22977);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend22982 = new_Send((Optr)VAR_buffer_0_4, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_remaining_0_6);
    Array PThreadedCode22981 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_send2, (Optr)PSend22982, (Optr)&t_block_return);
    Block PBlock22980 = new_Block_with(empty_Array, empty_Array, PThreadedCode22981, 1, PSend22982);
    Array PThreadedCode22984 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_block_return);
    Block PBlock22983 = new_Block_with(empty_Array, empty_Array, PThreadedCode22984, 1, VAR_buffer_0_4);
    // ifTrue:ifFalse:. 
    Send PSend22979 = new_Send((Optr)PSend22978, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22980, (Optr)PBlock22983);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22985 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)PSend22979);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // size. 
    Send PSend22988 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // +. 
    Send PSend22987 = new_Send((Optr)VAR_totalRead_0_5, SMB__plus_, 1, (Optr)PSend22988);
    Assign PAssign22986 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)PSend22987);
    Array PThreadedCode22956 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock22957, (Optr)&t_send1, (Optr)PSend22960, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22961, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock22963, (Optr)&t_push_closure, (Optr)PBlock22965, (Optr)&t_send2, (Optr)PSend22962, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend22968, (Optr)&t_send1, (Optr)PSend22969, (Optr)&t_send_ifTrue_, (Optr)PSend22970, (Optr)PBlock22971, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22975, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend22976, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend22977, (Optr)&t_send1, (Optr)PSend22978, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22979, (Optr)PBlock22980, (Optr)PBlock22983, (Optr)&t_send1, (Optr)PSend22985, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22986, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend22988, (Optr)&t_send1, (Optr)PSend22987, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22955 = new_Block_with(empty_Array, empty_Array, PThreadedCode22956, 6, PSend22960, PAssign22961, PSend22970, PAssign22975, PSend22985, PAssign22986);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22989 = new_Send((Optr)PBlock22943, SMB_whileTrue_, 1, (Optr)PBlock22955);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22990 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend22993 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode22992 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend22993, (Optr)&t_block_return);
    Block PBlock22991 = new_Block_with(empty_Array, empty_Array, PThreadedCode22992, 1, PSend22993);
    // ifNotNil:. 
    Send PSend22994 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock22991);
    Array PThreadedCode22912 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22913, (Optr)&t_send1, (Optr)PSend22914, (Optr)&t_push_closure, (Optr)PBlock22915, (Optr)&t_send1, (Optr)PSend22930, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22931, (Optr)&t_send_ifTrue_, (Optr)PSend22932, (Optr)PBlock22933, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22936, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_send1, (Optr)PSend22937, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22938, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22939, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock22941, (Optr)&t_send1, (Optr)PSend22940, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22943, (Optr)&t_push_closure, (Optr)PBlock22955, (Optr)&t_send1, (Optr)PSend22989, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend22990, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock22991, (Optr)&t_send1, (Optr)PSend22994, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22910 = new_Block_with(PArray22911, empty_Array, PThreadedCode22912, 9, PSend22930, PSend22932, PAssign22936, PAssign22938, PAssign22939, PSend22989, PSend22990, PSend22994, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22995 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22910);
    Array PThreadedCode22909 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22910, (Optr)&t_send1, (Optr)PSend22995, (Optr)&t_method_return);
    Method PMethod22906 = new_Method_with(PArray22907, PArray22908, empty_Array, PThreadedCode22909, 1, PSend22995);
    
    MethodClosure MC_SMB_streamFrom_to_size_progress_ = new_MethodClosure((Method)PMethod22906, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_streamFrom_to_size_progress_, MC_SMB_streamFrom_to_size_progress_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray22999 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23001 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode23000 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23001, (Optr)&t_method_return);
    Block PBlock22998 = new_Block_with(PArray22999, empty_Array, PThreadedCode23000, 1, PSend23001);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23002 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock22998);
    Array PThreadedCode22997 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock22998, (Optr)&t_send1, (Optr)PSend23002, (Optr)&t_method_return);
    Method PMethod22996 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22997, 1, PSend23002);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod22996, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_contentWithProgress_() {
    Symbol SMB_contentWithProgress_ = new_Symbol(L"contentWithProgress:");
    Variable VAR_progressBlock_0_0 = new_Variable_named(L"progressBlock", 0);
    Array PArray23004 = new_Array_with(1, (Optr)VAR_progressBlock_0_0);
    Variable VAR_length_1_0 = new_Variable_named(L"length", 1);
    Array PArray23007 = new_Array_with(1, (Optr)VAR_length_1_0);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23010 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23009 = new_Assign((Optr)VAR_length_1_0, (Optr)PSend23010);
    Symbol SMB_new_streamContents_ = new_Symbol(L"new:streamContents:");
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23015 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23014 = new_Block_with(empty_Array, empty_Array, PThreadedCode23015, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23013 = new_Send((Optr)VAR_length_1_0, SMB_ifNil_, 1, (Optr)PBlock23014);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23017 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23019 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_s_2_0, (Optr)VAR_length_1_0, (Optr)VAR_progressBlock_0_0);
    Array PThreadedCode23018 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_0, (Optr)&t_send4, (Optr)PSend23019, (Optr)&t_method_return);
    Block PBlock23016 = new_Block_with(PArray23017, empty_Array, PThreadedCode23018, 1, PSend23019);
    // new:streamContents:. 
    Send PSend23012 = new_Send((Optr)String_classReference, SMB_new_streamContents_, 2, (Optr)PSend23013, (Optr)PBlock23016);
    Assign PAssign23011 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23012);
    Array PThreadedCode23008 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign23009, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23010, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23011, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_closure, (Optr)PBlock23014, (Optr)&t_send1, (Optr)PSend23013, (Optr)&t_push_closure, (Optr)PBlock23016, (Optr)&t_send2, (Optr)PSend23012, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23006 = new_Block_with(empty_Array, PArray23007, PThreadedCode23008, 2, PAssign23009, PAssign23011);
    // ifNil:. 
    Send PSend23020 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23006);
    Array PThreadedCode23005 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23006, (Optr)&t_send1, (Optr)PSend23020, (Optr)&t_method_return);
    Method PMethod23003 = new_Method_with(PArray23004, empty_Array, empty_Array, PThreadedCode23005, 1, PSend23020);
    
    MethodClosure MC_SMB_contentWithProgress_ = new_MethodClosure((Method)PMethod23003, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentWithProgress_, MC_SMB_contentWithProgress_);
}


static void init_SMB_stream() {
    Symbol SMB_stream = new_Symbol(L"stream");
    Array PThreadedCode23022 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23021 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23022, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_stream = new_MethodClosure((Method)PMethod23021, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream, MC_SMB_stream);
}


static void init_SMB_protocol() {
    Symbol SMB_protocol = new_Symbol(L"protocol");
    Array PThreadedCode23024 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_method_return);
    Method PMethod23023 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23024, 1, slot_WebClient_Core_WebMessage_protocol);
    
    MethodClosure MC_SMB_protocol = new_MethodClosure((Method)PMethod23023, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol, MC_SMB_protocol);
}


static void init_SMB_writeHeadersOn_() {
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23026 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23029 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23032 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23034 = new_String(L": ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23034_Const = new_Constant((Optr)string_23034);
    // ,. 
    Send PSend23035 = new_Send((Optr)VAR_key_1_0, SMB__append_, 1, (Optr)string_23034_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23036 = new_Send((Optr)VAR_value_1_1, SMB_asString, 0);
    // ,. 
    Send PSend23037 = new_Send((Optr)PSend23035, SMB__append_, 1, (Optr)PSend23036);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23038 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23037);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23039 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Array PThreadedCode23033 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push1, (Optr)string_23034, (Optr)&t_send1, (Optr)PSend23035, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send0, (Optr)PSend23036, (Optr)&t_send1, (Optr)PSend23037, (Optr)&t_send1, (Optr)PSend23038, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23039, (Optr)&t_method_return);
    Block PBlock23031 = new_Block_with(PArray23032, empty_Array, PThreadedCode23033, 2, PSend23038, PSend23039);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23040 = new_Send((Optr)PBlock23031, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23030 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock23031, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23040, (Optr)&t_method_return);
    Block PBlock23028 = new_Block_with(PArray23029, empty_Array, PThreadedCode23030, 1, PSend23040);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23041 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23028);
    Array PThreadedCode23027 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23028, (Optr)&t_send1, (Optr)PSend23041, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23025 = new_Method_with(PArray23026, empty_Array, empty_Array, PThreadedCode23027, 2, PSend23041, self);
    
    MethodClosure MC_SMB_writeHeadersOn_ = new_MethodClosure((Method)PMethod23025, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeHeadersOn_, MC_SMB_writeHeadersOn_);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23046 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_destroy, 0);
    Array PThreadedCode23045 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23046, (Optr)&t_block_return);
    Block PBlock23044 = new_Block_with(empty_Array, empty_Array, PThreadedCode23045, 1, PSend23046);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23047 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23044);
    Array PThreadedCode23043 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23044, (Optr)&t_send1, (Optr)PSend23047, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23042 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23043, 2, PSend23047, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod23042, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23049 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    // writeHeadersOn:. 
    Send PSend23051 = new_Send((Optr)self, SMB_writeHeadersOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23052 = new_Send((Optr)VAR_aStream_0_0, SMB_crlf, 0);
    Array PThreadedCode23050 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23051, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23052, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23048 = new_Method_with(PArray23049, empty_Array, empty_Array, PThreadedCode23050, 3, PSend23051, PSend23052, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23048, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_headersDo_() {
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23054 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23057 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23059 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23060 = new_Send((Optr)VAR_assoc_1_0, SMB_value, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23061 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend23059, (Optr)PSend23060);
    Array PThreadedCode23058 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23059, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23060, (Optr)&t_send2, (Optr)PSend23061, (Optr)&t_method_return);
    Block PBlock23056 = new_Block_with(PArray23057, empty_Array, PThreadedCode23058, 1, PSend23061);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23062 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23056);
    Array PThreadedCode23055 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23056, (Optr)&t_send1, (Optr)PSend23062, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23053 = new_Method_with(PArray23054, empty_Array, empty_Array, PThreadedCode23055, 2, PSend23062, self);
    
    MethodClosure MC_SMB_headersDo_ = new_MethodClosure((Method)PMethod23053, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersDo_, MC_SMB_headersDo_);
}


static void init_SMB_multipartBoundary() {
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    Variable VAR_header_0_0 = new_Variable_named(L"header", 0);
    Array PArray23064 = new_Array_with(1, (Optr)VAR_header_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23067 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    String string_23071 = new_String(L"Content-Type");
    Constant string_23071_Const = new_Constant((Optr)string_23071);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23074 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23073 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23074, (Optr)&t_block_return);
    Block PBlock23072 = new_Block_with(empty_Array, empty_Array, PThreadedCode23073, 1, PSend23074);
    // headerAt:ifAbsent:. 
    Send PSend23070 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23071_Const, (Optr)PBlock23072);
    Assign PAssign23069 = new_Assign((Optr)VAR_header_0_0, (Optr)PSend23070);
    String string_23075 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23075_Const = new_Constant((Optr)string_23075);
    // beginsWith:. 
    Send PSend23076 = new_Send((Optr)VAR_header_0_0, SMB_beginsWith_, 1, (Optr)string_23075_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend23080 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23079 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23080, (Optr)&t_block_return);
    Block PBlock23078 = new_Block_with(empty_Array, empty_Array, PThreadedCode23079, 1, PSend23080);
    // ifFalse:. 
    Send PSend23077 = new_Send((Optr)PSend23076, SMB_ifFalse_, 1, (Optr)PBlock23078);
    String string_23081 = new_String(L"boundary=");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23081_Const = new_Constant((Optr)string_23081);
    // findString:. 
    Send PSend23082 = new_Send((Optr)VAR_header_0_0, SMB_findString_, 1, (Optr)string_23081_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_9_Const = new_Constant((Optr)int_9);
    // +. 
    Send PSend23083 = new_Send((Optr)PSend23082, SMB__plus_, 1, (Optr)int_9_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23084 = new_Send((Optr)VAR_header_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23085 = new_Send((Optr)VAR_header_0_0, SMB_copyFrom_to_, 2, (Optr)PSend23083, (Optr)PSend23084);
    Array PThreadedCode23068 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23069, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23071, (Optr)&t_push_closure, (Optr)PBlock23072, (Optr)&t_send2, (Optr)PSend23070, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23075, (Optr)&t_send1, (Optr)PSend23076, (Optr)&t_send_ifFalse_, (Optr)PSend23077, (Optr)PBlock23078, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23081, (Optr)&t_send1, (Optr)PSend23082, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend23083, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_send0, (Optr)PSend23084, (Optr)&t_send2, (Optr)PSend23085, (Optr)&t_method_return);
    Block PBlock23066 = new_Block_with(PArray23067, empty_Array, PThreadedCode23068, 3, PAssign23069, PSend23077, PSend23085);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23086 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23066);
    Array PThreadedCode23065 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23066, (Optr)&t_send1, (Optr)PSend23086, (Optr)&t_method_return);
    Method PMethod23063 = new_Method_with(empty_Array, PArray23064, empty_Array, PThreadedCode23065, 1, PSend23086);
    
    MethodClosure MC_SMB_multipartBoundary = new_MethodClosure((Method)PMethod23063, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_multipartBoundary, MC_SMB_multipartBoundary);
}


static void init_SMB_closeIfTransient() {
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23089 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23093 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23092 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23093, (Optr)&t_block_return);
    Block PBlock23091 = new_Block_with(empty_Array, empty_Array, PThreadedCode23092, 1, PSend23093);
    // ifFalse:. 
    Send PSend23090 = new_Send((Optr)PSend23089, SMB_ifFalse_, 1, (Optr)PBlock23091);
    Array PThreadedCode23088 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23089, (Optr)&t_send_ifFalse_, (Optr)PSend23090, (Optr)PBlock23091, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23087 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23088, 2, PSend23090, self);
    
    MethodClosure MC_SMB_closeIfTransient = new_MethodClosure((Method)PMethod23087, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_closeIfTransient, MC_SMB_closeIfTransient);
}


static void init_SMB_contentType_() {
    Symbol SMB_contentType_ = new_Symbol(L"contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23095 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23097 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23097_Const = new_Constant((Optr)string_23097);
    // headerAt:put:. 
    Send PSend23098 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23097_Const, (Optr)VAR_aString_0_0);
    Array PThreadedCode23096 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23097, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23098, (Optr)&t_method_return);
    Method PMethod23094 = new_Method_with(PArray23095, empty_Array, empty_Array, PThreadedCode23096, 1, PSend23098);
    
    MethodClosure MC_SMB_contentType_ = new_MethodClosure((Method)PMethod23094, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType_, MC_SMB_contentType_);
}


static void init_SMB_headerAt_put_() {
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23100 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23103 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_assoc_2_0 = new_Variable_named(L"assoc", 2);
    Array PArray23106 = new_Array_with(1, (Optr)VAR_assoc_2_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23108 = new_Send((Optr)VAR_assoc_2_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23109 = new_Send((Optr)PSend23108, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23110 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23111 = new_Send((Optr)PSend23109, SMB__equals_, 1, (Optr)PSend23110);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23115 = new_Send((Optr)VAR_assoc_2_0, SMB_value_, 1, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23116 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23114 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend23115, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23116, (Optr)&t_block_return);
    Block PBlock23113 = new_Block_with(empty_Array, empty_Array, PThreadedCode23114, 2, PSend23115, PSend23116);
    // ifTrue:. 
    Send PSend23112 = new_Send((Optr)PSend23111, SMB_ifTrue_, 1, (Optr)PBlock23113);
    Array PThreadedCode23107 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_send0, (Optr)PSend23108, (Optr)&t_send0, (Optr)PSend23109, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23110, (Optr)&t_send1, (Optr)PSend23111, (Optr)&t_send_ifTrue_, (Optr)PSend23112, (Optr)PBlock23113, (Optr)&t_method_return);
    Block PBlock23105 = new_Block_with(PArray23106, empty_Array, PThreadedCode23107, 1, PSend23112);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23117 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23105);
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    // addHeader:value:. 
    Send PSend23118 = new_Send((Optr)self, SMB_addHeader_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Array PThreadedCode23104 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23105, (Optr)&t_send1, (Optr)PSend23117, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23118, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23102 = new_Block_with(PArray23103, empty_Array, PThreadedCode23104, 3, PSend23117, PSend23118, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23119 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23102);
    Array PThreadedCode23101 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23102, (Optr)&t_send1, (Optr)PSend23119, (Optr)&t_method_return);
    Method PMethod23099 = new_Method_with(PArray23100, empty_Array, empty_Array, PThreadedCode23101, 1, PSend23119);
    
    MethodClosure MC_SMB_headerAt_put_ = new_MethodClosure((Method)PMethod23099, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_put_, MC_SMB_headerAt_put_);
}


static void init_SMB_headerAt_ifAbsent_() {
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23121 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23124 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray23127 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23129 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode23128 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend23129, (Optr)&t_method_return);
    Block PBlock23126 = new_Block_with(PArray23127, empty_Array, PThreadedCode23128, 1, PSend23129);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23130 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23126);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23131 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23125 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23126, (Optr)&t_send2, (Optr)PSend23130, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23131, (Optr)&t_method_return);
    Block PBlock23123 = new_Block_with(PArray23124, empty_Array, PThreadedCode23125, 2, PSend23130, PSend23131);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23132 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23123);
    Array PThreadedCode23122 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23123, (Optr)&t_send1, (Optr)PSend23132, (Optr)&t_method_return);
    Method PMethod23120 = new_Method_with(PArray23121, empty_Array, empty_Array, PThreadedCode23122, 1, PSend23132);
    
    MethodClosure MC_SMB_headerAt_ifAbsent_ = new_MethodClosure((Method)PMethod23120, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_ifAbsent_, MC_SMB_headerAt_ifAbsent_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend23138 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign23137 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23138);
    Array PThreadedCode23136 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23137, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23138, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23135 = new_Block_with(empty_Array, empty_Array, PThreadedCode23136, 1, PAssign23137);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23139 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23135);
    Array PThreadedCode23134 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23135, (Optr)&t_send1, (Optr)PSend23139, (Optr)&t_method_return);
    Method PMethod23133 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23134, 1, PSend23139);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod23133, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR_length_0_0 = new_Variable_named(L"length", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_buffer_0_2 = new_Variable_named(L"buffer", 0);
    Array PArray23141 = new_Array_with(3, (Optr)VAR_length_0_0, (Optr)VAR_size_0_1, (Optr)VAR_buffer_0_2);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23144 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23143 = new_Assign((Optr)VAR_length_0_0, (Optr)PSend23144);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23148 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23147 = new_Block_with(empty_Array, empty_Array, PThreadedCode23148, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23146 = new_Send((Optr)VAR_length_0_0, SMB_ifNil_, 1, (Optr)PBlock23147);
    Assign PAssign23145 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend23146);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23151 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend23150 = new_Send((Optr)PSend23151, SMB_writeStream, 0);
    Assign PAssign23149 = new_Assign((Optr)VAR_buffer_0_2, (Optr)PSend23150);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23152 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_buffer_0_2, (Optr)VAR_length_0_0, (Optr)nil_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend23153 = new_Send((Optr)VAR_buffer_0_2, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23154 = new_Send((Optr)PSend23153, SMB__equals_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_originalContents = new_Symbol(L"originalContents");
    // originalContents. 
    Send PSend23158 = new_Send((Optr)VAR_buffer_0_2, SMB_originalContents, 0);
    Array PThreadedCode23157 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23158, (Optr)&t_block_return);
    Block PBlock23156 = new_Block_with(empty_Array, empty_Array, PThreadedCode23157, 1, PSend23158);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend23161 = new_Send((Optr)VAR_buffer_0_2, SMB_contents, 0);
    Array PThreadedCode23160 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23161, (Optr)&t_block_return);
    Block PBlock23159 = new_Block_with(empty_Array, empty_Array, PThreadedCode23160, 1, PSend23161);
    // ifTrue:ifFalse:. 
    Send PSend23155 = new_Send((Optr)PSend23154, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23156, (Optr)PBlock23159);
    Array PThreadedCode23142 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign23143, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23144, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23145, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_closure, (Optr)PBlock23147, (Optr)&t_send1, (Optr)PSend23146, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23149, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23151, (Optr)&t_send0, (Optr)PSend23150, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23152, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23153, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23154, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23155, (Optr)PBlock23156, (Optr)PBlock23159, (Optr)&t_method_return);
    Method PMethod23140 = new_Method_with(empty_Array, PArray23141, empty_Array, PThreadedCode23142, 5, PAssign23143, PAssign23145, PAssign23149, PSend23152, PSend23155);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod23140, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_isPersistent() {
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23165 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23167 = new_String(L"Connection");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23167_Const = new_Constant((Optr)string_23167);
    // headerAt:. 
    Send PSend23168 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23167_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23169 = new_Send((Optr)PSend23168, SMB_asLowercase, 0);
    String string_23170 = new_String(L"close");
    Constant string_23170_Const = new_Constant((Optr)string_23170);
    // asLowercase. 
    Send PSend23171 = new_Send((Optr)string_23170_Const, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23172 = new_Send((Optr)PSend23169, SMB__equals_, 1, (Optr)PSend23171);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23176 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23175 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23176, (Optr)&t_block_return);
    Block PBlock23174 = new_Block_with(empty_Array, empty_Array, PThreadedCode23175, 1, PSend23176);
    // ifTrue:. 
    Send PSend23173 = new_Send((Optr)PSend23172, SMB_ifTrue_, 1, (Optr)PBlock23174);
    String string_23177 = new_String(L"Connection");
    Constant string_23177_Const = new_Constant((Optr)string_23177);
    // headerAt:. 
    Send PSend23178 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23177_Const);
    // asLowercase. 
    Send PSend23179 = new_Send((Optr)PSend23178, SMB_asLowercase, 0);
    String string_23180 = new_String(L"keep-alive");
    Constant string_23180_Const = new_Constant((Optr)string_23180);
    // asLowercase. 
    Send PSend23181 = new_Send((Optr)string_23180_Const, SMB_asLowercase, 0);
    // =. 
    Send PSend23182 = new_Send((Optr)PSend23179, SMB__equals_, 1, (Optr)PSend23181);
    // escape:. 
    Send PSend23186 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23185 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23186, (Optr)&t_block_return);
    Block PBlock23184 = new_Block_with(empty_Array, empty_Array, PThreadedCode23185, 1, PSend23186);
    // ifTrue:. 
    Send PSend23183 = new_Send((Optr)PSend23182, SMB_ifTrue_, 1, (Optr)PBlock23184);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23187 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23188 = new_String(L"HTTP/1.0");
    Constant string_23188_Const = new_Constant((Optr)string_23188);
    // =. 
    Send PSend23189 = new_Send((Optr)PSend23187, SMB__equals_, 1, (Optr)string_23188_Const);
    // escape:. 
    Send PSend23193 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23192 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23193, (Optr)&t_block_return);
    Block PBlock23191 = new_Block_with(empty_Array, empty_Array, PThreadedCode23192, 1, PSend23193);
    // ifTrue:. 
    Send PSend23190 = new_Send((Optr)PSend23189, SMB_ifTrue_, 1, (Optr)PBlock23191);
    // protocol. 
    Send PSend23194 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23195 = new_String(L"HTTP/1.1");
    Constant string_23195_Const = new_Constant((Optr)string_23195);
    // =. 
    Send PSend23196 = new_Send((Optr)PSend23194, SMB__equals_, 1, (Optr)string_23195_Const);
    // escape:. 
    Send PSend23200 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23199 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23200, (Optr)&t_block_return);
    Block PBlock23198 = new_Block_with(empty_Array, empty_Array, PThreadedCode23199, 1, PSend23200);
    // ifTrue:. 
    Send PSend23197 = new_Send((Optr)PSend23196, SMB_ifTrue_, 1, (Optr)PBlock23198);
    Array PThreadedCode23166 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23167, (Optr)&t_send1, (Optr)PSend23168, (Optr)&t_send0, (Optr)PSend23169, (Optr)&t_push1, (Optr)string_23170, (Optr)&t_send0, (Optr)PSend23171, (Optr)&t_send1, (Optr)PSend23172, (Optr)&t_send_ifTrue_, (Optr)PSend23173, (Optr)PBlock23174, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23177, (Optr)&t_send1, (Optr)PSend23178, (Optr)&t_send0, (Optr)PSend23179, (Optr)&t_push1, (Optr)string_23180, (Optr)&t_send0, (Optr)PSend23181, (Optr)&t_send1, (Optr)PSend23182, (Optr)&t_send_ifTrue_, (Optr)PSend23183, (Optr)PBlock23184, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23187, (Optr)&t_push1, (Optr)string_23188, (Optr)&t_send1, (Optr)PSend23189, (Optr)&t_send_ifTrue_, (Optr)PSend23190, (Optr)PBlock23191, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23194, (Optr)&t_push1, (Optr)string_23195, (Optr)&t_send1, (Optr)PSend23196, (Optr)&t_send_ifTrue_, (Optr)PSend23197, (Optr)PBlock23198, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock23164 = new_Block_with(PArray23165, empty_Array, PThreadedCode23166, 5, PSend23173, PSend23183, PSend23190, PSend23197, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23201 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23164);
    Array PThreadedCode23163 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23164, (Optr)&t_send1, (Optr)PSend23201, (Optr)&t_method_return);
    Method PMethod23162 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23163, 1, PSend23201);
    
    MethodClosure MC_SMB_isPersistent = new_MethodClosure((Method)PMethod23162, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_isPersistent, MC_SMB_isPersistent);
}


static void init_SMB_removeHeader_() {
    Symbol SMB_removeHeader_ = new_Symbol(L"removeHeader:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23203 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23208 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23210 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23211 = new_Send((Optr)PSend23210, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23212 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23213 = new_Send((Optr)PSend23211, SMB__equals_, 1, (Optr)PSend23212);
    Array PThreadedCode23209 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23210, (Optr)&t_send0, (Optr)PSend23211, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23212, (Optr)&t_send1, (Optr)PSend23213, (Optr)&t_method_return);
    Block PBlock23207 = new_Block_with(PArray23208, empty_Array, PThreadedCode23209, 1, PSend23213);
    // reject:. 
    Send PSend23206 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_reject_, 1, (Optr)PBlock23207);
    Assign PAssign23205 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23206);
    Array PThreadedCode23204 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign23205, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23207, (Optr)&t_send1, (Optr)PSend23206, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23202 = new_Method_with(PArray23203, empty_Array, empty_Array, PThreadedCode23204, 2, PAssign23205, self);
    
    MethodClosure MC_SMB_removeHeader_ = new_MethodClosure((Method)PMethod23202, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_removeHeader_, MC_SMB_removeHeader_);
}


static void init_SMB_addHeader_value_() {
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23215 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23217 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23218 = new_Send((Optr)PSend23217, SMB_key_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23219 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_add_, 1, (Optr)PSend23218);
    Array PThreadedCode23216 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23217, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23218, (Optr)&t_send1, (Optr)PSend23219, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23214 = new_Method_with(PArray23215, empty_Array, empty_Array, PThreadedCode23216, 2, PSend23219, self);
    
    MethodClosure MC_SMB_addHeader_value_ = new_MethodClosure((Method)PMethod23214, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_addHeader_value_, MC_SMB_addHeader_value_);
}


static void init_SMB_content_() {
    Symbol SMB_content_ = new_Symbol(L"content:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23221 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23223 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)VAR_aString_0_0);
    Array PThreadedCode23222 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23223, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23220 = new_Method_with(PArray23221, empty_Array, empty_Array, PThreadedCode23222, 2, PAssign23223, self);
    
    MethodClosure MC_SMB_content_ = new_MethodClosure((Method)PMethod23220, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content_, MC_SMB_content_);
}


static void init_class_SMB_statusCodeAt_() {
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray23225 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend23227 = new_Send((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, SMB_at_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode23226 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend23227, (Optr)&t_method_return);
    Method PMethod23224 = new_Method_with(PArray23225, empty_Array, empty_Array, PThreadedCode23226, 1, PSend23227);
    
    MethodClosure MC_SMB_statusCodeAt_ = new_MethodClosure((Method)PMethod23224, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_statusCodeAt_, MC_SMB_statusCodeAt_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23233 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_100 = new_SmallInt(100);
    String string_23235 = new_String(L"Continue");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant int_100_Const = new_Constant((Optr)int_100);
    Constant string_23235_Const = new_Constant((Optr)string_23235);
    // at:put:. 
    Send PSend23236 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_100_Const, (Optr)string_23235_Const);
    SmallInt int_101 = new_SmallInt(101);
    String string_23237 = new_String(L"Switching Protocols");
    Constant int_101_Const = new_Constant((Optr)int_101);
    Constant string_23237_Const = new_Constant((Optr)string_23237);
    // at:put:. 
    Send PSend23238 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_101_Const, (Optr)string_23237_Const);
    SmallInt int_102 = new_SmallInt(102);
    String string_23239 = new_String(L"Processing");
    Constant int_102_Const = new_Constant((Optr)int_102);
    Constant string_23239_Const = new_Constant((Optr)string_23239);
    // at:put:. 
    Send PSend23240 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_102_Const, (Optr)string_23239_Const);
    SmallInt int_200 = new_SmallInt(200);
    String string_23241 = new_String(L"OK");
    Constant int_200_Const = new_Constant((Optr)int_200);
    Constant string_23241_Const = new_Constant((Optr)string_23241);
    // at:put:. 
    Send PSend23242 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_200_Const, (Optr)string_23241_Const);
    SmallInt int_201 = new_SmallInt(201);
    String string_23243 = new_String(L"Created");
    Constant int_201_Const = new_Constant((Optr)int_201);
    Constant string_23243_Const = new_Constant((Optr)string_23243);
    // at:put:. 
    Send PSend23244 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_201_Const, (Optr)string_23243_Const);
    SmallInt int_202 = new_SmallInt(202);
    String string_23245 = new_String(L"Accepted");
    Constant int_202_Const = new_Constant((Optr)int_202);
    Constant string_23245_Const = new_Constant((Optr)string_23245);
    // at:put:. 
    Send PSend23246 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_202_Const, (Optr)string_23245_Const);
    SmallInt int_203 = new_SmallInt(203);
    String string_23247 = new_String(L"Non-Authoritative Information");
    Constant int_203_Const = new_Constant((Optr)int_203);
    Constant string_23247_Const = new_Constant((Optr)string_23247);
    // at:put:. 
    Send PSend23248 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_203_Const, (Optr)string_23247_Const);
    SmallInt int_204 = new_SmallInt(204);
    String string_23249 = new_String(L"No Content");
    Constant int_204_Const = new_Constant((Optr)int_204);
    Constant string_23249_Const = new_Constant((Optr)string_23249);
    // at:put:. 
    Send PSend23250 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_204_Const, (Optr)string_23249_Const);
    SmallInt int_205 = new_SmallInt(205);
    String string_23251 = new_String(L"Reset Content");
    Constant int_205_Const = new_Constant((Optr)int_205);
    Constant string_23251_Const = new_Constant((Optr)string_23251);
    // at:put:. 
    Send PSend23252 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_205_Const, (Optr)string_23251_Const);
    SmallInt int_206 = new_SmallInt(206);
    String string_23253 = new_String(L"Partial Content");
    Constant int_206_Const = new_Constant((Optr)int_206);
    Constant string_23253_Const = new_Constant((Optr)string_23253);
    // at:put:. 
    Send PSend23254 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_206_Const, (Optr)string_23253_Const);
    SmallInt int_207 = new_SmallInt(207);
    String string_23255 = new_String(L"Multi-Status");
    Constant int_207_Const = new_Constant((Optr)int_207);
    Constant string_23255_Const = new_Constant((Optr)string_23255);
    // at:put:. 
    Send PSend23256 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_207_Const, (Optr)string_23255_Const);
    SmallInt int_300 = new_SmallInt(300);
    String string_23257 = new_String(L"Multiple Choices");
    Constant int_300_Const = new_Constant((Optr)int_300);
    Constant string_23257_Const = new_Constant((Optr)string_23257);
    // at:put:. 
    Send PSend23258 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_300_Const, (Optr)string_23257_Const);
    SmallInt int_301 = new_SmallInt(301);
    String string_23259 = new_String(L"Moved Permanently");
    Constant int_301_Const = new_Constant((Optr)int_301);
    Constant string_23259_Const = new_Constant((Optr)string_23259);
    // at:put:. 
    Send PSend23260 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_301_Const, (Optr)string_23259_Const);
    SmallInt int_302 = new_SmallInt(302);
    String string_23261 = new_String(L"Moved Temporarily");
    Constant int_302_Const = new_Constant((Optr)int_302);
    Constant string_23261_Const = new_Constant((Optr)string_23261);
    // at:put:. 
    Send PSend23262 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_302_Const, (Optr)string_23261_Const);
    SmallInt int_303 = new_SmallInt(303);
    String string_23263 = new_String(L"See Other");
    Constant int_303_Const = new_Constant((Optr)int_303);
    Constant string_23263_Const = new_Constant((Optr)string_23263);
    // at:put:. 
    Send PSend23264 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_303_Const, (Optr)string_23263_Const);
    SmallInt int_304 = new_SmallInt(304);
    String string_23265 = new_String(L"Not Modified");
    Constant int_304_Const = new_Constant((Optr)int_304);
    Constant string_23265_Const = new_Constant((Optr)string_23265);
    // at:put:. 
    Send PSend23266 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_304_Const, (Optr)string_23265_Const);
    SmallInt int_305 = new_SmallInt(305);
    String string_23267 = new_String(L"Use Proxy");
    Constant int_305_Const = new_Constant((Optr)int_305);
    Constant string_23267_Const = new_Constant((Optr)string_23267);
    // at:put:. 
    Send PSend23268 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_305_Const, (Optr)string_23267_Const);
    SmallInt int_307 = new_SmallInt(307);
    String string_23269 = new_String(L"Temporary Redirect");
    Constant int_307_Const = new_Constant((Optr)int_307);
    Constant string_23269_Const = new_Constant((Optr)string_23269);
    // at:put:. 
    Send PSend23270 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_307_Const, (Optr)string_23269_Const);
    SmallInt int_400 = new_SmallInt(400);
    String string_23271 = new_String(L"Bad Request");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23271_Const = new_Constant((Optr)string_23271);
    // at:put:. 
    Send PSend23272 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_400_Const, (Optr)string_23271_Const);
    SmallInt int_401 = new_SmallInt(401);
    String string_23273 = new_String(L"Unauthorized");
    Constant int_401_Const = new_Constant((Optr)int_401);
    Constant string_23273_Const = new_Constant((Optr)string_23273);
    // at:put:. 
    Send PSend23274 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_401_Const, (Optr)string_23273_Const);
    SmallInt int_402 = new_SmallInt(402);
    String string_23275 = new_String(L"Payment Required");
    Constant int_402_Const = new_Constant((Optr)int_402);
    Constant string_23275_Const = new_Constant((Optr)string_23275);
    // at:put:. 
    Send PSend23276 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_402_Const, (Optr)string_23275_Const);
    SmallInt int_403 = new_SmallInt(403);
    String string_23277 = new_String(L"Forbidden");
    Constant int_403_Const = new_Constant((Optr)int_403);
    Constant string_23277_Const = new_Constant((Optr)string_23277);
    // at:put:. 
    Send PSend23278 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_403_Const, (Optr)string_23277_Const);
    SmallInt int_404 = new_SmallInt(404);
    String string_23279 = new_String(L"Not Found");
    Constant int_404_Const = new_Constant((Optr)int_404);
    Constant string_23279_Const = new_Constant((Optr)string_23279);
    // at:put:. 
    Send PSend23280 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_404_Const, (Optr)string_23279_Const);
    SmallInt int_405 = new_SmallInt(405);
    String string_23281 = new_String(L"Method Not Allowed");
    Constant int_405_Const = new_Constant((Optr)int_405);
    Constant string_23281_Const = new_Constant((Optr)string_23281);
    // at:put:. 
    Send PSend23282 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_405_Const, (Optr)string_23281_Const);
    SmallInt int_406 = new_SmallInt(406);
    String string_23283 = new_String(L"Not Acceptable");
    Constant int_406_Const = new_Constant((Optr)int_406);
    Constant string_23283_Const = new_Constant((Optr)string_23283);
    // at:put:. 
    Send PSend23284 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_406_Const, (Optr)string_23283_Const);
    SmallInt int_407 = new_SmallInt(407);
    String string_23285 = new_String(L"Proxy Authentication Required");
    Constant int_407_Const = new_Constant((Optr)int_407);
    Constant string_23285_Const = new_Constant((Optr)string_23285);
    // at:put:. 
    Send PSend23286 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_407_Const, (Optr)string_23285_Const);
    SmallInt int_408 = new_SmallInt(408);
    String string_23287 = new_String(L"Request Timeout");
    Constant int_408_Const = new_Constant((Optr)int_408);
    Constant string_23287_Const = new_Constant((Optr)string_23287);
    // at:put:. 
    Send PSend23288 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_408_Const, (Optr)string_23287_Const);
    SmallInt int_409 = new_SmallInt(409);
    String string_23289 = new_String(L"Conflict");
    Constant int_409_Const = new_Constant((Optr)int_409);
    Constant string_23289_Const = new_Constant((Optr)string_23289);
    // at:put:. 
    Send PSend23290 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_409_Const, (Optr)string_23289_Const);
    SmallInt int_410 = new_SmallInt(410);
    String string_23291 = new_String(L"Gone");
    Constant int_410_Const = new_Constant((Optr)int_410);
    Constant string_23291_Const = new_Constant((Optr)string_23291);
    // at:put:. 
    Send PSend23292 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_410_Const, (Optr)string_23291_Const);
    SmallInt int_411 = new_SmallInt(411);
    String string_23293 = new_String(L"Lenght Required");
    Constant int_411_Const = new_Constant((Optr)int_411);
    Constant string_23293_Const = new_Constant((Optr)string_23293);
    // at:put:. 
    Send PSend23294 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_411_Const, (Optr)string_23293_Const);
    SmallInt int_412 = new_SmallInt(412);
    String string_23295 = new_String(L"Precondition Failed");
    Constant int_412_Const = new_Constant((Optr)int_412);
    Constant string_23295_Const = new_Constant((Optr)string_23295);
    // at:put:. 
    Send PSend23296 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_412_Const, (Optr)string_23295_Const);
    SmallInt int_413 = new_SmallInt(413);
    String string_23297 = new_String(L"Request Entity Too Large");
    Constant int_413_Const = new_Constant((Optr)int_413);
    Constant string_23297_Const = new_Constant((Optr)string_23297);
    // at:put:. 
    Send PSend23298 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_413_Const, (Optr)string_23297_Const);
    SmallInt int_414 = new_SmallInt(414);
    String string_23299 = new_String(L"Request-URI Too Long");
    Constant int_414_Const = new_Constant((Optr)int_414);
    Constant string_23299_Const = new_Constant((Optr)string_23299);
    // at:put:. 
    Send PSend23300 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_414_Const, (Optr)string_23299_Const);
    SmallInt int_415 = new_SmallInt(415);
    String string_23301 = new_String(L"Unsupported Media Type");
    Constant int_415_Const = new_Constant((Optr)int_415);
    Constant string_23301_Const = new_Constant((Optr)string_23301);
    // at:put:. 
    Send PSend23302 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_415_Const, (Optr)string_23301_Const);
    SmallInt int_416 = new_SmallInt(416);
    String string_23303 = new_String(L"Requested Range Not Satisfiable");
    Constant int_416_Const = new_Constant((Optr)int_416);
    Constant string_23303_Const = new_Constant((Optr)string_23303);
    // at:put:. 
    Send PSend23304 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_416_Const, (Optr)string_23303_Const);
    SmallInt int_417 = new_SmallInt(417);
    String string_23305 = new_String(L"Expectation Failed");
    Constant int_417_Const = new_Constant((Optr)int_417);
    Constant string_23305_Const = new_Constant((Optr)string_23305);
    // at:put:. 
    Send PSend23306 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_417_Const, (Optr)string_23305_Const);
    SmallInt int_422 = new_SmallInt(422);
    String string_23307 = new_String(L"Unprocessable Entity");
    Constant int_422_Const = new_Constant((Optr)int_422);
    Constant string_23307_Const = new_Constant((Optr)string_23307);
    // at:put:. 
    Send PSend23308 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_422_Const, (Optr)string_23307_Const);
    SmallInt int_423 = new_SmallInt(423);
    String string_23309 = new_String(L"Locked");
    Constant int_423_Const = new_Constant((Optr)int_423);
    Constant string_23309_Const = new_Constant((Optr)string_23309);
    // at:put:. 
    Send PSend23310 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_423_Const, (Optr)string_23309_Const);
    SmallInt int_424 = new_SmallInt(424);
    String string_23311 = new_String(L"Failed Dependency");
    Constant int_424_Const = new_Constant((Optr)int_424);
    Constant string_23311_Const = new_Constant((Optr)string_23311);
    // at:put:. 
    Send PSend23312 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_424_Const, (Optr)string_23311_Const);
    SmallInt int_500 = new_SmallInt(500);
    String string_23313 = new_String(L"Internal Server Error");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23313_Const = new_Constant((Optr)string_23313);
    // at:put:. 
    Send PSend23314 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_500_Const, (Optr)string_23313_Const);
    SmallInt int_501 = new_SmallInt(501);
    String string_23315 = new_String(L"Not Implemented");
    Constant int_501_Const = new_Constant((Optr)int_501);
    Constant string_23315_Const = new_Constant((Optr)string_23315);
    // at:put:. 
    Send PSend23316 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_501_Const, (Optr)string_23315_Const);
    SmallInt int_502 = new_SmallInt(502);
    String string_23317 = new_String(L"Bad Gateway");
    Constant int_502_Const = new_Constant((Optr)int_502);
    Constant string_23317_Const = new_Constant((Optr)string_23317);
    // at:put:. 
    Send PSend23318 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_502_Const, (Optr)string_23317_Const);
    SmallInt int_503 = new_SmallInt(503);
    String string_23319 = new_String(L"Service Unavailable");
    Constant int_503_Const = new_Constant((Optr)int_503);
    Constant string_23319_Const = new_Constant((Optr)string_23319);
    // at:put:. 
    Send PSend23320 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_503_Const, (Optr)string_23319_Const);
    SmallInt int_504 = new_SmallInt(504);
    String string_23321 = new_String(L"Gateway Timeout");
    Constant int_504_Const = new_Constant((Optr)int_504);
    Constant string_23321_Const = new_Constant((Optr)string_23321);
    // at:put:. 
    Send PSend23322 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_504_Const, (Optr)string_23321_Const);
    SmallInt int_505 = new_SmallInt(505);
    String string_23323 = new_String(L"HTTP Version Not Supported");
    Constant int_505_Const = new_Constant((Optr)int_505);
    Constant string_23323_Const = new_Constant((Optr)string_23323);
    // at:put:. 
    Send PSend23324 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_505_Const, (Optr)string_23323_Const);
    SmallInt int_507 = new_SmallInt(507);
    String string_23325 = new_String(L"Insufficient Storage");
    Constant int_507_Const = new_Constant((Optr)int_507);
    Constant string_23325_Const = new_Constant((Optr)string_23325);
    // at:put:. 
    Send PSend23326 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_507_Const, (Optr)string_23325_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23327 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23234 = instantiate_Array_with(ThreadedCode_Class, 0, 419, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_push1, (Optr)string_23235, (Optr)&t_send2, (Optr)PSend23236, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_101, (Optr)&t_push1, (Optr)string_23237, (Optr)&t_send2, (Optr)PSend23238, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_102, (Optr)&t_push1, (Optr)string_23239, (Optr)&t_send2, (Optr)PSend23240, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push1, (Optr)string_23241, (Optr)&t_send2, (Optr)PSend23242, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_201, (Optr)&t_push1, (Optr)string_23243, (Optr)&t_send2, (Optr)PSend23244, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_202, (Optr)&t_push1, (Optr)string_23245, (Optr)&t_send2, (Optr)PSend23246, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_203, (Optr)&t_push1, (Optr)string_23247, (Optr)&t_send2, (Optr)PSend23248, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_204, (Optr)&t_push1, (Optr)string_23249, (Optr)&t_send2, (Optr)PSend23250, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_205, (Optr)&t_push1, (Optr)string_23251, (Optr)&t_send2, (Optr)PSend23252, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_206, (Optr)&t_push1, (Optr)string_23253, (Optr)&t_send2, (Optr)PSend23254, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_207, (Optr)&t_push1, (Optr)string_23255, (Optr)&t_send2, (Optr)PSend23256, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_300, (Optr)&t_push1, (Optr)string_23257, (Optr)&t_send2, (Optr)PSend23258, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push1, (Optr)string_23259, (Optr)&t_send2, (Optr)PSend23260, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push1, (Optr)string_23261, (Optr)&t_send2, (Optr)PSend23262, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_303, (Optr)&t_push1, (Optr)string_23263, (Optr)&t_send2, (Optr)PSend23264, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_304, (Optr)&t_push1, (Optr)string_23265, (Optr)&t_send2, (Optr)PSend23266, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_305, (Optr)&t_push1, (Optr)string_23267, (Optr)&t_send2, (Optr)PSend23268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_307, (Optr)&t_push1, (Optr)string_23269, (Optr)&t_send2, (Optr)PSend23270, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push1, (Optr)string_23271, (Optr)&t_send2, (Optr)PSend23272, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_401, (Optr)&t_push1, (Optr)string_23273, (Optr)&t_send2, (Optr)PSend23274, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_402, (Optr)&t_push1, (Optr)string_23275, (Optr)&t_send2, (Optr)PSend23276, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_403, (Optr)&t_push1, (Optr)string_23277, (Optr)&t_send2, (Optr)PSend23278, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_404, (Optr)&t_push1, (Optr)string_23279, (Optr)&t_send2, (Optr)PSend23280, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_405, (Optr)&t_push1, (Optr)string_23281, (Optr)&t_send2, (Optr)PSend23282, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_406, (Optr)&t_push1, (Optr)string_23283, (Optr)&t_send2, (Optr)PSend23284, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_407, (Optr)&t_push1, (Optr)string_23285, (Optr)&t_send2, (Optr)PSend23286, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_408, (Optr)&t_push1, (Optr)string_23287, (Optr)&t_send2, (Optr)PSend23288, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_409, (Optr)&t_push1, (Optr)string_23289, (Optr)&t_send2, (Optr)PSend23290, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_410, (Optr)&t_push1, (Optr)string_23291, (Optr)&t_send2, (Optr)PSend23292, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_411, (Optr)&t_push1, (Optr)string_23293, (Optr)&t_send2, (Optr)PSend23294, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_412, (Optr)&t_push1, (Optr)string_23295, (Optr)&t_send2, (Optr)PSend23296, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_413, (Optr)&t_push1, (Optr)string_23297, (Optr)&t_send2, (Optr)PSend23298, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_414, (Optr)&t_push1, (Optr)string_23299, (Optr)&t_send2, (Optr)PSend23300, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_415, (Optr)&t_push1, (Optr)string_23301, (Optr)&t_send2, (Optr)PSend23302, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_416, (Optr)&t_push1, (Optr)string_23303, (Optr)&t_send2, (Optr)PSend23304, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_417, (Optr)&t_push1, (Optr)string_23305, (Optr)&t_send2, (Optr)PSend23306, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_422, (Optr)&t_push1, (Optr)string_23307, (Optr)&t_send2, (Optr)PSend23308, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_423, (Optr)&t_push1, (Optr)string_23309, (Optr)&t_send2, (Optr)PSend23310, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_424, (Optr)&t_push1, (Optr)string_23311, (Optr)&t_send2, (Optr)PSend23312, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push1, (Optr)string_23313, (Optr)&t_send2, (Optr)PSend23314, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_501, (Optr)&t_push1, (Optr)string_23315, (Optr)&t_send2, (Optr)PSend23316, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_502, (Optr)&t_push1, (Optr)string_23317, (Optr)&t_send2, (Optr)PSend23318, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_503, (Optr)&t_push1, (Optr)string_23319, (Optr)&t_send2, (Optr)PSend23320, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_504, (Optr)&t_push1, (Optr)string_23321, (Optr)&t_send2, (Optr)PSend23322, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_505, (Optr)&t_push1, (Optr)string_23323, (Optr)&t_send2, (Optr)PSend23324, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_507, (Optr)&t_push1, (Optr)string_23325, (Optr)&t_send2, (Optr)PSend23326, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23327, (Optr)&t_method_return);
    Block PBlock23232 = new_Block_with(PArray23233, empty_Array, PThreadedCode23234, 47, PSend23236, PSend23238, PSend23240, PSend23242, PSend23244, PSend23246, PSend23248, PSend23250, PSend23252, PSend23254, PSend23256, PSend23258, PSend23260, PSend23262, PSend23264, PSend23266, PSend23268, PSend23270, PSend23272, PSend23274, PSend23276, PSend23278, PSend23280, PSend23282, PSend23284, PSend23286, PSend23288, PSend23290, PSend23292, PSend23294, PSend23296, PSend23298, PSend23300, PSend23302, PSend23304, PSend23306, PSend23308, PSend23310, PSend23312, PSend23314, PSend23316, PSend23318, PSend23320, PSend23322, PSend23324, PSend23326, PSend23327);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23328 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // value:. 
    Send PSend23231 = new_Send((Optr)PBlock23232, SMB_value_, 1, (Optr)PSend23328);
    Assign PAssign23230 = new_Assign((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)PSend23231);
    Array PThreadedCode23229 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign23230, (Optr)&t_push_closure, (Optr)PBlock23232, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23328, (Optr)&t_send1, (Optr)PSend23231, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23228 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23229, 2, PAssign23230, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23228, HEADER(WebClient_Core_WebMessage_Class));
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