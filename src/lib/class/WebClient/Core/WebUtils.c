#include <lib/class/WebClient/Core/WebUtils.h>


Optr layout_WebClient_Core_WebUtils_Class_class;


static void init_class_SMB_readHeadersFrom_() {
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24289 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_headers_0_1 = new_Variable_named(L"headers", 0);
    Variable VAR_nextLine_0_2 = new_Variable_named(L"nextLine", 0);
    Variable VAR_existing_0_3 = new_Variable_named(L"existing", 0);
    Array PArray24290 = new_Array_with(3, (Optr)VAR_headers_0_1, (Optr)VAR_nextLine_0_2, (Optr)VAR_existing_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24293 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24292 = new_Assign((Optr)VAR_headers_0_1, (Optr)PSend24293);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24298 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24297 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24298);
    Assign PAssign24296 = new_Assign((Optr)VAR_nextLine_0_2, (Optr)PSend24297);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend24299 = new_Send((Optr)VAR_nextLine_0_2, SMB_isEmpty, 0);
    Array PThreadedCode24295 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24296, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24298, (Optr)&t_send1, (Optr)PSend24297, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24299, (Optr)&t_block_return);
    Block PBlock24294 = new_Block_with(empty_Array, empty_Array, PThreadedCode24295, 2, PAssign24296, PSend24299);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24302 = new_Send((Optr)VAR_nextLine_0_2, SMB_first, 0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend24303 = new_Send((Optr)PSend24302, SMB_isSeparator, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend24308 = new_Send((Optr)VAR_headers_0_1, SMB_last, 0);
    Assign PAssign24307 = new_Assign((Optr)VAR_existing_0_3, (Optr)PSend24308);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24309 = new_Send((Optr)VAR_existing_0_3, SMB_value, 0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24310 = new_Send((Optr)String_classReference, SMB_space, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24311 = new_Send((Optr)PSend24309, SMB__append_, 1, (Optr)PSend24310);
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    // withBlanksTrimmed. 
    Send PSend24312 = new_Send((Optr)VAR_nextLine_0_2, SMB_withBlanksTrimmed, 0);
    // ,. 
    Send PSend24313 = new_Send((Optr)PSend24311, SMB__append_, 1, (Optr)PSend24312);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24314 = new_Send((Optr)VAR_existing_0_3, SMB_value_, 1, (Optr)PSend24313);
    Array PThreadedCode24306 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign24307, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_send0, (Optr)PSend24308, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_send0, (Optr)PSend24309, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24310, (Optr)&t_send1, (Optr)PSend24311, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24312, (Optr)&t_send1, (Optr)PSend24313, (Optr)&t_send1, (Optr)PSend24314, (Optr)&t_block_return);
    Block PBlock24305 = new_Block_with(empty_Array, empty_Array, PThreadedCode24306, 2, PAssign24307, PSend24314);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend24317 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Character char_444 = new_Character(L':');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // copyUpTo:. 
    Send PSend24318 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyUpTo_, 1, (Optr)char_444_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend24319 = new_Send((Optr)PSend24318, SMB_asLowercase, 0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    // copyAfter:. 
    Send PSend24320 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyAfter_, 1, (Optr)char_444_Const);
    // withBlanksTrimmed. 
    Send PSend24321 = new_Send((Optr)PSend24320, SMB_withBlanksTrimmed, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend24322 = new_Send((Optr)PSend24317, SMB_key_value_, 2, (Optr)PSend24319, (Optr)PSend24321);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24323 = new_Send((Optr)VAR_headers_0_1, SMB_add_, 1, (Optr)PSend24322);
    Array PThreadedCode24316 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend24317, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24318, (Optr)&t_send0, (Optr)PSend24319, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24320, (Optr)&t_send0, (Optr)PSend24321, (Optr)&t_send2, (Optr)PSend24322, (Optr)&t_send1, (Optr)PSend24323, (Optr)&t_block_return);
    Block PBlock24315 = new_Block_with(empty_Array, empty_Array, PThreadedCode24316, 1, PSend24323);
    // ifTrue:ifFalse:. 
    Send PSend24304 = new_Send((Optr)PSend24303, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24305, (Optr)PBlock24315);
    Array PThreadedCode24301 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24302, (Optr)&t_send0, (Optr)PSend24303, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24304, (Optr)PBlock24305, (Optr)PBlock24315, (Optr)&t_block_return);
    Block PBlock24300 = new_Block_with(empty_Array, empty_Array, PThreadedCode24301, 1, PSend24304);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24324 = new_Send((Optr)PBlock24294, SMB_whileFalse_, 1, (Optr)PBlock24300);
    Array PThreadedCode24291 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign24292, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24293, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24294, (Optr)&t_push_closure, (Optr)PBlock24300, (Optr)&t_send1, (Optr)PSend24324, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_method_return);
    Method PMethod24288 = new_Method_with(PArray24289, PArray24290, empty_Array, PThreadedCode24291, 3, PAssign24292, PSend24324, VAR_headers_0_1);
    
    MethodClosure MC_SMB_readHeadersFrom_ = new_MethodClosure((Method)PMethod24288, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_readHeadersFrom_, MC_SMB_readHeadersFrom_);
}


