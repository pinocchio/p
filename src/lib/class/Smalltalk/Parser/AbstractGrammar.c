#include <lib/class/Smalltalk/Parser/AbstractGrammar.h>


Optr layout_Smalltalk_Parser_AbstractGrammar_Class_class;
Optr slot_Smalltalk_Parser_AbstractGrammar_parsers;
Optr layout_Smalltalk_Parser_AbstractGrammar;


static void init_SMB_parsers() {
    Symbol SMB_parsers = new_Symbol(L"parsers");
    Array PThreadedCode13300 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_method_return);
    Method PMethod13299 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13300, 1, slot_Smalltalk_Parser_AbstractGrammar_parsers);
    
    MethodClosure MC_SMB_parsers = new_MethodClosure((Method)PMethod13299, Smalltalk_Parser_AbstractGrammar_Class);
    store_method(Smalltalk_Parser_AbstractGrammar_Class, SMB_parsers, MC_SMB_parsers);
}


static void init_SMB_doesNotUnderstand_() {
    Symbol SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray13302 = new_Array_with(1, (Optr)VAR_message_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend13304 = new_Send((Optr)VAR_message_0_0, SMB_selector, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray13306 = new_Array_with(1, (Optr)VAR_selector_1_0);
    String string_13311 = new_String(L"initialize");
    Constant string_13311_Const = new_Constant((Optr)string_13311);
    Symbol SMB__append_ = new_Symbol(L",");
    // selector. 
    Send PSend13313 = new_Send((Optr)VAR_message_0_0, SMB_selector, 0);
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    // capitalized. 
    Send PSend13312 = new_Send((Optr)PSend13313, SMB_capitalized, 0);
    // ,. 
    Send PSend13310 = new_Send((Optr)string_13311_Const, SMB__append_, 1, (Optr)PSend13312);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend13309 = new_Send((Optr)PSend13310, SMB_asSymbol, 0);
    Assign PAssign13308 = new_Assign((Optr)VAR_selector_1_0, (Optr)PSend13309);
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    // respondsTo:. 
    Send PSend13314 = new_Send((Optr)self, SMB_respondsTo_, 1, (Optr)VAR_selector_1_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend13318 = new_Send((Optr)self, SMB_perform_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode13317 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend13318, (Optr)&t_block_return);
    Block PBlock13316 = new_Block_with(empty_Array, empty_Array, PThreadedCode13317, 1, PSend13318);
    Super PSuper13321 = new_Super(SMB_doesNotUnderstand_, 1, (Optr)VAR_message_0_0);
    Array PThreadedCode13320 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_super1, (Optr)PSuper13321, (Optr)&t_block_return);
    Block PBlock13319 = new_Block_with(empty_Array, empty_Array, PThreadedCode13320, 1, PSuper13321);
    // ifTrue:ifFalse:. 
    Send PSend13315 = new_Send((Optr)PSend13314, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock13316, (Optr)PBlock13319);
    Array PThreadedCode13307 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign13308, (Optr)&t_push1, (Optr)string_13311, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send0, (Optr)PSend13313, (Optr)&t_send0, (Optr)PSend13312, (Optr)&t_send1, (Optr)PSend13310, (Optr)&t_send0, (Optr)PSend13309, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend13314, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend13315, (Optr)PBlock13316, (Optr)PBlock13319, (Optr)&t_method_return);
    Block PBlock13305 = new_Block_with(empty_Array, PArray13306, PThreadedCode13307, 2, PAssign13308, PSend13315);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend13322 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)PSend13304, (Optr)PBlock13305);
    Array PThreadedCode13303 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send0, (Optr)PSend13304, (Optr)&t_push_closure, (Optr)PBlock13305, (Optr)&t_send2, (Optr)PSend13322, (Optr)&t_method_return);
    Method PMethod13301 = new_Method_with(PArray13302, empty_Array, empty_Array, PThreadedCode13303, 1, PSend13322);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod13301, Smalltalk_Parser_AbstractGrammar_Class);
    store_method(Smalltalk_Parser_AbstractGrammar_Class, SMB_doesNotUnderstand_, MC_SMB_doesNotUnderstand_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13326 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign13325 = new_Assign((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)PSend13326);
    Array PThreadedCode13324 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13325, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend13326, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13323 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13324, 2, PAssign13325, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13323, Smalltalk_Parser_AbstractGrammar_Class);
    store_method(Smalltalk_Parser_AbstractGrammar_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_initializeSeparator() {
    Symbol SMB_initializeSeparator = new_Symbol(L"initializeSeparator");
    Symbol SMB_separators = new_Symbol(L"separators");
    // separators. 
    Send PSend13329 = new_Send((Optr)PEGParser_classReference, SMB_separators, 0);
    Array PThreadedCode13328 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend13329, (Optr)&t_method_return);
    Method PMethod13327 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13328, 1, PSend13329);
    
    MethodClosure MC_SMB_initializeSeparator = new_MethodClosure((Method)PMethod13327, Smalltalk_Parser_AbstractGrammar_Class);
    store_method(Smalltalk_Parser_AbstractGrammar_Class, SMB_initializeSeparator, MC_SMB_initializeSeparator);
}


static void init_SMB_match_to_() {
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Variable VAR_parser_0_1 = new_Variable_named(L"parser", 0);
    Array PArray13331 = new_Array_with(2, (Optr)VAR_string_0_0, (Optr)VAR_parser_0_1);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend13333 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    // on:separator:. 
    Send PSend13334 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_separator_, 2, (Optr)VAR_string_0_0, (Optr)PSend13333);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend13335 = new_Send((Optr)VAR_parser_0_1, SMB_match_, 1, (Optr)PSend13334);
    Array PThreadedCode13332 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_parser_0_1, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13333, (Optr)&t_send2, (Optr)PSend13334, (Optr)&t_send1, (Optr)PSend13335, (Optr)&t_method_return);
    Method PMethod13330 = new_Method_with(PArray13331, empty_Array, empty_Array, PThreadedCode13332, 1, PSend13335);
    
    MethodClosure MC_SMB_match_to_ = new_MethodClosure((Method)PMethod13330, Smalltalk_Parser_AbstractGrammar_Class);
    store_method(Smalltalk_Parser_AbstractGrammar_Class, SMB_match_to_, MC_SMB_match_to_);
}

void init_Smalltalk_Parser_PAbstractGrammar_layout() {
    layout_Smalltalk_Parser_AbstractGrammar_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_Parser_AbstractGrammar_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Parser_AbstractGrammar_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Parser_AbstractGrammar_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Parser_AbstractGrammar_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Parser_AbstractGrammar_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AbstractGrammar = new_Symbol(L"AbstractGrammar");
    slot_Smalltalk_Parser_AbstractGrammar_parsers = (Optr)new_Slot(0, L"parsers");
    layout_Smalltalk_Parser_AbstractGrammar = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_Parser_AbstractGrammar)->values[0] = slot_Smalltalk_Parser_AbstractGrammar_parsers; // parsers 
    Smalltalk_Parser_AbstractGrammar_Class = (Class)new_Class(Object_Class, layout_Smalltalk_Parser_AbstractGrammar_Class_class);
    Smalltalk_Parser_AbstractGrammar_Class->layout = layout_Smalltalk_Parser_AbstractGrammar;
    Smalltalk_Parser_AbstractGrammar_Class->name = SMB_AbstractGrammar;
    
}

void init_Smalltalk_Parser_PAbstractGrammar_methods() {
    init_SMB_parsers();
    init_SMB_doesNotUnderstand_();
    init_SMB_initialize();
    init_SMB_initializeSeparator();
    init_SMB_match_to_();
    
}