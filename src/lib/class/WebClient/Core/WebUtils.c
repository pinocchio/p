#include <lib/class/WebClient/Core/WebUtils.h>


Optr layout_WebClient_Core_WebUtils_Class_class;


static void init_class_SMB_readHeadersFrom_() {
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24100 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_headers_0_1 = new_Variable_named(L"headers", 0);
    Variable VAR_nextLine_0_2 = new_Variable_named(L"nextLine", 0);
    Variable VAR_existing_0_3 = new_Variable_named(L"existing", 0);
    Array PArray24101 = new_Array_with(3, (Optr)VAR_headers_0_1, (Optr)VAR_nextLine_0_2, (Optr)VAR_existing_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24104 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24103 = new_Assign((Optr)VAR_headers_0_1, (Optr)PSend24104);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24109 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24108 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24109);
    Assign PAssign24107 = new_Assign((Optr)VAR_nextLine_0_2, (Optr)PSend24108);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend24110 = new_Send((Optr)VAR_nextLine_0_2, SMB_isEmpty, 0);
    Array PThreadedCode24106 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24107, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24109, (Optr)&t_send1, (Optr)PSend24108, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24110, (Optr)&t_block_return);
    Block PBlock24105 = new_Block_with(empty_Array, empty_Array, PThreadedCode24106, 2, PAssign24107, PSend24110);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24113 = new_Send((Optr)VAR_nextLine_0_2, SMB_first, 0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend24114 = new_Send((Optr)PSend24113, SMB_isSeparator, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend24119 = new_Send((Optr)VAR_headers_0_1, SMB_last, 0);
    Assign PAssign24118 = new_Assign((Optr)VAR_existing_0_3, (Optr)PSend24119);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24120 = new_Send((Optr)VAR_existing_0_3, SMB_value, 0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24121 = new_Send((Optr)String_classReference, SMB_space, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24122 = new_Send((Optr)PSend24120, SMB__append_, 1, (Optr)PSend24121);
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    // withBlanksTrimmed. 
    Send PSend24123 = new_Send((Optr)VAR_nextLine_0_2, SMB_withBlanksTrimmed, 0);
    // ,. 
    Send PSend24124 = new_Send((Optr)PSend24122, SMB__append_, 1, (Optr)PSend24123);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24125 = new_Send((Optr)VAR_existing_0_3, SMB_value_, 1, (Optr)PSend24124);
    Array PThreadedCode24117 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign24118, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_send0, (Optr)PSend24119, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_send0, (Optr)PSend24120, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24121, (Optr)&t_send1, (Optr)PSend24122, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24123, (Optr)&t_send1, (Optr)PSend24124, (Optr)&t_send1, (Optr)PSend24125, (Optr)&t_block_return);
    Block PBlock24116 = new_Block_with(empty_Array, empty_Array, PThreadedCode24117, 2, PAssign24118, PSend24125);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend24128 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Character char_444 = new_Character(L':');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // copyUpTo:. 
    Send PSend24129 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyUpTo_, 1, (Optr)char_444_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend24130 = new_Send((Optr)PSend24129, SMB_asLowercase, 0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    // copyAfter:. 
    Send PSend24131 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyAfter_, 1, (Optr)char_444_Const);
    // withBlanksTrimmed. 
    Send PSend24132 = new_Send((Optr)PSend24131, SMB_withBlanksTrimmed, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend24133 = new_Send((Optr)PSend24128, SMB_key_value_, 2, (Optr)PSend24130, (Optr)PSend24132);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24134 = new_Send((Optr)VAR_headers_0_1, SMB_add_, 1, (Optr)PSend24133);
    Array PThreadedCode24127 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend24128, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24129, (Optr)&t_send0, (Optr)PSend24130, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend24131, (Optr)&t_send0, (Optr)PSend24132, (Optr)&t_send2, (Optr)PSend24133, (Optr)&t_send1, (Optr)PSend24134, (Optr)&t_block_return);
    Block PBlock24126 = new_Block_with(empty_Array, empty_Array, PThreadedCode24127, 1, PSend24134);
    // ifTrue:ifFalse:. 
    Send PSend24115 = new_Send((Optr)PSend24114, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24116, (Optr)PBlock24126);
    Array PThreadedCode24112 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24113, (Optr)&t_send0, (Optr)PSend24114, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24115, (Optr)PBlock24116, (Optr)PBlock24126, (Optr)&t_block_return);
    Block PBlock24111 = new_Block_with(empty_Array, empty_Array, PThreadedCode24112, 1, PSend24115);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24135 = new_Send((Optr)PBlock24105, SMB_whileFalse_, 1, (Optr)PBlock24111);
    Array PThreadedCode24102 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign24103, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24104, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24105, (Optr)&t_push_closure, (Optr)PBlock24111, (Optr)&t_send1, (Optr)PSend24135, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_method_return);
    Method PMethod24099 = new_Method_with(PArray24100, PArray24101, empty_Array, PThreadedCode24102, 3, PAssign24103, PSend24135, VAR_headers_0_1);
    
    MethodClosure MC_SMB_readHeadersFrom_ = new_MethodClosure((Method)PMethod24099, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_readHeadersFrom_, MC_SMB_readHeadersFrom_);
}


