#include <lib/class/WebClient/Core/WebUtils.h>


Optr layout_WebClient_Core_WebUtils_Class_class;


static void init_class_SMB_readHeadersFrom_() {
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24287 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_headers_0_1 = new_Variable_named(L"headers", 0);
    Variable VAR_nextLine_0_2 = new_Variable_named(L"nextLine", 0);
    Variable VAR_existing_0_3 = new_Variable_named(L"existing", 0);
    Array PArray24288 = new_Array_with(3, (Optr)VAR_headers_0_1, (Optr)VAR_nextLine_0_2, (Optr)VAR_existing_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24291 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24290 = new_Assign((Optr)VAR_headers_0_1, (Optr)PSend24291);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24296 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24295 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24296);
    Assign PAssign24294 = new_Assign((Optr)VAR_nextLine_0_2, (Optr)PSend24295);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend24297 = new_Send((Optr)VAR_nextLine_0_2, SMB_isEmpty, 0);
    Array PThreadedCode24293 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24294, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24296, (Optr)&t_send1, (Optr)PSend24295, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24297, (Optr)&t_block_return);
    Block PBlock24292 = new_Block_with(empty_Array, empty_Array, PThreadedCode24293, 2, PAssign24294, PSend24297);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24300 = new_Send((Optr)VAR_nextLine_0_2, SMB_first, 0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend24301 = new_Send((Optr)PSend24300, SMB_isSeparator, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend24306 = new_Send((Optr)VAR_headers_0_1, SMB_last, 0);
    Assign PAssign24305 = new_Assign((Optr)VAR_existing_0_3, (Optr)PSend24306);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24307 = new_Send((Optr)VAR_existing_0_3, SMB_value, 0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24308 = new_Send((Optr)String_classReference, SMB_space, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24309 = new_Send((Optr)PSend24307, SMB__append_, 1, (Optr)PSend24308);
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    // withBlanksTrimmed. 
    Send PSend24310 = new_Send((Optr)VAR_nextLine_0_2, SMB_withBlanksTrimmed, 0);
    // ,. 
    Send PSend24311 = new_Send((Optr)PSend24309, SMB__append_, 1, (Optr)PSend24310);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24312 = new_Send((Optr)VAR_existing_0_3, SMB_value_, 1, (Optr)PSend24311);
    Array PThreadedCode24304 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign24305, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_send0, (Optr)PSend24306, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_send0, (Optr)PSend24307, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24308, (Optr)&t_send1, (Optr)PSend24309, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24310, (Optr)&t_send1, (Optr)PSend24311, (Optr)&t_send1, (Optr)PSend24312, (Optr)&t_block_return);
    Block PBlock24303 = new_Block_with(empty_Array, empty_Array, PThreadedCode24304, 2, PAssign24305, PSend24312);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend24315 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Character char_444 = new_Character(L':');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // copyUpTo:. 
    Send PSend24316 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyUpTo_, 1, (Optr)char_444_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend24317 = new_Send((Optr)PSend24316, SMB_asLowercase, 0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    // copyAfter:. 
    Send PSend24318 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyAfter_, 1, (Optr)char_444_Const);
    // withBlanksTrimmed. 
    Send PSend24319 = new_Send((Optr)PSend24318, SMB_withBlanksTrimmed, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend24320 = new_Send((Optr)PSend24315, SMB_key_value_, 2, (Optr)PSend24317, (Optr)PSend24319);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24321 = new_Send((Optr)VAR_headers_0_1, SMB_add_, 1, (Optr)PSend24320);
    Array PThreadedCode24314 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend24315, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24316, (Optr)&t_send0, (Optr)PSend24317, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24318, (Optr)&t_send0, (Optr)PSend24319, (Optr)&t_send2, (Optr)PSend24320, (Optr)&t_send1, (Optr)PSend24321, (Optr)&t_block_return);
    Block PBlock24313 = new_Block_with(empty_Array, empty_Array, PThreadedCode24314, 1, PSend24321);
    // ifTrue:ifFalse:. 
    Send PSend24302 = new_Send((Optr)PSend24301, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24303, (Optr)PBlock24313);
    Array PThreadedCode24299 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24300, (Optr)&t_send0, (Optr)PSend24301, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24302, (Optr)PBlock24303, (Optr)PBlock24313, (Optr)&t_block_return);
    Block PBlock24298 = new_Block_with(empty_Array, empty_Array, PThreadedCode24299, 1, PSend24302);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24322 = new_Send((Optr)PBlock24292, SMB_whileFalse_, 1, (Optr)PBlock24298);
    Array PThreadedCode24289 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign24290, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24291, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24292, (Optr)&t_push_closure, (Optr)PBlock24298, (Optr)&t_send1, (Optr)PSend24322, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_method_return);
    Method PMethod24286 = new_Method_with(PArray24287, PArray24288, empty_Array, PThreadedCode24289, 3, PAssign24290, PSend24322, VAR_headers_0_1);
    
    MethodClosure MC_SMB_readHeadersFrom_ = new_MethodClosure((Method)PMethod24286, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_readHeadersFrom_, MC_SMB_readHeadersFrom_);
}


