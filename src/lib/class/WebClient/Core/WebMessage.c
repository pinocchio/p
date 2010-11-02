#include <lib/class/WebClient/Core/WebMessage.h>


Optr slot_WebClient_Core_WebMessage_Class_class_statusCodes;
Optr layout_WebClient_Core_WebMessage_Class_class;
Optr slot_WebClient_Core_WebMessage_stream;
Optr slot_WebClient_Core_WebMessage_protocol;
Optr slot_WebClient_Core_WebMessage_headers;
Optr slot_WebClient_Core_WebMessage_content;
Optr layout_WebClient_Core_WebMessage;


static void init_SMB_isPersistent() {
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22728 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_22730 = new_String(L"Connection");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_22730_Const = new_Constant((Optr)string_22730);
    // headerAt:. 
    Send PSend22731 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_22730_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22732 = new_Send((Optr)PSend22731, SMB_asLowercase, 0);
    String string_22733 = new_String(L"close");
    Constant string_22733_Const = new_Constant((Optr)string_22733);
    // asLowercase. 
    Send PSend22734 = new_Send((Optr)string_22733_Const, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22735 = new_Send((Optr)PSend22732, SMB__equals_, 1, (Optr)PSend22734);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22739 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode22738 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend22739, (Optr)&t_block_return);
    Block PBlock22737 = new_Block_with(empty_Array, empty_Array, PThreadedCode22738, 1, PSend22739);
    // ifTrue:. 
    Send PSend22736 = new_Send((Optr)PSend22735, SMB_ifTrue_, 1, (Optr)PBlock22737);
    String string_22740 = new_String(L"Connection");
    Constant string_22740_Const = new_Constant((Optr)string_22740);
    // headerAt:. 
    Send PSend22741 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_22740_Const);
    // asLowercase. 
    Send PSend22742 = new_Send((Optr)PSend22741, SMB_asLowercase, 0);
    String string_22743 = new_String(L"keep-alive");
    Constant string_22743_Const = new_Constant((Optr)string_22743);
    // asLowercase. 
    Send PSend22744 = new_Send((Optr)string_22743_Const, SMB_asLowercase, 0);
    // =. 
    Send PSend22745 = new_Send((Optr)PSend22742, SMB__equals_, 1, (Optr)PSend22744);
    // escape:. 
    Send PSend22749 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode22748 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend22749, (Optr)&t_block_return);
    Block PBlock22747 = new_Block_with(empty_Array, empty_Array, PThreadedCode22748, 1, PSend22749);
    // ifTrue:. 
    Send PSend22746 = new_Send((Optr)PSend22745, SMB_ifTrue_, 1, (Optr)PBlock22747);
    Symbol SMB_protocol = new_Symbol(L"protocol");
    // protocol. 
    Send PSend22750 = new_Send((Optr)self, SMB_protocol, 0);
    String string_22751 = new_String(L"HTTP/1.0");
    Constant string_22751_Const = new_Constant((Optr)string_22751);
    // =. 
    Send PSend22752 = new_Send((Optr)PSend22750, SMB__equals_, 1, (Optr)string_22751_Const);
    // escape:. 
    Send PSend22756 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode22755 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend22756, (Optr)&t_block_return);
    Block PBlock22754 = new_Block_with(empty_Array, empty_Array, PThreadedCode22755, 1, PSend22756);
    // ifTrue:. 
    Send PSend22753 = new_Send((Optr)PSend22752, SMB_ifTrue_, 1, (Optr)PBlock22754);
    // protocol. 
    Send PSend22757 = new_Send((Optr)self, SMB_protocol, 0);
    String string_22758 = new_String(L"HTTP/1.1");
    Constant string_22758_Const = new_Constant((Optr)string_22758);
    // =. 
    Send PSend22759 = new_Send((Optr)PSend22757, SMB__equals_, 1, (Optr)string_22758_Const);
    // escape:. 
    Send PSend22763 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode22762 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend22763, (Optr)&t_block_return);
    Block PBlock22761 = new_Block_with(empty_Array, empty_Array, PThreadedCode22762, 1, PSend22763);
    // ifTrue:. 
    Send PSend22760 = new_Send((Optr)PSend22759, SMB_ifTrue_, 1, (Optr)PBlock22761);
    Array PThreadedCode22729 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22730, (Optr)&t_send1, (Optr)PSend22731, (Optr)&t_send0, (Optr)PSend22732, (Optr)&t_push1, (Optr)string_22733, (Optr)&t_send0, (Optr)PSend22734, (Optr)&t_send1, (Optr)PSend22735, (Optr)&t_send_ifTrue_, (Optr)PSend22736, (Optr)PBlock22737, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22740, (Optr)&t_send1, (Optr)PSend22741, (Optr)&t_send0, (Optr)PSend22742, (Optr)&t_push1, (Optr)string_22743, (Optr)&t_send0, (Optr)PSend22744, (Optr)&t_send1, (Optr)PSend22745, (Optr)&t_send_ifTrue_, (Optr)PSend22746, (Optr)PBlock22747, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22750, (Optr)&t_push1, (Optr)string_22751, (Optr)&t_send1, (Optr)PSend22752, (Optr)&t_send_ifTrue_, (Optr)PSend22753, (Optr)PBlock22754, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22757, (Optr)&t_push1, (Optr)string_22758, (Optr)&t_send1, (Optr)PSend22759, (Optr)&t_send_ifTrue_, (Optr)PSend22760, (Optr)PBlock22761, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock22727 = new_Block_with(PArray22728, empty_Array, PThreadedCode22729, 5, PSend22736, PSend22746, PSend22753, PSend22760, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22764 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22727);
    Array PThreadedCode22726 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22727, (Optr)&t_send1, (Optr)PSend22764, (Optr)&t_method_return);
    Method PMethod22725 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22726, 1, PSend22764);
    
    MethodClosure MC_SMB_isPersistent = new_MethodClosure((Method)PMethod22725, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_isPersistent, MC_SMB_isPersistent);
}


static void init_SMB_contentType() {
    Symbol SMB_contentType = new_Symbol(L"contentType");
    String string_22767 = new_String(L"Content-Type");
    String string_22770 = new_String(L"application/octet-stream");
    Array PThreadedCode22769 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_22770, (Optr)&t_block_return);
    Constant string_22770_Const = new_Constant((Optr)string_22770);
    Block PBlock22768 = new_Block_with(empty_Array, empty_Array, PThreadedCode22769, 1, string_22770_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_22767_Const = new_Constant((Optr)string_22767);
    // headerAt:ifAbsent:. 
    Send PSend22771 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_22767_Const, (Optr)PBlock22768);
    Array PThreadedCode22766 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22767, (Optr)&t_push_closure, (Optr)PBlock22768, (Optr)&t_send2, (Optr)PSend22771, (Optr)&t_method_return);
    Method PMethod22765 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22766, 1, PSend22771);
    
    MethodClosure MC_SMB_contentType = new_MethodClosure((Method)PMethod22765, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType, MC_SMB_contentType);
}


static void init_SMB_headersDo_() {
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22773 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray22776 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend22778 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend22779 = new_Send((Optr)VAR_assoc_1_0, SMB_value, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend22780 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_value_, 2, (Optr)PSend22778, (Optr)PSend22779);
    Array PThreadedCode22777 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend22778, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend22779, (Optr)&t_send2, (Optr)PSend22780, (Optr)&t_method_return);
    Block PBlock22775 = new_Block_with(PArray22776, empty_Array, PThreadedCode22777, 1, PSend22780);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22781 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock22775);
    Array PThreadedCode22774 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock22775, (Optr)&t_send1, (Optr)PSend22781, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22772 = new_Method_with(PArray22773, empty_Array, empty_Array, PThreadedCode22774, 2, PSend22781, self);
    
    MethodClosure MC_SMB_headersDo_ = new_MethodClosure((Method)PMethod22772, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersDo_, MC_SMB_headersDo_);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22786 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_close, 0);
    Array PThreadedCode22785 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22786, (Optr)&t_block_return);
    Block PBlock22784 = new_Block_with(empty_Array, empty_Array, PThreadedCode22785, 1, PSend22786);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22787 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock22784);
    Array PThreadedCode22783 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock22784, (Optr)&t_send1, (Optr)PSend22787, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22782 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22783, 2, PSend22787, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod22782, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_contentStream() {
    Symbol SMB_contentStream = new_Symbol(L"contentStream");
    Array PThreadedCode22789 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod22788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22789, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_contentStream = new_MethodClosure((Method)PMethod22788, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentStream, MC_SMB_contentStream);
}


static void init_SMB_headerAt_ifAbsent_() {
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray22791 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22794 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray22797 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22799 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode22798 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend22799, (Optr)&t_method_return);
    Block PBlock22796 = new_Block_with(PArray22797, empty_Array, PThreadedCode22798, 1, PSend22799);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend22800 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22796);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend22801 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode22795 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22796, (Optr)&t_send2, (Optr)PSend22800, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend22801, (Optr)&t_method_return);
    Block PBlock22793 = new_Block_with(PArray22794, empty_Array, PThreadedCode22795, 2, PSend22800, PSend22801);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22802 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22793);
    Array PThreadedCode22792 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22793, (Optr)&t_send1, (Optr)PSend22802, (Optr)&t_method_return);
    Method PMethod22790 = new_Method_with(PArray22791, empty_Array, empty_Array, PThreadedCode22792, 1, PSend22802);
    
    MethodClosure MC_SMB_headerAt_ifAbsent_ = new_MethodClosure((Method)PMethod22790, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_ifAbsent_, MC_SMB_headerAt_ifAbsent_);
}


static void init_SMB_headersAt_() {
    Symbol SMB_headersAt_ = new_Symbol(L"headersAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22804 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22808 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend22809 = new_Send((Optr)PSend22808, SMB_asArray, 0);
    Array PThreadedCode22807 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend22808, (Optr)&t_send0, (Optr)PSend22809, (Optr)&t_block_return);
    Block PBlock22806 = new_Block_with(empty_Array, empty_Array, PThreadedCode22807, 1, PSend22809);
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    // headersAt:ifAbsent:. 
    Send PSend22810 = new_Send((Optr)self, SMB_headersAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock22806);
    Array PThreadedCode22805 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock22806, (Optr)&t_send2, (Optr)PSend22810, (Optr)&t_method_return);
    Method PMethod22803 = new_Method_with(PArray22804, empty_Array, empty_Array, PThreadedCode22805, 1, PSend22810);
    
    MethodClosure MC_SMB_headersAt_ = new_MethodClosure((Method)PMethod22803, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_, MC_SMB_headersAt_);
}


