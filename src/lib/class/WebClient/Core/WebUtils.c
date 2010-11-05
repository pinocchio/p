#include <lib/class/WebClient/Core/WebUtils.h>


Optr layout_WebClient_Core_WebUtils_Class_class;


static void init_class_SMB_readHeadersFrom_() {
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24089 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_headers_0_1 = new_Variable_named(L"headers", 0);
    Variable VAR_nextLine_0_2 = new_Variable_named(L"nextLine", 0);
    Variable VAR_existing_0_3 = new_Variable_named(L"existing", 0);
    Array PArray24090 = new_Array_with(3, (Optr)VAR_headers_0_1, (Optr)VAR_nextLine_0_2, (Optr)VAR_existing_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24093 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24092 = new_Assign((Optr)VAR_headers_0_1, (Optr)PSend24093);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24098 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24097 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24098);
    Assign PAssign24096 = new_Assign((Optr)VAR_nextLine_0_2, (Optr)PSend24097);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend24099 = new_Send((Optr)VAR_nextLine_0_2, SMB_isEmpty, 0);
    Array PThreadedCode24095 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24096, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24098, (Optr)&t_send1, (Optr)PSend24097, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24099, (Optr)&t_block_return);
    Block PBlock24094 = new_Block_with(empty_Array, empty_Array, PThreadedCode24095, 2, PAssign24096, PSend24099);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24102 = new_Send((Optr)VAR_nextLine_0_2, SMB_first, 0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend24103 = new_Send((Optr)PSend24102, SMB_isSeparator, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend24108 = new_Send((Optr)VAR_headers_0_1, SMB_last, 0);
    Assign PAssign24107 = new_Assign((Optr)VAR_existing_0_3, (Optr)PSend24108);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24109 = new_Send((Optr)VAR_existing_0_3, SMB_value, 0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24110 = new_Send((Optr)String_classReference, SMB_space, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24111 = new_Send((Optr)PSend24109, SMB__append_, 1, (Optr)PSend24110);
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    // withBlanksTrimmed. 
    Send PSend24112 = new_Send((Optr)VAR_nextLine_0_2, SMB_withBlanksTrimmed, 0);
    // ,. 
    Send PSend24113 = new_Send((Optr)PSend24111, SMB__append_, 1, (Optr)PSend24112);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24114 = new_Send((Optr)VAR_existing_0_3, SMB_value_, 1, (Optr)PSend24113);
    Array PThreadedCode24106 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign24107, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_send0, (Optr)PSend24108, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_send0, (Optr)PSend24109, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24110, (Optr)&t_send1, (Optr)PSend24111, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24112, (Optr)&t_send1, (Optr)PSend24113, (Optr)&t_send1, (Optr)PSend24114, (Optr)&t_block_return);
    Block PBlock24105 = new_Block_with(empty_Array, empty_Array, PThreadedCode24106, 2, PAssign24107, PSend24114);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend24117 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Character char_435 = new_Character(L':');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_435_Const = new_Constant((Optr)char_435);
    // copyUpTo:. 
    Send PSend24118 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyUpTo_, 1, (Optr)char_435_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend24119 = new_Send((Optr)PSend24118, SMB_asLowercase, 0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    // copyAfter:. 
    Send PSend24120 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyAfter_, 1, (Optr)char_435_Const);
    // withBlanksTrimmed. 
    Send PSend24121 = new_Send((Optr)PSend24120, SMB_withBlanksTrimmed, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend24122 = new_Send((Optr)PSend24117, SMB_key_value_, 2, (Optr)PSend24119, (Optr)PSend24121);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24123 = new_Send((Optr)VAR_headers_0_1, SMB_add_, 1, (Optr)PSend24122);
    Array PThreadedCode24116 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend24117, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend24118, (Optr)&t_send0, (Optr)PSend24119, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend24120, (Optr)&t_send0, (Optr)PSend24121, (Optr)&t_send2, (Optr)PSend24122, (Optr)&t_send1, (Optr)PSend24123, (Optr)&t_block_return);
    Block PBlock24115 = new_Block_with(empty_Array, empty_Array, PThreadedCode24116, 1, PSend24123);
    // ifTrue:ifFalse:. 
    Send PSend24104 = new_Send((Optr)PSend24103, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24105, (Optr)PBlock24115);
    Array PThreadedCode24101 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24102, (Optr)&t_send0, (Optr)PSend24103, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24104, (Optr)PBlock24105, (Optr)PBlock24115, (Optr)&t_block_return);
    Block PBlock24100 = new_Block_with(empty_Array, empty_Array, PThreadedCode24101, 1, PSend24104);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24124 = new_Send((Optr)PBlock24094, SMB_whileFalse_, 1, (Optr)PBlock24100);
    Array PThreadedCode24091 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign24092, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24093, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24094, (Optr)&t_push_closure, (Optr)PBlock24100, (Optr)&t_send1, (Optr)PSend24124, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_method_return);
    Method PMethod24088 = new_Method_with(PArray24089, PArray24090, empty_Array, PThreadedCode24091, 3, PAssign24092, PSend24124, VAR_headers_0_1);
    
    MethodClosure MC_SMB_readHeadersFrom_ = new_MethodClosure((Method)PMethod24088, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_readHeadersFrom_, MC_SMB_readHeadersFrom_);
}


