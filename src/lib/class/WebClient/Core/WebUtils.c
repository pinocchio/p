#include <lib/class/WebClient/Core/WebUtils.h>


Optr layout_WebClient_Core_WebUtils_Class_class;


static void init_class_SMB_readHeadersFrom_() {
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24610 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_headers_0_1 = new_Variable_named(L"headers", 0);
    Variable VAR_nextLine_0_2 = new_Variable_named(L"nextLine", 0);
    Variable VAR_existing_0_3 = new_Variable_named(L"existing", 0);
    Array PArray24611 = new_Array_with(3, (Optr)VAR_headers_0_1, (Optr)VAR_nextLine_0_2, (Optr)VAR_existing_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24614 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24613 = new_Assign((Optr)VAR_headers_0_1, (Optr)PSend24614);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24619 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24618 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24619);
    Assign PAssign24617 = new_Assign((Optr)VAR_nextLine_0_2, (Optr)PSend24618);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend24620 = new_Send((Optr)VAR_nextLine_0_2, SMB_isEmpty, 0);
    Array PThreadedCode24616 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24617, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24619, (Optr)&t_send1, (Optr)PSend24618, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24620, (Optr)&t_block_return);
    Block PBlock24615 = new_Block_with(empty_Array, empty_Array, PThreadedCode24616, 2, PAssign24617, PSend24620);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24623 = new_Send((Optr)VAR_nextLine_0_2, SMB_first, 0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend24624 = new_Send((Optr)PSend24623, SMB_isSeparator, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend24629 = new_Send((Optr)VAR_headers_0_1, SMB_last, 0);
    Assign PAssign24628 = new_Assign((Optr)VAR_existing_0_3, (Optr)PSend24629);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24630 = new_Send((Optr)VAR_existing_0_3, SMB_value, 0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24631 = new_Send((Optr)String_classReference, SMB_space, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24632 = new_Send((Optr)PSend24630, SMB__append_, 1, (Optr)PSend24631);
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    // withBlanksTrimmed. 
    Send PSend24633 = new_Send((Optr)VAR_nextLine_0_2, SMB_withBlanksTrimmed, 0);
    // ,. 
    Send PSend24634 = new_Send((Optr)PSend24632, SMB__append_, 1, (Optr)PSend24633);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24635 = new_Send((Optr)VAR_existing_0_3, SMB_value_, 1, (Optr)PSend24634);
    Array PThreadedCode24627 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign24628, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_send0, (Optr)PSend24629, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_send0, (Optr)PSend24630, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24631, (Optr)&t_send1, (Optr)PSend24632, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24633, (Optr)&t_send1, (Optr)PSend24634, (Optr)&t_send1, (Optr)PSend24635, (Optr)&t_block_return);
    Block PBlock24626 = new_Block_with(empty_Array, empty_Array, PThreadedCode24627, 2, PAssign24628, PSend24635);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend24638 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Character char_444 = new_Character(L':');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // copyUpTo:. 
    Send PSend24639 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyUpTo_, 1, (Optr)char_444_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend24640 = new_Send((Optr)PSend24639, SMB_asLowercase, 0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    // copyAfter:. 
    Send PSend24641 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyAfter_, 1, (Optr)char_444_Const);
    // withBlanksTrimmed. 
    Send PSend24642 = new_Send((Optr)PSend24641, SMB_withBlanksTrimmed, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend24643 = new_Send((Optr)PSend24638, SMB_key_value_, 2, (Optr)PSend24640, (Optr)PSend24642);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24644 = new_Send((Optr)VAR_headers_0_1, SMB_add_, 1, (Optr)PSend24643);
    Array PThreadedCode24637 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend24638, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24639, (Optr)&t_send0, (Optr)PSend24640, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24641, (Optr)&t_send0, (Optr)PSend24642, (Optr)&t_send2, (Optr)PSend24643, (Optr)&t_send1, (Optr)PSend24644, (Optr)&t_block_return);
    Block PBlock24636 = new_Block_with(empty_Array, empty_Array, PThreadedCode24637, 1, PSend24644);
    // ifTrue:ifFalse:. 
    Send PSend24625 = new_Send((Optr)PSend24624, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24626, (Optr)PBlock24636);
    Array PThreadedCode24622 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24623, (Optr)&t_send0, (Optr)PSend24624, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24625, (Optr)PBlock24626, (Optr)PBlock24636, (Optr)&t_block_return);
    Block PBlock24621 = new_Block_with(empty_Array, empty_Array, PThreadedCode24622, 1, PSend24625);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24645 = new_Send((Optr)PBlock24615, SMB_whileFalse_, 1, (Optr)PBlock24621);
    Array PThreadedCode24612 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign24613, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24614, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24615, (Optr)&t_push_closure, (Optr)PBlock24621, (Optr)&t_send1, (Optr)PSend24645, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_method_return);
    Method PMethod24609 = new_Method_with(PArray24610, PArray24611, empty_Array, PThreadedCode24612, 3, PAssign24613, PSend24645, VAR_headers_0_1);
    
    MethodClosure MC_SMB_readHeadersFrom_ = new_MethodClosure((Method)PMethod24609, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_readHeadersFrom_, MC_SMB_readHeadersFrom_);
}