static void init_class_SMB_decodeUrlEncodedForm_multipleValues_() {
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBool_0_1 = new_Variable_named(L"aBool", 0);
    Array PArray24326 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBool_0_1);
    Variable VAR_fields_0_2 = new_Variable_named(L"fields", 0);
    Array PArray24327 = new_Array_with(1, (Optr)VAR_fields_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24330 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24329 = new_Assign((Optr)VAR_fields_0_2, (Optr)PSend24330);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray24332 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_24339 = new_String(L"");
    Array PThreadedCode24338 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24339, (Optr)&t_block_return);
    Constant string_24339_Const = new_Constant((Optr)string_24339);
    Block PBlock24337 = new_Block_with(empty_Array, empty_Array, PThreadedCode24338, 1, string_24339_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend24340 = new_Send((Optr)VAR_fields_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_key_1_0, (Optr)PBlock24337);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24341 = new_Send((Optr)PSend24340, SMB__append_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24342 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)PSend24341);
    Array PThreadedCode24336 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock24337, (Optr)&t_send2, (Optr)PSend24340, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend24341, (Optr)&t_send2, (Optr)PSend24342, (Optr)&t_block_return);
    Block PBlock24335 = new_Block_with(empty_Array, empty_Array, PThreadedCode24336, 1, PSend24342);
    // at:put:. 
    Send PSend24345 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode24344 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend24345, (Optr)&t_block_return);
    Block PBlock24343 = new_Block_with(empty_Array, empty_Array, PThreadedCode24344, 1, PSend24345);
    // ifTrue:ifFalse:. 
    Send PSend24334 = new_Send((Optr)VAR_aBool_0_1, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24335, (Optr)PBlock24343);
    Array PThreadedCode24333 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBool_0_1, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24334, (Optr)PBlock24335, (Optr)PBlock24343, (Optr)&t_method_return);
    Block PBlock24331 = new_Block_with(PArray24332, empty_Array, PThreadedCode24333, 1, PSend24334);
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    // decodeUrlEncodedForm:do:. 
    Send PSend24346 = new_Send((Optr)self, SMB_decodeUrlEncodedForm_do_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock24331);
    Array PThreadedCode24328 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24329, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24330, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock24331, (Optr)&t_send2, (Optr)PSend24346, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_method_return);
    Method PMethod24325 = new_Method_with(PArray24326, PArray24327, empty_Array, PThreadedCode24328, 3, PAssign24329, PSend24346, VAR_fields_0_2);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_multipleValues_ = new_MethodClosure((Method)PMethod24325, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_multipleValues_, MC_SMB_decodeUrlEncodedForm_multipleValues_);
}