static void init_class_SMB_decodeUrlEncodedForm_multipleValues_() {
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBool_0_1 = new_Variable_named(L"aBool", 0);
    Array PArray24324 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBool_0_1);
    Variable VAR_fields_0_2 = new_Variable_named(L"fields", 0);
    Array PArray24325 = new_Array_with(1, (Optr)VAR_fields_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24328 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24327 = new_Assign((Optr)VAR_fields_0_2, (Optr)PSend24328);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray24330 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_24337 = new_String(L"");
    Array PThreadedCode24336 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24337, (Optr)&t_block_return);
    Constant string_24337_Const = new_Constant((Optr)string_24337);
    Block PBlock24335 = new_Block_with(empty_Array, empty_Array, PThreadedCode24336, 1, string_24337_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend24338 = new_Send((Optr)VAR_fields_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_key_1_0, (Optr)PBlock24335);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24339 = new_Send((Optr)PSend24338, SMB__append_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24340 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)PSend24339);
    Array PThreadedCode24334 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock24335, (Optr)&t_send2, (Optr)PSend24338, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend24339, (Optr)&t_send2, (Optr)PSend24340, (Optr)&t_block_return);
    Block PBlock24333 = new_Block_with(empty_Array, empty_Array, PThreadedCode24334, 1, PSend24340);
    // at:put:. 
    Send PSend24343 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode24342 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend24343, (Optr)&t_block_return);
    Block PBlock24341 = new_Block_with(empty_Array, empty_Array, PThreadedCode24342, 1, PSend24343);
    // ifTrue:ifFalse:. 
    Send PSend24332 = new_Send((Optr)VAR_aBool_0_1, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24333, (Optr)PBlock24341);
    Array PThreadedCode24331 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBool_0_1, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24332, (Optr)PBlock24333, (Optr)PBlock24341, (Optr)&t_method_return);
    Block PBlock24329 = new_Block_with(PArray24330, empty_Array, PThreadedCode24331, 1, PSend24332);
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    // decodeUrlEncodedForm:do:. 
    Send PSend24344 = new_Send((Optr)self, SMB_decodeUrlEncodedForm_do_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock24329);
    Array PThreadedCode24326 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24327, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24328, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock24329, (Optr)&t_send2, (Optr)PSend24344, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_method_return);
    Method PMethod24323 = new_Method_with(PArray24324, PArray24325, empty_Array, PThreadedCode24326, 3, PAssign24327, PSend24344, VAR_fields_0_2);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_multipleValues_ = new_MethodClosure((Method)PMethod24323, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_multipleValues_, MC_SMB_decodeUrlEncodedForm_multipleValues_);
}


