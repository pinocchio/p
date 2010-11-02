#include <lib/class/WebClient/Core/WebUtils.h>


Optr layout_WebClient_Core_WebUtils_Class_class;


static void init_class_SMB_readHeadersFrom_() {
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray23929 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_headers_0_1 = new_Variable_named(L"headers", 0);
    Variable VAR_nextLine_0_2 = new_Variable_named(L"nextLine", 0);
    Variable VAR_existing_0_3 = new_Variable_named(L"existing", 0);
    Array PArray23930 = new_Array_with(3, (Optr)VAR_headers_0_1, (Optr)VAR_nextLine_0_2, (Optr)VAR_existing_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23933 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign23932 = new_Assign((Optr)VAR_headers_0_1, (Optr)PSend23933);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend23938 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend23937 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend23938);
    Assign PAssign23936 = new_Assign((Optr)VAR_nextLine_0_2, (Optr)PSend23937);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend23939 = new_Send((Optr)VAR_nextLine_0_2, SMB_isEmpty, 0);
    Array PThreadedCode23935 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign23936, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23938, (Optr)&t_send1, (Optr)PSend23937, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend23939, (Optr)&t_block_return);
    Block PBlock23934 = new_Block_with(empty_Array, empty_Array, PThreadedCode23935, 2, PAssign23936, PSend23939);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend23942 = new_Send((Optr)VAR_nextLine_0_2, SMB_first, 0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend23943 = new_Send((Optr)PSend23942, SMB_isSeparator, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend23948 = new_Send((Optr)VAR_headers_0_1, SMB_last, 0);
    Assign PAssign23947 = new_Assign((Optr)VAR_existing_0_3, (Optr)PSend23948);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend23949 = new_Send((Optr)VAR_existing_0_3, SMB_value, 0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend23950 = new_Send((Optr)String_classReference, SMB_space, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23951 = new_Send((Optr)PSend23949, SMB__append_, 1, (Optr)PSend23950);
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    // withBlanksTrimmed. 
    Send PSend23952 = new_Send((Optr)VAR_nextLine_0_2, SMB_withBlanksTrimmed, 0);
    // ,. 
    Send PSend23953 = new_Send((Optr)PSend23951, SMB__append_, 1, (Optr)PSend23952);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend23954 = new_Send((Optr)VAR_existing_0_3, SMB_value_, 1, (Optr)PSend23953);
    Array PThreadedCode23946 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign23947, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_send0, (Optr)PSend23948, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_send0, (Optr)PSend23949, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend23950, (Optr)&t_send1, (Optr)PSend23951, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend23952, (Optr)&t_send1, (Optr)PSend23953, (Optr)&t_send1, (Optr)PSend23954, (Optr)&t_block_return);
    Block PBlock23945 = new_Block_with(empty_Array, empty_Array, PThreadedCode23946, 2, PAssign23947, PSend23954);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend23957 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Character char_435 = new_Character(L':');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_435_Const = new_Constant((Optr)char_435);
    // copyUpTo:. 
    Send PSend23958 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyUpTo_, 1, (Optr)char_435_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend23959 = new_Send((Optr)PSend23958, SMB_asLowercase, 0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    // copyAfter:. 
    Send PSend23960 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyAfter_, 1, (Optr)char_435_Const);
    // withBlanksTrimmed. 
    Send PSend23961 = new_Send((Optr)PSend23960, SMB_withBlanksTrimmed, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend23962 = new_Send((Optr)PSend23957, SMB_key_value_, 2, (Optr)PSend23959, (Optr)PSend23961);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend23963 = new_Send((Optr)VAR_headers_0_1, SMB_add_, 1, (Optr)PSend23962);
    Array PThreadedCode23956 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend23957, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend23958, (Optr)&t_send0, (Optr)PSend23959, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend23960, (Optr)&t_send0, (Optr)PSend23961, (Optr)&t_send2, (Optr)PSend23962, (Optr)&t_send1, (Optr)PSend23963, (Optr)&t_block_return);
    Block PBlock23955 = new_Block_with(empty_Array, empty_Array, PThreadedCode23956, 1, PSend23963);
    // ifTrue:ifFalse:. 
    Send PSend23944 = new_Send((Optr)PSend23943, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23945, (Optr)PBlock23955);
    Array PThreadedCode23941 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend23942, (Optr)&t_send0, (Optr)PSend23943, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23944, (Optr)PBlock23945, (Optr)PBlock23955, (Optr)&t_block_return);
    Block PBlock23940 = new_Block_with(empty_Array, empty_Array, PThreadedCode23941, 1, PSend23944);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend23964 = new_Send((Optr)PBlock23934, SMB_whileFalse_, 1, (Optr)PBlock23940);
    Array PThreadedCode23931 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign23932, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend23933, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23934, (Optr)&t_push_closure, (Optr)PBlock23940, (Optr)&t_send1, (Optr)PSend23964, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_method_return);
    Method PMethod23928 = new_Method_with(PArray23929, PArray23930, empty_Array, PThreadedCode23931, 3, PAssign23932, PSend23964, VAR_headers_0_1);
    
    MethodClosure MC_SMB_readHeadersFrom_ = new_MethodClosure((Method)PMethod23928, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_readHeadersFrom_, MC_SMB_readHeadersFrom_);
}


