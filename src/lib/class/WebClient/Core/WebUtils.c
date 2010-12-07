#include <lib/class/WebClient/Core/WebUtils.h>


Optr layout_WebClient_Core_WebUtils_Class_class;


static void init_class_SMB_readHeadersFrom_() {
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24470 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_headers_0_1 = new_Variable_named(L"headers", 0);
    Variable VAR_nextLine_0_2 = new_Variable_named(L"nextLine", 0);
    Variable VAR_existing_0_3 = new_Variable_named(L"existing", 0);
    Array PArray24471 = new_Array_with(3, (Optr)VAR_headers_0_1, (Optr)VAR_nextLine_0_2, (Optr)VAR_existing_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24474 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24473 = new_Assign((Optr)VAR_headers_0_1, (Optr)PSend24474);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24479 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24478 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24479);
    Assign PAssign24477 = new_Assign((Optr)VAR_nextLine_0_2, (Optr)PSend24478);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend24480 = new_Send((Optr)VAR_nextLine_0_2, SMB_isEmpty, 0);
    Array PThreadedCode24476 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24477, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24479, (Optr)&t_send1, (Optr)PSend24478, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24480, (Optr)&t_block_return);
    Block PBlock24475 = new_Block_with(empty_Array, empty_Array, PThreadedCode24476, 2, PAssign24477, PSend24480);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24483 = new_Send((Optr)VAR_nextLine_0_2, SMB_first, 0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend24484 = new_Send((Optr)PSend24483, SMB_isSeparator, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend24489 = new_Send((Optr)VAR_headers_0_1, SMB_last, 0);
    Assign PAssign24488 = new_Assign((Optr)VAR_existing_0_3, (Optr)PSend24489);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24490 = new_Send((Optr)VAR_existing_0_3, SMB_value, 0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24491 = new_Send((Optr)String_classReference, SMB_space, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24492 = new_Send((Optr)PSend24490, SMB__append_, 1, (Optr)PSend24491);
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    // withBlanksTrimmed. 
    Send PSend24493 = new_Send((Optr)VAR_nextLine_0_2, SMB_withBlanksTrimmed, 0);
    // ,. 
    Send PSend24494 = new_Send((Optr)PSend24492, SMB__append_, 1, (Optr)PSend24493);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24495 = new_Send((Optr)VAR_existing_0_3, SMB_value_, 1, (Optr)PSend24494);
    Array PThreadedCode24487 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign24488, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_send0, (Optr)PSend24489, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_send0, (Optr)PSend24490, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24491, (Optr)&t_send1, (Optr)PSend24492, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24493, (Optr)&t_send1, (Optr)PSend24494, (Optr)&t_send1, (Optr)PSend24495, (Optr)&t_block_return);
    Block PBlock24486 = new_Block_with(empty_Array, empty_Array, PThreadedCode24487, 2, PAssign24488, PSend24495);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend24498 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Character char_444 = new_Character(L':');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // copyUpTo:. 
    Send PSend24499 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyUpTo_, 1, (Optr)char_444_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend24500 = new_Send((Optr)PSend24499, SMB_asLowercase, 0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    // copyAfter:. 
    Send PSend24501 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyAfter_, 1, (Optr)char_444_Const);
    // withBlanksTrimmed. 
    Send PSend24502 = new_Send((Optr)PSend24501, SMB_withBlanksTrimmed, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend24503 = new_Send((Optr)PSend24498, SMB_key_value_, 2, (Optr)PSend24500, (Optr)PSend24502);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24504 = new_Send((Optr)VAR_headers_0_1, SMB_add_, 1, (Optr)PSend24503);
    Array PThreadedCode24497 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend24498, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24499, (Optr)&t_send0, (Optr)PSend24500, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24501, (Optr)&t_send0, (Optr)PSend24502, (Optr)&t_send2, (Optr)PSend24503, (Optr)&t_send1, (Optr)PSend24504, (Optr)&t_block_return);
    Block PBlock24496 = new_Block_with(empty_Array, empty_Array, PThreadedCode24497, 1, PSend24504);
    // ifTrue:ifFalse:. 
    Send PSend24485 = new_Send((Optr)PSend24484, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24486, (Optr)PBlock24496);
    Array PThreadedCode24482 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24483, (Optr)&t_send0, (Optr)PSend24484, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24485, (Optr)PBlock24486, (Optr)PBlock24496, (Optr)&t_block_return);
    Block PBlock24481 = new_Block_with(empty_Array, empty_Array, PThreadedCode24482, 1, PSend24485);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24505 = new_Send((Optr)PBlock24475, SMB_whileFalse_, 1, (Optr)PBlock24481);
    Array PThreadedCode24472 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign24473, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24474, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24475, (Optr)&t_push_closure, (Optr)PBlock24481, (Optr)&t_send1, (Optr)PSend24505, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_method_return);
    Method PMethod24469 = new_Method_with(PArray24470, PArray24471, empty_Array, PThreadedCode24472, 3, PAssign24473, PSend24505, VAR_headers_0_1);
    
    MethodClosure MC_SMB_readHeadersFrom_ = new_MethodClosure((Method)PMethod24469, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_readHeadersFrom_, MC_SMB_readHeadersFrom_);
}


