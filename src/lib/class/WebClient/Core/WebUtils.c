#include <lib/class/WebClient/Core/WebUtils.h>


Optr layout_WebClient_Core_WebUtils_Class_class;


static void init_class_SMB_readHeadersFrom_() {
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24016 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_headers_0_1 = new_Variable_named(L"headers", 0);
    Variable VAR_nextLine_0_2 = new_Variable_named(L"nextLine", 0);
    Variable VAR_existing_0_3 = new_Variable_named(L"existing", 0);
    Array PArray24017 = new_Array_with(3, (Optr)VAR_headers_0_1, (Optr)VAR_nextLine_0_2, (Optr)VAR_existing_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24020 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24019 = new_Assign((Optr)VAR_headers_0_1, (Optr)PSend24020);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24025 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24024 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24025);
    Assign PAssign24023 = new_Assign((Optr)VAR_nextLine_0_2, (Optr)PSend24024);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend24026 = new_Send((Optr)VAR_nextLine_0_2, SMB_isEmpty, 0);
    Array PThreadedCode24022 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24023, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24025, (Optr)&t_send1, (Optr)PSend24024, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24026, (Optr)&t_block_return);
    Block PBlock24021 = new_Block_with(empty_Array, empty_Array, PThreadedCode24022, 2, PAssign24023, PSend24026);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24029 = new_Send((Optr)VAR_nextLine_0_2, SMB_first, 0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend24030 = new_Send((Optr)PSend24029, SMB_isSeparator, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend24035 = new_Send((Optr)VAR_headers_0_1, SMB_last, 0);
    Assign PAssign24034 = new_Assign((Optr)VAR_existing_0_3, (Optr)PSend24035);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24036 = new_Send((Optr)VAR_existing_0_3, SMB_value, 0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24037 = new_Send((Optr)String_classReference, SMB_space, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24038 = new_Send((Optr)PSend24036, SMB__append_, 1, (Optr)PSend24037);
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    // withBlanksTrimmed. 
    Send PSend24039 = new_Send((Optr)VAR_nextLine_0_2, SMB_withBlanksTrimmed, 0);
    // ,. 
    Send PSend24040 = new_Send((Optr)PSend24038, SMB__append_, 1, (Optr)PSend24039);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24041 = new_Send((Optr)VAR_existing_0_3, SMB_value_, 1, (Optr)PSend24040);
    Array PThreadedCode24033 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign24034, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_send0, (Optr)PSend24035, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_send0, (Optr)PSend24036, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24037, (Optr)&t_send1, (Optr)PSend24038, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24039, (Optr)&t_send1, (Optr)PSend24040, (Optr)&t_send1, (Optr)PSend24041, (Optr)&t_block_return);
    Block PBlock24032 = new_Block_with(empty_Array, empty_Array, PThreadedCode24033, 2, PAssign24034, PSend24041);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend24044 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Character char_444 = new_Character(L':');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // copyUpTo:. 
    Send PSend24045 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyUpTo_, 1, (Optr)char_444_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend24046 = new_Send((Optr)PSend24045, SMB_asLowercase, 0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    // copyAfter:. 
    Send PSend24047 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyAfter_, 1, (Optr)char_444_Const);
    // withBlanksTrimmed. 
    Send PSend24048 = new_Send((Optr)PSend24047, SMB_withBlanksTrimmed, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend24049 = new_Send((Optr)PSend24044, SMB_key_value_, 2, (Optr)PSend24046, (Optr)PSend24048);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24050 = new_Send((Optr)VAR_headers_0_1, SMB_add_, 1, (Optr)PSend24049);
    Array PThreadedCode24043 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend24044, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24045, (Optr)&t_send0, (Optr)PSend24046, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24047, (Optr)&t_send0, (Optr)PSend24048, (Optr)&t_send2, (Optr)PSend24049, (Optr)&t_send1, (Optr)PSend24050, (Optr)&t_block_return);
    Block PBlock24042 = new_Block_with(empty_Array, empty_Array, PThreadedCode24043, 1, PSend24050);
    // ifTrue:ifFalse:. 
    Send PSend24031 = new_Send((Optr)PSend24030, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24032, (Optr)PBlock24042);
    Array PThreadedCode24028 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24029, (Optr)&t_send0, (Optr)PSend24030, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24031, (Optr)PBlock24032, (Optr)PBlock24042, (Optr)&t_block_return);
    Block PBlock24027 = new_Block_with(empty_Array, empty_Array, PThreadedCode24028, 1, PSend24031);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24051 = new_Send((Optr)PBlock24021, SMB_whileFalse_, 1, (Optr)PBlock24027);
    Array PThreadedCode24018 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign24019, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24020, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24021, (Optr)&t_push_closure, (Optr)PBlock24027, (Optr)&t_send1, (Optr)PSend24051, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_method_return);
    Method PMethod24015 = new_Method_with(PArray24016, PArray24017, empty_Array, PThreadedCode24018, 3, PAssign24019, PSend24051, VAR_headers_0_1);
    
    MethodClosure MC_SMB_readHeadersFrom_ = new_MethodClosure((Method)PMethod24015, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_readHeadersFrom_, MC_SMB_readHeadersFrom_);
}