static void init_class_SMB_decodeUrlEncodedForm_do_() {
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24647 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_args_0_2 = new_Variable_named(L"args", 0);
    Variable VAR_keyval_0_3 = new_Variable_named(L"keyval", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_key_0_5 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_6 = new_Variable_named(L"value", 0);
    Array PArray24648 = new_Array_with(5, (Optr)VAR_args_0_2, (Optr)VAR_keyval_0_3, (Optr)VAR_index_0_4, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24651 = new_Send((Optr)VAR_aString_0_0, SMB_readStream, 0);
    Assign PAssign24650 = new_Assign((Optr)VAR_args_0_2, (Optr)PSend24651);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24654 = new_Send((Optr)VAR_args_0_2, SMB_atEnd, 0);
    Array PThreadedCode24653 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_send0, (Optr)PSend24654, (Optr)&t_block_return);
    Block PBlock24652 = new_Block_with(empty_Array, empty_Array, PThreadedCode24653, 1, PSend24654);
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Character char_24659 = new_Character(L'&');
    Constant char_24659_Const = new_Constant((Optr)char_24659);
    // upTo:. 
    Send PSend24658 = new_Send((Optr)VAR_args_0_2, SMB_upTo_, 1, (Optr)char_24659_Const);
    Assign PAssign24657 = new_Assign((Optr)VAR_keyval_0_3, (Optr)PSend24658);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_9908 = new_Character(L'=');
    Constant char_9908_Const = new_Constant((Optr)char_9908);
    // indexOf:. 
    Send PSend24661 = new_Send((Optr)VAR_keyval_0_3, SMB_indexOf_, 1, (Optr)char_9908_Const);
    Assign PAssign24660 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend24661);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend24662 = new_Send((Optr)PAssign24660, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign24666 = new_Assign((Optr)VAR_key_0_5, (Optr)VAR_keyval_0_3);
    String string_24668 = new_String(L"");
    Constant string_24668_Const = new_Constant((Optr)string_24668);
    Assign PAssign24667 = new_Assign((Optr)VAR_value_0_6, (Optr)string_24668_Const);
    Array PThreadedCode24665 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24666, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24667, (Optr)&t_push1, (Optr)string_24668, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24664 = new_Block_with(empty_Array, empty_Array, PThreadedCode24665, 2, PAssign24666, PAssign24667);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24673 = new_Send((Optr)VAR_index_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24672 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend24673);
    Assign PAssign24671 = new_Assign((Optr)VAR_key_0_5, (Optr)PSend24672);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24676 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24677 = new_Send((Optr)VAR_keyval_0_3, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend24675 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)PSend24676, (Optr)PSend24677);
    Assign PAssign24674 = new_Assign((Optr)VAR_value_0_6, (Optr)PSend24675);
    Array PThreadedCode24670 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign24671, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24673, (Optr)&t_send2, (Optr)PSend24672, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24674, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24676, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_send0, (Optr)PSend24677, (Optr)&t_send2, (Optr)PSend24675, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24669 = new_Block_with(empty_Array, empty_Array, PThreadedCode24670, 2, PAssign24671, PAssign24674);
    // ifTrue:ifFalse:. 
    Send PSend24663 = new_Send((Optr)PSend24662, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24664, (Optr)PBlock24669);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend24678 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_value_, 2, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Array PThreadedCode24656 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign24657, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_push1, (Optr)char_24659, (Optr)&t_send1, (Optr)PSend24658, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24660, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push1, (Optr)char_9908, (Optr)&t_send1, (Optr)PSend24661, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24662, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24663, (Optr)PBlock24664, (Optr)PBlock24669, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_key_0_5, (Optr)&t_push_variable, (Optr)VAR_value_0_6, (Optr)&t_send2, (Optr)PSend24678, (Optr)&t_block_return);
    Block PBlock24655 = new_Block_with(empty_Array, empty_Array, PThreadedCode24656, 3, PAssign24657, PSend24663, PSend24678);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24679 = new_Send((Optr)PBlock24652, SMB_whileFalse_, 1, (Optr)PBlock24655);
    Array PThreadedCode24649 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign24650, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend24651, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24652, (Optr)&t_push_closure, (Optr)PBlock24655, (Optr)&t_send1, (Optr)PSend24679, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24646 = new_Method_with(PArray24647, PArray24648, empty_Array, PThreadedCode24649, 3, PAssign24650, PSend24679, self);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_do_ = new_MethodClosure((Method)PMethod24646, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_do_, MC_SMB_decodeUrlEncodedForm_do_);
}