static void init_class_SMB_decodeUrlEncodedForm_do_() {
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24507 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_args_0_2 = new_Variable_named(L"args", 0);
    Variable VAR_keyval_0_3 = new_Variable_named(L"keyval", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_key_0_5 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_6 = new_Variable_named(L"value", 0);
    Array PArray24508 = new_Array_with(5, (Optr)VAR_args_0_2, (Optr)VAR_keyval_0_3, (Optr)VAR_index_0_4, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24511 = new_Send((Optr)VAR_aString_0_0, SMB_readStream, 0);
    Assign PAssign24510 = new_Assign((Optr)VAR_args_0_2, (Optr)PSend24511);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24514 = new_Send((Optr)VAR_args_0_2, SMB_atEnd, 0);
    Array PThreadedCode24513 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_send0, (Optr)PSend24514, (Optr)&t_block_return);
    Block PBlock24512 = new_Block_with(empty_Array, empty_Array, PThreadedCode24513, 1, PSend24514);
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Character char_24519 = new_Character(L'&');
    Constant char_24519_Const = new_Constant((Optr)char_24519);
    // upTo:. 
    Send PSend24518 = new_Send((Optr)VAR_args_0_2, SMB_upTo_, 1, (Optr)char_24519_Const);
    Assign PAssign24517 = new_Assign((Optr)VAR_keyval_0_3, (Optr)PSend24518);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_9881 = new_Character(L'=');
    Constant char_9881_Const = new_Constant((Optr)char_9881);
    // indexOf:. 
    Send PSend24521 = new_Send((Optr)VAR_keyval_0_3, SMB_indexOf_, 1, (Optr)char_9881_Const);
    Assign PAssign24520 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend24521);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend24522 = new_Send((Optr)PAssign24520, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign24526 = new_Assign((Optr)VAR_key_0_5, (Optr)VAR_keyval_0_3);
    String string_24528 = new_String(L"");
    Constant string_24528_Const = new_Constant((Optr)string_24528);
    Assign PAssign24527 = new_Assign((Optr)VAR_value_0_6, (Optr)string_24528_Const);
    Array PThreadedCode24525 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24526, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24527, (Optr)&t_push1, (Optr)string_24528, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24524 = new_Block_with(empty_Array, empty_Array, PThreadedCode24525, 2, PAssign24526, PAssign24527);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24533 = new_Send((Optr)VAR_index_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24532 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend24533);
    Assign PAssign24531 = new_Assign((Optr)VAR_key_0_5, (Optr)PSend24532);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24536 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24537 = new_Send((Optr)VAR_keyval_0_3, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend24535 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)PSend24536, (Optr)PSend24537);
    Assign PAssign24534 = new_Assign((Optr)VAR_value_0_6, (Optr)PSend24535);
    Array PThreadedCode24530 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign24531, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24533, (Optr)&t_send2, (Optr)PSend24532, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24534, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24536, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_send0, (Optr)PSend24537, (Optr)&t_send2, (Optr)PSend24535, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24529 = new_Block_with(empty_Array, empty_Array, PThreadedCode24530, 2, PAssign24531, PAssign24534);
    // ifTrue:ifFalse:. 
    Send PSend24523 = new_Send((Optr)PSend24522, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24524, (Optr)PBlock24529);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend24538 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_value_, 2, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Array PThreadedCode24516 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign24517, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_push1, (Optr)char_24519, (Optr)&t_send1, (Optr)PSend24518, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24520, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push1, (Optr)char_9881, (Optr)&t_send1, (Optr)PSend24521, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24522, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24523, (Optr)PBlock24524, (Optr)PBlock24529, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_key_0_5, (Optr)&t_push_variable, (Optr)VAR_value_0_6, (Optr)&t_send2, (Optr)PSend24538, (Optr)&t_block_return);
    Block PBlock24515 = new_Block_with(empty_Array, empty_Array, PThreadedCode24516, 3, PAssign24517, PSend24523, PSend24538);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24539 = new_Send((Optr)PBlock24512, SMB_whileFalse_, 1, (Optr)PBlock24515);
    Array PThreadedCode24509 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign24510, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend24511, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24512, (Optr)&t_push_closure, (Optr)PBlock24515, (Optr)&t_send1, (Optr)PSend24539, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24506 = new_Method_with(PArray24507, PArray24508, empty_Array, PThreadedCode24509, 3, PAssign24510, PSend24539, self);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_do_ = new_MethodClosure((Method)PMethod24506, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_do_, MC_SMB_decodeUrlEncodedForm_do_);
}


