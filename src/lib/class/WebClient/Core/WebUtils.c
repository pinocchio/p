#include <lib/class/WebClient/Core/WebUtils.h>


Optr layout_WebClient_Core_WebUtils_Class_class;


static void init_class_SMB_readHeadersFrom_() {
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24508 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_headers_0_1 = new_Variable_named(L"headers", 0);
    Variable VAR_nextLine_0_2 = new_Variable_named(L"nextLine", 0);
    Variable VAR_existing_0_3 = new_Variable_named(L"existing", 0);
    Array PArray24509 = new_Array_with(3, (Optr)VAR_headers_0_1, (Optr)VAR_nextLine_0_2, (Optr)VAR_existing_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24512 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24511 = new_Assign((Optr)VAR_headers_0_1, (Optr)PSend24512);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24517 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24516 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24517);
    Assign PAssign24515 = new_Assign((Optr)VAR_nextLine_0_2, (Optr)PSend24516);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend24518 = new_Send((Optr)VAR_nextLine_0_2, SMB_isEmpty, 0);
    Array PThreadedCode24514 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24515, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24517, (Optr)&t_send1, (Optr)PSend24516, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24518, (Optr)&t_block_return);
    Block PBlock24513 = new_Block_with(empty_Array, empty_Array, PThreadedCode24514, 2, PAssign24515, PSend24518);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24521 = new_Send((Optr)VAR_nextLine_0_2, SMB_first, 0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend24522 = new_Send((Optr)PSend24521, SMB_isSeparator, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend24527 = new_Send((Optr)VAR_headers_0_1, SMB_last, 0);
    Assign PAssign24526 = new_Assign((Optr)VAR_existing_0_3, (Optr)PSend24527);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24528 = new_Send((Optr)VAR_existing_0_3, SMB_value, 0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24529 = new_Send((Optr)String_classReference, SMB_space, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24530 = new_Send((Optr)PSend24528, SMB__append_, 1, (Optr)PSend24529);
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    // withBlanksTrimmed. 
    Send PSend24531 = new_Send((Optr)VAR_nextLine_0_2, SMB_withBlanksTrimmed, 0);
    // ,. 
    Send PSend24532 = new_Send((Optr)PSend24530, SMB__append_, 1, (Optr)PSend24531);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24533 = new_Send((Optr)VAR_existing_0_3, SMB_value_, 1, (Optr)PSend24532);
    Array PThreadedCode24525 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign24526, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_send0, (Optr)PSend24527, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_send0, (Optr)PSend24528, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24529, (Optr)&t_send1, (Optr)PSend24530, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24531, (Optr)&t_send1, (Optr)PSend24532, (Optr)&t_send1, (Optr)PSend24533, (Optr)&t_block_return);
    Block PBlock24524 = new_Block_with(empty_Array, empty_Array, PThreadedCode24525, 2, PAssign24526, PSend24533);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend24536 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Character char_444 = new_Character(L':');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // copyUpTo:. 
    Send PSend24537 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyUpTo_, 1, (Optr)char_444_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend24538 = new_Send((Optr)PSend24537, SMB_asLowercase, 0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    // copyAfter:. 
    Send PSend24539 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyAfter_, 1, (Optr)char_444_Const);
    // withBlanksTrimmed. 
    Send PSend24540 = new_Send((Optr)PSend24539, SMB_withBlanksTrimmed, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend24541 = new_Send((Optr)PSend24536, SMB_key_value_, 2, (Optr)PSend24538, (Optr)PSend24540);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24542 = new_Send((Optr)VAR_headers_0_1, SMB_add_, 1, (Optr)PSend24541);
    Array PThreadedCode24535 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend24536, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24537, (Optr)&t_send0, (Optr)PSend24538, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24539, (Optr)&t_send0, (Optr)PSend24540, (Optr)&t_send2, (Optr)PSend24541, (Optr)&t_send1, (Optr)PSend24542, (Optr)&t_block_return);
    Block PBlock24534 = new_Block_with(empty_Array, empty_Array, PThreadedCode24535, 1, PSend24542);
    // ifTrue:ifFalse:. 
    Send PSend24523 = new_Send((Optr)PSend24522, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24524, (Optr)PBlock24534);
    Array PThreadedCode24520 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24521, (Optr)&t_send0, (Optr)PSend24522, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24523, (Optr)PBlock24524, (Optr)PBlock24534, (Optr)&t_block_return);
    Block PBlock24519 = new_Block_with(empty_Array, empty_Array, PThreadedCode24520, 1, PSend24523);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24543 = new_Send((Optr)PBlock24513, SMB_whileFalse_, 1, (Optr)PBlock24519);
    Array PThreadedCode24510 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign24511, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24512, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24513, (Optr)&t_push_closure, (Optr)PBlock24519, (Optr)&t_send1, (Optr)PSend24543, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_method_return);
    Method PMethod24507 = new_Method_with(PArray24508, PArray24509, empty_Array, PThreadedCode24510, 3, PAssign24511, PSend24543, VAR_headers_0_1);
    
    MethodClosure MC_SMB_readHeadersFrom_ = new_MethodClosure((Method)PMethod24507, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_readHeadersFrom_, MC_SMB_readHeadersFrom_);
}


