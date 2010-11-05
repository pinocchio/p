#include <lib/class/WebClient/Core/WebUtils.h>


Optr layout_WebClient_Core_WebUtils_Class_class;


static void init_class_SMB_readHeadersFrom_() {
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray24125 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_headers_0_1 = new_Variable_named(L"headers", 0);
    Variable VAR_nextLine_0_2 = new_Variable_named(L"nextLine", 0);
    Variable VAR_existing_0_3 = new_Variable_named(L"existing", 0);
    Array PArray24126 = new_Array_with(3, (Optr)VAR_headers_0_1, (Optr)VAR_nextLine_0_2, (Optr)VAR_existing_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24129 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign24128 = new_Assign((Optr)VAR_headers_0_1, (Optr)PSend24129);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24134 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // upToAll:. 
    Send PSend24133 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24134);
    Assign PAssign24132 = new_Assign((Optr)VAR_nextLine_0_2, (Optr)PSend24133);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend24135 = new_Send((Optr)VAR_nextLine_0_2, SMB_isEmpty, 0);
    Array PThreadedCode24131 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign24132, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24134, (Optr)&t_send1, (Optr)PSend24133, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24135, (Optr)&t_block_return);
    Block PBlock24130 = new_Block_with(empty_Array, empty_Array, PThreadedCode24131, 2, PAssign24132, PSend24135);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend24138 = new_Send((Optr)VAR_nextLine_0_2, SMB_first, 0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend24139 = new_Send((Optr)PSend24138, SMB_isSeparator, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend24144 = new_Send((Optr)VAR_headers_0_1, SMB_last, 0);
    Assign PAssign24143 = new_Assign((Optr)VAR_existing_0_3, (Optr)PSend24144);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend24145 = new_Send((Optr)VAR_existing_0_3, SMB_value, 0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend24146 = new_Send((Optr)String_classReference, SMB_space, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24147 = new_Send((Optr)PSend24145, SMB__append_, 1, (Optr)PSend24146);
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    // withBlanksTrimmed. 
    Send PSend24148 = new_Send((Optr)VAR_nextLine_0_2, SMB_withBlanksTrimmed, 0);
    // ,. 
    Send PSend24149 = new_Send((Optr)PSend24147, SMB__append_, 1, (Optr)PSend24148);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24150 = new_Send((Optr)VAR_existing_0_3, SMB_value_, 1, (Optr)PSend24149);
    Array PThreadedCode24142 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign24143, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_send0, (Optr)PSend24144, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_push_variable, (Optr)VAR_existing_0_3, (Optr)&t_send0, (Optr)PSend24145, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24146, (Optr)&t_send1, (Optr)PSend24147, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24148, (Optr)&t_send1, (Optr)PSend24149, (Optr)&t_send1, (Optr)PSend24150, (Optr)&t_block_return);
    Block PBlock24141 = new_Block_with(empty_Array, empty_Array, PThreadedCode24142, 2, PAssign24143, PSend24150);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend24153 = new_Send((Optr)PAssociation_classReference, SMB_basicNew, 0);
    Character char_435 = new_Character(L':');
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Constant char_435_Const = new_Constant((Optr)char_435);
    // copyUpTo:. 
    Send PSend24154 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyUpTo_, 1, (Optr)char_435_Const);
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    // asLowercase. 
    Send PSend24155 = new_Send((Optr)PSend24154, SMB_asLowercase, 0);
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    // copyAfter:. 
    Send PSend24156 = new_Send((Optr)VAR_nextLine_0_2, SMB_copyAfter_, 1, (Optr)char_435_Const);
    // withBlanksTrimmed. 
    Send PSend24157 = new_Send((Optr)PSend24156, SMB_withBlanksTrimmed, 0);
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    // key:value:. 
    Send PSend24158 = new_Send((Optr)PSend24153, SMB_key_value_, 2, (Optr)PSend24155, (Optr)PSend24157);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24159 = new_Send((Optr)VAR_headers_0_1, SMB_add_, 1, (Optr)PSend24158);
    Array PThreadedCode24152 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_push_class_reference, (Optr)PAssociation_classReference, (Optr)&t_send0, (Optr)PSend24153, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend24154, (Optr)&t_send0, (Optr)PSend24155, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend24156, (Optr)&t_send0, (Optr)PSend24157, (Optr)&t_send2, (Optr)PSend24158, (Optr)&t_send1, (Optr)PSend24159, (Optr)&t_block_return);
    Block PBlock24151 = new_Block_with(empty_Array, empty_Array, PThreadedCode24152, 1, PSend24159);
    // ifTrue:ifFalse:. 
    Send PSend24140 = new_Send((Optr)PSend24139, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24141, (Optr)PBlock24151);
    Array PThreadedCode24137 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_nextLine_0_2, (Optr)&t_send0, (Optr)PSend24138, (Optr)&t_send0, (Optr)PSend24139, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24140, (Optr)PBlock24141, (Optr)PBlock24151, (Optr)&t_block_return);
    Block PBlock24136 = new_Block_with(empty_Array, empty_Array, PThreadedCode24137, 1, PSend24140);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24160 = new_Send((Optr)PBlock24130, SMB_whileFalse_, 1, (Optr)PBlock24136);
    Array PThreadedCode24127 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign24128, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend24129, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24130, (Optr)&t_push_closure, (Optr)PBlock24136, (Optr)&t_send1, (Optr)PSend24160, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_headers_0_1, (Optr)&t_method_return);
    Method PMethod24124 = new_Method_with(PArray24125, PArray24126, empty_Array, PThreadedCode24127, 3, PAssign24128, PSend24160, VAR_headers_0_1);
    
    MethodClosure MC_SMB_readHeadersFrom_ = new_MethodClosure((Method)PMethod24124, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_readHeadersFrom_, MC_SMB_readHeadersFrom_);
}