static void init_class_SMB_decodeUrlEncodedForm_multipleValues_() {
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBool_0_1 = new_Variable_named(L"aBool", 0);
    Array PArray23966 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBool_0_1);
    Variable VAR_fields_0_2 = new_Variable_named(L"fields", 0);
    Array PArray23967 = new_Array_with(1, (Optr)VAR_fields_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend23970 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign23969 = new_Assign((Optr)VAR_fields_0_2, (Optr)PSend23970);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray23972 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_23979 = new_String(L"");
    Array PThreadedCode23978 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_23979, (Optr)&t_block_return);
    Constant string_23979_Const = new_Constant((Optr)string_23979);
    Block PBlock23977 = new_Block_with(empty_Array, empty_Array, PThreadedCode23978, 1, string_23979_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend23980 = new_Send((Optr)VAR_fields_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_key_1_0, (Optr)PBlock23977);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23981 = new_Send((Optr)PSend23980, SMB__append_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend23982 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)PSend23981);
    Array PThreadedCode23976 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock23977, (Optr)&t_send2, (Optr)PSend23980, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend23981, (Optr)&t_send2, (Optr)PSend23982, (Optr)&t_block_return);
    Block PBlock23975 = new_Block_with(empty_Array, empty_Array, PThreadedCode23976, 1, PSend23982);
    // at:put:. 
    Send PSend23985 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode23984 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend23985, (Optr)&t_block_return);
    Block PBlock23983 = new_Block_with(empty_Array, empty_Array, PThreadedCode23984, 1, PSend23985);
    // ifTrue:ifFalse:. 
    Send PSend23974 = new_Send((Optr)VAR_aBool_0_1, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock23975, (Optr)PBlock23983);
    Array PThreadedCode23973 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBool_0_1, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend23974, (Optr)PBlock23975, (Optr)PBlock23983, (Optr)&t_method_return);
    Block PBlock23971 = new_Block_with(PArray23972, empty_Array, PThreadedCode23973, 1, PSend23974);
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    // decodeUrlEncodedForm:do:. 
    Send PSend23986 = new_Send((Optr)self, SMB_decodeUrlEncodedForm_do_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock23971);
    Array PThreadedCode23968 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign23969, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend23970, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock23971, (Optr)&t_send2, (Optr)PSend23986, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_method_return);
    Method PMethod23965 = new_Method_with(PArray23966, PArray23967, empty_Array, PThreadedCode23968, 3, PAssign23969, PSend23986, VAR_fields_0_2);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_multipleValues_ = new_MethodClosure((Method)PMethod23965, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_multipleValues_, MC_SMB_decodeUrlEncodedForm_multipleValues_);
}