static void init_class_SMB_decodeUrlEncodedForm_do_() {
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24126 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_args_0_2 = new_Variable_named(L"args", 0);
    Variable VAR_keyval_0_3 = new_Variable_named(L"keyval", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_key_0_5 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_6 = new_Variable_named(L"value", 0);
    Array PArray24127 = new_Array_with(5, (Optr)VAR_args_0_2, (Optr)VAR_keyval_0_3, (Optr)VAR_index_0_4, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24130 = new_Send((Optr)VAR_aString_0_0, SMB_readStream, 0);
    Assign PAssign24129 = new_Assign((Optr)VAR_args_0_2, (Optr)PSend24130);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24133 = new_Send((Optr)VAR_args_0_2, SMB_atEnd, 0);
    Array PThreadedCode24132 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_send0, (Optr)PSend24133, (Optr)&t_block_return);
    Block PBlock24131 = new_Block_with(empty_Array, empty_Array, PThreadedCode24132, 1, PSend24133);
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Character char_24138 = new_Character(L'&');
    Constant char_24138_Const = new_Constant((Optr)char_24138);
    // upTo:. 
    Send PSend24137 = new_Send((Optr)VAR_args_0_2, SMB_upTo_, 1, (Optr)char_24138_Const);
    Assign PAssign24136 = new_Assign((Optr)VAR_keyval_0_3, (Optr)PSend24137);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_9649 = new_Character(L'=');
    Constant char_9649_Const = new_Constant((Optr)char_9649);
    // indexOf:. 
    Send PSend24140 = new_Send((Optr)VAR_keyval_0_3, SMB_indexOf_, 1, (Optr)char_9649_Const);
    Assign PAssign24139 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend24140);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend24141 = new_Send((Optr)PAssign24139, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign24145 = new_Assign((Optr)VAR_key_0_5, (Optr)VAR_keyval_0_3);
    String string_24147 = new_String(L"");
    Constant string_24147_Const = new_Constant((Optr)string_24147);
    Assign PAssign24146 = new_Assign((Optr)VAR_value_0_6, (Optr)string_24147_Const);
    Array PThreadedCode24144 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24145, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24146, (Optr)&t_push1, (Optr)string_24147, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24143 = new_Block_with(empty_Array, empty_Array, PThreadedCode24144, 2, PAssign24145, PAssign24146);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24152 = new_Send((Optr)VAR_index_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24151 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend24152);
    Assign PAssign24150 = new_Assign((Optr)VAR_key_0_5, (Optr)PSend24151);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24155 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24156 = new_Send((Optr)VAR_keyval_0_3, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend24154 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)PSend24155, (Optr)PSend24156);
    Assign PAssign24153 = new_Assign((Optr)VAR_value_0_6, (Optr)PSend24154);
    Array PThreadedCode24149 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign24150, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24152, (Optr)&t_send2, (Optr)PSend24151, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24153, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24155, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_send0, (Optr)PSend24156, (Optr)&t_send2, (Optr)PSend24154, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24148 = new_Block_with(empty_Array, empty_Array, PThreadedCode24149, 2, PAssign24150, PAssign24153);
    // ifTrue:ifFalse:. 
    Send PSend24142 = new_Send((Optr)PSend24141, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24143, (Optr)PBlock24148);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend24157 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_value_, 2, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Array PThreadedCode24135 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign24136, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_push1, (Optr)char_24138, (Optr)&t_send1, (Optr)PSend24137, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24139, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push1, (Optr)char_9649, (Optr)&t_send1, (Optr)PSend24140, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24141, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24142, (Optr)PBlock24143, (Optr)PBlock24148, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_key_0_5, (Optr)&t_push_variable, (Optr)VAR_value_0_6, (Optr)&t_send2, (Optr)PSend24157, (Optr)&t_block_return);
    Block PBlock24134 = new_Block_with(empty_Array, empty_Array, PThreadedCode24135, 3, PAssign24136, PSend24142, PSend24157);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24158 = new_Send((Optr)PBlock24131, SMB_whileFalse_, 1, (Optr)PBlock24134);
    Array PThreadedCode24128 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign24129, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend24130, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24131, (Optr)&t_push_closure, (Optr)PBlock24134, (Optr)&t_send1, (Optr)PSend24158, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24125 = new_Method_with(PArray24126, PArray24127, empty_Array, PThreadedCode24128, 3, PAssign24129, PSend24158, self);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_do_ = new_MethodClosure((Method)PMethod24125, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_do_, MC_SMB_decodeUrlEncodedForm_do_);
}