static void init_class_SMB_decodeUrlEncodedForm_do_() {
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray24162 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_args_0_2 = new_Variable_named(L"args", 0);
    Variable VAR_keyval_0_3 = new_Variable_named(L"keyval", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_key_0_5 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_6 = new_Variable_named(L"value", 0);
    Array PArray24163 = new_Array_with(5, (Optr)VAR_args_0_2, (Optr)VAR_keyval_0_3, (Optr)VAR_index_0_4, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Symbol SMB_readStream = new_Symbol(L"readStream");
    // readStream. 
    Send PSend24166 = new_Send((Optr)VAR_aString_0_0, SMB_readStream, 0);
    Assign PAssign24165 = new_Assign((Optr)VAR_args_0_2, (Optr)PSend24166);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24169 = new_Send((Optr)VAR_args_0_2, SMB_atEnd, 0);
    Array PThreadedCode24168 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_send0, (Optr)PSend24169, (Optr)&t_block_return);
    Block PBlock24167 = new_Block_with(empty_Array, empty_Array, PThreadedCode24168, 1, PSend24169);
    Symbol SMB_upTo_ = new_Symbol(L"upTo:");
    Character char_24174 = new_Character(L'&');
    Constant char_24174_Const = new_Constant((Optr)char_24174);
    // upTo:. 
    Send PSend24173 = new_Send((Optr)VAR_args_0_2, SMB_upTo_, 1, (Optr)char_24174_Const);
    Assign PAssign24172 = new_Assign((Optr)VAR_keyval_0_3, (Optr)PSend24173);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_9649 = new_Character(L'=');
    Constant char_9649_Const = new_Constant((Optr)char_9649);
    // indexOf:. 
    Send PSend24176 = new_Send((Optr)VAR_keyval_0_3, SMB_indexOf_, 1, (Optr)char_9649_Const);
    Assign PAssign24175 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend24176);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend24177 = new_Send((Optr)PAssign24175, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Assign PAssign24181 = new_Assign((Optr)VAR_key_0_5, (Optr)VAR_keyval_0_3);
    String string_24183 = new_String(L"");
    Constant string_24183_Const = new_Constant((Optr)string_24183);
    Assign PAssign24182 = new_Assign((Optr)VAR_value_0_6, (Optr)string_24183_Const);
    Array PThreadedCode24180 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign24181, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24182, (Optr)&t_push1, (Optr)string_24183, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24179 = new_Block_with(empty_Array, empty_Array, PThreadedCode24180, 2, PAssign24181, PAssign24182);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend24188 = new_Send((Optr)VAR_index_0_4, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24187 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)PSend24188);
    Assign PAssign24186 = new_Assign((Optr)VAR_key_0_5, (Optr)PSend24187);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24191 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24192 = new_Send((Optr)VAR_keyval_0_3, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend24190 = new_Send((Optr)VAR_keyval_0_3, SMB_copyFrom_to_, 2, (Optr)PSend24191, (Optr)PSend24192);
    Assign PAssign24189 = new_Assign((Optr)VAR_value_0_6, (Optr)PSend24190);
    Array PThreadedCode24185 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign24186, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24188, (Optr)&t_send2, (Optr)PSend24187, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24189, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24191, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_send0, (Optr)PSend24192, (Optr)&t_send2, (Optr)PSend24190, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock24184 = new_Block_with(empty_Array, empty_Array, PThreadedCode24185, 2, PAssign24186, PAssign24189);
    // ifTrue:ifFalse:. 
    Send PSend24178 = new_Send((Optr)PSend24177, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24179, (Optr)PBlock24184);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend24193 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_value_, 2, (Optr)VAR_key_0_5, (Optr)VAR_value_0_6);
    Array PThreadedCode24171 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign24172, (Optr)&t_push_variable, (Optr)VAR_args_0_2, (Optr)&t_push1, (Optr)char_24174, (Optr)&t_send1, (Optr)PSend24173, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24175, (Optr)&t_push_variable, (Optr)VAR_keyval_0_3, (Optr)&t_push1, (Optr)char_9649, (Optr)&t_send1, (Optr)PSend24176, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24177, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24178, (Optr)PBlock24179, (Optr)PBlock24184, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_key_0_5, (Optr)&t_push_variable, (Optr)VAR_value_0_6, (Optr)&t_send2, (Optr)PSend24193, (Optr)&t_block_return);
    Block PBlock24170 = new_Block_with(empty_Array, empty_Array, PThreadedCode24171, 3, PAssign24172, PSend24178, PSend24193);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24194 = new_Send((Optr)PBlock24167, SMB_whileFalse_, 1, (Optr)PBlock24170);
    Array PThreadedCode24164 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign24165, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend24166, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24167, (Optr)&t_push_closure, (Optr)PBlock24170, (Optr)&t_send1, (Optr)PSend24194, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24161 = new_Method_with(PArray24162, PArray24163, empty_Array, PThreadedCode24164, 3, PAssign24165, PSend24194, self);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_do_ = new_MethodClosure((Method)PMethod24161, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_do_, MC_SMB_decodeUrlEncodedForm_do_);
}


