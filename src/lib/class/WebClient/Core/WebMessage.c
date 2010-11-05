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
    String string_22814 = new_String(L"Content-Type");
    String string_22817 = new_String(L"application/octet-stream");
    Array PThreadedCode22816 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22817, (Optr)&t_block_return);
    Constant string_22817_Const = new_Constant((Optr)string_22817);
    Block PBlock22815 = new_Block_with(empty_Array, empty_Array, PThreadedCode22816, 1, string_22817_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_22814_Const = new_Constant((Optr)string_22814);
    // headerAt:ifAbsent:. 
    Send PSend22818 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_22814_Const, (Optr)PBlock22815);
    Array PThreadedCode22813 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22814, (Optr)&t_push_closure, (Optr)PBlock22815, (Optr)&t_send2, (Optr)PSend22818, (Optr)&t_method_return);
    Method PMethod22812 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22813, 1, PSend22818);
    
    MethodClosure MC_SMB_contentType = new_MethodClosure((Method)PMethod22812, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType, MC_SMB_contentType);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22823 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_close, 0);
    Array PThreadedCode22822 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22823, (Optr)&t_block_return);
    Block PBlock22821 = new_Block_with(empty_Array, empty_Array, PThreadedCode22822, 1, PSend22823);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22824 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock22821);
    Array PThreadedCode22820 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock22821, (Optr)&t_send1, (Optr)PSend22824, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22819 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22820, 2, PSend22824, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22819, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_contentStream() {
    Symbol SMB_contentStream = new_Symbol(L"contentStream");
    Array PThreadedCode22826 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod22825 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22826, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_contentStream = new_MethodClosure((Method)PMethod22825, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentStream, MC_SMB_contentStream);
}


static void init_SMB_remoteHost() {
    Symbol SMB_remoteHost = new_Symbol(L"remoteHost");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22830 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend22832 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isKindOf_, 1, (Optr)PSocketStream_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22836 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22835 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22836, (Optr)&t_block_return);
    Block PBlock22834 = new_Block_with(empty_Array, empty_Array, PThreadedCode22835, 1, PSend22836);
    // ifFalse:. 
    Send PSend22833 = new_Send((Optr)PSend22832, SMB_ifFalse_, 1, (Optr)PBlock22834);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22837 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22838 = new_Send((Optr)PSend22837, SMB_remoteAddress, 0);
    Array PThreadedCode22831 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_send1, (Optr)PSend22832, (Optr)&t_send_ifFalse_, (Optr)PSend22833, (Optr)PBlock22834, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22837, (Optr)&t_send0, (Optr)PSend22838, (Optr)&t_method_return);
    Block PBlock22829 = new_Block_with(PArray22830, empty_Array, PThreadedCode22831, 2, PSend22833, PSend22838);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22839 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22829);
    Array PThreadedCode22828 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22829, (Optr)&t_send1, (Optr)PSend22839, (Optr)&t_method_return);
    Method PMethod22827 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22828, 1, PSend22839);
    
    MethodClosure MC_SMB_remoteHost = new_MethodClosure((Method)PMethod22827, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_remoteHost, MC_SMB_remoteHost);
}


static void init_SMB_stream_() {
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22841 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22843 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22842 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22843, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22840 = new_Method_with(PArray22841, empty_Array, empty_Array, PThreadedCode22842, 2, PAssign22843, self);
    
    MethodClosure MC_SMB_stream_ = new_MethodClosure((Method)PMethod22840, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream_, MC_SMB_stream_);
}


static void init_SMB_headersAt_ifAbsent_() {
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray22845 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_hdrs_0_2 = new_Variable_named(L"hdrs", 0);
    Array PArray22846 = new_Array_with(1, (Optr)VAR_hdrs_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22849 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign22848 = new_Assign((Optr)VAR_hdrs_0_2, (Optr)PSend22849);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray22851 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend22853 = new_Send((Optr)VAR_hdrs_0_2, SMB_add_, 1, (Optr)VAR_value_1_0);
    Array PThreadedCode22852 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send1, (Optr)PSend22853, (Optr)&t_method_return);
    Block PBlock22850 = new_Block_with(PArray22851, empty_Array, PThreadedCode22852, 1, PSend22853);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend22854 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22850);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22855 = new_Send((Optr)VAR_hdrs_0_2, SMB_asArray, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend22858 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode22857 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend22858, (Optr)&t_block_return);
    Block PBlock22856 = new_Block_with(empty_Array, empty_Array, PThreadedCode22857, 1, PSend22858);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    // ifEmpty:. 
    Send PSend22859 = new_Send((Optr)PSend22855, SMB_ifEmpty_, 1, (Optr)PBlock22856);
    Array PThreadedCode22847 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign22848, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22849, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22850, (Optr)&t_send2, (Optr)PSend22854, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_send0, (Optr)PSend22855, (Optr)&t_push_closure, (Optr)PBlock22856, (Optr)&t_send1, (Optr)PSend22859, (Optr)&t_method_return);
    Method PMethod22844 = new_Method_with(PArray22845, PArray22846, empty_Array, PThreadedCode22847, 3, PAssign22848, PSend22854, PSend22859);
    
    MethodClosure MC_SMB_headersAt_ifAbsent_ = new_MethodClosure((Method)PMethod22844, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_ifAbsent_, MC_SMB_headersAt_ifAbsent_);
}


static void init_SMB_headerAt_() {
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22861 = new_Array_with(1, (Optr)VAR_key_0_0);
    String string_22865 = new_String(L"");
    Array PThreadedCode22864 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22865, (Optr)&t_block_return);
    Constant string_22865_Const = new_Constant((Optr)string_22865);
    Block PBlock22863 = new_Block_with(empty_Array, empty_Array, PThreadedCode22864, 1, string_22865_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    // headerAt:ifAbsent:. 
    Send PSend22866 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22863);
    Array PThreadedCode22862 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22863, (Optr)&t_send2, (Optr)PSend22866, (Optr)&t_method_return);
    Method PMethod22860 = new_Method_with(PArray22861, empty_Array, empty_Array, PThreadedCode22862, 1, PSend22866);
    
    MethodClosure MC_SMB_headerAt_ = new_MethodClosure((Method)PMethod22860, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_, MC_SMB_headerAt_);
}


static void init_SMB_chunkFrom_to_progress_() {
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_progressBlock_0_2 = new_Variable_named(L"progressBlock", 0);
    Array PArray22868 = new_Array_with(3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_2);
    Variable VAR_chunkSize_0_3 = new_Variable_named(L"chunkSize", 0);
    Variable VAR_firstLine_0_4 = new_Variable_named(L"firstLine", 0);
    Variable VAR_buffer_0_5 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_6 = new_Variable_named(L"totalRead", 0);
    Array PArray22869 = new_Array_with(4, (Optr)VAR_chunkSize_0_3, (Optr)VAR_firstLine_0_4, (Optr)VAR_buffer_0_5, (Optr)VAR_totalRead_0_6);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign22871 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22873 = new_Send((Optr)String_classReference, SMB_new, 0);
    Assign PAssign22872 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend22873);
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    // nextLine. 
    Send PSend22877 = new_Send((Optr)VAR_srcStream_0_0, SMB_nextLine, 0);
    Assign PAssign22876 = new_Assign((Optr)VAR_firstLine_0_4, (Optr)PSend22877);
    String string_22881 = new_String(L"16r");
    Constant string_22881_Const = new_Constant((Optr)string_22881);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend22882 = new_Send((Optr)VAR_firstLine_0_4, SMB_asUppercase, 0);
    // ,. 
    Send PSend22880 = new_Send((Optr)string_22881_Const, SMB__append_, 1, (Optr)PSend22882);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend22879 = new_Send((Optr)PSend22880, SMB_asNumber, 0);
    Assign PAssign22878 = new_Assign((Optr)VAR_chunkSize_0_3, (Optr)PSend22879);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22883 = new_Send((Optr)VAR_chunkSize_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode22875 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign22876, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_send0, (Optr)PSend22877, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22878, (Optr)&t_push1, (Optr)string_22881, (Optr)&t_push_variable, (Optr)VAR_firstLine_0_4, (Optr)&t_send0, (Optr)PSend22882, (Optr)&t_send1, (Optr)PSend22880, (Optr)&t_send0, (Optr)PSend22879, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22883, (Optr)&t_block_return);
    Block PBlock22874 = new_Block_with(empty_Array, empty_Array, PThreadedCode22875, 3, PAssign22876, PAssign22878, PSend22883);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend22888 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode22887 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend22888, (Optr)&t_block_return);
    Block PBlock22886 = new_Block_with(empty_Array, empty_Array, PThreadedCode22887, 1, PSend22888);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22889 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock22886);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22890 = new_Send((Optr)VAR_buffer_0_5, SMB_size, 0);
    // =. 
    Send PSend22891 = new_Send((Optr)PSend22890, SMB__equals_, 1, (Optr)VAR_chunkSize_0_3);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22897 = new_Send((Optr)VAR_buffer_0_5, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend22896 = new_Send((Optr)PSend22897, SMB_new_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign22895 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend22896);
    Array PThreadedCode22894 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign22895, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend22897, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend22896, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22893 = new_Block_with(empty_Array, empty_Array, PThreadedCode22894, 1, PAssign22895);
    // ifFalse:. 
    Send PSend22892 = new_Send((Optr)PSend22891, SMB_ifFalse_, 1, (Optr)PBlock22893);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend22899 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_chunkSize_0_3, (Optr)VAR_buffer_0_5, (Optr)int_1_Const);
    Assign PAssign22898 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend22899);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22900 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)VAR_buffer_0_5);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skip:. 
    Send PSend22901 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend22903 = new_Send((Optr)VAR_totalRead_0_6, SMB__plus_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign22902 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)PSend22903);
    Array PThreadedCode22885 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock22886, (Optr)&t_send1, (Optr)PSend22889, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend22890, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend22891, (Optr)&t_send_ifFalse_, (Optr)PSend22892, (Optr)PBlock22893, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22898, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend22899, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send1, (Optr)PSend22900, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22901, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22902, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend22903, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22884 = new_Block_with(empty_Array, empty_Array, PThreadedCode22885, 6, PSend22889, PSend22892, PAssign22898, PSend22900, PSend22901, PAssign22902);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend22904 = new_Send((Optr)PBlock22874, SMB_whileFalse_, 1, (Optr)PBlock22884);
    // skip:. 
    Send PSend22905 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22906 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend22909 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode22908 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend22909, (Optr)&t_block_return);
    Block PBlock22907 = new_Block_with(empty_Array, empty_Array, PThreadedCode22908, 1, PSend22909);
    // ifNotNil:. 
    Send PSend22910 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock22907);
    Array PThreadedCode22870 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign22871, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22872, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend22873, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22874, (Optr)&t_push_closure, (Optr)PBlock22884, (Optr)&t_send1, (Optr)PSend22904, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend22905, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend22906, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock22907, (Optr)&t_send1, (Optr)PSend22910, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22867 = new_Method_with(PArray22868, PArray22869, empty_Array, PThreadedCode22870, 7, PAssign22871, PAssign22872, PSend22904, PSend22905, PSend22906, PSend22910, self);
    
    MethodClosure MC_SMB_chunkFrom_to_progress_ = new_MethodClosure((Method)PMethod22867, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_chunkFrom_to_progress_, MC_SMB_chunkFrom_to_progress_);
}