static void init_class_SMB_decodeUrlEncodedForm_do_() {
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24545 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_args_0_2 = new_Variable_named(L"args", 0);
    Variable VAR_keyval_0_3 = new_Variable_named(L"keyval", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_key_0_5 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_6 = new_Variable_named(L"value", 0);
    Array PArray24546 = new_Array_with(5, (Optr)VAR_args_0_2, (Optr)VAR_keyval_0_3, (Optr)VAR_index_0_4, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24549 = new_Send((Optr)VAR_aString_0_0, SMB_readStream, 0);
    Assign PAssign24548 = new_Assign((Optr)VAR_args_0_2, (Optr)PSend24549);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24552 = new_Send((Optr)VAR_args_0_2, SMB_atEnd, 0);
    Array PThreadedCode24551 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_send0, (Optr)PSend24552, (Optr)&t_block_return);
    Block PBlock24550 = new_Block_with(empty_Array, empty_Array, PThreadedCode24551, 1, PSend24552);
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Character char_24557 = new_Character(L'&');
    Constant char_24557_Const = new_Constant((Optr)char_24557);
    // upTo:. 
    Send PSend24556 = new_Send((Optr)VAR_args_0_2, SMB_upTo_, 1, (Optr)char_24557_Const);
    Assign PAssign24555 = new_Assign((Optr)VAR_keyval_0_3, (Optr)PSend24556);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_9881 = new_Character(L'=');
    Constant char_9881_Const = new_Constant((Optr)char_9881);
    // indexOf:. 
    Send PSend24559 = new_Send((Optr)VAR_keyval_0_3, SMB_indexOf_, 1, (Optr)char_9881_Const);
    Assign PAssign24558 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend24559);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend24560 = new_Send((Optr)PAssign24558, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign24564 = new_Assign((Optr)VAR_key_0_5, (Optr)VAR_keyval_0_3);
    String string_24566 = new_String(L"");
    Constant string_24566_Const = new_Constant((Optr)string_24566);
    Assign PAssign24565 = new_Assign((Optr)VAR_value_0_6, (Optr)string_24566_Const);
    Array PThreadedCode24563 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24564, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24565, (Optr)&t_push1, (Optr)string_24566, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24562 = new_Block_with(empty_Array, empty_Array, PThreadedCode24563, 2, PAssign24564, PAssign24565);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24571 = new_Send((Optr)VAR_index_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24570 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend24571);
    Assign PAssign24569 = new_Assign((Optr)VAR_key_0_5, (Optr)PSend24570);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24574 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24575 = new_Send((Optr)VAR_keyval_0_3, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend24573 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)PSend24574, (Optr)PSend24575);
    Assign PAssign24572 = new_Assign((Optr)VAR_value_0_6, (Optr)PSend24573);
    Array PThreadedCode24568 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign24569, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24571, (Optr)&t_send2, (Optr)PSend24570, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24572, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24574, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_send0, (Optr)PSend24575, (Optr)&t_send2, (Optr)PSend24573, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24567 = new_Block_with(empty_Array, empty_Array, PThreadedCode24568, 2, PAssign24569, PAssign24572);
    // ifTrue:ifFalse:. 
    Send PSend24561 = new_Send((Optr)PSend24560, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24562, (Optr)PBlock24567);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend24576 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_value_, 2, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Array PThreadedCode24554 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign24555, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_push1, (Optr)char_24557, (Optr)&t_send1, (Optr)PSend24556, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24558, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push1, (Optr)char_9881, (Optr)&t_send1, (Optr)PSend24559, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24560, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24561, (Optr)PBlock24562, (Optr)PBlock24567, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_key_0_5, (Optr)&t_push_variable, (Optr)VAR_value_0_6, (Optr)&t_send2, (Optr)PSend24576, (Optr)&t_block_return);
    Block PBlock24553 = new_Block_with(empty_Array, empty_Array, PThreadedCode24554, 3, PAssign24555, PSend24561, PSend24576);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24577 = new_Send((Optr)PBlock24550, SMB_whileFalse_, 1, (Optr)PBlock24553);
    Array PThreadedCode24547 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign24548, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend24549, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24550, (Optr)&t_push_closure, (Optr)PBlock24553, (Optr)&t_send1, (Optr)PSend24577, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24544 = new_Method_with(PArray24545, PArray24546, empty_Array, PThreadedCode24547, 3, PAssign24548, PSend24577, self);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_do_ = new_MethodClosure((Method)PMethod24544, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_do_, MC_SMB_decodeUrlEncodedForm_do_);
}