static void init_class_SMB_decodeUrlEncodedForm_multipleValues_() {
    Symbol SMB_decodeUrlEncodedForm_multipleValues_ = new_Symbol(L"decodeUrlEncodedForm:multipleValues:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aBool_0_1 = new_Variable_named(L"aBool", 0);
    Array PArray24196 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aBool_0_1);
    Variable VAR_fields_0_2 = new_Variable_named(L"fields", 0);
    Array PArray24197 = new_Array_with(1, (Optr)VAR_fields_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24200 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24199 = new_Assign((Optr)VAR_fields_0_2, (Optr)PSend24200);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray24202 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_24209 = new_String(L"");
    Array PThreadedCode24208 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24209, (Optr)&t_block_return);
    Constant string_24209_Const = new_Constant((Optr)string_24209);
    Block PBlock24207 = new_Block_with(empty_Array, empty_Array, PThreadedCode24208, 1, string_24209_Const);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend24210 = new_Send((Optr)VAR_fields_0_2, SMB_at_ifAbsent_, 2, (Optr)VAR_key_1_0, (Optr)PBlock24207);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24211 = new_Send((Optr)PSend24210, SMB__append_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24212 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)PSend24211);
    Array PThreadedCode24206 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock24207, (Optr)&t_send2, (Optr)PSend24210, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend24211, (Optr)&t_send2, (Optr)PSend24212, (Optr)&t_block_return);
    Block PBlock24205 = new_Block_with(empty_Array, empty_Array, PThreadedCode24206, 1, PSend24212);
    // at:put:. 
    Send PSend24215 = new_Send((Optr)VAR_fields_0_2, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode24214 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend24215, (Optr)&t_block_return);
    Block PBlock24213 = new_Block_with(empty_Array, empty_Array, PThreadedCode24214, 1, PSend24215);
    // ifTrue:ifFalse:. 
    Send PSend24204 = new_Send((Optr)VAR_aBool_0_1, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock24205, (Optr)PBlock24213);
    Array PThreadedCode24203 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aBool_0_1, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend24204, (Optr)PBlock24205, (Optr)PBlock24213, (Optr)&t_method_return);
    Block PBlock24201 = new_Block_with(PArray24202, empty_Array, PThreadedCode24203, 1, PSend24204);
    Symbol SMB_decodeUrlEncodedForm_do_ = new_Symbol(L"decodeUrlEncodedForm:do:");
    // decodeUrlEncodedForm:do:. 
    Send PSend24216 = new_Send((Optr)self, SMB_decodeUrlEncodedForm_do_, 2, (Optr)VAR_aString_0_0, (Optr)PBlock24201);
    Array PThreadedCode24198 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign24199, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24200, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_closure, (Optr)PBlock24201, (Optr)&t_send2, (Optr)PSend24216, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_fields_0_2, (Optr)&t_method_return);
    Method PMethod24195 = new_Method_with(PArray24196, PArray24197, empty_Array, PThreadedCode24198, 3, PAssign24199, PSend24216, VAR_fields_0_2);
    
    MethodClosure MC_SMB_decodeUrlEncodedForm_multipleValues_ = new_MethodClosure((Method)PMethod24195, HEADER(WebClient_Core_WebUtils_Class));
    store_method(HEADER(WebClient_Core_WebUtils_Class), SMB_decodeUrlEncodedForm_multipleValues_, MC_SMB_decodeUrlEncodedForm_multipleValues_);
}