static void init_class_SMB_decodeUrlEncodedForm_multipleValues_() {
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBool_0_1 = new_Variable_named(L"aBool", 0);
    Array PArray24681 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBool_0_1);
    Variable VAR_fields_0_2 = new_Variable_named(L"fields", 0);
    Array PArray24682 = new_Array_with(1, (Optr)VAR_fields_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24685 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24684 = new_Assign((Optr)VAR_fields_0_2, (Optr)PSend24685);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray24687 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_24694 = new_String(L"");
    Array PThreadedCode24693 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24694, (Optr)&t_block_return);
    Constant string_24694_Const = new_Constant((Optr)string_24694);
    Block PBlock24692 = new_Block_with(empty_Array, empty_Array, PThreadedCode24693, 1, string_24694_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend24695 = new_Send((Optr)VAR_fields_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_key_1_0, (Optr)PBlock24692);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24696 = new_Send((Optr)PSend24695, SMB__append_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24697 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)PSend24696);
    Array PThreadedCode24691 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock24692, (Optr)&t_send2, (Optr)PSend24695, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend24696, (Optr)&t_send2, (Optr)PSend24697, (Optr)&t_block_return);
    Block PBlock24690 = new_Block_with(empty_Array, empty_Array, PThreadedCode24691, 1, PSend24697);
    // at:put:. 
    Send PSend24700 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode24699 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend24700, (Optr)&t_block_return);
    Block PBlock24698 = new_Block_with(empty_Array, empty_Array, PThreadedCode24699, 1, PSend24700);
    // ifTrue:ifFalse:. 
    Send PSend24689 = new_Send((Optr)VAR_aBool_0_1, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24690, (Optr)PBlock24698);
    Array PThreadedCode24688 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBool_0_1, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24689, (Optr)PBlock24690, (Optr)PBlock24698, (Optr)&t_method_return);
    Block PBlock24686 = new_Block_with(PArray24687, empty_Array, PThreadedCode24688, 1, PSend24689);
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    // decodeUrlEncodedForm:do:. 
    Send PSend24701 = new_Send((Optr)self, SMB_decodeUrlEncodedForm_do_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock24686);
    Array PThreadedCode24683 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24684, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24685, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock24686, (Optr)&t_send2, (Optr)PSend24701, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_method_return);
    Method PMethod24680 = new_Method_with(PArray24681, PArray24682, empty_Array, PThreadedCode24683, 3, PAssign24684, PSend24701, VAR_fields_0_2);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_multipleValues_ = new_MethodClosure((Method)PMethod24680, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_multipleValues_, MC_SMB_decodeUrlEncodedForm_multipleValues_);
}