static void init_class_SMB_decodeUrlEncodedForm_do_() {
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24053 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_args_0_2 = new_Variable_named(L"args", 0);
    Variable VAR_keyval_0_3 = new_Variable_named(L"keyval", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_key_0_5 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_6 = new_Variable_named(L"value", 0);
    Array PArray24054 = new_Array_with(5, (Optr)VAR_args_0_2, (Optr)VAR_keyval_0_3, (Optr)VAR_index_0_4, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24057 = new_Send((Optr)VAR_aString_0_0, SMB_readStream, 0);
    Assign PAssign24056 = new_Assign((Optr)VAR_args_0_2, (Optr)PSend24057);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24060 = new_Send((Optr)VAR_args_0_2, SMB_atEnd, 0);
    Array PThreadedCode24059 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_send0, (Optr)PSend24060, (Optr)&t_block_return);
    Block PBlock24058 = new_Block_with(empty_Array, empty_Array, PThreadedCode24059, 1, PSend24060);
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Character char_24065 = new_Character(L'&');
    Constant char_24065_Const = new_Constant((Optr)char_24065);
    // upTo:. 
    Send PSend24064 = new_Send((Optr)VAR_args_0_2, SMB_upTo_, 1, (Optr)char_24065_Const);
    Assign PAssign24063 = new_Assign((Optr)VAR_keyval_0_3, (Optr)PSend24064);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_9576 = new_Character(L'=');
    Constant char_9576_Const = new_Constant((Optr)char_9576);
    // indexOf:. 
    Send PSend24067 = new_Send((Optr)VAR_keyval_0_3, SMB_indexOf_, 1, (Optr)char_9576_Const);
    Assign PAssign24066 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend24067);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend24068 = new_Send((Optr)PAssign24066, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign24072 = new_Assign((Optr)VAR_key_0_5, (Optr)VAR_keyval_0_3);
    String string_24074 = new_String(L"");
    Constant string_24074_Const = new_Constant((Optr)string_24074);
    Assign PAssign24073 = new_Assign((Optr)VAR_value_0_6, (Optr)string_24074_Const);
    Array PThreadedCode24071 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24072, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24073, (Optr)&t_push1, (Optr)string_24074, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24070 = new_Block_with(empty_Array, empty_Array, PThreadedCode24071, 2, PAssign24072, PAssign24073);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24079 = new_Send((Optr)VAR_index_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24078 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend24079);
    Assign PAssign24077 = new_Assign((Optr)VAR_key_0_5, (Optr)PSend24078);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24082 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24083 = new_Send((Optr)VAR_keyval_0_3, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend24081 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)PSend24082, (Optr)PSend24083);
    Assign PAssign24080 = new_Assign((Optr)VAR_value_0_6, (Optr)PSend24081);
    Array PThreadedCode24076 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign24077, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24079, (Optr)&t_send2, (Optr)PSend24078, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24080, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24082, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_send0, (Optr)PSend24083, (Optr)&t_send2, (Optr)PSend24081, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24075 = new_Block_with(empty_Array, empty_Array, PThreadedCode24076, 2, PAssign24077, PAssign24080);
    // ifTrue:ifFalse:. 
    Send PSend24069 = new_Send((Optr)PSend24068, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24070, (Optr)PBlock24075);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend24084 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_value_, 2, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Array PThreadedCode24062 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign24063, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_push1, (Optr)char_24065, (Optr)&t_send1, (Optr)PSend24064, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24066, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push1, (Optr)char_9576, (Optr)&t_send1, (Optr)PSend24067, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24068, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24069, (Optr)PBlock24070, (Optr)PBlock24075, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_key_0_5, (Optr)&t_push_variable, (Optr)VAR_value_0_6, (Optr)&t_send2, (Optr)PSend24084, (Optr)&t_block_return);
    Block PBlock24061 = new_Block_with(empty_Array, empty_Array, PThreadedCode24062, 3, PAssign24063, PSend24069, PSend24084);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24085 = new_Send((Optr)PBlock24058, SMB_whileFalse_, 1, (Optr)PBlock24061);
    Array PThreadedCode24055 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign24056, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend24057, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24058, (Optr)&t_push_closure, (Optr)PBlock24061, (Optr)&t_send1, (Optr)PSend24085, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24052 = new_Method_with(PArray24053, PArray24054, empty_Array, PThreadedCode24055, 3, PAssign24056, PSend24085, self);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_do_ = new_MethodClosure((Method)PMethod24052, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_do_, MC_SMB_decodeUrlEncodedForm_do_);
}