static void init_class_SMB_decodeMultipartForm_boundary_do_() {
    Symbol SMB_decodeMultipartForm_boundary_do_ = new_Symbol(L"decodeMultipartForm:boundary:do:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Variable VAR_boundary_0_1 = new_Variable_named(L"boundary", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray24218 = new_Array_with(3, (Optr)VAR_aStream_0_0, (Optr)VAR_boundary_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_skip_0_3 = new_Variable_named(L"skip", 0);
    Variable VAR_headers_0_4 = new_Variable_named(L"headers", 0);
    Variable VAR_content_0_5 = new_Variable_named(L"content", 0);
    Variable VAR_disposition_0_6 = new_Variable_named(L"disposition", 0);
    Variable VAR_index_0_7 = new_Variable_named(L"index", 0);
    Variable VAR_params_0_8 = new_Variable_named(L"params", 0);
    Array PArray24219 = new_Array_with(6, (Optr)VAR_skip_0_3, (Optr)VAR_headers_0_4, (Optr)VAR_content_0_5, (Optr)VAR_disposition_0_6, (Optr)VAR_index_0_7, (Optr)VAR_params_0_8);
    String string_24221 = new_String(L"--");
    Constant string_24221_Const = new_Constant((Optr)string_24221);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend24222 = new_Send((Optr)string_24221_Const, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    Symbol SMB_upToAll_ = new_Symbol(L"upToAll:");
    // upToAll:. 
    Send PSend24223 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24222);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend24226 = new_Send((Optr)VAR_aStream_0_0, SMB_atEnd, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // next:. 
    Send PSend24230 = new_Send((Optr)VAR_aStream_0_0, SMB_next_, 1, (Optr)int_2_Const);
    Assign PAssign24229 = new_Assign((Optr)VAR_skip_0_3, (Optr)PSend24230);
    String string_24231 = new_String(L"--");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_24231_Const = new_Constant((Optr)string_24231);
    // =. 
    Send PSend24232 = new_Send((Optr)PAssign24229, SMB__equals_, 1, (Optr)string_24231_Const);
    Array PThreadedCode24228 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign24229, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24230, (Optr)&t_assign, (Optr)&t_push1, (Optr)string_24231, (Optr)&t_send1, (Optr)PSend24232, (Optr)&t_block_return);
    Block PBlock24227 = new_Block_with(empty_Array, empty_Array, PThreadedCode24228, 1, PSend24232);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend24233 = new_Send((Optr)PSend24226, SMB_or_, 1, (Optr)PBlock24227);
    Array PThreadedCode24225 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send0, (Optr)PSend24226, (Optr)&t_push_closure, (Optr)PBlock24227, (Optr)&t_send1, (Optr)PSend24233, (Optr)&t_block_return);
    Block PBlock24224 = new_Block_with(empty_Array, empty_Array, PThreadedCode24225, 1, PSend24233);
    Symbol SMB_crlf = new_Symbol(L"crlf");
    // crlf. 
    Send PSend24236 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    // =. 
    Send PSend24237 = new_Send((Optr)VAR_skip_0_3, SMB__equals_, 1, (Optr)PSend24236);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_24241 = new_String(L"Error decoding multipart/form-data fields");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_24241_Const = new_Constant((Optr)string_24241);
    // error:. 
    Send PSend24242 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_24241_Const);
    Array PThreadedCode24240 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_24241, (Optr)&t_send1, (Optr)PSend24242, (Optr)&t_block_return);
    Block PBlock24239 = new_Block_with(empty_Array, empty_Array, PThreadedCode24240, 1, PSend24242);
    // ifFalse:. 
    Send PSend24238 = new_Send((Optr)PSend24237, SMB_ifFalse_, 1, (Optr)PBlock24239);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24244 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24243 = new_Assign((Optr)VAR_headers_0_4, (Optr)PSend24244);
    Symbol SMB_readHeadersFrom_ = new_Symbol(L"readHeadersFrom:");
    // readHeadersFrom:. 
    Send PSend24245 = new_Send((Optr)PWebUtils_classReference, SMB_readHeadersFrom_, 1, (Optr)VAR_aStream_0_0);
    Variable VAR_hdr_1_0 = new_Variable_named(L"hdr", 1);
    Array PArray24247 = new_Array_with(1, (Optr)VAR_hdr_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend24249 = new_Send((Optr)VAR_headers_0_4, SMB_add_, 1, (Optr)VAR_hdr_1_0);
    Array PThreadedCode24248 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_hdr_1_0, (Optr)&t_send1, (Optr)PSend24249, (Optr)&t_method_return);
    Block PBlock24246 = new_Block_with(PArray24247, empty_Array, PThreadedCode24248, 1, PSend24249);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend24250 = new_Send((Optr)PSend24245, SMB_do_, 1, (Optr)PBlock24246);
    // crlf. 
    Send PSend24255 = new_Send((Optr)String_classReference, SMB_crlf, 0);
    String string_24256 = new_String(L"--");
    Constant string_24256_Const = new_Constant((Optr)string_24256);
    // ,. 
    Send PSend24254 = new_Send((Optr)PSend24255, SMB__append_, 1, (Optr)string_24256_Const);
    // ,. 
    Send PSend24253 = new_Send((Optr)PSend24254, SMB__append_, 1, (Optr)VAR_boundary_0_1);
    // upToAll:. 
    Send PSend24252 = new_Send((Optr)VAR_aStream_0_0, SMB_upToAll_, 1, (Optr)PSend24253);
    Assign PAssign24251 = new_Assign((Optr)VAR_content_0_5, (Optr)PSend24252);
    // new. 
    Send PSend24258 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign24257 = new_Assign((Optr)VAR_params_0_8, (Optr)PSend24258);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_24261 = new_String(L"content-disposition");
    Constant string_24261_Const = new_Constant((Optr)string_24261);
    String string_24264 = new_String(L"");
    Array PThreadedCode24263 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_24264, (Optr)&t_block_return);
    Constant string_24264_Const = new_Constant((Optr)string_24264);
    Block PBlock24262 = new_Block_with(empty_Array, empty_Array, PThreadedCode24263, 1, string_24264_Const);
    // at:ifAbsent:. 
    Send PSend24260 = new_Send((Optr)VAR_headers_0_4, SMB_at_ifAbsent_, 2, (Optr)string_24261_Const, (Optr)PBlock24262);
    Assign PAssign24259 = new_Assign((Optr)VAR_disposition_0_6, (Optr)PSend24260);
    Symbol  SMB_name = new_Symbol(L"name");
    Symbol  SMB_filename = new_Symbol(L"filename");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_name_Const = new_Constant((Optr)SMB_name);
    Constant SMB_filename_Const = new_Constant((Optr)SMB_filename);
    // with:with:. 
    Send PSend24265 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_name_Const, (Optr)SMB_filename_Const);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Array PArray24267 = new_Array_with(1, (Optr)VAR_arg_1_0);
    Variable VAR_len_1_1 = new_Variable_named(L"len", 1);
    Variable VAR_val_1_2 = new_Variable_named(L"val", 1);
    Array PArray24268 = new_Array_with(2, (Optr)VAR_len_1_1, (Optr)VAR_val_1_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend24272 = new_Send((Optr)VAR_arg_1_0, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend24271 = new_Send((Optr)PSend24272, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign24270 = new_Assign((Optr)VAR_len_1_1, (Optr)PSend24271);
    Symbol SMB_findString_ = new_Symbol(L"findString:");
    String string_24276 = new_String(L"=");
    Constant string_24276_Const = new_Constant((Optr)string_24276);
    // ,. 
    Send PSend24275 = new_Send((Optr)VAR_arg_1_0, SMB__append_, 1, (Optr)string_24276_Const);
    // findString:. 
    Send PSend24274 = new_Send((Optr)VAR_disposition_0_6, SMB_findString_, 1, (Optr)PSend24275);
    Assign PAssign24273 = new_Assign((Optr)VAR_index_0_7, (Optr)PSend24274);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend24277 = new_Send((Optr)VAR_index_0_7, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // +. 
    Send PSend24283 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Character char_24286 = new_Character(L'"');
    Constant char_24286_Const = new_Constant((Optr)char_24286);
    // +. 
    Send PSend24287 = new_Send((Optr)VAR_index_0_7, SMB__plus_, 1, (Optr)VAR_len_1_1);
    // indexOf:startingAt:. 
    Send PSend24285 = new_Send((Optr)VAR_disposition_0_6, SMB_indexOf_startingAt_, 2, (Optr)char_24286_Const, (Optr)PSend24287);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend24284 = new_Send((Optr)PSend24285, SMB__minus_, 1, (Optr)int_1_Const);
    // copyFrom:to:. 
    Send PSend24282 = new_Send((Optr)VAR_disposition_0_6, SMB_copyFrom_to_, 2, (Optr)PSend24283, (Optr)PSend24284);
    Assign PAssign24281 = new_Assign((Optr)VAR_val_1_2, (Optr)PSend24282);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24288 = new_Send((Optr)VAR_params_0_8, SMB_at_put_, 2, (Optr)VAR_arg_1_0, (Optr)VAR_val_1_2);
    Array PThreadedCode24280 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign24281, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24283, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push1, (Optr)char_24286, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_variable, (Optr)VAR_len_1_1, (Optr)&t_send1, (Optr)PSend24287, (Optr)&t_send2, (Optr)PSend24285, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend24284, (Optr)&t_send2, (Optr)PSend24282, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_variable, (Optr)VAR_val_1_2, (Optr)&t_send2, (Optr)PSend24288, (Optr)&t_block_return);
    Block PBlock24279 = new_Block_with(empty_Array, empty_Array, PThreadedCode24280, 2, PAssign24281, PSend24288);
    // ifTrue:. 
    Send PSend24278 = new_Send((Optr)PSend24277, SMB_ifTrue_, 1, (Optr)PBlock24279);
    Array PThreadedCode24269 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign24270, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send0, (Optr)PSend24272, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend24271, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24273, (Optr)&t_push_variable, (Optr)VAR_disposition_0_6, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push1, (Optr)string_24276, (Optr)&t_send1, (Optr)PSend24275, (Optr)&t_send1, (Optr)PSend24274, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_7, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend24277, (Optr)&t_send_ifTrue_, (Optr)PSend24278, (Optr)PBlock24279, (Optr)&t_method_return);
    Block PBlock24266 = new_Block_with(PArray24267, PArray24268, PThreadedCode24269, 3, PAssign24270, PAssign24273, PSend24278);
    // do:. 
    Send PSend24289 = new_Send((Optr)PSend24265, SMB_do_, 1, (Optr)PBlock24266);
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    // value:value:value:. 
    Send PSend24290 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_value_value_, 3, (Optr)VAR_headers_0_4, (Optr)VAR_params_0_8, (Optr)VAR_content_0_5);
    Array PThreadedCode24235 = instantiate_Array_with(ThreadedCode_Class, 0, 95, (Optr)&t_push_variable, (Optr)VAR_skip_0_3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24236, (Optr)&t_send1, (Optr)PSend24237, (Optr)&t_send_ifFalse_, (Optr)PSend24238, (Optr)PBlock24239, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24243, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24244, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PWebUtils_classReference, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend24245, (Optr)&t_push_closure, (Optr)PBlock24246, (Optr)&t_send1, (Optr)PSend24250, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24251, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend24255, (Optr)&t_push1, (Optr)string_24256, (Optr)&t_send1, (Optr)PSend24254, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24253, (Optr)&t_send1, (Optr)PSend24252, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24257, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend24258, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24259, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push1, (Optr)string_24261, (Optr)&t_push_closure, (Optr)PBlock24262, (Optr)&t_send2, (Optr)PSend24260, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_name, (Optr)&t_push1, (Optr)SMB_filename, (Optr)&t_send2, (Optr)PSend24265, (Optr)&t_push_closure, (Optr)PBlock24266, (Optr)&t_send1, (Optr)PSend24289, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_headers_0_4, (Optr)&t_push_variable, (Optr)VAR_params_0_8, (Optr)&t_push_variable, (Optr)VAR_content_0_5, (Optr)&t_send3, (Optr)PSend24290, (Optr)&t_block_return);
    Block PBlock24234 = new_Block_with(empty_Array, empty_Array, PThreadedCode24235, 8, PSend24238, PAssign24243, PSend24250, PAssign24251, PAssign24257, PAssign24259, PSend24289, PSend24290);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend24291 = new_Send((Optr)PBlock24224, SMB_whileFalse_, 1, (Optr)PBlock24234);
    Array PThreadedCode24220 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_24221, (Optr)&t_push_variable, (Optr)VAR_boundary_0_1, (Optr)&t_send1, (Optr)PSend24222, (Optr)&t_send1, (Optr)PSend24223, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock24224, (Optr)&t_push_closure, (Optr)PBlock24234, (Optr)&t_send1, (Optr)PSend24291, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24217 = new_Method_with(PArray24218, PArray24219, empty_Array, PThreadedCode24220, 3, PSend24223, PSend24291, self);
    
    MethodClosure MC_SMB_decodeMultipartForm_boundary_do_ = new_MethodClosure((Method)PMethod24217, HEADER(WebClient_Core_WebUtils_Class));
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