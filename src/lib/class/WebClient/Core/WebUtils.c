#include <lib/class/WebClient/Core/WebUtils.h>


Optr layout_WebClient_Core_WebUtils_Class_class;


static void init_class_SMB_readHeadersFrom_() {
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24513 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_headers_0_1 = new_Variable_named(L"headers", 0);
    Variable VAR_nextLine_0_2 = new_Variable_named(L"nextLine", 0);
    Variable VAR_existing_0_3 = new_Variable_named(L"existing", 0);
    Array PArray24514 = new_Array_with(3, (Optr)VAR_headers_0_1, (Optr)VAR_nextLine_0_2, (Optr)VAR_existing_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24517 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24516 = new_Assign((Optr)VAR_headers_0_1, (Optr)PSend24517);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24522 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24521 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24522);
    Assign PAssign24520 = new_Assign((Optr)VAR_nextLine_0_2, (Optr)PSend24521);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend24523 = new_Send((Optr)VAR_nextLine_0_2, SMB_isEmpty, 0);
    Array PThreadedCode24519 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24520, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24522, (Optr)&t_send1, (Optr)PSend24521, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24523, (Optr)&t_block_return);
    Block PBlock24518 = new_Block_with(empty_Array, empty_Array, PThreadedCode24519, 2, PAssign24520, PSend24523);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24526 = new_Send((Optr)VAR_nextLine_0_2, SMB_first, 0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend24527 = new_Send((Optr)PSend24526, SMB_isSeparator, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend24532 = new_Send((Optr)VAR_headers_0_1, SMB_last, 0);
    Assign PAssign24531 = new_Assign((Optr)VAR_existing_0_3, (Optr)PSend24532);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24533 = new_Send((Optr)VAR_existing_0_3, SMB_value, 0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24534 = new_Send((Optr)String_classReference, SMB_space, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24535 = new_Send((Optr)PSend24533, SMB__append_, 1, (Optr)PSend24534);
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    // withBlanksTrimmed. 
    Send PSend24536 = new_Send((Optr)VAR_nextLine_0_2, SMB_withBlanksTrimmed, 0);
    // ,. 
    Send PSend24537 = new_Send((Optr)PSend24535, SMB__append_, 1, (Optr)PSend24536);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24538 = new_Send((Optr)VAR_existing_0_3, SMB_value_, 1, (Optr)PSend24537);
    Array PThreadedCode24530 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign24531, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_send0, (Optr)PSend24532, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_send0, (Optr)PSend24533, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24534, (Optr)&t_send1, (Optr)PSend24535, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24536, (Optr)&t_send1, (Optr)PSend24537, (Optr)&t_send1, (Optr)PSend24538, (Optr)&t_block_return);
    Block PBlock24529 = new_Block_with(empty_Array, empty_Array, PThreadedCode24530, 2, PAssign24531, PSend24538);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend24541 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Character char_444 = new_Character(L':');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // copyUpTo:. 
    Send PSend24542 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyUpTo_, 1, (Optr)char_444_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend24543 = new_Send((Optr)PSend24542, SMB_asLowercase, 0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    // copyAfter:. 
    Send PSend24544 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyAfter_, 1, (Optr)char_444_Const);
    // withBlanksTrimmed. 
    Send PSend24545 = new_Send((Optr)PSend24544, SMB_withBlanksTrimmed, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend24546 = new_Send((Optr)PSend24541, SMB_key_value_, 2, (Optr)PSend24543, (Optr)PSend24545);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24547 = new_Send((Optr)VAR_headers_0_1, SMB_add_, 1, (Optr)PSend24546);
    Array PThreadedCode24540 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend24541, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24542, (Optr)&t_send0, (Optr)PSend24543, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24544, (Optr)&t_send0, (Optr)PSend24545, (Optr)&t_send2, (Optr)PSend24546, (Optr)&t_send1, (Optr)PSend24547, (Optr)&t_block_return);
    Block PBlock24539 = new_Block_with(empty_Array, empty_Array, PThreadedCode24540, 1, PSend24547);
    // ifTrue:ifFalse:. 
    Send PSend24528 = new_Send((Optr)PSend24527, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24529, (Optr)PBlock24539);
    Array PThreadedCode24525 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24526, (Optr)&t_send0, (Optr)PSend24527, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24528, (Optr)PBlock24529, (Optr)PBlock24539, (Optr)&t_block_return);
    Block PBlock24524 = new_Block_with(empty_Array, empty_Array, PThreadedCode24525, 1, PSend24528);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24548 = new_Send((Optr)PBlock24518, SMB_whileFalse_, 1, (Optr)PBlock24524);
    Array PThreadedCode24515 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign24516, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24517, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24518, (Optr)&t_push_closure, (Optr)PBlock24524, (Optr)&t_send1, (Optr)PSend24548, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_method_return);
    Method PMethod24512 = new_Method_with(PArray24513, PArray24514, empty_Array, PThreadedCode24515, 3, PAssign24516, PSend24548, VAR_headers_0_1);
    
    MethodClosure MC_SMB_readHeadersFrom_ = new_MethodClosure((Method)PMethod24512, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_readHeadersFrom_, MC_SMB_readHeadersFrom_);
}