static void init_SMB_headersAt_do_() {
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray22912 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray22915 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22917 = new_Send((Optr)VAR_aKey_0_0, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend22918 = new_Send((Optr)VAR_key_1_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22919 = new_Send((Optr)PSend22917, SMB__equals_, 1, (Optr)PSend22918);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22923 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_value_1_1);
    Array PThreadedCode22922 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend22923, (Optr)&t_block_return);
    Block PBlock22921 = new_Block_with(empty_Array, empty_Array, PThreadedCode22922, 1, PSend22923);
    // ifTrue:. 
    Send PSend22920 = new_Send((Optr)PSend22919, SMB_ifTrue_, 1, (Optr)PBlock22921);
    Array PThreadedCode22916 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send0, (Optr)PSend22917, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send0, (Optr)PSend22918, (Optr)&t_send1, (Optr)PSend22919, (Optr)&t_send_ifTrue_, (Optr)PSend22920, (Optr)PBlock22921, (Optr)&t_method_return);
    Block PBlock22914 = new_Block_with(PArray22915, empty_Array, PThreadedCode22916, 1, PSend22920);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend22924 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock22914);
    Array PThreadedCode22913 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22914, (Optr)&t_send1, (Optr)PSend22924, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22911 = new_Method_with(PArray22912, empty_Array, empty_Array, PThreadedCode22913, 2, PSend22924, self);
    
    MethodClosure MC_SMB_headersAt_do_ = new_MethodClosure((Method)PMethod22911, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_do_, MC_SMB_headersAt_do_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22926 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22928 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22929 = new_Send((Optr)PSend22928, SMB_name, 0);
    // printOn:. 
    Send PSend22930 = new_Send((Optr)PSend22929, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5737 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5737_Const = new_Constant((Optr)char_5737);
    // <<. 
    Send PSend22931 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5737_Const);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend22932 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22933 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22927 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22928, (Optr)&t_send0, (Optr)PSend22929, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22930, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5737, (Optr)&t_send1, (Optr)PSend22931, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22932, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22933, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22925 = new_Method_with(PArray22926, empty_Array, empty_Array, PThreadedCode22927, 5, PSend22930, PSend22931, PSend22932, PSend22933, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22925, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_contentLength() {
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22937 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_22939 = new_String(L"Content-Length");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22942 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22941 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22942, (Optr)&t_block_return);
    Block PBlock22940 = new_Block_with(empty_Array, empty_Array, PThreadedCode22941, 1, PSend22942);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_22939_Const = new_Constant((Optr)string_22939);
    // headerAt:ifAbsent:. 
    Send PSend22943 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_22939_Const, (Optr)PBlock22940);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend22944 = new_Send((Optr)PSend22943, SMB_asInteger, 0);
    Array PThreadedCode22938 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22939, (Optr)&t_push_closure, (Optr)PBlock22940, (Optr)&t_send2, (Optr)PSend22943, (Optr)&t_send0, (Optr)PSend22944, (Optr)&t_method_return);
    Block PBlock22936 = new_Block_with(PArray22937, empty_Array, PThreadedCode22938, 1, PSend22944);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22945 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22936);
    Array PThreadedCode22935 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22936, (Optr)&t_send1, (Optr)PSend22945, (Optr)&t_method_return);
    Method PMethod22934 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22935, 1, PSend22945);
    
    MethodClosure MC_SMB_contentLength = new_MethodClosure((Method)PMethod22934, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength, MC_SMB_contentLength);
}


static void init_SMB_headersAt_() {
    Symbol SMB_headersAt_ = new_Symbol(L"headersAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22947 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22951 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22952 = new_Send((Optr)PSend22951, SMB_asArray, 0);
    Array PThreadedCode22950 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22951, (Optr)&t_send0, (Optr)PSend22952, (Optr)&t_block_return);
    Block PBlock22949 = new_Block_with(empty_Array, empty_Array, PThreadedCode22950, 1, PSend22952);
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    // headersAt:ifAbsent:. 
    Send PSend22953 = new_Send((Optr)self, SMB_headersAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22949);
    Array PThreadedCode22948 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22949, (Optr)&t_send2, (Optr)PSend22953, (Optr)&t_method_return);
    Method PMethod22946 = new_Method_with(PArray22947, empty_Array, empty_Array, PThreadedCode22948, 1, PSend22953);
    
    MethodClosure MC_SMB_headersAt_ = new_MethodClosure((Method)PMethod22946, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_, MC_SMB_headersAt_);
}


static void init_SMB_protocol_() {
    Symbol SMB_protocol_ = new_Symbol(L"protocol:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray22955 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign22957 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_aString_0_0);
    Array PThreadedCode22956 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22957, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22954 = new_Method_with(PArray22955, empty_Array, empty_Array, PThreadedCode22956, 2, PAssign22957, self);
    
    MethodClosure MC_SMB_protocol_ = new_MethodClosure((Method)PMethod22954, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol_, MC_SMB_protocol_);
}


static void init_SMB_contentLength_() {
    Symbol SMB_contentLength_ = new_Symbol(L"contentLength:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray22959 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    String string_22961 = new_String(L"Content-Length");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_22961_Const = new_Constant((Optr)string_22961);
    // headerAt:put:. 
    Send PSend22962 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_22961_Const, (Optr)VAR_aNumber_0_0);
    Array PThreadedCode22960 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22961, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send2, (Optr)PSend22962, (Optr)&t_method_return);
    Method PMethod22958 = new_Method_with(PArray22959, empty_Array, empty_Array, PThreadedCode22960, 1, PSend22962);
    
    MethodClosure MC_SMB_contentLength_ = new_MethodClosure((Method)PMethod22958, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength_, MC_SMB_contentLength_);
}


