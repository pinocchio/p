#include <lib/class/PEG/Expression.h>


Optr layout_PEG_Expression_Class_class;


static void init_SMB__or_() {
    Symbol SMB__or_ = new_Symbol(L"|");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18411 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18413 = new_Send((Optr)PEGOrderedChoiceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend18414 = new_Send((Optr)PSend18413, SMB__lt__equals_, 1, (Optr)self);
    // <=. 
    Send PSend18415 = new_Send((Optr)PSend18414, SMB__lt__equals_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18412 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGOrderedChoiceExpression_classReference, (Optr)&t_send0, (Optr)PSend18413, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18414, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18415, (Optr)&t_method_return);
    Method PMethod18410 = new_Method_with(PArray18411, empty_Array, empty_Array, PThreadedCode18412, 1, PSend18415);
    
    MethodClosure MC_SMB__or_ = new_MethodClosure((Method)PMethod18410, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__or_, MC_SMB__or_);
}


static void init_SMB_omit() {
    Symbol SMB_omit = new_Symbol(L"omit");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18418 = new_Send((Optr)PEGOmit_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18417 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOmit_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18418, (Optr)&t_method_return);
    Method PMethod18416 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18417, 1, PSend18418);
    
    MethodClosure MC_SMB_omit = new_MethodClosure((Method)PMethod18416, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_omit, MC_SMB_omit);
}


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18421 = new_Send((Optr)PEGStrongZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18420 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18421, (Optr)&t_method_return);
    Method PMethod18419 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18420, 1, PSend18421);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18419, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB__logicAnd_() {
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18423 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18425 = new_Send((Optr)PEGStrongSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18426 = new_Send((Optr)PSend18425, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18427 = new_Send((Optr)PSend18426, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18424 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGStrongSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18425, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18426, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18427, (Optr)&t_method_return);
    Method PMethod18422 = new_Method_with(PArray18423, empty_Array, empty_Array, PThreadedCode18424, 1, PSend18427);
    
    MethodClosure MC_SMB__logicAnd_ = new_MethodClosure((Method)PMethod18422, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__logicAnd_, MC_SMB__logicAnd_);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18430 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18429 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18430, (Optr)&t_method_return);
    Method PMethod18428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18429, 1, PSend18430);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18428, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18433 = new_Send((Optr)PEGAtEnd_classReference, SMB_instance, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend18434 = new_Send((Optr)self, SMB__and_, 1, (Optr)PSend18433);
    Array PThreadedCode18432 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGAtEnd_classReference, (Optr)&t_send0, (Optr)PSend18433, (Optr)&t_send1, (Optr)PSend18434, (Optr)&t_method_return);
    Method PMethod18431 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18432, 1, PSend18434);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18431, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Array PThreadedCode18436 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18435 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18436, 1, self);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod18435, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18439 = new_Send((Optr)PEGOptionalExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18438 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOptionalExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18439, (Optr)&t_method_return);
    Method PMethod18437 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18438, 1, PSend18439);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod18437, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_match_() {
    Symbol SMB_match_ = new_Symbol(L"match:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18441 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18444 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend18446 = new_Send((Optr)self, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    // parsingFailed. 
    Send PSend18450 = new_Send((Optr)VAR_input_0_0, SMB_parsingFailed, 0);
    Array PThreadedCode18449 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18450, (Optr)&t_block_return);
    Block PBlock18448 = new_Block_with(empty_Array, empty_Array, PThreadedCode18449, 1, PSend18450);
    // ifFalse:. 
    Send PSend18447 = new_Send((Optr)PSend18446, SMB_ifFalse_, 1, (Optr)PBlock18448);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18451 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend18452 = new_Send((Optr)PSend18451, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18456 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18455 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18456, (Optr)&t_block_return);
    Block PBlock18454 = new_Block_with(empty_Array, empty_Array, PThreadedCode18455, 1, PSend18456);
    // ifTrue:. 
    Send PSend18453 = new_Send((Optr)PSend18452, SMB_ifTrue_, 1, (Optr)PBlock18454);
    // stack. 
    Send PSend18457 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_pop = new_Symbol(L"pop");
    // pop. 
    Send PSend18458 = new_Send((Optr)PSend18457, SMB_pop, 0);
    Array PThreadedCode18445 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18446, (Optr)&t_send_ifFalse_, (Optr)PSend18447, (Optr)PBlock18448, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18451, (Optr)&t_send0, (Optr)PSend18452, (Optr)&t_send_ifTrue_, (Optr)PSend18453, (Optr)PBlock18454, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18457, (Optr)&t_send0, (Optr)PSend18458, (Optr)&t_method_return);
    Block PBlock18443 = new_Block_with(PArray18444, empty_Array, PThreadedCode18445, 3, PSend18447, PSend18453, PSend18458);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18459 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18443);
    Array PThreadedCode18442 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18443, (Optr)&t_send1, (Optr)PSend18459, (Optr)&t_method_return);
    Method PMethod18440 = new_Method_with(PArray18441, empty_Array, empty_Array, PThreadedCode18442, 1, PSend18459);
    
    MethodClosure MC_SMB_match_ = new_MethodClosure((Method)PMethod18440, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_match_, MC_SMB_match_);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Array PThreadedCode18461 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18460 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18461, 1, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod18460, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_withoutOmit() {
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    Array PThreadedCode18463 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18462 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18463, 1, self);
    
    MethodClosure MC_SMB_withoutOmit = new_MethodClosure((Method)PMethod18462, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_withoutOmit, MC_SMB_withoutOmit);
}


