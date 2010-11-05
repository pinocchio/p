#include <lib/class/WebClient/Core/WebUtils.h>


Optr layout_WebClient_Core_WebUtils_Class_class;


static void init_class_SMB_readHeadersFrom_() {
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23959 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_headers_0_1 = new_Variable_named(L"headers", 0);
    Variable VAR_nextLine_0_2 = new_Variable_named(L"nextLine", 0);
    Variable VAR_existing_0_3 = new_Variable_named(L"existing", 0);
    Array PArray23960 = new_Array_with(3, (Optr)VAR_headers_0_1, (Optr)VAR_nextLine_0_2, (Optr)VAR_existing_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23963 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23962 = new_Assign((Optr)VAR_headers_0_1, (Optr)PSend23963);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23968 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend23967 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend23968);
    Assign PAssign23966 = new_Assign((Optr)VAR_nextLine_0_2, (Optr)PSend23967);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend23969 = new_Send((Optr)VAR_nextLine_0_2, SMB_isEmpty, 0);
    Array PThreadedCode23965 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign23966, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23968, (Optr)&t_send1, (Optr)PSend23967, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend23969, (Optr)&t_block_return);
    Block PBlock23964 = new_Block_with(empty_Array, empty_Array, PThreadedCode23965, 2, PAssign23966, PSend23969);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23972 = new_Send((Optr)VAR_nextLine_0_2, SMB_first, 0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend23973 = new_Send((Optr)PSend23972, SMB_isSeparator, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend23978 = new_Send((Optr)VAR_headers_0_1, SMB_last, 0);
    Assign PAssign23977 = new_Assign((Optr)VAR_existing_0_3, (Optr)PSend23978);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23979 = new_Send((Optr)VAR_existing_0_3, SMB_value, 0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23980 = new_Send((Optr)String_classReference, SMB_space, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23981 = new_Send((Optr)PSend23979, SMB__append_, 1, (Optr)PSend23980);
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    // withBlanksTrimmed. 
    Send PSend23982 = new_Send((Optr)VAR_nextLine_0_2, SMB_withBlanksTrimmed, 0);
    // ,. 
    Send PSend23983 = new_Send((Optr)PSend23981, SMB__append_, 1, (Optr)PSend23982);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23984 = new_Send((Optr)VAR_existing_0_3, SMB_value_, 1, (Optr)PSend23983);
    Array PThreadedCode23976 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign23977, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_send0, (Optr)PSend23978, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_send0, (Optr)PSend23979, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23980, (Optr)&t_send1, (Optr)PSend23981, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend23982, (Optr)&t_send1, (Optr)PSend23983, (Optr)&t_send1, (Optr)PSend23984, (Optr)&t_block_return);
    Block PBlock23975 = new_Block_with(empty_Array, empty_Array, PThreadedCode23976, 2, PAssign23977, PSend23984);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23987 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Character char_435 = new_Character(L':');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_435_Const = new_Constant((Optr)char_435);
    // copyUpTo:. 
    Send PSend23988 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyUpTo_, 1, (Optr)char_435_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23989 = new_Send((Optr)PSend23988, SMB_asLowercase, 0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    // copyAfter:. 
    Send PSend23990 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyAfter_, 1, (Optr)char_435_Const);
    // withBlanksTrimmed. 
    Send PSend23991 = new_Send((Optr)PSend23990, SMB_withBlanksTrimmed, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23992 = new_Send((Optr)PSend23987, SMB_key_value_, 2, (Optr)PSend23989, (Optr)PSend23991);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23993 = new_Send((Optr)VAR_headers_0_1, SMB_add_, 1, (Optr)PSend23992);
    Array PThreadedCode23986 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23987, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend23988, (Optr)&t_send0, (Optr)PSend23989, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend23990, (Optr)&t_send0, (Optr)PSend23991, (Optr)&t_send2, (Optr)PSend23992, (Optr)&t_send1, (Optr)PSend23993, (Optr)&t_block_return);
    Block PBlock23985 = new_Block_with(empty_Array, empty_Array, PThreadedCode23986, 1, PSend23993);
    // ifTrue:ifFalse:. 
    Send PSend23974 = new_Send((Optr)PSend23973, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23975, (Optr)PBlock23985);
    Array PThreadedCode23971 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend23972, (Optr)&t_send0, (Optr)PSend23973, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23974, (Optr)PBlock23975, (Optr)PBlock23985, (Optr)&t_block_return);
    Block PBlock23970 = new_Block_with(empty_Array, empty_Array, PThreadedCode23971, 1, PSend23974);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend23994 = new_Send((Optr)PBlock23964, SMB_whileFalse_, 1, (Optr)PBlock23970);
    Array PThreadedCode23961 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign23962, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23963, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23964, (Optr)&t_push_closure, (Optr)PBlock23970, (Optr)&t_send1, (Optr)PSend23994, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_method_return);
    Method PMethod23958 = new_Method_with(PArray23959, PArray23960, empty_Array, PThreadedCode23961, 3, PAssign23962, PSend23994, VAR_headers_0_1);
    
    MethodClosure MC_SMB_readHeadersFrom_ = new_MethodClosure((Method)PMethod23958, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_readHeadersFrom_, MC_SMB_readHeadersFrom_);
}