static void init_SMB_streamFrom_to_size_progress_() {
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_sizeOrNil_0_2 = new_Variable_named(L"sizeOrNil", 0);
    Variable VAR_progressBlock_0_3 = new_Variable_named(L"progressBlock", 0);
    Array PArray22964 = new_Array_with(4, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_progressBlock_0_3);
    Variable VAR_buffer_0_4 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_5 = new_Variable_named(L"totalRead", 0);
    Variable VAR_remaining_0_6 = new_Variable_named(L"remaining", 0);
    Variable VAR_size_0_7 = new_Variable_named(L"size", 0);
    Array PArray22965 = new_Array_with(4, (Optr)VAR_buffer_0_4, (Optr)VAR_totalRead_0_5, (Optr)VAR_remaining_0_6, (Optr)VAR_size_0_7);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22968 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_22970 = new_String(L"transfer-encoding");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_22970_Const = new_Constant((Optr)string_22970);
    // headerAt:. 
    Send PSend22971 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_22970_Const);
    Variable VAR_encoding_2_0 = new_Variable_named(L"encoding", 2);
    Array PArray22973 = new_Array_with(1, (Optr)VAR_encoding_2_0);
    String string_22975 = new_String(L"chunked");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_22975_Const = new_Constant((Optr)string_22975);
    // =. 
    Send PSend22976 = new_Send((Optr)VAR_encoding_2_0, SMB__equals_, 1, (Optr)string_22975_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    // chunkFrom:to:progress:. 
    Send PSend22980 = new_Send((Optr)self, SMB_chunkFrom_to_progress_, 3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_3);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22981 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22980);
    Array PThreadedCode22979 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_send3, (Optr)PSend22980, (Optr)&t_send1, (Optr)PSend22981, (Optr)&t_block_return);
    Block PBlock22978 = new_Block_with(empty_Array, empty_Array, PThreadedCode22979, 1, PSend22981);
    String string_22984 = new_String(L"Unknown transfer-encoding: ");
    Constant string_22984_Const = new_Constant((Optr)string_22984);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22985 = new_Send((Optr)string_22984_Const, SMB__append_, 1, (Optr)VAR_encoding_2_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend22986 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend22985);
    Array PThreadedCode22983 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22984, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_send1, (Optr)PSend22985, (Optr)&t_send1, (Optr)PSend22986, (Optr)&t_block_return);
    Block PBlock22982 = new_Block_with(empty_Array, empty_Array, PThreadedCode22983, 1, PSend22986);
    // ifTrue:ifFalse:. 
    Send PSend22977 = new_Send((Optr)PSend22976, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22978, (Optr)PBlock22982);
    Array PThreadedCode22974 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_push1, (Optr)string_22975, (Optr)&t_send1, (Optr)PSend22976, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22977, (Optr)PBlock22978, (Optr)PBlock22982, (Optr)&t_method_return);
    Block PBlock22972 = new_Block_with(PArray22973, empty_Array, PThreadedCode22974, 1, PSend22977);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend22987 = new_Send((Optr)PSend22971, SMB_ifNotEmpty_, 1, (Optr)PBlock22972);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend22988 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend22992 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22991 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22992, (Optr)&t_block_return);
    Block PBlock22990 = new_Block_with(empty_Array, empty_Array, PThreadedCode22991, 1, PSend22992);
    // ifTrue:. 
    Send PSend22989 = new_Send((Optr)PSend22988, SMB_ifTrue_, 1, (Optr)PBlock22990);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    // new:. 
    Send PSend22994 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4096_Const);
    Assign PAssign22993 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend22994);
    Assign PAssign22995 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)int_0_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Array PThreadedCode22999 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    Block PBlock22998 = new_Block_with(empty_Array, empty_Array, PThreadedCode22999, 1, int_0_Const);
    // ifNil:. 
    Send PSend22997 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_, 1, (Optr)PBlock22998);
    Assign PAssign22996 = new_Assign((Optr)VAR_size_0_7, (Optr)PSend22997);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend23002 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend23005 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend23006 = new_Send((Optr)PSend23005, SMB_not, 0);
    Array PThreadedCode23004 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23005, (Optr)&t_send0, (Optr)PSend23006, (Optr)&t_block_return);
    Block PBlock23003 = new_Block_with(empty_Array, empty_Array, PThreadedCode23004, 1, PSend23006);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend23007 = new_Send((Optr)PSend23002, SMB_and_, 1, (Optr)PBlock23003);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend23010 = new_Send((Optr)VAR_totalRead_0_5, SMB__lt_, 1, (Optr)VAR_size_0_7);
    Array PThreadedCode23009 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_size_0_7, (Optr)&t_send1, (Optr)PSend23010, (Optr)&t_block_return);
    Block PBlock23008 = new_Block_with(empty_Array, empty_Array, PThreadedCode23009, 1, PSend23010);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend23011 = new_Send((Optr)PSend23007, SMB_or_, 1, (Optr)PBlock23008);
    Array PThreadedCode23001 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23002, (Optr)&t_push_closure, (Optr)PBlock23003, (Optr)&t_send1, (Optr)PSend23007, (Optr)&t_push_closure, (Optr)PBlock23008, (Optr)&t_send1, (Optr)PSend23011, (Optr)&t_block_return);
    Block PBlock23000 = new_Block_with(empty_Array, empty_Array, PThreadedCode23001, 1, PSend23011);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23016 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23015 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23016, (Optr)&t_block_return);
    Block PBlock23014 = new_Block_with(empty_Array, empty_Array, PThreadedCode23015, 1, PSend23016);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23017 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23014);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    SmallInt int_99999 = new_SmallInt(99999);
    Array PThreadedCode23021 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_99999, (Optr)&t_block_return);
    Constant int_99999_Const = new_Constant((Optr)int_99999);
    Block PBlock23020 = new_Block_with(empty_Array, empty_Array, PThreadedCode23021, 1, int_99999_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend23024 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__minus_, 1, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23023 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send1, (Optr)PSend23024, (Optr)&t_block_return);
    Block PBlock23022 = new_Block_with(empty_Array, empty_Array, PThreadedCode23023, 1, PSend23024);
    // ifNil:ifNotNil:. 
    Send PSend23019 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock23020, (Optr)PBlock23022);
    Assign PAssign23018 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23019);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23025 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend23026 = new_Send((Optr)VAR_remaining_0_6, SMB__gt_, 1, (Optr)PSend23025);
    // size. 
    Send PSend23031 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Assign PAssign23030 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend23031);
    Array PThreadedCode23029 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign23030, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23031, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23028 = new_Block_with(empty_Array, empty_Array, PThreadedCode23029, 1, PAssign23030);
    // ifTrue:. 
    Send PSend23027 = new_Send((Optr)PSend23026, SMB_ifTrue_, 1, (Optr)PBlock23028);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23033 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_remaining_0_6, (Optr)VAR_buffer_0_4, (Optr)int_1_Const);
    Assign PAssign23032 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend23033);
    // size. 
    Send PSend23034 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // <. 
    Send PSend23035 = new_Send((Optr)VAR_remaining_0_6, SMB__lt_, 1, (Optr)PSend23034);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23039 = new_Send((Optr)VAR_buffer_0_4, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_remaining_0_6);
    Array PThreadedCode23038 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_send2, (Optr)PSend23039, (Optr)&t_block_return);
    Block PBlock23037 = new_Block_with(empty_Array, empty_Array, PThreadedCode23038, 1, PSend23039);
    Array PThreadedCode23041 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_block_return);
    Block PBlock23040 = new_Block_with(empty_Array, empty_Array, PThreadedCode23041, 1, VAR_buffer_0_4);
    // ifTrue:ifFalse:. 
    Send PSend23036 = new_Send((Optr)PSend23035, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23037, (Optr)PBlock23040);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23042 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)PSend23036);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // size. 
    Send PSend23045 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // +. 
    Send PSend23044 = new_Send((Optr)VAR_totalRead_0_5, SMB__plus_, 1, (Optr)PSend23045);
    Assign PAssign23043 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)PSend23044);
    Array PThreadedCode23013 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23014, (Optr)&t_send1, (Optr)PSend23017, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23018, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock23020, (Optr)&t_push_closure, (Optr)PBlock23022, (Optr)&t_send2, (Optr)PSend23019, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23025, (Optr)&t_send1, (Optr)PSend23026, (Optr)&t_send_ifTrue_, (Optr)PSend23027, (Optr)PBlock23028, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23032, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23033, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23034, (Optr)&t_send1, (Optr)PSend23035, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23036, (Optr)PBlock23037, (Optr)PBlock23040, (Optr)&t_send1, (Optr)PSend23042, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23043, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend23045, (Optr)&t_send1, (Optr)PSend23044, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23012 = new_Block_with(empty_Array, empty_Array, PThreadedCode23013, 6, PSend23017, PAssign23018, PSend23027, PAssign23032, PSend23042, PAssign23043);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend23046 = new_Send((Optr)PBlock23000, SMB_whileTrue_, 1, (Optr)PBlock23012);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23047 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23050 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode23049 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend23050, (Optr)&t_block_return);
    Block PBlock23048 = new_Block_with(empty_Array, empty_Array, PThreadedCode23049, 1, PSend23050);
    // ifNotNil:. 
    Send PSend23051 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock23048);
    Array PThreadedCode22969 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22970, (Optr)&t_send1, (Optr)PSend22971, (Optr)&t_push_closure, (Optr)PBlock22972, (Optr)&t_send1, (Optr)PSend22987, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22988, (Optr)&t_send_ifTrue_, (Optr)PSend22989, (Optr)PBlock22990, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22993, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_send1, (Optr)PSend22994, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22995, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22996, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock22998, (Optr)&t_send1, (Optr)PSend22997, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23000, (Optr)&t_push_closure, (Optr)PBlock23012, (Optr)&t_send1, (Optr)PSend23046, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23047, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock23048, (Optr)&t_send1, (Optr)PSend23051, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22967 = new_Block_with(PArray22968, empty_Array, PThreadedCode22969, 9, PSend22987, PSend22989, PAssign22993, PAssign22995, PAssign22996, PSend23046, PSend23047, PSend23051, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23052 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22967);
    Array PThreadedCode22966 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22967, (Optr)&t_send1, (Optr)PSend23052, (Optr)&t_method_return);
    Method PMethod22963 = new_Method_with(PArray22964, PArray22965, empty_Array, PThreadedCode22966, 1, PSend23052);
    
    MethodClosure MC_SMB_streamFrom_to_size_progress_ = new_MethodClosure((Method)PMethod22963, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_streamFrom_to_size_progress_, MC_SMB_streamFrom_to_size_progress_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray23056 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend23058 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode23057 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend23058, (Optr)&t_method_return);
    Block PBlock23055 = new_Block_with(PArray23056, empty_Array, PThreadedCode23057, 1, PSend23058);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend23059 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock23055);
    Array PThreadedCode23054 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock23055, (Optr)&t_send1, (Optr)PSend23059, (Optr)&t_method_return);
    Method PMethod23053 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23054, 1, PSend23059);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod23053, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_contentWithProgress_() {
    Symbol SMB_contentWithProgress_ = new_Symbol(L"contentWithProgress:");
    Variable VAR_progressBlock_0_0 = new_Variable_named(L"progressBlock", 0);
    Array PArray23061 = new_Array_with(1, (Optr)VAR_progressBlock_0_0);
    Variable VAR_length_1_0 = new_Variable_named(L"length", 1);
    Array PArray23064 = new_Array_with(1, (Optr)VAR_length_1_0);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23067 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23066 = new_Assign((Optr)VAR_length_1_0, (Optr)PSend23067);
    Symbol SMB_new_streamContents_ = new_Symbol(L"new:streamContents:");
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23072 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23071 = new_Block_with(empty_Array, empty_Array, PThreadedCode23072, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23070 = new_Send((Optr)VAR_length_1_0, SMB_ifNil_, 1, (Optr)PBlock23071);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23074 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23076 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_s_2_0, (Optr)VAR_length_1_0, (Optr)VAR_progressBlock_0_0);
    Array PThreadedCode23075 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_0, (Optr)&t_send4, (Optr)PSend23076, (Optr)&t_method_return);
    Block PBlock23073 = new_Block_with(PArray23074, empty_Array, PThreadedCode23075, 1, PSend23076);
    // new:streamContents:. 
    Send PSend23069 = new_Send((Optr)String_classReference, SMB_new_streamContents_, 2, (Optr)PSend23070, (Optr)PBlock23073);
    Assign PAssign23068 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23069);
    Array PThreadedCode23065 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign23066, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23067, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23068, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_closure, (Optr)PBlock23071, (Optr)&t_send1, (Optr)PSend23070, (Optr)&t_push_closure, (Optr)PBlock23073, (Optr)&t_send2, (Optr)PSend23069, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23063 = new_Block_with(empty_Array, PArray23064, PThreadedCode23065, 2, PAssign23066, PAssign23068);
    // ifNil:. 
    Send PSend23077 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23063);
    Array PThreadedCode23062 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23063, (Optr)&t_send1, (Optr)PSend23077, (Optr)&t_method_return);
    Method PMethod23060 = new_Method_with(PArray23061, empty_Array, empty_Array, PThreadedCode23062, 1, PSend23077);
    
    MethodClosure MC_SMB_contentWithProgress_ = new_MethodClosure((Method)PMethod23060, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentWithProgress_, MC_SMB_contentWithProgress_);
}