static void init_class_SMB_decodeUrlEncodedForm_multipleValues_() {
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBool_0_1 = new_Variable_named(L"aBool", 0);
    Array PArray24541 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBool_0_1);
    Variable VAR_fields_0_2 = new_Variable_named(L"fields", 0);
    Array PArray24542 = new_Array_with(1, (Optr)VAR_fields_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24545 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24544 = new_Assign((Optr)VAR_fields_0_2, (Optr)PSend24545);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray24547 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_24554 = new_String(L"");
    Array PThreadedCode24553 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24554, (Optr)&t_block_return);
    Constant string_24554_Const = new_Constant((Optr)string_24554);
    Block PBlock24552 = new_Block_with(empty_Array, empty_Array, PThreadedCode24553, 1, string_24554_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend24555 = new_Send((Optr)VAR_fields_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_key_1_0, (Optr)PBlock24552);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24556 = new_Send((Optr)PSend24555, SMB__append_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24557 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)PSend24556);
    Array PThreadedCode24551 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock24552, (Optr)&t_send2, (Optr)PSend24555, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend24556, (Optr)&t_send2, (Optr)PSend24557, (Optr)&t_block_return);
    Block PBlock24550 = new_Block_with(empty_Array, empty_Array, PThreadedCode24551, 1, PSend24557);
    // at:put:. 
    Send PSend24560 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode24559 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend24560, (Optr)&t_block_return);
    Block PBlock24558 = new_Block_with(empty_Array, empty_Array, PThreadedCode24559, 1, PSend24560);
    // ifTrue:ifFalse:. 
    Send PSend24549 = new_Send((Optr)VAR_aBool_0_1, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24550, (Optr)PBlock24558);
    Array PThreadedCode24548 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBool_0_1, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24549, (Optr)PBlock24550, (Optr)PBlock24558, (Optr)&t_method_return);
    Block PBlock24546 = new_Block_with(PArray24547, empty_Array, PThreadedCode24548, 1, PSend24549);
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    // decodeUrlEncodedForm:do:. 
    Send PSend24561 = new_Send((Optr)self, SMB_decodeUrlEncodedForm_do_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock24546);
    Array PThreadedCode24543 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24544, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24545, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock24546, (Optr)&t_send2, (Optr)PSend24561, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_method_return);
    Method PMethod24540 = new_Method_with(PArray24541, PArray24542, empty_Array, PThreadedCode24543, 3, PAssign24544, PSend24561, VAR_fields_0_2);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_multipleValues_ = new_MethodClosure((Method)PMethod24540, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_multipleValues_, MC_SMB_decodeUrlEncodedForm_multipleValues_);
}


