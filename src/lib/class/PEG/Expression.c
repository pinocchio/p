#include <lib/class/PEG/Expression.h>


Optr layout_PEG_Expression_Class_class;


static void init_SMB__or_() {
    Symbol SMB__or_ = new_Symbol(L"|");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18441 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18443 = new_Send((Optr)PEGOrderedChoiceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend18444 = new_Send((Optr)PSend18443, SMB__lt__equals_, 1, (Optr)self);
    // <=. 
    Send PSend18445 = new_Send((Optr)PSend18444, SMB__lt__equals_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18442 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGOrderedChoiceExpression_classReference, (Optr)&t_send0, (Optr)PSend18443, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18444, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18445, (Optr)&t_method_return);
    Method PMethod18440 = new_Method_with(PArray18441, empty_Array, empty_Array, PThreadedCode18442, 1, PSend18445);
    
    MethodClosure MC_SMB__or_ = new_MethodClosure((Method)PMethod18440, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__or_, MC_SMB__or_);
}


static void init_SMB_omit() {
    Symbol SMB_omit = new_Symbol(L"omit");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18448 = new_Send((Optr)PEGOmit_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18447 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOmit_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18448, (Optr)&t_method_return);
    Method PMethod18446 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18447, 1, PSend18448);
    
    MethodClosure MC_SMB_omit = new_MethodClosure((Method)PMethod18446, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_omit, MC_SMB_omit);
}


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18451 = new_Send((Optr)PEGStrongZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18450 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18451, (Optr)&t_method_return);
    Method PMethod18449 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18450, 1, PSend18451);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18449, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB__logicAnd_() {
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18453 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18455 = new_Send((Optr)PEGStrongSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18456 = new_Send((Optr)PSend18455, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18457 = new_Send((Optr)PSend18456, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18454 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGStrongSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18455, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18456, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18457, (Optr)&t_method_return);
    Method PMethod18452 = new_Method_with(PArray18453, empty_Array, empty_Array, PThreadedCode18454, 1, PSend18457);
    
    MethodClosure MC_SMB__logicAnd_ = new_MethodClosure((Method)PMethod18452, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__logicAnd_, MC_SMB__logicAnd_);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18460 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18459 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18460, (Optr)&t_method_return);
    Method PMethod18458 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18459, 1, PSend18460);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18458, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18463 = new_Send((Optr)PEGAtEnd_classReference, SMB_instance, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend18464 = new_Send((Optr)self, SMB__and_, 1, (Optr)PSend18463);
    Array PThreadedCode18462 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGAtEnd_classReference, (Optr)&t_send0, (Optr)PSend18463, (Optr)&t_send1, (Optr)PSend18464, (Optr)&t_method_return);
    Method PMethod18461 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18462, 1, PSend18464);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18461, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18467 = new_Send((Optr)PEGOptionalExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18466 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOptionalExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18467, (Optr)&t_method_return);
    Method PMethod18465 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18466, 1, PSend18467);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod18465, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_match_() {
    Symbol SMB_match_ = new_Symbol(L"match:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18469 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18472 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend18474 = new_Send((Optr)self, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    // parsingFailed. 
    Send PSend18478 = new_Send((Optr)VAR_input_0_0, SMB_parsingFailed, 0);
    Array PThreadedCode18477 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18478, (Optr)&t_block_return);
    Block PBlock18476 = new_Block_with(empty_Array, empty_Array, PThreadedCode18477, 1, PSend18478);
    // ifFalse:. 
    Send PSend18475 = new_Send((Optr)PSend18474, SMB_ifFalse_, 1, (Optr)PBlock18476);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18479 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend18480 = new_Send((Optr)PSend18479, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18484 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18483 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18484, (Optr)&t_block_return);
    Block PBlock18482 = new_Block_with(empty_Array, empty_Array, PThreadedCode18483, 1, PSend18484);
    // ifTrue:. 
    Send PSend18481 = new_Send((Optr)PSend18480, SMB_ifTrue_, 1, (Optr)PBlock18482);
    // stack. 
    Send PSend18485 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_pop = new_Symbol(L"pop");
    // pop. 
    Send PSend18486 = new_Send((Optr)PSend18485, SMB_pop, 0);
    Array PThreadedCode18473 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18474, (Optr)&t_send_ifFalse_, (Optr)PSend18475, (Optr)PBlock18476, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18479, (Optr)&t_send0, (Optr)PSend18480, (Optr)&t_send_ifTrue_, (Optr)PSend18481, (Optr)PBlock18482, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18485, (Optr)&t_send0, (Optr)PSend18486, (Optr)&t_method_return);
    Block PBlock18471 = new_Block_with(PArray18472, empty_Array, PThreadedCode18473, 3, PSend18475, PSend18481, PSend18486);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18487 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18471);
    Array PThreadedCode18470 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18471, (Optr)&t_send1, (Optr)PSend18487, (Optr)&t_method_return);
    Method PMethod18468 = new_Method_with(PArray18469, empty_Array, empty_Array, PThreadedCode18470, 1, PSend18487);
    
    MethodClosure MC_SMB_match_ = new_MethodClosure((Method)PMethod18468, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_match_, MC_SMB_match_);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Array PThreadedCode18489 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18488 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18489, 1, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod18488, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_withoutOmit() {
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    Array PThreadedCode18491 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18490 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18491, 1, self);
    
    MethodClosure MC_SMB_withoutOmit = new_MethodClosure((Method)PMethod18490, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_withoutOmit, MC_SMB_withoutOmit);
}