static void init_class_SMB_decodeMultipartForm_boundary_do_() {
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_boundary_0_1 = new_Variable_named(L"boundary", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24346 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_boundary_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_skip_0_3 = new_Variable_named(L"skip", 0);
    Variable VAR_headers_0_4 = new_Variable_named(L"headers", 0);
    Variable VAR_content_0_5 = new_Variable_named(L"content", 0);
    Variable VAR_disposition_0_6 = new_Variable_named(L"disposition", 0);
    Variable VAR_index_0_7 = new_Variable_named(L"index", 0);
    Variable VAR_params_0_8 = new_Variable_named(L"params", 0);
    Array PArray24347 = new_Array_with(6, (Optr)VAR_skip_0_3, (Optr)VAR_headers_0_4, (Optr)VAR_content_0_5, (Optr)VAR_disposition_0_6, (Optr)VAR_index_0_7, (Optr)VAR_params_0_8);
    String string_24349 = new_String(L"--");
    Constant string_24349_Const = new_Constant((Optr)string_24349);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24350 = new_Send((Optr)string_24349_Const, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend24351 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24350);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24354 = new_Send((Optr)VAR_aStream_0_0, SMB_atEnd, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // next:. 
    Send PSend24358 = new_Send((Optr)VAR_aStream_0_0, SMB_next_, 1, (Optr)int_2_Const);
    Assign PAssign24357 = new_Assign((Optr)VAR_skip_0_3, (Optr)PSend24358);
    String string_24359 = new_String(L"--");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24359_Const = new_Constant((Optr)string_24359);
    // =. 
    Send PSend24360 = new_Send((Optr)PAssign24357, SMB__equals_, 1, (Optr)string_24359_Const);
    Array PThreadedCode24356 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign24357, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24358, (Optr)&t_assign, (Optr)&t_push1, (Optr)string_24359, (Optr)&t_send1, (Optr)PSend24360, (Optr)&t_block_return);
    Block PBlock24355 = new_Block_with(empty_Array, empty_Array, PThreadedCode24356, 1, PSend24360);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend24361 = new_Send((Optr)PSend24354, SMB_or_, 1, (Optr)PBlock24355);
    Array PThreadedCode24353 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24354, (Optr)&t_push_closure, (Optr)PBlock24355, (Optr)&t_send1, (Optr)PSend24361, (Optr)&t_block_return);
    Block PBlock24352 = new_Block_with(empty_Array, empty_Array, PThreadedCode24353, 1, PSend24361);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24364 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // =. 
    Send PSend24365 = new_Send((Optr)VAR_skip_0_3, SMB__equals_, 1, (Optr)PSend24364);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24369 = new_String(L"Error decoding multipart/form-data fields");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_24369_Const = new_Constant((Optr)string_24369);
    // error:. 
    Send PSend24370 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_24369_Const);
    Array PThreadedCode24368 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24369, (Optr)&t_send1, (Optr)PSend24370, (Optr)&t_block_return);
    Block PBlock24367 = new_Block_with(empty_Array, empty_Array, PThreadedCode24368, 1, PSend24370);
    // ifFalse:. 
    Send PSend24366 = new_Send((Optr)PSend24365, SMB_ifFalse_, 1, (Optr)PBlock24367);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24372 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24371 = new_Assign((Optr)VAR_headers_0_4, (Optr)PSend24372);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24373 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24375 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24377 = new_Send((Optr)VAR_headers_0_4, SMB_add_, 1, (Optr)VAR_hdr_1_0);
    Array PThreadedCode24376 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_send1, (Optr)PSend24377, (Optr)&t_method_return);
    Block PBlock24374 = new_Block_with(PArray24375, empty_Array, PThreadedCode24376, 1, PSend24377);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend24378 = new_Send((Optr)PSend24373, SMB_do_, 1, (Optr)PBlock24374);
    // crlf. 
    Send PSend24383 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    String string_24384 = new_String(L"--");
    Constant string_24384_Const = new_Constant((Optr)string_24384);
    // ,. 
    Send PSend24382 = new_Send((Optr)PSend24383, SMB__append_, 1, (Optr)string_24384_Const);
    // ,. 
    Send PSend24381 = new_Send((Optr)PSend24382, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    // upToAll:. 
    Send PSend24380 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24381);
    Assign PAssign24379 = new_Assign((Optr)VAR_content_0_5, (Optr)PSend24380);
    // new. 
    Send PSend24386 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24385 = new_Assign((Optr)VAR_params_0_8, (Optr)PSend24386);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_24389 = new_String(L"content-disposition");
    Constant string_24389_Const = new_Constant((Optr)string_24389);
    String string_24392 = new_String(L"");
    Array PThreadedCode24391 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24392, (Optr)&t_block_return);
    Constant string_24392_Const = new_Constant((Optr)string_24392);
    Block PBlock24390 = new_Block_with(empty_Array, empty_Array, PThreadedCode24391, 1, string_24392_Const);
    // at:ifAbsent:. 
    Send PSend24388 = new_Send((Optr)VAR_headers_0_4, SMB_at_ifAbsent_, 2, (Optr)string_24389_Const, (Optr)PBlock24390);
    Assign PAssign24387 = new_Assign((Optr)VAR_disposition_0_6, (Optr)PSend24388);
    Symbol  SMB_name = new_Symbol(L"name");
    Symbol  SMB_filename = new_Symbol(L"filename");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_name_Const = new_Constant((Optr)SMB_name);
    Constant SMB_filename_Const = new_Constant((Optr)SMB_filename);
    // with:with:. 
    Send PSend24393 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_name_Const, (Optr)SMB_filename_Const);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Array PArray24395 = new_Array_with(1, (Optr)VAR_arg_1_0);
    Variable VAR_len_1_1 = new_Variable_named(L"len", 1);
    Variable VAR_val_1_2 = new_Variable_named(L"val", 1);
    Array PArray24396 = new_Array_with(2, (Optr)VAR_len_1_1, (Optr)VAR_val_1_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24400 = new_Send((Optr)VAR_arg_1_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24399 = new_Send((Optr)PSend24400, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign24398 = new_Assign((Optr)VAR_len_1_1, (Optr)PSend24399);
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    String string_24404 = new_String(L"=");
    Constant string_24404_Const = new_Constant((Optr)string_24404);
    // ,. 
    Send PSend24403 = new_Send((Optr)VAR_arg_1_0, SMB__append_, 1, (Optr)string_24404_Const);
    // findString:. 
    Send PSend24402 = new_Send((Optr)VAR_disposition_0_6, SMB_findString_, 1, (Optr)PSend24403);
    Assign PAssign24401 = new_Assign((Optr)VAR_index_0_7, (Optr)PSend24402);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24405 = new_Send((Optr)VAR_index_0_7, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // +. 
    Send PSend24411 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Character char_24414 = new_Character(L'"');
    Constant char_24414_Const = new_Constant((Optr)char_24414);
    // +. 
    Send PSend24415 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    // indexOf:startingAt:. 
    Send PSend24413 = new_Send((Optr)VAR_disposition_0_6, SMB_indexOf_startingAt_, 2, (Optr)char_24414_Const, (Optr)PSend24415);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend24412 = new_Send((Optr)PSend24413, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24410 = new_Send((Optr)VAR_disposition_0_6, SMB_copyFrom_to_, 2, (Optr)PSend24411, (Optr)PSend24412);
    Assign PAssign24409 = new_Assign((Optr)VAR_val_1_2, (Optr)PSend24410);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24416 = new_Send((Optr)VAR_params_0_8, SMB_at_put_, 2, (Optr)VAR_arg_1_0, (Optr)VAR_val_1_2);
    Array PThreadedCode24408 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign24409, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24411, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push1, (Optr)char_24414, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24415, (Optr)&t_send2, (Optr)PSend24413, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24412, (Optr)&t_send2, (Optr)PSend24410, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_val_1_2, (Optr)&t_send2, (Optr)PSend24416, (Optr)&t_block_return);
    Block PBlock24407 = new_Block_with(empty_Array, empty_Array, PThreadedCode24408, 2, PAssign24409, PSend24416);
    // ifTrue:. 
    Send PSend24406 = new_Send((Optr)PSend24405, SMB_ifTrue_, 1, (Optr)PBlock24407);
    Array PThreadedCode24397 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign24398, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send0, (Optr)PSend24400, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24399, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24401, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push1, (Optr)string_24404, (Optr)&t_send1, (Optr)PSend24403, (Optr)&t_send1, (Optr)PSend24402, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24405, (Optr)&t_send_ifTrue_, (Optr)PSend24406, (Optr)PBlock24407, (Optr)&t_method_return);
    Block PBlock24394 = new_Block_with(PArray24395, PArray24396, PThreadedCode24397, 3, PAssign24398, PAssign24401, PSend24406);
    // do:. 
    Send PSend24417 = new_Send((Optr)PSend24393, SMB_do_, 1, (Optr)PBlock24394);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend24418 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_value_value_, 3, (Optr)VAR_headers_0_4, (Optr)VAR_params_0_8, (Optr)VAR_content_0_5);
    Array PThreadedCode24363 = instantiate_Array_with(ThreadedCode_Class, 0, 95, (Optr)&t_push_variable, (Optr)VAR_skip_0_3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24364, (Optr)&t_send1, (Optr)PSend24365, (Optr)&t_send_ifFalse_, (Optr)PSend24366, (Optr)PBlock24367, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24371, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24372, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24373, (Optr)&t_push_closure, (Optr)PBlock24374, (Optr)&t_send1, (Optr)PSend24378, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24379, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24383, (Optr)&t_push1, (Optr)string_24384, (Optr)&t_send1, (Optr)PSend24382, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24381, (Optr)&t_send1, (Optr)PSend24380, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24385, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24387, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push1, (Optr)string_24389, (Optr)&t_push_closure, (Optr)PBlock24390, (Optr)&t_send2, (Optr)PSend24388, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_name, (Optr)&t_push1, (Optr)SMB_filename, (Optr)&t_send2, (Optr)PSend24393, (Optr)&t_push_closure, (Optr)PBlock24394, (Optr)&t_send1, (Optr)PSend24417, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_content_0_5, (Optr)&t_send3, (Optr)PSend24418, (Optr)&t_block_return);
    Block PBlock24362 = new_Block_with(empty_Array, empty_Array, PThreadedCode24363, 8, PSend24366, PAssign24371, PSend24378, PAssign24379, PAssign24385, PAssign24387, PSend24417, PSend24418);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24419 = new_Send((Optr)PBlock24352, SMB_whileFalse_, 1, (Optr)PBlock24362);
    Array PThreadedCode24348 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24349, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24350, (Optr)&t_send1, (Optr)PSend24351, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24352, (Optr)&t_push_closure, (Optr)PBlock24362, (Optr)&t_send1, (Optr)PSend24419, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24345 = new_Method_with(PArray24346, PArray24347, empty_Array, PThreadedCode24348, 3, PSend24351, PSend24419, self);
    
    MethodClosure MC_SMB_decodeMultipartForm_boundary_do_ = new_MethodClosure((Method)PMethod24345, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeMultipartForm_boundary_do_, MC_SMB_decodeMultipartForm_boundary_do_);
}


static void init_class_SMB_decodeUrlEncodedForm_do_() {
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24421 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_args_0_2 = new_Variable_named(L"args", 0);
    Variable VAR_keyval_0_3 = new_Variable_named(L"keyval", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_key_0_5 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_6 = new_Variable_named(L"value", 0);
    Array PArray24422 = new_Array_with(5, (Optr)VAR_args_0_2, (Optr)VAR_keyval_0_3, (Optr)VAR_index_0_4, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24425 = new_Send((Optr)VAR_aString_0_0, SMB_readStream, 0);
    Assign PAssign24424 = new_Assign((Optr)VAR_args_0_2, (Optr)PSend24425);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24428 = new_Send((Optr)VAR_args_0_2, SMB_atEnd, 0);
    Array PThreadedCode24427 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_send0, (Optr)PSend24428, (Optr)&t_block_return);
    Block PBlock24426 = new_Block_with(empty_Array, empty_Array, PThreadedCode24427, 1, PSend24428);
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Character char_24433 = new_Character(L'&');
    Constant char_24433_Const = new_Constant((Optr)char_24433);
    // upTo:. 
    Send PSend24432 = new_Send((Optr)VAR_args_0_2, SMB_upTo_, 1, (Optr)char_24433_Const);
    Assign PAssign24431 = new_Assign((Optr)VAR_keyval_0_3, (Optr)PSend24432);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_9847 = new_Character(L'=');
    Constant char_9847_Const = new_Constant((Optr)char_9847);
    // indexOf:. 
    Send PSend24435 = new_Send((Optr)VAR_keyval_0_3, SMB_indexOf_, 1, (Optr)char_9847_Const);
    Assign PAssign24434 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend24435);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend24436 = new_Send((Optr)PAssign24434, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign24440 = new_Assign((Optr)VAR_key_0_5, (Optr)VAR_keyval_0_3);
    String string_24442 = new_String(L"");
    Constant string_24442_Const = new_Constant((Optr)string_24442);
    Assign PAssign24441 = new_Assign((Optr)VAR_value_0_6, (Optr)string_24442_Const);
    Array PThreadedCode24439 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24440, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24441, (Optr)&t_push1, (Optr)string_24442, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24438 = new_Block_with(empty_Array, empty_Array, PThreadedCode24439, 2, PAssign24440, PAssign24441);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24447 = new_Send((Optr)VAR_index_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24446 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend24447);
    Assign PAssign24445 = new_Assign((Optr)VAR_key_0_5, (Optr)PSend24446);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24450 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24451 = new_Send((Optr)VAR_keyval_0_3, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend24449 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)PSend24450, (Optr)PSend24451);
    Assign PAssign24448 = new_Assign((Optr)VAR_value_0_6, (Optr)PSend24449);
    Array PThreadedCode24444 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign24445, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24447, (Optr)&t_send2, (Optr)PSend24446, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24448, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24450, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_send0, (Optr)PSend24451, (Optr)&t_send2, (Optr)PSend24449, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24443 = new_Block_with(empty_Array, empty_Array, PThreadedCode24444, 2, PAssign24445, PAssign24448);
    // ifTrue:ifFalse:. 
    Send PSend24437 = new_Send((Optr)PSend24436, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24438, (Optr)PBlock24443);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend24452 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_value_, 2, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Array PThreadedCode24430 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign24431, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_push1, (Optr)char_24433, (Optr)&t_send1, (Optr)PSend24432, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24434, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push1, (Optr)char_9847, (Optr)&t_send1, (Optr)PSend24435, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24436, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24437, (Optr)PBlock24438, (Optr)PBlock24443, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_key_0_5, (Optr)&t_push_variable, (Optr)VAR_value_0_6, (Optr)&t_send2, (Optr)PSend24452, (Optr)&t_block_return);
    Block PBlock24429 = new_Block_with(empty_Array, empty_Array, PThreadedCode24430, 3, PAssign24431, PSend24437, PSend24452);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24453 = new_Send((Optr)PBlock24426, SMB_whileFalse_, 1, (Optr)PBlock24429);
    Array PThreadedCode24423 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign24424, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend24425, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24426, (Optr)&t_push_closure, (Optr)PBlock24429, (Optr)&t_send1, (Optr)PSend24453, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24420 = new_Method_with(PArray24421, PArray24422, empty_Array, PThreadedCode24423, 3, PAssign24424, PSend24453, self);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_do_ = new_MethodClosure((Method)PMethod24420, HEADER(WebClient_Core_WebUtils_Class));
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