static void init_class_SMB_decodeUrlEncodedForm_do_() {
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray23996 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_args_0_2 = new_Variable_named(L"args", 0);
    Variable VAR_keyval_0_3 = new_Variable_named(L"keyval", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_key_0_5 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_6 = new_Variable_named(L"value", 0);
    Array PArray23997 = new_Array_with(5, (Optr)VAR_args_0_2, (Optr)VAR_keyval_0_3, (Optr)VAR_index_0_4, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24000 = new_Send((Optr)VAR_aString_0_0, SMB_readStream, 0);
    Assign PAssign23999 = new_Assign((Optr)VAR_args_0_2, (Optr)PSend24000);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24003 = new_Send((Optr)VAR_args_0_2, SMB_atEnd, 0);
    Array PThreadedCode24002 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_send0, (Optr)PSend24003, (Optr)&t_block_return);
    Block PBlock24001 = new_Block_with(empty_Array, empty_Array, PThreadedCode24002, 1, PSend24003);
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Character char_24008 = new_Character(L'&');
    Constant char_24008_Const = new_Constant((Optr)char_24008);
    // upTo:. 
    Send PSend24007 = new_Send((Optr)VAR_args_0_2, SMB_upTo_, 1, (Optr)char_24008_Const);
    Assign PAssign24006 = new_Assign((Optr)VAR_keyval_0_3, (Optr)PSend24007);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_9611 = new_Character(L'=');
    Constant char_9611_Const = new_Constant((Optr)char_9611);
    // indexOf:. 
    Send PSend24010 = new_Send((Optr)VAR_keyval_0_3, SMB_indexOf_, 1, (Optr)char_9611_Const);
    Assign PAssign24009 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend24010);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend24011 = new_Send((Optr)PAssign24009, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign24015 = new_Assign((Optr)VAR_key_0_5, (Optr)VAR_keyval_0_3);
    String string_24017 = new_String(L"");
    Constant string_24017_Const = new_Constant((Optr)string_24017);
    Assign PAssign24016 = new_Assign((Optr)VAR_value_0_6, (Optr)string_24017_Const);
    Array PThreadedCode24014 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24015, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24016, (Optr)&t_push1, (Optr)string_24017, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24013 = new_Block_with(empty_Array, empty_Array, PThreadedCode24014, 2, PAssign24015, PAssign24016);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24022 = new_Send((Optr)VAR_index_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24021 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend24022);
    Assign PAssign24020 = new_Assign((Optr)VAR_key_0_5, (Optr)PSend24021);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24025 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24026 = new_Send((Optr)VAR_keyval_0_3, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend24024 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)PSend24025, (Optr)PSend24026);
    Assign PAssign24023 = new_Assign((Optr)VAR_value_0_6, (Optr)PSend24024);
    Array PThreadedCode24019 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign24020, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24022, (Optr)&t_send2, (Optr)PSend24021, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24023, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24025, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_send0, (Optr)PSend24026, (Optr)&t_send2, (Optr)PSend24024, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24018 = new_Block_with(empty_Array, empty_Array, PThreadedCode24019, 2, PAssign24020, PAssign24023);
    // ifTrue:ifFalse:. 
    Send PSend24012 = new_Send((Optr)PSend24011, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24013, (Optr)PBlock24018);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend24027 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_value_, 2, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Array PThreadedCode24005 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign24006, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_push1, (Optr)char_24008, (Optr)&t_send1, (Optr)PSend24007, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24009, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push1, (Optr)char_9611, (Optr)&t_send1, (Optr)PSend24010, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24011, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24012, (Optr)PBlock24013, (Optr)PBlock24018, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_key_0_5, (Optr)&t_push_variable, (Optr)VAR_value_0_6, (Optr)&t_send2, (Optr)PSend24027, (Optr)&t_block_return);
    Block PBlock24004 = new_Block_with(empty_Array, empty_Array, PThreadedCode24005, 3, PAssign24006, PSend24012, PSend24027);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24028 = new_Send((Optr)PBlock24001, SMB_whileFalse_, 1, (Optr)PBlock24004);
    Array PThreadedCode23998 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign23999, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend24000, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24001, (Optr)&t_push_closure, (Optr)PBlock24004, (Optr)&t_send1, (Optr)PSend24028, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23995 = new_Method_with(PArray23996, PArray23997, empty_Array, PThreadedCode23998, 3, PAssign23999, PSend24028, self);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_do_ = new_MethodClosure((Method)PMethod23995, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_do_, MC_SMB_decodeUrlEncodedForm_do_);
}