static void init_class_SMB_decodeUrlEncodedForm_do_() {
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24137 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_args_0_2 = new_Variable_named(L"args", 0);
    Variable VAR_keyval_0_3 = new_Variable_named(L"keyval", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_key_0_5 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_6 = new_Variable_named(L"value", 0);
    Array PArray24138 = new_Array_with(5, (Optr)VAR_args_0_2, (Optr)VAR_keyval_0_3, (Optr)VAR_index_0_4, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24141 = new_Send((Optr)VAR_aString_0_0, SMB_readStream, 0);
    Assign PAssign24140 = new_Assign((Optr)VAR_args_0_2, (Optr)PSend24141);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24144 = new_Send((Optr)VAR_args_0_2, SMB_atEnd, 0);
    Array PThreadedCode24143 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_send0, (Optr)PSend24144, (Optr)&t_block_return);
    Block PBlock24142 = new_Block_with(empty_Array, empty_Array, PThreadedCode24143, 1, PSend24144);
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Character char_24149 = new_Character(L'&');
    Constant char_24149_Const = new_Constant((Optr)char_24149);
    // upTo:. 
    Send PSend24148 = new_Send((Optr)VAR_args_0_2, SMB_upTo_, 1, (Optr)char_24149_Const);
    Assign PAssign24147 = new_Assign((Optr)VAR_keyval_0_3, (Optr)PSend24148);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_9660 = new_Character(L'=');
    Constant char_9660_Const = new_Constant((Optr)char_9660);
    // indexOf:. 
    Send PSend24151 = new_Send((Optr)VAR_keyval_0_3, SMB_indexOf_, 1, (Optr)char_9660_Const);
    Assign PAssign24150 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend24151);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend24152 = new_Send((Optr)PAssign24150, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign24156 = new_Assign((Optr)VAR_key_0_5, (Optr)VAR_keyval_0_3);
    String string_24158 = new_String(L"");
    Constant string_24158_Const = new_Constant((Optr)string_24158);
    Assign PAssign24157 = new_Assign((Optr)VAR_value_0_6, (Optr)string_24158_Const);
    Array PThreadedCode24155 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24156, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24157, (Optr)&t_push1, (Optr)string_24158, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24154 = new_Block_with(empty_Array, empty_Array, PThreadedCode24155, 2, PAssign24156, PAssign24157);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24163 = new_Send((Optr)VAR_index_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24162 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend24163);
    Assign PAssign24161 = new_Assign((Optr)VAR_key_0_5, (Optr)PSend24162);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24166 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24167 = new_Send((Optr)VAR_keyval_0_3, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend24165 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)PSend24166, (Optr)PSend24167);
    Assign PAssign24164 = new_Assign((Optr)VAR_value_0_6, (Optr)PSend24165);
    Array PThreadedCode24160 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign24161, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24163, (Optr)&t_send2, (Optr)PSend24162, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24164, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24166, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_send0, (Optr)PSend24167, (Optr)&t_send2, (Optr)PSend24165, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24159 = new_Block_with(empty_Array, empty_Array, PThreadedCode24160, 2, PAssign24161, PAssign24164);
    // ifTrue:ifFalse:. 
    Send PSend24153 = new_Send((Optr)PSend24152, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24154, (Optr)PBlock24159);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend24168 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_value_, 2, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Array PThreadedCode24146 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign24147, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_push1, (Optr)char_24149, (Optr)&t_send1, (Optr)PSend24148, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24150, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push1, (Optr)char_9660, (Optr)&t_send1, (Optr)PSend24151, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24152, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24153, (Optr)PBlock24154, (Optr)PBlock24159, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_key_0_5, (Optr)&t_push_variable, (Optr)VAR_value_0_6, (Optr)&t_send2, (Optr)PSend24168, (Optr)&t_block_return);
    Block PBlock24145 = new_Block_with(empty_Array, empty_Array, PThreadedCode24146, 3, PAssign24147, PSend24153, PSend24168);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24169 = new_Send((Optr)PBlock24142, SMB_whileFalse_, 1, (Optr)PBlock24145);
    Array PThreadedCode24139 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign24140, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend24141, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24142, (Optr)&t_push_closure, (Optr)PBlock24145, (Optr)&t_send1, (Optr)PSend24169, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24136 = new_Method_with(PArray24137, PArray24138, empty_Array, PThreadedCode24139, 3, PAssign24140, PSend24169, self);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_do_ = new_MethodClosure((Method)PMethod24136, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_do_, MC_SMB_decodeUrlEncodedForm_do_);
}