static void init_class_SMB_decodeUrlEncodedForm_do_() {
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24550 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_args_0_2 = new_Variable_named(L"args", 0);
    Variable VAR_keyval_0_3 = new_Variable_named(L"keyval", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_key_0_5 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_6 = new_Variable_named(L"value", 0);
    Array PArray24551 = new_Array_with(5, (Optr)VAR_args_0_2, (Optr)VAR_keyval_0_3, (Optr)VAR_index_0_4, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24554 = new_Send((Optr)VAR_aString_0_0, SMB_readStream, 0);
    Assign PAssign24553 = new_Assign((Optr)VAR_args_0_2, (Optr)PSend24554);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24557 = new_Send((Optr)VAR_args_0_2, SMB_atEnd, 0);
    Array PThreadedCode24556 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_send0, (Optr)PSend24557, (Optr)&t_block_return);
    Block PBlock24555 = new_Block_with(empty_Array, empty_Array, PThreadedCode24556, 1, PSend24557);
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Character char_24562 = new_Character(L'&');
    Constant char_24562_Const = new_Constant((Optr)char_24562);
    // upTo:. 
    Send PSend24561 = new_Send((Optr)VAR_args_0_2, SMB_upTo_, 1, (Optr)char_24562_Const);
    Assign PAssign24560 = new_Assign((Optr)VAR_keyval_0_3, (Optr)PSend24561);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_9881 = new_Character(L'=');
    Constant char_9881_Const = new_Constant((Optr)char_9881);
    // indexOf:. 
    Send PSend24564 = new_Send((Optr)VAR_keyval_0_3, SMB_indexOf_, 1, (Optr)char_9881_Const);
    Assign PAssign24563 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend24564);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend24565 = new_Send((Optr)PAssign24563, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign24569 = new_Assign((Optr)VAR_key_0_5, (Optr)VAR_keyval_0_3);
    String string_24571 = new_String(L"");
    Constant string_24571_Const = new_Constant((Optr)string_24571);
    Assign PAssign24570 = new_Assign((Optr)VAR_value_0_6, (Optr)string_24571_Const);
    Array PThreadedCode24568 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24569, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24570, (Optr)&t_push1, (Optr)string_24571, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24567 = new_Block_with(empty_Array, empty_Array, PThreadedCode24568, 2, PAssign24569, PAssign24570);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24576 = new_Send((Optr)VAR_index_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24575 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend24576);
    Assign PAssign24574 = new_Assign((Optr)VAR_key_0_5, (Optr)PSend24575);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24579 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24580 = new_Send((Optr)VAR_keyval_0_3, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend24578 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)PSend24579, (Optr)PSend24580);
    Assign PAssign24577 = new_Assign((Optr)VAR_value_0_6, (Optr)PSend24578);
    Array PThreadedCode24573 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign24574, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24576, (Optr)&t_send2, (Optr)PSend24575, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24577, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24579, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_send0, (Optr)PSend24580, (Optr)&t_send2, (Optr)PSend24578, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24572 = new_Block_with(empty_Array, empty_Array, PThreadedCode24573, 2, PAssign24574, PAssign24577);
    // ifTrue:ifFalse:. 
    Send PSend24566 = new_Send((Optr)PSend24565, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24567, (Optr)PBlock24572);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend24581 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_value_, 2, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Array PThreadedCode24559 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign24560, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_push1, (Optr)char_24562, (Optr)&t_send1, (Optr)PSend24561, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24563, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push1, (Optr)char_9881, (Optr)&t_send1, (Optr)PSend24564, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24565, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24566, (Optr)PBlock24567, (Optr)PBlock24572, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_key_0_5, (Optr)&t_push_variable, (Optr)VAR_value_0_6, (Optr)&t_send2, (Optr)PSend24581, (Optr)&t_block_return);
    Block PBlock24558 = new_Block_with(empty_Array, empty_Array, PThreadedCode24559, 3, PAssign24560, PSend24566, PSend24581);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24582 = new_Send((Optr)PBlock24555, SMB_whileFalse_, 1, (Optr)PBlock24558);
    Array PThreadedCode24552 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign24553, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend24554, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24555, (Optr)&t_push_closure, (Optr)PBlock24558, (Optr)&t_send1, (Optr)PSend24582, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24549 = new_Method_with(PArray24550, PArray24551, empty_Array, PThreadedCode24552, 3, PAssign24553, PSend24582, self);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_do_ = new_MethodClosure((Method)PMethod24549, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_do_, MC_SMB_decodeUrlEncodedForm_do_);
}