static void init_SMB_plus() {
    Symbol SMB_plus = new_Symbol(L"plus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18494 = new_Send((Optr)PEGOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18493 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18494, (Optr)&t_method_return);
    Method PMethod18492 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18493, 1, PSend18494);
    
    MethodClosure MC_SMB_plus = new_MethodClosure((Method)PMethod18492, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_plus, MC_SMB_plus);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18496 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18498 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend18499 = new_Send((Optr)self, SMB_match_, 1, (Optr)PSend18498);
    Array PThreadedCode18497 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18498, (Optr)&t_send1, (Optr)PSend18499, (Optr)&t_method_return);
    Method PMethod18495 = new_Method_with(PArray18496, empty_Array, empty_Array, PThreadedCode18497, 1, PSend18499);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod18495, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB__and_() {
    Symbol SMB__and_ = new_Symbol(L"&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18501 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18503 = new_Send((Optr)PEGSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18504 = new_Send((Optr)PSend18503, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18505 = new_Send((Optr)PSend18504, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18502 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18503, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18504, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18505, (Optr)&t_method_return);
    Method PMethod18500 = new_Method_with(PArray18501, empty_Array, empty_Array, PThreadedCode18502, 1, PSend18505);
    
    MethodClosure MC_SMB__and_ = new_MethodClosure((Method)PMethod18500, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__and_, MC_SMB__and_);
}


static void init_SMB_times() {
    Symbol SMB_times = new_Symbol(L"times");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18508 = new_Send((Optr)PEGZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18507 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18508, (Optr)&t_method_return);
    Method PMethod18506 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18507, 1, PSend18508);
    
    MethodClosure MC_SMB_times = new_MethodClosure((Method)PMethod18506, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_times, MC_SMB_times);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Array PThreadedCode18510 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18509 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18510, 1, self);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod18509, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_argument_0_0 = new_Variable_named(L"argument", 0);
    Array PArray18512 = new_Array_with(1, (Optr)VAR_argument_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18514 = new_Super(SMB_basicNew, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend18515 = new_Send((Optr)PSuper18514, SMB_initialize_, 1, (Optr)VAR_argument_0_0);
    Array PThreadedCode18513 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18514, (Optr)&t_push_variable, (Optr)VAR_argument_0_0, (Optr)&t_send1, (Optr)PSend18515, (Optr)&t_method_return);
    Method PMethod18511 = new_Method_with(PArray18512, empty_Array, empty_Array, PThreadedCode18513, 1, PSend18515);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod18511, HEADER(PEG_Expression_Class));
    store_method(HEADER(PEG_Expression_Class), SMB_on_, MC_SMB_on_);
}

void init_PEG_PEGExpression_layout() {
    layout_PEG_Expression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_Expression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_Expression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_Expression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_Expression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_Expression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Expression = new_Symbol(L"Expression");
    PEG_Expression_Class = (Class)new_Class(Object_Class, layout_PEG_Expression_Class_class);
    PEG_Expression_Class->layout = empty_object_layout;
    PEG_Expression_Class->name = SMB_Expression;
    
}

void init_PEG_PEGExpression_methods() {
    init_SMB__or_();
    init_SMB_omit();
    init_SMB_strongTimes();
    init_SMB__logicAnd_();
    init_SMB_strongPlus();
    init_SMB_end();
    init_SMB_optional();
    init_SMB_match_();
    init_SMB_asChildParser();
    init_SMB_withoutOmit();
    init_SMB_plus();
    init_SMB_parse_();
    init_SMB__and_();
    init_SMB_times();
    init_SMB_asParser();
    init_class_SMB_on_();
    
}