static void init_class_SMB_decodeMultipartForm_boundary_do_() {
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_boundary_0_1 = new_Variable_named(L"boundary", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24563 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_boundary_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_skip_0_3 = new_Variable_named(L"skip", 0);
    Variable VAR_headers_0_4 = new_Variable_named(L"headers", 0);
    Variable VAR_content_0_5 = new_Variable_named(L"content", 0);
    Variable VAR_disposition_0_6 = new_Variable_named(L"disposition", 0);
    Variable VAR_index_0_7 = new_Variable_named(L"index", 0);
    Variable VAR_params_0_8 = new_Variable_named(L"params", 0);
    Array PArray24564 = new_Array_with(6, (Optr)VAR_skip_0_3, (Optr)VAR_headers_0_4, (Optr)VAR_content_0_5, (Optr)VAR_disposition_0_6, (Optr)VAR_index_0_7, (Optr)VAR_params_0_8);
    String string_24566 = new_String(L"--");
    Constant string_24566_Const = new_Constant((Optr)string_24566);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24567 = new_Send((Optr)string_24566_Const, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend24568 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24567);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24571 = new_Send((Optr)VAR_aStream_0_0, SMB_atEnd, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // next:. 
    Send PSend24575 = new_Send((Optr)VAR_aStream_0_0, SMB_next_, 1, (Optr)int_2_Const);
    Assign PAssign24574 = new_Assign((Optr)VAR_skip_0_3, (Optr)PSend24575);
    String string_24576 = new_String(L"--");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24576_Const = new_Constant((Optr)string_24576);
    // =. 
    Send PSend24577 = new_Send((Optr)PAssign24574, SMB__equals_, 1, (Optr)string_24576_Const);
    Array PThreadedCode24573 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign24574, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24575, (Optr)&t_assign, (Optr)&t_push1, (Optr)string_24576, (Optr)&t_send1, (Optr)PSend24577, (Optr)&t_block_return);
    Block PBlock24572 = new_Block_with(empty_Array, empty_Array, PThreadedCode24573, 1, PSend24577);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend24578 = new_Send((Optr)PSend24571, SMB_or_, 1, (Optr)PBlock24572);
    Array PThreadedCode24570 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24571, (Optr)&t_push_closure, (Optr)PBlock24572, (Optr)&t_send1, (Optr)PSend24578, (Optr)&t_block_return);
    Block PBlock24569 = new_Block_with(empty_Array, empty_Array, PThreadedCode24570, 1, PSend24578);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24581 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // =. 
    Send PSend24582 = new_Send((Optr)VAR_skip_0_3, SMB__equals_, 1, (Optr)PSend24581);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24586 = new_String(L"Error decoding multipart/form-data fields");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_24586_Const = new_Constant((Optr)string_24586);
    // error:. 
    Send PSend24587 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_24586_Const);
    Array PThreadedCode24585 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24586, (Optr)&t_send1, (Optr)PSend24587, (Optr)&t_block_return);
    Block PBlock24584 = new_Block_with(empty_Array, empty_Array, PThreadedCode24585, 1, PSend24587);
    // ifFalse:. 
    Send PSend24583 = new_Send((Optr)PSend24582, SMB_ifFalse_, 1, (Optr)PBlock24584);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24589 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24588 = new_Assign((Optr)VAR_headers_0_4, (Optr)PSend24589);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24590 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24592 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24594 = new_Send((Optr)VAR_headers_0_4, SMB_add_, 1, (Optr)VAR_hdr_1_0);
    Array PThreadedCode24593 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_send1, (Optr)PSend24594, (Optr)&t_method_return);
    Block PBlock24591 = new_Block_with(PArray24592, empty_Array, PThreadedCode24593, 1, PSend24594);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend24595 = new_Send((Optr)PSend24590, SMB_do_, 1, (Optr)PBlock24591);
    // crlf. 
    Send PSend24600 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    String string_24601 = new_String(L"--");
    Constant string_24601_Const = new_Constant((Optr)string_24601);
    // ,. 
    Send PSend24599 = new_Send((Optr)PSend24600, SMB__append_, 1, (Optr)string_24601_Const);
    // ,. 
    Send PSend24598 = new_Send((Optr)PSend24599, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    // upToAll:. 
    Send PSend24597 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24598);
    Assign PAssign24596 = new_Assign((Optr)VAR_content_0_5, (Optr)PSend24597);
    // new. 
    Send PSend24603 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24602 = new_Assign((Optr)VAR_params_0_8, (Optr)PSend24603);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_24606 = new_String(L"content-disposition");
    Constant string_24606_Const = new_Constant((Optr)string_24606);
    String string_24609 = new_String(L"");
    Array PThreadedCode24608 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24609, (Optr)&t_block_return);
    Constant string_24609_Const = new_Constant((Optr)string_24609);
    Block PBlock24607 = new_Block_with(empty_Array, empty_Array, PThreadedCode24608, 1, string_24609_Const);
    // at:ifAbsent:. 
    Send PSend24605 = new_Send((Optr)VAR_headers_0_4, SMB_at_ifAbsent_, 2, (Optr)string_24606_Const, (Optr)PBlock24607);
    Assign PAssign24604 = new_Assign((Optr)VAR_disposition_0_6, (Optr)PSend24605);
    Symbol  SMB_name = new_Symbol(L"name");
    Symbol  SMB_filename = new_Symbol(L"filename");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_name_Const = new_Constant((Optr)SMB_name);
    Constant SMB_filename_Const = new_Constant((Optr)SMB_filename);
    // with:with:. 
    Send PSend24610 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_name_Const, (Optr)SMB_filename_Const);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Array PArray24612 = new_Array_with(1, (Optr)VAR_arg_1_0);
    Variable VAR_len_1_1 = new_Variable_named(L"len", 1);
    Variable VAR_val_1_2 = new_Variable_named(L"val", 1);
    Array PArray24613 = new_Array_with(2, (Optr)VAR_len_1_1, (Optr)VAR_val_1_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24617 = new_Send((Optr)VAR_arg_1_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24616 = new_Send((Optr)PSend24617, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign24615 = new_Assign((Optr)VAR_len_1_1, (Optr)PSend24616);
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    String string_24621 = new_String(L"=");
    Constant string_24621_Const = new_Constant((Optr)string_24621);
    // ,. 
    Send PSend24620 = new_Send((Optr)VAR_arg_1_0, SMB__append_, 1, (Optr)string_24621_Const);
    // findString:. 
    Send PSend24619 = new_Send((Optr)VAR_disposition_0_6, SMB_findString_, 1, (Optr)PSend24620);
    Assign PAssign24618 = new_Assign((Optr)VAR_index_0_7, (Optr)PSend24619);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24622 = new_Send((Optr)VAR_index_0_7, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // +. 
    Send PSend24628 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Character char_24631 = new_Character(L'"');
    Constant char_24631_Const = new_Constant((Optr)char_24631);
    // +. 
    Send PSend24632 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    // indexOf:startingAt:. 
    Send PSend24630 = new_Send((Optr)VAR_disposition_0_6, SMB_indexOf_startingAt_, 2, (Optr)char_24631_Const, (Optr)PSend24632);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend24629 = new_Send((Optr)PSend24630, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24627 = new_Send((Optr)VAR_disposition_0_6, SMB_copyFrom_to_, 2, (Optr)PSend24628, (Optr)PSend24629);
    Assign PAssign24626 = new_Assign((Optr)VAR_val_1_2, (Optr)PSend24627);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24633 = new_Send((Optr)VAR_params_0_8, SMB_at_put_, 2, (Optr)VAR_arg_1_0, (Optr)VAR_val_1_2);
    Array PThreadedCode24625 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign24626, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24628, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push1, (Optr)char_24631, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24632, (Optr)&t_send2, (Optr)PSend24630, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24629, (Optr)&t_send2, (Optr)PSend24627, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_val_1_2, (Optr)&t_send2, (Optr)PSend24633, (Optr)&t_block_return);
    Block PBlock24624 = new_Block_with(empty_Array, empty_Array, PThreadedCode24625, 2, PAssign24626, PSend24633);
    // ifTrue:. 
    Send PSend24623 = new_Send((Optr)PSend24622, SMB_ifTrue_, 1, (Optr)PBlock24624);
    Array PThreadedCode24614 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign24615, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send0, (Optr)PSend24617, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24616, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24618, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push1, (Optr)string_24621, (Optr)&t_send1, (Optr)PSend24620, (Optr)&t_send1, (Optr)PSend24619, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24622, (Optr)&t_send_ifTrue_, (Optr)PSend24623, (Optr)PBlock24624, (Optr)&t_method_return);
    Block PBlock24611 = new_Block_with(PArray24612, PArray24613, PThreadedCode24614, 3, PAssign24615, PAssign24618, PSend24623);
    // do:. 
    Send PSend24634 = new_Send((Optr)PSend24610, SMB_do_, 1, (Optr)PBlock24611);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend24635 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_value_value_, 3, (Optr)VAR_headers_0_4, (Optr)VAR_params_0_8, (Optr)VAR_content_0_5);
    Array PThreadedCode24580 = instantiate_Array_with(ThreadedCode_Class, 0, 95, (Optr)&t_push_variable, (Optr)VAR_skip_0_3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24581, (Optr)&t_send1, (Optr)PSend24582, (Optr)&t_send_ifFalse_, (Optr)PSend24583, (Optr)PBlock24584, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24588, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24589, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24590, (Optr)&t_push_closure, (Optr)PBlock24591, (Optr)&t_send1, (Optr)PSend24595, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24596, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24600, (Optr)&t_push1, (Optr)string_24601, (Optr)&t_send1, (Optr)PSend24599, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24598, (Optr)&t_send1, (Optr)PSend24597, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24602, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24603, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24604, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push1, (Optr)string_24606, (Optr)&t_push_closure, (Optr)PBlock24607, (Optr)&t_send2, (Optr)PSend24605, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_name, (Optr)&t_push1, (Optr)SMB_filename, (Optr)&t_send2, (Optr)PSend24610, (Optr)&t_push_closure, (Optr)PBlock24611, (Optr)&t_send1, (Optr)PSend24634, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_content_0_5, (Optr)&t_send3, (Optr)PSend24635, (Optr)&t_block_return);
    Block PBlock24579 = new_Block_with(empty_Array, empty_Array, PThreadedCode24580, 8, PSend24583, PAssign24588, PSend24595, PAssign24596, PAssign24602, PAssign24604, PSend24634, PSend24635);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24636 = new_Send((Optr)PBlock24569, SMB_whileFalse_, 1, (Optr)PBlock24579);
    Array PThreadedCode24565 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24566, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24567, (Optr)&t_send1, (Optr)PSend24568, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24569, (Optr)&t_push_closure, (Optr)PBlock24579, (Optr)&t_send1, (Optr)PSend24636, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24562 = new_Method_with(PArray24563, PArray24564, empty_Array, PThreadedCode24565, 3, PSend24568, PSend24636, self);
    
    MethodClosure MC_SMB_decodeMultipartForm_boundary_do_ = new_MethodClosure((Method)PMethod24562, HEADER(WebClient_Core_WebUtils_Class));
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