static void init_class_SMB_decodeUrlEncodedForm_multipleValues_() {
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBool_0_1 = new_Variable_named(L"aBool", 0);
    Array PArray24087 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBool_0_1);
    Variable VAR_fields_0_2 = new_Variable_named(L"fields", 0);
    Array PArray24088 = new_Array_with(1, (Optr)VAR_fields_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24091 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24090 = new_Assign((Optr)VAR_fields_0_2, (Optr)PSend24091);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray24093 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_24100 = new_String(L"");
    Array PThreadedCode24099 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24100, (Optr)&t_block_return);
    Constant string_24100_Const = new_Constant((Optr)string_24100);
    Block PBlock24098 = new_Block_with(empty_Array, empty_Array, PThreadedCode24099, 1, string_24100_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend24101 = new_Send((Optr)VAR_fields_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_key_1_0, (Optr)PBlock24098);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24102 = new_Send((Optr)PSend24101, SMB__append_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24103 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)PSend24102);
    Array PThreadedCode24097 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock24098, (Optr)&t_send2, (Optr)PSend24101, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend24102, (Optr)&t_send2, (Optr)PSend24103, (Optr)&t_block_return);
    Block PBlock24096 = new_Block_with(empty_Array, empty_Array, PThreadedCode24097, 1, PSend24103);
    // at:put:. 
    Send PSend24106 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode24105 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend24106, (Optr)&t_block_return);
    Block PBlock24104 = new_Block_with(empty_Array, empty_Array, PThreadedCode24105, 1, PSend24106);
    // ifTrue:ifFalse:. 
    Send PSend24095 = new_Send((Optr)VAR_aBool_0_1, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24096, (Optr)PBlock24104);
    Array PThreadedCode24094 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBool_0_1, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24095, (Optr)PBlock24096, (Optr)PBlock24104, (Optr)&t_method_return);
    Block PBlock24092 = new_Block_with(PArray24093, empty_Array, PThreadedCode24094, 1, PSend24095);
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    // decodeUrlEncodedForm:do:. 
    Send PSend24107 = new_Send((Optr)self, SMB_decodeUrlEncodedForm_do_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock24092);
    Array PThreadedCode24089 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24090, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24091, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock24092, (Optr)&t_send2, (Optr)PSend24107, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_method_return);
    Method PMethod24086 = new_Method_with(PArray24087, PArray24088, empty_Array, PThreadedCode24089, 3, PAssign24090, PSend24107, VAR_fields_0_2);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_multipleValues_ = new_MethodClosure((Method)PMethod24086, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_multipleValues_, MC_SMB_decodeUrlEncodedForm_multipleValues_);
}