static void init_SMB_stream_() {
    Symbol SMB_stream_ = new_Symbol(L"stream:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22812 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign22814 = new_Assign((Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode22813 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22814, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22811 = new_Method_with(PArray22812, empty_Array, empty_Array, PThreadedCode22813, 2, PAssign22814, self);
    
    MethodClosure MC_SMB_stream_ = new_MethodClosure((Method)PMethod22811, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream_, MC_SMB_stream_);
}


static void init_SMB_remoteHost() {
    Symbol SMB_remoteHost = new_Symbol(L"remoteHost");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22818 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend22820 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_isKindOf_, 1, (Optr)PSocketStream_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22824 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode22823 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22824, (Optr)&t_block_return);
    Block PBlock22822 = new_Block_with(empty_Array, empty_Array, PThreadedCode22823, 1, PSend22824);
    // ifFalse:. 
    Send PSend22821 = new_Send((Optr)PSend22820, SMB_ifFalse_, 1, (Optr)PBlock22822);
    Symbol SMB_socket = new_Symbol(L"socket");
    // socket. 
    Send PSend22825 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_socket, 0);
    Symbol SMB_remoteAddress = new_Symbol(L"remoteAddress");
    // remoteAddress. 
    Send PSend22826 = new_Send((Optr)PSend22825, SMB_remoteAddress, 0);
    Array PThreadedCode22819 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_class_reference, (Optr)PSocketStream_classReference, (Optr)&t_send1, (Optr)PSend22820, (Optr)&t_send_ifFalse_, (Optr)PSend22821, (Optr)PBlock22822, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22825, (Optr)&t_send0, (Optr)PSend22826, (Optr)&t_method_return);
    Block PBlock22817 = new_Block_with(PArray22818, empty_Array, PThreadedCode22819, 2, PSend22821, PSend22826);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22827 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22817);
    Array PThreadedCode22816 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22817, (Optr)&t_send1, (Optr)PSend22827, (Optr)&t_method_return);
    Method PMethod22815 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22816, 1, PSend22827);
    
    MethodClosure MC_SMB_remoteHost = new_MethodClosure((Method)PMethod22815, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_remoteHost, MC_SMB_remoteHost);
}


static void init_SMB_headersAt_do_() {
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray22829 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray22832 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22834 = new_Send((Optr)VAR_aKey_0_0, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend22835 = new_Send((Optr)VAR_key_1_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22836 = new_Send((Optr)PSend22834, SMB__equals_, 1, (Optr)PSend22835);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22840 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_value_1_1);
    Array PThreadedCode22839 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend22840, (Optr)&t_block_return);
    Block PBlock22838 = new_Block_with(empty_Array, empty_Array, PThreadedCode22839, 1, PSend22840);
    // ifTrue:. 
    Send PSend22837 = new_Send((Optr)PSend22836, SMB_ifTrue_, 1, (Optr)PBlock22838);
    Array PThreadedCode22833 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send0, (Optr)PSend22834, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send0, (Optr)PSend22835, (Optr)&t_send1, (Optr)PSend22836, (Optr)&t_send_ifTrue_, (Optr)PSend22837, (Optr)PBlock22838, (Optr)&t_method_return);
    Block PBlock22831 = new_Block_with(PArray22832, empty_Array, PThreadedCode22833, 1, PSend22837);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend22841 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock22831);
    Array PThreadedCode22830 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22831, (Optr)&t_send1, (Optr)PSend22841, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22828 = new_Method_with(PArray22829, empty_Array, empty_Array, PThreadedCode22830, 2, PSend22841, self);
    
    MethodClosure MC_SMB_headersAt_do_ = new_MethodClosure((Method)PMethod22828, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_do_, MC_SMB_headersAt_do_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22843 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend22845 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22846 = new_Send((Optr)PSend22845, SMB_name, 0);
    // printOn:. 
    Send PSend22847 = new_Send((Optr)PSend22846, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_5746 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5746_Const = new_Constant((Optr)char_5746);
    // <<. 
    Send PSend22848 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5746_Const);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend22849 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22850 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22844 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22845, (Optr)&t_send0, (Optr)PSend22846, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22847, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5746, (Optr)&t_send1, (Optr)PSend22848, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22849, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22850, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22842 = new_Method_with(PArray22843, empty_Array, empty_Array, PThreadedCode22844, 5, PSend22847, PSend22848, PSend22849, PSend22850, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22842, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_closeIfTransient() {
    Symbol SMB_closeIfTransient = new_Symbol(L"closeIfTransient");
    Symbol SMB_isPersistent = new_Symbol(L"isPersistent");
    // isPersistent. 
    Send PSend22853 = new_Send((Optr)self, SMB_isPersistent, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend22857 = new_Send((Optr)self, SMB_close, 0);
    Array PThreadedCode22856 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22857, (Optr)&t_block_return);
    Block PBlock22855 = new_Block_with(empty_Array, empty_Array, PThreadedCode22856, 1, PSend22857);
    // ifFalse:. 
    Send PSend22854 = new_Send((Optr)PSend22853, SMB_ifFalse_, 1, (Optr)PBlock22855);
    Array PThreadedCode22852 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22853, (Optr)&t_send_ifFalse_, (Optr)PSend22854, (Optr)PBlock22855, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22851 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22852, 2, PSend22854, self);
    
    MethodClosure MC_SMB_closeIfTransient = new_MethodClosure((Method)PMethod22851, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_closeIfTransient, MC_SMB_closeIfTransient);
}


static void init_SMB_getContent() {
    Symbol SMB_getContent = new_Symbol(L"getContent");
    Variable VAR_length_0_0 = new_Variable_named(L"length", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_buffer_0_2 = new_Variable_named(L"buffer", 0);
    Array PArray22859 = new_Array_with(3, (Optr)VAR_length_0_0, (Optr)VAR_size_0_1, (Optr)VAR_buffer_0_2);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend22862 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign22861 = new_Assign((Optr)VAR_length_0_0, (Optr)PSend22862);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode22866 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock22865 = new_Block_with(empty_Array, empty_Array, PThreadedCode22866, 1, int_1000_Const);
    // ifNil:. 
    Send PSend22864 = new_Send((Optr)VAR_length_0_0, SMB_ifNil_, 1, (Optr)PBlock22865);
    Assign PAssign22863 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend22864);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend22869 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend22868 = new_Send((Optr)PSend22869, SMB_writeStream, 0);
    Assign PAssign22867 = new_Assign((Optr)VAR_buffer_0_2, (Optr)PSend22868);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend22870 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_buffer_0_2, (Optr)VAR_length_0_0, (Optr)nil_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend22871 = new_Send((Optr)VAR_buffer_0_2, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22872 = new_Send((Optr)PSend22871, SMB__equals_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_originalContents = new_Symbol(L"originalContents");
    // originalContents. 
    Send PSend22876 = new_Send((Optr)VAR_buffer_0_2, SMB_originalContents, 0);
    Array PThreadedCode22875 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend22876, (Optr)&t_block_return);
    Block PBlock22874 = new_Block_with(empty_Array, empty_Array, PThreadedCode22875, 1, PSend22876);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend22879 = new_Send((Optr)VAR_buffer_0_2, SMB_contents, 0);
    Array PThreadedCode22878 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend22879, (Optr)&t_block_return);
    Block PBlock22877 = new_Block_with(empty_Array, empty_Array, PThreadedCode22878, 1, PSend22879);
    // ifTrue:ifFalse:. 
    Send PSend22873 = new_Send((Optr)PSend22872, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22874, (Optr)PBlock22877);
    Array PThreadedCode22860 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign22861, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22862, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22863, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_closure, (Optr)PBlock22865, (Optr)&t_send1, (Optr)PSend22864, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22867, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend22869, (Optr)&t_send0, (Optr)PSend22868, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_push_variable, (Optr)VAR_length_0_0, (Optr)&t_push_nil, (Optr)&t_send4, (Optr)PSend22870, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_2, (Optr)&t_send0, (Optr)PSend22871, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend22872, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22873, (Optr)PBlock22874, (Optr)PBlock22877, (Optr)&t_method_return);
    Method PMethod22858 = new_Method_with(empty_Array, PArray22859, empty_Array, PThreadedCode22860, 5, PAssign22861, PAssign22863, PAssign22867, PSend22870, PSend22873);
    
    MethodClosure MC_SMB_getContent = new_MethodClosure((Method)PMethod22858, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_getContent, MC_SMB_getContent);
}