static void init_SMB_stream() {
    Symbol SMB_stream = new_Symbol(L"stream");
    Array PThreadedCode23079 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod23078 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23079, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_stream = new_MethodClosure((Method)PMethod23078, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream, MC_SMB_stream);
}


static void init_SMB_protocol() {
    Symbol SMB_protocol = new_Symbol(L"protocol");
    Array PThreadedCode23081 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_method_return);
    Method PMethod23080 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23081, 1, slot_WebClient_Core_WebMessage_protocol);
    
    MethodClosure MC_SMB_protocol = new_MethodClosure((Method)PMethod23080, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol, MC_SMB_protocol);
}


static void init_SMB_writeHeadersOn_() {
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23083 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23086 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23089 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23091 = new_String(L": ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23091_Const = new_Constant((Optr)string_23091);
    // ,. 
    Send PSend23092 = new_Send((Optr)VAR_key_1_0, SMB__append_, 1, (Optr)string_23091_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23093 = new_Send((Optr)VAR_value_1_1, SMB_asString, 0);
    // ,. 
    Send PSend23094 = new_Send((Optr)PSend23092, SMB__append_, 1, (Optr)PSend23093);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23095 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23094);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23096 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Array PThreadedCode23090 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push1, (Optr)string_23091, (Optr)&t_send1, (Optr)PSend23092, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send0, (Optr)PSend23093, (Optr)&t_send1, (Optr)PSend23094, (Optr)&t_send1, (Optr)PSend23095, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23096, (Optr)&t_method_return);
    Block PBlock23088 = new_Block_with(PArray23089, empty_Array, PThreadedCode23090, 2, PSend23095, PSend23096);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23097 = new_Send((Optr)PBlock23088, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23087 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock23088, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23097, (Optr)&t_method_return);
    Block PBlock23085 = new_Block_with(PArray23086, empty_Array, PThreadedCode23087, 1, PSend23097);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23098 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23085);
    Array PThreadedCode23084 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23085, (Optr)&t_send1, (Optr)PSend23098, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23082 = new_Method_with(PArray23083, empty_Array, empty_Array, PThreadedCode23084, 2, PSend23098, self);
    
    MethodClosure MC_SMB_writeHeadersOn_ = new_MethodClosure((Method)PMethod23082, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeHeadersOn_, MC_SMB_writeHeadersOn_);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend23103 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_destroy, 0);
    Array PThreadedCode23102 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend23103, (Optr)&t_block_return);
    Block PBlock23101 = new_Block_with(empty_Array, empty_Array, PThreadedCode23102, 1, PSend23103);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23104 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock23101);
    Array PThreadedCode23100 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock23101, (Optr)&t_send1, (Optr)PSend23104, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23099 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23100, 2, PSend23104, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod23099, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23106 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    // writeHeadersOn:. 
    Send PSend23108 = new_Send((Optr)self, SMB_writeHeadersOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23109 = new_Send((Optr)VAR_aStream_0_0, SMB_crlf, 0);
    Array PThreadedCode23107 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23108, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23109, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23105 = new_Method_with(PArray23106, empty_Array, empty_Array, PThreadedCode23107, 3, PSend23108, PSend23109, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod23105, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_headersDo_() {
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray23111 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23114 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23116 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23117 = new_Send((Optr)VAR_assoc_1_0, SMB_value, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23118 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend23116, (Optr)PSend23117);
    Array PThreadedCode23115 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23116, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23117, (Optr)&t_send2, (Optr)PSend23118, (Optr)&t_method_return);
    Block PBlock23113 = new_Block_with(PArray23114, empty_Array, PThreadedCode23115, 1, PSend23118);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23119 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23113);
    Array PThreadedCode23112 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23113, (Optr)&t_send1, (Optr)PSend23119, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23110 = new_Method_with(PArray23111, empty_Array, empty_Array, PThreadedCode23112, 2, PSend23119, self);
    
    MethodClosure MC_SMB_headersDo_ = new_MethodClosure((Method)PMethod23110, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersDo_, MC_SMB_headersDo_);
}


static void init_SMB_multipartBoundary() {
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    Variable VAR_header_0_0 = new_Variable_named(L"header", 0);
    Array PArray23121 = new_Array_with(1, (Optr)VAR_header_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23124 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    String string_23128 = new_String(L"Content-Type");
    Constant string_23128_Const = new_Constant((Optr)string_23128);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23131 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23130 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23131, (Optr)&t_block_return);
    Block PBlock23129 = new_Block_with(empty_Array, empty_Array, PThreadedCode23130, 1, PSend23131);
    // headerAt:ifAbsent:. 
    Send PSend23127 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23128_Const, (Optr)PBlock23129);
    Assign PAssign23126 = new_Assign((Optr)VAR_header_0_0, (Optr)PSend23127);
    String string_23132 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23132_Const = new_Constant((Optr)string_23132);
    // beginsWith:. 
    Send PSend23133 = new_Send((Optr)VAR_header_0_0, SMB_beginsWith_, 1, (Optr)string_23132_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend23137 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23136 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23137, (Optr)&t_block_return);
    Block PBlock23135 = new_Block_with(empty_Array, empty_Array, PThreadedCode23136, 1, PSend23137);
    // ifFalse:. 
    Send PSend23134 = new_Send((Optr)PSend23133, SMB_ifFalse_, 1, (Optr)PBlock23135);
    String string_23138 = new_String(L"boundary=");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23138_Const = new_Constant((Optr)string_23138);
    // findString:. 
    Send PSend23139 = new_Send((Optr)VAR_header_0_0, SMB_findString_, 1, (Optr)string_23138_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_9_Const = new_Constant((Optr)int_9);
    // +. 
    Send PSend23140 = new_Send((Optr)PSend23139, SMB__plus_, 1, (Optr)int_9_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23141 = new_Send((Optr)VAR_header_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23142 = new_Send((Optr)VAR_header_0_0, SMB_copyFrom_to_, 2, (Optr)PSend23140, (Optr)PSend23141);
    Array PThreadedCode23125 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23126, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23128, (Optr)&t_push_closure, (Optr)PBlock23129, (Optr)&t_send2, (Optr)PSend23127, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23132, (Optr)&t_send1, (Optr)PSend23133, (Optr)&t_send_ifFalse_, (Optr)PSend23134, (Optr)PBlock23135, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23138, (Optr)&t_send1, (Optr)PSend23139, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend23140, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_send0, (Optr)PSend23141, (Optr)&t_send2, (Optr)PSend23142, (Optr)&t_method_return);
    Block PBlock23123 = new_Block_with(PArray23124, empty_Array, PThreadedCode23125, 3, PAssign23126, PSend23134, PSend23142);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23143 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23123);
    Array PThreadedCode23122 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23123, (Optr)&t_send1, (Optr)PSend23143, (Optr)&t_method_return);
    Method PMethod23120 = new_Method_with(empty_Array, PArray23121, empty_Array, PThreadedCode23122, 1, PSend23143);
    
    MethodClosure MC_SMB_multipartBoundary = new_MethodClosure((Method)PMethod23120, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_multipartBoundary, MC_SMB_multipartBoundary);
}