static void init_class_SMB_decodeUrlEncodedForm_multipleValues_() {
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBool_0_1 = new_Variable_named(L"aBool", 0);
    Array PArray24579 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBool_0_1);
    Variable VAR_fields_0_2 = new_Variable_named(L"fields", 0);
    Array PArray24580 = new_Array_with(1, (Optr)VAR_fields_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24583 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24582 = new_Assign((Optr)VAR_fields_0_2, (Optr)PSend24583);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray24585 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_24592 = new_String(L"");
    Array PThreadedCode24591 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24592, (Optr)&t_block_return);
    Constant string_24592_Const = new_Constant((Optr)string_24592);
    Block PBlock24590 = new_Block_with(empty_Array, empty_Array, PThreadedCode24591, 1, string_24592_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend24593 = new_Send((Optr)VAR_fields_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_key_1_0, (Optr)PBlock24590);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24594 = new_Send((Optr)PSend24593, SMB__append_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24595 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)PSend24594);
    Array PThreadedCode24589 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock24590, (Optr)&t_send2, (Optr)PSend24593, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend24594, (Optr)&t_send2, (Optr)PSend24595, (Optr)&t_block_return);
    Block PBlock24588 = new_Block_with(empty_Array, empty_Array, PThreadedCode24589, 1, PSend24595);
    // at:put:. 
    Send PSend24598 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode24597 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend24598, (Optr)&t_block_return);
    Block PBlock24596 = new_Block_with(empty_Array, empty_Array, PThreadedCode24597, 1, PSend24598);
    // ifTrue:ifFalse:. 
    Send PSend24587 = new_Send((Optr)VAR_aBool_0_1, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24588, (Optr)PBlock24596);
    Array PThreadedCode24586 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBool_0_1, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24587, (Optr)PBlock24588, (Optr)PBlock24596, (Optr)&t_method_return);
    Block PBlock24584 = new_Block_with(PArray24585, empty_Array, PThreadedCode24586, 1, PSend24587);
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    // decodeUrlEncodedForm:do:. 
    Send PSend24599 = new_Send((Optr)self, SMB_decodeUrlEncodedForm_do_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock24584);
    Array PThreadedCode24581 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24582, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24583, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock24584, (Optr)&t_send2, (Optr)PSend24599, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_method_return);
    Method PMethod24578 = new_Method_with(PArray24579, PArray24580, empty_Array, PThreadedCode24581, 3, PAssign24582, PSend24599, VAR_fields_0_2);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_multipleValues_ = new_MethodClosure((Method)PMethod24578, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_multipleValues_, MC_SMB_decodeUrlEncodedForm_multipleValues_);
}