static void init_SMB_removeHeader_() {
    Symbol SMB_removeHeader_ = new_Symbol(L"removeHeader:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray22881 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_assoc_1_0 = new_Variable_named(L"assoc", 1);
    Array PArray22886 = new_Array_with(1, (Optr)VAR_assoc_1_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend22888 = new_Send((Optr)VAR_assoc_1_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend22889 = new_Send((Optr)PSend22888, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend22890 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22891 = new_Send((Optr)PSend22889, SMB__equals_, 1, (Optr)PSend22890);
    Array PThreadedCode22887 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_1_0, (Optr)&t_send0, (Optr)PSend22888, (Optr)&t_send0, (Optr)PSend22889, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend22890, (Optr)&t_send1, (Optr)PSend22891, (Optr)&t_method_return);
    Block PBlock22885 = new_Block_with(PArray22886, empty_Array, PThreadedCode22887, 1, PSend22891);
    // reject:. 
    Send PSend22884 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_reject_, 1, (Optr)PBlock22885);
    Assign PAssign22883 = new_Assign((Optr)slot_WebClient_Core_WebMessage_headers, (Optr)PSend22884);
    Array PThreadedCode22882 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign22883, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock22885, (Optr)&t_send1, (Optr)PSend22884, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22880 = new_Method_with(PArray22881, empty_Array, empty_Array, PThreadedCode22882, 2, PAssign22883, self);
    
    MethodClosure MC_SMB_removeHeader_ = new_MethodClosure((Method)PMethod22880, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_removeHeader_, MC_SMB_removeHeader_);
}


static void init_SMB_streamFrom_to_size_progress_() {
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_sizeOrNil_0_2 = new_Variable_named(L"sizeOrNil", 0);
    Variable VAR_progressBlock_0_3 = new_Variable_named(L"progressBlock", 0);
    Array PArray22893 = new_Array_with(4, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_progressBlock_0_3);
    Variable VAR_buffer_0_4 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_5 = new_Variable_named(L"totalRead", 0);
    Variable VAR_remaining_0_6 = new_Variable_named(L"remaining", 0);
    Variable VAR_size_0_7 = new_Variable_named(L"size", 0);
    Array PArray22894 = new_Array_with(4, (Optr)VAR_buffer_0_4, (Optr)VAR_totalRead_0_5, (Optr)VAR_remaining_0_6, (Optr)VAR_size_0_7);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22897 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_22899 = new_String(L"transfer-encoding");
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Constant string_22899_Const = new_Constant((Optr)string_22899);
    // headerAt:. 
    Send PSend22900 = new_Send((Optr)self, SMB_headerAt_, 1, (Optr)string_22899_Const);
    Variable VAR_encoding_2_0 = new_Variable_named(L"encoding", 2);
    Array PArray22902 = new_Array_with(1, (Optr)VAR_encoding_2_0);
    String string_22904 = new_String(L"chunked");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_22904_Const = new_Constant((Optr)string_22904);
    // =. 
    Send PSend22905 = new_Send((Optr)VAR_encoding_2_0, SMB__equals_, 1, (Optr)string_22904_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    // chunkFrom:to:progress:. 
    Send PSend22909 = new_Send((Optr)self, SMB_chunkFrom_to_progress_, 3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_3);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22910 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22909);
    Array PThreadedCode22908 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_send3, (Optr)PSend22909, (Optr)&t_send1, (Optr)PSend22910, (Optr)&t_block_return);
    Block PBlock22907 = new_Block_with(empty_Array, empty_Array, PThreadedCode22908, 1, PSend22910);
    String string_22913 = new_String(L"Unknown transfer-encoding: ");
    Constant string_22913_Const = new_Constant((Optr)string_22913);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend22914 = new_Send((Optr)string_22913_Const, SMB__append_, 1, (Optr)VAR_encoding_2_0);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend22915 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend22914);
    Array PThreadedCode22912 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22913, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_send1, (Optr)PSend22914, (Optr)&t_send1, (Optr)PSend22915, (Optr)&t_block_return);
    Block PBlock22911 = new_Block_with(empty_Array, empty_Array, PThreadedCode22912, 1, PSend22915);
    // ifTrue:ifFalse:. 
    Send PSend22906 = new_Send((Optr)PSend22905, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22907, (Optr)PBlock22911);
    Array PThreadedCode22903 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_encoding_2_0, (Optr)&t_push1, (Optr)string_22904, (Optr)&t_send1, (Optr)PSend22905, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22906, (Optr)PBlock22907, (Optr)PBlock22911, (Optr)&t_method_return);
    Block PBlock22901 = new_Block_with(PArray22902, empty_Array, PThreadedCode22903, 1, PSend22906);
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    // ifNotEmpty:. 
    Send PSend22916 = new_Send((Optr)PSend22900, SMB_ifNotEmpty_, 1, (Optr)PBlock22901);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend22917 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend22921 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22920 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22921, (Optr)&t_block_return);
    Block PBlock22919 = new_Block_with(empty_Array, empty_Array, PThreadedCode22920, 1, PSend22921);
    // ifTrue:. 
    Send PSend22918 = new_Send((Optr)PSend22917, SMB_ifTrue_, 1, (Optr)PBlock22919);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_4096 = new_SmallInt(4096);
    Constant int_4096_Const = new_Constant((Optr)int_4096);
    // new:. 
    Send PSend22923 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4096_Const);
    Assign PAssign22922 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend22923);
    Assign PAssign22924 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)int_0_Const);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Array PThreadedCode22928 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    Block PBlock22927 = new_Block_with(empty_Array, empty_Array, PThreadedCode22928, 1, int_0_Const);
    // ifNil:. 
    Send PSend22926 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_, 1, (Optr)PBlock22927);
    Assign PAssign22925 = new_Assign((Optr)VAR_size_0_7, (Optr)PSend22926);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22931 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend22934 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend22935 = new_Send((Optr)PSend22934, SMB_not, 0);
    Array PThreadedCode22933 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22934, (Optr)&t_send0, (Optr)PSend22935, (Optr)&t_block_return);
    Block PBlock22932 = new_Block_with(empty_Array, empty_Array, PThreadedCode22933, 1, PSend22935);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend22936 = new_Send((Optr)PSend22931, SMB_and_, 1, (Optr)PBlock22932);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend22939 = new_Send((Optr)VAR_totalRead_0_5, SMB__lt_, 1, (Optr)VAR_size_0_7);
    Array PThreadedCode22938 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_size_0_7, (Optr)&t_send1, (Optr)PSend22939, (Optr)&t_block_return);
    Block PBlock22937 = new_Block_with(empty_Array, empty_Array, PThreadedCode22938, 1, PSend22939);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend22940 = new_Send((Optr)PSend22936, SMB_or_, 1, (Optr)PBlock22937);
    Array PThreadedCode22930 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend22931, (Optr)&t_push_closure, (Optr)PBlock22932, (Optr)&t_send1, (Optr)PSend22936, (Optr)&t_push_closure, (Optr)PBlock22937, (Optr)&t_send1, (Optr)PSend22940, (Optr)&t_block_return);
    Block PBlock22929 = new_Block_with(empty_Array, empty_Array, PThreadedCode22930, 1, PSend22940);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend22945 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode22944 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend22945, (Optr)&t_block_return);
    Block PBlock22943 = new_Block_with(empty_Array, empty_Array, PThreadedCode22944, 1, PSend22945);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22946 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock22943);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    SmallInt int_99999 = new_SmallInt(99999);
    Array PThreadedCode22950 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_99999, (Optr)&t_block_return);
    Constant int_99999_Const = new_Constant((Optr)int_99999);
    Block PBlock22949 = new_Block_with(empty_Array, empty_Array, PThreadedCode22950, 1, int_99999_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend22953 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB__minus_, 1, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode22952 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send1, (Optr)PSend22953, (Optr)&t_block_return);
    Block PBlock22951 = new_Block_with(empty_Array, empty_Array, PThreadedCode22952, 1, PSend22953);
    // ifNil:ifNotNil:. 
    Send PSend22948 = new_Send((Optr)VAR_sizeOrNil_0_2, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock22949, (Optr)PBlock22951);
    Assign PAssign22947 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend22948);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22954 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend22955 = new_Send((Optr)VAR_remaining_0_6, SMB__gt_, 1, (Optr)PSend22954);
    // size. 
    Send PSend22960 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    Assign PAssign22959 = new_Assign((Optr)VAR_remaining_0_6, (Optr)PSend22960);
    Array PThreadedCode22958 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign22959, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend22960, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22957 = new_Block_with(empty_Array, empty_Array, PThreadedCode22958, 1, PAssign22959);
    // ifTrue:. 
    Send PSend22956 = new_Send((Optr)PSend22955, SMB_ifTrue_, 1, (Optr)PBlock22957);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend22962 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_remaining_0_6, (Optr)VAR_buffer_0_4, (Optr)int_1_Const);
    Assign PAssign22961 = new_Assign((Optr)VAR_buffer_0_4, (Optr)PSend22962);
    // size. 
    Send PSend22963 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // <. 
    Send PSend22964 = new_Send((Optr)VAR_remaining_0_6, SMB__lt_, 1, (Optr)PSend22963);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend22968 = new_Send((Optr)VAR_buffer_0_4, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_remaining_0_6);
    Array PThreadedCode22967 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_send2, (Optr)PSend22968, (Optr)&t_block_return);
    Block PBlock22966 = new_Block_with(empty_Array, empty_Array, PThreadedCode22967, 1, PSend22968);
    Array PThreadedCode22970 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_block_return);
    Block PBlock22969 = new_Block_with(empty_Array, empty_Array, PThreadedCode22970, 1, VAR_buffer_0_4);
    // ifTrue:ifFalse:. 
    Send PSend22965 = new_Send((Optr)PSend22964, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock22966, (Optr)PBlock22969);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend22971 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)PSend22965);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // size. 
    Send PSend22974 = new_Send((Optr)VAR_buffer_0_4, SMB_size, 0);
    // +. 
    Send PSend22973 = new_Send((Optr)VAR_totalRead_0_5, SMB__plus_, 1, (Optr)PSend22974);
    Assign PAssign22972 = new_Assign((Optr)VAR_totalRead_0_5, (Optr)PSend22973);
    Array PThreadedCode22942 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock22943, (Optr)&t_send1, (Optr)PSend22946, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22947, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock22949, (Optr)&t_push_closure, (Optr)PBlock22951, (Optr)&t_send2, (Optr)PSend22948, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend22954, (Optr)&t_send1, (Optr)PSend22955, (Optr)&t_send_ifTrue_, (Optr)PSend22956, (Optr)PBlock22957, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22961, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend22962, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_remaining_0_6, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend22963, (Optr)&t_send1, (Optr)PSend22964, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend22965, (Optr)PBlock22966, (Optr)PBlock22969, (Optr)&t_send1, (Optr)PSend22971, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22972, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_push_variable, (Optr)VAR_buffer_0_4, (Optr)&t_send0, (Optr)PSend22974, (Optr)&t_send1, (Optr)PSend22973, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock22941 = new_Block_with(empty_Array, empty_Array, PThreadedCode22942, 6, PSend22946, PAssign22947, PSend22956, PAssign22961, PSend22971, PAssign22972);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend22975 = new_Send((Optr)PBlock22929, SMB_whileTrue_, 1, (Optr)PBlock22941);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend22976 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend22979 = new_Send((Optr)VAR_progressBlock_0_3, SMB_value_value_, 2, (Optr)VAR_sizeOrNil_0_2, (Optr)VAR_totalRead_0_5);
    Array PThreadedCode22978 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_5, (Optr)&t_send2, (Optr)PSend22979, (Optr)&t_block_return);
    Block PBlock22977 = new_Block_with(empty_Array, empty_Array, PThreadedCode22978, 1, PSend22979);
    // ifNotNil:. 
    Send PSend22980 = new_Send((Optr)VAR_progressBlock_0_3, SMB_ifNotNil_, 1, (Optr)PBlock22977);
    Array PThreadedCode22898 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_22899, (Optr)&t_send1, (Optr)PSend22900, (Optr)&t_push_closure, (Optr)PBlock22901, (Optr)&t_send1, (Optr)PSend22916, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend22917, (Optr)&t_send_ifTrue_, (Optr)PSend22918, (Optr)PBlock22919, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22922, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4096, (Optr)&t_send1, (Optr)PSend22923, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22924, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22925, (Optr)&t_push_variable, (Optr)VAR_sizeOrNil_0_2, (Optr)&t_push_closure, (Optr)PBlock22927, (Optr)&t_send1, (Optr)PSend22926, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock22929, (Optr)&t_push_closure, (Optr)PBlock22941, (Optr)&t_send1, (Optr)PSend22975, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend22976, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_3, (Optr)&t_push_closure, (Optr)PBlock22977, (Optr)&t_send1, (Optr)PSend22980, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22896 = new_Block_with(PArray22897, empty_Array, PThreadedCode22898, 9, PSend22916, PSend22918, PAssign22922, PAssign22924, PAssign22925, PSend22975, PSend22976, PSend22980, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22981 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22896);
    Array PThreadedCode22895 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22896, (Optr)&t_send1, (Optr)PSend22981, (Optr)&t_method_return);
    Method PMethod22892 = new_Method_with(PArray22893, PArray22894, empty_Array, PThreadedCode22895, 1, PSend22981);
    
    MethodClosure MC_SMB_streamFrom_to_size_progress_ = new_MethodClosure((Method)PMethod22892, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_streamFrom_to_size_progress_, MC_SMB_streamFrom_to_size_progress_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray22985 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    // writeOn:. 
    Send PSend22987 = new_Send((Optr)self, SMB_writeOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode22986 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend22987, (Optr)&t_method_return);
    Block PBlock22984 = new_Block_with(PArray22985, empty_Array, PThreadedCode22986, 1, PSend22987);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend22988 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock22984);
    Array PThreadedCode22983 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock22984, (Optr)&t_send1, (Optr)PSend22988, (Optr)&t_method_return);
    Method PMethod22982 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22983, 1, PSend22988);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod22982, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_stream() {
    Symbol SMB_stream = new_Symbol(L"stream");
    Array PThreadedCode22990 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_method_return);
    Method PMethod22989 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22990, 1, slot_WebClient_Core_WebMessage_stream);
    
    MethodClosure MC_SMB_stream = new_MethodClosure((Method)PMethod22989, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_stream, MC_SMB_stream);
}