static void init_class_SMB_decodeMultipartForm_boundary_do_() {
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_boundary_0_1 = new_Variable_named(L"boundary", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray23988 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_boundary_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_skip_0_3 = new_Variable_named(L"skip", 0);
    Variable VAR_headers_0_4 = new_Variable_named(L"headers", 0);
    Variable VAR_content_0_5 = new_Variable_named(L"content", 0);
    Variable VAR_disposition_0_6 = new_Variable_named(L"disposition", 0);
    Variable VAR_index_0_7 = new_Variable_named(L"index", 0);
    Variable VAR_params_0_8 = new_Variable_named(L"params", 0);
    Array PArray23989 = new_Array_with(6, (Optr)VAR_skip_0_3, (Optr)VAR_headers_0_4, (Optr)VAR_content_0_5, (Optr)VAR_disposition_0_6, (Optr)VAR_index_0_7, (Optr)VAR_params_0_8);
    String string_23991 = new_String(L"--");
    Constant string_23991_Const = new_Constant((Optr)string_23991);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend23992 = new_Send((Optr)string_23991_Const, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend23993 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend23992);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend23996 = new_Send((Optr)VAR_aStream_0_0, SMB_atEnd, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // next:. 
    Send PSend24000 = new_Send((Optr)VAR_aStream_0_0, SMB_next_, 1, (Optr)int_2_Const);
    Assign PAssign23999 = new_Assign((Optr)VAR_skip_0_3, (Optr)PSend24000);
    String string_24001 = new_String(L"--");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24001_Const = new_Constant((Optr)string_24001);
    // =. 
    Send PSend24002 = new_Send((Optr)PAssign23999, SMB__equals_, 1, (Optr)string_24001_Const);
    Array PThreadedCode23998 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign23999, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24000, (Optr)&t_assign, (Optr)&t_push1, (Optr)string_24001, (Optr)&t_send1, (Optr)PSend24002, (Optr)&t_block_return);
    Block PBlock23997 = new_Block_with(empty_Array, empty_Array, PThreadedCode23998, 1, PSend24002);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend24003 = new_Send((Optr)PSend23996, SMB_or_, 1, (Optr)PBlock23997);
    Array PThreadedCode23995 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend23996, (Optr)&t_push_closure, (Optr)PBlock23997, (Optr)&t_send1, (Optr)PSend24003, (Optr)&t_block_return);
    Block PBlock23994 = new_Block_with(empty_Array, empty_Array, PThreadedCode23995, 1, PSend24003);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24006 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // =. 
    Send PSend24007 = new_Send((Optr)VAR_skip_0_3, SMB__equals_, 1, (Optr)PSend24006);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24011 = new_String(L"Error decoding multipart/form-data fields");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_24011_Const = new_Constant((Optr)string_24011);
    // error:. 
    Send PSend24012 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_24011_Const);
    Array PThreadedCode24010 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24011, (Optr)&t_send1, (Optr)PSend24012, (Optr)&t_block_return);
    Block PBlock24009 = new_Block_with(empty_Array, empty_Array, PThreadedCode24010, 1, PSend24012);
    // ifFalse:. 
    Send PSend24008 = new_Send((Optr)PSend24007, SMB_ifFalse_, 1, (Optr)PBlock24009);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24014 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24013 = new_Assign((Optr)VAR_headers_0_4, (Optr)PSend24014);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24015 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24017 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24019 = new_Send((Optr)VAR_headers_0_4, SMB_add_, 1, (Optr)VAR_hdr_1_0);
    Array PThreadedCode24018 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_send1, (Optr)PSend24019, (Optr)&t_method_return);
    Block PBlock24016 = new_Block_with(PArray24017, empty_Array, PThreadedCode24018, 1, PSend24019);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend24020 = new_Send((Optr)PSend24015, SMB_do_, 1, (Optr)PBlock24016);
    // crlf. 
    Send PSend24025 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    String string_24026 = new_String(L"--");
    Constant string_24026_Const = new_Constant((Optr)string_24026);
    // ,. 
    Send PSend24024 = new_Send((Optr)PSend24025, SMB__append_, 1, (Optr)string_24026_Const);
    // ,. 
    Send PSend24023 = new_Send((Optr)PSend24024, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    // upToAll:. 
    Send PSend24022 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24023);
    Assign PAssign24021 = new_Assign((Optr)VAR_content_0_5, (Optr)PSend24022);
    // new. 
    Send PSend24028 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24027 = new_Assign((Optr)VAR_params_0_8, (Optr)PSend24028);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_24031 = new_String(L"content-disposition");
    Constant string_24031_Const = new_Constant((Optr)string_24031);
    String string_24034 = new_String(L"");
    Array PThreadedCode24033 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24034, (Optr)&t_block_return);
    Constant string_24034_Const = new_Constant((Optr)string_24034);
    Block PBlock24032 = new_Block_with(empty_Array, empty_Array, PThreadedCode24033, 1, string_24034_Const);
    // at:ifAbsent:. 
    Send PSend24030 = new_Send((Optr)VAR_headers_0_4, SMB_at_ifAbsent_, 2, (Optr)string_24031_Const, (Optr)PBlock24032);
    Assign PAssign24029 = new_Assign((Optr)VAR_disposition_0_6, (Optr)PSend24030);
    Symbol  SMB_name = new_Symbol(L"name");
    Symbol  SMB_filename = new_Symbol(L"filename");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_name_Const = new_Constant((Optr)SMB_name);
    Constant SMB_filename_Const = new_Constant((Optr)SMB_filename);
    // with:with:. 
    Send PSend24035 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_name_Const, (Optr)SMB_filename_Const);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Array PArray24037 = new_Array_with(1, (Optr)VAR_arg_1_0);
    Variable VAR_len_1_1 = new_Variable_named(L"len", 1);
    Variable VAR_val_1_2 = new_Variable_named(L"val", 1);
    Array PArray24038 = new_Array_with(2, (Optr)VAR_len_1_1, (Optr)VAR_val_1_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24042 = new_Send((Optr)VAR_arg_1_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24041 = new_Send((Optr)PSend24042, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign24040 = new_Assign((Optr)VAR_len_1_1, (Optr)PSend24041);
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    String string_24046 = new_String(L"=");
    Constant string_24046_Const = new_Constant((Optr)string_24046);
    // ,. 
    Send PSend24045 = new_Send((Optr)VAR_arg_1_0, SMB__append_, 1, (Optr)string_24046_Const);
    // findString:. 
    Send PSend24044 = new_Send((Optr)VAR_disposition_0_6, SMB_findString_, 1, (Optr)PSend24045);
    Assign PAssign24043 = new_Assign((Optr)VAR_index_0_7, (Optr)PSend24044);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24047 = new_Send((Optr)VAR_index_0_7, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // +. 
    Send PSend24053 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Character char_24056 = new_Character(L'"');
    Constant char_24056_Const = new_Constant((Optr)char_24056);
    // +. 
    Send PSend24057 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    // indexOf:startingAt:. 
    Send PSend24055 = new_Send((Optr)VAR_disposition_0_6, SMB_indexOf_startingAt_, 2, (Optr)char_24056_Const, (Optr)PSend24057);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend24054 = new_Send((Optr)PSend24055, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24052 = new_Send((Optr)VAR_disposition_0_6, SMB_copyFrom_to_, 2, (Optr)PSend24053, (Optr)PSend24054);
    Assign PAssign24051 = new_Assign((Optr)VAR_val_1_2, (Optr)PSend24052);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24058 = new_Send((Optr)VAR_params_0_8, SMB_at_put_, 2, (Optr)VAR_arg_1_0, (Optr)VAR_val_1_2);
    Array PThreadedCode24050 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign24051, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24053, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push1, (Optr)char_24056, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24057, (Optr)&t_send2, (Optr)PSend24055, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24054, (Optr)&t_send2, (Optr)PSend24052, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_val_1_2, (Optr)&t_send2, (Optr)PSend24058, (Optr)&t_block_return);
    Block PBlock24049 = new_Block_with(empty_Array, empty_Array, PThreadedCode24050, 2, PAssign24051, PSend24058);
    // ifTrue:. 
    Send PSend24048 = new_Send((Optr)PSend24047, SMB_ifTrue_, 1, (Optr)PBlock24049);
    Array PThreadedCode24039 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign24040, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send0, (Optr)PSend24042, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24041, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24043, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push1, (Optr)string_24046, (Optr)&t_send1, (Optr)PSend24045, (Optr)&t_send1, (Optr)PSend24044, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24047, (Optr)&t_send_ifTrue_, (Optr)PSend24048, (Optr)PBlock24049, (Optr)&t_method_return);
    Block PBlock24036 = new_Block_with(PArray24037, PArray24038, PThreadedCode24039, 3, PAssign24040, PAssign24043, PSend24048);
    // do:. 
    Send PSend24059 = new_Send((Optr)PSend24035, SMB_do_, 1, (Optr)PBlock24036);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend24060 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_value_value_, 3, (Optr)VAR_headers_0_4, (Optr)VAR_params_0_8, (Optr)VAR_content_0_5);
    Array PThreadedCode24005 = instantiate_Array_with(ThreadedCode_Class, 0, 95, (Optr)&t_push_variable, (Optr)VAR_skip_0_3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24006, (Optr)&t_send1, (Optr)PSend24007, (Optr)&t_send_ifFalse_, (Optr)PSend24008, (Optr)PBlock24009, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24013, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24014, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24015, (Optr)&t_push_closure, (Optr)PBlock24016, (Optr)&t_send1, (Optr)PSend24020, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24021, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24025, (Optr)&t_push1, (Optr)string_24026, (Optr)&t_send1, (Optr)PSend24024, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24023, (Optr)&t_send1, (Optr)PSend24022, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24027, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24028, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24029, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push1, (Optr)string_24031, (Optr)&t_push_closure, (Optr)PBlock24032, (Optr)&t_send2, (Optr)PSend24030, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_name, (Optr)&t_push1, (Optr)SMB_filename, (Optr)&t_send2, (Optr)PSend24035, (Optr)&t_push_closure, (Optr)PBlock24036, (Optr)&t_send1, (Optr)PSend24059, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_content_0_5, (Optr)&t_send3, (Optr)PSend24060, (Optr)&t_block_return);
    Block PBlock24004 = new_Block_with(empty_Array, empty_Array, PThreadedCode24005, 8, PSend24008, PAssign24013, PSend24020, PAssign24021, PAssign24027, PAssign24029, PSend24059, PSend24060);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24061 = new_Send((Optr)PBlock23994, SMB_whileFalse_, 1, (Optr)PBlock24004);
    Array PThreadedCode23990 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_23991, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend23992, (Optr)&t_send1, (Optr)PSend23993, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock23994, (Optr)&t_push_closure, (Optr)PBlock24004, (Optr)&t_send1, (Optr)PSend24061, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod23987 = new_Method_with(PArray23988, PArray23989, empty_Array, PThreadedCode23990, 3, PSend23993, PSend24061, self);
    
    MethodClosure MC_SMB_decodeMultipartForm_boundary_do_ = new_MethodClosure((Method)PMethod23987, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeMultipartForm_boundary_do_, MC_SMB_decodeMultipartForm_boundary_do_);
}


static void init_class_SMB_decodeUrlEncodedForm_do_() {
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24063 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_args_0_2 = new_Variable_named(L"args", 0);
    Variable VAR_keyval_0_3 = new_Variable_named(L"keyval", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_key_0_5 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_6 = new_Variable_named(L"value", 0);
    Array PArray24064 = new_Array_with(5, (Optr)VAR_args_0_2, (Optr)VAR_keyval_0_3, (Optr)VAR_index_0_4, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24067 = new_Send((Optr)VAR_aString_0_0, SMB_readStream, 0);
    Assign PAssign24066 = new_Assign((Optr)VAR_args_0_2, (Optr)PSend24067);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24070 = new_Send((Optr)VAR_args_0_2, SMB_atEnd, 0);
    Array PThreadedCode24069 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_send0, (Optr)PSend24070, (Optr)&t_block_return);
    Block PBlock24068 = new_Block_with(empty_Array, empty_Array, PThreadedCode24069, 1, PSend24070);
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Character char_24075 = new_Character(L'&');
    Constant char_24075_Const = new_Constant((Optr)char_24075);
    // upTo:. 
    Send PSend24074 = new_Send((Optr)VAR_args_0_2, SMB_upTo_, 1, (Optr)char_24075_Const);
    Assign PAssign24073 = new_Assign((Optr)VAR_keyval_0_3, (Optr)PSend24074);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_9587 = new_Character(L'=');
    Constant char_9587_Const = new_Constant((Optr)char_9587);
    // indexOf:. 
    Send PSend24077 = new_Send((Optr)VAR_keyval_0_3, SMB_indexOf_, 1, (Optr)char_9587_Const);
    Assign PAssign24076 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend24077);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend24078 = new_Send((Optr)PAssign24076, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign24082 = new_Assign((Optr)VAR_key_0_5, (Optr)VAR_keyval_0_3);
    String string_24084 = new_String(L"");
    Constant string_24084_Const = new_Constant((Optr)string_24084);
    Assign PAssign24083 = new_Assign((Optr)VAR_value_0_6, (Optr)string_24084_Const);
    Array PThreadedCode24081 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24082, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24083, (Optr)&t_push1, (Optr)string_24084, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24080 = new_Block_with(empty_Array, empty_Array, PThreadedCode24081, 2, PAssign24082, PAssign24083);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24089 = new_Send((Optr)VAR_index_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24088 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend24089);
    Assign PAssign24087 = new_Assign((Optr)VAR_key_0_5, (Optr)PSend24088);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24092 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24093 = new_Send((Optr)VAR_keyval_0_3, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend24091 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)PSend24092, (Optr)PSend24093);
    Assign PAssign24090 = new_Assign((Optr)VAR_value_0_6, (Optr)PSend24091);
    Array PThreadedCode24086 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign24087, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24089, (Optr)&t_send2, (Optr)PSend24088, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24090, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24092, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_send0, (Optr)PSend24093, (Optr)&t_send2, (Optr)PSend24091, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24085 = new_Block_with(empty_Array, empty_Array, PThreadedCode24086, 2, PAssign24087, PAssign24090);
    // ifTrue:ifFalse:. 
    Send PSend24079 = new_Send((Optr)PSend24078, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24080, (Optr)PBlock24085);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend24094 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_value_, 2, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Array PThreadedCode24072 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign24073, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_push1, (Optr)char_24075, (Optr)&t_send1, (Optr)PSend24074, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24076, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push1, (Optr)char_9587, (Optr)&t_send1, (Optr)PSend24077, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24078, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24079, (Optr)PBlock24080, (Optr)PBlock24085, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_key_0_5, (Optr)&t_push_variable, (Optr)VAR_value_0_6, (Optr)&t_send2, (Optr)PSend24094, (Optr)&t_block_return);
    Block PBlock24071 = new_Block_with(empty_Array, empty_Array, PThreadedCode24072, 3, PAssign24073, PSend24079, PSend24094);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24095 = new_Send((Optr)PBlock24068, SMB_whileFalse_, 1, (Optr)PBlock24071);
    Array PThreadedCode24065 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign24066, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend24067, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24068, (Optr)&t_push_closure, (Optr)PBlock24071, (Optr)&t_send1, (Optr)PSend24095, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24062 = new_Method_with(PArray24063, PArray24064, empty_Array, PThreadedCode24065, 3, PAssign24066, PSend24095, self);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_do_ = new_MethodClosure((Method)PMethod24062, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_do_, MC_SMB_decodeUrlEncodedForm_do_);
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
    init_class_SMB_decodeUrlEncodedForm_multipleValues_();
    init_class_SMB_decodeMultipartForm_boundary_do_();
    init_class_SMB_decodeUrlEncodedForm_do_();
    
}