static void init_class_SMB_decodeUrlEncodedForm_multipleValues_() {
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBool_0_1 = new_Variable_named(L"aBool", 0);
    Array PArray24160 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBool_0_1);
    Variable VAR_fields_0_2 = new_Variable_named(L"fields", 0);
    Array PArray24161 = new_Array_with(1, (Optr)VAR_fields_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24164 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24163 = new_Assign((Optr)VAR_fields_0_2, (Optr)PSend24164);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray24166 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_24173 = new_String(L"");
    Array PThreadedCode24172 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24173, (Optr)&t_block_return);
    Constant string_24173_Const = new_Constant((Optr)string_24173);
    Block PBlock24171 = new_Block_with(empty_Array, empty_Array, PThreadedCode24172, 1, string_24173_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend24174 = new_Send((Optr)VAR_fields_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_key_1_0, (Optr)PBlock24171);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24175 = new_Send((Optr)PSend24174, SMB__append_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24176 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)PSend24175);
    Array PThreadedCode24170 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock24171, (Optr)&t_send2, (Optr)PSend24174, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend24175, (Optr)&t_send2, (Optr)PSend24176, (Optr)&t_block_return);
    Block PBlock24169 = new_Block_with(empty_Array, empty_Array, PThreadedCode24170, 1, PSend24176);
    // at:put:. 
    Send PSend24179 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode24178 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend24179, (Optr)&t_block_return);
    Block PBlock24177 = new_Block_with(empty_Array, empty_Array, PThreadedCode24178, 1, PSend24179);
    // ifTrue:ifFalse:. 
    Send PSend24168 = new_Send((Optr)VAR_aBool_0_1, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24169, (Optr)PBlock24177);
    Array PThreadedCode24167 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBool_0_1, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24168, (Optr)PBlock24169, (Optr)PBlock24177, (Optr)&t_method_return);
    Block PBlock24165 = new_Block_with(PArray24166, empty_Array, PThreadedCode24167, 1, PSend24168);
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    // decodeUrlEncodedForm:do:. 
    Send PSend24180 = new_Send((Optr)self, SMB_decodeUrlEncodedForm_do_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock24165);
    Array PThreadedCode24162 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24163, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24164, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock24165, (Optr)&t_send2, (Optr)PSend24180, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_method_return);
    Method PMethod24159 = new_Method_with(PArray24160, PArray24161, empty_Array, PThreadedCode24162, 3, PAssign24163, PSend24180, VAR_fields_0_2);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_multipleValues_ = new_MethodClosure((Method)PMethod24159, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_multipleValues_, MC_SMB_decodeUrlEncodedForm_multipleValues_);
}