static void init_class_SMB_decodeUrlEncodedForm_multipleValues_() {
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBool_0_1 = new_Variable_named(L"aBool", 0);
    Array PArray24584 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBool_0_1);
    Variable VAR_fields_0_2 = new_Variable_named(L"fields", 0);
    Array PArray24585 = new_Array_with(1, (Optr)VAR_fields_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24588 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24587 = new_Assign((Optr)VAR_fields_0_2, (Optr)PSend24588);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray24590 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_24597 = new_String(L"");
    Array PThreadedCode24596 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24597, (Optr)&t_block_return);
    Constant string_24597_Const = new_Constant((Optr)string_24597);
    Block PBlock24595 = new_Block_with(empty_Array, empty_Array, PThreadedCode24596, 1, string_24597_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend24598 = new_Send((Optr)VAR_fields_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_key_1_0, (Optr)PBlock24595);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24599 = new_Send((Optr)PSend24598, SMB__append_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24600 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)PSend24599);
    Array PThreadedCode24594 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock24595, (Optr)&t_send2, (Optr)PSend24598, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend24599, (Optr)&t_send2, (Optr)PSend24600, (Optr)&t_block_return);
    Block PBlock24593 = new_Block_with(empty_Array, empty_Array, PThreadedCode24594, 1, PSend24600);
    // at:put:. 
    Send PSend24603 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode24602 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend24603, (Optr)&t_block_return);
    Block PBlock24601 = new_Block_with(empty_Array, empty_Array, PThreadedCode24602, 1, PSend24603);
    // ifTrue:ifFalse:. 
    Send PSend24592 = new_Send((Optr)VAR_aBool_0_1, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24593, (Optr)PBlock24601);
    Array PThreadedCode24591 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBool_0_1, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24592, (Optr)PBlock24593, (Optr)PBlock24601, (Optr)&t_method_return);
    Block PBlock24589 = new_Block_with(PArray24590, empty_Array, PThreadedCode24591, 1, PSend24592);
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    // decodeUrlEncodedForm:do:. 
    Send PSend24604 = new_Send((Optr)self, SMB_decodeUrlEncodedForm_do_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock24589);
    Array PThreadedCode24586 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24587, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24588, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock24589, (Optr)&t_send2, (Optr)PSend24604, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_method_return);
    Method PMethod24583 = new_Method_with(PArray24584, PArray24585, empty_Array, PThreadedCode24586, 3, PAssign24587, PSend24604, VAR_fields_0_2);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_multipleValues_ = new_MethodClosure((Method)PMethod24583, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_multipleValues_, MC_SMB_decodeUrlEncodedForm_multipleValues_);
}