static void init_class_SMB_decodeUrlEncodedForm_multipleValues_() {
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBool_0_1 = new_Variable_named(L"aBool", 0);
    Array PArray24171 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBool_0_1);
    Variable VAR_fields_0_2 = new_Variable_named(L"fields", 0);
    Array PArray24172 = new_Array_with(1, (Optr)VAR_fields_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24175 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24174 = new_Assign((Optr)VAR_fields_0_2, (Optr)PSend24175);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray24177 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_24184 = new_String(L"");
    Array PThreadedCode24183 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24184, (Optr)&t_block_return);
    Constant string_24184_Const = new_Constant((Optr)string_24184);
    Block PBlock24182 = new_Block_with(empty_Array, empty_Array, PThreadedCode24183, 1, string_24184_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend24185 = new_Send((Optr)VAR_fields_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_key_1_0, (Optr)PBlock24182);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24186 = new_Send((Optr)PSend24185, SMB__append_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24187 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)PSend24186);
    Array PThreadedCode24181 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock24182, (Optr)&t_send2, (Optr)PSend24185, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend24186, (Optr)&t_send2, (Optr)PSend24187, (Optr)&t_block_return);
    Block PBlock24180 = new_Block_with(empty_Array, empty_Array, PThreadedCode24181, 1, PSend24187);
    // at:put:. 
    Send PSend24190 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode24189 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend24190, (Optr)&t_block_return);
    Block PBlock24188 = new_Block_with(empty_Array, empty_Array, PThreadedCode24189, 1, PSend24190);
    // ifTrue:ifFalse:. 
    Send PSend24179 = new_Send((Optr)VAR_aBool_0_1, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24180, (Optr)PBlock24188);
    Array PThreadedCode24178 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBool_0_1, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24179, (Optr)PBlock24180, (Optr)PBlock24188, (Optr)&t_method_return);
    Block PBlock24176 = new_Block_with(PArray24177, empty_Array, PThreadedCode24178, 1, PSend24179);
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    // decodeUrlEncodedForm:do:. 
    Send PSend24191 = new_Send((Optr)self, SMB_decodeUrlEncodedForm_do_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock24176);
    Array PThreadedCode24173 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24174, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24175, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock24176, (Optr)&t_send2, (Optr)PSend24191, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_method_return);
    Method PMethod24170 = new_Method_with(PArray24171, PArray24172, empty_Array, PThreadedCode24173, 3, PAssign24174, PSend24191, VAR_fields_0_2);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_multipleValues_ = new_MethodClosure((Method)PMethod24170, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_multipleValues_, MC_SMB_decodeUrlEncodedForm_multipleValues_);
}