static void init_SMB_protocol() {
    Symbol SMB_protocol = new_Symbol(L"protocol");
    Array PThreadedCode22992 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)&t_method_return);
    Method PMethod22991 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22992, 1, slot_WebClient_Core_WebMessage_protocol);
    
    MethodClosure MC_SMB_protocol = new_MethodClosure((Method)PMethod22991, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol, MC_SMB_protocol);
}


static void init_SMB_destroy() {
    Symbol SMB_destroy = new_Symbol(L"destroy");
    // destroy. 
    Send PSend22997 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_destroy, 0);
    Array PThreadedCode22996 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_send0, (Optr)PSend22997, (Optr)&t_block_return);
    Block PBlock22995 = new_Block_with(empty_Array, empty_Array, PThreadedCode22996, 1, PSend22997);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22998 = new_Send((Optr)slot_WebClient_Core_WebMessage_stream, SMB_ifNotNil_, 1, (Optr)PBlock22995);
    Array PThreadedCode22994 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_closure, (Optr)PBlock22995, (Optr)&t_send1, (Optr)PSend22998, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22993 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22994, 2, PSend22998, self);
    
    MethodClosure MC_SMB_destroy = new_MethodClosure((Method)PMethod22993, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_destroy, MC_SMB_destroy);
}


static void init_SMB_writeOn_() {
    Symbol SMB_writeOn_ = new_Symbol(L"writeOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23000 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    // writeHeadersOn:. 
    Send PSend23002 = new_Send((Optr)self, SMB_writeHeadersOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23003 = new_Send((Optr)VAR_aStream_0_0, SMB_crlf, 0);
    Array PThreadedCode23001 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23002, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23003, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22999 = new_Method_with(PArray23000, empty_Array, empty_Array, PThreadedCode23001, 3, PSend23002, PSend23003, self);
    
    MethodClosure MC_SMB_writeOn_ = new_MethodClosure((Method)PMethod22999, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeOn_, MC_SMB_writeOn_);
}


static void init_SMB_headerAt_() {
    Symbol SMB_headerAt_ = new_Symbol(L"headerAt:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray23005 = new_Array_with(1, (Optr)VAR_key_0_0);
    String string_23009 = new_String(L"");
    Array PThreadedCode23008 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23009, (Optr)&t_block_return);
    Constant string_23009_Const = new_Constant((Optr)string_23009);
    Block PBlock23007 = new_Block_with(empty_Array, empty_Array, PThreadedCode23008, 1, string_23009_Const);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    // headerAt:ifAbsent:. 
    Send PSend23010 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23007);
    Array PThreadedCode23006 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23007, (Optr)&t_send2, (Optr)PSend23010, (Optr)&t_method_return);
    Method PMethod23004 = new_Method_with(PArray23005, empty_Array, empty_Array, PThreadedCode23006, 1, PSend23010);
    
    MethodClosure MC_SMB_headerAt_ = new_MethodClosure((Method)PMethod23004, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_, MC_SMB_headerAt_);
}


static void init_SMB_contentLength() {
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23014 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_23016 = new_String(L"Content-Length");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23019 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23018 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23019, (Optr)&t_block_return);
    Block PBlock23017 = new_Block_with(empty_Array, empty_Array, PThreadedCode23018, 1, PSend23019);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    Constant string_23016_Const = new_Constant((Optr)string_23016);
    // headerAt:ifAbsent:. 
    Send PSend23020 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23016_Const, (Optr)PBlock23017);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend23021 = new_Send((Optr)PSend23020, SMB_asInteger, 0);
    Array PThreadedCode23015 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23016, (Optr)&t_push_closure, (Optr)PBlock23017, (Optr)&t_send2, (Optr)PSend23020, (Optr)&t_send0, (Optr)PSend23021, (Optr)&t_method_return);
    Block PBlock23013 = new_Block_with(PArray23014, empty_Array, PThreadedCode23015, 1, PSend23021);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23022 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23013);
    Array PThreadedCode23012 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23013, (Optr)&t_send1, (Optr)PSend23022, (Optr)&t_method_return);
    Method PMethod23011 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23012, 1, PSend23022);
    
    MethodClosure MC_SMB_contentLength = new_MethodClosure((Method)PMethod23011, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength, MC_SMB_contentLength);
}


static void init_SMB_multipartBoundary() {
    Symbol SMB_multipartBoundary = new_Symbol(L"multipartBoundary");
    Variable VAR_header_0_0 = new_Variable_named(L"header", 0);
    Array PArray23024 = new_Array_with(1, (Optr)VAR_header_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23027 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_headerAt_ifAbsent_ = new_Symbol(L"headerAt:ifAbsent:");
    String string_23031 = new_String(L"Content-Type");
    Constant string_23031_Const = new_Constant((Optr)string_23031);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23034 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23033 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23034, (Optr)&t_block_return);
    Block PBlock23032 = new_Block_with(empty_Array, empty_Array, PThreadedCode23033, 1, PSend23034);
    // headerAt:ifAbsent:. 
    Send PSend23030 = new_Send((Optr)self, SMB_headerAt_ifAbsent_, 2, (Optr)string_23031_Const, (Optr)PBlock23032);
    Assign PAssign23029 = new_Assign((Optr)VAR_header_0_0, (Optr)PSend23030);
    String string_23035 = new_String(L"multipart/form-data");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_23035_Const = new_Constant((Optr)string_23035);
    // beginsWith:. 
    Send PSend23036 = new_Send((Optr)VAR_header_0_0, SMB_beginsWith_, 1, (Optr)string_23035_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend23040 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode23039 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend23040, (Optr)&t_block_return);
    Block PBlock23038 = new_Block_with(empty_Array, empty_Array, PThreadedCode23039, 1, PSend23040);
    // ifFalse:. 
    Send PSend23037 = new_Send((Optr)PSend23036, SMB_ifFalse_, 1, (Optr)PBlock23038);
    String string_23041 = new_String(L"boundary=");
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    Constant string_23041_Const = new_Constant((Optr)string_23041);
    // findString:. 
    Send PSend23042 = new_Send((Optr)VAR_header_0_0, SMB_findString_, 1, (Optr)string_23041_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Constant int_9_Const = new_Constant((Optr)int_9);
    // +. 
    Send PSend23043 = new_Send((Optr)PSend23042, SMB__plus_, 1, (Optr)int_9_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23044 = new_Send((Optr)VAR_header_0_0, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend23045 = new_Send((Optr)VAR_header_0_0, SMB_copyFrom_to_, 2, (Optr)PSend23043, (Optr)PSend23044);
    Array PThreadedCode23028 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign23029, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23031, (Optr)&t_push_closure, (Optr)PBlock23032, (Optr)&t_send2, (Optr)PSend23030, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23035, (Optr)&t_send1, (Optr)PSend23036, (Optr)&t_send_ifFalse_, (Optr)PSend23037, (Optr)PBlock23038, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_push1, (Optr)string_23041, (Optr)&t_send1, (Optr)PSend23042, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend23043, (Optr)&t_push_variable, (Optr)VAR_header_0_0, (Optr)&t_send0, (Optr)PSend23044, (Optr)&t_send2, (Optr)PSend23045, (Optr)&t_method_return);
    Block PBlock23026 = new_Block_with(PArray23027, empty_Array, PThreadedCode23028, 3, PAssign23029, PSend23037, PSend23045);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23046 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23026);
    Array PThreadedCode23025 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23026, (Optr)&t_send1, (Optr)PSend23046, (Optr)&t_method_return);
    Method PMethod23023 = new_Method_with(empty_Array, PArray23024, empty_Array, PThreadedCode23025, 1, PSend23046);
    
    MethodClosure MC_SMB_multipartBoundary = new_MethodClosure((Method)PMethod23023, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_multipartBoundary, MC_SMB_multipartBoundary);
}


static void init_SMB_contentWithProgress_() {
    Symbol SMB_contentWithProgress_ = new_Symbol(L"contentWithProgress:");
    Variable VAR_progressBlock_0_0 = new_Variable_named(L"progressBlock", 0);
    Array PArray23048 = new_Array_with(1, (Optr)VAR_progressBlock_0_0);
    Variable VAR_length_1_0 = new_Variable_named(L"length", 1);
    Array PArray23051 = new_Array_with(1, (Optr)VAR_length_1_0);
    Symbol SMB_contentLength = new_Symbol(L"contentLength");
    // contentLength. 
    Send PSend23054 = new_Send((Optr)self, SMB_contentLength, 0);
    Assign PAssign23053 = new_Assign((Optr)VAR_length_1_0, (Optr)PSend23054);
    Symbol SMB_new_streamContents_ = new_Symbol(L"new:streamContents:");
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    SmallInt int_1000 = new_SmallInt(1000);
    Array PThreadedCode23059 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000, (Optr)&t_block_return);
    Constant int_1000_Const = new_Constant((Optr)int_1000);
    Block PBlock23058 = new_Block_with(empty_Array, empty_Array, PThreadedCode23059, 1, int_1000_Const);
    // ifNil:. 
    Send PSend23057 = new_Send((Optr)VAR_length_1_0, SMB_ifNil_, 1, (Optr)PBlock23058);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Array PArray23061 = new_Array_with(1, (Optr)VAR_s_2_0);
    Symbol SMB_streamFrom_to_size_progress_ = new_Symbol(L"streamFrom:to:size:progress:");
    // streamFrom:to:size:progress:. 
    Send PSend23063 = new_Send((Optr)self, SMB_streamFrom_to_size_progress_, 4, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)VAR_s_2_0, (Optr)VAR_length_1_0, (Optr)VAR_progressBlock_0_0);
    Array PThreadedCode23062 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_stream, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_0, (Optr)&t_send4, (Optr)PSend23063, (Optr)&t_method_return);
    Block PBlock23060 = new_Block_with(PArray23061, empty_Array, PThreadedCode23062, 1, PSend23063);
    // new:streamContents:. 
    Send PSend23056 = new_Send((Optr)String_classReference, SMB_new_streamContents_, 2, (Optr)PSend23057, (Optr)PBlock23060);
    Assign PAssign23055 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23056);
    Array PThreadedCode23052 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign23053, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23054, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23055, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_length_1_0, (Optr)&t_push_closure, (Optr)PBlock23058, (Optr)&t_send1, (Optr)PSend23057, (Optr)&t_push_closure, (Optr)PBlock23060, (Optr)&t_send2, (Optr)PSend23056, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock23050 = new_Block_with(empty_Array, PArray23051, PThreadedCode23052, 2, PAssign23053, PAssign23055);
    // ifNil:. 
    Send PSend23064 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23050);
    Array PThreadedCode23049 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23050, (Optr)&t_send1, (Optr)PSend23064, (Optr)&t_method_return);
    Method PMethod23047 = new_Method_with(PArray23048, empty_Array, empty_Array, PThreadedCode23049, 1, PSend23064);
    
    MethodClosure MC_SMB_contentWithProgress_ = new_MethodClosure((Method)PMethod23047, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentWithProgress_, MC_SMB_contentWithProgress_);
}