static void init_class_SMB_decodeMultipartForm_boundary_do_() {
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_boundary_0_1 = new_Variable_named(L"boundary", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24703 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_boundary_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_skip_0_3 = new_Variable_named(L"skip", 0);
    Variable VAR_headers_0_4 = new_Variable_named(L"headers", 0);
    Variable VAR_content_0_5 = new_Variable_named(L"content", 0);
    Variable VAR_disposition_0_6 = new_Variable_named(L"disposition", 0);
    Variable VAR_index_0_7 = new_Variable_named(L"index", 0);
    Variable VAR_params_0_8 = new_Variable_named(L"params", 0);
    Array PArray24704 = new_Array_with(6, (Optr)VAR_skip_0_3, (Optr)VAR_headers_0_4, (Optr)VAR_content_0_5, (Optr)VAR_disposition_0_6, (Optr)VAR_index_0_7, (Optr)VAR_params_0_8);
    String string_24706 = new_String(L"--");
    Constant string_24706_Const = new_Constant((Optr)string_24706);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24707 = new_Send((Optr)string_24706_Const, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend24708 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24707);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24711 = new_Send((Optr)VAR_aStream_0_0, SMB_atEnd, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // next:. 
    Send PSend24715 = new_Send((Optr)VAR_aStream_0_0, SMB_next_, 1, (Optr)int_2_Const);
    Assign PAssign24714 = new_Assign((Optr)VAR_skip_0_3, (Optr)PSend24715);
    String string_24716 = new_String(L"--");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24716_Const = new_Constant((Optr)string_24716);
    // =. 
    Send PSend24717 = new_Send((Optr)PAssign24714, SMB__equals_, 1, (Optr)string_24716_Const);
    Array PThreadedCode24713 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign24714, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24715, (Optr)&t_assign, (Optr)&t_push1, (Optr)string_24716, (Optr)&t_send1, (Optr)PSend24717, (Optr)&t_block_return);
    Block PBlock24712 = new_Block_with(empty_Array, empty_Array, PThreadedCode24713, 1, PSend24717);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend24718 = new_Send((Optr)PSend24711, SMB_or_, 1, (Optr)PBlock24712);
    Array PThreadedCode24710 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24711, (Optr)&t_push_closure, (Optr)PBlock24712, (Optr)&t_send1, (Optr)PSend24718, (Optr)&t_block_return);
    Block PBlock24709 = new_Block_with(empty_Array, empty_Array, PThreadedCode24710, 1, PSend24718);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24721 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // =. 
    Send PSend24722 = new_Send((Optr)VAR_skip_0_3, SMB__equals_, 1, (Optr)PSend24721);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24726 = new_String(L"Error decoding multipart/form-data fields");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_24726_Const = new_Constant((Optr)string_24726);
    // error:. 
    Send PSend24727 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_24726_Const);
    Array PThreadedCode24725 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24726, (Optr)&t_send1, (Optr)PSend24727, (Optr)&t_block_return);
    Block PBlock24724 = new_Block_with(empty_Array, empty_Array, PThreadedCode24725, 1, PSend24727);
    // ifFalse:. 
    Send PSend24723 = new_Send((Optr)PSend24722, SMB_ifFalse_, 1, (Optr)PBlock24724);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24729 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24728 = new_Assign((Optr)VAR_headers_0_4, (Optr)PSend24729);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24730 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24732 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24734 = new_Send((Optr)VAR_headers_0_4, SMB_add_, 1, (Optr)VAR_hdr_1_0);
    Array PThreadedCode24733 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_send1, (Optr)PSend24734, (Optr)&t_method_return);
    Block PBlock24731 = new_Block_with(PArray24732, empty_Array, PThreadedCode24733, 1, PSend24734);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend24735 = new_Send((Optr)PSend24730, SMB_do_, 1, (Optr)PBlock24731);
    // crlf. 
    Send PSend24740 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    String string_24741 = new_String(L"--");
    Constant string_24741_Const = new_Constant((Optr)string_24741);
    // ,. 
    Send PSend24739 = new_Send((Optr)PSend24740, SMB__append_, 1, (Optr)string_24741_Const);
    // ,. 
    Send PSend24738 = new_Send((Optr)PSend24739, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    // upToAll:. 
    Send PSend24737 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24738);
    Assign PAssign24736 = new_Assign((Optr)VAR_content_0_5, (Optr)PSend24737);
    // new. 
    Send PSend24743 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24742 = new_Assign((Optr)VAR_params_0_8, (Optr)PSend24743);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_24746 = new_String(L"content-disposition");
    Constant string_24746_Const = new_Constant((Optr)string_24746);
    String string_24749 = new_String(L"");
    Array PThreadedCode24748 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24749, (Optr)&t_block_return);
    Constant string_24749_Const = new_Constant((Optr)string_24749);
    Block PBlock24747 = new_Block_with(empty_Array, empty_Array, PThreadedCode24748, 1, string_24749_Const);
    // at:ifAbsent:. 
    Send PSend24745 = new_Send((Optr)VAR_headers_0_4, SMB_at_ifAbsent_, 2, (Optr)string_24746_Const, (Optr)PBlock24747);
    Assign PAssign24744 = new_Assign((Optr)VAR_disposition_0_6, (Optr)PSend24745);
    Symbol  SMB_name = new_Symbol(L"name");
    Symbol  SMB_filename = new_Symbol(L"filename");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_name_Const = new_Constant((Optr)SMB_name);
    Constant SMB_filename_Const = new_Constant((Optr)SMB_filename);
    // with:with:. 
    Send PSend24750 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_name_Const, (Optr)SMB_filename_Const);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Array PArray24752 = new_Array_with(1, (Optr)VAR_arg_1_0);
    Variable VAR_len_1_1 = new_Variable_named(L"len", 1);
    Variable VAR_val_1_2 = new_Variable_named(L"val", 1);
    Array PArray24753 = new_Array_with(2, (Optr)VAR_len_1_1, (Optr)VAR_val_1_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24757 = new_Send((Optr)VAR_arg_1_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24756 = new_Send((Optr)PSend24757, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign24755 = new_Assign((Optr)VAR_len_1_1, (Optr)PSend24756);
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    String string_24761 = new_String(L"=");
    Constant string_24761_Const = new_Constant((Optr)string_24761);
    // ,. 
    Send PSend24760 = new_Send((Optr)VAR_arg_1_0, SMB__append_, 1, (Optr)string_24761_Const);
    // findString:. 
    Send PSend24759 = new_Send((Optr)VAR_disposition_0_6, SMB_findString_, 1, (Optr)PSend24760);
    Assign PAssign24758 = new_Assign((Optr)VAR_index_0_7, (Optr)PSend24759);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24762 = new_Send((Optr)VAR_index_0_7, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // +. 
    Send PSend24768 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Character char_24771 = new_Character(L'"');
    Constant char_24771_Const = new_Constant((Optr)char_24771);
    // +. 
    Send PSend24772 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    // indexOf:startingAt:. 
    Send PSend24770 = new_Send((Optr)VAR_disposition_0_6, SMB_indexOf_startingAt_, 2, (Optr)char_24771_Const, (Optr)PSend24772);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend24769 = new_Send((Optr)PSend24770, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24767 = new_Send((Optr)VAR_disposition_0_6, SMB_copyFrom_to_, 2, (Optr)PSend24768, (Optr)PSend24769);
    Assign PAssign24766 = new_Assign((Optr)VAR_val_1_2, (Optr)PSend24767);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24773 = new_Send((Optr)VAR_params_0_8, SMB_at_put_, 2, (Optr)VAR_arg_1_0, (Optr)VAR_val_1_2);
    Array PThreadedCode24765 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign24766, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24768, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push1, (Optr)char_24771, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24772, (Optr)&t_send2, (Optr)PSend24770, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24769, (Optr)&t_send2, (Optr)PSend24767, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_val_1_2, (Optr)&t_send2, (Optr)PSend24773, (Optr)&t_block_return);
    Block PBlock24764 = new_Block_with(empty_Array, empty_Array, PThreadedCode24765, 2, PAssign24766, PSend24773);
    // ifTrue:. 
    Send PSend24763 = new_Send((Optr)PSend24762, SMB_ifTrue_, 1, (Optr)PBlock24764);
    Array PThreadedCode24754 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign24755, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send0, (Optr)PSend24757, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24756, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24758, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push1, (Optr)string_24761, (Optr)&t_send1, (Optr)PSend24760, (Optr)&t_send1, (Optr)PSend24759, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24762, (Optr)&t_send_ifTrue_, (Optr)PSend24763, (Optr)PBlock24764, (Optr)&t_method_return);
    Block PBlock24751 = new_Block_with(PArray24752, PArray24753, PThreadedCode24754, 3, PAssign24755, PAssign24758, PSend24763);
    // do:. 
    Send PSend24774 = new_Send((Optr)PSend24750, SMB_do_, 1, (Optr)PBlock24751);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend24775 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_value_value_, 3, (Optr)VAR_headers_0_4, (Optr)VAR_params_0_8, (Optr)VAR_content_0_5);
    Array PThreadedCode24720 = instantiate_Array_with(ThreadedCode_Class, 0, 95, (Optr)&t_push_variable, (Optr)VAR_skip_0_3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24721, (Optr)&t_send1, (Optr)PSend24722, (Optr)&t_send_ifFalse_, (Optr)PSend24723, (Optr)PBlock24724, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24728, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24729, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24730, (Optr)&t_push_closure, (Optr)PBlock24731, (Optr)&t_send1, (Optr)PSend24735, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24736, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24740, (Optr)&t_push1, (Optr)string_24741, (Optr)&t_send1, (Optr)PSend24739, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24738, (Optr)&t_send1, (Optr)PSend24737, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24742, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24743, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24744, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push1, (Optr)string_24746, (Optr)&t_push_closure, (Optr)PBlock24747, (Optr)&t_send2, (Optr)PSend24745, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_name, (Optr)&t_push1, (Optr)SMB_filename, (Optr)&t_send2, (Optr)PSend24750, (Optr)&t_push_closure, (Optr)PBlock24751, (Optr)&t_send1, (Optr)PSend24774, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_content_0_5, (Optr)&t_send3, (Optr)PSend24775, (Optr)&t_block_return);
    Block PBlock24719 = new_Block_with(empty_Array, empty_Array, PThreadedCode24720, 8, PSend24723, PAssign24728, PSend24735, PAssign24736, PAssign24742, PAssign24744, PSend24774, PSend24775);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24776 = new_Send((Optr)PBlock24709, SMB_whileFalse_, 1, (Optr)PBlock24719);
    Array PThreadedCode24705 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24706, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24707, (Optr)&t_send1, (Optr)PSend24708, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24709, (Optr)&t_push_closure, (Optr)PBlock24719, (Optr)&t_send1, (Optr)PSend24776, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24702 = new_Method_with(PArray24703, PArray24704, empty_Array, PThreadedCode24705, 3, PSend24708, PSend24776, self);
    
    MethodClosure MC_SMB_decodeMultipartForm_boundary_do_ = new_MethodClosure((Method)PMethod24702, HEADER(WebClient_Core_WebUtils_Class));
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