static void init_class_SMB_decodeMultipartForm_boundary_do_() {
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_boundary_0_1 = new_Variable_named(L"boundary", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24348 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_boundary_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_skip_0_3 = new_Variable_named(L"skip", 0);
    Variable VAR_headers_0_4 = new_Variable_named(L"headers", 0);
    Variable VAR_content_0_5 = new_Variable_named(L"content", 0);
    Variable VAR_disposition_0_6 = new_Variable_named(L"disposition", 0);
    Variable VAR_index_0_7 = new_Variable_named(L"index", 0);
    Variable VAR_params_0_8 = new_Variable_named(L"params", 0);
    Array PArray24349 = new_Array_with(6, (Optr)VAR_skip_0_3, (Optr)VAR_headers_0_4, (Optr)VAR_content_0_5, (Optr)VAR_disposition_0_6, (Optr)VAR_index_0_7, (Optr)VAR_params_0_8);
    String string_24351 = new_String(L"--");
    Constant string_24351_Const = new_Constant((Optr)string_24351);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24352 = new_Send((Optr)string_24351_Const, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend24353 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24352);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24356 = new_Send((Optr)VAR_aStream_0_0, SMB_atEnd, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // next:. 
    Send PSend24360 = new_Send((Optr)VAR_aStream_0_0, SMB_next_, 1, (Optr)int_2_Const);
    Assign PAssign24359 = new_Assign((Optr)VAR_skip_0_3, (Optr)PSend24360);
    String string_24361 = new_String(L"--");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24361_Const = new_Constant((Optr)string_24361);
    // =. 
    Send PSend24362 = new_Send((Optr)PAssign24359, SMB__equals_, 1, (Optr)string_24361_Const);
    Array PThreadedCode24358 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign24359, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24360, (Optr)&t_assign, (Optr)&t_push1, (Optr)string_24361, (Optr)&t_send1, (Optr)PSend24362, (Optr)&t_block_return);
    Block PBlock24357 = new_Block_with(empty_Array, empty_Array, PThreadedCode24358, 1, PSend24362);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend24363 = new_Send((Optr)PSend24356, SMB_or_, 1, (Optr)PBlock24357);
    Array PThreadedCode24355 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24356, (Optr)&t_push_closure, (Optr)PBlock24357, (Optr)&t_send1, (Optr)PSend24363, (Optr)&t_block_return);
    Block PBlock24354 = new_Block_with(empty_Array, empty_Array, PThreadedCode24355, 1, PSend24363);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24366 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // =. 
    Send PSend24367 = new_Send((Optr)VAR_skip_0_3, SMB__equals_, 1, (Optr)PSend24366);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24371 = new_String(L"Error decoding multipart/form-data fields");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_24371_Const = new_Constant((Optr)string_24371);
    // error:. 
    Send PSend24372 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_24371_Const);
    Array PThreadedCode24370 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24371, (Optr)&t_send1, (Optr)PSend24372, (Optr)&t_block_return);
    Block PBlock24369 = new_Block_with(empty_Array, empty_Array, PThreadedCode24370, 1, PSend24372);
    // ifFalse:. 
    Send PSend24368 = new_Send((Optr)PSend24367, SMB_ifFalse_, 1, (Optr)PBlock24369);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24374 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24373 = new_Assign((Optr)VAR_headers_0_4, (Optr)PSend24374);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24375 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24377 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24379 = new_Send((Optr)VAR_headers_0_4, SMB_add_, 1, (Optr)VAR_hdr_1_0);
    Array PThreadedCode24378 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_send1, (Optr)PSend24379, (Optr)&t_method_return);
    Block PBlock24376 = new_Block_with(PArray24377, empty_Array, PThreadedCode24378, 1, PSend24379);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend24380 = new_Send((Optr)PSend24375, SMB_do_, 1, (Optr)PBlock24376);
    // crlf. 
    Send PSend24385 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    String string_24386 = new_String(L"--");
    Constant string_24386_Const = new_Constant((Optr)string_24386);
    // ,. 
    Send PSend24384 = new_Send((Optr)PSend24385, SMB__append_, 1, (Optr)string_24386_Const);
    // ,. 
    Send PSend24383 = new_Send((Optr)PSend24384, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    // upToAll:. 
    Send PSend24382 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24383);
    Assign PAssign24381 = new_Assign((Optr)VAR_content_0_5, (Optr)PSend24382);
    // new. 
    Send PSend24388 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24387 = new_Assign((Optr)VAR_params_0_8, (Optr)PSend24388);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_24391 = new_String(L"content-disposition");
    Constant string_24391_Const = new_Constant((Optr)string_24391);
    String string_24394 = new_String(L"");
    Array PThreadedCode24393 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24394, (Optr)&t_block_return);
    Constant string_24394_Const = new_Constant((Optr)string_24394);
    Block PBlock24392 = new_Block_with(empty_Array, empty_Array, PThreadedCode24393, 1, string_24394_Const);
    // at:ifAbsent:. 
    Send PSend24390 = new_Send((Optr)VAR_headers_0_4, SMB_at_ifAbsent_, 2, (Optr)string_24391_Const, (Optr)PBlock24392);
    Assign PAssign24389 = new_Assign((Optr)VAR_disposition_0_6, (Optr)PSend24390);
    Symbol  SMB_name = new_Symbol(L"name");
    Symbol  SMB_filename = new_Symbol(L"filename");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_name_Const = new_Constant((Optr)SMB_name);
    Constant SMB_filename_Const = new_Constant((Optr)SMB_filename);
    // with:with:. 
    Send PSend24395 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_name_Const, (Optr)SMB_filename_Const);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Array PArray24397 = new_Array_with(1, (Optr)VAR_arg_1_0);
    Variable VAR_len_1_1 = new_Variable_named(L"len", 1);
    Variable VAR_val_1_2 = new_Variable_named(L"val", 1);
    Array PArray24398 = new_Array_with(2, (Optr)VAR_len_1_1, (Optr)VAR_val_1_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24402 = new_Send((Optr)VAR_arg_1_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24401 = new_Send((Optr)PSend24402, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign24400 = new_Assign((Optr)VAR_len_1_1, (Optr)PSend24401);
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    String string_24406 = new_String(L"=");
    Constant string_24406_Const = new_Constant((Optr)string_24406);
    // ,. 
    Send PSend24405 = new_Send((Optr)VAR_arg_1_0, SMB__append_, 1, (Optr)string_24406_Const);
    // findString:. 
    Send PSend24404 = new_Send((Optr)VAR_disposition_0_6, SMB_findString_, 1, (Optr)PSend24405);
    Assign PAssign24403 = new_Assign((Optr)VAR_index_0_7, (Optr)PSend24404);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24407 = new_Send((Optr)VAR_index_0_7, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // +. 
    Send PSend24413 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Character char_24416 = new_Character(L'"');
    Constant char_24416_Const = new_Constant((Optr)char_24416);
    // +. 
    Send PSend24417 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    // indexOf:startingAt:. 
    Send PSend24415 = new_Send((Optr)VAR_disposition_0_6, SMB_indexOf_startingAt_, 2, (Optr)char_24416_Const, (Optr)PSend24417);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend24414 = new_Send((Optr)PSend24415, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24412 = new_Send((Optr)VAR_disposition_0_6, SMB_copyFrom_to_, 2, (Optr)PSend24413, (Optr)PSend24414);
    Assign PAssign24411 = new_Assign((Optr)VAR_val_1_2, (Optr)PSend24412);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24418 = new_Send((Optr)VAR_params_0_8, SMB_at_put_, 2, (Optr)VAR_arg_1_0, (Optr)VAR_val_1_2);
    Array PThreadedCode24410 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign24411, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24413, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push1, (Optr)char_24416, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24417, (Optr)&t_send2, (Optr)PSend24415, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24414, (Optr)&t_send2, (Optr)PSend24412, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_val_1_2, (Optr)&t_send2, (Optr)PSend24418, (Optr)&t_block_return);
    Block PBlock24409 = new_Block_with(empty_Array, empty_Array, PThreadedCode24410, 2, PAssign24411, PSend24418);
    // ifTrue:. 
    Send PSend24408 = new_Send((Optr)PSend24407, SMB_ifTrue_, 1, (Optr)PBlock24409);
    Array PThreadedCode24399 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign24400, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send0, (Optr)PSend24402, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24401, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24403, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push1, (Optr)string_24406, (Optr)&t_send1, (Optr)PSend24405, (Optr)&t_send1, (Optr)PSend24404, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24407, (Optr)&t_send_ifTrue_, (Optr)PSend24408, (Optr)PBlock24409, (Optr)&t_method_return);
    Block PBlock24396 = new_Block_with(PArray24397, PArray24398, PThreadedCode24399, 3, PAssign24400, PAssign24403, PSend24408);
    // do:. 
    Send PSend24419 = new_Send((Optr)PSend24395, SMB_do_, 1, (Optr)PBlock24396);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend24420 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_value_value_, 3, (Optr)VAR_headers_0_4, (Optr)VAR_params_0_8, (Optr)VAR_content_0_5);
    Array PThreadedCode24365 = instantiate_Array_with(ThreadedCode_Class, 0, 95, (Optr)&t_push_variable, (Optr)VAR_skip_0_3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24366, (Optr)&t_send1, (Optr)PSend24367, (Optr)&t_send_ifFalse_, (Optr)PSend24368, (Optr)PBlock24369, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24373, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24374, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24375, (Optr)&t_push_closure, (Optr)PBlock24376, (Optr)&t_send1, (Optr)PSend24380, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24381, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24385, (Optr)&t_push1, (Optr)string_24386, (Optr)&t_send1, (Optr)PSend24384, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24383, (Optr)&t_send1, (Optr)PSend24382, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24387, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24388, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24389, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push1, (Optr)string_24391, (Optr)&t_push_closure, (Optr)PBlock24392, (Optr)&t_send2, (Optr)PSend24390, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_name, (Optr)&t_push1, (Optr)SMB_filename, (Optr)&t_send2, (Optr)PSend24395, (Optr)&t_push_closure, (Optr)PBlock24396, (Optr)&t_send1, (Optr)PSend24419, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_content_0_5, (Optr)&t_send3, (Optr)PSend24420, (Optr)&t_block_return);
    Block PBlock24364 = new_Block_with(empty_Array, empty_Array, PThreadedCode24365, 8, PSend24368, PAssign24373, PSend24380, PAssign24381, PAssign24387, PAssign24389, PSend24419, PSend24420);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24421 = new_Send((Optr)PBlock24354, SMB_whileFalse_, 1, (Optr)PBlock24364);
    Array PThreadedCode24350 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24351, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24352, (Optr)&t_send1, (Optr)PSend24353, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24354, (Optr)&t_push_closure, (Optr)PBlock24364, (Optr)&t_send1, (Optr)PSend24421, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24347 = new_Method_with(PArray24348, PArray24349, empty_Array, PThreadedCode24350, 3, PSend24353, PSend24421, self);
    
    MethodClosure MC_SMB_decodeMultipartForm_boundary_do_ = new_MethodClosure((Method)PMethod24347, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeMultipartForm_boundary_do_, MC_SMB_decodeMultipartForm_boundary_do_);
}


static void init_class_SMB_decodeUrlEncodedForm_do_() {
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24423 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_args_0_2 = new_Variable_named(L"args", 0);
    Variable VAR_keyval_0_3 = new_Variable_named(L"keyval", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_key_0_5 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_6 = new_Variable_named(L"value", 0);
    Array PArray24424 = new_Array_with(5, (Optr)VAR_args_0_2, (Optr)VAR_keyval_0_3, (Optr)VAR_index_0_4, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24427 = new_Send((Optr)VAR_aString_0_0, SMB_readStream, 0);
    Assign PAssign24426 = new_Assign((Optr)VAR_args_0_2, (Optr)PSend24427);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24430 = new_Send((Optr)VAR_args_0_2, SMB_atEnd, 0);
    Array PThreadedCode24429 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_send0, (Optr)PSend24430, (Optr)&t_block_return);
    Block PBlock24428 = new_Block_with(empty_Array, empty_Array, PThreadedCode24429, 1, PSend24430);
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Character char_24435 = new_Character(L'&');
    Constant char_24435_Const = new_Constant((Optr)char_24435);
    // upTo:. 
    Send PSend24434 = new_Send((Optr)VAR_args_0_2, SMB_upTo_, 1, (Optr)char_24435_Const);
    Assign PAssign24433 = new_Assign((Optr)VAR_keyval_0_3, (Optr)PSend24434);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_9849 = new_Character(L'=');
    Constant char_9849_Const = new_Constant((Optr)char_9849);
    // indexOf:. 
    Send PSend24437 = new_Send((Optr)VAR_keyval_0_3, SMB_indexOf_, 1, (Optr)char_9849_Const);
    Assign PAssign24436 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend24437);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend24438 = new_Send((Optr)PAssign24436, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign24442 = new_Assign((Optr)VAR_key_0_5, (Optr)VAR_keyval_0_3);
    String string_24444 = new_String(L"");
    Constant string_24444_Const = new_Constant((Optr)string_24444);
    Assign PAssign24443 = new_Assign((Optr)VAR_value_0_6, (Optr)string_24444_Const);
    Array PThreadedCode24441 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24442, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24443, (Optr)&t_push1, (Optr)string_24444, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24440 = new_Block_with(empty_Array, empty_Array, PThreadedCode24441, 2, PAssign24442, PAssign24443);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24449 = new_Send((Optr)VAR_index_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24448 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend24449);
    Assign PAssign24447 = new_Assign((Optr)VAR_key_0_5, (Optr)PSend24448);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24452 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24453 = new_Send((Optr)VAR_keyval_0_3, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend24451 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)PSend24452, (Optr)PSend24453);
    Assign PAssign24450 = new_Assign((Optr)VAR_value_0_6, (Optr)PSend24451);
    Array PThreadedCode24446 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign24447, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24449, (Optr)&t_send2, (Optr)PSend24448, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24450, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24452, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_send0, (Optr)PSend24453, (Optr)&t_send2, (Optr)PSend24451, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24445 = new_Block_with(empty_Array, empty_Array, PThreadedCode24446, 2, PAssign24447, PAssign24450);
    // ifTrue:ifFalse:. 
    Send PSend24439 = new_Send((Optr)PSend24438, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24440, (Optr)PBlock24445);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend24454 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_value_, 2, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Array PThreadedCode24432 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign24433, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_push1, (Optr)char_24435, (Optr)&t_send1, (Optr)PSend24434, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24436, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push1, (Optr)char_9849, (Optr)&t_send1, (Optr)PSend24437, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24438, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24439, (Optr)PBlock24440, (Optr)PBlock24445, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_key_0_5, (Optr)&t_push_variable, (Optr)VAR_value_0_6, (Optr)&t_send2, (Optr)PSend24454, (Optr)&t_block_return);
    Block PBlock24431 = new_Block_with(empty_Array, empty_Array, PThreadedCode24432, 3, PAssign24433, PSend24439, PSend24454);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24455 = new_Send((Optr)PBlock24428, SMB_whileFalse_, 1, (Optr)PBlock24431);
    Array PThreadedCode24425 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign24426, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend24427, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24428, (Optr)&t_push_closure, (Optr)PBlock24431, (Optr)&t_send1, (Optr)PSend24455, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24422 = new_Method_with(PArray24423, PArray24424, empty_Array, PThreadedCode24425, 3, PAssign24426, PSend24455, self);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_do_ = new_MethodClosure((Method)PMethod24422, HEADER(WebClient_Core_WebUtils_Class));
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