static void init_SMB_closeIfTransient() {
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend23146 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend23150 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode23149 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23150, (Optr)&t_block_return);
    Block PBlock23148 = new_Block_with(empty_Array, empty_Array, PThreadedCode23149, 1, PSend23150);
    // ifFalse:. 
    Send PSend23147 = new_Send((Optr)PSend23146, SMB_ifFalse_, 1, (Optr)PBlock23148);
    Array PThreadedCode23145 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23146, (Optr)&t_send_ifFalse_, (Optr)PSend23147, (Optr)PBlock23148, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23144 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23145, 2, PSend23147, self);
    
    MethodClosure MC_SMB_closeIfTransient = new_MethodClosure((Method)PMethod23144, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_closeIfTransient, MC_SMB_closeIfTransient);
}


static void init_SMB_contentType_() {
    Symbol SMB_contentType_ = new_Symbol(L"contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23152 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23154 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23154_Const = new_Constant((Optr)string_23154);
    // headerAt:put:. 
    Send PSend23155 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23154_Const, (Optr)VAR_aString_0_0);
    Array PThreadedCode23153 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23154, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23155, (Optr)&t_method_return);
    Method PMethod23151 = new_Method_with(PArray23152, empty_Array, empty_Array, PThreadedCode23153, 1, PSend23155);
    
    MethodClosure MC_SMB_contentType_ = new_MethodClosure((Method)PMethod23151, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType_, MC_SMB_contentType_);
}


static void init_SMB_headerAt_put_() {
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23157 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23160 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_assoc_2_0 = new_Variable_named(L"assoc", 2);
    Array PArray23163 = new_Array_with(1, (Optr)VAR_assoc_2_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23165 = new_Send((Optr)VAR_assoc_2_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23166 = new_Send((Optr)PSend23165, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23167 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23168 = new_Send((Optr)PSend23166, SMB__equals_, 1, (Optr)PSend23167);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23172 = new_Send((Optr)VAR_assoc_2_0, SMB_value_, 1, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23173 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23171 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend23172, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23173, (Optr)&t_block_return);
    Block PBlock23170 = new_Block_with(empty_Array, empty_Array, PThreadedCode23171, 2, PSend23172, PSend23173);
    // ifTrue:. 
    Send PSend23169 = new_Send((Optr)PSend23168, SMB_ifTrue_, 1, (Optr)PBlock23170);
    Array PThreadedCode23164 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_send0, (Optr)PSend23165, (Optr)&t_send0, (Optr)PSend23166, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23167, (Optr)&t_send1, (Optr)PSend23168, (Optr)&t_send_ifTrue_, (Optr)PSend23169, (Optr)PBlock23170, (Optr)&t_method_return);
    Block PBlock23162 = new_Block_with(PArray23163, empty_Array, PThreadedCode23164, 1, PSend23169);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23174 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23162);
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    // addHeader:value:. 
    Send PSend23175 = new_Send((Optr)self, SMB_addHeader_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Array PThreadedCode23161 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23162, (Optr)&t_send1, (Optr)PSend23174, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23175, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23159 = new_Block_with(PArray23160, empty_Array, PThreadedCode23161, 3, PSend23174, PSend23175, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23176 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23159);
    Array PThreadedCode23158 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23159, (Optr)&t_send1, (Optr)PSend23176, (Optr)&t_method_return);
    Method PMethod23156 = new_Method_with(PArray23157, empty_Array, empty_Array, PThreadedCode23158, 1, PSend23176);
    
    MethodClosure MC_SMB_headerAt_put_ = new_MethodClosure((Method)PMethod23156, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_put_, MC_SMB_headerAt_put_);
}


static void init_SMB_headerAt_ifAbsent_() {
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23178 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23181 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray23184 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23186 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode23185 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend23186, (Optr)&t_method_return);
    Block PBlock23183 = new_Block_with(PArray23184, empty_Array, PThreadedCode23185, 1, PSend23186);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23187 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23183);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23188 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23182 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23183, (Optr)&t_send2, (Optr)PSend23187, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23188, (Optr)&t_method_return);
    Block PBlock23180 = new_Block_with(PArray23181, empty_Array, PThreadedCode23182, 2, PSend23187, PSend23188);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23189 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23180);
    Array PThreadedCode23179 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23180, (Optr)&t_send1, (Optr)PSend23189, (Optr)&t_method_return);
    Method PMethod23177 = new_Method_with(PArray23178, empty_Array, empty_Array, PThreadedCode23179, 1, PSend23189);
    
    MethodClosure MC_SMB_headerAt_ifAbsent_ = new_MethodClosure((Method)PMethod23177, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_ifAbsent_, MC_SMB_headerAt_ifAbsent_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend23195 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign23194 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23195);
    Array PThreadedCode23193 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23194, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23195, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23192 = new_Block_with(empty_Array, empty_Array, PThreadedCode23193, 1, PAssign23194);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23196 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23192);
    Array PThreadedCode23191 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23192, (Optr)&t_send1, (Optr)PSend23196, (Optr)&t_method_return);
    Method PMethod23190 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23191, 1, PSend23196);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod23190, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR_length_0_0 = new_Variable_named(L"length", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_buffer_0_2 = new_Variable_named(L"buffer", 0);
    Array PArray23198 = new_Array_with(3, (Optr)VAR_length_0_0, (Optr)VAR_size_0_1, (Optr)VAR_buffer_0_2);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23201 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23200 = new_Assign((Optr)VAR_length_0_0, (Optr)PSend23201);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23205 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23204 = new_Block_with(empty_Array, empty_Array, PThreadedCode23205, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23203 = new_Send((Optr)VAR_length_0_0, SMB_ifNil_, 1, (Optr)PBlock23204);
    Assign PAssign23202 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend23203);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23208 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend23207 = new_Send((Optr)PSend23208, SMB_writeStream, 0);
    Assign PAssign23206 = new_Assign((Optr)VAR_buffer_0_2, (Optr)PSend23207);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23209 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_buffer_0_2, (Optr)VAR_length_0_0, (Optr)nil_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend23210 = new_Send((Optr)VAR_buffer_0_2, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23211 = new_Send((Optr)PSend23210, SMB__equals_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_originalContents = new_Symbol(L"originalContents");
    // originalContents. 
    Send PSend23215 = new_Send((Optr)VAR_buffer_0_2, SMB_originalContents, 0);
    Array PThreadedCode23214 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23215, (Optr)&t_block_return);
    Block PBlock23213 = new_Block_with(empty_Array, empty_Array, PThreadedCode23214, 1, PSend23215);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend23218 = new_Send((Optr)VAR_buffer_0_2, SMB_contents, 0);
    Array PThreadedCode23217 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23218, (Optr)&t_block_return);
    Block PBlock23216 = new_Block_with(empty_Array, empty_Array, PThreadedCode23217, 1, PSend23218);
    // ifTrue:ifFalse:. 
    Send PSend23212 = new_Send((Optr)PSend23211, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23213, (Optr)PBlock23216);
    Array PThreadedCode23199 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign23200, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23201, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23202, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_closure, (Optr)PBlock23204, (Optr)&t_send1, (Optr)PSend23203, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23206, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23208, (Optr)&t_send0, (Optr)PSend23207, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend23209, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend23210, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend23211, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23212, (Optr)PBlock23213, (Optr)PBlock23216, (Optr)&t_method_return);
    Method PMethod23197 = new_Method_with(empty_Array, PArray23198, empty_Array, PThreadedCode23199, 5, PAssign23200, PAssign23202, PAssign23206, PSend23209, PSend23212);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod23197, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_isPersistent() {
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23222 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23224 = new_String(L"Connection");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_23224_Const = new_Constant((Optr)string_23224);
    // headerAt:. 
    Send PSend23225 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23224_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23226 = new_Send((Optr)PSend23225, SMB_asLowercase, 0);
    String string_23227 = new_String(L"close");
    Constant string_23227_Const = new_Constant((Optr)string_23227);
    // asLowercase. 
    Send PSend23228 = new_Send((Optr)string_23227_Const, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23229 = new_Send((Optr)PSend23226, SMB__equals_, 1, (Optr)PSend23228);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23233 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23232 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23233, (Optr)&t_block_return);
    Block PBlock23231 = new_Block_with(empty_Array, empty_Array, PThreadedCode23232, 1, PSend23233);
    // ifTrue:. 
    Send PSend23230 = new_Send((Optr)PSend23229, SMB_ifTrue_, 1, (Optr)PBlock23231);
    String string_23234 = new_String(L"Connection");
    Constant string_23234_Const = new_Constant((Optr)string_23234);
    // headerAt:. 
    Send PSend23235 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_23234_Const);
    // asLowercase. 
    Send PSend23236 = new_Send((Optr)PSend23235, SMB_asLowercase, 0);
    String string_23237 = new_String(L"keep-alive");
    Constant string_23237_Const = new_Constant((Optr)string_23237);
    // asLowercase. 
    Send PSend23238 = new_Send((Optr)string_23237_Const, SMB_asLowercase, 0);
    // =. 
    Send PSend23239 = new_Send((Optr)PSend23236, SMB__equals_, 1, (Optr)PSend23238);
    // escape:. 
    Send PSend23243 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23242 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23243, (Optr)&t_block_return);
    Block PBlock23241 = new_Block_with(empty_Array, empty_Array, PThreadedCode23242, 1, PSend23243);
    // ifTrue:. 
    Send PSend23240 = new_Send((Optr)PSend23239, SMB_ifTrue_, 1, (Optr)PBlock23241);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend23244 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23245 = new_String(L"HTTP/1.0");
    Constant string_23245_Const = new_Constant((Optr)string_23245);
    // =. 
    Send PSend23246 = new_Send((Optr)PSend23244, SMB__equals_, 1, (Optr)string_23245_Const);
    // escape:. 
    Send PSend23250 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode23249 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend23250, (Optr)&t_block_return);
    Block PBlock23248 = new_Block_with(empty_Array, empty_Array, PThreadedCode23249, 1, PSend23250);
    // ifTrue:. 
    Send PSend23247 = new_Send((Optr)PSend23246, SMB_ifTrue_, 1, (Optr)PBlock23248);
    // protocol. 
    Send PSend23251 = new_Send((Optr)self, SMB_protocol, 0);
    String string_23252 = new_String(L"HTTP/1.1");
    Constant string_23252_Const = new_Constant((Optr)string_23252);
    // =. 
    Send PSend23253 = new_Send((Optr)PSend23251, SMB__equals_, 1, (Optr)string_23252_Const);
    // escape:. 
    Send PSend23257 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode23256 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend23257, (Optr)&t_block_return);
    Block PBlock23255 = new_Block_with(empty_Array, empty_Array, PThreadedCode23256, 1, PSend23257);
    // ifTrue:. 
    Send PSend23254 = new_Send((Optr)PSend23253, SMB_ifTrue_, 1, (Optr)PBlock23255);
    Array PThreadedCode23223 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23224, (Optr)&t_send1, (Optr)PSend23225, (Optr)&t_send0, (Optr)PSend23226, (Optr)&t_push1, (Optr)string_23227, (Optr)&t_send0, (Optr)PSend23228, (Optr)&t_send1, (Optr)PSend23229, (Optr)&t_send_ifTrue_, (Optr)PSend23230, (Optr)PBlock23231, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23234, (Optr)&t_send1, (Optr)PSend23235, (Optr)&t_send0, (Optr)PSend23236, (Optr)&t_push1, (Optr)string_23237, (Optr)&t_send0, (Optr)PSend23238, (Optr)&t_send1, (Optr)PSend23239, (Optr)&t_send_ifTrue_, (Optr)PSend23240, (Optr)PBlock23241, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23244, (Optr)&t_push1, (Optr)string_23245, (Optr)&t_send1, (Optr)PSend23246, (Optr)&t_send_ifTrue_, (Optr)PSend23247, (Optr)PBlock23248, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23251, (Optr)&t_push1, (Optr)string_23252, (Optr)&t_send1, (Optr)PSend23253, (Optr)&t_send_ifTrue_, (Optr)PSend23254, (Optr)PBlock23255, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock23221 = new_Block_with(PArray23222, empty_Array, PThreadedCode23223, 5, PSend23230, PSend23240, PSend23247, PSend23254, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23258 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23221);
    Array PThreadedCode23220 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23221, (Optr)&t_send1, (Optr)PSend23258, (Optr)&t_method_return);
    Method PMethod23219 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23220, 1, PSend23258);
    
    MethodClosure MC_SMB_isPersistent = new_MethodClosure((Method)PMethod23219, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_isPersistent, MC_SMB_isPersistent);
}