static void init_class_SMB_decodeMultipartForm_boundary_do_() {
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_boundary_0_1 = new_Variable_named(L"boundary", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24193 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_boundary_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_skip_0_3 = new_Variable_named(L"skip", 0);
    Variable VAR_headers_0_4 = new_Variable_named(L"headers", 0);
    Variable VAR_content_0_5 = new_Variable_named(L"content", 0);
    Variable VAR_disposition_0_6 = new_Variable_named(L"disposition", 0);
    Variable VAR_index_0_7 = new_Variable_named(L"index", 0);
    Variable VAR_params_0_8 = new_Variable_named(L"params", 0);
    Array PArray24194 = new_Array_with(6, (Optr)VAR_skip_0_3, (Optr)VAR_headers_0_4, (Optr)VAR_content_0_5, (Optr)VAR_disposition_0_6, (Optr)VAR_index_0_7, (Optr)VAR_params_0_8);
    String string_24196 = new_String(L"--");
    Constant string_24196_Const = new_Constant((Optr)string_24196);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24197 = new_Send((Optr)string_24196_Const, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend24198 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24197);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24201 = new_Send((Optr)VAR_aStream_0_0, SMB_atEnd, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // next:. 
    Send PSend24205 = new_Send((Optr)VAR_aStream_0_0, SMB_next_, 1, (Optr)int_2_Const);
    Assign PAssign24204 = new_Assign((Optr)VAR_skip_0_3, (Optr)PSend24205);
    String string_24206 = new_String(L"--");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24206_Const = new_Constant((Optr)string_24206);
    // =. 
    Send PSend24207 = new_Send((Optr)PAssign24204, SMB__equals_, 1, (Optr)string_24206_Const);
    Array PThreadedCode24203 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign24204, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24205, (Optr)&t_assign, (Optr)&t_push1, (Optr)string_24206, (Optr)&t_send1, (Optr)PSend24207, (Optr)&t_block_return);
    Block PBlock24202 = new_Block_with(empty_Array, empty_Array, PThreadedCode24203, 1, PSend24207);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend24208 = new_Send((Optr)PSend24201, SMB_or_, 1, (Optr)PBlock24202);
    Array PThreadedCode24200 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24201, (Optr)&t_push_closure, (Optr)PBlock24202, (Optr)&t_send1, (Optr)PSend24208, (Optr)&t_block_return);
    Block PBlock24199 = new_Block_with(empty_Array, empty_Array, PThreadedCode24200, 1, PSend24208);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24211 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // =. 
    Send PSend24212 = new_Send((Optr)VAR_skip_0_3, SMB__equals_, 1, (Optr)PSend24211);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24216 = new_String(L"Error decoding multipart/form-data fields");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_24216_Const = new_Constant((Optr)string_24216);
    // error:. 
    Send PSend24217 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_24216_Const);
    Array PThreadedCode24215 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24216, (Optr)&t_send1, (Optr)PSend24217, (Optr)&t_block_return);
    Block PBlock24214 = new_Block_with(empty_Array, empty_Array, PThreadedCode24215, 1, PSend24217);
    // ifFalse:. 
    Send PSend24213 = new_Send((Optr)PSend24212, SMB_ifFalse_, 1, (Optr)PBlock24214);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24219 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24218 = new_Assign((Optr)VAR_headers_0_4, (Optr)PSend24219);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24220 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24222 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24224 = new_Send((Optr)VAR_headers_0_4, SMB_add_, 1, (Optr)VAR_hdr_1_0);
    Array PThreadedCode24223 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_send1, (Optr)PSend24224, (Optr)&t_method_return);
    Block PBlock24221 = new_Block_with(PArray24222, empty_Array, PThreadedCode24223, 1, PSend24224);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend24225 = new_Send((Optr)PSend24220, SMB_do_, 1, (Optr)PBlock24221);
    // crlf. 
    Send PSend24230 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    String string_24231 = new_String(L"--");
    Constant string_24231_Const = new_Constant((Optr)string_24231);
    // ,. 
    Send PSend24229 = new_Send((Optr)PSend24230, SMB__append_, 1, (Optr)string_24231_Const);
    // ,. 
    Send PSend24228 = new_Send((Optr)PSend24229, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    // upToAll:. 
    Send PSend24227 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24228);
    Assign PAssign24226 = new_Assign((Optr)VAR_content_0_5, (Optr)PSend24227);
    // new. 
    Send PSend24233 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24232 = new_Assign((Optr)VAR_params_0_8, (Optr)PSend24233);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_24236 = new_String(L"content-disposition");
    Constant string_24236_Const = new_Constant((Optr)string_24236);
    String string_24239 = new_String(L"");
    Array PThreadedCode24238 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24239, (Optr)&t_block_return);
    Constant string_24239_Const = new_Constant((Optr)string_24239);
    Block PBlock24237 = new_Block_with(empty_Array, empty_Array, PThreadedCode24238, 1, string_24239_Const);
    // at:ifAbsent:. 
    Send PSend24235 = new_Send((Optr)VAR_headers_0_4, SMB_at_ifAbsent_, 2, (Optr)string_24236_Const, (Optr)PBlock24237);
    Assign PAssign24234 = new_Assign((Optr)VAR_disposition_0_6, (Optr)PSend24235);
    Symbol  SMB_name = new_Symbol(L"name");
    Symbol  SMB_filename = new_Symbol(L"filename");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_name_Const = new_Constant((Optr)SMB_name);
    Constant SMB_filename_Const = new_Constant((Optr)SMB_filename);
    // with:with:. 
    Send PSend24240 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_name_Const, (Optr)SMB_filename_Const);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Array PArray24242 = new_Array_with(1, (Optr)VAR_arg_1_0);
    Variable VAR_len_1_1 = new_Variable_named(L"len", 1);
    Variable VAR_val_1_2 = new_Variable_named(L"val", 1);
    Array PArray24243 = new_Array_with(2, (Optr)VAR_len_1_1, (Optr)VAR_val_1_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24247 = new_Send((Optr)VAR_arg_1_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24246 = new_Send((Optr)PSend24247, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign24245 = new_Assign((Optr)VAR_len_1_1, (Optr)PSend24246);
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    String string_24251 = new_String(L"=");
    Constant string_24251_Const = new_Constant((Optr)string_24251);
    // ,. 
    Send PSend24250 = new_Send((Optr)VAR_arg_1_0, SMB__append_, 1, (Optr)string_24251_Const);
    // findString:. 
    Send PSend24249 = new_Send((Optr)VAR_disposition_0_6, SMB_findString_, 1, (Optr)PSend24250);
    Assign PAssign24248 = new_Assign((Optr)VAR_index_0_7, (Optr)PSend24249);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24252 = new_Send((Optr)VAR_index_0_7, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // +. 
    Send PSend24258 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Character char_24261 = new_Character(L'"');
    Constant char_24261_Const = new_Constant((Optr)char_24261);
    // +. 
    Send PSend24262 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    // indexOf:startingAt:. 
    Send PSend24260 = new_Send((Optr)VAR_disposition_0_6, SMB_indexOf_startingAt_, 2, (Optr)char_24261_Const, (Optr)PSend24262);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend24259 = new_Send((Optr)PSend24260, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24257 = new_Send((Optr)VAR_disposition_0_6, SMB_copyFrom_to_, 2, (Optr)PSend24258, (Optr)PSend24259);
    Assign PAssign24256 = new_Assign((Optr)VAR_val_1_2, (Optr)PSend24257);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24263 = new_Send((Optr)VAR_params_0_8, SMB_at_put_, 2, (Optr)VAR_arg_1_0, (Optr)VAR_val_1_2);
    Array PThreadedCode24255 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign24256, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24258, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push1, (Optr)char_24261, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24262, (Optr)&t_send2, (Optr)PSend24260, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24259, (Optr)&t_send2, (Optr)PSend24257, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_val_1_2, (Optr)&t_send2, (Optr)PSend24263, (Optr)&t_block_return);
    Block PBlock24254 = new_Block_with(empty_Array, empty_Array, PThreadedCode24255, 2, PAssign24256, PSend24263);
    // ifTrue:. 
    Send PSend24253 = new_Send((Optr)PSend24252, SMB_ifTrue_, 1, (Optr)PBlock24254);
    Array PThreadedCode24244 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign24245, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send0, (Optr)PSend24247, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24246, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24248, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push1, (Optr)string_24251, (Optr)&t_send1, (Optr)PSend24250, (Optr)&t_send1, (Optr)PSend24249, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24252, (Optr)&t_send_ifTrue_, (Optr)PSend24253, (Optr)PBlock24254, (Optr)&t_method_return);
    Block PBlock24241 = new_Block_with(PArray24242, PArray24243, PThreadedCode24244, 3, PAssign24245, PAssign24248, PSend24253);
    // do:. 
    Send PSend24264 = new_Send((Optr)PSend24240, SMB_do_, 1, (Optr)PBlock24241);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend24265 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_value_value_, 3, (Optr)VAR_headers_0_4, (Optr)VAR_params_0_8, (Optr)VAR_content_0_5);
    Array PThreadedCode24210 = instantiate_Array_with(ThreadedCode_Class, 0, 95, (Optr)&t_push_variable, (Optr)VAR_skip_0_3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24211, (Optr)&t_send1, (Optr)PSend24212, (Optr)&t_send_ifFalse_, (Optr)PSend24213, (Optr)PBlock24214, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24218, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24219, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24220, (Optr)&t_push_closure, (Optr)PBlock24221, (Optr)&t_send1, (Optr)PSend24225, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24226, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24230, (Optr)&t_push1, (Optr)string_24231, (Optr)&t_send1, (Optr)PSend24229, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24228, (Optr)&t_send1, (Optr)PSend24227, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24232, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24233, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24234, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push1, (Optr)string_24236, (Optr)&t_push_closure, (Optr)PBlock24237, (Optr)&t_send2, (Optr)PSend24235, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_name, (Optr)&t_push1, (Optr)SMB_filename, (Optr)&t_send2, (Optr)PSend24240, (Optr)&t_push_closure, (Optr)PBlock24241, (Optr)&t_send1, (Optr)PSend24264, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_content_0_5, (Optr)&t_send3, (Optr)PSend24265, (Optr)&t_block_return);
    Block PBlock24209 = new_Block_with(empty_Array, empty_Array, PThreadedCode24210, 8, PSend24213, PAssign24218, PSend24225, PAssign24226, PAssign24232, PAssign24234, PSend24264, PSend24265);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24266 = new_Send((Optr)PBlock24199, SMB_whileFalse_, 1, (Optr)PBlock24209);
    Array PThreadedCode24195 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24196, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24197, (Optr)&t_send1, (Optr)PSend24198, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24199, (Optr)&t_push_closure, (Optr)PBlock24209, (Optr)&t_send1, (Optr)PSend24266, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24192 = new_Method_with(PArray24193, PArray24194, empty_Array, PThreadedCode24195, 3, PSend24198, PSend24266, self);
    
    MethodClosure MC_SMB_decodeMultipartForm_boundary_do_ = new_MethodClosure((Method)PMethod24192, HEADER(WebClient_Core_WebUtils_Class));
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