static void init_class_SMB_decodeUrlEncodedForm_multipleValues_() {
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBool_0_1 = new_Variable_named(L"aBool", 0);
    Array PArray24030 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBool_0_1);
    Variable VAR_fields_0_2 = new_Variable_named(L"fields", 0);
    Array PArray24031 = new_Array_with(1, (Optr)VAR_fields_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24034 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24033 = new_Assign((Optr)VAR_fields_0_2, (Optr)PSend24034);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray24036 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_24043 = new_String(L"");
    Array PThreadedCode24042 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24043, (Optr)&t_block_return);
    Constant string_24043_Const = new_Constant((Optr)string_24043);
    Block PBlock24041 = new_Block_with(empty_Array, empty_Array, PThreadedCode24042, 1, string_24043_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend24044 = new_Send((Optr)VAR_fields_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_key_1_0, (Optr)PBlock24041);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24045 = new_Send((Optr)PSend24044, SMB__append_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24046 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)PSend24045);
    Array PThreadedCode24040 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock24041, (Optr)&t_send2, (Optr)PSend24044, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend24045, (Optr)&t_send2, (Optr)PSend24046, (Optr)&t_block_return);
    Block PBlock24039 = new_Block_with(empty_Array, empty_Array, PThreadedCode24040, 1, PSend24046);
    // at:put:. 
    Send PSend24049 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode24048 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend24049, (Optr)&t_block_return);
    Block PBlock24047 = new_Block_with(empty_Array, empty_Array, PThreadedCode24048, 1, PSend24049);
    // ifTrue:ifFalse:. 
    Send PSend24038 = new_Send((Optr)VAR_aBool_0_1, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24039, (Optr)PBlock24047);
    Array PThreadedCode24037 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBool_0_1, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24038, (Optr)PBlock24039, (Optr)PBlock24047, (Optr)&t_method_return);
    Block PBlock24035 = new_Block_with(PArray24036, empty_Array, PThreadedCode24037, 1, PSend24038);
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    // decodeUrlEncodedForm:do:. 
    Send PSend24050 = new_Send((Optr)self, SMB_decodeUrlEncodedForm_do_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock24035);
    Array PThreadedCode24032 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24033, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24034, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock24035, (Optr)&t_send2, (Optr)PSend24050, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_method_return);
    Method PMethod24029 = new_Method_with(PArray24030, PArray24031, empty_Array, PThreadedCode24032, 3, PAssign24033, PSend24050, VAR_fields_0_2);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_multipleValues_ = new_MethodClosure((Method)PMethod24029, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_multipleValues_, MC_SMB_decodeUrlEncodedForm_multipleValues_);
}