static void init_SMB_removeHeader_() {
    Symbol SMB_removeHeader_ = new_Symbol(L"removeHeader:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23260 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray23265 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23267 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23268 = new_Send((Optr)PSend23267, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23269 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23270 = new_Send((Optr)PSend23268, SMB__equals_, 1, (Optr)PSend23269);
    Array PThreadedCode23266 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend23267, (Optr)&t_send0, (Optr)PSend23268, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23269, (Optr)&t_send1, (Optr)PSend23270, (Optr)&t_method_return);
    Block PBlock23264 = new_Block_with(PArray23265, empty_Array, PThreadedCode23266, 1, PSend23270);
    // reject:. 
    Send PSend23263 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_reject_, 1, (Optr)PBlock23264);
    Assign PAssign23262 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend23263);
    Array PThreadedCode23261 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign23262, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23264, (Optr)&t_send1, (Optr)PSend23263, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23259 = new_Method_with(PArray23260, empty_Array, empty_Array, PThreadedCode23261, 2, PAssign23262, self);
    
    MethodClosure MC_SMB_removeHeader_ = new_MethodClosure((Method)PMethod23259, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_removeHeader_, MC_SMB_removeHeader_);
}


static void init_SMB_addHeader_value_() {
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23272 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23274 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23275 = new_Send((Optr)PSend23274, SMB_key_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23276 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_add_, 1, (Optr)PSend23275);
    Array PThreadedCode23273 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23274, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23275, (Optr)&t_send1, (Optr)PSend23276, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23271 = new_Method_with(PArray23272, empty_Array, empty_Array, PThreadedCode23273, 2, PSend23276, self);
    
    MethodClosure MC_SMB_addHeader_value_ = new_MethodClosure((Method)PMethod23271, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_addHeader_value_, MC_SMB_addHeader_value_);
}