static void init_SMB_contentType_() {
    Symbol SMB_contentType_ = new_Symbol(L"contentType:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23066 = new_Array_with(1, (Optr)VAR_aString_0_0);
    String string_23068 = new_String(L"Content-Type");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23068_Const = new_Constant((Optr)string_23068);
    // headerAt:put:. 
    Send PSend23069 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23068_Const, (Optr)VAR_aString_0_0);
    Array PThreadedCode23067 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23068, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send2, (Optr)PSend23069, (Optr)&t_method_return);
    Method PMethod23065 = new_Method_with(PArray23066, empty_Array, empty_Array, PThreadedCode23067, 1, PSend23069);
    
    MethodClosure MC_SMB_contentType_ = new_MethodClosure((Method)PMethod23065, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentType_, MC_SMB_contentType_);
}


static void init_SMB_headerAt_put_() {
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23071 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray23074 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_assoc_2_0 = new_Variable_named(L"assoc", 2);
    Array PArray23077 = new_Array_with(1, (Optr)VAR_assoc_2_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend23079 = new_Send((Optr)VAR_assoc_2_0, SMB_key, 0);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23080 = new_Send((Optr)PSend23079, SMB_asLowercase, 0);
    // asLowercase. 
    Send PSend23081 = new_Send((Optr)VAR_key_0_0, SMB_asLowercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23082 = new_Send((Optr)PSend23080, SMB__equals_, 1, (Optr)PSend23081);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23086 = new_Send((Optr)VAR_assoc_2_0, SMB_value_, 1, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend23087 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode23085 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend23086, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend23087, (Optr)&t_block_return);
    Block PBlock23084 = new_Block_with(empty_Array, empty_Array, PThreadedCode23085, 2, PSend23086, PSend23087);
    // ifTrue:. 
    Send PSend23083 = new_Send((Optr)PSend23082, SMB_ifTrue_, 1, (Optr)PBlock23084);
    Array PThreadedCode23078 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_assoc_2_0, (Optr)&t_send0, (Optr)PSend23079, (Optr)&t_send0, (Optr)PSend23080, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend23081, (Optr)&t_send1, (Optr)PSend23082, (Optr)&t_send_ifTrue_, (Optr)PSend23083, (Optr)PBlock23084, (Optr)&t_method_return);
    Block PBlock23076 = new_Block_with(PArray23077, empty_Array, PThreadedCode23078, 1, PSend23083);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend23088 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_do_, 1, (Optr)PBlock23076);
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    // addHeader:value:. 
    Send PSend23089 = new_Send((Optr)self, SMB_addHeader_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Array PThreadedCode23075 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_closure, (Optr)PBlock23076, (Optr)&t_send1, (Optr)PSend23088, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23089, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock23073 = new_Block_with(PArray23074, empty_Array, PThreadedCode23075, 3, PSend23088, PSend23089, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend23090 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock23073);
    Array PThreadedCode23072 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock23073, (Optr)&t_send1, (Optr)PSend23090, (Optr)&t_method_return);
    Method PMethod23070 = new_Method_with(PArray23071, empty_Array, empty_Array, PThreadedCode23072, 1, PSend23090);
    
    MethodClosure MC_SMB_headerAt_put_ = new_MethodClosure((Method)PMethod23070, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headerAt_put_, MC_SMB_headerAt_put_);
}


static void init_SMB_headersAt_ifAbsent_() {
    Symbol SMB_headersAt_ifAbsent_ = new_Symbol(L"headersAt:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23092 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_hdrs_0_2 = new_Variable_named(L"hdrs", 0);
    Array PArray23093 = new_Array_with(1, (Optr)VAR_hdrs_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23096 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23095 = new_Assign((Optr)VAR_hdrs_0_2, (Optr)PSend23096);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray23098 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23100 = new_Send((Optr)VAR_hdrs_0_2, SMB_add_, 1, (Optr)VAR_value_1_0);
    Array PThreadedCode23099 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send1, (Optr)PSend23100, (Optr)&t_method_return);
    Block PBlock23097 = new_Block_with(PArray23098, empty_Array, PThreadedCode23099, 1, PSend23100);
    Symbol SMB_headersAt_do_ = new_Symbol(L"headersAt:do:");
    // headersAt:do:. 
    Send PSend23101 = new_Send((Optr)self, SMB_headersAt_do_, 2, (Optr)VAR_key_0_0, (Optr)PBlock23097);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend23102 = new_Send((Optr)VAR_hdrs_0_2, SMB_asArray, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23105 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode23104 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend23105, (Optr)&t_block_return);
    Block PBlock23103 = new_Block_with(empty_Array, empty_Array, PThreadedCode23104, 1, PSend23105);
    Symbol SMB_ifEmpty_ = new_Symbol(L"ifEmpty:");
    // ifEmpty:. 
    Send PSend23106 = new_Send((Optr)PSend23102, SMB_ifEmpty_, 1, (Optr)PBlock23103);
    Array PThreadedCode23094 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign23095, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock23097, (Optr)&t_send2, (Optr)PSend23101, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hdrs_0_2, (Optr)&t_send0, (Optr)PSend23102, (Optr)&t_push_closure, (Optr)PBlock23103, (Optr)&t_send1, (Optr)PSend23106, (Optr)&t_method_return);
    Method PMethod23091 = new_Method_with(PArray23092, PArray23093, empty_Array, PThreadedCode23094, 3, PAssign23095, PSend23101, PSend23106);
    
    MethodClosure MC_SMB_headersAt_ifAbsent_ = new_MethodClosure((Method)PMethod23091, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_headersAt_ifAbsent_, MC_SMB_headersAt_ifAbsent_);
}


static void init_SMB_contentLength_() {
    Symbol SMB_contentLength_ = new_Symbol(L"contentLength:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray23108 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    String string_23110 = new_String(L"Content-Length");
    Symbol SMB_headerAt_put_ = new_Symbol(L"headerAt:put:");
    Constant string_23110_Const = new_Constant((Optr)string_23110);
    // headerAt:put:. 
    Send PSend23111 = new_Send((Optr)self, SMB_headerAt_put_, 2, (Optr)string_23110_Const, (Optr)VAR_aNumber_0_0);
    Array PThreadedCode23109 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_23110, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_send2, (Optr)PSend23111, (Optr)&t_method_return);
    Method PMethod23107 = new_Method_with(PArray23108, empty_Array, empty_Array, PThreadedCode23109, 1, PSend23111);
    
    MethodClosure MC_SMB_contentLength_ = new_MethodClosure((Method)PMethod23107, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_contentLength_, MC_SMB_contentLength_);
}


static void init_SMB_content() {
    Symbol SMB_content = new_Symbol(L"content");
    Symbol SMB_getContent = new_Symbol(L"getContent");
    // getContent. 
    Send PSend23117 = new_Send((Optr)self, SMB_getContent, 0);
    Assign PAssign23116 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)PSend23117);
    Array PThreadedCode23115 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23116, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend23117, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23114 = new_Block_with(empty_Array, empty_Array, PThreadedCode23115, 1, PAssign23116);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend23118 = new_Send((Optr)slot_WebClient_Core_WebMessage_content, SMB_ifNil_, 1, (Optr)PBlock23114);
    Array PThreadedCode23113 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_content, (Optr)&t_push_closure, (Optr)PBlock23114, (Optr)&t_send1, (Optr)PSend23118, (Optr)&t_method_return);
    Method PMethod23112 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23113, 1, PSend23118);
    
    MethodClosure MC_SMB_content = new_MethodClosure((Method)PMethod23112, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content, MC_SMB_content);
}