static void init_SMB_plus() {
    Symbol SMB_plus = new_Symbol(L"plus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18466 = new_Send((Optr)PEGOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18465 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18466, (Optr)&t_method_return);
    Method PMethod18464 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18465, 1, PSend18466);
    
    MethodClosure MC_SMB_plus = new_MethodClosure((Method)PMethod18464, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_plus, MC_SMB_plus);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18468 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18470 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend18471 = new_Send((Optr)self, SMB_match_, 1, (Optr)PSend18470);
    Array PThreadedCode18469 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18470, (Optr)&t_send1, (Optr)PSend18471, (Optr)&t_method_return);
    Method PMethod18467 = new_Method_with(PArray18468, empty_Array, empty_Array, PThreadedCode18469, 1, PSend18471);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod18467, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB__and_() {
    Symbol SMB__and_ = new_Symbol(L"&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18473 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18475 = new_Send((Optr)PEGSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18476 = new_Send((Optr)PSend18475, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18477 = new_Send((Optr)PSend18476, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18474 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18475, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18476, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18477, (Optr)&t_method_return);
    Method PMethod18472 = new_Method_with(PArray18473, empty_Array, empty_Array, PThreadedCode18474, 1, PSend18477);
    
    MethodClosure MC_SMB__and_ = new_MethodClosure((Method)PMethod18472, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__and_, MC_SMB__and_);
}


static void init_SMB_times() {
    Symbol SMB_times = new_Symbol(L"times");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18480 = new_Send((Optr)PEGZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18479 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18480, (Optr)&t_method_return);
    Method PMethod18478 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18479, 1, PSend18480);
    
    MethodClosure MC_SMB_times = new_MethodClosure((Method)PMethod18478, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_times, MC_SMB_times);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_argument_0_0 = new_Variable_named(L"argument", 0);
    Array PArray18482 = new_Array_with(1, (Optr)VAR_argument_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18484 = new_Super(SMB_basicNew, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend18485 = new_Send((Optr)PSuper18484, SMB_initialize_, 1, (Optr)VAR_argument_0_0);
    Array PThreadedCode18483 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18484, (Optr)&t_push_variable, (Optr)VAR_argument_0_0, (Optr)&t_send1, (Optr)PSend18485, (Optr)&t_method_return);
    Method PMethod18481 = new_Method_with(PArray18482, empty_Array, empty_Array, PThreadedCode18483, 1, PSend18485);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod18481, HEADER(PEG_Expression_Class));
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
    init_SMB_asParser();
    init_SMB_optional();
    init_SMB_match_();
    init_SMB_asChildParser();
    init_SMB_withoutOmit();
    init_SMB_plus();
    init_SMB_parse_();
    init_SMB__and_();
    init_SMB_times();
    init_class_SMB_on_();
    
}