static void init_SMB_content_() {
    Symbol SMB_content_ = new_Symbol(L"content:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23278 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23280 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)VAR_aString_0_0);
    Array PThreadedCode23279 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23280, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23277 = new_Method_with(PArray23278, empty_Array, empty_Array, PThreadedCode23279, 2, PAssign23280, self);
    
    MethodClosure MC_SMB_content_ = new_MethodClosure((Method)PMethod23277, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content_, MC_SMB_content_);
}


static void init_class_SMB_statusCodeAt_() {
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray23282 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend23284 = new_Send((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, SMB_at_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode23283 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend23284, (Optr)&t_method_return);
    Method PMethod23281 = new_Method_with(PArray23282, empty_Array, empty_Array, PThreadedCode23283, 1, PSend23284);
    
    MethodClosure MC_SMB_statusCodeAt_ = new_MethodClosure((Method)PMethod23281, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_statusCodeAt_, MC_SMB_statusCodeAt_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23290 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_100 = new_SmallInt(100);
    String string_23292 = new_String(L"Continue");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant int_100_Const = new_Constant((Optr)int_100);
    Constant string_23292_Const = new_Constant((Optr)string_23292);
    // at:put:. 
    Send PSend23293 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_100_Const, (Optr)string_23292_Const);
    SmallInt int_101 = new_SmallInt(101);
    String string_23294 = new_String(L"Switching Protocols");
    Constant int_101_Const = new_Constant((Optr)int_101);
    Constant string_23294_Const = new_Constant((Optr)string_23294);
    // at:put:. 
    Send PSend23295 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_101_Const, (Optr)string_23294_Const);
    SmallInt int_102 = new_SmallInt(102);
    String string_23296 = new_String(L"Processing");
    Constant int_102_Const = new_Constant((Optr)int_102);
    Constant string_23296_Const = new_Constant((Optr)string_23296);
    // at:put:. 
    Send PSend23297 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_102_Const, (Optr)string_23296_Const);
    SmallInt int_200 = new_SmallInt(200);
    String string_23298 = new_String(L"OK");
    Constant int_200_Const = new_Constant((Optr)int_200);
    Constant string_23298_Const = new_Constant((Optr)string_23298);
    // at:put:. 
    Send PSend23299 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_200_Const, (Optr)string_23298_Const);
    SmallInt int_201 = new_SmallInt(201);
    String string_23300 = new_String(L"Created");
    Constant int_201_Const = new_Constant((Optr)int_201);
    Constant string_23300_Const = new_Constant((Optr)string_23300);
    // at:put:. 
    Send PSend23301 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_201_Const, (Optr)string_23300_Const);
    SmallInt int_202 = new_SmallInt(202);
    String string_23302 = new_String(L"Accepted");
    Constant int_202_Const = new_Constant((Optr)int_202);
    Constant string_23302_Const = new_Constant((Optr)string_23302);
    // at:put:. 
    Send PSend23303 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_202_Const, (Optr)string_23302_Const);
    SmallInt int_203 = new_SmallInt(203);
    String string_23304 = new_String(L"Non-Authoritative Information");
    Constant int_203_Const = new_Constant((Optr)int_203);
    Constant string_23304_Const = new_Constant((Optr)string_23304);
    // at:put:. 
    Send PSend23305 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_203_Const, (Optr)string_23304_Const);
    SmallInt int_204 = new_SmallInt(204);
    String string_23306 = new_String(L"No Content");
    Constant int_204_Const = new_Constant((Optr)int_204);
    Constant string_23306_Const = new_Constant((Optr)string_23306);
    // at:put:. 
    Send PSend23307 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_204_Const, (Optr)string_23306_Const);
    SmallInt int_205 = new_SmallInt(205);
    String string_23308 = new_String(L"Reset Content");
    Constant int_205_Const = new_Constant((Optr)int_205);
    Constant string_23308_Const = new_Constant((Optr)string_23308);
    // at:put:. 
    Send PSend23309 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_205_Const, (Optr)string_23308_Const);
    SmallInt int_206 = new_SmallInt(206);
    String string_23310 = new_String(L"Partial Content");
    Constant int_206_Const = new_Constant((Optr)int_206);
    Constant string_23310_Const = new_Constant((Optr)string_23310);
    // at:put:. 
    Send PSend23311 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_206_Const, (Optr)string_23310_Const);
    SmallInt int_207 = new_SmallInt(207);
    String string_23312 = new_String(L"Multi-Status");
    Constant int_207_Const = new_Constant((Optr)int_207);
    Constant string_23312_Const = new_Constant((Optr)string_23312);
    // at:put:. 
    Send PSend23313 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_207_Const, (Optr)string_23312_Const);
    SmallInt int_300 = new_SmallInt(300);
    String string_23314 = new_String(L"Multiple Choices");
    Constant int_300_Const = new_Constant((Optr)int_300);
    Constant string_23314_Const = new_Constant((Optr)string_23314);
    // at:put:. 
    Send PSend23315 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_300_Const, (Optr)string_23314_Const);
    SmallInt int_301 = new_SmallInt(301);
    String string_23316 = new_String(L"Moved Permanently");
    Constant int_301_Const = new_Constant((Optr)int_301);
    Constant string_23316_Const = new_Constant((Optr)string_23316);
    // at:put:. 
    Send PSend23317 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_301_Const, (Optr)string_23316_Const);
    SmallInt int_302 = new_SmallInt(302);
    String string_23318 = new_String(L"Moved Temporarily");
    Constant int_302_Const = new_Constant((Optr)int_302);
    Constant string_23318_Const = new_Constant((Optr)string_23318);
    // at:put:. 
    Send PSend23319 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_302_Const, (Optr)string_23318_Const);
    SmallInt int_303 = new_SmallInt(303);
    String string_23320 = new_String(L"See Other");
    Constant int_303_Const = new_Constant((Optr)int_303);
    Constant string_23320_Const = new_Constant((Optr)string_23320);
    // at:put:. 
    Send PSend23321 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_303_Const, (Optr)string_23320_Const);
    SmallInt int_304 = new_SmallInt(304);
    String string_23322 = new_String(L"Not Modified");
    Constant int_304_Const = new_Constant((Optr)int_304);
    Constant string_23322_Const = new_Constant((Optr)string_23322);
    // at:put:. 
    Send PSend23323 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_304_Const, (Optr)string_23322_Const);
    SmallInt int_305 = new_SmallInt(305);
    String string_23324 = new_String(L"Use Proxy");
    Constant int_305_Const = new_Constant((Optr)int_305);
    Constant string_23324_Const = new_Constant((Optr)string_23324);
    // at:put:. 
    Send PSend23325 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_305_Const, (Optr)string_23324_Const);
    SmallInt int_307 = new_SmallInt(307);
    String string_23326 = new_String(L"Temporary Redirect");
    Constant int_307_Const = new_Constant((Optr)int_307);
    Constant string_23326_Const = new_Constant((Optr)string_23326);
    // at:put:. 
    Send PSend23327 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_307_Const, (Optr)string_23326_Const);
    SmallInt int_400 = new_SmallInt(400);
    String string_23328 = new_String(L"Bad Request");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23328_Const = new_Constant((Optr)string_23328);
    // at:put:. 
    Send PSend23329 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_400_Const, (Optr)string_23328_Const);
    SmallInt int_401 = new_SmallInt(401);
    String string_23330 = new_String(L"Unauthorized");
    Constant int_401_Const = new_Constant((Optr)int_401);
    Constant string_23330_Const = new_Constant((Optr)string_23330);
    // at:put:. 
    Send PSend23331 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_401_Const, (Optr)string_23330_Const);
    SmallInt int_402 = new_SmallInt(402);
    String string_23332 = new_String(L"Payment Required");
    Constant int_402_Const = new_Constant((Optr)int_402);
    Constant string_23332_Const = new_Constant((Optr)string_23332);
    // at:put:. 
    Send PSend23333 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_402_Const, (Optr)string_23332_Const);
    SmallInt int_403 = new_SmallInt(403);
    String string_23334 = new_String(L"Forbidden");
    Constant int_403_Const = new_Constant((Optr)int_403);
    Constant string_23334_Const = new_Constant((Optr)string_23334);
    // at:put:. 
    Send PSend23335 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_403_Const, (Optr)string_23334_Const);
    SmallInt int_404 = new_SmallInt(404);
    String string_23336 = new_String(L"Not Found");
    Constant int_404_Const = new_Constant((Optr)int_404);
    Constant string_23336_Const = new_Constant((Optr)string_23336);
    // at:put:. 
    Send PSend23337 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_404_Const, (Optr)string_23336_Const);
    SmallInt int_405 = new_SmallInt(405);
    String string_23338 = new_String(L"Method Not Allowed");
    Constant int_405_Const = new_Constant((Optr)int_405);
    Constant string_23338_Const = new_Constant((Optr)string_23338);
    // at:put:. 
    Send PSend23339 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_405_Const, (Optr)string_23338_Const);
    SmallInt int_406 = new_SmallInt(406);
    String string_23340 = new_String(L"Not Acceptable");
    Constant int_406_Const = new_Constant((Optr)int_406);
    Constant string_23340_Const = new_Constant((Optr)string_23340);
    // at:put:. 
    Send PSend23341 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_406_Const, (Optr)string_23340_Const);
    SmallInt int_407 = new_SmallInt(407);
    String string_23342 = new_String(L"Proxy Authentication Required");
    Constant int_407_Const = new_Constant((Optr)int_407);
    Constant string_23342_Const = new_Constant((Optr)string_23342);
    // at:put:. 
    Send PSend23343 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_407_Const, (Optr)string_23342_Const);
    SmallInt int_408 = new_SmallInt(408);
    String string_23344 = new_String(L"Request Timeout");
    Constant int_408_Const = new_Constant((Optr)int_408);
    Constant string_23344_Const = new_Constant((Optr)string_23344);
    // at:put:. 
    Send PSend23345 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_408_Const, (Optr)string_23344_Const);
    SmallInt int_409 = new_SmallInt(409);
    String string_23346 = new_String(L"Conflict");
    Constant int_409_Const = new_Constant((Optr)int_409);
    Constant string_23346_Const = new_Constant((Optr)string_23346);
    // at:put:. 
    Send PSend23347 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_409_Const, (Optr)string_23346_Const);
    SmallInt int_410 = new_SmallInt(410);
    String string_23348 = new_String(L"Gone");
    Constant int_410_Const = new_Constant((Optr)int_410);
    Constant string_23348_Const = new_Constant((Optr)string_23348);
    // at:put:. 
    Send PSend23349 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_410_Const, (Optr)string_23348_Const);
    SmallInt int_411 = new_SmallInt(411);
    String string_23350 = new_String(L"Lenght Required");
    Constant int_411_Const = new_Constant((Optr)int_411);
    Constant string_23350_Const = new_Constant((Optr)string_23350);
    // at:put:. 
    Send PSend23351 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_411_Const, (Optr)string_23350_Const);
    SmallInt int_412 = new_SmallInt(412);
    String string_23352 = new_String(L"Precondition Failed");
    Constant int_412_Const = new_Constant((Optr)int_412);
    Constant string_23352_Const = new_Constant((Optr)string_23352);
    // at:put:. 
    Send PSend23353 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_412_Const, (Optr)string_23352_Const);
    SmallInt int_413 = new_SmallInt(413);
    String string_23354 = new_String(L"Request Entity Too Large");
    Constant int_413_Const = new_Constant((Optr)int_413);
    Constant string_23354_Const = new_Constant((Optr)string_23354);
    // at:put:. 
    Send PSend23355 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_413_Const, (Optr)string_23354_Const);
    SmallInt int_414 = new_SmallInt(414);
    String string_23356 = new_String(L"Request-URI Too Long");
    Constant int_414_Const = new_Constant((Optr)int_414);
    Constant string_23356_Const = new_Constant((Optr)string_23356);
    // at:put:. 
    Send PSend23357 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_414_Const, (Optr)string_23356_Const);
    SmallInt int_415 = new_SmallInt(415);
    String string_23358 = new_String(L"Unsupported Media Type");
    Constant int_415_Const = new_Constant((Optr)int_415);
    Constant string_23358_Const = new_Constant((Optr)string_23358);
    // at:put:. 
    Send PSend23359 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_415_Const, (Optr)string_23358_Const);
    SmallInt int_416 = new_SmallInt(416);
    String string_23360 = new_String(L"Requested Range Not Satisfiable");
    Constant int_416_Const = new_Constant((Optr)int_416);
    Constant string_23360_Const = new_Constant((Optr)string_23360);
    // at:put:. 
    Send PSend23361 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_416_Const, (Optr)string_23360_Const);
    SmallInt int_417 = new_SmallInt(417);
    String string_23362 = new_String(L"Expectation Failed");
    Constant int_417_Const = new_Constant((Optr)int_417);
    Constant string_23362_Const = new_Constant((Optr)string_23362);
    // at:put:. 
    Send PSend23363 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_417_Const, (Optr)string_23362_Const);
    SmallInt int_422 = new_SmallInt(422);
    String string_23364 = new_String(L"Unprocessable Entity");
    Constant int_422_Const = new_Constant((Optr)int_422);
    Constant string_23364_Const = new_Constant((Optr)string_23364);
    // at:put:. 
    Send PSend23365 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_422_Const, (Optr)string_23364_Const);
    SmallInt int_423 = new_SmallInt(423);
    String string_23366 = new_String(L"Locked");
    Constant int_423_Const = new_Constant((Optr)int_423);
    Constant string_23366_Const = new_Constant((Optr)string_23366);
    // at:put:. 
    Send PSend23367 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_423_Const, (Optr)string_23366_Const);
    SmallInt int_424 = new_SmallInt(424);
    String string_23368 = new_String(L"Failed Dependency");
    Constant int_424_Const = new_Constant((Optr)int_424);
    Constant string_23368_Const = new_Constant((Optr)string_23368);
    // at:put:. 
    Send PSend23369 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_424_Const, (Optr)string_23368_Const);
    SmallInt int_500 = new_SmallInt(500);
    String string_23370 = new_String(L"Internal Server Error");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23370_Const = new_Constant((Optr)string_23370);
    // at:put:. 
    Send PSend23371 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_500_Const, (Optr)string_23370_Const);
    SmallInt int_501 = new_SmallInt(501);
    String string_23372 = new_String(L"Not Implemented");
    Constant int_501_Const = new_Constant((Optr)int_501);
    Constant string_23372_Const = new_Constant((Optr)string_23372);
    // at:put:. 
    Send PSend23373 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_501_Const, (Optr)string_23372_Const);
    SmallInt int_502 = new_SmallInt(502);
    String string_23374 = new_String(L"Bad Gateway");
    Constant int_502_Const = new_Constant((Optr)int_502);
    Constant string_23374_Const = new_Constant((Optr)string_23374);
    // at:put:. 
    Send PSend23375 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_502_Const, (Optr)string_23374_Const);
    SmallInt int_503 = new_SmallInt(503);
    String string_23376 = new_String(L"Service Unavailable");
    Constant int_503_Const = new_Constant((Optr)int_503);
    Constant string_23376_Const = new_Constant((Optr)string_23376);
    // at:put:. 
    Send PSend23377 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_503_Const, (Optr)string_23376_Const);
    SmallInt int_504 = new_SmallInt(504);
    String string_23378 = new_String(L"Gateway Timeout");
    Constant int_504_Const = new_Constant((Optr)int_504);
    Constant string_23378_Const = new_Constant((Optr)string_23378);
    // at:put:. 
    Send PSend23379 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_504_Const, (Optr)string_23378_Const);
    SmallInt int_505 = new_SmallInt(505);
    String string_23380 = new_String(L"HTTP Version Not Supported");
    Constant int_505_Const = new_Constant((Optr)int_505);
    Constant string_23380_Const = new_Constant((Optr)string_23380);
    // at:put:. 
    Send PSend23381 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_505_Const, (Optr)string_23380_Const);
    SmallInt int_507 = new_SmallInt(507);
    String string_23382 = new_String(L"Insufficient Storage");
    Constant int_507_Const = new_Constant((Optr)int_507);
    Constant string_23382_Const = new_Constant((Optr)string_23382);
    // at:put:. 
    Send PSend23383 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_507_Const, (Optr)string_23382_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23384 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23291 = instantiate_Array_with(ThreadedCode_Class, 0, 419, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_push1, (Optr)string_23292, (Optr)&t_send2, (Optr)PSend23293, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_101, (Optr)&t_push1, (Optr)string_23294, (Optr)&t_send2, (Optr)PSend23295, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_102, (Optr)&t_push1, (Optr)string_23296, (Optr)&t_send2, (Optr)PSend23297, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push1, (Optr)string_23298, (Optr)&t_send2, (Optr)PSend23299, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_201, (Optr)&t_push1, (Optr)string_23300, (Optr)&t_send2, (Optr)PSend23301, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_202, (Optr)&t_push1, (Optr)string_23302, (Optr)&t_send2, (Optr)PSend23303, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_203, (Optr)&t_push1, (Optr)string_23304, (Optr)&t_send2, (Optr)PSend23305, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_204, (Optr)&t_push1, (Optr)string_23306, (Optr)&t_send2, (Optr)PSend23307, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_205, (Optr)&t_push1, (Optr)string_23308, (Optr)&t_send2, (Optr)PSend23309, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_206, (Optr)&t_push1, (Optr)string_23310, (Optr)&t_send2, (Optr)PSend23311, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_207, (Optr)&t_push1, (Optr)string_23312, (Optr)&t_send2, (Optr)PSend23313, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_300, (Optr)&t_push1, (Optr)string_23314, (Optr)&t_send2, (Optr)PSend23315, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push1, (Optr)string_23316, (Optr)&t_send2, (Optr)PSend23317, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push1, (Optr)string_23318, (Optr)&t_send2, (Optr)PSend23319, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_303, (Optr)&t_push1, (Optr)string_23320, (Optr)&t_send2, (Optr)PSend23321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_304, (Optr)&t_push1, (Optr)string_23322, (Optr)&t_send2, (Optr)PSend23323, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_305, (Optr)&t_push1, (Optr)string_23324, (Optr)&t_send2, (Optr)PSend23325, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_307, (Optr)&t_push1, (Optr)string_23326, (Optr)&t_send2, (Optr)PSend23327, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push1, (Optr)string_23328, (Optr)&t_send2, (Optr)PSend23329, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_401, (Optr)&t_push1, (Optr)string_23330, (Optr)&t_send2, (Optr)PSend23331, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_402, (Optr)&t_push1, (Optr)string_23332, (Optr)&t_send2, (Optr)PSend23333, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_403, (Optr)&t_push1, (Optr)string_23334, (Optr)&t_send2, (Optr)PSend23335, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_404, (Optr)&t_push1, (Optr)string_23336, (Optr)&t_send2, (Optr)PSend23337, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_405, (Optr)&t_push1, (Optr)string_23338, (Optr)&t_send2, (Optr)PSend23339, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_406, (Optr)&t_push1, (Optr)string_23340, (Optr)&t_send2, (Optr)PSend23341, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_407, (Optr)&t_push1, (Optr)string_23342, (Optr)&t_send2, (Optr)PSend23343, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_408, (Optr)&t_push1, (Optr)string_23344, (Optr)&t_send2, (Optr)PSend23345, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_409, (Optr)&t_push1, (Optr)string_23346, (Optr)&t_send2, (Optr)PSend23347, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_410, (Optr)&t_push1, (Optr)string_23348, (Optr)&t_send2, (Optr)PSend23349, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_411, (Optr)&t_push1, (Optr)string_23350, (Optr)&t_send2, (Optr)PSend23351, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_412, (Optr)&t_push1, (Optr)string_23352, (Optr)&t_send2, (Optr)PSend23353, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_413, (Optr)&t_push1, (Optr)string_23354, (Optr)&t_send2, (Optr)PSend23355, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_414, (Optr)&t_push1, (Optr)string_23356, (Optr)&t_send2, (Optr)PSend23357, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_415, (Optr)&t_push1, (Optr)string_23358, (Optr)&t_send2, (Optr)PSend23359, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_416, (Optr)&t_push1, (Optr)string_23360, (Optr)&t_send2, (Optr)PSend23361, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_417, (Optr)&t_push1, (Optr)string_23362, (Optr)&t_send2, (Optr)PSend23363, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_422, (Optr)&t_push1, (Optr)string_23364, (Optr)&t_send2, (Optr)PSend23365, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_423, (Optr)&t_push1, (Optr)string_23366, (Optr)&t_send2, (Optr)PSend23367, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_424, (Optr)&t_push1, (Optr)string_23368, (Optr)&t_send2, (Optr)PSend23369, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push1, (Optr)string_23370, (Optr)&t_send2, (Optr)PSend23371, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_501, (Optr)&t_push1, (Optr)string_23372, (Optr)&t_send2, (Optr)PSend23373, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_502, (Optr)&t_push1, (Optr)string_23374, (Optr)&t_send2, (Optr)PSend23375, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_503, (Optr)&t_push1, (Optr)string_23376, (Optr)&t_send2, (Optr)PSend23377, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_504, (Optr)&t_push1, (Optr)string_23378, (Optr)&t_send2, (Optr)PSend23379, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_505, (Optr)&t_push1, (Optr)string_23380, (Optr)&t_send2, (Optr)PSend23381, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_507, (Optr)&t_push1, (Optr)string_23382, (Optr)&t_send2, (Optr)PSend23383, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23384, (Optr)&t_method_return);
    Block PBlock23289 = new_Block_with(PArray23290, empty_Array, PThreadedCode23291, 47, PSend23293, PSend23295, PSend23297, PSend23299, PSend23301, PSend23303, PSend23305, PSend23307, PSend23309, PSend23311, PSend23313, PSend23315, PSend23317, PSend23319, PSend23321, PSend23323, PSend23325, PSend23327, PSend23329, PSend23331, PSend23333, PSend23335, PSend23337, PSend23339, PSend23341, PSend23343, PSend23345, PSend23347, PSend23349, PSend23351, PSend23353, PSend23355, PSend23357, PSend23359, PSend23361, PSend23363, PSend23365, PSend23367, PSend23369, PSend23371, PSend23373, PSend23375, PSend23377, PSend23379, PSend23381, PSend23383, PSend23384);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23385 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // value:. 
    Send PSend23288 = new_Send((Optr)PBlock23289, SMB_value_, 1, (Optr)PSend23385);
    Assign PAssign23287 = new_Assign((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)PSend23288);
    Array PThreadedCode23286 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign23287, (Optr)&t_push_closure, (Optr)PBlock23289, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23385, (Optr)&t_send1, (Optr)PSend23288, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23285 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23286, 2, PAssign23287, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23285, HEADER(WebClient_Core_WebMessage_Class));
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