static void init_class_SMB_decodeMultipartForm_boundary_do_() {
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_boundary_0_1 = new_Variable_named(L"boundary", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24601 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_boundary_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_skip_0_3 = new_Variable_named(L"skip", 0);
    Variable VAR_headers_0_4 = new_Variable_named(L"headers", 0);
    Variable VAR_content_0_5 = new_Variable_named(L"content", 0);
    Variable VAR_disposition_0_6 = new_Variable_named(L"disposition", 0);
    Variable VAR_index_0_7 = new_Variable_named(L"index", 0);
    Variable VAR_params_0_8 = new_Variable_named(L"params", 0);
    Array PArray24602 = new_Array_with(6, (Optr)VAR_skip_0_3, (Optr)VAR_headers_0_4, (Optr)VAR_content_0_5, (Optr)VAR_disposition_0_6, (Optr)VAR_index_0_7, (Optr)VAR_params_0_8);
    String string_24604 = new_String(L"--");
    Constant string_24604_Const = new_Constant((Optr)string_24604);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24605 = new_Send((Optr)string_24604_Const, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend24606 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24605);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24609 = new_Send((Optr)VAR_aStream_0_0, SMB_atEnd, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // next:. 
    Send PSend24613 = new_Send((Optr)VAR_aStream_0_0, SMB_next_, 1, (Optr)int_2_Const);
    Assign PAssign24612 = new_Assign((Optr)VAR_skip_0_3, (Optr)PSend24613);
    String string_24614 = new_String(L"--");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24614_Const = new_Constant((Optr)string_24614);
    // =. 
    Send PSend24615 = new_Send((Optr)PAssign24612, SMB__equals_, 1, (Optr)string_24614_Const);
    Array PThreadedCode24611 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign24612, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24613, (Optr)&t_assign, (Optr)&t_push1, (Optr)string_24614, (Optr)&t_send1, (Optr)PSend24615, (Optr)&t_block_return);
    Block PBlock24610 = new_Block_with(empty_Array, empty_Array, PThreadedCode24611, 1, PSend24615);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend24616 = new_Send((Optr)PSend24609, SMB_or_, 1, (Optr)PBlock24610);
    Array PThreadedCode24608 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24609, (Optr)&t_push_closure, (Optr)PBlock24610, (Optr)&t_send1, (Optr)PSend24616, (Optr)&t_block_return);
    Block PBlock24607 = new_Block_with(empty_Array, empty_Array, PThreadedCode24608, 1, PSend24616);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24619 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // =. 
    Send PSend24620 = new_Send((Optr)VAR_skip_0_3, SMB__equals_, 1, (Optr)PSend24619);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24624 = new_String(L"Error decoding multipart/form-data fields");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_24624_Const = new_Constant((Optr)string_24624);
    // error:. 
    Send PSend24625 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_24624_Const);
    Array PThreadedCode24623 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24624, (Optr)&t_send1, (Optr)PSend24625, (Optr)&t_block_return);
    Block PBlock24622 = new_Block_with(empty_Array, empty_Array, PThreadedCode24623, 1, PSend24625);
    // ifFalse:. 
    Send PSend24621 = new_Send((Optr)PSend24620, SMB_ifFalse_, 1, (Optr)PBlock24622);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24627 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24626 = new_Assign((Optr)VAR_headers_0_4, (Optr)PSend24627);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24628 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24630 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24632 = new_Send((Optr)VAR_headers_0_4, SMB_add_, 1, (Optr)VAR_hdr_1_0);
    Array PThreadedCode24631 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_send1, (Optr)PSend24632, (Optr)&t_method_return);
    Block PBlock24629 = new_Block_with(PArray24630, empty_Array, PThreadedCode24631, 1, PSend24632);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend24633 = new_Send((Optr)PSend24628, SMB_do_, 1, (Optr)PBlock24629);
    // crlf. 
    Send PSend24638 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    String string_24639 = new_String(L"--");
    Constant string_24639_Const = new_Constant((Optr)string_24639);
    // ,. 
    Send PSend24637 = new_Send((Optr)PSend24638, SMB__append_, 1, (Optr)string_24639_Const);
    // ,. 
    Send PSend24636 = new_Send((Optr)PSend24637, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    // upToAll:. 
    Send PSend24635 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24636);
    Assign PAssign24634 = new_Assign((Optr)VAR_content_0_5, (Optr)PSend24635);
    // new. 
    Send PSend24641 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24640 = new_Assign((Optr)VAR_params_0_8, (Optr)PSend24641);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_24644 = new_String(L"content-disposition");
    Constant string_24644_Const = new_Constant((Optr)string_24644);
    String string_24647 = new_String(L"");
    Array PThreadedCode24646 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24647, (Optr)&t_block_return);
    Constant string_24647_Const = new_Constant((Optr)string_24647);
    Block PBlock24645 = new_Block_with(empty_Array, empty_Array, PThreadedCode24646, 1, string_24647_Const);
    // at:ifAbsent:. 
    Send PSend24643 = new_Send((Optr)VAR_headers_0_4, SMB_at_ifAbsent_, 2, (Optr)string_24644_Const, (Optr)PBlock24645);
    Assign PAssign24642 = new_Assign((Optr)VAR_disposition_0_6, (Optr)PSend24643);
    Symbol  SMB_name = new_Symbol(L"name");
    Symbol  SMB_filename = new_Symbol(L"filename");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_name_Const = new_Constant((Optr)SMB_name);
    Constant SMB_filename_Const = new_Constant((Optr)SMB_filename);
    // with:with:. 
    Send PSend24648 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_name_Const, (Optr)SMB_filename_Const);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Array PArray24650 = new_Array_with(1, (Optr)VAR_arg_1_0);
    Variable VAR_len_1_1 = new_Variable_named(L"len", 1);
    Variable VAR_val_1_2 = new_Variable_named(L"val", 1);
    Array PArray24651 = new_Array_with(2, (Optr)VAR_len_1_1, (Optr)VAR_val_1_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24655 = new_Send((Optr)VAR_arg_1_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24654 = new_Send((Optr)PSend24655, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign24653 = new_Assign((Optr)VAR_len_1_1, (Optr)PSend24654);
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    String string_24659 = new_String(L"=");
    Constant string_24659_Const = new_Constant((Optr)string_24659);
    // ,. 
    Send PSend24658 = new_Send((Optr)VAR_arg_1_0, SMB__append_, 1, (Optr)string_24659_Const);
    // findString:. 
    Send PSend24657 = new_Send((Optr)VAR_disposition_0_6, SMB_findString_, 1, (Optr)PSend24658);
    Assign PAssign24656 = new_Assign((Optr)VAR_index_0_7, (Optr)PSend24657);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24660 = new_Send((Optr)VAR_index_0_7, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // +. 
    Send PSend24666 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Character char_24669 = new_Character(L'"');
    Constant char_24669_Const = new_Constant((Optr)char_24669);
    // +. 
    Send PSend24670 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    // indexOf:startingAt:. 
    Send PSend24668 = new_Send((Optr)VAR_disposition_0_6, SMB_indexOf_startingAt_, 2, (Optr)char_24669_Const, (Optr)PSend24670);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend24667 = new_Send((Optr)PSend24668, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24665 = new_Send((Optr)VAR_disposition_0_6, SMB_copyFrom_to_, 2, (Optr)PSend24666, (Optr)PSend24667);
    Assign PAssign24664 = new_Assign((Optr)VAR_val_1_2, (Optr)PSend24665);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24671 = new_Send((Optr)VAR_params_0_8, SMB_at_put_, 2, (Optr)VAR_arg_1_0, (Optr)VAR_val_1_2);
    Array PThreadedCode24663 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign24664, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24666, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push1, (Optr)char_24669, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24670, (Optr)&t_send2, (Optr)PSend24668, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24667, (Optr)&t_send2, (Optr)PSend24665, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_val_1_2, (Optr)&t_send2, (Optr)PSend24671, (Optr)&t_block_return);
    Block PBlock24662 = new_Block_with(empty_Array, empty_Array, PThreadedCode24663, 2, PAssign24664, PSend24671);
    // ifTrue:. 
    Send PSend24661 = new_Send((Optr)PSend24660, SMB_ifTrue_, 1, (Optr)PBlock24662);
    Array PThreadedCode24652 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign24653, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send0, (Optr)PSend24655, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24654, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24656, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push1, (Optr)string_24659, (Optr)&t_send1, (Optr)PSend24658, (Optr)&t_send1, (Optr)PSend24657, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24660, (Optr)&t_send_ifTrue_, (Optr)PSend24661, (Optr)PBlock24662, (Optr)&t_method_return);
    Block PBlock24649 = new_Block_with(PArray24650, PArray24651, PThreadedCode24652, 3, PAssign24653, PAssign24656, PSend24661);
    // do:. 
    Send PSend24672 = new_Send((Optr)PSend24648, SMB_do_, 1, (Optr)PBlock24649);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend24673 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_value_value_, 3, (Optr)VAR_headers_0_4, (Optr)VAR_params_0_8, (Optr)VAR_content_0_5);
    Array PThreadedCode24618 = instantiate_Array_with(ThreadedCode_Class, 0, 95, (Optr)&t_push_variable, (Optr)VAR_skip_0_3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24619, (Optr)&t_send1, (Optr)PSend24620, (Optr)&t_send_ifFalse_, (Optr)PSend24621, (Optr)PBlock24622, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24626, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24627, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24628, (Optr)&t_push_closure, (Optr)PBlock24629, (Optr)&t_send1, (Optr)PSend24633, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24634, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24638, (Optr)&t_push1, (Optr)string_24639, (Optr)&t_send1, (Optr)PSend24637, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24636, (Optr)&t_send1, (Optr)PSend24635, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24640, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24641, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24642, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push1, (Optr)string_24644, (Optr)&t_push_closure, (Optr)PBlock24645, (Optr)&t_send2, (Optr)PSend24643, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_name, (Optr)&t_push1, (Optr)SMB_filename, (Optr)&t_send2, (Optr)PSend24648, (Optr)&t_push_closure, (Optr)PBlock24649, (Optr)&t_send1, (Optr)PSend24672, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_content_0_5, (Optr)&t_send3, (Optr)PSend24673, (Optr)&t_block_return);
    Block PBlock24617 = new_Block_with(empty_Array, empty_Array, PThreadedCode24618, 8, PSend24621, PAssign24626, PSend24633, PAssign24634, PAssign24640, PAssign24642, PSend24672, PSend24673);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24674 = new_Send((Optr)PBlock24607, SMB_whileFalse_, 1, (Optr)PBlock24617);
    Array PThreadedCode24603 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24604, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24605, (Optr)&t_send1, (Optr)PSend24606, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24607, (Optr)&t_push_closure, (Optr)PBlock24617, (Optr)&t_send1, (Optr)PSend24674, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24600 = new_Method_with(PArray24601, PArray24602, empty_Array, PThreadedCode24603, 3, PSend24606, PSend24674, self);
    
    MethodClosure MC_SMB_decodeMultipartForm_boundary_do_ = new_MethodClosure((Method)PMethod24600, HEADER(WebClient_Core_WebUtils_Class));
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