static void init_class_SMB_decodeMultipartForm_boundary_do_() {
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_boundary_0_1 = new_Variable_named(L"boundary", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24182 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_boundary_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_skip_0_3 = new_Variable_named(L"skip", 0);
    Variable VAR_headers_0_4 = new_Variable_named(L"headers", 0);
    Variable VAR_content_0_5 = new_Variable_named(L"content", 0);
    Variable VAR_disposition_0_6 = new_Variable_named(L"disposition", 0);
    Variable VAR_index_0_7 = new_Variable_named(L"index", 0);
    Variable VAR_params_0_8 = new_Variable_named(L"params", 0);
    Array PArray24183 = new_Array_with(6, (Optr)VAR_skip_0_3, (Optr)VAR_headers_0_4, (Optr)VAR_content_0_5, (Optr)VAR_disposition_0_6, (Optr)VAR_index_0_7, (Optr)VAR_params_0_8);
    String string_24185 = new_String(L"--");
    Constant string_24185_Const = new_Constant((Optr)string_24185);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24186 = new_Send((Optr)string_24185_Const, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend24187 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24186);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24190 = new_Send((Optr)VAR_aStream_0_0, SMB_atEnd, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // next:. 
    Send PSend24194 = new_Send((Optr)VAR_aStream_0_0, SMB_next_, 1, (Optr)int_2_Const);
    Assign PAssign24193 = new_Assign((Optr)VAR_skip_0_3, (Optr)PSend24194);
    String string_24195 = new_String(L"--");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24195_Const = new_Constant((Optr)string_24195);
    // =. 
    Send PSend24196 = new_Send((Optr)PAssign24193, SMB__equals_, 1, (Optr)string_24195_Const);
    Array PThreadedCode24192 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign24193, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24194, (Optr)&t_assign, (Optr)&t_push1, (Optr)string_24195, (Optr)&t_send1, (Optr)PSend24196, (Optr)&t_block_return);
    Block PBlock24191 = new_Block_with(empty_Array, empty_Array, PThreadedCode24192, 1, PSend24196);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend24197 = new_Send((Optr)PSend24190, SMB_or_, 1, (Optr)PBlock24191);
    Array PThreadedCode24189 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24190, (Optr)&t_push_closure, (Optr)PBlock24191, (Optr)&t_send1, (Optr)PSend24197, (Optr)&t_block_return);
    Block PBlock24188 = new_Block_with(empty_Array, empty_Array, PThreadedCode24189, 1, PSend24197);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24200 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // =. 
    Send PSend24201 = new_Send((Optr)VAR_skip_0_3, SMB__equals_, 1, (Optr)PSend24200);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24205 = new_String(L"Error decoding multipart/form-data fields");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_24205_Const = new_Constant((Optr)string_24205);
    // error:. 
    Send PSend24206 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_24205_Const);
    Array PThreadedCode24204 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24205, (Optr)&t_send1, (Optr)PSend24206, (Optr)&t_block_return);
    Block PBlock24203 = new_Block_with(empty_Array, empty_Array, PThreadedCode24204, 1, PSend24206);
    // ifFalse:. 
    Send PSend24202 = new_Send((Optr)PSend24201, SMB_ifFalse_, 1, (Optr)PBlock24203);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24208 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24207 = new_Assign((Optr)VAR_headers_0_4, (Optr)PSend24208);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24209 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24211 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24213 = new_Send((Optr)VAR_headers_0_4, SMB_add_, 1, (Optr)VAR_hdr_1_0);
    Array PThreadedCode24212 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_send1, (Optr)PSend24213, (Optr)&t_method_return);
    Block PBlock24210 = new_Block_with(PArray24211, empty_Array, PThreadedCode24212, 1, PSend24213);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend24214 = new_Send((Optr)PSend24209, SMB_do_, 1, (Optr)PBlock24210);
    // crlf. 
    Send PSend24219 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    String string_24220 = new_String(L"--");
    Constant string_24220_Const = new_Constant((Optr)string_24220);
    // ,. 
    Send PSend24218 = new_Send((Optr)PSend24219, SMB__append_, 1, (Optr)string_24220_Const);
    // ,. 
    Send PSend24217 = new_Send((Optr)PSend24218, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    // upToAll:. 
    Send PSend24216 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24217);
    Assign PAssign24215 = new_Assign((Optr)VAR_content_0_5, (Optr)PSend24216);
    // new. 
    Send PSend24222 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24221 = new_Assign((Optr)VAR_params_0_8, (Optr)PSend24222);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_24225 = new_String(L"content-disposition");
    Constant string_24225_Const = new_Constant((Optr)string_24225);
    String string_24228 = new_String(L"");
    Array PThreadedCode24227 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24228, (Optr)&t_block_return);
    Constant string_24228_Const = new_Constant((Optr)string_24228);
    Block PBlock24226 = new_Block_with(empty_Array, empty_Array, PThreadedCode24227, 1, string_24228_Const);
    // at:ifAbsent:. 
    Send PSend24224 = new_Send((Optr)VAR_headers_0_4, SMB_at_ifAbsent_, 2, (Optr)string_24225_Const, (Optr)PBlock24226);
    Assign PAssign24223 = new_Assign((Optr)VAR_disposition_0_6, (Optr)PSend24224);
    Symbol  SMB_name = new_Symbol(L"name");
    Symbol  SMB_filename = new_Symbol(L"filename");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_name_Const = new_Constant((Optr)SMB_name);
    Constant SMB_filename_Const = new_Constant((Optr)SMB_filename);
    // with:with:. 
    Send PSend24229 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_name_Const, (Optr)SMB_filename_Const);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Array PArray24231 = new_Array_with(1, (Optr)VAR_arg_1_0);
    Variable VAR_len_1_1 = new_Variable_named(L"len", 1);
    Variable VAR_val_1_2 = new_Variable_named(L"val", 1);
    Array PArray24232 = new_Array_with(2, (Optr)VAR_len_1_1, (Optr)VAR_val_1_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24236 = new_Send((Optr)VAR_arg_1_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24235 = new_Send((Optr)PSend24236, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign24234 = new_Assign((Optr)VAR_len_1_1, (Optr)PSend24235);
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    String string_24240 = new_String(L"=");
    Constant string_24240_Const = new_Constant((Optr)string_24240);
    // ,. 
    Send PSend24239 = new_Send((Optr)VAR_arg_1_0, SMB__append_, 1, (Optr)string_24240_Const);
    // findString:. 
    Send PSend24238 = new_Send((Optr)VAR_disposition_0_6, SMB_findString_, 1, (Optr)PSend24239);
    Assign PAssign24237 = new_Assign((Optr)VAR_index_0_7, (Optr)PSend24238);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24241 = new_Send((Optr)VAR_index_0_7, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // +. 
    Send PSend24247 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Character char_24250 = new_Character(L'"');
    Constant char_24250_Const = new_Constant((Optr)char_24250);
    // +. 
    Send PSend24251 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    // indexOf:startingAt:. 
    Send PSend24249 = new_Send((Optr)VAR_disposition_0_6, SMB_indexOf_startingAt_, 2, (Optr)char_24250_Const, (Optr)PSend24251);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend24248 = new_Send((Optr)PSend24249, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24246 = new_Send((Optr)VAR_disposition_0_6, SMB_copyFrom_to_, 2, (Optr)PSend24247, (Optr)PSend24248);
    Assign PAssign24245 = new_Assign((Optr)VAR_val_1_2, (Optr)PSend24246);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24252 = new_Send((Optr)VAR_params_0_8, SMB_at_put_, 2, (Optr)VAR_arg_1_0, (Optr)VAR_val_1_2);
    Array PThreadedCode24244 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign24245, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24247, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push1, (Optr)char_24250, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24251, (Optr)&t_send2, (Optr)PSend24249, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24248, (Optr)&t_send2, (Optr)PSend24246, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_val_1_2, (Optr)&t_send2, (Optr)PSend24252, (Optr)&t_block_return);
    Block PBlock24243 = new_Block_with(empty_Array, empty_Array, PThreadedCode24244, 2, PAssign24245, PSend24252);
    // ifTrue:. 
    Send PSend24242 = new_Send((Optr)PSend24241, SMB_ifTrue_, 1, (Optr)PBlock24243);
    Array PThreadedCode24233 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign24234, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send0, (Optr)PSend24236, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24235, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24237, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push1, (Optr)string_24240, (Optr)&t_send1, (Optr)PSend24239, (Optr)&t_send1, (Optr)PSend24238, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24241, (Optr)&t_send_ifTrue_, (Optr)PSend24242, (Optr)PBlock24243, (Optr)&t_method_return);
    Block PBlock24230 = new_Block_with(PArray24231, PArray24232, PThreadedCode24233, 3, PAssign24234, PAssign24237, PSend24242);
    // do:. 
    Send PSend24253 = new_Send((Optr)PSend24229, SMB_do_, 1, (Optr)PBlock24230);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend24254 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_value_value_, 3, (Optr)VAR_headers_0_4, (Optr)VAR_params_0_8, (Optr)VAR_content_0_5);
    Array PThreadedCode24199 = instantiate_Array_with(ThreadedCode_Class, 0, 95, (Optr)&t_push_variable, (Optr)VAR_skip_0_3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24200, (Optr)&t_send1, (Optr)PSend24201, (Optr)&t_send_ifFalse_, (Optr)PSend24202, (Optr)PBlock24203, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24207, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24208, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24209, (Optr)&t_push_closure, (Optr)PBlock24210, (Optr)&t_send1, (Optr)PSend24214, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24215, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24219, (Optr)&t_push1, (Optr)string_24220, (Optr)&t_send1, (Optr)PSend24218, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24217, (Optr)&t_send1, (Optr)PSend24216, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24221, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24222, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24223, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push1, (Optr)string_24225, (Optr)&t_push_closure, (Optr)PBlock24226, (Optr)&t_send2, (Optr)PSend24224, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_name, (Optr)&t_push1, (Optr)SMB_filename, (Optr)&t_send2, (Optr)PSend24229, (Optr)&t_push_closure, (Optr)PBlock24230, (Optr)&t_send1, (Optr)PSend24253, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_content_0_5, (Optr)&t_send3, (Optr)PSend24254, (Optr)&t_block_return);
    Block PBlock24198 = new_Block_with(empty_Array, empty_Array, PThreadedCode24199, 8, PSend24202, PAssign24207, PSend24214, PAssign24215, PAssign24221, PAssign24223, PSend24253, PSend24254);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24255 = new_Send((Optr)PBlock24188, SMB_whileFalse_, 1, (Optr)PBlock24198);
    Array PThreadedCode24184 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24185, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24186, (Optr)&t_send1, (Optr)PSend24187, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24188, (Optr)&t_push_closure, (Optr)PBlock24198, (Optr)&t_send1, (Optr)PSend24255, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24181 = new_Method_with(PArray24182, PArray24183, empty_Array, PThreadedCode24184, 3, PSend24187, PSend24255, self);
    
    MethodClosure MC_SMB_decodeMultipartForm_boundary_do_ = new_MethodClosure((Method)PMethod24181, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeMultipartForm_boundary_do_, MC_SMB_decodeMultipartForm_boundary_do_);
}

void init_WebClient_Core_PWebUtils_layout() {
    layout_WebClient_Core_WebUtils_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_WebClient_Core_WebUtils_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_WebClient_Core_WebUtils_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_WebClient_Core_WebUtils_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_WebClient_Core_WebUtils_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_WebClient_Core_WebUtils_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_WebUtils = new_Symbol(L"WebUtils");
    WebClient_Core_WebUtils_Class = (Class)new_Class(Object_Class, layout_WebClient_Core_WebUtils_Class_class);
    WebClient_Core_WebUtils_Class->layout = empty_object_layout;
    WebClient_Core_WebUtils_Class->name = SMB_WebUtils;
    
}

void init_WebClient_Core_PWebUtils_methods() {
    init_class_SMB_readHeadersFrom_();
    init_class_SMB_decodeUrlEncodedForm_do_();
    init_class_SMB_decodeUrlEncodedForm_multipleValues_();
    init_class_SMB_decodeMultipartForm_boundary_do_();
    
}