static void init_class_SMB_decodeMultipartForm_boundary_do_() {
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_boundary_0_1 = new_Variable_named(L"boundary", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24109 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_boundary_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_skip_0_3 = new_Variable_named(L"skip", 0);
    Variable VAR_headers_0_4 = new_Variable_named(L"headers", 0);
    Variable VAR_content_0_5 = new_Variable_named(L"content", 0);
    Variable VAR_disposition_0_6 = new_Variable_named(L"disposition", 0);
    Variable VAR_index_0_7 = new_Variable_named(L"index", 0);
    Variable VAR_params_0_8 = new_Variable_named(L"params", 0);
    Array PArray24110 = new_Array_with(6, (Optr)VAR_skip_0_3, (Optr)VAR_headers_0_4, (Optr)VAR_content_0_5, (Optr)VAR_disposition_0_6, (Optr)VAR_index_0_7, (Optr)VAR_params_0_8);
    String string_24112 = new_String(L"--");
    Constant string_24112_Const = new_Constant((Optr)string_24112);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24113 = new_Send((Optr)string_24112_Const, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend24114 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24113);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24117 = new_Send((Optr)VAR_aStream_0_0, SMB_atEnd, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // next:. 
    Send PSend24121 = new_Send((Optr)VAR_aStream_0_0, SMB_next_, 1, (Optr)int_2_Const);
    Assign PAssign24120 = new_Assign((Optr)VAR_skip_0_3, (Optr)PSend24121);
    String string_24122 = new_String(L"--");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24122_Const = new_Constant((Optr)string_24122);
    // =. 
    Send PSend24123 = new_Send((Optr)PAssign24120, SMB__equals_, 1, (Optr)string_24122_Const);
    Array PThreadedCode24119 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign24120, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24121, (Optr)&t_assign, (Optr)&t_push1, (Optr)string_24122, (Optr)&t_send1, (Optr)PSend24123, (Optr)&t_block_return);
    Block PBlock24118 = new_Block_with(empty_Array, empty_Array, PThreadedCode24119, 1, PSend24123);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend24124 = new_Send((Optr)PSend24117, SMB_or_, 1, (Optr)PBlock24118);
    Array PThreadedCode24116 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24117, (Optr)&t_push_closure, (Optr)PBlock24118, (Optr)&t_send1, (Optr)PSend24124, (Optr)&t_block_return);
    Block PBlock24115 = new_Block_with(empty_Array, empty_Array, PThreadedCode24116, 1, PSend24124);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24127 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // =. 
    Send PSend24128 = new_Send((Optr)VAR_skip_0_3, SMB__equals_, 1, (Optr)PSend24127);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24132 = new_String(L"Error decoding multipart/form-data fields");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_24132_Const = new_Constant((Optr)string_24132);
    // error:. 
    Send PSend24133 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_24132_Const);
    Array PThreadedCode24131 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24132, (Optr)&t_send1, (Optr)PSend24133, (Optr)&t_block_return);
    Block PBlock24130 = new_Block_with(empty_Array, empty_Array, PThreadedCode24131, 1, PSend24133);
    // ifFalse:. 
    Send PSend24129 = new_Send((Optr)PSend24128, SMB_ifFalse_, 1, (Optr)PBlock24130);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24135 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24134 = new_Assign((Optr)VAR_headers_0_4, (Optr)PSend24135);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24136 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24138 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24140 = new_Send((Optr)VAR_headers_0_4, SMB_add_, 1, (Optr)VAR_hdr_1_0);
    Array PThreadedCode24139 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_send1, (Optr)PSend24140, (Optr)&t_method_return);
    Block PBlock24137 = new_Block_with(PArray24138, empty_Array, PThreadedCode24139, 1, PSend24140);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend24141 = new_Send((Optr)PSend24136, SMB_do_, 1, (Optr)PBlock24137);
    // crlf. 
    Send PSend24146 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    String string_24147 = new_String(L"--");
    Constant string_24147_Const = new_Constant((Optr)string_24147);
    // ,. 
    Send PSend24145 = new_Send((Optr)PSend24146, SMB__append_, 1, (Optr)string_24147_Const);
    // ,. 
    Send PSend24144 = new_Send((Optr)PSend24145, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    // upToAll:. 
    Send PSend24143 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24144);
    Assign PAssign24142 = new_Assign((Optr)VAR_content_0_5, (Optr)PSend24143);
    // new. 
    Send PSend24149 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24148 = new_Assign((Optr)VAR_params_0_8, (Optr)PSend24149);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_24152 = new_String(L"content-disposition");
    Constant string_24152_Const = new_Constant((Optr)string_24152);
    String string_24155 = new_String(L"");
    Array PThreadedCode24154 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24155, (Optr)&t_block_return);
    Constant string_24155_Const = new_Constant((Optr)string_24155);
    Block PBlock24153 = new_Block_with(empty_Array, empty_Array, PThreadedCode24154, 1, string_24155_Const);
    // at:ifAbsent:. 
    Send PSend24151 = new_Send((Optr)VAR_headers_0_4, SMB_at_ifAbsent_, 2, (Optr)string_24152_Const, (Optr)PBlock24153);
    Assign PAssign24150 = new_Assign((Optr)VAR_disposition_0_6, (Optr)PSend24151);
    Symbol  SMB_name = new_Symbol(L"name");
    Symbol  SMB_filename = new_Symbol(L"filename");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_name_Const = new_Constant((Optr)SMB_name);
    Constant SMB_filename_Const = new_Constant((Optr)SMB_filename);
    // with:with:. 
    Send PSend24156 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_name_Const, (Optr)SMB_filename_Const);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Array PArray24158 = new_Array_with(1, (Optr)VAR_arg_1_0);
    Variable VAR_len_1_1 = new_Variable_named(L"len", 1);
    Variable VAR_val_1_2 = new_Variable_named(L"val", 1);
    Array PArray24159 = new_Array_with(2, (Optr)VAR_len_1_1, (Optr)VAR_val_1_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24163 = new_Send((Optr)VAR_arg_1_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24162 = new_Send((Optr)PSend24163, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign24161 = new_Assign((Optr)VAR_len_1_1, (Optr)PSend24162);
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    String string_24167 = new_String(L"=");
    Constant string_24167_Const = new_Constant((Optr)string_24167);
    // ,. 
    Send PSend24166 = new_Send((Optr)VAR_arg_1_0, SMB__append_, 1, (Optr)string_24167_Const);
    // findString:. 
    Send PSend24165 = new_Send((Optr)VAR_disposition_0_6, SMB_findString_, 1, (Optr)PSend24166);
    Assign PAssign24164 = new_Assign((Optr)VAR_index_0_7, (Optr)PSend24165);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24168 = new_Send((Optr)VAR_index_0_7, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // +. 
    Send PSend24174 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Character char_24177 = new_Character(L'"');
    Constant char_24177_Const = new_Constant((Optr)char_24177);
    // +. 
    Send PSend24178 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    // indexOf:startingAt:. 
    Send PSend24176 = new_Send((Optr)VAR_disposition_0_6, SMB_indexOf_startingAt_, 2, (Optr)char_24177_Const, (Optr)PSend24178);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend24175 = new_Send((Optr)PSend24176, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24173 = new_Send((Optr)VAR_disposition_0_6, SMB_copyFrom_to_, 2, (Optr)PSend24174, (Optr)PSend24175);
    Assign PAssign24172 = new_Assign((Optr)VAR_val_1_2, (Optr)PSend24173);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24179 = new_Send((Optr)VAR_params_0_8, SMB_at_put_, 2, (Optr)VAR_arg_1_0, (Optr)VAR_val_1_2);
    Array PThreadedCode24171 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign24172, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24174, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push1, (Optr)char_24177, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24178, (Optr)&t_send2, (Optr)PSend24176, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24175, (Optr)&t_send2, (Optr)PSend24173, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_val_1_2, (Optr)&t_send2, (Optr)PSend24179, (Optr)&t_block_return);
    Block PBlock24170 = new_Block_with(empty_Array, empty_Array, PThreadedCode24171, 2, PAssign24172, PSend24179);
    // ifTrue:. 
    Send PSend24169 = new_Send((Optr)PSend24168, SMB_ifTrue_, 1, (Optr)PBlock24170);
    Array PThreadedCode24160 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign24161, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send0, (Optr)PSend24163, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24162, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24164, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push1, (Optr)string_24167, (Optr)&t_send1, (Optr)PSend24166, (Optr)&t_send1, (Optr)PSend24165, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24168, (Optr)&t_send_ifTrue_, (Optr)PSend24169, (Optr)PBlock24170, (Optr)&t_method_return);
    Block PBlock24157 = new_Block_with(PArray24158, PArray24159, PThreadedCode24160, 3, PAssign24161, PAssign24164, PSend24169);
    // do:. 
    Send PSend24180 = new_Send((Optr)PSend24156, SMB_do_, 1, (Optr)PBlock24157);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend24181 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_value_value_, 3, (Optr)VAR_headers_0_4, (Optr)VAR_params_0_8, (Optr)VAR_content_0_5);
    Array PThreadedCode24126 = instantiate_Array_with(ThreadedCode_Class, 0, 95, (Optr)&t_push_variable, (Optr)VAR_skip_0_3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24127, (Optr)&t_send1, (Optr)PSend24128, (Optr)&t_send_ifFalse_, (Optr)PSend24129, (Optr)PBlock24130, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24134, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24135, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24136, (Optr)&t_push_closure, (Optr)PBlock24137, (Optr)&t_send1, (Optr)PSend24141, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24142, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24146, (Optr)&t_push1, (Optr)string_24147, (Optr)&t_send1, (Optr)PSend24145, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24144, (Optr)&t_send1, (Optr)PSend24143, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24148, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24149, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24150, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push1, (Optr)string_24152, (Optr)&t_push_closure, (Optr)PBlock24153, (Optr)&t_send2, (Optr)PSend24151, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_name, (Optr)&t_push1, (Optr)SMB_filename, (Optr)&t_send2, (Optr)PSend24156, (Optr)&t_push_closure, (Optr)PBlock24157, (Optr)&t_send1, (Optr)PSend24180, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_content_0_5, (Optr)&t_send3, (Optr)PSend24181, (Optr)&t_block_return);
    Block PBlock24125 = new_Block_with(empty_Array, empty_Array, PThreadedCode24126, 8, PSend24129, PAssign24134, PSend24141, PAssign24142, PAssign24148, PAssign24150, PSend24180, PSend24181);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24182 = new_Send((Optr)PBlock24115, SMB_whileFalse_, 1, (Optr)PBlock24125);
    Array PThreadedCode24111 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24112, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24113, (Optr)&t_send1, (Optr)PSend24114, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24115, (Optr)&t_push_closure, (Optr)PBlock24125, (Optr)&t_send1, (Optr)PSend24182, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24108 = new_Method_with(PArray24109, PArray24110, empty_Array, PThreadedCode24111, 3, PSend24114, PSend24182, self);
    
    MethodClosure MC_SMB_decodeMultipartForm_boundary_do_ = new_MethodClosure((Method)PMethod24108, HEADER(WebClient_Core_WebUtils_Class));
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