static void init_class_SMB_decodeMultipartForm_boundary_do_() {
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_boundary_0_1 = new_Variable_named(L"boundary", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24606 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_boundary_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_skip_0_3 = new_Variable_named(L"skip", 0);
    Variable VAR_headers_0_4 = new_Variable_named(L"headers", 0);
    Variable VAR_content_0_5 = new_Variable_named(L"content", 0);
    Variable VAR_disposition_0_6 = new_Variable_named(L"disposition", 0);
    Variable VAR_index_0_7 = new_Variable_named(L"index", 0);
    Variable VAR_params_0_8 = new_Variable_named(L"params", 0);
    Array PArray24607 = new_Array_with(6, (Optr)VAR_skip_0_3, (Optr)VAR_headers_0_4, (Optr)VAR_content_0_5, (Optr)VAR_disposition_0_6, (Optr)VAR_index_0_7, (Optr)VAR_params_0_8);
    String string_24609 = new_String(L"--");
    Constant string_24609_Const = new_Constant((Optr)string_24609);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24610 = new_Send((Optr)string_24609_Const, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend24611 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24610);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24614 = new_Send((Optr)VAR_aStream_0_0, SMB_atEnd, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // next:. 
    Send PSend24618 = new_Send((Optr)VAR_aStream_0_0, SMB_next_, 1, (Optr)int_2_Const);
    Assign PAssign24617 = new_Assign((Optr)VAR_skip_0_3, (Optr)PSend24618);
    String string_24619 = new_String(L"--");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24619_Const = new_Constant((Optr)string_24619);
    // =. 
    Send PSend24620 = new_Send((Optr)PAssign24617, SMB__equals_, 1, (Optr)string_24619_Const);
    Array PThreadedCode24616 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign24617, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24618, (Optr)&t_assign, (Optr)&t_push1, (Optr)string_24619, (Optr)&t_send1, (Optr)PSend24620, (Optr)&t_block_return);
    Block PBlock24615 = new_Block_with(empty_Array, empty_Array, PThreadedCode24616, 1, PSend24620);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend24621 = new_Send((Optr)PSend24614, SMB_or_, 1, (Optr)PBlock24615);
    Array PThreadedCode24613 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24614, (Optr)&t_push_closure, (Optr)PBlock24615, (Optr)&t_send1, (Optr)PSend24621, (Optr)&t_block_return);
    Block PBlock24612 = new_Block_with(empty_Array, empty_Array, PThreadedCode24613, 1, PSend24621);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24624 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // =. 
    Send PSend24625 = new_Send((Optr)VAR_skip_0_3, SMB__equals_, 1, (Optr)PSend24624);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24629 = new_String(L"Error decoding multipart/form-data fields");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_24629_Const = new_Constant((Optr)string_24629);
    // error:. 
    Send PSend24630 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_24629_Const);
    Array PThreadedCode24628 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24629, (Optr)&t_send1, (Optr)PSend24630, (Optr)&t_block_return);
    Block PBlock24627 = new_Block_with(empty_Array, empty_Array, PThreadedCode24628, 1, PSend24630);
    // ifFalse:. 
    Send PSend24626 = new_Send((Optr)PSend24625, SMB_ifFalse_, 1, (Optr)PBlock24627);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24632 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24631 = new_Assign((Optr)VAR_headers_0_4, (Optr)PSend24632);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24633 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24635 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24637 = new_Send((Optr)VAR_headers_0_4, SMB_add_, 1, (Optr)VAR_hdr_1_0);
    Array PThreadedCode24636 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_send1, (Optr)PSend24637, (Optr)&t_method_return);
    Block PBlock24634 = new_Block_with(PArray24635, empty_Array, PThreadedCode24636, 1, PSend24637);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend24638 = new_Send((Optr)PSend24633, SMB_do_, 1, (Optr)PBlock24634);
    // crlf. 
    Send PSend24643 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    String string_24644 = new_String(L"--");
    Constant string_24644_Const = new_Constant((Optr)string_24644);
    // ,. 
    Send PSend24642 = new_Send((Optr)PSend24643, SMB__append_, 1, (Optr)string_24644_Const);
    // ,. 
    Send PSend24641 = new_Send((Optr)PSend24642, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    // upToAll:. 
    Send PSend24640 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24641);
    Assign PAssign24639 = new_Assign((Optr)VAR_content_0_5, (Optr)PSend24640);
    // new. 
    Send PSend24646 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24645 = new_Assign((Optr)VAR_params_0_8, (Optr)PSend24646);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_24649 = new_String(L"content-disposition");
    Constant string_24649_Const = new_Constant((Optr)string_24649);
    String string_24652 = new_String(L"");
    Array PThreadedCode24651 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24652, (Optr)&t_block_return);
    Constant string_24652_Const = new_Constant((Optr)string_24652);
    Block PBlock24650 = new_Block_with(empty_Array, empty_Array, PThreadedCode24651, 1, string_24652_Const);
    // at:ifAbsent:. 
    Send PSend24648 = new_Send((Optr)VAR_headers_0_4, SMB_at_ifAbsent_, 2, (Optr)string_24649_Const, (Optr)PBlock24650);
    Assign PAssign24647 = new_Assign((Optr)VAR_disposition_0_6, (Optr)PSend24648);
    Symbol  SMB_name = new_Symbol(L"name");
    Symbol  SMB_filename = new_Symbol(L"filename");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_name_Const = new_Constant((Optr)SMB_name);
    Constant SMB_filename_Const = new_Constant((Optr)SMB_filename);
    // with:with:. 
    Send PSend24653 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_name_Const, (Optr)SMB_filename_Const);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Array PArray24655 = new_Array_with(1, (Optr)VAR_arg_1_0);
    Variable VAR_len_1_1 = new_Variable_named(L"len", 1);
    Variable VAR_val_1_2 = new_Variable_named(L"val", 1);
    Array PArray24656 = new_Array_with(2, (Optr)VAR_len_1_1, (Optr)VAR_val_1_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24660 = new_Send((Optr)VAR_arg_1_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24659 = new_Send((Optr)PSend24660, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign24658 = new_Assign((Optr)VAR_len_1_1, (Optr)PSend24659);
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    String string_24664 = new_String(L"=");
    Constant string_24664_Const = new_Constant((Optr)string_24664);
    // ,. 
    Send PSend24663 = new_Send((Optr)VAR_arg_1_0, SMB__append_, 1, (Optr)string_24664_Const);
    // findString:. 
    Send PSend24662 = new_Send((Optr)VAR_disposition_0_6, SMB_findString_, 1, (Optr)PSend24663);
    Assign PAssign24661 = new_Assign((Optr)VAR_index_0_7, (Optr)PSend24662);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24665 = new_Send((Optr)VAR_index_0_7, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // +. 
    Send PSend24671 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Character char_24674 = new_Character(L'"');
    Constant char_24674_Const = new_Constant((Optr)char_24674);
    // +. 
    Send PSend24675 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    // indexOf:startingAt:. 
    Send PSend24673 = new_Send((Optr)VAR_disposition_0_6, SMB_indexOf_startingAt_, 2, (Optr)char_24674_Const, (Optr)PSend24675);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend24672 = new_Send((Optr)PSend24673, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24670 = new_Send((Optr)VAR_disposition_0_6, SMB_copyFrom_to_, 2, (Optr)PSend24671, (Optr)PSend24672);
    Assign PAssign24669 = new_Assign((Optr)VAR_val_1_2, (Optr)PSend24670);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24676 = new_Send((Optr)VAR_params_0_8, SMB_at_put_, 2, (Optr)VAR_arg_1_0, (Optr)VAR_val_1_2);
    Array PThreadedCode24668 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign24669, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24671, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push1, (Optr)char_24674, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24675, (Optr)&t_send2, (Optr)PSend24673, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24672, (Optr)&t_send2, (Optr)PSend24670, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_val_1_2, (Optr)&t_send2, (Optr)PSend24676, (Optr)&t_block_return);
    Block PBlock24667 = new_Block_with(empty_Array, empty_Array, PThreadedCode24668, 2, PAssign24669, PSend24676);
    // ifTrue:. 
    Send PSend24666 = new_Send((Optr)PSend24665, SMB_ifTrue_, 1, (Optr)PBlock24667);
    Array PThreadedCode24657 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign24658, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send0, (Optr)PSend24660, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24659, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24661, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push1, (Optr)string_24664, (Optr)&t_send1, (Optr)PSend24663, (Optr)&t_send1, (Optr)PSend24662, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24665, (Optr)&t_send_ifTrue_, (Optr)PSend24666, (Optr)PBlock24667, (Optr)&t_method_return);
    Block PBlock24654 = new_Block_with(PArray24655, PArray24656, PThreadedCode24657, 3, PAssign24658, PAssign24661, PSend24666);
    // do:. 
    Send PSend24677 = new_Send((Optr)PSend24653, SMB_do_, 1, (Optr)PBlock24654);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend24678 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_value_value_, 3, (Optr)VAR_headers_0_4, (Optr)VAR_params_0_8, (Optr)VAR_content_0_5);
    Array PThreadedCode24623 = instantiate_Array_with(ThreadedCode_Class, 0, 95, (Optr)&t_push_variable, (Optr)VAR_skip_0_3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24624, (Optr)&t_send1, (Optr)PSend24625, (Optr)&t_send_ifFalse_, (Optr)PSend24626, (Optr)PBlock24627, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24631, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24632, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24633, (Optr)&t_push_closure, (Optr)PBlock24634, (Optr)&t_send1, (Optr)PSend24638, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24639, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24643, (Optr)&t_push1, (Optr)string_24644, (Optr)&t_send1, (Optr)PSend24642, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24641, (Optr)&t_send1, (Optr)PSend24640, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24645, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24646, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24647, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push1, (Optr)string_24649, (Optr)&t_push_closure, (Optr)PBlock24650, (Optr)&t_send2, (Optr)PSend24648, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_name, (Optr)&t_push1, (Optr)SMB_filename, (Optr)&t_send2, (Optr)PSend24653, (Optr)&t_push_closure, (Optr)PBlock24654, (Optr)&t_send1, (Optr)PSend24677, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_content_0_5, (Optr)&t_send3, (Optr)PSend24678, (Optr)&t_block_return);
    Block PBlock24622 = new_Block_with(empty_Array, empty_Array, PThreadedCode24623, 8, PSend24626, PAssign24631, PSend24638, PAssign24639, PAssign24645, PAssign24647, PSend24677, PSend24678);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24679 = new_Send((Optr)PBlock24612, SMB_whileFalse_, 1, (Optr)PBlock24622);
    Array PThreadedCode24608 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24609, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24610, (Optr)&t_send1, (Optr)PSend24611, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24612, (Optr)&t_push_closure, (Optr)PBlock24622, (Optr)&t_send1, (Optr)PSend24679, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24605 = new_Method_with(PArray24606, PArray24607, empty_Array, PThreadedCode24608, 3, PSend24611, PSend24679, self);
    
    MethodClosure MC_SMB_decodeMultipartForm_boundary_do_ = new_MethodClosure((Method)PMethod24605, HEADER(WebClient_Core_WebUtils_Class));
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