static void init_SMB_protocol_() {
    Symbol SMB_protocol_ = new_Symbol(L"protocol:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23120 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23122 = new_Assign((Optr)slot_WebClient_Core_WebMessage_protocol, (Optr)VAR_aString_0_0);
    Array PThreadedCode23121 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23122, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23119 = new_Method_with(PArray23120, empty_Array, empty_Array, PThreadedCode23121, 2, PAssign23122, self);
    
    MethodClosure MC_SMB_protocol_ = new_MethodClosure((Method)PMethod23119, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_protocol_, MC_SMB_protocol_);
}


static void init_SMB_chunkFrom_to_progress_() {
    Symbol SMB_chunkFrom_to_progress_ = new_Symbol(L"chunkFrom:to:progress:");
    Variable VAR_srcStream_0_0 = new_Variable_named(L"srcStream", 0);
    Variable VAR_dstStream_0_1 = new_Variable_named(L"dstStream", 0);
    Variable VAR_progressBlock_0_2 = new_Variable_named(L"progressBlock", 0);
    Array PArray23124 = new_Array_with(3, (Optr)VAR_srcStream_0_0, (Optr)VAR_dstStream_0_1, (Optr)VAR_progressBlock_0_2);
    Variable VAR_chunkSize_0_3 = new_Variable_named(L"chunkSize", 0);
    Variable VAR_firstLine_0_4 = new_Variable_named(L"firstLine", 0);
    Variable VAR_buffer_0_5 = new_Variable_named(L"buffer", 0);
    Variable VAR_totalRead_0_6 = new_Variable_named(L"totalRead", 0);
    Array PArray23125 = new_Array_with(4, (Optr)VAR_chunkSize_0_3, (Optr)VAR_firstLine_0_4, (Optr)VAR_buffer_0_5, (Optr)VAR_totalRead_0_6);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign23127 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)int_0_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23129 = new_Send((Optr)String_classReference, SMB_new, 0);
    Assign PAssign23128 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23129);
    Symbol SMB_nextLine = new_Symbol(L"nextLine");
    // nextLine. 
    Send PSend23133 = new_Send((Optr)VAR_srcStream_0_0, SMB_nextLine, 0);
    Assign PAssign23132 = new_Assign((Optr)VAR_firstLine_0_4, (Optr)PSend23133);
    String string_23137 = new_String(L"16r");
    Constant string_23137_Const = new_Constant((Optr)string_23137);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend23138 = new_Send((Optr)VAR_firstLine_0_4, SMB_asUppercase, 0);
    // ,. 
    Send PSend23136 = new_Send((Optr)string_23137_Const, SMB__append_, 1, (Optr)PSend23138);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend23135 = new_Send((Optr)PSend23136, SMB_asNumber, 0);
    Assign PAssign23134 = new_Assign((Optr)VAR_chunkSize_0_3, (Optr)PSend23135);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend23139 = new_Send((Optr)VAR_chunkSize_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode23131 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign23132, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_send0, (Optr)PSend23133, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23134, (Optr)&t_push1, (Optr)string_23137, (Optr)&t_push_variable, (Optr)VAR_firstLine_0_4, (Optr)&t_send0, (Optr)PSend23138, (Optr)&t_send1, (Optr)PSend23136, (Optr)&t_send0, (Optr)PSend23135, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend23139, (Optr)&t_block_return);
    Block PBlock23130 = new_Block_with(empty_Array, empty_Array, PThreadedCode23131, 3, PAssign23132, PAssign23134, PSend23139);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend23144 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23143 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23144, (Optr)&t_block_return);
    Block PBlock23142 = new_Block_with(empty_Array, empty_Array, PThreadedCode23143, 1, PSend23144);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend23145 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23142);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend23146 = new_Send((Optr)VAR_buffer_0_5, SMB_size, 0);
    // =. 
    Send PSend23147 = new_Send((Optr)PSend23146, SMB__equals_, 1, (Optr)VAR_chunkSize_0_3);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend23153 = new_Send((Optr)VAR_buffer_0_5, SMB_class, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend23152 = new_Send((Optr)PSend23153, SMB_new_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23151 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23152);
    Array PThreadedCode23150 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign23151, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23153, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23152, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23149 = new_Block_with(empty_Array, empty_Array, PThreadedCode23150, 1, PAssign23151);
    // ifFalse:. 
    Send PSend23148 = new_Send((Optr)PSend23147, SMB_ifFalse_, 1, (Optr)PBlock23149);
    Symbol SMB_next_into_startingAt_ = new_Symbol(L"next:into:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // next:into:startingAt:. 
    Send PSend23155 = new_Send((Optr)VAR_srcStream_0_0, SMB_next_into_startingAt_, 3, (Optr)VAR_chunkSize_0_3, (Optr)VAR_buffer_0_5, (Optr)int_1_Const);
    Assign PAssign23154 = new_Assign((Optr)VAR_buffer_0_5, (Optr)PSend23155);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23156 = new_Send((Optr)VAR_dstStream_0_1, SMB_nextPutAll_, 1, (Optr)VAR_buffer_0_5);
    Symbol SMB_skip_ = new_Symbol(L"skip:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skip:. 
    Send PSend23157 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend23159 = new_Send((Optr)VAR_totalRead_0_6, SMB__plus_, 1, (Optr)VAR_chunkSize_0_3);
    Assign PAssign23158 = new_Assign((Optr)VAR_totalRead_0_6, (Optr)PSend23159);
    Array PThreadedCode23141 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23142, (Optr)&t_send1, (Optr)PSend23145, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send0, (Optr)PSend23146, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23147, (Optr)&t_send_ifFalse_, (Optr)PSend23148, (Optr)PBlock23149, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23154, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend23155, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_push_variable, (Optr)VAR_buffer_0_5, (Optr)&t_send1, (Optr)PSend23156, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23157, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23158, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_push_variable, (Optr)VAR_chunkSize_0_3, (Optr)&t_send1, (Optr)PSend23159, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock23140 = new_Block_with(empty_Array, empty_Array, PThreadedCode23141, 6, PSend23145, PSend23148, PAssign23154, PSend23156, PSend23157, PAssign23158);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend23160 = new_Send((Optr)PBlock23130, SMB_whileFalse_, 1, (Optr)PBlock23140);
    // skip:. 
    Send PSend23161 = new_Send((Optr)VAR_srcStream_0_0, SMB_skip_, 1, (Optr)int_2_Const);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend23162 = new_Send((Optr)VAR_dstStream_0_1, SMB_flush, 0);
    // value:value:. 
    Send PSend23165 = new_Send((Optr)VAR_progressBlock_0_2, SMB_value_value_, 2, (Optr)nil_Const, (Optr)VAR_totalRead_0_6);
    Array PThreadedCode23164 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_nil, (Optr)&t_push_variable, (Optr)VAR_totalRead_0_6, (Optr)&t_send2, (Optr)PSend23165, (Optr)&t_block_return);
    Block PBlock23163 = new_Block_with(empty_Array, empty_Array, PThreadedCode23164, 1, PSend23165);
    // ifNotNil:. 
    Send PSend23166 = new_Send((Optr)VAR_progressBlock_0_2, SMB_ifNotNil_, 1, (Optr)PBlock23163);
    Array PThreadedCode23126 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign23127, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign23128, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23129, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23130, (Optr)&t_push_closure, (Optr)PBlock23140, (Optr)&t_send1, (Optr)PSend23160, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_srcStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend23161, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dstStream_0_1, (Optr)&t_send0, (Optr)PSend23162, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_progressBlock_0_2, (Optr)&t_push_closure, (Optr)PBlock23163, (Optr)&t_send1, (Optr)PSend23166, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23123 = new_Method_with(PArray23124, PArray23125, empty_Array, PThreadedCode23126, 7, PAssign23127, PAssign23128, PSend23160, PSend23161, PSend23162, PSend23166, self);
    
    MethodClosure MC_SMB_chunkFrom_to_progress_ = new_MethodClosure((Method)PMethod23123, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_chunkFrom_to_progress_, MC_SMB_chunkFrom_to_progress_);
}


static void init_SMB_addHeader_value_() {
    Symbol SMB_addHeader_value_ = new_Symbol(L"addHeader:value:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray23168 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23170 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23171 = new_Send((Optr)PSend23170, SMB_key_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23172 = new_Send((Optr)slot_WebClient_Core_WebMessage_headers, SMB_add_, 1, (Optr)PSend23171);
    Array PThreadedCode23169 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_headers, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23170, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend23171, (Optr)&t_send1, (Optr)PSend23172, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23167 = new_Method_with(PArray23168, empty_Array, empty_Array, PThreadedCode23169, 2, PSend23172, self);
    
    MethodClosure MC_SMB_addHeader_value_ = new_MethodClosure((Method)PMethod23167, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_addHeader_value_, MC_SMB_addHeader_value_);
}


static void init_SMB_content_() {
    Symbol SMB_content_ = new_Symbol(L"content:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray23174 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign23176 = new_Assign((Optr)slot_WebClient_Core_WebMessage_content, (Optr)VAR_aString_0_0);
    Array PThreadedCode23175 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign23176, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23173 = new_Method_with(PArray23174, empty_Array, empty_Array, PThreadedCode23175, 2, PAssign23176, self);
    
    MethodClosure MC_SMB_content_ = new_MethodClosure((Method)PMethod23173, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_content_, MC_SMB_content_);
}


static void init_SMB_writeHeadersOn_() {
    Symbol SMB_writeHeadersOn_ = new_Symbol(L"writeHeadersOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23178 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23181 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray23184 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    String string_23186 = new_String(L": ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_23186_Const = new_Constant((Optr)string_23186);
    // ,. 
    Send PSend23187 = new_Send((Optr)VAR_key_1_0, SMB__append_, 1, (Optr)string_23186_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend23188 = new_Send((Optr)VAR_value_1_1, SMB_asString, 0);
    // ,. 
    Send PSend23189 = new_Send((Optr)PSend23187, SMB__append_, 1, (Optr)PSend23188);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend23190 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend23189);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23191 = new_Send((Optr)VAR__receiver__2_0, SMB_crlf, 0);
    Array PThreadedCode23185 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push1, (Optr)string_23186, (Optr)&t_send1, (Optr)PSend23187, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send0, (Optr)PSend23188, (Optr)&t_send1, (Optr)PSend23189, (Optr)&t_send1, (Optr)PSend23190, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend23191, (Optr)&t_method_return);
    Block PBlock23183 = new_Block_with(PArray23184, empty_Array, PThreadedCode23185, 2, PSend23190, PSend23191);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23192 = new_Send((Optr)PBlock23183, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode23182 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock23183, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend23192, (Optr)&t_method_return);
    Block PBlock23180 = new_Block_with(PArray23181, empty_Array, PThreadedCode23182, 1, PSend23192);
    Symbol SMB_headersDo_ = new_Symbol(L"headersDo:");
    // headersDo:. 
    Send PSend23193 = new_Send((Optr)self, SMB_headersDo_, 1, (Optr)PBlock23180);
    Array PThreadedCode23179 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock23180, (Optr)&t_send1, (Optr)PSend23193, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23177 = new_Method_with(PArray23178, empty_Array, empty_Array, PThreadedCode23179, 2, PSend23193, self);
    
    MethodClosure MC_SMB_writeHeadersOn_ = new_MethodClosure((Method)PMethod23177, WebClient_Core_WebMessage_Class);
    store_method(WebClient_Core_WebMessage_Class, SMB_writeHeadersOn_, MC_SMB_writeHeadersOn_);
}


static void init_class_SMB_statusCodeAt_() {
    Symbol SMB_statusCodeAt_ = new_Symbol(L"statusCodeAt:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray23195 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend23197 = new_Send((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, SMB_at_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode23196 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend23197, (Optr)&t_method_return);
    Method PMethod23194 = new_Method_with(PArray23195, empty_Array, empty_Array, PThreadedCode23196, 1, PSend23197);
    
    MethodClosure MC_SMB_statusCodeAt_ = new_MethodClosure((Method)PMethod23194, HEADER(WebClient_Core_WebMessage_Class));
    store_method(HEADER(WebClient_Core_WebMessage_Class), SMB_statusCodeAt_, MC_SMB_statusCodeAt_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray23203 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_100 = new_SmallInt(100);
    String string_23205 = new_String(L"Continue");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant int_100_Const = new_Constant((Optr)int_100);
    Constant string_23205_Const = new_Constant((Optr)string_23205);
    // at:put:. 
    Send PSend23206 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_100_Const, (Optr)string_23205_Const);
    SmallInt int_101 = new_SmallInt(101);
    String string_23207 = new_String(L"Switching Protocols");
    Constant int_101_Const = new_Constant((Optr)int_101);
    Constant string_23207_Const = new_Constant((Optr)string_23207);
    // at:put:. 
    Send PSend23208 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_101_Const, (Optr)string_23207_Const);
    SmallInt int_102 = new_SmallInt(102);
    String string_23209 = new_String(L"Processing");
    Constant int_102_Const = new_Constant((Optr)int_102);
    Constant string_23209_Const = new_Constant((Optr)string_23209);
    // at:put:. 
    Send PSend23210 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_102_Const, (Optr)string_23209_Const);
    SmallInt int_200 = new_SmallInt(200);
    String string_23211 = new_String(L"OK");
    Constant int_200_Const = new_Constant((Optr)int_200);
    Constant string_23211_Const = new_Constant((Optr)string_23211);
    // at:put:. 
    Send PSend23212 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_200_Const, (Optr)string_23211_Const);
    SmallInt int_201 = new_SmallInt(201);
    String string_23213 = new_String(L"Created");
    Constant int_201_Const = new_Constant((Optr)int_201);
    Constant string_23213_Const = new_Constant((Optr)string_23213);
    // at:put:. 
    Send PSend23214 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_201_Const, (Optr)string_23213_Const);
    SmallInt int_202 = new_SmallInt(202);
    String string_23215 = new_String(L"Accepted");
    Constant int_202_Const = new_Constant((Optr)int_202);
    Constant string_23215_Const = new_Constant((Optr)string_23215);
    // at:put:. 
    Send PSend23216 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_202_Const, (Optr)string_23215_Const);
    SmallInt int_203 = new_SmallInt(203);
    String string_23217 = new_String(L"Non-Authoritative Information");
    Constant int_203_Const = new_Constant((Optr)int_203);
    Constant string_23217_Const = new_Constant((Optr)string_23217);
    // at:put:. 
    Send PSend23218 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_203_Const, (Optr)string_23217_Const);
    SmallInt int_204 = new_SmallInt(204);
    String string_23219 = new_String(L"No Content");
    Constant int_204_Const = new_Constant((Optr)int_204);
    Constant string_23219_Const = new_Constant((Optr)string_23219);
    // at:put:. 
    Send PSend23220 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_204_Const, (Optr)string_23219_Const);
    SmallInt int_205 = new_SmallInt(205);
    String string_23221 = new_String(L"Reset Content");
    Constant int_205_Const = new_Constant((Optr)int_205);
    Constant string_23221_Const = new_Constant((Optr)string_23221);
    // at:put:. 
    Send PSend23222 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_205_Const, (Optr)string_23221_Const);
    SmallInt int_206 = new_SmallInt(206);
    String string_23223 = new_String(L"Partial Content");
    Constant int_206_Const = new_Constant((Optr)int_206);
    Constant string_23223_Const = new_Constant((Optr)string_23223);
    // at:put:. 
    Send PSend23224 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_206_Const, (Optr)string_23223_Const);
    SmallInt int_207 = new_SmallInt(207);
    String string_23225 = new_String(L"Multi-Status");
    Constant int_207_Const = new_Constant((Optr)int_207);
    Constant string_23225_Const = new_Constant((Optr)string_23225);
    // at:put:. 
    Send PSend23226 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_207_Const, (Optr)string_23225_Const);
    SmallInt int_300 = new_SmallInt(300);
    String string_23227 = new_String(L"Multiple Choices");
    Constant int_300_Const = new_Constant((Optr)int_300);
    Constant string_23227_Const = new_Constant((Optr)string_23227);
    // at:put:. 
    Send PSend23228 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_300_Const, (Optr)string_23227_Const);
    SmallInt int_301 = new_SmallInt(301);
    String string_23229 = new_String(L"Moved Permanently");
    Constant int_301_Const = new_Constant((Optr)int_301);
    Constant string_23229_Const = new_Constant((Optr)string_23229);
    // at:put:. 
    Send PSend23230 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_301_Const, (Optr)string_23229_Const);
    SmallInt int_302 = new_SmallInt(302);
    String string_23231 = new_String(L"Moved Temporarily");
    Constant int_302_Const = new_Constant((Optr)int_302);
    Constant string_23231_Const = new_Constant((Optr)string_23231);
    // at:put:. 
    Send PSend23232 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_302_Const, (Optr)string_23231_Const);
    SmallInt int_303 = new_SmallInt(303);
    String string_23233 = new_String(L"See Other");
    Constant int_303_Const = new_Constant((Optr)int_303);
    Constant string_23233_Const = new_Constant((Optr)string_23233);
    // at:put:. 
    Send PSend23234 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_303_Const, (Optr)string_23233_Const);
    SmallInt int_304 = new_SmallInt(304);
    String string_23235 = new_String(L"Not Modified");
    Constant int_304_Const = new_Constant((Optr)int_304);
    Constant string_23235_Const = new_Constant((Optr)string_23235);
    // at:put:. 
    Send PSend23236 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_304_Const, (Optr)string_23235_Const);
    SmallInt int_305 = new_SmallInt(305);
    String string_23237 = new_String(L"Use Proxy");
    Constant int_305_Const = new_Constant((Optr)int_305);
    Constant string_23237_Const = new_Constant((Optr)string_23237);
    // at:put:. 
    Send PSend23238 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_305_Const, (Optr)string_23237_Const);
    SmallInt int_307 = new_SmallInt(307);
    String string_23239 = new_String(L"Temporary Redirect");
    Constant int_307_Const = new_Constant((Optr)int_307);
    Constant string_23239_Const = new_Constant((Optr)string_23239);
    // at:put:. 
    Send PSend23240 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_307_Const, (Optr)string_23239_Const);
    SmallInt int_400 = new_SmallInt(400);
    String string_23241 = new_String(L"Bad Request");
    Constant int_400_Const = new_Constant((Optr)int_400);
    Constant string_23241_Const = new_Constant((Optr)string_23241);
    // at:put:. 
    Send PSend23242 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_400_Const, (Optr)string_23241_Const);
    SmallInt int_401 = new_SmallInt(401);
    String string_23243 = new_String(L"Unauthorized");
    Constant int_401_Const = new_Constant((Optr)int_401);
    Constant string_23243_Const = new_Constant((Optr)string_23243);
    // at:put:. 
    Send PSend23244 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_401_Const, (Optr)string_23243_Const);
    SmallInt int_402 = new_SmallInt(402);
    String string_23245 = new_String(L"Payment Required");
    Constant int_402_Const = new_Constant((Optr)int_402);
    Constant string_23245_Const = new_Constant((Optr)string_23245);
    // at:put:. 
    Send PSend23246 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_402_Const, (Optr)string_23245_Const);
    SmallInt int_403 = new_SmallInt(403);
    String string_23247 = new_String(L"Forbidden");
    Constant int_403_Const = new_Constant((Optr)int_403);
    Constant string_23247_Const = new_Constant((Optr)string_23247);
    // at:put:. 
    Send PSend23248 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_403_Const, (Optr)string_23247_Const);
    SmallInt int_404 = new_SmallInt(404);
    String string_23249 = new_String(L"Not Found");
    Constant int_404_Const = new_Constant((Optr)int_404);
    Constant string_23249_Const = new_Constant((Optr)string_23249);
    // at:put:. 
    Send PSend23250 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_404_Const, (Optr)string_23249_Const);
    SmallInt int_405 = new_SmallInt(405);
    String string_23251 = new_String(L"Method Not Allowed");
    Constant int_405_Const = new_Constant((Optr)int_405);
    Constant string_23251_Const = new_Constant((Optr)string_23251);
    // at:put:. 
    Send PSend23252 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_405_Const, (Optr)string_23251_Const);
    SmallInt int_406 = new_SmallInt(406);
    String string_23253 = new_String(L"Not Acceptable");
    Constant int_406_Const = new_Constant((Optr)int_406);
    Constant string_23253_Const = new_Constant((Optr)string_23253);
    // at:put:. 
    Send PSend23254 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_406_Const, (Optr)string_23253_Const);
    SmallInt int_407 = new_SmallInt(407);
    String string_23255 = new_String(L"Proxy Authentication Required");
    Constant int_407_Const = new_Constant((Optr)int_407);
    Constant string_23255_Const = new_Constant((Optr)string_23255);
    // at:put:. 
    Send PSend23256 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_407_Const, (Optr)string_23255_Const);
    SmallInt int_408 = new_SmallInt(408);
    String string_23257 = new_String(L"Request Timeout");
    Constant int_408_Const = new_Constant((Optr)int_408);
    Constant string_23257_Const = new_Constant((Optr)string_23257);
    // at:put:. 
    Send PSend23258 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_408_Const, (Optr)string_23257_Const);
    SmallInt int_409 = new_SmallInt(409);
    String string_23259 = new_String(L"Conflict");
    Constant int_409_Const = new_Constant((Optr)int_409);
    Constant string_23259_Const = new_Constant((Optr)string_23259);
    // at:put:. 
    Send PSend23260 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_409_Const, (Optr)string_23259_Const);
    SmallInt int_410 = new_SmallInt(410);
    String string_23261 = new_String(L"Gone");
    Constant int_410_Const = new_Constant((Optr)int_410);
    Constant string_23261_Const = new_Constant((Optr)string_23261);
    // at:put:. 
    Send PSend23262 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_410_Const, (Optr)string_23261_Const);
    SmallInt int_411 = new_SmallInt(411);
    String string_23263 = new_String(L"Lenght Required");
    Constant int_411_Const = new_Constant((Optr)int_411);
    Constant string_23263_Const = new_Constant((Optr)string_23263);
    // at:put:. 
    Send PSend23264 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_411_Const, (Optr)string_23263_Const);
    SmallInt int_412 = new_SmallInt(412);
    String string_23265 = new_String(L"Precondition Failed");
    Constant int_412_Const = new_Constant((Optr)int_412);
    Constant string_23265_Const = new_Constant((Optr)string_23265);
    // at:put:. 
    Send PSend23266 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_412_Const, (Optr)string_23265_Const);
    SmallInt int_413 = new_SmallInt(413);
    String string_23267 = new_String(L"Request Entity Too Large");
    Constant int_413_Const = new_Constant((Optr)int_413);
    Constant string_23267_Const = new_Constant((Optr)string_23267);
    // at:put:. 
    Send PSend23268 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_413_Const, (Optr)string_23267_Const);
    SmallInt int_414 = new_SmallInt(414);
    String string_23269 = new_String(L"Request-URI Too Long");
    Constant int_414_Const = new_Constant((Optr)int_414);
    Constant string_23269_Const = new_Constant((Optr)string_23269);
    // at:put:. 
    Send PSend23270 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_414_Const, (Optr)string_23269_Const);
    SmallInt int_415 = new_SmallInt(415);
    String string_23271 = new_String(L"Unsupported Media Type");
    Constant int_415_Const = new_Constant((Optr)int_415);
    Constant string_23271_Const = new_Constant((Optr)string_23271);
    // at:put:. 
    Send PSend23272 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_415_Const, (Optr)string_23271_Const);
    SmallInt int_416 = new_SmallInt(416);
    String string_23273 = new_String(L"Requested Range Not Satisfiable");
    Constant int_416_Const = new_Constant((Optr)int_416);
    Constant string_23273_Const = new_Constant((Optr)string_23273);
    // at:put:. 
    Send PSend23274 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_416_Const, (Optr)string_23273_Const);
    SmallInt int_417 = new_SmallInt(417);
    String string_23275 = new_String(L"Expectation Failed");
    Constant int_417_Const = new_Constant((Optr)int_417);
    Constant string_23275_Const = new_Constant((Optr)string_23275);
    // at:put:. 
    Send PSend23276 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_417_Const, (Optr)string_23275_Const);
    SmallInt int_422 = new_SmallInt(422);
    String string_23277 = new_String(L"Unprocessable Entity");
    Constant int_422_Const = new_Constant((Optr)int_422);
    Constant string_23277_Const = new_Constant((Optr)string_23277);
    // at:put:. 
    Send PSend23278 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_422_Const, (Optr)string_23277_Const);
    SmallInt int_423 = new_SmallInt(423);
    String string_23279 = new_String(L"Locked");
    Constant int_423_Const = new_Constant((Optr)int_423);
    Constant string_23279_Const = new_Constant((Optr)string_23279);
    // at:put:. 
    Send PSend23280 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_423_Const, (Optr)string_23279_Const);
    SmallInt int_424 = new_SmallInt(424);
    String string_23281 = new_String(L"Failed Dependency");
    Constant int_424_Const = new_Constant((Optr)int_424);
    Constant string_23281_Const = new_Constant((Optr)string_23281);
    // at:put:. 
    Send PSend23282 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_424_Const, (Optr)string_23281_Const);
    SmallInt int_500 = new_SmallInt(500);
    String string_23283 = new_String(L"Internal Server Error");
    Constant int_500_Const = new_Constant((Optr)int_500);
    Constant string_23283_Const = new_Constant((Optr)string_23283);
    // at:put:. 
    Send PSend23284 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_500_Const, (Optr)string_23283_Const);
    SmallInt int_501 = new_SmallInt(501);
    String string_23285 = new_String(L"Not Implemented");
    Constant int_501_Const = new_Constant((Optr)int_501);
    Constant string_23285_Const = new_Constant((Optr)string_23285);
    // at:put:. 
    Send PSend23286 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_501_Const, (Optr)string_23285_Const);
    SmallInt int_502 = new_SmallInt(502);
    String string_23287 = new_String(L"Bad Gateway");
    Constant int_502_Const = new_Constant((Optr)int_502);
    Constant string_23287_Const = new_Constant((Optr)string_23287);
    // at:put:. 
    Send PSend23288 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_502_Const, (Optr)string_23287_Const);
    SmallInt int_503 = new_SmallInt(503);
    String string_23289 = new_String(L"Service Unavailable");
    Constant int_503_Const = new_Constant((Optr)int_503);
    Constant string_23289_Const = new_Constant((Optr)string_23289);
    // at:put:. 
    Send PSend23290 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_503_Const, (Optr)string_23289_Const);
    SmallInt int_504 = new_SmallInt(504);
    String string_23291 = new_String(L"Gateway Timeout");
    Constant int_504_Const = new_Constant((Optr)int_504);
    Constant string_23291_Const = new_Constant((Optr)string_23291);
    // at:put:. 
    Send PSend23292 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_504_Const, (Optr)string_23291_Const);
    SmallInt int_505 = new_SmallInt(505);
    String string_23293 = new_String(L"HTTP Version Not Supported");
    Constant int_505_Const = new_Constant((Optr)int_505);
    Constant string_23293_Const = new_Constant((Optr)string_23293);
    // at:put:. 
    Send PSend23294 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_505_Const, (Optr)string_23293_Const);
    SmallInt int_507 = new_SmallInt(507);
    String string_23295 = new_String(L"Insufficient Storage");
    Constant int_507_Const = new_Constant((Optr)int_507);
    Constant string_23295_Const = new_Constant((Optr)string_23295);
    // at:put:. 
    Send PSend23296 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_507_Const, (Optr)string_23295_Const);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend23297 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode23204 = instantiate_Array_with(ThreadedCode_Class, 0, 419, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_100, (Optr)&t_push1, (Optr)string_23205, (Optr)&t_send2, (Optr)PSend23206, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_101, (Optr)&t_push1, (Optr)string_23207, (Optr)&t_send2, (Optr)PSend23208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_102, (Optr)&t_push1, (Optr)string_23209, (Optr)&t_send2, (Optr)PSend23210, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push1, (Optr)string_23211, (Optr)&t_send2, (Optr)PSend23212, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_201, (Optr)&t_push1, (Optr)string_23213, (Optr)&t_send2, (Optr)PSend23214, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_202, (Optr)&t_push1, (Optr)string_23215, (Optr)&t_send2, (Optr)PSend23216, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_203, (Optr)&t_push1, (Optr)string_23217, (Optr)&t_send2, (Optr)PSend23218, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_204, (Optr)&t_push1, (Optr)string_23219, (Optr)&t_send2, (Optr)PSend23220, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_205, (Optr)&t_push1, (Optr)string_23221, (Optr)&t_send2, (Optr)PSend23222, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_206, (Optr)&t_push1, (Optr)string_23223, (Optr)&t_send2, (Optr)PSend23224, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_207, (Optr)&t_push1, (Optr)string_23225, (Optr)&t_send2, (Optr)PSend23226, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_300, (Optr)&t_push1, (Optr)string_23227, (Optr)&t_send2, (Optr)PSend23228, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_301, (Optr)&t_push1, (Optr)string_23229, (Optr)&t_send2, (Optr)PSend23230, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_302, (Optr)&t_push1, (Optr)string_23231, (Optr)&t_send2, (Optr)PSend23232, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_303, (Optr)&t_push1, (Optr)string_23233, (Optr)&t_send2, (Optr)PSend23234, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_304, (Optr)&t_push1, (Optr)string_23235, (Optr)&t_send2, (Optr)PSend23236, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_305, (Optr)&t_push1, (Optr)string_23237, (Optr)&t_send2, (Optr)PSend23238, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_307, (Optr)&t_push1, (Optr)string_23239, (Optr)&t_send2, (Optr)PSend23240, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_400, (Optr)&t_push1, (Optr)string_23241, (Optr)&t_send2, (Optr)PSend23242, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_401, (Optr)&t_push1, (Optr)string_23243, (Optr)&t_send2, (Optr)PSend23244, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_402, (Optr)&t_push1, (Optr)string_23245, (Optr)&t_send2, (Optr)PSend23246, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_403, (Optr)&t_push1, (Optr)string_23247, (Optr)&t_send2, (Optr)PSend23248, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_404, (Optr)&t_push1, (Optr)string_23249, (Optr)&t_send2, (Optr)PSend23250, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_405, (Optr)&t_push1, (Optr)string_23251, (Optr)&t_send2, (Optr)PSend23252, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_406, (Optr)&t_push1, (Optr)string_23253, (Optr)&t_send2, (Optr)PSend23254, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_407, (Optr)&t_push1, (Optr)string_23255, (Optr)&t_send2, (Optr)PSend23256, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_408, (Optr)&t_push1, (Optr)string_23257, (Optr)&t_send2, (Optr)PSend23258, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_409, (Optr)&t_push1, (Optr)string_23259, (Optr)&t_send2, (Optr)PSend23260, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_410, (Optr)&t_push1, (Optr)string_23261, (Optr)&t_send2, (Optr)PSend23262, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_411, (Optr)&t_push1, (Optr)string_23263, (Optr)&t_send2, (Optr)PSend23264, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_412, (Optr)&t_push1, (Optr)string_23265, (Optr)&t_send2, (Optr)PSend23266, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_413, (Optr)&t_push1, (Optr)string_23267, (Optr)&t_send2, (Optr)PSend23268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_414, (Optr)&t_push1, (Optr)string_23269, (Optr)&t_send2, (Optr)PSend23270, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_415, (Optr)&t_push1, (Optr)string_23271, (Optr)&t_send2, (Optr)PSend23272, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_416, (Optr)&t_push1, (Optr)string_23273, (Optr)&t_send2, (Optr)PSend23274, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_417, (Optr)&t_push1, (Optr)string_23275, (Optr)&t_send2, (Optr)PSend23276, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_422, (Optr)&t_push1, (Optr)string_23277, (Optr)&t_send2, (Optr)PSend23278, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_423, (Optr)&t_push1, (Optr)string_23279, (Optr)&t_send2, (Optr)PSend23280, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_424, (Optr)&t_push1, (Optr)string_23281, (Optr)&t_send2, (Optr)PSend23282, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_500, (Optr)&t_push1, (Optr)string_23283, (Optr)&t_send2, (Optr)PSend23284, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_501, (Optr)&t_push1, (Optr)string_23285, (Optr)&t_send2, (Optr)PSend23286, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_502, (Optr)&t_push1, (Optr)string_23287, (Optr)&t_send2, (Optr)PSend23288, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_503, (Optr)&t_push1, (Optr)string_23289, (Optr)&t_send2, (Optr)PSend23290, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_504, (Optr)&t_push1, (Optr)string_23291, (Optr)&t_send2, (Optr)PSend23292, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_505, (Optr)&t_push1, (Optr)string_23293, (Optr)&t_send2, (Optr)PSend23294, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_507, (Optr)&t_push1, (Optr)string_23295, (Optr)&t_send2, (Optr)PSend23296, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend23297, (Optr)&t_method_return);
    Block PBlock23202 = new_Block_with(PArray23203, empty_Array, PThreadedCode23204, 47, PSend23206, PSend23208, PSend23210, PSend23212, PSend23214, PSend23216, PSend23218, PSend23220, PSend23222, PSend23224, PSend23226, PSend23228, PSend23230, PSend23232, PSend23234, PSend23236, PSend23238, PSend23240, PSend23242, PSend23244, PSend23246, PSend23248, PSend23250, PSend23252, PSend23254, PSend23256, PSend23258, PSend23260, PSend23262, PSend23264, PSend23266, PSend23268, PSend23270, PSend23272, PSend23274, PSend23276, PSend23278, PSend23280, PSend23282, PSend23284, PSend23286, PSend23288, PSend23290, PSend23292, PSend23294, PSend23296, PSend23297);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23298 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    // value:. 
    Send PSend23201 = new_Send((Optr)PBlock23202, SMB_value_, 1, (Optr)PSend23298);
    Assign PAssign23200 = new_Assign((Optr)slot_WebClient_Core_WebMessage_Class_class_statusCodes, (Optr)PSend23201);
    Array PThreadedCode23199 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign23200, (Optr)&t_push_closure, (Optr)PBlock23202, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23298, (Optr)&t_send1, (Optr)PSend23201, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23198 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode23199, 2, PAssign23200, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod23198, HEADER(WebClient_Core_WebMessage_Class));
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
    init_SMB_isPersistent();
    init_SMB_contentType();
    init_SMB_headersDo_();
    init_SMB_close();
    init_SMB_contentStream();
    init_SMB_headerAt_ifAbsent_();
    init_SMB_headersAt_();
    init_SMB_stream_();
    init_SMB_remoteHost();
    init_SMB_headersAt_do_();
    init_SMB_printOn_();
    init_SMB_closeIfTransient();
    init_SMB_getContent();
    init_SMB_removeHeader_();
    init_SMB_streamFrom_to_size_progress_();
    init_SMB_asString();
    init_SMB_stream();
    init_SMB_protocol();
    init_SMB_destroy();
    init_SMB_writeOn_();
    init_SMB_headerAt_();
    init_SMB_contentLength();
    init_SMB_multipartBoundary();
    init_SMB_contentWithProgress_();
    init_SMB_contentType_();
    init_SMB_headerAt_put_();
    init_SMB_headersAt_ifAbsent_();
    init_SMB_contentLength_();
    init_SMB_content();
    init_SMB_protocol_();
    init_SMB_chunkFrom_to_progress_();
    init_SMB_addHeader_value_();
    init_SMB_content_();
    init_SMB_writeHeadersOn_();
    init_class_SMB_statusCodeAt_();
    init_class_SMB_initialize();
    
}