static void init_class_SMB_decodeMultipartForm_boundary_do_() {
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_boundary_0_1 = new_Variable_named(L"boundary", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24052 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_boundary_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_skip_0_3 = new_Variable_named(L"skip", 0);
    Variable VAR_headers_0_4 = new_Variable_named(L"headers", 0);
    Variable VAR_content_0_5 = new_Variable_named(L"content", 0);
    Variable VAR_disposition_0_6 = new_Variable_named(L"disposition", 0);
    Variable VAR_index_0_7 = new_Variable_named(L"index", 0);
    Variable VAR_params_0_8 = new_Variable_named(L"params", 0);
    Array PArray24053 = new_Array_with(6, (Optr)VAR_skip_0_3, (Optr)VAR_headers_0_4, (Optr)VAR_content_0_5, (Optr)VAR_disposition_0_6, (Optr)VAR_index_0_7, (Optr)VAR_params_0_8);
    String string_24055 = new_String(L"--");
    Constant string_24055_Const = new_Constant((Optr)string_24055);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24056 = new_Send((Optr)string_24055_Const, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend24057 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24056);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24060 = new_Send((Optr)VAR_aStream_0_0, SMB_atEnd, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // next:. 
    Send PSend24064 = new_Send((Optr)VAR_aStream_0_0, SMB_next_, 1, (Optr)int_2_Const);
    Assign PAssign24063 = new_Assign((Optr)VAR_skip_0_3, (Optr)PSend24064);
    String string_24065 = new_String(L"--");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24065_Const = new_Constant((Optr)string_24065);
    // =. 
    Send PSend24066 = new_Send((Optr)PAssign24063, SMB__equals_, 1, (Optr)string_24065_Const);
    Array PThreadedCode24062 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign24063, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24064, (Optr)&t_assign, (Optr)&t_push1, (Optr)string_24065, (Optr)&t_send1, (Optr)PSend24066, (Optr)&t_block_return);
    Block PBlock24061 = new_Block_with(empty_Array, empty_Array, PThreadedCode24062, 1, PSend24066);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend24067 = new_Send((Optr)PSend24060, SMB_or_, 1, (Optr)PBlock24061);
    Array PThreadedCode24059 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24060, (Optr)&t_push_closure, (Optr)PBlock24061, (Optr)&t_send1, (Optr)PSend24067, (Optr)&t_block_return);
    Block PBlock24058 = new_Block_with(empty_Array, empty_Array, PThreadedCode24059, 1, PSend24067);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24070 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // =. 
    Send PSend24071 = new_Send((Optr)VAR_skip_0_3, SMB__equals_, 1, (Optr)PSend24070);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24075 = new_String(L"Error decoding multipart/form-data fields");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_24075_Const = new_Constant((Optr)string_24075);
    // error:. 
    Send PSend24076 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_24075_Const);
    Array PThreadedCode24074 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24075, (Optr)&t_send1, (Optr)PSend24076, (Optr)&t_block_return);
    Block PBlock24073 = new_Block_with(empty_Array, empty_Array, PThreadedCode24074, 1, PSend24076);
    // ifFalse:. 
    Send PSend24072 = new_Send((Optr)PSend24071, SMB_ifFalse_, 1, (Optr)PBlock24073);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24078 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24077 = new_Assign((Optr)VAR_headers_0_4, (Optr)PSend24078);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24079 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24081 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24083 = new_Send((Optr)VAR_headers_0_4, SMB_add_, 1, (Optr)VAR_hdr_1_0);
    Array PThreadedCode24082 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_send1, (Optr)PSend24083, (Optr)&t_method_return);
    Block PBlock24080 = new_Block_with(PArray24081, empty_Array, PThreadedCode24082, 1, PSend24083);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend24084 = new_Send((Optr)PSend24079, SMB_do_, 1, (Optr)PBlock24080);
    // crlf. 
    Send PSend24089 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    String string_24090 = new_String(L"--");
    Constant string_24090_Const = new_Constant((Optr)string_24090);
    // ,. 
    Send PSend24088 = new_Send((Optr)PSend24089, SMB__append_, 1, (Optr)string_24090_Const);
    // ,. 
    Send PSend24087 = new_Send((Optr)PSend24088, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    // upToAll:. 
    Send PSend24086 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24087);
    Assign PAssign24085 = new_Assign((Optr)VAR_content_0_5, (Optr)PSend24086);
    // new. 
    Send PSend24092 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24091 = new_Assign((Optr)VAR_params_0_8, (Optr)PSend24092);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_24095 = new_String(L"content-disposition");
    Constant string_24095_Const = new_Constant((Optr)string_24095);
    String string_24098 = new_String(L"");
    Array PThreadedCode24097 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24098, (Optr)&t_block_return);
    Constant string_24098_Const = new_Constant((Optr)string_24098);
    Block PBlock24096 = new_Block_with(empty_Array, empty_Array, PThreadedCode24097, 1, string_24098_Const);
    // at:ifAbsent:. 
    Send PSend24094 = new_Send((Optr)VAR_headers_0_4, SMB_at_ifAbsent_, 2, (Optr)string_24095_Const, (Optr)PBlock24096);
    Assign PAssign24093 = new_Assign((Optr)VAR_disposition_0_6, (Optr)PSend24094);
    Symbol  SMB_name = new_Symbol(L"name");
    Symbol  SMB_filename = new_Symbol(L"filename");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_name_Const = new_Constant((Optr)SMB_name);
    Constant SMB_filename_Const = new_Constant((Optr)SMB_filename);
    // with:with:. 
    Send PSend24099 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_name_Const, (Optr)SMB_filename_Const);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Array PArray24101 = new_Array_with(1, (Optr)VAR_arg_1_0);
    Variable VAR_len_1_1 = new_Variable_named(L"len", 1);
    Variable VAR_val_1_2 = new_Variable_named(L"val", 1);
    Array PArray24102 = new_Array_with(2, (Optr)VAR_len_1_1, (Optr)VAR_val_1_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24106 = new_Send((Optr)VAR_arg_1_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24105 = new_Send((Optr)PSend24106, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign24104 = new_Assign((Optr)VAR_len_1_1, (Optr)PSend24105);
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    String string_24110 = new_String(L"=");
    Constant string_24110_Const = new_Constant((Optr)string_24110);
    // ,. 
    Send PSend24109 = new_Send((Optr)VAR_arg_1_0, SMB__append_, 1, (Optr)string_24110_Const);
    // findString:. 
    Send PSend24108 = new_Send((Optr)VAR_disposition_0_6, SMB_findString_, 1, (Optr)PSend24109);
    Assign PAssign24107 = new_Assign((Optr)VAR_index_0_7, (Optr)PSend24108);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24111 = new_Send((Optr)VAR_index_0_7, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // +. 
    Send PSend24117 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Character char_24120 = new_Character(L'"');
    Constant char_24120_Const = new_Constant((Optr)char_24120);
    // +. 
    Send PSend24121 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    // indexOf:startingAt:. 
    Send PSend24119 = new_Send((Optr)VAR_disposition_0_6, SMB_indexOf_startingAt_, 2, (Optr)char_24120_Const, (Optr)PSend24121);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend24118 = new_Send((Optr)PSend24119, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24116 = new_Send((Optr)VAR_disposition_0_6, SMB_copyFrom_to_, 2, (Optr)PSend24117, (Optr)PSend24118);
    Assign PAssign24115 = new_Assign((Optr)VAR_val_1_2, (Optr)PSend24116);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24122 = new_Send((Optr)VAR_params_0_8, SMB_at_put_, 2, (Optr)VAR_arg_1_0, (Optr)VAR_val_1_2);
    Array PThreadedCode24114 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign24115, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24117, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push1, (Optr)char_24120, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24121, (Optr)&t_send2, (Optr)PSend24119, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24118, (Optr)&t_send2, (Optr)PSend24116, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_val_1_2, (Optr)&t_send2, (Optr)PSend24122, (Optr)&t_block_return);
    Block PBlock24113 = new_Block_with(empty_Array, empty_Array, PThreadedCode24114, 2, PAssign24115, PSend24122);
    // ifTrue:. 
    Send PSend24112 = new_Send((Optr)PSend24111, SMB_ifTrue_, 1, (Optr)PBlock24113);
    Array PThreadedCode24103 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign24104, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send0, (Optr)PSend24106, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24105, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24107, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push1, (Optr)string_24110, (Optr)&t_send1, (Optr)PSend24109, (Optr)&t_send1, (Optr)PSend24108, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24111, (Optr)&t_send_ifTrue_, (Optr)PSend24112, (Optr)PBlock24113, (Optr)&t_method_return);
    Block PBlock24100 = new_Block_with(PArray24101, PArray24102, PThreadedCode24103, 3, PAssign24104, PAssign24107, PSend24112);
    // do:. 
    Send PSend24123 = new_Send((Optr)PSend24099, SMB_do_, 1, (Optr)PBlock24100);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend24124 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_value_value_, 3, (Optr)VAR_headers_0_4, (Optr)VAR_params_0_8, (Optr)VAR_content_0_5);
    Array PThreadedCode24069 = instantiate_Array_with(ThreadedCode_Class, 0, 95, (Optr)&t_push_variable, (Optr)VAR_skip_0_3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24070, (Optr)&t_send1, (Optr)PSend24071, (Optr)&t_send_ifFalse_, (Optr)PSend24072, (Optr)PBlock24073, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24077, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24078, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24079, (Optr)&t_push_closure, (Optr)PBlock24080, (Optr)&t_send1, (Optr)PSend24084, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24085, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24089, (Optr)&t_push1, (Optr)string_24090, (Optr)&t_send1, (Optr)PSend24088, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24087, (Optr)&t_send1, (Optr)PSend24086, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24091, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24092, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24093, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push1, (Optr)string_24095, (Optr)&t_push_closure, (Optr)PBlock24096, (Optr)&t_send2, (Optr)PSend24094, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_name, (Optr)&t_push1, (Optr)SMB_filename, (Optr)&t_send2, (Optr)PSend24099, (Optr)&t_push_closure, (Optr)PBlock24100, (Optr)&t_send1, (Optr)PSend24123, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_content_0_5, (Optr)&t_send3, (Optr)PSend24124, (Optr)&t_block_return);
    Block PBlock24068 = new_Block_with(empty_Array, empty_Array, PThreadedCode24069, 8, PSend24072, PAssign24077, PSend24084, PAssign24085, PAssign24091, PAssign24093, PSend24123, PSend24124);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24125 = new_Send((Optr)PBlock24058, SMB_whileFalse_, 1, (Optr)PBlock24068);
    Array PThreadedCode24054 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24055, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24056, (Optr)&t_send1, (Optr)PSend24057, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24058, (Optr)&t_push_closure, (Optr)PBlock24068, (Optr)&t_send1, (Optr)PSend24125, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24051 = new_Method_with(PArray24052, PArray24053, empty_Array, PThreadedCode24054, 3, PSend24057, PSend24125, self);
    
    MethodClosure MC_SMB_decodeMultipartForm_boundary_do_ = new_MethodClosure((Method)PMethod24051, HEADER(WebClient_Core_WebUtils_Class));
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