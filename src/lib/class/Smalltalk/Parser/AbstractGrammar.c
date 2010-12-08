#include <lib/class/Smalltalk/Parser/AbstractGrammar.h>


Optr layout_Smalltalk_Parser_AbstractGrammar_Class_class;
Optr slot_Smalltalk_Parser_AbstractGrammar_parsers;
Optr layout_Smalltalk_Parser_AbstractGrammar;


static void init_SMB_parsers() {
    Symbol SMB_parsers = new_Symbol(L"parsers");
    Array PThreadedCode13621 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_method_return);
    Method PMethod13620 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13621, 1, slot_Smalltalk_Parser_AbstractGrammar_parsers);
    
    MethodClosure MC_SMB_parsers = new_MethodClosure((Method)PMethod13620, Smalltalk_Parser_AbstractGrammar_Class);
    store_method(Smalltalk_Parser_AbstractGrammar_Class, SMB_parsers, MC_SMB_parsers);
}


static void init_SMB_doesNotUnderstand_() {
    Symbol SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray13623 = new_Array_with(1, (Optr)VAR_message_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend13625 = new_Send((Optr)VAR_message_0_0, SMB_selector, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray13627 = new_Array_with(1, (Optr)VAR_selector_1_0);
    String string_13632 = new_String(L"initialize");
    Constant string_13632_Const = new_Constant((Optr)string_13632);
    Symbol SMB__append_ = new_Symbol(L",");
    // selector. 
    Send PSend13634 = new_Send((Optr)VAR_message_0_0, SMB_selector, 0);
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    // capitalized. 
    Send PSend13633 = new_Send((Optr)PSend13634, SMB_capitalized, 0);
    // ,. 
    Send PSend13631 = new_Send((Optr)string_13632_Const, SMB__append_, 1, (Optr)PSend13633);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend13630 = new_Send((Optr)PSend13631, SMB_asSymbol, 0);
    Assign PAssign13629 = new_Assign((Optr)VAR_selector_1_0, (Optr)PSend13630);
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    // respondsTo:. 
    Send PSend13635 = new_Send((Optr)self, SMB_respondsTo_, 1, (Optr)VAR_selector_1_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend13639 = new_Send((Optr)self, SMB_perform_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode13638 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend13639, (Optr)&t_block_return);
    Block PBlock13637 = new_Block_with(empty_Array, empty_Array, PThreadedCode13638, 1, PSend13639);
    Super PSuper13642 = new_Super(SMB_doesNotUnderstand_, 1, (Optr)VAR_message_0_0);
    Array PThreadedCode13641 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_super1, (Optr)PSuper13642, (Optr)&t_block_return);
    Block PBlock13640 = new_Block_with(empty_Array, empty_Array, PThreadedCode13641, 1, PSuper13642);
    // ifTrue:ifFalse:. 
    Send PSend13636 = new_Send((Optr)PSend13635, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock13637, (Optr)PBlock13640);
    Array PThreadedCode13628 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign13629, (Optr)&t_push1, (Optr)string_13632, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send0, (Optr)PSend13634, (Optr)&t_send0, (Optr)PSend13633, (Optr)&t_send1, (Optr)PSend13631, (Optr)&t_send0, (Optr)PSend13630, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend13635, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend13636, (Optr)PBlock13637, (Optr)PBlock13640, (Optr)&t_method_return);
    Block PBlock13626 = new_Block_with(empty_Array, PArray13627, PThreadedCode13628, 2, PAssign13629, PSend13636);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend13643 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)PSend13625, (Optr)PBlock13626);
    Array PThreadedCode13624 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send0, (Optr)PSend13625, (Optr)&t_push_closure, (Optr)PBlock13626, (Optr)&t_send2, (Optr)PSend13643, (Optr)&t_method_return);
    Method PMethod13622 = new_Method_with(PArray13623, empty_Array, empty_Array, PThreadedCode13624, 1, PSend13643);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod13622, Smalltalk_Parser_AbstractGrammar_Class);
    store_method(Smalltalk_Parser_AbstractGrammar_Class, SMB_doesNotUnderstand_, MC_SMB_doesNotUnderstand_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13647 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign13646 = new_Assign((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)PSend13647);
    Array PThreadedCode13645 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13646, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend13647, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13644 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13645, 2, PAssign13646, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod13644, Smalltalk_Parser_AbstractGrammar_Class);
    store_method(Smalltalk_Parser_AbstractGrammar_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_initializeSeparator() {
    Symbol SMB_initializeSeparator = new_Symbol(L"initializeSeparator");
    Symbol SMB_separators = new_Symbol(L"separators");
    // separators. 
    Send PSend13650 = new_Send((Optr)PEGParser_classReference, SMB_separators, 0);
    Array PThreadedCode13649 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend13650, (Optr)&t_method_return);
    Method PMethod13648 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13649, 1, PSend13650);
    
    MethodClosure MC_SMB_initializeSeparator = new_MethodClosure((Method)PMethod13648, Smalltalk_Parser_AbstractGrammar_Class);
    store_method(Smalltalk_Parser_AbstractGrammar_Class, SMB_initializeSeparator, MC_SMB_initializeSeparator);
}


static void init_SMB_match_to_() {
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Variable VAR_parser_0_1 = new_Variable_named(L"parser", 0);
    Array PArray13652 = new_Array_with(2, (Optr)VAR_string_0_0, (Optr)VAR_parser_0_1);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend13654 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_on_separator_ = new_Symbol(L"on:separator:");
    // on:separator:. 
    Send PSend13655 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_separator_, 2, (Optr)VAR_string_0_0, (Optr)PSend13654);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend13656 = new_Send((Optr)VAR_parser_0_1, SMB_match_, 1, (Optr)PSend13655);
    Array PThreadedCode13653 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_parser_0_1, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13654, (Optr)&t_send2, (Optr)PSend13655, (Optr)&t_send1, (Optr)PSend13656, (Optr)&t_method_return);
    Method PMethod13651 = new_Method_with(PArray13652, empty_Array, empty_Array, PThreadedCode13653, 1, PSend13656);
    
    MethodClosure MC_SMB_match_to_ = new_MethodClosure((Method)PMethod13651, Smalltalk_Parser_AbstractGrammar_Class);
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